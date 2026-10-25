// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140585950 FUN_140585950 body=347 status=ok
// SIG undefined FUN_140585950(void)

void FUN_140585950(longlong param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14039bfee();
  lVar2 = *(longlong *)(param_1 + 0x430);
  if (lVar2 != 0) {
    if (DAT_14cae9568 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1417de738;
      local_30 = &LAB_145893408;
      local_38 = &LAB_1458cbbd2;
      local_48 = &LAB_147ba21f1;
      local_50 = &LAB_1463e9233;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x1000000c;
      local_70 = 8;
      local_78 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      lVar2 = *(longlong *)(param_1 + 0x430);
      if (lVar2 == 0) goto LAB_1405859dc;
    }
    if ((((DAT_14cae9568 != 0) && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
        (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
        DAT_14cae9568 + 0x30)) {
      *param_2 = (int)((double)*param_2 * *(double *)(lVar2 + 0x90));
      *param_3 = (int)((double)*param_3 * *(double *)(lVar2 + 0x98));
    }
  }
LAB_1405859dc:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140585aac FUN_140585aac body=526 status=ok
// SIG undefined FUN_140585aac(void)

void FUN_140585aac(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint *puVar4;
  
  if (*(int *)(param_1 + 0x144) != 0) {
    puVar4 = (uint *)(param_1 + 0x140);
    uVar1 = *puVar4;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar3 != 0) &&
         ((*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x144) &&
          ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))) {
        plVar2 = (longlong *)FUN_14479d2ce(puVar4);
        (**(code **)(*plVar2 + 0x420))(plVar2,0);
        puVar4[0] = 0;
        puVar4[1] = 0;
      }
    }
  }
  if (*(int *)(param_1 + 0x14c) != 0) {
    puVar4 = (uint *)(param_1 + 0x148);
    uVar1 = *puVar4;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar3 != 0) &&
         ((*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x14c) &&
          ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))) {
        plVar2 = (longlong *)FUN_14479d2ce(puVar4);
        (**(code **)(*plVar2 + 0x420))(plVar2,0);
        puVar4[0] = 0;
        puVar4[1] = 0;
      }
    }
  }
  if (*(int *)(param_1 + 0x154) != 0) {
    puVar4 = (uint *)(param_1 + 0x150);
    uVar1 = *puVar4;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar3 != 0) &&
         ((*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x154) &&
          ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))) {
        plVar2 = (longlong *)FUN_14479d2ce(puVar4);
        (**(code **)(*plVar2 + 0x420))(plVar2,0);
        puVar4[0] = 0;
        puVar4[1] = 0;
      }
    }
  }
  if (*(int *)(param_1 + 0x15c) != 0) {
    puVar4 = (uint *)(param_1 + 0x158);
    uVar1 = *puVar4;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar3 != 0) &&
         ((*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x15c) &&
          ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))) {
        plVar2 = (longlong *)FUN_14479d2ce(puVar4);
        (**(code **)(*plVar2 + 0x420))(plVar2,0);
        puVar4[0] = 0;
        puVar4[1] = 0;
      }
    }
  }
  if (*(int *)(param_1 + 0x164) != 0) {
    puVar4 = (uint *)(param_1 + 0x160);
    uVar1 = *puVar4;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar3 != 0) &&
         ((*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x164) &&
          ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))) {
        plVar2 = (longlong *)FUN_14479d2ce(puVar4);
        (**(code **)(*plVar2 + 0x420))(plVar2,0);
        puVar4[0] = 0;
        puVar4[1] = 0;
      }
    }
  }
  return;
}



// FUNCTION 140585cba FUN_140585cba body=275 status=ok
// SIG undefined FUN_140585cba(void)

uint * FUN_140585cba(uint *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  param_1[0] = 0;
  param_1[1] = 0;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(param_2 + 0xc);
    *param_1 = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar3 = *(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar6 + 0x10);
      bVar7 = uVar3 == 0;
      if (bVar7) {
        *(uint *)(lVar6 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar3 = uVar5;
      }
    }
  }
  param_1[1] = uVar3;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d) = 0;
  lVar6 = *(longlong *)(param_2 + 0x1c8);
  if (lVar6 == 0) {
    puVar4 = &DAT_14c8464e0;
    uVar8 = (undefined4)DAT_14c8464f0;
    uVar9 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    uVar8 = (undefined4)*(undefined8 *)(lVar6 + 0x270);
    uVar9 = (undefined4)((ulonglong)*(undefined8 *)(lVar6 + 0x270) >> 0x20);
    puVar4 = (undefined8 *)(lVar6 + 0x260);
  }
  uVar2 = puVar4[1];
  *(undefined8 *)(param_1 + 6) = *puVar4;
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(ulonglong *)(param_1 + 10) = CONCAT44(uVar9,uVar8);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 6);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 10);
  return param_1;
}



// FUNCTION 140585dce FUN_140585dce body=272 status=ok
// SIG undefined FUN_140585dce(void)

void FUN_140585dce(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x60;
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
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140585ede FUN_140585ede body=3876 status=ok
// SIG undefined FUN_140585ede(void)

void FUN_140585ede(longlong param_1,longlong *param_2,undefined8 param_3)

{
  double dVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  double *pdVar13;
  int iVar14;
  undefined8 *puVar15;
  code **ppcVar16;
  int iVar17;
  double dVar18;
  undefined1 auStack_218 [32];
  longlong *local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined2 *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  code **local_1c0;
  undefined1 *local_1b8;
  code *local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_148;
  undefined8 local_140;
  uint local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  longlong local_120;
  undefined8 local_118;
  longlong local_110;
  longlong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  code *local_e8 [12];
  undefined8 local_88;
  undefined2 local_80;
  undefined8 local_7c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if (param_2 == (longlong *)0x0) goto LAB_14058625f;
  if (DAT_14cba8288 == 0) {
    local_1c0 = local_e8;
    local_e8[0] = FUN_141864c34;
    local_1b0 = FUN_14081d0ea;
    local_1b8 = &LAB_1464cee30;
    local_1c8 = &LAB_148bfac22;
    local_1d0 = &LAB_140f21842;
    local_1d8 = &DAT_149e063b2;
    local_1e0 = 0;
    local_1e8 = 0x10000004;
    local_1f0 = CONCAT44(local_1f0._4_4_,0x10);
    local_1f8 = (longlong *)CONCAT44(local_1f8._4_4_,0x9cd0);
    FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
  }
  if ((((((*(int *)(param_2[2] + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) !=
          DAT_14cba8288 + 0x30)) || (lVar11 = param_2[0x7ee], lVar11 == 0)) ||
       ((*(char *)(lVar11 + 0xd78) != '\0' ||
        (plVar5 = (longlong *)FUN_14494e0ba(param_3), plVar5 == (longlong *)0x0)))) ||
      ((*(byte *)(plVar5 + 0x84) & 2) == 0)) ||
     ((cVar4 = (**(code **)(*plVar5 + 0x6c8))(plVar5), cVar4 == '\0' ||
      (lVar6 = FUN_1447210f0(param_2), lVar6 == 0)))) goto LAB_14058625f;
  dVar1 = *(double *)(lVar6 + 0x6e0);
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    lVar8 = *(longlong *)(lVar11 + 0xfb0);
    uVar2 = (uint)((ulonglong)lVar8 >> 0x10);
    uVar12 = (uint)lVar8 & 0xffff;
    lVar9 = param_1 + 0x68;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x70);
    }
    iVar14 = *(int *)(lVar9 + (ulonglong)
                              (*(int *)(param_1 + 0x78) - 1U &
                              (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar12) +
                              (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar12 >> 4)) * 4);
    if (iVar14 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x30);
      iVar17 = iVar14;
      do {
        if (*(longlong *)(lVar9 + (longlong)iVar17 * 0x14) == lVar8) goto LAB_140586037;
        iVar17 = *(int *)(lVar9 + (longlong)iVar17 * 0x14 + 0xc);
      } while (iVar17 != -1);
    }
  }
  dVar18 = dVar1 - *(double *)(param_1 + 0x1f8);
  if ((dVar18 < *(double *)(param_1 + 0x1f0) || dVar18 == *(double *)(param_1 + 0x1f0)) &&
     (0.0 <= dVar18)) goto LAB_14058625f;
  lVar8 = *(longlong *)(lVar11 + 0xd88);
  if (lVar8 == 0) {
    uVar7 = FUN_140067708();
    lVar8 = FUN_14477b664(uVar7);
    *(longlong *)(lVar11 + 0xd88) = lVar8;
  }
  lVar9 = *(longlong *)(lVar11 + 0xd90);
  if (((lVar9 == 0) && (lVar9 = 0, lVar8 != 0)) && (*(longlong *)(lVar11 + 0xd80) != 0)) {
    plVar5 = *(longlong **)(lVar8 + 0xb8);
    if ((plVar5 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar4 == '\0')) {
      lVar9 = 0;
    }
    else {
      uVar7 = (**(code **)(*plVar5 + 0x110))(plVar5);
      lVar9 = FUN_144aff482(uVar7,(longlong *)(lVar11 + 0xd80));
    }
    *(longlong *)(lVar11 + 0xd90) = lVar9;
  }
  puVar15 = &DAT_14c846480;
  if (param_2[0x39] != 0) {
    puVar15 = (undefined8 *)(param_2[0x39] + 0x240);
  }
  ppcVar16 = local_e8;
  for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
    *ppcVar16 = (code *)*puVar15;
    puVar15 = puVar15 + 1;
    ppcVar16 = ppcVar16 + 1;
  }
  local_88 = 0x3f800000;
  local_80 = 0;
  local_7c = 0;
  if (lVar9 == 0) {
    lVar11 = *(longlong *)(param_1 + 0x1c0);
    uVar7 = FUN_14477b664(*(undefined8 *)(param_1 + 0x1c8));
    lVar8 = FUN_14477b664(uVar7);
    lVar9 = *(longlong *)(param_1 + 0x1d0);
  }
  else {
    uVar7 = FUN_140067708();
    FUN_14477b664(uVar7);
    lVar10 = FUN_140067708();
    uVar7 = FUN_140067708();
    FUN_1402d1bfa(&local_130,uVar7,lVar9);
    lVar11 = CONCAT44(uStack_12c,local_130);
    lVar8 = FUN_140067708();
    if (lVar10 == 0) {
LAB_1405863a5:
      lVar8 = lVar10;
    }
    else if (lVar8 == 0) {
      lVar8 = 0;
    }
    else if ((*(int *)(lVar8 + 0x38) <= *(int *)(lVar10 + 0x38)) &&
            (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
             lVar8 + 0x30)) goto LAB_1405863a5;
    uVar7 = FUN_14477b664(lVar8);
    lVar8 = FUN_14477b664(uVar7);
    if (lVar8 == 0) {
      lVar9 = 0;
    }
    if (lVar11 == 0) {
      lVar9 = 0;
    }
  }
  local_130 = local_130 & 0xffffff00;
  uStack_12c = 0;
  uStack_128 = 0;
  local_120 = lVar11;
  uVar7 = FUN_14477b664(lVar8);
  local_118 = FUN_14477b664(uVar7);
  local_108 = 0;
  local_1f0 = 0;
  local_1f8 = param_2;
  local_110 = lVar9;
  FUN_140cb5d65(&local_1a8,lVar6,&local_130,local_e8);
  local_1a8 = 0;
  local_1a0 = 0xffffffffffffffff;
  if ((local_108 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(local_108 + 0x50));
  }
  *(double *)(param_1 + 0xf8) = dVar1;
  *(double *)(param_1 + 0x138) = dVar1;
  pdVar13 = (double *)(param_1 + 0x1f8);
  goto LAB_14058625b;
  while (iVar14 = *(int *)((longlong)plVar5 + 0xc), iVar14 != -1) {
LAB_140586037:
    plVar5 = (longlong *)(lVar9 + (longlong)iVar14 * 0x14);
    if (*plVar5 == lVar8) {
      if (plVar5 != (longlong *)0x0) {
        iVar14 = (int)plVar5[1];
        goto LAB_140586057;
      }
      break;
    }
  }
  iVar14 = 0;
LAB_140586057:
  lVar8 = *(longlong *)(lVar11 + 0xd88);
  if (lVar8 == 0) {
    uVar7 = FUN_140067708();
    lVar8 = FUN_14477b664(uVar7);
    *(longlong *)(lVar11 + 0xd88) = lVar8;
  }
  lVar9 = *(longlong *)(lVar11 + 0xd90);
  if (lVar9 == 0) {
    if ((*(longlong *)(lVar11 + 0xd80) == 0) || (lVar8 == 0)) {
      lVar9 = 0;
    }
    else {
      plVar5 = *(longlong **)(lVar8 + 0xb8);
      if ((plVar5 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar4 == '\0')) {
        lVar9 = 0;
      }
      else {
        uVar7 = (**(code **)(*plVar5 + 0x110))(plVar5);
        lVar9 = FUN_144aff482(uVar7,(longlong *)(lVar11 + 0xd80));
      }
      *(longlong *)(lVar11 + 0xd90) = lVar9;
    }
  }
  pcVar3 = *(code **)(*param_2 + 0x5e8);
  if (pcVar3 == FUN_140972dde) {
    if (param_2[0x76] != 0) goto LAB_1405864af;
    pcVar3 = *(code **)(*param_2 + 0x5f8);
    if (pcVar3 == FUN_144784df4) {
      if (*(code **)(param_2[0x784] + 0x18) == (code *)&LAB_144904684) {
        if ((((*(int *)((longlong)param_2 + 0x75b4) != 0) &&
             (uVar2 = *(uint *)(param_2 + 0xeb6), -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc))
           && (((plVar5 = (longlong *)
                          ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                plVar5 != (longlong *)0x0 &&
                ((int)plVar5[2] == *(int *)((longlong)param_2 + 0x75b4))) &&
               ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))) {
          if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
            lVar11 = *plVar5;
          }
          else {
            lVar11 = 0;
          }
          lVar11 = lVar11 + 0x110;
          goto LAB_140586489;
        }
      }
      else {
        lVar11 = (**(code **)(param_2[0x784] + 0x18))(param_2 + 0x784);
LAB_140586489:
        if (lVar11 != 0) {
          lVar11 = *(longlong *)(lVar11 + 0x20);
          goto LAB_140586496;
        }
      }
    }
    else {
      lVar11 = (*pcVar3)(param_2);
LAB_140586496:
      if (lVar11 != 0) {
        lVar11 = *(longlong *)(lVar11 + 0x3b0);
        goto LAB_1405864a6;
      }
    }
  }
  else {
    lVar11 = (*pcVar3)(param_2);
LAB_1405864a6:
    if (lVar11 != 0) {
LAB_1405864af:
      dVar18 = dVar1 - *(double *)(param_1 + 0x1b8);
      if (dVar18 < *(double *)(param_1 + 0x1b0) || dVar18 == *(double *)(param_1 + 0x1b0))
      goto LAB_14058625f;
      puVar15 = &DAT_14c846480;
      if (param_2[0x39] != 0) {
        puVar15 = (undefined8 *)(param_2[0x39] + 0x240);
      }
      ppcVar16 = local_e8;
      for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
        *ppcVar16 = (code *)*puVar15;
        puVar15 = puVar15 + 1;
        ppcVar16 = ppcVar16 + 1;
      }
      local_88 = 0x3f800000;
      local_80 = 0;
      local_7c = 0;
      if (lVar9 == 0) {
        lVar11 = *(longlong *)(param_1 + 0x180);
        uVar7 = FUN_14477b664(*(undefined8 *)(param_1 + 0x188));
        lVar8 = FUN_14477b664(uVar7);
        lVar9 = *(longlong *)(param_1 + 400);
      }
      else {
        uVar7 = FUN_140067708();
        FUN_14477b664(uVar7);
        lVar10 = FUN_140067708();
        uVar7 = FUN_140067708();
        FUN_1402d1bfa(&local_130,uVar7,lVar9);
        lVar11 = CONCAT44(uStack_12c,local_130);
        lVar8 = FUN_140067708();
        if (lVar10 == 0) {
LAB_140586577:
          lVar8 = lVar10;
        }
        else if (lVar8 == 0) {
          lVar8 = 0;
        }
        else if ((*(int *)(lVar8 + 0x38) <= *(int *)(lVar10 + 0x38)) &&
                (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
                 == lVar8 + 0x30)) goto LAB_140586577;
        uVar7 = FUN_14477b664(lVar8);
        lVar8 = FUN_14477b664(uVar7);
        if (lVar8 == 0) {
          lVar9 = 0;
        }
        if (lVar11 == 0) {
          lVar9 = 0;
        }
      }
      local_130 = local_130 & 0xffffff00;
      uStack_12c = 0;
      uStack_128 = 0;
      local_120 = lVar11;
      uVar7 = FUN_14477b664(lVar8);
      local_118 = FUN_14477b664(uVar7);
      local_108 = 0;
      local_1f0 = 0;
      local_1f8 = param_2;
      local_110 = lVar9;
      FUN_140cb5d65(&local_100,lVar6,&local_130,local_e8);
      local_100 = 0;
      local_f8 = 0xffffffffffffffff;
      if ((local_108 != 0) && ((DAT_14cb26569 & 1) != 0)) {
        FUN_1400848c0(*(undefined8 *)(local_108 + 0x50));
      }
      *(double *)(param_1 + 0x1b8) = dVar1;
      *(double *)(param_1 + 0xf8) = dVar1;
      pdVar13 = (double *)(param_1 + 0x138);
      goto LAB_14058625b;
    }
  }
  if (iVar14 == 1) {
    dVar18 = dVar1 - *(double *)(param_1 + 0xf8);
    if ((dVar18 < *(double *)(param_1 + 0xf0) || dVar18 == *(double *)(param_1 + 0xf0)) &&
       (0.0 <= dVar18)) goto LAB_14058625f;
    puVar15 = &DAT_14c846480;
    if (param_2[0x39] != 0) {
      puVar15 = (undefined8 *)(param_2[0x39] + 0x240);
    }
    ppcVar16 = local_e8;
    for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
      *ppcVar16 = (code *)*puVar15;
      puVar15 = puVar15 + 1;
      ppcVar16 = ppcVar16 + 1;
    }
    local_88 = 0x3f800000;
    local_80 = 0;
    local_7c = 0;
    if (lVar9 == 0) {
      lVar11 = *(longlong *)(param_1 + 0xc0);
      uVar7 = FUN_14477b664(*(undefined8 *)(param_1 + 200));
      lVar8 = FUN_14477b664(uVar7);
      lVar9 = *(longlong *)(param_1 + 0xd0);
    }
    else {
      uVar7 = FUN_140067708();
      FUN_14477b664(uVar7);
      lVar10 = FUN_140067708();
      uVar7 = FUN_140067708();
      FUN_1402d1bfa(&local_130,uVar7,lVar9);
      lVar11 = CONCAT44(uStack_12c,local_130);
      lVar8 = FUN_140067708();
      if (lVar10 == 0) {
LAB_1405868fd:
        lVar8 = lVar10;
      }
      else if (lVar8 == 0) {
        lVar8 = 0;
      }
      else if ((*(int *)(lVar8 + 0x38) <= *(int *)(lVar10 + 0x38)) &&
              (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
               lVar8 + 0x30)) goto LAB_1405868fd;
      uVar7 = FUN_14477b664(lVar8);
      lVar8 = FUN_14477b664(uVar7);
      if (lVar8 == 0) {
        lVar9 = 0;
      }
      if (lVar11 == 0) {
        lVar9 = 0;
      }
    }
    local_130 = local_130 & 0xffffff00;
    uStack_12c = 0;
    uStack_128 = 0;
    local_120 = lVar11;
    uVar7 = FUN_14477b664(lVar8);
    local_118 = FUN_14477b664(uVar7);
    local_108 = 0;
    local_1f0 = 0;
    local_1f8 = param_2;
    local_110 = lVar9;
    FUN_140cb5d65(&local_160,lVar6,&local_130,local_e8);
    local_160 = 0;
    local_158 = 0xffffffffffffffff;
    if ((local_108 != 0) && ((DAT_14cb26569 & 1) != 0)) {
      FUN_1400848c0(*(undefined8 *)(local_108 + 0x50));
    }
  }
  else {
    if (iVar14 != 2) {
      if (iVar14 != 3) {
        if ((iVar14 != 0) ||
           ((dVar18 = dVar1 - *(double *)(param_1 + 0xb8),
            dVar18 < *(double *)(param_1 + 0xb0) || dVar18 == *(double *)(param_1 + 0xb0) &&
            (0.0 <= dVar18)))) goto LAB_14058625f;
        puVar15 = &DAT_14c846480;
        if (param_2[0x39] != 0) {
          puVar15 = (undefined8 *)(param_2[0x39] + 0x240);
        }
        ppcVar16 = local_e8;
        for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
          *ppcVar16 = (code *)*puVar15;
          puVar15 = puVar15 + 1;
          ppcVar16 = ppcVar16 + 1;
        }
        local_88 = 0x3f800000;
        local_80 = 0;
        local_7c = 0;
        if (lVar9 == 0) {
          lVar11 = *(longlong *)(param_1 + 0x80);
          uVar7 = FUN_14477b664(*(undefined8 *)(param_1 + 0x88));
          lVar8 = FUN_14477b664(uVar7);
          lVar9 = *(longlong *)(param_1 + 0x90);
        }
        else {
          uVar7 = FUN_140067708();
          FUN_14477b664(uVar7);
          lVar10 = FUN_140067708();
          uVar7 = FUN_140067708();
          FUN_1402d1bfa(&local_130,uVar7,lVar9);
          lVar11 = CONCAT44(uStack_12c,local_130);
          lVar8 = FUN_140067708();
          if (lVar10 == 0) {
LAB_140586cc1:
            lVar8 = lVar10;
          }
          else if (lVar8 == 0) {
            lVar8 = 0;
          }
          else if ((*(int *)(lVar8 + 0x38) <= *(int *)(lVar10 + 0x38)) &&
                  (*(longlong *)
                    (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
                   lVar8 + 0x30)) goto LAB_140586cc1;
          uVar7 = FUN_14477b664(lVar8);
          lVar8 = FUN_14477b664(uVar7);
          if (lVar8 == 0) {
            lVar9 = 0;
          }
          if (lVar11 == 0) {
            lVar9 = 0;
          }
        }
        local_130 = local_130 & 0xffffff00;
        uStack_12c = 0;
        uStack_128 = 0;
        local_120 = lVar11;
        uVar7 = FUN_14477b664(lVar8);
        local_118 = FUN_14477b664(uVar7);
        local_108 = 0;
        local_1f0 = 0;
        local_1f8 = param_2;
        local_110 = lVar9;
        FUN_140cb5d65(&local_148,lVar6,&local_130,local_e8);
        local_148 = 0;
        local_140 = 0xffffffffffffffff;
        if ((local_108 != 0) && ((DAT_14cb26569 & 1) != 0)) {
          FUN_1400848c0(*(undefined8 *)(local_108 + 0x50));
        }
        pdVar13 = (double *)(param_1 + 0xb8);
        goto LAB_14058625b;
      }
      dVar18 = dVar1 - *(double *)(param_1 + 0x178);
      if ((dVar18 < *(double *)(param_1 + 0x170) || dVar18 == *(double *)(param_1 + 0x170)) &&
         (0.0 <= dVar18)) goto LAB_14058625f;
      puVar15 = &DAT_14c846480;
      if (param_2[0x39] != 0) {
        puVar15 = (undefined8 *)(param_2[0x39] + 0x240);
      }
      ppcVar16 = local_e8;
      for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
        *ppcVar16 = (code *)*puVar15;
        puVar15 = puVar15 + 1;
        ppcVar16 = ppcVar16 + 1;
      }
      local_88 = 0x3f800000;
      local_80 = 0;
      local_7c = 0;
      if (lVar9 == 0) {
        lVar11 = *(longlong *)(param_1 + 0x140);
        uVar7 = FUN_14477b664(*(undefined8 *)(param_1 + 0x148));
        lVar8 = FUN_14477b664(uVar7);
        lVar9 = *(longlong *)(param_1 + 0x150);
      }
      else {
        uVar7 = FUN_140067708();
        FUN_14477b664(uVar7);
        lVar10 = FUN_140067708();
        uVar7 = FUN_140067708();
        FUN_1402d1bfa(&local_130,uVar7,lVar9);
        lVar11 = CONCAT44(uStack_12c,local_130);
        lVar8 = FUN_140067708();
        if (lVar10 == 0) {
LAB_140586a9d:
          lVar8 = lVar10;
        }
        else if (lVar8 == 0) {
          lVar8 = 0;
        }
        else if ((*(int *)(lVar8 + 0x38) <= *(int *)(lVar10 + 0x38)) &&
                (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
                 == lVar8 + 0x30)) goto LAB_140586a9d;
        uVar7 = FUN_14477b664(lVar8);
        lVar8 = FUN_14477b664(uVar7);
        if (lVar8 == 0) {
          lVar9 = 0;
        }
        if (lVar11 == 0) {
          lVar9 = 0;
        }
      }
      local_130 = local_130 & 0xffffff00;
      uStack_12c = 0;
      uStack_128 = 0;
      local_120 = lVar11;
      uVar7 = FUN_14477b664(lVar8);
      local_118 = FUN_14477b664(uVar7);
      local_108 = 0;
      local_1f0 = 0;
      local_1f8 = param_2;
      local_110 = lVar9;
      FUN_140cb5d65(&local_190,lVar6,&local_130,local_e8);
      local_190 = 0;
      local_188 = 0xffffffffffffffff;
      if ((local_108 != 0) && ((DAT_14cb26569 & 1) != 0)) {
        FUN_1400848c0(*(undefined8 *)(local_108 + 0x50));
      }
      *(double *)(param_1 + 0xf8) = dVar1;
      *(double *)(param_1 + 0x138) = dVar1;
      pdVar13 = (double *)(param_1 + 0x178);
      goto LAB_14058625b;
    }
    dVar18 = dVar1 - *(double *)(param_1 + 0x138);
    if ((dVar18 < *(double *)(param_1 + 0x130) || dVar18 == *(double *)(param_1 + 0x130)) &&
       (0.0 <= dVar18)) goto LAB_14058625f;
    puVar15 = &DAT_14c846480;
    if (param_2[0x39] != 0) {
      puVar15 = (undefined8 *)(param_2[0x39] + 0x240);
    }
    ppcVar16 = local_e8;
    for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
      *ppcVar16 = (code *)*puVar15;
      puVar15 = puVar15 + 1;
      ppcVar16 = ppcVar16 + 1;
    }
    local_88 = 0x3f800000;
    local_80 = 0;
    local_7c = 0;
    if (lVar9 == 0) {
      lVar11 = *(longlong *)(param_1 + 0x100);
      uVar7 = FUN_14477b664(*(undefined8 *)(param_1 + 0x108));
      lVar8 = FUN_14477b664(uVar7);
      lVar9 = *(longlong *)(param_1 + 0x110);
    }
    else {
      uVar7 = FUN_140067708();
      FUN_14477b664(uVar7);
      lVar10 = FUN_140067708();
      uVar7 = FUN_140067708();
      FUN_1402d1bfa(&local_130,uVar7,lVar9);
      lVar11 = CONCAT44(uStack_12c,local_130);
      lVar8 = FUN_140067708();
      if (lVar10 == 0) {
LAB_140586bc1:
        lVar8 = lVar10;
      }
      else if (lVar8 == 0) {
        lVar8 = 0;
      }
      else if ((*(int *)(lVar8 + 0x38) <= *(int *)(lVar10 + 0x38)) &&
              (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
               lVar8 + 0x30)) goto LAB_140586bc1;
      uVar7 = FUN_14477b664(lVar8);
      lVar8 = FUN_14477b664(uVar7);
      if (lVar8 == 0) {
        lVar9 = 0;
      }
      if (lVar11 == 0) {
        lVar9 = 0;
      }
    }
    local_130 = local_130 & 0xffffff00;
    uStack_12c = 0;
    uStack_128 = 0;
    local_120 = lVar11;
    uVar7 = FUN_14477b664(lVar8);
    local_118 = FUN_14477b664(uVar7);
    local_108 = 0;
    local_1f0 = 0;
    local_1f8 = param_2;
    local_110 = lVar9;
    FUN_140cb5d65(&local_178,lVar6,&local_130,local_e8);
    local_178 = 0;
    local_170 = 0xffffffffffffffff;
    if ((local_108 != 0) && ((DAT_14cb26569 & 1) != 0)) {
      FUN_1400848c0(*(undefined8 *)(local_108 + 0x50));
    }
    *(double *)(param_1 + 0x138) = dVar1;
  }
  pdVar13 = (double *)(param_1 + 0xf8);
LAB_14058625b:
  *pdVar13 = dVar1;
LAB_14058625f:
  if ((local_60 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140586e04 FUN_140586e04 body=146 status=ok
// SIG undefined FUN_140586e04(void)

undefined8 * FUN_140586e04(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140b4b994(&local_28,5);
  *param_1 = local_28;
  param_1[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140586e9a FUN_140586e9a body=276 status=ok
// SIG undefined FUN_140586e9a(void)

void FUN_140586e9a(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar6 = (longlong *)FUN_140587260();
  if ((plVar6 != (longlong *)0x0) && (lVar5 = plVar6[1], (longlong)(int)lVar5 != 0)) {
    lVar4 = *plVar6;
    lVar9 = 0;
    do {
      iVar2 = *(int *)(lVar4 + 4 + lVar9);
      if (((iVar2 != 0) && (uVar3 = *(uint *)(lVar4 + lVar9), -1 < (int)uVar3)) &&
         ((int)uVar3 < DAT_14c9647dc)) {
        puVar8 = (undefined8 *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if (((puVar8 != (undefined8 *)0x0) && (*(int *)(puVar8 + 2) == iVar2)) &&
           ((*(uint *)(puVar8 + 1) & 0x10200000) == 0)) {
          if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
            uVar7 = *puVar8;
          }
          else {
            uVar7 = 0;
          }
          local_40 = *param_2;
          local_38 = param_2[1];
          if (local_38 != 0) {
            LOCK();
            *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
            UNLOCK();
          }
          FUN_140586fc4(uVar7,&local_40);
        }
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)(int)lVar5 * 8 != lVar9);
  }
  puVar8 = (undefined8 *)param_2[1];
  if (puVar8 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar8 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar8)(puVar8);
      LOCK();
      piVar1 = (int *)((longlong)puVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
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



// FUNCTION 140586fc4 FUN_140586fc4 body=265 status=ok
// SIG undefined FUN_140586fc4(void)

void FUN_140586fc4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  cVar7 = (**(code **)(*(longlong *)*param_2 + 0x18))((longlong *)*param_2,param_1 + 0x28);
  if (cVar7 != '\0') {
    iVar3 = *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x78) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x7c) < iVar3 + 1U) {
      FUN_140587152((longlong *)(param_1 + 0x70),iVar3);
    }
    lVar9 = *(longlong *)(param_1 + 0x70);
    *(longlong *)(lVar9 + (longlong)iVar3 * 0x10) = *param_2;
    lVar4 = param_2[1];
    *(longlong *)(lVar9 + 8 + (longlong)iVar3 * 0x10) = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    if ((*(char *)(*param_2 + 9) == '\x01') &&
       (uVar8 = (ulonglong)*(int *)(param_1 + 0x88), 0 < (longlong)uVar8)) {
      plVar5 = (longlong *)(param_1 + 0x80);
      lVar9 = uVar8 * 0x18 + -0x10;
      do {
        cVar7 = (**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,*plVar5 + lVar9);
        if (cVar7 != '\0') {
          FUN_14587477e(plVar5,(int)uVar8 + -1);
          FUN_1458746d0(plVar5);
        }
        lVar9 = lVar9 + -0x18;
        bVar6 = 1 < uVar8;
        uVar8 = uVar8 - 1;
      } while (bVar6);
    }
    FUN_1405870ce(param_1);
  }
  plVar5 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x0001405870b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1405870ce FUN_1405870ce body=130 status=ok
// SIG undefined FUN_1405870ce(void)

void FUN_1405870ce(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x28);
  if ((lVar1 != 0) && (*(char *)(param_1 + 0x9a) == '\0')) {
    *(undefined2 *)(param_1 + 0x98) = 0;
    *(undefined1 *)(param_1 + 0x9a) = 1;
    local_18 = param_1;
    if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_1405f6d44(lVar1 + 0x16c8,&local_18);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140587152 FUN_140587152 body=269 status=ok
// SIG undefined FUN_140587152(void)

void FUN_140587152(longlong param_1,int param_2)

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



// FUNCTION 140587260 FUN_140587260 body=448 status=ok
// SIG undefined FUN_140587260(void)

longlong FUN_140587260(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  uint *puVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [40];
  longlong *local_50;
  int local_48;
  uint local_44;
  undefined4 *local_40;
  uint local_38;
  int local_34;
  int local_30;
  ulonglong local_28;
  
  iVar2 = DAT_14cb7d7a0;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x38);
    if (lVar1 != 0) {
      local_44 = 1;
      if (DAT_14cb7d7a0 == 0) {
        local_48 = 0;
        local_30 = 0;
        local_34 = 0;
      }
      else {
        puVar4 = &DAT_14cb7d788;
        if (DAT_14cb7d798 != (uint *)0x0) {
          puVar4 = DAT_14cb7d798;
        }
        uVar6 = *puVar4;
        if (uVar6 == 0) {
          iVar7 = DAT_14cb7d7a0 + 0x1e;
          if (-1 < DAT_14cb7d7a0 + -1) {
            iVar7 = DAT_14cb7d7a0 + -1;
          }
          uVar9 = 0;
          uVar8 = (ulonglong)(uint)(iVar7 >> 5);
          if (iVar7 >> 5 < 1) {
            uVar8 = uVar9;
          }
          local_48 = (int)uVar8 + 1;
          iVar7 = 0;
          do {
            local_30 = (int)uVar8 * 0x20 + 0x20;
            local_34 = DAT_14cb7d7a0;
            if (uVar8 == uVar9) goto LAB_140587337;
            iVar7 = iVar7 + 0x20;
            uVar6 = puVar4[uVar9 + 1];
            uVar9 = uVar9 + 1;
          } while (uVar6 == 0);
          local_48 = (int)uVar9;
        }
        else {
          iVar7 = 0;
          local_48 = 0;
        }
        local_44 = -uVar6 & uVar6;
        uVar8 = (ulonglong)local_44 * 2 + 1;
        lVar5 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        local_34 = (iVar7 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
        local_30 = iVar7;
        if (DAT_14cb7d7a0 <= local_34) {
          local_34 = DAT_14cb7d7a0;
        }
      }
LAB_140587337:
      local_50 = &DAT_14cb7d778;
      local_40 = &DAT_14cb7d788;
      local_38 = 0xffffffff;
      if (local_34 != DAT_14cb7d7a0) {
        do {
          lVar5 = (longlong)local_34 * 0x20 + *local_50;
          cVar3 = FUN_1405f6df2(lVar5,lVar1);
          if (cVar3 != '\0') {
            lVar5 = lVar5 + 8;
            break;
          }
          local_38 = local_38 & ~local_44;
          FUN_1449c0562(&local_48);
          lVar5 = 0;
        } while (local_50 != &DAT_14cb7d778 || (local_40 != &DAT_14cb7d788 || local_34 != iVar2));
        goto LAB_14058738f;
      }
    }
  }
  lVar5 = 0;
LAB_14058738f:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 140587422 FUN_140587422 body=204 status=ok
// SIG undefined FUN_140587422(void)

ulonglong FUN_140587422(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong unaff_RSI;
  longlong lVar4;
  
  if ((*(char *)(param_1 + 0xad) == '\0') &&
     ((*(char *)(param_1 + 0xae) != '\x01' || (*(char *)(param_1 + 0xaf) != '\0')))) {
    unaff_RSI = CONCAT71((int7)(unaff_RSI >> 8),1);
    if ((((*(char *)(param_1 + 0xac) != '\x01') ||
         (lVar3 = FUN_14479d2ce(param_1 + 0x90), lVar3 == 0)) ||
        (lVar3 = FUN_145722198(lVar3), lVar3 == 0)) ||
       ((*(longlong *)(*param_2 + 0x30) != lVar3 || (*(int *)(*param_2 + 0x50) != 0))))
    goto LAB_140587449;
  }
  else {
    lVar3 = FUN_14479d2ce(param_1 + 0x90);
    if ((lVar3 != 0) && (lVar3 = FUN_145722198(lVar3), lVar3 != 0)) {
      lVar1 = *param_2;
      if (*(longlong *)(lVar1 + 0x30) == lVar3) {
LAB_140587482:
        unaff_RSI = CONCAT71((int7)(unaff_RSI >> 8),1);
        goto LAB_140587449;
      }
      if ((longlong)*(int *)(lVar1 + 0x50) != 0) {
        lVar4 = 0;
        unaff_RSI = 0;
        do {
          lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x48) + lVar4);
          if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x30) == lVar3)) goto LAB_140587482;
          lVar4 = lVar4 + 8;
        } while ((longlong)*(int *)(lVar1 + 0x50) * 8 != lVar4);
        goto LAB_140587449;
      }
    }
  }
  unaff_RSI = 0;
LAB_140587449:
  return unaff_RSI & 0xffffffff;
}



// FUNCTION 1405874ee FUN_1405874ee body=12114 status=ok
// SIG undefined FUN_1405874ee(void)

void FUN_1405874ee(longlong param_1,char *param_2,longlong param_3,longlong param_4,longlong param_5
                  )

{
  int *piVar1;
  void *_Src;
  float *pfVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  code *pcVar7;
  double dVar8;
  undefined8 uVar9;
  char *pcVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  double *pdVar23;
  longlong *plVar24;
  undefined8 *puVar25;
  byte bVar26;
  uint uVar27;
  int iVar28;
  uint *puVar29;
  uint uVar30;
  int iVar31;
  longlong *plVar32;
  code *pcVar33;
  ulonglong uVar34;
  longlong lVar35;
  uint uVar36;
  longlong lVar37;
  ulonglong uVar38;
  longlong lVar39;
  int iVar40;
  bool bVar41;
  undefined4 uVar42;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  float fVar43;
  float extraout_XMM0_Da_06;
  float extraout_XMM0_Da_07;
  float extraout_XMM0_Da_08;
  float extraout_XMM0_Da_09;
  float extraout_XMM0_Da_10;
  float extraout_XMM0_Da_11;
  float extraout_XMM0_Da_12;
  undefined4 extraout_XMM0_Da_13;
  undefined4 extraout_XMM0_Da_14;
  undefined4 extraout_XMM0_Da_15;
  undefined4 extraout_XMM0_Da_16;
  undefined4 extraout_XMM0_Da_17;
  undefined4 extraout_XMM0_Da_18;
  undefined4 extraout_XMM0_Da_19;
  undefined4 extraout_XMM0_Da_20;
  undefined4 extraout_XMM0_Da_21;
  undefined4 extraout_XMM0_Da_22;
  undefined4 extraout_XMM0_Da_23;
  undefined4 extraout_XMM0_Da_24;
  undefined4 extraout_XMM0_Da_25;
  float extraout_XMM0_Da_26;
  float extraout_XMM0_Da_27;
  float extraout_XMM0_Da_28;
  float extraout_XMM0_Da_29;
  float extraout_XMM0_Da_30;
  float extraout_XMM0_Da_31;
  float extraout_XMM0_Da_32;
  float extraout_XMM0_Da_33;
  float extraout_XMM0_Da_34;
  float extraout_XMM0_Da_35;
  undefined4 uVar44;
  float fVar45;
  float fVar46;
  double dVar47;
  double dVar48;
  float fVar49;
  undefined1 auStack_248 [32];
  uint local_228;
  undefined4 local_220;
  undefined4 local_218;
  undefined8 local_210;
  undefined2 *local_208;
  undefined1 *local_200;
  undefined1 *local_1f8;
  undefined8 *local_1f0;
  undefined1 *local_1e8;
  code *local_1e0;
  longlong local_1d8;
  uint *local_1d0;
  longlong *local_1c8;
  code *local_1c0;
  char *local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  longlong *local_188;
  longlong *local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_160;
  undefined8 local_158;
  longlong *local_148;
  longlong local_140;
  longlong *local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  float fStack_110;
  float fStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  float fStack_f0;
  float fStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_248;
  local_130 = *(longlong *)(param_2 + 0x10);
  uVar18 = FUN_14477b664(*(undefined8 *)(param_2 + 0x18));
  local_128 = FUN_14477b664(uVar18);
  local_120 = *(longlong *)(param_2 + 0x20);
  uVar14 = *(uint *)(param_4 + 4);
  local_1d8 = param_4;
  if ((uVar14 & 8) == 0) {
    if ((uVar14 & 0x10) == 0) {
      if ((uVar14 & 0x20) == 0) {
        if ((uVar14 & 0x40) != 0) goto LAB_140589df3;
      }
      else {
        local_130 = *(longlong *)(param_2 + 0x58);
        uVar18 = FUN_14477b664(*(undefined8 *)(param_2 + 0x60));
        local_128 = FUN_14477b664(uVar18);
        local_120 = *(longlong *)(param_2 + 0x68);
      }
    }
    else {
      local_130 = *(longlong *)(param_2 + 0x28);
      uVar18 = FUN_14477b664(*(undefined8 *)(param_2 + 0x30));
      local_128 = FUN_14477b664(uVar18);
      local_120 = *(longlong *)(param_2 + 0x38);
    }
  }
  else {
LAB_140589df3:
    FUN_144a7bb84(&local_130);
    param_4 = local_1d8;
  }
  local_1b8 = param_2;
  if (local_128 == 0) {
    uVar18 = FUN_140067708();
    local_128 = FUN_14477b664(uVar18);
  }
  if (local_120 == 0) {
    if ((((local_128 == 0) || (local_130 == 0)) ||
        (plVar32 = *(longlong **)(local_128 + 0xb8), plVar32 == (longlong *)0x0)) ||
       (cVar11 = (**(code **)(*plVar32 + 0x108))(plVar32), cVar11 == '\0')) goto LAB_140589733;
    uVar18 = (**(code **)(*plVar32 + 0x110))(plVar32);
    local_120 = FUN_144aff482(uVar18);
    if (local_120 == 0) goto LAB_140589733;
  }
  if ((*(longlong *)(param_1 + 0x180) == 0) ||
     (lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x180) + 0x3d0), lVar20 == 0))
  goto LAB_140589733;
  if (*(int *)(param_4 + 0x2c) == 0) {
    local_1a8 = 0;
  }
  else {
    uVar14 = *(uint *)(param_4 + 0x28);
    local_1a8 = 0;
    if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c9647dc)) {
      plVar32 = (longlong *)
                ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8));
      if ((plVar32 == (longlong *)0x0) ||
         (((int)plVar32[2] != *(int *)(param_4 + 0x2c) ||
          ((*(uint *)(plVar32 + 1) & 0x10200000) != 0)))) {
        local_1a8 = 0;
      }
      else {
        local_1a8 = *plVar32;
      }
    }
  }
  if (*local_1b8 == '\0') {
    uVar42 = *(undefined4 *)(param_5 + 0x208);
    if (local_1a8 == 0) {
      uVar21 = 0;
      puVar29 = (uint *)0x0;
    }
    else {
      uVar14 = *(uint *)(local_1a8 + 0xc);
      uVar21 = (ulonglong)uVar14;
      if ((int)uVar14 < DAT_14c9647dc) {
        lVar35 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
      }
      else {
        lVar35 = 0;
      }
      puVar29 = (uint *)(ulonglong)*(uint *)(lVar35 + 0x10);
      if (*(uint *)(lVar35 + 0x10) == 0) {
        LOCK();
        iVar15 = DAT_14c964868 + 1;
        UNLOCK();
        uVar14 = DAT_14c964868 + 1;
        bVar41 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar15;
        if (bVar41) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar14);
        }
        LOCK();
        uVar27 = *(uint *)(lVar35 + 0x10);
        bVar41 = uVar27 == 0;
        if (bVar41) {
          *(uint *)(lVar35 + 0x10) = uVar14;
          uVar27 = 0;
        }
        UNLOCK();
        if (bVar41) {
          uVar27 = uVar14;
        }
        puVar29 = (uint *)(ulonglong)uVar27;
      }
    }
    if (local_128 == 0) {
      uVar18 = FUN_140067708();
      local_128 = FUN_14477b664(uVar18);
    }
    if (local_120 == 0) {
      if ((((local_128 == 0) || (local_130 == 0)) ||
          (plVar32 = *(longlong **)(local_128 + 0xb8), plVar32 == (longlong *)0x0)) ||
         (cVar11 = (**(code **)(*plVar32 + 0x108))(plVar32), cVar11 == '\0')) goto LAB_140589733;
      uVar18 = (**(code **)(*plVar32 + 0x110))(plVar32);
      local_120 = FUN_144aff482(uVar18,&local_130);
      if (local_120 == 0) goto LAB_140589733;
    }
    plVar32 = (longlong *)(param_1 + 800);
    lVar35 = local_128;
    if (local_128 == 0) {
      lVar35 = FUN_140067708();
    }
    lVar39 = local_130;
    local_1c0 = (code *)((longlong)puVar29 << 0x20 | uVar21);
    uVar19 = FUN_14477b664(lVar35);
    uVar14 = ((uint)(uVar19 >> 0x14) & 0xffff ^ (uint)(uVar19 >> 4)) * -0x7a143595;
    uVar27 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
    uVar27 = uVar27 >> 0x10 ^ uVar27;
    uVar14 = (uint)((ulonglong)lVar39 >> 0x10);
    uVar30 = (uint)lVar39 & 0xffff;
    uVar14 = uVar27 >> 0xd ^
             (((uint)lVar39 << 0x10 | uVar30) + (int)((ulonglong)lVar39 >> 0x20) +
              (uVar14 << 0x13 | uVar14 & 0xffff) + (uVar30 >> 4)) - uVar27;
    uVar30 = uVar14 << 8 ^ (-0x61c88647 - uVar27) - uVar14;
    uVar36 = uVar30 >> 0xd ^ (uVar27 - uVar14) - uVar30;
    uVar14 = uVar36 >> 0xc ^ (uVar14 - uVar30) - uVar36;
    uVar27 = uVar14 << 0x10 ^ (uVar30 - uVar36) - uVar14;
    uVar36 = uVar27 >> 5 ^ (uVar36 - uVar14) - uVar27;
    uVar30 = uVar36 >> 3 ^ (uVar14 - uVar27) - uVar36;
    uVar14 = uVar30 << 10 ^ (uVar27 - uVar36) - uVar30;
    iVar15 = FUN_14058a4f8(plVar32,uVar14 >> 0xf ^ uVar36 - (uVar30 + uVar14),&local_130);
    if (iVar15 != -1) {
      lVar35 = local_128;
      if (local_128 == 0) {
        lVar35 = FUN_140067708();
      }
      lVar39 = local_130;
      uVar19 = FUN_14477b664(lVar35);
      uVar14 = ((uint)(uVar19 >> 0x14) & 0xffff ^ (uint)(uVar19 >> 4)) * -0x7a143595;
      uVar27 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
      uVar27 = uVar27 >> 0x10 ^ uVar27;
      uVar14 = (uint)((ulonglong)lVar39 >> 0x10);
      uVar30 = (uint)lVar39 & 0xffff;
      uVar14 = uVar27 >> 0xd ^
               (((uint)lVar39 << 0x10 | uVar30) + (int)((ulonglong)lVar39 >> 0x20) +
                (uVar14 << 0x13 | uVar14 & 0xffff) + (uVar30 >> 4)) - uVar27;
      uVar30 = uVar14 << 8 ^ (-0x61c88647 - uVar27) - uVar14;
      uVar36 = uVar30 >> 0xd ^ (uVar27 - uVar14) - uVar30;
      uVar14 = uVar36 >> 0xc ^ (uVar14 - uVar30) - uVar36;
      uVar27 = uVar14 << 0x10 ^ (uVar30 - uVar36) - uVar14;
      uVar36 = uVar27 >> 5 ^ (uVar36 - uVar14) - uVar27;
      uVar30 = uVar36 >> 3 ^ (uVar14 - uVar27) - uVar36;
      uVar14 = uVar30 << 10 ^ (uVar27 - uVar36) - uVar30;
      iVar15 = FUN_14058a4f8(plVar32,uVar14 >> 0xf ^ uVar36 - (uVar30 + uVar14),&local_130);
      if (iVar15 == -1) {
        lVar35 = 0;
      }
      else {
        lVar35 = (longlong)iVar15 * 0x70 + *plVar32;
      }
      local_d8 = local_1c0;
      iVar15 = FUN_14058a442(lVar35 + 0x18,(uint)puVar29 ^ (uint)uVar21);
      if (iVar15 != -1) goto LAB_140589733;
    }
    lVar35 = local_128;
    local_1d0 = puVar29;
    if (local_128 == 0) {
      lVar35 = FUN_140067708();
    }
    lVar39 = local_130;
    uVar19 = FUN_14477b664(lVar35);
    uVar14 = ((uint)(uVar19 >> 0x14) & 0xffff ^ (uint)(uVar19 >> 4)) * -0x7a143595;
    uVar27 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
    uVar27 = uVar27 >> 0x10 ^ uVar27;
    uVar14 = (uint)((ulonglong)lVar39 >> 0x10);
    uVar30 = (uint)lVar39 & 0xffff;
    uVar14 = uVar27 >> 0xd ^
             (((uint)lVar39 << 0x10 | uVar30) + (int)((ulonglong)lVar39 >> 0x20) +
              (uVar14 << 0x13 | uVar14 & 0xffff) + (uVar30 >> 4)) - uVar27;
    uVar30 = uVar14 << 8 ^ (-0x61c88647 - uVar27) - uVar14;
    uVar36 = uVar30 >> 0xd ^ (uVar27 - uVar14) - uVar30;
    uVar14 = uVar36 >> 0xc ^ (uVar14 - uVar30) - uVar36;
    uVar27 = uVar14 << 0x10 ^ (uVar30 - uVar36) - uVar14;
    uVar30 = uVar27 >> 5 ^ (uVar36 - uVar14) - uVar27;
    uVar36 = uVar30 >> 3 ^ (uVar14 - uVar27) - uVar30;
    uVar14 = uVar36 << 10 ^ (uVar27 - uVar30) - uVar36;
    uVar14 = uVar14 >> 0xf ^ uVar30 - (uVar36 + uVar14);
    iVar15 = FUN_14058a4f8(plVar32,uVar14,&local_130);
    local_198 = lVar20;
    if (iVar15 == -1) {
LAB_140587ad7:
      local_1c8 = plVar32;
      local_1a0 = param_3;
      if (*(int *)(param_1 + 0x354) == 0) {
        iVar15 = *(int *)(param_1 + 0x328);
        *(int *)(param_1 + 0x328) = iVar15 + 1;
        if (*(int *)(param_1 + 0x32c) == iVar15) {
          FUN_140275bcc(plVar32,iVar15);
        }
        lVar35 = (longlong)iVar15;
        iVar40 = FUN_144a54ea4(param_1 + 0x330,1);
        lVar20 = *(longlong *)(param_1 + 0x340);
        if (*(longlong *)(param_1 + 0x340) == 0) {
          lVar20 = param_1 + 0x330;
        }
        iVar16 = iVar40 + 0x1f;
        if (-1 < iVar40) {
          iVar16 = iVar40;
        }
        bVar26 = (byte)iVar40 & 0x1f;
        puVar29 = (uint *)(lVar20 + (longlong)(iVar16 >> 5) * 4);
        *puVar29 = *puVar29 & (-2 << bVar26 | 0xfffffffeU >> 0x20 - bVar26);
      }
      else {
        iVar15 = *(int *)(param_1 + 0x350);
        lVar35 = (longlong)iVar15;
        iVar40 = *(int *)(*(longlong *)(param_1 + 800) + 4 + lVar35 * 0x70);
        *(int *)(param_1 + 0x350) = iVar40;
        iVar16 = *(int *)(param_1 + 0x354) + -1;
        *(int *)(param_1 + 0x354) = iVar16;
        if (iVar16 != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 800) + (longlong)iVar40 * 0x70) = 0xffffffff;
        }
      }
      iVar40 = 1;
      lVar20 = param_1 + 0x330;
      if (*(longlong *)(param_1 + 0x340) != 0) {
        lVar20 = *(longlong *)(param_1 + 0x340);
      }
      iVar16 = iVar15 + 0x1f;
      if (-1 < iVar15) {
        iVar16 = iVar15;
      }
      puVar29 = (uint *)(lVar20 + (longlong)(iVar16 >> 5) * 4);
      *puVar29 = *puVar29 | 1 << ((byte)iVar15 & 0x1f);
      _Src = (void *)(*(longlong *)(param_1 + 800) + lVar35 * 0x70);
      local_b8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_c8 = 0;
      uStack_c4 = 0;
      uStack_c0 = 0;
      uStack_bc = 0;
      local_d8 = (code *)0x0;
      uStack_d0 = 0;
      uStack_cc = 0;
      uStack_b0 = 0x8000000000;
      local_a8 = 0xffffffff;
      plVar32 = (longlong *)(*(longlong *)(param_1 + 800) + lVar35 * 0x70);
      *plVar32 = local_130;
      uVar18 = FUN_14477b664(local_128);
      lVar20 = FUN_14477b664(uVar18);
      plVar32[1] = lVar20;
      plVar32[2] = local_120;
      plVar32[7] = 0;
      *(undefined4 *)(plVar32 + 8) = 0;
      plVar32[3] = 0;
      plVar32[4] = 0;
      *(undefined8 *)((longlong)plVar32 + 0x44) = 0xffffffff00000080;
      *(undefined4 *)((longlong)plVar32 + 0x4c) = 0;
      if (plVar32 + 3 != &local_d8) {
        local_d8 = (code *)0x0;
        uStack_d0 = 0;
        uStack_cc = 0;
        *(undefined4 *)((longlong)_Src + 0x28) = local_c8;
        *(undefined4 *)((longlong)_Src + 0x2c) = uStack_c4;
        *(undefined4 *)((longlong)_Src + 0x30) = uStack_c0;
        *(undefined4 *)((longlong)_Src + 0x34) = uStack_bc;
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = 0xffffffff;
      }
      *(undefined4 *)((longlong)_Src + 0x50) = 0;
      *(undefined8 *)((longlong)_Src + 0x58) = 0;
      local_98 = 0;
      *(undefined4 *)((longlong)_Src + 0x60) = 0;
      uStack_90 = uStack_90 & 0xffffffff00000000;
      FUN_140584d76();
      *(undefined4 *)((longlong)_Src + 0x68) = 0xffffffff;
      if (*(int *)(param_1 + 0x328) - *(int *)(param_1 + 0x354) == 1) {
        uVar27 = 1;
LAB_140587c75:
        plVar32 = local_1c8;
        if (((int)uVar27 < 1) || (iVar40 <= *(int *)(param_1 + 0x368))) {
          uVar14 = *(int *)(param_1 + 0x368) - 1U & uVar14;
          *(uint *)((longlong)_Src + 0x6c) = uVar14;
          lVar20 = *(longlong *)(param_1 + 0x360);
          if (*(longlong *)(param_1 + 0x360) == 0) {
            lVar20 = param_1 + 0x358;
          }
          *(undefined4 *)((longlong)_Src + 0x68) =
               *(undefined4 *)
                (lVar20 + ((longlong)*(int *)(param_1 + 0x368) - 1U & (longlong)(int)uVar14) * 4);
          lVar20 = *(longlong *)(param_1 + 0x360);
          if (*(longlong *)(param_1 + 0x360) == 0) {
            lVar20 = param_1 + 0x358;
          }
          *(int *)(lVar20 + ((longlong)*(int *)(param_1 + 0x368) - 1U & (longlong)(int)uVar14) * 4)
               = iVar15;
        }
        else {
          *(int *)(param_1 + 0x368) = iVar40;
          FUN_145722246(local_1c8);
        }
      }
      else {
        iVar16 = FUN_14058a4f8(local_1c8,uVar14,_Src);
        if (iVar16 == -1) {
          uVar27 = *(int *)(param_1 + 0x328) - *(int *)(param_1 + 0x354);
          if (3 < uVar27) {
            uVar19 = (ulonglong)(uVar27 & 0xfffffffe) + 0xf;
            lVar20 = 0x3f;
            if (uVar19 != 0) {
              for (; uVar19 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            iVar40 = 1 << ((byte)lVar20 & 0x1f);
          }
          goto LAB_140587c75;
        }
        lVar20 = *local_1c8;
        lVar35 = (longlong)iVar16 * 0x70;
        *(undefined4 *)(lVar20 + 0x60 + lVar35) = 0;
        if (*(longlong *)(lVar20 + 0x58 + lVar35) != 0) {
          FUN_1400020a8();
        }
        FUN_140584d76(lVar20 + lVar35 + 0x18);
        memmove((void *)(lVar20 + lVar35),_Src,0x68);
        plVar32 = local_1c8;
        FUN_140584e5e(local_1c8,iVar15);
      }
      uVar14 = (uint)local_1d0;
      lVar20 = *plVar32 + (longlong)iVar15 * 0x70;
      param_3 = local_1a0;
    }
    else {
      if (*plVar32 + (longlong)iVar15 * 0x70 == 0) goto LAB_140587ad7;
      lVar20 = *plVar32 + (longlong)iVar15 * 0x70;
      uVar14 = (uint)local_1d0;
    }
    plVar32 = (longlong *)(lVar20 + 0x18);
    uVar14 = uVar14 ^ (uint)uVar21;
    iVar15 = *(int *)(lVar20 + 0x20);
    if (iVar15 != *(int *)(lVar20 + 0x4c)) {
      lVar35 = lVar20 + 0x50;
      if (*(longlong *)(lVar20 + 0x58) != 0) {
        lVar35 = *(longlong *)(lVar20 + 0x58);
      }
      iVar15 = *(int *)(lVar35 + (ulonglong)(*(int *)(lVar20 + 0x60) - 1U & uVar14) * 4);
      if (iVar15 != -1) {
        lVar35 = *plVar32;
        do {
          lVar39 = (longlong)iVar15;
          local_d8 = *(code **)(lVar35 + lVar39 * 0x14);
          local_f8 = local_1c0;
          cVar11 = FUN_14572220e(&local_d8,&local_f8);
          lVar35 = *plVar32;
          if (cVar11 != '\0') {
            if (lVar35 + lVar39 * 0x14 != 0) {
              lVar35 = lVar35 + lVar39 * 0x14;
              goto LAB_1405882eb;
            }
            break;
          }
          iVar15 = *(int *)(lVar35 + 0xc + lVar39 * 0x14);
        } while (iVar15 != -1);
      }
      iVar15 = *(int *)(lVar20 + 0x4c);
    }
    if (iVar15 == 0) {
      iVar40 = *(int *)(lVar20 + 0x20);
      *(int *)(lVar20 + 0x20) = iVar40 + 1;
      if (*(int *)(lVar20 + 0x24) == iVar40) {
        FUN_140171ad2(plVar32,iVar40);
      }
      iVar15 = *(int *)(lVar20 + 0x40);
      if (iVar15 == 0) {
        iVar16 = -1;
      }
      else {
        iVar16 = iVar15 + 0x1e;
        if (-1 < iVar15 + -1) {
          iVar16 = iVar15 + -1;
        }
        iVar16 = iVar16 >> 5;
      }
      lVar39 = lVar20 + 0x28;
      iVar28 = iVar15 + 1;
      iVar31 = iVar15 + 0x1f;
      if (-1 < iVar15) {
        iVar31 = iVar15;
      }
      if (iVar31 >> 5 == iVar16) {
        *(int *)(lVar20 + 0x40) = iVar28;
      }
      else {
        if (*(int *)(lVar20 + 0x44) <= iVar15) {
          iVar16 = iVar15;
          if (iVar15 + 0x20U < 0xa0) {
            iVar28 = 0x80;
          }
          else {
            uVar27 = iVar15 + 0x20U >> 5;
            if (*(int *)(lVar20 + 0x44) + 0x1fU < 0xa0) {
              uVar30 = 4;
              if (4 < uVar27) {
                uVar30 = uVar27;
              }
            }
            else {
              uVar30 = uVar27 + (uVar27 * 3 >> 3) + 0x10;
            }
            uVar21 = (ulonglong)(uVar30 * 4);
            if (DAT_14c872d28 != (longlong *)0x0) {
              if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                uVar36 = (uint)(uVar21 + 0xf);
                if (uVar30 < 0x1ffd) {
                  uVar21 = (ulonglong)
                           (ushort)(&DAT_14c841d90)
                                   [0x32 - (byte)(&DAT_14c841e00)[uVar21 + 0xf >> 4]];
                }
                else {
                  uVar19 = (ulonglong)(uVar36 & 0xfffffff0);
                  if (uVar19 < 0x7ff1) {
                    bVar26 = (&DAT_14c841e00)[uVar36 >> 4];
                    uVar34 = 0x32;
                    if (0x32 < bVar26) {
                      uVar34 = (ulonglong)bVar26;
                    }
                    uVar38 = 0x32 - (ulonglong)bVar26;
                    do {
                      uVar21 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar38 & 0xffffffff];
                      if (((&DAT_14c841d90)[uVar38 & 0xffffffff] & 0xf) == 0) goto LAB_140589c67;
                      lVar35 = uVar34 + 1 + uVar38;
                      uVar38 = uVar38 - 1;
                    } while (lVar35 != 0x33);
                  }
                  uVar21 = 0x10;
                  if (0x10 < DAT_14c841df8) {
                    uVar21 = (ulonglong)DAT_14c841df8;
                  }
                  uVar21 = -uVar21 & (uVar19 + uVar21) - 1;
                }
              }
              else {
                local_1d0 = (uint *)(ulonglong)uVar27;
                uVar21 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar21,0);
                uVar27 = (uint)local_1d0;
                iVar16 = *(int *)(lVar20 + 0x40);
              }
            }
LAB_140589c67:
            iVar17 = (int)(uVar21 >> 2);
            iVar28 = -0x20;
            if ((int)uVar27 <= iVar17) {
              iVar28 = iVar17 << 5;
            }
          }
          *(int *)(lVar20 + 0x44) = iVar28;
          FUN_1446efbd8(lVar39,iVar16);
          iVar28 = *(int *)(lVar20 + 0x40) + 1;
        }
        iVar16 = iVar28 + 0x1f;
        if (-1 < iVar28) {
          iVar16 = iVar28;
        }
        *(int *)(lVar20 + 0x40) = iVar28;
        if (iVar28 % 0x20 != 0) {
          lVar35 = *(longlong *)(lVar20 + 0x38);
          if (*(longlong *)(lVar20 + 0x38) == 0) {
            lVar35 = lVar39;
          }
          bVar26 = -(char)(iVar28 % 0x20);
          *(uint *)(lVar35 + (longlong)(iVar16 >> 5) * 4) =
               (uint)(*(int *)(lVar35 + (longlong)(iVar16 >> 5) * 4) << (bVar26 & 0x1f)) >>
               (bVar26 & 0x1f);
        }
      }
      lVar35 = (longlong)iVar40;
      if (*(longlong *)(lVar20 + 0x38) != 0) {
        lVar39 = *(longlong *)(lVar20 + 0x38);
      }
      bVar26 = (byte)iVar15 & 0x1f;
      puVar29 = (uint *)(lVar39 + (longlong)(iVar31 >> 5) * 4);
      *puVar29 = *puVar29 & (-2 << bVar26 | 0xfffffffeU >> 0x20 - bVar26);
    }
    else {
      iVar40 = *(int *)(lVar20 + 0x48);
      lVar35 = (longlong)iVar40;
      iVar16 = *(int *)(*plVar32 + 4 + lVar35 * 0x14);
      *(int *)(lVar20 + 0x48) = iVar16;
      *(int *)(lVar20 + 0x4c) = iVar15 + -1;
      if (iVar15 + -1 != 0) {
        *(undefined4 *)(*plVar32 + (longlong)iVar16 * 0x14) = 0xffffffff;
      }
    }
    local_1d0 = (uint *)(lVar20 + 0x28);
    puVar29 = *(uint **)(lVar20 + 0x38);
    if (*(uint **)(lVar20 + 0x38) == (uint *)0x0) {
      puVar29 = local_1d0;
    }
    iVar15 = iVar40 + 0x1f;
    if (-1 < iVar40) {
      iVar15 = iVar40;
    }
    puVar29[iVar15 >> 5] = puVar29[iVar15 >> 5] | 1 << ((byte)iVar40 & 0x1f);
    uVar27 = 1;
    puVar25 = (undefined8 *)(*plVar32 + lVar35 * 0x14);
    *puVar25 = local_1c0;
    puVar25[1] = 0xffffffff00000000;
    if (*(int *)(lVar20 + 0x20) - *(int *)(lVar20 + 0x4c) == 1) {
      uVar30 = 1;
LAB_140587e05:
      if (((int)uVar30 < 1) || ((int)uVar27 <= *(int *)(lVar20 + 0x60))) {
        uVar14 = *(int *)(lVar20 + 0x60) - 1U & uVar14;
        *(uint *)(puVar25 + 2) = uVar14;
        lVar35 = *(longlong *)(lVar20 + 0x58);
        if (*(longlong *)(lVar20 + 0x58) == 0) {
          lVar35 = lVar20 + 0x50;
        }
        *(undefined4 *)((longlong)puVar25 + 0xc) =
             *(undefined4 *)
              (lVar35 + ((longlong)*(int *)(lVar20 + 0x60) - 1U & (longlong)(int)uVar14) * 4);
        lVar35 = *(longlong *)(lVar20 + 0x58);
        if (*(longlong *)(lVar20 + 0x58) == 0) {
          lVar35 = lVar20 + 0x50;
        }
        *(int *)(lVar35 + ((longlong)*(int *)(lVar20 + 0x60) - 1U & (longlong)(int)uVar14) * 4) =
             iVar40;
      }
      else {
        *(uint *)(lVar20 + 0x60) = uVar27;
        plVar24 = (longlong *)(lVar20 + 0x58);
        if (*(longlong *)(lVar20 + 0x58) != 0) {
          FUN_1446efa72(plVar24,0,0,4);
          uVar27 = *(uint *)(lVar20 + 0x60);
        }
        lVar35 = lVar20 + 0x50;
        if (uVar27 == 1) {
          if (*plVar24 != 0) {
            FUN_1446efa72(plVar24,0,0,4);
          }
LAB_140587e41:
          uVar14 = 0;
          do {
            lVar39 = *(longlong *)(lVar20 + 0x58);
            if (*(longlong *)(lVar20 + 0x58) == 0) {
              lVar39 = lVar35;
            }
            *(undefined4 *)
             (lVar39 + (ulonglong)(*(int *)(lVar20 + 0x60) + 0x7fffffffU & uVar14) * 4) = 0xffffffff
            ;
            uVar14 = uVar14 + 1;
          } while (uVar27 != uVar14);
        }
        else {
          if (uVar27 == 0) goto LAB_1405882d8;
          FUN_1446efa72(plVar24,0,uVar27,4);
          if (0 < (int)uVar27) goto LAB_140587e41;
        }
        iVar15 = *(int *)(lVar20 + 0x40);
        if (iVar15 == 0) {
          uVar21 = 0;
          uVar19 = 1;
          iVar16 = 0;
          iVar28 = 0;
        }
        else {
          puVar29 = *(uint **)(lVar20 + 0x38);
          if (*(uint **)(lVar20 + 0x38) == (uint *)0x0) {
            puVar29 = local_1d0;
          }
          uVar14 = *puVar29;
          if (uVar14 == 0) {
            iVar16 = iVar15 + 0x1e;
            if (-1 < iVar15 + -1) {
              iVar16 = iVar15 + -1;
            }
            uVar21 = 0;
            uVar27 = iVar16 >> 5;
            if (iVar16 >> 5 < 1) {
              uVar27 = 0;
            }
            iVar28 = 0;
            do {
              if (uVar27 == uVar21) goto LAB_1405882d8;
              iVar28 = iVar28 + 0x20;
              uVar14 = puVar29[uVar21 + 1];
              uVar21 = uVar21 + 1;
            } while (uVar14 == 0);
          }
          else {
            uVar21 = 0;
            iVar28 = 0;
          }
          uVar19 = (ulonglong)(-uVar14 & uVar14);
          uVar34 = uVar19 * 2 + 1;
          lVar39 = 0x3f;
          if (uVar34 != 0) {
            for (; uVar34 >> lVar39 == 0; lVar39 = lVar39 + -1) {
            }
          }
          iVar16 = (iVar28 - ((uint)lVar39 ^ 0x3f)) + 0x3e;
          if (iVar15 <= iVar16) {
            iVar16 = iVar15;
          }
        }
        if (iVar16 < iVar15) {
          uVar14 = 0xffffffff;
          do {
            lVar39 = *plVar32;
            lVar37 = (longlong)iVar16;
            uVar18 = *(undefined8 *)(lVar39 + lVar37 * 0x14);
            uVar34 = (longlong)(int)((uint)((ulonglong)uVar18 >> 0x20) ^ (uint)uVar18) &
                     (longlong)*(int *)(lVar20 + 0x60) - 1U;
            iVar15 = (int)uVar34;
            *(int *)(lVar39 + 0x10 + lVar37 * 0x14) = iVar15;
            lVar22 = *(longlong *)(lVar20 + 0x58);
            if (*(longlong *)(lVar20 + 0x58) == 0) {
              lVar22 = lVar35;
            }
            *(undefined4 *)(lVar39 + 0xc + lVar37 * 0x14) =
                 *(undefined4 *)(lVar22 + ((longlong)*(int *)(lVar20 + 0x60) - 1U & uVar34) * 4);
            lVar39 = *(longlong *)(lVar20 + 0x58);
            if (*(longlong *)(lVar20 + 0x58) == 0) {
              lVar39 = lVar35;
            }
            *(int *)(lVar39 + ((longlong)iVar15 & (longlong)*(int *)(lVar20 + 0x60) - 1U) * 4) =
                 iVar16;
            uVar14 = ~(uint)uVar19 & uVar14;
            puVar29 = *(uint **)(lVar20 + 0x38);
            if (*(uint **)(lVar20 + 0x38) == (uint *)0x0) {
              puVar29 = local_1d0;
            }
            iVar15 = *(int *)(lVar20 + 0x40);
            iVar16 = (int)uVar21;
            lVar39 = (longlong)iVar16;
            uVar27 = puVar29[lVar39] & uVar14;
            if (uVar27 == 0) {
              iVar31 = iVar15 + 0x1e;
              if (-1 < iVar15 + -1) {
                iVar31 = iVar15 + -1;
              }
              iVar31 = iVar31 >> 5;
              iVar17 = iVar31;
              if (iVar31 < iVar16) {
                iVar17 = iVar16;
              }
              if (iVar31 <= iVar16) break;
              lVar22 = 0;
              while( true ) {
                iVar28 = iVar28 + 0x20;
                uVar27 = puVar29[lVar39 + lVar22 + 1];
                if (uVar27 != 0) break;
                lVar22 = lVar22 + 1;
                if (iVar17 - lVar39 == lVar22) goto LAB_1405882d8;
              }
              uVar21 = (ulonglong)(iVar16 + (int)lVar22 + 1);
              uVar14 = 0xffffffff;
            }
            uVar19 = (ulonglong)(-uVar27 & uVar27);
            uVar34 = uVar19 * 2 + 1;
            lVar39 = 0x3f;
            if (uVar34 != 0) {
              for (; uVar34 >> lVar39 == 0; lVar39 = lVar39 + -1) {
              }
            }
            iVar16 = (iVar28 - ((uint)lVar39 ^ 0x3f)) + 0x3e;
          } while (iVar16 < iVar15);
        }
      }
    }
    else {
      local_d8 = local_1c0;
      iVar15 = FUN_14058a442(plVar32,uVar14);
      if (iVar15 == -1) {
        uVar30 = *(int *)(lVar20 + 0x20) - *(int *)(lVar20 + 0x4c);
        if (3 < uVar30) {
          uVar21 = (ulonglong)(uVar30 & 0xfffffffe) + 0xf;
          lVar35 = 0x3f;
          if (uVar21 != 0) {
            for (; uVar21 >> lVar35 == 0; lVar35 = lVar35 + -1) {
            }
          }
          uVar27 = 1 << ((byte)lVar35 & 0x1f);
        }
        goto LAB_140587e05;
      }
      lVar20 = *plVar32;
      uVar18 = *puVar25;
      *(undefined4 *)(lVar20 + 8 + (longlong)iVar15 * 0x14) = *(undefined4 *)(puVar25 + 1);
      *(undefined8 *)(lVar20 + (longlong)iVar15 * 0x14) = uVar18;
      FUN_140584dea(plVar32,iVar40);
    }
LAB_1405882d8:
    lVar35 = *plVar32 + (longlong)iVar40 * 0x14;
LAB_1405882eb:
    *(undefined4 *)(lVar35 + 8) = uVar42;
    lVar20 = local_198;
  }
  pcVar10 = local_1b8;
  if (DAT_14cba8288 == 0) {
    local_1f0 = &local_d8;
    local_d8 = FUN_141864c34;
    local_1e0 = FUN_14081d0ea;
    local_1e8 = &LAB_1464cee30;
    local_1f8 = &LAB_148bfac22;
    local_200 = &LAB_140f21842;
    local_208 = &DAT_149e063b2;
    local_210 = 0;
    local_218 = 0x10000004;
    local_220 = 0x10;
    local_228 = 0x9cd0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
  }
  if ((*(int *)(*(longlong *)(lVar20 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) goto LAB_140589733;
  FUN_14026e798(&local_140,lVar20);
  lVar35 = local_140;
  if (local_140 != 0) {
    local_1b0 = param_1;
    if (*pcVar10 == '\x01') {
      uVar42 = FUN_1403c747e(local_140,&local_148,0);
      lVar35 = local_1d8;
    }
    else {
      local_d8 = *(code **)(lVar20 + 0x18);
      FUN_1400021e4(&local_d8,&local_f8);
      pcVar33 = local_f8;
      if (fStack_f0 == 0.0) {
        pcVar33 = (code *)&DAT_149dfb77a;
      }
      FUN_140056680(&local_d8,pcVar33);
      local_228 = local_228 & 0xffffff00;
      uVar42 = FUN_14084a140(lVar35,&local_148,&local_d8,0);
      if (local_d8 != (code *)0x0) {
        uVar42 = FUN_1400020a8();
      }
      lVar35 = local_1d8;
      if (local_f8 != (code *)0x0) {
        uVar42 = FUN_1400020a8();
      }
    }
    plVar32 = local_148;
    if (local_148 != (longlong *)0x0) {
      *(int *)(local_148 + 0x21) = (int)local_148[0x21] + 1;
      lVar39 = *(longlong *)(param_3 + 0x238);
      if (lVar39 == 0) {
        uVar18 = FUN_1407f787c();
        lVar39 = FUN_14477b664(uVar18);
        *(longlong *)(param_3 + 0x238) = lVar39;
        uVar42 = extraout_XMM0_Da;
      }
      plVar24 = (longlong *)(param_3 + 0x230);
      lVar22 = *(longlong *)(param_3 + 0x240);
      if (lVar22 == 0) {
        if ((lVar39 != 0) && (*plVar24 != 0)) {
          plVar3 = *(longlong **)(lVar39 + 0xb8);
          if ((plVar3 == (longlong *)0x0) ||
             (cVar11 = (**(code **)(*plVar3 + 0x108))(plVar3), uVar42 = extraout_XMM0_Da_13,
             cVar11 == '\0')) {
            *(undefined8 *)(param_3 + 0x240) = 0;
            lVar35 = local_1d8;
          }
          else {
            uVar18 = (**(code **)(*plVar3 + 0x110))(plVar3);
            lVar22 = FUN_144aff482(uVar18,plVar24);
            *(longlong *)(param_3 + 0x240) = lVar22;
            lVar35 = local_1d8;
            uVar42 = extraout_XMM0_Da_14;
            if (lVar22 != 0) {
              lVar39 = *(longlong *)(param_3 + 0x238);
              goto LAB_140588437;
            }
          }
        }
      }
      else {
LAB_140588437:
        uVar44 = *(undefined4 *)(lVar35 + 0xc);
        if (lVar39 == 0) {
          uVar18 = FUN_1407f787c(uVar42,lVar22);
          lVar39 = FUN_14477b664(uVar18);
          *(longlong *)(param_3 + 0x238) = lVar39;
          lVar22 = *(longlong *)(param_3 + 0x240);
          if (((lVar22 == 0) && (lVar22 = 0, lVar39 != 0)) && (*plVar24 != 0)) {
            plVar3 = *(longlong **)(lVar39 + 0xb8);
            if ((plVar3 == (longlong *)0x0) ||
               (cVar11 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar11 == '\0')) {
              lVar22 = 0;
            }
            else {
              uVar18 = (**(code **)(*plVar3 + 0x110))(plVar3);
              lVar22 = FUN_144aff482(uVar18,plVar24);
            }
            *(longlong *)(param_3 + 0x240) = lVar22;
            lVar35 = local_1d8;
          }
        }
        local_228 = local_228 & 0xffffff00;
        uVar42 = FUN_1447997cc(plVar32,lVar22,uVar44,0);
      }
      lVar39 = *(longlong *)(param_3 + 0x250);
      if (lVar39 == 0) {
        uVar18 = FUN_1407f787c();
        lVar39 = FUN_14477b664(uVar18);
        *(longlong *)(param_3 + 0x250) = lVar39;
        uVar42 = extraout_XMM0_Da_00;
      }
      plVar24 = (longlong *)(param_3 + 0x248);
      lVar22 = *(longlong *)(param_3 + 600);
      if (lVar22 == 0) {
        if ((lVar39 != 0) && (*plVar24 != 0)) {
          plVar3 = *(longlong **)(lVar39 + 0xb8);
          if ((plVar3 == (longlong *)0x0) ||
             (cVar11 = (**(code **)(*plVar3 + 0x108))(plVar3), uVar42 = extraout_XMM0_Da_15,
             cVar11 == '\0')) {
            *(undefined8 *)(param_3 + 600) = 0;
            lVar35 = local_1d8;
          }
          else {
            uVar18 = (**(code **)(*plVar3 + 0x110))(plVar3);
            lVar22 = FUN_144aff482(uVar18,plVar24);
            *(longlong *)(param_3 + 600) = lVar22;
            lVar35 = local_1d8;
            uVar42 = extraout_XMM0_Da_16;
            if (lVar22 != 0) {
              lVar39 = *(longlong *)(param_3 + 0x250);
              goto LAB_14058848f;
            }
          }
        }
      }
      else {
LAB_14058848f:
        uVar44 = *(undefined4 *)(lVar35 + 0x10);
        if (lVar39 == 0) {
          uVar18 = FUN_1407f787c(uVar42,lVar22);
          lVar39 = FUN_14477b664(uVar18);
          *(longlong *)(param_3 + 0x250) = lVar39;
          lVar22 = *(longlong *)(param_3 + 600);
          if (((lVar22 == 0) && (lVar22 = 0, lVar39 != 0)) && (*plVar24 != 0)) {
            plVar3 = *(longlong **)(lVar39 + 0xb8);
            if ((plVar3 == (longlong *)0x0) ||
               (cVar11 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar11 == '\0')) {
              lVar22 = 0;
            }
            else {
              uVar18 = (**(code **)(*plVar3 + 0x110))(plVar3);
              lVar22 = FUN_144aff482(uVar18,plVar24);
            }
            *(longlong *)(param_3 + 600) = lVar22;
            lVar35 = local_1d8;
          }
        }
        local_228 = local_228 & 0xffffff00;
        uVar42 = FUN_1447997cc(plVar32,lVar22,uVar44,0);
      }
      lVar39 = *(longlong *)(param_3 + 0x268);
      if (lVar39 == 0) {
        uVar18 = FUN_1407f787c();
        lVar39 = FUN_14477b664(uVar18);
        *(longlong *)(param_3 + 0x268) = lVar39;
        uVar42 = extraout_XMM0_Da_01;
      }
      plVar24 = (longlong *)(param_3 + 0x260);
      lVar22 = *(longlong *)(param_3 + 0x270);
      if (lVar22 == 0) {
        if ((lVar39 != 0) && (*plVar24 != 0)) {
          plVar3 = *(longlong **)(lVar39 + 0xb8);
          if ((plVar3 == (longlong *)0x0) ||
             (cVar11 = (**(code **)(*plVar3 + 0x108))(plVar3), uVar42 = extraout_XMM0_Da_17,
             cVar11 == '\0')) {
            *(undefined8 *)(param_3 + 0x270) = 0;
            lVar35 = local_1d8;
          }
          else {
            uVar18 = (**(code **)(*plVar3 + 0x110))(plVar3);
            lVar22 = FUN_144aff482(uVar18,plVar24);
            *(longlong *)(param_3 + 0x270) = lVar22;
            lVar35 = local_1d8;
            uVar42 = extraout_XMM0_Da_18;
            if (lVar22 != 0) {
              lVar39 = *(longlong *)(param_3 + 0x268);
              goto LAB_1405884e7;
            }
          }
        }
      }
      else {
LAB_1405884e7:
        iVar15 = (uint)*(byte *)(lVar35 + 1) - (uint)*(byte *)(lVar35 + 2);
        if (lVar39 == 0) {
          uVar18 = FUN_1407f787c(iVar15,lVar22);
          lVar39 = FUN_14477b664(uVar18);
          *(longlong *)(param_3 + 0x268) = lVar39;
          lVar22 = *(longlong *)(param_3 + 0x270);
          if (((lVar22 == 0) && (lVar22 = 0, lVar39 != 0)) && (*plVar24 != 0)) {
            plVar3 = *(longlong **)(lVar39 + 0xb8);
            if ((plVar3 == (longlong *)0x0) ||
               (cVar11 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar11 == '\0')) {
              lVar22 = 0;
            }
            else {
              uVar18 = (**(code **)(*plVar3 + 0x110))(plVar3);
              lVar22 = FUN_144aff482(uVar18,plVar24);
            }
            *(longlong *)(param_3 + 0x270) = lVar22;
            lVar35 = local_1d8;
          }
        }
        local_228 = local_228 & 0xffffff00;
        uVar42 = FUN_1447997cc(plVar32,lVar22,(float)iVar15,0);
      }
      lVar39 = *(longlong *)(param_3 + 0x280);
      if (lVar39 == 0) {
        uVar18 = FUN_1407f787c();
        lVar39 = FUN_14477b664(uVar18);
        *(longlong *)(param_3 + 0x280) = lVar39;
        uVar42 = extraout_XMM0_Da_02;
      }
      plVar24 = (longlong *)(param_3 + 0x278);
      lVar22 = *(longlong *)(param_3 + 0x288);
      if (lVar22 == 0) {
        if ((lVar39 != 0) && (*plVar24 != 0)) {
          plVar3 = *(longlong **)(lVar39 + 0xb8);
          if ((plVar3 == (longlong *)0x0) ||
             (cVar11 = (**(code **)(*plVar3 + 0x108))(plVar3), uVar42 = extraout_XMM0_Da_19,
             cVar11 == '\0')) {
            *(undefined8 *)(param_3 + 0x288) = 0;
            lVar35 = local_1d8;
          }
          else {
            uVar18 = (**(code **)(*plVar3 + 0x110))(plVar3);
            lVar22 = FUN_144aff482(uVar18,plVar24);
            *(longlong *)(param_3 + 0x288) = lVar22;
            lVar35 = local_1d8;
            uVar42 = extraout_XMM0_Da_20;
            if (lVar22 != 0) {
              lVar39 = *(longlong *)(param_3 + 0x280);
              goto LAB_14058854d;
            }
          }
        }
      }
      else {
LAB_14058854d:
        uVar44 = *(undefined4 *)(lVar35 + 0x18);
        if (lVar39 == 0) {
          uVar18 = FUN_1407f787c(uVar42,lVar22);
          lVar39 = FUN_14477b664(uVar18);
          *(longlong *)(param_3 + 0x280) = lVar39;
          lVar22 = *(longlong *)(param_3 + 0x288);
          if (((lVar22 == 0) && (lVar22 = 0, lVar39 != 0)) && (*plVar24 != 0)) {
            plVar3 = *(longlong **)(lVar39 + 0xb8);
            if ((plVar3 == (longlong *)0x0) ||
               (cVar11 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar11 == '\0')) {
              lVar22 = 0;
            }
            else {
              uVar18 = (**(code **)(*plVar3 + 0x110))(plVar3);
              lVar22 = FUN_144aff482(uVar18,plVar24);
            }
            *(longlong *)(param_3 + 0x288) = lVar22;
            lVar35 = local_1d8;
          }
        }
        local_228 = local_228 & 0xffffff00;
        uVar42 = FUN_1447997cc(plVar32,lVar22,uVar44,0);
      }
      lVar39 = *(longlong *)(param_3 + 0x298);
      if (lVar39 == 0) {
        uVar18 = FUN_1407f787c();
        lVar39 = FUN_14477b664(uVar18);
        *(longlong *)(param_3 + 0x298) = lVar39;
        uVar42 = extraout_XMM0_Da_03;
      }
      plVar24 = (longlong *)(param_3 + 0x290);
      lVar22 = *(longlong *)(param_3 + 0x2a0);
      if (lVar22 == 0) {
        if ((lVar39 != 0) && (*plVar24 != 0)) {
          plVar3 = *(longlong **)(lVar39 + 0xb8);
          if ((plVar3 == (longlong *)0x0) ||
             (cVar11 = (**(code **)(*plVar3 + 0x108))(plVar3), uVar42 = extraout_XMM0_Da_21,
             cVar11 == '\0')) {
            *(undefined8 *)(param_3 + 0x2a0) = 0;
            lVar35 = local_1d8;
          }
          else {
            uVar18 = (**(code **)(*plVar3 + 0x110))(plVar3);
            lVar22 = FUN_144aff482(uVar18,plVar24);
            *(longlong *)(param_3 + 0x2a0) = lVar22;
            lVar35 = local_1d8;
            uVar42 = extraout_XMM0_Da_22;
            if (lVar22 != 0) {
              lVar39 = *(longlong *)(param_3 + 0x298);
              goto LAB_1405885a5;
            }
          }
        }
      }
      else {
LAB_1405885a5:
        uVar44 = *(undefined4 *)(lVar35 + 0x1c);
        if (lVar39 == 0) {
          uVar18 = FUN_1407f787c(uVar42,lVar22);
          lVar39 = FUN_14477b664(uVar18);
          *(longlong *)(param_3 + 0x298) = lVar39;
          lVar22 = *(longlong *)(param_3 + 0x2a0);
          if (((lVar22 == 0) && (lVar22 = 0, lVar39 != 0)) && (*plVar24 != 0)) {
            plVar3 = *(longlong **)(lVar39 + 0xb8);
            if ((plVar3 == (longlong *)0x0) ||
               (cVar11 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar11 == '\0')) {
              lVar22 = 0;
            }
            else {
              uVar18 = (**(code **)(*plVar3 + 0x110))(plVar3);
              lVar22 = FUN_144aff482(uVar18,plVar24);
            }
            *(longlong *)(param_3 + 0x2a0) = lVar22;
            lVar35 = local_1d8;
          }
        }
        local_228 = local_228 & 0xffffff00;
        uVar42 = FUN_1447997cc(plVar32,lVar22,uVar44,0);
      }
      lVar39 = *(longlong *)(param_3 + 0x2b0);
      if (lVar39 == 0) {
        uVar18 = FUN_1407f787c();
        lVar39 = FUN_14477b664(uVar18);
        *(longlong *)(param_3 + 0x2b0) = lVar39;
        uVar42 = extraout_XMM0_Da_04;
      }
      plVar24 = (longlong *)(param_3 + 0x2a8);
      lVar22 = *(longlong *)(param_3 + 0x2b8);
      if (lVar22 == 0) {
        if ((lVar39 != 0) && (*plVar24 != 0)) {
          plVar3 = *(longlong **)(lVar39 + 0xb8);
          if ((plVar3 == (longlong *)0x0) ||
             (cVar11 = (**(code **)(*plVar3 + 0x108))(plVar3), uVar42 = extraout_XMM0_Da_23,
             cVar11 == '\0')) {
            *(undefined8 *)(param_3 + 0x2b8) = 0;
            lVar35 = local_1d8;
          }
          else {
            uVar18 = (**(code **)(*plVar3 + 0x110))(plVar3);
            lVar22 = FUN_144aff482(uVar18,plVar24);
            *(longlong *)(param_3 + 0x2b8) = lVar22;
            lVar35 = local_1d8;
            uVar42 = extraout_XMM0_Da_24;
            if (lVar22 != 0) {
              lVar39 = *(longlong *)(param_3 + 0x2b0);
              goto LAB_1405885fd;
            }
          }
        }
      }
      else {
LAB_1405885fd:
        uVar44 = *(undefined4 *)(lVar35 + 0x20);
        if (lVar39 == 0) {
          uVar18 = FUN_1407f787c(uVar42,lVar22);
          lVar39 = FUN_14477b664(uVar18);
          *(longlong *)(param_3 + 0x2b0) = lVar39;
          lVar22 = *(longlong *)(param_3 + 0x2b8);
          if (((lVar22 == 0) && (lVar22 = 0, lVar39 != 0)) && (*plVar24 != 0)) {
            plVar3 = *(longlong **)(lVar39 + 0xb8);
            if ((plVar3 == (longlong *)0x0) ||
               (cVar11 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar11 == '\0')) {
              lVar22 = 0;
            }
            else {
              uVar18 = (**(code **)(*plVar3 + 0x110))(plVar3);
              lVar22 = FUN_144aff482(uVar18,plVar24);
            }
            *(longlong *)(param_3 + 0x2b8) = lVar22;
            lVar35 = local_1d8;
          }
        }
        local_228 = local_228 & 0xffffff00;
        uVar42 = FUN_1447997cc(plVar32,lVar22,uVar44,0);
      }
      lVar39 = *(longlong *)(param_3 + 0x2c8);
      if (lVar39 == 0) {
        uVar18 = FUN_1407f787c();
        lVar39 = FUN_14477b664(uVar18);
        *(longlong *)(param_3 + 0x2c8) = lVar39;
        uVar42 = extraout_XMM0_Da_05;
      }
      plVar24 = (longlong *)(param_3 + 0x2c0);
      lVar22 = *(longlong *)(param_3 + 0x2d0);
      if (lVar22 == 0) {
        if ((lVar39 != 0) && (*plVar24 != 0)) {
          plVar3 = *(longlong **)(lVar39 + 0xb8);
          if ((plVar3 == (longlong *)0x0) ||
             (cVar11 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar11 == '\0')) {
            *(undefined8 *)(param_3 + 0x2d0) = 0;
          }
          else {
            uVar18 = (**(code **)(*plVar3 + 0x110))(plVar3);
            lVar22 = FUN_144aff482(uVar18,plVar24);
            *(longlong *)(param_3 + 0x2d0) = lVar22;
            if (lVar22 != 0) {
              lVar39 = *(longlong *)(param_3 + 0x2c8);
              lVar35 = local_1d8;
              uVar42 = extraout_XMM0_Da_25;
              goto LAB_140588655;
            }
          }
        }
      }
      else {
LAB_140588655:
        uVar44 = *(undefined4 *)(lVar35 + 0x24);
        if (lVar39 == 0) {
          uVar18 = FUN_1407f787c(uVar42,lVar22);
          lVar35 = FUN_14477b664(uVar18);
          *(longlong *)(param_3 + 0x2c8) = lVar35;
          lVar22 = *(longlong *)(param_3 + 0x2d0);
          if (((lVar22 == 0) && (lVar22 = 0, lVar35 != 0)) && (*plVar24 != 0)) {
            plVar3 = *(longlong **)(lVar35 + 0xb8);
            if ((plVar3 == (longlong *)0x0) ||
               (cVar11 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar11 == '\0')) {
              lVar22 = 0;
            }
            else {
              uVar18 = (**(code **)(*plVar3 + 0x110))(plVar3);
              lVar22 = FUN_144aff482(uVar18,plVar24);
            }
            *(longlong *)(param_3 + 0x2d0) = lVar22;
          }
        }
        local_228 = local_228 & 0xffffff00;
        FUN_1447997cc(plVar32,lVar22,uVar44,0);
      }
      lVar35 = (**(code **)(*(longlong *)(lVar20 + 0x10a0) + 0x10))(lVar20 + 0x10a0);
      if (lVar35 != 0) {
        fVar43 = 0.0;
        local_c8 = 0;
        uStack_c4 = 0;
        uStack_c0 = 0;
        local_d8 = (code *)0x0;
        uStack_d0 = 0;
        uStack_cc = 0;
        uStack_bc = CONCAT31(uStack_bc._1_3_,0xff);
        uStack_e8 = 0;
        uStack_e4 = 0;
        uStack_e0 = 0;
        local_f8 = (code *)0x0;
        fStack_f0 = 0.0;
        fStack_ec = 0.0;
        uStack_dc = CONCAT31(uStack_dc._1_3_,0xff);
        uStack_108 = 0;
        uStack_104 = 0;
        uStack_100 = 0;
        local_118 = 0;
        fStack_110 = 0.0;
        fStack_10c = 0.0;
        uStack_fc = CONCAT31(uStack_fc._1_3_,0xff);
        iVar15 = *(int *)(lVar35 + 0x40);
        if (0 < iVar15) {
          lVar39 = *(longlong *)(lVar35 + 0x38);
          fVar43 = *(float *)(lVar39 + 0x30);
          local_d8 = *(code **)(lVar39 + 0x30);
          uStack_d0 = *(undefined4 *)(lVar39 + 0x38);
          uStack_cc = *(undefined4 *)(lVar39 + 0x3c);
          local_c8 = (undefined4)*(undefined8 *)(lVar39 + 0x40);
          uStack_c4 = (undefined4)((ulonglong)*(undefined8 *)(lVar39 + 0x40) >> 0x20);
          uStack_c0 = (undefined4)*(undefined8 *)(lVar39 + 0x48);
          uStack_bc = (undefined4)((ulonglong)*(undefined8 *)(lVar39 + 0x48) >> 0x20);
        }
        iVar40 = *(int *)(lVar35 + 0x58);
        if ((-1 < (longlong)iVar40) && (iVar40 < iVar15)) {
          lVar39 = (longlong)iVar40 * 0x88;
          pfVar2 = (float *)(*(longlong *)(lVar35 + 0x38) + 0x30 + lVar39);
          fVar43 = *pfVar2;
          local_f8 = *(code **)pfVar2;
          fStack_f0 = pfVar2[2];
          fStack_ec = pfVar2[3];
          puVar25 = (undefined8 *)(*(longlong *)(lVar35 + 0x38) + 0x40 + lVar39);
          uVar18 = *puVar25;
          uVar9 = puVar25[1];
          uStack_e8 = (undefined4)uVar18;
          uStack_e4 = (undefined4)((ulonglong)uVar18 >> 0x20);
          uStack_e0 = (undefined4)uVar9;
          uStack_dc = (undefined4)((ulonglong)uVar9 >> 0x20);
        }
        uVar14 = *(uint *)(lVar35 + 0x5c);
        if ((int)uVar14 < iVar15 && -1 < (int)uVar14) {
          pfVar2 = (float *)(*(longlong *)(lVar35 + 0x38) + 0x30 + (ulonglong)uVar14 * 0x88);
          fVar43 = *pfVar2;
          local_118 = *(undefined8 *)pfVar2;
          fStack_110 = pfVar2[2];
          fStack_10c = pfVar2[3];
          puVar25 = (undefined8 *)(*(longlong *)(lVar35 + 0x38) + 0x40 + (ulonglong)uVar14 * 0x88);
          uVar18 = *puVar25;
          uVar9 = puVar25[1];
          uStack_108 = (undefined4)uVar18;
          uStack_104 = (undefined4)((ulonglong)uVar18 >> 0x20);
          uStack_100 = (undefined4)uVar9;
          uStack_fc = (undefined4)((ulonglong)uVar9 >> 0x20);
        }
        plVar24 = (longlong *)CONCAT44(uStack_cc,uStack_d0);
        if ((plVar24 == (longlong *)0x0) || (local_d8._4_4_ == 0)) {
LAB_140589217:
          cVar11 = '\0';
        }
        else {
          cVar11 = '\0';
          if ((-1 < (int)(uint)local_d8) && ((int)(uint)local_d8 < DAT_14c9647dc)) {
            lVar35 = (ulonglong)(((uint)local_d8 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_d8 >> 0x10) * 8);
            if (((lVar35 == 0) || (*(int *)(lVar35 + 0x10) != local_d8._4_4_)) ||
               ((*(uint *)(lVar35 + 8) & 0x10200000) != 0)) goto LAB_140589217;
            if (*(code **)(*plVar24 + 0x10) == (code *)&LAB_1447a1f2e) {
              plVar24 = plVar24 + 0xd9;
            }
            else {
              plVar24 = (longlong *)(**(code **)(*plVar24 + 0x10))();
            }
            cVar11 = FUN_14486eb0e(plVar24,&local_d8);
            fVar43 = extraout_XMM0_Da_06;
          }
        }
        plVar24 = (longlong *)CONCAT44(fStack_ec,fStack_f0);
        if ((plVar24 == (longlong *)0x0) || (local_f8._4_4_ == 0)) {
LAB_14058921e:
          cVar12 = '\0';
        }
        else {
          cVar12 = '\0';
          if ((-1 < (int)(uint)local_f8) && ((int)(uint)local_f8 < DAT_14c9647dc)) {
            lVar35 = (ulonglong)(((uint)local_f8 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_f8 >> 0x10) * 8);
            if (((lVar35 == 0) || (*(int *)(lVar35 + 0x10) != local_f8._4_4_)) ||
               ((*(uint *)(lVar35 + 8) & 0x10200000) != 0)) goto LAB_14058921e;
            if (*(code **)(*plVar24 + 0x10) == (code *)&LAB_1447a1f2e) {
              plVar24 = plVar24 + 0xd9;
            }
            else {
              plVar24 = (longlong *)(**(code **)(*plVar24 + 0x10))();
            }
            cVar12 = FUN_14486eb0e(plVar24,&local_f8);
            fVar43 = extraout_XMM0_Da_07;
          }
        }
        plVar24 = (longlong *)CONCAT44(fStack_10c,fStack_110);
        if ((plVar24 == (longlong *)0x0) || (local_118._4_4_ == 0)) {
LAB_140589226:
          cVar13 = '\0';
        }
        else {
          cVar13 = '\0';
          if ((-1 < (int)(uint)local_118) && ((int)(uint)local_118 < DAT_14c9647dc)) {
            lVar35 = (ulonglong)(((uint)local_118 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_118 >> 0x10) * 8);
            if (((lVar35 == 0) || (*(int *)(lVar35 + 0x10) != local_118._4_4_)) ||
               ((*(uint *)(lVar35 + 8) & 0x10200000) != 0)) goto LAB_140589226;
            if (*(code **)(*plVar24 + 0x10) == (code *)&LAB_1447a1f2e) {
              plVar24 = plVar24 + 0xd9;
            }
            else {
              plVar24 = (longlong *)(**(code **)(*plVar24 + 0x10))();
            }
            cVar13 = FUN_14486eb0e(plVar24,&local_118);
            fVar43 = extraout_XMM0_Da_08;
          }
        }
        fVar46 = 0.0;
        fVar49 = 0.0;
        if (cVar11 != '\0') {
          lVar35 = FUN_14008e0ae(&local_d8);
          fVar43 = *(float *)(lVar35 + 0x30) - *(float *)(lVar35 + 0x24);
          fVar49 = 0.0;
          if ((fVar43 != 0.0) || (NAN(fVar43))) {
            fVar49 = (*(float *)(lVar35 + 200) - *(float *)(lVar35 + 0x24)) / fVar43;
          }
        }
        if (cVar12 != '\0') {
          lVar35 = FUN_14008e0ae(&local_f8);
          fVar43 = *(float *)(lVar35 + 0x30) - *(float *)(lVar35 + 0x24);
          fVar46 = 0.0;
          if ((fVar43 != 0.0) || (NAN(fVar43))) {
            fVar46 = (*(float *)(lVar35 + 200) - *(float *)(lVar35 + 0x24)) / fVar43;
          }
        }
        fVar45 = 0.0;
        if (cVar13 != '\0') {
          lVar35 = FUN_14008e0ae(&local_118);
          fVar43 = *(float *)(lVar35 + 0x30) - *(float *)(lVar35 + 0x24);
          fVar45 = 0.0;
          if ((fVar43 != 0.0) || (NAN(fVar43))) {
            fVar45 = (*(float *)(lVar35 + 200) - *(float *)(lVar35 + 0x24)) / fVar43;
          }
        }
        lVar35 = *(longlong *)(param_3 + 0x2e0);
        if (lVar35 == 0) {
          uVar18 = FUN_1407f787c();
          lVar35 = FUN_14477b664(uVar18);
          *(longlong *)(param_3 + 0x2e0) = lVar35;
          fVar43 = extraout_XMM0_Da_09;
        }
        plVar24 = (longlong *)(param_3 + 0x2d8);
        lVar39 = *(longlong *)(param_3 + 0x2e8);
        if (lVar39 == 0) {
          if ((lVar35 != 0) && (*plVar24 != 0)) {
            plVar3 = *(longlong **)(lVar35 + 0xb8);
            if ((plVar3 == (longlong *)0x0) ||
               (cVar11 = (**(code **)(*plVar3 + 0x108))(plVar3), fVar43 = extraout_XMM0_Da_26,
               cVar11 == '\0')) {
              *(undefined8 *)(param_3 + 0x2e8) = 0;
            }
            else {
              uVar18 = (**(code **)(*plVar3 + 0x110))(plVar3);
              lVar39 = FUN_144aff482(uVar18,plVar24);
              *(longlong *)(param_3 + 0x2e8) = lVar39;
              fVar43 = extraout_XMM0_Da_27;
              if (lVar39 != 0) {
                lVar35 = *(longlong *)(param_3 + 0x2e0);
                goto LAB_140588a3b;
              }
            }
          }
        }
        else {
LAB_140588a3b:
          if (lVar35 == 0) {
            uVar18 = FUN_1407f787c(fVar43,lVar39);
            lVar35 = FUN_14477b664(uVar18);
            *(longlong *)(param_3 + 0x2e0) = lVar35;
            lVar39 = *(longlong *)(param_3 + 0x2e8);
            if (((lVar39 == 0) && (lVar39 = 0, lVar35 != 0)) && (*plVar24 != 0)) {
              plVar3 = *(longlong **)(lVar35 + 0xb8);
              if ((plVar3 == (longlong *)0x0) ||
                 (cVar11 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar11 == '\0')) {
                lVar39 = 0;
              }
              else {
                uVar18 = (**(code **)(*plVar3 + 0x110))(plVar3);
                lVar39 = FUN_144aff482(uVar18,plVar24);
              }
              *(longlong *)(param_3 + 0x2e8) = lVar39;
            }
          }
          local_228 = local_228 & 0xffffff00;
          fVar43 = (float)FUN_1447997cc(plVar32,lVar39,fVar49,0);
        }
        lVar35 = *(longlong *)(param_3 + 0x2f8);
        if (lVar35 == 0) {
          uVar18 = FUN_1407f787c();
          lVar35 = FUN_14477b664(uVar18);
          *(longlong *)(param_3 + 0x2f8) = lVar35;
          fVar43 = extraout_XMM0_Da_10;
        }
        plVar24 = (longlong *)(param_3 + 0x2f0);
        lVar39 = *(longlong *)(param_3 + 0x300);
        if (lVar39 == 0) {
          if ((lVar35 != 0) && (*plVar24 != 0)) {
            plVar3 = *(longlong **)(lVar35 + 0xb8);
            if ((plVar3 == (longlong *)0x0) ||
               (cVar11 = (**(code **)(*plVar3 + 0x108))(plVar3), fVar43 = extraout_XMM0_Da_28,
               cVar11 == '\0')) {
              *(undefined8 *)(param_3 + 0x300) = 0;
            }
            else {
              uVar18 = (**(code **)(*plVar3 + 0x110))(plVar3);
              lVar39 = FUN_144aff482(uVar18,plVar24);
              *(longlong *)(param_3 + 0x300) = lVar39;
              fVar43 = extraout_XMM0_Da_29;
              if (lVar39 != 0) {
                lVar35 = *(longlong *)(param_3 + 0x2f8);
                goto LAB_140588a8f;
              }
            }
          }
        }
        else {
LAB_140588a8f:
          if (lVar35 == 0) {
            uVar18 = FUN_1407f787c(fVar43,lVar39);
            lVar35 = FUN_14477b664(uVar18);
            *(longlong *)(param_3 + 0x2f8) = lVar35;
            lVar39 = *(longlong *)(param_3 + 0x300);
            if (((lVar39 == 0) && (lVar39 = 0, lVar35 != 0)) && (*plVar24 != 0)) {
              plVar3 = *(longlong **)(lVar35 + 0xb8);
              if ((plVar3 == (longlong *)0x0) ||
                 (cVar11 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar11 == '\0')) {
                lVar39 = 0;
              }
              else {
                uVar18 = (**(code **)(*plVar3 + 0x110))(plVar3);
                lVar39 = FUN_144aff482(uVar18,plVar24);
              }
              *(longlong *)(param_3 + 0x300) = lVar39;
            }
          }
          local_228 = local_228 & 0xffffff00;
          fVar43 = (float)FUN_1447997cc(plVar32,lVar39,fVar46,0);
        }
        lVar35 = *(longlong *)(param_3 + 0x328);
        if (lVar35 == 0) {
          uVar18 = FUN_1407f787c();
          lVar35 = FUN_14477b664(uVar18);
          *(longlong *)(param_3 + 0x328) = lVar35;
          fVar43 = extraout_XMM0_Da_11;
        }
        plVar24 = (longlong *)(param_3 + 800);
        lVar39 = *(longlong *)(param_3 + 0x330);
        if (lVar39 == 0) {
          if ((lVar35 != 0) && (*plVar24 != 0)) {
            plVar3 = *(longlong **)(lVar35 + 0xb8);
            if ((plVar3 == (longlong *)0x0) ||
               (cVar11 = (**(code **)(*plVar3 + 0x108))(plVar3), fVar43 = extraout_XMM0_Da_30,
               cVar11 == '\0')) {
              *(undefined8 *)(param_3 + 0x330) = 0;
            }
            else {
              uVar18 = (**(code **)(*plVar3 + 0x110))(plVar3);
              lVar39 = FUN_144aff482(uVar18,plVar24);
              *(longlong *)(param_3 + 0x330) = lVar39;
              fVar43 = extraout_XMM0_Da_31;
              if (lVar39 != 0) {
                lVar35 = *(longlong *)(param_3 + 0x328);
                goto LAB_140588ae2;
              }
            }
          }
        }
        else {
LAB_140588ae2:
          if (lVar35 == 0) {
            uVar18 = FUN_1407f787c(fVar43,lVar39);
            lVar35 = FUN_14477b664(uVar18);
            *(longlong *)(param_3 + 0x328) = lVar35;
            lVar39 = *(longlong *)(param_3 + 0x330);
            if (((lVar39 == 0) && (lVar39 = 0, lVar35 != 0)) && (*plVar24 != 0)) {
              plVar3 = *(longlong **)(lVar35 + 0xb8);
              if ((plVar3 == (longlong *)0x0) ||
                 (cVar11 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar11 == '\0')) {
                lVar39 = 0;
              }
              else {
                uVar18 = (**(code **)(*plVar3 + 0x110))(plVar3);
                lVar39 = FUN_144aff482(uVar18,plVar24);
              }
              *(longlong *)(param_3 + 0x330) = lVar39;
            }
          }
          local_228 = local_228 & 0xffffff00;
          fVar43 = (float)FUN_1447997cc(plVar32,lVar39,fVar45,0);
        }
        lVar35 = *(longlong *)(param_3 + 0x310);
        if (lVar35 == 0) {
          uVar18 = FUN_1407f787c();
          lVar35 = FUN_14477b664(uVar18);
          *(longlong *)(param_3 + 0x310) = lVar35;
          fVar43 = extraout_XMM0_Da_12;
        }
        plVar24 = (longlong *)(param_3 + 0x308);
        lVar39 = *(longlong *)(param_3 + 0x318);
        if (lVar39 == 0) {
          if ((lVar35 != 0) && (*plVar24 != 0)) {
            plVar3 = *(longlong **)(lVar35 + 0xb8);
            if ((plVar3 == (longlong *)0x0) ||
               (cVar11 = (**(code **)(*plVar3 + 0x108))(plVar3), fVar43 = extraout_XMM0_Da_32,
               cVar11 == '\0')) {
              *(undefined8 *)(param_3 + 0x318) = 0;
            }
            else {
              uVar18 = (**(code **)(*plVar3 + 0x110))(plVar3);
              lVar39 = FUN_144aff482(uVar18,plVar24);
              *(longlong *)(param_3 + 0x318) = lVar39;
              fVar43 = extraout_XMM0_Da_33;
              if (lVar39 != 0) {
                lVar35 = *(longlong *)(param_3 + 0x310);
                goto LAB_140588b35;
              }
            }
          }
        }
        else {
LAB_140588b35:
          if (cVar12 == '\0') {
            uVar42 = 0;
          }
          else {
            uVar42 = 0x3f800000;
          }
          if (lVar35 == 0) {
            uVar18 = FUN_1407f787c(fVar43,lVar39);
            lVar35 = FUN_14477b664(uVar18);
            *(longlong *)(param_3 + 0x310) = lVar35;
            lVar39 = *(longlong *)(param_3 + 0x318);
            if (((lVar39 == 0) && (lVar39 = 0, lVar35 != 0)) && (*plVar24 != 0)) {
              plVar3 = *(longlong **)(lVar35 + 0xb8);
              if ((plVar3 == (longlong *)0x0) ||
                 (cVar11 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar11 == '\0')) {
                lVar39 = 0;
              }
              else {
                uVar18 = (**(code **)(*plVar3 + 0x110))(plVar3);
                lVar39 = FUN_144aff482(uVar18,plVar24);
              }
              *(longlong *)(param_3 + 0x318) = lVar39;
            }
          }
          local_228 = local_228 & 0xffffff00;
          fVar43 = (float)FUN_1447997cc(plVar32,lVar39,uVar42,0);
        }
        lVar35 = *(longlong *)(param_3 + 0x340);
        if (lVar35 == 0) {
          uVar18 = FUN_1407f787c();
          lVar35 = FUN_14477b664(uVar18);
          *(longlong *)(param_3 + 0x340) = lVar35;
          fVar43 = extraout_XMM0_Da_34;
        }
        plVar24 = (longlong *)(param_3 + 0x338);
        lVar39 = *(longlong *)(param_3 + 0x348);
        if (lVar39 == 0) {
          if ((lVar35 != 0) && (*plVar24 != 0)) {
            plVar3 = *(longlong **)(lVar35 + 0xb8);
            if ((plVar3 == (longlong *)0x0) ||
               (cVar11 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar11 == '\0')) {
              *(undefined8 *)(param_3 + 0x348) = 0;
            }
            else {
              uVar18 = (**(code **)(*plVar3 + 0x110))(plVar3);
              lVar39 = FUN_144aff482(uVar18,plVar24);
              *(longlong *)(param_3 + 0x348) = lVar39;
              if (lVar39 != 0) {
                lVar35 = *(longlong *)(param_3 + 0x340);
                fVar43 = extraout_XMM0_Da_35;
                goto LAB_140589430;
              }
            }
          }
        }
        else {
LAB_140589430:
          if (cVar13 == '\0') {
            uVar42 = 0;
          }
          else {
            uVar42 = 0x3f800000;
          }
          if (lVar35 == 0) {
            uVar18 = FUN_1407f787c(fVar43,lVar39);
            lVar35 = FUN_14477b664(uVar18);
            *(longlong *)(param_3 + 0x340) = lVar35;
            lVar39 = *(longlong *)(param_3 + 0x348);
            if (((lVar39 == 0) && (lVar39 = 0, lVar35 != 0)) && (*plVar24 != 0)) {
              plVar3 = *(longlong **)(lVar35 + 0xb8);
              if ((plVar3 == (longlong *)0x0) ||
                 (cVar11 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar11 == '\0')) {
                lVar39 = 0;
              }
              else {
                uVar18 = (**(code **)(*plVar3 + 0x110))(plVar3);
                lVar39 = FUN_144aff482(uVar18,plVar24);
              }
              *(longlong *)(param_3 + 0x348) = lVar39;
            }
          }
          local_228 = local_228 & 0xffffff00;
          FUN_1447997cc(plVar32,lVar39,uVar42,0);
        }
      }
      lVar35 = local_1a8;
      *(int *)(plVar32 + 0x21) = (int)plVar32[0x21] + -1;
      if (((int)plVar32[0x26] < 1) && (FUN_1400847bc(plVar32 + 0x17,0), (int)plVar32[0x21] == 0)) {
        FUN_140087e46(plVar32);
        if (*plVar32 != -1) {
          if (DAT_14cb259f8 == 0) goto LAB_1405894f4;
          FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar32);
        }
        if (DAT_14cb259f8 != 0) {
          FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar32);
        }
      }
LAB_1405894f4:
      if (*pcVar10 == '\0') {
        if ((lVar35 == 0) || (lVar35 = *(longlong *)(lVar35 + 0x1c8), lVar35 == 0)) {
          if (*(longlong *)(lVar20 + 0x1c8) == 0) {
            local_c8 = (undefined4)DAT_14c8462e8;
            uStack_c4 = (undefined4)((ulonglong)DAT_14c8462e8 >> 0x20);
            local_d8 = DAT_14c8462d8;
            uStack_d0 = (undefined4)DAT_14c8462e0;
            uStack_cc = (undefined4)((ulonglong)DAT_14c8462e0 >> 0x20);
            lVar39 = 0;
          }
          else {
            FUN_14141a100(*(longlong *)(lVar20 + 0x1c8),&local_d8);
            lVar39 = *(longlong *)(lVar20 + 0x1c8);
          }
          dVar48 = (double)CONCAT44(uStack_c4,local_c8);
          pcVar33 = local_d8;
          dVar5 = (double)CONCAT44(uStack_cc,uStack_d0);
        }
        else {
          lVar39 = *(longlong *)(lVar20 + 0x1c8);
          if (lVar39 == 0) {
            pdVar23 = (double *)&DAT_14c8464e0;
            uVar42 = SUB84(DAT_14c8464f0,0);
            uVar44 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
          }
          else {
            pdVar23 = (double *)(lVar39 + 0x260);
            uVar42 = (undefined4)*(undefined8 *)(lVar39 + 0x270);
            uVar44 = (undefined4)((ulonglong)*(undefined8 *)(lVar39 + 0x270) >> 0x20);
          }
          dVar47 = *(double *)(lVar35 + 0x270) - (double)CONCAT44(uVar44,uVar42);
          pcVar7 = (code *)(*(double *)(lVar35 + 0x260) - *pdVar23);
          dVar8 = *(double *)(lVar35 + 0x268) - pdVar23[1];
          dVar4 = dVar47 * dVar47 + (double)pcVar7 * (double)pcVar7 + dVar8 * dVar8;
          if (((dVar4 != 1.0) || (dVar48 = dVar47, pcVar33 = pcVar7, dVar5 = dVar8, NAN(dVar4))) &&
             (dVar48 = DAT_14c8464f0, pcVar33 = DAT_14c8464e0, dVar5 = DAT_14c8464e8,
             9.99999993922529e-09 <= dVar4)) {
            dVar5 = 1.0 / SQRT(dVar4);
            dVar48 = dVar47 * dVar5;
            pcVar33 = (code *)((double)pcVar7 * dVar5);
            dVar5 = dVar8 * dVar5;
          }
        }
        plVar32 = local_148;
        if (lVar39 == 0) {
          pdVar23 = (double *)&DAT_14c8464e0;
          uVar42 = SUB84(DAT_14c8464f0,0);
          uVar44 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        }
        else {
          uVar42 = (undefined4)*(undefined8 *)(lVar39 + 0x270);
          uVar44 = (undefined4)((ulonglong)*(undefined8 *)(lVar39 + 0x270) >> 0x20);
          pdVar23 = (double *)(lVar39 + 0x260);
        }
        dVar4 = dVar5 * 100.0 + pdVar23[1];
        dVar5 = *pdVar23;
        plVar24 = local_148 + 0x28;
        uVar14 = *(uint *)((longlong)local_148 + 0x1d4);
        iVar15 = 0;
        *(undefined4 *)(local_148 + 0x3a) = 0;
        if ((int)uVar14 < 0) {
          FUN_147f80112(plVar24,0);
          iVar15 = (int)plVar32[0x3a];
          uVar14 = *(uint *)((longlong)plVar32 + 0x1d4);
        }
        *(undefined1 *)((longlong)plVar32 + 0x26c) = 0;
        *(uint *)(plVar32 + 0x3a) = iVar15 + 1U;
        if (uVar14 < iVar15 + 1U) {
          FUN_140089f7a(plVar24,iVar15);
        }
        if ((longlong *)plVar32[0x38] != (longlong *)0x0) {
          plVar24 = (longlong *)plVar32[0x38];
        }
        lVar35 = (longlong)iVar15;
        plVar24[lVar35 * 0x10] = 0;
        (plVar24 + lVar35 * 0x10)[1] = 0;
        plVar3 = plVar24 + lVar35 * 0x10 + 2;
        *(undefined4 *)plVar3 = 0;
        *(undefined4 *)((longlong)plVar3 + 4) = 0;
        *(undefined4 *)(plVar3 + 1) = 0;
        *(undefined4 *)((longlong)plVar3 + 0xc) = 0x3ff00000;
        auVar6._8_4_ = SUB84(dVar4,0);
        auVar6._0_8_ = (double)pcVar33 * 100.0 + dVar5;
        auVar6._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
        *(undefined1 (*) [16])(plVar24 + lVar35 * 0x10 + 4) = auVar6;
        plVar24[lVar35 * 0x10 + 6] = (longlong)(dVar48 * 100.0 + (double)CONCAT44(uVar44,uVar42));
        (plVar24 + lVar35 * 0x10 + 6)[1] = 0;
        plVar3 = plVar24 + lVar35 * 0x10 + 8;
        *(undefined4 *)plVar3 = 0;
        *(undefined4 *)((longlong)plVar3 + 4) = 0x3ff00000;
        *(undefined4 *)(plVar3 + 1) = 0;
        *(undefined4 *)((longlong)plVar3 + 0xc) = 0x3ff00000;
        plVar24[lVar35 * 0x10 + 10] = 0x3ff0000000000000;
        (plVar24 + lVar35 * 0x10 + 10)[1] = 0;
        plVar24[lVar35 * 0x10 + 0xc] = 0x3f800000;
        *(undefined2 *)(plVar24 + lVar35 * 0x10 + 0xd) = 0;
        *(undefined8 *)((longlong)plVar24 + lVar35 * 0x80 + 0x6c) = 0;
        FUN_1447906c0(plVar32,0);
        local_228 = 0;
        FUN_14071ab80(local_148,&local_160,&local_130,lVar20);
        local_160 = 0;
        local_158 = 0xffffffffffffffff;
      }
      else {
        local_1b0 = local_1b0 + 0x370;
        lVar20 = local_128;
        if (local_128 == 0) {
          lVar20 = FUN_140067708();
        }
        lVar35 = local_130;
        uVar21 = FUN_14477b664(lVar20);
        uVar14 = ((uint)(uVar21 >> 0x14) & 0xffff ^ (uint)(uVar21 >> 4)) * -0x7a143595;
        uVar27 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        uVar14 = (uint)((ulonglong)lVar35 >> 0x10);
        uVar30 = (uint)lVar35 & 0xffff;
        uVar42 = FUN_144a78877(((uint)lVar35 << 0x10 | uVar30) + (int)((ulonglong)lVar35 >> 0x20) +
                               (uVar14 << 0x13 | uVar14 & 0xffff) + (uVar30 >> 4),
                               uVar27 >> 0x10 ^ uVar27);
        uVar18 = FUN_148dc4472(local_1b0,uVar42,&local_130);
        local_d8 = (code *)0x0;
        FUN_14485c47a(&local_d8,local_1a8);
        puVar25 = (undefined8 *)
                  FUN_148dc4dda(uVar18,(uint)((ulonglong)local_d8 >> 0x20) ^ (uint)local_d8,
                                &local_d8);
        local_178 = *(undefined4 *)(puVar25 + 2);
        uStack_174 = *(undefined4 *)((longlong)puVar25 + 0x14);
        uStack_170 = *(undefined4 *)(puVar25 + 3);
        uStack_16c = *(undefined4 *)((longlong)puVar25 + 0x1c);
        cVar11 = FUN_1458df536(local_140);
        if (cVar11 == '\0') {
          if (local_128 == 0) {
            uVar18 = FUN_140067708();
            local_128 = FUN_14477b664(uVar18);
          }
          lVar20 = local_120;
          if (((local_120 == 0) && (lVar20 = 0, local_128 != 0)) && (local_130 != 0)) {
            plVar32 = *(longlong **)(local_128 + 0xb8);
            if ((plVar32 == (longlong *)0x0) ||
               (cVar11 = (**(code **)(*plVar32 + 0x108))(), cVar11 == '\0')) {
              lVar20 = 0;
              local_120 = lVar20;
            }
            else {
              uVar18 = (**(code **)(*plVar32 + 0x110))(plVar32);
              lVar20 = FUN_144aff482(uVar18,&local_130);
              local_120 = lVar20;
            }
          }
          FUN_1415a48ac(lVar20,&local_f8);
          local_180 = local_148;
          if (local_148 != (longlong *)0x0) {
            *(int *)(local_148 + 0x21) = (int)local_148[0x21] + 1;
          }
          local_190 = local_140;
          local_188 = local_138;
          if (local_138 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_138 + 1) = (int)local_138[1] + 1;
            UNLOCK();
          }
          FUN_140c72376(&local_d8,&local_190,&local_180,local_f8);
          if (puVar25 != &local_d8) {
            *puVar25 = local_d8;
            local_d8 = (code *)0x0;
            plVar32 = (longlong *)puVar25[1];
            puVar25[1] = CONCAT44(uStack_cc,uStack_d0);
            uStack_d0 = 0;
            uStack_cc = 0;
            if (plVar32 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar32 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar32 + 0x10))();
              }
            }
          }
          *(undefined4 *)(puVar25 + 2) = local_c8;
          *(undefined4 *)((longlong)puVar25 + 0x14) = uStack_c4;
          *(undefined4 *)(puVar25 + 3) = uStack_c0;
          *(undefined4 *)((longlong)puVar25 + 0x1c) = uStack_bc;
          plVar32 = (longlong *)CONCAT44(uStack_cc,uStack_d0);
          if (plVar32 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar32 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar32 + 0x10))();
            }
          }
          if ((local_f8 != (code *)0x0) && ((DAT_14cb26569 & 1) != 0)) {
            FUN_1400848c0(*(undefined8 *)(local_f8 + 0x50));
          }
        }
        *(undefined4 *)(puVar25 + 4) = *(undefined4 *)(pcVar10 + 4);
        *(undefined4 *)((longlong)puVar25 + 0x24) = *(undefined4 *)(pcVar10 + 8);
      }
      if (((local_148 != (longlong *)0x0) &&
          (*(int *)(local_148 + 0x21) = (int)local_148[0x21] + -1, (int)local_148[0x26] < 1)) &&
         (FUN_1400847bc(local_148 + 0x17,0), (int)local_148[0x21] == 0)) {
        FUN_140087e46(local_148);
        if (*local_148 != -1) {
          if (DAT_14cb259f8 == 0) goto LAB_14058971c;
          FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),local_148);
        }
        if (DAT_14cb259f8 != 0) {
          FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),local_148);
        }
      }
    }
  }
LAB_14058971c:
  if (local_138 != (longlong *)0x0) {
    LOCK();
    plVar32 = local_138 + 1;
    *(int *)plVar32 = (int)*plVar32 + -1;
    UNLOCK();
    if ((int)*plVar32 == 0) {
      (**(code **)*local_138)(local_138);
      LOCK();
      piVar1 = (int *)((longlong)local_138 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_138 + 0x10))(local_138);
      }
    }
  }
LAB_140589733:
  if ((local_80 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14058a442 FUN_14058a442 body=180 status=ok
// SIG undefined FUN_14058a442(void)

int FUN_14058a442(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x14);
        cVar1 = FUN_140584b78(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_14058a4d0;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_14058a4d0:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14058a4f8 FUN_14058a4f8 body=653 status=ok
// SIG undefined FUN_14058a4f8(void)

int FUN_14058a4f8(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  longlong lVar15;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar10 = *param_1;
      do {
        lVar15 = (longlong)iVar1 * 0x70;
        plVar9 = (longlong *)(lVar10 + lVar15);
        if (*(longlong *)(lVar10 + 8 + lVar15) == 0) {
          uVar13 = FUN_140067708();
          lVar10 = FUN_14477b664(uVar13);
          plVar9[1] = lVar10;
        }
        lVar10 = param_3[1];
        if (lVar10 == 0) {
          lVar10 = FUN_140067708();
        }
        lVar2 = *param_3;
        lVar10 = FUN_14477b664(lVar10);
        iVar7 = 0;
        if ((lVar10 != 0) && (plVar3 = *(longlong **)(lVar10 + 0xb8), plVar3 != (longlong *)0x0)) {
          lVar11 = *plVar3;
          pcVar4 = *(code **)(lVar11 + 0x108);
          if (pcVar4 != (code *)&LAB_14478342e && pcVar4 != (code *)&LAB_144783422) {
            cVar6 = (*pcVar4)(plVar3);
            iVar7 = 0;
            if (cVar6 == '\0') goto LAB_14058a5fc;
            lVar11 = *plVar3;
          }
          pcVar4 = *(code **)(lVar11 + 0x110);
          ppuVar14 = &PTR_PTR_14c763408;
          if ((pcVar4 != (code *)&LAB_144783426) &&
             (ppuVar14 = &PTR_PTR_14c75f798, pcVar4 != (code *)&LAB_144783432)) {
            ppuVar14 = (undefined **)(*pcVar4)(plVar3);
          }
          iVar7 = FUN_144aff48c(ppuVar14);
        }
LAB_14058a5fc:
        lVar11 = *plVar9;
        lVar5 = plVar9[1];
        iVar8 = 0;
        if ((lVar5 != 0) &&
           (plVar9 = *(longlong **)(lVar5 + 0xb8), iVar8 = 0, plVar9 != (longlong *)0x0)) {
          lVar12 = *plVar9;
          pcVar4 = *(code **)(lVar12 + 0x108);
          if (pcVar4 != (code *)&LAB_14478342e && pcVar4 != (code *)&LAB_144783422) {
            cVar6 = (*pcVar4)(plVar9);
            if (cVar6 == '\0') goto LAB_14058a664;
            lVar12 = *plVar9;
          }
          pcVar4 = *(code **)(lVar12 + 0x110);
          ppuVar14 = &PTR_PTR_14c763408;
          if ((pcVar4 != (code *)&LAB_144783426) &&
             (ppuVar14 = &PTR_PTR_14c75f798, pcVar4 != (code *)&LAB_144783432)) {
            ppuVar14 = (undefined **)(*pcVar4)(plVar9);
          }
          iVar8 = FUN_144aff48c(ppuVar14);
        }
LAB_14058a664:
        if ((iVar8 == iVar7) && (lVar11 == lVar2)) {
          if (lVar5 == lVar10) {
            return iVar1;
          }
          if ((lVar10 != 0) && (lVar5 != 0)) {
            iVar7 = *(int *)(lVar10 + 0x38);
            iVar8 = *(int *)(lVar5 + 0x38);
            if ((iVar7 <= iVar8) &&
               (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar7 * 8) == lVar10 + 0x30))
            {
              return iVar1;
            }
            if ((iVar8 <= iVar7) &&
               (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar8 * 8) == lVar5 + 0x30))
            {
              return iVar1;
            }
          }
        }
        lVar10 = *param_1;
        iVar1 = *(int *)(lVar10 + 0x68 + lVar15);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 14058a790 FUN_14058a790 body=159 status=ok
// SIG undefined FUN_14058a790(void)

undefined8 * FUN_14058a790(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14a76b2c0;
  param_1[5] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x11] = DAT_14c8464e0;
  param_1[0x12] = uVar1;
  param_1[0x13] = DAT_14c8464f0;
  param_1[0xc] = 0x3ff0000000000000;
  param_1[0xd] = 0x3ff0000000000000;
  param_1[0xe] = 0x3ff0000000000000;
  return param_1;
}



// FUNCTION 14058a830 FUN_14058a830 body=555 status=ok
// SIG undefined FUN_14058a830(void)

undefined8 * FUN_14058a830(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  
  *param_1 = &PTR_FUN_14addcb60;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  puVar1 = (uint *)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 7);
  if (iVar3 == 0) {
    uVar12 = 0;
    uVar14 = 1;
    iVar4 = 0;
    iVar10 = 0;
  }
  else {
    puVar8 = (uint *)param_1[6];
    if ((uint *)param_1[6] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar13 = *puVar8;
    if (uVar13 == 0) {
      iVar4 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar4 = iVar3 + -1;
      }
      uVar12 = 0;
      uVar14 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar14 = uVar12;
      }
      iVar10 = 0;
      do {
        if (uVar14 == uVar12) goto LAB_14058a99a;
        iVar10 = iVar10 + 0x20;
        uVar13 = puVar8[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar12 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar13 & uVar13);
    uVar2 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar4) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 < iVar3) {
    uVar13 = 0xffffffff;
    do {
      FUN_14058aa5c((longlong)iVar4 * 0x130 + param_1[2] + 0x10);
      uVar13 = ~(uint)uVar14 & uVar13;
      puVar8 = (uint *)param_1[6];
      if ((uint *)param_1[6] == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar3 = *(int *)(param_1 + 7);
      iVar4 = (int)uVar12;
      lVar11 = (longlong)iVar4;
      uVar5 = puVar8[lVar11] & uVar13;
      if (uVar5 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar6 <= iVar4) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = puVar8[lVar11 + lVar9 + 1];
          if (uVar5 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar7 - lVar11 == lVar9) goto LAB_14058a99a;
        }
        uVar12 = (ulonglong)(iVar4 + (int)lVar9 + 1);
        uVar13 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar5 & uVar5);
      uVar2 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar3);
  }
LAB_14058a99a:
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_14572247c(param_1 + 2,0);
  }
  param_1[8] = 0xffffffff;
  *(undefined4 *)(param_1 + 7) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x3c)) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
    FUN_1446efbd8(puVar1,0);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14058aa5c FUN_14058aa5c body=214 status=ok
// SIG undefined FUN_14058aa5c(void)

void FUN_14058aa5c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x48);
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
  plVar3 = *(longlong **)(param_1 + 0x38);
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
  plVar3 = *(longlong **)(param_1 + 0x28);
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
  plVar3 = *(longlong **)(param_1 + 0x18);
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
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00014058ab26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14058ab40 FUN_14058ab40 body=223 status=ok
// SIG undefined FUN_14058ab40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14058ab40(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a1a0ad0;
  plVar3 = (longlong *)param_1[7];
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
  plVar3 = (longlong *)param_1[4];
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
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar3 = (longlong *)param_1[1], plVar3 != (longlong *)0x0)) {
    if (plVar3[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar3 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar3;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14058ac20 FUN_14058ac20 body=145 status=ok
// SIG undefined FUN_14058ac20(void)

undefined8 * FUN_14058ac20(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
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
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  FUN_14058acb2(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 14058acb2 FUN_14058acb2 body=154 status=ok
// SIG undefined FUN_14058acb2(void)

longlong FUN_14058acb2(longlong param_1,longlong param_2)

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
    if (iVar2 == 0) goto LAB_14058acde;
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
LAB_14058acde:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_14058ad4c(param_1,param_2);
  return param_1;
}



// FUNCTION 14058ad4c FUN_14058ad4c body=336 status=ok
// SIG undefined FUN_14058ad4c(void)

undefined8 * FUN_14058ad4c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 *_Dst;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1407a3aa0(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140549c28(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar3 = *(int *)(param_2 + 5) + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar5 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar5;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar2 = *(int *)(param_2 + 5);
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      puVar4 = (undefined8 *)param_2[4];
      if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
        puVar4 = param_2 + 2;
      }
      _Dst = param_1 + 2;
      if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
        _Dst = (undefined8 *)param_1[4];
      }
      memcpy(_Dst,puVar4,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (0 < (int)uVar1) {
      puVar7 = (undefined4 *)*param_1;
      puVar8 = (undefined4 *)*param_2;
      uVar6 = 0;
      do {
        puVar4 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar4 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *puVar7 = *puVar8;
          puVar7[1] = puVar8[1];
        }
        else {
          FUN_14058ae9c(puVar7,puVar8);
          *(undefined8 *)(puVar7 + 8) = *(undefined8 *)(puVar8 + 8);
        }
        uVar6 = uVar6 + 1;
        puVar8 = puVar8 + 10;
        puVar7 = puVar7 + 10;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 14058ae9c FUN_14058ae9c body=156 status=ok
// SIG undefined FUN_14058ae9c(void)

undefined8 * FUN_14058ae9c(undefined8 *param_1,undefined8 *param_2)

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
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 14058af3e FUN_14058af3e body=263 status=ok
// SIG undefined FUN_14058af3e(void)

void FUN_14058af3e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong lVar8;
  
  if ((*(byte *)(param_1 + 0x28) & 4) == 0) {
    *(undefined1 *)((longlong)param_4 + 0x14) = *(undefined1 *)(param_1 + 0x20);
    *(undefined4 *)(param_4 + 3) = *(undefined4 *)(param_1 + 0x24);
    *(undefined8 *)((longlong)param_4 + 0x1c) = 0x500000008;
    return;
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    if ((DAT_14c86a9f8 == '\x01') &&
       (iVar1 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar1 != 2)) {
      if (iVar1 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        if (DVar6 == DVar7) goto LAB_14058afad;
      }
      cVar5 = (*(code *)PTR_FUN_14c758760)();
      if (cVar5 == '\0') goto LAB_14058afb3;
    }
LAB_14058afad:
    lVar8 = *(longlong *)(param_1 + 0x10);
    goto LAB_14058b028;
  }
LAB_14058afb3:
  lVar8 = *(longlong *)(param_1 + 0x18);
  if (lVar8 == 0) {
LAB_14058afe9:
    FUN_140033559(".\\Runtime/Engine/Private/Materials/MaterialShared.cpp",0x358,
                  L"Tried to access cooked shader map ID from unknown thread");
  }
  else {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (DAT_14c86a9fc == 0) {
      if (((iVar1 != 2) && (iVar1 != 0x10)) && (iVar1 != 0x40000010)) goto LAB_14058afe9;
    }
    else if ((iVar1 - 0x10U & 0xbfffffef) != 0) goto LAB_14058afe9;
LAB_14058b028:
    *(undefined4 *)(param_4 + 4) = *(undefined4 *)(lVar8 + 0x70);
    uVar2 = *(undefined8 *)(lVar8 + 0x50);
    uVar3 = *(undefined8 *)(lVar8 + 0x58);
    uVar4 = *(undefined8 *)(lVar8 + 0x68);
    param_4[2] = *(undefined8 *)(lVar8 + 0x60);
    param_4[3] = uVar4;
    *param_4 = uVar2;
    param_4[1] = uVar3;
  }
  return;
}



// FUNCTION 14058b04c FUN_14058b04c body=57 status=ok
// SIG undefined FUN_14058b04c(void)

void FUN_14058b04c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21958 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21958 = FUN_140002ddd(FUN_146434737,uVar1,L"GbxBrainAspect_Timer");
  }
  return;
}



// FUNCTION 14058b086 FUN_14058b086 body=713 status=ok
// SIG undefined FUN_14058b086(void)

void FUN_14058b086(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  longlong local_70;
  int local_64;
  longlong *local_60;
  int *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = (longlong *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x48) = 0;
  local_88 = param_3;
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_147c86c2e(local_90);
  }
  plVar1 = (longlong *)(param_1 + 0x98);
  FUN_140171a5c(plVar1,0);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_147c86c5e(param_1 + 0x50);
  }
  local_64 = 0;
  iVar6 = (int)param_2[1];
  if (0 < iVar6) {
    local_78 = param_1 + 0xd0;
    lVar10 = 0;
    local_80 = param_2;
    do {
      lVar3 = *(longlong *)(*param_2 + lVar10 * 8);
      if ((lVar3 != 0) && (iVar8 = *(int *)(lVar3 + 0x48), 0 < iVar8)) {
        lVar11 = 0;
        do {
          lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x40) + lVar11 * 8);
          if (lVar4 != 0) {
            local_70 = *(longlong *)(lVar4 + 0x28);
            if ((lVar10 < (int)local_88[1]) &&
               (lVar7 = *(longlong *)(*local_88 + lVar10 * 8), lVar7 != 0)) {
              local_70 = lVar7;
            }
            if (*(int *)(param_1 + 0xa0) != *(int *)(param_1 + 0xcc)) {
              uVar5 = (uint)((ulonglong)local_70 >> 0x10);
              uVar9 = (uint)local_70 & 0xffff;
              lVar7 = *(longlong *)(param_1 + 0xd8);
              if (*(longlong *)(param_1 + 0xd8) == 0) {
                lVar7 = local_78;
              }
              iVar6 = *(int *)(lVar7 + (ulonglong)
                                       (*(int *)(param_1 + 0xe0) - 1U &
                                       (int)((ulonglong)local_70 >> 0x20) +
                                       ((uint)local_70 << 0x10 | uVar9) +
                                       (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar9 >> 4)) * 4);
              if (iVar6 != -1) {
                do {
                  plVar2 = (longlong *)(*plVar1 + (longlong)iVar6 * 0x14);
                  if (*plVar2 == local_70) {
                    if (((plVar2 != (longlong *)0x0) && (plVar2 + 1 != (longlong *)0x0)) &&
                       (lVar7 = (longlong)(int)plVar2[1], lVar7 != -1)) {
                      lVar7 = *(longlong *)(*local_90 + lVar7 * 8);
                      if (lVar7 != 0) {
                        FUN_1407e1b5e(lVar7,lVar4 + 0x38);
                      }
                      goto LAB_14058b277;
                    }
                    break;
                  }
                  iVar6 = *(int *)((longlong)plVar2 + 0xc);
                } while (iVar6 != -1);
              }
            }
            lVar7 = FUN_14058b350(param_1,0x40);
            iVar6 = *(int *)(param_1 + 0x48);
            *(uint *)(param_1 + 0x48) = iVar6 + 1U;
            if (*(uint *)(param_1 + 0x4c) < iVar6 + 1U) {
              FUN_14058bc12(local_90,iVar6);
            }
            *(longlong *)(*local_90 + (longlong)iVar6 * 8) = lVar7;
            if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar7);
            }
            FUN_14058b5a6(lVar7,lVar4);
            *(longlong *)(lVar7 + 0x28) = local_70;
            local_60 = &local_70;
            local_58 = &local_64;
            FUN_140171856(plVar1,local_4c,&local_60,0);
            local_64 = local_64 + 1;
LAB_14058b277:
            iVar8 = *(int *)(lVar3 + 0x48);
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 < iVar8);
        iVar6 = (int)local_80[1];
        param_2 = local_80;
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar6);
  }
  FUN_14058bb8c(param_1);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14058b350 FUN_14058b350 body=187 status=ok
// SIG undefined FUN_14058b350(void)

undefined8 FUN_14058b350(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  ulonglong uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_14058b4c0();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_80 = 0;
  lStack_78 = 0;
  uStack_a0 = (ulonglong)param_2;
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
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14058b40c FUN_14058b40c body=179 status=ok
// SIG undefined FUN_14058b40c(void)

void FUN_14058b40c(longlong param_1,undefined8 param_2)

{
  DWORD DVar1;
  DWORD dwTlsIndex;
  DWORD DVar2;
  LPVOID lpTlsValue;
  bool bVar3;
  
  dwTlsIndex = DAT_14c75ec34;
  if (DAT_14c75ec34 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar2 = 0xffffffff;
    LOCK();
    bVar3 = DAT_14c75ec34 != 0xffffffff;
    DVar1 = dwTlsIndex;
    if (bVar3) {
      DVar2 = DAT_14c75ec34;
      DVar1 = DAT_14c75ec34;
    }
    DAT_14c75ec34 = DVar1;
    UNLOCK();
    if (bVar3) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar2;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_14001cc68(0x60,0x10);
    FUN_141073f92(lpTlsValue);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  if ((*(int *)((longlong)lpTlsValue + 0x28) != 0) &&
     (*(longlong *)((longlong)lpTlsValue + 0x30) == param_1)) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0x11e4,&DAT_149e0625e,
                  param_2);
  }
  return;
}



// FUNCTION 14058b4c0 FUN_14058b4c0 body=228 status=ok
// SIG undefined FUN_14058b4c0(void)

longlong FUN_14058b4c0(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac78c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14636ebc2;
    local_38 = &LAB_1478a040b;
    local_40 = FUN_1417b078f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x328;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalBodySetup",&DAT_14cac78c0,&DAT_1478a040a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac78c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14058b5a6 FUN_14058b5a6 body=242 status=ok
// SIG undefined FUN_14058b5a6(void)

void FUN_14058b5a6(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_1401842de(param_1 + 0x38);
  FUN_14058b698(param_1 + 0x38,param_2 + 0x38);
  if (0 < *(int *)(param_1 + 0x70)) {
    lVar3 = 0xf0;
    lVar4 = 0;
    do {
      puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x68) + lVar3);
      if (puVar2 != (undefined8 *)0x0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x68) + lVar3) = 0;
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x100;
    } while (lVar4 < *(int *)(param_1 + 0x70));
  }
  FUN_1400f437c(param_1 + 0x148,param_2 + 0x148);
  lVar3 = *(longlong *)(param_2 + 0xc0);
  if (DAT_14c950c29 == '\x01') {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *(longlong *)(param_2 + 0xc0);
    }
  }
  *(longlong *)(param_1 + 0xc0) = lVar3;
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  *(byte *)(param_1 + 0xb8) = *(byte *)(param_1 + 0xb8) & 0xf7 | *(byte *)(param_2 + 0xb8) & 8;
  *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)(param_2 + 0x31);
  return;
}



// FUNCTION 14058b698 FUN_14058b698 body=107 status=ok
// SIG undefined FUN_14058b698(void)

void FUN_14058b698(longlong param_1,longlong param_2)

{
  FUN_14058b704();
  FUN_14058b762(param_1 + 0x10,param_2 + 0x10);
  FUN_14058b7c0(param_1 + 0x20,param_2 + 0x20);
  FUN_14058b81e(param_1 + 0x30,param_2 + 0x30);
  FUN_14058b87c(param_1 + 0x40,param_2 + 0x40);
  FUN_14058b8da(param_1 + 0x50,param_2 + 0x50);
  FUN_14058b938(param_1 + 0x60,param_2 + 0x60);
  return;
}



// FUNCTION 14058b704 FUN_14058b704 body=93 status=ok
// SIG undefined FUN_14058b704(void)

undefined8 * FUN_14058b704(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1400d7df2(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1457224ec(param_1,iVar1);
      FUN_14572255f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14058b762 FUN_14058b762 body=93 status=ok
// SIG undefined FUN_14058b762(void)

undefined8 * FUN_14058b762(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1400d7df1(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14058bd74(param_1,iVar1);
      FUN_1407e1df1(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14058b7c0 FUN_14058b7c0 body=93 status=ok
// SIG undefined FUN_14058b7c0(void)

undefined8 * FUN_14058b7c0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1400d7df0(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14058ba42(param_1,iVar1);
      FUN_14058b995(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14058b81e FUN_14058b81e body=93 status=ok
// SIG undefined FUN_14058b81e(void)

undefined8 * FUN_14058b81e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1400d7e1b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1478580d8(param_1,iVar1);
      FUN_14785813a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14058b87c FUN_14058b87c body=93 status=ok
// SIG undefined FUN_14058b87c(void)

undefined8 * FUN_14058b87c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1400d7def(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147858176(param_1,iVar1);
      FUN_1478581e5(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14058b8da FUN_14058b8da body=93 status=ok
// SIG undefined FUN_14058b8da(void)

undefined8 * FUN_14058b8da(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1400d7e46(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14785821a(param_1,iVar1);
      FUN_14785828d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14058b938 FUN_14058b938 body=93 status=ok
// SIG undefined FUN_14058b938(void)

undefined8 * FUN_14058b938(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1400d7df3(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147858378(param_1,iVar1);
      FUN_1478583e7(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14058b995 FUN_14058b995 body=173 status=ok
// SIG undefined FUN_14058b995(void)

void FUN_14058b995(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  if (param_3 != 0) {
    lVar8 = 0;
    do {
      *(undefined ***)(param_1 + lVar8) = &PTR_FUN_14a1dee50;
      *(undefined4 *)(param_1 + 8 + lVar8) = *(undefined4 *)(param_2 + 8 + lVar8);
      *(undefined8 *)(param_1 + 0xc + lVar8) = *(undefined8 *)(param_2 + 0xc + lVar8);
      *(undefined4 *)(param_1 + 0x14 + lVar8) = *(undefined4 *)(param_2 + 0x14 + lVar8);
      *(byte *)(param_1 + 0x18 + lVar8) =
           *(byte *)(param_1 + 0x18 + lVar8) & 0xfe | *(byte *)(param_2 + 0x18 + lVar8) & 1;
      *(undefined1 *)(param_1 + 0x19 + lVar8) = *(undefined1 *)(param_2 + 0x19 + lVar8);
      *(undefined4 *)(param_1 + 0x20 + lVar8) = 6;
      *(longlong *)(param_1 + 0x28 + lVar8) = param_1 + lVar8;
      *(undefined ***)(param_1 + lVar8) = &PTR_FUN_14a1dee70;
      puVar1 = (undefined8 *)(param_2 + 0x30 + lVar8);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(param_2 + 0x40 + lVar8);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      puVar2 = (undefined8 *)(param_2 + 0x50 + lVar8);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      puVar2 = (undefined8 *)(param_1 + 0x30 + lVar8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar1 = (undefined8 *)(param_1 + 0x40 + lVar8);
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      puVar1 = (undefined8 *)(param_1 + 0x50 + lVar8);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      *(undefined8 *)(param_1 + 0x60 + lVar8) = *(undefined8 *)(param_2 + 0x60 + lVar8);
      lVar8 = lVar8 + 0x68;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14058ba42 FUN_14058ba42 body=330 status=ok
// SIG undefined FUN_14058ba42(void)

void FUN_14058ba42(longlong param_1,int param_2,int param_3)

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
    uVar4 = (longlong)param_2 * 0x68;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14058bab0;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_14058bab0:
    iVar5 = (int)(uVar4 / 0x68);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x68,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14058bb8c FUN_14058bb8c body=134 status=ok
// SIG undefined FUN_14058bb8c(void)

void FUN_14058bb8c(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_14481578e(param_1 + 0x30,0);
  }
  iVar2 = *(int *)(param_1 + 0x48);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + lVar3 * 8);
      if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0xb8) & 2) != 0)) {
        iVar2 = *(int *)(param_1 + 0x38);
        *(uint *)(param_1 + 0x38) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x3c) < iVar2 + 1U) {
          FUN_1446f48e2(param_1 + 0x30,iVar2);
        }
        *(int *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar2 * 4) = (int)lVar3;
        iVar2 = *(int *)(param_1 + 0x48);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  return;
}



// FUNCTION 14058bc12 FUN_14058bc12 body=353 status=ok
// SIG undefined FUN_14058bc12(void)

void FUN_14058bc12(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14058bc99;
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
LAB_14058bc99:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14058bd74 FUN_14058bd74 body=229 status=ok
// SIG undefined FUN_14058bd74(void)

void FUN_14058bd74(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  
  if (param_2 == 0) {
    iVar5 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x70;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar2 >> 4]];
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar4 & (uVar2 + uVar4) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar5 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar5 = iVar3;
    }
  }
  if (param_3 < iVar5) {
    FUN_1446f8d3c(param_1,0,iVar5,0x70,8);
    param_3 = iVar5;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14058be5a FUN_14058be5a body=364 status=ok
// SIG undefined FUN_14058be5a(void)

ulonglong FUN_14058be5a(ulonglong param_1)

{
  longlong lVar1;
  int iVar2;
  DWORD DVar3;
  DWORD DVar4;
  uint uVar5;
  undefined *puVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_48;
  undefined **local_38;
  ulonglong local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar2 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar2 != 2)) {
    if (iVar2 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14058bf0c;
    }
    *(undefined1 *)(param_1 + 0x88) = 1;
    local_48 = 0;
    local_38 = &PTR_LAB_14b43b910;
    local_58 = &LAB_143e7a64c;
    local_30 = param_1;
    FUN_1407461b0(1);
    uVar7 = 0;
  }
  else {
LAB_14058bf0c:
    FUN_140596bca();
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb8fbf8);
    if (DAT_14cb8fbb0 != DAT_14cb8fbdc) {
      uVar5 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
      uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
      puVar6 = &DAT_14cb8fbe0;
      if (DAT_14cb8fbe8 != (undefined *)0x0) {
        puVar6 = DAT_14cb8fbe8;
      }
      iVar2 = *(int *)(puVar6 + (ulonglong)(DAT_14cb8fbf0 - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
      while (iVar2 != -1) {
        lVar1 = DAT_14cb8fba8 + (longlong)iVar2 * 0x10;
        if (*(ulonglong *)(DAT_14cb8fba8 + (longlong)iVar2 * 0x10) == param_1) {
          if (lVar1 != 0) {
            FUN_14058bfc8(&DAT_14cb8fba8);
            uVar7 = CONCAT71((int7)(param_1 >> 8),1);
            goto LAB_14058bfab;
          }
          break;
        }
        iVar2 = *(int *)(lVar1 + 8);
      }
    }
    uVar7 = 0;
LAB_14058bfab:
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb8fbf8);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14058bfc8 FUN_14058bfc8 body=152 status=ok
// SIG undefined FUN_14058bfc8(void)

undefined8 FUN_14058bfc8(longlong *param_1,ulonglong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = *param_2;
    uVar3 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar4 +
                    ((longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x10) == uVar2) {
          FUN_14058c060();
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + *param_1 + 8);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 14058c060 FUN_14058c060 body=95 status=ok
// SIG undefined FUN_14058c060(void)

void FUN_14058c060(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x10 + 8);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_14058c0c0(param_1,param_2,1);
  return;
}



// FUNCTION 14058c0c0 FUN_14058c0c0 body=94 status=ok
// SIG undefined FUN_14058c0c0(void)

void FUN_14058c0c0(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  if (param_3 != 0) {
    plVar3 = (longlong *)((longlong)param_2 * 0x10 + *param_1);
    iVar2 = param_3;
    do {
      lVar1 = *plVar3;
      if (lVar1 != 0) {
        FUN_14058c1a6(lVar1);
        FUN_1400020a8(lVar1);
      }
      plVar3 = plVar3 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_14058c11e(param_1,param_2,param_3);
  return;
}



// FUNCTION 14058c11e FUN_14058c11e body=136 status=ok
// SIG undefined FUN_14058c11e(void)

void FUN_14058c11e(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 14058c1a6 FUN_14058c1a6 body=249 status=ok
// SIG undefined FUN_14058c1a6(void)

void FUN_14058c1a6(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    param_1[0xd] = 0;
  }
  if (param_1[0xc] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0xc] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar4 = param_1[0xb];
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14058c2a0 FUN_14058c2a0 body=91 status=ok
// SIG undefined FUN_14058c2a0(void)

undefined8 FUN_14058c2a0(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_14058c2fc();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_14058c2fc();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014058c2f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        return uVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 14058c2fc FUN_14058c2fc body=228 status=ok
// SIG undefined FUN_14058c2fc(void)

longlong FUN_14058c2fc(void)

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
  if (DAT_14c9a4e90 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1470c7a6f;
    local_40 = FUN_1462ab2f8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxEngine",L"GbxCollisionStateInterface",&DAT_14c9a4e90,&DAT_1470c7a6e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a4e90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14058c3e2 FUN_14058c3e2 body=20 status=ok
// SIG undefined FUN_14058c3e2(void)

void FUN_14058c3e2(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_14058c3f6(param_1,*(undefined4 *)(param_1 + 8),param_2);
    return;
  }
  return;
}



// FUNCTION 14058c3f6 FUN_14058c3f6 body=379 status=ok
// SIG undefined FUN_14058c3f6(void)

void FUN_14058c3f6(undefined8 *param_1,int param_2,int param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  void *_Src;
  DWORD DVar3;
  uint uVar4;
  DWORD dwTlsIndex;
  DWORD DVar5;
  LPVOID lpTlsValue;
  void *_Dst;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_78 [40];
  int local_50;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 != 0) {
    if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_146815189(param_3,8);
    }
    _Src = (void *)*param_1;
    dwTlsIndex = DAT_14c7585d0;
    local_50 = param_2;
    if (DAT_14c7585d0 == 0xffffffff) {
      dwTlsIndex = TlsAlloc();
      DVar5 = 0xffffffff;
      LOCK();
      bVar10 = DAT_14c7585d0 != 0xffffffff;
      DVar3 = dwTlsIndex;
      if (bVar10) {
        DVar5 = DAT_14c7585d0;
        DVar3 = DAT_14c7585d0;
      }
      DAT_14c7585d0 = DVar3;
      UNLOCK();
      if (bVar10) {
        TlsFree(dwTlsIndex);
        dwTlsIndex = DVar5;
      }
    }
    lpTlsValue = TlsGetValue(dwTlsIndex);
    if (lpTlsValue == (LPVOID)0x0) {
      lpTlsValue = (LPVOID)FUN_140036a08(&local_49);
      FUN_140fddf04(lpTlsValue);
      TlsSetValue(dwTlsIndex,lpTlsValue);
    }
    puVar2 = (ulonglong *)((longlong)lpTlsValue + 0x10);
    uVar4 = param_3 * 8;
    uVar8 = (ulonglong)(uVar4 < 0x10) << 3 | 0xfffffffffffffff0;
    uVar6 = (uint)(uVar4 >= 0x10) * 8;
    lVar1 = (ulonglong)uVar6 + 7;
    _Dst = (void *)(*(longlong *)((longlong)lpTlsValue + 0x10) + lVar1 & uVar8);
    uVar9 = (longlong)_Dst + (longlong)(int)uVar4;
    if (*(ulonglong *)((longlong)lpTlsValue + 0x18) < uVar9) {
      FUN_140023dd8(puVar2,uVar6 + 8 + uVar4);
      _Dst = (void *)(lVar1 + *puVar2 & uVar8);
      uVar9 = (longlong)(int)uVar4 + (longlong)_Dst;
    }
    *puVar2 = uVar9;
    *param_1 = _Dst;
    if (local_50 != 0 && _Src != (void *)0x0) {
      iVar7 = local_50;
      if (param_3 < local_50) {
        iVar7 = param_3;
      }
      memcpy(_Dst,_Src,(longlong)iVar7 << 3);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14058c572 FUN_14058c572 body=156 status=ok
// SIG undefined FUN_14058c572(void)

longlong FUN_14058c572(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x150);
  if (lVar1 == 0) {
    if ((*(longlong *)(param_1 + 0x18) == 0) ||
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x3f70), lVar1 == 0)) {
      lVar1 = 0;
    }
    else {
      local_48 = *(undefined8 *)(lVar1 + 0xeb0);
      FUN_1446dcdd4(local_40);
      lVar1 = FUN_14058c610(local_40);
      *(longlong *)(param_1 + 0x150) = lVar1;
      if (local_28 != 0) {
        FUN_1400020a8();
        lVar1 = *(longlong *)(param_1 + 0x150);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14058c610 FUN_14058c610 body=22 status=ok
// SIG undefined FUN_14058c610(void)

ulonglong FUN_14058c610(uint *param_1)

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
  
  plVar3 = DAT_14cbe6df8;
  if (DAT_14cbe6df8 == (longlong *)0x0) {
    return 0;
  }
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(code **)(*DAT_14cbe6df8 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cbe6df8 + 0x154) & 1) != 0) &&
       (*(int *)((longlong)DAT_14cbe6df8 + 0x1fc) < (int)DAT_14cbe6df8[0x3a])) goto LAB_144815de0;
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
    cVar4 = (**(code **)(*DAT_14cbe6df8 + 0x300))(DAT_14cbe6df8);
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



// FUNCTION 14058c626 FUN_14058c626 body=221 status=ok
// SIG undefined FUN_14058c626(void)

float * FUN_14058c626(longlong param_1,float *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = (longlong *)FUN_14058c704(param_4);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if (lVar3 != 0) {
      cVar1 = *(char *)(param_1 + 8);
      if (cVar1 != '\x02') {
        if (cVar1 == '\x01') {
          if (*(longlong *)(lVar3 + 0x40) == 0) goto LAB_14058c6f8;
          FUN_14058c81a(lVar3,&local_20);
          local_20 = local_20 - local_1c;
        }
        else {
          if ((cVar1 != '\0') || (*(longlong *)(lVar3 + 0x40) == 0)) goto LAB_14058c6f8;
          FUN_14058c81a(lVar3,&local_20);
          local_20 = local_20 + local_1c;
        }
LAB_14058c6c9:
        *(undefined2 *)(param_2 + 6) = 4;
        *param_2 = local_20;
        *(undefined1 *)(param_2 + 8) = 3;
        goto LAB_14058c6d7;
      }
      if (*(longlong *)(lVar3 + 0x40) != 0) {
        local_20 = (float)FUN_14058cf86(lVar3);
        goto LAB_14058c6c9;
      }
    }
  }
LAB_14058c6f8:
  *(undefined2 *)(param_2 + 6) = 0;
  *(undefined1 *)(param_2 + 8) = 0;
LAB_14058c6d7:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14058c704 FUN_14058c704 body=47 status=ok
// SIG undefined FUN_14058c704(void)

undefined8 FUN_14058c704(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    uVar2 = FUN_14058c734();
    uVar2 = FUN_144718840(lVar1,uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14058c734 FUN_14058c734 body=228 status=ok
// SIG undefined FUN_14058c734(void)

longlong FUN_14058c734(void)

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
  if (DAT_14cb931a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148a09505;
    local_40 = FUN_1465704aa;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxWeapon",L"AIWeaponUser",&DAT_14cb931a8,&DAT_148a09504);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb931a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14058c81a FUN_14058c81a body=1899 status=ok
// SIG undefined FUN_14058c81a(void)

float * FUN_14058c81a(longlong param_1,float *param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  longlong lVar6;
  byte bVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint *puVar10;
  undefined *puVar11;
  int iVar12;
  longlong lVar13;
  float *pfVar14;
  uint uVar15;
  longlong lVar16;
  float *pfVar17;
  int iVar18;
  ulonglong uVar19;
  float *pfVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_188 [40];
  longlong *local_160;
  int local_158;
  uint local_154;
  uint *local_150;
  uint local_148;
  int local_144;
  int local_140;
  float local_138;
  undefined4 uStack_134;
  longlong *local_128;
  ushort local_120;
  byte local_118;
  int local_110;
  float local_108;
  undefined4 uStack_104;
  ushort local_f0;
  byte local_e8;
  char local_e0 [16];
  longlong *local_d0;
  int local_b8;
  float local_b0;
  undefined4 uStack_ac;
  ushort local_98;
  byte local_90;
  float local_88;
  undefined4 uStack_84;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  plVar2 = (longlong *)(param_1 + 0x150);
  puVar3 = (uint *)(param_1 + 0x160);
  iVar12 = *(int *)(param_1 + 0x178);
  local_154 = 1;
  if (iVar12 == 0) {
    local_140 = 0;
    local_158 = 0;
    local_144 = 0;
  }
  else {
    puVar10 = *(uint **)(param_1 + 0x170);
    if (*(uint **)(param_1 + 0x170) == (uint *)0x0) {
      puVar10 = puVar3;
    }
    uVar15 = *puVar10;
    if (uVar15 == 0) {
      iVar18 = iVar12 + 0x1e;
      if (-1 < iVar12 + -1) {
        iVar18 = iVar12 + -1;
      }
      uVar19 = 0;
      uVar8 = (ulonglong)(uint)(iVar18 >> 5);
      if (iVar18 >> 5 < 1) {
        uVar8 = uVar19;
      }
      local_158 = (int)uVar8 + 1;
      local_140 = (int)uVar8 * 0x20 + 0x20;
      iVar18 = 0;
      do {
        local_144 = iVar12;
        if (uVar8 == uVar19) goto LAB_14058c8ff;
        iVar18 = iVar18 + 0x20;
        uVar15 = puVar10[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar15 == 0);
      local_158 = (int)uVar19;
      local_140 = iVar18;
    }
    else {
      local_140 = 0;
      local_158 = 0;
    }
    local_154 = -uVar15 & uVar15;
    uVar8 = (ulonglong)local_154 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_144 = (local_140 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar12 <= local_144) {
      local_144 = iVar12;
    }
  }
LAB_14058c8ff:
  local_148 = 0xffffffff;
  local_160 = plVar2;
  local_150 = puVar3;
  if (local_144 != iVar12) {
    do {
      lVar6 = *(longlong *)(*local_160 + 8 + (longlong)local_144 * 0x20);
      if (((((lVar6 != 0) && (*(int *)(lVar6 + 0x1c) != 0)) &&
           (uVar15 = *(uint *)(lVar6 + 0x18), -1 < (int)uVar15)) &&
          (((int)uVar15 < DAT_14c9647dc &&
           (plVar9 = (longlong *)
                     ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
           plVar9 != (longlong *)0x0)))) &&
         (((int)plVar9[2] == *(int *)(lVar6 + 0x1c) &&
          (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 && (*plVar9 != 0)))))) {
        if (*(char *)(lVar6 + 0xe0) == '\x01') {
          uVar4 = *(undefined8 *)(*(longlong *)(lVar6 + 0x500) + 0x40);
          local_e0[0] = '\0';
          local_b8 = 0;
          FUN_1456bb102(local_e0,uVar4);
          pfVar17 = &local_b0;
          FUN_1448729ea(lVar6 + 0x40,pfVar17,local_e0);
          fVar23 = local_b0;
          if (local_90 != 3) {
            pfVar20 = &local_138;
            FUN_1400b56fe(pfVar20,&local_b0,3);
            fVar23 = 0.0;
            if (local_118 != 0) {
              fVar23 = local_138;
            }
            pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_118 * 0x120));
            if (pcVar5 != (code *)0x0) {
              if (0x18 < local_120) {
                pfVar20 = (float *)CONCAT44(uStack_134,local_138);
              }
              (*pcVar5)(pfVar20);
            }
            if (0x18 < local_120) {
              FUN_1400020a8(CONCAT44(uStack_134,local_138));
            }
          }
          local_138 = (float)((uint)local_138 & 0xffffff00);
          local_110 = 0;
          FUN_1456bb102(&local_138,uVar4);
          pfVar20 = &local_108;
          FUN_1448729ea(lVar6 + 0x90,pfVar20,&local_138);
          if (local_e8 == 3) {
            uVar15 = 3;
            fVar22 = local_108;
          }
          else {
            pfVar14 = &local_88;
            FUN_1400b56fe(pfVar14,&local_108,3);
            fVar22 = 0.0;
            if (local_68 != 0) {
              fVar22 = local_88;
            }
            pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
            if (pcVar5 != (code *)0x0) {
              if (0x18 < local_70) {
                pfVar14 = (float *)CONCAT44(uStack_84,local_88);
              }
              (*pcVar5)(pfVar14);
            }
            if (0x18 < local_70) {
              FUN_1400020a8(CONCAT44(uStack_84,local_88));
            }
            uVar15 = (uint)local_e8;
          }
          fVar21 = fVar22;
          if (fVar22 <= fVar23) {
            fVar21 = fVar23;
            fVar23 = fVar22;
          }
          fVar22 = fVar23;
          if (fVar23 <= 0.0) {
            fVar22 = 0.0;
          }
          fVar22 = (fVar22 - fVar23) * 0.5;
          fVar22 = (fVar23 + fVar22) - fVar22;
          if (fVar21 <= fVar22) {
            fVar22 = fVar21;
          }
          fVar23 = (fVar21 - fVar22) * 0.5;
          param_2[1] = fVar23;
          *param_2 = fVar23 + fVar22;
          pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar15 * 0x120));
          if (pcVar5 != (code *)0x0) {
            if (0x18 < local_f0) {
              pfVar20 = (float *)CONCAT44(uStack_104,local_108);
            }
            (*pcVar5)(pfVar20);
          }
          if (0x18 < local_f0) {
            FUN_1400020a8(CONCAT44(uStack_104,local_108));
          }
          lVar6 = DAT_14c9a3da0;
          if ((longlong)local_110 != 0) {
            lVar13 = (longlong)local_110 + -1;
            lVar16 = lVar13 * 0x10;
            FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar16),
                          *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar16));
            if (*(longlong *)(lVar6 + lVar16) != 0) {
              FUN_1400020a8();
            }
            lVar6 = DAT_14c9a3da0;
            iVar12 = (int)lVar13;
            if (DAT_14c9a3dd4 != 0) {
              *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar12;
            }
            *(undefined4 *)(lVar6 + lVar16) = 0xffffffff;
            iVar18 = -1;
            if (0 < DAT_14c9a3dd4) {
              iVar18 = DAT_14c9a3dd0;
            }
            *(int *)(lVar6 + 4 + lVar16) = iVar18;
            DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
            puVar11 = &DAT_14c9a3db0;
            if (DAT_14c9a3dc0 != (undefined *)0x0) {
              puVar11 = DAT_14c9a3dc0;
            }
            iVar18 = iVar12 + 0x1f;
            if (-1 < iVar12) {
              iVar18 = iVar12;
            }
            bVar7 = (byte)lVar13 & 0x1f;
            DAT_14c9a3dd0 = iVar12;
            *(uint *)(puVar11 + (longlong)(iVar18 >> 5) * 4) =
                 *(uint *)(puVar11 + (longlong)(iVar18 >> 5) * 4) &
                 (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
            local_110 = 0;
          }
          if ((local_138._0_1_ == '\x03') && (local_128 != (longlong *)0x0)) {
            LOCK();
            piVar1 = (int *)((longlong)local_128 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_128 + 0x10))();
            }
          }
          pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
          if (pcVar5 != (code *)0x0) {
            if (0x18 < local_98) {
              pfVar17 = (float *)CONCAT44(uStack_ac,local_b0);
            }
            (*pcVar5)(pfVar17);
          }
          if (0x18 < local_98) {
            FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
          }
          lVar6 = DAT_14c9a3da0;
          if ((longlong)local_b8 != 0) {
            lVar16 = (longlong)local_b8 + -1;
            lVar13 = lVar16 * 0x10;
            FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar13),
                          *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar13));
            if (*(longlong *)(lVar6 + lVar13) != 0) {
              FUN_1400020a8();
            }
            lVar6 = DAT_14c9a3da0;
            iVar12 = (int)lVar16;
            if (DAT_14c9a3dd4 != 0) {
              *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar12;
            }
            *(undefined4 *)(lVar6 + lVar13) = 0xffffffff;
            iVar18 = -1;
            if (0 < DAT_14c9a3dd4) {
              iVar18 = DAT_14c9a3dd0;
            }
            *(int *)(lVar6 + 4 + lVar13) = iVar18;
            DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
            puVar11 = &DAT_14c9a3db0;
            if (DAT_14c9a3dc0 != (undefined *)0x0) {
              puVar11 = DAT_14c9a3dc0;
            }
            iVar18 = iVar12 + 0x1f;
            if (-1 < iVar12) {
              iVar18 = iVar12;
            }
            bVar7 = (byte)lVar16 & 0x1f;
            DAT_14c9a3dd0 = iVar12;
            *(uint *)(puVar11 + (longlong)(iVar18 >> 5) * 4) =
                 *(uint *)(puVar11 + (longlong)(iVar18 >> 5) * 4) &
                 (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
            local_b8 = 0;
          }
          if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
            LOCK();
            piVar1 = (int *)((longlong)local_d0 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_d0 + 0x10))();
            }
          }
        }
        else {
          if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
            uVar8 = (ulonglong)*(byte *)(*plVar9 + 0xbd8);
          }
          else {
            uVar8 = 0;
          }
          lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x20) + uVar8 * 0x18);
          fVar23 = *(float *)(lVar6 + 0xf4);
          fVar22 = *(float *)(lVar6 + 0x100);
          fVar21 = fVar23;
          if (fVar23 <= fVar22) {
            fVar21 = fVar22;
            fVar22 = fVar23;
          }
          fVar23 = fVar22;
          if (fVar22 <= 0.0) {
            fVar23 = 0.0;
          }
          fVar23 = (fVar23 - fVar22) * 0.5;
          fVar23 = (fVar22 + fVar23) - fVar23;
          if (fVar21 <= fVar23) {
            fVar23 = fVar21;
          }
          fVar22 = (fVar21 - fVar23) * 0.5;
          param_2[1] = fVar22;
          *param_2 = fVar23 + fVar22;
        }
        goto LAB_14058ca33;
      }
      local_148 = local_148 & ~local_154;
      FUN_1449c0562(&local_158);
    } while ((local_150 != puVar3 || local_144 != iVar12) || local_160 != plVar2);
  }
  param_2[0] = 0.0;
  param_2[1] = 0.0;
LAB_14058ca33:
  if ((local_60 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14058cf86 FUN_14058cf86 body=1153 status=ok
// SIG undefined FUN_14058cf86(void)

undefined4 FUN_14058cf86(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint *puVar3;
  code *pcVar4;
  longlong lVar5;
  byte bVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint *puVar9;
  undefined *puVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  undefined4 *puVar14;
  longlong lVar15;
  undefined4 *puVar16;
  int iVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  int local_e0;
  uint local_dc;
  uint *local_d8;
  uint local_d0;
  int local_cc;
  int local_c8;
  char local_c0 [16];
  longlong *local_b0;
  int local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  ushort local_78;
  byte local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar2 = (longlong *)(param_1 + 0x150);
  puVar3 = (uint *)(param_1 + 0x160);
  iVar12 = *(int *)(param_1 + 0x178);
  local_dc = 1;
  if (iVar12 == 0) {
    local_c8 = 0;
    local_e0 = 0;
    local_cc = 0;
  }
  else {
    puVar9 = *(uint **)(param_1 + 0x170);
    if (*(uint **)(param_1 + 0x170) == (uint *)0x0) {
      puVar9 = puVar3;
    }
    uVar11 = *puVar9;
    if (uVar11 == 0) {
      iVar17 = iVar12 + 0x1e;
      if (-1 < iVar12 + -1) {
        iVar17 = iVar12 + -1;
      }
      uVar18 = 0;
      uVar7 = (ulonglong)(uint)(iVar17 >> 5);
      if (iVar17 >> 5 < 1) {
        uVar7 = uVar18;
      }
      local_e0 = (int)uVar7 + 1;
      local_c8 = (int)uVar7 * 0x20 + 0x20;
      iVar17 = 0;
      do {
        local_cc = iVar12;
        if (uVar7 == uVar18) goto LAB_14058d05c;
        iVar17 = iVar17 + 0x20;
        uVar11 = puVar9[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar11 == 0);
      local_e0 = (int)uVar18;
      local_c8 = iVar17;
    }
    else {
      local_c8 = 0;
      local_e0 = 0;
    }
    local_dc = -uVar11 & uVar11;
    uVar7 = (ulonglong)local_dc * 2 + 1;
    lVar5 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    local_cc = (local_c8 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
    if (iVar12 <= local_cc) {
      local_cc = iVar12;
    }
  }
LAB_14058d05c:
  local_d0 = 0xffffffff;
  uVar19 = 0;
  local_e8 = plVar2;
  local_d8 = puVar3;
  if (local_cc != iVar12) {
    do {
      lVar5 = *(longlong *)(*local_e8 + 8 + (longlong)local_cc * 0x20);
      if (((((lVar5 != 0) && (*(int *)(lVar5 + 0x1c) != 0)) &&
           (uVar11 = *(uint *)(lVar5 + 0x18), -1 < (int)uVar11)) &&
          (((int)uVar11 < DAT_14c9647dc &&
           (plVar8 = (longlong *)
                     ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
           plVar8 != (longlong *)0x0)))) &&
         (((int)plVar8[2] == *(int *)(lVar5 + 0x1c) &&
          (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (*plVar8 != 0)))))) {
        if (*(char *)(lVar5 + 0xe0) == '\x01') {
          local_c0[0] = '\0';
          local_98 = 0;
          FUN_1456bb102(local_c0,*(undefined8 *)(*(longlong *)(lVar5 + 0x500) + 0x40));
          puVar14 = &local_90;
          FUN_1448729ea(lVar5 + 0xe8,puVar14,local_c0);
          if (local_70 == 3) {
            uVar11 = 3;
            uVar19 = local_90;
          }
          else {
            puVar16 = &local_68;
            FUN_1400b56fe(puVar16,&local_90,3);
            uVar19 = 0;
            if (local_48 != 0) {
              uVar19 = local_68;
            }
            pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
            if (pcVar4 != (code *)0x0) {
              if (0x18 < local_50) {
                puVar16 = (undefined4 *)CONCAT44(uStack_64,local_68);
              }
              (*pcVar4)(puVar16);
            }
            if (0x18 < local_50) {
              FUN_1400020a8(CONCAT44(uStack_64,local_68));
            }
            uVar11 = (uint)local_70;
          }
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar11 * 0x120));
          if (pcVar4 != (code *)0x0) {
            if (0x18 < local_78) {
              puVar14 = (undefined4 *)CONCAT44(uStack_8c,local_90);
            }
            (*pcVar4)(puVar14);
          }
          if (0x18 < local_78) {
            FUN_1400020a8(CONCAT44(uStack_8c,local_90));
          }
          lVar5 = DAT_14c9a3da0;
          if ((longlong)local_98 != 0) {
            lVar13 = (longlong)local_98 + -1;
            lVar15 = lVar13 * 0x10;
            FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar15),
                          *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar15));
            if (*(longlong *)(lVar5 + lVar15) != 0) {
              FUN_1400020a8();
            }
            lVar5 = DAT_14c9a3da0;
            iVar12 = (int)lVar13;
            if (DAT_14c9a3dd4 != 0) {
              *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar12;
            }
            *(undefined4 *)(lVar5 + lVar15) = 0xffffffff;
            iVar17 = -1;
            if (0 < DAT_14c9a3dd4) {
              iVar17 = DAT_14c9a3dd0;
            }
            *(int *)(lVar5 + 4 + lVar15) = iVar17;
            DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
            puVar10 = &DAT_14c9a3db0;
            if (DAT_14c9a3dc0 != (undefined *)0x0) {
              puVar10 = DAT_14c9a3dc0;
            }
            iVar17 = iVar12 + 0x1f;
            if (-1 < iVar12) {
              iVar17 = iVar12;
            }
            bVar6 = (byte)lVar13 & 0x1f;
            DAT_14c9a3dd0 = iVar12;
            *(uint *)(puVar10 + (longlong)(iVar17 >> 5) * 4) =
                 *(uint *)(puVar10 + (longlong)(iVar17 >> 5) * 4) &
                 (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
            local_98 = 0;
          }
          if ((local_c0[0] == '\x03') && (local_b0 != (longlong *)0x0)) {
            LOCK();
            piVar1 = (int *)((longlong)local_b0 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_b0 + 0x10))();
            }
          }
        }
        else {
          if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
            uVar7 = (ulonglong)*(byte *)(*plVar8 + 0xbd8);
          }
          else {
            uVar7 = 0;
          }
          uVar19 = *(undefined4 *)
                    (*(longlong *)(*(longlong *)(lVar5 + 0x20) + uVar7 * 0x18) + 0x10c);
        }
        break;
      }
      local_d0 = local_d0 & ~local_dc;
      FUN_1449c0562(&local_e0);
    } while (local_e8 != plVar2 || (local_d8 != puVar3 || local_cc != iVar12));
  }
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar19;
}



// FUNCTION 14058d408 FUN_14058d408 body=552 status=ok
// SIG undefined FUN_14058d408(void)

void FUN_14058d408(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined2 *local_78;
  undefined8 uStack_70;
  undefined2 *local_68;
  int local_60;
  int local_5c;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar2 = (longlong *)FUN_14058d6d4();
  iVar4 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar4 + 1U) {
    FUN_1457226a8(plVar2,iVar4);
  }
  lVar1 = *plVar2;
  lVar5 = (longlong)iVar4 * 0x20;
  *(undefined8 *)(lVar1 + lVar5) = param_1;
  *(undefined8 *)(lVar1 + 8 + lVar5) = param_2;
  *(undefined8 *)(lVar1 + 0x10 + lVar5) = param_3;
  *(undefined8 *)(lVar1 + 0x18 + lVar5) = param_5;
  FUN_14058d748(&local_58,param_4);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_88 = 0;
  local_90 = 0;
  local_98 = param_1;
  FUN_14058d631(param_3,puVar3,0,0);
  FUN_140056680(&local_78,L"Default__");
  puVar3 = local_58;
  local_60 = (int)uStack_70;
  if ((int)uStack_70 < 2) {
    local_68 = (undefined2 *)0x0;
    local_60 = local_50;
    if ((longlong)local_50 == 0) {
      local_5c = 0;
    }
    else {
      FUN_1446dd670(&local_68,local_50,0);
      memcpy(local_68,puVar3,(longlong)local_50 * 2);
    }
  }
  else {
    iVar4 = local_50 + -1;
    if (local_50 == 0) {
      iVar4 = 0;
    }
    local_68 = local_78;
    local_5c = uStack_70._4_4_;
    local_78 = (undefined2 *)0x0;
    uStack_70 = 0;
    if (iVar4 + local_60 < local_60) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((longlong)iVar4);
    }
    if (local_5c < iVar4 + local_60) {
      FUN_1446f8c06(&local_68);
    }
    FUN_1400020e8(&local_68,local_58,iVar4);
  }
  puVar3 = local_68;
  if (local_60 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_88 = 0;
  local_90 = 0;
  local_98 = param_1;
  FUN_14058d631(param_3,puVar3,1,0);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14058d631 FUN_14058d631 body=162 status=ok
// SIG undefined FUN_14058d631(void)

void FUN_14058d631(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  if (DAT_14c948aa0 == (longlong *)0x0) {
    FUN_1427d63b3();
    FUN_1415af80e(&DAT_14c948b08,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    (**(code **)(*DAT_14c948aa0 + 0xb0))
              (DAT_14c948aa0,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}



// FUNCTION 14058d6d4 FUN_14058d6d4 body=116 status=ok
// SIG undefined FUN_14058d6d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14058d6d4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9640b8) {
    FUN_144b3d300(&DAT_14c9640b8);
    if (DAT_14c9640b8 == -1) {
      DAT_14c9640a0 = 0;
      uRam000000014c9640a8 = 0;
      _DAT_14c9640b0 = 0;
      atexit((_func_5014 *)&LAB_14282d734);
      _Init_thread_footer(&DAT_14c9640b8);
    }
  }
  return &DAT_14c9640a0;
}



// FUNCTION 14058d748 FUN_14058d748 body=257 status=ok
// SIG undefined FUN_14058d748(void)

undefined8 * FUN_14058d748(undefined8 *param_1)

{
  undefined2 *_Dst;
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  ushort uVar4;
  ulonglong uVar5;
  ushort uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  
  FUN_140056680();
  iVar1 = *(int *)(param_1 + 1);
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  if (0 < iVar2) {
    iVar9 = iVar1 - (uint)(0 < iVar2);
    if (iVar9 != 0) {
      memmove((void *)*param_1,(void *)((longlong)*param_1 + 2),(longlong)iVar9 * 2);
      iVar1 = *(int *)(param_1 + 1);
    }
    iVar1 = iVar1 - (uint)(0 < iVar2);
    *(int *)(param_1 + 1) = iVar1;
  }
  _Dst = (undefined2 *)*param_1;
  puVar3 = &DAT_149dfb77a;
  if (iVar1 != 0) {
    puVar3 = _Dst;
  }
  lVar11 = 0xb;
  lVar12 = 0;
  while( true ) {
    uVar6 = *(ushort *)((longlong)puVar3 + lVar12);
    uVar8 = (ulonglong)uVar6;
    uVar4 = *(ushort *)((longlong)&DAT_149ead49c + lVar12);
    if (uVar6 != uVar4) break;
    if (uVar6 == 0) goto LAB_14058d7f8;
LAB_14058d7cd:
    lVar11 = lVar11 + -1;
    if (lVar11 == 0) goto LAB_14058d7f8;
    lVar12 = lVar12 + 2;
  }
  if ((uVar4 | uVar6) < 0x80) {
    uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
    uVar5 = (ulonglong)uVar4;
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
    if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar5]) goto LAB_14058d7cd;
  }
  if (uVar6 != uVar4) {
    return param_1;
  }
LAB_14058d7f8:
  uVar10 = iVar1 - 1;
  if (iVar1 == 0) {
    uVar10 = 0;
  }
  uVar7 = 0xb;
  if ((int)uVar10 < 0xb) {
    uVar7 = uVar10;
  }
  if ((int)uVar7 < 1) {
    uVar7 = 0;
  }
  if (0 < (int)uVar10) {
    if (iVar1 - uVar7 != 0) {
      memmove(_Dst,_Dst + uVar7,(longlong)(int)(iVar1 - uVar7) * 2);
      iVar1 = *(int *)(param_1 + 1);
    }
    *(uint *)(param_1 + 1) = iVar1 - uVar7;
  }
  return param_1;
}



// FUNCTION 14058d84a FUN_14058d84a body=211 status=ok
// SIG undefined FUN_14058d84a(void)

void FUN_14058d84a(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  *(longlong *)(param_1 + 0x60) = param_2;
  if ((param_2 != 0) && ((longlong)*(int *)(param_1 + 0x58) != 0)) {
    lVar5 = *(longlong *)(param_1 + 0x50);
    lVar2 = (longlong)*(int *)(param_1 + 0x58) * 0x70 + lVar5;
    do {
      if ((longlong)*(int *)(lVar5 + 0x58) != 0) {
        lVar4 = *(longlong *)(lVar5 + 0x50);
        lVar6 = (longlong)*(int *)(lVar5 + 0x58) * 0x18;
        do {
          lVar3 = FUN_14058d91e(lVar4);
          if ((lVar3 != 0) &&
             (lVar3 = FUN_14058d9a8(*(longlong *)(param_1 + 0x60) + 0x968,lVar3), lVar3 != 0)) {
            iVar1 = *(int *)(lVar5 + 0x68);
            *(uint *)(lVar5 + 0x68) = iVar1 + 1U;
            if (*(uint *)(lVar5 + 0x6c) < iVar1 + 1U) {
              FUN_14058da88((longlong *)(lVar5 + 0x60),iVar1);
            }
            *(longlong *)(*(longlong *)(lVar5 + 0x60) + (longlong)iVar1 * 8) = lVar3;
          }
          lVar4 = lVar4 + 0x18;
          lVar6 = lVar6 + -0x18;
        } while (lVar6 != 0);
      }
      lVar5 = lVar5 + 0x70;
    } while (lVar5 != lVar2);
  }
  return;
}



// FUNCTION 14058d91e FUN_14058d91e body=136 status=ok
// SIG undefined FUN_14058d91e(void)

longlong FUN_14058d91e(undefined8 *param_1)

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
    if (DAT_14cb1d1f0 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144837462(DAT_14cb1d1f0,local_40);
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



// FUNCTION 14058d9a8 FUN_14058d9a8 body=224 status=ok
// SIG undefined FUN_14058d9a8(void)

undefined8 FUN_14058d9a8(uint *param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if ((((*(longlong **)(param_1 + 8) == (longlong *)0x0) || (param_1[7] == 0)) ||
      (uVar1 = param_1[6], (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)) {
    return 0;
  }
  lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  if (lVar4 == 0) {
    return 0;
  }
  if (*(uint *)(lVar4 + 0x10) != param_1[7]) {
    return 0;
  }
  if ((*(uint *)(lVar4 + 8) & 0x10200000) != 0) {
    return 0;
  }
  lVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    uVar2 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14058da65;
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar3 != (undefined8 *)0x0) &&
       ((*(uint *)(puVar3 + 2) == param_1[1] && ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)))) {
      uVar2 = *puVar3;
      goto LAB_14058da65;
    }
  }
  uVar2 = 0;
LAB_14058da65:
                    /* WARNING: Could not recover jumptable at 0x00014058da78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_2 + 0x28))(param_2,uVar2,lVar4 + 0xb0,*(code **)(*param_2 + 0x28));
  return uVar2;
}



// FUNCTION 14058da88 FUN_14058da88 body=353 status=ok
// SIG undefined FUN_14058da88(void)

void FUN_14058da88(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14058db0d;
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
LAB_14058db0d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14058dbea FUN_14058dbea body=725 status=ok
// SIG undefined FUN_14058dbea(void)

undefined4 FUN_14058dbea(longlong *param_1,uint param_2,uint param_3)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  ushort local_d2;
  undefined **local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined7 local_68;
  undefined4 uStack_61;
  float local_58;
  float fStack_54;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar2 = param_1 + -0x29;
  if ((*(char *)((longlong)param_1 + 0x37b) == '\x01') &&
     (((char)param_1[0x6f] != '\0' || (*(char *)((longlong)param_1 + 0x379) == '\x01')))) {
    if ((int)param_1[2] == *(int *)((longlong)param_1 + 0x3c)) {
LAB_14058dd89:
      if (*(char *)((longlong)param_1 + 0x37a) == '\x01') {
        plVar5 = (longlong *)FUN_144a81a0a();
        (**(code **)(*plVar5 + 0x50))(plVar5,&local_4c);
        uVar4 = DAT_14c9680a8;
        (**(code **)(param_1[-0x29] + 0x68))(plVar2,&local_58);
        local_c8 = (double)fStack_54;
        local_d0 = (undefined **)(double)local_58;
        local_f0 = local_4c;
        local_f8 = uVar4;
        local_e4 = (**(code **)(*param_1 + 0xf0))(param_1,&local_d0,0x3f800000,0);
      }
      else {
        local_e4 = 0;
      }
      goto LAB_14058dd43;
    }
    uVar3 = (uint)((ulonglong)DAT_14c966e98 >> 0x10);
    uVar6 = (uint)DAT_14c966e98 & 0xffff;
    plVar5 = param_1 + 8;
    if ((longlong *)param_1[9] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[9];
    }
    iVar7 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)param_1[10] - 1U &
                    (int)((ulonglong)DAT_14c966e98 >> 0x20) + ((uint)DAT_14c966e98 << 0x10 | uVar6)
                    + (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(param_1[1] + (longlong)iVar7 * 0x20) == DAT_14c966e98) goto LAB_14058dd89;
        iVar7 = *(int *)((longlong)iVar7 * 0x20 + param_1[1] + 0x18);
      } while (iVar7 != -1);
    }
  }
  if ((param_3 | param_2) == 0) {
    local_e4 = 1;
  }
  else {
    local_e4 = (undefined4)CONCAT71((uint7)(uint3)((param_3 | param_2) >> 8),1);
    (**(code **)(*DAT_14c968088 + 0x58))(DAT_14c968088,&local_d2);
    (**(code **)(param_1[-0x29] + 0x70))(plVar2,&local_58);
    (**(code **)(param_1[-0x29] + 0x68))(plVar2,&local_e0);
    local_c0 = (*(code *)**(undefined8 **)param_1[0xbb])();
    local_c8._0_3_ = (uint3)local_d2;
    local_c8 = (double)CONCAT44(local_c0,(undefined4)local_c8);
    local_b8 = 0;
    local_d0 = &PTR_FUN_149eda650;
    local_b0 = local_e0;
    local_a0 = CONCAT44((float)(int)param_3,(float)(int)param_2);
    local_90 = 0;
    uStack_88 = 0;
    local_80 = (longlong *)0x0;
    local_78 = 10;
    local_70 = 0x3f800000;
    local_6c = 0;
    local_68 = 0;
    uStack_61 = 0;
    local_98 = param_1 + 1;
    FUN_14058dffc(plVar2,&local_d0,0);
    plVar2 = local_80;
    local_d0 = &PTR_FUN_149eda650;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_80 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
LAB_14058dd43:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_e4;
}



// FUNCTION 14058dec0 FUN_14058dec0 body=157 status=ok
// SIG undefined FUN_14058dec0(void)

undefined8 FUN_14058dec0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 0x318) < 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = **(undefined8 **)(param_1 + 0x310);
    plVar3 = (longlong *)(*(undefined8 **)(param_1 + 0x310))[1];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
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
      FUN_1400bbf02(uVar4,param_2,10);
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 != 0) {
        return param_2;
      }
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 != 0) {
        return param_2;
      }
      (**(code **)(*plVar3 + 0x10))(plVar3);
      return param_2;
    }
  }
  FUN_1400bbf02(uVar4,param_2,10);
  return param_2;
}



// FUNCTION 14058df5e FUN_14058df5e body=157 status=ok
// SIG undefined FUN_14058df5e(void)

undefined8 FUN_14058df5e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 0x318) < 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = **(undefined8 **)(param_1 + 0x310);
    plVar3 = (longlong *)(*(undefined8 **)(param_1 + 0x310))[1];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
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
      FUN_14007d9be(uVar4,param_2,10);
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 != 0) {
        return param_2;
      }
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 != 0) {
        return param_2;
      }
      (**(code **)(*plVar3 + 0x10))(plVar3);
      return param_2;
    }
  }
  FUN_14007d9be(uVar4,param_2,10);
  return param_2;
}



// FUNCTION 14058dffc FUN_14058dffc body=629 status=ok
// SIG undefined FUN_14058dffc(void)

ulonglong FUN_14058dffc(longlong *param_1,ulonglong param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  longlong ***ppplVar7;
  undefined8 unaff_RBP;
  ulonglong uVar8;
  double dVar9;
  undefined1 auStack_1e8 [32];
  undefined1 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  longlong *local_1a0;
  ulonglong local_198;
  undefined *local_190;
  longlong **local_188 [36];
  undefined8 **local_68;
  ulonglong local_60;
  undefined1 local_58;
  undefined8 local_50;
  longlong *plStack_48;
  longlong local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if ((*(char *)((longlong)param_1 + 0x4c3) == '\x01') &&
     (((char)param_1[0x98] != '\0' || (*(char *)((longlong)param_1 + 0x4c1) == '\x01')))) {
    local_1b8 = DAT_14c966e98;
    uStack_1b0 = DAT_14c966ea0;
    local_1a8 = DAT_14c966ea8;
    if (DAT_14c966ea8 != 0) {
      LOCK();
      *(int *)(DAT_14c966ea8 + 8) = *(int *)(DAT_14c966ea8 + 8) + 1;
      UNLOCK();
    }
    cVar5 = FUN_1407c9dec(param_2,&local_1b8);
    if (cVar5 == '\0') {
      uVar8 = 0;
      goto LAB_14058e22f;
    }
  }
  if ((char)param_3 == '\0') {
    local_188[0] = &local_1a0;
    local_190 = &DAT_1428f5da4;
    local_1a0 = param_1;
    local_198 = param_2;
    cVar5 = FUN_1402c4aee(param_1 + 0xc9);
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if (cVar5 != '\0') goto LAB_14058e22f;
    dVar9 = (double)(**(code **)(*param_1 + 0x60))(param_1);
    if (((double)param_1[0x6e] != dVar9) || (NAN((double)param_1[0x6e]) || NAN(dVar9))) {
      param_1[0x6e] = (longlong)dVar9;
      FUN_1402c1cc6(param_1 + 0x70,dVar9);
    }
LAB_14058e160:
    uVar3 = *(undefined4 *)(param_2 + 0xc);
    FUN_1401b43e8(param_1,&local_1a0);
    local_1c8 = 0;
    local_1c0 = uVar3;
    (**(code **)(*param_1 + 0x108))(param_1,&local_190,*(undefined8 *)(param_2 + 0x20),&local_1a0);
    FUN_1401b439d(local_1a0,local_198 & 0xffffffff);
    if (local_1a0 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    cVar5 = (**(code **)(*param_1 + 8))(param_1);
    if (cVar5 != '\0') goto LAB_14058e160;
    cVar5 = (**(code **)(*DAT_14c968088 + 0x60))();
    if ((cVar5 != '\0') || (*(char *)((longlong)param_1 + 0x4c4) != '\0')) goto LAB_14058e160;
    local_190 = (undefined *)CONCAT71(local_190._1_7_,DAT_14c96b238);
    local_68 = (longlong ***)0x0;
    local_60 = 0x400000000;
    local_58 = 0;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    local_40 = 0;
    uStack_38 = 0;
  }
  uVar6 = FUN_1403cd6b2(param_1,&local_190,param_2,param_3);
  uVar8 = (ulonglong)uVar6;
  FUN_1447fa2ac(local_40,uStack_38 & 0xffffffff);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  plVar4 = plStack_48;
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
  ppplVar7 = (longlong ***)local_68;
  if ((longlong ***)local_68 == (longlong ***)0x0) {
    ppplVar7 = local_188;
  }
  FUN_1447157bd(ppplVar7,local_60 & 0xffffffff);
  if ((longlong ***)local_68 != (longlong ***)0x0) {
    FUN_1400020a8();
  }
LAB_14058e22f:
  if ((local_30 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14058e272 FUN_14058e272 body=29 status=ok
// SIG undefined FUN_14058e272(void)

void FUN_14058e272(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14058e290 FUN_14058e290 body=31 status=ok
// SIG undefined FUN_14058e290(void)

undefined8 FUN_14058e290(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14058e2b0 FUN_14058e2b0 body=29 status=ok
// SIG undefined FUN_14058e2b0(void)

undefined8 FUN_14058e2b0(longlong param_1,undefined8 param_2)

{
  FUN_14058e2ce(*(undefined8 *)(param_1 + 0x598));
  return param_2;
}



// FUNCTION 14058e2ce FUN_14058e2ce body=2571 status=ok
// SIG undefined FUN_14058e2ce(void)

longlong * FUN_14058e2ce(uint *param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  uint *puVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  float fVar7;
  undefined1 uVar8;
  char cVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  ulonglong uVar20;
  longlong *plVar21;
  longlong lVar22;
  char *pcVar23;
  longlong lVar24;
  float *pfVar25;
  byte bVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  longlong *plVar30;
  longlong lVar31;
  uint *puVar32;
  longlong *plVar33;
  longlong lVar34;
  longlong *plVar35;
  bool bVar36;
  undefined1 auStack_98 [32];
  longlong *local_78;
  ulonglong local_70;
  uint *local_68;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((((param_1[1] != 0) && (uVar29 = *param_1, -1 < (int)uVar29)) &&
       ((int)uVar29 < DAT_14c9647dc)) &&
      ((plVar30 = (longlong *)
                  ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8)),
       plVar30 != (longlong *)0x0 && (*(uint *)(plVar30 + 2) == param_1[1])))) &&
     (((*(uint *)(plVar30 + 1) & 0x10200000) == 0 && (*plVar30 != 0)))) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_58);
    plVar30 = local_50;
    if ((local_58 == 0) || (local_50 == (longlong *)0x0)) {
      plVar30 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)local_50 + 0xc) = *(int *)((longlong)local_50 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar33 = local_50 + 1;
      *(int *)plVar33 = (int)*plVar33 + -1;
      UNLOCK();
      if ((int)*plVar33 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar30 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar30 + 0x10))(plVar30);
        }
      }
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar33 = local_50 + 1;
      *(int *)plVar33 = (int)*plVar33 + -1;
      UNLOCK();
      if ((int)*plVar33 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_50 + 0x10))(local_50);
        }
      }
    }
    if (plVar30 != (longlong *)0x0) {
      iVar17 = (int)plVar30[1];
      do {
        plVar33 = (longlong *)0x0;
        if (iVar17 == 0) break;
        LOCK();
        iVar15 = (int)plVar30[1];
        bVar36 = iVar17 == iVar15;
        if (bVar36) {
          *(int *)(plVar30 + 1) = iVar17 + 1;
          iVar15 = iVar17;
        }
        iVar17 = iVar15;
        UNLOCK();
        plVar33 = plVar30;
      } while (!bVar36);
      LOCK();
      piVar1 = (int *)((longlong)plVar30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar30 + 0x10))(plVar30);
      }
      if (plVar33 != (longlong *)0x0) {
        if (local_58 == 0) {
          *param_2 = 0;
          param_2[1] = 0;
        }
        else {
          local_60 = param_3;
          uVar16 = FUN_14058ecda(param_3);
          puVar2 = param_1 + 2;
          uVar29 = param_1[4];
          uVar18 = param_1[0xf];
          if (uVar29 != uVar18) {
            puVar19 = param_1 + 0x10;
            if (*(uint **)(param_1 + 0x12) != (uint *)0x0) {
              puVar19 = *(uint **)(param_1 + 0x12);
            }
            uVar28 = puVar19[param_1[0x14] - 1 & uVar16];
            if (uVar28 != 0xffffffff) {
              do {
                lVar31 = *(longlong *)puVar2 + (longlong)(int)uVar28 * 0x20;
                if (*(uint *)(*(longlong *)puVar2 + (longlong)(int)uVar28 * 0x20) == uVar16) {
                  if (lVar31 != 0) goto LAB_14058e611;
                  break;
                }
                uVar28 = *(uint *)(lVar31 + 0x18);
              } while (uVar28 != 0xffffffff);
            }
          }
          if (uVar18 == 0) {
            param_1[4] = uVar29 + 1;
            if (param_1[5] == uVar29) {
              FUN_1447711aa(puVar2,uVar29);
            }
            uVar18 = param_1[0xc];
            uVar20 = (ulonglong)uVar18;
            if (uVar18 == 0) {
              iVar17 = -1;
            }
            else {
              iVar17 = uVar18 + 0x1e;
              if (-1 < (int)(uVar18 - 1)) {
                iVar17 = uVar18 - 1;
              }
              iVar17 = iVar17 >> 5;
            }
            puVar19 = param_1 + 6;
            uVar27 = uVar18 + 1;
            uVar28 = uVar18 + 0x1f;
            if (-1 < (int)uVar18) {
              uVar28 = uVar18;
            }
            if ((int)uVar28 >> 5 == iVar17) {
              param_1[0xc] = uVar27;
            }
            else {
              if ((int)param_1[0xd] <= (int)uVar18) {
                uVar18 = uVar18 + 0x20;
                local_78 = (longlong *)(ulonglong)uVar18;
                local_70 = uVar20;
                local_68 = puVar19;
                if (uVar18 < 0xa0) {
                  uVar18 = 0x80;
                }
                else {
                  uVar18 = uVar18 >> 5;
                  local_78 = (longlong *)(ulonglong)uVar18;
                  if (param_1[0xd] + 0x1f < 0xa0) {
                    uVar27 = 4;
                    if (4 < uVar18) {
                      uVar27 = uVar18;
                    }
                  }
                  else {
                    uVar27 = (uVar18 * 3 >> 3) + uVar18 + 0x10;
                  }
                  uVar20 = FUN_144a3809e(uVar27 << 2,0);
                  iVar17 = (int)(uVar20 >> 2);
                  uVar18 = 0xffffffe0;
                  if ((int)local_78 <= iVar17) {
                    uVar18 = iVar17 << 5;
                  }
                  uVar20 = (ulonglong)param_1[0xc];
                }
                param_1[0xd] = uVar18;
                FUN_1446efbd8(local_68,uVar20);
                uVar27 = param_1[0xc] + 1;
                uVar20 = local_70;
                puVar19 = local_68;
              }
              uVar18 = uVar27 + 0x1f;
              if (-1 < (int)uVar27) {
                uVar18 = uVar27;
              }
              param_1[0xc] = uVar27;
              if ((int)uVar27 % 0x20 != 0) {
                puVar32 = *(uint **)(param_1 + 10);
                if (*(uint **)(param_1 + 10) == (uint *)0x0) {
                  puVar32 = puVar19;
                }
                bVar26 = -(char)((int)uVar27 % 0x20);
                puVar32[(int)uVar18 >> 5] =
                     (puVar32[(int)uVar18 >> 5] << (bVar26 & 0x1f)) >> (bVar26 & 0x1f);
              }
            }
            lVar31 = (longlong)(int)uVar29;
            if (*(uint **)(param_1 + 10) != (uint *)0x0) {
              puVar19 = *(uint **)(param_1 + 10);
            }
            bVar26 = (byte)uVar20 & 0x1f;
            puVar19[(int)uVar28 >> 5] =
                 puVar19[(int)uVar28 >> 5] & (-2 << bVar26 | 0xfffffffeU >> 0x20 - bVar26);
          }
          else {
            uVar29 = param_1[0xe];
            lVar31 = (longlong)(int)uVar29;
            uVar28 = *(uint *)(*(longlong *)(param_1 + 2) + 4 + lVar31 * 0x20);
            param_1[0xe] = uVar28;
            param_1[0xf] = uVar18 - 1;
            if (uVar18 - 1 != 0) {
              *(undefined4 *)(*(longlong *)(param_1 + 2) + (longlong)(int)uVar28 * 0x20) =
                   0xffffffff;
            }
          }
          puVar19 = param_1 + 6;
          if (*(uint **)(param_1 + 10) != (uint *)0x0) {
            puVar19 = *(uint **)(param_1 + 10);
          }
          uVar18 = uVar29 + 0x1f;
          if (-1 < (int)uVar29) {
            uVar18 = uVar29;
          }
          puVar19[(int)uVar18 >> 5] = puVar19[(int)uVar18 >> 5] | 1 << ((byte)uVar29 & 0x1f);
          uVar18 = 1;
          lVar24 = *(longlong *)(param_1 + 2);
          lVar31 = lVar31 * 0x20;
          puVar4 = (undefined4 *)(lVar24 + lVar31);
          *(uint *)(lVar24 + lVar31) = uVar16;
          puVar6 = (undefined8 *)(lVar24 + 8 + lVar31);
          *puVar6 = 0;
          puVar6[1] = 0;
          *(undefined4 *)(lVar24 + 0x18 + lVar31) = 0xffffffff;
          uVar28 = param_1[4] - param_1[0xf];
          if ((uVar28 != 0) && (uVar28 != 1)) {
            puVar19 = param_1 + 0x10;
            if (*(uint **)(param_1 + 0x12) != (uint *)0x0) {
              puVar19 = *(uint **)(param_1 + 0x12);
            }
            uVar27 = puVar19[param_1[0x14] - 1 & uVar16];
            if (uVar27 != 0xffffffff) {
              do {
                puVar5 = (undefined4 *)(*(longlong *)puVar2 + (longlong)(int)uVar27 * 0x20);
                if (*(uint *)(*(longlong *)puVar2 + (longlong)(int)uVar27 * 0x20) == uVar16) {
                  plVar30 = *(longlong **)(puVar5 + 4);
                  if (plVar30 != (longlong *)0x0) {
                    LOCK();
                    plVar21 = plVar30 + 1;
                    *(int *)plVar21 = (int)*plVar21 + -1;
                    UNLOCK();
                    if ((int)*plVar21 == 0) {
                      (**(code **)*plVar30)(plVar30);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar30 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)(*plVar30 + 0x10))(plVar30);
                      }
                    }
                  }
                  uVar11 = *puVar4;
                  uVar12 = puVar4[1];
                  uVar13 = puVar4[2];
                  uVar14 = puVar4[3];
                  *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(puVar4 + 4);
                  *puVar5 = uVar11;
                  puVar5[1] = uVar12;
                  puVar5[2] = uVar13;
                  puVar5[3] = uVar14;
                  FUN_147e67ae8(puVar2,uVar29);
                  goto LAB_14058e5f0;
                }
                uVar27 = puVar5[6];
              } while (uVar27 != 0xffffffff);
            }
          }
          if (3 < uVar28) {
            uVar20 = (ulonglong)(uVar28 & 0xfffffffe) + 0xf;
            lVar31 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar31 == 0; lVar31 = lVar31 + -1) {
              }
            }
            uVar18 = 1 << ((byte)lVar31 & 0x1f);
          }
          if (((int)uVar28 < 1) || ((int)uVar18 <= (int)param_1[0x14])) {
            uVar16 = param_1[0x14] - 1 & uVar16;
            puVar4[7] = uVar16;
            puVar19 = *(uint **)(param_1 + 0x12);
            if (*(uint **)(param_1 + 0x12) == (uint *)0x0) {
              puVar19 = param_1 + 0x10;
            }
            puVar4[6] = puVar19[(longlong)(int)param_1[0x14] - 1U & (longlong)(int)uVar16];
            puVar19 = *(uint **)(param_1 + 0x12);
            if (*(uint **)(param_1 + 0x12) == (uint *)0x0) {
              puVar19 = param_1 + 0x10;
            }
            puVar19[(longlong)(int)param_1[0x14] - 1U & (longlong)(int)uVar16] = uVar29;
          }
          else {
            param_1[0x14] = uVar18;
            FUN_14058eec0(puVar2);
          }
LAB_14058e5f0:
          lVar31 = *(longlong *)puVar2 + (longlong)(int)uVar29 * 0x20;
LAB_14058e611:
          plVar30 = (longlong *)(lVar31 + 8);
          if (*plVar30 == 0) {
            lVar24 = local_58 + 0x2f0;
            plVar21 = (longlong *)FUN_14001cc68(0x228,0x10);
            plVar21[1] = (longlong)&DAT_100000001;
            *plVar21 = (longlong)&PTR_FUN_14aba4a50;
            plVar21[3] = 0xffffffff;
            plVar21[4] = 1;
            plVar21[2] = (longlong)&PTR_FUN_14aba2e90;
            plVar21[5] = 0;
            lVar22 = FUN_14477bcf0();
            uVar29 = 0;
            if (0 < (longlong)*(int *)(lVar22 + 0x50)) {
              lVar34 = 0;
              uVar29 = 0;
              do {
                lVar10 = *(longlong *)(*(longlong *)(lVar22 + 0x48) + lVar34 * 8);
                if ((lVar10 != 0) && (*(char *)(lVar10 + 0x30) == '\x01')) {
                  uVar29 = uVar29 | 1 << ((uint)lVar34 & 0x1f);
                }
                lVar34 = lVar34 + 1;
              } while (*(int *)(lVar22 + 0x50) != lVar34);
            }
            local_78 = plVar21 + 2;
            *(uint *)(plVar21 + 6) = uVar29;
            *(undefined4 *)((longlong)plVar21 + 0x34) = 0;
            *(undefined1 *)(plVar21 + 7) = 1;
            *(undefined4 *)((longlong)plVar21 + 0x3c) = 0;
            plVar21[8] = local_58 + 0x200;
            plVar21[9] = lVar24;
            plVar21[0xb] = 0xffffffff;
            plVar21[0xc] = 1;
            plVar21[10] = (longlong)&PTR_FUN_14aba2ec0;
            plVar21[0x3e] = local_58 + 0x200;
            plVar21[0x3f] = lVar24;
            lVar22 = 0x1a;
            do {
              puVar6 = (undefined8 *)((longlong)plVar21 + lVar22 * 4);
              *puVar6 = &DAT_3f8000003f800000;
              puVar6[1] = &DAT_3f8000003f800000;
              lVar22 = lVar22 + 4;
            } while (lVar22 != 0x3a);
            lVar22 = 0x3a;
            do {
              puVar6 = (undefined8 *)((longlong)plVar21 + lVar22 * 4);
              *puVar6 = &DAT_3f8000003f800000;
              puVar6[1] = &DAT_3f8000003f800000;
              lVar22 = lVar22 + 4;
            } while (lVar22 != 0x5a);
            plVar21[0x3b] = 0;
            plVar21[0x3c] = 0;
            plVar21[0x39] = 0;
            plVar21[0x3a] = 0;
            plVar21[0x37] = 0;
            plVar21[0x38] = 0;
            plVar21[0x35] = 0;
            plVar21[0x36] = 0;
            plVar21[0x33] = 0;
            plVar21[0x34] = 0;
            plVar21[0x31] = 0;
            plVar21[0x32] = 0;
            plVar21[0x2f] = 0;
            plVar21[0x30] = 0;
            plVar21[0x2d] = 0;
            plVar21[0x2e] = 0;
            plVar21[0x41] = 0xffffffff;
            plVar21[0x42] = 1;
            plVar21[0x40] = (longlong)&PTR_FUN_14aba2ef0;
            lVar22 = FUN_14477bcf0();
            if ((longlong)*(int *)(lVar22 + 0x50) < 1) {
              uVar18 = 0;
            }
            else {
              lVar34 = 0;
              uVar18 = 0;
              do {
                lVar10 = *(longlong *)(*(longlong *)(lVar22 + 0x48) + lVar34 * 8);
                if ((lVar10 != 0) && (*(char *)(lVar10 + 0x30) == '\x01')) {
                  uVar18 = uVar18 | 1 << ((uint)lVar34 & 0x1f);
                }
                lVar34 = lVar34 + 1;
              } while (*(int *)(lVar22 + 0x50) != lVar34);
            }
            *(uint *)(plVar21 + 0x43) = uVar18;
            plVar21[0x44] = lVar24;
            uVar8 = *(undefined1 *)(local_60 + 0x188);
            *(undefined1 *)(plVar21 + 7) = uVar8;
            *(undefined1 *)(plVar21 + 0x3d) = *(undefined1 *)(local_60 + 0x189);
            *(undefined1 *)((longlong)plVar21 + 0x21c) = uVar8;
            lVar24 = local_60 + 8;
            if (*(longlong *)(local_60 + 200) != 0) {
              lVar24 = *(longlong *)(local_60 + 200);
            }
            iVar17 = *(int *)(local_60 + 0xd0);
            if (0 < (longlong)iVar17) {
              pcVar23 = (char *)(lVar24 + 0x10);
              uVar18 = 0;
              uVar20 = 0;
              do {
                if (uVar20 < 0x20 && *(longlong *)(pcVar23 + -0x10) != 0) {
                  cVar9 = *pcVar23;
                  uVar16 = 1 << ((byte)uVar20 & 0x1f);
                  fVar7 = *(float *)(pcVar23 + -8);
                  uVar29 = uVar29 | 1 << ((uint)uVar20 & 0x1f);
                  *(uint *)(plVar21 + 6) = uVar29;
                  if ((cVar9 == '\x01') && (fVar7 < 1.1)) {
                    uVar18 = uVar18 | uVar16;
                    *(uint *)((longlong)plVar21 + 0x3c) = uVar18;
                  }
                  if (0.0 < fVar7) {
                    *(float *)((longlong)plVar21 + uVar20 * 4 + 0x68) = fVar7;
                  }
                  if (0.0 < *(float *)(pcVar23 + -4)) {
                    *(float *)((longlong)plVar21 + uVar20 * 4 + 0x168) = *(float *)(pcVar23 + -4);
                  }
                  *(uint *)(plVar21 + 0x43) = *(uint *)(plVar21 + 0x43) | uVar16;
                }
                uVar20 = uVar20 + 1;
                pcVar23 = pcVar23 + 0x18;
              } while ((longlong)iVar17 != uVar20);
            }
            lVar24 = local_60 + 0xd8;
            if (*(longlong *)(local_60 + 0x158) != 0) {
              lVar24 = *(longlong *)(local_60 + 0x158);
            }
            iVar17 = *(int *)(local_60 + 0x160);
            if (0 < (longlong)iVar17) {
              pfVar25 = (float *)(lVar24 + 8);
              uVar29 = 0;
              uVar20 = 0;
              do {
                if ((uVar20 < 0x20) && (*(longlong *)(pfVar25 + -2) != 0)) {
                  uVar29 = uVar29 | 1 << ((uint)uVar20 & 0x1f);
                  *(uint *)((longlong)plVar21 + 0x34) = uVar29;
                  if (0.0 < *pfVar25) {
                    *(float *)((longlong)plVar21 + uVar20 * 4 + 0xe8) = *pfVar25;
                  }
                }
                uVar20 = uVar20 + 1;
                pfVar25 = pfVar25 + 4;
              } while ((longlong)iVar17 != uVar20);
            }
            if (plVar21 == (longlong *)0x0) {
              *plVar30 = (longlong)local_78;
              plVar35 = *(longlong **)(lVar31 + 0x10);
              if (plVar35 != (longlong *)0x0) {
                *(undefined8 *)(lVar31 + 0x10) = 0;
LAB_14058ec81:
                LOCK();
                plVar3 = plVar35 + 1;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)*plVar3 == 0) {
                  (**(code **)*plVar35)(plVar35);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar35 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar35 + 0x10))(plVar35);
                  }
                }
                if (plVar21 != (longlong *)0x0) goto LAB_14058eaba;
              }
            }
            else {
              LOCK();
              *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
              UNLOCK();
              *plVar30 = (longlong)local_78;
              plVar35 = *(longlong **)(lVar31 + 0x10);
              if (plVar21 == plVar35) {
                LOCK();
                plVar35 = plVar21 + 1;
                *(int *)plVar35 = (int)*plVar35 + -1;
                UNLOCK();
                if ((int)*plVar35 == 0) {
                  (**(code **)*plVar21)(plVar21);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar21 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar21 + 0x10))(plVar21);
                  }
                }
              }
              else {
                *(longlong **)(lVar31 + 0x10) = plVar21;
                if (plVar35 != (longlong *)0x0) goto LAB_14058ec81;
              }
LAB_14058eaba:
              LOCK();
              plVar35 = plVar21 + 1;
              *(int *)plVar35 = (int)*plVar35 + -1;
              UNLOCK();
              if ((int)*plVar35 == 0) {
                (**(code **)*plVar21)(plVar21);
                LOCK();
                piVar1 = (int *)((longlong)plVar21 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar21 + 0x10))(plVar21);
                }
              }
            }
          }
          lVar24 = *plVar30;
          plVar30 = *(longlong **)(lVar31 + 0x10);
          if (plVar30 == (longlong *)0x0) {
            *param_2 = lVar24;
            param_2[1] = 0;
          }
          else {
            LOCK();
            *(int *)(plVar30 + 1) = (int)plVar30[1] + 1;
            UNLOCK();
            *param_2 = lVar24;
            param_2[1] = (longlong)plVar30;
            LOCK();
            *(int *)((longlong)plVar30 + 0xc) = *(int *)((longlong)plVar30 + 0xc) + 1;
            UNLOCK();
            LOCK();
            plVar21 = plVar30 + 1;
            *(int *)plVar21 = (int)*plVar21 + -1;
            UNLOCK();
            if ((int)*plVar21 == 0) {
              (**(code **)*plVar30)(plVar30);
              LOCK();
              piVar1 = (int *)((longlong)plVar30 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar30 + 0x10))(plVar30);
              }
            }
          }
        }
        LOCK();
        plVar30 = plVar33 + 1;
        *(int *)plVar30 = (int)*plVar30 + -1;
        UNLOCK();
        if ((int)*plVar30 == 0) {
          (**(code **)*plVar33)(plVar33);
          LOCK();
          piVar1 = (int *)((longlong)plVar33 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar33 + 0x10))(plVar33);
          }
        }
        goto LAB_14058e64e;
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_14058e64e:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14058ecda FUN_14058ecda body=334 status=ok
// SIG undefined FUN_14058ecda(void)

uint FUN_14058ecda(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar5 = (uint)*(byte *)(param_1 + 0x189) + (uint)*(byte *)(param_1 + 0x188) * 0x40 + 0x9e3779b9 ^
          (uint)*(byte *)(param_1 + 0x188);
  plVar4 = (longlong *)(param_1 + 8);
  if (*(longlong **)(param_1 + 200) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 200);
  }
  if ((longlong)*(int *)(param_1 + 0xd0) != 0) {
    lVar7 = (longlong)*(int *)(param_1 + 0xd0) * 0x18;
    do {
      if (*plVar4 != 0) {
        iVar2 = FUN_14058ee28(plVar4);
        uVar5 = uVar5 ^ iVar2 + (uVar5 >> 2) + uVar5 * 0x40 + 0x9e3779b9;
      }
      plVar4 = plVar4 + 3;
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != 0);
  }
  lVar7 = param_1 + 0xd8;
  if (*(longlong *)(param_1 + 0x158) != 0) {
    lVar7 = *(longlong *)(param_1 + 0x158);
  }
  if ((longlong)*(int *)(param_1 + 0x160) != 0) {
    lVar3 = 0;
    do {
      uVar1 = *(ulonglong *)(lVar7 + lVar3);
      if (uVar1 != 0) {
        uVar6 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        uVar6 = uVar6 >> 0x10 ^ uVar6;
        uVar5 = uVar5 ^ (uVar5 >> 2) + uVar5 * 0x40 + -0x61c88647 +
                        ((int)(*(float *)(lVar7 + 8 + lVar3) * 100.0) + -0x61c88647 +
                         (uVar6 >> 2) + uVar6 * 0x40 ^ uVar6);
      }
      lVar3 = lVar3 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x160) * 0x10 != lVar3);
  }
  return uVar5;
}



// FUNCTION 14058ee28 FUN_14058ee28 body=152 status=ok
// SIG undefined FUN_14058ee28(void)

uint FUN_14058ee28(ulonglong *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)(*param_1 >> 0x14) & 0xffff ^ (uint)(*param_1 >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar1 = uVar1 >> 0x10 ^ uVar1;
  uVar1 = (uVar1 >> 2) + 0x9e3779b9 + uVar1 * 0x40 + (int)(*(float *)(param_1 + 1) * 100.0) ^ uVar1;
  uVar1 = (uVar1 >> 2) + 0x9e3779b9 +
          uVar1 * 0x40 + (int)(*(float *)((longlong)param_1 + 0xc) * 100.0) ^ uVar1;
  return (uVar1 >> 2) + 0x9e3779b9 + (uVar1 << 6 | (uint)(byte)param_1[2]) ^ uVar1;
}



// FUNCTION 14058eec0 FUN_14058eec0 body=539 status=ok
// SIG undefined FUN_14058eec0(void)

void FUN_14058eec0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar8 = local_58 >> 0x20;
    }
    iVar4 = (int)local_58;
    uVar5 = (uint)local_48;
    iVar6 = local_48._4_4_;
    iVar9 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6 * 0x20;
        uVar13 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar11 + lVar10);
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x1c + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x18 + lVar10) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar12 = (int)local_50[3];
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar6 = iVar12 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_14058f096;
          }
          iVar4 = iVar4 + (int)lVar10 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar12);
    }
  }
LAB_14058f096:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14058f0dc FUN_14058f0dc body=57 status=ok
// SIG undefined FUN_14058f0dc(void)

void FUN_14058f0dc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a028 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a028 = FUN_140002ddd(FUN_1464c7b9c,uVar1,L"GbxAnimUpdateRateParametersDef");
  }
  return;
}



// FUNCTION 14058f116 FUN_14058f116 body=1768 status=ok
// SIG undefined FUN_14058f116(void)

void FUN_14058f116(longlong param_1,float param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined1 auStack_1f8 [32];
  undefined4 *local_1d8;
  undefined4 local_1d0;
  code **local_1c8;
  undefined1 *local_1c0;
  undefined8 **local_1b8;
  undefined1 *local_1b0;
  undefined1 *local_1a8;
  code **local_1a0;
  undefined1 *local_198;
  code *local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 *local_168;
  int local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  double local_148;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double local_128;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  double local_e8;
  undefined8 *local_e0;
  int local_d8;
  code *local_d0;
  longlong local_c8;
  undefined1 local_c0;
  undefined2 local_bf;
  undefined1 local_bd;
  undefined2 local_bc;
  undefined1 local_ba;
  undefined2 local_b9;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined2 local_a8;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  FUN_14058f800();
  *(float *)(param_1 + 0x6c4) = param_2 + *(float *)(param_1 + 0x6c4);
  if ((((((*(longlong *)(param_1 + 0x6c8) != 0) ||
         (*(longlong **)(param_1 + 0x20) == (longlong *)0x0)) || (*(int *)(param_1 + 0x1c) == 0)) ||
       ((uVar1 = *(uint *)(param_1 + 0x18), (int)uVar1 < 0 || (DAT_14c9647dc <= (int)uVar1)))) ||
      ((lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar10 == 0 ||
       ((*(int *)(lVar10 + 0x10) != *(int *)(param_1 + 0x1c) ||
        ((*(uint *)(lVar10 + 8) & 0x10200000) != 0)))))) ||
     (plVar5 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))(),
     plVar5 == (longlong *)0x0)) goto LAB_14058f2ba;
  if (DAT_14cb5b388 == 0) {
    local_1a0 = &local_d0;
    local_d0 = FUN_141864c34;
    local_190 = FUN_14081d0ea;
    local_198 = &LAB_146431698;
    local_1a8 = &LAB_1486775cb;
    local_1b0 = &LAB_1464cee35;
    local_1b8 = (undefined8 **)&DAT_149e063b2;
    local_1c0 = (undefined1 *)0x0;
    local_1c8 = (code **)CONCAT44(local_1c8._4_4_,0x10000005);
    local_1d0 = 0x10;
    local_1d8 = (undefined4 *)CONCAT44(local_1d8._4_4_,0x3a20);
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
  }
  if ((*(int *)(plVar5[2] + 0x38) < *(int *)(DAT_14cb5b388 + 0x38)) ||
     (*(longlong *)(*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8)
      != DAT_14cb5b388 + 0x30)) goto LAB_14058f2ba;
  lVar10 = *plVar5;
  if (*(code **)(lVar10 + 0x5e8) == FUN_140972dde) {
    if (plVar5[0x76] == 0) {
      if (*(code **)(lVar10 + 0x5f8) == FUN_144784df4) {
        if (*(code **)(plVar5[0x784] + 0x18) == (code *)&LAB_144904684) {
          if ((((*(int *)((longlong)plVar5 + 0x75b4) == 0) ||
               (uVar1 = *(uint *)(plVar5 + 0xeb6), (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)
              ) || (((plVar8 = (longlong *)
                               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                     plVar8 == (longlong *)0x0 ||
                     ((int)plVar8[2] != *(int *)((longlong)plVar5 + 0x75b4))) ||
                    ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)))) goto LAB_14058f2ba;
          if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
            lVar10 = *plVar8;
          }
          else {
            lVar10 = 0;
          }
          lVar10 = lVar10 + 0x110;
        }
        else {
          lVar10 = (**(code **)(plVar5[0x784] + 0x18))(plVar5 + 0x784);
        }
        if (lVar10 == 0) goto LAB_14058f2ba;
        lVar10 = *(longlong *)(lVar10 + 0x20);
      }
      else {
        lVar10 = (**(code **)(lVar10 + 0x5f8))(plVar5);
      }
      if (lVar10 == 0) goto LAB_14058f2ba;
      lVar10 = *(longlong *)(lVar10 + 0x3b0);
      goto LAB_14058f385;
    }
  }
  else {
    lVar10 = (**(code **)(lVar10 + 0x5e8))(plVar5);
LAB_14058f385:
    if (lVar10 == 0) goto LAB_14058f2ba;
    lVar10 = *plVar5;
  }
  cVar3 = (**(code **)(lVar10 + 0x700))(plVar5);
  if (cVar3 == '\0') goto LAB_14058f2ba;
  if ((plVar5[0x23d] == 0) || ((&DAT_00001100)[plVar5[0x23d]] != '\x03')) {
    *(undefined4 *)(param_1 + 0x6c0) = 0;
    goto LAB_14058f2ba;
  }
  if (*(float *)(param_1 + 0x6c4) <= 0.25 && *(float *)(param_1 + 0x6c4) != 0.25)
  goto LAB_14058f2ba;
  FUN_140aec308(param_1,&local_e0);
  if (local_d8 != 0) {
    local_ac = 0;
    local_a8 = 0x101;
    local_80 = 0;
    local_78 = 0x800000000;
    local_60 = 0;
    local_54 = 4;
    local_c0 = 0;
    local_b4 = 0;
    local_d0 = (code *)0x0;
    local_bf = 1;
    local_bd = 0;
    local_b0 = 0;
    local_bc = 0;
    local_ba = 0;
    local_70 = *(undefined4 *)((longlong)plVar5 + 0xc);
    local_c8 = plVar5[3];
    local_b9 = 0x101;
    local_58 = 2;
    local_6c = local_70;
    FUN_140a9d2f2(param_1,&local_158,*local_e0);
    local_f8 = local_138;
    uStack_f4 = uStack_134;
    uStack_f0 = uStack_130;
    uStack_ec = uStack_12c;
    local_e8 = local_128;
    local_148 = local_128 + -5000.0;
    local_158 = local_138;
    uStack_154 = uStack_134;
    uStack_150 = uStack_130;
    uStack_14c = uStack_12c;
    local_168 = (undefined8 *)0x0;
    local_160 = 0;
    FUN_1446efa72(&local_168,0,3,0x10);
    puVar2 = local_168;
    local_160 = 3;
    *local_168 = &PTR_LAB_14a78e0f0;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    local_168[2] = lVar7;
    *local_168 = &PTR_FUN_14b961be0;
    local_168[3] = 0;
    uVar1 = *(uint *)((longlong)plVar5 + 0xc);
    *(uint *)(local_168 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar4 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar4 = *(int *)(lVar10 + 0x10);
      bVar11 = iVar4 == 0;
      if (bVar11) {
        *(int *)(lVar10 + 0x10) = iVar9;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar4 = iVar9;
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar4;
    puVar2[4] = param_1;
    lVar10 = FUN_1447210f0(plVar5);
    if (lVar10 != 0) {
      uVar6 = FUN_1447210f0(plVar5);
      local_1b0 = (undefined1 *)((ulonglong)local_1b0 & 0xffffffff00000000);
      local_1c0 = &DAT_14cad0f10;
      local_1c8 = &local_d0;
      local_1d0 = 0x19;
      local_1d8 = &local_158;
      local_1b8 = &local_168;
      FUN_1447de878(uVar6,&local_170,1,&local_f8);
      *(undefined8 *)(param_1 + 0x6c8) = local_170;
      *(undefined4 *)(param_1 + 0x6c4) = 0;
    }
    if (local_160 == 0) {
LAB_14058f623:
      if (local_168 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_168 != (undefined8 *)0x0) {
      (**(code **)*local_168)(local_168,0);
      FUN_1446efa72(&local_168,0,0,0x10);
      local_160 = 0;
      goto LAB_14058f623;
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (local_80 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_e0 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14058f2ba:
  lVar10 = FUN_1449e3f1e();
  if (lVar10 != 0) {
    if (*(char *)(param_1 + 0x301) == '\0') {
      uVar12 = 0;
    }
    else {
      uVar12 = 0x3f800000;
    }
    local_188 = *(undefined8 *)(lVar10 + 0x318);
    uVar6 = FUN_14477b664(*(undefined8 *)(lVar10 + 800));
    local_180 = FUN_14477b664(uVar6);
    local_178 = *(undefined8 *)(lVar10 + 0x328);
    FUN_1449e410c(param_1,&local_188,uVar12);
  }
  if ((local_50 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14058f800 FUN_14058f800 body=8545 status=ok
// SIG undefined FUN_14058f800(void)

void FUN_14058f800(longlong *param_1,float param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  longlong *plVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  code *pcVar10;
  int iVar11;
  char cVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  double *pdVar20;
  int iVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  bool bVar28;
  float fVar29;
  double dVar30;
  double dVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auStack_268 [32];
  longlong **local_248;
  undefined4 local_240;
  code **local_238;
  undefined1 *local_230;
  undefined8 **local_228;
  undefined1 *local_220;
  undefined1 *local_218;
  code **local_210;
  code *local_208;
  code *local_200;
  uint local_1f4;
  longlong *local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  code *local_1d0;
  undefined4 local_1c8;
  undefined8 *local_1c0;
  int local_1b8;
  longlong *local_1b0;
  double local_1a8;
  double local_1a0;
  longlong *local_198;
  double dStack_190;
  double local_188;
  longlong *local_180;
  code *local_178;
  longlong *plStack_170;
  undefined1 local_168;
  undefined2 uStack_167;
  undefined1 uStack_165;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  uint local_158;
  undefined4 uStack_154;
  undefined2 uStack_150;
  undefined6 uStack_14e;
  double local_148;
  longlong local_128;
  undefined8 local_120;
  undefined4 local_118;
  longlong local_108;
  undefined4 local_100;
  undefined4 local_fc;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_268;
  FUN_14478b484();
  if (((((param_1[4] == 0) || (*(int *)((longlong)param_1 + 0x1c) == 0)) ||
       (uVar25 = *(uint *)(param_1 + 3), (int)uVar25 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar25 ||
       (lVar23 = (ulonglong)((uVar25 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8), lVar23 == 0)))) ||
     ((*(int *)(lVar23 + 0x10) != *(int *)((longlong)param_1 + 0x1c) ||
      ((*(uint *)(lVar23 + 8) & 0x10200000) != 0)))) goto LAB_14058f8d9;
  *(undefined4 *)(param_1 + 0x93) = 0;
  lVar23 = param_1[0x8a];
  if (lVar23 == 0) {
    uVar15 = FUN_1407f787c();
    lVar23 = FUN_14477b664(uVar15);
    param_1[0x8a] = lVar23;
  }
  if (param_1[0x8b] == 0) {
    bVar28 = false;
    if ((lVar23 != 0) && (param_1[0x89] != 0)) {
      plVar17 = *(longlong **)(lVar23 + 0xb8);
      if ((plVar17 == (longlong *)0x0) ||
         (cVar12 = (**(code **)(*plVar17 + 0x108))(plVar17), cVar12 == '\0')) {
        param_1[0x8b] = 0;
      }
      else {
        uVar15 = (**(code **)(*plVar17 + 0x110))(plVar17);
        lVar23 = FUN_144aff482(uVar15,param_1 + 0x89);
        param_1[0x8b] = lVar23;
        if (lVar23 != 0) goto LAB_14058f998;
      }
      bVar28 = false;
    }
  }
  else {
LAB_14058f998:
    bVar28 = false;
    (**(code **)(*(longlong *)param_1[4] + 0x28))((longlong *)param_1[4],&local_178,param_1[0x8c],0)
    ;
    dVar30 = (double)CONCAT44(uStack_154,local_158);
    dVar7 = (double)CONCAT62(uStack_14e,uStack_150);
    dVar6 = 0.0;
    if ((((dVar30 != 0.0) || (NAN(dVar30))) || (dVar7 != 0.0)) ||
       (((NAN(dVar7) || (local_148 != 0.0)) || (NAN(local_148))))) {
      if (0.0001 < param_2) {
        dVar6 = SQRT((local_148 - (double)param_1[0x92]) * (local_148 - (double)param_1[0x92]) +
                     (dVar30 - (double)param_1[0x90]) * (dVar30 - (double)param_1[0x90]) +
                     (dVar7 - (double)param_1[0x91]) * (dVar7 - (double)param_1[0x91])) /
                (double)param_2;
      }
      fVar33 = (float)dVar6;
      fVar29 = (float)(~-(uint)(0.0001 < param_2) & 0x7f7fffff |
                      (uint)(1000.0 / param_2) & -(uint)(0.0001 < param_2));
      bVar28 = fVar29 < fVar33;
      *(uint *)(param_1 + 0x93) = -(uint)(fVar33 <= fVar29) & (uint)fVar33;
    }
    param_1[0x90] = (longlong)dVar30;
    param_1[0x91] = CONCAT62(uStack_14e,uStack_150);
    param_1[0x92] = (longlong)local_148;
  }
  lVar23 = param_1[0x6d];
  if ((longlong)(int)lVar23 != 0) {
    lVar27 = param_1[0x6c];
    lVar26 = 0;
    uVar25 = (uint)(byte)~bVar28;
    local_1f4 = (uint)(byte)~bVar28;
    do {
      if (*(int *)(lVar27 + lVar26) == 0) {
        lVar16 = *(longlong *)(lVar27 + 0x40 + lVar26);
        if (lVar16 == 0) {
          uVar15 = FUN_1407f787c();
          lVar16 = FUN_14477b664(uVar15);
          *(longlong *)(lVar27 + 0x40 + lVar26) = lVar16;
        }
        lVar2 = lVar27 + 0x38 + lVar26;
        if (*(longlong *)(lVar27 + 0x48 + lVar26) == 0) {
          if ((lVar16 != 0) && (*(longlong *)(lVar27 + 0x38 + lVar26) != 0)) {
            plVar17 = *(longlong **)(lVar16 + 0xb8);
            if ((plVar17 == (longlong *)0x0) ||
               (cVar12 = (**(code **)(*plVar17 + 0x108))(plVar17), cVar12 == '\0')) {
              *(undefined8 *)(lVar27 + 0x48 + lVar26) = 0;
            }
            else {
              uVar15 = (**(code **)(*plVar17 + 0x110))(plVar17);
              lVar16 = FUN_144aff482(uVar15,lVar2);
              *(longlong *)(lVar27 + 0x48 + lVar26) = lVar16;
              if (lVar16 != 0) goto LAB_14058fb2e;
            }
          }
        }
        else {
LAB_14058fb2e:
          plVar17 = *(longlong **)(lVar27 + 0x68 + lVar26);
          if (((plVar17 != (longlong *)0x0) &&
              (lVar16 = *(longlong *)(lVar27 + 0x70 + lVar26), lVar16 != -1)) &&
             (*plVar17 == lVar16)) {
            *(int *)(plVar17 + 0x21) = (int)plVar17[0x21] + 1;
            if (0 < (int)plVar17[0x26]) {
              plVar18 = (longlong *)param_1[4];
              uVar13 = (**(code **)(*plVar18 + 0x28))
                                 (plVar18,&local_178,*(undefined8 *)(lVar27 + 0x28 + lVar26),
                                  *(undefined4 *)(lVar27 + 0x78 + lVar26));
              plVar4 = plStack_170;
              pcVar10 = local_178;
              dVar8 = (double)CONCAT44(uStack_164,
                                       CONCAT13(uStack_165,CONCAT21(uStack_167,local_168)));
              dVar9 = (double)CONCAT44(uStack_15c,uStack_160);
              auVar3 = *(undefined1 (*) [16])(lVar27 + 0x80 + lVar26);
              dVar6 = auVar3._0_8_;
              dVar30 = auVar3._8_8_;
              pdVar20 = (double *)(lVar27 + 0x90 + lVar26);
              dVar7 = *pdVar20;
              dVar31 = pdVar20[1];
              lVar16 = -(ulonglong)(9.99999993922529e-09 < ABS(dVar30 - DAT_14c8463d8));
              auVar3._8_4_ = (int)lVar16;
              auVar3._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar6 - DAT_14c8463d0));
              auVar3._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
              uVar14 = movmskpd(uVar13,auVar3);
              auVar35._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar31 - DAT_14c8463e8));
              auVar35._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar7 - DAT_14c8463e0));
              iVar21 = movmskpd((int)plVar18,auVar35);
              uVar22 = iVar21 << 2 | uVar14;
              if (uVar22 != 0) {
                auVar36._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8463d8 + dVar30));
                auVar36._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8463d0 + dVar6));
                iVar21 = movmskpd(uVar14,auVar36);
                lVar16 = -(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8463e8 + dVar31));
                auVar5._8_4_ = (int)lVar16;
                auVar5._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8463e0 + dVar7));
                auVar5._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
                uVar14 = movmskpd(uVar22,auVar5);
                if (((byte)uVar25 & ((uVar14 & 0x3fffffff) != 0 || iVar21 != 0)) != 0) {
                  dVar31 = 0.0;
                  if (0.0001 < param_2) {
                    dVar6 = dVar9 * *(double *)(lVar27 + 0x98 + lVar26) +
                            dVar7 * dVar8 + dVar6 * (double)local_178 + dVar30 * (double)plStack_170
                    ;
                    dVar30 = (dVar6 + dVar6) * dVar6 + -1.0;
                    dVar6 = dVar30;
                    if (1.0 <= dVar30) {
                      dVar6 = 1.0;
                    }
                    dVar31 = acos((double)(-(ulonglong)(dVar30 < -1.0) & 0xbff0000000000000 |
                                          ~-(ulonglong)(dVar30 < -1.0) & (ulonglong)dVar6));
                    dVar31 = dVar31 / (double)param_2;
                  }
                  fVar32 = (float)dVar31;
                  *(float *)(lVar27 + 0xa0 + lVar26) = fVar32;
                  fVar29 = *(float *)(lVar27 + 0x30 + lVar26);
                  fVar33 = *(float *)(lVar27 + 0x34 + lVar26);
                  fVar34 = fVar33 - fVar29;
                  if (ABS(fVar34) <= 1e-08) {
                    fVar34 = (float)(-(uint)(fVar33 <= fVar32) & 0x3f800000);
                  }
                  else {
                    fVar34 = (fVar32 - fVar29) / fVar34;
                  }
                  if (1.0 <= fVar34) {
                    fVar34 = 1.0;
                  }
                  if (fVar34 <= 0.0) {
                    fVar34 = 0.0;
                  }
                  fVar33 = (DAT_14cb7d66c - DAT_14cb7d668) * fVar34 + DAT_14cb7d668;
                  *(float *)(lVar27 + 0xa4 + lVar26) = fVar33;
                  pdVar20 = (double *)(lVar27 + 0x80 + lVar26);
                  *pdVar20 = (double)pcVar10;
                  pdVar20[1] = (double)plVar4;
                  pdVar20 = (double *)(lVar27 + 0x90 + lVar26);
                  *pdVar20 = dVar8;
                  pdVar20[1] = dVar9;
                  fVar29 = *(float *)(lVar27 + 0x50 + lVar26);
                  lVar16 = *(longlong *)(lVar27 + 0x40 + lVar26);
                  if (lVar16 == 0) {
                    uVar15 = FUN_1407f787c();
                    lVar16 = FUN_14477b664(uVar15);
                    *(longlong *)(lVar27 + 0x40 + lVar26) = lVar16;
                  }
                  lVar24 = *(longlong *)(lVar27 + 0x48 + lVar26);
                  if (lVar24 == 0) {
                    if (lVar16 == 0) {
                      lVar24 = 0;
                    }
                    else {
                      lVar24 = 0;
                      if (*(longlong *)(lVar27 + 0x38 + lVar26) != 0) {
                        plVar18 = *(longlong **)(lVar16 + 0xb8);
                        local_1f0 = param_1;
                        if ((plVar18 == (longlong *)0x0) ||
                           (cVar12 = (**(code **)(*plVar18 + 0x108))(plVar18), cVar12 == '\0')) {
                          lVar24 = 0;
                        }
                        else {
                          uVar15 = (**(code **)(*plVar18 + 0x110))(plVar18);
                          lVar24 = FUN_144aff482(uVar15,lVar2);
                        }
                        *(longlong *)(lVar27 + 0x48 + lVar26) = lVar24;
                        param_1 = local_1f0;
                      }
                    }
                  }
                  local_248 = (longlong **)((ulonglong)local_248 & 0xffffffffffffff00);
                  FUN_1447997cc(plVar17,lVar24,fVar33,(int)fVar29);
                  uVar25 = local_1f4;
                  goto LAB_14058fe76;
                }
              }
              pdVar20 = (double *)(lVar27 + 0x80 + lVar26);
              *pdVar20 = (double)local_178;
              pdVar20[1] = (double)plStack_170;
              pdVar20 = (double *)(lVar27 + 0x90 + lVar26);
              *pdVar20 = dVar8;
              pdVar20[1] = dVar9;
            }
LAB_14058fe76:
            *(int *)(plVar17 + 0x21) = (int)plVar17[0x21] + -1;
            if (((int)plVar17[0x26] < 1) &&
               (FUN_1400847bc(plVar17 + 0x17,0), (int)plVar17[0x21] == 0)) {
              FUN_140087e46(plVar17);
              if (*plVar17 != -1) {
                if (DAT_14cb259f8 == 0) goto LAB_14058fe9c;
                FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40));
              }
              if (DAT_14cb259f8 != 0) {
                FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30));
              }
            }
          }
        }
      }
LAB_14058fe9c:
      lVar26 = lVar26 + 0xc0;
    } while ((longlong)(int)lVar23 * 0xc0 != lVar26);
  }
  if ((char)param_1[0x7b] != '\0') {
    if (*(float *)(param_1 + 0x83) < ABS(*(float *)(param_1 + 0x93))) {
      cVar12 = FUN_1407f6f4c(param_1);
      if (cVar12 == '\0') {
        FUN_1403c747e(param_1,&local_198,param_1[0x7c]);
        if (local_198 != (longlong *)0x0) {
          lVar23 = FUN_1407f80bc(param_1);
          if (lVar23 != 0) {
            if (DAT_14cb253f8 == 0) {
              local_210 = &local_178;
              local_178 = FUN_1449e2820;
              local_200 = FUN_14081d0ea;
              local_208 = FUN_14081d0ea;
              local_218 = &LAB_147f6f09d;
              local_220 = &LAB_146201c25;
              local_228 = (undefined8 **)&DAT_149e063b2;
              local_230 = (undefined1 *)0x0;
              local_238 = (code **)CONCAT44(local_238._4_4_,0x10000006);
              local_240 = 8;
              local_248 = (longlong **)CONCAT44(local_248._4_4_,0x480);
              FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioSettings",&DAT_14cb253f8,&DAT_147f6f09c);
            }
            lVar26 = DAT_14cb253f8;
            lVar27 = *(longlong *)(DAT_14cb253f8 + 0x110);
            if (lVar27 == 0) {
              FUN_140aa6c08(DAT_14cb253f8);
              lVar27 = *(longlong *)(lVar26 + 0x110);
              if (lVar27 == 0) goto LAB_14059039a;
            }
            uVar15 = FUN_140849db6(lVar27,*(undefined1 *)(lVar23 + 0x60));
            FUN_140849a08(local_198,uVar15);
          }
LAB_14059039a:
          plVar17 = local_198;
          if (((local_198 != (longlong *)0x0) &&
              (*(int *)(local_198 + 0x21) = (int)local_198[0x21] + -1, (int)local_198[0x26] < 1)) &&
             (FUN_1400847bc(local_198 + 0x17,0), (int)plVar17[0x21] == 0)) {
            FUN_140087e46(plVar17);
            if (*plVar17 != -1) {
              if (DAT_14cb259f8 == 0) goto LAB_1405903d1;
              FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar17);
            }
            if (DAT_14cb259f8 != 0) {
              FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar17);
            }
          }
        }
      }
      else {
        FUN_1403c747e(param_1,&local_180,param_1[0x7c]);
        if ((((((longlong *)param_1[4] != (longlong *)0x0) &&
              (*(int *)((longlong)param_1 + 0x1c) != 0)) &&
             (uVar25 = *(uint *)(param_1 + 3), -1 < (int)uVar25)) &&
            (((int)uVar25 < DAT_14c9647dc &&
             (lVar23 = (ulonglong)((uVar25 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8), lVar23 != 0))
            )) && ((*(int *)(lVar23 + 0x10) == *(int *)((longlong)param_1 + 0x1c) &&
                   (((*(uint *)(lVar23 + 8) & 0x10200000) == 0 &&
                    (lVar23 = (**(code **)(*(longlong *)param_1[4] + 0x30))(), lVar23 != 0)))))) {
          if (DAT_14cb5b388 == 0) {
            local_210 = &local_178;
            local_178 = FUN_141864c34;
            local_200 = FUN_14081d0ea;
            local_208 = (code *)&LAB_146431698;
            local_218 = &LAB_1486775cb;
            local_220 = &LAB_1464cee35;
            local_228 = (undefined8 **)&DAT_149e063b2;
            local_230 = (undefined1 *)0x0;
            local_238 = (code **)CONCAT44(local_238._4_4_,0x10000005);
            local_240 = 0x10;
            local_248 = (longlong **)CONCAT44(local_248._4_4_,0x3a20);
            FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
          }
          if ((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(*(longlong *)(lVar23 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar23 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30)) {
            if (local_180 == (longlong *)0x0) goto LAB_1405903d1;
            lVar27 = FUN_1447210f0(lVar23);
            if ((lVar27 != 0) &&
               (((((*(longlong *)(lVar27 + 0x30) == 0 ||
                   (lVar26 = *(longlong *)(*(longlong *)(lVar27 + 0x30) + 0x2b0), lVar26 == 0)) ||
                  (*(longlong *)(lVar26 + 0x588) == 0)) ||
                 (*(double *)(lVar27 + 0x6d0) < *(double *)(lVar27 + 0x708))) &&
                (((*(byte *)(lVar27 + 0x154) & 0x40) == 0 ||
                 (iVar21 = FUN_14490d72a(lVar27), iVar21 != 3)))))) {
              if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
                lVar26 = 0;
                do {
                  lVar16 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar26);
                  if (*(longlong *)(lVar16 + 0x360) == lVar27) {
                    if ((lVar16 != 0) && ((*(byte *)(lVar16 + 0x278) & 1) != 0)) goto LAB_140590ab9;
                    break;
                  }
                  lVar26 = lVar26 + 8;
                } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar26);
              }
              cVar12 = FUN_144a80e00();
              if ((cVar12 == '\0') || (-1 < *(char *)(lVar27 + 0x155))) {
                uStack_154 = 0;
                uStack_150 = 0x101;
                local_128 = 0;
                local_120 = 0x800000000;
                local_108 = 0;
                local_fc = 4;
                local_168 = 0;
                uStack_15c = 0;
                local_178 = (code *)0x0;
                plStack_170 = (longlong *)0x0;
                uStack_167 = 1;
                local_158 = local_158 & 0xffffff00;
                uStack_164 = 0x1000000;
                uStack_160 = CONCAT31(uStack_160._1_3_,1);
                local_118 = *(undefined4 *)(lVar23 + 0xc);
                local_100 = 1;
                uStack_165 = 1;
                if ((int)local_180[0x3a] == 0) {
                  pdVar20 = (double *)&DAT_14c8464e0;
                  local_1a0 = DAT_14c8464f0;
                }
                else {
                  plVar17 = local_180 + 0x28;
                  if ((longlong *)local_180[0x38] != (longlong *)0x0) {
                    plVar17 = (longlong *)local_180[0x38];
                  }
                  pdVar20 = (double *)(plVar17 + 4);
                  local_1a0 = (double)plVar17[6];
                }
                local_1a8 = pdVar20[1] + 0.0;
                local_1b0 = (longlong *)(*pdVar20 + 0.0);
                local_188 = local_1a0 + 10.0;
                local_1a0 = local_1a0 + -100.0;
                local_1d0 = FUN_1457b67dc;
                local_1c8 = 0;
                local_198 = local_1b0;
                dStack_190 = local_1a8;
                FUN_1418858e8(&local_1c0,param_1);
                local_220 = (undefined1 *)((ulonglong)local_220 & 0xffffffff00000000);
                local_230 = &DAT_14cad0f10;
                local_238 = &local_178;
                local_240 = 3;
                local_248 = &local_1b0;
                local_228 = &local_1c0;
                FUN_1447de878(lVar27,&local_1d0,1,&local_198);
                if (local_1b8 == 0) {
LAB_1405918ec:
                  if (local_1c0 != (undefined8 *)0x0) {
                    FUN_1400020a8();
                  }
                }
                else if (local_1c0 != (undefined8 *)0x0) {
                  (**(code **)*local_1c0)(local_1c0,0);
                  FUN_1446efa72(&local_1c0,0,0,0x10);
                  local_1b8 = 0;
                  goto LAB_1405918ec;
                }
                if (local_108 != 0) {
                  FUN_1400020a8();
                }
                if (local_128 != 0) {
                  FUN_1400020a8();
                }
              }
            }
          }
        }
LAB_140590ab9:
        if (((local_180 != (longlong *)0x0) &&
            (*(int *)(local_180 + 0x21) = (int)local_180[0x21] + -1, (int)local_180[0x26] < 1)) &&
           (FUN_1400847bc(local_180 + 0x17,0), (int)local_180[0x21] == 0)) {
          FUN_140087e46(local_180);
          if (*local_180 != -1) {
            if (DAT_14cb259f8 == 0) goto LAB_1405903d1;
            FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),local_180);
          }
          if (DAT_14cb259f8 != 0) {
            FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),local_180);
          }
        }
      }
LAB_1405903d1:
      FUN_1403c747e(param_1,&local_198,param_1[0x7c]);
      if (local_198 != (longlong *)0x0) {
        lVar23 = FUN_1449e3f1e();
        plVar17 = local_198;
        if (lVar23 != 0) {
          fVar29 = *(float *)(param_1 + 0xc5);
          if (0.0 < fVar29) {
            lVar27 = *(longlong *)(lVar23 + 0x308);
            if (lVar27 == 0) {
              uVar15 = FUN_1407f787c();
              lVar27 = FUN_14477b664(uVar15);
              *(longlong *)(lVar23 + 0x308) = lVar27;
            }
            lVar26 = *(longlong *)(lVar23 + 0x310);
            if (((lVar26 == 0) && (lVar26 = 0, lVar27 != 0)) && (*(longlong *)(lVar23 + 0x300) != 0)
               ) {
              plVar18 = *(longlong **)(lVar27 + 0xb8);
              if ((plVar18 == (longlong *)0x0) ||
                 (cVar12 = (**(code **)(*plVar18 + 0x108))(plVar18), cVar12 == '\0')) {
                lVar26 = 0;
              }
              else {
                uVar15 = (**(code **)(*plVar18 + 0x110))(plVar18);
                lVar26 = FUN_144aff482(uVar15,(longlong *)(lVar23 + 0x300));
              }
              *(longlong *)(lVar23 + 0x310) = lVar26;
            }
            local_248 = (longlong **)((ulonglong)local_248 & 0xffffffffffffff00);
            FUN_1447997cc(plVar17,lVar26,fVar29,0);
          }
          plVar17 = local_198;
          if ((param_1[200] != 0) && ((longlong)*(int *)(lVar23 + 0x438) != 0)) {
            plVar18 = *(longlong **)(lVar23 + 0x430);
            lVar23 = (longlong)*(int *)(lVar23 + 0x438) * 0x28;
            do {
              if (param_1[200] == *plVar18) {
                if (plVar18 != (longlong *)0x0) {
                  lVar23 = plVar18[2];
                  if (lVar23 == 0) {
                    uVar15 = FUN_1405b1a32();
                    lVar23 = FUN_14477b664(uVar15);
                    plVar18[2] = lVar23;
                  }
                  if (((plVar18[3] == 0) && (lVar23 != 0)) && (plVar18[1] != 0)) {
                    plVar4 = *(longlong **)(lVar23 + 0xb8);
                    if ((plVar4 == (longlong *)0x0) ||
                       (cVar12 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar12 == '\0')) {
                      lVar23 = 0;
                    }
                    else {
                      uVar15 = (**(code **)(*plVar4 + 0x110))(plVar4);
                      lVar23 = FUN_144aff482(uVar15,plVar18 + 1);
                    }
                    plVar18[3] = lVar23;
                  }
                  FUN_140849a08(plVar17);
                }
                break;
              }
              plVar18 = plVar18 + 5;
              lVar23 = lVar23 + -0x28;
            } while (lVar23 != 0);
          }
        }
        if ((((int)param_1[0x84] == 0 && *(int *)((longlong)param_1 + 0x41c) == 0) &&
            *(int *)((longlong)param_1 + 0x424) == 0) && (int)param_1[0x85] == 0) {
          lVar23 = param_1[0x7e];
          if (lVar23 == 0) {
            uVar15 = FUN_140067708();
            lVar23 = FUN_14477b664(uVar15);
            param_1[0x7e] = lVar23;
          }
          if (((param_1[0x7f] == 0) && (lVar23 != 0)) && (param_1[0x7d] != 0)) {
            plVar17 = *(longlong **)(lVar23 + 0xb8);
            if ((plVar17 == (longlong *)0x0) ||
               (cVar12 = (**(code **)(*plVar17 + 0x108))(plVar17), cVar12 == '\0')) {
              lVar23 = 0;
            }
            else {
              uVar15 = (**(code **)(*plVar17 + 0x110))(plVar17);
              lVar23 = FUN_144aff482(uVar15,param_1 + 0x7d);
            }
            param_1[0x7f] = lVar23;
          }
          local_1b0 = local_198;
          if (local_198 != (longlong *)0x0) {
            *(int *)(local_198 + 0x21) = (int)local_198[0x21] + 1;
          }
          FUN_140a3cb0a(param_1,&local_178,&local_1b0);
          *(code **)((longlong)param_1 + 0x41c) = local_178;
          *(longlong **)((longlong)param_1 + 0x424) = plStack_170;
        }
        plVar17 = local_198;
        if (((local_198 != (longlong *)0x0) &&
            (*(int *)(local_198 + 0x21) = (int)local_198[0x21] + -1, (int)local_198[0x26] < 1)) &&
           (FUN_1400847bc(local_198 + 0x17,0), (int)plVar17[0x21] == 0)) {
          FUN_140087e46(plVar17);
          if (*plVar17 != -1) {
            if (DAT_14cb259f8 == 0) goto LAB_14058ff50;
            FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar17);
          }
          if (DAT_14cb259f8 != 0) {
            FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar17);
          }
        }
      }
    }
    else if ((((int)param_1[0x84] != 0 || *(int *)((longlong)param_1 + 0x41c) != 0) ||
             *(int *)((longlong)param_1 + 0x424) != 0) || (int)param_1[0x85] != 0) {
      lVar23 = param_1[0x81];
      if (lVar23 == 0) {
        uVar15 = FUN_140067708();
        lVar23 = FUN_14477b664(uVar15);
        param_1[0x81] = lVar23;
      }
      lVar27 = param_1[0x82];
      if (((lVar27 == 0) && (lVar27 = 0, lVar23 != 0)) && (param_1[0x80] != 0)) {
        plVar17 = *(longlong **)(lVar23 + 0xb8);
        if ((plVar17 == (longlong *)0x0) ||
           (cVar12 = (**(code **)(*plVar17 + 0x108))(plVar17), cVar12 == '\0')) {
          lVar27 = 0;
        }
        else {
          uVar15 = (**(code **)(*plVar17 + 0x110))(plVar17);
          lVar27 = FUN_144aff482(uVar15,param_1 + 0x80);
        }
        param_1[0x82] = lVar27;
      }
      local_178 = *(code **)((longlong)param_1 + 0x41c);
      plStack_170 = *(longlong **)((longlong)param_1 + 0x424);
      FUN_140bd77dc(param_1,&local_178,lVar27,0);
      *(double *)((longlong)param_1 + 0x41c) = 0.0;
      *(undefined8 *)((longlong)param_1 + 0x424) = 0;
    }
  }
LAB_14058ff50:
  lVar23 = FUN_1449e3f1e();
  if (lVar23 != 0) {
    if (((longlong *)param_1[4] == (longlong *)0x0) || (*(int *)((longlong)param_1 + 0x1c) == 0))
    goto LAB_14058f8d9;
    uVar25 = *(uint *)(param_1 + 3);
    if ((-1 < (int)uVar25) &&
       (((((int)uVar25 < DAT_14c9647dc &&
          (lVar27 = (ulonglong)((uVar25 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8), lVar27 != 0)) &&
         (*(int *)(lVar27 + 0x10) == *(int *)((longlong)param_1 + 0x1c))) &&
        (((*(uint *)(lVar27 + 8) & 0x10200000) == 0 &&
         (lVar27 = (**(code **)(*(longlong *)param_1[4] + 0x30))(), lVar27 != 0)))))) {
      if (DAT_14cb5b388 == 0) {
        local_210 = &local_178;
        local_178 = FUN_141864c34;
        local_200 = FUN_14081d0ea;
        local_208 = (code *)&LAB_146431698;
        local_218 = &LAB_1486775cb;
        local_220 = &LAB_1464cee35;
        local_228 = (undefined8 **)&DAT_149e063b2;
        local_230 = (undefined1 *)0x0;
        local_238 = (code **)CONCAT44(local_238._4_4_,0x10000005);
        local_240 = 0x10;
        local_248 = (longlong **)CONCAT44(local_248._4_4_,0x3a20);
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
      }
      if (((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(*(longlong *)(lVar27 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar27 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30)) &&
         (lVar27 = *(longlong *)(lVar27 + 0x11e8), lVar27 != 0)) {
        lVar26 = *(longlong *)(lVar23 + 0x408);
        if (lVar26 == 0) {
          uVar15 = FUN_1407f787c();
          lVar26 = FUN_14477b664(uVar15);
          *(longlong *)(lVar23 + 0x408) = lVar26;
        }
        if (*(longlong *)(lVar23 + 0x410) == 0) {
          if ((lVar26 != 0) && (*(longlong *)(lVar23 + 0x400) != 0)) {
            plVar17 = *(longlong **)(lVar26 + 0xb8);
            if ((plVar17 == (longlong *)0x0) ||
               (cVar12 = (**(code **)(*plVar17 + 0x108))(plVar17), cVar12 == '\0')) {
              *(undefined8 *)(lVar23 + 0x410) = 0;
            }
            else {
              uVar15 = (**(code **)(*plVar17 + 0x110))(plVar17);
              lVar26 = FUN_144aff482(uVar15,(longlong *)(lVar23 + 0x400));
              *(longlong *)(lVar23 + 0x410) = lVar26;
              if (lVar26 != 0) goto LAB_140590595;
            }
          }
        }
        else {
LAB_140590595:
          FUN_144a381b0(lVar27);
          local_1e8 = *(undefined8 *)(lVar23 + 0x400);
          uVar15 = FUN_14477b664(*(undefined8 *)(lVar23 + 0x408));
          local_1e0 = FUN_14477b664(uVar15);
          local_1d8 = *(undefined8 *)(lVar23 + 0x410);
          FUN_1449e410c(param_1,&local_1e8);
        }
      }
    }
  }
  if (((longlong *)param_1[4] == (longlong *)0x0) || (*(int *)((longlong)param_1 + 0x1c) == 0))
  goto LAB_14058f8d9;
  uVar25 = *(uint *)(param_1 + 3);
  if (((-1 < (int)uVar25) &&
      ((((int)uVar25 < DAT_14c9647dc &&
        (lVar23 = (ulonglong)((uVar25 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8), lVar23 != 0)) &&
       (*(int *)(lVar23 + 0x10) == *(int *)((longlong)param_1 + 0x1c))))) &&
     (((*(uint *)(lVar23 + 8) & 0x10200000) == 0 &&
      (lVar23 = (**(code **)(*(longlong *)param_1[4] + 0x30))(), lVar23 != 0)))) {
    if (DAT_14cb5b388 == 0) {
      local_210 = &local_178;
      local_178 = FUN_141864c34;
      local_200 = FUN_14081d0ea;
      local_208 = (code *)&LAB_146431698;
      local_218 = &LAB_1486775cb;
      local_220 = &LAB_1464cee35;
      local_228 = (undefined8 **)&DAT_149e063b2;
      local_230 = (undefined1 *)0x0;
      local_238 = (code **)CONCAT44(local_238._4_4_,0x10000005);
      local_240 = 0x10;
      local_248 = (longlong **)CONCAT44(local_248._4_4_,0x3a20);
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
    }
    if (((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(*(longlong *)(lVar23 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar23 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30)) &&
       (*(longlong *)(lVar23 + 0x11e8) != 0)) {
      cVar12 = (&DAT_00001100)[*(longlong *)(lVar23 + 0x11e8)];
      if (cVar12 != *(char *)((longlong)param_1 + 0x654)) {
        *(char *)((longlong)param_1 + 0x654) = cVar12;
        *(bool *)((longlong)param_1 + 0x301) = (cVar12 - 3U & 0xfd) == 0;
        *(bool *)((longlong)param_1 + 0x302) = cVar12 == '\v' || cVar12 == '\x04';
      }
      fVar29 = (float)FUN_144a381b0();
      *(bool *)((longlong)param_1 + 0x303) = 0.0 < fVar29;
    }
  }
  if (((longlong *)param_1[4] == (longlong *)0x0) || (*(int *)((longlong)param_1 + 0x1c) == 0))
  goto LAB_14058f8d9;
  uVar25 = *(uint *)(param_1 + 3);
  if (((-1 < (int)uVar25) &&
      ((((int)uVar25 < DAT_14c9647dc &&
        (lVar23 = (ulonglong)((uVar25 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8), lVar23 != 0)) &&
       (*(int *)(lVar23 + 0x10) == *(int *)((longlong)param_1 + 0x1c))))) &&
     (((*(uint *)(lVar23 + 8) & 0x10200000) == 0 &&
      (lVar23 = (**(code **)(*(longlong *)param_1[4] + 0x30))(), lVar23 != 0)))) {
    if (DAT_14cb5b388 == 0) {
      local_210 = &local_178;
      local_178 = FUN_141864c34;
      local_200 = FUN_14081d0ea;
      local_208 = (code *)&LAB_146431698;
      local_218 = &LAB_1486775cb;
      local_220 = &LAB_1464cee35;
      local_228 = (undefined8 **)&DAT_149e063b2;
      local_230 = (undefined1 *)0x0;
      local_238 = (code **)CONCAT44(local_238._4_4_,0x10000005);
      local_240 = 0x10;
      local_248 = (longlong **)CONCAT44(local_248._4_4_,0x3a20);
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
    }
    if (((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(*(longlong *)(lVar23 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar23 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30)) &&
       ((lVar27 = FUN_1447210f0(lVar23), lVar27 != 0 &&
        (((((*(longlong *)(lVar27 + 0x30) == 0 ||
            (lVar26 = *(longlong *)(*(longlong *)(lVar27 + 0x30) + 0x2b0), lVar26 == 0)) ||
           (*(longlong *)(lVar26 + 0x588) == 0)) ||
          (*(double *)(lVar27 + 0x6d0) < *(double *)(lVar27 + 0x708))) &&
         (((*(byte *)(lVar27 + 0x154) & 0x40) == 0 || (iVar21 = FUN_14490d72a(lVar27), iVar21 != 3))
         )))))) {
      if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
        lVar26 = 0;
        do {
          lVar16 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar26);
          if (*(longlong *)(lVar16 + 0x360) == lVar27) {
            if ((lVar16 != 0) && ((*(byte *)(lVar16 + 0x278) & 1) != 0)) goto LAB_1405900c5;
            break;
          }
          lVar26 = lVar26 + 8;
        } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar26);
      }
      cVar12 = FUN_144a80e00(lVar27);
      if ((cVar12 == '\0') || (-1 < *(char *)(lVar27 + 0x155))) {
        fVar29 = *(float *)(param_1 + 0xca) + param_2;
        *(float *)(param_1 + 0xca) = fVar29;
        if (*(float *)((longlong)param_1 + 0x64c) <= fVar29 &&
            fVar29 != *(float *)((longlong)param_1 + 0x64c)) {
          *(undefined4 *)(param_1 + 0xca) = 0;
          lVar26 = FUN_1449e3f1e();
          cVar12 = FUN_1407f6f4c(param_1);
          if (lVar26 != 0 && cVar12 == '\x01') {
            FUN_1404d1e78(&local_178,lVar27);
            if (plStack_170 != (longlong *)0x0) {
              iVar21 = (int)plStack_170[1];
              do {
                if (iVar21 == 0) {
                  plVar17 = (longlong *)0x0;
                  break;
                }
                LOCK();
                iVar11 = (int)plStack_170[1];
                bVar28 = iVar21 == iVar11;
                if (bVar28) {
                  *(int *)(plStack_170 + 1) = iVar21 + 1;
                  iVar11 = iVar21;
                }
                iVar21 = iVar11;
                UNLOCK();
                plVar17 = plStack_170;
              } while (!bVar28);
              LOCK();
              piVar1 = (int *)((longlong)plStack_170 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plStack_170 + 0x10))();
              }
              if (plVar17 != (longlong *)0x0) {
                if ((local_178 != (code *)0x0) && ((longlong)*(int *)(lVar26 + 0x438) != 0)) {
                  plVar18 = *(longlong **)(lVar26 + 0x430);
                  lVar26 = (longlong)*(int *)(lVar26 + 0x438) * 0x28;
                  do {
                    if (*(longlong *)(local_178 + 0x1b4) == *plVar18) {
                      if (plVar18 != (longlong *)0x0) {
                        uStack_154 = 0;
                        uStack_150 = 0x101;
                        local_128 = 0;
                        local_120 = 0x800000000;
                        local_108 = 0;
                        local_fc = 4;
                        local_168 = 0;
                        uStack_15c = 0;
                        local_178 = (code *)0x0;
                        plStack_170 = (longlong *)0x0;
                        uStack_167 = 1;
                        uStack_165 = 0;
                        local_158 = local_158 & 0xffffff00;
                        uStack_164 = 0x1000000;
                        uStack_160 = CONCAT31(uStack_160._1_3_,1);
                        local_118 = *(undefined4 *)(lVar23 + 0xc);
                        local_100 = 1;
                        lVar23 = *(longlong *)(lVar23 + 0x1c8);
                        if (lVar23 == 0) {
                          puVar19 = &DAT_14c8464e0;
                          local_188 = DAT_14c8464f0;
                        }
                        else {
                          puVar19 = (undefined8 *)(lVar23 + 0x260);
                          local_188 = *(double *)(lVar23 + 0x270);
                        }
                        local_198 = (longlong *)*puVar19;
                        dStack_190 = (double)puVar19[1];
                        local_1a8 = (double)puVar19[1] + 0.0;
                        local_1a0 = (double)*(float *)(param_1 + 0xc9) + local_188;
                        local_1b0 = (longlong *)((double)local_198 + 0.0);
                        local_1d0 = FUN_140e33ad0;
                        local_1c8 = 0;
                        FUN_1418858e8(&local_1c0,param_1);
                        local_220 = (undefined1 *)((ulonglong)local_220 & 0xffffffff00000000);
                        local_230 = &DAT_14cad0f10;
                        local_240 = 3;
                        local_248 = &local_1b0;
                        local_238 = &local_178;
                        local_228 = &local_1c0;
                        FUN_1447de878(lVar27,&local_1d0,1,&local_198);
                        if (local_1b8 == 0) {
LAB_1405916dc:
                          if (local_1c0 != (undefined8 *)0x0) {
                            FUN_1400020a8();
                          }
                        }
                        else if (local_1c0 != (undefined8 *)0x0) {
                          (**(code **)*local_1c0)(local_1c0,0);
                          FUN_1446efa72(&local_1c0,0,0,0x10);
                          local_1b8 = 0;
                          goto LAB_1405916dc;
                        }
                        if (local_108 != 0) {
                          FUN_1400020a8();
                        }
                        if (local_128 != 0) {
                          FUN_1400020a8();
                        }
                        LOCK();
                        plVar18 = plVar17 + 1;
                        *(int *)plVar18 = (int)*plVar18 + -1;
                        UNLOCK();
                        if ((int)*plVar18 == 0) {
                          (**(code **)*plVar17)(plVar17);
                          LOCK();
                          piVar1 = (int *)((longlong)plVar17 + 0xc);
                          *piVar1 = *piVar1 + -1;
                          UNLOCK();
                          if (*piVar1 == 0) {
                            (**(code **)(*plVar17 + 0x10))(plVar17);
                          }
                        }
                        goto LAB_1405900c5;
                      }
                      break;
                    }
                    plVar18 = plVar18 + 5;
                    lVar26 = lVar26 + -0x28;
                  } while (lVar26 != 0);
                }
                LOCK();
                plVar18 = plVar17 + 1;
                *(int *)plVar18 = (int)*plVar18 + -1;
                UNLOCK();
                if ((int)*plVar18 == 0) {
                  (**(code **)*plVar17)(plVar17);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar17 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar17 + 0x10))(plVar17);
                  }
                }
              }
            }
          }
          *(undefined4 *)((longlong)param_1 + 0x63c) = 0;
        }
      }
    }
  }
LAB_1405900c5:
  if (((((longlong *)param_1[4] == (longlong *)0x0) || (*(int *)((longlong)param_1 + 0x1c) == 0)) ||
      (uVar25 = *(uint *)(param_1 + 3), (int)uVar25 < 0)) ||
     (((DAT_14c9647dc <= (int)uVar25 ||
       (lVar23 = (ulonglong)((uVar25 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8), lVar23 == 0)) ||
      ((*(int *)(lVar23 + 0x10) != *(int *)((longlong)param_1 + 0x1c) ||
       (((*(uint *)(lVar23 + 8) & 0x10200000) != 0 ||
        (lVar23 = (**(code **)(*(longlong *)param_1[4] + 0x30))(), lVar23 == 0))))))))
  goto LAB_14058f8d9;
  if (DAT_14cb5b388 == 0) {
    local_210 = &local_178;
    local_178 = FUN_141864c34;
    local_200 = FUN_14081d0ea;
    local_208 = (code *)&LAB_146431698;
    local_218 = &LAB_1486775cb;
    local_220 = &LAB_1464cee35;
    local_228 = (undefined8 **)&DAT_149e063b2;
    local_230 = (undefined1 *)0x0;
    local_238 = (code **)CONCAT44(local_238._4_4_,0x10000005);
    local_240 = 0x10;
    local_248 = (longlong **)CONCAT44(local_248._4_4_,0x3a20);
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
  }
  if (((((*(int *)(*(longlong *)(lVar23 + 0x10) + 0x38) < *(int *)(DAT_14cb5b388 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar23 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) != DAT_14cb5b388 + 0x30)) ||
       (lVar23 = FUN_1447210f0(lVar23), lVar23 == 0)) ||
      (((*(longlong *)(lVar23 + 0x30) != 0 &&
        (lVar27 = *(longlong *)(*(longlong *)(lVar23 + 0x30) + 0x2b0), lVar27 != 0)) &&
       ((*(longlong *)(lVar27 + 0x588) != 0 &&
        (*(double *)(lVar23 + 0x708) <= *(double *)(lVar23 + 0x6d0))))))) ||
     (((*(byte *)(lVar23 + 0x154) & 0x40) != 0 && (iVar21 = FUN_14490d72a(lVar23), iVar21 == 3))))
  goto LAB_14058f8d9;
  if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
    lVar27 = 0;
    do {
      lVar26 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar27);
      if (*(longlong *)(lVar26 + 0x360) == lVar23) {
        if ((lVar26 != 0) && ((*(byte *)(lVar26 + 0x278) & 1) != 0)) goto LAB_14058f8d9;
        break;
      }
      lVar27 = lVar27 + 8;
    } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar27);
  }
  cVar12 = FUN_144a80e00(lVar23);
  if ((cVar12 != '\0') && (*(char *)(lVar23 + 0x155) < '\0')) goto LAB_14058f8d9;
  *(undefined4 *)(param_1 + 199) = 0;
  if (((((longlong *)param_1[4] != (longlong *)0x0) &&
       ((((*(int *)((longlong)param_1 + 0x1c) != 0 &&
          (uVar25 = *(uint *)(param_1 + 3), -1 < (int)uVar25)) && ((int)uVar25 < DAT_14c9647dc)) &&
        ((lVar23 = (ulonglong)((uVar25 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8), lVar23 != 0 &&
         (*(int *)(lVar23 + 0x10) == *(int *)((longlong)param_1 + 0x1c))))))) &&
      ((*(uint *)(lVar23 + 8) & 0x10200000) == 0)) &&
     (lVar23 = (**(code **)(*(longlong *)param_1[4] + 0x30))(), lVar23 != 0)) {
    if (DAT_14cb5b388 == 0) {
      local_210 = &local_178;
      local_178 = FUN_141864c34;
      local_200 = FUN_14081d0ea;
      local_208 = (code *)&LAB_146431698;
      local_218 = &LAB_1486775cb;
      local_220 = &LAB_1464cee35;
      local_228 = (undefined8 **)&DAT_149e063b2;
      local_230 = (undefined1 *)0x0;
      local_238 = (code **)CONCAT44(local_238._4_4_,0x10000005);
      local_240 = 0x10;
      local_248 = (longlong **)CONCAT44(local_248._4_4_,0x3a20);
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
    }
    if (((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(*(longlong *)(lVar23 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar23 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30)) &&
       (lVar23 = *(longlong *)(lVar23 + 0x11e8), lVar23 != 0)) {
      if ((*(longlong *)(&DAT_00001ce8 + lVar23) == 0) ||
         (*(byte *)(*(longlong *)(&DAT_00001ce8 + lVar23) + 0x178) < 2)) {
        if (*(char *)(lVar23 + 0x1ee0) == '\0') goto LAB_1405915bd;
LAB_140591943:
        uVar13 = 0x3f800000;
      }
      else {
        plVar17 = *(longlong **)(lVar23 + 0x1eb8);
        if (plVar17 == (longlong *)0x0) {
LAB_1405915bd:
          if ((*(longlong **)(lVar23 + 0x1eb8) != (longlong *)0x0) &&
             (cVar12 = (**(code **)(**(longlong **)(lVar23 + 0x1eb8) + 0x38))(), cVar12 != '\0'))
          goto LAB_140591943;
          uVar13 = 0;
        }
        else {
          if (*(code **)(*plVar17 + 0x40) != (code *)&LAB_1449cc0ea) {
            cVar12 = (**(code **)(*plVar17 + 0x40))();
            if (cVar12 != '\0') goto LAB_140591943;
            goto LAB_1405915bd;
          }
          if ((*(char *)((longlong)plVar17 + 0xb2) != '\0') ||
             ((uVar13 = 0x3f800000, *(char *)((longlong)plVar17 + 0x79) == '\0' &&
              (((int)plVar17[4] < 1 || ((char)plVar17[0xf] == '\0')))))) goto LAB_1405915bd;
        }
      }
      *(undefined4 *)(param_1 + 199) = uVar13;
    }
  }
  fVar33 = (float)(**(code **)(*param_1 + 0x78))(param_1);
  fVar29 = (float)(**(code **)(*param_1 + 0x70))(param_1);
  if (fVar29 <= fVar33) {
    fVar29 = fVar33;
  }
  if ((fVar29 < *(float *)(param_1 + 0xc5)) || (fVar29 <= 0.0)) {
    if ((*(float *)((longlong)param_1 + 0x62c) <= 0.0) ||
       (*(float *)((longlong)param_1 + 0x634) <= 0.0)) {
      param_1[0xc5] = 0;
      *(undefined4 *)(param_1 + 0xc6) = 0;
      param_1[200] = 0;
    }
    else {
      param_2 = *(float *)((longlong)param_1 + 0x62c) - param_2;
      if (param_2 <= 0.0) {
        param_2 = 0.0;
      }
      *(float *)((longlong)param_1 + 0x62c) = param_2;
      *(float *)(param_1 + 0xc5) =
           (param_2 / *(float *)((longlong)param_1 + 0x634)) * *(float *)(param_1 + 0xc6);
    }
  }
  else {
    *(float *)(param_1 + 0xc5) = fVar29;
    *(undefined4 *)((longlong)param_1 + 0x62c) = *(undefined4 *)((longlong)param_1 + 0x634);
    *(float *)(param_1 + 0xc6) = fVar29;
  }
LAB_14058f8d9:
  if ((local_f0 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140591962 FUN_140591962 body=1528 status=ok
// SIG undefined FUN_140591962(void)

undefined8 FUN_140591962(longlong param_1,undefined8 param_2,undefined4 *param_3,longlong param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  char cVar14;
  longlong lVar15;
  uint unaff_R14D;
  bool bVar16;
  bool bVar17;
  undefined1 auStack_158 [40];
  longlong local_130;
  longlong local_128;
  undefined1 local_119;
  undefined8 *local_118;
  undefined1 *local_110;
  undefined1 local_104 [4];
  undefined8 local_100;
  undefined8 local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined4 local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(char *)(param_1 + 0x260) == '\0') {
    (**(code **)(*DAT_14c98e618 + 0x68))();
    *(ulonglong *)(param_1 + 600) =
         CONCAT44((int)ROUND(local_100._4_4_ + local_100._4_4_ + 0.5) >> 1,
                  (int)ROUND((float)local_100 + (float)local_100 + 0.5) >> 1);
    *(undefined1 *)(param_1 + 0x260) = 1;
    unaff_R14D = local_4c;
  }
  local_100 = (longlong *)CONCAT71(local_100._1_7_,1);
  local_e0 = (longlong *)((ulonglong)local_e0 & 0xffffffffffffff00);
  local_f8 = 0;
  plStack_f0 = (longlong *)0x0;
  memset(&local_d8,0,0x88);
  local_50 = 0x20702;
  local_4c = unaff_R14D & 0xffffff00 | 0x40;
  lVar15 = param_1 + 8;
  FUN_1402c17c2(lVar15,&local_100);
  FUN_14493db24(&local_100);
  local_119 = 1;
  local_100 = *(longlong **)(param_4 + 0x40);
  local_f8 = *(undefined8 *)(param_4 + 0x48);
  plStack_f0 = *(longlong **)(param_4 + 0x50);
  if (plStack_f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_f0 + 1) = (int)plStack_f0[1] + 1;
    UNLOCK();
  }
  lVar1 = param_1 + -200;
  local_110 = &local_119;
  local_118 = &local_100;
  FUN_140592340(param_1 + 0xc0,local_104);
  plVar2 = plStack_f0;
  if (plStack_f0 != (longlong *)0x0) {
    LOCK();
    plVar4 = plStack_f0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plStack_f0)(plStack_f0);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  FUN_14059218e(lVar1,param_4);
  if ((undefined4 *)(param_1 + 0x118) != param_3) {
    *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_3 + 0xc);
    uVar6 = *param_3;
    uVar7 = param_3[1];
    uVar8 = param_3[2];
    uVar9 = param_3[3];
    uVar10 = *(undefined8 *)(param_3 + 4);
    uVar11 = *(undefined8 *)(param_3 + 6);
    uVar12 = *(undefined8 *)(param_3 + 10);
    *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(param_1 + 0x140) = uVar12;
    *(undefined8 *)(param_1 + 0x128) = uVar10;
    *(undefined8 *)(param_1 + 0x130) = uVar11;
    *(undefined4 *)(param_1 + 0x118) = uVar6;
    *(undefined4 *)(param_1 + 0x11c) = uVar7;
    *(undefined4 *)(param_1 + 0x120) = uVar8;
    *(undefined4 *)(param_1 + 0x124) = uVar9;
  }
  local_130 = lVar1;
  FUN_1407a4be8(lVar1,param_3,param_4);
  if (*(longlong *)(param_1 + -0x90) != 0) {
    plVar2 = (longlong *)(param_1 + -0xc0);
    (**(code **)(*plVar2 + 0x28))(plVar2,&local_100);
    if (((float)local_100 != (float)(int)DAT_14c967818) ||
       (local_100._4_4_ != (float)DAT_14c967818._4_4_)) {
      cVar13 = (**(code **)(*plVar2 + 0xa0))(plVar2);
      if (cVar13 == '\0') {
        (**(code **)(*DAT_14c968088 + 0x58))(DAT_14c968088,&local_100);
        FUN_147d260b6(local_130,&local_100);
      }
      cVar13 = (**(code **)(**(longlong **)(param_1 + -0x90) + 0x188))();
      local_128 = lVar15;
      if (cVar13 == '\x03') {
        bVar17 = true;
      }
      else {
        cVar13 = (**(code **)(**(longlong **)(param_1 + -0x90) + 0x188))();
        if (cVar13 == '\x04') {
          lVar15 = *(longlong *)(param_4 + 0x40);
          plVar4 = *(longlong **)(param_4 + 0x50);
          if (plVar4 == (longlong *)0x0) {
            bVar17 = lVar15 == DAT_14c966fa0;
          }
          else {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
            bVar17 = lVar15 == DAT_14c966fa0;
            LOCK();
            plVar5 = plVar4 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
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
        else {
          bVar17 = false;
        }
      }
      lVar15 = *(longlong *)(DAT_14cb0d2b0 + 0xc20) + 0x28;
      if (*(longlong *)(DAT_14cb0d2b0 + 0xc20) == 0) {
        lVar15 = 0;
      }
      if ((lVar15 == *(longlong *)(param_1 + -0x90)) ||
         (bVar16 = true, (*(byte *)(param_1 + -0x10) & 8) != 0)) {
        cVar13 = (**(code **)(*plVar2 + 0x98))(plVar2);
        bVar16 = true;
        if (cVar13 == '\0') {
          cVar13 = (**(code **)(**(longlong **)(param_1 + -0x90) + 0x188))();
          bVar16 = cVar13 == '\x02';
        }
      }
      cVar13 = (**(code **)(*DAT_14c98e618 + 0xc0))();
      if ((bool)(bVar16 | bVar17)) {
        plVar4 = *(longlong **)(param_1 + -0x90);
        local_d0 = *(undefined1 *)(param_4 + 100);
        plStack_f0 = *(longlong **)(param_4 + 0x40);
        local_e8 = *(undefined8 *)(param_4 + 0x48);
        plVar5 = *(longlong **)(param_4 + 0x50);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        local_f8 = CONCAT44(*(undefined4 *)(param_4 + 0xc),*(undefined4 *)(param_4 + 0xc));
        local_100 = plVar2;
        local_e0 = plVar5;
        if (plVar5 == (longlong *)0x0) {
          local_d8 = 0x3f80000000000000;
        }
        else {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          local_d8 = 0x3f80000000000000;
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
        cVar14 = (**(code **)(*plVar4 + 0x48))(plVar4);
        plVar2 = local_e0;
        if (local_e0 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_e0 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*local_e0)(local_e0);
            LOCK();
            piVar3 = (int *)((longlong)plVar2 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
        }
        if (cVar14 == '\0') {
          local_100 = (longlong *)((ulonglong)local_100 & 0xffffffffffffff00);
          local_e0 = (longlong *)((ulonglong)local_e0 & 0xffffffffffffff00);
          local_f8 = 0;
          plStack_f0 = (longlong *)0x0;
          memset(&local_d8,0,0x88);
          local_50 = 0x20702;
          local_4c = local_4c & 0xffffff00;
          FUN_1403d4924(local_128,&local_100);
          FUN_14493db24(&local_100);
        }
      }
      lVar15 = local_128;
      if (cVar13 == '\0') {
        cVar13 = (**(code **)(*DAT_14c98e618 + 0xc0))();
      }
      else {
        cVar13 = '\0';
      }
      cVar14 = (**(code **)(**(longlong **)(param_1 + -0x90) + 0x188))();
      if (cVar14 == '\x01') {
        bVar16 = true;
      }
      else {
        cVar14 = (**(code **)(**(longlong **)(param_1 + -0x90) + 0x188))();
        bVar16 = cVar14 == '\x02';
      }
      cVar14 = (**(code **)(*DAT_14c98e618 + 8))();
      if (((cVar14 != '\0') &&
          (cVar14 = (**(code **)(**(longlong **)(param_1 + -0x90) + 0x180))(),
          (bool)(bVar17 | bVar16))) && (cVar13 == '\0' && cVar14 == '\0')) {
        FUN_140592538(local_130,&local_100,
                      CONCAT44((int)*(float *)(param_4 + 0x24),(int)*(float *)(param_4 + 0x20)),0);
        FUN_1403d4924(lVar15,&local_100);
        FUN_14493db24(&local_100);
      }
    }
  }
  *(byte *)(param_1 + 0xbc) = *(byte *)(param_1 + 0xbc) | 0x40;
  FUN_1403d4c6e(param_2,lVar15);
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140591f5c FUN_140591f5c body=122 status=ok
// SIG undefined FUN_140591f5c(void)

ulonglong FUN_140591f5c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  if (((*(longlong *)(param_1 + 0x240) == 0) ||
      (plVar3 = *(longlong **)(param_1 + 0x248), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1)
     ) {
    uVar7 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        uVar7 = FUN_140591fd6(0);
        return uVar7;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar8);
    uVar6 = FUN_140591fd6(*(undefined8 *)(param_1 + 0x240));
    uVar7 = (ulonglong)uVar6;
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
  return uVar7;
}



// FUNCTION 140591fd6 FUN_140591fd6 body=214 status=ok
// SIG undefined FUN_140591fd6(void)

undefined4 FUN_140591fd6(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  plVar2 = DAT_14c968098;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_140592060:
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
    uVar8 = (**(code **)(*plVar2 + 0x178))(plVar2);
  }
  else {
    iVar7 = (int)plVar4[1];
    do {
      if (iVar7 == 0) goto LAB_140592060;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar9 = iVar7 == iVar6;
      if (bVar9) {
        *(int *)(plVar4 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar9);
    uVar5 = *(undefined8 *)(param_1 + 8);
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
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_38 = uVar5;
    plStack_30 = plVar4;
    uVar8 = (**(code **)(*plVar2 + 0x178))(plVar2);
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 1405920ae FUN_1405920ae body=223 status=ok
// SIG undefined FUN_1405920ae(void)

bool FUN_1405920ae(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar7 = *(longlong **)(param_1 + 0x248);
  bVar3 = true;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar7[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) {
        plVar7 = (longlong *)0x0;
        goto LAB_1405920f2;
      }
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar8);
    lVar6 = *(longlong *)(param_1 + 0x240);
    bVar3 = false;
  }
LAB_1405920f2:
  (**(code **)(*DAT_14c98e618 + 0x168))(DAT_14c98e618,&local_40,0);
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
  if (!bVar3) {
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
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_40 == lVar6;
}



// FUNCTION 14059218e FUN_14059218e body=433 status=ok
// SIG undefined FUN_14059218e(void)

void FUN_14059218e(longlong param_1,longlong param_2)

{
  undefined1 auStack_68 [39];
  byte local_41;
  undefined8 *local_40;
  byte *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1 = param_1 + 0x188;
  local_41 = *(byte *)(param_2 + 8) >> 4 & 1;
  local_40 = &DAT_14c965478;
  local_38 = &local_41;
  FUN_1403d4e02(param_1,local_2c,&local_40);
  local_41 = *(byte *)(param_2 + 8) >> 5 & 1;
  local_40 = &DAT_14c965490;
  local_38 = &local_41;
  FUN_1403d4e02(param_1,local_2c,&local_40);
  local_41 = *(byte *)(param_2 + 8) >> 2 & 1;
  local_40 = &DAT_14c965448;
  local_38 = &local_41;
  FUN_1403d4e02(param_1,local_2c,&local_40);
  local_41 = *(byte *)(param_2 + 8) >> 3 & 1;
  local_40 = &DAT_14c965460;
  local_38 = &local_41;
  FUN_1403d4e02(param_1,local_2c,&local_40);
  local_41 = *(byte *)(param_2 + 8) & 1;
  local_40 = &DAT_14c965418;
  local_38 = &local_41;
  FUN_1403d4e02(param_1,local_2c,&local_40);
  local_41 = *(byte *)(param_2 + 8) >> 1 & 1;
  local_40 = &DAT_14c965430;
  local_38 = &local_41;
  FUN_1403d4e02(param_1,local_2c,&local_40);
  local_41 = *(byte *)(param_2 + 8) >> 6 & 1;
  local_40 = &DAT_14c9654a8;
  local_38 = &local_41;
  FUN_1403d4e02(param_1,local_2c,&local_40);
  local_41 = *(byte *)(param_2 + 8) >> 7;
  local_40 = &DAT_14c9654c0;
  local_38 = &local_41;
  FUN_1403d4e02(param_1,local_2c,&local_40);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140592340 FUN_140592340 body=503 status=ok
// SIG undefined FUN_140592340(void)

int * FUN_140592340(longlong *param_1,int *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong *plVar15;
  int iVar16;
  undefined1 auStack_78 [40];
  int local_50 [2];
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144980c52(param_1,local_50);
  plVar15 = (longlong *)*param_3;
  puVar3 = (undefined1 *)param_3[1];
  *local_48 = *plVar15;
  local_48[1] = plVar15[1];
  local_48[2] = plVar15[2];
  plVar15[1] = 0;
  plVar15[2] = 0;
  *(undefined1 *)(local_48 + 3) = *puVar3;
  *(undefined4 *)(local_48 + 4) = 0xffffffff;
  lVar4 = *local_48;
  uVar12 = (uint)((ulonglong)lVar4 >> 0x10);
  uVar14 = (uint)lVar4 & 0xffff;
  uVar12 = ((uint)lVar4 << 0x10 | uVar14) + (int)((ulonglong)lVar4 >> 0x20) +
           (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar14 >> 4);
  uVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar14 != 0) && (uVar14 != 1)) {
    plVar15 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar15 = (longlong *)param_1[8];
    }
    iVar16 = *(int *)((longlong)plVar15 + (ulonglong)((int)param_1[9] - 1U & uVar12) * 4);
    if (iVar16 != -1) {
      do {
        plVar15 = (longlong *)(*param_1 + (longlong)iVar16 * 0x28);
        if (*plVar15 == lVar4) {
          plVar5 = (longlong *)plVar15[2];
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
          lVar4 = *local_48;
          uVar6 = *(undefined4 *)((longlong)local_48 + 4);
          lVar10 = local_48[1];
          uVar7 = *(undefined4 *)((longlong)local_48 + 0xc);
          uVar8 = *(undefined4 *)((longlong)local_48 + 0x14);
          lVar11 = local_48[3];
          uVar9 = *(undefined4 *)((longlong)local_48 + 0x1c);
          *(int *)(plVar15 + 2) = (int)local_48[2];
          *(undefined4 *)((longlong)plVar15 + 0x14) = uVar8;
          *(int *)(plVar15 + 3) = (int)lVar11;
          *(undefined4 *)((longlong)plVar15 + 0x1c) = uVar9;
          *(int *)plVar15 = (int)lVar4;
          *(undefined4 *)((longlong)plVar15 + 4) = uVar6;
          *(int *)(plVar15 + 1) = (int)lVar10;
          *(undefined4 *)((longlong)plVar15 + 0xc) = uVar7;
          FUN_1403d4ffa(param_1,local_50[0],1);
          local_50[0] = iVar16;
          goto LAB_1405924a3;
        }
        iVar16 = (int)plVar15[4];
      } while (iVar16 != -1);
    }
  }
  if (uVar14 < 4) {
    iVar16 = 1;
  }
  else {
    uVar13 = (ulonglong)(uVar14 & 0xfffffffe) + 0xf;
    lVar4 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar16 = 1 << ((byte)lVar4 & 0x1f);
  }
  if (((int)uVar14 < 1) || (iVar16 <= (int)param_1[9])) {
    uVar12 = (int)param_1[9] - 1U & uVar12;
    *(uint *)((longlong)local_48 + 0x24) = uVar12;
    plVar15 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar15 = param_1 + 7;
    }
    *(undefined4 *)(local_48 + 4) =
         *(undefined4 *)
          ((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar15 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar15 = param_1 + 7;
    }
    *(int *)((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         local_50[0];
  }
  else {
    *(int *)(param_1 + 9) = iVar16;
    FUN_1403d5084(param_1);
  }
LAB_1405924a3:
  *param_2 = local_50[0];
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140592538 FUN_140592538 body=1205 status=ok
// SIG undefined FUN_140592538(void)

undefined1 *
FUN_140592538(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  int iVar14;
  bool bVar15;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  longlong *local_180;
  undefined8 local_178;
  longlong *local_170;
  undefined8 local_168;
  longlong *local_160;
  longlong local_158;
  longlong *local_150;
  undefined8 local_148;
  longlong *local_140;
  undefined8 local_138;
  longlong *local_130;
  undefined8 local_128;
  longlong *plStack_120;
  int local_118;
  int local_114;
  longlong local_110;
  ulonglong uStack_108;
  undefined8 local_100;
  ulonglong uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  *(undefined1 *)(param_1 + 0x27d) = 0;
  bVar4 = true;
  local_118 = CONCAT31(local_118._1_3_,1);
  uStack_f8 = uStack_f8 & 0xffffffffffffff00;
  local_110 = 0;
  uStack_108 = 0;
  memset(&local_f0,0,0x88);
  local_68 = 0x4000020702;
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = (undefined4)local_68;
  param_2[0xb4] = local_68._4_1_;
  FUN_14493db24(&local_118);
  plStack_120 = *(longlong **)(param_1 + 0x250);
  if (plStack_120 == (longlong *)0x0) {
LAB_14059283d:
    local_128 = 0;
    plStack_120 = (longlong *)0x0;
  }
  else {
    iVar14 = (int)plStack_120[1];
    do {
      if (iVar14 == 0) goto LAB_14059283d;
      LOCK();
      iVar9 = (int)plStack_120[1];
      bVar15 = iVar14 == iVar9;
      if (bVar15) {
        *(int *)(plStack_120 + 1) = iVar14 + 1;
        iVar9 = iVar14;
      }
      iVar14 = iVar9;
      UNLOCK();
    } while (!bVar15);
    local_128 = *(undefined8 *)(param_1 + 0x248);
    LOCK();
    *(int *)(plStack_120 + 1) = (int)plStack_120[1] + 1;
    UNLOCK();
    bVar4 = false;
  }
  plVar6 = plStack_120;
  uVar5 = local_128;
  FUN_140592b68(param_2,&local_128,param_4,0);
  lVar10 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x30))();
  if ((lVar10 == 0) ||
     (((bVar8 = *(byte *)(lVar10 + 0x152), bVar8 != 1 &&
       ((6 < bVar8 || ((0x68U >> (bVar8 & 0x1f) & 1) == 0)))) ||
      (lVar11 = *(longlong *)(lVar10 + 0x1f0), lVar11 == 0)))) {
LAB_140592817:
    puVar12 = &local_188;
    local_188 = uVar5;
    local_180 = plVar6;
LAB_140592787:
    if (bVar4) {
      FUN_140592ae6(param_2,puVar12);
      goto LAB_1405927a2;
    }
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    FUN_140592ae6(param_2,puVar12);
  }
  else {
    if ((longlong)*(int *)(lVar11 + 0x40) != 0) {
      lVar13 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(lVar11 + 0x38) + lVar13);
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x30) != 0)) goto LAB_1405926b5;
        lVar13 = lVar13 + 8;
      } while ((longlong)*(int *)(lVar11 + 0x40) * 8 != lVar13);
    }
    cVar7 = FUN_144a80e00(lVar10);
    if (cVar7 == '\0') goto LAB_140592817;
LAB_1405926b5:
    if (!bVar4) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_138 = uVar5;
    local_130 = plVar6;
    FUN_140592a6e(param_2,&local_138);
    cVar7 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x198))();
    if (cVar7 != '\0') {
      if (!bVar4) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      local_148 = uVar5;
      local_140 = plVar6;
      FUN_1405929ee(param_2,&local_148);
    }
    lVar11 = (longlong)*(int *)(*(longlong *)(lVar10 + 0x1f0) + 0x40);
    bVar8 = 1;
    if (lVar11 != 0) {
      lVar13 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(lVar10 + 0x1f0) + 0x38) + lVar13);
        if ((lVar2 != 0) && (plVar3 = *(longlong **)(lVar2 + 0x30), plVar3 != (longlong *)0x0)) {
          bVar8 = (**(code **)(*plVar3 + 0xe48))();
          bVar8 = bVar8 ^ 1;
          break;
        }
        lVar13 = lVar13 + 8;
      } while (lVar11 * 8 != lVar13);
    }
    cVar7 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x1a8))();
    if ((bVar8 == 0) && (cVar7 != '\0')) {
      *(undefined1 *)(param_1 + 0x299) = 1;
      *(int *)(param_1 + 0x29c) = (int)param_3;
      iVar14 = (int)((ulonglong)param_3 >> 0x20);
      *(int *)(param_1 + 0x2a0) = iVar14;
      plVar3 = DAT_14c98e618;
      if (!bVar4) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      local_168 = uVar5;
      local_160 = plVar6;
      (**(code **)(*plVar3 + 0x28))(plVar3,&local_158,&local_168);
      cVar7 = FUN_1428f4eac(DAT_14c98e618);
      if (((cVar7 != '\0') && (local_158 != 0)) &&
         (iVar9 = (**(code **)(**(longlong **)(local_158 + 0x510) + 0x68))(), iVar9 == 0)) {
        local_f0 = 0;
        uStack_e8 = 0;
        local_100 = 0;
        uStack_f8 = 0;
        local_110 = 0;
        uStack_108 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        FUN_146118180(DAT_14c98e618);
        *(ulonglong *)(param_1 + 0x29c) =
             CONCAT44((int)((float)iVar14 * ((float)local_114 / *(float *)(local_158 + 0x394))),
                      (int)((float)(int)param_3 * ((float)local_118 / *(float *)(local_158 + 0x390))
                           ));
        FUN_140ecb711(local_110,uStack_108 & 0xffffffff);
        if (local_110 != 0) {
          FUN_1400020a8();
        }
      }
      if (local_150 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_150 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_150)(local_150);
          LOCK();
          piVar1 = (int *)((longlong)local_150 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_150 + 0x10))(local_150);
          }
        }
      }
    }
    if ((bVar8 | *(byte *)(param_1 + 0x299)) == 1) {
      puVar12 = &local_178;
      local_178 = uVar5;
      local_170 = plVar6;
      goto LAB_140592787;
    }
    if (bVar4) goto LAB_1405927a2;
  }
  LOCK();
  plVar3 = plVar6 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
LAB_1405927a2:
  if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1405929ee FUN_1405929ee body=127 status=ok
// SIG undefined FUN_1405929ee(void)

longlong FUN_1405929ee(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x58) = *param_2;
  plVar2 = (longlong *)param_2[1];
  plVar3 = *(longlong **)(param_1 + 0x60);
  if (plVar3 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar3 = *(longlong **)(param_1 + 0x60);
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x60) = plVar2;
  }
  *(byte *)(param_1 + 0xb4) = *(byte *)(param_1 + 0xb4) & 0xef;
  plVar2 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 140592a6e FUN_140592a6e body=120 status=ok
// SIG undefined FUN_140592a6e(void)

longlong FUN_140592a6e(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x38) = *param_2;
  plVar3 = (longlong *)param_2[1];
  plVar2 = *(longlong **)(param_1 + 0x40);
  if (plVar2 != plVar3) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar2 = *(longlong **)(param_1 + 0x40);
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x40) = plVar3;
    plVar3 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 140592ae6 FUN_140592ae6 body=129 status=ok
// SIG undefined FUN_140592ae6(void)

longlong FUN_140592ae6(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x38) = *param_2;
  plVar2 = (longlong *)param_2[1];
  plVar3 = *(longlong **)(param_1 + 0x40);
  if (plVar3 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar3 = *(longlong **)(param_1 + 0x40);
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x40) = plVar2;
  }
  *(byte *)(param_1 + 0xb4) = *(byte *)(param_1 + 0xb4) | 0x20;
  plVar2 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 140592b68 FUN_140592b68 body=176 status=ok
// SIG undefined FUN_140592b68(void)

longlong FUN_140592b68(longlong param_1,undefined8 *param_2,undefined1 param_3,uint param_4)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  
  uVar3 = *(uint *)(param_1 + 0xb4) | 2;
  *(uint *)(param_1 + 0xb4) = uVar3;
  *(undefined8 *)(param_1 + 0x48) = *param_2;
  plVar2 = (longlong *)param_2[1];
  plVar4 = *(longlong **)(param_1 + 0x50);
  if (plVar4 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar4 = *(longlong **)(param_1 + 0x50);
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
    *(longlong **)(param_1 + 0x50) = plVar2;
    uVar3 = *(uint *)(param_1 + 0xb4);
  }
  *(undefined1 *)(param_1 + 0xb0) = param_3;
  *(uint *)(param_1 + 0xb4) = (uVar3 & 0xfffffff3) + (param_4 & 0xff) * 8;
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
  return param_1;
}



// FUNCTION 140592c18 FUN_140592c18 body=171 status=ok
// SIG undefined FUN_140592c18(void)

void FUN_140592c18(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1449e46ce();
  if ((*(char *)(param_1 + 0xcc) == '\0') && (*(longlong *)(param_1 + 0xc0) != 0)) {
    uVar3 = FUN_140565f07(*(undefined8 *)(param_1 + 0x40));
    FUN_1400073ce(param_1,local_38);
    FUN_1446e7478(local_38,param_2,uVar3,0);
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140592d14 FUN_140592d14 body=26 status=ok
// SIG undefined FUN_140592d14(void)

undefined8 FUN_140592d14(longlong param_1,undefined8 param_2)

{
  FUN_140592d2e(param_1 + 8);
  return param_2;
}



// FUNCTION 140592d2e FUN_140592d2e body=1329 status=ok
// SIG undefined FUN_140592d2e(void)

double * FUN_140592d2e(double *param_1,double *param_2)

{
  double *pdVar1;
  longlong *plVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined *puVar10;
  bool bVar11;
  double dVar12;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  code *local_80;
  longlong local_78 [2];
  longlong local_68 [2];
  double local_58 [2];
  double local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_2 = 0.0;
  param_2[1] = 0.0;
  pdVar1 = param_1 + 4;
  if (*(code **)(&DAT_14c9a85d8 + (uint)*(byte *)pdVar1 * 0x120) == (code *)0x0) {
    lVar6 = FUN_14030a32e(param_1);
    if (lVar6 != 0) {
      local_58[0] = *(double *)(lVar6 + 0x18);
LAB_140592ffb:
      FUN_1400021e4(local_58,&local_48);
      goto joined_r0x000140592f43;
    }
    lVar6 = FUN_140593260(param_1);
    if (lVar6 == 0) {
      lVar6 = FUN_14070d842(param_1);
      if (lVar6 == 0) {
        bVar3 = *(byte *)(param_1 + 4);
        if (bVar3 == 3) {
          dVar12 = (double)*(float *)param_1;
          puVar10 = &DAT_149e14292;
        }
        else {
          if (bVar3 == 10) {
            local_58[0] = *param_1;
            goto LAB_140592ffb;
          }
          if (bVar3 != 0x15) {
            uVar7 = (ulonglong)((uint)bVar3 * 0x120);
            if ((((*(int *)((longlong)&DAT_14c9a853c + uVar7) == 0) ||
                 (uVar4 = *(uint *)((longlong)&DAT_14c9a8538 + uVar7), (int)uVar4 < 0)) ||
                (DAT_14c9647dc <= (int)uVar4)) ||
               (((plVar9 = (longlong *)
                           ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
                 plVar9 == (longlong *)0x0 ||
                 ((int)plVar9[2] != *(int *)((longlong)&DAT_14c9a853c + uVar7))) ||
                (((*(uint *)(plVar9 + 1) & 0x10200000) != 0 ||
                 (plVar2 = (longlong *)((longlong)&DAT_14c9a8540 + uVar7), *plVar9 == 0)))))) {
              *(undefined8 *)((longlong)&DAT_14c9a8540 + uVar7) = 0;
              goto LAB_140592f67;
            }
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
            {
              local_88 = FUN_140342cba();
              local_80 = FUN_1468c7f1e;
              uStack_90 = 0;
              local_98 = 0x8001;
              FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
              atexit(FUN_14280c819);
              _Init_thread_footer(&DAT_14c951a88);
            }
            plVar9 = (longlong *)*plVar2;
            if (((((plVar9 == (longlong *)0x0) || (*(int *)((longlong)&DAT_14c9a854c + uVar7) == 0))
                 || (uVar4 = *(uint *)((longlong)&DAT_14c9a8548 + uVar7), (int)uVar4 < 0)) ||
                ((DAT_14c9647dc <= (int)uVar4 ||
                 (lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar6 == 0)
                 ))) || ((*(int *)(lVar6 + 0x10) != *(int *)((longlong)&DAT_14c9a854c + uVar7) ||
                         ((*(uint *)(lVar6 + 8) & 0x10200000) != 0)))) {
              if (*(int *)((longlong)&DAT_14c9a8558 + uVar7) != 0) {
                plVar9 = (longlong *)FUN_14007daa4(plVar2,0,0);
                if (plVar9 == (longlong *)0x0) {
LAB_14059304a:
                  if (*plVar2 != 0) {
                    *plVar2 = 0;
                    *(undefined8 *)((longlong)&DAT_14c9a8548 + uVar7) = 0;
                    goto LAB_140592f06;
                  }
                  goto LAB_140592f67;
                }
                puVar10 = (undefined *)plVar9[1];
                if (DAT_14c951a40 == 0) {
                  bVar11 = puVar10 != (undefined *)0x0;
                  if (puVar10 != &DAT_14c951a38 && bVar11) {
                    do {
                      puVar10 = *(undefined **)(puVar10 + 0x30);
                      bVar11 = puVar10 != (undefined *)0x0;
                      if (puVar10 == &DAT_14c951a38) break;
                    } while (puVar10 != (undefined *)0x0);
                  }
                  if (!bVar11) goto LAB_14059304a;
                }
                else if ((*(ulonglong *)(puVar10 + 0x18) & DAT_14c951a40) == 0) goto LAB_14059304a;
                *plVar2 = (longlong)plVar9;
              }
              if (plVar9 == (longlong *)0x0) goto LAB_140592f67;
            }
            if (0x18 < *(ushort *)(param_1 + 3)) {
              param_1 = (double *)*param_1;
            }
            local_98 = 0;
            uStack_90 = 0;
            local_80 = (code *)0x0;
            local_88 = local_88 & 0xffffffff00000000;
            (**(code **)(*plVar9 + 0xf0))(0,param_2,param_1,0);
LAB_140592f06:
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_b8);
          }
          dVar12 = *param_1;
          puVar10 = &DAT_14a1caab4;
        }
        FUN_140002266(&local_48,puVar10,dVar12);
      }
      else {
        uVar8 = FUN_144a79778(lVar6);
        local_48 = 0.0;
        uStack_40 = 0;
        FUN_1401031ac(lVar6,uVar8,&local_48);
      }
      goto joined_r0x000140592f43;
    }
    lVar5 = *(longlong *)(lVar6 + 0xa8);
    if (lVar5 == 0) {
      uVar8 = FUN_144a79778(lVar6);
      local_48 = 0.0;
      uStack_40 = 0;
      FUN_1401031ac(lVar6,uVar8);
    }
    else {
      local_48 = *(double *)(lVar6 + 0x18);
      FUN_1400021e4(&local_48,local_58);
      local_48 = *(double *)(lVar5 + 0x18);
      FUN_1400021e4(&local_48,local_78);
      FUN_144a882a8(local_68,local_78,&DAT_149e0635c);
      FUN_1401c7f3e(&local_48,local_68,local_58);
    }
    if (&local_48 == param_2) {
      if (local_48 != 0.0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0.0) {
        FUN_1400020a8();
      }
      *param_2 = local_48;
      local_48 = 0.0;
      *(undefined4 *)(param_2 + 1) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_40._4_4_;
      uStack_40 = 0;
    }
    if (lVar5 == 0) goto LAB_140592f67;
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    dVar12 = local_58[0];
    if (local_78[0] != 0) {
      FUN_1400020a8();
      dVar12 = local_58[0];
    }
  }
  else {
    if (0x18 < *(ushort *)(param_1 + 3)) {
      param_1 = (double *)*param_1;
    }
    (**(code **)(&DAT_14c9a85d8 + (uint)*(byte *)pdVar1 * 0x120))(&local_48,param_1);
joined_r0x000140592f43:
    dVar12 = local_48;
    if (&local_48 != param_2) {
      if (*param_2 != 0.0) {
        FUN_1400020a8();
      }
      *param_2 = local_48;
      *(undefined4 *)(param_2 + 1) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_40._4_4_;
      goto LAB_140592f67;
    }
  }
  if (dVar12 != 0.0) {
    FUN_1400020a8();
  }
LAB_140592f67:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140593260 FUN_140593260 body=276 status=ok
// SIG undefined FUN_140593260(void)

undefined8 FUN_140593260(uint *param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 ***pppuVar5;
  undefined1 auStack_68 [32];
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((char)param_1[8] != '\x0e') {
    FUN_1400b56fe(local_48,param_1,0xe);
    uVar2 = 0;
    uVar4 = 0;
    if (local_28 != 0) {
      uVar4 = FUN_14479d2ce(local_48);
      uVar2 = (uint)local_28;
    }
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar2 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar5 = local_48;
      if (0x18 < local_30) {
        pppuVar5 = (undefined8 ***)local_48[0];
      }
      (*pcVar1)(pppuVar5);
    }
    if (0x18 < local_30) {
      FUN_1400020a8(local_48[0]);
    }
    goto LAB_1405932cb;
  }
  if (param_1[1] != 0) {
    uVar2 = *param_1;
    uVar4 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1405932cb;
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((puVar3 != (undefined8 *)0x0) &&
       ((*(uint *)(puVar3 + 2) == param_1[1] && ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)))) {
      uVar4 = *puVar3;
      goto LAB_1405932cb;
    }
  }
  uVar4 = 0;
LAB_1405932cb:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140593376 FUN_140593376 body=383 status=ok
// SIG undefined FUN_140593376(void)

double * FUN_140593376(longlong *param_1,double *param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  ulonglong uVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  
  if ((*(byte *)((longlong)param_1 + 0x1d3) & 0x20) == 0) {
    fVar9 = (float)FUN_1479f426e(param_1,param_4,param_5);
    cVar5 = (**(code **)(*param_1 + 0xf0))(param_1,param_3,param_4,param_5);
    if (cVar5 != '\0') {
      fVar9 = 0.0;
      cVar5 = FUN_14498f84a();
      if (cVar5 != '\0') {
        fVar9 = *(float *)(DAT_14cad12e0 + 4);
        if (10000.0 <= fVar9) {
          fVar9 = 10000.0;
        }
        if (fVar9 <= 0.0001) {
          fVar9 = 0.0001;
        }
        fVar9 = fVar9 * *(float *)(param_1 + 0x5f);
      }
    }
    lVar3 = DAT_14cad12b0;
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(int *)(lVar2 + 0xc60) == 0x40000002) {
      uVar7 = 0;
    }
    else {
      bVar6 = FUN_144a61b4f();
      uVar7 = (ulonglong)(bVar6 ^ 1);
    }
    lVar4 = DAT_14cad12b0;
    piVar1 = (int *)(lVar2 + 0xc60);
    if (*(float *)(lVar3 + uVar7 * 4) <= 0.0) {
      pfVar8 = (float *)((longlong)param_1 + 0x204);
    }
    else {
      if (*piVar1 == 0x40000002) {
        uVar7 = 0;
      }
      else {
        bVar6 = FUN_144a61b4f();
        uVar7 = (ulonglong)(bVar6 ^ 1);
      }
      pfVar8 = (float *)(lVar4 + uVar7 * 4);
    }
    lVar2 = DAT_14cad1240;
    if (fVar9 <= *pfVar8) {
      fVar9 = *pfVar8;
    }
    fVar10 = *(float *)((longlong)param_1 + 0x2f4);
    if (*piVar1 == 0x40000002) {
      uVar7 = 0;
    }
    else {
      bVar6 = FUN_144a61b4f();
      uVar7 = (ulonglong)(bVar6 ^ 1);
    }
    fVar10 = fVar9 - fVar10 * *(float *)(lVar2 + uVar7 * 4) * fVar9;
    fVar9 = fVar9 - fVar10;
    if (fVar9 <= 0.0001) {
      fVar9 = 0.0001;
    }
    *param_2 = (double)fVar10;
    param_2[1] = (double)(1.0 / fVar9);
  }
  else {
    *param_2 = 0.0;
    param_2[1] = 0.0;
  }
  return param_2;
}



// FUNCTION 1405934f6 FUN_1405934f6 body=81 status=ok
// SIG undefined FUN_1405934f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405934f6(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_140593548(_DAT_000000a8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_140593548(param_1[0x15]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140593544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,1);
  return;
}



// FUNCTION 140593548 FUN_140593548 body=1488 status=ok
// SIG undefined FUN_140593548(void)

void FUN_140593548(longlong param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  ushort uVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  code *pcVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_140;
  longlong *local_138;
  int local_124;
  longlong *local_120;
  longlong *local_118;
  longlong local_110;
  int local_104;
  undefined4 local_100;
  undefined4 local_fc;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  code *local_78;
  longlong *local_70;
  uint local_60;
  uint local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (0 < *(int *)(param_1 + 0x138)) {
    local_120 = (longlong *)(param_1 + 0x260);
    iVar6 = *(int *)(param_1 + 0x26c);
    *(undefined4 *)(param_1 + 0x268) = 0;
    if (iVar6 < 0) {
      FUN_14640607c(local_120,0);
      iVar13 = *(int *)(param_1 + 0x138) * 2;
      if (*(int *)(param_1 + 0x138) < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar13);
      }
      iVar6 = *(int *)(param_1 + 0x26c);
    }
    else {
      iVar13 = *(int *)(param_1 + 0x138) * 2;
    }
    if (iVar6 < iVar13) {
      FUN_14640607c(local_120);
    }
    local_f8 = param_1 + 0x270;
    *(undefined4 *)(param_1 + 0x278) = 0;
    if (*(int *)(param_1 + 0x27c) < 0) {
      FUN_14481578e(local_f8,0);
    }
    iVar6 = *(int *)(param_1 + 0x138);
    local_e0 = (longlong)
               ((*(int *)(param_1 + 0x148) + *(int *)(param_1 + 0x140)) - *(int *)(param_1 + 0x144))
               % (longlong)*(int *)(param_1 + 0x140) & 0xffffffff;
    local_110 = param_1;
    if (0 < iVar6) {
      local_e8 = param_1 + 0x78;
      local_f0 = param_1 + 0x200;
      uVar17 = 0;
      do {
        iVar13 = ((int)local_e0 + (int)uVar17) % *(int *)(param_1 + 0x140);
        uVar4 = *(ushort *)(*(longlong *)(param_1 + 0xf0) + (longlong)iVar13 * 0x28);
        if (uVar4 != 0xffff) {
          uVar19 = (uint)uVar4;
          if (*(uint *)(param_1 + 0x90) == uVar19 ||
              (int)*(uint *)(param_1 + 0x90) < (int)(uint)uVar4) {
LAB_14059399d:
            lVar12 = 0;
          }
          else {
            lVar12 = *(longlong *)(param_1 + 0x88);
            if (*(longlong *)(param_1 + 0x88) == 0) {
              lVar12 = local_e8;
            }
            if ((*(uint *)(lVar12 + (ulonglong)(uVar4 >> 5) * 4) >> (uVar19 & 0x1f) & 1) == 0)
            goto LAB_14059399d;
            lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x68) + (ulonglong)uVar19 * 8);
          }
          lVar18 = *(longlong *)(param_1 + 0xf0) + (longlong)iVar13 * 0x28;
          lVar16 = (ulonglong)*(ushort *)(lVar18 + 2) * 0x100;
          lVar9 = *(longlong *)(*(longlong *)(lVar12 + 0x40) + lVar16);
          uVar19 = *(uint *)(lVar18 + 4);
          uVar7 = *(uint *)(lVar9 + 0x98);
          local_118 = (longlong *)(lVar9 + 0x78);
          local_124 = 0;
          if (uVar7 <= uVar19) {
            local_124 = ((int *)*local_118)[(int)uVar7] - *(int *)*local_118;
          }
          lVar16 = *(longlong *)(lVar12 + 0x40) + lVar16;
          local_104 = iVar13;
          local_d8 = uVar17;
          if (uVar19 < *(int *)(lVar18 + 8) + uVar19) {
            local_fc = *(undefined4 *)
                        ((longlong)&DAT_14c873428 +
                        (ulonglong)((uint)*(byte *)(lVar12 + 0xc) * 0x30));
            local_100 = *(undefined4 *)
                         ((longlong)&DAT_14c873428 +
                         (ulonglong)((uint)*(byte *)(lVar12 + 0xd) * 0x30));
            local_c8 = **(longlong **)(lVar18 + 0x10);
            local_124 = local_124 - *(int *)(*local_118 + (longlong)(int)uVar19 * 4);
            local_d0 = lVar16 + 0x68;
            do {
              FUN_1409a11ae(*(longlong *)(lVar12 + 0x40) +
                            (ulonglong)*(ushort *)(lVar18 + 2) * 0x100 + 0xa8,uVar19);
              lVar8 = (ulonglong)*(ushort *)(lVar18 + 2) * 0x100 + *(longlong *)(lVar12 + 0x40);
              lVar9 = *(longlong *)(lVar8 + 0x98);
              if (lVar9 == 0) {
                lVar9 = lVar8 + 0x88;
              }
              uVar7 = uVar19 + 0x1f;
              if (-1 < (int)uVar19) {
                uVar7 = uVar19;
              }
              if ((*(uint *)(lVar9 + (longlong)((int)uVar7 >> 5) * 4) >> (uVar19 & 0x1f) & 1) != 0)
              {
                local_148 = local_100;
                FUN_143700024(local_118,&local_78,uVar19,local_fc);
                uVar14 = (int)local_78 + local_124;
                FUN_14370a24c(*(undefined8 *)(*(longlong *)(lVar12 + 0x100) + 0x10),&local_b8,
                              local_50,local_4c);
                iVar6 = *(int *)(local_110 + 0x268);
                *(uint *)(local_110 + 0x268) = iVar6 + 1U;
                if (*(uint *)(local_110 + 0x26c) < iVar6 + 1U) {
                  FUN_1464060ea(local_120,iVar6);
                }
                lVar15 = (ulonglong)uVar14 + local_c8;
                lVar9 = *local_120;
                lVar8 = (longlong)iVar6 * 0x70;
                *(longlong *)(lVar9 + lVar8) = local_b8;
                ((longlong *)(lVar9 + lVar8))[1] = CONCAT44(uStack_ac,uStack_b0);
                puVar2 = (undefined8 *)(lVar9 + 0x10 + lVar8);
                *puVar2 = local_a8;
                puVar2[1] = uStack_a0;
                puVar3 = (undefined4 *)(lVar9 + 0x20 + lVar8);
                *puVar3 = local_98;
                puVar3[1] = uStack_94;
                puVar3[2] = uStack_90;
                puVar3[3] = uStack_8c;
                *(undefined8 *)(lVar9 + 0x30 + lVar8) = local_80;
                *(ulonglong *)(lVar9 + 0x38 + lVar8) = ((ulonglong)local_70 & 0xffffffff) + lVar15;
                *(ulonglong *)(lVar9 + 0x40 + lVar8) = ((ulonglong)local_70 >> 0x20) + lVar15;
                *(ulonglong *)(lVar9 + 0x48 + lVar8) = (ulonglong)local_60 + lVar15;
                *(ulonglong *)(lVar9 + 0x50 + lVar8) = (ulonglong)local_5c + lVar15;
                *(undefined8 *)(lVar9 + 0x58 + lVar8) = local_58;
                *(undefined8 *)(lVar9 + 0x60 + lVar8) = local_88;
                *(undefined4 *)(lVar9 + 0x68 + lVar8) =
                     *(undefined4 *)(*(longlong *)(lVar16 + 0x18) + (longlong)(int)uVar19 * 4);
                lVar9 = *(longlong *)(lVar16 + 0x78);
                if (*(longlong *)(lVar16 + 0x78) == 0) {
                  lVar9 = local_d0;
                }
                puVar1 = (uint *)(lVar9 + (longlong)((int)uVar7 >> 5) * 4);
                *puVar1 = *puVar1 | 1 << ((byte)uVar19 & 0x1f);
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < (uint)(*(int *)(lVar18 + 8) + *(int *)(lVar18 + 4)));
          }
          param_1 = local_110;
          iVar6 = *(int *)(local_110 + 0x278);
          *(uint *)(local_110 + 0x278) = iVar6 + 1U;
          if (*(uint *)(local_110 + 0x27c) < iVar6 + 1U) {
            FUN_1446f48e2(local_f8,iVar6);
          }
          *(int *)(*(longlong *)(param_1 + 0x270) + (longlong)iVar6 * 4) = local_104;
          local_b8 = lVar16;
          FUN_141640c3c(local_f0,&local_78);
          iVar6 = *(int *)(param_1 + 0x138);
          uVar17 = local_d8;
        }
        uVar19 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar19;
      } while ((int)uVar19 < iVar6);
    }
    local_70 = &local_c0;
    local_138 = &local_b8;
    local_b8 = 0;
    uStack_b0 = 0;
    local_78 = FUN_143716436;
    local_140 = 0;
    local_c0 = param_1;
    FUN_1411ca36e(L"SVT::UploadTileDataTasks",*(undefined4 *)(param_1 + 0x268),8);
    iVar6 = *(int *)(param_1 + 0x278);
    if ((longlong)iVar6 != 0) {
      lVar12 = *(longlong *)(param_1 + 0x270);
      lVar18 = 0;
      do {
        lVar16 = (longlong)*(int *)(lVar12 + lVar18);
        lVar9 = *(longlong *)(param_1 + 0xf0);
        plVar5 = *(longlong **)(lVar9 + 0x18 + lVar16 * 0x28);
        if ((plVar5 != (longlong *)0x0) && (iVar13 = (**(code **)(*plVar5 + 0x20))(), iVar13 != 0))
        {
          plVar10 = (longlong *)(lVar9 + lVar16 * 0x28 + 0x18);
          plVar5 = (longlong *)*plVar10;
          if (plVar5 != (longlong *)0x0) {
            *plVar10 = 0;
            pcVar11 = *(code **)(*plVar5 + 0x10);
            if (pcVar11 == (code *)&LAB_141067ecc) {
              plVar5 = (longlong *)plVar5[1];
              pcVar11 = *(code **)(*plVar5 + 0x10);
              if (pcVar11 == (code *)&LAB_1401bbf4a) {
                LOCK();
                plVar10 = plVar5 + 1;
                *(int *)plVar10 = (int)*plVar10 + -1;
                UNLOCK();
                if (plVar5 != (longlong *)0x0 && (int)*plVar10 == 0) {
                  (**(code **)*plVar5)(plVar5,1);
                }
                goto LAB_140593a91;
              }
            }
            (*pcVar11)();
          }
        }
LAB_140593a91:
        lVar18 = lVar18 + 4;
        param_1 = local_110;
      } while ((longlong)iVar6 * 4 != lVar18);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140593b1a FUN_140593b1a body=3447 status=ok
// SIG undefined FUN_140593b1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140593b1a(longlong *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  bool bVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  int iVar21;
  longlong *plVar22;
  undefined1 auStack_188 [32];
  longlong *local_168;
  int local_15c;
  uint *local_158;
  uint *local_150;
  uint *local_148;
  ulonglong local_140;
  uint local_134;
  uint *local_130;
  ulonglong local_128;
  longlong *local_120;
  ulonglong local_118;
  longlong *local_110;
  uint *local_108;
  ulonglong local_100;
  longlong *local_f8;
  char local_ec [4];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  uint local_c4;
  char local_b9;
  uint *local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  uint local_9c;
  longlong *local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  longlong lStack_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  cVar1 = (**(code **)(*param_1 + 0x300))();
  if (cVar1 == '\0') {
    local_168 = param_1 + 0x5d;
    local_158 = (uint *)(param_1 + 0x5f);
    local_e8 = (longlong *)&DAT_100000000;
    local_d8 = (longlong *)&DAT_ffffffff;
    uStack_d0 = (ulonglong)uStack_d0._4_4_ << 0x20;
    uStack_e0 = local_158;
    if ((int)param_1[0x62] == 0) {
      iVar21 = 0;
    }
    else {
      FUN_1449c0562(&local_e8);
      iVar21 = (int)param_1[0x62];
    }
    local_88 = (undefined4)uStack_e0;
    uStack_84 = uStack_e0._4_4_;
    lStack_78 = uStack_d0;
    local_80 = local_d8;
    plVar22 = local_80;
    uStack_90 = local_e8;
    local_98 = local_168;
    local_80._4_4_ = (int)((ulonglong)local_d8 >> 0x20);
    if ((local_80._4_4_ != iVar21) || (uStack_e0 != local_158)) {
      iVar3 = local_80._4_4_;
      local_80 = plVar22;
      do {
        lVar13 = *local_98;
        lVar19 = *(longlong *)(lVar13 + 0x10 + (longlong)iVar3 * 0x20);
        if ((lVar19 != 0) && (plVar22 = *(longlong **)(lVar19 + 0x30), plVar22 != (longlong *)0x0))
        {
          iVar4 = 0;
          (**(code **)*plVar22)(plVar22,0);
          _DAT_14cb84f04 = _DAT_14cb84f04 + -1;
          *plVar22 = (longlong)DAT_14cb84ef8;
          lVar13 = *(longlong *)(lVar13 + (longlong)iVar3 * 0x20 + 0x10);
          plVar12 = (longlong *)(lVar13 + 0x80);
          local_b8 = (uint *)&DAT_100000000;
          local_a8 = 0xffffffff;
          local_a0 = 0;
          DAT_14cb84ef8 = plVar22;
          local_b0 = plVar12;
          if (*(int *)(lVar13 + 0x98) != 0) {
            FUN_1449c0562(&local_b8);
            iVar4 = *(int *)(lVar13 + 0x98);
          }
          plVar22 = (longlong *)(lVar13 + 0x70);
          uStack_d0 = local_a8;
          lVar13 = uStack_d0;
          local_c8 = local_a0;
          uVar9 = (ulonglong)local_9c;
          local_c4 = local_9c;
          uStack_e0 = local_b8;
          local_d8 = local_b0;
          uStack_d0._4_4_ = (uint)((ulonglong)local_a8 >> 0x20);
          iVar3 = uStack_d0._4_4_;
          local_e8 = plVar22;
          if ((uStack_d0._4_4_ != iVar4) || (uStack_d0 = lVar13, local_b0 != plVar12)) {
            do {
              uStack_d0 = lVar13;
              lVar13 = *local_e8;
              lVar19 = *(longlong *)(lVar13 + 0x10 + (longlong)iVar3 * 0x20);
              if ((lVar19 != 0) && (*(longlong *)(lVar19 + 0x30) != 0)) {
                uVar9 = CONCAT71((int7)(uVar9 >> 8),*(undefined1 *)(lVar19 + 0x2a));
                plVar8 = (longlong *)FUN_140595908(param_1,uVar9);
                if (plVar8 != (longlong *)0x0) {
                  uVar9 = *(ulonglong *)
                           (*(longlong *)(lVar13 + (longlong)iVar3 * 0x20 + 0x10) + 0x30);
                  (**(code **)(*plVar8 + 0x2d0))(plVar8,uVar9);
                }
              }
              uStack_d0 = CONCAT44(uStack_d0._4_4_,(uint)uStack_d0 & ~uStack_e0._4_4_);
              FUN_1449c0562(&uStack_e0);
              bVar10 = local_e8 != plVar22 || (local_d8 != plVar12 || uStack_d0._4_4_ != iVar4);
              uVar9 = CONCAT71((int7)(uVar9 >> 8),bVar10);
              iVar3 = uStack_d0._4_4_;
              lVar13 = uStack_d0;
            } while (bVar10);
          }
        }
        local_80 = (longlong *)CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_90._4_4_);
        FUN_1449c0562(&uStack_90);
        iVar3 = local_80._4_4_;
        plVar22 = local_80;
      } while (local_98 != local_168 ||
               ((uint *)CONCAT44(uStack_84,local_88) != local_158 || local_80._4_4_ != iVar21));
    }
  }
  else {
    uVar9 = 0;
    lStack_78 = 0;
    local_70 = 0;
    local_98 = (longlong *)0x0;
    uStack_90 = (longlong *)0x0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_ec[0] = '\0';
    local_150 = (uint *)(param_1 + 0x41);
    local_e8 = (longlong *)0x100000000;
    local_d8._0_4_ = 0xffffffff;
    local_d8._4_4_ = 0;
    uStack_d0 = (ulonglong)uStack_d0._4_4_ << 0x20;
    local_f8 = param_1;
    uStack_e0 = local_150;
    if ((int)param_1[0x44] == 0) {
      uVar20 = 1;
      iVar21 = 0;
      uVar15 = 0;
    }
    else {
      FUN_1449c0562(&local_e8);
      uVar15 = (ulonglong)local_e8 & 0xffffffff;
      uVar20 = (ulonglong)local_e8 >> 0x20;
      uVar9 = (ulonglong)*(uint *)(param_1 + 0x44);
      iVar21 = (uint)uStack_d0;
    }
    local_120 = param_1 + 0x3f;
    uVar14 = (uint)local_d8;
    uVar11 = local_d8._4_4_;
    puVar18 = uStack_e0;
    if (local_d8._4_4_ != (uint)uVar9 || uStack_e0 != local_150) {
      do {
        local_128 = uVar9;
        local_130 = puVar18;
        lVar13 = *local_120;
        lVar19 = (longlong)(int)uVar11 * 0x70;
        local_e8 = *(longlong **)(lVar13 + 0x10 + lVar19);
        local_15c = iVar21;
        local_134 = uVar14;
        local_118 = uVar20;
        local_100 = uVar15;
        if (((local_e8 != (longlong *)0x0) &&
            (FUN_14042e430(&local_98,&local_b8,&local_e8,local_ec), local_ec[0] == '\0')) &&
           (plVar22 = *(longlong **)(lVar13 + lVar19 + 0x10), plVar22 != (longlong *)0x0)) {
          (**(code **)*plVar22)(plVar22,0);
          _DAT_14cb84f04 = _DAT_14cb84f04 + -1;
          *plVar22 = (longlong)DAT_14cb84ef8;
          DAT_14cb84ef8 = plVar22;
        }
        puVar18 = (uint *)(lVar13 + lVar19 + 0x28);
        local_d8._4_4_ = *(uint *)(lVar13 + lVar19 + 0x40);
        uVar9 = (ulonglong)local_d8._4_4_;
        uVar20 = 1;
        if (local_d8._4_4_ == 0) {
          local_168 = (longlong *)0x0;
          uVar15 = 0;
          plVar22 = local_168;
          iVar21 = 0;
        }
        else {
          puVar17 = *(uint **)(lVar13 + 0x38 + lVar19);
          if (puVar17 == (uint *)0x0) {
            puVar17 = puVar18;
          }
          uVar14 = *puVar17;
          if (uVar14 == 0) {
            iVar21 = local_d8._4_4_ + 0x1e;
            if (-1 < (int)(local_d8._4_4_ - 1)) {
              iVar21 = local_d8._4_4_ - 1;
            }
            local_168 = (longlong *)0x0;
            plVar12 = (longlong *)(ulonglong)(uint)(iVar21 >> 5);
            if (iVar21 >> 5 < 1) {
              plVar12 = local_168;
            }
            iVar3 = 0;
            do {
              uVar15 = uVar9;
              plVar22 = (longlong *)(ulonglong)((int)plVar12 + 1);
              iVar21 = (int)plVar12 * 0x20 + 0x20;
              if (plVar12 == local_168) goto LAB_140593d8a;
              iVar3 = iVar3 + 0x20;
              uVar14 = puVar17[(longlong)local_168 + 1];
              local_168 = (longlong *)((longlong)local_168 + 1);
            } while (uVar14 == 0);
          }
          else {
            local_168 = (longlong *)0x0;
            iVar3 = 0;
          }
          uVar20 = (ulonglong)(-uVar14 & uVar14);
          uVar15 = uVar20 * 2 + 1;
          lVar6 = 0x3f;
          if (uVar15 != 0) {
            for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          uVar14 = (iVar3 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
          uVar15 = (ulonglong)uVar14;
          plVar22 = local_168;
          iVar21 = iVar3;
          if ((int)local_d8._4_4_ <= (int)uVar14) {
            uVar15 = uVar9;
          }
        }
LAB_140593d8a:
        local_168 = plVar22;
        local_158 = (uint *)(lVar13 + lVar19 + 0x40);
        local_e8 = (longlong *)CONCAT44(1 << ((byte)local_d8._4_4_ & 0x1f),(int)local_d8._4_4_ >> 5)
        ;
        local_d8._0_4_ = -1 << ((byte)local_d8._4_4_ & 0x1f);
        uStack_d0 = CONCAT44(uStack_d0._4_4_,local_d8._4_4_) & 0xffffffffffffffe0;
        uStack_e0 = puVar18;
        if (*local_158 != local_d8._4_4_) {
          local_148 = puVar18;
          FUN_1449c0562(&local_e8);
          uVar9 = (ulonglong)local_d8._4_4_;
        }
        local_148 = uStack_e0;
        if (((int)uVar15 != (int)uVar9) || (puVar18 != uStack_e0)) {
          local_110 = (longlong *)(lVar19 + lVar13 + 0x18);
          uVar14 = 0xffffffff;
          local_140 = uVar9;
          local_108 = puVar18;
          do {
            lVar13 = *local_110;
            lVar19 = (longlong)(int)uVar15 * 0x20;
            local_e8 = *(longlong **)(lVar13 + 0x10 + lVar19);
            FUN_14042e430(&local_98,&local_b8,&local_e8,local_ec);
            if (((local_ec[0] == '\0') &&
                (lVar13 = *(longlong *)(lVar19 + lVar13 + 0x10), lVar13 != 0)) &&
               (0 < (int)param_1[0x3c])) {
              cVar1 = '\x01';
              do {
                lVar19 = param_1[0x3b];
                if (*(longlong *)(lVar19 + (longlong)(char)(cVar1 + -1) * 8) != 0) {
                  lVar6 = FUN_140594892();
                  plVar22 = *(longlong **)(lVar19 + (longlong)(char)(cVar1 + -1) * 8);
                  if ((((plVar22 != (longlong *)0x0) && (lVar6 != 0)) &&
                      (lVar19 = plVar22[2], lVar19 != 0)) &&
                     ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar19 + 0x38) &&
                      (*(longlong *)
                        (*(longlong *)(lVar19 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
                       lVar6 + 0x30)))) {
                    uVar7 = (**(code **)(*plVar22 + 0x2c0))(plVar22);
                    cVar2 = FUN_1448093f4(lVar13,uVar7);
                    if (cVar2 != '\0') {
                      (**(code **)(*plVar22 + 0x2d0))(plVar22,lVar13);
                      break;
                    }
                  }
                }
                iVar3 = (int)cVar1;
                cVar1 = cVar1 + '\x01';
              } while (iVar3 < (int)param_1[0x3c]);
            }
            uVar14 = uVar14 & ~(uint)uVar20;
            puVar18 = (uint *)local_110[4];
            if ((uint *)local_110[4] == (uint *)0x0) {
              puVar18 = local_108;
            }
            uVar11 = *local_158;
            iVar3 = (int)local_168;
            lVar13 = (longlong)iVar3;
            uVar16 = puVar18[lVar13] & uVar14;
            if (uVar16 == 0) {
              iVar4 = uVar11 + 0x1e;
              if (-1 < (int)(uVar11 - 1)) {
                iVar4 = uVar11 - 1;
              }
              iVar4 = iVar4 >> 5;
              iVar21 = iVar21 + 0x20;
              iVar5 = iVar4;
              if (iVar4 < iVar3) {
                iVar5 = iVar3;
              }
              if (iVar3 < iVar4) {
                lVar19 = 0;
                do {
                  uVar16 = puVar18[lVar13 + lVar19 + 1];
                  if (uVar16 != 0) {
                    local_168 = (longlong *)(ulonglong)(iVar3 + (int)lVar19 + 1);
                    uVar14 = 0xffffffff;
                    goto LAB_140593f81;
                  }
                  iVar21 = iVar21 + 0x20;
                  lVar19 = lVar19 + 1;
                } while (iVar5 - lVar13 != lVar19);
                uVar14 = 0xffffffff;
                iVar3 = iVar5;
              }
              local_168 = (longlong *)(ulonglong)(iVar3 + 1);
              uVar16 = uVar11;
            }
            else {
LAB_140593f81:
              uVar20 = (ulonglong)(-uVar16 & uVar16);
              uVar9 = uVar20 * 2 + 1;
              lVar13 = 0x3f;
              if (uVar9 != 0) {
                for (; uVar9 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                }
              }
              uVar16 = (iVar21 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
              if ((int)uVar11 <= (int)uVar16) {
                uVar16 = uVar11;
              }
            }
            uVar15 = (ulonglong)uVar16;
          } while ((uVar16 != (uint)local_140) || (local_108 != local_148));
        }
        uVar14 = local_134 & ~(uint)local_118;
        puVar18 = *(uint **)(local_130 + 4);
        if (*(uint **)(local_130 + 4) == (uint *)0x0) {
          puVar18 = local_130;
        }
        uVar16 = local_130[6];
        iVar3 = (int)local_100;
        lVar13 = (longlong)iVar3;
        uVar11 = puVar18[lVar13] & uVar14;
        uVar15 = local_100;
        iVar21 = local_15c;
        if (uVar11 == 0) {
          iVar4 = uVar16 + 0x1e;
          if (-1 < (int)(uVar16 - 1)) {
            iVar4 = uVar16 - 1;
          }
          iVar4 = iVar4 >> 5;
          iVar21 = local_15c + 0x20;
          iVar5 = iVar4;
          if (iVar4 < iVar3) {
            iVar5 = iVar3;
          }
          if (iVar3 < iVar4) {
            lVar19 = 0;
            do {
              uVar11 = puVar18[lVar13 + lVar19 + 1];
              if (uVar11 != 0) {
                uVar14 = 0xffffffff;
                uVar15 = (ulonglong)(iVar3 + (int)lVar19 + 1);
                goto LAB_140594068;
              }
              iVar21 = iVar21 + 0x20;
              lVar19 = lVar19 + 1;
            } while (iVar5 - lVar13 != lVar19);
            uVar14 = 0xffffffff;
            iVar3 = iVar5;
          }
          uVar15 = (ulonglong)(iVar3 + 1);
          uVar20 = local_118;
          uVar11 = uVar16;
        }
        else {
LAB_140594068:
          uVar20 = (ulonglong)(-uVar11 & uVar11);
          uVar9 = uVar20 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar9 != 0) {
            for (; uVar9 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          uVar11 = (iVar21 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
          if ((int)uVar16 <= (int)uVar11) {
            uVar11 = uVar16;
          }
        }
        puVar18 = local_130;
        uVar9 = local_128;
      } while (uVar11 != (uint)local_128 || local_130 != local_150);
    }
    iVar21 = 0;
    FUN_14570f31c(local_120,0);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_14041e672(&local_98);
    plVar22 = param_1 + 0x49;
    lStack_78 = 0;
    local_70 = 0;
    local_98 = (longlong *)0x0;
    uStack_90 = (longlong *)0x0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_b9 = '\0';
    plVar12 = param_1 + 0x4b;
    local_b8 = (uint *)0x100000000;
    local_a8._0_4_ = 0xffffffff;
    local_a8._4_4_ = 0;
    local_a0 = 0;
    local_b0 = plVar12;
    if ((int)param_1[0x4e] != 0) {
      FUN_1449c0562(&local_b8);
      iVar21 = (int)param_1[0x4e];
    }
    uStack_d0._0_4_ = (uint)local_a8;
    uStack_d0._4_4_ = local_a8._4_4_;
    local_c8 = local_a0;
    local_c4 = local_9c;
    uStack_e0 = local_b8;
    local_d8 = local_b0;
    local_e8 = plVar22;
    if ((local_a8._4_4_ != iVar21) || (local_b0 != plVar12)) {
      do {
        lVar13 = *local_e8;
        lVar19 = (longlong)(int)uStack_d0._4_4_;
        puVar18 = *(uint **)(lVar13 + 0x10 + lVar19 * 0x20);
        if ((puVar18 != (uint *)0x0) &&
           ((local_b8 = puVar18, FUN_14042e430(&local_98,local_ec,&local_b8,&local_b9),
            local_b9 == '\0' &&
            (plVar8 = *(longlong **)(lVar19 * 0x20 + 0x10 + lVar13), plVar8 != (longlong *)0x0)))) {
          (**(code **)*plVar8)(plVar8,0);
          _DAT_14cb84f04 = _DAT_14cb84f04 + -1;
          *plVar8 = (longlong)DAT_14cb84ef8;
          DAT_14cb84ef8 = plVar8;
        }
        uStack_d0._0_4_ = (uint)uStack_d0 & ~uStack_e0._4_4_;
        FUN_1449c0562(&uStack_e0);
      } while (((uStack_d0._4_4_ != iVar21) || (local_d8 != plVar12)) || (local_e8 != plVar22));
    }
    iVar21 = 0;
    FUN_1410f1df6(plVar22,0);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_14041e672(&local_98);
    plVar22 = param_1 + 0x53;
    lStack_78 = 0;
    local_70 = 0;
    local_98 = (longlong *)0x0;
    uStack_90 = (longlong *)0x0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_b9 = '\0';
    plVar12 = param_1 + 0x55;
    local_b8 = (uint *)&DAT_100000000;
    local_a8 = 0xffffffff;
    local_a0 = 0;
    local_b0 = plVar12;
    if ((int)param_1[0x58] != 0) {
      FUN_1449c0562(&local_b8);
      iVar21 = (int)param_1[0x58];
    }
    uStack_d0 = local_a8;
    lVar13 = uStack_d0;
    local_c8 = local_a0;
    local_c4 = local_9c;
    uStack_e0 = local_b8;
    local_d8 = local_b0;
    uStack_d0._4_4_ = (uint)((ulonglong)local_a8 >> 0x20);
    iVar3 = uStack_d0._4_4_;
    local_e8 = plVar22;
    if ((uStack_d0._4_4_ != iVar21) || (uStack_d0 = lVar13, local_b0 != plVar12)) {
      do {
        uStack_d0 = lVar13;
        lVar13 = *local_e8;
        puVar18 = *(uint **)(lVar13 + 0x10 + (longlong)iVar3 * 0x20);
        if ((puVar18 != (uint *)0x0) &&
           (local_b8 = puVar18, FUN_14042e430(&local_98,local_ec,&local_b8,&local_b9),
           local_b9 == '\0')) {
          FUN_143dc9e4e(&local_f8,*(undefined8 *)((longlong)iVar3 * 0x20 + 0x10 + lVar13));
        }
        uStack_d0 = CONCAT44(uStack_d0._4_4_,(uint)uStack_d0 & ~uStack_e0._4_4_);
        FUN_1449c0562(&uStack_e0);
        iVar3 = uStack_d0._4_4_;
        lVar13 = uStack_d0;
      } while (((uStack_d0._4_4_ != iVar21) || (local_d8 != plVar12)) || (local_e8 != plVar22));
    }
    FUN_14570f388(plVar22,0);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_14041e672(&local_98);
    plVar22 = local_80;
  }
  local_80 = plVar22;
  FUN_14042ef50(param_1);
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140594892 FUN_140594892 body=228 status=ok
// SIG undefined FUN_140594892(void)

longlong FUN_140594892(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb6cea8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145986188;
    local_38 = &LAB_14878d5d3;
    local_40 = FUN_146534b50;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigLevelSubType",&DAT_14cb6cea8,&DAT_14878d5d2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6cea8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140594978 FUN_140594978 body=40 status=ok
// SIG undefined FUN_140594978(void)

undefined8 FUN_140594978(undefined8 param_1,int param_2)

{
  FUN_1405949a0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1405949a0 FUN_1405949a0 body=304 status=ok
// SIG undefined FUN_1405949a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405949a0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  
  *param_1 = &PTR_FUN_14b413640;
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  plVar1 = param_1 + 9;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  if (*(int *)((longlong)param_1 + 0x54) < 0) {
    FUN_1446f8c06(plVar1,0);
  }
  if ((undefined2 *)*plVar1 != (undefined2 *)0x0) {
    *(undefined2 *)*plVar1 = 0;
  }
  FUN_140594ada(param_1,0);
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[0xc];
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
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar5 = (undefined8 *)param_1[1], puVar5 != (undefined8 *)0x0)) {
    if (puVar5[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar5 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar5;
                    /* WARNING: Could not recover jumptable at 0x000140594aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140594ad0 FUN_140594ad0 body=9 status=ok
// SIG undefined FUN_140594ad0(void)

void FUN_140594ad0(longlong param_1)

{
  FUN_140938480(param_1 + 0x10);
  return;
}



// FUNCTION 140594ada FUN_140594ada body=573 status=ok
// SIG undefined FUN_140594ada(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140594ada(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  
  local_48[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x90) != 0) {
    local_48[0] = 0;
    local_48[1] = 0;
    if (param_2 == (longlong *)0x0) {
      param_2 = local_48;
      FUN_140e93584(param_1);
    }
    lVar3 = param_2[1];
    if ((longlong)(int)lVar3 != 0) {
      lVar5 = *param_2;
      lVar4 = 0;
      do {
        *(undefined8 *)(*(longlong *)(lVar5 + lVar4) + 0x1b8) = 0;
        lVar4 = lVar4 + 8;
      } while ((longlong)(int)lVar3 * 8 != lVar4);
    }
    *(undefined4 *)(param_1 + 0xa0) = 0;
    if (*(int *)(param_1 + 0xa4) != 0) {
      FUN_140594e4c(param_1 + 0x98,0);
    }
    iVar1 = *(int *)(param_1 + 0x90);
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x88);
      lVar5 = 0;
      do {
        plVar2 = *(longlong **)(lVar3 + lVar5);
        if (plVar2 != (longlong *)0x0) {
          plVar2[0x1b] = (longlong)&DAT_14a171d50;
          *(undefined4 *)(plVar2 + 0x1e) = 0;
          if (*(int *)((longlong)plVar2 + 0xf4) != 0) {
            FUN_140115c12(plVar2 + 0x1d,0);
          }
          plVar2[0x1c] = 0;
          if (plVar2[0x1d] != 0) {
            FUN_1400020a8();
          }
          if (plVar2[0x18] != 0) {
            FUN_1400020a8();
          }
          plVar2[0xc] = (longlong)&DAT_14a171d50;
          *(undefined4 *)(plVar2 + 0xf) = 0;
          if (*(int *)((longlong)plVar2 + 0x7c) != 0) {
            FUN_140115c12(plVar2 + 0xe,0);
          }
          plVar2[0xd] = 0;
          if (plVar2[0xe] != 0) {
            FUN_1400020a8();
          }
          if (plVar2[8] != 0) {
            FUN_1400020a8();
          }
          if (plVar2[3] != 0) {
            FUN_1400020a8();
          }
          _DAT_14cb84dcc = _DAT_14cb84dcc + -1;
          *plVar2 = (longlong)DAT_14cb84dc0;
          DAT_14cb84dc0 = plVar2;
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
    *(undefined4 *)(param_1 + 0x90) = 0;
    if (*(int *)(param_1 + 0x94) != 0) {
      FUN_140594d18(param_1 + 0x88,0);
    }
    DAT_14cb84db8 = 1;
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48[2] ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140594d18 FUN_140594d18 body=307 status=ok
// SIG undefined FUN_140594d18(void)

void FUN_140594d18(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  if (param_2 != 0) {
    uVar3 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140594dac;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_140594dac:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
  }
  return;
}



// FUNCTION 140594e4c FUN_140594e4c body=307 status=ok
// SIG undefined FUN_140594e4c(void)

void FUN_140594e4c(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  if (param_2 != 0) {
    uVar3 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140594ee0;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_140594ee0:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
  }
  return;
}



// FUNCTION 140594f80 FUN_140594f80 body=118 status=ok
// SIG undefined FUN_140594f80(void)

float FUN_140594f80(longlong param_1)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  int local_3c;
  int local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))(*(longlong **)(param_1 + 0x30),local_38);
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))(*(longlong **)(param_1 + 0x30),local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return (float)local_38[0] / (float)local_3c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140594ff8 FUN_140594ff8 body=131 status=ok
// SIG undefined FUN_140594ff8(void)

undefined8 * FUN_140594ff8(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 == (longlong *)0x0) {
LAB_140595050:
    *param_2 = *(undefined8 *)(param_1 + 0x28);
  }
  else {
    iVar5 = (int)plVar2[1];
    do {
      if (iVar5 == 0) goto LAB_140595050;
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar8);
    plVar3 = *(longlong **)(param_1 + 0x18);
    if (plVar3 == (longlong *)0x0) {
      *param_2 = *(undefined8 *)(param_1 + 0x28);
    }
    else {
      uVar6 = (**(code **)(*plVar3 + 8))(plVar3);
      uVar7 = (**(code **)*plVar3)(plVar3);
      *(undefined4 *)param_2 = uVar7;
      *(undefined4 *)((longlong)param_2 + 4) = uVar6;
    }
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
  return param_2;
}



// FUNCTION 14059507c FUN_14059507c body=157 status=ok
// SIG undefined FUN_14059507c(void)

void FUN_14059507c(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x88 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x88) = param_2;
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
      puVar7 = puVar7 + 0x22;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14059511a FUN_14059511a body=39 status=ok
// SIG undefined FUN_14059511a(void)

void FUN_14059511a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140595142();
  FUN_14470ec92(uVar1,param_1,&DAT_14c9a8408,0);
  return;
}



// FUNCTION 140595142 FUN_140595142 body=57 status=ok
// SIG undefined FUN_140595142(void)

void FUN_140595142(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a54e0 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a54e0 = FUN_140002ddd(FUN_1462ad722,uVar1,L"GbxGraphParamRef");
  }
  return;
}



// FUNCTION 14059517c FUN_14059517c body=1930 status=ok
// SIG undefined FUN_14059517c(void)

undefined8 FUN_14059517c(longlong param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  char *_Str;
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
  char cVar16;
  int iVar17;
  longlong *plVar18;
  undefined8 uVar19;
  size_t sVar20;
  byte bVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  undefined8 *puVar25;
  ulonglong uVar26;
  uint uVar27;
  longlong lVar28;
  int iVar29;
  int iVar30;
  longlong *plVar31;
  char *pcVar32;
  longlong lVar33;
  undefined4 *puVar34;
  undefined8 *puVar35;
  ulonglong uVar36;
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  char *local_70;
  int local_68;
  undefined1 local_64;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((*(char *)(param_2 + 0x2b) == '\x01') && (*(longlong *)(param_2 + 0x30) != 0)) &&
     (*(int *)(param_2 + 0x44) == *(int *)(param_2 + 0x40))) {
    cVar16 = FUN_1448093f4(*(longlong *)(param_2 + 0x30),param_3);
    if (cVar16 != '\0') {
LAB_1405951c7:
      uVar19 = *(undefined8 *)(param_2 + 0x30);
      goto LAB_140595231;
    }
  }
  else {
    uVar19 = 0;
    FUN_144837e54(param_2,0);
    if (*(char *)(param_2 + 0x2b) != '\x01') goto LAB_140595231;
    if ((((*(byte **)(param_2 + 0x48) != (byte *)0x0) && ((**(byte **)(param_2 + 0x48) & 3) != 0))
        && ((plVar18 = (longlong *)FUN_140595908(param_1,*(undefined1 *)(param_2 + 0x2a)),
            plVar18 != (longlong *)0x0 &&
            ((plVar18 = (longlong *)(**(code **)(*plVar18 + 0x2d8))(plVar18,param_2), param_3 != 0
             && (*(int *)(param_3 + 0x38) <= (int)plVar18[7])))))) &&
       (*(longlong *)(plVar18[6] + (longlong)*(int *)(param_3 + 0x38) * 8) == param_3 + 0x30)) {
      if (*(longlong *)(param_2 + 0x30) == 0) {
        uVar19 = FUN_140595974((longlong)
                               (int)(-*(int *)((longlong)plVar18 + 0x5c) &
                                    ((int)plVar18[0xb] + *(int *)((longlong)plVar18 + 0x5c)) - 1U),0
                              );
        *(undefined8 *)(param_2 + 0x30) = uVar19;
      }
      else {
        (**(code **)(*plVar18 + 0x2f0))(plVar18,*(longlong *)(param_2 + 0x30),1);
        uVar19 = *(undefined8 *)(param_2 + 0x30);
      }
      (**(code **)(*plVar18 + 0x2e8))(plVar18,uVar19,1);
      FUN_1400f0d6e(param_1,param_2,1);
      FUN_1446e7478(param_2 + 0x48,*(undefined8 *)(param_2 + 0x30),plVar18,1);
      local_78 = DAT_14cb84ee8;
      local_80 = DAT_14cb84ee0;
      FUN_1448075d0(&local_70);
      pbVar2 = *(byte **)(param_2 + 0x48);
      if (pbVar2 != (byte *)0x0) {
        if ((*pbVar2 & 2) == 0) {
          plVar18 = &DAT_14c9a1288;
        }
        else {
          plVar18 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
        }
        if ((int)plVar18[2] != *(int *)((longlong)plVar18 + 0x3c)) {
          plVar31 = plVar18 + 8;
          if ((longlong *)plVar18[9] != (longlong *)0x0) {
            plVar31 = (longlong *)plVar18[9];
          }
          iVar23 = *(int *)((longlong)plVar31 +
                           (ulonglong)((int)plVar18[10] - 1U & (uint)local_70) * 4);
          if (iVar23 != -1) {
            do {
              lVar39 = *plVar18 + (longlong)iVar23 * 0x40;
              if (*(uint *)(*plVar18 + (longlong)iVar23 * 0x40) == (uint)local_70) {
                if ((((lVar39 != 0) &&
                     (puVar25 = (undefined8 *)(lVar39 + 0x28), puVar25 != (undefined8 *)0x0)) &&
                    ((byte *)*puVar25 != (byte *)0x0)) && ((*(byte *)*puVar25 & 0x40) == 0))
                goto LAB_140595354;
                break;
              }
              iVar23 = *(int *)(lVar39 + 0x38);
            } while (iVar23 != -1);
          }
        }
      }
      puVar25 = &DAT_14c9a1308;
LAB_140595354:
      pbVar2 = (byte *)*puVar25;
      puVar25 = &DAT_14c9a1270;
      if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 2) != 0)) {
        puVar25 = *(undefined8 **)(pbVar2 + 8);
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (*(int *)(puVar25 + 2) != 0) {
        local_90 = (longlong *)(param_1 + 0x430);
        puVar3 = *(undefined4 **)(*(longlong *)(param_2 + 0x30) + 8);
        puVar34 = &DAT_14c9485f0;
        if (puVar3 != (undefined4 *)0x0) {
          puVar34 = puVar3;
        }
        if (*(int *)(param_1 + 0x464) == 0) {
          iVar23 = *(int *)(param_1 + 0x438);
          *(int *)(param_1 + 0x438) = iVar23 + 1;
          if (*(int *)(param_1 + 0x43c) == iVar23) {
            FUN_1406cd6a8(local_90,iVar23);
          }
          iVar30 = *(int *)(param_1 + 0x458);
          if (iVar30 == 0) {
            iVar17 = -1;
          }
          else {
            iVar17 = iVar30 + 0x1e;
            if (-1 < iVar30 + -1) {
              iVar17 = iVar30 + -1;
            }
            iVar17 = iVar17 >> 5;
          }
          lVar28 = param_1 + 0x440;
          iVar24 = iVar30 + 1;
          iVar29 = iVar30 + 0x1f;
          if (-1 < iVar30) {
            iVar29 = iVar30;
          }
          if (iVar29 >> 5 == iVar17) {
            *(int *)(param_1 + 0x458) = iVar24;
          }
          else {
            if (*(int *)(param_1 + 0x45c) <= iVar30) {
              local_88 = puVar34;
              if (iVar30 + 0x20U < 0xa0) {
                iVar24 = 0x80;
                iVar17 = iVar30;
              }
              else {
                uVar22 = iVar30 + 0x20U >> 5;
                if (*(int *)(param_1 + 0x45c) + 0x1fU < 0xa0) {
                  uVar27 = 4;
                  if (4 < uVar22) {
                    uVar27 = uVar22;
                  }
                }
                else {
                  uVar27 = (uVar22 * 3 >> 3) + uVar22 + 0x10;
                }
                uVar26 = FUN_144a3809e(uVar27 << 2,0);
                iVar17 = (int)(uVar26 >> 2);
                iVar24 = -0x20;
                if ((int)uVar22 <= iVar17) {
                  iVar24 = iVar17 << 5;
                }
                iVar17 = *(int *)(param_1 + 0x458);
              }
              *(int *)(param_1 + 0x45c) = iVar24;
              FUN_1446efbd8(lVar28,iVar17);
              iVar24 = *(int *)(param_1 + 0x458) + 1;
              puVar34 = local_88;
            }
            iVar17 = iVar24 + 0x1f;
            if (-1 < iVar24) {
              iVar17 = iVar24;
            }
            *(int *)(param_1 + 0x458) = iVar24;
            if (iVar24 % 0x20 != 0) {
              lVar39 = *(longlong *)(param_1 + 0x450);
              if (*(longlong *)(param_1 + 0x450) == 0) {
                lVar39 = lVar28;
              }
              bVar21 = -(char)(iVar24 % 0x20);
              *(uint *)(lVar39 + (longlong)(iVar17 >> 5) * 4) =
                   (uint)(*(int *)(lVar39 + (longlong)(iVar17 >> 5) * 4) << (bVar21 & 0x1f)) >>
                   (bVar21 & 0x1f);
            }
          }
          lVar39 = (longlong)iVar23;
          if (*(longlong *)(param_1 + 0x450) != 0) {
            lVar28 = *(longlong *)(param_1 + 0x450);
          }
          bVar21 = (byte)iVar30 & 0x1f;
          puVar1 = (uint *)(lVar28 + (longlong)(iVar29 >> 5) * 4);
          *puVar1 = *puVar1 & (-2 << bVar21 | 0xfffffffeU >> 0x20 - bVar21);
        }
        else {
          iVar23 = *(int *)(param_1 + 0x460);
          lVar39 = (longlong)iVar23;
          iVar30 = *(int *)(*(longlong *)(param_1 + 0x430) + 4 + lVar39 * 0x40);
          *(int *)(param_1 + 0x460) = iVar30;
          iVar17 = *(int *)(param_1 + 0x464) + -1;
          *(int *)(param_1 + 0x464) = iVar17;
          if (iVar17 != 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x430) + (longlong)iVar30 * 0x40) = 0xffffffff;
          }
        }
        lVar28 = param_1 + 0x440;
        if (*(longlong *)(param_1 + 0x450) != 0) {
          lVar28 = *(longlong *)(param_1 + 0x450);
        }
        iVar30 = iVar23 + 0x1f;
        if (-1 < iVar23) {
          iVar30 = iVar23;
        }
        puVar1 = (uint *)(lVar28 + (longlong)(iVar30 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)iVar23 & 0x1f);
        iVar30 = 1;
        lVar28 = *(longlong *)(param_1 + 0x430);
        lVar39 = lVar39 * 0x40;
        puVar3 = (undefined4 *)(lVar39 + lVar28);
        FUN_1447a97f4(puVar3,puVar34);
        puVar35 = (undefined8 *)(lVar28 + 0x28 + lVar39);
        *puVar35 = 0;
        puVar35[1] = 0;
        *(undefined4 *)(lVar28 + 0x38 + lVar39) = 0xffffffff;
        uVar22 = *(uint *)(lVar28 + lVar39);
        uVar27 = *(int *)(param_1 + 0x438) - *(int *)(param_1 + 0x464);
        if ((uVar27 != 0) && (uVar27 != 1)) {
          lVar39 = param_1 + 0x468;
          if (*(longlong *)(param_1 + 0x470) != 0) {
            lVar39 = *(longlong *)(param_1 + 0x470);
          }
          iVar17 = *(int *)(lVar39 + (ulonglong)(*(int *)(param_1 + 0x478) - 1U & uVar22) * 4);
          if (iVar17 != -1) {
            do {
              puVar34 = (undefined4 *)(*local_90 + (longlong)iVar17 * 0x40);
              if (*(uint *)(*local_90 + (longlong)iVar17 * 0x40) == uVar22) {
                if (*(longlong *)(puVar34 + 10) != 0) {
                  FUN_1400020a8();
                }
                if (*(longlong *)(puVar34 + 6) != 0) {
                  FUN_1400020a8();
                }
                plVar18 = local_90;
                uVar4 = *puVar3;
                uVar5 = puVar3[1];
                uVar6 = puVar3[2];
                uVar7 = puVar3[3];
                uVar8 = puVar3[4];
                uVar9 = puVar3[5];
                uVar10 = puVar3[6];
                uVar11 = puVar3[7];
                uVar12 = puVar3[8];
                uVar13 = puVar3[9];
                uVar14 = puVar3[10];
                uVar15 = puVar3[0xb];
                *(undefined8 *)(puVar34 + 0xc) = *(undefined8 *)(puVar3 + 0xc);
                puVar34[8] = uVar12;
                puVar34[9] = uVar13;
                puVar34[10] = uVar14;
                puVar34[0xb] = uVar15;
                puVar34[4] = uVar8;
                puVar34[5] = uVar9;
                puVar34[6] = uVar10;
                puVar34[7] = uVar11;
                *puVar34 = uVar4;
                puVar34[1] = uVar5;
                puVar34[2] = uVar6;
                puVar34[3] = uVar7;
                FUN_1488e41ec(local_90,iVar23);
                iVar23 = iVar17;
                goto LAB_1405955bb;
              }
              iVar17 = puVar34[0xe];
            } while (iVar17 != -1);
          }
        }
        if (3 < uVar27) {
          uVar26 = (ulonglong)(uVar27 & 0xfffffffe) + 0xf;
          lVar39 = 0x3f;
          if (uVar26 != 0) {
            for (; uVar26 >> lVar39 == 0; lVar39 = lVar39 + -1) {
            }
          }
          iVar30 = 1 << ((byte)lVar39 & 0x1f);
        }
        if (((int)uVar27 < 1) || (iVar30 <= *(int *)(param_1 + 0x478))) {
          uVar22 = *(int *)(param_1 + 0x478) - 1U & uVar22;
          puVar3[0xf] = uVar22;
          lVar39 = *(longlong *)(param_1 + 0x470);
          if (*(longlong *)(param_1 + 0x470) == 0) {
            lVar39 = param_1 + 0x468;
          }
          puVar3[0xe] = *(undefined4 *)
                         (lVar39 + ((longlong)*(int *)(param_1 + 0x478) - 1U & (longlong)(int)uVar22
                                   ) * 4);
          lVar39 = *(longlong *)(param_1 + 0x470);
          if (*(longlong *)(param_1 + 0x470) == 0) {
            lVar39 = param_1 + 0x468;
          }
          *(int *)(lVar39 + ((longlong)*(int *)(param_1 + 0x478) - 1U & (longlong)(int)uVar22) * 4)
               = iVar23;
          plVar18 = local_90;
        }
        else {
          *(int *)(param_1 + 0x478) = iVar30;
          FUN_1405959fa(local_90);
          plVar18 = local_90;
        }
LAB_1405955bb:
        if ((longlong)*(int *)(puVar25 + 2) != 0) {
          lVar39 = *plVar18 + (longlong)iVar23 * 0x40;
          puVar35 = (undefined8 *)*puVar25;
          puVar25 = puVar35 + (longlong)*(int *)(puVar25 + 2) * 2;
          do {
            pbVar2 = (byte *)*puVar35;
            if (((pbVar2 == (byte *)0x0) || ((*pbVar2 & 3) != 1)) ||
               (_Str = *(char **)(pbVar2 + 8), _Str == (char *)0x0)) {
LAB_1405955f3:
              uVar26 = 0;
              uVar36 = 0;
            }
            else {
              sVar20 = strlen(_Str);
              iVar23 = (int)sVar20;
              if (iVar23 == 0) goto LAB_1405955f3;
              lVar28 = (longlong)iVar23;
              pcVar32 = _Str + lVar28 + -1;
              if (pcVar32 < _Str) {
                lVar38 = 0;
              }
              else {
                uVar22 = 0;
                do {
                  if (9 < (byte)(*pcVar32 - 0x30U)) break;
                  uVar22 = uVar22 + 1;
                  pcVar32 = pcVar32 + -1;
                } while (_Str <= pcVar32);
                if ((((uVar22 == 0) || (iVar23 <= (int)uVar22)) ||
                    ((10 < uVar22 ||
                     (lVar33 = -(ulonglong)uVar22, _Str[lVar33 + lVar28 + -1] != '_')))) ||
                   ((uVar22 != 1 && (_Str[lVar33 + lVar28] == '0')))) {
LAB_140595682:
                  lVar38 = 0;
                }
                else {
                  lVar37 = 0;
                  do {
                    lVar38 = (longlong)_Str[lVar33 + lVar28] + lVar37 * 10;
                    lVar37 = lVar38 + -0x30;
                    lVar33 = lVar33 + 1;
                  } while (lVar33 != 0);
                  if (0x7ffffffe < lVar37) goto LAB_140595682;
                  iVar23 = ~uVar22 + iVar23;
                  lVar38 = lVar38 + -0x2f;
                }
                if (iVar23 == 0) goto LAB_1405955f3;
              }
              local_64 = 0;
              local_70 = _Str;
              local_68 = iVar23;
              uVar22 = FUN_14001a6c0(&local_70,1);
              uVar36 = lVar38 << 0x20;
              uVar26 = (ulonglong)uVar22;
            }
            iVar23 = *(int *)(lVar39 + 0x30);
            *(uint *)(lVar39 + 0x30) = iVar23 + 1U;
            if (*(uint *)(lVar39 + 0x34) < iVar23 + 1U) {
              FUN_1446f84a2((longlong *)(lVar39 + 0x28),iVar23);
            }
            *(ulonglong *)(*(longlong *)(lVar39 + 0x28) + (longlong)iVar23 * 8) = uVar36 | uVar26;
            puVar35 = puVar35 + 2;
          } while (puVar35 != puVar25);
        }
      }
      *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_2 + 0x44);
      goto LAB_1405951c7;
    }
  }
  uVar19 = 0;
LAB_140595231:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar19;
}



// FUNCTION 140595908 FUN_140595908 body=107 status=ok
// SIG undefined FUN_140595908(void)

longlong FUN_140595908(longlong param_1,byte param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((-1 < (char)param_2) && ((int)(uint)param_2 < *(int *)(param_1 + 0x1e0))) &&
     (lVar1 = *(longlong *)(param_1 + 0x1d8), *(longlong *)(lVar1 + (ulonglong)param_2 * 8) != 0)) {
    lVar3 = FUN_140594892();
    lVar1 = *(longlong *)(lVar1 + (ulonglong)param_2 * 8);
    if (lVar1 != 0) {
      if (lVar3 == 0) {
        return 0;
      }
      lVar2 = *(longlong *)(lVar1 + 0x10);
      if (lVar2 == 0) {
        return 0;
      }
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
            lVar3 + 0x30) {
          return 0;
        }
        return lVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 140595974 FUN_140595974 body=134 status=ok
// SIG undefined FUN_140595974(void)

void FUN_140595974(undefined8 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  byte *pbVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar1 = (undefined4 *)(lVar5 + 0xc7c);
  uVar4 = *puVar1;
  pbVar2 = (byte *)(lVar5 + 0xc80);
  bVar3 = *pbVar2;
  if ((bVar3 & 1) != 0) {
    *pbVar2 = 0;
    *puVar1 = 1;
  }
  if (DAT_14c872d28 == (longlong *)0x0) {
    FUN_1460d69fa();
  }
  (**(code **)(*DAT_14c872d28 + 0x28))(DAT_14c872d28,param_1,param_2);
  if ((bVar3 & 1) != 0) {
    *puVar1 = uVar4;
    *pbVar2 = 1;
  }
  return;
}



// FUNCTION 1405959fa FUN_1405959fa body=539 status=ok
// SIG undefined FUN_1405959fa(void)

void FUN_1405959fa(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar8 = local_58 >> 0x20;
    }
    iVar4 = (int)local_58;
    uVar5 = (uint)local_48;
    iVar6 = local_48._4_4_;
    iVar9 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6 * 0x40;
        uVar13 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar11 + lVar10);
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x3c + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x38 + lVar10) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar12 = (int)local_50[3];
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar6 = iVar12 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_140595bd0;
          }
          iVar4 = iVar4 + (int)lVar10 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar12);
    }
  }
LAB_140595bd0:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140595c24 FUN_140595c24 body=45 status=ok
// SIG undefined FUN_140595c24(void)

undefined8 FUN_140595c24(undefined8 param_1,int param_2)

{
  FUN_140595c52();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1d0);
  }
  return param_1;
}



// FUNCTION 140595c52 FUN_140595c52 body=104 status=ok
// SIG undefined FUN_140595c52(void)

void FUN_140595c52(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a544a90;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_140595cba(param_1 + 0x22);
  *param_1 = &PTR_FUN_14a544ad0;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_140595d6e(param_1);
  return;
}



// FUNCTION 140595cba FUN_140595cba body=55 status=ok
// SIG undefined FUN_140595cba(void)

void FUN_140595cba(longlong *param_1)

{
  FUN_140595cf2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140595cf2 FUN_140595cf2 body=123 status=ok
// SIG undefined FUN_140595cf2(void)

void FUN_140595cf2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140240048(param_1,param_2);
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



// FUNCTION 140595d6e FUN_140595d6e body=392 status=ok
// SIG undefined FUN_140595d6e(void)

void FUN_140595d6e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a544b10;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(int *)((longlong)param_1 + 0xa4) != 0) {
    FUN_14472eb64(param_1 + 0x13,0);
  }
  param_1[0x19] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0xc4)) {
    *(undefined4 *)((longlong)param_1 + 0xc4) = 0x80;
    FUN_1446efbd8(param_1 + 0x15,0);
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_140595ef6(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
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
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140595ef6 FUN_140595ef6 body=49 status=ok
// SIG undefined FUN_140595ef6(void)

void FUN_140595ef6(longlong param_1,int param_2)

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



// FUNCTION 140595f28 FUN_140595f28 body=214 status=ok
// SIG undefined FUN_140595f28(void)

undefined8 FUN_140595f28(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c763a8c == '\x01') {
    if (*(longlong *)(param_1 + 0x140) == 0) {
      lVar1 = FUN_14001cc68(0x90,0x10);
      FUN_140596aa6(lVar1,0);
      *(longlong *)(param_1 + 0x140) = lVar1;
      local_28 = lVar1;
      FUN_140596b32(&local_28);
      FUN_1414f1d42(param_1,*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
      FUN_140596000(param_1);
      lVar1 = local_28;
      if (local_28 != 0) {
        FUN_14058c1a6(local_28);
        FUN_1400020a8(lVar1);
      }
      uVar2 = 1;
      goto LAB_140595f72;
    }
    FUN_1405964be(*(longlong *)(param_1 + 0x140),*(undefined4 *)(param_1 + 0x170),
                  *(undefined4 *)(param_1 + 0x174));
    FUN_140596000(param_1);
  }
  uVar2 = 0;
LAB_140595f72:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140596000 FUN_140596000 body=1213 status=ok
// SIG undefined FUN_140596000(void)

void FUN_140596000(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined1 local_69;
  undefined8 local_68;
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  undefined1 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_14059603e;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_140596043;
      goto LAB_14059606a;
    }
  }
  else {
LAB_14059603e:
    if (iVar7 != 0x10) {
LAB_14059606a:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar4 + 0xc60), iVar7 == 2))
        goto LAB_140596043;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_140596043;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_1405961c7;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_143ea3853);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          FUN_140217a48(puVar2);
          puVar11 = (uint *)*puVar2;
LAB_1405961c7:
          puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar16 + 0x17);
          uVar13 = puVar11[0x12];
          if (puVar15 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar3 = *puVar11;
            *puVar11 = *puVar11 + uVar13 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar13) != 0xffffffff) break;
            puVar11 = (uint *)*puVar2;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar2 = puVar11;
            puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar16 + 0x17);
            uVar13 = 0;
            if (puVar15 <= puVar11 + 0x4000) {
              uVar13 = 1;
              goto LAB_140596247;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_140596247:
        *(uint **)(puVar11 + 0x10) = puVar15;
        puVar11[0x12] = uVar13;
        iVar7 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14b456ab0;
        puVar16[0x15] = param_1;
        *(undefined1 *)(puVar16 + 0x16) = 1;
        uVar5 = (undefined4)local_68;
        *(undefined4 *)((longlong)puVar16 + 0xb1) = uVar5;
        *(undefined4 *)((longlong)puVar16 + 0xb4) = local_68._3_4_;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar13 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
            uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
            iVar7 = 0;
          }
          else {
            uVar17 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar17 = 5;
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
          uVar6 = 1;
          if ((char)uVar17 != '\x06') {
            uVar6 = uVar17;
          }
          uVar17 = uVar6;
          uVar12 = 0;
        }
        else {
          if ((char)uVar17 == '\x06') {
            uVar17 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar16[0xf] = uVar12;
        puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar7;
        if (puVar16 == (undefined8 *)0x0) {
          local_69 = 1;
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_69 = 1;
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
        local_78 = &local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14b456a90;
        local_38 = 1;
        local_68 = &LAB_143ea6552;
        local_40 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"DestroyViewRenderer",&DAT_14cb91374);
        if (local_68 != (undefined1 *)0x0) {
          pppuVar14 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar14 = &local_48;
          }
          (*(code *)(*pppuVar14)[2])();
        }
      }
      goto LAB_140596105;
    }
  }
LAB_140596043:
  *(undefined1 *)(param_1 + 0x16c) = 1;
LAB_140596105:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405964be FUN_1405964be body=1490 status=ok
// SIG undefined FUN_1405964be(void)

void FUN_1405964be(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_d8 [32];
  code **local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  code *local_70;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((*(char *)(param_1 + 0x34) != '\x01') || (*(char *)(param_1 + 0x70) != '\x06')) ||
     (lVar4 = *(longlong *)(param_1 + 0x68), lVar4 == 0)) goto LAB_140596664;
  if (DAT_14cb0b9a0 == 0) {
    local_80 = local_68;
    local_68[0] = FUN_1449e2820;
    local_70 = FUN_14081d0ea;
    local_78 = &LAB_146408884;
    local_88 = &LAB_147d719e1;
    local_90 = &LAB_140fb41fe;
    local_98 = L"Engine";
    local_a0 = 0;
    local_a8 = 0x10000000;
    local_b0 = 8;
    local_b8 = (code **)CONCAT44(local_b8._4_4_,0x168);
    FUN_14081cfa3(L"/Script/Engine",L"TextureRenderTarget2D",&DAT_14cb0b9a0,&DAT_147d719e0);
  }
  if (((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(DAT_14cb0b9a0 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cb0b9a0 + 0x38) * 8) != DAT_14cb0b9a0 + 0x30)) ||
     (cVar6 = FUN_140432338(lVar4), cVar6 == '\0')) goto LAB_140596664;
  FUN_143738fbe(lVar4,param_2,param_3);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = param_3;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_14059657d;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_140596582;
      goto LAB_1405965ca;
    }
  }
  else {
LAB_14059657d:
    if (iVar7 != 0x10) {
LAB_1405965ca:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar4 + 0xc60), iVar7 == 2))
        goto LAB_140596582;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_140596582;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_14059672b;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_143e79f2a);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          FUN_140217a48(puVar2);
          puVar11 = (uint *)*puVar2;
LAB_14059672b:
          puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x16);
          uVar13 = puVar11[0x12];
          if (puVar15 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar3 = *puVar11;
            *puVar11 = *puVar11 + uVar13 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar13) != 0xffffffff) break;
            puVar11 = (uint *)*puVar2;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar2 = puVar11;
            puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar17 + 0x16);
            uVar13 = 0;
            if (puVar15 <= puVar11 + 0x4000) {
              uVar13 = 1;
              goto LAB_1405967ab;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_1405967ab:
        *(uint **)(puVar11 + 0x10) = puVar15;
        puVar11[0x12] = uVar13;
        iVar7 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &DAT_14b43b900;
        puVar17[0x15] = param_1;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar13 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
            iVar7 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
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
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar16 != '\x06') {
            uVar5 = uVar16;
          }
          uVar16 = uVar5;
          uVar12 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar17[0xf] = uVar12;
        puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar7;
        if (puVar17 == (undefined8 *)0x0) {
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
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
        local_b8 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14b43b890;
        local_68[0] = (code *)&LAB_143e7a4a0;
        local_40 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"UpdateResizedViewRenderTargetTextureRHI",&DAT_14cb901b4);
        if (local_68[0] != (code *)0x0) {
          pppuVar14 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar14 = &local_48;
          }
          (*(code *)(*pppuVar14)[2])();
        }
      }
      goto LAB_140596664;
    }
  }
LAB_140596582:
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_d8);
  }
LAB_140596664:
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140596aa6 FUN_140596aa6 body=140 status=ok
// SIG undefined FUN_140596aa6(void)

undefined8 * FUN_140596aa6(undefined8 *param_1,char param_2)

{
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 1;
  *(undefined2 *)((longlong)param_1 + 0x34) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x61) = 0;
  *(undefined8 *)((longlong)param_1 + 0x69) = 0;
  FUN_140056680(param_1 + 0xf,L"Dummy Texture");
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[4] = &DAT_100000001;
  if (param_2 != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x34) = 1;
    if (DAT_14ca84e40 == 0) {
      param_1[4] = &DAT_100000001;
    }
    FUN_143e78516(param_1,0,0);
  }
  return param_1;
}



// FUNCTION 140596b32 FUN_140596b32 body=151 status=ok
// SIG undefined FUN_140596b32(void)

undefined8 FUN_140596b32(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [44];
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_1;
  FUN_140596bca();
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb8fbf8);
  FUN_140596c36(&DAT_14cb8fba8,local_1c,param_1,0);
  if (DAT_14cb8fb98 != (longlong *)0x0 && DAT_14cb8fba0 != 0) {
    (**(code **)(*DAT_14cb8fb98 + 0x60))(DAT_14cb8fb98,uVar1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb8fbf8);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140596bca FUN_140596bca body=108 status=ok
// SIG undefined FUN_140596bca(void)

undefined8 * FUN_140596bca(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8fc20) {
    FUN_144b3d300(&DAT_14cb8fc20);
    if (DAT_14cb8fc20 == -1) {
      FUN_145722944(&DAT_14cb8fb98);
      atexit((_func_5014 *)&LAB_143e79642);
      _Init_thread_footer(&DAT_14cb8fc20);
    }
  }
  return &DAT_14cb8fb98;
}



// FUNCTION 140596c36 FUN_140596c36 body=899 status=ok
// SIG undefined FUN_140596c36(void)

int * FUN_140596c36(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  char cVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  longlong *plVar17;
  int iVar18;
  int iVar19;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar16 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar16 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar16) {
      FUN_1446efaca(param_1,iVar16);
    }
    iVar19 = (int)param_1[5];
    if (iVar19 == 0) {
      iVar15 = -1;
    }
    else {
      iVar15 = iVar19 + 0x1e;
      if (-1 < iVar19 + -1) {
        iVar15 = iVar19 + -1;
      }
      iVar15 = iVar15 >> 5;
    }
    plVar13 = param_1 + 2;
    iVar12 = iVar19 + 1;
    iVar18 = iVar19 + 0x1f;
    if (-1 < iVar19) {
      iVar18 = iVar19;
    }
    if (iVar18 >> 5 == iVar15) {
      *(int *)(param_1 + 5) = iVar12;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar19) {
        if (iVar19 + 0x20U < 0xa0) {
          iVar12 = 0x80;
          iVar15 = iVar19;
        }
        else {
          uVar11 = iVar19 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar6 = 4;
            if (4 < uVar11) {
              uVar6 = uVar11;
            }
          }
          else {
            uVar6 = (uVar11 * 3 >> 3) + uVar11 + 0x10;
          }
          uVar14 = FUN_144a3809e(uVar6 << 2,0);
          iVar15 = (int)(uVar14 >> 2);
          iVar12 = -0x20;
          if ((int)uVar11 <= iVar15) {
            iVar12 = iVar15 << 5;
          }
          iVar15 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar12;
        FUN_1446efbd8(plVar13,iVar15);
        iVar12 = (int)param_1[5] + 1;
      }
      iVar15 = iVar12 + 0x1f;
      if (-1 < iVar12) {
        iVar15 = iVar12;
      }
      *(int *)(param_1 + 5) = iVar12;
      if (iVar12 % 0x20 != 0) {
        plVar17 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar17 = plVar13;
        }
        bVar10 = -(char)(iVar12 % 0x20);
        *(uint *)((longlong)plVar17 + (longlong)(iVar15 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar17 + (longlong)(iVar15 >> 5) * 4) << (bVar10 & 0x1f)) >>
             (bVar10 & 0x1f);
      }
    }
    lVar7 = (longlong)iVar16;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[4];
    }
    bVar10 = (byte)iVar19 & 0x1f;
    puVar1 = (uint *)((longlong)plVar13 + (longlong)(iVar18 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar10 | 0xfffffffeU >> 0x20 - bVar10);
  }
  else {
    iVar16 = (int)param_1[6];
    lVar7 = (longlong)iVar16;
    iVar19 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar19;
    iVar15 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar15;
    if (iVar15 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar19 * 0x10) = 0xffffffff;
    }
  }
  plVar13 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar13 = (longlong *)param_1[4];
  }
  iVar19 = iVar16 + 0x1f;
  if (-1 < iVar16) {
    iVar19 = iVar16;
  }
  puVar1 = (uint *)((longlong)plVar13 + (longlong)(iVar19 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar16 & 0x1f);
  lVar4 = *param_1;
  lVar7 = lVar7 * 0x10;
  puVar2 = (undefined8 *)(lVar4 + lVar7);
  *(undefined8 *)(lVar4 + lVar7) = *param_3;
  *param_3 = 0;
  *(undefined4 *)(lVar4 + 8 + lVar7) = 0xffffffff;
  uVar14 = *(ulonglong *)(lVar4 + lVar7);
  uVar11 = ((uint)(uVar14 >> 0x14) & 0xffff ^ (uint)(uVar14 >> 4)) * -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  uVar11 = uVar11 >> 0x10 ^ uVar11;
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar13 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[8];
    }
    iVar19 = *(int *)((longlong)plVar13 + (ulonglong)((int)param_1[9] - 1U & uVar11) * 4);
    if (iVar19 != -1) {
      do {
        puVar3 = (undefined8 *)(*param_1 + (longlong)iVar19 * 0x10);
        uVar5 = *(ulonglong *)(*param_1 + (longlong)iVar19 * 0x10);
        if (uVar5 == uVar14) {
          uVar8 = 0;
          if (uVar14 != 0) {
            FUN_14058c1a6(uVar5);
            FUN_1400020a8(uVar5);
            uVar8 = *puVar2;
          }
          *puVar3 = uVar8;
          FUN_14058c11e(param_1,iVar16,1);
          cVar9 = '\x01';
          goto LAB_140596d5c;
        }
        iVar19 = *(int *)(puVar3 + 1);
      } while (iVar19 != -1);
    }
  }
  cVar9 = '\0';
  iVar19 = iVar16;
LAB_140596d5c:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar9;
  }
  if (cVar9 == '\0') {
    uVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar6 < 4) {
      iVar16 = 1;
    }
    else {
      uVar14 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar16 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar16 <= (int)param_1[9])) {
      uVar11 = (int)param_1[9] - 1U & uVar11;
      *(uint *)((longlong)puVar2 + 0xc) = uVar11;
      plVar13 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar13 = param_1 + 7;
      }
      *(undefined4 *)(puVar2 + 1) =
           *(undefined4 *)
            ((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
      plVar13 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar13 = param_1 + 7;
      }
      *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
           iVar19;
    }
    else {
      *(int *)(param_1 + 9) = iVar16;
      FUN_140596fba(param_1);
    }
  }
  *param_2 = iVar19;
  return param_2;
}



// FUNCTION 140596fba FUN_140596fba body=590 status=ok
// SIG undefined FUN_140596fba(void)

void FUN_140596fba(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar8 = local_58 >> 0x20;
    }
    iVar4 = (int)local_58;
    uVar5 = (uint)local_48;
    iVar6 = local_48._4_4_;
    iVar9 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6 * 0x10;
        uVar3 = ((uint)(*(ulonglong *)(lVar11 + lVar10) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar11 + lVar10) >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar13 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0xc + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 8 + lVar10) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar12 = (int)local_50[3];
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar6 = iVar12 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_1405971c3;
          }
          iVar4 = iVar4 + (int)lVar10 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar12);
    }
  }
LAB_1405971c3:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14059720e FUN_14059720e body=113 status=ok
// SIG undefined FUN_14059720e(void)

void FUN_14059720e(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  (**(code **)(*param_2 + 0x90))
            (param_2,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60),0,0);
  iVar1 = *(int *)(param_1 + 0x88);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x80);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (lVar3 != 0) {
        FUN_140597280(lVar3,param_2);
      }
      lVar4 = lVar4 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar4);
  }
  return;
}



// FUNCTION 140597280 FUN_140597280 body=115 status=ok
// SIG undefined FUN_140597280(void)

void FUN_140597280(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  (**(code **)(*param_2 + 0x90))
            (param_2,*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68),0,0);
  iVar1 = *(int *)(param_1 + 0x90);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x88);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (lVar3 != 0) {
        FUN_140597280(lVar3,param_2);
      }
      lVar4 = lVar4 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar4);
  }
  return;
}



// FUNCTION 1405972f4 FUN_1405972f4 body=103 status=ok
// SIG undefined FUN_1405972f4(void)

ulonglong FUN_1405972f4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14059733e:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14059733e;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 14059735c FUN_14059735c body=689 status=ok
// SIG undefined FUN_14059735c(void)

void FUN_14059735c(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  
  iVar3 = *(int *)(param_1 + 0x1ba8);
  if (iVar3 == 0) {
    uVar14 = 1;
    uVar16 = 0;
    iVar6 = 0;
    iVar13 = 0;
  }
  else {
    puVar7 = *(uint **)(param_1 + 0x1ba0);
    if (*(uint **)(param_1 + 0x1ba0) == (uint *)0x0) {
      puVar7 = (uint *)(param_1 + 0x1b98);
    }
    uVar11 = *puVar7;
    if (uVar11 == 0) {
      iVar6 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar6 = iVar3 + -1;
      }
      uVar16 = 0;
      uVar14 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar14 = uVar16;
      }
      iVar13 = 0;
      do {
        if (uVar14 == uVar16) {
          return;
        }
        iVar13 = iVar13 + 0x20;
        uVar11 = puVar7[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar16 = 0;
      iVar13 = 0;
    }
    uVar14 = (ulonglong)(-uVar11 & uVar11);
    uVar2 = uVar14 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar6 = (iVar13 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar6) {
      iVar6 = iVar3;
    }
  }
  if (iVar6 != iVar3) {
    uVar11 = 0xffffffff;
    do {
      lVar15 = *(longlong *)(param_1 + 0x1b88);
      if (*(longlong *)(param_1 + 0x1b88) == 0) {
        lVar15 = param_1 + 0x1b28;
      }
      lVar15 = *(longlong *)(lVar15 + 8 + (longlong)iVar6 * 0x18);
      if (((lVar15 != 0) && (*param_2 == *(longlong *)(lVar15 + 0xa00))) &&
         (puVar1 = (undefined8 *)(lVar15 + 0x9f0), puVar1 != (undefined8 *)(param_3 + 0x130))) {
        iVar6 = *(int *)(param_3 + 0x138);
        uVar5 = *(undefined8 *)(param_3 + 0x130);
        *(int *)(lVar15 + 0x9f8) = iVar6;
        if (iVar6 == 0 && *(int *)(lVar15 + 0x9fc) == 0) {
          *(undefined4 *)(lVar15 + 0x9fc) = 0;
        }
        else {
          FUN_144723f1e(puVar1,iVar6);
          FUN_144723ff3(*puVar1,uVar5,iVar6);
        }
      }
      uVar11 = uVar11 & ~(uint)uVar14;
      puVar7 = *(uint **)(param_1 + 0x1ba0);
      if (*(uint **)(param_1 + 0x1ba0) == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x1b98);
      }
      iVar4 = *(int *)(param_1 + 0x1ba8);
      iVar6 = (int)uVar16;
      lVar15 = (longlong)iVar6;
      uVar10 = puVar7[lVar15] & uVar11;
      if (uVar10 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar6) {
          iVar9 = iVar6;
        }
        if (iVar6 < iVar8) {
          lVar12 = 0;
          do {
            uVar10 = puVar7[lVar15 + lVar12 + 1];
            if (uVar10 != 0) {
              uVar16 = (ulonglong)(iVar6 + (int)lVar12 + 1);
              uVar11 = 0xffffffff;
              goto LAB_140597531;
            }
            iVar13 = iVar13 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar9 - lVar15 != lVar12);
          uVar11 = 0xffffffff;
          iVar6 = iVar9;
        }
        uVar16 = (ulonglong)(iVar6 + 1);
        iVar6 = iVar4;
      }
      else {
LAB_140597531:
        uVar14 = (ulonglong)(-uVar10 & uVar10);
        uVar2 = uVar14 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar6 = (iVar13 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar6) {
          iVar6 = iVar4;
        }
      }
    } while (iVar6 != iVar3);
  }
  return;
}



// FUNCTION 14059760d FUN_14059760d body=2702 status=ok
// SIG undefined FUN_14059760d(void)

void FUN_14059760d(longlong param_1,longlong param_2,longlong param_3,int param_4,longlong param_5,
                  int *param_6,undefined4 param_7,longlong param_8,longlong *param_9,
                  undefined4 param_10,longlong param_11)

{
  ulonglong *puVar1;
  uint *puVar2;
  byte bVar3;
  undefined1 uVar4;
  ushort uVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  int iVar14;
  float *pfVar15;
  uint uVar16;
  undefined8 *puVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  bool bVar25;
  float fVar26;
  undefined4 uVar27;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  ulonglong *local_140;
  ulonglong local_138;
  undefined1 local_129;
  undefined8 *local_128;
  longlong lStack_120;
  undefined *local_118;
  undefined1 local_98 [56];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_138 = (ulonglong)*(byte *)(param_3 + 0x11a08);
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar17 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar12 = puVar17 + 0x3c;
  if (*(undefined8 **)(param_1 + 0x78) < puVar12) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar17 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar12 = puVar17 + 0x3c;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar12;
  *puVar17 = &PTR_FUN_14a328cb8;
  puVar17[2] = 0;
  *(undefined1 *)(puVar17 + 3) = 1;
  puVar17[4] = 0;
  *(undefined1 *)(puVar17 + 5) = 1;
  puVar17[6] = 0;
  *(undefined1 *)(puVar17 + 7) = 1;
  puVar17[8] = 0;
  *(undefined1 *)(puVar17 + 9) = 1;
  puVar17[10] = 0;
  *(undefined1 *)(puVar17 + 0xb) = 1;
  puVar17[0xc] = 0;
  *(undefined1 *)(puVar17 + 0xd) = 1;
  puVar17[0xe] = 0;
  *(undefined1 *)(puVar17 + 0xf) = 1;
  puVar17[0x14] = 0;
  *(undefined1 *)(puVar17 + 0x15) = 1;
  puVar17[0x16] = 0;
  puVar17[0x22] = 0;
  puVar17[0x23] = 0x3f80000000000000;
  puVar17[0x24] = 0;
  puVar17[0x25] = 0x3f80000000000000;
  puVar17[0x26] = 0;
  puVar17[0x27] = 0x3f80000000000000;
  puVar17[0x28] = 0;
  puVar17[0x29] = 0x3f80000000000000;
  puVar17[0x33] = 0;
  puVar17[0x34] = 0;
  puVar17[0x39] = 0;
  puVar17[0x37] = 0;
  puVar17[0x38] = 0;
  *(undefined4 *)(puVar17 + 0x3a) = 4;
  puVar17[0x3b] = 0;
  iVar8 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar8 + 1U;
  local_140 = puVar1;
  if (*(uint *)(param_1 + 0xa4) < iVar8 + 1U) {
    FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar8);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar8 * 8) = puVar17;
  if (*(int *)(param_5 + 0x1f0) == 0) {
    uVar22 = 0;
  }
  else {
    iVar8 = *(int *)(param_5 + 0x1f0) + -1;
    if (param_4 < iVar8) {
      iVar8 = param_4;
    }
    uVar22 = *(undefined8 *)(*(longlong *)(param_5 + 0x1e8) + (longlong)iVar8 * 8);
  }
  FUN_144938434();
  cVar7 = DAT_14ca642d9;
  if (DAT_14ca642d9 == '\x03') {
    cVar7 = '\x02';
  }
  puVar17[2] = uVar22;
  *(char *)(puVar17 + 3) = cVar7;
  uVar22 = *(undefined8 *)(param_2 + 0x198);
  lVar9 = FUN_14482e3b2();
  cVar7 = *(char *)(lVar9 + 0x41);
  if (cVar7 == '\x03') {
    cVar7 = '\x02';
  }
  puVar17[4] = uVar22;
  *(char *)(puVar17 + 5) = cVar7;
  lVar9 = FUN_1447e4f80();
  cVar7 = *(char *)(lVar9 + 0x41);
  if (*(char *)(lVar9 + 0x41) == '\x03') {
    cVar7 = '\x02';
  }
  puVar17[0xc] = *(undefined8 *)(param_3 + 0x18);
  *(char *)(puVar17 + 0xd) = cVar7;
  uVar22 = *(undefined8 *)(param_6 + 2);
  puVar17[0x10] = *(undefined8 *)param_6;
  puVar17[0x11] = uVar22;
  fVar26 = sinf((float)*(int *)(DAT_14ca66eb8 + 4) * 0.017453292 * 0.5);
  *(float *)(puVar17 + 0x12) = fVar26;
  *(undefined4 *)((longlong)puVar17 + 0x94) = param_7;
  *(uint *)(puVar17 + 0x13) = (uint)*(byte *)(param_5 + 0x205);
  uVar22 = *(undefined8 *)(param_3 + 0x118d0);
  lVar9 = FUN_144a2c9be();
  cVar7 = *(char *)(lVar9 + 0x41);
  if (cVar7 == '\x03') {
    cVar7 = '\x02';
  }
  puVar17[10] = uVar22;
  *(char *)(puVar17 + 0xb) = cVar7;
  if (param_11 != 0) {
    puVar17[0x38] = *(undefined8 *)(param_11 + 0x10);
    puVar17[0x39] = *(undefined8 *)(param_11 + 8);
    *(undefined4 *)(puVar17 + 0x3a) = 4;
  }
  if ((int)local_138 != 0) {
    uVar22 = *(undefined8 *)(param_3 + 0x11a00);
    lVar9 = FUN_144a81af4();
    cVar7 = *(char *)(lVar9 + 0x41);
    if (*(char *)(lVar9 + 0x41) == '\x03') {
      cVar7 = '\x02';
    }
    puVar17[6] = uVar22;
    *(char *)(puVar17 + 7) = cVar7;
    uVar22 = *(undefined8 *)(param_3 + 0x11c90);
    lVar9 = FUN_1414708b2();
    cVar7 = *(char *)(lVar9 + 0x41);
    if (cVar7 == '\x03') {
      cVar7 = '\x02';
    }
    puVar17[8] = uVar22;
    *(char *)(puVar17 + 9) = cVar7;
  }
  FUN_1448a862c(local_98);
  FUN_14019e00e(&local_128,local_98,0,1);
  lVar9 = FUN_1448a8484();
  puVar12 = local_128;
  cVar7 = '\x02';
  if (*(char *)(lVar9 + 0x41) != '\x03') {
    cVar7 = *(char *)(lVar9 + 0x41);
  }
  puVar17[0xe] = local_128;
  *(char *)(puVar17 + 0xf) = cVar7;
  if (local_128 != (undefined8 *)0x0) {
    LOCK();
    puVar2 = (uint *)(local_128 + 1);
    uVar16 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar16 & 0x3fffffff) == 1) {
      puVar2 = (uint *)(local_128 + 1);
      LOCK();
      uVar16 = *puVar2;
      *puVar2 = *puVar2 | 0x40000000;
      UNLOCK();
      if ((uVar16 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)((longlong)local_128 + 0xd);
        plVar10 = (longlong *)FUN_14001cc68(0x10,8);
        plVar10[1] = (longlong)puVar12;
        plVar13 = DAT_14ca843c0;
        plVar11 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar10 = (longlong)plVar13;
            LOCK();
            bVar25 = plVar13 != DAT_14ca843c0;
            plVar11 = plVar10;
            if (bVar25) {
              plVar13 = DAT_14ca843c0;
              plVar11 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar11;
            UNLOCK();
          } while (bVar25);
        }
        else {
          do {
            *plVar10 = (longlong)plVar11;
            LOCK();
            bVar25 = plVar11 != DAT_14ca843c8;
            plVar13 = plVar10;
            if (bVar25) {
              plVar11 = DAT_14ca843c8;
              plVar13 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar13;
            UNLOCK();
          } while (bVar25);
        }
      }
    }
  }
  if (param_9 == (longlong *)0x0) {
    uVar22 = *(undefined8 *)(param_3 + 0x13780);
    lVar9 = FUN_144a12b9e();
    puVar1 = local_140;
    cVar7 = '\x02';
    if (*(char *)(lVar9 + 0x41) != '\x03') {
      cVar7 = *(char *)(lVar9 + 0x41);
    }
    puVar17[0x14] = uVar22;
    *(char *)(puVar17 + 0x15) = cVar7;
    uVar4 = *(undefined1 *)(param_8 + 0x94);
    puVar24 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar24 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar12) {
      FUN_140023dd8(local_140,0x50);
      puVar24 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar12 = puVar24 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar12;
    puVar24[1] = *(undefined8 *)(param_8 + 8);
    puVar24[2] = 0;
    *(undefined1 *)(puVar24 + 3) = 0;
    *(undefined8 *)((longlong)puVar24 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar24 + 5) = 0;
    *puVar24 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar24 + 6) = uVar4;
    *(undefined1 *)(puVar24 + 7) = 0;
    *(undefined4 *)((longlong)puVar24 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar24 + 0x35) = 0;
    puVar24[8] = param_8;
    iVar8 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar8 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar8 + 1U) {
      FUN_1447568fc(param_1 + 0x198,iVar8);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar8 * 8) = puVar24;
    *(int *)((longlong)puVar24 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar17[0x16] = puVar24;
    puVar17[0x3b] = *(undefined8 *)(param_5 + 0x198);
    lVar9 = 0x8c;
    bVar25 = false;
  }
  else {
    lVar6 = param_9[0x3d];
    bVar25 = (char)lVar6 == '\0';
    (**(code **)(*param_9 + 0x78))(param_9,&local_128,0);
    if (*(longlong **)(param_3 + 0x30d8) == (longlong *)0x0) {
      uVar27 = 0;
    }
    else {
      uVar27 = (**(code **)(**(longlong **)(param_3 + 0x30d8) + 0x88))();
    }
    FUN_144b21414(&local_128,param_3 + 0x500,uVar27,puVar17 + 0x18);
    puVar1 = local_140;
    *(undefined4 *)(puVar17 + 0x32) = param_10;
    uVar4 = *(undefined1 *)(param_8 + 0x94);
    puVar24 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar24 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar12) {
      FUN_140023dd8(local_140,0x50);
      puVar24 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar12 = puVar24 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar12;
    puVar24[1] = *(undefined8 *)(param_8 + 8);
    puVar24[2] = 0;
    *(undefined1 *)(puVar24 + 3) = 0;
    *(undefined8 *)((longlong)puVar24 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar24 + 5) = 0;
    *puVar24 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar24 + 6) = uVar4;
    *(undefined1 *)(puVar24 + 7) = 0;
    *(undefined4 *)((longlong)puVar24 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar24 + 0x35) = 0;
    puVar24[8] = param_8;
    iVar8 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar8 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar8 + 1U) {
      FUN_1447568fc(param_1 + 0x198,iVar8);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar8 * 8) = puVar24;
    *(int *)((longlong)puVar24 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar17[0x33] = puVar24;
    puVar17[0x3b] = *(undefined8 *)(param_5 + 0x198);
    lVar9 = 0x8c;
    if ((char)lVar6 == '\0') {
      lVar9 = 0xa4;
    }
  }
  puVar17 = puVar17 + 2;
  iVar8 = *(int *)(param_5 + lVar9);
  iVar14 = 0;
  do {
    iVar19 = (uint)(iVar14 == 0) << 2;
    if (iVar14 == 1) {
      iVar19 = 2;
    }
    if (iVar14 == 2) {
      iVar19 = -1;
    }
    if (iVar8 == iVar19) goto LAB_140597bf3;
    iVar14 = iVar14 + 1;
  } while (iVar14 != 3);
  iVar8 = -1;
LAB_140597bf3:
  pfVar15 = (float *)(param_5 + 0xa8);
  if (bVar25 == false) {
    pfVar15 = (float *)(param_5 + 0x90);
  }
  uVar16 = *(uint *)(DAT_14ca66ed0 + 4);
  uVar20 = 2;
  uVar18 = 2;
  if (uVar16 < 2) {
    uVar18 = uVar16;
  }
  if ((int)uVar16 < 0) {
    uVar18 = (uint)*(byte *)(param_3 + 0x2db1);
  }
  uVar22 = *(undefined8 *)(param_3 + 0x13818);
  if (iVar8 != -1) {
    uVar20 = (uint)(iVar8 == 2);
  }
  uVar16 = ((uint)(param_11 != 0) * 2 + (uVar18 * 3 + uVar20) * 4 | (uint)(0.0 < *pfVar15)) * 0x10 +
           (int)local_138 * 4 + (uint)(param_9 == (longlong *)0x0) * 2;
  FUN_14159e15e();
  FUN_1448e935e(uVar22,&local_128,&DAT_14ca66f70,uVar16 | bVar25);
  FUN_14159e15e();
  lVar9 = lStack_120;
  puVar12 = local_128;
  FUN_14159e280();
  local_128 = (undefined8 *)0x0;
  lStack_120 = 0;
  FUN_1448f70da(puVar12,&DAT_14ca68860,puVar17,&local_128);
  FUN_14159e280();
  if (param_11 == 0) {
    iVar8 = (param_6[3] - param_6[1]) + 7;
    iVar14 = (param_6[3] - param_6[1]) + 0xe;
    if (-1 < iVar8) {
      iVar14 = iVar8;
    }
    iVar8 = (param_6[2] - *param_6) + 7;
    iVar19 = (param_6[2] - *param_6) + 0xe;
    if (-1 < iVar8) {
      iVar19 = iVar8;
    }
    FUN_14159e280();
    local_128 = (undefined8 *)0x0;
    lStack_120 = 0;
    FUN_1448f70da(puVar12,&DAT_14ca68860,puVar17);
    FUN_140069376(param_1);
    puVar1 = local_140;
    uVar21 = 2;
    if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
       ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
      uVar21 = 4;
    }
    puVar23 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar24 = puVar23 + 0x3d;
    if (*(undefined8 **)(param_1 + 0x78) < puVar24) {
      local_138 = CONCAT62(local_138._2_6_,(short)uVar21);
      FUN_140023dd8(local_140,0x1f0);
      uVar21 = local_138 & 0xffff;
      puVar23 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar24 = puVar23 + 0x3d;
    }
    *local_140 = (ulonglong)puVar24;
    lStack_120 = DAT_14ca688a8;
    if (DAT_14ca688a8 != 0) {
      LOCK();
      *(int *)(DAT_14ca688a8 + 8) = *(int *)(DAT_14ca688a8 + 8) + 1;
      UNLOCK();
    }
    local_118 = &DAT_14ca68860;
    local_148 = 2;
    local_128 = puVar17;
    FUN_140068f1a(puVar23,&local_129,&local_128,uVar21);
    *puVar23 = &PTR_FUN_14a328ce0;
    puVar23[0x37] = &DAT_14ca68860;
    puVar23[0x38] = puVar17;
    puVar23[0x39] = puVar12;
    puVar23[0x3a] = lVar9;
    *(int *)(puVar23 + 0x3b) = iVar19 >> 3;
    *(int *)((longlong)puVar23 + 0x1dc) = iVar14 >> 3;
    *(undefined4 *)(puVar23 + 0x3c) = 1;
  }
  else {
    FUN_14159e280();
    FUN_140069376(param_1);
    puVar1 = local_140;
    uVar5 = (ushort)(uVar16 >> 0x10);
    uVar27 = (undefined4)CONCAT62((uint6)uVar5,2);
    if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
       ((DAT_14c760ddc == 2 && ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))))) {
      uVar27 = CONCAT22(uVar5,4);
    }
    puVar23 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar24 = puVar23 + 0x3a;
    if (*(undefined8 **)(param_1 + 0x78) < puVar24) {
      FUN_140023dd8(local_140,0x1d8);
      puVar23 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar24 = puVar23 + 0x3a;
    }
    *local_140 = (ulonglong)puVar24;
    lStack_120 = DAT_14ca688a8;
    if (DAT_14ca688a8 != 0) {
      LOCK();
      *(int *)(DAT_14ca688a8 + 8) = *(int *)(DAT_14ca688a8 + 8) + 1;
      UNLOCK();
    }
    local_118 = &DAT_14ca68860;
    local_148 = 2;
    local_128 = puVar17;
    FUN_140068f1a(puVar23,&local_129,&local_128,uVar27);
    *puVar23 = &PTR_FUN_14a328cc0;
    puVar23[0x37] = puVar17;
    puVar23[0x38] = puVar12;
    puVar23[0x39] = lVar9;
  }
  iVar8 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar8 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar8 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar8);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar8 * 8) = puVar23;
  *(int *)((longlong)puVar23 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar23);
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14059809c FUN_14059809c body=226 status=ok
// SIG undefined FUN_14059809c(void)

void FUN_14059809c(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_14059817e(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 14059817e FUN_14059817e body=1324 status=ok
// SIG undefined FUN_14059817e(void)

void FUN_14059817e(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405986ac FUN_1405986ac body=226 status=ok
// SIG undefined FUN_1405986ac(void)

void FUN_1405986ac(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_14059878e(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 14059878e FUN_14059878e body=1324 status=ok
// SIG undefined FUN_14059878e(void)

void FUN_14059878e(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140598cbc FUN_140598cbc body=226 status=ok
// SIG undefined FUN_140598cbc(void)

void FUN_140598cbc(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_140598d9e(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 140598d9e FUN_140598d9e body=1324 status=ok
// SIG undefined FUN_140598d9e(void)

void FUN_140598d9e(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405992cc FUN_1405992cc body=226 status=ok
// SIG undefined FUN_1405992cc(void)

void FUN_1405992cc(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_1405993ae(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 1405993ae FUN_1405993ae body=1324 status=ok
// SIG undefined FUN_1405993ae(void)

void FUN_1405993ae(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405998dc FUN_1405998dc body=226 status=ok
// SIG undefined FUN_1405998dc(void)

void FUN_1405998dc(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_1405999be(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 1405999be FUN_1405999be body=1324 status=ok
// SIG undefined FUN_1405999be(void)

void FUN_1405999be(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140599eec FUN_140599eec body=226 status=ok
// SIG undefined FUN_140599eec(void)

void FUN_140599eec(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_140599fce(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 140599fce FUN_140599fce body=1324 status=ok
// SIG undefined FUN_140599fce(void)

void FUN_140599fce(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14059a4fc FUN_14059a4fc body=226 status=ok
// SIG undefined FUN_14059a4fc(void)

void FUN_14059a4fc(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_14059a5de(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 14059a5de FUN_14059a5de body=1324 status=ok
// SIG undefined FUN_14059a5de(void)

void FUN_14059a5de(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14059ab0c FUN_14059ab0c body=226 status=ok
// SIG undefined FUN_14059ab0c(void)

void FUN_14059ab0c(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_14059abee(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 14059abee FUN_14059abee body=1324 status=ok
// SIG undefined FUN_14059abee(void)

void FUN_14059abee(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14059b11c FUN_14059b11c body=226 status=ok
// SIG undefined FUN_14059b11c(void)

void FUN_14059b11c(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_14059b1fe(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 14059b1fe FUN_14059b1fe body=1324 status=ok
// SIG undefined FUN_14059b1fe(void)

void FUN_14059b1fe(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14059b72c FUN_14059b72c body=226 status=ok
// SIG undefined FUN_14059b72c(void)

void FUN_14059b72c(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_14059b80e(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 14059b80e FUN_14059b80e body=1324 status=ok
// SIG undefined FUN_14059b80e(void)

void FUN_14059b80e(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14059bd3c FUN_14059bd3c body=226 status=ok
// SIG undefined FUN_14059bd3c(void)

void FUN_14059bd3c(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_14059be1e(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 14059be1e FUN_14059be1e body=1324 status=ok
// SIG undefined FUN_14059be1e(void)

void FUN_14059be1e(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14059c34c FUN_14059c34c body=226 status=ok
// SIG undefined FUN_14059c34c(void)

void FUN_14059c34c(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_14059c42e(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 14059c42e FUN_14059c42e body=1324 status=ok
// SIG undefined FUN_14059c42e(void)

void FUN_14059c42e(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14059c95c FUN_14059c95c body=290 status=ok
// SIG undefined FUN_14059c95c(void)

undefined8 FUN_14059c95c(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    if (iVar1 == 2) goto LAB_14059ca77;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14059ca77;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_14059ca77:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14059ca22;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2,param_3);
      uVar6 = 1;
      goto LAB_14059ca22;
    }
  }
  uVar6 = 0;
LAB_14059ca22:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14059ca80 FUN_14059ca80 body=2153 status=ok
// SIG undefined FUN_14059ca80(void)

void FUN_14059ca80(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  byte bVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  char *pcVar19;
  uint uVar20;
  longlong lVar21;
  int *piVar22;
  code *pcVar23;
  int iVar24;
  int iVar26;
  uint uVar27;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  int local_84;
  ulonglong local_80;
  longlong local_78;
  code *local_70;
  longlong local_68;
  longlong *local_60;
  longlong *local_58;
  code *local_50;
  ulonglong local_48;
  uint uVar25;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4)) {
    lVar18 = *param_2;
    lVar17 = *(longlong *)(param_1 + 0xb0);
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      lVar17 = param_1 + 0xa8;
    }
    iVar16 = *(int *)(lVar17 + (ulonglong)
                               (*(int *)(param_1 + 0xb8) - 1U &
                               (int)lVar18 + (int)((ulonglong)lVar18 >> 0x20) * 0x17) * 4);
    if (iVar16 != -1) {
      plVar11 = (longlong *)(param_1 + 0x70);
      do {
        lVar17 = *plVar11 + (longlong)iVar16 * 0x20;
        if (lVar18 == *(longlong *)(*plVar11 + (longlong)iVar16 * 0x20)) {
          if (((((lVar17 != 0) && (pcVar23 = (code *)(lVar17 + 8), pcVar23 != (code *)0x0)) &&
               (plVar12 = *(longlong **)(lVar17 + 0x10), plVar12 != (longlong *)0x0)) &&
              (((*(int *)(lVar17 + 0xc) != 0 && (uVar27 = *(uint *)pcVar23, -1 < (int)uVar27)) &&
               (((int)uVar27 < DAT_14c9647dc &&
                ((lVar18 = (ulonglong)((uVar27 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8),
                 lVar18 != 0 && (*(int *)(lVar18 + 0x10) == *(int *)(lVar17 + 0xc))))))))) &&
             ((*(uint *)(lVar18 + 8) & 0x10200000) == 0)) {
            if (*(code **)(*plVar12 + 8) == (code *)&LAB_1449493aa) {
              plVar12 = plVar12 + -0xa6;
            }
            else {
              plVar12 = (longlong *)(**(code **)(*plVar12 + 8))(plVar12);
            }
            if (plVar12 != (longlong *)0x0) {
              if (DAT_14cac9ca8 == 0) {
                local_a0 = &local_50;
                local_50 = FUN_141030f22;
                local_90 = FUN_14081d0ea;
                local_98 = FUN_14081d0ea;
                local_a8 = &LAB_1478c0a72;
                local_b0 = &LAB_1417b2375;
                local_b8 = L"Engine";
                local_c0 = 0x1000000000;
                local_c8 = 0x10000004;
                local_d0 = 8;
                local_d8 = 0x390;
                FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
              }
              if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(plVar12[2] + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(plVar12[2] + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8)
                  == DAT_14cac9ca8 + 0x30)) {
                uVar27 = *(uint *)(lVar17 + 0xc) ^ *(uint *)(lVar17 + 8);
                plVar1 = (longlong *)(param_1 + 0xc0);
                iVar26 = *(int *)(param_1 + 200);
                iVar16 = *(int *)(param_1 + 0xf4);
                local_68 = param_3;
                local_60 = param_2;
                local_58 = plVar11;
                if (iVar26 == iVar16) goto LAB_14059cc7c;
                lVar18 = param_1 + 0xf8;
                if (*(longlong *)(param_1 + 0x100) != 0) {
                  lVar18 = *(longlong *)(param_1 + 0x100);
                }
                iVar14 = *(int *)(lVar18 + (ulonglong)(*(int *)(param_1 + 0x108) - 1U & uVar27) * 4)
                ;
                if (iVar14 == -1) goto LAB_14059cc7c;
                goto LAB_14059cc5c;
              }
            }
          }
          break;
        }
        iVar16 = *(int *)(lVar17 + 0x18);
      } while (iVar16 != -1);
    }
  }
  goto LAB_14059d0c3;
  while (iVar14 = *(int *)(lVar18 + 0x18), iVar14 != -1) {
LAB_14059cc5c:
    lVar18 = *plVar1 + (longlong)iVar14 * 0x20;
    if (*(longlong *)(*plVar1 + 8 + (longlong)iVar14 * 0x20) == *(longlong *)(lVar17 + 0x10)) {
      if (lVar18 != 0) goto LAB_14059ce20;
      break;
    }
  }
LAB_14059cc7c:
  if (iVar16 == 0) {
    *(int *)(param_1 + 200) = iVar26 + 1;
    if (*(int *)(param_1 + 0xcc) == iVar26) {
      FUN_1447711aa(plVar1,iVar26);
    }
    uVar20 = *(uint *)(param_1 + 0xe8);
    uVar15 = (ulonglong)uVar20;
    if (uVar20 == 0) {
      iVar16 = -1;
    }
    else {
      iVar16 = uVar20 + 0x1e;
      if (-1 < (int)(uVar20 - 1)) {
        iVar16 = uVar20 - 1;
      }
      iVar16 = iVar16 >> 5;
    }
    lVar18 = param_1 + 0xd0;
    iVar14 = uVar20 + 1;
    uVar25 = uVar20 + 0x1f;
    if (-1 < (int)uVar20) {
      uVar25 = uVar20;
    }
    iVar24 = (int)uVar25 >> 5;
    if (iVar24 == iVar16) {
      *(int *)(param_1 + 0xe8) = iVar14;
    }
    else {
      if (*(int *)(param_1 + 0xec) <= (int)uVar20) {
        local_84 = iVar24;
        local_80 = uVar15;
        local_78 = lVar18;
        local_70 = pcVar23;
        if (uVar20 + 0x20 < 0xa0) {
          iVar16 = 0x80;
        }
        else {
          uVar20 = uVar20 + 0x20 >> 5;
          if (*(int *)(param_1 + 0xec) + 0x1fU < 0xa0) {
            uVar25 = 4;
            if (4 < uVar20) {
              uVar25 = uVar20;
            }
          }
          else {
            uVar25 = (uVar20 * 3 >> 3) + uVar20 + 0x10;
          }
          uVar15 = FUN_144a3809e(uVar25 << 2,0);
          iVar14 = (int)(uVar15 >> 2);
          iVar16 = -0x20;
          if ((int)uVar20 <= iVar14) {
            iVar16 = iVar14 << 5;
          }
          uVar15 = (ulonglong)*(uint *)(param_1 + 0xe8);
        }
        lVar18 = local_78;
        *(int *)(param_1 + 0xec) = iVar16;
        FUN_1446efbd8(local_78,uVar15);
        iVar14 = *(int *)(param_1 + 0xe8) + 1;
        uVar15 = local_80;
        pcVar23 = local_70;
        iVar24 = local_84;
      }
      iVar16 = iVar14 + 0x1f;
      if (-1 < iVar14) {
        iVar16 = iVar14;
      }
      *(int *)(param_1 + 0xe8) = iVar14;
      if (iVar14 % 0x20 != 0) {
        lVar21 = *(longlong *)(param_1 + 0xe0);
        if (*(longlong *)(param_1 + 0xe0) == 0) {
          lVar21 = lVar18;
        }
        bVar13 = -(char)(iVar14 % 0x20);
        *(uint *)(lVar21 + (longlong)(iVar16 >> 5) * 4) =
             (uint)(*(int *)(lVar21 + (longlong)(iVar16 >> 5) * 4) << (bVar13 & 0x1f)) >>
             (bVar13 & 0x1f);
      }
    }
    lVar21 = (longlong)iVar26;
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      lVar18 = *(longlong *)(param_1 + 0xe0);
    }
    bVar13 = (byte)uVar15 & 0x1f;
    puVar2 = (uint *)(lVar18 + (longlong)iVar24 * 4);
    *puVar2 = *puVar2 & (-2 << bVar13 | 0xfffffffeU >> 0x20 - bVar13);
  }
  else {
    iVar26 = *(int *)(param_1 + 0xf0);
    lVar21 = (longlong)iVar26;
    iVar14 = *(int *)(*(longlong *)(param_1 + 0xc0) + 4 + lVar21 * 0x20);
    *(int *)(param_1 + 0xf0) = iVar14;
    *(int *)(param_1 + 0xf4) = iVar16 + -1;
    if (iVar16 + -1 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar14 * 0x20) = 0xffffffff;
    }
  }
  lVar18 = param_1 + 0xd0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    lVar18 = *(longlong *)(param_1 + 0xe0);
  }
  iVar16 = iVar26 + 0x1f;
  if (-1 < iVar26) {
    iVar16 = iVar26;
  }
  puVar2 = (uint *)(lVar18 + (longlong)(iVar16 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar26 & 0x1f);
  iVar16 = 1;
  lVar18 = *(longlong *)(param_1 + 0xc0);
  lVar21 = lVar21 * 0x20;
  puVar3 = (undefined4 *)(lVar18 + lVar21);
  uVar20 = *(uint *)(pcVar23 + 4);
  uVar25 = *(uint *)(pcVar23 + 8);
  uVar6 = *(uint *)(pcVar23 + 0xc);
  puVar2 = (uint *)(lVar18 + lVar21);
  *puVar2 = *(uint *)pcVar23;
  puVar2[1] = uVar20;
  puVar2[2] = uVar25;
  puVar2[3] = uVar6;
  *(undefined1 *)(lVar18 + 0x10 + lVar21) = 0;
  *(undefined4 *)(lVar18 + 0x18 + lVar21) = 0xffffffff;
  uVar20 = *(int *)(param_1 + 200) - *(int *)(param_1 + 0xf4);
  if ((uVar20 != 0) && (uVar20 != 1)) {
    lVar18 = param_1 + 0xf8;
    if (*(longlong *)(param_1 + 0x100) != 0) {
      lVar18 = *(longlong *)(param_1 + 0x100);
    }
    iVar14 = *(int *)(lVar18 + (ulonglong)(*(int *)(param_1 + 0x108) - 1U & uVar27) * 4);
    if (iVar14 != -1) {
      do {
        puVar4 = (undefined4 *)(*plVar1 + (longlong)iVar14 * 0x20);
        if (*(longlong *)(*plVar1 + 8 + (longlong)iVar14 * 0x20) == *(longlong *)(puVar3 + 2)) {
          uVar7 = *puVar3;
          uVar8 = puVar3[1];
          uVar9 = puVar3[2];
          uVar10 = puVar3[3];
          *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(puVar3 + 4);
          *puVar4 = uVar7;
          puVar4[1] = uVar8;
          puVar4[2] = uVar9;
          puVar4[3] = uVar10;
          FUN_1441e8288(plVar1,iVar26);
          goto LAB_14059ce0a;
        }
        iVar14 = puVar4[6];
      } while (iVar14 != -1);
    }
  }
  if (3 < uVar20) {
    uVar15 = (ulonglong)(uVar20 & 0xfffffffe) + 0xf;
    lVar18 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar16 = 1 << ((byte)lVar18 & 0x1f);
  }
  if (((int)uVar20 < 1) || (iVar16 <= *(int *)(param_1 + 0x108))) {
    uVar27 = *(int *)(param_1 + 0x108) - 1U & uVar27;
    puVar3[7] = uVar27;
    lVar18 = *(longlong *)(param_1 + 0x100);
    if (*(longlong *)(param_1 + 0x100) == 0) {
      lVar18 = param_1 + 0xf8;
    }
    puVar3[6] = *(undefined4 *)
                 (lVar18 + ((longlong)*(int *)(param_1 + 0x108) - 1U & (longlong)(int)uVar27) * 4);
    lVar18 = *(longlong *)(param_1 + 0x100);
    if (*(longlong *)(param_1 + 0x100) == 0) {
      lVar18 = param_1 + 0xf8;
    }
    *(int *)(lVar18 + ((longlong)*(int *)(param_1 + 0x108) - 1U & (longlong)(int)uVar27) * 4) =
         iVar26;
  }
  else {
    *(int *)(param_1 + 0x108) = iVar16;
    FUN_14059d57a(plVar1);
  }
LAB_14059ce0a:
  lVar18 = *plVar1 + (longlong)iVar26 * 0x20;
LAB_14059ce20:
  pcVar19 = (char *)(lVar18 + 0x10);
  *pcVar19 = '\0';
  if ((longlong)*(int *)(local_68 + 0x138) != 0) {
    lVar18 = *(longlong *)(local_68 + 0x130);
    lVar21 = (longlong)*(int *)(local_68 + 0x138) << 8;
    do {
      if ((((*(byte *)(lVar18 + 0xad) & 1) != 0) ||
          (*(float *)(param_1 + 0x60) <= *(float *)(lVar18 + 8) &&
           *(float *)(lVar18 + 8) != *(float *)(param_1 + 0x60))) &&
         (plVar11 = (longlong *)FUN_14485cccc(), plVar11 != plVar12)) {
        if (lVar18 != 0) {
          *pcVar19 = '\x01';
          local_50 = pcVar23;
          FUN_14059d37a();
        }
        break;
      }
      lVar18 = lVar18 + 0x100;
      lVar21 = lVar21 + -0x100;
    } while (lVar21 != 0);
  }
  plVar11 = local_58;
  if (*pcVar19 == '\0') {
    lVar18 = *(longlong *)(param_1 + 0x30);
    iVar16 = *(int *)(param_1 + 0x38);
    lVar21 = (longlong)iVar16;
    if (lVar21 != 0) {
      uVar15 = 0;
      do {
        if (*(longlong *)(lVar18 + 8 + uVar15) == *(longlong *)(lVar17 + 0x10)) {
          if ((int)(~uVar15 >> 4) != 0) goto LAB_14059ce9c;
          break;
        }
        uVar15 = uVar15 + 0x10;
      } while (lVar21 << 4 != uVar15);
    }
    *(uint *)(param_1 + 0x38) = iVar16 + 1U;
    if (*(uint *)(param_1 + 0x3c) < iVar16 + 1U) {
      FUN_14059d472((longlong *)(param_1 + 0x30),iVar16);
      lVar18 = *(longlong *)(param_1 + 0x30);
    }
    uVar27 = *(uint *)(pcVar23 + 4);
    uVar20 = *(uint *)(pcVar23 + 8);
    uVar25 = *(uint *)(pcVar23 + 0xc);
    puVar2 = (uint *)(lVar18 + lVar21 * 0x10);
    *puVar2 = *(uint *)pcVar23;
    puVar2[1] = uVar27;
    puVar2[2] = uVar20;
    puVar2[3] = uVar25;
  }
LAB_14059ce9c:
  if (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4)) {
    lVar18 = *local_60;
    lVar17 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar17 = *(longlong *)(param_1 + 0xb0);
    }
    iVar16 = *(int *)(lVar17 + ((longlong)((int)((ulonglong)lVar18 >> 0x20) * 0x17 + (int)lVar18) &
                               (longlong)*(int *)(param_1 + 0xb8) - 1U) * 4);
    if (iVar16 != -1) {
      lVar21 = *plVar11;
      do {
        lVar5 = lVar21 + (longlong)iVar16 * 0x20;
        if (lVar18 == *(longlong *)(lVar21 + (longlong)iVar16 * 0x20)) {
          iVar26 = *(int *)(lVar17 + (longlong)*(int *)(lVar5 + 0x1c) * 4);
          if (iVar26 == iVar16) {
            piVar22 = (int *)((longlong)*(int *)(lVar5 + 0x1c) * 4 + lVar17);
          }
          else {
            do {
              piVar22 = (int *)(lVar21 + (longlong)iVar26 * 0x20 + 0x18);
              iVar26 = *piVar22;
            } while (iVar26 != iVar16);
          }
          *piVar22 = *(int *)(lVar5 + 0x18);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
        }
        iVar16 = *(int *)(lVar5 + 0x18);
      } while (iVar16 != -1);
    }
  }
LAB_14059d0c3:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14059d308 FUN_14059d308 body=114 status=ok
// SIG undefined FUN_14059d308(void)

void FUN_14059d308(longlong *param_1,int param_2)

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



// FUNCTION 14059d37a FUN_14059d37a body=248 status=ok
// SIG undefined FUN_14059d37a(void)

void FUN_14059d37a(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar5 = (longlong)(int)uVar1;
  if (lVar5 != 0) {
    lVar2 = *param_1;
    uVar13 = 0;
    bVar6 = *(longlong *)(lVar2 + 8) == *(longlong *)(*param_2 + 8);
    uVar10 = 0;
    do {
      uVar9 = (ulonglong)uVar10;
      uVar7 = uVar10 + 1;
      if ((int)(uVar10 + 1) < (int)uVar1) {
        uVar7 = uVar1;
      }
      lVar4 = uVar9 * 0x10;
      plVar8 = (longlong *)(lVar2 + 0x18 + lVar4);
      uVar11 = uVar10;
      do {
        uVar9 = uVar9 + 1;
        uVar12 = uVar7;
        if (lVar5 <= (longlong)uVar9) break;
        lVar3 = *plVar8;
        uVar11 = uVar11 + 1;
        plVar8 = plVar8 + 2;
        uVar12 = uVar11;
      } while (bVar6 == (lVar3 == *(longlong *)(*param_2 + 8)));
      if (bVar6 == false) {
        if (uVar13 != uVar10) {
          memmove((void *)((longlong)(int)uVar13 * 0x10 + lVar2),(void *)(lVar4 + lVar2),
                  (longlong)(int)(uVar12 - uVar10) << 4);
        }
        uVar13 = uVar13 + (uVar12 - uVar10);
      }
      bVar6 = (bool)(bVar6 ^ 1);
      uVar10 = uVar12;
    } while ((longlong)uVar9 < lVar5);
    *(uint *)(param_1 + 1) = uVar13;
  }
  return;
}



// FUNCTION 14059d472 FUN_14059d472 body=262 status=ok
// SIG undefined FUN_14059d472(void)

void FUN_14059d472(longlong param_1,int param_2)

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



// FUNCTION 14059d57a FUN_14059d57a body=547 status=ok
// SIG undefined FUN_14059d57a(void)

void FUN_14059d57a(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar8 = local_58 >> 0x20;
    }
    iVar4 = (int)local_58;
    uVar5 = (uint)local_48;
    iVar6 = local_48._4_4_;
    iVar11 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar13 = *param_1;
        lVar12 = (longlong)iVar6 * 0x20;
        uVar10 = (longlong)(int)(*(uint *)(lVar13 + 4 + lVar12) ^ *(uint *)(lVar13 + lVar12)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar13 + 0x1c + lVar12) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar13 + 0x18 + lVar12) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar9 = (int)local_50[3];
        lVar13 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar13 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar9 + 0x1e;
          if (-1 < iVar9 + -1) {
            iVar6 = iVar9 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar12 = 0;
          while( true ) {
            iVar11 = iVar11 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar12 * 4 + lVar13 * 4 + 4);
            if (uVar3 != 0) break;
            lVar12 = lVar12 + 1;
            if (iVar2 - lVar13 == lVar12) goto LAB_14059d758;
          }
          iVar4 = iVar4 + (int)lVar12 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar10 = uVar8 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar6 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar9);
    }
  }
LAB_14059d758:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14059d79e FUN_14059d79e body=226 status=ok
// SIG undefined FUN_14059d79e(void)

void FUN_14059d79e(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_14059d880(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 14059d880 FUN_14059d880 body=1324 status=ok
// SIG undefined FUN_14059d880(void)

void FUN_14059d880(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14059ddae FUN_14059ddae body=230 status=ok
// SIG undefined FUN_14059ddae(void)

void FUN_14059ddae(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_14059de94(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 14059de94 FUN_14059de94 body=1324 status=ok
// SIG undefined FUN_14059de94(void)

void FUN_14059de94(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14059e3c1 FUN_14059e3c1 body=336 status=ok
// SIG undefined FUN_14059e3c1(void)

void FUN_14059e3c1(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_90 [8];
  longlong *local_88;
  longlong local_80;
  longlong *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong local_60;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1405f0e9c(local_90,param_1,5);
  if ((char)uStack_6c == '\0') {
    do {
      lVar1 = local_60;
      if (local_60 != 0) {
        uVar4 = FUN_14018b740();
        plVar5 = (longlong *)FUN_144718840(lVar1,uVar4);
        if ((plVar5 != (longlong *)0x0) &&
           (cVar3 = (**(code **)(*plVar5 + 0x60))(plVar5), cVar3 != '\0')) {
          (**(code **)(*plVar5 + 0x68))(plVar5,0);
        }
      }
      FUN_14059e512(local_90);
    } while ((char)uStack_6c == '\0');
  }
  if (local_38 == '\x01') {
    FUN_14024445c(&local_88);
  }
  local_98 = param_1;
  FUN_14592cb42(local_90,&DAT_14cb81b90);
  lVar2 = local_68;
  lVar1 = local_80;
  LOCK();
  *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
  UNLOCK();
  LOCK();
  *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
  UNLOCK();
  plVar5 = local_88;
  do {
    if (plVar5 == (longlong *)CONCAT44(uStack_6c,local_70)) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + -1;
      UNLOCK();
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + -1;
      UNLOCK();
      LOCK();
      *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + -1;
      UNLOCK();
      LOCK();
      *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + -1;
      UNLOCK();
      if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    if (*(char *)(plVar5[2] + 0x5c8) == '\x01') {
      FUN_140e40572(plVar5[2],0);
    }
    do {
      plVar5 = (longlong *)*plVar5;
      if (plVar5 == (longlong *)0x0) break;
      lVar6 = FUN_1457229a0(plVar5[2]);
    } while (lVar6 != *local_78);
  } while( true );
}



// FUNCTION 14059e512 FUN_14059e512 body=952 status=ok
// SIG undefined FUN_14059e512(void)

void FUN_14059e512(uint *param_1)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  char *pcVar13;
  longlong lVar14;
  bool bVar15;
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
  lVar14 = (longlong)(int)param_1[6];
  if ((int)(param_1[8] + 1) < (int)(param_1[0x10] + param_1[6])) {
    lVar2 = *(longlong *)(param_1 + 2);
    lVar11 = (longlong)(int)param_1[8] + 1;
    do {
      puVar7 = param_1 + 4;
      lVar10 = lVar11;
      if (lVar14 <= lVar11) {
        puVar7 = param_1 + 0xe;
        lVar10 = lVar11 - lVar14;
      }
      lVar10 = *(longlong *)(*(longlong *)puVar7 + lVar10 * 8);
      param_1[10] = param_1[10] + 1;
      if (lVar10 != 0) {
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
        lVar9 = DAT_14cae8b20;
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
        lVar8 = *(longlong *)(lVar10 + 0x20);
        if (lVar8 != 0) {
          iVar1 = *(int *)(lVar9 + 0x38);
          do {
            if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < iVar1) ||
               (lVar12 = lVar8,
               *(longlong *)
                (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
               lVar9 + 0x30)) {
              lVar12 = 0;
            }
          } while ((lVar12 == 0) && (lVar8 = *(longlong *)(lVar8 + 0x20), lVar8 != 0));
          if ((lVar12 != 0) &&
             ((uVar6 = *param_1, (uVar6 & 1) == 0 || ((*(uint *)(lVar10 + 8) >> 0x1e & 1) == 0)))) {
            if ((uVar6 & 2) != 0) {
              cVar5 = FUN_144affb44(lVar10);
              if (cVar5 == '\0') goto LAB_14059e696;
              uVar6 = *param_1;
            }
            if ((uVar6 & 4) == 0) {
              lVar9 = *(longlong *)(lVar12 + 0xc0);
            }
            else {
              if (((*(byte *)(lVar12 + 0x240) & 0x20) == 0) ||
                 (bVar4 = 1, (*(byte *)(lVar12 + 0x242) & 8) != 0)) {
                if ((*(byte *)(lVar12 + 0x241) & 0x20) == 0) {
                  bVar4 = (*(byte *)(lVar12 + 0x241) & 0x40) >> 6;
                }
                else {
                  bVar4 = 1;
                }
              }
              lVar9 = *(longlong *)(lVar12 + 0xc0);
              if (lVar9 == 0) {
LAB_14059e701:
                pcVar13 = (char *)0x0;
              }
              else {
                iVar1 = *(int *)(lVar9 + 0x1b0);
                if (((longlong)iVar1 < 0) || (*(int *)(lVar9 + 0x1a8) <= iVar1)) goto LAB_14059e701;
                pcVar13 = (char *)((longlong)iVar1 * 0x78 + *(longlong *)(lVar9 + 0x1a0));
              }
              pcVar3 = *(char **)(lVar12 + 0x2e8);
              if (pcVar3 == (char *)0x0) {
                bVar15 = true;
              }
              else {
                bVar15 = *pcVar3 == '\x02';
              }
              if ((bVar4 & ((pcVar13 == (char *)0x0 || pcVar3 == pcVar13) | bVar15)) != 1)
              goto LAB_14059e696;
            }
            if (lVar9 == lVar2) {
              if (*(longlong *)(lVar2 + 0x30) != lVar12) {
                lVar9 = FUN_14059e8cc();
                if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) goto LAB_14059e696;
              }
              *(longlong *)(param_1 + 0xc) = lVar10;
              param_1[8] = (uint)lVar11;
              goto LAB_14059e6bb;
            }
          }
        }
      }
LAB_14059e696:
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)param_1[0x10] + lVar14);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
LAB_14059e6bb:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14059e8cc FUN_14059e8cc body=228 status=ok
// SIG undefined FUN_14059e8cc(void)

longlong FUN_14059e8cc(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac92c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141117124;
    local_38 = &LAB_1478ae29e;
    local_40 = &LAB_14639b61a;
    local_48 = L"game";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x5c0;
    FUN_14081cfa3(L"/Script/Engine",L"WorldSettings",&DAT_14cac92c0,FUN_14639b5f8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac92c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14059e9b2 FUN_14059e9b2 body=727 status=ok
// SIG undefined FUN_14059e9b2(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14059e9b2(longlong param_1,wchar_t *param_2,wchar_t *param_3,undefined8 param_4,int param_5
                  ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulonglong *puVar1;
  size_t sVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_1128 [32];
  undefined4 local_1108;
  longlong local_10f8;
  ulonglong **local_10f0;
  ulonglong local_10e8;
  undefined8 local_10e0;
  code *local_10d8;
  longlong *local_10d0;
  code *local_10c8;
  code **local_10c0;
  ulonglong *local_10b8;
  ulonglong *local_10b0;
  undefined1 *local_10a8;
  char local_10a0;
  ulonglong local_1098 [258];
  undefined1 local_882 [2];
  ulonglong *local_880;
  ulonglong *local_878;
  undefined2 *local_870;
  char local_868;
  ulonglong local_860 [258];
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1128;
  if (param_5 != 2) goto LAB_14059ebeb;
  iVar5 = 0;
  iVar3 = 0;
  if (param_3 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_3);
    iVar3 = (int)sVar2;
  }
  if (param_2 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_2);
    iVar5 = (int)sVar2;
  }
  local_10e0 = param_8;
  local_878 = local_860;
  local_868 = '\0';
  local_870 = &local_4a;
  lVar4 = (longlong)iVar5;
  local_880 = local_878;
  if (iVar5 < 0x40b) {
    if (iVar5 != 0) goto LAB_14059ea65;
  }
  else {
    FUN_140213274(&local_880,lVar4);
LAB_14059ea65:
    puVar1 = local_878;
    memcpy(local_878,param_2,lVar4 * 2);
    local_878 = (ulonglong *)((longlong)puVar1 + lVar4 * 2);
  }
  if ((((int)((ulonglong)((longlong)local_878 - (longlong)local_880) >> 1) != 0) &&
      (*(short *)((longlong)local_878 + -2) != 0x2f)) &&
     (*(short *)((longlong)local_878 + -2) != 0x5c)) {
    if (local_870 <= (undefined2 *)((longlong)local_878 + 2)) {
      FUN_140213274(&local_880,1);
    }
    *(undefined2 *)local_878 = 0x2f;
    local_878 = (ulonglong *)((longlong)local_878 + 2);
  }
  lVar4 = (longlong)iVar3;
  if (local_870 <= (undefined2 *)((longlong)local_878 + lVar4 * 2)) {
    FUN_140213274(&local_880,lVar4);
  }
  puVar1 = local_878;
  if (iVar3 != 0) {
    memcpy(local_878,param_3,lVar4 * 2);
    local_878 = (ulonglong *)((longlong)puVar1 + lVar4 * 2);
  }
  local_10b8 = local_880;
  local_10b0 = (ulonglong *)
               CONCAT44(local_10b0._4_4_,
                        (int)((ulonglong)((longlong)local_878 - (longlong)local_880) >> 1));
  local_10e8 = FUN_1449e6bae(&local_10b8);
  local_10e8 = local_10e8 | 0x4000000000000000;
  local_10b8 = &local_10e8;
  local_10b0 = &local_10e0;
  FUN_14059ec8a(param_1 + 0x2f8,&local_10c8,&local_10b8,0);
  local_10b8 = local_1098;
  local_10a0 = '\0';
  local_10a8 = local_882;
  local_10d0 = &local_10f8;
  local_10c0 = &local_10d8;
  local_10d8 = FUN_1404e29dc;
  local_10c8 = FUN_1449cc908;
  local_1108 = 0;
  local_10f8 = param_1 + 0x2a0;
  local_10f0 = &local_10b8;
  local_10b0 = local_10b8;
  FUN_14482c30e(local_10e0,&local_10c8,CONCAT71((int7)((ulonglong)local_10c0 >> 8),1),0);
  if (local_10a0 == '\x01') {
    FUN_1400020a8(local_10b8);
  }
  if (local_868 == '\x01') {
    FUN_1400020a8(local_880);
  }
LAB_14059ebeb:
  if ((local_48 ^ (ulonglong)auStack_1128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14059ec8a FUN_14059ec8a body=802 status=ok
// SIG undefined FUN_14059ec8a(void)

int * FUN_14059ec8a(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  uint *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  longlong *plVar15;
  int iVar16;
  int iVar17;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar16 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar16 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar16) {
      FUN_14482b872(param_1,iVar16);
    }
    iVar14 = (int)param_1[5];
    if (iVar14 == 0) {
      iVar10 = -1;
    }
    else {
      iVar10 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar10 = iVar14 + -1;
      }
      iVar10 = iVar10 >> 5;
    }
    plVar15 = param_1 + 2;
    iVar11 = iVar14 + 1;
    iVar17 = iVar14 + 0x1f;
    if (-1 < iVar14) {
      iVar17 = iVar14;
    }
    if (iVar17 >> 5 == iVar10) {
      *(int *)(param_1 + 5) = iVar11;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar14) {
        if (iVar14 + 0x20U < 0xa0) {
          iVar11 = 0x80;
          iVar10 = iVar14;
        }
        else {
          uVar6 = iVar14 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar12 = 4;
            if (4 < uVar6) {
              uVar12 = uVar6;
            }
          }
          else {
            uVar12 = (uVar6 * 3 >> 3) + uVar6 + 0x10;
          }
          uVar13 = FUN_144a3809e(uVar12 << 2,0);
          iVar10 = (int)(uVar13 >> 2);
          iVar11 = -0x20;
          if ((int)uVar6 <= iVar10) {
            iVar11 = iVar10 << 5;
          }
          iVar10 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar11;
        FUN_1446efbd8(plVar15,iVar10);
        iVar11 = (int)param_1[5] + 1;
      }
      iVar10 = iVar11 + 0x1f;
      if (-1 < iVar11) {
        iVar10 = iVar11;
      }
      *(int *)(param_1 + 5) = iVar11;
      if (iVar11 % 0x20 != 0) {
        plVar8 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar8 = plVar15;
        }
        bVar9 = -(char)(iVar11 % 0x20);
        *(uint *)((longlong)plVar8 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar8 + (longlong)(iVar10 >> 5) * 4) << (bVar9 & 0x1f)) >>
             (bVar9 & 0x1f);
      }
    }
    lVar7 = (longlong)iVar16;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar15 = (longlong *)param_1[4];
    }
    bVar9 = (byte)iVar14 & 0x1f;
    puVar1 = (uint *)((longlong)plVar15 + (longlong)(iVar17 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
  }
  else {
    iVar16 = (int)param_1[6];
    lVar7 = (longlong)iVar16;
    iVar14 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar14;
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar14 * 0x18) = 0xffffffff;
    }
  }
  plVar15 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar15 = (longlong *)param_1[4];
  }
  iVar14 = iVar16 + 0x1f;
  if (-1 < iVar16) {
    iVar14 = iVar16;
  }
  puVar1 = (uint *)((longlong)plVar15 + (longlong)(iVar14 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar16 & 0x1f);
  plVar15 = (longlong *)(*param_1 + lVar7 * 0x18);
  plVar8 = (longlong *)param_3[1];
  lVar7 = *(longlong *)*param_3;
  *plVar15 = lVar7;
  plVar15[1] = *plVar8;
  *(undefined4 *)(plVar15 + 2) = 0xffffffff;
  cVar5 = '\0';
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar14 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & (uint)lVar7) * 4);
    if (iVar14 == -1) {
      cVar5 = '\0';
    }
    else {
      do {
        plVar8 = (longlong *)(*param_1 + (longlong)iVar14 * 0x18);
        if (*plVar8 == lVar7) {
          uVar3 = *(undefined4 *)((longlong)plVar15 + 4);
          lVar2 = plVar15[1];
          uVar4 = *(undefined4 *)((longlong)plVar15 + 0xc);
          *(int *)plVar8 = (int)*plVar15;
          *(undefined4 *)((longlong)plVar8 + 4) = uVar3;
          *(int *)(plVar8 + 1) = (int)lVar2;
          *(undefined4 *)((longlong)plVar8 + 0xc) = uVar4;
          FUN_14688754a(param_1,iVar16);
          cVar5 = '\x01';
          iVar16 = iVar14;
          break;
        }
        iVar14 = (int)plVar8[2];
        cVar5 = '\0';
      } while (iVar14 != -1);
    }
  }
  if (param_4 != (char *)0x0) {
    *param_4 = cVar5;
  }
  if (cVar5 == '\0') {
    uVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar6 < 4) {
      iVar14 = 1;
    }
    else {
      uVar13 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar14 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar14 <= (int)param_1[9])) {
      uVar6 = (int)param_1[9] - 1U & (uint)lVar7;
      *(uint *)((longlong)plVar15 + 0x14) = uVar6;
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      *(undefined4 *)(plVar15 + 2) =
           *(undefined4 *)
            ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
      plVar15 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar15 = param_1 + 7;
      }
      *(int *)((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
           iVar16;
    }
    else {
      *(int *)(param_1 + 9) = iVar14;
      FUN_1416102e2(param_1);
    }
  }
  *param_2 = iVar16;
  return param_2;
}



// FUNCTION 14059efac FUN_14059efac body=88 status=ok
// SIG undefined FUN_14059efac(void)

void FUN_14059efac(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14059f004(param_1,0);
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



// FUNCTION 14059f004 FUN_14059f004 body=324 status=ok
// SIG undefined FUN_14059f004(void)

void FUN_14059f004(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  if (param_2 != 0) {
    uVar3 = (longlong)param_2 * 0x68;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14059f098;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_14059f098:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x68)) {
      uVar5 = uVar3 / 0x68 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x68,8);
  }
  return;
}



// FUNCTION 14059f148 FUN_14059f148 body=55 status=ok
// SIG undefined FUN_14059f148(void)

void FUN_14059f148(longlong *param_1)

{
  FUN_14059f180(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14059f180 FUN_14059f180 body=121 status=ok
// SIG undefined FUN_14059f180(void)

void FUN_14059f180(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
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



// FUNCTION 14059f1fa FUN_14059f1fa body=181 status=ok
// SIG undefined FUN_14059f1fa(void)

undefined8 FUN_14059f1fa(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_50 [16];
  int local_40;
  int local_3c;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1406f1bc8(*(undefined8 *)*param_1,local_50);
  if ((((local_40 == 0) || (local_3c == 0)) || (local_40 == DAT_14c948000)) ||
     ((local_3c == 1 || (local_3c < 5)))) {
    local_58 = DAT_14c948620;
    local_60 = DAT_14c948618;
  }
  else {
    local_58 = *(undefined4 *)(local_28 + 0x38);
    local_60 = *(undefined8 *)(local_28 + 0x30);
  }
  FUN_1408226d0(&local_60,param_2,1);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14059f2b0 FUN_14059f2b0 body=439 status=ok
// SIG undefined FUN_14059f2b0(void)

undefined8 * FUN_14059f2b0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  lVar5 = (**(code **)(*(longlong *)(param_1 + 0x3b0) + 0x28))(param_1 + 0x3b0);
  lVar10 = *(longlong *)(lVar5 + 0x10);
  if (lVar10 == 0) {
    uVar6 = FUN_14050c9fe();
    lVar10 = FUN_14477b664(uVar6);
    *(longlong *)(lVar5 + 0x10) = lVar10;
  }
  lVar7 = *(longlong *)(lVar5 + 0x18);
  if (lVar7 == 0) {
    if ((lVar10 == 0) || (*(longlong *)(lVar5 + 8) == 0)) goto LAB_14059f424;
    plVar1 = *(longlong **)(lVar10 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
      *(undefined8 *)(lVar5 + 0x18) = 0;
      goto LAB_14059f424;
    }
    uVar6 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar7 = FUN_144aff482(uVar6,(longlong *)(lVar5 + 8));
    *(longlong *)(lVar5 + 0x18) = lVar7;
    if (lVar7 == 0) goto LAB_14059f424;
  }
  puVar9 = &DAT_14c9485f0;
  if (*(undefined4 **)(lVar7 + 8) != (undefined4 *)0x0) {
    puVar9 = *(undefined4 **)(lVar7 + 8);
  }
  FUN_1447325ac(puVar9,&local_48,1);
  FUN_1400021e4(&local_48,&local_38);
  if ((longlong)local_30 != 0) {
    lVar10 = (longlong)local_30 * 2;
    lVar5 = 0;
    do {
      if (*(short *)(local_38 + lVar5 * 2) == 0x5f) {
        uVar11 = local_30 - 1;
        if (local_30 == 0) {
          uVar11 = 0;
        }
        iVar4 = (int)lVar5;
        if ((-1 < iVar4) && (iVar4 < (int)uVar11)) {
          uVar2 = iVar4 + 1U;
          if ((int)uVar11 <= (int)(iVar4 + 1U)) {
            uVar2 = uVar11;
          }
          uVar8 = (ulonglong)uVar2;
          if ((int)uVar2 < 1) {
            uVar8 = 0;
          }
          FUN_14006620a(&local_48,local_38 + uVar8 * 2,uVar11 - (int)uVar8);
          uVar8 = (ulonglong)(local_40 - 1);
          if (local_40 == 0) {
            uVar8 = 0;
          }
          FUN_1446f82e2(param_2,uVar8,local_48,1);
          if (local_48 != 0) {
            FUN_1400020a8();
          }
        }
        break;
      }
      lVar5 = lVar5 + 1;
      lVar10 = lVar10 + -2;
    } while (lVar10 != 0);
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
LAB_14059f424:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14059f468 FUN_14059f468 body=30 status=ok
// SIG undefined FUN_14059f468(void)

longlong * FUN_14059f468(longlong *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  return param_1 + 0xf4;
}



// FUNCTION 14059f48a FUN_14059f48a body=195 status=ok
// SIG undefined FUN_14059f48a(void)

undefined4 * FUN_14059f48a(longlong *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  char local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(longlong *)(param_1[6] + 0xb18) != 0) &&
     (plVar1 = *(longlong **)(param_1[6] + 0xb20), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_48);
    if (local_30 == '\0') {
      (**(code **)(*param_1 + 0x2c8))(param_1,&local_60);
      local_38 = local_50;
      local_48 = local_60;
      uStack_40 = uStack_58;
    }
    *(undefined8 *)(param_2 + 4) = local_38;
    *param_2 = (undefined4)local_48;
    param_2[1] = local_48._4_4_;
    param_2[2] = (undefined4)uStack_40;
    param_2[3] = uStack_40._4_4_;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_88);
  }
  *(undefined8 *)(param_2 + 4) = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *param_2 = (undefined4)DAT_14c8464e0;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14059f54e FUN_14059f54e body=123 status=ok
// SIG undefined FUN_14059f54e(void)

undefined8 * FUN_14059f54e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_31;
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  lVar1 = FUN_14059f5ca(*(undefined8 *)(param_1 + 0x30),&local_31);
  if (lVar1 != 0) {
    local_48 = local_31;
    FUN_14059f62a(lVar1,*(undefined8 *)(param_1 + 0x2f0),param_2,local_30);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14059f5ca FUN_14059f5ca body=95 status=ok
// SIG undefined FUN_14059f5ca(void)

undefined8 FUN_14059f5ca(longlong param_1,char *param_2)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  
  if (*(longlong **)(param_1 + 0x1b0) != (longlong *)0x0) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x798))();
    *param_2 = cVar2;
    bVar1 = *(byte *)(param_1 + 0xbd9);
    if (((cVar2 != '\0') && (lVar3 = 0xd18, (int)(uint)bVar1 < *(int *)(param_1 + 0xd20))) ||
       (lVar3 = 0xd08, (int)(uint)bVar1 < *(int *)(param_1 + 0xd10))) {
      return *(undefined8 *)(*(longlong *)(param_1 + lVar3) + (ulonglong)bVar1 * 8);
    }
  }
  return 0;
}



// FUNCTION 14059f62a FUN_14059f62a body=783 status=ok
// SIG undefined FUN_14059f62a(void)

void FUN_14059f62a(longlong param_1,undefined8 param_2,double *param_3,double *param_4,char param_5)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  char cVar6;
  longlong *plVar7;
  undefined1 auStack_f8 [40];
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  double local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  double local_a8;
  undefined8 uStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  param_3[2] = DAT_14c8464f0;
  dVar5 = DAT_14c8464e8;
  *param_3 = DAT_14c8464e0;
  param_3[1] = dVar5;
  param_4[2] = DAT_14c846508;
  uVar4 = DAT_14c846500._4_4_;
  uVar3 = (undefined4)DAT_14c846500;
  uVar2 = DAT_14c8464f8._4_4_;
  *(undefined4 *)param_4 = (undefined4)DAT_14c8464f8;
  *(undefined4 *)((longlong)param_4 + 4) = uVar2;
  *(undefined4 *)(param_4 + 1) = uVar3;
  *(undefined4 *)((longlong)param_4 + 0xc) = uVar4;
  plVar7 = *(longlong **)(param_1 + 0x48);
  if (plVar7 != (longlong *)0x0) {
    if ((((param_5 != '\0') && (*(char *)(param_1 + 8) == '\0')) &&
        (((*(double *)(param_1 + 0x20) != 0.0 ||
          (((NAN(*(double *)(param_1 + 0x20)) || (*(double *)(param_1 + 0x28) != 0.0)) ||
           (NAN(*(double *)(param_1 + 0x28)))))) ||
         ((*(double *)(param_1 + 0x30) != 0.0 || (NAN(*(double *)(param_1 + 0x30)))))))) &&
       (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x1b0), plVar1 != (longlong *)0x0))
    {
      cVar6 = (**(code **)(*plVar1 + 0x798))(plVar1);
      if (cVar6 != '\0') {
        param_3[2] = *(double *)(param_1 + 0x30);
        uVar2 = *(undefined4 *)(param_1 + 0x24);
        uVar3 = *(undefined4 *)(param_1 + 0x28);
        uVar4 = *(undefined4 *)(param_1 + 0x2c);
        *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 0x20);
        *(undefined4 *)((longlong)param_3 + 4) = uVar2;
        *(undefined4 *)(param_3 + 1) = uVar3;
        *(undefined4 *)((longlong)param_3 + 0xc) = uVar4;
        cVar6 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x4c8))
                          (*(longlong **)(param_1 + 0x48),param_2);
        if (cVar6 != '\0') {
          (**(code **)(**(longlong **)(param_1 + 0x48) + 0x4a8))
                    (*(longlong **)(param_1 + 0x48),&local_b8,param_2,2);
          *param_3 = local_98 + *param_3;
          param_3[1] = dStack_90 + param_3[1];
          param_3[2] = local_88 + param_3[2];
          local_58 = local_b8;
          uStack_54 = uStack_b4;
          uStack_50 = uStack_b0;
          uStack_4c = uStack_ac;
          local_48 = local_a8;
          uStack_40 = uStack_a0;
          FUN_1448052ee(&local_58,&local_d0);
          param_4[2] = local_c0;
          *(undefined4 *)param_4 = local_d0;
          *(undefined4 *)((longlong)param_4 + 4) = uStack_cc;
          *(undefined4 *)(param_4 + 1) = uStack_c8;
          *(undefined4 *)((longlong)param_4 + 0xc) = uStack_c4;
        }
        (**(code **)(*plVar1 + 0x588))(plVar1,&local_b8,&local_58);
        FUN_1401c9a0e(&local_58,&local_d0,param_3);
        *param_3 = (double)CONCAT44(uStack_b4,local_b8) + (double)CONCAT44(uStack_cc,local_d0);
        param_3[1] = (double)CONCAT44(uStack_ac,uStack_b0) + (double)CONCAT44(uStack_c4,uStack_c8);
        param_3[2] = local_a8 + local_c0;
        *param_4 = (double)CONCAT44(uStack_54,local_58) + *param_4;
        param_4[1] = (double)CONCAT44(uStack_4c,uStack_50) + param_4[1];
        param_4[2] = local_48 + param_4[2];
        goto LAB_14059f718;
      }
      plVar7 = *(longlong **)(param_1 + 0x48);
    }
    cVar6 = (**(code **)(*plVar7 + 0x4c8))(plVar7,param_2);
    plVar7 = *(longlong **)(param_1 + 0x48);
    if (cVar6 == '\0') {
      (**(code **)(*plVar7 + 0x4a8))(plVar7,&local_b8,*(undefined8 *)(param_1 + 0xc),0);
      *param_3 = local_98;
      param_3[1] = dStack_90;
      param_3[2] = local_88;
    }
    else {
      (**(code **)(*plVar7 + 0x4a8))(plVar7,&local_b8,param_2,0);
      *param_3 = local_98;
      param_3[1] = dStack_90;
      param_3[2] = local_88;
    }
    local_58 = local_b8;
    uStack_54 = uStack_b4;
    uStack_50 = uStack_b0;
    uStack_4c = uStack_ac;
    local_48 = local_a8;
    uStack_40 = uStack_a0;
    FUN_1448052ee(&local_58,&local_d0);
    param_4[2] = local_c0;
    *(undefined4 *)param_4 = local_d0;
    *(undefined4 *)((longlong)param_4 + 4) = uStack_cc;
    *(undefined4 *)(param_4 + 1) = uStack_c8;
    *(undefined4 *)((longlong)param_4 + 0xc) = uStack_c4;
  }
LAB_14059f718:
  if ((local_30 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14059f93a FUN_14059f93a body=839 status=ok
// SIG undefined FUN_14059f93a(void)

void FUN_14059f93a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
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
  undefined1 *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1448aa298();
  if (*(longlong *)(param_1 + 0x20) == 0) goto LAB_14059fadc;
  if (*(char *)(*(longlong *)(param_1 + 0x20) + 0x84d) == '\x01') {
    iVar4 = *(int *)(param_1 + 0x650);
    if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar4);
    }
    plVar1 = (longlong *)(param_1 + 0x658);
    if (*(int *)(param_1 + 0x664) < iVar4) {
      FUN_145fd96a4(plVar1);
      iVar4 = *(int *)(param_1 + 0x650);
    }
    if (0 < iVar4) {
      lVar2 = 0;
      do {
        lVar3 = FUN_14090ceee(*(undefined8 *)(*(longlong *)(param_1 + 0x648) + lVar2 * 8),param_1,0)
        ;
        if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar3);
        }
        iVar4 = *(int *)(param_1 + 0x660);
        *(uint *)(param_1 + 0x660) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0x664) < iVar4 + 1U) {
          FUN_1457d5db8(plVar1,iVar4);
        }
        *(longlong *)(*plVar1 + (longlong)iVar4 * 8) = lVar3;
        if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar3);
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 < *(int *)(param_1 + 0x650));
    }
  }
  lVar2 = FUN_1447210f0(*(undefined8 *)(param_1 + 0x20));
  if (lVar2 == 0) goto LAB_14059fadc;
  lVar3 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x390) + 0x18))
                    (*(longlong *)(param_1 + 0x20) + 0x390);
  if (lVar3 != 0) {
    FUN_140cb7262(lVar3,param_1);
  }
  if (DAT_14caa7a28 == 0) {
    local_50 = &local_38;
    local_38 = FUN_1449e2820;
    local_40 = FUN_14081d0ea;
    local_48 = &LAB_14588a134;
    local_58 = &LAB_147473291;
    local_60 = FUN_1457f6a1e;
    local_68 = L"Engine";
    local_70 = 0;
    local_78 = 0x10000000;
    local_80 = 8;
    local_88 = 0x88;
    FUN_14081cfa3(L"/Script/Landscape",L"LandscapeSubsystem",&DAT_14caa7a28,&DAT_147473290);
  }
  lVar3 = DAT_14caa7a28;
  if ((DAT_14caa7a28 == 0) || (DAT_14c950c29 == '\0')) {
    if (DAT_14caa7a28 != 0) goto LAB_14059f9e4;
LAB_14059fc79:
    lVar5 = 0;
  }
  else {
    FUN_1456cec3c(DAT_14caa7a28);
    if (DAT_14caa7a28 == 0) {
      local_50 = &local_38;
      local_38 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_14588a134;
      local_58 = &LAB_147473291;
      local_60 = FUN_1457f6a1e;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000000;
      local_80 = 8;
      local_88 = 0x88;
      FUN_14081cfa3(L"/Script/Landscape",L"LandscapeSubsystem",&DAT_14caa7a28,&DAT_147473290);
      if (DAT_14caa7a28 == 0) goto LAB_14059fc79;
    }
LAB_14059f9e4:
    if (*(int *)(lVar3 + 0x38) < *(int *)(DAT_14caa7a28 + 0x38)) goto LAB_14059fc79;
    lVar5 = 0;
    if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14caa7a28 + 0x38) * 8) ==
        DAT_14caa7a28 + 0x30) {
      lVar5 = lVar3;
    }
  }
  lVar2 = FUN_1448a6f9c(lVar2 + 0x870,lVar5);
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
  }
LAB_14059fadc:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14059fc9c FUN_14059fc9c body=40 status=ok
// SIG undefined FUN_14059fc9c(void)

void FUN_14059fc9c(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1447210f0(param_1 + -0x390);
  FUN_14059fcc4(uVar1,param_1 + 0x10);
  return;
}



// FUNCTION 14059fcc4 FUN_14059fcc4 body=202 status=ok
// SIG undefined FUN_14059fcc4(void)

longlong FUN_14059fcc4(longlong param_1,int *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_1 == 0) || (((param_2[1] == 0 && *param_2 == 0) && param_2[2] == 0) && param_2[3] == 0)
     ) {
    lVar5 = 0;
  }
  else {
    local_30 = 0;
    lVar5 = 0;
    FUN_140185eae(param_1 + 0x78,&local_30,0,0);
    lVar1 = local_30;
    lVar4 = local_30 + 0x28;
    uVar2 = FUN_1447addd0(param_2,0x10);
    iVar3 = FUN_14059fd90(lVar4,uVar2,param_2);
    if ((((iVar3 != -1) &&
         (lVar4 = (longlong)iVar3 * 0x20 + *(longlong *)(lVar1 + 0x28), lVar4 != 0)) &&
        (lVar5 = *(longlong *)(lVar4 + 0x10), DAT_14c950c29 == '\x01')) && (lVar5 != 0)) {
      FUN_1456cec3c(lVar5);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14059fd90 FUN_14059fd90 body=112 status=ok
// SIG undefined FUN_14059fd90(void)

int FUN_14059fd90(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x20;
        if ((((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + 4 + lVar4) == param_3[1]))
            && (*(int *)(lVar2 + 8 + lVar4) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + lVar2 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1405a0337 FUN_1405a0337 body=1730 status=ok
// SIG undefined FUN_1405a0337(void)

void FUN_1405a0337(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined ***pppuVar5;
  char cVar6;
  undefined **ppuVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined **ppuVar12;
  undefined ***pppuVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined ***pppuVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 auStack_228 [32];
  longlong *local_208;
  undefined8 local_200;
  longlong local_1f8;
  ulonglong local_1f0;
  longlong local_1e8;
  int local_1dc;
  undefined **local_1d8;
  longlong local_1d0;
  undefined ***local_1c8;
  undefined ****local_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  byte local_1a8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_228;
  uVar3 = *(ulonglong *)(param_2[1] + 0x18);
  uVar14 = (uint)uVar3;
  local_208 = param_1;
  local_200 = param_4;
  if ((param_2[7] & 0x80000000000000U) == 0 && (uVar3 & 0x3a800000) == 0) {
    uVar21 = 1;
    if (1 < (int)*(uint *)(param_2 + 6)) {
      uVar21 = (ulonglong)*(uint *)(param_2 + 6);
    }
    uVar9 = 0;
    do {
      plVar4 = local_208;
      pppuVar17 = (undefined ***)
                  ((longlong)*(int *)((longlong)param_2 + 0x34) * uVar9 +
                  *(int *)((longlong)param_2 + 0x44) + param_3);
      if ((uVar14 >> 0x10 & 1) == 0) {
        if ((uVar14 >> 0x15 & 1) == 0) {
          if ((uVar14 >> 0x14 & 1) == 0) {
            if ((uVar3 >> 0x2e & 1) == 0) {
              if ((uVar3 >> 0x2f & 1) == 0) {
                if ((uVar3 >> 0x34 & 1) == 0) {
                  if ((uVar14 >> 0xc & 1) == 0) {
                    if ((uVar3 >> 0x38 & 1) == 0) {
                      lVar20 = local_208[1];
                      if (lVar20 == 0) {
                        FUN_1404a881e(local_208);
                        lVar20 = plVar4[1];
                      }
                      local_1d8 = &PTR_FUN_149e37810;
                      local_1c8 = &local_1d8;
                      local_1c0 = &local_1c8;
                      local_1d0 = lVar20;
                      (**(code **)(*param_2 + 0xd0))(param_2,local_1c0,pppuVar17,0);
                    }
                    else {
                      FUN_1469041c4(local_208,param_2,pppuVar17,local_200);
                    }
                  }
                  else {
                    FUN_1404a87e6(local_208,param_2,pppuVar17,local_200);
                  }
                }
                else {
                  FUN_140176128(local_208,param_2,pppuVar17,local_200);
                }
              }
              else {
                FUN_1469040c8(local_208,param_2,pppuVar17,local_200);
              }
            }
            else {
              local_1a8 = *(byte *)(param_2 + 0x13);
              local_1d8 = (undefined **)param_2[0xe];
              local_1d0 = param_2[0xf];
              local_1c0 = (undefined ****)param_2[0x10];
              uStack_1b8 = (undefined4)param_2[0x11];
              uStack_1b4 = *(undefined4 *)((longlong)param_2 + 0x8c);
              local_1b0 = param_2[0x12];
              iVar2 = *(int *)(pppuVar17 + 1);
              local_1c8 = pppuVar17;
              if (iVar2 != *(int *)((longlong)pppuVar17 +
                                   (ulonglong)((local_1a8 & 1) == 0) * 0x10 + 0x24)) {
                if ((*(ulonglong *)(local_1d8[1] + 0x18) & 0x810001fbc66bc2) == 0) {
                  iVar10 = 0;
                  local_1f8 = param_3;
                  iVar19 = iVar10;
                  if (0 < iVar2) {
                    do {
                      local_1dc = iVar10;
                      cVar6 = FUN_1446ec082(&local_1d8,&local_1dc);
                      iVar19 = iVar10;
                      if (cVar6 != '\0') break;
                      iVar10 = iVar10 + 1;
                      iVar19 = iVar2;
                    } while (iVar2 != iVar10);
                  }
                  local_1dc = iVar19;
                  cVar6 = FUN_1446ec082(&local_1d8);
                  param_3 = local_1f8;
                  if (cVar6 != '\0') {
                    do {
                      if ((local_1a8 & 1) == 0) {
                        ppuVar7 = *local_1c8;
                      }
                      else {
                        ppuVar12 = *local_1c8;
                        ppuVar7 = (undefined **)(((longlong)ppuVar12 >> 0x18) + (longlong)local_1c8)
                        ;
                        if (((ulonglong)ppuVar12 & 1) == 0) {
                          ppuVar7 = ppuVar12;
                        }
                      }
                      FUN_1405a0337(local_208,local_1d8,
                                    (undefined **)
                                    ((longlong)local_1b0._4_4_ * (longlong)iVar19 +
                                    (longlong)ppuVar7),local_200);
                      iVar2 = *(int *)(local_1c8 + 1);
                      do {
                        iVar19 = iVar19 + 1;
                        if (iVar2 <= iVar19) break;
                        local_1dc = iVar19;
                        cVar6 = FUN_1446ec082(&local_1d8,&local_1dc);
                      } while (cVar6 == '\0');
                      local_1dc = iVar19;
                      cVar6 = FUN_1446ec082(&local_1d8,&local_1dc);
                      param_3 = local_1f8;
                    } while (cVar6 != '\0');
                  }
                }
                if ((*(ulonglong *)(*(longlong *)(local_1d0 + 8) + 0x18) & 0x810001fbc66bc2) == 0) {
                  uVar18 = *(uint *)(local_1c8 + 1);
                  if ((int)uVar18 < 1) {
                    uVar16 = 0;
                  }
                  else {
                    pppuVar17 = local_1c8 + 2;
                    uVar15 = 0;
                    do {
                      if ((local_1a8 & 1) == 0) {
                        if ((int)uVar15 < *(int *)(local_1c8 + 5)) {
                          pppuVar13 = (undefined ***)local_1c8[4];
                          if ((undefined ***)local_1c8[4] == (undefined ***)0x0) {
                            pppuVar13 = pppuVar17;
                          }
LAB_1405a05d3:
                          uVar16 = uVar15;
                          if ((*(uint *)((longlong)pppuVar13 + (ulonglong)(uVar15 >> 5) * 4) >>
                               (uVar15 & 0x1f) & 1) != 0) break;
                        }
                      }
                      else if ((int)uVar15 < *(int *)(local_1c8 + 3)) {
                        pppuVar5 = (undefined ***)*pppuVar17;
                        pppuVar13 = (undefined ***)
                                    (((longlong)pppuVar5 >> 0x18) + (longlong)pppuVar17);
                        if (((ulonglong)pppuVar5 & 1) == 0) {
                          pppuVar13 = pppuVar5;
                        }
                        goto LAB_1405a05d3;
                      }
                      uVar15 = uVar15 + 1;
                      uVar16 = uVar18;
                    } while (uVar18 != uVar15);
                  }
                  do {
                    pppuVar17 = local_1c8 + 2;
                    if ((local_1a8 & 1) == 0) {
                      if (((int)uVar16 < 0) || (*(int *)(local_1c8 + 5) <= (int)uVar16)) break;
                      if ((undefined ***)local_1c8[4] != (undefined ***)0x0) {
                        pppuVar17 = (undefined ***)local_1c8[4];
                      }
                      if ((*(uint *)((longlong)pppuVar17 + (ulonglong)(uVar16 >> 5) * 4) >>
                           (uVar16 & 0x1f) & 1) == 0) break;
                      ppuVar7 = *local_1c8;
                    }
                    else {
                      if (((int)uVar16 < 0) || (*(int *)(local_1c8 + 3) <= (int)uVar16)) break;
                      ppuVar12 = *pppuVar17;
                      ppuVar7 = (undefined **)(((longlong)ppuVar12 >> 0x18) + (longlong)pppuVar17);
                      if (((ulonglong)ppuVar12 & 1) == 0) {
                        ppuVar7 = ppuVar12;
                      }
                      if ((*(uint *)((longlong)ppuVar7 + (ulonglong)(uVar16 >> 5) * 4) >>
                           (uVar16 & 0x1f) & 1) == 0) break;
                      ppuVar12 = *local_1c8;
                      ppuVar7 = (undefined **)(((longlong)ppuVar12 >> 0x18) + (longlong)local_1c8);
                      if (((ulonglong)ppuVar12 & 1) == 0) {
                        ppuVar7 = ppuVar12;
                      }
                    }
                    FUN_1405a0337(local_208,local_1d0,
                                  (undefined **)
                                  ((longlong)(int)uVar16 * (longlong)local_1b0._4_4_ +
                                  (longlong)ppuVar7),local_200);
                    uVar18 = *(uint *)(local_1c8 + 1);
                    uVar15 = uVar16 + 1;
                    uVar16 = uVar15;
                    if ((int)uVar15 < (int)uVar18) {
                      pppuVar17 = local_1c8 + 2;
                      do {
                        if ((local_1a8 & 1) == 0) {
                          if ((-2 < (int)(uVar15 - 1)) && ((int)uVar15 < *(int *)(local_1c8 + 5))) {
                            pppuVar13 = (undefined ***)local_1c8[4];
                            if ((undefined ***)local_1c8[4] == (undefined ***)0x0) {
                              pppuVar13 = pppuVar17;
                            }
LAB_1405a095b:
                            uVar16 = uVar15;
                            if ((*(uint *)((longlong)pppuVar13 + (ulonglong)(uVar15 >> 5) * 4) >>
                                 (uVar15 & 0x1f) & 1) != 0) break;
                          }
                        }
                        else if ((-2 < (int)(uVar15 - 1)) && ((int)uVar15 < *(int *)(local_1c8 + 3))
                                ) {
                          pppuVar5 = (undefined ***)*pppuVar17;
                          pppuVar13 = (undefined ***)
                                      (((longlong)pppuVar5 >> 0x18) + (longlong)pppuVar17);
                          if (((ulonglong)pppuVar5 & 1) == 0) {
                            pppuVar13 = pppuVar5;
                          }
                          goto LAB_1405a095b;
                        }
                        uVar15 = uVar15 + 1;
                        uVar16 = uVar18;
                      } while (uVar18 != uVar15);
                    }
                  } while( true );
                }
              }
            }
          }
          else {
            FUN_1405a09fa(local_208,param_2[0xe],pppuVar17,local_200);
          }
        }
        else {
          plVar4 = (longlong *)param_2[0xf];
          if ((*(ulonglong *)(plVar4[1] + 0x18) & 0x810001fbc66bc2) == 0) {
            uVar18 = (uint)*(ulonglong *)(plVar4[1] + 0x18);
            bVar1 = *(byte *)(param_2 + 0xe);
            if ((uVar18 >> 0x10 & 1) == 0 || (bVar1 & 1) != 0) {
              local_1f8 = param_3;
              (**(code **)(*plVar4 + 0x178))(plVar4);
              uVar16 = *(uint *)(pppuVar17 + 1);
              uVar8 = (ulonglong)uVar16;
              param_3 = local_1f8;
              if (uVar8 != 0) {
                local_1e8 = (longlong)*(int *)(param_2[0xf] + 0x34);
                if ((uVar18 >> 0x14 & 1) == 0) {
                  if (0 < (int)uVar16) {
                    lVar20 = 0;
                    do {
                      if (*(int *)(pppuVar17 + 1) == 0) {
                        lVar11 = 0;
                      }
                      else {
                        if ((bVar1 & 1) == 0) {
                          ppuVar12 = *pppuVar17;
                        }
                        else {
                          ppuVar12 = *pppuVar17;
                          if (((ulonglong)ppuVar12 & 1) != 0) {
                            ppuVar12 = (undefined **)
                                       (((longlong)ppuVar12 >> 0x18) + (longlong)pppuVar17);
                          }
                        }
                        lVar11 = (longlong)ppuVar12 + lVar20;
                      }
                      local_1f0 = uVar8;
                      FUN_1405a0337(local_208,plVar4,lVar11,local_200);
                      lVar20 = lVar20 + local_1e8;
                      uVar8 = local_1f0 - 1;
                      param_3 = local_1f8;
                    } while (uVar8 != 0);
                  }
                }
                else if (0 < (int)uVar16) {
                  lVar20 = 0;
                  do {
                    if (*(int *)(pppuVar17 + 1) == 0) {
                      lVar11 = 0;
                    }
                    else {
                      if ((bVar1 & 1) == 0) {
                        ppuVar12 = *pppuVar17;
                      }
                      else {
                        ppuVar12 = *pppuVar17;
                        if (((ulonglong)ppuVar12 & 1) != 0) {
                          ppuVar12 = (undefined **)
                                     (((longlong)ppuVar12 >> 0x18) + (longlong)pppuVar17);
                        }
                      }
                      lVar11 = (longlong)ppuVar12 + lVar20;
                    }
                    local_1f0 = uVar8;
                    FUN_1405a09fa(local_208,plVar4[0xe],lVar11,local_200);
                    lVar20 = lVar20 + local_1e8;
                    uVar8 = local_1f0 - 1;
                    param_3 = local_1f8;
                  } while (uVar8 != 0);
                }
              }
            }
            else {
              local_1f8 = param_3;
              (**(code **)(*local_208 + 0x20))(local_208,pppuVar17);
              param_3 = local_1f8;
            }
          }
        }
      }
      else {
        (**(code **)(*local_208 + 0x10))(local_208,pppuVar17);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar21);
  }
  if ((local_48 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405a09fa FUN_1405a09fa body=83 status=ok
// SIG undefined FUN_1405a09fa(void)

void FUN_1405a09fa(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  for (lVar1 = *(longlong *)(param_2 + 0x78); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x50)) {
    FUN_1405a0337(param_1,lVar1,param_3,param_4);
  }
  return;
}



// FUNCTION 1405a0a54 FUN_1405a0a54 body=280 status=ok
// SIG undefined FUN_1405a0a54(void)

void FUN_1405a0a54(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  float fVar2;
  
  if (*(char *)(param_1 + 0xde) == '\0') {
    fVar2 = *(float *)(param_1 + 0xd8);
    *(float *)(param_1 + 0x3f0) = fVar2;
    if ((*(byte *)(param_1 + 0x460) & 2) != 0) {
      FUN_1405a1978(param_1);
      fVar2 = *(float *)(param_1 + 0x3f4) + *(float *)(param_1 + 0x3f0);
      *(float *)(param_1 + 0x3f0) = fVar2;
    }
    if (*(char *)(param_1 + 0xdd) == '\x01') {
      *(bool *)(param_1 + 0xdc) = 0.0 < fVar2;
    }
    uVar1 = *(undefined4 *)(param_2 + 0x28);
    if (*(char *)(param_1 + 0x2e8) != '\0') {
      FUN_1487d106c(param_1,uVar1);
    }
    if (*(char *)(param_1 + 0x1f0) != '\0') {
      FUN_1405a0b6c(param_1,uVar1);
    }
    if (*(char *)(param_1 + 0xfc) != '\0') {
      FUN_1405a0cf6(param_1,uVar1);
    }
    *(uint *)(param_1 + 0x460) =
         *(uint *)(param_1 + 0x460) & 0xfffffffe | (uint)*(byte *)(param_1 + 0xdc);
    if ((((*(char *)(param_1 + 0xdf) == '\x01') && (*(byte *)(param_1 + 0xdc) == 0)) &&
        ((*(byte *)(param_1 + 0x44c) & 8) == 0)) &&
       (((*(byte *)(param_1 + 0x454) & 8) == 0 && ((*(byte *)(param_1 + 0x45c) & 8) == 0)))) {
      *(undefined1 *)(param_1 + 0xdc) = 1;
    }
  }
  return;
}



// FUNCTION 1405a0b6c FUN_1405a0b6c body=393 status=ok
// SIG undefined FUN_1405a0b6c(void)

void FUN_1405a0b6c(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 *local_40;
  undefined1 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0xdc) != '\0') {
    *(byte *)(param_1 + 0x454) = *(byte *)(param_1 + 0x454) & 0xf7;
    local_40 = (undefined8 *)(param_1 + 0x210);
    local_48 = *(undefined4 *)(param_1 + 0xf4);
    lVar5 = param_1 + 0x268;
LAB_1405a0bac:
    local_30 = param_1 + 0x450;
    local_38 = 0;
    FUN_1405a0e76(param_2,param_1 + 0x418,*(undefined4 *)(param_1 + 0x3f0),lVar5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_68);
  }
  if ((*(byte *)(param_1 + 0x460) & 1) != 0) {
    if (*(char *)(param_1 + 0x2a8) == '\0') {
      if (1 < (byte)(*(char *)(param_1 + 0x268) - 3U)) {
        *(undefined8 *)(param_1 + 0x428) = DAT_14c846508;
        uVar3 = DAT_14c846500._4_4_;
        uVar2 = (undefined4)DAT_14c846500;
        uVar1 = DAT_14c8464f8._4_4_;
        *(undefined4 *)(param_1 + 0x418) = (undefined4)DAT_14c8464f8;
        *(undefined4 *)(param_1 + 0x41c) = uVar1;
        *(undefined4 *)(param_1 + 0x420) = uVar2;
        *(undefined4 *)(param_1 + 0x424) = uVar3;
      }
    }
    else {
      *(byte *)(param_1 + 0x454) = *(byte *)(param_1 + 0x454) | 8;
    }
  }
  if ((*(byte *)(param_1 + 0x454) & 8) == 0) {
    if (*(char *)(param_1 + 0x228) != '\0') {
      lVar5 = param_1 + 0x228;
      local_40 = (undefined8 *)(param_1 + 0x1f8);
      local_48 = *(undefined4 *)(param_1 + 0xf0);
      goto LAB_1405a0bac;
    }
  }
  else {
    puVar4 = &DAT_14c8464f8;
    if (*(char *)(param_1 + 0x2a8) != '\x02') {
      puVar4 = (undefined8 *)(param_1 + 0x210);
    }
    local_18 = puVar4[2];
    local_40 = &local_28;
    local_28 = *puVar4;
    uStack_20 = puVar4[1];
    local_48 = *(undefined4 *)(param_1 + 0xf8);
    local_38 = 1;
    local_30 = param_1 + 0x450;
    FUN_1405a0e76(param_2,param_1 + 0x418,*(undefined4 *)(param_1 + 0x3f0),param_1 + 0x2a8);
  }
  if ((local_8 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405a0cf6 FUN_1405a0cf6 body=383 status=ok
// SIG undefined FUN_1405a0cf6(void)

void FUN_1405a0cf6(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 *local_40;
  longlong local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0xdc) != '\0') {
    *(byte *)(param_1 + 0x44c) = *(byte *)(param_1 + 0x44c) & 0xf7;
    local_40 = (undefined8 *)(param_1 + 0x118);
    local_48 = *(undefined4 *)(param_1 + 0xf4);
    lVar5 = param_1 + 0x170;
LAB_1405a0d36:
    local_38 = param_1 + 0x448;
    FUN_1405a158a(param_2,param_1 + 0x400,*(undefined4 *)(param_1 + 0x3f0),lVar5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_68);
  }
  if ((*(byte *)(param_1 + 0x460) & 1) != 0) {
    if (*(char *)(param_1 + 0x1b0) == '\0') {
      if (1 < (byte)(*(char *)(param_1 + 0x170) - 3U)) {
        *(undefined8 *)(param_1 + 0x410) = DAT_14c8464f0;
        uVar3 = DAT_14c8464e8._4_4_;
        uVar2 = (undefined4)DAT_14c8464e8;
        uVar1 = DAT_14c8464e0._4_4_;
        *(undefined4 *)(param_1 + 0x400) = (undefined4)DAT_14c8464e0;
        *(undefined4 *)(param_1 + 0x404) = uVar1;
        *(undefined4 *)(param_1 + 0x408) = uVar2;
        *(undefined4 *)(param_1 + 0x40c) = uVar3;
      }
    }
    else {
      *(byte *)(param_1 + 0x44c) = *(byte *)(param_1 + 0x44c) | 8;
    }
  }
  if ((*(byte *)(param_1 + 0x44c) & 8) == 0) {
    if (*(char *)(param_1 + 0x130) != '\0') {
      lVar5 = param_1 + 0x130;
      local_40 = (undefined8 *)(param_1 + 0x100);
      local_48 = *(undefined4 *)(param_1 + 0xf0);
      goto LAB_1405a0d36;
    }
  }
  else {
    puVar4 = &DAT_14c8464e0;
    if (*(char *)(param_1 + 0x1b0) != '\x02') {
      puVar4 = (undefined8 *)(param_1 + 0x118);
    }
    local_18 = puVar4[2];
    local_40 = &local_28;
    local_28 = *puVar4;
    uStack_20 = puVar4[1];
    local_48 = *(undefined4 *)(param_1 + 0xf8);
    local_38 = param_1 + 0x448;
    FUN_1405a158a(param_2,param_1 + 0x400,*(undefined4 *)(param_1 + 0x3f0),param_1 + 0x1b0);
  }
  if ((local_8 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405a0e76 FUN_1405a0e76 body=1493 status=ok
// SIG undefined FUN_1405a0e76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405a0e76(float param_1,undefined1 (*param_2) [16],float param_3,char *param_4,
                  undefined8 param_5,double *param_6,char param_7,float *param_8)

{
  double dVar1;
  char cVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  int iVar5;
  uint uVar6;
  double *pdVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auStack_a8 [32];
  float *local_88;
  double local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  double local_68;
  double dStack_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  dVar8 = param_6[2];
  local_68 = *param_6;
  dStack_60 = param_6[1];
  local_58 = dVar8;
  if ((param_4[0x3c] & 1U) != 0) {
    local_58 = (double)param_3;
    local_68 = local_68 * local_58;
    dStack_60 = dStack_60 * local_58;
    local_58 = local_58 * dVar8;
  }
  *(byte *)(param_8 + 1) = *(byte *)(param_8 + 1) & 0xfd;
  local_88 = param_8;
  FUN_1405a144c(dVar8,param_2,param_4);
  cVar2 = *param_4;
  if (cVar2 == '\x03') {
    dVar8 = (double)((*param_8 / 360.0) * param_1);
    *(double *)*param_2 = dVar8 * local_68 + *(double *)*param_2;
    *(double *)(*param_2 + 8) = dStack_60 * dVar8 + *(double *)(*param_2 + 8);
    dVar17 = local_58 * dVar8 + *(double *)param_2[1];
    auVar26 = *param_2;
    dVar8 = (double)DAT_1499387d0;
    dVar1 = DAT_1499387d0._8_8_;
    auVar9 = divpd(auVar26,_DAT_1499387d0);
    auVar19._0_8_ = dVar17 / 360.0;
    auVar19._8_8_ = 0;
    auVar9 = roundpd(auVar9,auVar9,3);
    auVar20 = roundpd(auVar19,auVar19,3);
    auVar31._0_8_ = dVar17 - auVar20._0_8_ * dVar8;
    auVar31._8_8_ = 0.0 - auVar20._8_8_ * dVar1;
    dVar17 = auVar26._0_8_ - auVar9._0_8_ * dVar8;
    dVar18 = auVar26._8_8_ - auVar9._8_8_ * dVar1;
    auVar29._0_8_ = dVar17 + dVar8;
    auVar29._8_8_ = dVar18 + dVar1;
    auVar25._0_8_ = dVar8 + auVar31._0_8_;
    auVar25._8_8_ = dVar1 + auVar31._8_8_;
    auVar10._8_8_ = -(ulonglong)(0.0 <= dVar18);
    auVar10._0_8_ = -(ulonglong)(0.0 <= dVar17);
    auVar3._8_4_ = SUB84(dVar18,0);
    auVar3._0_8_ = dVar17;
    auVar3._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    auVar9 = blendvpd(auVar29,auVar3,auVar10);
    auVar11._8_8_ = -(ulonglong)(0.0 <= auVar31._8_8_);
    auVar11._0_8_ = -(ulonglong)(0.0 <= auVar31._0_8_);
    auVar26 = blendvpd(auVar25,auVar31,auVar11);
    auVar21._0_8_ = auVar9._0_8_ + -360.0;
    auVar21._8_8_ = auVar9._8_8_ + -360.0;
    auVar12._8_8_ = -(ulonglong)(180.0 < auVar9._8_8_);
    auVar12._0_8_ = -(ulonglong)(180.0 < auVar9._0_8_);
    auVar9 = blendvpd(auVar9,auVar21,auVar12);
    dVar8 = auVar26._0_8_;
    *param_2 = auVar9;
    *(ulonglong *)param_2[1] =
         ~-(ulonglong)(180.0 < dVar8) & (ulonglong)dVar8 |
         (ulonglong)(dVar8 + -360.0) & -(ulonglong)(180.0 < dVar8);
LAB_1405a1002:
    if ((~*(byte *)(param_8 + 1) & 0xc) != 0) goto LAB_1405a1013;
    bVar4 = *(byte *)(param_8 + 1) & 0xf7;
  }
  else if (cVar2 == '\x02') {
    if (param_7 == '\0') {
      dVar1 = *(double *)*param_2;
      dVar8 = dVar1;
      if ((param_1 != 0.0) || (NAN(param_1))) {
        if ((dVar1 == local_68) && (!NAN(dVar1) && !NAN(local_68))) {
          dVar17 = *(double *)(*param_2 + 8);
          if ((dVar17 == dStack_60) && (!NAN(dVar17) && !NAN(dStack_60))) {
            dVar18 = *(double *)param_2[1];
            if ((dVar18 == local_58) && (!NAN(dVar18) && !NAN(local_58))) goto LAB_1405a10b4;
          }
        }
        dVar17 = dStack_60;
        dVar18 = local_58;
        dVar8 = local_68;
        if (0.0 < *param_8) {
          param_1 = *param_8 * param_1;
          dVar24 = local_58 - *(double *)param_2[1];
          dVar18 = dStack_60 - *(double *)(*param_2 + 8);
          dVar17 = (double)param_1;
          dVar8 = (double)-param_1;
          dVar28 = local_68 - dVar1;
          if (dVar17 <= local_68 - dVar1) {
            dVar28 = dVar17;
          }
          if (dVar28 <= dVar8) {
            dVar28 = dVar8;
          }
          if (dVar17 <= dVar18) {
            dVar18 = dVar17;
          }
          if (dVar18 <= dVar8) {
            dVar18 = dVar8;
          }
          if (dVar17 <= dVar24) {
            dVar24 = dVar17;
          }
          if (dVar24 <= dVar8) {
            dVar24 = dVar8;
          }
          dVar17 = dVar18 + *(double *)(*param_2 + 8);
          dVar18 = dVar24 + *(double *)param_2[1];
          dVar8 = dVar1 + dVar28;
        }
      }
      else {
        dVar17 = *(double *)(*param_2 + 8);
        dVar18 = *(double *)param_2[1];
      }
LAB_1405a10b4:
      *(double *)*param_2 = dVar8;
      *(double *)(*param_2 + 8) = dVar17;
      *(double *)param_2[1] = dVar18;
    }
    else {
      local_88 = (float *)CONCAT44(local_88._4_4_,*param_8);
      FUN_1409b4488(&local_80,param_2,&local_68);
      *(undefined8 *)param_2[1] = local_70;
      *(double *)*param_2 = local_80;
      *(undefined8 *)(*param_2 + 8) = uStack_78;
      dVar8 = *(double *)*param_2;
    }
    if ((((dVar8 != local_68) || (NAN(dVar8) || NAN(local_68))) ||
        (*(double *)(*param_2 + 8) != dStack_60)) ||
       (NAN(*(double *)(*param_2 + 8)) || NAN(dStack_60))) {
      bVar4 = *(byte *)(param_8 + 1);
    }
    else {
      bVar4 = *(byte *)(param_8 + 1);
      if ((*(double *)param_2[1] == local_58) && (!NAN(*(double *)param_2[1]) && !NAN(local_58))) {
        *(byte *)(param_8 + 1) = bVar4 | 2;
        if ((bVar4 & 8) == 0) goto LAB_1405a1013;
        bVar4 = bVar4 & 0xf7 | 2;
        goto LAB_1405a1104;
      }
    }
    bVar4 = bVar4 & 0xfd;
  }
  else {
    if (cVar2 == '\x04') {
      if (((uint)param_8[1] & 1) == 0) {
        local_88 = (float *)CONCAT44(local_88._4_4_,*param_8);
        FUN_1409b4488(&local_80,param_2,&local_68);
        *(undefined8 *)param_2[1] = local_70;
        *(double *)*param_2 = local_80;
        *(undefined8 *)(*param_2 + 8) = uStack_78;
        if ((*(double *)*param_2 == local_68) && (!NAN(*(double *)*param_2) && !NAN(local_68))) {
          if ((*(double *)(*param_2 + 8) == dStack_60) &&
             (!NAN(*(double *)(*param_2 + 8)) && !NAN(dStack_60))) {
            if ((*(double *)param_2[1] == local_58) &&
               (!NAN(*(double *)param_2[1]) && !NAN(local_58))) {
              bVar4 = *(byte *)(param_8 + 1) | 1;
              goto LAB_1405a1423;
            }
          }
        }
      }
      else {
        local_88 = (float *)CONCAT44(local_88._4_4_,*param_8);
        pdVar7 = &local_80;
        FUN_1409b4488(pdVar7,param_2,&DAT_14c8464f8);
        *(undefined8 *)param_2[1] = local_70;
        *(double *)*param_2 = local_80;
        *(undefined8 *)(*param_2 + 8) = uStack_78;
        auVar26 = *param_2;
        dVar8 = (double)DAT_1499387d0;
        dVar1 = DAT_1499387d0._8_8_;
        auVar9 = divpd(auVar26,_DAT_1499387d0);
        auVar22._8_8_ = 0;
        auVar22._0_8_ = *(double *)param_2[1];
        auVar20 = divpd(auVar22,_DAT_1499387d0);
        auVar9 = roundpd(auVar9,auVar9,3);
        auVar20 = roundpd(auVar20,auVar20,3);
        dVar17 = auVar26._0_8_ - auVar9._0_8_ * dVar8;
        dVar18 = auVar26._8_8_ - auVar9._8_8_ * dVar1;
        auVar32._0_8_ = *(double *)param_2[1] - auVar20._0_8_ * dVar8;
        auVar32._8_8_ = 0.0 - auVar20._8_8_ * dVar1;
        auVar30._0_8_ = dVar17 + dVar8;
        auVar30._8_8_ = dVar18 + dVar1;
        auVar27._0_8_ = dVar8 + auVar32._0_8_;
        auVar27._8_8_ = dVar1 + auVar32._8_8_;
        auVar20._8_8_ = -(ulonglong)(0.0 <= dVar18);
        auVar20._0_8_ = -(ulonglong)(0.0 <= dVar17);
        auVar26._8_4_ = SUB84(dVar18,0);
        auVar26._0_8_ = dVar17;
        auVar26._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
        auVar9 = blendvpd(auVar30,auVar26,auVar20);
        auVar13._8_8_ = -(ulonglong)(0.0 <= auVar32._8_8_);
        auVar13._0_8_ = -(ulonglong)(0.0 <= auVar32._0_8_);
        auVar26 = blendvpd(auVar27,auVar32,auVar13);
        auVar33._0_8_ = auVar9._0_8_ + -360.0;
        auVar33._8_8_ = auVar9._8_8_ + -360.0;
        dVar8 = auVar26._8_8_ + -360.0;
        auVar14._8_8_ = -(ulonglong)(180.0 < auVar9._8_8_);
        auVar14._0_8_ = -(ulonglong)(180.0 < auVar9._0_8_);
        auVar20 = blendvpd(auVar9,auVar33,auVar14);
        auVar15._8_8_ = -(ulonglong)(180.0 < auVar26._8_8_);
        auVar15._0_8_ = -(ulonglong)(180.0 < auVar26._0_8_);
        auVar9._8_4_ = SUB84(dVar8,0);
        auVar9._0_8_ = auVar26._0_8_ + -360.0;
        auVar9._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
        auVar26 = blendvpd(auVar26,auVar9,auVar15);
        auVar23._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar20._8_8_));
        auVar23._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar20._0_8_));
        iVar5 = movmskpd((int)local_70,auVar23);
        auVar16._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar26._8_8_));
        auVar16._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar26._0_8_));
        uVar6 = movmskpd((int)pdVar7,auVar16);
        if ((uVar6 & 0x3fffffff) == 0 && iVar5 == 0) {
          bVar4 = *(byte *)(param_8 + 1) & 0xfe;
LAB_1405a1423:
          *(byte *)(param_8 + 1) = bVar4;
        }
      }
      goto LAB_1405a1002;
    }
    if (cVar2 == '\x01') {
      dVar8 = (double)param_3;
      *(double *)*param_2 = dVar8 * local_68;
      *(double *)(*param_2 + 8) = dStack_60 * dVar8;
      *(double *)param_2[1] = local_58 * dVar8;
    }
    else {
      *(double *)param_2[1] = local_58;
      *(double *)*param_2 = local_68;
      *(double *)(*param_2 + 8) = dStack_60;
    }
    bVar4 = *(byte *)(param_8 + 1) & 0xf5 | 2;
  }
LAB_1405a1104:
  *(byte *)(param_8 + 1) = bVar4;
LAB_1405a1013:
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405a144c FUN_1405a144c body=318 status=ok
// SIG undefined FUN_1405a144c(void)

void FUN_1405a144c(float param_1,float param_2,longlong param_3,float param_4,float *param_5)

{
  float fVar1;
  longlong lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *(float *)(param_3 + 4);
  fVar8 = *(float *)(param_3 + 8);
  *(byte *)(param_5 + 1) = *(byte *)(param_5 + 1) & 0xfb;
  if ((*(byte *)(param_3 + 0x3c) & 2) != 0) {
    lVar2 = FUN_1447e736e(param_3 + 0x10);
    fVar4 = param_2;
    if (lVar2 != 0) {
      uVar3 = FUN_1447e736e(param_3 + 0x10);
      fVar4 = (float)FUN_1449e6cbc(uVar3,param_2);
    }
    fVar8 = (fVar8 - fVar1) * fVar4 + fVar1;
  }
  fVar8 = fVar8 * param_4;
  fVar4 = *param_5;
  if ((fVar4 != fVar8) || (NAN(fVar4) || NAN(fVar8))) {
    fVar6 = *(float *)(param_3 + 0x38);
    fVar7 = fVar6;
    if ((*(byte *)(param_3 + 0x3c) & 4) != 0) {
      fVar7 = param_2 * fVar6;
    }
    if ((fVar6 != 0.0) || (NAN(fVar6))) {
      fVar6 = fVar8 - fVar4;
      fVar5 = fVar8;
      if (1e-08 <= fVar6 * fVar6) {
        fVar7 = fVar7 * param_1;
        if (fVar7 <= fVar6) {
          fVar6 = fVar7;
        }
        if (fVar6 <= -fVar7) {
          fVar6 = -fVar7;
        }
        fVar5 = fVar4 + fVar6;
      }
      if (fVar5 <= fVar1) {
        fVar5 = fVar1;
      }
      *param_5 = fVar5;
      if (fVar5 != fVar8) {
        return;
      }
      if (NAN(fVar5) || NAN(fVar8)) {
        return;
      }
    }
    else {
      *param_5 = fVar8;
    }
  }
  *(byte *)(param_5 + 1) = *(byte *)(param_5 + 1) | 4;
  return;
}



// FUNCTION 1405a158a FUN_1405a158a body=736 status=ok
// SIG undefined FUN_1405a158a(void)

void FUN_1405a158a(undefined4 param_1,double *param_2,undefined8 param_3,byte *param_4,
                  undefined4 param_5,double *param_6,undefined4 *param_7)

{
  double dVar1;
  byte bVar2;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  double local_80;
  double dStack_78;
  double local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = param_6[2];
  local_68 = *param_6;
  uStack_60 = param_6[1];
  if ((param_4[0x3c] & 1) != 0) {
    dVar1 = (double)(float)param_3;
    local_68 = local_68 * dVar1;
    uStack_60 = uStack_60 * dVar1;
    local_58 = dVar1 * local_58;
  }
  *(byte *)(param_7 + 1) = *(byte *)(param_7 + 1) & 0xfd;
  local_88 = param_7;
  FUN_1405a144c(param_1,param_3,param_4,param_5);
  bVar2 = *param_4;
  if (bVar2 == 2) {
    local_88 = (undefined4 *)CONCAT44(local_88._4_4_,*param_7);
    FUN_1405a186c(&local_80,param_2,&local_68,param_1);
    param_2[2] = local_70;
    *param_2 = local_80;
    param_2[1] = dStack_78;
    if ((*param_2 != local_68) || (NAN(*param_2) || NAN(local_68))) {
LAB_1405a16db:
      bVar2 = *(byte *)(param_7 + 1);
    }
    else {
      if ((param_2[1] != uStack_60) || (NAN(param_2[1]) || NAN(uStack_60))) goto LAB_1405a16db;
      bVar2 = *(byte *)(param_7 + 1);
      if ((param_2[2] == local_58) && (!NAN(param_2[2]) && !NAN(local_58))) {
        *(byte *)(param_7 + 1) = bVar2 | 2;
        if ((bVar2 & 8) == 0) goto LAB_1405a16ad;
        bVar2 = bVar2 & 0xf7 | 2;
        goto LAB_1405a16a9;
      }
    }
    bVar2 = bVar2 & 0xfd;
  }
  else if (bVar2 == 1) {
    dVar1 = (double)(float)param_3;
    *param_2 = dVar1 * local_68;
    param_2[1] = uStack_60 * dVar1;
    param_2[2] = local_58 * dVar1;
LAB_1405a1715:
    bVar2 = *(byte *)(param_7 + 1) & 0xf5 | 2;
  }
  else {
    if (1 < bVar2 - 3) {
      param_2[2] = local_58;
      *(undefined4 *)param_2 = (undefined4)local_68;
      *(undefined4 *)((longlong)param_2 + 4) = local_68._4_4_;
      *(undefined4 *)(param_2 + 1) = (undefined4)uStack_60;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_60._4_4_;
      goto LAB_1405a1715;
    }
    if ((*(byte *)(param_7 + 1) & 1) == 0) {
      local_88 = (undefined4 *)CONCAT44(local_88._4_4_,*param_7);
      FUN_1405a186c(&local_80,param_2,&local_68,param_1);
      param_2[2] = local_70;
      *param_2 = local_80;
      param_2[1] = dStack_78;
      if ((*param_2 == local_68) && (!NAN(*param_2) && !NAN(local_68))) {
        if ((param_2[1] == uStack_60) && (!NAN(param_2[1]) && !NAN(uStack_60))) {
          if ((param_2[2] == local_58) && (!NAN(param_2[2]) && !NAN(local_58))) {
            bVar2 = *(byte *)(param_7 + 1) | 1;
            goto LAB_1405a184f;
          }
        }
      }
    }
    else {
      local_88 = (undefined4 *)CONCAT44(local_88._4_4_,*param_7);
      FUN_1405a186c(&local_80,param_2,&DAT_14c8464e0,param_1);
      param_2[2] = local_70;
      *param_2 = local_80;
      param_2[1] = dStack_78;
      if ((((*param_2 == 0.0) && (!NAN(*param_2))) && (param_2[1] == 0.0)) && (!NAN(param_2[1]))) {
        if ((param_2[2] == 0.0) && (!NAN(param_2[2]))) {
          bVar2 = *(byte *)(param_7 + 1) & 0xfe;
LAB_1405a184f:
          *(byte *)(param_7 + 1) = bVar2;
        }
      }
    }
    if ((~*(byte *)(param_7 + 1) & 0xc) != 0) goto LAB_1405a16ad;
    bVar2 = *(byte *)(param_7 + 1) & 0xf7;
  }
LAB_1405a16a9:
  *(byte *)(param_7 + 1) = bVar2;
LAB_1405a16ad:
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405a186c FUN_1405a186c body=268 status=ok
// SIG undefined FUN_1405a186c(void)

void FUN_1405a186c(double *param_1,double *param_2,double *param_3,float param_4,float param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar3 = param_2[2];
  dVar5 = param_3[2] - dVar3;
  dVar4 = param_2[1];
  dVar1 = param_3[1] - dVar4;
  dVar6 = *param_3 - *param_2;
  dVar7 = SQRT(dVar5 * dVar5 + dVar6 * dVar6 + dVar1 * dVar1);
  dVar2 = (double)(param_4 * param_5);
  if (dVar2 < dVar7) {
    if (0.0 < param_4 * param_5) {
      dVar7 = 1.0 / dVar7;
      *param_1 = *param_2 + dVar6 * dVar7 * dVar2;
      param_1[1] = dVar4 + dVar1 * dVar7 * dVar2;
      param_1[2] = dVar3 + dVar5 * dVar7 * dVar2;
      return;
    }
    param_1[2] = param_2[2];
    dVar3 = *param_2;
    dVar4 = param_2[1];
  }
  else {
    param_1[2] = param_3[2];
    dVar3 = *param_3;
    dVar4 = param_3[1];
  }
  *param_1 = dVar3;
  param_1[1] = dVar4;
  return;
}



// FUNCTION 1405a1978 FUN_1405a1978 body=389 status=ok
// SIG undefined FUN_1405a1978(void)

void FUN_1405a1978(longlong param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = *(uint *)(param_1 + 0x460);
  if ((uVar1 & 4) == 0) {
    fVar3 = *(float *)(param_1 + 0x3f8);
    fVar2 = fVar3;
    if (0.0 < *(float *)(param_1 + 0x3e0)) {
      fVar4 = fVar3 - *(float *)(param_1 + 0x3f4);
      if (1e-08 <= fVar4 * fVar4) {
        param_2 = *(float *)(param_1 + 0x3e0) * param_2;
        if (param_2 <= fVar4) {
          fVar4 = param_2;
        }
        if (fVar4 <= -param_2) {
          fVar4 = -param_2;
        }
        fVar2 = *(float *)(param_1 + 0x3f4) + fVar4;
      }
    }
    *(float *)(param_1 + 0x3f4) = fVar2;
    if (ABS(fVar2 - fVar3) <= 1e-08) {
      *(undefined4 *)(param_1 + 0x3fc) = *(undefined4 *)(param_1 + 1000);
      *(uint *)(param_1 + 0x460) = uVar1 | 4;
    }
  }
  else {
    fVar3 = *(float *)(param_1 + 0x3fc);
    if (0.0 < fVar3) {
      fVar3 = fVar3 - param_2;
      *(float *)(param_1 + 0x3fc) = fVar3;
      if (fVar3 <= 0.0) {
        param_2 = param_2 + fVar3;
        *(undefined4 *)(param_1 + 0x3f8) = *(undefined4 *)(param_1 + 0x3f4);
      }
    }
    if (fVar3 <= 0.0) {
      fVar2 = 0.0;
      fVar3 = 0.0 - *(float *)(param_1 + 0x3f8);
      if (1e-08 <= fVar3 * fVar3) {
        param_2 = param_2 * *(float *)(param_1 + 0x3ec);
        if (param_2 <= fVar3) {
          fVar3 = param_2;
        }
        if (fVar3 <= -param_2) {
          fVar3 = -param_2;
        }
        fVar2 = *(float *)(param_1 + 0x3f8) + fVar3;
      }
      *(float *)(param_1 + 0x3f8) = fVar2;
      if (ABS(fVar2) <= 1e-08) {
        *(undefined4 *)(param_1 + 0x3f8) = 0;
        *(uint *)(param_1 + 0x460) = uVar1 & 0xfffffff9;
        fVar2 = 0.0;
      }
      *(float *)(param_1 + 0x3f4) = fVar2;
    }
  }
  return;
}



// FUNCTION 1405a1b06 FUN_1405a1b06 body=111 status=ok
// SIG undefined FUN_1405a1b06(void)

undefined8 FUN_1405a1b06(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  uVar1 = DAT_14cb72048;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = param_1;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_144837462(uVar1,local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405a1b76 FUN_1405a1b76 body=264 status=ok
// SIG undefined FUN_1405a1b76(void)

undefined4 FUN_1405a1b76(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  iVar1 = *(int *)(param_1 + 0x170);
  if ((longlong)iVar1 == 0) {
    uVar6 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x168);
    lVar7 = 0;
    do {
      uVar2 = *(uint *)(lVar4 + lVar7);
      if (((-1 < (longlong)(int)uVar2) && ((int)uVar2 < *(int *)(param_1 + 0x140))) &&
         (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x138) + (longlong)(int)uVar2 * 8),
         lVar5 != 0)) {
        if (((*(byte *)(lVar5 + 0x9c) & 1) == 0) ||
           (((*(byte *)(lVar5 + 0x9c) & 2) != 0 && (*(longlong *)(lVar5 + 0x5a8) == 0)))) {
          FUN_1449e7158(param_1,lVar5,0);
          iVar3 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
            FUN_140097524(param_2,iVar3);
          }
          *(longlong *)(*param_2 + (longlong)iVar3 * 8) = lVar5;
        }
        else {
          FUN_1405a1c7e((ulonglong)(uVar2 >> 2) * 0x150 + *(longlong *)(param_1 + 0x10),uVar2 & 3);
        }
      }
      lVar7 = lVar7 + 4;
    } while ((longlong)iVar1 * 4 != lVar7);
    uVar6 = *(undefined4 *)(param_1 + 0x170);
  }
  *(undefined4 *)(param_1 + 0x170) = 0;
  if (*(int *)(param_1 + 0x174) != 0) {
    FUN_14481578e(param_1 + 0x168,0);
  }
  return uVar6;
}



// FUNCTION 1405a1c7e FUN_1405a1c7e body=1023 status=ok
// SIG undefined FUN_1405a1c7e(void)

void FUN_1405a1c7e(longlong param_1,int param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_118 [32];
  undefined4 *local_f8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  double dStack_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar7 = (longlong)param_2;
  uVar4 = *(uint *)(param_1 + 0x100 + lVar7 * 4);
  if (uVar4 != 0) {
    if (uVar4 == 0xffff0000) {
      local_a8 = *(double *)(param_3 + 400);
      local_d8 = *(double *)(param_3 + 0x160);
      uStack_d0 = *(double *)(param_3 + 0x168);
      local_c8 = *(double *)(param_3 + 0x170);
      uStack_c0 = *(double *)(param_3 + 0x178);
      local_b8 = *(double *)(param_3 + 0x180);
      dStack_b0 = *(double *)(param_3 + 0x188);
    }
    else if (*(double *)(param_3 + 400) <= 0.0) {
      local_c8 = DAT_14c8464f0;
      local_d8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_d0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      uStack_c0 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      local_b8 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      dStack_b0 = DAT_14c8464f0;
      local_a8 = 0.0;
    }
    else {
      dVar1 = *(double *)(param_3 + 0x188);
      dVar10 = *(double *)(param_3 + 0x170) - dVar1;
      dVar2 = *(double *)(param_3 + 0x180);
      dVar13 = *(double *)(param_3 + 0x168) - dVar2;
      dVar3 = *(double *)(param_3 + 0x178);
      dVar11 = *(double *)(param_3 + 0x160) - dVar3;
      uVar8 = 0xe0000000;
      uVar9 = 0x3f1a36e2;
      uVar14 = SUB84(dVar1,0);
      uVar15 = (int)((ulonglong)dVar1 >> 0x20);
      if (dVar1 <= 9.999999747378752e-05) {
        uVar14 = uVar8;
        uVar15 = uVar9;
      }
      uVar16 = SUB84(dVar2,0);
      uVar17 = (int)((ulonglong)dVar2 >> 0x20);
      if (dVar2 <= 9.999999747378752e-05) {
        uVar16 = uVar8;
        uVar17 = uVar9;
      }
      uVar18 = SUB84(dVar3,0);
      uVar19 = (int)((ulonglong)dVar3 >> 0x20);
      if (dVar3 <= 9.999999747378752e-05) {
        uVar18 = uVar8;
        uVar19 = uVar9;
      }
      dVar3 = (double)CONCAT44(uVar15,uVar14) / 31.5;
      dVar5 = (double)CONCAT44(uVar17,uVar16) / 15.5;
      dVar6 = (double)CONCAT44(uVar19,uVar18) / 15.5;
      dVar2 = (double)(uVar4 >> 10 & 0x3f) * dVar3 + dVar10;
      dVar1 = (double)(uVar4 >> 5 & 0x1f) * dVar5 + dVar13;
      dVar12 = (double)(uVar4 & 0x1f) * dVar6 + dVar11;
      dVar10 = (double)(uVar4 >> 0x1a) * dVar3 + dVar10;
      dVar13 = (double)(uVar4 >> 0x15 & 0x1f) * dVar5 + dVar13;
      dVar11 = (double)(uVar4 >> 0x10 & 0x1f) * dVar6 + dVar11;
      local_c8 = (dVar2 + dVar10) * 0.5;
      uStack_d0 = (dVar1 + dVar13) * 0.5;
      local_d8 = (dVar12 + dVar11) * 0.5;
      dStack_b0 = (dVar10 - dVar2) * 0.5;
      local_b8 = (dVar13 - dVar1) * 0.5;
      uStack_c0 = (dVar11 - dVar12) * 0.5;
      local_a8 = SQRT(dStack_b0 * dStack_b0 + uStack_c0 * uStack_c0 + local_b8 * local_b8);
    }
    dVar1 = local_a8;
    local_dc = 0;
    local_e0 = 0;
    local_f8 = &local_e4;
    local_e4 = 0x7f7fffff;
    FUN_140106a52(param_3,&local_d8,&local_dc,&local_e0);
    *(double *)(param_1 + lVar7 * 8) = local_d8;
    *(double *)(param_1 + 0x20 + lVar7 * 8) = uStack_d0;
    *(double *)(param_1 + 0x40 + lVar7 * 8) = local_c8;
    *(undefined8 *)(param_1 + 0x60 + lVar7 * 8) = *(undefined8 *)(param_3 + 0x160);
    *(undefined8 *)(param_1 + 0x80 + lVar7 * 8) = *(undefined8 *)(param_3 + 0x168);
    *(undefined8 *)(param_1 + 0xa0 + lVar7 * 8) = *(undefined8 *)(param_3 + 0x170);
    *(float *)(param_1 + 0xc0 + lVar7 * 4) = (float)uStack_c0;
    *(float *)(param_1 + 0xd0 + lVar7 * 4) = (float)local_b8;
    *(float *)(param_1 + 0xe0 + lVar7 * 4) = (float)dStack_b0;
    *(float *)(param_1 + 0xf0 + lVar7 * 4) = (float)dVar1;
    *(undefined4 *)(param_1 + 0x100 + lVar7 * 4) = 0xffff0000;
    *(undefined4 *)(param_1 + 0x110 + lVar7 * 4) = local_dc;
    *(undefined4 *)(param_1 + 0x120 + lVar7 * 4) = local_e0;
    *(undefined4 *)(param_1 + 0x130 + lVar7 * 4) = local_e4;
  }
  if ((local_a0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405a207e FUN_1405a207e body=114 status=ok
// SIG undefined FUN_1405a207e(void)

void FUN_1405a207e(longlong *param_1,int param_2)

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



// FUNCTION 1405a20f0 FUN_1405a20f0 body=478 status=ok
// SIG undefined FUN_1405a20f0(void)

void FUN_1405a20f0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar4 = (uint)param_2;
  if (-1 < (int)uVar4) {
    iVar2 = *(int *)(param_1 + 0x140);
    if ((int)uVar4 < iVar2) {
      if ((longlong)*(int *)(param_1 + 0x170) != 0) {
        uVar6 = 0;
        lVar5 = 0;
        do {
          if (*(uint *)(*(longlong *)(param_1 + 0x168) + uVar6) == uVar4) {
            if ((int)(~uVar6 >> 2) != 0) {
              *(undefined4 *)(*(longlong *)(param_1 + 0x168) + (lVar5 >> 0x20) * 4) = 0xffffffff;
              iVar2 = *(int *)(param_1 + 0x140);
            }
            break;
          }
          lVar5 = lVar5 + 0x100000000;
          uVar6 = uVar6 + 4;
        } while ((longlong)*(int *)(param_1 + 0x170) * 4 != uVar6);
      }
      if ((int)uVar4 < iVar2) {
        plVar1 = (longlong *)(param_1 + 0x148);
        iVar2 = *(int *)(param_1 + 0x150);
        uVar3 = iVar2 + 1;
        if (uVar3 == *(int *)(param_1 + 0x18) << 2) {
          *(undefined4 *)(param_1 + 0x18) = 0;
          if (*(int *)(param_1 + 0x1c) != 0) {
            FUN_1405a251a((longlong *)(param_1 + 0x10));
          }
          *(undefined4 *)(param_1 + 0x140) = 0;
          if (*(int *)(param_1 + 0x144) != 0) {
            FUN_14009a542((longlong *)(param_1 + 0x138),0);
          }
          *(undefined4 *)(param_1 + 0x150) = 0;
          if (*(int *)(param_1 + 0x154) != 0) {
            FUN_14481578e(plVar1,0);
            return;
          }
        }
        else {
          *(uint *)(param_1 + 0x150) = uVar3;
          if (*(uint *)(param_1 + 0x154) < uVar3) {
            FUN_1446f48e2(plVar1);
          }
          *(uint *)(*plVar1 + (longlong)iVar2 * 4) = uVar4;
          lVar5 = (param_2 >> 2 & 0x3fffffff) * 0x150 + *(longlong *)(param_1 + 0x10);
          uVar6 = (ulonglong)(uVar4 & 3);
          *(undefined8 *)(lVar5 + uVar6 * 8) = 0;
          *(undefined8 *)(lVar5 + 0x20 + uVar6 * 8) = 0;
          *(undefined8 *)(lVar5 + 0x40 + uVar6 * 8) = 0;
          *(undefined8 *)(lVar5 + 0x60 + uVar6 * 8) = 0;
          *(undefined8 *)(lVar5 + 0x80 + uVar6 * 8) = 0;
          *(undefined8 *)(lVar5 + 0xa0 + uVar6 * 8) = 0;
          *(undefined4 *)(lVar5 + 0xc0 + uVar6 * 4) = 0;
          *(undefined4 *)(lVar5 + 0xd0 + uVar6 * 4) = 0;
          *(undefined4 *)(lVar5 + 0xe0 + uVar6 * 4) = 0;
          *(undefined4 *)(lVar5 + 0xf0 + uVar6 * 4) = 0;
          *(undefined4 *)(lVar5 + 0x100 + uVar6 * 4) = 0;
          *(undefined4 *)(lVar5 + 0x110 + uVar6 * 4) = 0;
          *(undefined4 *)(lVar5 + 0x120 + uVar6 * 4) = 0;
          *(undefined4 *)(lVar5 + 0x130 + uVar6 * 4) = 0x7f7fffff;
          *(undefined4 *)(lVar5 + 0x140 + uVar6 * 4) = 0xff7fffff;
          *(undefined8 *)(*(longlong *)(param_1 + 0x138) + (param_2 & 0xffffffff) * 8) = 0;
        }
      }
    }
  }
  return;
}



// FUNCTION 1405a22ce FUN_1405a22ce body=114 status=ok
// SIG undefined FUN_1405a22ce(void)

void FUN_1405a22ce(longlong *param_1,int param_2)

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



// FUNCTION 1405a2340 FUN_1405a2340 body=341 status=ok
// SIG undefined FUN_1405a2340(void)

void FUN_1405a2340(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)(param_1 + 0x68);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (uVar2 < 0xd) {
    uVar6 = 0xc;
  }
  else {
    lVar3 = (longlong)(int)uVar2;
    if (0xc < *(uint *)(param_1 + 0x6c)) {
      lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
    }
    uVar4 = lVar3 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar6 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
        }
        else {
          if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar1 = (&DAT_14c841e00)[uVar6 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar1) {
              uVar5 = (ulonglong)bVar1;
            }
            uVar7 = 0x32 - (ulonglong)bVar1;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_1405a23cc;
              lVar3 = uVar5 + 1 + uVar7;
              uVar7 = uVar7 - 1;
            } while (lVar3 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar6 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
LAB_1405a23cc:
    uVar6 = 0x7fffffff;
    if ((int)uVar2 <= (int)(uVar4 >> 3)) {
      uVar6 = uVar4 >> 3 & 0xffffffff;
    }
  }
  *(int *)(param_1 + 0x6c) = (int)uVar6;
  FUN_1405a2496(param_1,param_2,uVar6,8);
  return;
}



// FUNCTION 1405a2496 FUN_1405a2496 body=132 status=ok
// SIG undefined FUN_1405a2496(void)

void FUN_1405a2496(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x60);
  if ((uint)param_3 < 0xd) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x60,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x60),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x60,param_2,param_3,param_4);
  return;
}



// FUNCTION 1405a251a FUN_1405a251a body=48 status=ok
// SIG undefined FUN_1405a251a(void)

void FUN_1405a251a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x150,0x10);
  }
  return;
}



// FUNCTION 1405a254a FUN_1405a254a body=103 status=ok
// SIG undefined FUN_1405a254a(void)

ulonglong FUN_1405a254a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1405a2594:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1405a2594;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 1405a25b2 FUN_1405a25b2 body=37 status=ok
// SIG undefined FUN_1405a25b2(void)

void FUN_1405a25b2(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  FUN_1402a7054(param_1,(uint)CONCAT71((int7)((ulonglong)uVar1 >> 8),
                                       (byte)uVar1 ^ *(byte *)(param_1 + 0x30)) ^ 1);
  return;
}



// FUNCTION 1405a25e0 FUN_1405a25e0 body=57 status=ok
// SIG undefined FUN_1405a25e0(void)

void FUN_1405a25e0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22348 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22348 = FUN_140002ddd(FUN_1464381b6,uVar1,L"GbxTeamDef");
  }
  return;
}



// FUNCTION 1405a2619 FUN_1405a2619 body=57 status=ok
// SIG undefined FUN_1405a2619(void)

void FUN_1405a2619(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac06b0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac06b0 = FUN_14171c317(FUN_1417acdf7,uVar1,L"ECollisionChannel");
  }
  return;
}



// FUNCTION 1405a2652 FUN_1405a2652 body=228 status=ok
// SIG undefined FUN_1405a2652(void)

longlong FUN_1405a2652(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbf6828 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140fe7df2;
    local_38 = &LAB_14905f42f;
    local_40 = FUN_1405ba758;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x3e0;
    FUN_14081cfa3(L"/Script/GbxBlockingVolumes",L"GbxBlockingVolume",&DAT_14cbf6828,&DAT_14905f42e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbf6828;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405a2738 FUN_1405a2738 body=221 status=ok
// SIG undefined FUN_1405a2738(void)

longlong FUN_1405a2738(void)

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
  if (DAT_14cbf6810 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14905f42b;
    local_40 = FUN_146674647;
    local_48 = L"GearboxEngine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/GbxBlockingVolumes",L"GbxBlockingVolumeSettings",&DAT_14cbf6810,
                  &DAT_14905f42a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbf6810;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405a281e FUN_1405a281e body=415 status=ok
// SIG undefined FUN_1405a281e(void)

undefined8 FUN_1405a281e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  uint local_48 [6];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = FUN_1405a29be();
  FUN_1402057ac(param_2,param_1,uVar3,0);
  if (*(longlong *)(param_1 + 0xc) == DAT_14cb86688) {
    puVar5 = &DAT_14cb86648;
  }
  else {
    if (*(longlong *)(param_1 + 0xc) != DAT_14cb86690) goto LAB_1405a286e;
    puVar5 = &DAT_14cb86658;
  }
  *(undefined8 *)(param_1 + 0xc) = *puVar5;
LAB_1405a286e:
  FUN_1405a29f8(param_1);
  local_50 = DAT_14cb866a0;
  local_58 = DAT_14cb86698;
  FUN_1448075d0(local_48);
  pbVar2 = (byte *)*param_2;
  if (pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 2) == 0) {
      plVar4 = &DAT_14c9a1288;
    }
    else {
      plVar4 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    if ((int)plVar4[2] != *(int *)((longlong)plVar4 + 0x3c)) {
      plVar6 = plVar4 + 8;
      if ((longlong *)plVar4[9] != (longlong *)0x0) {
        plVar6 = (longlong *)plVar4[9];
      }
      iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)plVar4[10] - 1U & local_48[0]) * 4);
      if (iVar7 != -1) {
        do {
          lVar1 = *plVar4 + (longlong)iVar7 * 0x40;
          if (*(uint *)(*plVar4 + (longlong)iVar7 * 0x40) == local_48[0]) {
            if ((((lVar1 != 0) &&
                 (puVar5 = (undefined8 *)(lVar1 + 0x28), puVar5 != (undefined8 *)0x0)) &&
                ((byte *)*puVar5 != (byte *)0x0)) && ((*(byte *)*puVar5 & 0x40) == 0))
            goto LAB_1405a2908;
            break;
          }
          iVar7 = *(int *)(lVar1 + 0x38);
        } while (iVar7 != -1);
      }
    }
  }
  puVar5 = &DAT_14c9a1308;
LAB_1405a2908:
  if ((byte *)*puVar5 == (byte *)0x0) {
    bVar8 = false;
  }
  else {
    bVar8 = (*(byte *)*puVar5 & 3) != 0;
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (!bVar8) {
    plVar4 = (longlong *)FUN_1405a2e64(param_1);
    if (plVar4 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 8))(plVar4);
      FUN_1402057ac(param_2,plVar4,uVar3,0);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1405a29be FUN_1405a29be body=57 status=ok
// SIG undefined FUN_1405a29be(void)

void FUN_1405a29be(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c458 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c458 = FUN_140002ddd(FUN_1465312ff,uVar1,L"MissionGraphAlias");
  }
  return;
}



// FUNCTION 1405a29f8 FUN_1405a29f8 body=89 status=ok
// SIG undefined FUN_1405a29f8(void)

void FUN_1405a29f8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1405a2a52(*(undefined8 *)(param_1 + 0xc));
  lVar2 = FUN_1400014c6(param_1 + 0x18);
  if (lVar1 == lVar2) {
    return;
  }
  FUN_1405a2dce(param_1 + 0x18,lVar1,1,0);
                    /* WARNING: Could not recover jumptable at 0x0001405a2a4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))
            (*(longlong **)(param_1 + 0x18),*(undefined8 *)(param_1 + 0xc));
  return;
}



// FUNCTION 1405a2a52 FUN_1405a2a52 body=445 status=ok
// SIG undefined FUN_1405a2a52(void)

void FUN_1405a2a52(longlong param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  undefined *puVar7;
  
  if (DAT_14cb86658 == param_1) {
    FUN_14653158e();
    return;
  }
  if (DAT_14cb86660 == param_1) {
    FUN_146531620();
    return;
  }
  if (DAT_14cb86668 == param_1) {
    FUN_14653179e();
    return;
  }
  if (DAT_14cb86670 == param_1) {
    FUN_146531830();
    return;
  }
  if (DAT_14cb86678 == param_1) {
    FUN_1465318c2();
    return;
  }
  if (DAT_14cb86680 == param_1) {
    FUN_1405a2f3c();
    return;
  }
  if ((DAT_14cb86648 == param_1) || (DAT_14cb86650 == param_1)) {
    FUN_1405a2ec8();
    return;
  }
  lVar4 = FUN_1405a2cae();
  lVar6 = *(longlong *)(lVar4 + 0x110);
  if (lVar6 == 0) {
    FUN_140aa6c08(lVar4);
    lVar6 = *(longlong *)(lVar4 + 0x110);
    if (lVar6 == 0) goto LAB_1405a2ad8;
  }
  cVar3 = FUN_1405a2c4a(lVar6,param_1);
  if (cVar3 != '\0') {
    FUN_1405a2f02();
    return;
  }
LAB_1405a2ad8:
  if (DAT_14cb86328 == param_1) {
    FUN_1405a2d94();
    return;
  }
  if (DAT_14cb866b8 != DAT_14cb866e4) {
    uVar2 = (uint)((ulonglong)param_1 >> 0x10);
    uVar5 = (uint)param_1 & 0xffff;
    puVar7 = &DAT_14cb866e8;
    if (DAT_14cb866f0 != (undefined *)0x0) {
      puVar7 = DAT_14cb866f0;
    }
    for (iVar1 = *(int *)(puVar7 + (ulonglong)
                                   (DAT_14cb866f8 - 1U &
                                   (int)((ulonglong)param_1 >> 0x20) +
                                   ((uint)param_1 << 0x10 | uVar5) +
                                   (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
        iVar1 != -1; iVar1 = *(int *)(DAT_14cb866b0 + (longlong)iVar1 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cb866b0 + (longlong)iVar1 * 0x18) == param_1) {
        FUN_14653170c();
        return;
      }
    }
  }
  FUN_1405a2c10();
  return;
}



// FUNCTION 1405a2c10 FUN_1405a2c10 body=57 status=ok
// SIG undefined FUN_1405a2c10(void)

void FUN_1405a2c10(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c488 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c488 = FUN_140002ddd(FUN_1465313ed,uVar1,L"MissionGraphAliasTypeData_FactsActor");
  }
  return;
}



// FUNCTION 1405a2c4a FUN_1405a2c4a body=100 status=ok
// SIG undefined FUN_1405a2c4a(void)

bool FUN_1405a2c4a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_2 != 0) && ((longlong)*(int *)(param_1 + 0x50) != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    lVar1 = (longlong)*(int *)(param_1 + 0x50) * 0x48;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar3) == param_2) {
        if (*(longlong *)(lVar2 + 8 + lVar3) != 0) {
          return true;
        }
        break;
      }
      lVar3 = lVar3 + 0x48;
    } while (lVar1 != lVar3);
    lVar2 = lVar2 + 0x18;
    do {
      if (*(longlong *)(lVar2 + -0x18) == param_2) {
        lVar2 = FUN_14000e0c8();
        return lVar2 != 0;
      }
      lVar2 = lVar2 + 0x48;
      lVar1 = lVar1 + -0x48;
    } while (lVar1 != 0);
  }
  return false;
}



// FUNCTION 1405a2cae FUN_1405a2cae body=228 status=ok
// SIG undefined FUN_1405a2cae(void)

longlong FUN_1405a2cae(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb57a70 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140eca530;
    local_38 = &LAB_1486448c9;
    local_40 = &LAB_145ad43c1;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x68;
    FUN_14081cfa3(L"/Script/GbxGame",L"FactsSystemSettings",&DAT_14cb57a70,&DAT_1486448c8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb57a70;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405a2d94 FUN_1405a2d94 body=57 status=ok
// SIG undefined FUN_1405a2d94(void)

void FUN_1405a2d94(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c4a0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c4a0 = FUN_140002ddd(FUN_146531447,uVar1,L"MissionGraphAliasTypeData_GenericFact");
  }
  return;
}



// FUNCTION 1405a2dce FUN_1405a2dce body=91 status=ok
// SIG undefined FUN_1405a2dce(void)

void FUN_1405a2dce(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_1405a2e2a();
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(param_2 + 0x38))) {
      lVar2 = 0;
      if (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
          lVar1 + 0x30) {
        lVar2 = param_2;
      }
      goto LAB_1405a2e0e;
    }
  }
  lVar2 = 0;
LAB_1405a2e0e:
  FUN_140005f6c(param_1,lVar2,param_3,param_4);
  return;
}



// FUNCTION 1405a2e2a FUN_1405a2e2a body=57 status=ok
// SIG undefined FUN_1405a2e2a(void)

void FUN_1405a2e2a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c440 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c440 = FUN_140002ddd(FUN_1465312a3,uVar1,L"MissionGraphAliasTypeData");
  }
  return;
}



// FUNCTION 1405a2e64 FUN_1405a2e64 body=99 status=ok
// SIG undefined FUN_1405a2e64(void)

undefined8 FUN_1405a2e64(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  plVar4 = *(longlong **)(param_1 + 0x20);
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
  return uVar3;
}



// FUNCTION 1405a2ec8 FUN_1405a2ec8 body=57 status=ok
// SIG undefined FUN_1405a2ec8(void)

void FUN_1405a2ec8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c4b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c4b8 = FUN_140002ddd(FUN_1465314a1,uVar1,L"MissionGraphAliasTypeData_MissionFact");
  }
  return;
}



// FUNCTION 1405a2f02 FUN_1405a2f02 body=57 status=ok
// SIG undefined FUN_1405a2f02(void)

void FUN_1405a2f02(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c518 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c518 = FUN_140002ddd(FUN_1465316b1,uVar1,L"MissionGraphAliasTypeData_GbxDef");
  }
  return;
}



// FUNCTION 1405a2f3c FUN_1405a2f3c body=57 status=ok
// SIG undefined FUN_1405a2f3c(void)

void FUN_1405a2f3c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c590 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c590 = FUN_140002ddd(FUN_146531953,uVar1,L"MissionGraphAliasTypeData_DialogEnumValue");
  }
  return;
}



// FUNCTION 1405a2f76 FUN_1405a2f76 body=18 status=ok
// SIG undefined FUN_1405a2f76(void)

void FUN_1405a2f76(longlong param_1,undefined8 param_2)

{
  FUN_1405a2f88(param_1 + 0x410,param_2,0,0);
  return;
}



// FUNCTION 1405a2f88 FUN_1405a2f88 body=276 status=ok
// SIG undefined FUN_1405a2f88(void)

void FUN_1405a2f88(longlong param_1,byte param_2,char param_3,char param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  
  if (param_2 == 0) {
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfe;
    uVar4 = 0;
    if (param_3 != '\0') goto LAB_1405a2fb8;
  }
  else {
    if ((((((*(int *)(param_1 + 0x144) != 0) &&
           (uVar1 = *(uint *)(param_1 + 0x140), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
         && ((plVar3 = (longlong *)
                       ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
             plVar3 != (longlong *)0x0 && ((int)plVar3[2] == *(int *)(param_1 + 0x144))))) &&
        (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 &&
         ((plVar3 = (longlong *)*plVar3, plVar3 != (longlong *)0x0 &&
          ((*(byte *)((longlong)plVar3 + 0x9c) & 1) != 0)))))) &&
       ((lVar2 = (**(code **)(*plVar3 + 0x7b8))
                           (plVar3,0,CONCAT71((int7)((ulonglong)DAT_14c9647c8 >> 8),1),0xffffffff),
        lVar2 == param_1 || (plVar3[0xa3] != 0)))) {
      if ((param_4 == '\0') && (plVar3[0x24] != 0)) {
        (**(code **)(*plVar3 + 0x4a0))(plVar3,&DAT_14cadad9c);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        FUN_1405a3210(param_1);
      }
    }
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfe | param_2;
    if (param_3 != '\0') goto LAB_1405a2fb8;
    uVar4 = 0x3f800000;
  }
  *(undefined4 *)(param_1 + 0x134) = uVar4;
LAB_1405a2fb8:
  FUN_1405a309c(param_1);
  return;
}



// FUNCTION 1405a309c FUN_1405a309c body=371 status=ok
// SIG undefined FUN_1405a309c(void)

void FUN_1405a309c(uint *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_78 [40];
  char *local_50;
  byte *local_48;
  uint *local_40;
  code *local_38;
  undefined1 **local_30;
  char local_22;
  byte local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((param_1[2] & 1) != 0) && (param_1[1] != 0)) {
    uVar5 = *param_1;
    local_21 = false;
    if (((int)uVar5 < 0) || (DAT_14c9647dc <= (int)uVar5)) goto LAB_1405a30c1;
    plVar2 = (longlong *)
             ((ulonglong)((uVar5 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
    if (((plVar2 != (longlong *)0x0) && (*(uint *)(plVar2 + 2) == param_1[1])) &&
       ((*(uint *)(plVar2 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
        lVar4 = *plVar2;
      }
      else {
        lVar4 = 0;
      }
      lVar3 = DAT_14c997cc0;
      if (DAT_14c997cc0 == 0) {
        plVar2 = (longlong *)FUN_145a62958();
        lVar3 = plVar2[0x22];
        if (lVar3 == 0) {
          (**(code **)(*plVar2 + 1000))(plVar2);
          lVar3 = plVar2[0x22];
        }
      }
      cVar1 = *(char *)(lVar3 + 0x75);
      if (*(char *)(lVar4 + 0x31) != '\0') {
        cVar1 = *(char *)(lVar4 + 0x31);
      }
      if (cVar1 != '\x03') {
        local_21 = *(longlong *)(param_1 + 0x4e) != 0;
        goto LAB_1405a30c1;
      }
    }
  }
  local_21 = false;
LAB_1405a30c1:
  local_48 = &local_21;
  local_50 = &local_22;
  local_22 = '\0';
  local_30 = &local_50;
  local_38 = FUN_143620226;
  local_40 = param_1;
  FUN_144966906(param_1 + 0x4e);
  if (local_22 == '\x01') {
    if (local_21 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0x3f800000;
    }
    param_1[0x4d] = uVar5;
    *(byte *)(param_1 + 2) = (byte)param_1[2] & 0xfe | local_21;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405a3210 FUN_1405a3210 body=694 status=ok
// SIG undefined FUN_1405a3210(void)

void FUN_1405a3210(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  byte *pbVar6;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  undefined1 *local_c8;
  code *local_c0;
  code *local_b8 [12];
  longlong local_58 [3];
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (((((*(int *)(param_1 + 0x144) != 0) && (uVar1 = *(uint *)(param_1 + 0x140), -1 < (int)uVar1))
       && ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar4 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar4 != (longlong *)0x0 && ((int)plVar4[2] == *(int *)(param_1 + 0x144))))) &&
     (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 &&
      (plVar4 = (longlong *)*plVar4, plVar4 != (longlong *)0x0)))) {
    local_58[2] = 0;
    uStack_40 = 0;
    local_58[0] = 0;
    local_58[1] = 0;
    (**(code **)(*plVar4 + 0x7e8))(plVar4,local_58 + 2,local_58,1);
    if (0 < (int)uStack_40) {
      lVar5 = 0;
      do {
        lVar2 = *(longlong *)(local_58[2] + lVar5 * 8);
        if (lVar2 != param_1) {
          if ((((*(int *)(lVar2 + 0x144) == 0) || (uVar1 = *(uint *)(lVar2 + 0x140), (int)uVar1 < 0)
               ) || ((DAT_14c9647dc <= (int)uVar1 ||
                     (((plVar4 = (longlong *)
                                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                       plVar4 == (longlong *)0x0 || ((int)plVar4[2] != *(int *)(lVar2 + 0x144))) ||
                      ((*(uint *)(plVar4 + 1) & 0x10200000) != 0)))))) ||
             (lVar3 = *plVar4, lVar3 == 0)) {
LAB_1405a33c1:
            pbVar6 = (byte *)(lVar2 + 0x17);
          }
          else {
            if ((*(longlong *)(lVar3 + 0xa8) != 0) &&
               ((*(byte *)(*(longlong *)(lVar3 + 0xa8) + 0x65) & 1) == 0)) goto LAB_1405a32d7;
            if (DAT_14cad2858 == 0) {
              local_d0 = local_b8;
              local_b8[0] = FUN_144a7958c;
              local_c0 = FUN_14081d0ea;
              local_c8 = &LAB_146395584;
              local_d8 = &LAB_147a0ba80;
              local_e0 = &LAB_14575ccce;
              local_e8 = L"Engine";
              local_f0 = 0x40000000000;
              local_f8 = 0x10000004;
              local_100 = 0x10;
              local_108 = 0x1180;
              FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe)
              ;
            }
            if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30))
            goto LAB_1405a33c1;
            pbVar6 = (byte *)(lVar3 + 0x427);
          }
          if ((*pbVar6 & 0xfe) == 2) {
            plVar4 = (longlong *)FUN_14479d2ce((uint *)(lVar2 + 0x140));
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0x4a8))
                        (plVar4,local_b8,*(undefined8 *)(local_58[0] + lVar5 * 8),0);
              FUN_147c478a8(param_1,lVar2,local_b8);
            }
          }
        }
LAB_1405a32d7:
        lVar5 = lVar5 + 1;
      } while (lVar5 < (int)uStack_40);
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[2] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405a34c8 FUN_1405a34c8 body=487 status=ok
// SIG undefined FUN_1405a34c8(void)

void FUN_1405a34c8(longlong param_1,longlong *param_2,longlong *param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1405a36b0(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x410;
  iVar1 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
    FUN_1446f84a2(param_3,iVar1);
  }
  *(undefined8 *)(*param_3 + (longlong)iVar1 * 8) = 0;
  iVar1 = *(int *)(param_1 + 0x140);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x138);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      if (plVar3 != (longlong *)0x0) {
        if (DAT_14cac6e60 == 0) {
          local_60 = &local_48;
          local_48 = FUN_144a7958c;
          local_50 = FUN_14081d0ea;
          local_58 = FUN_142b47bc4;
          local_68 = &LAB_1478989f1;
          local_70 = &LAB_146391124;
          local_78 = L"Engine";
          local_80 = 0x10000000000;
          local_88 = 0x10000005;
          local_90 = 0x10;
          local_98 = 0x620;
          FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
        }
        if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) ==
            DAT_14cac6e60 + 0x30)) {
          lVar4 = (**(code **)(*plVar3 + 0x7b8))(plVar3,0,0,0xffffffff);
          if ((lVar4 != 0) &&
             ((*(longlong *)(lVar4 + 0x108) != 0 ||
              (((char)param_4 != '\0' && ((*(byte *)(lVar4 + 8) & 0x10) != 0)))))) {
            (**(code **)(*plVar3 + 0x7e8))(plVar3,param_2,param_3,param_4);
          }
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405a36b0 FUN_1405a36b0 body=356 status=ok
// SIG undefined FUN_1405a36b0(void)

void FUN_1405a36b0(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1405a3735;
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
LAB_1405a3735:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1405a3816 FUN_1405a3816 body=2291 status=ok
// SIG undefined FUN_1405a3816(void)

void FUN_1405a3816(longlong param_1)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined7 uVar15;
  ulonglong uVar14;
  ulonglong uVar16;
  undefined8 *puVar17;
  int iVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_1e8 [32];
  undefined2 *local_1c8;
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined2 *local_1a8;
  undefined1 *local_1a0;
  undefined1 *local_198;
  uint *local_190;
  undefined1 *local_188;
  code *local_180;
  ulonglong local_178;
  ulonglong local_170;
  longlong local_168;
  undefined8 local_160;
  undefined8 *local_158;
  int local_150;
  uint local_148 [5];
  undefined8 uStack_134;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  int iStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined8 local_110;
  longlong alStack_108 [6];
  longlong *plStack_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined2 local_b7;
  undefined1 local_b5;
  uint local_b4;
  undefined2 local_a8;
  undefined2 uStack_a6;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  longlong local_80;
  undefined8 uStack_78;
  uint local_70;
  undefined8 uStack_6c;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  FUN_1405a412e();
  if ((*(int *)(param_1 + 0x38) == 0) || (*(int *)(param_1 + 0x7c) == 0)) goto LAB_1405a3df5;
  puVar1 = (uint *)(param_1 + 0x78);
  uVar3 = *puVar1;
  if (((((int)uVar3 < 0) ||
       (((DAT_14c9647dc <= (int)uVar3 ||
         (plVar12 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
         plVar12 == (longlong *)0x0)) || ((int)plVar12[2] != *(int *)(param_1 + 0x7c))))) ||
      ((((*(uint *)(plVar12 + 1) & 0x10200000) != 0 || ((longlong *)*plVar12 == (longlong *)0x0)) ||
       (lVar8 = (**(code **)(*(longlong *)*plVar12 + 0x180))(), lVar8 == 0)))) ||
     (*(int *)(param_1 + 0x38) < 1)) goto LAB_1405a3df5;
  plVar12 = *(longlong **)(lVar8 + 0x1f0);
  if (plVar12 != (longlong *)0x0) {
    if (DAT_14cb5e538 == 0) {
      local_190 = local_148;
      local_148[0] = 0x417c5d06;
      local_148[1] = 1;
      local_180 = FUN_14081d0ea;
      local_188 = &LAB_1417ad04a;
      local_198 = &LAB_1486a7af7;
      local_1a0 = &LAB_1464e1631;
      local_1a8 = &DAT_149e063b2;
      local_1b0 = 0;
      local_1b8 = 0x1000000c;
      local_1c0 = 8;
      local_1c8 = (undefined2 *)CONCAT44(local_1c8._4_4_,0x420);
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
      plVar12 = *(longlong **)(lVar8 + 0x1f0);
      if (plVar12 == (longlong *)0x0) goto LAB_1405a3a1f;
    }
    if (((DAT_14cb5e538 != 0) && (lVar19 = plVar12[2], lVar19 != 0)) &&
       ((*(int *)(DAT_14cb5e538 + 0x38) <= *(int *)(lVar19 + 0x38) &&
        ((*(longlong *)(*(longlong *)(lVar19 + 0x30) + (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8)
          == DAT_14cb5e538 + 0x30 &&
         (cVar6 = (**(code **)(*plVar12 + 0x498))(), 2 < (byte)(cVar6 - 6U))))))) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_1e8);
    }
  }
LAB_1405a3a1f:
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar19 = 0x98;
    uVar16 = 0;
    uVar14 = 0;
    do {
      lVar4 = *(longlong *)(param_1 + 0x30);
      bVar2 = *(byte *)(lVar4 + -0x98 + lVar19);
      local_178 = uVar14;
      if (bVar2 < 2) {
        if (*(longlong *)(lVar4 + -8 + lVar19) == 0) {
          puVar17 = (undefined8 *)(lVar4 + lVar19 + -0x60);
          local_168 = lVar4;
          cVar6 = FUN_140114204(puVar17);
          if (cVar6 != '\0') {
            if ((*(int *)(param_1 + 0x7c) == 0) || (uVar3 = *puVar1, (int)uVar3 < 0)) {
LAB_1405a3e3c:
              lVar13 = 0;
            }
            else {
              lVar13 = 0;
              if ((int)uVar3 < DAT_14c9647dc) {
                plVar12 = (longlong *)
                          ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
                if (((plVar12 == (longlong *)0x0) || ((int)plVar12[2] != *(int *)(param_1 + 0x7c)))
                   || ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)) goto LAB_1405a3e3c;
                lVar13 = *plVar12;
              }
            }
            local_158 = (undefined8 *)0x0;
            local_150 = 0;
            local_170 = uVar16;
            FUN_1446efa72(&local_158,0,3,0x10);
            puVar5 = local_158;
            local_150 = 3;
            *local_158 = &PTR_LAB_14b3e6310;
            LOCK();
            UNLOCK();
            lVar9 = DAT_14c758608 + 1;
            lVar10 = DAT_14c758608 + 1;
            if (lVar9 == 0) {
              LOCK();
              UNLOCK();
              lVar9 = DAT_14c758608 + 2;
              lVar10 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar10;
            local_158[2] = lVar9;
            *local_158 = &PTR_FUN_14b3fd490;
            local_158[3] = 0;
            if (lVar13 == 0) {
              lVar13 = 0;
              iVar7 = 0;
            }
            else {
              uVar3 = *(uint *)(lVar13 + 0xc);
              *(uint *)(local_158 + 3) = uVar3;
              if ((int)uVar3 < DAT_14c9647dc) {
                lVar13 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
              }
              else {
                lVar13 = 0;
              }
              iVar7 = *(int *)(lVar13 + 0x10);
              if (*(int *)(lVar13 + 0x10) == 0) {
                LOCK();
                iVar7 = DAT_14c964868 + 1;
                UNLOCK();
                iVar18 = DAT_14c964868 + 1;
                bVar20 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar7;
                if (bVar20) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar18);
                }
                LOCK();
                iVar7 = *(int *)(lVar13 + 0x10);
                bVar20 = iVar7 == 0;
                if (bVar20) {
                  *(int *)(lVar13 + 0x10) = iVar18;
                  iVar7 = 0;
                }
                UNLOCK();
                if (bVar20) {
                  iVar7 = iVar18;
                }
              }
            }
            *(int *)((longlong)puVar5 + 0x1c) = iVar7;
            puVar5[4] = param_1;
            *(int *)(puVar5 + 5) = (int)local_170;
            local_148[0] = local_148[0] & 0xffffff00;
            local_148[1] = 0;
            local_148[2] = 0;
            local_148[3] = 0;
            local_148[4] = local_148[4] & 0xffffff00;
            uStack_124 = 0;
            iStack_120 = 0;
            uStack_134 = 0;
            uStack_12c = 0;
            uStack_128 = 0;
            local_118 = 0xc69c4000;
            local_c8 = 0;
            local_c0 = 0;
            local_b8 = 0;
            local_d0 = 0;
            alStack_108[5] = 0;
            plStack_d8 = (longlong *)0x0;
            alStack_108[3] = 0;
            alStack_108[4] = 0;
            alStack_108[1] = 0;
            alStack_108[2] = 0;
            local_110 = 0;
            alStack_108[0] = 0;
            local_b7 = 1;
            local_b5 = 0;
            local_b4 = 0;
            FUN_1401aa3da(&uStack_128);
            lVar10 = FUN_140149a73(lVar8);
            uVar15 = (undefined7)((ulonglong)lVar13 >> 8);
            if (lVar10 == 0) {
              local_b4 = 2;
              uVar14 = CONCAT71(uVar15,1);
              uVar16 = local_170;
            }
            else {
              FUN_140983ba6(puVar17,lVar10,local_148);
              if (local_b4 == 1) {
                local_88 = 0;
                local_98 = 0;
                uStack_90 = 0;
                uStack_6c = 0;
                uStack_64 = 0;
                local_80 = 0;
                uStack_78 = 0;
                local_70 = local_70 & 0xffffff00;
                uStack_a0 = *(undefined4 *)(lVar4 + lVar19 + -0x58);
                uVar11 = *puVar17;
                local_a8 = (undefined2)uVar11;
                uStack_a6 = (undefined2)((ulonglong)uVar11 >> 0x10);
                uStack_a4 = (undefined4)((ulonglong)uVar11 >> 0x20);
                FUN_1447715ec(&local_98,local_168 + lVar19 + -0x50);
                uVar16 = local_170;
                uVar14 = local_178;
                local_70 = local_148[4];
                uStack_6c = uStack_134;
                uStack_64 = uStack_12c;
                if (iStack_120 == 0) {
                  uVar11 = 0;
                }
                else {
                  plVar12 = (longlong *)CONCAT44(uStack_124,uStack_128);
                  uVar11 = 0;
                  if (plVar12 != (longlong *)0x0) {
                    (**(code **)(*plVar12 + 0x38))(plVar12,&local_160);
                    uVar11 = local_160;
                  }
                }
                *(undefined8 *)(local_168 + -8 + lVar19) = uVar11;
                FUN_1405a4872(param_1,uVar16 & 0xffffffff,&local_70);
                if (local_80 != 0) {
                  FUN_1400020a8();
                }
                uVar14 = uVar14 & 0xffffffff;
              }
              else {
                uVar16 = local_170;
                if ((6 < local_b4) ||
                   (uVar14 = CONCAT71(uVar15,1), (0x4cU >> (local_b4 & 0x1f) & 1) == 0)) {
                  uVar14 = local_178 & 0xffffffff;
                }
              }
            }
            FUN_1409838b8(local_148);
            if (local_150 != 0) {
              if (local_158 == (undefined8 *)0x0) goto LAB_1405a3d9f;
              (**(code **)*local_158)();
              FUN_1446efa72(&local_158,0,0,0x10);
              local_150 = 0;
            }
            if (local_158 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
        }
      }
      else if ((bVar2 == 2) &&
              ((*(longlong *)(lVar4 + lVar19) == 0 ||
               ((*(byte *)(*(longlong *)(lVar4 + lVar19) + 0x10) & 1) == 0)))) {
        FUN_14479d2ce(puVar1);
        local_a8 = 0;
        uStack_a6 = 0;
        uStack_a4 = 0;
        uStack_a0 = 0;
        FUN_1446efa72(&local_a8,0,3,0x10);
        uStack_a0 = 3;
        puVar17 = (undefined8 *)CONCAT44(uStack_a4,CONCAT22(uStack_a6,local_a8));
        *puVar17 = &PTR_LAB_149e020b0;
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 1;
        lVar13 = DAT_14c758608 + 1;
        if (lVar10 == 0) {
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 2;
          lVar13 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar13;
        puVar17[2] = lVar10;
        *puVar17 = &PTR_FUN_14b3fd500;
        puVar17[3] = 0;
        FUN_14485c47a(puVar17 + 3);
        puVar17[4] = param_1;
        *(int *)(puVar17 + 5) = (int)uVar16;
        memset(local_148,0,0xa0);
        plVar12 = (longlong *)FUN_14479d2ce(puVar1);
        if (plVar12 == (longlong *)0x0) {
          uVar11 = 0;
        }
        else {
          uVar11 = (**(code **)(*plVar12 + 0x180))(plVar12);
        }
        local_1c8 = &local_a8;
        FUN_1411cff2e((longlong *)(lVar4 + lVar19),lVar4 + lVar19 + -0x28,uVar11,local_148);
        if (alStack_108[4] != 0) {
          plVar12 = plStack_d8;
          if (plStack_d8 == (longlong *)0x0) {
            plVar12 = &local_c8;
          }
          (**(code **)(*plVar12 + 0x10))();
        }
        if (CONCAT44(uStack_124,uStack_128) != 0) {
          plVar12 = (longlong *)CONCAT44(uStack_114,local_118);
          if ((longlong *)CONCAT44(uStack_114,local_118) == (longlong *)0x0) {
            plVar12 = alStack_108;
          }
          (**(code **)(*plVar12 + 0x10))();
        }
        lVar4 = *(longlong *)(lVar4 + lVar19);
        if (lVar4 == 0) {
          local_148[0] = 0;
          local_148[1] = 0;
          local_148[2] = 0;
          local_148[3] = 0;
        }
        else {
          FUN_140a2633e(lVar4,local_148);
        }
        FUN_1405a4872(param_1,uVar16 & 0xffffffff,local_148);
        FUN_1449db362(&local_a8);
        uVar14 = local_178;
      }
LAB_1405a3d9f:
      uVar16 = uVar16 + 1;
      lVar19 = lVar19 + 0xa8;
    } while ((longlong)uVar16 < (longlong)*(int *)(param_1 + 0x38));
    if ((uVar14 & 1) != 0) {
      FUN_1405a453e(param_1);
    }
  }
LAB_1405a3df5:
  if ((local_60 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405a412e FUN_1405a412e body=286 status=ok
// SIG undefined FUN_1405a412e(void)

void FUN_1405a412e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((((*(longlong *)(param_1 + 0xb8) != 0) && (*(int *)(param_1 + 0x7c) != 0)) &&
      (uVar3 = *(uint *)(param_1 + 0x78), -1 < (int)uVar3)) && ((int)uVar3 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_1 + 0x7c))) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && ((longlong *)*plVar4 != (longlong *)0x0)))) {
      lVar2 = (**(code **)(*(longlong *)*plVar4 + 0x180))();
      if (lVar2 != 0) {
        if (*(longlong *)(lVar2 + 0x1f0) == 0) {
          plVar4 = (longlong *)(lVar2 + 0x458);
        }
        else {
          plVar4 = (longlong *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
        }
        lVar2 = *(longlong *)(param_1 + 0xb8);
        if (lVar2 != 0) {
          lVar1 = *plVar4;
          uVar3 = (uint)lVar2;
          if ((int)(uVar3 & 0xffffff) < *(int *)(lVar1 + 0x10)) {
            lVar5 = lVar1 + 0x18;
            if (*(longlong *)(lVar1 + 0x28) != 0) {
              lVar5 = *(longlong *)(lVar1 + 0x28);
            }
            if ((*(uint *)(lVar5 + (ulonglong)((uVar3 & 0xffffff) >> 5) * 4) >> (uVar3 & 0x1f) & 1)
                != 0) {
              lVar1 = *(longlong *)(lVar1 + 8);
              lVar5 = (ulonglong)(uVar3 & 0xffffff) * 0x70;
              if (((lVar1 + lVar5 != 0) && (*(longlong *)(lVar1 + 0x60 + lVar5) == lVar2)) &&
                 (*(char *)(lVar1 + 1 + lVar5) != '\x04')) {
                FUN_1405a424c();
              }
            }
          }
        }
        *(undefined8 *)(param_1 + 0xb8) = 0;
      }
    }
  }
  return;
}



// FUNCTION 1405a424c FUN_1405a424c body=754 status=ok
// SIG undefined FUN_1405a424c(void)

void FUN_1405a424c(longlong param_1,longlong param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  longlong lVar11;
  longlong lVar12;
  int *piVar13;
  
  iVar6 = (int)((ulonglong)param_2 >> 0x20);
  uVar5 = (uint)param_2;
  lVar11 = (ulonglong)(uVar5 & 0xffffff) * 0x70;
  switch(*(undefined1 *)(*(longlong *)(param_1 + 8) + 1 + lVar11)) {
  case 0:
    if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) {
      lVar11 = *(longlong *)(param_1 + 0xe0);
      if (*(longlong *)(param_1 + 0xe0) == 0) {
        lVar11 = param_1 + 0xd8;
      }
      piVar10 = (int *)(lVar11 + ((longlong)(int)(iVar6 * 0x17 + uVar5) &
                                 (longlong)*(int *)(param_1 + 0xe8) - 1U) * 4);
      do {
        iVar6 = *piVar10;
        if ((longlong)iVar6 == -1) break;
        lVar2 = *(longlong *)(param_1 + 0xa0);
        lVar9 = (longlong)iVar6 * 0x10;
        lVar11 = lVar2 + lVar9;
        lVar3 = *(longlong *)(lVar2 + lVar9);
        if (lVar3 == param_2) {
          lVar12 = *(longlong *)(param_1 + 0xe0);
          if (*(longlong *)(param_1 + 0xe0) == 0) {
            lVar12 = param_1 + 0xd8;
          }
          iVar8 = *(int *)(lVar12 + (longlong)*(int *)(lVar11 + 0xc) * 4);
          if (iVar8 == iVar6) {
            piVar13 = (int *)(lVar12 + (longlong)*(int *)(lVar11 + 0xc) * 4);
          }
          else {
            do {
              piVar13 = (int *)((longlong)iVar8 * 0x10 + lVar2 + 8);
              iVar8 = *piVar13;
            } while (iVar8 != iVar6);
          }
          *piVar13 = *(int *)(lVar11 + 8);
          lVar11 = *(longlong *)(param_1 + 0xa0);
          if (*(int *)(param_1 + 0xd4) != 0) {
            *(int *)(lVar11 + (longlong)*(int *)(param_1 + 0xd0) * 0x10) = iVar6;
          }
          *(undefined4 *)(lVar11 + lVar9) = 0xffffffff;
          uVar7 = 0xffffffff;
          if (0 < *(int *)(param_1 + 0xd4)) {
            uVar7 = *(undefined4 *)(param_1 + 0xd0);
          }
          *(undefined4 *)(lVar11 + lVar9 + 4) = uVar7;
          *(int *)(param_1 + 0xd0) = iVar6;
          *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0xd4) + 1;
          lVar11 = *(longlong *)(param_1 + 0xc0);
          if (*(longlong *)(param_1 + 0xc0) == 0) {
            lVar11 = param_1 + 0xb0;
          }
          iVar8 = iVar6 + 0x1f;
          if (-1 < iVar6) {
            iVar8 = iVar6;
          }
          bVar4 = (byte)iVar6 & 0x1f;
          puVar1 = (uint *)(lVar11 + (longlong)(iVar8 >> 5) * 4);
          *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
        }
        else {
          piVar10 = (int *)(lVar11 + 8);
        }
      } while (lVar3 != param_2);
    }
    break;
  case 1:
    *(undefined1 *)(*(longlong *)(param_1 + 8) + lVar11 + 1) = 4;
    return;
  case 2:
    if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
      lVar11 = *(longlong *)(param_1 + 0x90);
      if (*(longlong *)(param_1 + 0x90) == 0) {
        lVar11 = param_1 + 0x88;
      }
      piVar10 = (int *)(lVar11 + ((longlong)(int)(iVar6 * 0x17 + uVar5) &
                                 (longlong)*(int *)(param_1 + 0x98) - 1U) * 4);
      do {
        iVar6 = *piVar10;
        if ((longlong)iVar6 == -1) break;
        lVar2 = *(longlong *)(param_1 + 0x50);
        lVar9 = (longlong)iVar6 * 0x10;
        lVar11 = lVar2 + lVar9;
        lVar3 = *(longlong *)(lVar2 + lVar9);
        if (lVar3 == param_2) {
          lVar12 = *(longlong *)(param_1 + 0x90);
          if (*(longlong *)(param_1 + 0x90) == 0) {
            lVar12 = param_1 + 0x88;
          }
          iVar8 = *(int *)(lVar12 + (longlong)*(int *)(lVar11 + 0xc) * 4);
          if (iVar8 == iVar6) {
            piVar13 = (int *)(lVar12 + (longlong)*(int *)(lVar11 + 0xc) * 4);
          }
          else {
            do {
              piVar13 = (int *)((longlong)iVar8 * 0x10 + lVar2 + 8);
              iVar8 = *piVar13;
            } while (iVar8 != iVar6);
          }
          *piVar13 = *(int *)(lVar11 + 8);
          lVar11 = *(longlong *)(param_1 + 0x50);
          if (*(int *)(param_1 + 0x84) != 0) {
            *(int *)(lVar11 + (longlong)*(int *)(param_1 + 0x80) * 0x10) = iVar6;
          }
          *(undefined4 *)(lVar11 + lVar9) = 0xffffffff;
          uVar7 = 0xffffffff;
          if (0 < *(int *)(param_1 + 0x84)) {
            uVar7 = *(undefined4 *)(param_1 + 0x80);
          }
          *(undefined4 *)(lVar11 + lVar9 + 4) = uVar7;
          *(int *)(param_1 + 0x80) = iVar6;
          *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
          lVar11 = *(longlong *)(param_1 + 0x70);
          if (*(longlong *)(param_1 + 0x70) == 0) {
            lVar11 = param_1 + 0x60;
          }
          iVar8 = iVar6 + 0x1f;
          if (-1 < iVar6) {
            iVar8 = iVar6;
          }
          bVar4 = (byte)iVar6 & 0x1f;
          puVar1 = (uint *)(lVar11 + (longlong)(iVar8 >> 5) * 4);
          *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
        }
        else {
          piVar10 = (int *)(lVar11 + 8);
        }
      } while (lVar3 != param_2);
    }
    break;
  case 3:
    *(undefined8 *)(param_1 + 0x148) = 0;
    break;
  default:
    return;
  }
  FUN_1448b4fb2(param_1);
  return;
}



// FUNCTION 1405a453e FUN_1405a453e body=818 status=ok
// SIG undefined FUN_1405a453e(void)

void FUN_1405a453e(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined8 *local_b0;
  int local_a8;
  undefined2 local_a0 [2];
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((((((*(longlong *)(param_1 + 0xb8) != 0) || (*(int *)(param_1 + 0x7c) == 0)) ||
        (uVar1 = *(uint *)(param_1 + 0x78), (int)uVar1 < 0)) ||
       ((DAT_14c9647dc <= (int)uVar1 ||
        (plVar7 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
        plVar7 == (longlong *)0x0)))) ||
      (((int)plVar7[2] != *(int *)(param_1 + 0x7c) ||
       (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 || ((longlong *)*plVar7 == (longlong *)0x0))))))
     || (lVar4 = (**(code **)(*(longlong *)*plVar7 + 0x180))(), lVar4 == 0)) goto LAB_1405a478e;
  if (*(longlong *)(lVar4 + 0x1f0) == 0) {
    puVar5 = (undefined8 *)(lVar4 + 0x458);
  }
  else {
    puVar5 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
  }
  uVar2 = *puVar5;
  if (*(int *)(param_1 + 0x7c) == 0) {
LAB_1405a47ec:
    lVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x78);
    lVar4 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar7 == (longlong *)0x0) ||
         (((int)plVar7[2] != *(int *)(param_1 + 0x7c) || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)
          ))) goto LAB_1405a47ec;
      lVar4 = *plVar7;
    }
  }
  local_b0 = (undefined8 *)0x0;
  local_a8 = 0;
  FUN_1446efa72(&local_b0,0,3,0x10);
  puVar5 = local_b0;
  local_a8 = 3;
  *local_b0 = &PTR_LAB_14a1c8830;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_b0[2] = lVar6;
  *local_b0 = &PTR_FUN_14b3fd420;
  local_b0[3] = 0;
  iVar8 = 0;
  if (lVar4 != 0) {
    uVar1 = *(uint *)(lVar4 + 0xc);
    *(uint *)(local_b0 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar8 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar8 = *(int *)(lVar4 + 0x10);
      bVar10 = iVar8 == 0;
      if (bVar10) {
        *(int *)(lVar4 + 0x10) = iVar9;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar8 = iVar9;
      }
    }
  }
  *(int *)((longlong)puVar5 + 0x1c) = iVar8;
  puVar5[4] = param_1;
  local_98 = 0;
  local_90 = 0;
  FUN_14487d8d8(&local_98,&local_b0);
  local_58 = 1;
  local_b8 = local_a0;
  local_a0[0] = 0;
  local_9c = 0xbf800000;
  FUN_1406f4044(uVar2,param_1 + 0xb8,&local_98,0x800000);
  (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
  if (local_a8 != 0) {
    if (local_b0 == (undefined8 *)0x0) goto LAB_1405a478e;
    (**(code **)*local_b0)(local_b0,0);
    FUN_1446efa72(&local_b0,0,0,0x10);
    local_a8 = 0;
  }
  if (local_b0 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1405a478e:
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405a4872 FUN_1405a4872 body=1228 status=ok
// SIG undefined FUN_1405a4872(void)

void FUN_1405a4872(longlong param_1,uint param_2,char *param_3)

{
  ulonglong *puVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong *puVar9;
  size_t sVar10;
  ulonglong uVar11;
  longlong *plVar12;
  wchar_t *_Str;
  longlong *plVar13;
  longlong lVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStack_1f8 [44];
  undefined1 local_1cc [12];
  undefined8 local_1c0;
  undefined4 local_1b8;
  wchar_t **local_1b0;
  int local_1a8;
  undefined1 local_1a4;
  undefined1 local_1a0 [16];
  undefined1 local_190 [24];
  longlong local_178;
  undefined1 auStack_16a [2];
  wchar_t *local_168;
  int local_160;
  longlong *local_158;
  longlong local_148 [4];
  undefined8 local_128;
  undefined2 uStack_120;
  undefined6 uStack_11e;
  undefined2 uStack_118;
  undefined8 uStack_116;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if (*(int *)(param_1 + 0x7c) == 0) {
LAB_1405a48fe:
    uVar7 = 0;
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x78);
    uVar7 = 0;
    if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
      plVar12 = (longlong *)
                ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
      if ((plVar12 == (longlong *)0x0) ||
         ((((int)plVar12[2] != *(int *)(param_1 + 0x7c) ||
           ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)) ||
          ((longlong *)*plVar12 == (longlong *)0x0)))) goto LAB_1405a48fe;
      uVar7 = (**(code **)(*(longlong *)*plVar12 + 0x180))();
    }
  }
  plVar12 = (longlong *)FUN_140502abf(uVar7);
  if (((plVar12 == (longlong *)0x0) || ((int)param_2 < 0)) ||
     (*(int *)(param_1 + 0x38) <= (int)param_2)) goto LAB_1405a4ce3;
  lVar8 = *(longlong *)(param_1 + 0x30);
  lVar14 = lVar8 + (ulonglong)param_2 * 0xa8;
  FUN_1406f1bc8(param_1);
  lVar8 = (longlong)*(int *)(lVar8 + 0x88 + (ulonglong)param_2 * 0xa8);
  if (lVar8 == 0) {
    if (*(char *)(lVar14 + 0x38) == '\x01') {
      if (((*(int *)(lVar14 + 0x48) == 0) || (iVar6 = *(int *)(lVar14 + 0x4c), iVar6 == 0)) ||
         (*(int *)(lVar14 + 0x48) == DAT_14c948000)) {
LAB_1405a4d29:
        local_1b8 = DAT_14c948620;
        local_1c0 = DAT_14c948618;
      }
      else {
        if ((iVar6 < 2) && (*(int *)(lVar14 + 0x6c) < 1)) {
          lVar14 = lVar14 + 0x50;
        }
        else {
          lVar14 = *(longlong *)(lVar14 + 0x60);
        }
        if ((iVar6 == 1) || (iVar6 < 6)) goto LAB_1405a4d29;
        local_1b8 = *(undefined4 *)(lVar14 + 0x44);
        local_1c0 = *(undefined8 *)(lVar14 + 0x3c);
      }
      FUN_144928d62(local_190,5,&local_1c0);
      (**(code **)(*plVar12 + 0xb0))(plVar12,local_1a0,param_3,0);
    }
  }
  else {
    puVar15 = *(ulonglong **)(lVar14 + 0x80);
    puVar1 = puVar15 + lVar8 * 5;
    do {
      if ((char)puVar15[1] == '\0') {
        cVar3 = *param_3;
        if (cVar3 == '\x03') {
          uVar11 = *(ulonglong *)(param_3 + 4);
        }
        else if (cVar3 == '\x02') {
          iVar6 = *(int *)(param_3 + 0xc);
          uVar11 = DAT_14cb7c570;
          if ((iVar6 != 1) && (uVar11 = DAT_14cb7c578, iVar6 != 0)) {
            memset(&local_168,0,0x100);
            FUN_1407bf796(&local_168,0x100,&DAT_149dfc0ac,iVar6);
            sVar10 = strlen((char *)&local_168);
            iVar6 = (int)sVar10;
            if (iVar6 == 0) {
LAB_1405a4c36:
              uVar11 = 0;
              uVar16 = 0;
            }
            else {
              lVar14 = (longlong)iVar6;
              if (&local_168 <= auStack_16a + lVar14 + 1) {
                lVar8 = 0;
LAB_1405a4b87:
                if ((byte)(auStack_16a[lVar8 + lVar14 + 1] - 0x30) < 10) goto code_r0x0001405a4b96;
                iVar4 = (int)lVar8;
                if (((((iVar4 == 0) || (iVar6 <= -iVar4)) || (10 < (uint)-iVar4)) ||
                    (auStack_16a[lVar8 + lVar14 + 1] != '_')) ||
                   ((iVar4 != -1 && (*(char *)((longlong)&local_168 + lVar8 + lVar14) == '0'))))
                goto LAB_1405a4bb7;
                lVar17 = 0;
                do {
                  lVar18 = (longlong)*(char *)((longlong)&local_168 + lVar8 + lVar14) + lVar17 * 10;
                  lVar17 = lVar18 + -0x30;
                  lVar8 = lVar8 + 1;
                } while (lVar8 != 0);
                if (0x7ffffffe < lVar17) goto LAB_1405a4bb7;
                iVar6 = iVar6 + iVar4 + -1;
                lVar18 = lVar18 + -0x2f;
                goto LAB_1405a4bba;
              }
              lVar18 = 0;
LAB_1405a4bbe:
              local_1a4 = 0;
              local_1b0 = &local_168;
              local_1a8 = iVar6;
              uVar5 = FUN_14001a6c0(&local_1b0);
              uVar16 = lVar18 << 0x20;
              uVar11 = (ulonglong)uVar5;
            }
            uVar11 = uVar11 | uVar16;
          }
        }
        else if (cVar3 == '\x01') {
          puVar9 = &DAT_14cb7c588;
          if (*(int *)(param_3 + 0xc) == 0) {
            puVar9 = &DAT_14cb7c580;
          }
          uVar11 = *puVar9;
        }
        else {
          uVar11 = 0;
        }
        if (*puVar15 == uVar11) goto LAB_1405a4a87;
      }
      else {
        FUN_1400021e4(puVar15);
        cVar3 = FUN_1405b43cc(&local_168);
        bVar2 = false;
        if ((cVar3 != '\0') && (*param_3 == '\x02')) {
          _Str = L"";
          if (local_160 != 0) {
            _Str = local_168;
          }
          iVar6 = *(int *)(param_3 + 0xc);
          iVar4 = _wtoi(_Str);
          switch((char)puVar15[1]) {
          case '\x01':
            bVar2 = iVar6 < iVar4;
            break;
          case '\x02':
            bVar2 = iVar6 <= iVar4;
            break;
          case '\x03':
            bVar2 = iVar4 < iVar6;
            break;
          case '\x04':
            bVar2 = iVar4 <= iVar6;
            break;
          default:
            bVar2 = false;
          }
        }
        if (local_168 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        if (bVar2) {
LAB_1405a4a87:
          if (*(wchar_t **)((longlong)puVar15 + 0xc) != (wchar_t *)0x0) {
            local_168 = *(wchar_t **)((longlong)puVar15 + 0xc);
            FUN_1401533ba(local_1cc,&local_168,1);
            FUN_144928d62(local_190,5,local_1cc);
            local_168 = (wchar_t *)0x0;
            local_158 = (longlong *)0x0;
            uStack_118 = 0;
            uStack_116 = 0;
            local_128 = 0;
            uStack_120 = 0;
            uStack_11e = 0;
            (**(code **)(*plVar12 + 0xa8))
                      (plVar12,local_1a0,*(undefined8 *)((longlong)puVar15 + 0x14),&local_168);
            if (local_168 != (wchar_t *)0x0) {
              plVar13 = local_158;
              if (local_158 == (longlong *)0x0) {
                plVar13 = local_148;
              }
              (**(code **)(*plVar13 + 0x10))();
            }
          }
        }
      }
      puVar15 = puVar15 + 5;
    } while (puVar15 != puVar1);
  }
  if (local_178 != 0) {
    FUN_1400020a8();
  }
LAB_1405a4ce3:
  if ((local_60 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x0001405a4b96:
  lVar17 = lVar8 + lVar14;
  lVar8 = lVar8 + -1;
  if (auStack_16a + lVar17 < &local_168) goto LAB_1405a4bb7;
  goto LAB_1405a4b87;
LAB_1405a4bb7:
  lVar18 = 0;
LAB_1405a4bba:
  if (iVar6 == 0) goto LAB_1405a4c36;
  goto LAB_1405a4bbe;
}



// FUNCTION 1405a4d40 FUN_1405a4d40 body=3750 status=ok
// SIG undefined FUN_1405a4d40(void)

void FUN_1405a4d40(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 uVar15;
  byte bVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  int iVar23;
  longlong lVar24;
  int iVar25;
  longlong lVar26;
  longlong *plVar27;
  uint uVar28;
  uint *puVar29;
  short sVar30;
  int iVar31;
  longlong lVar32;
  undefined8 *puVar33;
  void **ppvVar34;
  undefined1 auStack_128 [32];
  int local_108;
  longlong local_f8;
  longlong *local_f0;
  int local_e4;
  undefined8 *local_e0;
  int local_d4;
  longlong local_d0;
  longlong local_c8;
  undefined8 *local_c0;
  void **local_b8;
  void **local_b0;
  int *local_a8;
  longlong local_a0;
  int local_98;
  longlong local_90;
  undefined4 local_88;
  int local_80;
  undefined1 local_7c [4];
  void *local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar14 = param_2[1];
  local_f8 = param_1;
  if (lVar14 == 0) {
    uVar15 = FUN_140c04244();
    lVar14 = FUN_14477b664(uVar15);
    param_2[1] = lVar14;
  }
  lVar24 = *param_2;
  if (param_2[2] == 0) {
    if (lVar14 == 0 || lVar24 == 0) goto LAB_1405a5a59;
    plVar27 = *(longlong **)(lVar14 + 0xb8);
    if ((plVar27 == (longlong *)0x0) ||
       (cVar10 = (**(code **)(*plVar27 + 0x108))(plVar27), cVar10 == '\0')) {
      param_2[2] = 0;
      goto LAB_1405a5a59;
    }
    uVar15 = (**(code **)(*plVar27 + 0x110))(plVar27);
    lVar14 = FUN_144aff482(uVar15);
    param_2[2] = lVar14;
    if (lVar14 == 0) goto LAB_1405a5a59;
    lVar24 = *param_2;
  }
  lVar14 = *(longlong *)(local_f8 + 0x60);
  iVar12 = *(int *)(local_f8 + 0x68);
  lVar26 = (longlong)iVar12;
  if (lVar26 != 0) {
    lVar20 = 0;
    do {
      if (*(longlong *)(lVar14 + lVar20) == lVar24) goto LAB_1405a5a59;
      lVar20 = lVar20 + 8;
    } while (lVar26 * 8 - lVar20 != 0);
  }
  *(uint *)(local_f8 + 0x68) = iVar12 + 1U;
  if (*(uint *)(local_f8 + 0x6c) < iVar12 + 1U) {
    plVar27 = (longlong *)(local_f8 + 0x60);
    FUN_1446f84a2(plVar27,iVar12);
    lVar14 = *plVar27;
  }
  *(longlong *)(lVar14 + lVar26 * 8) = lVar24;
  local_80 = *(int *)(local_f8 + 0xc0) + 1;
  *(int *)(local_f8 + 0xc0) = local_80;
  local_a8 = &local_80;
  local_78 = (void *)*param_2;
  local_b0 = &local_78;
  FUN_14001ac2c(local_f8 + 0x70,local_7c,&local_b0,0);
  lVar14 = param_2[1];
  if (lVar14 == 0) {
    uVar15 = FUN_140c04244();
    lVar14 = FUN_14477b664(uVar15);
    param_2[1] = lVar14;
  }
  lVar24 = param_2[2];
  if (((lVar24 == 0) && (lVar24 = 0, lVar14 != 0)) && (*param_2 != 0)) {
    plVar27 = *(longlong **)(lVar14 + 0xb8);
    if ((plVar27 == (longlong *)0x0) ||
       (cVar10 = (**(code **)(*plVar27 + 0x108))(plVar27), cVar10 == '\0')) {
      lVar24 = 0;
    }
    else {
      uVar15 = (**(code **)(*plVar27 + 0x110))(plVar27);
      lVar24 = FUN_144aff482(uVar15,param_2);
    }
    param_2[2] = lVar24;
  }
  local_f0 = (longlong *)(local_f8 + 0x10);
  uVar11 = *(uint *)(lVar24 + 0x60);
  if ((uint)(*(int *)(local_f8 + 0x18) - *(int *)(local_f8 + 0x44)) < uVar11) {
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar11);
    }
    FUN_1405a6f78(local_f0,uVar11);
    if (uVar11 < 4) {
      iVar12 = 1;
    }
    else {
      uVar11 = (uVar11 | 1) + 0xe;
      iVar12 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar12 == 0; iVar12 = iVar12 + -1) {
        }
      }
      iVar12 = 1 << ((byte)iVar12 & 0x1f);
    }
    if ((*(int *)(local_f8 + 0x58) == 0) || (*(int *)(local_f8 + 0x58) < iVar12)) {
      *(int *)(local_f8 + 0x58) = iVar12;
      FUN_1405a7124(local_f0);
    }
  }
  lVar14 = param_2[1];
  if (lVar14 == 0) {
    uVar15 = FUN_140c04244();
    lVar14 = FUN_14477b664(uVar15);
    param_2[1] = lVar14;
  }
  lVar24 = param_2[2];
  if (((lVar24 == 0) && (lVar24 = 0, lVar14 != 0)) && (*param_2 != 0)) {
    plVar27 = *(longlong **)(lVar14 + 0xb8);
    if ((plVar27 == (longlong *)0x0) ||
       (cVar10 = (**(code **)(*plVar27 + 0x108))(plVar27), cVar10 == '\0')) {
      lVar24 = 0;
    }
    else {
      uVar15 = (**(code **)(*plVar27 + 0x110))(plVar27);
      lVar24 = FUN_144aff482(uVar15,param_2);
    }
    param_2[2] = lVar24;
  }
  if ((longlong)*(int *)(lVar24 + 0x60) != 0) {
    puVar22 = *(undefined8 **)(lVar24 + 0x58);
    local_c0 = puVar22 + (longlong)*(int *)(lVar24 + 0x60) * 6;
    local_d0 = local_f8 + 0x20;
    local_c8 = local_f8 + 0x48;
    plVar27 = local_f0;
    do {
      cVar10 = FUN_1405a5e76(puVar22);
      if (cVar10 != '\0') {
        lVar14 = puVar22[1];
        if (lVar14 == 0) {
          lVar14 = FUN_1407ad36c();
        }
        uVar15 = *puVar22;
        uVar13 = FUN_14477b664(lVar14);
        uVar11 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
        uVar17 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
        uVar17 = uVar17 >> 0x10 ^ uVar17;
        uVar11 = (uint)((ulonglong)uVar15 >> 0x10);
        uVar19 = (uint)uVar15 & 0xffff;
        uVar11 = uVar17 >> 0xd ^
                 (((uint)uVar15 << 0x10 | uVar19) + (int)((ulonglong)uVar15 >> 0x20) +
                  (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar19 >> 4)) - uVar17;
        uVar19 = uVar11 << 8 ^ (-0x61c88647 - uVar17) - uVar11;
        uVar28 = uVar19 >> 0xd ^ (uVar17 - uVar11) - uVar19;
        uVar11 = uVar28 >> 0xc ^ (uVar11 - uVar19) - uVar28;
        uVar17 = uVar11 << 0x10 ^ (uVar19 - uVar28) - uVar11;
        uVar19 = uVar17 >> 5 ^ (uVar28 - uVar11) - uVar17;
        uVar11 = uVar19 >> 3 ^ (uVar11 - uVar17) - uVar19;
        uVar17 = uVar11 << 10 ^ (uVar17 - uVar19) - uVar11;
        uVar11 = uVar17 >> 0xf ^ uVar19 - (uVar11 + uVar17);
        iVar12 = FUN_1405a5be8(plVar27,uVar11,puVar22);
        lVar14 = local_d0;
        local_e0 = puVar22;
        if (iVar12 == -1) {
LAB_1405a541d:
          if (*(int *)(local_f8 + 0x44) == 0) {
            iVar12 = *(int *)(local_f8 + 0x18);
            *(int *)(local_f8 + 0x18) = iVar12 + 1;
            if (*(int *)(local_f8 + 0x1c) == iVar12) {
              FUN_1406fba42(plVar27,iVar12);
            }
            iVar25 = *(int *)(local_f8 + 0x38);
            if (iVar25 == 0) {
              iVar31 = -1;
            }
            else {
              iVar31 = iVar25 + 0x1e;
              if (-1 < iVar25 + -1) {
                iVar31 = iVar25 + -1;
              }
              iVar31 = iVar31 >> 5;
            }
            iVar18 = iVar25 + 1;
            iVar23 = iVar25 + 0x1f;
            if (-1 < iVar25) {
              iVar23 = iVar25;
            }
            if (iVar23 >> 5 == iVar31) {
              *(int *)(local_f8 + 0x38) = iVar18;
            }
            else {
              lVar24 = local_f8;
              if (*(int *)(local_f8 + 0x3c) <= iVar25) {
                if (iVar25 + 0x20U < 0xa0) {
                  iVar18 = 0x80;
                  iVar31 = iVar25;
                }
                else {
                  uVar17 = iVar25 + 0x20U >> 5;
                  if (*(int *)(local_f8 + 0x3c) + 0x1fU < 0xa0) {
                    uVar19 = 4;
                    if (4 < uVar17) {
                      uVar19 = uVar17;
                    }
                  }
                  else {
                    uVar19 = (uVar17 * 3 >> 3) + uVar17 + 0x10;
                  }
                  uVar13 = FUN_144a3809e(uVar19 << 2,0);
                  iVar31 = (int)(uVar13 >> 2);
                  iVar18 = -0x20;
                  if ((int)uVar17 <= iVar31) {
                    iVar18 = iVar31 << 5;
                  }
                  iVar31 = *(int *)(local_f8 + 0x38);
                }
                lVar24 = local_f8;
                *(int *)(local_f8 + 0x3c) = iVar18;
                FUN_1446efbd8(lVar14,iVar31);
                iVar18 = *(int *)(lVar24 + 0x38) + 1;
              }
              iVar31 = iVar18 + 0x1f;
              if (-1 < iVar18) {
                iVar31 = iVar18;
              }
              *(int *)(lVar24 + 0x38) = iVar18;
              if (iVar18 % 0x20 != 0) {
                lVar24 = *(longlong *)(local_f8 + 0x30);
                if (*(longlong *)(local_f8 + 0x30) == 0) {
                  lVar24 = lVar14;
                }
                bVar16 = -(char)(iVar18 % 0x20);
                *(uint *)(lVar24 + (longlong)(iVar31 >> 5) * 4) =
                     (uint)(*(int *)(lVar24 + (longlong)(iVar31 >> 5) * 4) << (bVar16 & 0x1f)) >>
                     (bVar16 & 0x1f);
              }
            }
            lVar24 = (longlong)iVar12;
            lVar26 = *(longlong *)(local_f8 + 0x30);
            if (*(longlong *)(local_f8 + 0x30) == 0) {
              lVar26 = lVar14;
            }
            bVar16 = (byte)iVar25 & 0x1f;
            puVar29 = (uint *)(lVar26 + (longlong)(iVar23 >> 5) * 4);
            *puVar29 = *puVar29 & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
          }
          else {
            iVar12 = *(int *)(local_f8 + 0x40);
            lVar24 = (longlong)iVar12;
            iVar25 = *(int *)(*(longlong *)(local_f8 + 0x10) + 4 + lVar24 * 0x50);
            *(int *)(local_f8 + 0x40) = iVar25;
            iVar31 = *(int *)(local_f8 + 0x44) + -1;
            *(int *)(local_f8 + 0x44) = iVar31;
            if (iVar31 != 0) {
              *(undefined4 *)(*(longlong *)(local_f8 + 0x10) + (longlong)iVar25 * 0x50) = 0xffffffff
              ;
            }
          }
          puVar22 = local_e0;
          lVar26 = local_f8;
          lVar20 = *(longlong *)(local_f8 + 0x30);
          if (*(longlong *)(local_f8 + 0x30) == 0) {
            lVar20 = lVar14;
          }
          iVar25 = iVar12 + 0x1f;
          if (-1 < iVar12) {
            iVar25 = iVar12;
          }
          puVar29 = (uint *)(lVar20 + (longlong)(iVar25 >> 5) * 4);
          *puVar29 = *puVar29 | 1 << ((byte)iVar12 & 0x1f);
          iVar25 = 1;
          lVar14 = *(longlong *)(local_f8 + 0x10);
          lVar24 = lVar24 * 0x50;
          pvVar6 = (void *)(lVar14 + lVar24);
          *(undefined8 *)(lVar14 + lVar24) = *local_e0;
          uVar15 = FUN_14477b664(local_e0[1]);
          uVar15 = FUN_14477b664(uVar15);
          *(undefined8 *)(lVar14 + 8 + lVar24) = uVar15;
          *(undefined8 *)(lVar14 + 0x10 + lVar24) = puVar22[2];
          puVar22 = (undefined8 *)(lVar14 + 0x38 + lVar24);
          *puVar22 = 0;
          puVar22[1] = 0;
          puVar22 = (undefined8 *)(lVar14 + 0x28 + lVar24);
          *puVar22 = 0;
          puVar22[1] = 0;
          puVar22 = (undefined8 *)(lVar14 + 0x18 + lVar24);
          *puVar22 = 0;
          puVar22[1] = 0;
          FUN_1400e1c41(0,0);
          FUN_1400e1c6c(0,0);
          plVar27 = local_f0;
          *(undefined4 *)(lVar14 + 0x48 + lVar24) = 0xffffffff;
          if (*(int *)(lVar26 + 0x18) - *(int *)(lVar26 + 0x44) == 1) {
            uVar17 = 1;
LAB_1405a5593:
            puVar22 = local_e0;
            if (((int)uVar17 < 1) || (iVar25 <= *(int *)(lVar26 + 0x58))) {
              uVar11 = *(int *)(lVar26 + 0x58) - 1U & uVar11;
              *(uint *)((longlong)pvVar6 + 0x4c) = uVar11;
              lVar14 = *(longlong *)(lVar26 + 0x50);
              if (*(longlong *)(lVar26 + 0x50) == 0) {
                lVar14 = local_c8;
              }
              *(undefined4 *)((longlong)pvVar6 + 0x48) =
                   *(undefined4 *)
                    (lVar14 + ((longlong)*(int *)(lVar26 + 0x58) - 1U & (longlong)(int)uVar11) * 4);
              lVar14 = *(longlong *)(lVar26 + 0x50);
              if (*(longlong *)(lVar26 + 0x50) == 0) {
                lVar14 = local_c8;
              }
              *(int *)(lVar14 + ((longlong)*(int *)(lVar26 + 0x58) - 1U & (longlong)(int)uVar11) * 4
                      ) = iVar12;
            }
            else {
              *(int *)(lVar26 + 0x58) = iVar25;
              FUN_1405a7124(plVar27);
            }
          }
          else {
            iVar31 = FUN_1405a5be8(local_f0,uVar11,pvVar6);
            if (iVar31 == -1) {
              uVar17 = *(int *)(local_f8 + 0x18) - *(int *)(local_f8 + 0x44);
              lVar26 = local_f8;
              if (3 < uVar17) {
                uVar13 = (ulonglong)(uVar17 & 0xfffffffe) + 0xf;
                lVar14 = 0x3f;
                if (uVar13 != 0) {
                  for (; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                  }
                }
                iVar25 = 1 << ((byte)lVar14 & 0x1f);
              }
              goto LAB_1405a5593;
            }
            lVar14 = *plVar27;
            FUN_1418510bc(lVar14 + (longlong)iVar31 * 0x50 + 0x18);
            memmove((void *)(lVar14 + (longlong)iVar31 * 0x50),pvVar6,0x48);
            FUN_1488845de(plVar27,iVar12);
            puVar22 = local_e0;
          }
          lVar14 = *plVar27 + (longlong)iVar12 * 0x50;
        }
        else {
          if (*plVar27 + (longlong)iVar12 * 0x50 == 0) goto LAB_1405a541d;
          lVar14 = *plVar27 + (longlong)iVar12 * 0x50;
        }
        iVar12 = local_80;
        plVar21 = (longlong *)(lVar14 + 0x18);
        lVar24 = puVar22[4];
        if (lVar24 == 0) {
          uVar15 = FUN_14012344a();
          lVar24 = FUN_14477b664(uVar15);
          puVar22[4] = lVar24;
        }
        if (((puVar22[5] == 0) && (puVar22 = local_e0, plVar27 = local_f0, lVar24 != 0)) &&
           (plVar1 = local_e0 + 3, *plVar1 != 0)) {
          plVar27 = *(longlong **)(lVar24 + 0xb8);
          if ((plVar27 == (longlong *)0x0) ||
             (cVar10 = (**(code **)(*plVar27 + 0x108))(), cVar10 == '\0')) {
            uVar15 = 0;
          }
          else {
            uVar15 = (**(code **)(*plVar27 + 0x110))(plVar27);
            uVar15 = FUN_144aff482(uVar15,plVar1);
          }
          local_e0[5] = uVar15;
          puVar22 = local_e0;
          plVar27 = local_f0;
        }
        FUN_1405a5fa0();
        if (iVar12 == 0) {
          iVar12 = DAT_14cb7eeac + 1;
          DAT_14cb7eeac = iVar12;
        }
        if (local_98 != 0) {
          local_78 = (void *)0x0;
          uVar11 = *(uint *)(lVar14 + 0x20);
          uStack_70 = (ulonglong)uVar11;
          local_d4 = iVar12;
          if ((longlong)(int)uVar11 != 0) {
            FUN_1446f48e2(&local_78);
          }
          iVar25 = 0;
          memset(local_78,0,(longlong)(int)uVar11 << 2);
          iVar12 = 0;
          if ((longlong)(int)local_a8 != 0) {
            local_b8 = local_b0 + (longlong)(int)local_a8 * 9;
            lVar24 = 0;
            iVar25 = 0;
            uVar11 = 0;
            ppvVar34 = local_b0;
            do {
              uVar17 = *(uint *)(lVar14 + 0x20);
              uVar19 = uVar11;
              if ((int)uVar11 < (int)uVar17) {
                puVar29 = (uint *)(*plVar21 + (longlong)(int)uVar11 * 0x48 + 0x44);
                lVar26 = 0;
                do {
                  if (*(uint *)((longlong)ppvVar34 + 0x44) <= *puVar29) {
                    uVar19 = uVar11 - (int)lVar26;
                    break;
                  }
                  lVar26 = lVar26 + -1;
                  puVar29 = puVar29 + 0x12;
                  uVar19 = uVar17;
                } while ((longlong)(int)uVar11 - (longlong)(int)uVar17 != lVar26);
              }
              uVar11 = uVar19;
              if ((int)lVar24 < (int)(uVar11 - iVar25)) {
                lVar24 = (longlong)(int)lVar24;
                do {
                  *(int *)((longlong)local_78 + lVar24 * 4) = iVar25;
                  lVar24 = lVar24 + 1;
                } while (lVar24 < (int)(uVar11 - iVar25));
                uVar17 = *(uint *)(lVar14 + 0x20);
              }
              iVar12 = (int)lVar24;
              local_e4 = iVar25;
              if (((int)uVar11 < 0) || (uVar17 - uVar11 == 0 || (int)uVar17 < (int)uVar11)) {
                *(uint *)(lVar14 + 0x20) = uVar17 + 1;
                if (*(uint *)(lVar14 + 0x24) < uVar17 + 1) {
                  FUN_1405a6e02(plVar21,uVar17);
                }
                lVar26 = *plVar21;
                puVar22 = (undefined8 *)(lVar26 + (longlong)(int)uVar17 * 0x48);
                *puVar22 = *ppvVar34;
                uVar7 = *(undefined4 *)((longlong)ppvVar34 + 0xc);
                uVar8 = *(undefined4 *)(ppvVar34 + 2);
                uVar9 = *(undefined4 *)((longlong)ppvVar34 + 0x14);
                *(undefined4 *)(puVar22 + 1) = *(undefined4 *)(ppvVar34 + 1);
                *(undefined4 *)((longlong)puVar22 + 0xc) = uVar7;
                *(undefined4 *)(puVar22 + 2) = uVar8;
                *(undefined4 *)((longlong)puVar22 + 0x14) = uVar9;
                puVar22[3] = 0;
                iVar25 = *(int *)(ppvVar34 + 4);
                pvVar6 = ppvVar34[3];
                *(int *)(puVar22 + 4) = iVar25;
                if ((longlong)iVar25 == 0) {
                  *(undefined4 *)((longlong)puVar22 + 0x24) = 0;
                }
                else {
                  puVar33 = (undefined8 *)(lVar26 + (longlong)(int)uVar17 * 0x48 + 0x18);
                  FUN_1446dd670(puVar33,iVar25,0);
                  memcpy((void *)*puVar33,pvVar6,(longlong)iVar25 * 2);
                }
                puVar22[5] = 0;
                iVar25 = *(int *)(ppvVar34 + 6);
                *(int *)(puVar22 + 6) = iVar25;
                if (iVar25 == 0) {
                  *(undefined4 *)((longlong)puVar22 + 0x34) = 0;
                }
                else {
                  FUN_1405a690c(puVar22 + 5,iVar25,0);
                  FUN_1405a687f(puVar22[5]);
                }
                *(undefined4 *)(puVar22 + 7) = *(undefined4 *)(ppvVar34 + 7);
                puVar22[8] = ppvVar34[8];
                iVar25 = local_e4 + 1;
              }
              else {
                lVar26 = *plVar21;
                uVar13 = (ulonglong)uVar11;
                if ((*(void **)(lVar26 + 8 + uVar13 * 0x48) == ppvVar34[1]) &&
                   (lVar20 = lVar26 + uVar13 * 0x48, *(void **)(lVar20 + 0x10) == ppvVar34[2])) {
                  iVar31 = *(int *)(lVar20 + 0x20);
                  if (iVar31 == *(int *)(ppvVar34 + 4)) {
                    if (1 < iVar31) {
                      lVar32 = 0;
                      while( true ) {
                        uVar4 = *(ushort *)(*(longlong *)(lVar20 + 0x18) + lVar32);
                        uVar5 = *(ushort *)((longlong)ppvVar34[3] + lVar32);
                        if (uVar4 != uVar5) break;
                        if (uVar4 == 0) goto LAB_1405a562e;
LAB_1405a56a4:
                        lVar32 = lVar32 + 2;
                      }
                      if ((uVar5 | uVar4) < 0x80) {
                        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[(uint)uVar5])
                        goto LAB_1405a56a4;
                        iVar31 = (uint)(byte)(&DAT_149e05da0)[uVar4] -
                                 (uint)(byte)(&DAT_149e05da0)[(uint)uVar5];
                      }
                      else {
                        iVar31 = (uint)uVar4 - (uint)uVar5;
                      }
                      if (iVar31 != 0) goto LAB_1405a5136;
                    }
                  }
                  else if (*(int *)(ppvVar34 + 4) + iVar31 != 1) goto LAB_1405a5136;
LAB_1405a562e:
                  if ((*(char *)(lVar20 + 0x40) == *(char *)(ppvVar34 + 8)) &&
                     (*(int *)(lVar20 + 0x44) == *(int *)((longlong)ppvVar34 + 0x44)))
                  goto LAB_1405a5218;
                }
LAB_1405a5136:
                *(uint *)(lVar14 + 0x20) = uVar17 + 1;
                if (*(uint *)(lVar14 + 0x24) < uVar17 + 1) {
                  FUN_1405a6e02(plVar21,uVar17);
                  lVar26 = *plVar21;
                }
                lVar32 = uVar13 * 0x48;
                memmove((void *)(lVar26 + lVar32 + 0x48),(void *)(lVar26 + lVar32),
                        (ulonglong)(uVar17 - uVar11) * 0x48);
                lVar20 = *plVar21;
                lVar26 = lVar20 + lVar32;
                *(void **)(lVar20 + lVar32) = *ppvVar34;
                uVar7 = *(undefined4 *)((longlong)ppvVar34 + 0xc);
                uVar8 = *(undefined4 *)(ppvVar34 + 2);
                uVar9 = *(undefined4 *)((longlong)ppvVar34 + 0x14);
                puVar2 = (undefined4 *)(lVar20 + 8 + lVar32);
                *puVar2 = *(undefined4 *)(ppvVar34 + 1);
                puVar2[1] = uVar7;
                puVar2[2] = uVar8;
                puVar2[3] = uVar9;
                *(undefined8 *)(lVar20 + 0x18 + lVar32) = 0;
                iVar25 = *(int *)(ppvVar34 + 4);
                pvVar6 = ppvVar34[3];
                *(int *)(lVar20 + 0x20 + lVar32) = iVar25;
                if ((longlong)iVar25 == 0) {
                  *(undefined4 *)(lVar26 + 0x24) = 0;
                }
                else {
                  puVar22 = (undefined8 *)(lVar32 + lVar20 + 0x18);
                  FUN_1446dd670(puVar22,iVar25,0);
                  memcpy((void *)*puVar22,pvVar6,(longlong)iVar25 * 2);
                }
                *(undefined8 *)(lVar26 + 0x28) = 0;
                iVar25 = *(int *)(ppvVar34 + 6);
                *(int *)(lVar26 + 0x30) = iVar25;
                if (iVar25 == 0) {
                  *(undefined4 *)(lVar26 + 0x34) = 0;
                }
                else {
                  FUN_1405a690c((undefined8 *)(lVar26 + 0x28),iVar25,0);
                  FUN_1405a687f(*(undefined8 *)(lVar26 + 0x28));
                }
                *(undefined4 *)(lVar26 + 0x38) = *(undefined4 *)(ppvVar34 + 7);
                *(void **)(lVar26 + 0x40) = ppvVar34[8];
                iVar25 = local_e4 + 1;
                *(int *)((longlong)local_78 + (longlong)iVar12 * 4) = iVar25;
              }
LAB_1405a5218:
              ppvVar34 = ppvVar34 + 9;
            } while (ppvVar34 != local_b8);
          }
          iVar31 = local_d4;
          puVar22 = local_e0;
          plVar27 = local_f0;
          if (iVar12 < (int)uStack_70) {
            lVar24 = (longlong)iVar12;
            do {
              *(int *)((longlong)local_78 + lVar24 * 4) = iVar25;
              lVar24 = lVar24 + 1;
            } while (lVar24 < (int)uStack_70);
          }
          iVar12 = *(int *)(lVar14 + 0x30);
          if ((longlong)iVar12 != 0) {
            lVar14 = *(longlong *)(lVar14 + 0x28);
            lVar24 = 0;
            do {
              sVar3 = *(short *)(lVar14 + 2 + lVar24);
              if ((longlong)sVar3 == -1) {
                sVar30 = 0;
              }
              else {
                sVar30 = (short)*(undefined4 *)((longlong)local_78 + (longlong)sVar3 * 4);
              }
              *(short *)(lVar14 + 2 + lVar24) = sVar3 + sVar30;
              lVar24 = lVar24 + 0x10;
            } while ((longlong)iVar12 * 0x10 != lVar24);
          }
          if (local_78 != (void *)0x0) {
            FUN_1400020a8();
          }
          if (0 < local_98) {
            local_108 = iVar31;
            FUN_1448ebfa8(plVar21,&local_b0,0x20000ffff,0);
          }
        }
        FUN_1400e1c41(local_90,local_88);
        if (local_90 != 0) {
          FUN_1400020a8();
        }
        if (local_a0 != 0) {
          FUN_1400020a8();
        }
        FUN_1400e1c6c(local_b0,(ulonglong)local_a8 & 0xffffffff);
        if (local_b0 != (void **)0x0) {
          FUN_1400020a8();
        }
      }
      puVar22 = puVar22 + 6;
    } while (puVar22 != local_c0);
  }
LAB_1405a5a59:
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405a5be8 FUN_1405a5be8 body=653 status=ok
// SIG undefined FUN_1405a5be8(void)

int FUN_1405a5be8(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  int iVar14;
  longlong lVar15;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar14 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar14 != -1) {
      lVar9 = *param_1;
      do {
        lVar15 = (longlong)iVar14 * 0x50;
        plVar8 = (longlong *)(lVar9 + lVar15);
        if (*(longlong *)(lVar9 + 8 + lVar15) == 0) {
          uVar12 = FUN_1407ad36c();
          lVar9 = FUN_14477b664(uVar12);
          plVar8[1] = lVar9;
        }
        lVar9 = param_3[1];
        if (lVar9 == 0) {
          lVar9 = FUN_1407ad36c();
        }
        lVar1 = *param_3;
        lVar9 = FUN_14477b664(lVar9);
        iVar6 = 0;
        if ((lVar9 != 0) && (plVar2 = *(longlong **)(lVar9 + 0xb8), plVar2 != (longlong *)0x0)) {
          lVar10 = *plVar2;
          pcVar3 = *(code **)(lVar10 + 0x108);
          if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
            cVar5 = (*pcVar3)(plVar2);
            iVar6 = 0;
            if (cVar5 == '\0') goto LAB_1405a5ce0;
            lVar10 = *plVar2;
          }
          pcVar3 = *(code **)(lVar10 + 0x110);
          ppuVar13 = &PTR_PTR_14c763408;
          if ((pcVar3 != (code *)&LAB_144783426) &&
             (ppuVar13 = &PTR_PTR_14c75f798, pcVar3 != (code *)&LAB_144783432)) {
            ppuVar13 = (undefined **)(*pcVar3)(plVar2);
          }
          iVar6 = FUN_144aff48c(ppuVar13);
        }
LAB_1405a5ce0:
        lVar10 = *plVar8;
        lVar4 = plVar8[1];
        iVar7 = 0;
        if ((lVar4 != 0) &&
           (plVar8 = *(longlong **)(lVar4 + 0xb8), iVar7 = 0, plVar8 != (longlong *)0x0)) {
          lVar11 = *plVar8;
          pcVar3 = *(code **)(lVar11 + 0x108);
          if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
            cVar5 = (*pcVar3)(plVar8);
            if (cVar5 == '\0') goto LAB_1405a5d48;
            lVar11 = *plVar8;
          }
          pcVar3 = *(code **)(lVar11 + 0x110);
          ppuVar13 = &PTR_PTR_14c763408;
          if ((pcVar3 != (code *)&LAB_144783426) &&
             (ppuVar13 = &PTR_PTR_14c75f798, pcVar3 != (code *)&LAB_144783432)) {
            ppuVar13 = (undefined **)(*pcVar3)(plVar8);
          }
          iVar7 = FUN_144aff48c(ppuVar13);
        }
LAB_1405a5d48:
        if ((iVar7 == iVar6) && (lVar10 == lVar1)) {
          if (lVar4 == lVar9) {
            return iVar14;
          }
          if ((lVar9 != 0) && (lVar4 != 0)) {
            iVar6 = *(int *)(lVar9 + 0x38);
            iVar7 = *(int *)(lVar4 + 0x38);
            if ((iVar6 <= iVar7) &&
               (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar6 * 8) == lVar9 + 0x30)) {
              return iVar14;
            }
            if ((iVar7 <= iVar6) &&
               (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar7 * 8) == lVar4 + 0x30)) {
              return iVar14;
            }
          }
        }
        lVar9 = *param_1;
        iVar14 = *(int *)(lVar9 + 0x48 + lVar15);
      } while (iVar14 != -1);
    }
  }
  return -1;
}



// FUNCTION 1405a5e76 FUN_1405a5e76 body=297 status=ok
// SIG undefined FUN_1405a5e76(void)

bool FUN_1405a5e76(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar4 = param_1[1];
  if (lVar4 == 0) {
    uVar3 = FUN_1407ad36c();
    lVar4 = FUN_14477b664(uVar3);
    param_1[1] = lVar4;
  }
  if (param_1[2] == 0) {
    if (lVar4 == 0) {
      return false;
    }
    if (*param_1 == 0) {
      return false;
    }
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      param_1[2] = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar4 = FUN_144aff482(uVar3,param_1);
      param_1[2] = lVar4;
      if (lVar4 != 0) goto LAB_1405a5e94;
    }
    bVar5 = false;
  }
  else {
LAB_1405a5e94:
    lVar4 = param_1[4];
    if (lVar4 == 0) {
      uVar3 = FUN_14012344a();
      lVar4 = FUN_14477b664(uVar3);
      param_1[4] = lVar4;
    }
    bVar5 = true;
    if (((param_1[5] == 0) && (bVar5 = false, lVar4 != 0)) && (param_1[3] != 0)) {
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        lVar4 = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar3,param_1 + 3);
      }
      param_1[5] = lVar4;
      bVar5 = lVar4 != 0;
    }
  }
  return bVar5;
}



// FUNCTION 1405a5fa0 FUN_1405a5fa0 body=365 status=ok
// SIG undefined FUN_1405a5fa0(void)

undefined8 * FUN_1405a5fa0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  lVar5 = FUN_1405a6706(*(undefined2 *)(param_1 + 0x38));
  uVar6 = FUN_1405a65e0(lVar5);
  FUN_1405a6582(param_2,uVar6);
  uVar6 = FUN_1405a6672(lVar5);
  FUN_1405a652a(param_2 + 2,uVar6);
  FUN_1405a64ca(param_2 + 4,*(undefined4 *)(lVar5 + 0x10));
  if ((longlong)*(int *)(param_2 + 5) != 0) {
    plVar11 = (longlong *)param_2[4];
    plVar1 = plVar11 + (longlong)*(int *)(param_2 + 5) * 3;
    lVar10 = 0;
    do {
      lVar3 = *(longlong *)(lVar5 + 8);
      *(undefined4 *)(plVar11 + 2) = *(undefined4 *)(lVar3 + 0x10 + lVar10 * 0x18);
      FUN_1405a610e(plVar11,*(undefined4 *)(lVar3 + 8 + lVar10 * 0x18));
      if ((longlong)(int)plVar11[1] != 0) {
        lVar12 = *plVar11;
        lVar8 = (longlong)(int)plVar11[1] * 0x30 + lVar12;
        lVar9 = 2;
        do {
          lVar4 = *(longlong *)(lVar3 + lVar10 * 0x18);
          FUN_1405a6176(lVar12,param_1,(int)*(short *)(lVar4 + -2 + lVar9));
          uVar2 = *(ushort *)(lVar4 + lVar9);
          puVar7 = &DAT_14c763928;
          if (-1 < (short)uVar2) {
            puVar7 = &DAT_14c763928;
            if ((int)(short)uVar2 < *(int *)(DAT_14cb7f870 + 1000)) {
              puVar7 = (undefined4 *)((ulonglong)uVar2 * 8 + *(longlong *)(DAT_14cb7f870 + 0x3e0));
            }
          }
          *(undefined4 *)(lVar12 + 0x28) = *puVar7;
          *(undefined4 *)(lVar12 + 0x2c) = puVar7[1];
          lVar12 = lVar12 + 0x30;
          lVar9 = lVar9 + 4;
        } while (lVar12 != lVar8);
      }
      lVar10 = lVar10 + 1;
      plVar11 = plVar11 + 3;
    } while (plVar11 != plVar1);
  }
  return param_2;
}



// FUNCTION 1405a610e FUN_1405a610e body=69 status=ok
// SIG undefined FUN_1405a610e(void)

int FUN_1405a610e(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_1405a63b6(param_1,iVar1);
  }
  FUN_1405a6153((longlong)iVar1 * 0x30 + *param_1,param_2);
  return iVar1;
}



// FUNCTION 1405a6153 FUN_1405a6153 body=34 status=ok
// SIG undefined FUN_1405a6153(void)

void FUN_1405a6153(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
    *(undefined8 *)((longlong)param_1 + 0x24) = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0xffffffff;
    param_1 = param_1 + 6;
  }
  return;
}



// FUNCTION 1405a6176 FUN_1405a6176 body=403 status=ok
// SIG undefined FUN_1405a6176(void)

void FUN_1405a6176(longlong *param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined1 auStack_a8 [32];
  undefined2 *local_88;
  undefined8 uStack_80;
  undefined2 *local_78;
  undefined8 uStack_70;
  longlong local_68;
  int local_60;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_2 + 0x40);
    if (lVar1 != 0) {
      puVar3 = *(undefined4 **)(param_2 + 8);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = &DAT_14c9485f0;
      }
      local_78 = (undefined2 *)0x0;
      uStack_70 = 0;
      FUN_1400b2348(puVar3,&local_78,1);
      puVar5 = &DAT_149dfb77a;
      if ((int)uStack_70 != 0) {
        puVar5 = local_78;
      }
      puVar3 = *(undefined4 **)(lVar1 + 8);
      puVar4 = &DAT_14c9485f0;
      if (puVar3 != (undefined4 *)0x0) {
        puVar4 = puVar3;
      }
      local_88 = (undefined2 *)0x0;
      uStack_80 = 0;
      FUN_1400b2348(puVar4,&local_88,1);
      puVar6 = &DAT_149dfb77a;
      if ((int)uStack_80 != 0) {
        puVar6 = local_88;
      }
      FUN_140002266(&local_68,L"%s.%s",puVar6,puVar5);
      iVar2 = local_60 + -1;
      if (local_60 == 0) {
        iVar2 = 0;
      }
      FUN_1446f82e2(&local_58,iVar2,local_68,1);
      if (*param_1 != local_58) {
        param_1[2] = 0;
      }
      *param_1 = local_58;
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (local_88 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(param_2 + 0x20))) {
      param_1[3] = *(longlong *)(*(longlong *)(param_2 + 0x18) + 8 + (ulonglong)param_3 * 0x60);
    }
    FUN_1405a630a(param_1);
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405a630a FUN_1405a630a body=170 status=ok
// SIG undefined FUN_1405a630a(void)

void FUN_1405a630a(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  longlong local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_14494f566();
  if (lVar1 != 0) {
    FUN_141889840(lVar1,local_50);
    FUN_1449fb060(&local_40,local_50,0);
    iVar2 = local_38 + -1;
    if (local_38 == 0) {
      iVar2 = 0;
    }
    FUN_1446f82e2(&local_30,iVar2,local_40,1);
    *(undefined8 *)(param_1 + 0x20) = local_30;
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405a63b6 FUN_1405a63b6 body=275 status=ok
// SIG undefined FUN_1405a63b6(void)

void FUN_1405a63b6(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x30;
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



// FUNCTION 1405a64ca FUN_1405a64ca body=69 status=ok
// SIG undefined FUN_1405a64ca(void)

int FUN_1405a64ca(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_1405a6c8c(param_1,iVar1);
  }
  FUN_1405a650f((longlong)iVar1 * 0x18 + *param_1,param_2);
  return iVar1;
}


