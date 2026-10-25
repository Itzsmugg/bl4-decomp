// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1437b9958 FUN_1437b9958 body=69 status=ok
// SIG undefined FUN_1437b9958(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437b9958(void)

{
  _DAT_14cb12190 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437b999a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb12198,1);
  return;
}



// FUNCTION 1437b999d FUN_1437b999d body=49 status=ok
// SIG undefined FUN_1437b999d(void)

void FUN_1437b999d(void)

{
  FUN_144760e21(DAT_14cb121a8,DAT_14cb121b0);
  if (DAT_14cb121a8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1437b99ce FUN_1437b99ce body=49 status=ok
// SIG undefined FUN_1437b99ce(void)

void FUN_1437b99ce(void)

{
  FUN_144760e21(DAT_14cb121c0,DAT_14cb121c8);
  if (DAT_14cb121c0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1437b9a00 FUN_1437b9a00 body=15396 status=ok
// SIG undefined FUN_1437b9a00(void)

void FUN_1437b9a00(longlong param_1,longlong param_2)

{
  void *_Dst;
  undefined8 *puVar1;
  DWORD *pDVar2;
  PSRWLOCK SRWLock;
  double dVar3;
  _struct_19 _Var4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  LARGE_INTEGER LVar9;
  LARGE_INTEGER LVar10;
  longlong *plVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong *plVar17;
  uint *puVar18;
  uint *puVar19;
  _struct_19 _Var20;
  _struct_19 _Var21;
  int *piVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  uint uVar26;
  int iVar27;
  undefined1 *_Dst_00;
  _struct_19 _Var28;
  DWORD DVar29;
  undefined8 uVar30;
  _struct_19 _Var31;
  longlong lVar32;
  longlong *plVar33;
  longlong *plVar34;
  void *pvVar35;
  byte bVar36;
  ulonglong uVar37;
  longlong *plVar38;
  int iVar39;
  code *pcVar40;
  longlong *plVar41;
  code *pcVar42;
  longlong *plVar43;
  longlong *plVar44;
  code *pcVar45;
  uint uVar46;
  int iVar47;
  LARGE_INTEGER *pLVar48;
  int iVar49;
  code *pcVar50;
  longlong *plVar51;
  ulonglong uVar52;
  LARGE_INTEGER *pLVar53;
  uint uVar54;
  longlong *plVar55;
  ulonglong uVar56;
  code *pcVar57;
  bool bVar58;
  float fVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  undefined1 auStack_548 [32];
  undefined4 local_528;
  undefined4 local_520;
  undefined4 local_518;
  undefined8 local_510;
  wchar_t *local_508;
  code *local_500;
  undefined1 *local_4f8;
  LARGE_INTEGER *local_4f0;
  code *local_4e8;
  code *local_4e0;
  LARGE_INTEGER *local_4d8;
  longlong local_4d0;
  ulonglong local_4c8;
  longlong *local_4c0;
  undefined8 local_4b8;
  LARGE_INTEGER *local_4b0;
  longlong local_4a8;
  uint local_49c;
  ulonglong local_498;
  longlong local_490;
  longlong local_488;
  undefined8 local_480;
  code *local_478;
  undefined8 uStack_470;
  code *local_468;
  undefined8 uStack_460;
  int local_44c;
  code *local_448;
  ulonglong uStack_440;
  longlong *local_430;
  longlong local_428;
  longlong local_420;
  longlong local_418;
  undefined8 uStack_410;
  LARGE_INTEGER local_408;
  ulonglong uStack_400;
  LARGE_INTEGER local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8 [2];
  uint *local_3d8;
  uint local_3d0;
  undefined8 local_3cc;
  int local_3c4;
  undefined1 local_3c0 [8];
  undefined1 *local_3b8;
  int local_3b0;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_548;
  bVar36 = *(byte *)(param_1 + 0x152);
  if ((bVar36 != 1) && ((6 < bVar36 || ((0x68U >> (bVar36 & 0x1f) & 1) == 0)))) goto LAB_1437bd130;
  local_4a8 = param_1;
  if (param_1 == 0) {
    if (param_2 == 0) goto LAB_1437bd130;
    plVar17 = &local_418;
    local_420 = 0;
LAB_1437b9b1d:
    local_430 = &local_418;
    uStack_410 = 0;
    local_418 = 0;
    local_4b0 = (LARGE_INTEGER *)
                CONCAT44(local_4b0._4_4_,(int)CONCAT71((int7)((ulonglong)plVar17 >> 8),1));
    lVar16 = 0;
    uVar30 = 0;
    local_428 = param_2;
  }
  else {
    lVar23 = param_2;
    lVar16 = FUN_14011c706(param_1);
    uVar30 = CONCAT71((int7)((ulonglong)lVar23 >> 8),param_2 == 0);
    if (param_2 == 0) {
      if ((lVar16 == 0) || (*(int *)(lVar16 + 0x50) == 0)) goto LAB_1437bd130;
      local_428 = 0;
    }
    else {
      local_428 = param_2;
      if (lVar16 == 0) {
        plVar17 = (longlong *)0x0;
        local_420 = lVar16;
        goto LAB_1437b9b1d;
      }
    }
    local_430 = &local_418;
    uStack_410 = 0;
    local_418 = 0;
    local_4d0 = lVar16;
    local_480 = uVar30;
    local_420 = lVar16;
    if (DAT_14c761f1c != 0) {
      local_4c0 = (longlong *)(lVar16 + 0x170);
      iVar14 = *(int *)(lVar16 + 0x17c);
      FUN_14482129f(*(undefined8 *)(lVar16 + 0x170));
      *(undefined4 *)(lVar16 + 0x178) = 0;
      if ((iVar14 < 0) && (*(int *)(lVar16 + 0x17c) != 0)) {
        FUN_147dd7cc6(local_4c0);
      }
      lVar23 = *(longlong *)(lVar16 + 0x20);
      if (lVar23 == 0) {
LAB_1437bd43c:
        lVar23 = 0;
      }
      else {
        if (DAT_14cb10130 == 0) {
          local_4f0 = &local_3f8;
          local_3f8.QuadPart = (LONGLONG)FUN_140754f84;
          local_4e0 = FUN_14081d0ea;
          local_4e8 = FUN_14081d0ea;
          local_4f8 = &LAB_147da9a76;
          local_500 = FUN_1409f3105;
          local_508 = L"Engine";
          local_510 = 0;
          local_518 = 0x10000000;
          local_520 = 8;
          local_528 = 0x990;
          FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
        }
        if ((*(int *)(*(longlong *)(lVar23 + 0x10) + 0x38) < *(int *)(DAT_14cb10130 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar23 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) != DAT_14cb10130 + 0x30))
        goto LAB_1437bd43c;
      }
      cVar12 = FUN_1437b14e8(lVar23);
      if ((((cVar12 == '\0') || (*(longlong *)(lVar23 + 0x30) == 0)) ||
          (lVar32 = *(longlong *)(*(longlong *)(lVar23 + 0x30) + 0x2b0), lVar32 == 0)) ||
         ((lVar32 = *(longlong *)(lVar32 + 0x3f0), lVar32 == 0 ||
          (cVar12 = FUN_147dcba88(*(undefined8 *)(lVar32 + 0xf0)), cVar12 == '\0')))) {
        iVar14 = FUN_14490d72a(lVar23);
        uVar54 = iVar14 - 3;
        iVar14 = *(int *)(lVar16 + 0x1d4);
        if ((0 < iVar14 || uVar54 < 0xfffffffe) || (cVar12 = FUN_147dcb886(lVar23), cVar12 != '\0'))
        {
          local_490 = CONCAT44(local_490._4_4_,iVar14);
          local_408.QuadPart = 0;
          uStack_400 = 0;
          local_3d8 = (uint *)0x0;
          local_3d0 = 0;
          local_3f8.QuadPart = 0;
          uStack_3f0 = (code *)0x0;
          local_3cc = 0xffffffff00000080;
          local_3c4 = 0;
          local_3b8 = (undefined1 *)0x0;
          local_3b0 = 0;
          local_49c = uVar54;
          if ((LARGE_INTEGER *)(lVar16 + 0xf8) != &local_3f8) {
            iVar14 = *(int *)(lVar16 + 0x140);
            if ((ulonglong)(longlong)iVar14 < 2) {
              if (iVar14 != 0) goto LAB_1437b9cf2;
            }
            else {
              FUN_1446efa72(&local_3b8,0,iVar14,4);
LAB_1437b9cf2:
              _Dst_00 = local_3c0;
              if (local_3b8 != (undefined1 *)0x0) {
                _Dst_00 = local_3b8;
              }
              pvVar35 = (void *)(lVar16 + 0x130);
              if (*(void **)(lVar16 + 0x138) != (void *)0x0) {
                pvVar35 = *(void **)(lVar16 + 0x138);
              }
              memcpy(_Dst_00,pvVar35,(longlong)iVar14 << 2);
            }
            uVar54 = *(uint *)(lVar16 + 0x100);
            local_3b0 = iVar14;
            FUN_14059f180(&local_3f8,uVar54);
            iVar14 = (DWORD)uStack_3f0;
            uStack_3f0 = (code *)CONCAT44(uStack_3f0._4_4_,(DWORD)uStack_3f0 + uVar54);
            if (uStack_3f0._4_4_ - iVar14 < uVar54) {
              FUN_1446efaca(&local_3f8);
            }
            local_3cc = CONCAT44(*(undefined4 *)(lVar16 + 0x128),(int)local_3cc);
            local_3c4 = *(int *)(lVar16 + 300);
            uVar26 = *(uint *)(lVar16 + 0x120);
            uVar13 = uVar26 + 0x1f & 0xffffffe0;
            local_3d0 = 0;
            if (((int)local_3cc < (int)uVar13) || (0x80 < (int)local_3cc)) {
              uVar26 = 0x80;
              if (0x80 < (int)uVar13) {
                uVar26 = uVar13;
              }
              local_3cc = CONCAT44(*(undefined4 *)(lVar16 + 0x128),uVar26);
              FUN_1446efbd8(local_3e8,0);
              uVar26 = *(uint *)(lVar16 + 0x120);
            }
            local_3d0 = uVar26;
            if (uVar26 != 0) {
              pvVar35 = (void *)(lVar16 + 0x108);
              if (*(void **)(lVar16 + 0x118) != (void *)0x0) {
                pvVar35 = *(void **)(lVar16 + 0x118);
              }
              puVar18 = (uint *)local_3e8;
              if (local_3d8 != (uint *)0x0) {
                puVar18 = local_3d8;
              }
              memcpy(puVar18,pvVar35,(ulonglong)(uVar26 + 0x1f >> 3 & 0xfffffffc));
            }
            if (uVar54 != 0) {
              memcpy((void *)local_3f8,(void *)*(LARGE_INTEGER *)(lVar16 + 0xf8),
                     (longlong)(int)uVar54 << 4);
            }
          }
          if (((((DWORD)uStack_3f0 != local_3c4) && (*(int *)(local_4d0 + 0x150) != 0)) &&
              (*(longlong **)(local_4d0 + 0x148) != (longlong *)0x0)) &&
             (cVar12 = (**(code **)(**(longlong **)(local_4d0 + 0x148) + 0x30))(), cVar12 != '\0'))
          {
            if (local_3d0 == 0) {
              uVar56 = 1;
              iVar14 = 0;
              uVar52 = 0;
              uVar54 = 0;
            }
            else {
              puVar18 = local_3d8;
              if (local_3d8 == (uint *)0x0) {
                puVar18 = (uint *)local_3e8;
              }
              uVar54 = *puVar18;
              if (uVar54 == 0) {
                iVar14 = local_3d0 + 0x1e;
                if (-1 < (int)(local_3d0 - 1)) {
                  iVar14 = local_3d0 - 1;
                }
                uVar52 = 0;
                uVar56 = (ulonglong)(uint)(iVar14 >> 5);
                if (iVar14 >> 5 < 1) {
                  uVar56 = uVar52;
                }
                iVar14 = 0;
                do {
                  if (uVar56 == uVar52) goto LAB_1437b9dea;
                  iVar14 = iVar14 + 0x20;
                  uVar54 = puVar18[uVar52 + 1];
                  uVar52 = uVar52 + 1;
                } while (uVar54 == 0);
              }
              else {
                iVar14 = 0;
                uVar52 = 0;
              }
              uVar56 = (ulonglong)(-uVar54 & uVar54);
              uVar37 = uVar56 * 2 + 1;
              lVar16 = 0x3f;
              if (uVar37 != 0) {
                for (; uVar37 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                }
              }
              uVar54 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
              if ((int)local_3d0 <= (int)uVar54) {
                uVar54 = local_3d0;
              }
            }
            if ((int)uVar54 < (int)local_3d0) {
              uVar26 = 0xffffffff;
              do {
                if (*(int *)(local_4d0 + 0x150) == 0) {
                  plVar17 = (longlong *)0x0;
                }
                else {
                  plVar17 = *(longlong **)(local_4d0 + 0x148);
                }
                cVar12 = (**(code **)(*plVar17 + 0x58))
                                   (plVar17,*(undefined8 *)
                                             (local_3f8.QuadPart + (longlong)(int)uVar54 * 0x10));
                if (cVar12 != '\0') {
                  FUN_145a00d42(&local_3f8,uVar54);
                }
                uVar26 = uVar26 & ~(uint)uVar56;
                puVar18 = local_3d8;
                if (local_3d8 == (uint *)0x0) {
                  puVar18 = (uint *)local_3e8;
                }
                iVar39 = (int)uVar52;
                lVar16 = (longlong)iVar39;
                uVar54 = puVar18[lVar16] & uVar26;
                if (uVar54 == 0) {
                  iVar49 = local_3d0 + 0x1e;
                  if (-1 < (int)(local_3d0 - 1)) {
                    iVar49 = local_3d0 - 1;
                  }
                  iVar27 = iVar49 >> 5;
                  if (iVar49 >> 5 < iVar39) {
                    iVar27 = iVar39;
                  }
                  lVar32 = 0;
                  do {
                    if (iVar27 - lVar16 == lVar32) goto LAB_1437b9dea;
                    iVar14 = iVar14 + 0x20;
                    uVar54 = puVar18[lVar16 + lVar32 + 1];
                    lVar32 = lVar32 + 1;
                  } while (uVar54 == 0);
                  uVar52 = (ulonglong)(uint)(iVar39 + (int)lVar32);
                  uVar26 = 0xffffffff;
                }
                uVar56 = (ulonglong)(-uVar54 & uVar54);
                uVar37 = uVar56 * 2 + 1;
                lVar16 = 0x3f;
                if (uVar37 != 0) {
                  for (; uVar37 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                  }
                }
                uVar54 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
              } while ((int)uVar54 < (int)local_3d0);
            }
          }
LAB_1437b9dea:
          local_488 = lVar23;
          if (local_3d0 == 0) {
            uVar56 = 1;
            iVar14 = 0;
            uVar52 = 0;
            uVar54 = 0;
          }
          else {
            puVar18 = local_3d8;
            if (local_3d8 == (uint *)0x0) {
              puVar18 = (uint *)local_3e8;
            }
            uVar54 = *puVar18;
            if (uVar54 == 0) {
              iVar14 = local_3d0 + 0x1e;
              if (-1 < (int)(local_3d0 - 1)) {
                iVar14 = local_3d0 - 1;
              }
              uVar52 = 0;
              uVar56 = (ulonglong)(uint)(iVar14 >> 5);
              if (iVar14 >> 5 < 1) {
                uVar56 = uVar52;
              }
              iVar14 = 0;
              do {
                if (uVar56 == uVar52) goto LAB_1437b9e93;
                iVar14 = iVar14 + 0x20;
                uVar54 = puVar18[uVar52 + 1];
                uVar52 = uVar52 + 1;
              } while (uVar54 == 0);
            }
            else {
              iVar14 = 0;
              uVar52 = 0;
            }
            uVar56 = (ulonglong)(-uVar54 & uVar54);
            uVar37 = uVar56 * 2 + 1;
            lVar16 = 0x3f;
            if (uVar37 != 0) {
              for (; uVar37 >> lVar16 == 0; lVar16 = lVar16 + -1) {
              }
            }
            uVar54 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
            if ((int)local_3d0 <= (int)uVar54) {
              uVar54 = local_3d0;
            }
          }
          if (uVar54 != local_3d0) {
            uVar26 = 0xffffffff;
            local_498 = (ulonglong)local_3d0;
            do {
              uVar37 = uStack_400;
              local_4b0 = (LARGE_INTEGER *)CONCAT44(local_4b0._4_4_,uVar26);
              local_4d8 = (LARGE_INTEGER *)CONCAT44(local_4d8._4_4_,iVar14);
              plVar17 = *(longlong **)(local_3f8.QuadPart + (longlong)(int)uVar54 * 0x10);
              local_4c8 = uVar52;
              local_4b8 = uVar56;
              FUN_14482129f(local_408.QuadPart,uStack_400 & 0xffffffff);
              uVar52 = uStack_400 >> 0x20;
              uStack_400 = uStack_400 & 0xffffffff00000000;
              if (((longlong)uVar37 < 0) && ((int)uVar52 != 0)) {
                FUN_147dd7cc6(&local_408);
              }
              cVar12 = (**(code **)(*plVar17 + 8))(plVar17,&local_408);
              if (cVar12 != '\0') {
                if ((longlong)(int)uStack_400 != 0) {
                  pcVar50 = (code *)((longlong)(int)uStack_400 * 0x160 + local_408.QuadPart);
                  pcVar57 = (code *)(local_408.QuadPart + 0xb8);
                  do {
                    iVar14 = *(int *)(local_4d0 + 0x178);
                    *(uint *)(local_4d0 + 0x178) = iVar14 + 1U;
                    if (*(uint *)(local_4d0 + 0x17c) < iVar14 + 1U) {
                      FUN_140178088(local_4c0,iVar14);
                    }
                    lVar16 = *local_4c0;
                    lVar32 = (longlong)iVar14 * 0x160;
                    pcVar40 = (code *)(lVar16 + lVar32);
                    pcVar42 = pcVar57 + -0xb8;
                    pcVar45 = pcVar40;
                    for (lVar23 = 0xc; lVar23 != 0; lVar23 = lVar23 + -1) {
                      *(undefined8 *)pcVar45 = *(undefined8 *)pcVar42;
                      pcVar42 = pcVar42 + 8;
                      pcVar45 = pcVar45 + 8;
                    }
                    *(code *)(lVar16 + 0x60 + lVar32) = pcVar57[-0x58];
                    *(undefined8 *)(lVar16 + 0x88 + lVar32) = 0;
                    *(undefined4 *)(lVar16 + 0x90 + lVar32) = 0;
                    puVar1 = (undefined8 *)(lVar16 + 0x68 + lVar32);
                    *puVar1 = 0;
                    puVar1[1] = 0;
                    *(undefined8 *)(lVar16 + 0x94 + lVar32) = 0xffffffff00000080;
                    *(undefined4 *)(lVar16 + 0x9c + lVar32) = 0;
                    *(undefined8 *)(lVar16 + 0xa8 + lVar32) = 0;
                    *(undefined4 *)(lVar16 + 0xb0 + lVar32) = 0;
                    if (pcVar40 != pcVar57 + -0xb8) {
                      *(undefined8 *)(pcVar40 + 0x68) = *(undefined8 *)(pcVar57 + -0x50);
                      *(undefined8 *)(pcVar57 + -0x50) = 0;
                      *(undefined4 *)(pcVar40 + 0x70) = *(undefined4 *)(pcVar57 + -0x48);
                      *(undefined4 *)(pcVar40 + 0x74) = *(undefined4 *)(pcVar57 + -0x44);
                      *(undefined8 *)(pcVar57 + -0x48) = 0;
                      if (*(longlong *)(pcVar57 + -0x30) == 0) {
                        uVar6 = *(undefined4 *)(pcVar57 + -0x3c);
                        uVar7 = *(undefined4 *)(pcVar57 + -0x38);
                        uVar8 = *(undefined4 *)(pcVar57 + -0x34);
                        *(undefined4 *)(pcVar40 + 0x78) = *(undefined4 *)(pcVar57 + -0x40);
                        *(undefined4 *)(pcVar40 + 0x7c) = uVar6;
                        *(undefined4 *)(pcVar40 + 0x80) = uVar7;
                        *(undefined4 *)(pcVar40 + 0x84) = uVar8;
                      }
                      if (*(longlong *)(pcVar40 + 0x88) != 0) {
                        FUN_1400020a8();
                      }
                      *(undefined8 *)(pcVar40 + 0x88) = *(undefined8 *)(pcVar57 + -0x30);
                      *(undefined8 *)(pcVar57 + -0x30) = 0;
                      *(undefined4 *)(pcVar40 + 0x90) = *(undefined4 *)(pcVar57 + -0x28);
                      *(undefined4 *)(pcVar40 + 0x94) = *(undefined4 *)(pcVar57 + -0x24);
                      *(undefined8 *)(pcVar57 + -0x28) = 0;
                      *(undefined4 *)(pcVar40 + 0x98) = *(undefined4 *)(pcVar57 + -0x20);
                      *(undefined4 *)(pcVar40 + 0x9c) = *(undefined4 *)(pcVar57 + -0x1c);
                      *(undefined8 *)(pcVar57 + -0x20) = 0xffffffff;
                    }
                    if (*(longlong *)(pcVar57 + -0x10) == 0) {
                      *(undefined4 *)(pcVar40 + 0xa0) = *(undefined4 *)(pcVar57 + -0x18);
                    }
                    if (*(longlong *)(pcVar40 + 0xa8) != 0) {
                      FUN_1400020a8();
                    }
                    *(undefined8 *)(pcVar40 + 0xa8) = *(undefined8 *)(pcVar57 + -0x10);
                    *(undefined8 *)(pcVar57 + -0x10) = 0;
                    *(undefined4 *)(pcVar40 + 0xb0) = *(undefined4 *)(pcVar57 + -8);
                    *(undefined4 *)(pcVar57 + -8) = 0;
                    FUN_1402d4652(pcVar40 + 0xb8,pcVar57);
                    *(undefined8 *)(pcVar40 + 0x108) = 0;
                    *(undefined8 *)(pcVar40 + 0x108) = *(undefined8 *)(pcVar57 + 0x50);
                    *(undefined8 *)(pcVar57 + 0x50) = 0;
                    *(undefined4 *)(pcVar40 + 0x110) = *(undefined4 *)(pcVar57 + 0x58);
                    *(undefined4 *)(pcVar40 + 0x114) = *(undefined4 *)(pcVar57 + 0x5c);
                    *(undefined8 *)(pcVar57 + 0x58) = 0;
                    pcVar42 = pcVar57 + 0x60;
                    pcVar40 = pcVar40 + 0x118;
                    for (lVar16 = 9; lVar16 != 0; lVar16 = lVar16 + -1) {
                      *(undefined8 *)pcVar40 = *(undefined8 *)pcVar42;
                      pcVar42 = pcVar42 + 8;
                      pcVar40 = pcVar40 + 8;
                    }
                    pcVar40 = pcVar57 + 0xa8;
                    pcVar57 = pcVar57 + 0x160;
                  } while (pcVar40 != pcVar50);
                }
              }
              uVar26 = (uint)local_4b0 & ~(uint)local_4b8;
              puVar18 = local_3d8;
              if (local_3d8 == (uint *)0x0) {
                puVar18 = (uint *)local_3e8;
              }
              iVar39 = (int)local_4c8;
              lVar16 = (longlong)iVar39;
              uVar54 = puVar18[lVar16] & uVar26;
              uVar52 = local_4c8;
              iVar14 = (int)local_4d8;
              if (uVar54 == 0) {
                iVar49 = local_3d0 + 0x1e;
                if (-1 < (int)(local_3d0 - 1)) {
                  iVar49 = local_3d0 - 1;
                }
                iVar49 = iVar49 >> 5;
                iVar14 = (int)local_4d8 + 0x20;
                iVar27 = iVar49;
                if (iVar49 < iVar39) {
                  iVar27 = iVar39;
                }
                if (iVar39 < iVar49) {
                  lVar23 = 0;
                  do {
                    uVar54 = puVar18[lVar16 + lVar23 + 1];
                    if (uVar54 != 0) {
                      uVar26 = 0xffffffff;
                      uVar52 = (ulonglong)(iVar39 + (int)lVar23 + 1);
                      goto LAB_1437ba2c6;
                    }
                    iVar14 = iVar14 + 0x20;
                    lVar23 = lVar23 + 1;
                  } while (iVar27 - lVar16 != lVar23);
                  uVar26 = 0xffffffff;
                  iVar39 = iVar27;
                }
                uVar52 = (ulonglong)(iVar39 + 1);
                uVar56 = local_4b8;
                uVar54 = local_3d0;
              }
              else {
LAB_1437ba2c6:
                uVar56 = (ulonglong)(-uVar54 & uVar54);
                uVar37 = uVar56 * 2 + 1;
                lVar16 = 0x3f;
                if (uVar37 != 0) {
                  for (; uVar37 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                  }
                }
                uVar54 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
                if ((int)local_3d0 <= (int)uVar54) {
                  uVar54 = local_3d0;
                }
              }
            } while (uVar54 != (uint)local_498);
          }
LAB_1437b9e93:
          lVar16 = local_4d0;
          local_3b0 = 0;
          if (local_3b8 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          FUN_14059f148(&local_3f8);
          FUN_14482129f(local_408.QuadPart);
          lVar23 = local_488;
          uVar54 = local_49c;
          iVar14 = (int)local_490;
          if ((code *)local_408.QuadPart != (code *)0x0) {
            FUN_1400020a8();
          }
          if (0xfffffffd < uVar54 && 0 < iVar14) {
            if (DAT_14c761f00 == '\x01') {
              iVar14 = 0;
              iVar39 = (int)(float)DAT_14c761f04 * 2;
              if (DAT_14c761f04 < 1) {
                iVar39 = iVar14;
              }
              if (iVar39 <= DAT_14c761f0c) {
                iVar39 = DAT_14c761f0c;
              }
              if (iVar39 < 1) {
                iVar39 = 0;
              }
              if (0 < DAT_14c761f08) {
                iVar14 = (int)(float)DAT_14c761f08 * 2;
              }
            }
            else {
              iVar14 = 0;
              iVar39 = DAT_14c761f0c;
              if (DAT_14c761f0c < 1) {
                iVar39 = iVar14;
              }
            }
            iVar49 = DAT_14c761f10;
            if (DAT_14c761f10 < iVar14) {
              iVar49 = iVar14;
            }
            iVar14 = 0;
            if (0 < iVar49) {
              iVar14 = iVar49;
            }
            iVar49 = *(int *)(lVar16 + 0x178);
            if ((longlong)iVar49 != 0) {
              lVar32 = *(longlong *)(lVar16 + 0x170);
              lVar25 = 0;
              do {
                *(float *)(lVar32 + 0x158 + lVar25) = (float)iVar39;
                *(float *)(lVar32 + 0x15c + lVar25) = (float)iVar14;
                lVar25 = lVar25 + 0x160;
              } while ((longlong)iVar49 * 0x160 - lVar25 != 0);
            }
          }
        }
      }
      puVar18 = (uint *)(lVar16 + 400);
      iVar14 = *(int *)(lVar16 + 0x1a8);
      iVar39 = iVar14;
      if (iVar14 == 0) {
        uVar56 = 1;
        uVar52 = 0;
        iVar27 = 0;
        iVar49 = 0;
      }
      else {
        puVar19 = *(uint **)(lVar16 + 0x1a0);
        if (*(uint **)(lVar16 + 0x1a0) == (uint *)0x0) {
          puVar19 = puVar18;
        }
        uVar54 = *puVar19;
        if (uVar54 == 0) {
          iVar49 = iVar14 + 0x1e;
          if (-1 < iVar14 + -1) {
            iVar49 = iVar14 + -1;
          }
          uVar52 = 0;
          uVar56 = (ulonglong)(uint)(iVar49 >> 5);
          if (iVar49 >> 5 < 1) {
            uVar56 = uVar52;
          }
          iVar27 = 0;
          do {
            if (uVar56 == uVar52) goto LAB_1437ba441;
            iVar27 = iVar27 + 0x20;
            uVar54 = puVar19[uVar52 + 1];
            uVar52 = uVar52 + 1;
          } while (uVar54 == 0);
        }
        else {
          uVar52 = 0;
          iVar27 = 0;
        }
        uVar56 = (ulonglong)(-uVar54 & uVar54);
        uVar37 = uVar56 * 2 + 1;
        lVar32 = 0x3f;
        if (uVar37 != 0) {
          for (; uVar37 >> lVar32 == 0; lVar32 = lVar32 + -1) {
          }
        }
        iVar49 = (iVar27 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
        if (iVar14 <= iVar49) {
          iVar49 = iVar14;
        }
      }
      if (iVar49 != iVar14) {
        uVar54 = 0xffffffff;
        do {
          *(undefined1 *)(*(longlong *)(lVar16 + 0x180) + 8 + (longlong)iVar49 * 0x58) = 0;
          uVar54 = ~(uint)uVar56 & uVar54;
          puVar19 = *(uint **)(lVar16 + 0x1a0);
          if (*(uint **)(lVar16 + 0x1a0) == (uint *)0x0) {
            puVar19 = puVar18;
          }
          iVar39 = *(int *)(lVar16 + 0x1a8);
          iVar49 = (int)uVar52;
          lVar32 = (longlong)iVar49;
          uVar26 = puVar19[lVar32] & uVar54;
          if (uVar26 == 0) {
            iVar15 = iVar39 + 0x1e;
            if (-1 < iVar39 + -1) {
              iVar15 = iVar39 + -1;
            }
            iVar15 = iVar15 >> 5;
            iVar27 = iVar27 + 0x20;
            iVar47 = iVar15;
            if (iVar15 < iVar49) {
              iVar47 = iVar49;
            }
            if (iVar49 < iVar15) {
              lVar25 = 0;
              do {
                uVar26 = puVar19[lVar32 + lVar25 + 1];
                if (uVar26 != 0) {
                  uVar52 = (ulonglong)(iVar49 + (int)lVar25 + 1);
                  uVar54 = 0xffffffff;
                  goto LAB_1437bb32c;
                }
                iVar27 = iVar27 + 0x20;
                lVar25 = lVar25 + 1;
              } while (iVar47 - lVar32 != lVar25);
              uVar54 = 0xffffffff;
              iVar49 = iVar47;
            }
            uVar52 = (ulonglong)(iVar49 + 1);
            lVar16 = local_4d0;
            iVar49 = iVar39;
          }
          else {
LAB_1437bb32c:
            uVar56 = (ulonglong)(-uVar26 & uVar26);
            uVar37 = uVar56 * 2 + 1;
            lVar32 = 0x3f;
            if (uVar37 != 0) {
              for (; uVar37 >> lVar32 == 0; lVar32 = lVar32 + -1) {
              }
            }
            iVar49 = (iVar27 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
            if (iVar39 <= iVar49) {
              iVar49 = iVar39;
            }
          }
        } while (iVar49 != iVar14);
      }
LAB_1437ba441:
      plVar17 = (longlong *)(lVar16 + 0x180);
      *(undefined4 *)(lVar16 + 0x1d0) = 0;
      if ((longlong)*(int *)(lVar16 + 0x178) != 0) {
        dVar5 = *(double *)(lVar23 + 0x6d0);
        pLVar53 = *(LARGE_INTEGER **)(lVar16 + 0x170);
        pLVar48 = pLVar53 + (longlong)*(int *)(lVar16 + 0x178) * 0x2c;
        local_4c0 = (longlong *)(lVar16 + 0x1b8);
        do {
          _Var28 = pLVar53->s;
          if (_Var28 != (_struct_19)0x0) {
            local_3e8[0] = DAT_14c8464f0;
            local_3f8.s.HighPart = DAT_14c8464e0._4_4_;
            local_3f8.s.LowPart = (undefined4)DAT_14c8464e0;
            uStack_3f0 = (code *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
            uVar54 = _Var28.LowPart & 0xffff;
            uVar54 = (_Var28.LowPart << 0x10 | uVar54) + _Var28.HighPart +
                     (_Var28._2_4_ << 0x13 | _Var28._2_4_ & 0xffff) + (uVar54 >> 4);
            iVar39 = *(int *)(local_4d0 + 0x188);
            iVar14 = *(int *)(local_4d0 + 0x1b4);
            if (iVar39 != iVar14) {
              plVar33 = *(longlong **)(local_4d0 + 0x1c0);
              if (*(longlong **)(local_4d0 + 0x1c0) == (longlong *)0x0) {
                plVar33 = local_4c0;
              }
              iVar49 = *(int *)((longlong)plVar33 +
                               (ulonglong)(*(int *)(local_4d0 + 0x1c8) - 1U & uVar54) * 4);
              if (iVar49 != -1) {
                do {
                  lVar16 = *plVar17 + (longlong)iVar49 * 0x58;
                  if (*(_struct_19 *)(*plVar17 + (longlong)iVar49 * 0x58) == _Var28) {
                    if (lVar16 != 0) goto LAB_1437ba5bd;
                    break;
                  }
                  iVar49 = *(int *)(lVar16 + 0x50);
                } while (iVar49 != -1);
              }
            }
            if (iVar14 == 0) {
              *(int *)(local_4d0 + 0x188) = iVar39 + 1;
              local_4d8 = pLVar48;
              if (*(int *)(local_4d0 + 0x18c) == iVar39) {
                FUN_1403e7a24(plVar17,iVar39);
              }
              lVar16 = (longlong)iVar39;
              iVar14 = FUN_144a54ea4(puVar18,1);
              puVar19 = *(uint **)(local_4d0 + 0x1a0);
              if (*(uint **)(local_4d0 + 0x1a0) == (uint *)0x0) {
                puVar19 = puVar18;
              }
              iVar49 = iVar14 + 0x1f;
              if (-1 < iVar14) {
                iVar49 = iVar14;
              }
              bVar36 = (byte)iVar14 & 0x1f;
              puVar19[iVar49 >> 5] =
                   puVar19[iVar49 >> 5] & (-2 << bVar36 | 0xfffffffeU >> 0x20 - bVar36);
              pLVar48 = local_4d8;
            }
            else {
              iVar39 = *(int *)(local_4d0 + 0x1b0);
              lVar16 = (longlong)iVar39;
              iVar49 = *(int *)(*(longlong *)(local_4d0 + 0x180) + 4 + lVar16 * 0x58);
              *(int *)(local_4d0 + 0x1b0) = iVar49;
              *(int *)(local_4d0 + 0x1b4) = iVar14 + -1;
              if (iVar14 + -1 != 0) {
                *(undefined4 *)(*(longlong *)(local_4d0 + 0x180) + (longlong)iVar49 * 0x58) =
                     0xffffffff;
              }
            }
            puVar19 = *(uint **)(local_4d0 + 0x1a0);
            if (*(uint **)(local_4d0 + 0x1a0) == (uint *)0x0) {
              puVar19 = puVar18;
            }
            iVar14 = iVar39 + 0x1f;
            if (-1 < iVar39) {
              iVar14 = iVar39;
            }
            puVar19[iVar14 >> 5] = puVar19[iVar14 >> 5] | 1 << ((byte)iVar39 & 0x1f);
            lVar23 = *(longlong *)(local_4d0 + 0x180);
            lVar16 = lVar16 * 0x58;
            pvVar35 = (void *)(lVar23 + lVar16);
            lVar32 = pLVar53->QuadPart;
            *(longlong *)(lVar23 + lVar16) = lVar32;
            *(undefined1 *)(lVar23 + 8 + lVar16) = 0;
            *(_struct_19 *)(lVar23 + 0xc + lVar16) = _Var28;
            *(undefined8 *)(lVar23 + 0x18 + lVar16) = 0xbff0000000000000;
            pDVar2 = (DWORD *)(lVar23 + 0x20 + lVar16);
            *pDVar2 = local_3f8.s.LowPart;
            pDVar2[1] = local_3f8.s.HighPart;
            pDVar2[2] = (DWORD)uStack_3f0;
            pDVar2[3] = uStack_3f0._4_4_;
            *(undefined8 *)(lVar23 + 0x30 + lVar16) = local_3e8[0];
            *(undefined4 *)(lVar23 + 0x50 + lVar16) = 0xffffffff;
            uVar26 = *(int *)(local_4d0 + 0x188) - *(int *)(local_4d0 + 0x1b4);
            if ((uVar26 != 0) && (uVar26 != 1)) {
              plVar33 = *(longlong **)(local_4d0 + 0x1c0);
              if (*(longlong **)(local_4d0 + 0x1c0) == (longlong *)0x0) {
                plVar33 = local_4c0;
              }
              iVar14 = *(int *)((longlong)plVar33 +
                               (ulonglong)(*(int *)(local_4d0 + 0x1c8) - 1U & uVar54) * 4);
              if (iVar14 != -1) {
                do {
                  _Dst = (void *)(*plVar17 + (longlong)iVar14 * 0x58);
                  if (*(longlong *)(*plVar17 + (longlong)iVar14 * 0x58) == lVar32) {
                    memmove(_Dst,pvVar35,0x50);
                    FUN_1437c25c6(plVar17,iVar39);
                    goto LAB_1437bae8b;
                  }
                  iVar14 = *(int *)((longlong)_Dst + 0x50);
                } while (iVar14 != -1);
              }
            }
            iVar14 = 1;
            if (3 < uVar26) {
              uVar52 = (ulonglong)(uVar26 & 0xfffffffe) + 0xf;
              lVar16 = 0x3f;
              if (uVar52 != 0) {
                for (; uVar52 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                }
              }
              iVar14 = 1 << ((byte)lVar16 & 0x1f);
            }
            if (((int)uVar26 < 1) || (iVar14 <= *(int *)(local_4d0 + 0x1c8))) {
              uVar54 = *(int *)(local_4d0 + 0x1c8) - 1U & uVar54;
              *(uint *)((longlong)pvVar35 + 0x54) = uVar54;
              plVar33 = *(longlong **)(local_4d0 + 0x1c0);
              if (*(longlong **)(local_4d0 + 0x1c0) == (longlong *)0x0) {
                plVar33 = local_4c0;
              }
              *(undefined4 *)((longlong)pvVar35 + 0x50) =
                   *(undefined4 *)
                    ((longlong)plVar33 +
                    ((longlong)*(int *)(local_4d0 + 0x1c8) - 1U & (longlong)(int)uVar54) * 4);
              plVar33 = *(longlong **)(local_4d0 + 0x1c0);
              if (*(longlong **)(local_4d0 + 0x1c0) == (longlong *)0x0) {
                plVar33 = local_4c0;
              }
              *(int *)((longlong)plVar33 +
                      ((longlong)*(int *)(local_4d0 + 0x1c8) - 1U & (longlong)(int)uVar54) * 4) =
                   iVar39;
            }
            else {
              *(int *)(local_4d0 + 0x1c8) = iVar14;
              FUN_1417fc6ea(plVar17);
            }
LAB_1437bae8b:
            lVar16 = *plVar17 + (longlong)iVar39 * 0x58;
LAB_1437ba5bd:
            *(undefined1 *)(lVar16 + 8) = 1;
            dVar3 = *(double *)(lVar16 + 0x18);
            dVar62 = dVar5 - dVar3;
            dVar64 = (double)(-(ulonglong)(dVar3 <= 0.0) & 0x3ff0000000000000 |
                             ~-(ulonglong)(dVar3 <= 0.0) & (ulonglong)dVar62);
            if (dVar64 <= 0.0) {
              *(undefined8 *)(lVar16 + 0x48) = DAT_14c8464f0;
              uVar30 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
              *(ulonglong *)(lVar16 + 0x38) =
                   CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
              *(undefined8 *)(lVar16 + 0x40) = uVar30;
            }
            else {
              *(double *)(lVar16 + 0x18) = dVar5;
              dVar60 = (double)pLVar53[3] - *(double *)(lVar16 + 0x30);
              dVar61 = (double)pLVar53[2] - *(double *)(lVar16 + 0x28);
              dVar63 = (double)pLVar53[1] - *(double *)(lVar16 + 0x20);
              LVar9 = pLVar53[2];
              *(LARGE_INTEGER *)(lVar16 + 0x20) = pLVar53[1];
              *(LARGE_INTEGER *)(lVar16 + 0x28) = LVar9;
              *(LARGE_INTEGER *)(lVar16 + 0x30) = pLVar53[3];
              if (((dVar3 <= 0.0) ||
                  (10000.0 < SQRT(dVar60 * dVar60 + dVar63 * dVar63 + dVar61 * dVar61))) ||
                 (5.0 < dVar62)) {
                *(undefined8 *)(lVar16 + 0x48) = DAT_14c8464f0;
                uVar30 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
                *(ulonglong *)(lVar16 + 0x38) =
                     CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                *(undefined8 *)(lVar16 + 0x40) = uVar30;
              }
              else {
                dVar64 = 1.0 / dVar64;
                dVar3 = dVar62 * 100.0;
                if (1.0 <= dVar62 * 100.0) {
                  dVar3 = 1.0;
                }
                if (dVar3 <= 0.0) {
                  dVar3 = 0.0;
                }
                dVar62 = 1.0 - dVar3;
                *(double *)(lVar16 + 0x38) =
                     dVar3 * dVar64 * dVar63 + dVar62 * *(double *)(lVar16 + 0x38);
                *(double *)(lVar16 + 0x40) =
                     dVar61 * dVar64 * dVar3 + *(double *)(lVar16 + 0x40) * dVar62;
                *(double *)(lVar16 + 0x48) =
                     dVar60 * dVar64 * dVar3 + *(double *)(lVar16 + 0x48) * dVar62;
              }
            }
            LVar9 = *(LARGE_INTEGER *)(lVar16 + 0x38);
            LVar10 = *(LARGE_INTEGER *)(lVar16 + 0x40);
            pLVar53[10] = *(LARGE_INTEGER *)(lVar16 + 0x48);
            pLVar53[8] = LVar9;
            pLVar53[9] = LVar10;
          }
          iVar14 = DAT_14c761f04;
          _Var28 = pLVar53[1].s;
          _Var20 = pLVar53[2].s;
          _Var21 = pLVar53[3].s;
          dVar3 = (double)DAT_14c761f04;
          if (dVar3 < SQRT(((double)pLVar53[0x27] - (double)_Var21) *
                           ((double)pLVar53[0x27] - (double)_Var21) +
                           ((double)pLVar53[0x26] - (double)_Var20) *
                           ((double)pLVar53[0x26] - (double)_Var20) +
                           ((double)pLVar53[0x25] - (double)_Var28) *
                           ((double)pLVar53[0x25] - (double)_Var28))) {
            pLVar53[0x27] = pLVar53[3];
            pLVar53[0x25] = pLVar53[1];
            pLVar53[0x26] = pLVar53[2];
          }
          iVar39 = DAT_14c761f08;
          _Var31 = pLVar53[5].s;
          dVar62 = (double)DAT_14c761f08;
          if (dVar62 < ABS((double)pLVar53[6] - (double)pLVar53[0x2a]) +
                       ABS((double)pLVar53[4] - (double)pLVar53[0x28]) +
                       ABS((double)_Var31 - (double)pLVar53[0x29])) {
            pLVar53[0x2a] = pLVar53[6];
            uVar6 = *(undefined4 *)((longlong)pLVar53 + 0x24);
            DVar29 = pLVar53[5].s.LowPart;
            uVar7 = *(undefined4 *)((longlong)pLVar53 + 0x2c);
            pLVar53[0x28].s.LowPart = pLVar53[4].s.LowPart;
            *(undefined4 *)((longlong)pLVar53 + 0x144) = uVar6;
            pLVar53[0x29].s.LowPart = DVar29;
            *(undefined4 *)((longlong)pLVar53 + 0x14c) = uVar7;
          }
          _Var4 = pLVar53->s;
          uVar54 = _Var4.LowPart & 0xffff;
          uVar54 = 0x21c88687 -
                   (_Var4.HighPart + uVar54 + _Var4.LowPart * 0x10000 +
                    (_Var4._2_4_ << 0x13 | _Var4._2_4_ & 0xffff) + (uVar54 >> 4));
          uVar54 = (uVar54 >> 2) + 0x9e3779b9 + uVar54 * 0x40 + (uint)*(byte *)(pLVar53 + 7) ^
                   uVar54;
          uVar54 = (uVar54 >> 2) + 0x9e3779b9 +
                   (uVar54 << 6 |
                   (uint)(byte)(*(char *)((longlong)pLVar53 + 0x11a) << 4 |
                               *(char *)((longlong)pLVar53 + 0x119) << 3 |
                               *(char *)(pLVar53 + 0x23) << 2 |
                               *(char *)(pLVar53 + 0xb) * '\x02' |
                               *(byte *)((longlong)pLVar53 + 0x39))) ^ uVar54;
          uVar54 = (uVar54 >> 2) + 0x9e3779b9 +
                   uVar54 * 0x40 + (uint)*(byte *)((longlong)pLVar53 + 0x3a) ^ uVar54;
          uVar52 = (ulonglong)
                   ((uVar54 >> 2) + 0x9e3779b9 + uVar54 * 0x40 + (uint)*(byte *)(pLVar53 + 0xc) ^
                   uVar54);
          DVar29 = pLVar53[0x12].s.LowPart;
          if (DVar29 != 0) {
            local_4b0 = pLVar53 + 0xf;
            if ((LARGE_INTEGER *)pLVar53[0x11].QuadPart != (LARGE_INTEGER *)0x0) {
              local_4b0 = (LARGE_INTEGER *)pLVar53[0x11].QuadPart;
            }
            uVar54 = (local_4b0->s).LowPart;
            if (uVar54 == 0) {
              iVar49 = DVar29 + 0x1e;
              if (-1 < (int)(DVar29 - 1)) {
                iVar49 = DVar29 - 1;
              }
              local_4c8 = 0;
              uVar56 = (ulonglong)(uint)(iVar49 >> 5);
              if (iVar49 >> 5 < 1) {
                uVar56 = 0;
              }
              local_4b8 = (ulonglong)local_4b8._4_4_ << 0x20;
              do {
                local_4d8 = pLVar48;
                if (uVar56 == local_4c8) goto LAB_1437ba8b1;
                local_4b8 = CONCAT44(local_4b8._4_4_,(int)local_4b8 + 0x20);
                uVar54 = *(uint *)((longlong)local_4b0 + (local_4c8 + 1) * 4);
                local_4c8 = local_4c8 + 1;
              } while (uVar54 == 0);
            }
            else {
              local_4c8 = 0;
              local_4b8 = (ulonglong)local_4b8._4_4_ << 0x20;
            }
            uVar37 = (ulonglong)(-uVar54 & uVar54);
            uVar56 = uVar37 * 2 + 1;
            lVar16 = 0x3f;
            if (uVar56 != 0) {
              for (; uVar56 >> lVar16 == 0; lVar16 = lVar16 + -1) {
              }
            }
            iVar49 = ((int)local_4b8 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
            local_4d8 = pLVar48;
            if (iVar49 < (int)DVar29) {
              iVar27 = DVar29 + 0x1e;
              if (-1 < (int)(DVar29 - 1)) {
                iVar27 = DVar29 - 1;
              }
              local_488 = pLVar53[0xd].QuadPart;
              local_49c = iVar27 >> 5;
              local_490 = (longlong)local_4b0 + 4;
              local_498 = CONCAT44(local_498._4_4_,0xffffffff);
              do {
                uVar30 = *(undefined8 *)(local_488 + (longlong)iVar49 * 0x10);
                uVar54 = (uint)((ulonglong)uVar30 >> 0x10);
                uVar26 = (uint)uVar30 & 0xffff;
                uVar52 = (ulonglong)
                         ((uVar26 >> 4) +
                          (int)((ulonglong)uVar30 >> 0x20) + uVar26 +
                          (int)(uVar52 >> 2) + (uint)uVar52 * 0x40 + (uint)uVar30 * 0x10000 +
                          (uVar54 << 0x13 | uVar54 & 0xffff) + 0x9e3779b9 ^ (uint)uVar52);
                uVar26 = ~(uint)uVar37 & (uint)local_498;
                lVar16 = (longlong)(int)(uint)local_4c8;
                uVar54 = *(uint *)((longlong)local_4b0 + lVar16 * 4) & uVar26;
                if (uVar54 == 0) {
                  uVar26 = local_49c;
                  if ((int)local_49c < (int)(uint)local_4c8) {
                    uVar26 = (uint)local_4c8;
                  }
                  if ((int)local_49c <= (int)(uint)local_4c8) break;
                  local_4b8 = CONCAT44(local_4b8._4_4_,(int)local_4b8 + 0x20);
                  lVar23 = 0;
                  while (uVar54 = *(uint *)(local_490 + (lVar16 + lVar23) * 4), uVar54 == 0) {
                    local_4b8 = CONCAT44(local_4b8._4_4_,(int)local_4b8 + 0x20);
                    lVar23 = lVar23 + 1;
                    if ((int)uVar26 - lVar16 == lVar23) goto LAB_1437ba8b1;
                  }
                  local_4c8 = (ulonglong)((uint)local_4c8 + (int)lVar23 + 1);
                  uVar26 = 0xffffffff;
                }
                local_498 = CONCAT44(local_498._4_4_,uVar26);
                uVar37 = (ulonglong)(-uVar54 & uVar54);
                uVar56 = uVar37 * 2 + 1;
                lVar16 = 0x3f;
                if (uVar56 != 0) {
                  for (; uVar56 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                  }
                }
                iVar49 = ((int)local_4b8 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
              } while (iVar49 < (int)DVar29);
            }
          }
LAB_1437ba8b1:
          if ((longlong)(int)pLVar53[0x22].s.LowPart != 0) {
            uVar56 = pLVar53[0x21].QuadPart;
            lVar16 = (longlong)(int)pLVar53[0x22].s.LowPart * 0x48;
            local_4d8 = pLVar48;
            do {
              local_4c8 = uVar56;
              iVar49 = FUN_1437bf400(uVar56);
              uVar52 = (ulonglong)
                       ((uint)uVar52 ^
                       iVar49 + (int)(uVar52 >> 2) + (uint)uVar52 * 0x40 + 0x9e3779b9);
              uVar56 = local_4c8 + 0x48;
              lVar16 = lVar16 + -0x48;
              pLVar48 = local_4d8;
            } while (lVar16 != 0);
          }
          if (0.0 < (float)pLVar53[0x2b].s.LowPart) {
            uVar52 = (ulonglong)
                     ((uint)uVar52 ^
                     pLVar53[0x2b].s.LowPart + (int)(uVar52 >> 2) + (uint)uVar52 * 0x40 + 0x9e3779b9
                     );
          }
          if (0.0 < *(float *)((longlong)pLVar53 + 0x15c)) {
            uVar52 = (ulonglong)
                     ((uint)uVar52 ^
                     (int)*(float *)((longlong)pLVar53 + 0x15c) +
                     (int)(uVar52 >> 2) + (uint)uVar52 * 0x40 + 0x9e3779b9);
          }
          uVar54 = (uint)uVar52;
          if (iVar14 < 1) {
            iVar49 = (int)(uVar52 >> 2) + _Var28.HighPart * 0x17 + _Var28.LowPart + uVar54 * 0x40;
          }
          else {
            lVar16 = (longlong)
                     ROUND((double)pLVar53[0x25] / dVar3 + (double)pLVar53[0x25] / dVar3 + -0.5);
            iVar49 = (int)(lVar16 >> 0x21) * 0x17 +
                     (int)(uVar52 >> 2) + uVar54 * 0x40 + (int)(lVar16 >> 1);
            _Var20 = (_struct_19)
                     ((longlong)
                      ROUND((double)pLVar53[0x26] / dVar3 + (double)pLVar53[0x26] / dVar3 + -0.5) >>
                     1);
          }
          if (0 < iVar39) {
            _Var31 = (_struct_19)
                     ((longlong)ROUND((double)_Var31 / dVar62 + (double)_Var31 / dVar62 + -0.5) >> 1
                     );
          }
          uVar54 = iVar49 + 0x9e3779b9U ^ uVar54;
          uVar54 = (uVar54 >> 2) + _Var20.HighPart * 0x17 + _Var20.LowPart + uVar54 * 0x40 +
                   0x9e3779b9 ^ uVar54;
          uVar54 = _Var31.HighPart * 0x17 + (uVar54 >> 2) + uVar54 * 0x40 + _Var31.LowPart +
                   0x9e3779b9 ^ uVar54;
          *(uint *)((longlong)pLVar53 + 0x11c) = ~uVar54;
          if (0 < iVar14) {
            _Var21 = (_struct_19)
                     ((longlong)
                      ROUND((double)pLVar53[0x27] / dVar3 + (double)pLVar53[0x27] / dVar3 + -0.5) >>
                     1);
          }
          uVar54 = _Var21.HighPart * 0x17 + (uVar54 >> 2) + uVar54 * 0x40 + _Var21.LowPart +
                   0x9e3779b9 ^ uVar54;
          if (iVar39 < 1) {
            _Var28 = pLVar53[0x2a].s;
            iVar14 = pLVar53[0x28].s.HighPart * 0x17 +
                     (uVar54 >> 2) + uVar54 * 0x40 + pLVar53[0x28].s.LowPart;
          }
          else {
            lVar16 = (longlong)
                     ROUND((double)pLVar53[0x28] / dVar62 + (double)pLVar53[0x28] / dVar62 + -0.5);
            iVar14 = (int)(lVar16 >> 0x21) * 0x17 +
                     (uVar54 >> 2) + uVar54 * 0x40 + (int)(lVar16 >> 1);
            _Var28 = (_struct_19)
                     ((longlong)
                      ROUND((double)pLVar53[0x2a] / dVar62 + (double)pLVar53[0x2a] / dVar62 + -0.5)
                     >> 1);
          }
          uVar54 = iVar14 + 0x9e3779b9U ^ uVar54;
          uVar54 = (_Var28.HighPart * -0x17 - (uVar54 * 0x40 + _Var28.LowPart + (uVar54 >> 2))) +
                   0x61c88646 ^ uVar54;
          pLVar53[0x24].s.LowPart = uVar54;
          uVar13 = uVar54 >> 0xd ^ *(int *)(local_4d0 + 0x1d0) - uVar54;
          uVar26 = uVar13 << 8 ^ (-0x61c88647 - uVar54) - uVar13;
          uVar46 = uVar26 >> 0xd ^ (uVar54 - uVar13) - uVar26;
          uVar54 = uVar46 >> 0xc ^ (uVar13 - uVar26) - uVar46;
          uVar13 = uVar54 << 0x10 ^ (uVar26 - uVar46) - uVar54;
          uVar26 = uVar13 >> 5 ^ (uVar46 - uVar54) - uVar13;
          uVar46 = uVar26 >> 3 ^ (uVar54 - uVar13) - uVar26;
          uVar54 = uVar46 << 10 ^ (uVar13 - uVar26) - uVar46;
          *(uint *)(local_4d0 + 0x1d0) = uVar54 >> 0xf ^ uVar26 - (uVar46 + uVar54);
          pLVar53 = pLVar53 + 0x2c;
        } while (pLVar53 != pLVar48);
        iVar39 = *(int *)(local_4d0 + 0x1a8);
        lVar16 = local_4d0;
      }
      if (iVar39 == 0) {
        uVar56 = 1;
        uVar52 = 0;
        iVar49 = 0;
        iVar14 = 0;
      }
      else {
        puVar19 = *(uint **)(lVar16 + 0x1a0);
        if (*(uint **)(lVar16 + 0x1a0) == (uint *)0x0) {
          puVar19 = puVar18;
        }
        uVar54 = *puVar19;
        if (uVar54 == 0) {
          iVar14 = iVar39 + 0x1e;
          if (-1 < iVar39 + -1) {
            iVar14 = iVar39 + -1;
          }
          uVar52 = 0;
          uVar56 = (ulonglong)(uint)(iVar14 >> 5);
          if (iVar14 >> 5 < 1) {
            uVar56 = uVar52;
          }
          iVar49 = 0;
          do {
            if (uVar56 == uVar52) goto LAB_1437bb4af;
            iVar49 = iVar49 + 0x20;
            uVar54 = puVar19[uVar52 + 1];
            uVar52 = uVar52 + 1;
          } while (uVar54 == 0);
        }
        else {
          uVar52 = 0;
          iVar49 = 0;
        }
        uVar56 = (ulonglong)(-uVar54 & uVar54);
        uVar37 = uVar56 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar37 != 0) {
          for (; uVar37 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar14 = (iVar49 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (iVar39 <= iVar14) {
          iVar14 = iVar39;
        }
      }
      if (iVar14 < iVar39) {
        lVar16 = local_4d0 + 0x1b8;
        uVar54 = 0xffffffff;
        do {
          lVar23 = *plVar17;
          lVar32 = (longlong)iVar14 * 0x58;
          if (*(char *)(lVar23 + 8 + lVar32) == '\0') {
            lVar25 = *(longlong *)(local_4d0 + 0x1c0);
            if (*(longlong *)(local_4d0 + 0x1c0) == 0) {
              lVar25 = lVar16;
            }
            lVar24 = (longlong)*(int *)(lVar23 + 0x54 + lVar32);
            iVar39 = *(int *)(lVar25 + lVar24 * 4);
            if (iVar39 == iVar14) {
              piVar22 = (int *)(lVar25 + lVar24 * 4);
            }
            else {
              do {
                piVar22 = (int *)((longlong)iVar39 * 0x58 + lVar23 + 0x50);
                iVar39 = *piVar22;
              } while (iVar39 != iVar14);
            }
            *piVar22 = *(int *)(lVar23 + lVar32 + 0x50);
            FUN_1437c25c6(plVar17);
            iVar39 = *(int *)(local_4d0 + 0x1a8);
          }
          uVar54 = uVar54 & ~(uint)uVar56;
          puVar19 = *(uint **)(local_4d0 + 0x1a0);
          if (*(uint **)(local_4d0 + 0x1a0) == (uint *)0x0) {
            puVar19 = puVar18;
          }
          iVar14 = (int)uVar52;
          lVar23 = (longlong)iVar14;
          uVar26 = puVar19[lVar23] & uVar54;
          if (uVar26 == 0) {
            iVar27 = iVar39 + 0x1e;
            if (-1 < iVar39 + -1) {
              iVar27 = iVar39 + -1;
            }
            iVar27 = iVar27 >> 5;
            iVar15 = iVar27;
            if (iVar27 < iVar14) {
              iVar15 = iVar14;
            }
            if (iVar27 <= iVar14) break;
            lVar32 = 0;
            while( true ) {
              iVar49 = iVar49 + 0x20;
              uVar26 = puVar19[lVar23 + lVar32 + 1];
              if (uVar26 != 0) break;
              lVar32 = lVar32 + 1;
              if (iVar15 - lVar23 == lVar32) goto LAB_1437bb4af;
            }
            uVar52 = (ulonglong)(iVar14 + (int)lVar32 + 1);
            uVar54 = 0xffffffff;
          }
          uVar56 = (ulonglong)(-uVar26 & uVar26);
          uVar37 = uVar56 * 2 + 1;
          lVar23 = 0x3f;
          if (uVar37 != 0) {
            for (; uVar37 >> lVar23 == 0; lVar23 = lVar23 + -1) {
            }
          }
          iVar14 = (iVar49 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
        } while (iVar14 < iVar39);
      }
    }
LAB_1437bb4af:
    uVar30 = local_480;
    param_1 = local_4a8;
    lVar16 = local_4d0;
    lVar23 = *(longlong *)(local_4d0 + 0x20);
    if (lVar23 == 0) {
LAB_1437bd435:
      lVar23 = 0;
    }
    else {
      if (DAT_14cb10130 == 0) {
        local_4f0 = &local_3f8;
        local_3f8.QuadPart = (LONGLONG)FUN_140754f84;
        local_4e0 = FUN_14081d0ea;
        local_4e8 = FUN_14081d0ea;
        local_4f8 = &LAB_147da9a76;
        local_500 = FUN_1409f3105;
        local_508 = L"Engine";
        local_510 = 0;
        local_518 = 0x10000000;
        local_520 = 8;
        local_528 = 0x990;
        FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
      }
      if ((*(int *)(*(longlong *)(lVar23 + 0x10) + 0x38) < *(int *)(DAT_14cb10130 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar23 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) != DAT_14cb10130 + 0x30))
      goto LAB_1437bd435;
    }
    iVar14 = FUN_14490d72a(lVar23);
    if (iVar14 - 1U < 2) {
      lVar16 = lVar16 + 0x1d8;
      FUN_1449ad616(lVar16);
      lVar23 = *(longlong *)(lVar23 + 0x38);
      if ((lVar23 != 0) && (iVar14 = *(int *)(lVar23 + 0x100), (longlong)iVar14 != 0)) {
        lVar23 = *(longlong *)(lVar23 + 0xf8);
        lVar32 = 0;
        do {
          lVar25 = *(longlong *)(lVar23 + lVar32);
          local_3f8 = *(LARGE_INTEGER *)(lVar25 + 0x1800);
          FUN_144869592(lVar16,&local_408,&local_3f8,0);
          FUN_144731a98(lVar16,lVar25 + 0x1670);
          FUN_144731a98(lVar16,lVar25 + 0x1530);
          lVar32 = lVar32 + 8;
        } while ((longlong)iVar14 * 8 != lVar32);
      }
      FUN_144aa2048(lVar16,&local_3f8);
      FUN_144a41f4e(local_3f8.QuadPart);
      param_1 = local_4a8;
      lVar16 = local_4d0;
      if ((longlong)(int)(DWORD)uStack_3f0 == 0) {
        uVar54 = 0;
      }
      else {
        uVar54 = 0xffffffff;
        lVar23 = 0;
        do {
          uVar52 = *(ulonglong *)(local_3f8.QuadPart + lVar23);
          uVar26 = (uint)(uVar52 >> 0x10);
          uVar54 = (int)(uVar52 >> 0x20) + (int)(uVar52 & 0xffff) +
                   (uVar54 >> 2) + uVar54 * 0x40 + (int)uVar52 * 0x10000 +
                   (uVar26 << 0x13 | uVar26 & 0xffff) + (int)((uVar52 & 0xffff) >> 4) + 0x9e3779b9 ^
                   uVar54;
          lVar23 = lVar23 + 8;
        } while ((longlong)(int)(DWORD)uStack_3f0 * 8 != lVar23);
        uVar54 = ~uVar54;
      }
      *(uint *)(local_4d0 + 0x228) = uVar54;
      if ((code *)local_3f8.QuadPart != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    local_4b0 = (LARGE_INTEGER *)((ulonglong)local_4b0 & 0xffffffff00000000);
  }
  iVar14 = FUN_14490d72a(param_1);
  local_4c8 = CONCAT44(local_4c8._4_4_,iVar14 - 1U);
  if (lVar16 == 0 || 1 < iVar14 - 1U) {
    bVar58 = false;
  }
  else {
    bVar58 = 0 < *(int *)(lVar16 + 0x1d4);
  }
  iVar14 = 1;
  if ((char)uVar30 != '\0') {
    iVar14 = *(int *)(lVar16 + 0x50);
  }
  iVar39 = *(int *)(param_1 + 0x15c);
  local_4b8 = CONCAT44(local_4b8._4_4_,iVar39);
  if (((((param_1 == 0) || (*(longlong *)(param_1 + 0x30) == 0)) ||
       (lVar23 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x2b0), lVar23 == 0)) ||
      (bVar36 = 1, (*(byte *)(lVar23 + 0x39e) & 0x60) == 0)) &&
     (bVar36 = 1, (*(byte *)(param_1 + 0x155) & 2) != 0)) {
    lVar23 = FUN_1405e677a(DAT_14cb0d2b0,param_1);
    bVar36 = iVar39 != 0 | *(byte *)(lVar23 + 0x88);
  }
  local_4d0 = lVar16;
  if (((!(bool)(bVar58 | 1 < (uint)local_4c8)) || (bVar36 != 0)) ||
     ((iVar14 < 2 || (DAT_14cb121a0 <= 0.0)))) {
    FUN_1437bd802(&local_430,&local_3f8);
    LVar9 = local_3f8;
    lVar16 = (longlong)(int)(DWORD)uStack_3f0;
    if (lVar16 != 0) {
      lVar23 = 0;
      do {
        plVar17 = *(longlong **)(*(longlong *)(LVar9.QuadPart + lVar23) + 0xe0);
        if (plVar17 != (longlong *)0x0) {
          (**(code **)(*plVar17 + 0x2a8))();
        }
        lVar23 = lVar23 + 8;
      } while (lVar16 * 8 != lVar23);
    }
    if ((code *)local_3f8.QuadPart != (code *)0x0) {
      FUN_1400020a8(local_3f8.QuadPart);
    }
LAB_1437bb9ee:
    local_408.QuadPart = 0;
    uStack_400 = 0;
    local_448 = (code *)0x0;
    uStack_440 = 0;
    FUN_1437bd802(&local_430);
    LVar9 = local_3f8;
    lVar16 = (longlong)(int)(DWORD)uStack_3f0;
    if (lVar16 != 0) {
      lVar23 = 0;
      do {
        plVar17 = *(longlong **)(*(longlong *)(LVar9.QuadPart + lVar23) + 0xe0);
        if (plVar17 != (longlong *)0x0) {
          (**(code **)(*plVar17 + 0x338))(plVar17,&local_408,&local_448);
        }
        lVar23 = lVar23 + 8;
      } while (lVar16 * 8 != lVar23);
    }
    if ((code *)local_3f8.QuadPart != (code *)0x0) {
      FUN_1400020a8(local_3f8.QuadPart);
    }
    pcVar57 = local_448;
    iVar14 = (int)uStack_440;
    lVar16 = (longlong)(int)uStack_440;
    if (1 < lVar16) {
      memset(local_3e8,0,0x2f0);
      local_3f8.QuadPart = (LONGLONG)pcVar57;
      uStack_3f0 = pcVar57 + lVar16 * 8 + -8;
      fVar59 = logf((float)iVar14);
      local_3e8[0] = CONCAT44(local_3e8[0]._4_4_,(int)(longlong)(fVar59 + fVar59));
      pLVar53 = &local_3f8;
      do {
        plVar33 = (longlong *)pLVar53->QuadPart;
        plVar41 = (longlong *)pLVar53[1].QuadPart;
        DVar29 = pLVar53[2].s.LowPart;
        iVar14 = (int)((ulonglong)((longlong)plVar41 - (longlong)plVar33) >> 3);
        uVar54 = iVar14 + 1;
        plVar43 = plVar33;
        plVar17 = plVar41;
        local_4d8 = pLVar53;
        if (DVar29 != 0) {
LAB_1437bbb08:
          plVar38 = plVar43;
          pLVar53 = local_4d8;
          if (8 < (int)uVar54) {
            local_4c0 = (longlong *)CONCAT44(local_4c0._4_4_,DVar29);
            lVar16 = plVar38[uVar54 >> 1];
            plVar38[uVar54 >> 1] = *plVar38;
            *plVar38 = lVar16;
            plVar55 = plVar17 + 1;
            plVar43 = plVar38;
            do {
              plVar11 = plVar43 + 1;
              plVar51 = plVar43 + 1;
              do {
                plVar43 = plVar51;
                plVar44 = plVar11;
                if (plVar17 < plVar43) break;
                iVar14 = (**(code **)(**(longlong **)(*plVar38 + 0xa8) + 0x2c8))
                                   (*(longlong **)(*plVar38 + 0xa8),*(undefined8 *)(*plVar43 + 0xa8)
                                   );
                plVar11 = plVar44 + 1;
                plVar51 = plVar43 + 1;
              } while (-1 < iVar14);
              plVar11 = plVar55 + -2;
              do {
                plVar51 = plVar55;
                plVar34 = plVar11;
                plVar55 = plVar51 + -1;
                if (plVar55 <= plVar38) break;
                iVar14 = (**(code **)(**(longlong **)(*plVar55 + 0xa8) + 0x2c8))
                                   (*(longlong **)(*plVar55 + 0xa8),*(undefined8 *)(*plVar38 + 0xa8)
                                   );
                plVar11 = plVar34 + -1;
              } while (-1 < iVar14);
              if (plVar55 < plVar43) goto LAB_1437bbbc8;
              lVar16 = *plVar43;
              *plVar43 = *plVar55;
              *plVar55 = lVar16;
            } while( true );
          }
          for (; plVar41 = plVar38, plVar33 = plVar38, plVar38 < plVar17; plVar17 = plVar17 + -1) {
            while (plVar43 = plVar41, plVar33 = plVar33 + 1, plVar33 <= plVar17) {
              iVar14 = (**(code **)(**(longlong **)(*plVar43 + 0xa8) + 0x2c8))
                                 (*(longlong **)(*plVar43 + 0xa8),*(undefined8 *)(*plVar33 + 0xa8));
              plVar41 = plVar33;
              if (-1 < iVar14) {
                plVar41 = plVar43;
              }
            }
            lVar16 = *plVar43;
            *plVar43 = *plVar17;
            *plVar17 = lVar16;
          }
          goto LAB_1437bbe88;
        }
LAB_1437bbc7c:
        pLVar53 = local_4d8;
        if (uVar54 != 0) {
          iVar14 = (iVar14 - (iVar14 + -1 >> 0x1f)) + -1 >> 1;
          iVar39 = iVar14;
joined_r0x0001437bbc9d:
          do {
            iVar49 = iVar14 * 2 + 1;
            if (iVar49 < (int)uVar54) {
              iVar27 = iVar14 * 2 + 2;
              if ((iVar27 < (int)uVar54) &&
                 (iVar15 = (**(code **)(**(longlong **)(plVar43[iVar27] + 0xa8) + 0x2c8))
                                     (*(longlong **)(plVar43[iVar27] + 0xa8),
                                      *(undefined8 *)(plVar43[iVar49] + 0xa8)), -1 < iVar15)) {
                iVar49 = iVar27;
              }
              iVar27 = (**(code **)(**(longlong **)(plVar43[iVar14] + 0xa8) + 0x2c8))();
              if (iVar27 < 0) {
                lVar16 = plVar43[iVar14];
                plVar43[iVar14] = plVar43[iVar49];
                plVar43[iVar49] = lVar16;
                iVar14 = iVar49;
                goto joined_r0x0001437bbc9d;
              }
            }
            pLVar53 = local_4d8;
            bVar58 = iVar39 != 0;
            iVar14 = iVar39 + -1;
            iVar39 = iVar14;
          } while (bVar58);
          if (1 < (int)uVar54) {
            uVar52 = (ulonglong)uVar54;
            lVar16 = *plVar43;
            *plVar43 = plVar43[uVar52 - 1];
            plVar43[uVar52 - 1] = lVar16;
            if (uVar54 != 2) {
              do {
                uVar56 = uVar52 - 1;
                iVar14 = 0;
                iVar49 = 1;
                iVar39 = 0;
                do {
                  iVar14 = iVar14 + 2;
                  iVar27 = iVar49;
                  if (((longlong)iVar14 < (longlong)uVar56) &&
                     (iVar49 = (**(code **)(**(longlong **)(plVar43[iVar14] + 0xa8) + 0x2c8))
                                         (*(longlong **)(plVar43[iVar14] + 0xa8),
                                          *(undefined8 *)(plVar43[iVar49] + 0xa8)), -1 < iVar49)) {
                    iVar27 = iVar14;
                  }
                  iVar14 = (**(code **)(**(longlong **)(plVar43[iVar39] + 0xa8) + 0x2c8))();
                  if (-1 < iVar14) break;
                  lVar16 = plVar43[iVar39];
                  plVar43[iVar39] = plVar43[iVar27];
                  plVar43[iVar27] = lVar16;
                  iVar14 = iVar27 * 2;
                  iVar49 = iVar27 * 2 + 1;
                  iVar39 = iVar27;
                } while ((longlong)iVar49 < (longlong)uVar56);
                lVar16 = *plVar43;
                *plVar43 = plVar43[uVar52 - 2];
                plVar43[uVar52 - 2] = lVar16;
                uVar52 = uVar56;
              } while (2 < uVar56);
            }
          }
        }
LAB_1437bbe88:
        pLVar53 = pLVar53 + -3;
      } while (&local_3f8 <= pLVar53);
    }
    LVar9 = local_408;
    iVar14 = (int)uStack_400;
    lVar16 = (longlong)(int)uStack_400;
    if (1 < lVar16) {
      memset(local_3e8,0,0x2f0);
      local_3f8.s = LVar9.s;
      uStack_3f0 = (code *)(LVar9.QuadPart + lVar16 * 8) + -8;
      fVar59 = logf((float)iVar14);
      local_3e8[0] = CONCAT44(local_3e8[0]._4_4_,(int)(longlong)(fVar59 + fVar59));
      pLVar53 = &local_3f8;
      do {
        plVar33 = (longlong *)pLVar53->QuadPart;
        plVar41 = (longlong *)pLVar53[1].QuadPart;
        DVar29 = pLVar53[2].s.LowPart;
        iVar14 = (int)((ulonglong)((longlong)plVar41 - (longlong)plVar33) >> 3);
        uVar54 = iVar14 + 1;
        plVar17 = plVar41;
        plVar43 = plVar33;
        local_4d8 = pLVar53;
        if (DVar29 != 0) {
LAB_1437bbf2c:
          pLVar53 = local_4d8;
          if (8 < (int)uVar54) {
            local_4c0 = (longlong *)CONCAT44(local_4c0._4_4_,DVar29);
            lVar16 = plVar33[uVar54 >> 1];
            plVar33[uVar54 >> 1] = *plVar33;
            *plVar33 = lVar16;
            plVar38 = plVar17 + 1;
            plVar55 = plVar33;
            do {
              plVar11 = plVar55 + 1;
              plVar51 = plVar55 + 1;
              do {
                plVar55 = plVar51;
                plVar44 = plVar11;
                if (plVar17 < plVar55) break;
                iVar14 = (**(code **)(**(longlong **)(*plVar33 + 0xa8) + 0x2c8))
                                   (*(longlong **)(*plVar33 + 0xa8),*(undefined8 *)(*plVar55 + 0xa8)
                                   );
                plVar11 = plVar44 + 1;
                plVar51 = plVar55 + 1;
              } while (-1 < iVar14);
              plVar11 = plVar38 + -2;
              do {
                plVar51 = plVar38;
                plVar34 = plVar11;
                plVar38 = plVar51 + -1;
                if (plVar38 <= plVar33) break;
                iVar14 = (**(code **)(**(longlong **)(*plVar38 + 0xa8) + 0x2c8))
                                   (*(longlong **)(*plVar38 + 0xa8),*(undefined8 *)(*plVar33 + 0xa8)
                                   );
                plVar11 = plVar34 + -1;
              } while (-1 < iVar14);
              if (plVar38 < plVar55) goto LAB_1437bbfec;
              lVar16 = *plVar55;
              *plVar55 = *plVar38;
              *plVar38 = lVar16;
            } while( true );
          }
          for (; plVar43 = plVar33, plVar41 = plVar33, plVar33 < plVar17; plVar17 = plVar17 + -1) {
            while (plVar38 = plVar43, plVar41 = plVar41 + 1, plVar41 <= plVar17) {
              iVar14 = (**(code **)(**(longlong **)(*plVar38 + 0xa8) + 0x2c8))
                                 (*(longlong **)(*plVar38 + 0xa8),*(undefined8 *)(*plVar41 + 0xa8));
              plVar43 = plVar41;
              if (-1 < iVar14) {
                plVar43 = plVar38;
              }
            }
            lVar16 = *plVar38;
            *plVar38 = *plVar17;
            *plVar17 = lVar16;
          }
          goto LAB_1437bc2ac;
        }
LAB_1437bc0a0:
        pLVar53 = local_4d8;
        if (uVar54 != 0) {
          iVar14 = (iVar14 - (iVar14 + -1 >> 0x1f)) + -1 >> 1;
          iVar39 = iVar14;
joined_r0x0001437bc0c1:
          do {
            iVar49 = iVar14 * 2 + 1;
            if (iVar49 < (int)uVar54) {
              iVar27 = iVar14 * 2 + 2;
              if ((iVar27 < (int)uVar54) &&
                 (iVar15 = (**(code **)(**(longlong **)(plVar33[iVar27] + 0xa8) + 0x2c8))
                                     (*(longlong **)(plVar33[iVar27] + 0xa8),
                                      *(undefined8 *)(plVar33[iVar49] + 0xa8)), -1 < iVar15)) {
                iVar49 = iVar27;
              }
              iVar27 = (**(code **)(**(longlong **)(plVar33[iVar14] + 0xa8) + 0x2c8))
                                 (*(longlong **)(plVar33[iVar14] + 0xa8),
                                  *(undefined8 *)(plVar33[iVar49] + 0xa8));
              if (iVar27 < 0) {
                lVar16 = plVar33[iVar14];
                plVar33[iVar14] = plVar33[iVar49];
                plVar33[iVar49] = lVar16;
                iVar14 = iVar49;
                goto joined_r0x0001437bc0c1;
              }
            }
            pLVar53 = local_4d8;
            bVar58 = iVar39 != 0;
            iVar14 = iVar39 + -1;
            iVar39 = iVar14;
          } while (bVar58);
          if (1 < (int)uVar54) {
            uVar52 = (ulonglong)uVar54;
            lVar16 = *plVar33;
            *plVar33 = plVar33[uVar52 - 1];
            plVar33[uVar52 - 1] = lVar16;
            if (uVar54 != 2) {
              do {
                uVar56 = uVar52 - 1;
                iVar14 = 0;
                iVar49 = 1;
                iVar39 = 0;
                do {
                  iVar14 = iVar14 + 2;
                  iVar27 = iVar49;
                  if (((longlong)iVar14 < (longlong)uVar56) &&
                     (iVar49 = (**(code **)(**(longlong **)(plVar33[iVar14] + 0xa8) + 0x2c8))
                                         (*(longlong **)(plVar33[iVar14] + 0xa8),
                                          *(undefined8 *)(plVar33[iVar49] + 0xa8)), -1 < iVar49)) {
                    iVar27 = iVar14;
                  }
                  iVar14 = (**(code **)(**(longlong **)(plVar33[iVar39] + 0xa8) + 0x2c8))
                                     (*(longlong **)(plVar33[iVar39] + 0xa8),
                                      *(undefined8 *)(plVar33[iVar27] + 0xa8));
                  if (-1 < iVar14) break;
                  lVar16 = plVar33[iVar39];
                  plVar33[iVar39] = plVar33[iVar27];
                  plVar33[iVar27] = lVar16;
                  iVar14 = iVar27 * 2;
                  iVar49 = iVar27 * 2 + 1;
                  iVar39 = iVar27;
                } while ((longlong)iVar49 < (longlong)uVar56);
                lVar16 = *plVar33;
                *plVar33 = plVar33[uVar52 - 2];
                plVar33[uVar52 - 2] = lVar16;
                uVar52 = uVar56;
              } while (2 < uVar56);
            }
          }
        }
LAB_1437bc2ac:
        pLVar53 = pLVar53 + -3;
      } while (&local_3f8 <= pLVar53);
    }
    local_44c = 0x7fffffff;
    if (((char)local_4b0 == '\0' && 1 < (uint)local_4c8) &&
       (0 < DAT_14c761f18 && (int)local_4b8 == 0)) {
      local_44c = DAT_14c761f18;
      puVar18 = (uint *)(local_4d0 + 0x2b0);
      iVar14 = *(int *)(local_4d0 + 0x2c8);
      if (iVar14 == 0) {
        uVar52 = 1;
        uVar56 = 0;
        iVar49 = 0;
        iVar39 = 0;
      }
      else {
        puVar19 = *(uint **)(local_4d0 + 0x2c0);
        if (*(uint **)(local_4d0 + 0x2c0) == (uint *)0x0) {
          puVar19 = puVar18;
        }
        uVar54 = *puVar19;
        if (uVar54 == 0) {
          iVar39 = iVar14 + 0x1e;
          if (-1 < iVar14 + -1) {
            iVar39 = iVar14 + -1;
          }
          uVar56 = 0;
          uVar52 = (ulonglong)(uint)(iVar39 >> 5);
          if (iVar39 >> 5 < 1) {
            uVar52 = uVar56;
          }
          iVar49 = 0;
          do {
            if (uVar52 == uVar56) goto LAB_1437bc520;
            iVar49 = iVar49 + 0x20;
            uVar54 = puVar19[uVar56 + 1];
            uVar56 = uVar56 + 1;
          } while (uVar54 == 0);
        }
        else {
          uVar56 = 0;
          iVar49 = 0;
        }
        uVar52 = (ulonglong)(-uVar54 & uVar54);
        uVar37 = uVar52 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar37 != 0) {
          for (; uVar37 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar39 = (iVar49 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (iVar14 <= iVar39) {
          iVar39 = iVar14;
        }
      }
      if (iVar39 < iVar14) {
        plVar17 = (longlong *)(local_4d0 + 0x2a0);
        uVar54 = 0xffffffff;
        do {
          lVar16 = *plVar17;
          iVar14 = *(int *)(lVar16 + 4 + (longlong)iVar39 * 0x10);
          if ((((iVar14 == 0) ||
               (uVar26 = *(uint *)(lVar16 + (longlong)iVar39 * 0x10), (int)uVar26 < 0)) ||
              (DAT_14c9647dc <= (int)uVar26)) ||
             (((plVar33 = (longlong *)
                          ((ulonglong)((uVar26 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar26 >> 0x10) * 8)),
               plVar33 == (longlong *)0x0 || ((int)plVar33[2] != iVar14)) ||
              (((*(uint *)(plVar33 + 1) & 0x10200000) != 0 ||
               (plVar33 = (longlong *)*plVar33, plVar33 == (longlong *)0x0)))))) {
LAB_1437bc435:
            FUN_14048973e(plVar17,iVar39);
          }
          else {
            lVar16 = FUN_14048957e();
            if (((*(int *)(plVar33[2] + 0x38) < *(int *)(lVar16 + 0x38)) ||
                (*(longlong *)
                  (*(longlong *)(plVar33[2] + 0x30) + (longlong)*(int *)(lVar16 + 0x38) * 8) !=
                 lVar16 + 0x30)) ||
               ((*(byte *)(plVar33 + 0x21) != 3 &&
                ((1 < *(byte *)(plVar33 + 0x21) ||
                 (cVar12 = (**(code **)(*plVar33 + 0x2d8))(plVar33), cVar12 == '\0'))))))
            goto LAB_1437bc435;
            local_44c = local_44c + -1;
            if (local_44c == 0) break;
          }
          uVar54 = uVar54 & ~(uint)uVar52;
          puVar19 = *(uint **)(local_4d0 + 0x2c0);
          if (*(uint **)(local_4d0 + 0x2c0) == (uint *)0x0) {
            puVar19 = puVar18;
          }
          iVar14 = *(int *)(local_4d0 + 0x2c8);
          iVar39 = (int)uVar56;
          lVar16 = (longlong)iVar39;
          uVar26 = puVar19[lVar16] & uVar54;
          if (uVar26 == 0) {
            iVar27 = iVar14 + 0x1e;
            if (-1 < iVar14 + -1) {
              iVar27 = iVar14 + -1;
            }
            iVar27 = iVar27 >> 5;
            iVar15 = iVar27;
            if (iVar27 < iVar39) {
              iVar15 = iVar39;
            }
            if (iVar27 <= iVar39) break;
            lVar23 = 0;
            while( true ) {
              iVar49 = iVar49 + 0x20;
              uVar26 = puVar19[lVar16 + lVar23 + 1];
              if (uVar26 != 0) break;
              lVar23 = lVar23 + 1;
              if (iVar15 - lVar16 == lVar23) goto LAB_1437bc520;
            }
            uVar56 = (ulonglong)(iVar39 + (int)lVar23 + 1);
            uVar54 = 0xffffffff;
          }
          uVar52 = (ulonglong)(-uVar26 & uVar26);
          uVar37 = uVar52 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar37 != 0) {
            for (; uVar37 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          iVar39 = (iVar49 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        } while (iVar39 < iVar14);
      }
    }
LAB_1437bc520:
    pcVar57 = local_448;
    lVar16 = local_4a8;
    lVar23 = (longlong)(int)uStack_440;
    if (lVar23 != 0) {
      lVar32 = 0;
      do {
        lVar25 = *(longlong *)(pcVar57 + lVar32);
        lVar24 = (**(code **)(*(longlong *)(lVar25 + 0x28) + 0x78))(lVar25 + 0x28);
        if ((*(longlong *)(lVar24 + 0x30) == 0) ||
           (lVar24 = *(longlong *)(*(longlong *)(lVar24 + 0x30) + 0x2b0), lVar24 == 0)) {
          lVar24 = 0;
        }
        else {
          lVar24 = *(longlong *)(lVar24 + 0x3f0);
        }
        (**(code **)(**(longlong **)(lVar24 + 0xe0) + 0x328))
                  (*(longlong **)(lVar24 + 0xe0),lVar25,&local_44c);
        lVar32 = lVar32 + 8;
      } while (lVar23 * 8 != lVar32);
    }
    LVar9 = local_408;
    lVar23 = (longlong)(int)uStack_400;
    if (lVar23 == 0) {
      local_468 = (code *)0x0;
      uStack_460 = 0;
      local_478 = (code *)0x0;
      uStack_470 = 0;
    }
    else {
      lVar32 = 0;
      do {
        lVar25 = *(longlong *)(LVar9.QuadPart + lVar32);
        lVar24 = (**(code **)(*(longlong *)(lVar25 + 0x28) + 0x78))(lVar25 + 0x28);
        if ((*(longlong *)(lVar24 + 0x30) == 0) ||
           (lVar24 = *(longlong *)(*(longlong *)(lVar24 + 0x30) + 0x2b0), lVar24 == 0)) {
          lVar24 = 0;
        }
        else {
          lVar24 = *(longlong *)(lVar24 + 0x3f0);
        }
        (**(code **)(**(longlong **)(lVar24 + 0xe0) + 800))
                  (*(longlong **)(lVar24 + 0xe0),lVar25,&local_44c);
        lVar32 = lVar32 + 8;
      } while (lVar23 * 8 != lVar32);
      uVar52 = uStack_400 & 0xffffffff;
      local_468 = (code *)0x0;
      uStack_460 = 0;
      local_478 = (code *)0x0;
      uStack_470 = 0;
      if ((int)uStack_400 < 0) goto LAB_1437bd2f9;
      if (uVar52 != 0) {
        FUN_140d870b2(&local_468);
      }
    }
    uVar52 = uStack_440 & 0xffffffff;
    if ((int)uStack_440 < 0) {
LAB_1437bd2f9:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar52);
    }
    if (uStack_470._4_4_ < (int)uStack_440) {
      FUN_140d870b2(&local_478);
    }
    FUN_1437bd802(&local_430);
    LVar9 = local_3f8;
    lVar23 = (longlong)(int)(DWORD)uStack_3f0;
    if (lVar23 != 0) {
      lVar32 = 0;
      do {
        plVar17 = *(longlong **)(*(longlong *)(LVar9.QuadPart + lVar32) + 0xe0);
        if (plVar17 != (longlong *)0x0) {
          (**(code **)(*plVar17 + 0x340))(plVar17,&local_468,&local_478);
        }
        lVar32 = lVar32 + 8;
      } while (lVar23 * 8 != lVar32);
    }
    if ((code *)local_3f8.QuadPart != (code *)0x0) {
      FUN_1400020a8(local_3f8.QuadPart);
    }
    pcVar57 = local_468;
    iVar14 = (int)uStack_460;
    lVar23 = (longlong)(int)uStack_460;
    if (1 < lVar23) {
      memset(local_3e8,0,0x2f0);
      local_3f8.QuadPart = (LONGLONG)pcVar57;
      uStack_3f0 = pcVar57 + lVar23 * 8 + -8;
      fVar59 = logf((float)iVar14);
      local_3e8[0] = CONCAT44(local_3e8[0]._4_4_,(int)(longlong)(fVar59 + fVar59));
      pLVar53 = &local_3f8;
      do {
        plVar33 = (longlong *)pLVar53->QuadPart;
        plVar41 = (longlong *)pLVar53[1].QuadPart;
        DVar29 = pLVar53[2].s.LowPart;
        iVar14 = (int)((ulonglong)((longlong)plVar41 - (longlong)plVar33) >> 3);
        uVar54 = iVar14 + 1;
        plVar43 = plVar33;
        plVar17 = plVar41;
        local_4d8 = pLVar53;
        if (DVar29 != 0) {
LAB_1437bc78a:
          pLVar53 = local_4d8;
          if (8 < (int)uVar54) {
            local_4c0 = (longlong *)CONCAT44(local_4c0._4_4_,DVar29);
            lVar16 = plVar33[uVar54 >> 1];
            plVar33[uVar54 >> 1] = *plVar33;
            *plVar33 = lVar16;
            plVar38 = plVar17 + 1;
            plVar55 = plVar33;
            do {
              plVar11 = plVar55 + 1;
              plVar51 = plVar55 + 1;
              do {
                plVar55 = plVar51;
                plVar44 = plVar11;
                if (plVar17 < plVar55) break;
                iVar14 = (**(code **)(**(longlong **)(*plVar33 + 0xa8) + 0x2c8))
                                   (*(longlong **)(*plVar33 + 0xa8),*(undefined8 *)(*plVar55 + 0xa8)
                                   );
                plVar11 = plVar44 + 1;
                plVar51 = plVar55 + 1;
              } while (-1 < iVar14);
              plVar11 = plVar38 + -2;
              do {
                plVar51 = plVar38;
                plVar34 = plVar11;
                plVar38 = plVar51 + -1;
                if (plVar38 <= plVar33) break;
                iVar14 = (**(code **)(**(longlong **)(*plVar38 + 0xa8) + 0x2c8))
                                   (*(longlong **)(*plVar38 + 0xa8),*(undefined8 *)(*plVar33 + 0xa8)
                                   );
                plVar11 = plVar34 + -1;
              } while (-1 < iVar14);
              if (plVar38 < plVar55) goto LAB_1437bc84b;
              lVar16 = *plVar55;
              *plVar55 = *plVar38;
              *plVar38 = lVar16;
            } while( true );
          }
          for (; plVar43 = plVar33, plVar41 = plVar33, plVar33 < plVar17; plVar17 = plVar17 + -1) {
            while (plVar38 = plVar43, plVar41 = plVar41 + 1, plVar41 <= plVar17) {
              iVar14 = (**(code **)(**(longlong **)(*plVar38 + 0xa8) + 0x2c8))
                                 (*(longlong **)(*plVar38 + 0xa8),*(undefined8 *)(*plVar41 + 0xa8));
              plVar43 = plVar41;
              if (-1 < iVar14) {
                plVar43 = plVar38;
              }
            }
            lVar16 = *plVar38;
            *plVar38 = *plVar17;
            *plVar17 = lVar16;
          }
          goto LAB_1437bcb0b;
        }
LAB_1437bc902:
        pLVar53 = local_4d8;
        if (uVar54 != 0) {
          iVar14 = (iVar14 - (iVar14 + -1 >> 0x1f)) + -1 >> 1;
          iVar39 = iVar14;
joined_r0x0001437bc923:
          do {
            iVar49 = iVar14 * 2 + 1;
            if (iVar49 < (int)uVar54) {
              iVar27 = iVar14 * 2 + 2;
              if ((iVar27 < (int)uVar54) &&
                 (iVar15 = (**(code **)(**(longlong **)(plVar33[iVar27] + 0xa8) + 0x2c8))
                                     (*(longlong **)(plVar33[iVar27] + 0xa8),
                                      *(undefined8 *)(plVar33[iVar49] + 0xa8)), -1 < iVar15)) {
                iVar49 = iVar27;
              }
              iVar27 = (**(code **)(**(longlong **)(plVar33[iVar14] + 0xa8) + 0x2c8))();
              if (iVar27 < 0) {
                lVar16 = plVar33[iVar14];
                plVar33[iVar14] = plVar33[iVar49];
                plVar33[iVar49] = lVar16;
                iVar14 = iVar49;
                goto joined_r0x0001437bc923;
              }
            }
            pLVar53 = local_4d8;
            bVar58 = iVar39 != 0;
            iVar14 = iVar39 + -1;
            iVar39 = iVar14;
          } while (bVar58);
          if (1 < (int)uVar54) {
            uVar52 = (ulonglong)uVar54;
            lVar16 = *plVar33;
            *plVar33 = plVar33[uVar52 - 1];
            plVar33[uVar52 - 1] = lVar16;
            if (uVar54 != 2) {
              do {
                uVar56 = uVar52 - 1;
                iVar14 = 0;
                iVar49 = 1;
                iVar39 = 0;
                do {
                  iVar14 = iVar14 + 2;
                  iVar27 = iVar49;
                  if (((longlong)iVar14 < (longlong)uVar56) &&
                     (iVar49 = (**(code **)(**(longlong **)(plVar33[iVar14] + 0xa8) + 0x2c8))
                                         (*(longlong **)(plVar33[iVar14] + 0xa8),
                                          *(undefined8 *)(plVar33[iVar49] + 0xa8)), -1 < iVar49)) {
                    iVar27 = iVar14;
                  }
                  iVar14 = (**(code **)(**(longlong **)(plVar33[iVar39] + 0xa8) + 0x2c8))();
                  if (-1 < iVar14) break;
                  lVar16 = plVar33[iVar39];
                  plVar33[iVar39] = plVar33[iVar27];
                  plVar33[iVar27] = lVar16;
                  iVar14 = iVar27 * 2;
                  iVar49 = iVar27 * 2 + 1;
                  iVar39 = iVar27;
                } while ((longlong)iVar49 < (longlong)uVar56);
                lVar16 = *plVar33;
                *plVar33 = plVar33[uVar52 - 2];
                plVar33[uVar52 - 2] = lVar16;
                uVar52 = uVar56;
              } while (2 < uVar56);
            }
          }
        }
LAB_1437bcb0b:
        pLVar53 = pLVar53 + -3;
        lVar16 = local_4a8;
      } while (&local_3f8 <= pLVar53);
    }
    pcVar57 = local_478;
    iVar14 = (int)uStack_470;
    lVar23 = (longlong)(int)uStack_470;
    if (1 < lVar23) {
      memset(local_3e8,0,0x2f0);
      local_3f8.QuadPart = (LONGLONG)pcVar57;
      uStack_3f0 = pcVar57 + lVar23 * 8 + -8;
      fVar59 = logf((float)iVar14);
      local_3e8[0] = CONCAT44(local_3e8[0]._4_4_,(int)(longlong)(fVar59 + fVar59));
      pLVar53 = &local_3f8;
      do {
        plVar33 = (longlong *)pLVar53->QuadPart;
        plVar41 = (longlong *)pLVar53[1].QuadPart;
        DVar29 = pLVar53[2].s.LowPart;
        iVar14 = (int)((ulonglong)((longlong)plVar41 - (longlong)plVar33) >> 3);
        uVar54 = iVar14 + 1;
        plVar43 = plVar33;
        plVar17 = plVar41;
        local_4d8 = pLVar53;
        if (DVar29 != 0) {
LAB_1437bcbb9:
          pLVar53 = local_4d8;
          if (8 < (int)uVar54) {
            local_4c0 = (longlong *)CONCAT44(local_4c0._4_4_,DVar29);
            lVar16 = plVar33[uVar54 >> 1];
            plVar33[uVar54 >> 1] = *plVar33;
            *plVar33 = lVar16;
            plVar38 = plVar17 + 1;
            plVar55 = plVar33;
            do {
              plVar11 = plVar55 + 1;
              plVar51 = plVar55 + 1;
              do {
                plVar55 = plVar51;
                plVar44 = plVar11;
                if (plVar17 < plVar55) break;
                iVar14 = (**(code **)(**(longlong **)(*plVar33 + 0xa8) + 0x2c8))
                                   (*(longlong **)(*plVar33 + 0xa8),*(undefined8 *)(*plVar55 + 0xa8)
                                   );
                plVar11 = plVar44 + 1;
                plVar51 = plVar55 + 1;
              } while (-1 < iVar14);
              plVar11 = plVar38 + -2;
              do {
                plVar51 = plVar38;
                plVar34 = plVar11;
                plVar38 = plVar51 + -1;
                if (plVar38 <= plVar33) break;
                iVar14 = (**(code **)(**(longlong **)(*plVar38 + 0xa8) + 0x2c8))
                                   (*(longlong **)(*plVar38 + 0xa8),*(undefined8 *)(*plVar33 + 0xa8)
                                   );
                plVar11 = plVar34 + -1;
              } while (-1 < iVar14);
              if (plVar38 < plVar55) goto LAB_1437bcc7a;
              lVar16 = *plVar55;
              *plVar55 = *plVar38;
              *plVar38 = lVar16;
            } while( true );
          }
          for (; plVar43 = plVar33, plVar41 = plVar33, plVar33 < plVar17; plVar17 = plVar17 + -1) {
            while (plVar38 = plVar43, plVar41 = plVar41 + 1, plVar41 <= plVar17) {
              iVar14 = (**(code **)(**(longlong **)(*plVar38 + 0xa8) + 0x2c8))
                                 (*(longlong **)(*plVar38 + 0xa8),*(undefined8 *)(*plVar41 + 0xa8));
              plVar43 = plVar41;
              if (-1 < iVar14) {
                plVar43 = plVar38;
              }
            }
            lVar16 = *plVar38;
            *plVar38 = *plVar17;
            *plVar17 = lVar16;
          }
          goto LAB_1437bcf3a;
        }
LAB_1437bcd31:
        pLVar53 = local_4d8;
        if (uVar54 != 0) {
          iVar14 = (iVar14 - (iVar14 + -1 >> 0x1f)) + -1 >> 1;
          iVar39 = iVar14;
joined_r0x0001437bcd52:
          do {
            iVar49 = iVar14 * 2 + 1;
            if (iVar49 < (int)uVar54) {
              iVar27 = iVar14 * 2 + 2;
              if ((iVar27 < (int)uVar54) &&
                 (iVar15 = (**(code **)(**(longlong **)(plVar33[iVar27] + 0xa8) + 0x2c8))
                                     (*(longlong **)(plVar33[iVar27] + 0xa8),
                                      *(undefined8 *)(plVar33[iVar49] + 0xa8)), -1 < iVar15)) {
                iVar49 = iVar27;
              }
              iVar27 = (**(code **)(**(longlong **)(plVar33[iVar14] + 0xa8) + 0x2c8))
                                 (*(longlong **)(plVar33[iVar14] + 0xa8),
                                  *(undefined8 *)(plVar33[iVar49] + 0xa8));
              if (iVar27 < 0) {
                lVar16 = plVar33[iVar14];
                plVar33[iVar14] = plVar33[iVar49];
                plVar33[iVar49] = lVar16;
                iVar14 = iVar49;
                goto joined_r0x0001437bcd52;
              }
            }
            pLVar53 = local_4d8;
            bVar58 = iVar39 != 0;
            iVar14 = iVar39 + -1;
            iVar39 = iVar14;
          } while (bVar58);
          if (1 < (int)uVar54) {
            uVar52 = (ulonglong)uVar54;
            lVar16 = *plVar33;
            *plVar33 = plVar33[uVar52 - 1];
            plVar33[uVar52 - 1] = lVar16;
            if (uVar54 != 2) {
              do {
                uVar56 = uVar52 - 1;
                iVar14 = 0;
                iVar49 = 1;
                iVar39 = 0;
                do {
                  iVar14 = iVar14 + 2;
                  iVar27 = iVar49;
                  if (((longlong)iVar14 < (longlong)uVar56) &&
                     (iVar49 = (**(code **)(**(longlong **)(plVar33[iVar14] + 0xa8) + 0x2c8))
                                         (*(longlong **)(plVar33[iVar14] + 0xa8),
                                          *(undefined8 *)(plVar33[iVar49] + 0xa8)), -1 < iVar49)) {
                    iVar27 = iVar14;
                  }
                  iVar14 = (**(code **)(**(longlong **)(plVar33[iVar39] + 0xa8) + 0x2c8))
                                     (*(longlong **)(plVar33[iVar39] + 0xa8),
                                      *(undefined8 *)(plVar33[iVar27] + 0xa8));
                  if (-1 < iVar14) break;
                  lVar16 = plVar33[iVar39];
                  plVar33[iVar39] = plVar33[iVar27];
                  plVar33[iVar27] = lVar16;
                  iVar14 = iVar27 * 2;
                  iVar49 = iVar27 * 2 + 1;
                  iVar39 = iVar27;
                } while ((longlong)iVar49 < (longlong)uVar56);
                lVar16 = *plVar33;
                *plVar33 = plVar33[uVar52 - 2];
                plVar33[uVar52 - 2] = lVar16;
                uVar52 = uVar56;
              } while (2 < uVar56);
            }
          }
        }
LAB_1437bcf3a:
        pLVar53 = pLVar53 + -3;
        lVar16 = local_4a8;
      } while (&local_3f8 <= pLVar53);
    }
    iVar39 = (int)uStack_460;
    SRWLock = (PSRWLOCK)(lVar16 + 0xe0);
    AcquireSRWLockShared(SRWLock);
    iVar14 = *(int *)(lVar16 + 0xf0);
    ReleaseSRWLockShared(SRWLock);
    pcVar57 = local_468;
    lVar16 = (longlong)(int)uStack_460;
    if (iVar14 < 1) {
      if ((int)uStack_460 != 0) {
        lVar23 = 0;
        do {
          plVar17 = *(longlong **)(pcVar57 + lVar23);
          (**(code **)(*plVar17 + 0x2f0))(plVar17,iVar39);
          lVar23 = lVar23 + 8;
          iVar39 = iVar39 + -1;
        } while (lVar16 * 8 != lVar23);
      }
    }
    else if ((int)uStack_460 != 0) {
      lVar23 = 0;
      do {
        plVar17 = *(longlong **)(pcVar57 + lVar23);
        lVar32 = (**(code **)(*plVar17 + 0x2c8))(plVar17);
        if ((lVar32 != 0) && ((*(byte *)(lVar32 + 0x243) & 0xc) != 4)) {
          (**(code **)(*plVar17 + 0x2f0))(plVar17,iVar39);
          iVar39 = iVar39 + -1;
        }
        lVar23 = lVar23 + 8;
      } while (lVar16 * 8 != lVar23);
    }
    iVar39 = (int)uStack_470 + (int)uStack_460;
    AcquireSRWLockShared(SRWLock);
    iVar14 = *(int *)(local_4a8 + 0xf0);
    ReleaseSRWLockShared(SRWLock);
    pcVar57 = local_478;
    lVar16 = local_4d0;
    lVar23 = (longlong)(int)uStack_470;
    if (iVar14 < 1) {
      if ((int)uStack_470 != 0) {
        lVar32 = 0;
        do {
          plVar17 = *(longlong **)(pcVar57 + lVar32);
          (**(code **)(*plVar17 + 0x2f0))(plVar17,iVar39);
          lVar32 = lVar32 + 8;
          iVar39 = iVar39 + -1;
        } while (lVar23 * 8 != lVar32);
      }
    }
    else if ((int)uStack_470 != 0) {
      lVar32 = 0;
      do {
        plVar17 = *(longlong **)(pcVar57 + lVar32);
        lVar25 = (**(code **)(*plVar17 + 0x2c8))(plVar17);
        if ((lVar25 != 0) && ((*(byte *)(lVar25 + 0x243) & 0xc) != 4)) {
          (**(code **)(*plVar17 + 0x2f0))(plVar17,iVar39);
          iVar39 = iVar39 + -1;
        }
        lVar32 = lVar32 + 8;
      } while (lVar23 * 8 != lVar32);
    }
    if (local_478 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (local_468 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (local_448 != (code *)0x0) {
      FUN_1400020a8();
    }
    if ((code *)local_408.QuadPart != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    plVar17 = (longlong *)(lVar16 + 0x58);
    if (*(int *)(lVar16 + 0x60) == *(int *)(lVar16 + 0x8c)) {
      local_3f8 = *(LARGE_INTEGER *)(lVar16 + 0x48);
      uStack_3f0 = (code *)CONCAT44(uStack_3f0._4_4_,*(undefined4 *)(lVar16 + 0x50));
      FUN_147dd1fb0(plVar17);
LAB_1437bd254:
      FUN_147dd2074(lVar16 + 0xa8);
    }
    else if (*(int *)(lVar16 + 0xb0) != *(int *)(lVar16 + 0xdc)) {
      FUN_147dd20b8(plVar17,lVar16 + 0xa8);
      goto LAB_1437bd254;
    }
    QueryPerformanceCounter(&local_408);
    dVar5 = (double)local_408.QuadPart * DAT_14c83f420;
    iVar14 = *(int *)(lVar16 + 0x80);
    if (iVar14 == 0) {
      uVar52 = 1;
      uVar56 = 0;
      iVar49 = 0;
      iVar39 = 0;
    }
    else {
      puVar18 = *(uint **)(lVar16 + 0x78);
      if (*(uint **)(lVar16 + 0x78) == (uint *)0x0) {
        puVar18 = (uint *)(lVar16 + 0x68);
      }
      uVar54 = *puVar18;
      if (uVar54 == 0) {
        iVar39 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar39 = iVar14 + -1;
        }
        uVar56 = 0;
        uVar52 = (ulonglong)(uint)(iVar39 >> 5);
        if (iVar39 >> 5 < 1) {
          uVar52 = uVar56;
        }
        iVar49 = 0;
        do {
          if (uVar52 == uVar56) goto LAB_1437bb9d6;
          iVar49 = iVar49 + 0x20;
          uVar54 = puVar18[uVar56 + 1];
          uVar56 = uVar56 + 1;
        } while (uVar54 == 0);
      }
      else {
        uVar56 = 0;
        iVar49 = 0;
      }
      uVar52 = (ulonglong)(-uVar54 & uVar54);
      uVar37 = uVar52 * 2 + 1;
      lVar23 = 0x3f;
      if (uVar37 != 0) {
        for (; uVar37 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      iVar39 = (iVar49 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
      if (iVar14 <= iVar39) {
        iVar39 = iVar14;
      }
    }
    if (iVar39 < iVar14) {
      uVar54 = 0xffffffff;
      do {
        plVar33 = *(longlong **)(*(longlong *)(*plVar17 + (longlong)iVar39 * 0x10) + 0xe0);
        if (plVar33 != (longlong *)0x0) {
          (**(code **)(*plVar33 + 0x2a8))();
        }
        FUN_145bf48ca(plVar17,iVar39);
        QueryPerformanceCounter(&local_408);
        if ((double)DAT_14cb121a0 <
            (((double)local_408.QuadPart * DAT_14c83f420 + 16777216.0) - (dVar5 + 16777216.0)) *
            1000.0) break;
        uVar54 = uVar54 & ~(uint)uVar52;
        puVar18 = *(uint **)(local_4d0 + 0x78);
        if (*(uint **)(local_4d0 + 0x78) == (uint *)0x0) {
          puVar18 = (uint *)(lVar16 + 0x68);
        }
        iVar14 = *(int *)(local_4d0 + 0x80);
        iVar39 = (int)uVar56;
        lVar23 = (longlong)iVar39;
        uVar26 = puVar18[lVar23] & uVar54;
        if (uVar26 == 0) {
          iVar27 = iVar14 + 0x1e;
          if (-1 < iVar14 + -1) {
            iVar27 = iVar14 + -1;
          }
          iVar27 = iVar27 >> 5;
          iVar15 = iVar27;
          if (iVar27 < iVar39) {
            iVar15 = iVar39;
          }
          if (iVar27 <= iVar39) break;
          lVar32 = 0;
          while( true ) {
            iVar49 = iVar49 + 0x20;
            uVar26 = puVar18[lVar23 + lVar32 + 1];
            if (uVar26 != 0) break;
            lVar32 = lVar32 + 1;
            if (iVar15 - lVar23 == lVar32) goto LAB_1437bb9d6;
          }
          uVar56 = (ulonglong)(iVar39 + (int)lVar32 + 1);
          uVar54 = 0xffffffff;
        }
        uVar52 = (ulonglong)(-uVar26 & uVar26);
        uVar37 = uVar52 * 2 + 1;
        lVar23 = 0x3f;
        if (uVar37 != 0) {
          for (; uVar37 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        iVar39 = (iVar49 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
      } while (iVar39 < iVar14);
    }
LAB_1437bb9d6:
    lVar16 = local_4d0;
    if (*(int *)(local_4d0 + 0x60) == *(int *)(local_4d0 + 0x8c)) goto LAB_1437bb9ee;
  }
  if (local_418 != 0) {
    FUN_1400020a8();
  }
  FUN_1447f69b6(lVar16 + 0x158);
LAB_1437bd130:
  if ((local_f0 ^ (ulonglong)auStack_548) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1437bbbc8:
  lVar16 = *plVar38;
  *plVar38 = *plVar55;
  *plVar55 = lVar16;
  DVar29 = (int)local_4c0 - 1;
  plVar51 = plVar51 + -2;
  if ((longlong)plVar34 - (longlong)plVar33 < (longlong)plVar41 - (longlong)plVar44) {
    if (plVar43 < plVar17) {
      local_4d8->QuadPart = (LONGLONG)plVar43;
      local_4d8[1].QuadPart = (LONGLONG)plVar17;
      local_4d8[2].s.LowPart = DVar29;
      local_4d8 = local_4d8 + 3;
    }
    plVar43 = plVar38;
    plVar41 = plVar34;
    pLVar53 = local_4d8;
    if (plVar55 <= plVar38 + 1) goto LAB_1437bbe88;
  }
  else {
    pLVar53 = local_4d8;
    if (plVar38 + 1 < plVar55) {
      local_4d8->QuadPart = (LONGLONG)plVar38;
      local_4d8[1].QuadPart = (LONGLONG)plVar51;
      local_4d8[2].s.LowPart = DVar29;
      pLVar53 = local_4d8 + 3;
    }
    plVar38 = plVar44;
    plVar41 = plVar17;
    plVar51 = plVar17;
    if (plVar17 <= plVar43) goto LAB_1437bbe88;
  }
  local_4d8 = pLVar53;
  iVar14 = (int)((ulonglong)((longlong)plVar41 - (longlong)plVar38) >> 3);
  uVar54 = iVar14 + 1;
  plVar17 = plVar51;
  plVar33 = plVar38;
  if (DVar29 == 0) goto LAB_1437bbc7c;
  goto LAB_1437bbb08;
LAB_1437bbfec:
  lVar16 = *plVar33;
  *plVar33 = *plVar38;
  *plVar38 = lVar16;
  DVar29 = (int)local_4c0 - 1;
  plVar51 = plVar51 + -2;
  if ((longlong)plVar34 - (longlong)plVar43 < (longlong)plVar41 - (longlong)plVar44) {
    if (plVar55 < plVar17) {
      local_4d8->QuadPart = (LONGLONG)plVar55;
      local_4d8[1].QuadPart = (LONGLONG)plVar17;
      local_4d8[2].s.LowPart = DVar29;
      local_4d8 = local_4d8 + 3;
    }
    plVar44 = plVar33;
    plVar41 = plVar34;
    pLVar53 = local_4d8;
    if (plVar38 <= plVar33 + 1) goto LAB_1437bc2ac;
  }
  else {
    pLVar53 = local_4d8;
    if (plVar33 + 1 < plVar38) {
      local_4d8->QuadPart = (LONGLONG)plVar33;
      local_4d8[1].QuadPart = (LONGLONG)plVar51;
      local_4d8[2].s.LowPart = DVar29;
      pLVar53 = local_4d8 + 3;
    }
    plVar33 = plVar55;
    plVar41 = plVar17;
    plVar51 = plVar17;
    if (plVar17 <= plVar55) goto LAB_1437bc2ac;
  }
  local_4d8 = pLVar53;
  iVar14 = (int)((ulonglong)((longlong)plVar41 - (longlong)plVar44) >> 3);
  uVar54 = iVar14 + 1;
  plVar17 = plVar51;
  plVar43 = plVar44;
  if (DVar29 == 0) goto LAB_1437bc0a0;
  goto LAB_1437bbf2c;
LAB_1437bc84b:
  lVar16 = *plVar33;
  *plVar33 = *plVar38;
  *plVar38 = lVar16;
  DVar29 = (int)local_4c0 - 1;
  plVar51 = plVar51 + -2;
  if ((longlong)plVar34 - (longlong)plVar43 < (longlong)plVar41 - (longlong)plVar44) {
    if (plVar55 < plVar17) {
      local_4d8->QuadPart = (LONGLONG)plVar55;
      local_4d8[1].QuadPart = (LONGLONG)plVar17;
      local_4d8[2].s.LowPart = DVar29;
      local_4d8 = local_4d8 + 3;
    }
    plVar41 = plVar34;
    pLVar53 = local_4d8;
    plVar44 = plVar33;
    if (plVar38 <= plVar33 + 1) goto LAB_1437bcb0b;
  }
  else {
    pLVar53 = local_4d8;
    if (plVar33 + 1 < plVar38) {
      local_4d8->QuadPart = (LONGLONG)plVar33;
      local_4d8[1].QuadPart = (LONGLONG)plVar51;
      local_4d8[2].s.LowPart = DVar29;
      pLVar53 = local_4d8 + 3;
    }
    plVar33 = plVar55;
    plVar41 = plVar17;
    plVar51 = plVar17;
    if (plVar17 <= plVar55) goto LAB_1437bcb0b;
  }
  local_4d8 = pLVar53;
  iVar14 = (int)((ulonglong)((longlong)plVar41 - (longlong)plVar44) >> 3);
  uVar54 = iVar14 + 1;
  plVar43 = plVar44;
  plVar17 = plVar51;
  if (DVar29 == 0) goto LAB_1437bc902;
  goto LAB_1437bc78a;
LAB_1437bcc7a:
  lVar16 = *plVar33;
  *plVar33 = *plVar38;
  *plVar38 = lVar16;
  DVar29 = (int)local_4c0 - 1;
  plVar51 = plVar51 + -2;
  if ((longlong)plVar34 - (longlong)plVar43 < (longlong)plVar41 - (longlong)plVar44) {
    if (plVar55 < plVar17) {
      local_4d8->QuadPart = (LONGLONG)plVar55;
      local_4d8[1].QuadPart = (LONGLONG)plVar17;
      local_4d8[2].s.LowPart = DVar29;
      local_4d8 = local_4d8 + 3;
    }
    plVar41 = plVar34;
    pLVar53 = local_4d8;
    plVar44 = plVar33;
    if (plVar38 <= plVar33 + 1) goto LAB_1437bcf3a;
  }
  else {
    pLVar53 = local_4d8;
    if (plVar33 + 1 < plVar38) {
      local_4d8->QuadPart = (LONGLONG)plVar33;
      local_4d8[1].QuadPart = (LONGLONG)plVar51;
      local_4d8[2].s.LowPart = DVar29;
      pLVar53 = local_4d8 + 3;
    }
    plVar33 = plVar55;
    plVar41 = plVar17;
    plVar51 = plVar17;
    if (plVar17 <= plVar55) goto LAB_1437bcf3a;
  }
  local_4d8 = pLVar53;
  iVar14 = (int)((ulonglong)((longlong)plVar41 - (longlong)plVar44) >> 3);
  uVar54 = iVar14 + 1;
  plVar43 = plVar44;
  plVar17 = plVar51;
  if (DVar29 == 0) goto LAB_1437bcd31;
  goto LAB_1437bcbb9;
}



// FUNCTION 1437bd626 FUN_1437bd626 body=119 status=ok
// SIG undefined FUN_1437bd626(void)

void FUN_1437bd626(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x18);
    lVar6 = 0;
    do {
      if (DAT_14cb121d8 != 0) {
        uVar4 = *(undefined8 *)(lVar3 + lVar6);
        lVar5 = FUN_144a126be(param_1 + -0x30);
        bVar1 = *(byte *)(lVar5 + 0x152);
        if ((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) {
          FUN_147dc0dce(uVar4);
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 * 8 != lVar6);
  }
  return;
}



// FUNCTION 1437bd6a2 FUN_1437bd6a2 body=69 status=ok
// SIG undefined FUN_1437bd6a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437bd6a2(void)

{
  _DAT_14cb121e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437bd6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb121e8,1);
  return;
}



// FUNCTION 1437bd6e8 FUN_1437bd6e8 body=281 status=ok
// SIG undefined FUN_1437bd6e8(void)

void FUN_1437bd6e8(longlong param_1)

{
  longlong lVar1;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + -0x20);
  if (lVar1 != 0) {
    if (DAT_14cb10130 == 0) {
      local_30 = &local_18;
      local_18 = FUN_140754f84;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_14081d0ea;
      local_38 = &LAB_147da9a76;
      local_40 = FUN_1409f3105;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x10000000;
      local_60 = 8;
      local_68 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30)) goto LAB_1437bd73b;
  }
  lVar1 = 0;
LAB_1437bd73b:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_1437b9a00(lVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437bd802 FUN_1437bd802 body=363 status=ok
// SIG undefined FUN_1437bd802(void)

undefined8 * FUN_1437bd802(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [32];
  longlong *local_58;
  ulonglong *local_50;
  longlong local_48;
  int local_40;
  undefined4 local_3c;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)*param_1;
  iVar4 = *(int *)(puVar1 + 1);
  if (iVar4 == 0) {
    lVar2 = param_1[1];
    if (lVar2 == 0) {
      local_48 = 0;
      iVar4 = *(int *)(param_1[2] + 0x50);
      uVar5 = *(undefined8 *)(param_1[2] + 0x48);
      local_40 = iVar4;
      if (iVar4 == 0) {
        local_3c = 0;
      }
      else {
        FUN_141528ec0(&local_48,iVar4);
        FUN_141528e74(local_48,uVar5,iVar4);
      }
    }
    else {
      local_38 = lVar2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c();
      }
      local_58 = &local_38;
      local_50 = &local_30;
      FUN_145ce26b8(&local_48);
    }
    plVar3 = (longlong *)*param_1;
    if (plVar3 == &local_48) {
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*plVar3 != 0) {
        FUN_1400020a8();
      }
      *plVar3 = local_48;
      local_48 = 0;
      *(int *)(plVar3 + 1) = local_40;
      *(undefined4 *)((longlong)plVar3 + 0xc) = local_3c;
    }
    puVar1 = (undefined8 *)*param_1;
    iVar4 = *(int *)(puVar1 + 1);
    *param_2 = 0;
    uVar5 = *puVar1;
    *(int *)(param_2 + 1) = iVar4;
    if (iVar4 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      goto LAB_1437bd907;
    }
  }
  else {
    *param_2 = 0;
    uVar5 = *puVar1;
    *(int *)(param_2 + 1) = iVar4;
  }
  FUN_141528ec0(param_2,iVar4);
  FUN_141528e74(*param_2,uVar5,iVar4);
LAB_1437bd907:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437bd96e FUN_1437bd96e body=49 status=ok
// SIG undefined FUN_1437bd96e(void)

void FUN_1437bd96e(void)

{
  FUN_144760e21(DAT_14cb12228,DAT_14cb12230);
  if (DAT_14cb12228 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1437bd99f FUN_1437bd99f body=63 status=ok
// SIG undefined FUN_1437bd99f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437bd99f(void)

{
  _DAT_14cb12240 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (DAT_14cb12249 == '\x01')) {
    FUN_14019e20a(DAT_14c948580,&DAT_14cb12240);
    DAT_14cb12249 = '\0';
  }
  return;
}



// FUNCTION 1437bd9de FUN_1437bd9de body=901 status=ok
// SIG undefined FUN_1437bd9de(void)

void FUN_1437bd9de(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  
  FUN_140115e24();
  if (((*(uint *)(param_1 + 8) & 0x80410) == 0) && (DAT_14cb0d2b0 != 0)) {
    lVar8 = *(longlong *)(DAT_14cb0d2b0 + 0x228);
    if ((lVar8 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar8);
    }
    else if (lVar8 == 0) goto LAB_1437bda00;
    lVar6 = FUN_1412b49a2();
    if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar8 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
        lVar6 + 0x30)) {
      lVar6 = FUN_1412b49a2();
      if ((lVar6 == 0) || (*(int *)(lVar8 + 0x38) < *(int *)(lVar6 + 0x38))) {
        lVar7 = 0;
      }
      else {
        lVar7 = 0;
        if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
            lVar6 + 0x30) {
          lVar7 = lVar8;
        }
      }
      lVar8 = FUN_146412f62(param_1,lVar7,0,0,0,0,0,0);
      if ((lVar8 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(lVar8);
      }
      *(longlong *)(param_1 + 0x3e0) = lVar8;
    }
  }
LAB_1437bda00:
  if (*(float *)(param_1 + 0x4d4) <= 0.0 && *(float *)(param_1 + 0x4d4) != 0.0) {
    *(undefined4 *)(param_1 + 0x4d4) = 0;
  }
  if (*(float *)(param_1 + 0x4d8) <= 0.0 && *(float *)(param_1 + 0x4d8) != 0.0) {
    *(undefined4 *)(param_1 + 0x4d8) = 0;
  }
  if (*(float *)(param_1 + 0x4dc) <= 0.0 && *(float *)(param_1 + 0x4dc) != 0.0) {
    *(undefined4 *)(param_1 + 0x4dc) = 0;
  }
  if (*(float *)(param_1 + 0x4e0) <= 0.0 && *(float *)(param_1 + 0x4e0) != 0.0) {
    *(undefined4 *)(param_1 + 0x4e0) = 0;
  }
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    return;
  }
  uVar9 = *(uint *)(param_1 + 0x590);
  plVar1 = (longlong *)(param_1 + 0x5a0);
  uVar2 = *(uint *)(param_1 + 0x5a8);
  if (uVar9 != uVar2) {
    if ((int)uVar9 < 0) {
      *(undefined4 *)(param_1 + 0x590) = 10;
      uVar9 = 10;
    }
    if (uVar9 != uVar2) {
      if ((int)uVar2 < (int)uVar9) {
        *(uint *)(param_1 + 0x5a8) = uVar9;
        if (*(int *)(param_1 + 0x5ac) - uVar2 < uVar9 - uVar2) {
          FUN_1417fc8ce(plVar1);
        }
        memset((void *)((longlong)(int)uVar2 * 8 + *plVar1),0,(longlong)(int)(uVar9 - uVar2) << 3);
      }
      else if (uVar9 < uVar2) {
        *(uint *)(param_1 + 0x5a8) = uVar9;
        FUN_147dd9866(plVar1);
      }
    }
  }
  lVar8 = *(longlong *)(param_1 + 0x5b0);
  if ((((lVar8 == 0) || (lVar6 = FUN_141318e14(), lVar6 == 0)) ||
      (*(int *)(lVar8 + 0x38) < *(int *)(lVar6 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
      lVar6 + 0x30)) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(longlong *)(param_1 + 0x5b0);
  }
  lVar6 = *(longlong *)(param_1 + 0x598);
  if (((lVar6 == 0) || (lVar7 = FUN_141318e14(), lVar7 == 0)) ||
     ((*(int *)(lVar6 + 0x38) < *(int *)(lVar7 + 0x38) ||
      (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
       lVar7 + 0x30)))) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x598);
  }
  if (lVar8 == lVar6) {
    return;
  }
  lVar8 = *(longlong *)(param_1 + 0x598);
  bVar4 = DAT_14c950c29;
  do {
    if ((lVar8 != 0 & bVar4) == 1) {
      FUN_1456cec3c(lVar8);
LAB_1437bdc68:
      lVar6 = FUN_141318e14();
      if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar8 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        iVar5 = *(int *)(param_1 + 0x5a8);
        if (0 < iVar5) {
          lVar6 = 0;
          do {
            lVar7 = *plVar1;
            plVar3 = *(longlong **)(lVar7 + lVar6 * 8);
            if ((plVar3 != (longlong *)0x0) && (plVar3[2] != lVar8)) {
              (**(code **)(*plVar3 + 0x2a0))();
              *(undefined8 *)(lVar7 + lVar6 * 8) = 0;
              iVar5 = *(int *)(param_1 + 0x5a8);
            }
            lVar6 = lVar6 + 1;
          } while (lVar6 < iVar5);
        }
        lVar8 = *(longlong *)(param_1 + 0x598);
        if (DAT_14c950c29 == 1) {
          if (lVar8 == 0) {
            lVar8 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar8 = *(longlong *)(param_1 + 0x598);
          }
        }
        *(longlong *)(param_1 + 0x5b0) = lVar8;
        return;
      }
    }
    else if (lVar8 != 0) goto LAB_1437bdc68;
    lVar8 = FUN_140834646();
    if (lVar8 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar8);
    }
    bVar4 = DAT_14c950c29;
    *(longlong *)(param_1 + 0x598) = lVar8;
  } while( true );
}



// FUNCTION 1437bdd64 FUN_1437bdd64 body=67 status=ok
// SIG undefined FUN_1437bdd64(void)

float FUN_1437bdd64(longlong *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)(**(code **)(*param_1 + 0x668))();
  fVar2 = *(float *)((longlong)param_1 + 0x4dc) * fVar1;
  if (fVar1 * *(float *)(param_1 + 0x9c) <= param_2) {
    param_2 = fVar1 * *(float *)(param_1 + 0x9c);
  }
  if (param_2 <= fVar2) {
    param_2 = fVar2;
  }
  return param_2;
}



// FUNCTION 1437bdda8 FUN_1437bdda8 body=181 status=ok
// SIG undefined FUN_1437bdda8(void)

void FUN_1437bdda8(void)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  undefined1 local_70 [28];
  char local_54;
  undefined8 local_48;
  char local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = FUN_1447210f0();
  if ((*(byte *)(lVar1 + 0x155) & 1) == 0) {
    FUN_1447f69b6(lVar1 + 0x7e8);
    FUN_1405f0e9c(local_78,lVar1,5);
    if (local_54 == '\0') {
      do {
        FUN_1405f107a(local_48,1);
        FUN_14059e512(local_78);
      } while (local_54 == '\0');
    }
    if (local_20 == '\x01') {
      FUN_14024445c(local_70);
    }
    FUN_1405f0e42(lVar1,1);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437be008 FUN_1437be008 body=468 status=ok
// SIG undefined FUN_1437be008(void)

void FUN_1437be008(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined4 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *param_1;
  uVar6 = FUN_1448eb174(param_2,0x18,0);
  iVar7 = FUN_1437be1de(uVar1,uVar6,param_2);
  if (iVar7 == -1) {
    uVar1 = param_1[1];
    uVar6 = FUN_1448eb174(param_2,0x18,0);
    iVar7 = FUN_1437be1de(uVar1,uVar6,param_2);
    if (iVar7 == -1) {
      lVar2 = param_1[1];
      lVar11 = param_1[2];
      FUN_1437be248(lVar2,local_50);
      *(undefined8 *)(local_48 + 4) = *(undefined8 *)(param_2 + 4);
      uVar6 = param_2[1];
      uVar3 = param_2[2];
      uVar4 = param_2[3];
      *local_48 = *param_2;
      local_48[1] = uVar6;
      local_48[2] = uVar3;
      local_48[3] = uVar4;
      *(undefined8 *)(local_48 + 6) = 0;
      iVar7 = *(int *)(lVar11 + 0x20);
      _Src = *(void **)(lVar11 + 0x18);
      local_48[8] = iVar7;
      if ((longlong)iVar7 == 0) {
        local_48[9] = 0;
      }
      else {
        FUN_140043c18(local_48 + 6,iVar7);
        memcpy(*(void **)(local_48 + 6),_Src,(longlong)iVar7 * 0x48);
      }
      local_48[10] = 0xffffffff;
      local_54 = local_50[0];
      uVar8 = FUN_1448eb174(local_48,0x18,0);
      cVar5 = FUN_1437be508(lVar2,uVar8,local_48,&local_54);
      if (cVar5 == '\0') {
        uVar10 = *(int *)(lVar2 + 8) - *(int *)(lVar2 + 0x34);
        iVar7 = 1;
        if (3 < uVar10) {
          uVar9 = (ulonglong)(uVar10 & 0xfffffffe) + 0xf;
          lVar11 = 0x3f;
          if (uVar9 != 0) {
            for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          iVar7 = 1 << ((byte)lVar11 & 0x1f);
        }
        if (((int)uVar10 < 1) || (iVar7 <= *(int *)(lVar2 + 0x48))) {
          uVar8 = *(int *)(lVar2 + 0x48) - 1U & uVar8;
          local_48[0xb] = uVar8;
          lVar11 = *(longlong *)(lVar2 + 0x40);
          if (*(longlong *)(lVar2 + 0x40) == 0) {
            lVar11 = lVar2 + 0x38;
          }
          local_48[10] = *(undefined4 *)
                          (lVar11 + ((longlong)*(int *)(lVar2 + 0x48) - 1U & (longlong)(int)uVar8) *
                                    4);
          lVar11 = *(longlong *)(lVar2 + 0x40);
          if (*(longlong *)(lVar2 + 0x40) == 0) {
            lVar11 = lVar2 + 0x38;
          }
          *(undefined4 *)
           (lVar11 + ((longlong)*(int *)(lVar2 + 0x48) - 1U & (longlong)(int)uVar8) * 4) = local_54;
        }
        else {
          *(int *)(lVar2 + 0x48) = iVar7;
          FUN_1437be5fc(lVar2);
        }
      }
      *(undefined1 *)param_1[3] = 1;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437be1de FUN_1437be1de body=105 status=ok
// SIG undefined FUN_1437be1de(void)

int FUN_1437be1de(longlong *param_1,uint param_2,longlong *param_3)

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
        lVar4 = (longlong)iVar1 * 0x30;
        if (((*(longlong *)(lVar2 + lVar4) == *param_3) &&
            (*(longlong *)(lVar2 + lVar4 + 8) == param_3[1])) &&
           (*(longlong *)(lVar2 + lVar4 + 0x10) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x28 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1437be248 FUN_1437be248 body=704 status=ok
// SIG undefined FUN_1437be248(void)

int * FUN_1437be248(longlong *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_140044672(param_1,iVar15);
    }
    iVar7 = (int)param_1[5];
    if (iVar7 == 0) {
      iVar10 = -1;
    }
    else {
      iVar10 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar10 = iVar7 + -1;
      }
      iVar10 = iVar10 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar8 = iVar7 + 1;
    iVar16 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar16 = iVar7;
    }
    if (iVar16 >> 5 == iVar10) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar7) {
        iVar10 = iVar7;
        if (iVar7 + 0x20U < 0xa0) {
          iVar8 = 0x80;
        }
        else {
          uVar18 = iVar7 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar18) {
              uVar11 = uVar18;
            }
          }
          else {
            uVar11 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar5 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar2 = (uint)(uVar5 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar5 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 + 0xf >> 4]];
              }
              else {
                uVar9 = (ulonglong)(uVar2 & 0xfffffff0);
                if (uVar9 < 0x7ff1) {
                  bVar6 = (&DAT_14c841e00)[uVar2 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar6) {
                    uVar14 = (ulonglong)bVar6;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar6;
                  do {
                    uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_1437be433;
                    lVar4 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar4 != 0x33);
                }
                uVar5 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar5 = (ulonglong)DAT_14c841df8;
                }
                uVar5 = -uVar5 & (uVar9 + uVar5) - 1;
              }
            }
            else {
              uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
              iVar10 = (int)param_1[5];
            }
          }
LAB_1437be433:
          iVar3 = (int)(uVar5 >> 2);
          iVar8 = -0x20;
          if ((int)uVar18 <= iVar3) {
            iVar8 = iVar3 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar12,iVar10);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar10 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar10 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar6 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar10 >> 5) * 4) << (bVar6 & 0x1f)) >>
             (bVar6 & 0x1f);
      }
    }
    lVar4 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar6 = (byte)iVar7 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar4 = (longlong)iVar15;
    iVar7 = *(int *)(*param_1 + 4 + lVar4 * 0x30);
    *(int *)(param_1 + 6) = iVar7;
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x30) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar7 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar7 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar7 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  *param_2 = iVar15;
  *(longlong *)(param_2 + 2) = lVar4 * 0x30 + *param_1;
  return param_2;
}



// FUNCTION 1437be508 FUN_1437be508 body=243 status=ok
// SIG undefined FUN_1437be508(void)

undefined8 FUN_1437be508(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  longlong *plVar11;
  undefined4 uVar12;
  int iVar13;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar10 = FUN_1437be1de(), iVar10 != -1)) {
    puVar1 = (undefined8 *)(*param_1 + (longlong)iVar10 * 0x30);
    if (*(longlong *)(*param_1 + 0x18 + (longlong)iVar10 * 0x30) != 0) {
      FUN_1400020a8();
    }
    uVar6 = *param_3;
    uVar7 = param_3[1];
    uVar8 = param_3[2];
    uVar9 = param_3[3];
    puVar1[4] = param_3[4];
    puVar1[2] = uVar8;
    puVar1[3] = uVar9;
    *puVar1 = uVar6;
    puVar1[1] = uVar7;
    iVar3 = *param_4;
    lVar4 = *param_1;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      *(int *)(lVar4 + (longlong)(int)param_1[6] * 0x30) = iVar3;
    }
    *(undefined4 *)(lVar4 + (longlong)iVar3 * 0x30) = 0xffffffff;
    if (*(int *)((longlong)param_1 + 0x34) < 1) {
      uVar12 = 0xffffffff;
    }
    else {
      uVar12 = (undefined4)param_1[6];
    }
    *(undefined4 *)(lVar4 + (longlong)iVar3 * 0x30 + 4) = uVar12;
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
    plVar11 = param_1 + 2;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[4];
    }
    iVar13 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar13 = iVar3;
    }
    bVar5 = (byte)iVar3 & 0x1f;
    puVar2 = (uint *)((longlong)plVar11 + (longlong)(iVar13 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
    *param_4 = iVar10;
    return CONCAT71((int7)((ulonglong)plVar11 >> 8),1);
  }
  return 0;
}



// FUNCTION 1437be5fc FUN_1437be5fc body=681 status=ok
// SIG undefined FUN_1437be5fc(void)

void FUN_1437be5fc(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong local_48;
  
  plVar9 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar9,0,0);
  }
  uVar13 = *(uint *)(param_1 + 9);
  if (uVar13 == 0) {
    return;
  }
  plVar1 = param_1 + 7;
  if (uVar13 == 1) {
    if (*plVar9 != 0) {
      FUN_1446efa72(plVar9,0,0);
    }
  }
  else {
    FUN_1446efa72(plVar9,0,uVar13);
    if ((int)uVar13 < 1) goto LAB_1437be679;
  }
  uVar2 = 0;
  do {
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = plVar1;
    }
    *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar13 != uVar2);
LAB_1437be679:
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    local_48 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar5 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = (uint *)(param_1 + 2);
    }
    uVar13 = *puVar8;
    if (uVar13 == 0) {
      iVar10 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar10 = iVar3 + -1;
      }
      local_48 = 0;
      uVar14 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar14 = local_48;
      }
      iVar10 = 0;
      do {
        if (uVar14 == local_48) {
          return;
        }
        iVar10 = iVar10 + 0x20;
        uVar13 = puVar8[local_48 + 1];
        local_48 = local_48 + 1;
      } while (uVar13 == 0);
    }
    else {
      local_48 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar13 & uVar13);
    uVar4 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar5 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar5) {
      iVar5 = iVar3;
    }
  }
  if (iVar5 < iVar3) {
    uVar13 = 0xffffffff;
    do {
      lVar11 = *param_1;
      lVar12 = (longlong)iVar5 * 0x30;
      iVar3 = FUN_1448eb174(lVar11 + lVar12,0x18,0);
      uVar4 = (longlong)iVar3 & (longlong)(int)param_1[9] - 1U;
      iVar3 = (int)uVar4;
      *(int *)(lVar11 + 0x2c + lVar12) = iVar3;
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = plVar1;
      }
      *(undefined4 *)(lVar11 + 0x28 + lVar12) =
           *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar4) * 4);
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = plVar1;
      }
      *(int *)((longlong)plVar9 + ((longlong)iVar3 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
      uVar13 = ~(uint)uVar14 & uVar13;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = (uint *)(param_1 + 2);
      }
      iVar3 = (int)param_1[5];
      iVar5 = (int)local_48;
      lVar11 = (longlong)iVar5;
      uVar2 = puVar8[lVar11] & uVar13;
      if (uVar2 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar5) {
          iVar7 = iVar5;
        }
        if (iVar6 <= iVar5) {
          return;
        }
        lVar12 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar2 = puVar8[lVar11 + lVar12 + 1];
          if (uVar2 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar7 - lVar11 == lVar12) {
            return;
          }
        }
        local_48 = (ulonglong)(iVar5 + (int)lVar12 + 1);
        uVar13 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar2 & uVar2);
      uVar4 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar5 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar3);
  }
  return;
}



// FUNCTION 1437be8a6 FUN_1437be8a6 body=132 status=ok
// SIG undefined FUN_1437be8a6(void)

undefined8 FUN_1437be8a6(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [44];
  undefined1 local_4c [8];
  undefined1 local_44 [4];
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)*param_2;
  uVar2 = *param_1;
  (**(code **)(*plVar1 + 0x2c8))(plVar1,local_44);
  (**(code **)(*plVar1 + 0x310))(plVar1,local_4c);
  local_40 = local_4c;
  local_38 = local_44;
  FUN_147dc25f0(uVar2,local_2c,&local_40,0);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437be92c FUN_1437be92c body=349 status=ok
// SIG undefined FUN_1437be92c(void)

undefined8 FUN_1437be92c(double *param_1,double *param_2,longlong *param_3,longlong *param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  
  dVar6 = (param_2[1] - param_1[1]) / (double)(longlong)param_1[2] +
          (double)(longlong)param_1[3] * 0.5;
  lVar5 = (longlong)ROUND(dVar6 + dVar6 + -0.5) >> 1;
  dVar6 = (*param_2 - *param_1) / (double)(longlong)param_1[2] + (double)(longlong)param_1[3] * 0.5;
  lVar4 = (longlong)ROUND(dVar6 + dVar6 + -0.5) >> 1;
  *param_3 = lVar4;
  param_3[1] = lVar5;
  dVar6 = param_1[3];
  uVar2 = 0;
  if ((lVar4 < (longlong)dVar6) && (lVar5 < (longlong)dVar6)) {
    dVar7 = (param_2[3] - param_1[1]) / (double)(longlong)param_1[2] + (double)(longlong)dVar6 * 0.5
    ;
    uVar1 = (ulonglong)ROUND(dVar7 + dVar7 + -0.5);
    dVar6 = (param_2[2] - *param_1) / (double)(longlong)param_1[2] + (double)(longlong)dVar6 * 0.5;
    uVar3 = (ulonglong)ROUND(dVar6 + dVar6 + -0.5);
    *param_4 = (longlong)uVar3 >> 1;
    param_4[1] = (longlong)uVar1 >> 1;
    if ((longlong)(uVar3 | uVar1) >> 1 < 0) {
      uVar2 = 0;
    }
    else {
      lVar4 = (longlong)param_1[3] + -1;
      if (*param_3 < (longlong)param_1[3] + -1) {
        lVar4 = *param_3;
      }
      lVar5 = 0;
      if (lVar4 < 1) {
        lVar4 = lVar5;
      }
      *param_3 = lVar4;
      lVar4 = (longlong)param_1[3] + -1;
      if (param_3[1] < (longlong)param_1[3] + -1) {
        lVar4 = param_3[1];
      }
      if (lVar4 < 1) {
        lVar4 = lVar5;
      }
      param_3[1] = lVar4;
      lVar4 = (longlong)param_1[3] + -1;
      if (*param_4 < (longlong)param_1[3] + -1) {
        lVar4 = *param_4;
      }
      if (lVar4 < 1) {
        lVar4 = lVar5;
      }
      *param_4 = lVar4;
      lVar4 = (longlong)param_1[3] + -1;
      if (param_4[1] < (longlong)param_1[3] + -1) {
        lVar4 = param_4[1];
      }
      if (lVar4 < 1) {
        lVar4 = lVar5;
      }
      param_4[1] = lVar4;
      uVar2 = 1;
    }
  }
  return uVar2;
}



// FUNCTION 1437bea8a FUN_1437bea8a body=191 status=ok
// SIG undefined FUN_1437bea8a(void)

void FUN_1437bea8a(longlong *param_1)

{
  undefined2 *puVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined2 *local_38;
  int local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  local_48 = 0;
  FUN_140af9fb2(local_28,param_1[4],param_1[2],DAT_14c892f58);
  FUN_1400021e4(local_28,&local_38);
  puVar1 = local_38;
  if (local_30 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  (**(code **)(*param_1 + 0x170))(param_1,puVar1,0,0x34);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437beb4a FUN_1437beb4a body=266 status=ok
// SIG undefined FUN_1437beb4a(void)

void FUN_1437beb4a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined2 *local_38;
  int local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    lVar2 = FUN_140c71830();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
       (plVar1 = *(longlong **)(param_2 + 0xc0), plVar1 != (longlong *)0x0)) {
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      local_48 = 0;
      FUN_140af9fb2(local_28,plVar1[4],plVar1[2],DAT_14c892f58);
      FUN_1400021e4(local_28,&local_38);
      puVar3 = local_38;
      if (local_30 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      (**(code **)(*plVar1 + 0x170))(plVar1,puVar3,0,0x34);
      if (local_38 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      FUN_140d7233c(plVar1,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437bec8e FUN_1437bec8e body=1891 status=ok
// SIG undefined FUN_1437bec8e(void)

undefined8 * FUN_1437bec8e(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1 != param_2) {
    *param_1 = *param_2;
    *param_2 = 0;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      uVar2 = *(undefined4 *)(param_2 + 3);
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(undefined4 *)(param_1 + 3) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if (param_2[8] == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = param_2[8];
  param_2[8] = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)(param_2 + 9) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_1 != param_2) {
    param_1[10] = param_2[10];
    param_2[10] = 0;
    *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
    *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
    param_2[0xb] = 0;
    if (param_2[0xe] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 100);
      uVar2 = *(undefined4 *)(param_2 + 0xd);
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x6c);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
      *(undefined4 *)((longlong)param_1 + 100) = uVar1;
      *(undefined4 *)(param_1 + 0xd) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x6c) = uVar3;
    }
    if (param_1[0xe] != 0) {
      FUN_1400020a8();
    }
    param_1[0xe] = param_2[0xe];
    param_2[0xe] = 0;
    *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
    *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0x7c);
    param_2[0xf] = 0;
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x84);
    param_2[0x10] = 0xffffffff;
  }
  if (param_2[0x12] == 0) {
    *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  param_1[0x12] = param_2[0x12];
  param_2[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  *(undefined4 *)(param_2 + 0x13) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (param_1 != param_2) {
    param_1[0x14] = param_2[0x14];
    param_2[0x14] = 0;
    *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
    *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)((longlong)param_2 + 0xac);
    param_2[0x15] = 0;
    if (param_2[0x18] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0xb4);
      uVar2 = *(undefined4 *)(param_2 + 0x17);
      uVar3 = *(undefined4 *)((longlong)param_2 + 0xbc);
      *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
      *(undefined4 *)((longlong)param_1 + 0xb4) = uVar1;
      *(undefined4 *)(param_1 + 0x17) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0xbc) = uVar3;
    }
    if (param_1[0x18] != 0) {
      FUN_1400020a8();
    }
    param_1[0x18] = param_2[0x18];
    param_2[0x18] = 0;
    *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
    *(undefined4 *)((longlong)param_1 + 0xcc) = *(undefined4 *)((longlong)param_2 + 0xcc);
    param_2[0x19] = 0;
    *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
    *(undefined4 *)((longlong)param_1 + 0xd4) = *(undefined4 *)((longlong)param_2 + 0xd4);
    param_2[0x1a] = 0xffffffff;
  }
  if (param_2[0x1c] == 0) {
    *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x1b);
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  param_1[0x1c] = param_2[0x1c];
  param_2[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(param_2 + 0x1d);
  *(undefined4 *)(param_2 + 0x1d) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  if (param_1 != param_2) {
    param_1[0x1e] = param_2[0x1e];
    param_2[0x1e] = 0;
    *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x1f);
    *(undefined4 *)((longlong)param_1 + 0xfc) = *(undefined4 *)((longlong)param_2 + 0xfc);
    param_2[0x1f] = 0;
    if (param_2[0x22] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x104);
      uVar2 = *(undefined4 *)(param_2 + 0x21);
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x10c);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
      *(undefined4 *)((longlong)param_1 + 0x104) = uVar1;
      *(undefined4 *)(param_1 + 0x21) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x10c) = uVar3;
    }
    if (param_1[0x22] != 0) {
      FUN_1400020a8();
    }
    param_1[0x22] = param_2[0x22];
    param_2[0x22] = 0;
    *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(param_2 + 0x23);
    *(undefined4 *)((longlong)param_1 + 0x11c) = *(undefined4 *)((longlong)param_2 + 0x11c);
    param_2[0x23] = 0;
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)((longlong)param_1 + 0x124) = *(undefined4 *)((longlong)param_2 + 0x124);
    param_2[0x24] = 0xffffffff;
  }
  if (param_2[0x26] == 0) {
    *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x25);
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  param_1[0x26] = param_2[0x26];
  param_2[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = *(undefined4 *)(param_2 + 0x27);
  *(undefined4 *)(param_2 + 0x27) = 0;
  *(undefined4 *)(param_1 + 0x29) = *(undefined4 *)(param_2 + 0x29);
  param_1[0x28] = param_2[0x28];
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  if (param_1 != param_2) {
    param_1[0x2a] = param_2[0x2a];
    param_2[0x2a] = 0;
    *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(param_2 + 0x2b);
    *(undefined4 *)((longlong)param_1 + 0x15c) = *(undefined4 *)((longlong)param_2 + 0x15c);
    param_2[0x2b] = 0;
    if (param_2[0x2e] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x164);
      uVar2 = *(undefined4 *)(param_2 + 0x2d);
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x16c);
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
      *(undefined4 *)((longlong)param_1 + 0x164) = uVar1;
      *(undefined4 *)(param_1 + 0x2d) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x16c) = uVar3;
    }
    if (param_1[0x2e] != 0) {
      FUN_1400020a8();
    }
    param_1[0x2e] = param_2[0x2e];
    param_2[0x2e] = 0;
    *(undefined4 *)(param_1 + 0x2f) = *(undefined4 *)(param_2 + 0x2f);
    *(undefined4 *)((longlong)param_1 + 0x17c) = *(undefined4 *)((longlong)param_2 + 0x17c);
    param_2[0x2f] = 0;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)((longlong)param_1 + 0x184) = *(undefined4 *)((longlong)param_2 + 0x184);
    param_2[0x30] = 0xffffffff;
  }
  if (param_2[0x32] == 0) {
    *(undefined4 *)(param_1 + 0x31) = *(undefined4 *)(param_2 + 0x31);
  }
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  param_1[0x32] = param_2[0x32];
  param_2[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = *(undefined4 *)(param_2 + 0x33);
  *(undefined4 *)(param_2 + 0x33) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  if (param_1 != param_2) {
    param_1[0x34] = param_2[0x34];
    param_2[0x34] = 0;
    *(undefined4 *)(param_1 + 0x35) = *(undefined4 *)(param_2 + 0x35);
    *(undefined4 *)((longlong)param_1 + 0x1ac) = *(undefined4 *)((longlong)param_2 + 0x1ac);
    param_2[0x35] = 0;
    if (param_2[0x38] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x1b4);
      uVar2 = *(undefined4 *)(param_2 + 0x37);
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1bc);
      *(undefined4 *)(param_1 + 0x36) = *(undefined4 *)(param_2 + 0x36);
      *(undefined4 *)((longlong)param_1 + 0x1b4) = uVar1;
      *(undefined4 *)(param_1 + 0x37) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x1bc) = uVar3;
    }
    if (param_1[0x38] != 0) {
      FUN_1400020a8();
    }
    param_1[0x38] = param_2[0x38];
    param_2[0x38] = 0;
    *(undefined4 *)(param_1 + 0x39) = *(undefined4 *)(param_2 + 0x39);
    *(undefined4 *)((longlong)param_1 + 0x1cc) = *(undefined4 *)((longlong)param_2 + 0x1cc);
    param_2[0x39] = 0;
    *(undefined4 *)(param_1 + 0x3a) = *(undefined4 *)(param_2 + 0x3a);
    *(undefined4 *)((longlong)param_1 + 0x1d4) = *(undefined4 *)((longlong)param_2 + 0x1d4);
    param_2[0x3a] = 0xffffffff;
  }
  if (param_2[0x3c] == 0) {
    *(undefined4 *)(param_1 + 0x3b) = *(undefined4 *)(param_2 + 0x3b);
  }
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  param_1[0x3c] = param_2[0x3c];
  param_2[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = *(undefined4 *)(param_2 + 0x3d);
  *(undefined4 *)(param_2 + 0x3d) = 0;
  return param_1;
}



// FUNCTION 1437bf400 FUN_1437bf400 body=408 status=ok
// SIG undefined FUN_1437bf400(void)

uint FUN_1437bf400(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)*param_1 * 0x40 + *(int *)(param_1 + 4) + 0x9e3779b9;
  uVar1 = *param_1 ^ uVar2;
  uVar1 = uVar1 * 0x40 + -0x61c88647 + (uVar2 >> 2) + *(int *)(param_1 + 8) ^ uVar1;
  uVar1 = (uVar1 >> 2) + 0x9e3779b9 + (uVar1 << 6 | (uint)param_1[0xc]) ^ uVar1;
  uVar1 = (uVar1 >> 2) + 0x9e3779b9 + uVar1 * 0x40 + *(int *)(param_1 + 0x10) ^ uVar1;
  uVar1 = (uVar1 >> 2) + 0x9e3779b9 +
          (int)((ulonglong)*(undefined8 *)(param_1 + 0x18) >> 0x20) * 0x17 +
          (int)*(undefined8 *)(param_1 + 0x18) + uVar1 * 0x40 ^ uVar1;
  uVar1 = (uVar1 >> 2) + 0x9e3779b9 +
          (int)((ulonglong)*(undefined8 *)(param_1 + 0x20) >> 0x20) * 0x17 +
          (int)*(undefined8 *)(param_1 + 0x20) + uVar1 * 0x40 ^ uVar1;
  uVar1 = (uVar1 >> 2) + 0x9e3779b9 +
          (int)((ulonglong)*(undefined8 *)(param_1 + 0x28) >> 0x20) * 0x17 +
          (int)*(undefined8 *)(param_1 + 0x28) + uVar1 * 0x40 ^ uVar1;
  uVar1 = (uVar1 >> 2) + 0x9e3779b9 +
          (int)((ulonglong)*(undefined8 *)(param_1 + 0x30) >> 0x20) * 0x17 +
          (int)*(undefined8 *)(param_1 + 0x30) + uVar1 * 0x40 ^ uVar1;
  uVar1 = (uVar1 >> 2) + 0x9e3779b9 +
          (int)((ulonglong)*(undefined8 *)(param_1 + 0x38) >> 0x20) * 0x17 +
          (int)*(undefined8 *)(param_1 + 0x38) + uVar1 * 0x40 ^ uVar1;
  return (uVar1 >> 2) + 0x9e3779b9 +
         (int)((ulonglong)*(undefined8 *)(param_1 + 0x40) >> 0x20) * 0x17 +
         (int)*(undefined8 *)(param_1 + 0x40) + uVar1 * 0x40 ^ uVar1;
}



// FUNCTION 1437bf5a6 FUN_1437bf5a6 body=136 status=ok
// SIG undefined FUN_1437bf5a6(void)

void FUN_1437bf5a6(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = *(int *)(DAT_14cb0d2b0 + 0x1150);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(DAT_14cb0d2b0 + 0x1148);
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(lVar3 + lVar5) + 0x360);
      if ((lVar4 != 0) &&
         (((bVar1 = *(byte *)(lVar4 + 0x152), bVar1 == 1 ||
           ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) &&
          (lVar4 = FUN_14011c706(), lVar4 != 0)))) {
        FUN_147dd1e5e(lVar4,param_1);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar2 * 8 != lVar5);
  }
  return;
}



// FUNCTION 1437bf62e FUN_1437bf62e body=136 status=ok
// SIG undefined FUN_1437bf62e(void)

void FUN_1437bf62e(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = *(int *)(DAT_14cb0d2b0 + 0x1150);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(DAT_14cb0d2b0 + 0x1148);
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(lVar3 + lVar5) + 0x360);
      if ((lVar4 != 0) &&
         (((bVar1 = *(byte *)(lVar4 + 0x152), bVar1 == 1 ||
           ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) &&
          (lVar4 = FUN_14011c706(), lVar4 != 0)))) {
        FUN_147dd1c7e(lVar4,param_1);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar2 * 8 != lVar5);
  }
  return;
}



// FUNCTION 1437bf6d4 FUN_1437bf6d4 body=103 status=ok
// SIG undefined FUN_1437bf6d4(void)

void FUN_1437bf6d4(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)*param_2;
  cVar3 = (**(code **)(*plVar1 + 0x330))(plVar1);
  if (cVar3 != '\0') {
    lVar2 = *param_1;
    iVar4 = (**(code **)(*plVar1 + 0x2f8))(plVar1);
    lVar5 = (longlong)iVar4 * 0x10;
    iVar4 = *(int *)(lVar2 + 8 + lVar5);
    *(uint *)(lVar2 + 8 + lVar5) = iVar4 + 1U;
    if (*(uint *)(lVar2 + 0xc + lVar5) < iVar4 + 1U) {
      FUN_1405c1a44((longlong *)(lVar2 + lVar5),iVar4);
    }
    *(longlong **)(*(longlong *)(lVar2 + lVar5) + (longlong)iVar4 * 8) = plVar1;
  }
  return;
}



// FUNCTION 1437bf74c FUN_1437bf74c body=213 status=ok
// SIG undefined FUN_1437bf74c(void)

void FUN_1437bf74c(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x120) != *(int *)(lVar3 + 0x14c)) {
    lVar1 = *(longlong *)(param_2 + 0x18);
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar6 = (uint)lVar1 & 0xffff;
    lVar5 = lVar3 + 0x150;
    if (*(longlong *)(lVar3 + 0x158) != 0) {
      lVar5 = *(longlong *)(lVar3 + 0x158);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(lVar3 + 0x160) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        lVar5 = *(longlong *)(lVar3 + 0x118) + (longlong)iVar4 * 0x40;
        if (*(longlong *)(*(longlong *)(lVar3 + 0x118) + (longlong)iVar4 * 0x40) == lVar1)
        goto LAB_1437bf7e8;
        iVar4 = *(int *)(lVar5 + 0x38);
      } while (iVar4 != -1);
    }
  }
  lVar5 = 0;
LAB_1437bf7e8:
  lVar3 = FUN_147dcd800(param_2,lVar5 + 8,lVar5 + 0x18);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  *(longlong *)(param_2 + 0xc0) = lVar3;
  return;
}



// FUNCTION 1437bf822 FUN_1437bf822 body=29 status=ok
// SIG undefined FUN_1437bf822(void)

undefined8 FUN_1437bf822(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437bf854 FUN_1437bf854 body=85 status=ok
// SIG undefined FUN_1437bf854(void)

void FUN_1437bf854(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab2d4a0;
  return;
}



// FUNCTION 1437bf8aa FUN_1437bf8aa body=85 status=ok
// SIG undefined FUN_1437bf8aa(void)

void FUN_1437bf8aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab2d4a0;
  return;
}



// FUNCTION 1437bf900 FUN_1437bf900 body=118 status=ok
// SIG undefined FUN_1437bf900(void)

void FUN_1437bf900(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e001f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab2d4a0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001437bf967. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1437bf97e FUN_1437bf97e body=19 status=ok
// SIG undefined FUN_1437bf97e(void)

undefined1 FUN_1437bf97e(undefined8 param_1,undefined8 param_2)

{
  FUN_1437bf992(param_2);
  return 1;
}



// FUNCTION 1437bf992 FUN_1437bf992 body=735 status=ok
// SIG undefined FUN_1437bf992(void)

void FUN_1437bf992(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [12];
  undefined4 local_74;
  float local_70;
  undefined4 local_6c;
  undefined2 *local_68;
  undefined8 uStack_60;
  undefined8 *local_50;
  float *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = (undefined2 *)0x0;
  uStack_60 = 0;
  lVar3 = param_1[1];
  puVar4 = &DAT_149dfb77a;
  if ((longlong)(int)lVar3 != 0) {
    lVar8 = *param_1;
    iVar5 = 1;
    lVar7 = 0;
    do {
      if ((char)iVar5 == '\0') {
        FUN_1400020e8(&local_68,&DAT_149e001d8,1);
      }
      iVar2 = *(int *)(lVar8 + 8 + lVar7);
      iVar5 = 0;
      iVar6 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar6 = iVar5;
      }
      FUN_1400020e8(&local_68,*(undefined8 *)(lVar8 + lVar7),iVar6);
      lVar7 = lVar7 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar7);
    puVar4 = local_68;
    if ((int)uStack_60 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
  }
  local_6c = 0;
  local_70 = -1.0;
  FUN_141369f9a(puVar4,L"grid=",&local_6c);
  puVar4 = &DAT_149dfb77a;
  if ((int)uStack_60 != 0) {
    puVar4 = local_68;
  }
  FUN_14170b16c(puVar4,L"range=",&local_70);
  local_74 = 1;
  puVar4 = &DAT_149dfb77a;
  if ((int)uStack_60 != 0) {
    puVar4 = local_68;
  }
  FUN_141369f9a(puVar4,L"serverexec=",&local_74);
  if (DAT_14cb11e10 == '\0') {
    DAT_14cb11e10 = '\x01';
    local_50 = (undefined8 *)0x0;
    local_48 = (float *)((ulonglong)local_48 & 0xffffffff00000000);
    FUN_1446efa72(&local_50,0,2,0x10);
    local_48 = (float *)CONCAT44(local_48._4_4_,2);
    *local_50 = &PTR_LAB_14ab2d5b0;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_50[2] = lVar8;
    *local_50 = &PTR_FUN_14ab2d540;
    FUN_145ffded0(local_80,&local_50);
    if ((int)local_48 != 0) {
      if (local_50 == (undefined8 *)0x0) goto LAB_1437bfab0;
      (**(code **)*local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      local_48 = (float *)((ulonglong)local_48 & 0xffffffff00000000);
    }
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1437bfab0:
  iVar5 = *(int *)(DAT_14cb0d2b0 + 0x1150);
  if ((longlong)iVar5 != 0) {
    lVar3 = *(longlong *)(DAT_14cb0d2b0 + 0x1148);
    lVar8 = 0;
    do {
      lVar7 = *(longlong *)(*(longlong *)(lVar3 + lVar8) + 0x360);
      if ((lVar7 != 0) &&
         (((bVar1 = *(byte *)(lVar7 + 0x152), bVar1 == 1 ||
           ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) &&
          (lVar7 = FUN_14011c706(), lVar7 != 0)))) {
        if (local_70 < 0.0) {
          FUN_147dd61f2(local_6c);
        }
        else {
          local_50 = (undefined8 *)&local_6c;
          local_48 = &local_70;
          FUN_14172c3b4(&DAT_14cb11e18,local_80,&local_50,0);
        }
        break;
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar5 * 8 != lVar8);
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437bfc72 FUN_1437bfc72 body=29 status=ok
// SIG undefined FUN_1437bfc72(void)

undefined8 FUN_1437bfc72(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437bfca4 FUN_1437bfca4 body=85 status=ok
// SIG undefined FUN_1437bfca4(void)

void FUN_1437bfca4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab2d5b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab2d540;
  return;
}



// FUNCTION 1437bfcfa FUN_1437bfcfa body=85 status=ok
// SIG undefined FUN_1437bfcfa(void)

void FUN_1437bfcfa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab2d5b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab2d540;
  return;
}



// FUNCTION 1437bfd50 FUN_1437bfd50 body=118 status=ok
// SIG undefined FUN_1437bfd50(void)

void FUN_1437bfd50(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ab2d5b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab2d540;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001437bfdb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1437bfdf4 FUN_1437bfdf4 body=58 status=ok
// SIG undefined FUN_1437bfdf4(void)

undefined8 FUN_1437bfdf4(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  
  if ((param_3 != 0) &&
     ((bVar1 = *(byte *)(param_3 + 0x152), bVar1 == 1 ||
      ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))))) {
    FUN_145f98e42(&DAT_14cb11e18);
  }
  return 1;
}



// FUNCTION 1437bfe2e FUN_1437bfe2e body=167 status=ok
// SIG undefined FUN_1437bfe2e(void)

void FUN_1437bfe2e(undefined8 *param_1)

{
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined8 *local_28;
  code **local_20;
  code *local_18;
  undefined8 **local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_1[1];
  local_28 = &local_60;
  local_58 = param_1[2];
  local_50 = param_1[3];
  local_48 = param_1[4];
  local_40 = param_1[5];
  local_38 = param_1[6];
  local_20 = &local_30;
  local_30 = FUN_1437bfed6;
  local_10 = &local_20;
  local_18 = FUN_1437c05c8;
  FUN_144a7e626(*param_1);
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437bfed6 FUN_1437bfed6 body=385 status=ok
// SIG undefined FUN_1437bfed6(void)

void FUN_1437bfed6(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  double dVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  double local_70;
  undefined1 local_68;
  double local_60;
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar7 = *param_2;
  local_38 = lVar7;
  if (*(char *)*param_1 == '\x01') {
    lVar6 = (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x50))(lVar7 + 0x28);
    uVar1 = *(undefined8 *)(lVar6 + 0x28);
    lVar6 = (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x50))(lVar7 + 0x28);
    local_50 = *(undefined8 *)(lVar6 + 0x10);
    local_58[0] = 1;
    local_48 = 1;
    local_70 = *(double *)(param_1[1] + 0x10);
    dVar2 = *(double *)(param_1[1] + 0x18);
    local_60 = local_70 + dVar2;
    local_70 = local_70 - dVar2;
    local_78 = 1;
    local_68 = 1;
    local_40 = uVar1;
    cVar3 = FUN_147dd625c();
    if (cVar3 == '\0') goto LAB_1437c004e;
  }
  lVar6 = param_1[3];
  if (*(int *)(lVar7 + 0x50) == 0) {
    if (*(char *)(lVar6 + 0x30) == '\0') {
LAB_1437bff82:
      FUN_1456bc98a(param_1[4],local_58,&local_38,0);
      if (*(longlong *)param_1[5] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
      }
    }
  }
  else {
    plVar4 = (longlong *)(**(code **)(*(longlong *)(lVar7 + 0x28) + 0x38))(lVar7 + 0x28);
    if ((longlong)(int)plVar4[1] != 0) {
      plVar5 = (longlong *)*plVar4;
      plVar4 = plVar5 + (int)plVar4[1];
      do {
        if (*(int *)(lVar6 + 0x28) != 0) {
          lVar7 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar6 + 0x20) + lVar7) == *plVar5) {
              if (plVar5 == (longlong *)0x0) goto LAB_1437c004e;
              goto LAB_1437bff82;
            }
            lVar7 = lVar7 + 8;
          } while ((longlong)*(int *)(lVar6 + 0x28) << 3 != lVar7);
        }
        plVar5 = plVar5 + 1;
      } while (plVar5 != plVar4);
    }
  }
LAB_1437c004e:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437c0076 FUN_1437c0076 body=570 status=ok
// SIG undefined FUN_1437c0076(void)

void FUN_1437c0076(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  char *local_80;
  undefined8 local_78;
  code *local_70;
  undefined8 *local_68;
  char local_59;
  code **local_58;
  code *local_50;
  undefined8 **local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = *param_1;
  local_80 = &local_59;
  local_59 = '\0';
  local_b0 = param_1[1];
  local_68 = &local_b0;
  local_a8 = (undefined8 *)param_1[2];
  local_a0 = param_1[3];
  local_98 = param_1[4];
  local_90 = param_1[5];
  local_88 = param_1[6];
  local_58 = &local_70;
  local_70 = FUN_1437c02b2;
  local_48 = &local_58;
  local_50 = FUN_1437c05c8;
  FUN_144a7e626(local_78,param_2);
  if (local_59 != '\x01') goto LAB_1437c0285;
  plVar1 = (longlong *)param_1[7];
  uVar4 = FUN_1448eb174(param_2,0x18,0);
  iVar5 = FUN_1437be1de(plVar1,uVar4,param_2);
  if (iVar5 == -1) {
LAB_1437c0175:
    FUN_1437be248(plVar1,&local_b0);
    puVar11 = local_a8;
    local_a8[2] = param_2[2];
    uVar2 = param_2[1];
    *local_a8 = *param_2;
    local_a8[1] = uVar2;
    local_a8[3] = 0;
    local_a8[4] = 0;
    *(undefined4 *)(local_a8 + 5) = 0xffffffff;
    iVar5 = (int)local_b0;
    lVar13 = (longlong)(int)local_b0;
    cVar3 = FUN_1437be508(plVar1,uVar4,local_a8,&local_b0);
    if (cVar3 == '\0') {
      uVar6 = (int)plVar1[1] - *(int *)((longlong)plVar1 + 0x34);
      iVar9 = 1;
      if (3 < uVar6) {
        uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
        lVar8 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        iVar9 = 1 << ((byte)lVar8 & 0x1f);
      }
      if (((int)uVar6 < 1) || (iVar9 <= (int)plVar1[9])) {
        uVar4 = (int)plVar1[9] - 1U & uVar4;
        *(uint *)((longlong)puVar11 + 0x2c) = uVar4;
        plVar10 = (longlong *)plVar1[8];
        if ((longlong *)plVar1[8] == (longlong *)0x0) {
          plVar10 = plVar1 + 7;
        }
        *(undefined4 *)(puVar11 + 5) =
             *(undefined4 *)
              ((longlong)plVar10 + ((longlong)(int)plVar1[9] - 1U & (longlong)(int)uVar4) * 4);
        plVar10 = (longlong *)plVar1[8];
        if ((longlong *)plVar1[8] == (longlong *)0x0) {
          plVar10 = plVar1 + 7;
        }
        *(int *)((longlong)plVar10 + ((longlong)(int)plVar1[9] - 1U & (longlong)(int)uVar4) * 4) =
             iVar5;
      }
      else {
        *(int *)(plVar1 + 9) = iVar9;
        FUN_1437be5fc(plVar1);
      }
    }
    lVar13 = *plVar1 + lVar13 * 0x30;
  }
  else {
    if (*plVar1 + (longlong)iVar5 * 0x30 == 0) goto LAB_1437c0175;
    lVar13 = *plVar1 + (longlong)iVar5 * 0x30;
  }
  puVar11 = (undefined8 *)param_1[8];
  iVar5 = *(int *)(lVar13 + 0x20);
  *(uint *)(lVar13 + 0x20) = iVar5 + 1U;
  if (*(uint *)(lVar13 + 0x24) < iVar5 + 1U) {
    FUN_1437c045c((longlong *)(lVar13 + 0x18),iVar5);
  }
  puVar12 = (undefined8 *)((longlong)iVar5 * 0x48 + *(longlong *)(lVar13 + 0x18));
  for (lVar8 = 9; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
LAB_1437c0285:
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437c02b2 FUN_1437c02b2 body=422 status=ok
// SIG undefined FUN_1437c02b2(void)

void FUN_1437c02b2(undefined8 *param_1,longlong *param_2)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined1 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 local_80;
  double local_78;
  undefined1 local_70;
  double local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = *param_2;
  lVar4 = param_1[7];
  if (*(char *)*param_1 == '\x01') {
    lVar7 = (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x50))(lVar3 + 0x28);
    uVar8 = *(undefined8 *)(lVar7 + 0x28);
    lVar7 = (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x50))(lVar3 + 0x28);
    local_58 = *(undefined8 *)(lVar7 + 0x10);
    local_60 = 1;
    local_50 = 1;
    local_78 = *(double *)(param_1[1] + 0x10);
    dVar1 = *(double *)(param_1[1] + 0x18);
    local_68 = local_78 + dVar1;
    local_78 = local_78 - dVar1;
    local_80 = 1;
    local_70 = 1;
    local_48 = uVar8;
    cVar5 = FUN_147dd625c();
    if (cVar5 == '\0') goto LAB_1437c03ba;
  }
  if (*(int *)(lVar3 + 0x50) == 0) {
    *(undefined1 *)(lVar3 + 0x9c) = 2;
  }
  else {
    iVar2 = *(int *)(*(longlong *)(param_1[2] + 8) + 0x140);
    if (*(int *)(lVar3 + 0xa0) == iVar2) {
      cVar5 = *(char *)(lVar3 + 0x9c);
    }
    else {
      cVar5 = FUN_147dcc38e(param_1[2],lVar3 + 0x40);
      *(char *)(lVar3 + 0x9c) = cVar5;
      *(int *)(lVar3 + 0xa0) = iVar2;
    }
    if (cVar5 != '\x02') {
      if (cVar5 == '\x01') {
        uVar8 = param_1[3];
        uVar9 = param_1[1];
        local_88 = param_1[2];
        lVar7 = param_1[4];
        goto LAB_1437c036a;
      }
      goto LAB_1437c03ba;
    }
  }
  lVar7 = param_1[4];
  if (*(char *)(lVar7 + 0x38) == '\x01') {
    local_88 = param_1[2];
    FUN_144725224(param_1[5],lVar3,lVar7,param_1[1]);
    if (*(char *)(lVar4 + 0x90) == '\0') {
      uVar6 = *(undefined1 *)(lVar4 + 0x91);
    }
    else {
      uVar6 = 0;
    }
    *(undefined1 *)param_1[6] = uVar6;
  }
  else if (*(char *)(lVar7 + 0x38) == '\0') {
    uVar8 = param_1[3];
    uVar9 = param_1[1];
    local_88 = param_1[2];
LAB_1437c036a:
    FUN_144725224(uVar8,lVar3,lVar7,uVar9);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
  }
LAB_1437c03ba:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437c045c FUN_1437c045c body=363 status=ok
// SIG undefined FUN_1437c045c(void)

void FUN_1437c045c(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x48;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1437c04f2;
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
LAB_1437c04f2:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x48)) {
    uVar7 = uVar5 / 0x48 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x48,8);
  return;
}



// FUNCTION 1437c05c8 FUN_1437c05c8 body=121 status=ok
// SIG undefined FUN_1437c05c8(void)

void FUN_1437c05c8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = (longlong)(int)((longlong *)*param_2)[1];
  if (lVar2 != 0) {
    lVar1 = *(longlong *)*param_2;
    lVar3 = 0;
    do {
      local_38 = *(undefined8 *)(lVar1 + lVar3);
      (**(code **)*param_1)(((undefined8 *)*param_1)[1],&local_38);
      lVar3 = lVar3 + 8;
    } while (lVar2 * 8 != lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437c0642 FUN_1437c0642 body=477 status=ok
// SIG undefined FUN_1437c0642(void)

void FUN_1437c0642(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int *piVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 local_b0;
  char local_79;
  longlong *local_78;
  undefined1 *local_70;
  undefined8 *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar2 = param_1[2];
  local_50 = (longlong)*(int *)*param_1;
  local_60 = *param_2;
  uStack_5c = param_2[1];
  uStack_58 = param_2[2];
  uStack_54 = param_2[3];
  lVar9 = param_1[1];
  *(undefined4 *)(lVar9 + 8) = 0;
  if (*(int *)(lVar9 + 0xc) < 0) {
    FUN_140d870b2(lVar9,0);
  }
  local_68 = &local_b8;
  local_b0 = param_1[1];
  local_70 = &LAB_1437c0820;
  local_b8 = uVar2;
  FUN_144a7e626(uVar2,&local_60);
  lVar9 = (longlong)(int)((longlong *)param_1[1])[1];
  if (lVar9 != 0) {
    lVar3 = *(longlong *)param_1[1];
    lVar8 = 0;
    do {
      plVar4 = *(longlong **)(lVar3 + lVar8);
      local_79 = '\0';
      local_78 = plVar4;
      FUN_1456bc98a(param_1[3],&local_b8,&local_78,&local_79);
      if (local_79 == '\0') {
        (**(code **)(*(longlong *)plVar4[0x15] + 0x2d8))((longlong *)plVar4[0x15],&local_b8);
        (**(code **)(*plVar4 + 0x2d8))(plVar4,local_c8,*(undefined4 *)param_1[4]);
        if (*(int *)(param_1[7] + 8) != *(int *)(param_1[7] + 0x34)) {
          plVar1 = plVar4 + 5;
          lVar5 = (**(code **)(plVar4[5] + 0x38))(plVar1);
          if (0 < *(int *)(lVar5 + 8)) {
            (**(code **)(*plVar1 + 0x38))(plVar1);
            (**(code **)(*plVar1 + 0x38))(plVar1);
          }
        }
        if (((*(longlong *)param_1[8] != 0) && (DAT_14c761ed8 == '\x01')) &&
           (piVar6 = (int *)(**(code **)(*plVar4 + 0x300))(plVar4),
           ((piVar6[1] != 0 || *piVar6 != 0) || piVar6[2] != 0) || piVar6[3] != 0)) {
          uVar2 = *(undefined8 *)param_1[8];
          uVar7 = (**(code **)(*plVar4 + 0x300))(plVar4);
          FUN_147db3d60(uVar2,*(undefined8 *)param_1[5],uVar7);
        }
      }
      lVar8 = lVar8 + 8;
    } while (lVar9 * 8 != lVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437c0830 FUN_1437c0830 body=113 status=ok
// SIG undefined FUN_1437c0830(void)

void FUN_1437c0830(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  uStack_40 = param_2[1];
  uStack_30 = *(undefined4 *)(param_2 + 3);
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x1c);
  local_28 = *(undefined4 *)(param_2 + 4);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_20 = *(undefined4 *)(param_2 + 5);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_18 = *(undefined4 *)(param_2 + 6);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_10 = *(undefined4 *)(param_2 + 7);
  uStack_c = *(undefined4 *)((longlong)param_2 + 0x3c);
  local_38 = *(undefined8 *)param_1[1];
  FUN_147dced58(*(undefined8 *)param_1[3],&local_48,param_1[2],*param_1);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437c08a2 FUN_1437c08a2 body=1504 status=ok
// SIG undefined FUN_1437c08a2(void)

void FUN_1437c08a2(undefined8 *param_1,undefined4 *param_2)

{
  double dVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  int *piVar12;
  undefined8 uVar13;
  int iVar14;
  longlong *plVar15;
  longlong *plVar16;
  uint uVar17;
  longlong *plVar18;
  undefined1 auStack_1b8 [32];
  double *local_198;
  undefined8 local_190;
  longlong *local_180;
  double local_178;
  double local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 local_160;
  float local_15c;
  double local_158;
  undefined8 uStack_150;
  double local_140;
  double local_138;
  double local_130;
  double dStack_128;
  undefined1 *local_120;
  double *local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  longlong local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  dVar1 = (double)param_1[3];
  local_100 = (longlong)*(int *)*param_1;
  local_110 = *param_2;
  uStack_10c = param_2[1];
  uStack_108 = param_2[2];
  uStack_104 = param_2[3];
  FUN_1456beae2(local_100 * 0x88 + *(longlong *)(param_1[1] + 0x58),param_2,&local_f8,1);
  lVar10 = param_1[2];
  *(undefined4 *)(lVar10 + 8) = 0;
  if (*(int *)(lVar10 + 0xc) < 0) {
    FUN_140d870b2(lVar10,0);
  }
  local_118 = &local_130;
  dStack_128 = (double)param_1[2];
  local_120 = &LAB_1437c1008;
  local_130 = dVar1;
  FUN_144a7e626(dVar1,&local_110);
  iVar14 = (int)((longlong *)param_1[2])[1];
  if ((longlong)iVar14 != 0) {
    dVar1 = local_e8 - local_f8;
    dVar5 = (local_e0 - local_f0) / (double)iVar14;
    plVar18 = *(longlong **)param_1[2];
    local_180 = plVar18 + iVar14;
    dVar6 = 0.0;
    local_130 = dVar1;
    dStack_128 = dVar5;
    do {
      plVar2 = (longlong *)*plVar18;
      local_138 = local_f0 + dVar6;
      local_140 = local_f8 + 0.0;
      uVar3 = param_1[4];
      uVar13 = *(undefined8 *)param_1[7];
      (**(code **)(*plVar2 + 0x2d8))(plVar2,&local_168,*(undefined4 *)param_1[6]);
      local_158 = (double)CONCAT44(uStack_164,local_168);
      uStack_150 = (double)CONCAT44(*(undefined4 *)
                                     (&DAT_14ab1fd20 + (ulonglong)(*(int *)param_1[6] == 0) * 4),
                                    local_160);
      local_198 = &local_158;
      local_190 = uVar13;
      FUN_1437c0e84(uVar3,param_1[5],&local_140,&local_130);
      if (*(char *)(param_1[4] + 2) == '\x01') {
        if (*(int *)(param_1[8] + 8) != *(int *)(param_1[8] + 0x34)) {
          plVar11 = plVar2 + 5;
          lVar10 = (**(code **)(plVar2[5] + 0x38))(plVar11);
          if (0 < *(int *)(lVar10 + 8)) {
            local_158 = local_130;
            uStack_150 = dStack_128;
            lVar10 = (**(code **)(*plVar11 + 0x38))(plVar11);
            dVar7 = local_158 / (double)(*(int *)(lVar10 + 8) * 5);
            local_158 = dVar7;
            plVar11 = (longlong *)(**(code **)(*plVar11 + 0x38))(plVar11);
            if ((longlong)(int)plVar11[1] != 0) {
              plVar16 = (longlong *)*plVar11;
              plVar11 = plVar16 + (int)plVar11[1];
              dVar8 = 0.0;
              do {
                plVar4 = (longlong *)param_1[8];
                if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
                  lVar10 = *plVar16;
                  uVar9 = (uint)((ulonglong)lVar10 >> 0x10);
                  uVar17 = (uint)lVar10 & 0xffff;
                  plVar15 = plVar4 + 7;
                  if ((longlong *)plVar4[8] != (longlong *)0x0) {
                    plVar15 = (longlong *)plVar4[8];
                  }
                  iVar14 = *(int *)((longlong)plVar15 +
                                   (ulonglong)
                                   ((int)plVar4[9] - 1U &
                                   (int)((ulonglong)lVar10 >> 0x20) +
                                   ((uint)lVar10 << 0x10 | uVar17) +
                                   (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar17 >> 4)) * 4);
                  if (iVar14 != -1) {
                    do {
                      plVar15 = (longlong *)(*plVar4 + (longlong)iVar14 * 0x14);
                      if (*plVar15 == lVar10) goto LAB_1437c0bec;
                      iVar14 = *(int *)((longlong)plVar15 + 0xc);
                    } while (iVar14 != -1);
                  }
                }
                plVar15 = (longlong *)0x0;
LAB_1437c0bec:
                local_190 = *(undefined8 *)param_1[7];
                local_168 = (&DAT_14c758c60)[*(byte *)((longlong)plVar15 + 10)];
                uStack_164 = (&DAT_14c758c60)[*(byte *)((longlong)plVar15 + 9)];
                local_160 = (&DAT_14c758c60)[*(byte *)(plVar15 + 1)];
                local_15c = (float)*(byte *)((longlong)plVar15 + 0xb) * 0.003921569;
                local_170 = local_138 + 0.0;
                local_178 = local_140 + dVar8;
                local_198 = (double *)&local_168;
                FUN_1437c0e84(param_1[4],param_1[5],&local_178,&local_158);
                dVar8 = dVar8 + dVar7;
                plVar16 = plVar16 + 1;
              } while (plVar16 != plVar11);
            }
          }
        }
        if ((*(longlong *)param_1[9] != 0) && (DAT_14c761ed8 == '\x01')) {
          piVar12 = (int *)(**(code **)(*plVar2 + 0x300))(plVar2);
          if (((piVar12[1] != 0 || *piVar12 != 0) || piVar12[2] != 0) || piVar12[3] != 0) {
            uVar3 = *(undefined8 *)param_1[9];
            uVar13 = (**(code **)(*plVar2 + 0x300))(plVar2);
            lVar10 = FUN_147db3d60(uVar3,*(undefined8 *)param_1[10],uVar13);
            if (lVar10 != 0) {
              uStack_150 = dStack_128;
              local_158 = local_130 / 5.0;
              local_190 = *(undefined8 *)param_1[7];
              lVar10 = *(longlong *)(lVar10 + 0x20);
              local_168 = (&DAT_14c758c60)[*(byte *)(lVar10 + 0x3a)];
              uStack_164 = (&DAT_14c758c60)[*(byte *)(lVar10 + 0x39)];
              local_160 = (&DAT_14c758c60)[*(byte *)(lVar10 + 0x38)];
              local_15c = (float)*(byte *)(lVar10 + 0x3b) * 0.003921569;
              local_178 = (dVar1 - local_158) + local_140;
              local_170 = local_138 + 0.0;
              local_198 = (double *)&local_168;
              FUN_1437c0e84(param_1[4],param_1[5],&local_178,&local_158);
            }
          }
        }
      }
      dVar6 = dVar6 + dVar5;
      plVar18 = plVar18 + 1;
    } while (plVar18 != local_180);
    local_140 = local_e8 - local_f8;
    local_138 = local_e0 - local_f0;
    local_190 = *(undefined8 *)param_1[7];
    local_198 = (double *)&DAT_149e1e308;
    FUN_1437b343a(param_1[4],param_1[5]);
  }
  if ((local_d0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437c0e84 FUN_1437c0e84 body=387 status=ok
// SIG undefined FUN_1437c0e84(void)

void FUN_1437c0e84(undefined8 param_1,undefined8 param_2,double *param_3,double *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined1 auStack_108 [32];
  double *local_e8;
  double *local_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [23];
  undefined1 local_61;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_88[0] = 1;
  local_c8 = param_1;
  local_c0 = param_2;
  (*(code *)*param_6)(local_78,param_6[1]);
  local_90 = param_3[1] + 0.0;
  local_98 = *param_4 + *param_3;
  local_a8 = (double)CONCAT71(local_a8._1_7_,1);
  (*(code *)*param_6)(local_88,param_6[1],&local_98,&local_a8);
  local_a0 = param_3[1] + param_4[1];
  local_a8 = *param_3 + *param_4;
  local_b8 = (double)CONCAT71(local_b8._1_7_,1);
  (*(code *)*param_6)(&local_98,param_6[1],&local_a8,&local_b8);
  local_b0 = param_4[1] + param_3[1];
  local_b8 = *param_3 + 0.0;
  local_61 = 1;
  (*(code *)*param_6)(&local_a8,param_6[1],&local_b8);
  local_d8 = param_5;
  local_e8 = &local_98;
  local_e0 = &local_a8;
  FUN_147dc2098(local_c8,local_c0,local_78,local_88);
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437c1018 FUN_1437c1018 body=90 status=ok
// SIG undefined FUN_1437c1018(void)

void FUN_1437c1018(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  code *local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_1[3];
  local_10 = param_1[1];
  local_18 = FUN_1437c1074;
  FUN_147dcfaee(param_1[2],param_2,&local_18,*param_1);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437c1074 FUN_1437c1074 body=72 status=ok
// SIG undefined FUN_1437c1074(void)

undefined8 FUN_1437c1074(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_11 = 1;
  (**(code **)*param_2)(param_1,((undefined8 *)*param_2)[1]);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437c10be FUN_1437c10be body=29 status=ok
// SIG undefined FUN_1437c10be(void)

void FUN_1437c10be(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1412be5da(*param_1);
  *(undefined8 *)param_1[1] = uVar1;
  return;
}



// FUNCTION 1437c10dc FUN_1437c10dc body=55 status=ok
// SIG undefined FUN_1437c10dc(void)

void FUN_1437c10dc(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147dc3456(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = param_2;
  return;
}



// FUNCTION 1437c1114 FUN_1437c1114 body=209 status=ok
// SIG undefined FUN_1437c1114(void)

void FUN_1437c1114(undefined8 *param_1,double *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar8 = param_2[3];
  dVar3 = dVar8 + param_2[2];
  dVar4 = dVar8 + param_2[1];
  dVar6 = dVar8 + *param_2;
  dVar5 = param_2[2] - dVar8;
  dVar7 = param_2[1] - dVar8;
  dVar8 = *param_2 - dVar8;
  pdVar1 = (double *)*param_1;
  if (*(char *)(pdVar1 + 6) == '\0') {
    *pdVar1 = dVar8;
    pdVar1[1] = dVar7;
    pdVar1[2] = dVar5;
    pdVar1[3] = dVar6;
    pdVar1[4] = dVar4;
    pdVar1[5] = dVar3;
    *(undefined1 *)(pdVar1 + 6) = 1;
  }
  else {
    dVar2 = *pdVar1;
    if (dVar8 <= *pdVar1) {
      dVar2 = dVar8;
    }
    *pdVar1 = dVar2;
    dVar8 = pdVar1[1];
    if (dVar7 <= pdVar1[1]) {
      dVar8 = dVar7;
    }
    pdVar1[1] = dVar8;
    dVar8 = pdVar1[2];
    if (dVar5 <= pdVar1[2]) {
      dVar8 = dVar5;
    }
    pdVar1[2] = dVar8;
    dVar8 = pdVar1[3];
    if (pdVar1[3] <= dVar6) {
      dVar8 = dVar6;
    }
    pdVar1[3] = dVar8;
    dVar8 = pdVar1[4];
    if (pdVar1[4] <= dVar4) {
      dVar8 = dVar4;
    }
    pdVar1[4] = dVar8;
    dVar8 = pdVar1[5];
    if (pdVar1[5] <= dVar3) {
      dVar8 = dVar3;
    }
    pdVar1[5] = dVar8;
  }
  return;
}



// FUNCTION 1437c11e6 FUN_1437c11e6 body=141 status=ok
// SIG undefined FUN_1437c11e6(void)

void FUN_1437c11e6(double *param_1,undefined8 *param_2,double *param_3,char *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float *pfVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  
  dVar6 = param_3[1];
  if (*param_4 == '\x01') {
    fVar5 = (float)dVar6;
    pfVar4 = (float *)*param_2;
    dVar6 = (double)(pfVar4[1] * (float)*param_3 + pfVar4[3] * fVar5 + pfVar4[5]);
    dVar7 = (double)((float)*param_3 * *pfVar4 + fVar5 * pfVar4[2] + pfVar4[4]);
  }
  else {
    dVar7 = *param_3;
  }
  dVar1 = ((double *)param_2[2])[1];
  dVar2 = ((double *)param_2[1])[1];
  dVar3 = ((double *)param_2[3])[1];
  *param_1 = (dVar7 - *(double *)param_2[2]) * *(double *)param_2[1] + *(double *)param_2[3];
  param_1[1] = (dVar6 - dVar1) * dVar2 + dVar3;
  return;
}



// FUNCTION 1437c1274 FUN_1437c1274 body=210 status=ok
// SIG undefined FUN_1437c1274(void)

ulonglong FUN_1437c1274(undefined8 *param_1,undefined8 param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400021e4(param_2,&local_28);
  iVar4 = (int)((longlong *)param_1[1])[1];
  if (local_20 == iVar4) {
    bVar7 = true;
    if (1 < local_20) {
      lVar5 = 0;
      while( true ) {
        uVar1 = *(ushort *)(local_28 + lVar5);
        uVar3 = (uint)uVar1;
        uVar2 = *(ushort *)(*(longlong *)param_1[1] + lVar5);
        uVar6 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1437c12d7;
          }
          iVar4 = uVar3 - uVar6;
          goto LAB_1437c1309;
        }
        if (uVar1 == 0) break;
LAB_1437c12d7:
        lVar5 = lVar5 + 2;
      }
      iVar4 = 0;
LAB_1437c1309:
      bVar7 = iVar4 == 0;
    }
  }
  else {
    bVar7 = iVar4 + local_20 == 1;
  }
  *(bool *)*param_1 = bVar7;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)*param_1 >> 8),*(undefined1 *)*param_1) ^ 1;
}



// FUNCTION 1437c1348 FUN_1437c1348 body=168 status=ok
// SIG undefined FUN_1437c1348(void)

void FUN_1437c1348(longlong *param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  
  if (*(char *)(param_2 + 0x11) == '\x01') {
    plVar2 = (longlong *)*param_1;
    lVar5 = (**(code **)(*plVar2 + 0x180))(plVar2);
    bVar1 = *(byte *)(lVar5 + 0x152);
    if ((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) {
      iVar4 = FUN_14490d72a(lVar5);
      if (iVar4 == 2) {
        if ((*(uint *)(plVar2 + 1) & 0x10) == 0) {
          lVar5 = plVar2[4];
        }
        else {
          lVar5 = 0;
        }
        cVar3 = FUN_1400900b4(lVar5);
        if (cVar3 == '\0') {
          return;
        }
      }
      else if (iVar4 == 1) {
        return;
      }
    }
  }
  cVar3 = FUN_147dc0de4(*param_2);
  if (cVar3 != '\0') {
    plVar2 = (longlong *)param_1[1];
    iVar4 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar4 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar4 + 1U) {
      FUN_147dd7c40(plVar2,iVar4);
    }
    *(undefined8 **)(*plVar2 + (longlong)iVar4 * 8) = param_2;
  }
  return;
}



// FUNCTION 1437c13f0 FUN_1437c13f0 body=75 status=ok
// SIG undefined FUN_1437c13f0(void)

undefined8 FUN_1437c13f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  FUN_1456bc98a(*param_1,local_14,&local_10,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437c143c FUN_1437c143c body=109 status=ok
// SIG undefined FUN_1437c143c(void)

undefined8 FUN_1437c143c(longlong *param_1,undefined8 *param_2,char *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  if (*param_3 == '\x01') {
    uVar1 = *(undefined8 *)(*param_1 + 0x90);
  }
  else {
    if (*param_3 != '\0') goto LAB_1437c148c;
    uVar1 = *(undefined8 *)(*param_1 + 0x98);
  }
  FUN_1456bc98a(uVar1,local_14,&local_10,0);
LAB_1437c148c:
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437c14aa FUN_1437c14aa body=22 status=ok
// SIG undefined FUN_1437c14aa(void)

undefined1 FUN_1437c14aa(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1437b88ee(*param_1,*param_2);
  return 1;
}



// FUNCTION 1437c14dc FUN_1437c14dc body=29 status=ok
// SIG undefined FUN_1437c14dc(void)

void FUN_1437c14dc(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1437c14fa FUN_1437c14fa body=71 status=ok
// SIG undefined FUN_1437c14fa(void)

undefined8 * FUN_1437c14fa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ab2d620;
  if (*(char *)(param_1 + 0x55) == '\x01') {
    FUN_1414a4ff0(param_1 + 0x17);
    *(undefined1 *)(param_1 + 0x55) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437c1568 FUN_1437c1568 body=29 status=ok
// SIG undefined FUN_1437c1568(void)

undefined8 FUN_1437c1568(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437c1586 FUN_1437c1586 body=363 status=ok
// SIG undefined FUN_1437c1586(void)

ulonglong FUN_1437c1586(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 unaff_RSI;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  char cVar11;
  
  param_2 = (longlong *)*param_2;
  bVar3 = (**(code **)(*param_2 + 0x2d0))(param_2);
  bVar4 = *(byte *)(param_1 + 0x108);
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (bVar3 != bVar4) {
    if ((*(char *)(param_1 + 0x10a) != '\0') ||
       (cVar11 = *(char *)((longlong)param_2 + 0x59), cVar11 == '\0')) {
      if ((int)param_2[10] == 0) {
        *(undefined1 *)((longlong)param_2 + 0x9c) = 2;
        cVar11 = '\x02';
      }
      else {
        iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x118) + 8) + 0x140);
        if ((int)param_2[0x14] == iVar1) {
          cVar11 = *(char *)((longlong)param_2 + 0x9c);
        }
        else {
          cVar11 = FUN_147dcc38e(*(longlong *)(param_1 + 0x118),param_2 + 8);
          *(char *)((longlong)param_2 + 0x9c) = cVar11;
          *(int *)(param_2 + 0x14) = iVar1;
        }
      }
      if ((cVar11 == '\0' && bVar3 == 0) || (cVar11 == '\x01' && bVar3 == 1)) goto LAB_1437c16e0;
      cVar11 = cVar11 == '\x02' && bVar3 == 2;
      bVar4 = *(byte *)(param_1 + 0x108);
    }
    if ((cVar11 == '\0') && (bVar4 < bVar3)) {
      plVar6 = (longlong *)(**(code **)(param_2[5] + 0x38))(param_2 + 5);
      if ((longlong)(int)plVar6[1] != 0) {
        plVar10 = (longlong *)*plVar6;
        plVar6 = plVar10 + (int)plVar6[1];
        do {
          if ((longlong)*(int *)(param_1 + 0x28) != 0) {
            lVar9 = 0;
            do {
              if (*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar9) == *plVar10)
              goto LAB_1437c16b5;
              lVar9 = lVar9 + 8;
            } while ((longlong)*(int *)(param_1 + 0x28) * 8 != lVar9);
          }
          uVar2 = *(undefined8 *)(param_1 + 0x110);
          uVar7 = FUN_147db4664(uVar2,plVar10);
          cVar5 = FUN_14379840e(uVar2,uVar7);
          if (cVar5 != '\0') goto LAB_1437c16e0;
LAB_1437c16b5:
          plVar10 = plVar10 + 1;
        } while (plVar10 != plVar6);
      }
    }
    if ((cVar11 == '\0') &&
       ((*(char *)(param_1 + 0x109) != '\0' || (bVar3 < *(byte *)(param_1 + 0x108))))) {
      **(undefined1 **)(param_1 + 0x120) = 0;
      uVar8 = 0;
    }
  }
LAB_1437c16e0:
  return uVar8 & 0xffffffff;
}



// FUNCTION 1437c16f2 FUN_1437c16f2 body=65 status=ok
// SIG undefined FUN_1437c16f2(void)

void FUN_1437c16f2(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [44];
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_144a13f80(*param_1,local_c,param_2,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437c1734 FUN_1437c1734 body=29 status=ok
// SIG undefined FUN_1437c1734(void)

undefined8 FUN_1437c1734(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437c1766 FUN_1437c1766 body=85 status=ok
// SIG undefined FUN_1437c1766(void)

void FUN_1437c1766(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab2d660;
  return;
}



// FUNCTION 1437c17bc FUN_1437c17bc body=85 status=ok
// SIG undefined FUN_1437c17bc(void)

void FUN_1437c17bc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab2d660;
  return;
}



// FUNCTION 1437c1812 FUN_1437c1812 body=118 status=ok
// SIG undefined FUN_1437c1812(void)

void FUN_1437c1812(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e001f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab2d660;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001437c1879. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1437c1888 FUN_1437c1888 body=48 status=ok
// SIG undefined FUN_1437c1888(void)

void FUN_1437c1888(undefined8 param_1,longlong *param_2)

{
  wchar_t *_Str;
  
  if ((int)param_2[1] == 1) {
    if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_2;
    }
    DAT_14c761f20 = _wtoi(_Str);
  }
  return;
}



// FUNCTION 1437c18b8 FUN_1437c18b8 body=50 status=ok
// SIG undefined FUN_1437c18b8(void)

undefined8 FUN_1437c18b8(undefined8 param_1,longlong *param_2)

{
  wchar_t *_Str;
  
  if ((int)param_2[1] == 1) {
    if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_2;
    }
    DAT_14c761f20 = _wtoi(_Str);
  }
  return 1;
}



// FUNCTION 1437c18ea FUN_1437c18ea body=29 status=ok
// SIG undefined FUN_1437c18ea(void)

undefined8 FUN_1437c18ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437c191c FUN_1437c191c body=85 status=ok
// SIG undefined FUN_1437c191c(void)

void FUN_1437c191c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab2d6d0;
  return;
}



// FUNCTION 1437c1972 FUN_1437c1972 body=85 status=ok
// SIG undefined FUN_1437c1972(void)

void FUN_1437c1972(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab2d6d0;
  return;
}



// FUNCTION 1437c19c8 FUN_1437c19c8 body=118 status=ok
// SIG undefined FUN_1437c19c8(void)

void FUN_1437c19c8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab2d6d0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001437c1a2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1437c1a68 FUN_1437c1a68 body=29 status=ok
// SIG undefined FUN_1437c1a68(void)

undefined8 FUN_1437c1a68(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437c1a9a FUN_1437c1a9a body=85 status=ok
// SIG undefined FUN_1437c1a9a(void)

void FUN_1437c1a9a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab2d740;
  return;
}



// FUNCTION 1437c1af0 FUN_1437c1af0 body=85 status=ok
// SIG undefined FUN_1437c1af0(void)

void FUN_1437c1af0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab2d740;
  return;
}



// FUNCTION 1437c1b46 FUN_1437c1b46 body=118 status=ok
// SIG undefined FUN_1437c1b46(void)

void FUN_1437c1b46(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab2d740;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001437c1bad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1437c1be6 FUN_1437c1be6 body=29 status=ok
// SIG undefined FUN_1437c1be6(void)

undefined8 FUN_1437c1be6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437c1c18 FUN_1437c1c18 body=85 status=ok
// SIG undefined FUN_1437c1c18(void)

void FUN_1437c1c18(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab2d7b0;
  return;
}



// FUNCTION 1437c1c6e FUN_1437c1c6e body=85 status=ok
// SIG undefined FUN_1437c1c6e(void)

void FUN_1437c1c6e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab2d7b0;
  return;
}



// FUNCTION 1437c1cc4 FUN_1437c1cc4 body=118 status=ok
// SIG undefined FUN_1437c1cc4(void)

void FUN_1437c1cc4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab2d7b0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001437c1d2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1437c1d64 FUN_1437c1d64 body=29 status=ok
// SIG undefined FUN_1437c1d64(void)

undefined8 FUN_1437c1d64(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437c1d96 FUN_1437c1d96 body=85 status=ok
// SIG undefined FUN_1437c1d96(void)

void FUN_1437c1d96(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab2d820;
  return;
}



// FUNCTION 1437c1dec FUN_1437c1dec body=85 status=ok
// SIG undefined FUN_1437c1dec(void)

void FUN_1437c1dec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab2d820;
  return;
}



// FUNCTION 1437c1e42 FUN_1437c1e42 body=118 status=ok
// SIG undefined FUN_1437c1e42(void)

void FUN_1437c1e42(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab2d820;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001437c1ea9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1437c1ee2 FUN_1437c1ee2 body=29 status=ok
// SIG undefined FUN_1437c1ee2(void)

undefined8 FUN_1437c1ee2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437c1f14 FUN_1437c1f14 body=85 status=ok
// SIG undefined FUN_1437c1f14(void)

void FUN_1437c1f14(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab2d890;
  return;
}



// FUNCTION 1437c1f6a FUN_1437c1f6a body=85 status=ok
// SIG undefined FUN_1437c1f6a(void)

void FUN_1437c1f6a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab2d890;
  return;
}



// FUNCTION 1437c1fc0 FUN_1437c1fc0 body=118 status=ok
// SIG undefined FUN_1437c1fc0(void)

void FUN_1437c1fc0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab2d890;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001437c2027. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1437c2060 FUN_1437c2060 body=29 status=ok
// SIG undefined FUN_1437c2060(void)

undefined8 FUN_1437c2060(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437c2092 FUN_1437c2092 body=85 status=ok
// SIG undefined FUN_1437c2092(void)

void FUN_1437c2092(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab2d900;
  return;
}



// FUNCTION 1437c20e8 FUN_1437c20e8 body=85 status=ok
// SIG undefined FUN_1437c20e8(void)

void FUN_1437c20e8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab2d900;
  return;
}



// FUNCTION 1437c213e FUN_1437c213e body=118 status=ok
// SIG undefined FUN_1437c213e(void)

void FUN_1437c213e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab2d900;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001437c21a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1437c21de FUN_1437c21de body=29 status=ok
// SIG undefined FUN_1437c21de(void)

undefined8 FUN_1437c21de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437c2210 FUN_1437c2210 body=85 status=ok
// SIG undefined FUN_1437c2210(void)

void FUN_1437c2210(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab2d970;
  return;
}



// FUNCTION 1437c2266 FUN_1437c2266 body=85 status=ok
// SIG undefined FUN_1437c2266(void)

void FUN_1437c2266(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab2d970;
  return;
}



// FUNCTION 1437c22bc FUN_1437c22bc body=118 status=ok
// SIG undefined FUN_1437c22bc(void)

void FUN_1437c22bc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab2d970;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001437c2323. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1437c235c FUN_1437c235c body=29 status=ok
// SIG undefined FUN_1437c235c(void)

undefined8 FUN_1437c235c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437c238e FUN_1437c238e body=85 status=ok
// SIG undefined FUN_1437c238e(void)

void FUN_1437c238e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab2d9e0;
  return;
}



// FUNCTION 1437c23e4 FUN_1437c23e4 body=85 status=ok
// SIG undefined FUN_1437c23e4(void)

void FUN_1437c23e4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab2d9e0;
  return;
}



// FUNCTION 1437c243a FUN_1437c243a body=118 status=ok
// SIG undefined FUN_1437c243a(void)

void FUN_1437c243a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab2d9e0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001437c24a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1437c25c6 FUN_1437c25c6 body=116 status=ok
// SIG undefined FUN_1437c25c6(void)

void FUN_1437c25c6(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x58) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x58) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x58 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1437c263a FUN_1437c263a body=160 status=ok
// SIG undefined FUN_1437c263a(void)

void FUN_1437c263a(undefined8 *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = *param_2;
  lVar4 = *(longlong *)*param_1;
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_1[1] + 0x48) + (longlong)iVar1 * 8);
  }
  lVar5 = (longlong)iVar1 * 0xd8;
  lVar2 = *(longlong *)(param_1[1] + 0x230);
  *(bool *)(lVar2 + 2 + lVar5) = *(int *)param_1[2] == 1;
  *(bool *)(lVar2 + lVar5) = *(int *)param_1[2] + -1 == iVar1;
  *(bool *)(lVar2 + 1 + lVar5) = *(int *)param_1[2] + -1 == iVar1;
  lVar2 = lVar2 + lVar5;
  cVar3 = (**(code **)(**(longlong **)(lVar4 + 0xe0) + 0x2b8))(*(longlong **)(lVar4 + 0xe0),lVar2);
  if (cVar3 != '\0') {
    LOCK();
    *(int *)param_1[3] = *(int *)param_1[3] + *(int *)(lVar2 + 0xb0);
    UNLOCK();
    LOCK();
    *(int *)param_1[4] = *(int *)param_1[4] + *(int *)(lVar2 + 0xc0);
    UNLOCK();
  }
  return;
}



// FUNCTION 1437c26f1 FUN_1437c26f1 body=5460 status=ok
// SIG undefined FUN_1437c26f1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437c26f1(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined **ppuStack_80;
  undefined8 local_78;
  char *local_68;
  int iStack_60;
  uint uStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab20220,1,0);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab209a0,1,0);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab214f0,1,0);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab21c30,1,0);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab223f0,1,0);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb11b38,L"wp.Runtime.UseReplayStreamingSources",&DAT_14c761edc,
                L"Set to 1 to use the recorded streaming sources when playing replay.");
  atexit(FUN_1437b145e);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb11b48,L"wp.Runtime.RecordReplayStreamingSources",&DAT_14c761ee0,
                L"Set to 1 to record streaming sources when recording replay.");
  atexit(FUN_1437b14a3);
  local_78 = 1;
  ppuStack_80 = &PTR_FUN_14ab23180;
  local_88 = 3;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab23220,1,&PTR_FUN_14ab231a0);
  FUN_1446f470e(&DAT_14cb11bd0,L"GbxDormant",1);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab236a0,1,0);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cb11bf8,
                L"wp.Runtime.RuntimeSpatialHashCellToSourceAngleContributionToCellImportance",
                &DAT_14c761ee4,
                L"Value between 0 and 1 that modulates the contribution of the angle between streaming source-to-cell vector and source-forward vector to the cell importance. The closest to 0, the less the angle will contribute to the cell importance."
               );
  atexit(FUN_1437b174c);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb11c08,L"wp.Runtime.RuntimeSpatialHashSortUsingCellExtent",&DAT_14c761ee8,
                L"Set to 1 to use cell extent instead of cell grid level when sorting cells by importance."
               );
  atexit(FUN_1437b1791);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb11c18,L"wp.Runtime.RuntimeSpatialHashSortUsingCellPriority",&DAT_14c761ee9,
                L"Set to 1 to use cell priority before distance to/angle from source as part of the sorting criterias when sorting cells by importance."
               );
  atexit(FUN_1437b17d6);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab23ee0,1,0);
  FUN_1446f470e(&DAT_14cb11c40,L"AutoInstancingActor",1);
  local_78 = 1;
  ppuStack_80 = &PTR_FUN_14ab24bb0;
  local_88 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab24c00,2,&PTR_FUN_14ab24bd0);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cb11ca8,L"wp.Runtime.BlockOnSlowStreamingRatio",&DAT_14c761eec,
                L"Ratio of DistanceToCell / LoadingRange to use to determine if World Partition streaming needs to block"
               );
  atexit(FUN_1437b1852);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cb11cb8,L"wp.Runtime.BlockOnSlowStreamingWarningFactor",&DAT_14c761ef0,
                L"Factor of wp.Runtime.BlockOnSlowStreamingRatio we want to start notifying the user"
               );
  atexit(FUN_1437b1897);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab25420,1,0);
  local_78 = 1;
  ppuStack_80 = &PTR_FUN_14ab270b0;
  local_88 = 5;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab271a0,3,&PTR_FUN_14ab270d0);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb11dc8,L"wp.Runtime.ShowRuntimeSpatialHashGridLevel",&DAT_14cb11dd8,
                L"Used to choose which grid level to display when showing world partition runtime hash."
               );
  atexit(FUN_1437b2ada);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb11de0,L"wp.Runtime.ShowRuntimeSpatialHashGridLevelCount",&DAT_14c761ef4,
                L"Used to choose how many grid levels to display when showing world partition runtime hash."
               );
  atexit(FUN_1437b2b1f);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb11df0,L"wp.Runtime.ForceRuntimeSpatialHashZCulling",&DAT_14c761ef8,
                L"Used to force the behavior of the runtime hash cells Z culling. Set to 0 to force off, to 1 to force on and any other value to respect the runtime hash setting."
               );
  atexit(FUN_1437b2b64);
  FUN_140056680(&DAT_14cb11e00,L"wp.Runtime.OverrideRuntimeSpatialHashLoadingRange");
  atexit((_func_5014 *)&LAB_1437b2ba9);
  _DAT_14cb11e38 = 0;
  _DAT_14cb11e40 = 0;
  DAT_14cb11e18 = 0;
  _DAT_14cb11e20 = 0;
  _DAT_14cb11e44 = 0xffffffff00000080;
  DAT_14cb11e4c = 0;
  DAT_14cb11e58 = 0;
  DAT_14cb11e60 = 0;
  atexit(FUN_1437b2bba);
  local_68 = (char *)0x0;
  iStack_60 = 0;
  FUN_1446efa72(&local_68,0,2,0x10);
  iStack_60 = 2;
  *(undefined ***)local_68 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_68 + 0x10) = lVar4;
  *(undefined ***)local_68 = &PTR_FUN_14ab2d4a0;
  puVar5 = DAT_14cb11e00;
  if (DAT_14cb11e08 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c7246(&DAT_14cb11e68,puVar5,
                L"Sets runtime loading range. Args -grid=[index] -range=[override_loading_range]",
                &local_68);
  if (iStack_60 == 0) {
LAB_1437c2c1c:
    if (local_68 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_68 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_68)(local_68,0);
    FUN_1446efa72(&local_68,0,0,0x10);
    iStack_60 = 0;
    goto LAB_1437c2c1c;
  }
  atexit(FUN_1437b2be9);
  FUN_1400b22c2(&local_68,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_68,&DAT_14cb11e78);
  if (cVar2 == '\0') {
    _DAT_14cb11e78 = 0;
    uRam000000014cb11e80 = 0;
  }
  if (local_68 != (char *)0x0) {
    FUN_1400020a8();
  }
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14ab277b0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab28470,1,&PTR_FUN_14ab283f0);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb11f00,L"wp.Runtime.BlockOnSlowStreaming",&DAT_14c761efc,
                L"Set if streaming needs to block when to slow to catchup.");
  atexit(FUN_1437b5eaf);
  DAT_14cb11f10 = 0;
  _DAT_14cb11f18 = 0;
  atexit((_func_5014 *)&LAB_1437b5ef4);
  local_88._0_4_ = 4;
  FUN_141707242(&DAT_14cb11f20,L"wp.Runtime.ServerDisallowStreamingOutDataLayers",&DAT_14cb11f10,
                L"Comma separated list of data layer names that aren\'t allowed to be unloaded or deactivated on the server"
               );
  atexit(FUN_1437b5f05);
  local_88._0_4_ = 0;
  FUN_14153156c(&DAT_14cb11f30,L"wp.Runtime.UpdateStreaming.EnableOptimization",&DAT_14c761f00,
                L"Set to 1 to enable an optimization that skips world partition streaming update\nif nothing relevant changed since last update."
               );
  atexit(FUN_1437b5f4a);
  local_88._0_4_ = 0;
  FUN_141471170(&DAT_14cb11f48,L"wp.Runtime.UpdateStreaming.ForceUpdateFrameCount",&DAT_14cb11f40,
                L"Frequency (in frames) at which world partition streaming update will be executed regardless if no changes are detected."
               );
  atexit(FUN_1437b5f8f);
  local_88._0_4_ = 0;
  FUN_141471170(&DAT_14cb11f58,L"wp.Runtime.GbxMakeRemoteClientCellsDormant",&DAT_14cb11bdc,
                L"Server will locally hide Cells requested by a remote client connection.");
  atexit(FUN_1437b5fd4);
  local_88._0_4_ = 0;
  FUN_14078dbce(&DAT_14cb11f68,L"wp.Runtime.GbxMaxProcessedActors",&DAT_14cb11bd8,
                L"Maximum number of actors processed by UWorldPartitionRuntimeCell::GbxUpdateDormancyActors() each frame. Depends on wp.Runtime.GbxMakeRemoteClientCellsDormant."
               );
  atexit(FUN_1437b6019);
  local_88._0_4_ = 0;
  FUN_14153156c(&DAT_14cb11f88,L"wp.Runtime.UpdateStreaming.EnableAsyncUpdate",&DAT_14cb11f80,
                L"Set to enable asynchronous World Partition UpdateStreamingState.");
  atexit(FUN_1437b605e);
  ppuStack_80 = (undefined **)((ulonglong)ppuStack_80 & 0xffffffff00000000);
  local_88 = CONCAT44(local_88._4_4_,0x200);
  FUN_1412c7f16(&DAT_14cb11f98,L"wp.Runtime.TaskPriorities.AsyncUpdateStreamingStateTask",
                L"Task and thread priority for world partition asynchronous UpdateStreamingState task."
                ,0x800);
  atexit(FUN_1437b60a3);
  local_78 = 3;
  ppuStack_80 = &PTR_FUN_14ab29480;
  local_88 = 2;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14ab294e0);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb12050,L"wp.Runtime.UpdateStreaming.LocationQuantization",&DAT_14c761f04,
                L"Distance (in Unreal units) used to quantize the streaming sources location to determine if a world partition streaming update is necessary."
               );
  atexit(FUN_1437b94c3);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb12060,L"wp.Runtime.UpdateStreaming.RotationQuantization",&DAT_14c761f08,
                L"Angle (in degrees) used to quantize the streaming sources rotation to determine if a world partition streaming update is necessary."
               );
  atexit(FUN_1437b9508);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab2a140,1,0);
  local_68 = "WorldPartitionRuntimeHash";
  iStack_60 = 0x19;
  uStack_5c = uStack_5c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_68,1);
  _DAT_14cb12098 = (ulonglong)uVar3;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb120a0,L"wp.Runtime.ServerStreamingSourceMinimumExtraRadius",&DAT_14c761f0c,
                L"Minimum value added to the radius of the streaming sources used by the server (in Unreal unit)."
               );
  atexit(FUN_1437b954d);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb120b0,L"wp.Runtime.ServerStreamingSourceMinimumExtraAngle",&DAT_14c761f10,
                L"Minimum value added to the angle of the streaming source shape sector used by the server (in degree)."
               );
  atexit(FUN_1437b9592);
  local_68 = (char *)0x0;
  iStack_60 = 0;
  FUN_1446efa72(&local_68,0,2,0x10);
  iStack_60 = 2;
  *(undefined ***)local_68 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_68 + 0x10) = lVar4;
  *(undefined ***)local_68 = &PTR_FUN_14ab2d660;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c7246(&DAT_14cb120c0,L"wp.Runtime.DrawWorldPartitionIndex",
                L"Sets the index of the wanted partitioned world to display debug draw.\nSets < 0 to display debug draw all registered partitioned worlds.\n"
                ,&local_68);
  if (iStack_60 == 0) {
LAB_1437c307f:
    if (local_68 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_68 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_68)(local_68,0);
    FUN_1446efa72(&local_68,0,0,0x10);
    iStack_60 = 0;
    goto LAB_1437c307f;
  }
  atexit(FUN_1437b95d7);
  local_68 = (char *)0x0;
  iStack_60 = 0;
  FUN_1446efa72(&local_68,0,2,0x10);
  iStack_60 = 2;
  *(undefined ***)local_68 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_68 + 0x10) = lVar4;
  *(undefined ***)local_68 = &PTR_FUN_14ab2d6d0;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14152bcb8(&DAT_14cb120d0,L"wp.Runtime.ToggleDrawRuntimeHash3D",
                L"Toggles 3D debug display of world partition runtime hash.",&local_68);
  if (iStack_60 == 0) {
LAB_1437c3160:
    if (local_68 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_68 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_68)(local_68,0);
    FUN_1446efa72(&local_68,0,0,0x10);
    iStack_60 = 0;
    goto LAB_1437c3160;
  }
  atexit(FUN_1437b961c);
  local_68 = (char *)0x0;
  iStack_60 = 0;
  FUN_1446efa72(&local_68,0,2,0x10);
  iStack_60 = 2;
  *(undefined ***)local_68 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_68 + 0x10) = lVar4;
  *(undefined ***)local_68 = &PTR_FUN_14ab2d740;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14152bcb8(&DAT_14cb120e0,L"wp.Runtime.ToggleDrawRuntimeHash2D",
                L"Toggles 2D debug display of world partition runtime hash.",&local_68);
  if (iStack_60 == 0) {
LAB_1437c323a:
    if (local_68 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_68 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_68)(local_68,0);
    FUN_1446efa72(&local_68,0,0,0x10);
    iStack_60 = 0;
    goto LAB_1437c323a;
  }
  atexit(FUN_1437b9661);
  local_68 = (char *)0x0;
  iStack_60 = 0;
  FUN_1446efa72(&local_68,0,2,0x10);
  iStack_60 = 2;
  *(undefined ***)local_68 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_68 + 0x10) = lVar4;
  *(undefined ***)local_68 = &PTR_FUN_14ab2d7b0;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14152bcb8(&DAT_14cb120f0,L"wp.Runtime.ToggleDrawStreamingSources",
                L"Toggles debug display of world partition streaming sources.",&local_68);
  if (iStack_60 == 0) {
LAB_1437c3314:
    if (local_68 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_68 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_68)(local_68,0);
    FUN_1446efa72(&local_68,0,0,0x10);
    iStack_60 = 0;
    goto LAB_1437c3314;
  }
  atexit(FUN_1437b96a6);
  local_68 = (char *)0x0;
  iStack_60 = 0;
  FUN_1446efa72(&local_68,0,2,0x10);
  iStack_60 = 2;
  *(undefined ***)local_68 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_68 + 0x10) = lVar4;
  *(undefined ***)local_68 = &PTR_FUN_14ab2d820;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14152bcb8(&DAT_14cb12100,L"wp.Runtime.ToggleDrawStreamingPerfs",
                L"Toggles debug display of world partition streaming perfs.",&local_68);
  if (iStack_60 == 0) {
LAB_1437c33ee:
    if (local_68 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_68 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_68)(local_68,0);
    FUN_1446efa72(&local_68,0,0,0x10);
    iStack_60 = 0;
    goto LAB_1437c33ee;
  }
  atexit(FUN_1437b96eb);
  local_68 = (char *)0x0;
  iStack_60 = 0;
  FUN_1446efa72(&local_68,0,2,0x10);
  iStack_60 = 2;
  *(undefined ***)local_68 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_68 + 0x10) = lVar4;
  *(undefined ***)local_68 = &PTR_FUN_14ab2d890;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14152bcb8(&DAT_14cb12110,L"wp.Runtime.ToggleDrawLegends",
                L"Toggles debug display of world partition legends.",&local_68);
  if (iStack_60 == 0) {
LAB_1437c34c8:
    if (local_68 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_68 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_68)(local_68,0);
    FUN_1446efa72(&local_68,0,0,0x10);
    iStack_60 = 0;
    goto LAB_1437c34c8;
  }
  atexit(FUN_1437b9730);
  local_68 = (char *)0x0;
  iStack_60 = 0;
  FUN_1446efa72(&local_68,0,2,0x10);
  iStack_60 = 2;
  *(undefined ***)local_68 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_68 + 0x10) = lVar4;
  *(undefined ***)local_68 = &PTR_FUN_14ab2d900;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14152bcb8(&DAT_14cb12120,L"wp.Runtime.ToggleDrawRuntimeCellsDetails",
                L"Toggles debug display of world partition runtime streaming cells.",&local_68);
  if (iStack_60 == 0) {
LAB_1437c35a2:
    if (local_68 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_68 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_68)(local_68,0);
    FUN_1446efa72(&local_68,0,0,0x10);
    iStack_60 = 0;
    goto LAB_1437c35a2;
  }
  atexit(FUN_1437b9775);
  local_68 = (char *)0x0;
  iStack_60 = 0;
  FUN_1446efa72(&local_68,0,2,0x10);
  iStack_60 = 2;
  *(undefined ***)local_68 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_68 + 0x10) = lVar4;
  *(undefined ***)local_68 = &PTR_FUN_14ab2d970;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14152bcb8(&DAT_14cb12130,L"wp.Runtime.ToggleDrawDataLayers",
                L"Toggles debug display of active data layers.",&local_68);
  if (iStack_60 == 0) {
LAB_1437c367c:
    if (local_68 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_68 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_68)(local_68,0);
    FUN_1446efa72(&local_68,0,0,0x10);
    iStack_60 = 0;
    goto LAB_1437c367c;
  }
  atexit(FUN_1437b97ba);
  local_68 = (char *)0x0;
  iStack_60 = 0;
  FUN_1446efa72(&local_68,0,2,0x10);
  iStack_60 = 2;
  *(undefined ***)local_68 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_68 + 0x10) = lVar4;
  *(undefined ***)local_68 = &PTR_FUN_14ab2d9e0;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14152bcb8(&DAT_14cb12140,L"wp.Runtime.ToggleDrawDataLayersLoadTime",
                L"Toggles debug display of active data layers load time.",&local_68);
  if (iStack_60 == 0) {
LAB_1437c3756:
    if (local_68 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_68 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_68)(local_68,0);
    FUN_1446efa72(&local_68,0,0,0x10);
    iStack_60 = 0;
    goto LAB_1437c3756;
  }
  atexit(FUN_1437b97ff);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb12150,
                L"wp.Runtime.LevelStreamingContinuouslyIncrementalGCWhileLevelsPendingPurgeForWP",
                &DAT_14c761f14,
                L"Force a GC update when there\'s more than the number of specified pending purge levels."
               );
  atexit(FUN_1437b9844);
  local_68 = (char *)0x0;
  iStack_60 = 0;
  FUN_1446efa72(&local_68,0,2,0x10);
  iStack_60 = 2;
  *(undefined ***)local_68 = &PTR_LAB_149e35db0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_68 + 0x10) = lVar4;
  *(undefined ***)local_68 = &PTR_FUN_149e35d40;
  *(code **)(local_68 + 0x18) = FUN_1437bf5a6;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14170bbaa(&DAT_14cb12160,L"wp.Runtime.DumpStreamingSources",
                L"Dumps active streaming sources to the log",&local_68);
  if (iStack_60 == 0) {
LAB_1437c3871:
    if (local_68 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_68 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_68)(local_68,0);
    FUN_1446efa72(&local_68,0,0,0x10);
    iStack_60 = 0;
    goto LAB_1437c3871;
  }
  atexit(FUN_1437b9889);
  local_68 = (char *)0x0;
  iStack_60 = 0;
  FUN_1446efa72(&local_68,0,2,0x10);
  iStack_60 = 2;
  *(undefined ***)local_68 = &PTR_LAB_149e35db0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_68 + 0x10) = lVar4;
  *(undefined ***)local_68 = &PTR_FUN_149e35d40;
  *(code **)(local_68 + 0x18) = FUN_1437bf62e;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14170bbaa(&DAT_14cb12170,L"wp.Runtime.DumpWorldPartitions",
                L"Dumps active world partitions to the log",&local_68);
  if (iStack_60 != 0) {
    if (local_68 == (char *)0x0) goto LAB_1437c395d;
    (*(code *)**(undefined8 **)local_68)(local_68,0);
    FUN_1446efa72(&local_68,0,0,0x10);
    iStack_60 = 0;
  }
  if (local_68 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_1437c395d:
  atexit(FUN_1437b98ce);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb12180,L"wp.Runtime.MaxLoadingStreamingCells",&DAT_14c761f18,
                L"Used to limit the number of concurrent loading world partition streaming cells.");
  atexit(FUN_1437b9913);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cb12190,L"wp.Runtime.UpdateStreamingStateTimeLimit",&DAT_14cb121a0,
                L"Maximum amount of time to spend doing World Partition UpdateStreamingState (ms per frame)."
               );
  atexit(FUN_1437b9958);
  DAT_14cb121a8 = 0;
  _DAT_14cb121b0 = 0;
  _DAT_14cb121b8 = 2;
  atexit(FUN_1437b999d);
  DAT_14cb121c0 = 0;
  _DAT_14cb121c8 = 0;
  _DAT_14cb121d0 = 2;
  atexit(FUN_1437b99ce);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb121e0,L"wp.Runtime.UpdateStreamingSources",&DAT_14c761f1c,
                L"Set to 0 to stop updating (freeze) world partition streaming sources.");
  atexit(FUN_1437bd6a2);
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab2b9c0,1,0);
  DAT_14cb12228 = 0;
  _DAT_14cb12230 = 0;
  _DAT_14cb12238 = 2;
  atexit(FUN_1437bd96e);
  local_68 = (char *)0x2f2e4c681ed048f4;
  iStack_60 = 0x89d053a4;
  uStack_5c = 0xf18f102d;
  _DAT_14cb1225c = 0x1ed048f4;
  uRam000000014cb12260 = 0x2f2e4c68;
  uRam000000014cb12264 = 0x89d053a4;
  uRam000000014cb12268 = 0xf18f102d;
  FUN_141005458(&local_68,1,L"WorldSettingVer",0);
  atexit((_func_5014 *)&LAB_1437bde5e);
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437c3c48 FUN_1437c3c48 body=25 status=ok
// SIG undefined FUN_1437c3c48(void)

void FUN_1437c3c48(void)

{
  FUN_14578e0a2();
  FUN_14170c56a(&DAT_14cb122e8);
  return;
}



// FUNCTION 1437c3c62 FUN_1437c3c62 body=25 status=ok
// SIG undefined FUN_1437c3c62(void)

void FUN_1437c3c62(void)

{
  FUN_1464137bc();
  FUN_14170c56a(&DAT_14cb12358);
  return;
}



// FUNCTION 1437c3c7c FUN_1437c3c7c body=25 status=ok
// SIG undefined FUN_1437c3c7c(void)

void FUN_1437c3c7c(void)

{
  FUN_146413872();
  FUN_14170c56a(&DAT_14cb123c8);
  return;
}



// FUNCTION 1437c3c95 FUN_1437c3c95 body=201 status=ok
// SIG undefined FUN_1437c3c95(void)

void FUN_1437c3c95(void)

{
  undefined1 auStack_88 [32];
  code *local_68 [2];
  undefined8 local_58;
  undefined **local_48;
  code *local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_48 = &PTR_LAB_149e01e20;
  local_40 = FUN_1437c3c48;
  local_68[0] = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14cb12350,6,local_68);
  local_58 = 0;
  local_48 = &PTR_LAB_149e01e20;
  local_40 = FUN_1437c3c62;
  local_68[0] = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14cb123c0,6,local_68);
  local_58 = 0;
  local_48 = &PTR_LAB_149e01e20;
  local_40 = FUN_1437c3c7c;
  local_68[0] = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14cb12430,6,local_68);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437c3d60 FUN_1437c3d60 body=3086 status=ok
// SIG undefined FUN_1437c3d60(void)

bool FUN_1437c3d60(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined2 **ppuVar1;
  void *pvVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ushort uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  ushort uVar17;
  bool bVar18;
  undefined1 auStack_e8 [32];
  ulonglong local_c8;
  undefined4 local_c0;
  GUID local_b8;
  undefined2 *local_a8;
  undefined8 uStack_a0;
  undefined2 *local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined8 uStack_80;
  undefined2 *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = (undefined2 *)0x0;
  uStack_70 = 0;
  local_c8 = 0;
  cVar3 = FUN_14063337c(param_3,L"-InjectionSandbox=",&local_78,1);
  if (cVar3 == '\0') {
    local_c8 = 0;
    FUN_14063337c(param_3,L"-Sandbox=",&local_78);
  }
  else {
    local_c0 = 0xffffffff;
    local_c8 = local_c8 & 0xffffffff00000000;
    uVar4 = FUN_1447ee042(&local_78,&DAT_149e06120);
    if ((int)uVar4 < 0) {
      local_88 = (undefined2 *)0x0;
      uStack_80 = 0;
    }
    else {
      iVar9 = (int)uStack_70 + -1;
      if ((int)uStack_70 == 0) {
        iVar9 = 0;
      }
      uVar16 = (longlong)iVar9;
      if ((longlong)(ulonglong)uVar4 < (longlong)iVar9) {
        uVar16 = (ulonglong)uVar4;
      }
      uVar10 = 0;
      if (0 < (longlong)uVar16) {
        uVar10 = uVar16;
      }
      puVar6 = local_78;
      if ((int)uStack_70 == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      FUN_14006620a(&local_88,puVar6,uVar10);
    }
    if ((undefined2 **)(param_1 + 0x98) == &local_88) {
      if (local_88 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x98) != 0) {
        FUN_1400020a8();
      }
      *(undefined2 **)(param_1 + 0x98) = local_88;
      local_88 = (undefined2 *)0x0;
      *(int *)(param_1 + 0xa0) = (int)uStack_80;
      *(undefined4 *)(param_1 + 0xa4) = uStack_80._4_4_;
    }
    uVar15 = (int)uStack_70 - 1;
    puVar6 = local_78;
    if ((int)uStack_70 == 0) {
      uVar15 = 0;
      puVar6 = &DAT_149dfb77a;
    }
    uVar14 = uVar4 + 1;
    if ((int)uVar15 <= (int)(uVar4 + 1)) {
      uVar14 = uVar15;
    }
    uVar16 = (ulonglong)uVar14;
    if ((int)uVar14 < 1) {
      uVar16 = 0;
    }
    FUN_14006620a(&local_88,puVar6 + uVar16,uVar15 - (int)uVar16);
    if ((undefined2 **)(param_1 + 0xb8) == &local_88) {
      if (local_88 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0xb8) != 0) {
        FUN_1400020a8();
      }
      *(undefined2 **)(param_1 + 0xb8) = local_88;
      local_88 = (undefined2 *)0x0;
      *(int *)(param_1 + 0xc0) = (int)uStack_80;
      *(undefined4 *)(param_1 + 0xc4) = uStack_80._4_4_;
    }
    FUN_140bee914(&local_88,(undefined2 **)(param_1 + 0x98));
    if ((undefined2 **)(param_1 + 0xa8) == &local_88) {
      if (local_88 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0xa8) != 0) {
        FUN_1400020a8();
      }
      *(undefined2 **)(param_1 + 0xa8) = local_88;
      local_88 = (undefined2 *)0x0;
      *(int *)(param_1 + 0xb0) = (int)uStack_80;
      *(undefined4 *)(param_1 + 0xb4) = uStack_80._4_4_;
    }
    FUN_140bee914(&local_88,(undefined2 **)(param_1 + 0xb8));
    if ((undefined2 **)(param_1 + 200) == &local_88) {
      if (local_88 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 200) != 0) {
        FUN_1400020a8();
      }
      *(undefined2 **)(param_1 + 200) = local_88;
      local_88 = (undefined2 *)0x0;
      *(int *)(param_1 + 0xd0) = (int)uStack_80;
      *(undefined4 *)(param_1 + 0xd4) = uStack_80._4_4_;
    }
    iVar9 = *(int *)(param_1 + 0xc0) + -1;
    if (*(int *)(param_1 + 0xc0) == 0) {
      iVar9 = 0;
    }
    FUN_1402980a2(&local_78,*(undefined8 *)(param_1 + 0xb8),iVar9);
  }
  if ((int)uStack_70 < 2) {
    if (*(char *)(param_1 + 0x90) == '\0') {
      *(longlong *)(param_1 + 8) = param_2;
      goto LAB_1437c458d;
    }
    FUN_1415bdca4(&local_88);
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_78 = local_88;
    uStack_70 = uStack_80;
    FUN_140056680(&local_88,L"*.uasset");
    FUN_1405e9454(param_1 + 0x70,&local_88);
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_140056680(&local_88,L"*.umap");
    FUN_1405e9454(param_1 + 0x70,&local_88);
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  *(longlong *)(param_1 + 8) = param_2;
  if ((param_2 == 0) || ((int)uStack_70 < 2)) goto LAB_1437c458d;
  puVar5 = (undefined8 *)FUN_1401aecd6();
  puVar8 = (undefined8 *)(param_1 + 0x30);
  if (puVar8 != puVar5) {
    iVar9 = *(int *)(puVar5 + 1);
    pvVar2 = (void *)*puVar5;
    *(int *)(param_1 + 0x38) = iVar9;
    if (iVar9 == 0 && *(int *)(param_1 + 0x3c) == 0) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    else {
      FUN_1446dd670(puVar8,iVar9);
      if (iVar9 != 0) {
        memcpy((void *)*puVar8,pvVar2,(longlong)iVar9 * 2);
      }
    }
  }
  FUN_1401aea18(&local_88,puVar8);
  if ((undefined2 **)(param_1 + 0x40) == &local_88) {
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined2 **)(param_1 + 0x40) = local_88;
    local_88 = (undefined2 *)0x0;
    *(int *)(param_1 + 0x48) = (int)uStack_80;
    *(undefined4 *)(param_1 + 0x4c) = uStack_80._4_4_;
  }
  bVar18 = false;
  FUN_1448097c4(&local_78,&DAT_149e01f64,&DAT_149e065c6);
  local_c0 = 0xffffffff;
  local_c8 = local_c8 & 0xffffffff00000000;
  uVar4 = FUN_1447ee042(&local_78,&DAT_149e31048);
  if (uVar4 != 0xffffffff) {
    uVar15 = uVar4 + 1;
    if ((int)uVar4 < -1) {
      local_88 = (undefined2 *)0x0;
      uStack_80 = 0;
    }
    else {
      iVar9 = (int)uStack_70 + -1;
      if ((int)uStack_70 == 0) {
        iVar9 = 0;
      }
      uVar16 = (longlong)iVar9;
      if ((longlong)(ulonglong)uVar15 < (longlong)iVar9) {
        uVar16 = (ulonglong)uVar15;
      }
      uVar10 = 0;
      if (0 < (longlong)uVar16) {
        uVar10 = uVar16;
      }
      puVar6 = local_78;
      if ((int)uStack_70 == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      FUN_14006620a(&local_88,puVar6,uVar10);
    }
    cVar3 = FUN_1468182e0(&local_88);
    if (cVar3 == '\0') {
      uVar14 = (int)uStack_70 - 1;
      puVar6 = local_78;
      if ((int)uStack_70 == 0) {
        uVar14 = 0;
        puVar6 = &DAT_149dfb77a;
      }
      if ((int)uVar14 <= (int)uVar15) {
        uVar15 = uVar14;
      }
      uVar16 = (ulonglong)uVar15;
      if ((int)uVar15 < 1) {
        uVar16 = 0;
      }
      FUN_14006620a(&local_98,puVar6 + uVar16);
      uVar15 = (int)uStack_70 - 1;
      if ((int)uStack_70 == 0) {
        uVar15 = 0;
      }
      if ((int)uVar15 <= (int)uVar4) {
        uVar4 = uVar15;
      }
      uVar16 = (ulonglong)uVar4;
      if ((int)uVar4 < 1) {
        uVar16 = 0;
      }
      uVar15 = uVar15 - (int)uVar16;
      if (0 < (int)uVar15) {
        iVar9 = (int)uStack_70 - (uVar15 + (int)uVar16);
        if (iVar9 != 0) {
          memmove(local_78 + uVar16,local_78 + uVar16 + uVar15,(longlong)iVar9 * 2);
        }
        uStack_70 = CONCAT44(uStack_70._4_4_,(int)uStack_70 - uVar15);
      }
      puVar6 = &DAT_149dfb77a;
      if ((int)local_90 != 0) {
        puVar6 = local_98;
      }
      lVar11 = 0;
      while( true ) {
        uVar13 = *(ushort *)((longlong)puVar6 + lVar11);
        uVar4 = (uint)uVar13;
        uVar17 = *(ushort *)((longlong)&DAT_14ab2e422 + lVar11);
        uVar15 = (uint)uVar17;
        if (uVar13 != uVar17) {
          if ((uVar17 | uVar13) < 0x80) {
            uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar13];
            uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar17];
            if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar17]) goto LAB_1437c432c;
          }
          iVar9 = uVar4 - uVar15;
          goto LAB_1437c4355;
        }
        if (uVar13 == 0) break;
LAB_1437c432c:
        lVar11 = lVar11 + 2;
      }
      iVar9 = 0;
LAB_1437c4355:
      bVar18 = iVar9 == 0;
      if (local_98 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      bVar18 = false;
    }
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  puVar6 = local_78;
  if ((int)uStack_70 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  lVar11 = 0;
  while( true ) {
    uVar13 = *(ushort *)((longlong)puVar6 + lVar11);
    uVar16 = (ulonglong)uVar13;
    uVar17 = *(ushort *)((longlong)&DAT_149e31290 + lVar11);
    if (uVar13 != uVar17) break;
    if (uVar13 == 0) goto LAB_1437c4505;
LAB_1437c43b9:
    lVar11 = lVar11 + 2;
  }
  if ((uVar17 | uVar13) < 0x80) {
    uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
    uVar10 = (ulonglong)uVar17;
    uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
    if ((&DAT_149e05da0)[uVar16] == (&DAT_149e05da0)[uVar10]) goto LAB_1437c43b9;
  }
  if (uVar13 != uVar17) {
    lVar11 = 0;
    goto LAB_1437c43f3;
  }
LAB_1437c4505:
  uVar7 = FUN_14170cf26();
  lVar11 = param_1 + 0x10;
  FUN_14020fad6(lVar11,uVar7);
  FUN_1400020e8(lVar11,L"My Games/",9);
  FUN_1400020e8(lVar11,&DAT_14ab2e42c,3);
  goto LAB_1437c4543;
LAB_1437c43f3:
  uVar13 = *(ushort *)((longlong)puVar6 + lVar11);
  uVar16 = (ulonglong)uVar13;
  uVar17 = *(ushort *)((longlong)L"Unique" + lVar11);
  if (uVar13 == uVar17) {
    if (uVar13 == 0) goto LAB_1437c469c;
LAB_1437c440c:
    lVar11 = lVar11 + 2;
    goto LAB_1437c43f3;
  }
  if ((uVar17 | uVar13) < 0x80) {
    uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
    uVar10 = (ulonglong)uVar17;
    uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
    if ((&DAT_149e05da0)[uVar16] == (&DAT_149e05da0)[uVar10]) goto LAB_1437c440c;
  }
  if (uVar13 != uVar17) {
    lVar11 = 2;
    lVar12 = 0;
    goto LAB_1437c444c;
  }
LAB_1437c469c:
  puVar8 = (undefined8 *)FUN_1401aecd6();
  iVar9 = *(int *)(puVar8 + 1);
  lVar11 = (longlong)iVar9;
  local_88 = (undefined2 *)0x0;
  pvVar2 = (void *)*puVar8;
  uStack_80 = CONCAT44(uStack_80._4_4_,iVar9);
  FUN_1446dd670(&local_88,(uint)(lVar11 == 0) + iVar9 + 1,0);
  if (lVar11 != 0) {
    memcpy(local_88,pvVar2,lVar11 * 2);
  }
  FUN_1401aebe8(&local_88,&DAT_149dfb77a,0);
  local_b8.Data1 = 0;
  local_b8.Data2 = 0;
  local_b8.Data3 = 0;
  local_b8.Data4[0] = '\0';
  local_b8.Data4[1] = '\0';
  local_b8.Data4[2] = '\0';
  local_b8.Data4[3] = '\0';
  local_b8.Data4[4] = '\0';
  local_b8.Data4[5] = '\0';
  local_b8.Data4[6] = '\0';
  local_b8.Data4[7] = '\0';
  CoCreateGuid(&local_b8);
  local_a8 = (undefined2 *)0x0;
  uStack_a0 = 0;
  FUN_1407c869a(&local_b8,&local_a8,0);
  puVar6 = &DAT_149dfb77a;
  if ((int)uStack_a0 != 0) {
    puVar6 = local_a8;
  }
  FUN_146818a40(&local_98,&local_88,puVar6);
  if ((undefined2 **)(param_1 + 0x10) == &local_98) {
    puVar6 = local_a8;
    if (local_98 != (undefined2 *)0x0) {
      FUN_1400020a8();
      puVar6 = local_a8;
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined2 **)(param_1 + 0x10) = local_98;
    local_98 = (undefined2 *)0x0;
    *(int *)(param_1 + 0x18) = (int)local_90;
    *(undefined4 *)(param_1 + 0x1c) = local_90._4_4_;
    local_90 = 0;
    puVar6 = local_a8;
  }
LAB_1437c479a:
  if (puVar6 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1437c47a4:
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  goto LAB_1437c47b3;
LAB_1437c444c:
  uVar13 = *(ushort *)((longlong)puVar6 + lVar12);
  uVar16 = (ulonglong)uVar13;
  uVar17 = *(ushort *)((longlong)&DAT_149e06258 + lVar12);
  if (uVar13 == uVar17) {
    if (uVar13 == 0) goto LAB_1437c481a;
LAB_1437c4465:
    lVar11 = lVar11 + -1;
    if (lVar11 == 0) goto LAB_1437c481a;
    lVar12 = lVar12 + 2;
    goto LAB_1437c444c;
  }
  if ((uVar17 | uVar13) < 0x80) {
    uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
    uVar10 = (ulonglong)uVar17;
    uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
    if ((&DAT_149e05da0)[uVar16] == (&DAT_149e05da0)[uVar10]) goto LAB_1437c4465;
  }
  if (uVar13 != uVar17) {
    local_c0 = 0xffffffff;
    local_c8 = local_c8 & 0xffffffff00000000;
    uVar4 = FUN_1447ee042(&local_78,&DAT_149e065c6,1,0);
    if ((int)uVar4 < 0) {
      local_88 = (undefined2 *)0x0;
      uStack_80 = 0;
    }
    else {
      iVar9 = (int)uStack_70 + -1;
      if ((int)uStack_70 == 0) {
        iVar9 = 0;
      }
      uVar16 = (longlong)iVar9;
      if ((longlong)(ulonglong)uVar4 < (longlong)iVar9) {
        uVar16 = (ulonglong)uVar4;
      }
      uVar10 = 0;
      if (0 < (longlong)uVar16) {
        uVar10 = uVar16;
      }
      puVar6 = local_78;
      if ((int)uStack_70 == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      FUN_14006620a(&local_88,puVar6,uVar10 & 0xffffffff);
    }
    cVar3 = FUN_1468182e0(&local_88);
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (cVar3 != '\0') {
      iVar9 = (int)uStack_70 + -1;
      if ((int)uStack_70 == 0) {
        iVar9 = 0;
      }
      FUN_1402980a2(param_1 + 0x10,local_78,iVar9);
      goto LAB_1437c4543;
    }
    puVar8 = (undefined8 *)FUN_1401aecd6();
    iVar9 = *(int *)(puVar8 + 1);
    lVar11 = (longlong)iVar9;
    local_88 = (undefined2 *)0x0;
    pvVar2 = (void *)*puVar8;
    uStack_80 = CONCAT44(uStack_80._4_4_,iVar9);
    FUN_1446dd670(&local_88,(uint)(lVar11 == 0) + iVar9 + 1,0);
    if (lVar11 != 0) {
      memcpy(local_88,pvVar2,lVar11 * 2);
    }
    FUN_1401aebe8(&local_88,&DAT_149dfb77a,0);
    puVar6 = &DAT_149dfb77a;
    if ((int)uStack_70 != 0) {
      puVar6 = local_78;
    }
    FUN_146818a40(&local_98,&local_88,puVar6);
    puVar6 = local_98;
    if ((undefined2 **)(param_1 + 0x10) == &local_98) goto LAB_1437c479a;
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined2 **)(param_1 + 0x10) = local_98;
    local_98 = (undefined2 *)0x0;
    *(int *)(param_1 + 0x18) = (int)local_90;
    *(undefined4 *)(param_1 + 0x1c) = local_90._4_4_;
    goto LAB_1437c47a4;
  }
LAB_1437c481a:
  iVar9 = (int)uStack_70 + -1;
  if ((int)uStack_70 == 0) {
    iVar9 = 0;
  }
  FUN_1402980a2(param_1 + 0x10,local_78,iVar9);
LAB_1437c47b3:
  ppuVar1 = (undefined2 **)(param_1 + 0x10);
  FUN_1401ae5e4(ppuVar1);
  FUN_1401aea18(&local_88,ppuVar1);
  if (ppuVar1 == &local_88) {
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined2 **)(param_1 + 0x10) = local_88;
    local_88 = (undefined2 *)0x0;
    *(int *)(param_1 + 0x18) = (int)uStack_80;
    *(undefined4 *)(param_1 + 0x1c) = uStack_80._4_4_;
  }
LAB_1437c4543:
  if (bVar18) {
    if (*(int *)(param_1 + 0x18) == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = *(undefined2 **)(param_1 + 0x10);
    }
    FUN_147dd9a42(param_1,puVar6);
  }
  puVar8 = (undefined8 *)(param_1 + 0x10);
  cVar3 = FUN_144a38768(puVar8,&DAT_149e065c6,1,1);
  if (cVar3 == '\0') {
    FUN_1400020e8(puVar8,&DAT_149e065c6,1);
  }
  if (*(char *)(param_1 + 0x90) == '\x01') {
    if (*(uint *)(param_1 + 0xc0) < 2) {
      puVar6 = &DAT_149dfb77a;
      if (*(int *)(param_1 + 0x18) != 0) {
        puVar6 = (undefined2 *)*puVar8;
      }
      FUN_140002266(&local_88,L"-Sandbox=%s",puVar6);
      puVar6 = &DAT_149dfb77a;
      if ((int)uStack_80 != 0) {
        puVar6 = local_88;
      }
    }
    else {
      puVar6 = &DAT_149dfb77a;
      if (*(int *)(param_1 + 0xa0) != 0) {
        puVar6 = *(undefined2 **)(param_1 + 0x98);
      }
      FUN_140002266(&local_88,L"-InjectedSandbox=%s;%s",puVar6,*(undefined8 *)(param_1 + 0xb8));
      puVar6 = &DAT_149dfb77a;
      if ((int)uStack_80 != 0) {
        puVar6 = local_88;
      }
    }
    FUN_146802baa(puVar6);
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1437c458d:
  lVar11 = *(longlong *)(param_1 + 8);
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar11 != 0;
}



// FUNCTION 1437c4970 FUN_1437c4970 body=57 status=ok
// SIG undefined FUN_1437c4970(void)

undefined8 * FUN_1437c4970(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab2e570;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437c49aa FUN_1437c49aa body=286 status=ok
// SIG undefined FUN_1437c49aa(void)

undefined8 FUN_1437c49aa(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 == '\0') {
    if (*(char *)(param_1 + 0x28) == '\0') goto LAB_1437c4aa7;
    FUN_140056680(&local_38,param_2);
    puVar5 = local_38;
    iVar7 = *(int *)(param_1 + 0x20);
    iVar3 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar3 = 0;
    }
    puVar9 = &DAT_149dfb77a;
    if (iVar7 != 0) {
      puVar9 = *(undefined2 **)(param_1 + 0x18);
    }
    iVar7 = local_30 + -1;
    puVar4 = local_38;
    if (local_30 == 0) {
      iVar7 = 0;
      puVar4 = &DAT_149dfb77a;
    }
    cVar6 = FUN_14038a9c4(puVar4,iVar7,puVar9,iVar3);
    if (puVar5 != (undefined2 *)0x0) {
      FUN_1400020a8(puVar5);
    }
  }
  else {
    cVar6 = *(char *)(param_1 + 0x29);
  }
  if (cVar6 != '\0') {
    plVar1 = *(longlong **)(param_1 + 0x10);
    FUN_140056680(local_48,param_2);
    FUN_14093d9c4(&local_38,local_48);
    iVar7 = (int)plVar1[1];
    *(uint *)(plVar1 + 1) = iVar7 + 1U;
    if (*(uint *)((longlong)plVar1 + 0xc) < iVar7 + 1U) {
      FUN_1447a1bd6(plVar1,iVar7);
    }
    lVar2 = *plVar1;
    lVar8 = (longlong)iVar7 * 0x10;
    *(undefined2 **)(lVar2 + lVar8) = local_38;
    *(int *)(lVar2 + 8 + lVar8) = local_30;
    *(undefined4 *)(lVar2 + 0xc + lVar8) = local_2c;
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
LAB_1437c4aa7:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437c4ae4 FUN_1437c4ae4 body=102 status=ok
// SIG undefined FUN_1437c4ae4(void)

void FUN_1437c4ae4(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014ab2e546;
  local_14 = 0xb;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146413928(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437c4b4c FUN_1437c4b4c body=102 status=ok
// SIG undefined FUN_1437c4b4c(void)

void FUN_1437c4b4c(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014ab2e698;
  local_14 = 4;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146413b30(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437c4bc6 FUN_1437c4bc6 body=7964 status=ok
// SIG undefined FUN_1437c4bc6(void)

ulonglong FUN_1437c4bc6(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                       undefined4 param_5)

{
  undefined4 uVar1;
  float fVar2;
  undefined1 uVar3;
  void *pvVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined2 *puVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  longlong lVar13;
  double *pdVar14;
  undefined8 *puVar15;
  longlong **pplVar16;
  ulonglong *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  longlong *plVar21;
  byte bVar22;
  uint uVar23;
  undefined8 unaff_RBP;
  void **ppvVar24;
  undefined *puVar26;
  undefined8 *puVar27;
  longlong lVar28;
  void **ppvVar29;
  bool bVar30;
  undefined1 auStack_148 [32];
  longlong **local_128;
  undefined8 local_120;
  undefined *local_118;
  code *local_110;
  undefined4 local_108;
  code *local_100;
  undefined1 *local_f8;
  code **local_f0;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  void *local_c8;
  ulonglong uStack_c0;
  longlong *local_b8;
  int local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  void *local_a0;
  int local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  longlong *local_80;
  int local_78;
  code *local_70;
  undefined1 local_68 [8];
  ulonglong local_60;
  undefined7 uVar25;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar25 = (undefined7)((ulonglong)unaff_RBP >> 8);
  ppvVar24 = (void **)CONCAT71(uVar25,1);
  switch((byte)(*(byte *)(param_1 + 0x28) + 0x20) >> 5) {
  case 0:
    uVar8 = *(byte *)(param_1 + 0x28) & 0x1f;
    ppvVar24 = (void **)0x0;
    uVar23 = uVar8 - 0x14;
    if (7 < uVar23) goto switchD_1437c4c2d_default;
    switch(uVar8) {
    case 0x14:
    case 0x15:
      puVar15 = (undefined8 *)FUN_140932b6e();
      if (param_2 != 0) {
        puVar27 = *(undefined8 **)(param_2 + 8);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951d20) &&
           (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1)) {
          local_118 = (undefined *)FUN_1446ddbd2();
          local_110 = FUN_14067a048;
          local_120 = 0;
          local_128 = (longlong **)0x28001;
          FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
          atexit(FUN_142811fe5);
          _Init_thread_footer(&DAT_14c951d20);
        }
        if (DAT_14c951cd8 == (undefined8 *)0x0) {
          bVar30 = puVar27 != (undefined8 *)0x0;
          puVar15 = &DAT_14c951cd0;
          if (puVar27 != &DAT_14c951cd0 && bVar30) {
            do {
              puVar27 = (undefined8 *)puVar27[6];
              bVar30 = puVar27 != (undefined8 *)0x0;
              if (puVar27 == &DAT_14c951cd0) break;
            } while (puVar27 != (undefined8 *)0x0);
          }
          if (bVar30) goto LAB_1437c5331;
        }
        else {
          puVar15 = DAT_14c951cd8;
          if ((puVar27[3] & (ulonglong)DAT_14c951cd8) != 0) {
LAB_1437c5331:
            cVar6 = *(char *)(param_1 + 0x30);
            ppvVar24 = (void **)0x0;
            lVar28 = FUN_147dde4de(param_2,param_3,param_4);
            if (lVar28 != 0) {
              if (cVar6 == '\0') {
                bVar5 = 0;
              }
              else {
                bVar5 = *(byte *)(param_2 + 0x72);
              }
              *(byte *)(lVar28 + (ulonglong)*(byte *)(param_2 + 0x71)) =
                   *(byte *)(lVar28 + (ulonglong)*(byte *)(param_2 + 0x71)) &
                   ~*(byte *)(param_2 + 0x73) | bVar5;
              goto LAB_1437c4ed2;
            }
            goto LAB_1437c5889;
          }
        }
      }
      break;
    case 0x16:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_148);
    default:
      goto switchD_1437c4c2d_default;
    case 0x1a:
      if (*(char *)(param_1 + 0x5d) == '\x01') {
        uVar18 = FUN_1448f9ec4(param_2);
        cVar6 = FUN_1437c6b0f(uVar18);
        if (cVar6 != '\0') {
          if (param_2 != 0) {
            puVar26 = *(undefined **)(param_2 + 8);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c952420) && (FUN_144b3d300(&DAT_14c952420), DAT_14c952420 == -1))
            {
              FUN_14475b26a();
              local_110 = FUN_14079c5e4;
              local_118 = &DAT_14c9520b8;
              local_128 = (longlong **)0x101008001;
              local_120 = 0;
              FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
              atexit(FUN_1428170bb);
              _Init_thread_footer(&DAT_14c952420);
            }
            if (DAT_14c9523d8 == (undefined8 *)0x0) {
              bVar30 = puVar26 != (undefined *)0x0;
              if (puVar26 != &DAT_14c9523d0 && bVar30) {
                do {
                  puVar26 = *(undefined **)(puVar26 + 0x30);
                  bVar30 = puVar26 != (undefined *)0x0;
                  if (puVar26 == &DAT_14c9523d0) break;
                } while (puVar26 != (undefined *)0x0);
              }
              if (bVar30) goto LAB_1437c5b90;
            }
            else if ((*(ulonglong *)(puVar26 + 0x18) & (ulonglong)DAT_14c9523d8) != 0) {
LAB_1437c5b90:
              fVar2 = *(float *)(param_1 + 0x30);
              pdVar14 = (double *)FUN_147dde4de(param_2,param_3,param_4,param_5);
              if (pdVar14 != (double *)0x0) {
                *pdVar14 = (double)fVar2;
                goto LAB_1437c529e;
              }
            }
          }
          goto LAB_1437c582a;
        }
      }
      if (param_2 != 0) {
        puVar15 = *(undefined8 **)(param_2 + 8);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c9523c8) &&
           (FUN_144b3d300(&DAT_14c9523c8), DAT_14c9523c8 == -1)) {
          FUN_14475b26a();
          local_110 = FUN_1408a629c;
          local_118 = &DAT_14c9520b8;
          local_120 = 0;
          local_128 = (longlong **)0x1008101;
          FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
          atexit(FUN_14281708e);
          _Init_thread_footer(&DAT_14c9523c8);
        }
        if (DAT_14c952380 == 0) {
          bVar30 = puVar15 != (undefined8 *)0x0;
          if (puVar15 != &DAT_14c952378 && bVar30) {
            do {
              puVar15 = (undefined8 *)puVar15[6];
              bVar30 = puVar15 != (undefined8 *)0x0;
              if (puVar15 == &DAT_14c952378) break;
            } while (puVar15 != (undefined8 *)0x0);
          }
          if (bVar30) goto LAB_1437c553c;
        }
        else if ((puVar15[3] & DAT_14c952380) != 0) {
LAB_1437c553c:
          uVar1 = *(undefined4 *)(param_1 + 0x30);
          puVar11 = (undefined4 *)FUN_147dde4de(param_2,param_3,param_4,param_5);
          if (puVar11 != (undefined4 *)0x0) {
            *puVar11 = uVar1;
            goto LAB_1437c529e;
          }
        }
      }
      goto LAB_1437c582a;
    case 0x1b:
      puVar15 = (undefined8 *)
                ((longlong)&switchD_1437c4c4e::switchdataD_14ab33488 +
                (longlong)(int)(&switchD_1437c4c4e::switchdataD_14ab33488)[uVar23]);
      if (param_2 != 0) {
        puVar26 = *(undefined **)(param_2 + 8);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c952420) &&
           (FUN_144b3d300(&DAT_14c952420), DAT_14c952420 == -1)) {
          FUN_14475b26a();
          local_110 = FUN_14079c5e4;
          local_118 = &DAT_14c9520b8;
          local_128 = (longlong **)0x101008001;
          local_120 = 0;
          FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
          atexit(FUN_1428170bb);
          _Init_thread_footer(&DAT_14c952420);
        }
        if (DAT_14c9523d8 == (undefined8 *)0x0) {
          bVar30 = puVar26 != (undefined *)0x0;
          puVar15 = (undefined8 *)&DAT_14c9523d0;
          if (puVar26 != &DAT_14c9523d0 && bVar30) {
            do {
              puVar26 = *(undefined **)(puVar26 + 0x30);
              bVar30 = puVar26 != (undefined *)0x0;
              if (puVar26 == &DAT_14c9523d0) break;
            } while (puVar26 != (undefined *)0x0);
          }
          if (bVar30) goto LAB_1437c5864;
        }
        else {
          puVar15 = DAT_14c9523d8;
          if ((*(ulonglong *)(puVar26 + 0x18) & (ulonglong)DAT_14c9523d8) != 0) {
LAB_1437c5864:
            uVar18 = *(undefined8 *)(param_1 + 0x30);
            puVar15 = (undefined8 *)FUN_147dde4de(param_2,param_3,param_4,param_5);
            if (puVar15 == (undefined8 *)0x0) goto LAB_1437c5889;
            *puVar15 = uVar18;
            goto LAB_1437c4ed2;
          }
        }
      }
    }
LAB_1437c54f9:
    bVar5 = (byte)puVar15;
    bVar22 = 0;
    uVar25 = 0;
    break;
  case 1:
    if (param_2 == 0) goto LAB_1437c582a;
    puVar26 = *(undefined **)(param_2 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951d78) && (FUN_144b3d300(&DAT_14c951d78), DAT_14c951d78 == -1)) {
      FUN_14475b26a();
      local_110 = FUN_1409f1a5c;
      local_118 = &DAT_14c9520b8;
      local_120 = 0;
      local_128 = (longlong **)0x1008041;
      FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
      atexit(FUN_14281201f);
      _Init_thread_footer(&DAT_14c951d78);
    }
    if (DAT_14c951d30 == 0) {
      bVar30 = puVar26 != (undefined *)0x0;
      if (puVar26 != &DAT_14c951d28 && bVar30) {
        do {
          puVar26 = *(undefined **)(puVar26 + 0x30);
          bVar30 = puVar26 != (undefined *)0x0;
          if (puVar26 == &DAT_14c951d28) break;
        } while (puVar26 != (undefined *)0x0);
      }
      if (!bVar30) goto LAB_1437c4d8e;
LAB_1437c50b9:
      uVar18 = *(undefined8 *)(param_1 + 0x30);
      puVar12 = (undefined1 *)FUN_147dde4de(param_2,param_3,param_4,param_5);
      if (puVar12 == (undefined1 *)0x0) goto LAB_1437c582a;
      *puVar12 = (char)uVar18;
    }
    else {
      if ((*(ulonglong *)(puVar26 + 0x18) & DAT_14c951d30) != 0) goto LAB_1437c50b9;
LAB_1437c4d8e:
      lVar28 = *(longlong *)(param_2 + 8);
      lVar13 = FUN_140e98e1a();
      if (*(ulonglong *)(lVar13 + 8) == 0) {
        bVar30 = lVar28 != 0;
        if (lVar28 != lVar13 && bVar30) {
          do {
            lVar28 = *(longlong *)(lVar28 + 0x30);
            bVar30 = lVar28 != 0;
            if (lVar28 == lVar13) break;
          } while (lVar28 != 0);
        }
        if (!bVar30) goto LAB_1437c4e3f;
      }
      else if ((*(ulonglong *)(lVar28 + 0x18) & *(ulonglong *)(lVar13 + 8)) == 0) {
LAB_1437c4e3f:
        puVar26 = *(undefined **)(param_2 + 8);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c952318) &&
           (FUN_144b3d300(&DAT_14c952318), DAT_14c952318 == -1)) {
          FUN_14475b26a();
          local_110 = FUN_1468e122c;
          local_118 = &DAT_14c9520b8;
          local_120 = 0;
          local_128 = (longlong **)0x1008801;
          FUN_14000176a(&DAT_14c9522c8,L"FUInt32Property",0x800,0);
          atexit(FUN_142817034);
          _Init_thread_footer(&DAT_14c952318);
        }
        if (DAT_14c9522d0 == 0) {
          bVar30 = puVar26 != (undefined *)0x0;
          if (puVar26 != &DAT_14c9522c8 && bVar30) {
            do {
              puVar26 = *(undefined **)(puVar26 + 0x30);
              bVar30 = puVar26 != (undefined *)0x0;
              if (puVar26 == &DAT_14c9522c8) break;
            } while (puVar26 != (undefined *)0x0);
          }
          if (!bVar30) goto LAB_1437c4f15;
        }
        else if ((*(ulonglong *)(puVar26 + 0x18) & DAT_14c9522d0) == 0) {
LAB_1437c4f15:
          puVar26 = *(undefined **)(param_2 + 8);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c952370) && (FUN_144b3d300(&DAT_14c952370), DAT_14c952370 == -1)) {
            FUN_14475b26a();
            local_110 = FUN_1468e12e4;
            local_118 = &DAT_14c9520b8;
            local_120 = 0;
            local_128 = (longlong **)0x1008201;
            FUN_14000176a(&DAT_14c952320,L"FUInt64Property",0x200,0);
            atexit(FUN_142817061);
            _Init_thread_footer(&DAT_14c952370);
          }
          if (DAT_14c952328 == 0) {
            bVar30 = puVar26 != (undefined *)0x0;
            if (puVar26 != &DAT_14c952320 && bVar30) {
              do {
                puVar26 = *(undefined **)(puVar26 + 0x30);
                bVar30 = puVar26 != (undefined *)0x0;
                if (puVar26 == &DAT_14c952320) break;
              } while (puVar26 != (undefined *)0x0);
            }
            if (!bVar30) goto switchD_1437c4c2d_caseD_2;
          }
          else if ((*(ulonglong *)(puVar26 + 0x18) & DAT_14c952328) == 0) goto LAB_1437c5067;
          goto LAB_1437c527d;
        }
LAB_1437c51d4:
        uVar18 = *(undefined8 *)(param_1 + 0x30);
        puVar11 = (undefined4 *)FUN_147dde4de(param_2,param_3,param_4,param_5);
        if (puVar11 == (undefined4 *)0x0) goto LAB_1437c582a;
        *puVar11 = (int)uVar18;
        goto LAB_1437c529e;
      }
LAB_1437c5131:
      uVar18 = *(undefined8 *)(param_1 + 0x30);
      puVar10 = (undefined2 *)FUN_147dde4de(param_2,param_3,param_4,param_5);
      if (puVar10 == (undefined2 *)0x0) goto LAB_1437c582a;
      *puVar10 = (short)uVar18;
    }
LAB_1437c529e:
    ppvVar24 = (void **)CONCAT71((int7)((ulonglong)ppvVar24 >> 8),1);
    goto switchD_1437c4c2d_default;
  case 2:
switchD_1437c4c2d_caseD_2:
    if (param_2 != 0) {
LAB_1437c5067:
      lVar28 = *(longlong *)(param_2 + 8);
      lVar13 = FUN_14093f012();
      if (*(ulonglong *)(lVar13 + 8) == 0) {
        bVar30 = lVar28 != 0;
        if (lVar28 != lVar13 && bVar30) {
          do {
            lVar28 = *(longlong *)(lVar28 + 0x30);
            bVar30 = lVar28 != 0;
            if (lVar28 == lVar13) break;
          } while (lVar28 != 0);
        }
        if (bVar30) {
          if (param_2 != 0) goto LAB_1437c50b9;
          goto LAB_1437c582a;
        }
      }
      else if ((*(ulonglong *)(lVar28 + 0x18) & *(ulonglong *)(lVar13 + 8)) != 0)
      goto LAB_1437c50b9;
      lVar28 = *(longlong *)(param_2 + 8);
      lVar13 = FUN_14093f0c0();
      if (*(ulonglong *)(lVar13 + 8) == 0) {
        bVar30 = lVar28 != 0;
        if (lVar28 != lVar13 && bVar30) {
          do {
            lVar28 = *(longlong *)(lVar28 + 0x30);
            bVar30 = lVar28 != 0;
            if (lVar28 == lVar13) break;
          } while (lVar28 != 0);
        }
        if (bVar30) {
          if (param_2 != 0) goto LAB_1437c5131;
          goto LAB_1437c582a;
        }
      }
      else if ((*(ulonglong *)(lVar28 + 0x18) & *(ulonglong *)(lVar13 + 8)) != 0)
      goto LAB_1437c5131;
      puVar15 = *(undefined8 **)(param_2 + 8);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952210) && (FUN_144b3d300(&DAT_14c952210), DAT_14c952210 == -1))
      {
        FUN_14475b26a();
        local_110 = FUN_1405ebbb2;
        local_118 = &DAT_14c9520b8;
        local_120 = 0;
        local_128 = (longlong **)0x1008081;
        FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
        atexit(FUN_142816fad);
        _Init_thread_footer(&DAT_14c952210);
      }
      if (DAT_14c9521c8 == 0) {
        bVar30 = puVar15 != (undefined8 *)0x0;
        if (puVar15 != &DAT_14c9521c0 && bVar30) {
          do {
            puVar15 = (undefined8 *)puVar15[6];
            bVar30 = puVar15 != (undefined8 *)0x0;
            if (puVar15 == &DAT_14c9521c0) break;
          } while (puVar15 != (undefined8 *)0x0);
        }
        if (bVar30) {
          if (param_2 != 0) goto LAB_1437c51d4;
          goto LAB_1437c582a;
        }
      }
      else if ((puVar15[3] & DAT_14c9521c8) != 0) goto LAB_1437c51d4;
      puVar26 = *(undefined **)(param_2 + 8);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952268) && (FUN_144b3d300(&DAT_14c952268), DAT_14c952268 == -1))
      {
        FUN_14475b26a();
        local_110 = FUN_1459738d6;
        local_118 = &DAT_14c9520b8;
        local_120 = 0;
        local_128 = (longlong **)0x1408001;
        FUN_14000176a(&DAT_14c952218,L"FInt64Property",0x400000,0);
        atexit(FUN_142816fda);
        _Init_thread_footer(&DAT_14c952268);
      }
      if (DAT_14c952220 == 0) {
        bVar30 = puVar26 != (undefined *)0x0;
        if (puVar26 != &DAT_14c952218 && bVar30) {
          do {
            puVar26 = *(undefined **)(puVar26 + 0x30);
            bVar30 = puVar26 != (undefined *)0x0;
            if (puVar26 == &DAT_14c952218) break;
          } while (puVar26 != (undefined *)0x0);
        }
        if (!(bool)(bVar30 ^ 1U | param_2 == 0)) goto LAB_1437c527d;
      }
      else if ((*(ulonglong *)(puVar26 + 0x18) & DAT_14c952220) != 0) {
LAB_1437c527d:
        uVar18 = *(undefined8 *)(param_1 + 0x30);
        puVar15 = (undefined8 *)FUN_147dde4de(param_2,param_3,param_4,param_5);
        if (puVar15 != (undefined8 *)0x0) {
          *puVar15 = uVar18;
          goto LAB_1437c529e;
        }
      }
    }
LAB_1437c582a:
    ppvVar24 = (void **)0x0;
    goto switchD_1437c4c2d_default;
  case 3:
    iVar7 = *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = iVar7 + 1;
    puVar15 = *(undefined8 **)(param_1 + 0x38);
    if (param_2 == 0) goto LAB_1437c54f9;
    uVar3 = *(undefined1 *)((longlong)*(undefined8 **)(param_1 + 0x38) + (longlong)iVar7);
    ppvVar24 = (void **)CONCAT71(uVar25,uVar3);
    puVar26 = *(undefined **)(param_2 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951d78) && (FUN_144b3d300(&DAT_14c951d78), DAT_14c951d78 == -1)) {
      FUN_14475b26a();
      local_110 = FUN_1409f1a5c;
      local_118 = &DAT_14c9520b8;
      local_120 = 0;
      local_128 = (longlong **)0x1008041;
      FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
      atexit(FUN_14281201f);
      _Init_thread_footer(&DAT_14c951d78);
    }
    if (DAT_14c951d30 == 0) {
      bVar30 = puVar26 != (undefined *)0x0;
      if (puVar26 != &DAT_14c951d28 && bVar30) {
        do {
          puVar26 = *(undefined **)(puVar26 + 0x30);
          bVar30 = puVar26 != (undefined *)0x0;
          if (puVar26 == &DAT_14c951d28) break;
        } while (puVar26 != (undefined *)0x0);
      }
      if (!bVar30) goto LAB_1437c4de8;
    }
    else if ((*(ulonglong *)(puVar26 + 0x18) & DAT_14c951d30) == 0) {
LAB_1437c4de8:
      puVar27 = *(undefined8 **)(param_2 + 8);
      puVar15 = (undefined8 *)FUN_14093f012();
      if (puVar15[1] == 0) {
        bVar30 = puVar27 != (undefined8 *)0x0;
        if (puVar27 != puVar15 && bVar30) {
          do {
            puVar27 = (undefined8 *)puVar27[6];
            bVar30 = puVar27 != (undefined8 *)0x0;
            if (puVar27 == puVar15) break;
          } while (puVar27 != (undefined8 *)0x0);
        }
        if (bVar30) goto LAB_1437c4eb5;
      }
      else if ((puVar27[3] & puVar15[1]) != 0) goto LAB_1437c4eb5;
      goto LAB_1437c54f9;
    }
LAB_1437c4eb5:
    puVar12 = (undefined1 *)FUN_147dde4de(param_2,param_3,param_4,param_5);
    if (puVar12 == (undefined1 *)0x0) {
LAB_1437c5889:
      uVar25 = (undefined7)((ulonglong)ppvVar24 >> 8);
      bVar22 = 1;
      bVar5 = 0;
    }
    else {
      *puVar12 = uVar3;
LAB_1437c4ed2:
      uVar25 = (undefined7)((ulonglong)ppvVar24 >> 8);
      bVar22 = 1;
      bVar5 = 1;
    }
    break;
  case 4:
    FUN_147dde3d0(param_1 + 0x28,&local_80);
    if (param_2 == 0) goto LAB_1437c5c41;
    puVar26 = *(undefined **)(param_2 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c963e88) && (FUN_144b3d300(&DAT_14c963e88), DAT_14c963e88 == -1)) {
      local_118 = (undefined *)FUN_1446ddbd2();
      local_110 = FUN_140dafe7a;
      local_120 = 0;
      local_128 = (longlong **)0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
    }
    if (DAT_14c963e40 == 0) {
      bVar30 = puVar26 != (undefined *)0x0;
      if (puVar26 != &DAT_14c963e38 && bVar30) {
        do {
          puVar26 = *(undefined **)(puVar26 + 0x30);
          bVar30 = puVar26 != (undefined *)0x0;
          if (puVar26 == &DAT_14c963e38) break;
        } while (puVar26 != (undefined *)0x0);
      }
      if (!bVar30) goto LAB_1437c53cf;
LAB_1437c559d:
      pplVar16 = (longlong **)FUN_147dde4de(param_2,param_3,param_4,param_5);
      plVar21 = local_80;
      ppvVar24 = (void **)CONCAT71(uVar25,pplVar16 != (longlong **)0x0);
      if (pplVar16 != &local_80 && pplVar16 != (longlong **)0x0) {
        *(int *)(pplVar16 + 1) = local_78;
        if (local_78 == 0 && *(int *)((longlong)pplVar16 + 0xc) == 0) {
          *(undefined4 *)((longlong)pplVar16 + 0xc) = 0;
LAB_1437c5f82:
          ppvVar24 = (void **)CONCAT71((int7)((ulonglong)ppvVar24 >> 8),1);
        }
        else {
          FUN_1446dd670(pplVar16,local_78);
          ppvVar24 = (void **)CONCAT71(uVar25,1);
          if (local_78 != 0) {
            memcpy(*pplVar16,plVar21,(longlong)local_78 * 2);
          }
        }
      }
    }
    else {
      if ((*(ulonglong *)(puVar26 + 0x18) & DAT_14c963e40) != 0) goto LAB_1437c559d;
LAB_1437c53cf:
      puVar26 = *(undefined **)(param_2 + 8);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9520b0) && (FUN_144b3d300(&DAT_14c9520b0), DAT_14c9520b0 == -1))
      {
        local_118 = (undefined *)FUN_1446ddbd2();
        local_110 = FUN_1409e12a0;
        local_120 = 0;
        local_128 = (longlong **)0xa001;
        FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
        atexit(FUN_142816ef9);
        _Init_thread_footer(&DAT_14c9520b0);
      }
      if (DAT_14c952068 != 0) {
        if ((*(ulonglong *)(puVar26 + 0x18) & DAT_14c952068) != 0) goto LAB_1437c564e;
LAB_1437c5412:
        puVar26 = *(undefined **)(param_2 + 8);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c963ee0) &&
           (FUN_144b3d300(&DAT_14c963ee0), DAT_14c963ee0 == -1)) {
          local_118 = (undefined *)FUN_1446ddbd2();
          local_110 = FUN_140fb5c52;
          local_120 = 0;
          local_128 = (longlong **)0x40008001;
          FUN_14000176a(&DAT_14c963e90,L"FTextProperty",0x40000000,0);
          atexit(FUN_14282980e);
          _Init_thread_footer(&DAT_14c963ee0);
        }
        if (DAT_14c963e98 != 0) {
          if ((*(ulonglong *)(puVar26 + 0x18) & DAT_14c963e98) == 0) goto LAB_1437c5455;
LAB_1437c56a1:
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
            DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
            DAT_14c844840[1] = 0;
            *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
            DAT_14c844840[2] = -1;
            DAT_14c844840[3] = 0;
            DAT_14c844840[4] = 0;
            DAT_14c844840[5] = 0;
            if (DAT_14c844840 != (longlong *)0x0) {
              LOCK();
              *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
              UNLOCK();
            }
            DAT_14c844848 = 0;
            atexit(FUN_142760bef);
            _Init_thread_footer(&DAT_14c844850);
          }
          local_b8 = DAT_14c844840;
          if (DAT_14c844840 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
              LOCK();
              *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
              UNLOCK();
            }
            else {
              (**(code **)(*DAT_14c844840 + 8))();
            }
          }
          local_b0 = 0;
          plVar21 = local_80;
          if (local_78 == 0) {
            plVar21 = (longlong *)&DAT_149dfb77a;
          }
          local_128 = (longlong **)((ulonglong)local_128 & 0xffffffffffffff00);
          lVar28 = FUN_140c97480(plVar21,&local_b8,0,0);
          if (lVar28 == 0) {
            FUN_140009b9a(&local_d8,&local_80);
            FUN_140008f88(&local_b8,&local_d8);
            if (local_d8 != (code *)0x0) {
              (**(code **)(*(longlong *)local_d8 + 0x10))();
            }
          }
          local_128 = &local_b8;
          uVar8 = FUN_147dde48a(param_2,param_3,param_4,param_5);
          ppvVar24 = (void **)(ulonglong)uVar8;
          if (local_b8 != (longlong *)0x0) {
            (**(code **)(*local_b8 + 0x10))();
          }
          goto LAB_1437c5c43;
        }
        bVar30 = puVar26 != (undefined *)0x0;
        if (puVar26 != &DAT_14c963e90 && bVar30) {
          do {
            puVar26 = *(undefined **)(puVar26 + 0x30);
            bVar30 = puVar26 != (undefined *)0x0;
            if (puVar26 == &DAT_14c963e90) break;
          } while (puVar26 != (undefined *)0x0);
        }
        if (bVar30) goto LAB_1437c56a1;
LAB_1437c5455:
        puVar26 = *(undefined **)(param_2 + 8);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951d78) &&
           (FUN_144b3d300(&DAT_14c951d78), DAT_14c951d78 == -1)) {
          FUN_14475b26a();
          local_110 = FUN_1409f1a5c;
          local_118 = &DAT_14c9520b8;
          local_120 = 0;
          local_128 = (longlong **)0x1008041;
          FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
          atexit(FUN_14281201f);
          _Init_thread_footer(&DAT_14c951d78);
        }
        if (DAT_14c951d30 == 0) {
          bVar30 = puVar26 != (undefined *)0x0;
          if (puVar26 != &DAT_14c951d28 && bVar30) {
            do {
              puVar26 = *(undefined **)(puVar26 + 0x30);
              bVar30 = puVar26 != (undefined *)0x0;
              if (puVar26 == &DAT_14c951d28) break;
            } while (puVar26 != (undefined *)0x0);
          }
          if (bVar30) goto LAB_1437c5498;
LAB_1437c578f:
          puVar26 = *(undefined **)(param_2 + 8);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c9496d8) && (FUN_144b3d300(&DAT_14c9496d8), DAT_14c9496d8 == -1)) {
            local_118 = (undefined *)FUN_1446ddbd2();
            local_110 = FUN_140a4831c;
            local_128 = (longlong **)0x1000000008001;
            local_120 = 0;
            FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
            atexit(FUN_1427e14fe);
            _Init_thread_footer(&DAT_14c9496d8);
          }
          if (DAT_14c949690 == 0) {
            bVar30 = puVar26 != (undefined *)0x0;
            if (puVar26 != &DAT_14c949688 && bVar30) {
              do {
                puVar26 = *(undefined **)(puVar26 + 0x30);
                bVar30 = puVar26 != (undefined *)0x0;
                if (puVar26 == &DAT_14c949688) break;
              } while (puVar26 != (undefined *)0x0);
            }
            if (bVar30) goto LAB_1437c57d2;
          }
          else if ((*(ulonglong *)(puVar26 + 0x18) & DAT_14c949690) != 0) {
LAB_1437c57d2:
            lVar28 = *(longlong *)(param_2 + 0x78);
            plVar21 = local_80;
            if (local_78 == 0) {
              plVar21 = (longlong *)&DAT_149dfb77a;
            }
            FUN_1446f470e(&local_90,plVar21,1);
            ppvVar24 = (void **)0x0;
            iVar7 = FUN_1448e5bf4(lVar28,local_90,0);
            if (iVar7 != -1) {
              lVar28 = *(longlong *)(*(longlong *)(lVar28 + 0x40) + 8 + (longlong)iVar7 * 0x10);
              if ((lVar28 == -1) ||
                 (lVar13 = FUN_147dde4de(param_2,param_3,param_4,param_5), lVar13 == 0))
              goto LAB_1437c5c41;
              (**(code **)(**(longlong **)(param_2 + 0x70) + 0x1f8))
                        (*(longlong **)(param_2 + 0x70),lVar13,lVar28);
              goto LAB_1437c5f82;
            }
            goto LAB_1437c5c43;
          }
          lVar28 = *(longlong *)(param_2 + 8);
          lVar13 = FUN_140019cf2();
          if (*(ulonglong *)(lVar13 + 8) == 0) {
            bVar30 = lVar28 != 0;
            if (lVar28 != lVar13 && bVar30) {
              do {
                lVar28 = *(longlong *)(lVar28 + 0x30);
                bVar30 = lVar28 != 0;
                if (lVar28 == lVar13) break;
              } while (lVar28 != 0);
            }
            if (!bVar30) goto LAB_1437c595d;
LAB_1437c5a4a:
            plVar21 = local_80;
            if (local_78 == 0) {
              plVar21 = (longlong *)&DAT_149dfb77a;
            }
            if (DAT_14c949118 == 0) {
              local_70 = FUN_140631fbe;
              lVar28 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
              DAT_14c949118 = lVar28;
              FUN_1446f470e(local_68,L"Class",1);
              local_f8 = &LAB_146891e90;
              local_100 = (code *)&LAB_146273097;
              local_110 = (code *)0x149e2b68a;
              local_108 = 199;
              local_118 = (undefined *)0x20;
              local_120._0_4_ = 0x10000000;
              local_128._0_4_ = 8;
              local_f0 = &local_70;
              FUN_14574b4b2(lVar28);
              DAT_14c949118 = lVar28;
              uVar18 = FUN_144a7a812();
              lVar28 = DAT_14c949118;
              if (DAT_14c948f88 == 0) {
                local_d8 = (code *)&DAT_1427db2a2;
                DAT_14c948f88 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
                local_e0 = DAT_14c948f88;
                FUN_1446f470e(&local_b8,L"Struct",1);
                lVar13 = local_e0;
                local_f0 = (code **)&local_d8;
                local_f8 = &LAB_146891313;
                local_100 = FUN_146272f63;
                local_110 = (code *)0x149e2b68a;
                local_108 = 199;
                local_118 = (undefined *)0x8;
                local_120._0_4_ = 0x10000020;
                local_128 = (longlong **)CONCAT44(local_128._4_4_,8);
                FUN_14574b4b2(local_e0);
                DAT_14c948f88 = lVar13;
                uVar19 = FUN_1446f8646();
                local_e0 = DAT_14c948f88;
                uVar20 = FUN_1400163b0();
                local_128 = (longlong **)0x149e6bce8;
                FUN_14574b446(uVar20,local_e0,uVar19,L"/Script/CoreUObject");
              }
              local_128 = (longlong **)0x149e6ee30;
              FUN_14574b446(DAT_14c948f88,lVar28,uVar18,L"/Script/CoreUObject");
            }
            local_110 = (code *)0x0;
            local_120 = 0;
            local_118 = (undefined *)CONCAT71(local_118._1_7_,1);
            local_128 = (longlong **)CONCAT44(local_128._4_4_,2);
            local_b8 = (longlong *)FUN_1412ecd05(DAT_14c949118,0,plVar21,0);
            local_128 = &local_b8;
            uVar8 = FUN_147dde64a(param_2,param_3,param_4,param_5);
LAB_1437c5efa:
            ppvVar24 = (void **)(ulonglong)uVar8;
          }
          else {
            if ((*(ulonglong *)(lVar28 + 0x18) & *(ulonglong *)(lVar13 + 8)) != 0)
            goto LAB_1437c5a4a;
LAB_1437c595d:
            lVar28 = *(longlong *)(param_2 + 8);
            lVar13 = FUN_140f4d408();
            if (*(ulonglong *)(lVar13 + 8) == 0) {
              bVar30 = lVar28 != 0;
              if (lVar28 != lVar13 && bVar30) {
                do {
                  lVar28 = *(longlong *)(lVar28 + 0x30);
                  bVar30 = lVar28 != 0;
                  if (lVar28 == lVar13) break;
                } while (lVar28 != 0);
              }
              if (!bVar30) goto LAB_1437c5a96;
            }
            else if ((*(ulonglong *)(lVar28 + 0x18) & *(ulonglong *)(lVar13 + 8)) == 0) {
LAB_1437c5a96:
              puVar26 = *(undefined **)(param_2 + 8);
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c952478) &&
                 (FUN_144b3d300(&DAT_14c952478), DAT_14c952478 == -1)) {
                FUN_1446f4b16();
                local_110 = FUN_1403a5f94;
                local_118 = &DAT_14c951c78;
                local_120 = 0;
                local_128 = (longlong **)0x4018001;
                FUN_14000176a(&DAT_14c952428,L"FObjectProperty",0x10000,0);
                atexit(FUN_1428170e8);
                _Init_thread_footer(&DAT_14c952478);
              }
              if (DAT_14c952430 == 0) {
                bVar30 = puVar26 != (undefined *)0x0;
                if (puVar26 != &DAT_14c952428 && bVar30) {
                  do {
                    puVar26 = *(undefined **)(puVar26 + 0x30);
                    bVar30 = puVar26 != (undefined *)0x0;
                    if (puVar26 == &DAT_14c952428) break;
                  } while (puVar26 != (undefined *)0x0);
                }
                if (bVar30) goto LAB_1437c5b75;
              }
              else if ((*(ulonglong *)(puVar26 + 0x18) & DAT_14c952430) != 0) {
LAB_1437c5b75:
                plVar21 = local_80;
                if (local_78 == 0) {
                  plVar21 = (longlong *)&DAT_149dfb77a;
                }
                local_b8 = (longlong *)FUN_140277b32(*(undefined8 *)(param_2 + 0x70),0,plVar21,0);
                local_128 = &local_b8;
                uVar8 = FUN_147dde6ae(param_2,param_3,param_4,param_5);
                goto LAB_1437c5efa;
              }
              lVar28 = *(longlong *)(param_2 + 8);
              lVar13 = FUN_14010a2ea();
              if (*(ulonglong *)(lVar13 + 8) == 0) {
                bVar30 = lVar28 != 0;
                if (lVar28 != lVar13 && bVar30) {
                  do {
                    lVar28 = *(longlong *)(lVar28 + 0x30);
                    bVar30 = lVar28 != 0;
                    if (lVar28 == lVar13) break;
                  } while (lVar28 != 0);
                }
                if (bVar30) goto LAB_1437c5bee;
              }
              else if ((*(ulonglong *)(lVar28 + 0x18) & *(ulonglong *)(lVar13 + 8)) != 0) {
LAB_1437c5bee:
                plVar21 = local_80;
                if (local_78 == 0) {
                  plVar21 = (longlong *)&DAT_149dfb77a;
                }
                uVar8 = 0;
                lVar28 = FUN_140277b32(*(undefined8 *)(param_2 + 0x70),0,plVar21,0);
                ppvVar29 = (void **)0x0;
                if (lVar28 != 0) {
                  uVar8 = *(uint *)(lVar28 + 0xc);
                  if ((int)uVar8 < DAT_14c9647dc) {
                    lVar28 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
                  }
                  else {
                    lVar28 = 0;
                  }
                  ppvVar29 = (void **)(ulonglong)*(uint *)(lVar28 + 0x10);
                  if (*(uint *)(lVar28 + 0x10) == 0) {
                    LOCK();
                    iVar7 = DAT_14c964868 + 1;
                    UNLOCK();
                    uVar23 = DAT_14c964868 + 1;
                    ppvVar24 = (void **)(ulonglong)uVar23;
                    bVar30 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar7;
                    if (bVar30) {
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                    ,ppvVar24);
                    }
                    LOCK();
                    uVar9 = *(uint *)(lVar28 + 0x10);
                    bVar30 = uVar9 == 0;
                    if (bVar30) {
                      *(uint *)(lVar28 + 0x10) = uVar23;
                      uVar9 = 0;
                    }
                    UNLOCK();
                    ppvVar29 = (void **)(ulonglong)uVar9;
                    if (bVar30) {
                      ppvVar29 = ppvVar24;
                    }
                  }
                }
                puVar17 = (ulonglong *)FUN_147dde4de(param_2,param_3,param_4,param_5);
                if (puVar17 == (ulonglong *)0x0) goto LAB_1437c5c41;
                *puVar17 = (ulonglong)uVar8 | (longlong)ppvVar29 << 0x20;
                goto LAB_1437c5f82;
              }
              puVar26 = *(undefined **)(param_2 + 8);
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c9529b0) &&
                 (FUN_144b3d300(&DAT_14c9529b0), DAT_14c9529b0 == -1)) {
                FUN_1446f4b16();
                local_110 = FUN_140f17fc6;
                local_118 = &DAT_14c951c78;
                local_120 = 0;
                local_128 = (longlong **)0x24008001;
                FUN_14000176a(&DAT_14c952960,L"FSoftObjectProperty",0x20000000,0);
                atexit(FUN_142818859);
                _Init_thread_footer(&DAT_14c9529b0);
              }
              if (DAT_14c952968 == 0) {
                bVar30 = puVar26 != (undefined *)0x0;
                if (puVar26 != &DAT_14c952960 && bVar30) {
                  do {
                    puVar26 = *(undefined **)(puVar26 + 0x30);
                    bVar30 = puVar26 != (undefined *)0x0;
                    if (puVar26 == &DAT_14c952960) break;
                  } while (puVar26 != (undefined *)0x0);
                }
                if (bVar30) goto LAB_1437c5d2e;
              }
              else if ((*(ulonglong *)(puVar26 + 0x18) & DAT_14c952968) != 0) goto LAB_1437c5d2e;
LAB_1437c5c41:
              ppvVar24 = (void **)0x0;
              goto LAB_1437c5c43;
            }
LAB_1437c5d2e:
            local_d8 = (code *)0x0;
            uStack_d0 = 0;
            local_c8 = (void *)0x0;
            uStack_c0 = 0;
            local_b8 = local_80;
            local_b0 = local_78 + -1;
            if (local_78 == 0) {
              local_b0 = 0;
            }
            FUN_14475bf92(&local_d8,&local_b8);
            pvVar4 = local_c8;
            local_b8 = (longlong *)0x0;
            local_b0 = (undefined4)local_d8;
            uStack_ac = local_d8._4_4_;
            uStack_a8 = (undefined4)uStack_d0;
            uStack_a4 = uStack_d0._4_4_;
            local_a0 = (void *)0x0;
            lVar28 = (longlong)(int)uStack_c0;
            local_98 = (int)uStack_c0;
            if (lVar28 == 0) {
              local_94 = 0;
            }
            else {
              ppvVar24 = &local_a0;
              FUN_1446dd670(ppvVar24,uStack_c0 & 0xffffffff,0);
              memcpy(local_a0,pvVar4,lVar28 * 2);
            }
            pplVar16 = (longlong **)FUN_147dde4de(param_2,param_3,param_4,param_5);
            iVar7 = local_98;
            pvVar4 = local_a0;
            ppvVar24 = (void **)CONCAT71((int7)((ulonglong)ppvVar24 >> 8),
                                         pplVar16 != (longlong **)0x0);
            if (pplVar16 != (longlong **)0x0) {
              *pplVar16 = local_b8;
              *(int *)(pplVar16 + 1) = local_b0;
              *(undefined4 *)((longlong)pplVar16 + 0xc) = uStack_ac;
              *(undefined4 *)(pplVar16 + 2) = uStack_a8;
              *(undefined4 *)((longlong)pplVar16 + 0x14) = uStack_a4;
              if (pplVar16 != &local_b8) {
                lVar28 = (longlong)local_98;
                *(int *)(pplVar16 + 4) = local_98;
                if (local_98 == 0 && *(int *)((longlong)pplVar16 + 0x24) == 0) {
                  *(undefined4 *)((longlong)pplVar16 + 0x24) = 0;
                }
                else {
                  FUN_1446dd670(pplVar16 + 3,local_98);
                  if (iVar7 != 0) {
                    memcpy(pplVar16[3],pvVar4,lVar28 * 2);
                  }
                }
              }
            }
            if (local_a0 != (void *)0x0) {
              FUN_1400020a8();
            }
            if (local_c8 != (void *)0x0) {
              FUN_1400020a8();
            }
          }
          goto LAB_1437c5c43;
        }
        if ((*(ulonglong *)(puVar26 + 0x18) & DAT_14c951d30) == 0) goto LAB_1437c578f;
LAB_1437c5498:
        lVar28 = *(longlong *)(param_2 + 0x70);
        if (lVar28 == 0) goto LAB_1437c5c41;
        plVar21 = local_80;
        if (local_78 == 0) {
          plVar21 = (longlong *)&DAT_149dfb77a;
        }
        FUN_1446f470e(&local_88,plVar21,1);
        ppvVar24 = (void **)0x0;
        iVar7 = FUN_1448e5bf4(lVar28,local_88,0);
        if (iVar7 == -1) goto LAB_1437c5c43;
        lVar28 = *(longlong *)(*(longlong *)(lVar28 + 0x40) + 8 + (longlong)iVar7 * 0x10);
        if ((lVar28 == -1) ||
           (puVar12 = (undefined1 *)FUN_147dde4de(param_2,param_3,param_4,param_5),
           puVar12 == (undefined1 *)0x0)) goto LAB_1437c5c41;
        *puVar12 = (char)lVar28;
        goto LAB_1437c5f82;
      }
      bVar30 = puVar26 != (undefined *)0x0;
      if (puVar26 != &DAT_14c952060 && bVar30) {
        do {
          puVar26 = *(undefined **)(puVar26 + 0x30);
          bVar30 = puVar26 != (undefined *)0x0;
          if (puVar26 == &DAT_14c952060) break;
        } while (puVar26 != (undefined *)0x0);
      }
      if (!bVar30) goto LAB_1437c5412;
LAB_1437c564e:
      plVar21 = local_80;
      if (local_78 == 0) {
        plVar21 = (longlong *)&DAT_149dfb77a;
      }
      FUN_1446f470e(&local_b8,plVar21,1);
      puVar15 = (undefined8 *)FUN_147dde4de(param_2,param_3,param_4,param_5);
      ppvVar24 = (void **)CONCAT71(uVar25,puVar15 != (undefined8 *)0x0);
      if (puVar15 != (undefined8 *)0x0) {
        *puVar15 = local_b8;
      }
    }
LAB_1437c5c43:
    if (local_80 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  default:
    goto switchD_1437c4c2d_default;
  }
  ppvVar24 = (void **)CONCAT71(uVar25,bVar22 & bVar5);
switchD_1437c4c2d_default:
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)ppvVar24 & 0xffffffff;
}



// FUNCTION 1437c6b0f FUN_1437c6b0f body=573 status=ok
// SIG undefined FUN_1437c6b0f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1437c6b0f(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_a8 [40];
  ulonglong *local_80;
  ulonglong *local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb12698) && (FUN_144b3d300(&DAT_14cb12698), DAT_14cb12698 == -1)) {
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    local_70 = (ulonglong)DAT_14c892c2c;
    local_68 = (ulonglong)DAT_14c892c18;
    local_58 = (ulonglong)DAT_14c892c40;
    local_60 = (ulonglong)DAT_14c892c24;
    local_48 = (ulonglong)DAT_14c892c54;
    local_50 = (ulonglong)DAT_14c892c3c;
    local_38 = (ulonglong)DAT_14c892c5c;
    local_40 = (ulonglong)DAT_14c892c30;
    local_28 = (ulonglong)DAT_14c892cb0;
    local_30 = (ulonglong)DAT_14c892c14;
    local_20 = (ulonglong)DAT_14c892c0c;
    FUN_1446f470e(local_18,L"OrientedBox",1);
    local_78 = &local_10;
    DAT_14cb12668 = 0;
    _DAT_14cb12670 = 0;
    DAT_14cb12648 = 0;
    _DAT_14cb12650 = 0;
    _DAT_14cb12674 = 0xffffffff00000080;
    DAT_14cb1267c = 0;
    DAT_14cb12688 = (undefined *)0x0;
    DAT_14cb12690 = 0;
    local_80 = &local_70;
    FUN_1415d1052(&DAT_14cb12648);
    atexit(FUN_1437cd3a4);
    _Init_thread_footer(&DAT_14cb12698);
  }
  if ((param_1 != 0) && (DAT_14cb12650 != DAT_14cb1267c)) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar4 = (uint)lVar1 & 0xffff;
    puVar5 = &DAT_14cb12680;
    if (DAT_14cb12688 != (undefined *)0x0) {
      puVar5 = DAT_14cb12688;
    }
    uVar3 = (ulonglong)
            (DAT_14cb12690 - 1U &
            (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar4) +
            (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4));
    iVar6 = *(int *)(puVar5 + uVar3 * 4);
    if (iVar6 != -1) {
      do {
        bVar7 = *(longlong *)(DAT_14cb12648 + (longlong)iVar6 * 0x10) == lVar1;
        uVar3 = CONCAT71((int7)(uVar3 >> 8),bVar7);
        if (bVar7) break;
        iVar6 = *(int *)((longlong)iVar6 * 0x10 + DAT_14cb12648 + 8);
      } while (iVar6 != -1);
      goto LAB_1437c6bee;
    }
  }
  uVar3 = 0;
LAB_1437c6bee:
  if ((local_10 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1437c6d4e FUN_1437c6d4e body=4208 status=ok
// SIG undefined FUN_1437c6d4e(void)

void FUN_1437c6d4e(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  bool bVar14;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined *local_58;
  code *local_50;
  ulonglong local_48 [3];
  
  local_48[2] = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar12 = *(undefined8 **)(param_2 + 0x30);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1)) {
    local_58 = (undefined *)FUN_1446ddbd2();
    local_50 = FUN_14067a048;
    local_60 = 0;
    local_68 = 0x28001;
    FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
    atexit(FUN_142811fe5);
    _Init_thread_footer(&DAT_14c951d20);
  }
  if (puVar12 == &DAT_14c951cd0) {
    lVar9 = *(longlong *)(param_2 + 0x20);
    local_48[0] = CONCAT71(local_48[0]._1_7_,
                           (*(byte *)((ulonglong)*(byte *)(lVar9 + 0x71) +
                                     (longlong)param_3 * (longlong)*(int *)(lVar9 + 0x34) +
                                     (longlong)*(int *)(lVar9 + 0x44) +
                                     *(longlong *)(param_2 + 0x18)) & *(byte *)(lVar9 + 0x73)) != 0)
    ;
    FUN_147ddef1b(param_1 + 8,param_2);
    goto LAB_1437c764c;
  }
  puVar13 = *(undefined **)(param_2 + 0x30);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9496d8) && (FUN_144b3d300(&DAT_14c9496d8), DAT_14c9496d8 == -1)) {
    local_58 = (undefined *)FUN_1446ddbd2();
    local_50 = FUN_140a4831c;
    local_68 = 0x1000000008001;
    local_60 = 0;
    FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
    atexit(FUN_1427e14fe);
    _Init_thread_footer(&DAT_14c9496d8);
  }
  if (puVar13 == &DAT_14c949688) {
    lVar9 = *(longlong *)(param_2 + 0x20);
    lVar7 = *(longlong *)(lVar9 + 0x78);
    uVar8 = (**(code **)(**(longlong **)(lVar9 + 0x70) + 0x220))
                      (*(longlong **)(lVar9 + 0x70),
                       (longlong)param_3 * (longlong)*(int *)(lVar9 + 0x34) +
                       (longlong)*(int *)(lVar9 + 0x44) + *(longlong *)(param_2 + 0x18));
LAB_1437c73ea:
    FUN_1401cfad2(lVar7,local_48,uVar8);
LAB_1437c7631:
    FUN_147ddf0b9(param_1 + 8,param_2,local_48);
  }
  else {
    puVar13 = *(undefined **)(param_2 + 0x30);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951d78) && (FUN_144b3d300(&DAT_14c951d78), DAT_14c951d78 == -1)) {
      FUN_14475b26a();
      local_50 = FUN_1409f1a5c;
      local_58 = &DAT_14c9520b8;
      local_60 = 0;
      local_68 = 0x1008041;
      FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
      atexit(FUN_14281201f);
      _Init_thread_footer(&DAT_14c951d78);
    }
    if (puVar13 == &DAT_14c951d28) {
      plVar11 = *(longlong **)(param_2 + 0x20);
      lVar9 = (**(code **)(*plVar11 + 0x1f0))(plVar11);
      if (lVar9 == 0) {
        if (*(char *)(param_1 + 0x40) == '\x01') {
          iVar3 = *(int *)((longlong)plVar11 + 0x44);
          lVar9 = *(longlong *)(param_2 + 0x18);
          iVar1 = *(int *)((longlong)plVar11 + 0x34);
          iVar2 = *(int *)(param_1 + 0x38);
          *(uint *)(param_1 + 0x38) = iVar2 + 1U;
          if (*(uint *)(param_1 + 0x3c) < iVar2 + 1U) {
            FUN_1447403be((longlong *)(param_1 + 0x30),iVar2);
          }
          *(undefined1 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar2) =
               *(undefined1 *)(iVar3 + lVar9 + (longlong)iVar1 * (longlong)param_3);
          goto LAB_1437c764c;
        }
        local_48[0] = (ulonglong)
                      *(byte *)((longlong)*(int *)((longlong)plVar11 + 0x34) * (longlong)param_3 +
                               (longlong)*(int *)((longlong)plVar11 + 0x44) +
                               *(longlong *)(param_2 + 0x18));
        goto LAB_1437c7554;
      }
      lVar7 = plVar11[0xe];
      uVar8 = (ulonglong)
              *(byte *)((longlong)param_3 * (longlong)*(int *)((longlong)plVar11 + 0x34) +
                       (longlong)*(int *)((longlong)plVar11 + 0x44) + *(longlong *)(param_2 + 0x18))
      ;
      goto LAB_1437c73ea;
    }
    puVar13 = *(undefined **)(param_2 + 0x30);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952420) && (FUN_144b3d300(&DAT_14c952420), DAT_14c952420 == -1)) {
      FUN_14475b26a();
      local_50 = FUN_14079c5e4;
      local_58 = &DAT_14c9520b8;
      local_68 = 0x101008001;
      local_60 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
    if (puVar13 == &DAT_14c9523d0) {
      if ((*(byte *)(param_1 + 0x28) & 8) != 0) {
        uVar10 = FUN_1448f9ec4(*(undefined8 *)(param_2 + 0x20));
        cVar6 = FUN_1437c6b0f(uVar10);
        if (cVar6 != '\0') {
          local_48[0] = CONCAT44(local_48[0]._4_4_,
                                 (float)*(double *)
                                         ((longlong)param_3 *
                                          (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x34) +
                                         (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x44) +
                                         *(longlong *)(param_2 + 0x18)));
          FUN_147ddf3fa(param_1 + 8,param_2);
          goto LAB_1437c764c;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48[2] ^ (ulonglong)auStack_88);
    }
    puVar12 = *(undefined8 **)(param_2 + 0x30);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9523c8) && (FUN_144b3d300(&DAT_14c9523c8), DAT_14c9523c8 == -1)) {
      FUN_14475b26a();
      local_50 = FUN_1408a629c;
      local_58 = &DAT_14c9520b8;
      local_60 = 0;
      local_68 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
    if (puVar12 == &DAT_14c952378) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48[2] ^ (ulonglong)auStack_88);
    }
    puVar12 = *(undefined8 **)(param_2 + 0x30);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952210) && (FUN_144b3d300(&DAT_14c952210), DAT_14c952210 == -1)) {
      FUN_14475b26a();
      local_50 = FUN_1405ebbb2;
      local_58 = &DAT_14c9520b8;
      local_60 = 0;
      local_68 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
    if (puVar12 == &DAT_14c9521c0) {
      local_48[0] = (ulonglong)
                    *(int *)((longlong)param_3 *
                             (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x34) +
                            (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x44) +
                            *(longlong *)(param_2 + 0x18));
LAB_1437c7554:
      FUN_147ddf258(param_1 + 8,param_2);
      goto LAB_1437c764c;
    }
    lVar9 = *(longlong *)(param_2 + 0x30);
    lVar7 = FUN_14093f012();
    if (lVar9 == lVar7) {
      cVar6 = *(char *)((longlong)param_3 * (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x34)
                       + (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x44) +
                         *(longlong *)(param_2 + 0x18));
      if (*(char *)(param_1 + 0x40) == '\x01') {
        iVar3 = *(int *)(param_1 + 0x38);
        *(uint *)(param_1 + 0x38) = iVar3 + 1U;
        if (*(uint *)(param_1 + 0x3c) < iVar3 + 1U) {
          FUN_1447403be((longlong *)(param_1 + 0x30),iVar3);
        }
        *(char *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar3) = cVar6;
        goto LAB_1437c764c;
      }
      local_48[0] = (ulonglong)cVar6;
      goto LAB_1437c7554;
    }
    lVar9 = *(longlong *)(param_2 + 0x30);
    lVar7 = FUN_14093f0c0();
    if (lVar9 == lVar7) {
      local_48[0] = (ulonglong)
                    *(short *)((longlong)param_3 *
                               (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x34) +
                              (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x44) +
                              *(longlong *)(param_2 + 0x18));
      goto LAB_1437c7554;
    }
    puVar13 = *(undefined **)(param_2 + 0x30);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952268) && (FUN_144b3d300(&DAT_14c952268), DAT_14c952268 == -1)) {
      FUN_14475b26a();
      local_50 = FUN_1459738d6;
      local_58 = &DAT_14c9520b8;
      local_60 = 0;
      local_68 = 0x1408001;
      FUN_14000176a(&DAT_14c952218,L"FInt64Property",0x400000,0);
      atexit(FUN_142816fda);
      _Init_thread_footer(&DAT_14c952268);
    }
    if (puVar13 == &DAT_14c952218) {
LAB_1437c7341:
      local_48[0] = *(ulonglong *)
                     ((longlong)param_3 * (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x34) +
                     (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x44) +
                     *(longlong *)(param_2 + 0x18));
      goto LAB_1437c7554;
    }
    lVar9 = *(longlong *)(param_2 + 0x30);
    lVar7 = FUN_140e98e1a();
    if (lVar9 == lVar7) {
      local_48[0] = (ulonglong)
                    *(ushort *)
                     ((longlong)param_3 * (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x34) +
                     (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x44) +
                     *(longlong *)(param_2 + 0x18));
      goto LAB_1437c7554;
    }
    puVar13 = *(undefined **)(param_2 + 0x30);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952318) && (FUN_144b3d300(&DAT_14c952318), DAT_14c952318 == -1)) {
      FUN_14475b26a();
      local_50 = FUN_1468e122c;
      local_58 = &DAT_14c9520b8;
      local_60 = 0;
      local_68 = 0x1008801;
      FUN_14000176a(&DAT_14c9522c8,L"FUInt32Property",0x800,0);
      atexit(FUN_142817034);
      _Init_thread_footer(&DAT_14c952318);
    }
    if (puVar13 == &DAT_14c9522c8) {
      local_48[0] = (ulonglong)
                    *(uint *)((longlong)param_3 *
                              (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x34) +
                             (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x44) +
                             *(longlong *)(param_2 + 0x18));
      goto LAB_1437c7554;
    }
    puVar13 = *(undefined **)(param_2 + 0x30);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952370) && (FUN_144b3d300(&DAT_14c952370), DAT_14c952370 == -1)) {
      FUN_14475b26a();
      local_50 = FUN_1468e12e4;
      local_58 = &DAT_14c9520b8;
      local_60 = 0;
      local_68 = 0x1008201;
      FUN_14000176a(&DAT_14c952320,L"FUInt64Property",0x200,0);
      atexit(FUN_142817061);
      _Init_thread_footer(&DAT_14c952370);
    }
    if (puVar13 == &DAT_14c952320) goto LAB_1437c7341;
    puVar13 = *(undefined **)(param_2 + 0x30);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9520b0) && (FUN_144b3d300(&DAT_14c9520b0), DAT_14c9520b0 == -1)) {
      local_58 = (undefined *)FUN_1446ddbd2();
      local_50 = FUN_1409e12a0;
      local_60 = 0;
      local_68 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
    if (puVar13 == &DAT_14c952060) {
      FUN_1400021e4((longlong)param_3 * (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x34) +
                    (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x44) +
                    *(longlong *)(param_2 + 0x18),local_48);
      goto LAB_1437c7631;
    }
    puVar13 = *(undefined **)(param_2 + 0x30);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c963e88) && (FUN_144b3d300(&DAT_14c963e88), DAT_14c963e88 == -1)) {
      local_58 = (undefined *)FUN_1446ddbd2();
      local_50 = FUN_140dafe7a;
      local_60 = 0;
      local_68 = 0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
    }
    if (puVar13 == &DAT_14c963e38) {
LAB_1437c76cb:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48[2] ^ (ulonglong)auStack_88);
    }
    puVar13 = *(undefined **)(param_2 + 0x30);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c963ee0) && (FUN_144b3d300(&DAT_14c963ee0), DAT_14c963ee0 == -1)) {
      local_58 = (undefined *)FUN_1446ddbd2();
      local_50 = FUN_140fb5c52;
      local_60 = 0;
      local_68 = 0x40008001;
      FUN_14000176a(&DAT_14c963e90,L"FTextProperty",0x40000000,0);
      atexit(FUN_14282980e);
      _Init_thread_footer(&DAT_14c963ee0);
    }
    if (puVar13 != &DAT_14c963e90) {
      lVar9 = *(longlong *)(param_2 + 0x30);
      lVar7 = FUN_140f4d408();
      if (lVar9 == lVar7) {
        lVar9 = (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x44) +
                *(longlong *)(param_2 + 0x18) +
                (longlong)param_3 * (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x34);
LAB_1437c7620:
        FUN_14475cc44(lVar9 + 8,local_48);
      }
      else {
        lVar9 = *(longlong *)(param_2 + 0x30);
        lVar7 = FUN_14010a2ea();
        if (lVar9 == lVar7) {
          lVar9 = (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x44) +
                  *(longlong *)(param_2 + 0x18);
          lVar7 = (longlong)param_3 * (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x34);
          iVar3 = *(int *)(lVar7 + 4 + lVar9);
          if (((((iVar3 == 0) || (uVar4 = *(uint *)(lVar9 + lVar7), (int)uVar4 < 0)) ||
               (DAT_14c9647dc <= (int)uVar4)) ||
              ((plVar11 = (longlong *)
                          ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
               plVar11 == (longlong *)0x0 || ((int)plVar11[2] != iVar3)))) ||
             ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)) {
            local_48[0] = 0;
            local_48[1] = 0;
          }
          else {
            if ((*(uint *)(plVar11 + 1) & 0x10200000) == 0) {
              lVar9 = *plVar11;
            }
            else {
              lVar9 = 0;
            }
LAB_1437c75fc:
            local_48[1] = 0;
            local_48[0] = 0;
            FUN_1401031ac(lVar9,0,local_48);
          }
        }
        else {
          puVar13 = *(undefined **)(param_2 + 0x30);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c9529b0) && (FUN_144b3d300(&DAT_14c9529b0), DAT_14c9529b0 == -1)) {
            FUN_1446f4b16();
            local_50 = FUN_140f17fc6;
            local_58 = &DAT_14c951c78;
            local_60 = 0;
            local_68 = 0x24008001;
            FUN_14000176a(&DAT_14c952960,L"FSoftObjectProperty",0x20000000,0);
            atexit(FUN_142818859);
            _Init_thread_footer(&DAT_14c9529b0);
          }
          plVar11 = *(longlong **)(param_2 + 0x20);
          if (puVar13 == &DAT_14c952960) {
            lVar9 = (longlong)param_3 * (longlong)*(int *)((longlong)plVar11 + 0x34) +
                    (longlong)*(int *)((longlong)plVar11 + 0x44) + *(longlong *)(param_2 + 0x18);
            goto LAB_1437c7620;
          }
          if (plVar11 == (longlong *)0x0) goto LAB_1437c764c;
          puVar13 = (undefined *)plVar11[1];
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c952478) && (FUN_144b3d300(&DAT_14c952478), DAT_14c952478 == -1)) {
            FUN_1446f4b16();
            local_50 = FUN_1403a5f94;
            local_58 = &DAT_14c951c78;
            local_60 = 0;
            local_68 = 0x4018001;
            FUN_14000176a(&DAT_14c952428,L"FObjectProperty",0x10000,0);
            atexit(FUN_1428170e8);
            _Init_thread_footer(&DAT_14c952478);
          }
          if (DAT_14c952430 == 0) {
            bVar14 = puVar13 != (undefined *)0x0;
            if (puVar13 != &DAT_14c952428 && bVar14) {
              do {
                puVar13 = *(undefined **)(puVar13 + 0x30);
                bVar14 = puVar13 != (undefined *)0x0;
                if (puVar13 == &DAT_14c952428) break;
              } while (puVar13 != (undefined *)0x0);
            }
            if (!bVar14) goto LAB_1437c764c;
          }
          else if ((*(ulonglong *)(puVar13 + 0x18) & DAT_14c952430) == 0) goto LAB_1437c764c;
          lVar9 = (**(code **)(*plVar11 + 0x220))(plVar11,*(undefined8 *)(param_2 + 0x18),param_3);
          local_48[0] = 0;
          local_48[1] = 0;
          if (lVar9 != 0) goto LAB_1437c75fc;
        }
      }
      goto LAB_1437c7631;
    }
    puVar12 = (undefined8 *)
              ((longlong)param_3 * (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x34) +
              (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x44) +
              *(longlong *)(param_2 + 0x18));
    if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
      plVar11 = (longlong *)*puVar12;
      if (*(code **)(*plVar11 + 0x50) != FUN_144828418) {
        plVar11 = (longlong *)(**(code **)(*plVar11 + 0x50))();
      }
      FUN_1447a1fc0(plVar11);
      pcVar5 = *(code **)(*(longlong *)*puVar12 + 0x28);
      if ((pcVar5 != FUN_14482841c) && (pcVar5 != (code *)&LAB_14010c34c)) {
        (*pcVar5)((longlong *)*puVar12);
      }
      goto LAB_1437c76cb;
    }
    local_48[0] = 0;
    local_48[1] = 0;
    FUN_1467d1a5a(local_48,puVar12,0,0);
    FUN_147ddf0b9(param_1 + 8,param_2,local_48);
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
LAB_1437c764c:
  if ((local_48[2] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437c7e0e FUN_1437c7e0e body=5312 status=ok
// SIG undefined FUN_1437c7e0e(void)

ulonglong FUN_1437c7e0e(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                       undefined4 param_5)

{
  void *pvVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  code **ppcVar13;
  ulonglong *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  code *pcVar18;
  undefined2 *puVar19;
  undefined8 unaff_RBP;
  undefined7 uVar21;
  void **ppvVar20;
  byte bVar22;
  undefined *puVar23;
  ulonglong uVar24;
  uint uVar25;
  longlong lVar26;
  ulonglong uVar27;
  bool bVar28;
  undefined1 auStack_128 [32];
  code **local_108;
  undefined8 local_100;
  undefined *local_f8;
  code *local_f0;
  undefined4 local_e8;
  code *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  void *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  ulonglong uStack_a0;
  code *local_90;
  int iStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  code *local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar21 = (undefined7)((ulonglong)unaff_RBP >> 8);
  ppvVar20 = (void **)CONCAT71(uVar21,1);
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 4:
    if (param_2 != 0) {
      cVar3 = *(char *)(*(longlong *)(param_1 + 0x20) + 0x68);
      puVar11 = *(undefined8 **)(param_2 + 8);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1))
      {
        local_f8 = (undefined *)FUN_1446ddbd2();
        local_f0 = FUN_14067a048;
        local_100 = 0;
        local_108 = (code **)0x28001;
        FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
        atexit(FUN_142811fe5);
        _Init_thread_footer(&DAT_14c951d20);
      }
      if (DAT_14c951cd8 == 0) {
        bVar28 = puVar11 != (undefined8 *)0x0;
        if (puVar11 != &DAT_14c951cd0 && bVar28) {
          do {
            puVar11 = (undefined8 *)puVar11[6];
            bVar28 = puVar11 != (undefined8 *)0x0;
            if (puVar11 == &DAT_14c951cd0) break;
          } while (puVar11 != (undefined8 *)0x0);
        }
        if (bVar28) goto LAB_1437c8117;
      }
      else if ((puVar11[3] & DAT_14c951cd8) != 0) {
LAB_1437c8117:
        lVar26 = FUN_147dde4de(param_2,param_3,param_4);
        if (lVar26 != 0) {
          if (cVar3 == '\0') {
            bVar22 = 0;
          }
          else {
            bVar22 = *(byte *)(param_2 + 0x72);
          }
          *(byte *)(lVar26 + (ulonglong)*(byte *)(param_2 + 0x71)) =
               *(byte *)(lVar26 + (ulonglong)*(byte *)(param_2 + 0x71)) & ~*(byte *)(param_2 + 0x73)
               | bVar22;
          goto switchD_1437c7e63_default;
        }
        break;
      }
    }
    FUN_140932b6e();
    break;
  case 5:
    puVar11 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
    if (param_2 != 0) {
      puVar23 = *(undefined **)(param_2 + 8);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c963e88) && (FUN_144b3d300(&DAT_14c963e88), DAT_14c963e88 == -1))
      {
        local_f8 = (undefined *)FUN_1446ddbd2();
        local_f0 = FUN_140dafe7a;
        local_100 = 0;
        local_108 = (code **)0xc001;
        FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
        atexit(FUN_142829758);
        _Init_thread_footer(&DAT_14c963e88);
      }
      if (DAT_14c963e40 == 0) {
        bVar28 = puVar23 != (undefined *)0x0;
        if (puVar23 != &DAT_14c963e38 && bVar28) {
          do {
            puVar23 = *(undefined **)(puVar23 + 0x30);
            bVar28 = puVar23 != (undefined *)0x0;
            if (puVar23 == &DAT_14c963e38) break;
          } while (puVar23 != (undefined *)0x0);
        }
        if (bVar28) goto LAB_1437c8187;
      }
      else if ((*(ulonglong *)(puVar23 + 0x18) & DAT_14c963e40) != 0) {
LAB_1437c8187:
        puVar7 = (undefined8 *)FUN_147dde4de(param_2,param_3,param_4,param_5);
        if (puVar7 != (undefined8 *)0x0) {
          if (puVar7 != puVar11) {
            iVar4 = *(int *)(puVar11 + 1);
            pvVar1 = (void *)*puVar11;
            *(int *)(puVar7 + 1) = iVar4;
            if (iVar4 == 0 && *(int *)((longlong)puVar7 + 0xc) == 0) {
              *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
            }
            else {
              FUN_1446dd670(puVar7,iVar4);
              if (iVar4 != 0) {
                memcpy((void *)*puVar7,pvVar1,(longlong)iVar4 * 2);
              }
            }
          }
          goto switchD_1437c7e63_default;
        }
        break;
      }
      puVar23 = *(undefined **)(param_2 + 8);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9520b0) && (FUN_144b3d300(&DAT_14c9520b0), DAT_14c9520b0 == -1))
      {
        local_f8 = (undefined *)FUN_1446ddbd2();
        local_f0 = FUN_1409e12a0;
        local_100 = 0;
        local_108 = (code **)0xa001;
        FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
        atexit(FUN_142816ef9);
        _Init_thread_footer(&DAT_14c9520b0);
      }
      if (DAT_14c952068 == 0) {
        bVar28 = puVar23 != (undefined *)0x0;
        if (puVar23 != &DAT_14c952060 && bVar28) {
          do {
            puVar23 = *(undefined **)(puVar23 + 0x30);
            bVar28 = puVar23 != (undefined *)0x0;
            if (puVar23 == &DAT_14c952060) break;
          } while (puVar23 != (undefined *)0x0);
        }
        if (!bVar28) goto LAB_1437c7fb4;
LAB_1437c85d2:
        if (*(int *)(puVar11 + 1) == 0) {
          puVar19 = &DAT_149dfb77a;
        }
        else {
          puVar19 = (undefined2 *)*puVar11;
        }
        FUN_1446f470e(&local_90,puVar19,1);
LAB_1437c8e9f:
        puVar11 = (undefined8 *)FUN_147dde4de(param_2,param_3,param_4,param_5);
        ppvVar20 = (void **)CONCAT71(uVar21,puVar11 != (undefined8 *)0x0);
        pcVar18 = local_90;
        if (puVar11 == (undefined8 *)0x0) goto switchD_1437c7e63_default;
LAB_1437c8ec1:
        *puVar11 = pcVar18;
        goto switchD_1437c7e63_default;
      }
      if ((*(ulonglong *)(puVar23 + 0x18) & DAT_14c952068) != 0) goto LAB_1437c85d2;
LAB_1437c7fb4:
      puVar23 = *(undefined **)(param_2 + 8);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c963ee0) && (FUN_144b3d300(&DAT_14c963ee0), DAT_14c963ee0 == -1))
      {
        local_f8 = (undefined *)FUN_1446ddbd2();
        local_f0 = FUN_140fb5c52;
        local_100 = 0;
        local_108 = (code **)0x40008001;
        FUN_14000176a(&DAT_14c963e90,L"FTextProperty",0x40000000,0);
        atexit(FUN_14282980e);
        _Init_thread_footer(&DAT_14c963ee0);
      }
      if (DAT_14c963e98 == 0) {
        bVar28 = puVar23 != (undefined *)0x0;
        if (puVar23 != &DAT_14c963e90 && bVar28) {
          do {
            puVar23 = *(undefined **)(puVar23 + 0x30);
            bVar28 = puVar23 != (undefined *)0x0;
            if (puVar23 == &DAT_14c963e90) break;
          } while (puVar23 != (undefined *)0x0);
        }
        if (bVar28) goto LAB_1437c861e;
      }
      else if ((*(ulonglong *)(puVar23 + 0x18) & DAT_14c963e98) != 0) {
LAB_1437c861e:
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c844850) &&
           (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
          DAT_14c844840 = (code *)FUN_14001cc68(0x30,0x10);
          *(longlong *)(DAT_14c844840 + 8) = 0;
          *(undefined ***)DAT_14c844840 = &PTR_FUN_149e19310;
          *(longlong *)(DAT_14c844840 + 0x10) = -1;
          *(longlong *)(DAT_14c844840 + 0x18) = 0;
          *(longlong *)(DAT_14c844840 + 0x20) = 0;
          *(longlong *)(DAT_14c844840 + 0x28) = 0;
          if (DAT_14c844840 != (code *)0x0) {
            LOCK();
            *(int *)(DAT_14c844840 + 8) = *(int *)(DAT_14c844840 + 8) + 1;
            UNLOCK();
          }
          DAT_14c844848 = 0;
          atexit(FUN_142760bef);
          _Init_thread_footer(&DAT_14c844850);
        }
        local_90 = DAT_14c844840;
        if (DAT_14c844840 != (code *)0x0) {
          if (*(code **)(*(longlong *)DAT_14c844840 + 8) == FUN_144907e24) {
            LOCK();
            *(int *)(DAT_14c844840 + 8) = *(int *)(DAT_14c844840 + 8) + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*(longlong *)DAT_14c844840 + 8))();
          }
        }
        iStack_88 = 0;
        if (*(int *)(puVar11 + 1) == 0) {
          puVar19 = &DAT_149dfb77a;
        }
        else {
          puVar19 = (undefined2 *)*puVar11;
        }
        local_108 = (code **)((ulonglong)local_108 & 0xffffffffffffff00);
        lVar26 = FUN_140c97480(puVar19,&local_90,0,0);
        if (lVar26 == 0) {
          FUN_140009b9a(&local_b8,puVar11);
          FUN_140008f88(&local_90,&local_b8);
          if (local_b8 != (code *)0x0) {
            (**(code **)(*(longlong *)local_b8 + 0x10))();
          }
        }
        local_108 = &local_90;
        uVar5 = FUN_147dde48a(param_2,param_3,param_4,param_5);
        ppvVar20 = (void **)(ulonglong)uVar5;
        if (local_90 != (code *)0x0) {
          (**(code **)(*(longlong *)local_90 + 0x10))();
        }
        goto switchD_1437c7e63_default;
      }
      puVar23 = *(undefined **)(param_2 + 8);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951d78) && (FUN_144b3d300(&DAT_14c951d78), DAT_14c951d78 == -1))
      {
        FUN_14475b26a();
        local_f0 = FUN_1409f1a5c;
        local_f8 = &DAT_14c9520b8;
        local_100 = 0;
        local_108 = (code **)0x1008041;
        FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
        atexit(FUN_14281201f);
        _Init_thread_footer(&DAT_14c951d78);
      }
      if (DAT_14c951d30 == 0) {
        bVar28 = puVar23 != (undefined *)0x0;
        if (puVar23 != &DAT_14c951d28 && bVar28) {
          do {
            puVar23 = *(undefined **)(puVar23 + 0x30);
            bVar28 = puVar23 != (undefined *)0x0;
            if (puVar23 == &DAT_14c951d28) break;
          } while (puVar23 != (undefined *)0x0);
        }
        if (!bVar28) goto LAB_1437c86c9;
      }
      else if ((*(ulonglong *)(puVar23 + 0x18) & DAT_14c951d30) == 0) {
LAB_1437c86c9:
        puVar23 = *(undefined **)(param_2 + 8);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c9496d8) &&
           (FUN_144b3d300(&DAT_14c9496d8), DAT_14c9496d8 == -1)) {
          local_f8 = (undefined *)FUN_1446ddbd2();
          local_f0 = FUN_140a4831c;
          local_108 = (code **)0x1000000008001;
          local_100 = 0;
          FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
          atexit(FUN_1427e14fe);
          _Init_thread_footer(&DAT_14c9496d8);
        }
        if (DAT_14c949690 == 0) {
          bVar28 = puVar23 != (undefined *)0x0;
          if (puVar23 != &DAT_14c949688 && bVar28) {
            do {
              puVar23 = *(undefined **)(puVar23 + 0x30);
              bVar28 = puVar23 != (undefined *)0x0;
              if (puVar23 == &DAT_14c949688) break;
            } while (puVar23 != (undefined *)0x0);
          }
          if (!bVar28) goto LAB_1437c87cd;
        }
        else if ((*(ulonglong *)(puVar23 + 0x18) & DAT_14c949690) == 0) {
LAB_1437c87cd:
          lVar26 = *(longlong *)(param_2 + 8);
          lVar9 = FUN_140019cf2();
          if (*(ulonglong *)(lVar9 + 8) == 0) {
            bVar28 = lVar26 != 0;
            if (lVar26 != lVar9 && bVar28) {
              do {
                lVar26 = *(longlong *)(lVar26 + 0x30);
                bVar28 = lVar26 != 0;
                if (lVar26 == lVar9) break;
              } while (lVar26 != 0);
            }
            if (!bVar28) goto LAB_1437c87ee;
LAB_1437c8ad4:
            if (*(int *)(puVar11 + 1) == 0) {
              puVar19 = &DAT_149dfb77a;
            }
            else {
              puVar19 = (undefined2 *)*puVar11;
            }
            if (DAT_14c949118 == (void **)0x0) {
              local_58 = FUN_140631fbe;
              ppvVar20 = (void **)FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
              DAT_14c949118 = ppvVar20;
              FUN_1446f470e(local_50,L"Class",1);
              local_d8 = &LAB_146891e90;
              local_e0 = (code *)&LAB_146273097;
              local_f0 = (code *)0x149e2b68a;
              local_e8 = 199;
              local_f8 = (undefined *)0x20;
              local_100._0_4_ = 0x10000000;
              local_108._0_4_ = 8;
              local_d0 = &local_58;
              FUN_14574b4b2(ppvVar20);
              DAT_14c949118 = ppvVar20;
              uVar15 = FUN_144a7a812();
              ppvVar20 = DAT_14c949118;
              if (DAT_14c948f88 == (void *)0x0) {
                local_b8 = (code *)&DAT_1427db2a2;
                DAT_14c948f88 = (void *)FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
                local_c0 = DAT_14c948f88;
                FUN_1446f470e(&local_90,L"Struct",1);
                pvVar1 = local_c0;
                local_d0 = (code **)&local_b8;
                local_d8 = &LAB_146891313;
                local_e0 = FUN_146272f63;
                local_f0 = (code *)0x149e2b68a;
                local_e8 = 199;
                local_f8 = (undefined *)0x8;
                local_100._0_4_ = 0x10000020;
                local_108 = (code **)CONCAT44(local_108._4_4_,8);
                FUN_14574b4b2(local_c0);
                DAT_14c948f88 = pvVar1;
                uVar16 = FUN_1446f8646();
                local_c0 = DAT_14c948f88;
                uVar17 = FUN_1400163b0();
                local_108 = (code **)0x149e6bce8;
                FUN_14574b446(uVar17,local_c0,uVar16,L"/Script/CoreUObject");
              }
              local_108 = (code **)0x149e6ee30;
              FUN_14574b446(DAT_14c948f88,ppvVar20,uVar15,L"/Script/CoreUObject");
            }
            local_f0 = (code *)0x0;
            local_100 = 0;
            local_f8 = (undefined *)CONCAT71(local_f8._1_7_,1);
            local_108 = (code **)CONCAT44(local_108._4_4_,2);
            local_90 = (code *)FUN_1412ecd05(DAT_14c949118,0,puVar19,0);
            local_108 = &local_90;
            uVar5 = FUN_147dde64a(param_2,param_3,param_4,param_5);
LAB_1437c90dc:
            ppvVar20 = (void **)(ulonglong)uVar5;
            goto switchD_1437c7e63_default;
          }
          if ((*(ulonglong *)(lVar26 + 0x18) & *(ulonglong *)(lVar9 + 8)) != 0) goto LAB_1437c8ad4;
LAB_1437c87ee:
          lVar26 = *(longlong *)(param_2 + 8);
          lVar9 = FUN_140f4d408();
          if (*(ulonglong *)(lVar9 + 8) == 0) {
            bVar28 = lVar26 != 0;
            if (lVar26 != lVar9 && bVar28) {
              do {
                lVar26 = *(longlong *)(lVar26 + 0x30);
                bVar28 = lVar26 != 0;
                if (lVar26 == lVar9) break;
              } while (lVar26 != 0);
            }
            if (!bVar28) goto LAB_1437c880f;
LAB_1437c8b19:
            if (*(int *)(puVar11 + 1) == 0) {
              puVar19 = &DAT_149dfb77a;
            }
            else {
              puVar19 = (undefined2 *)*puVar11;
            }
            if (DAT_14c949118 == (void **)0x0) {
              local_58 = FUN_140631fbe;
              ppvVar20 = (void **)FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
              DAT_14c949118 = ppvVar20;
              FUN_1446f470e(local_50,L"Class",1);
              local_d8 = &LAB_146891e90;
              local_e0 = (code *)&LAB_146273097;
              local_f0 = (code *)0x149e2b68a;
              local_e8 = 199;
              local_f8 = (undefined *)0x20;
              local_100._0_4_ = 0x10000000;
              local_108._0_4_ = 8;
              local_d0 = &local_58;
              FUN_14574b4b2(ppvVar20);
              DAT_14c949118 = ppvVar20;
              uVar15 = FUN_144a7a812();
              ppvVar20 = DAT_14c949118;
              if (DAT_14c948f88 == (void *)0x0) {
                local_b8 = (code *)&DAT_1427db2a2;
                DAT_14c948f88 = (void *)FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
                local_c0 = DAT_14c948f88;
                FUN_1446f470e(&local_90,L"Struct",1);
                pvVar1 = local_c0;
                local_d0 = (code **)&local_b8;
                local_d8 = &LAB_146891313;
                local_e0 = FUN_146272f63;
                local_f0 = (code *)0x149e2b68a;
                local_e8 = 199;
                local_f8 = (undefined *)0x8;
                local_100._0_4_ = 0x10000020;
                local_108 = (code **)CONCAT44(local_108._4_4_,8);
                FUN_14574b4b2(local_c0);
                DAT_14c948f88 = pvVar1;
                uVar16 = FUN_1446f8646();
                local_c0 = DAT_14c948f88;
                uVar17 = FUN_1400163b0();
                local_108 = (code **)0x149e6bce8;
                FUN_14574b446(uVar17,local_c0,uVar16,L"/Script/CoreUObject");
              }
              local_108 = (code **)0x149e6ee30;
              FUN_14574b446(DAT_14c948f88,ppvVar20,uVar15,L"/Script/CoreUObject");
            }
            iVar4 = 0;
            local_f0 = (code *)0x0;
            local_100 = 0;
            local_f8 = (undefined *)CONCAT71(local_f8._1_7_,1);
            local_108 = (code **)CONCAT44(local_108._4_4_,2);
            lVar26 = FUN_1412ecd05(DAT_14c949118,0,puVar19,0);
            local_b8 = (code *)0x0;
            uStack_b0 = 0;
            if (lVar26 == 0) {
              local_b8 = (code *)0x0;
              uStack_b0 = 0;
              uVar27 = 0;
              uVar24 = 0;
              local_c0 = (void *)0x0;
            }
            else {
              FUN_1400bbfc4(&local_90,lVar26);
              local_b8 = local_90;
              uStack_b0 = CONCAT44(uStack_84,iStack_88);
              local_c0 = (void *)CONCAT44(uStack_7c,uStack_80);
              iVar4 = (int)local_78;
              cVar3 = (*(code *)PTR_FUN_14c758760)();
              uVar5 = *(uint *)(lVar26 + 0xc);
              uVar27 = (ulonglong)uVar5;
              if (cVar3 != '\0') {
                if ((int)uVar5 < DAT_14c9647dc) {
                  lVar26 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
                }
                else {
                  lVar26 = 0;
                }
                if ((*(uint *)(lVar26 + 8) & 0x8400000) != 0) {
                  uVar27 = 0;
                  uVar24 = 0;
                  goto LAB_1437c9296;
                }
              }
              if ((int)uVar5 < DAT_14c9647dc) {
                ppvVar20 = (void **)((ulonglong)((uVar5 & 0xffff) * 0x18) +
                                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
              }
              else {
                ppvVar20 = (void **)0x0;
              }
              uVar5 = *(uint *)(ppvVar20 + 2);
              if (*(uint *)(ppvVar20 + 2) == 0) {
                LOCK();
                iVar2 = DAT_14c964868 + 1;
                UNLOCK();
                uVar25 = DAT_14c964868 + 1;
                bVar28 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar2;
                if (bVar28) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,uVar25);
                }
                LOCK();
                uVar5 = *(uint *)(ppvVar20 + 2);
                bVar28 = uVar5 == 0;
                if (bVar28) {
                  *(uint *)(ppvVar20 + 2) = uVar25;
                  uVar5 = 0;
                }
                UNLOCK();
                if (bVar28) {
                  uVar5 = uVar25;
                }
              }
              uVar24 = (ulonglong)uVar5 << 0x20;
            }
LAB_1437c9296:
            puVar14 = (ulonglong *)FUN_147dde4de(param_2,param_3,param_4,param_5);
            pvVar1 = local_c0;
            ppvVar20 = (void **)CONCAT71((int7)((ulonglong)ppvVar20 >> 8),
                                         puVar14 != (ulonglong *)0x0);
            if (puVar14 != (ulonglong *)0x0) {
              *puVar14 = uVar24 | uVar27;
              *(undefined4 *)(puVar14 + 1) = (undefined4)local_b8;
              *(undefined4 *)((longlong)puVar14 + 0xc) = local_b8._4_4_;
              *(undefined4 *)(puVar14 + 2) = (undefined4)uStack_b0;
              *(undefined4 *)((longlong)puVar14 + 0x14) = uStack_b0._4_4_;
              *(int *)(puVar14 + 4) = iVar4;
              if (iVar4 == 0 && *(int *)((longlong)puVar14 + 0x24) == 0) {
                *(undefined4 *)((longlong)puVar14 + 0x24) = 0;
              }
              else {
                FUN_1446dd670(puVar14 + 3,iVar4);
                if (iVar4 != 0) {
                  memcpy((void *)puVar14[3],pvVar1,(longlong)iVar4 * 2);
                }
              }
            }
joined_r0x0001437c9308:
            if (pvVar1 != (void *)0x0) {
              FUN_1400020a8(pvVar1);
            }
            goto switchD_1437c7e63_default;
          }
          if ((*(ulonglong *)(lVar26 + 0x18) & *(ulonglong *)(lVar9 + 8)) != 0) goto LAB_1437c8b19;
LAB_1437c880f:
          puVar23 = *(undefined **)(param_2 + 8);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c952478) && (FUN_144b3d300(&DAT_14c952478), DAT_14c952478 == -1)) {
            FUN_1446f4b16();
            local_f0 = FUN_1403a5f94;
            local_f8 = &DAT_14c951c78;
            local_100 = 0;
            local_108 = (code **)0x4018001;
            FUN_14000176a(&DAT_14c952428,L"FObjectProperty",0x10000,0);
            atexit(FUN_1428170e8);
            _Init_thread_footer(&DAT_14c952478);
          }
          if (DAT_14c952430 == 0) {
            bVar28 = puVar23 != (undefined *)0x0;
            if (puVar23 != &DAT_14c952428 && bVar28) {
              do {
                puVar23 = *(undefined **)(puVar23 + 0x30);
                bVar28 = puVar23 != (undefined *)0x0;
                if (puVar23 == &DAT_14c952428) break;
              } while (puVar23 != (undefined *)0x0);
            }
            if (bVar28) goto LAB_1437c8b65;
          }
          else if ((*(ulonglong *)(puVar23 + 0x18) & DAT_14c952430) != 0) {
LAB_1437c8b65:
            if (*(int *)(puVar11 + 1) == 0) {
              puVar19 = &DAT_149dfb77a;
            }
            else {
              puVar19 = (undefined2 *)*puVar11;
            }
            local_90 = (code *)FUN_140277b32(*(undefined8 *)(param_2 + 0x70),0,puVar19,0);
            local_108 = &local_90;
            uVar5 = FUN_147dde6ae(param_2,param_3,param_4,param_5);
            goto LAB_1437c90dc;
          }
          lVar26 = *(longlong *)(param_2 + 8);
          lVar9 = FUN_14010a2ea();
          if (*(ulonglong *)(lVar9 + 8) == 0) {
            bVar28 = lVar26 != 0;
            if (lVar26 != lVar9 && bVar28) {
              do {
                lVar26 = *(longlong *)(lVar26 + 0x30);
                bVar28 = lVar26 != 0;
                if (lVar26 == lVar9) break;
              } while (lVar26 != 0);
            }
            if (bVar28) goto LAB_1437c8baa;
          }
          else if ((*(ulonglong *)(lVar26 + 0x18) & *(ulonglong *)(lVar9 + 8)) != 0) {
LAB_1437c8baa:
            if (*(int *)(puVar11 + 1) == 0) {
              puVar19 = &DAT_149dfb77a;
            }
            else {
              puVar19 = (undefined2 *)*puVar11;
            }
            uVar5 = 0;
            lVar26 = FUN_140277b32(*(undefined8 *)(param_2 + 0x70),0,puVar19,0);
            uVar27 = 0;
            if (lVar26 != 0) {
              uVar5 = *(uint *)(lVar26 + 0xc);
              if ((int)uVar5 < DAT_14c9647dc) {
                lVar26 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
              }
              else {
                lVar26 = 0;
              }
              uVar27 = (ulonglong)*(uint *)(lVar26 + 0x10);
              if (*(uint *)(lVar26 + 0x10) == 0) {
                LOCK();
                iVar4 = DAT_14c964868 + 1;
                UNLOCK();
                uVar25 = DAT_14c964868 + 1;
                bVar28 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar4;
                if (bVar28) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,uVar25);
                }
                LOCK();
                uVar6 = *(uint *)(lVar26 + 0x10);
                bVar28 = uVar6 == 0;
                if (bVar28) {
                  *(uint *)(lVar26 + 0x10) = uVar25;
                  uVar6 = 0;
                }
                UNLOCK();
                if (bVar28) {
                  uVar6 = uVar25;
                }
                uVar27 = (ulonglong)uVar6;
              }
            }
            puVar11 = (undefined8 *)FUN_147dde4de(param_2,param_3,param_4,param_5);
            if (puVar11 == (undefined8 *)0x0) break;
            pcVar18 = (code *)((ulonglong)uVar5 | uVar27 << 0x20);
            goto LAB_1437c8ec1;
          }
          puVar23 = *(undefined **)(param_2 + 8);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c9529b0) && (FUN_144b3d300(&DAT_14c9529b0), DAT_14c9529b0 == -1)) {
            FUN_1446f4b16();
            local_f0 = FUN_140f17fc6;
            local_f8 = &DAT_14c951c78;
            local_100 = 0;
            local_108 = (code **)0x24008001;
            FUN_14000176a(&DAT_14c952960,L"FSoftObjectProperty",0x20000000,0);
            atexit(FUN_142818859);
            _Init_thread_footer(&DAT_14c9529b0);
          }
          if (DAT_14c952968 == 0) {
            bVar28 = puVar23 != (undefined *)0x0;
            if (puVar23 != &DAT_14c952960 && bVar28) {
              do {
                puVar23 = *(undefined **)(puVar23 + 0x30);
                bVar28 = puVar23 != (undefined *)0x0;
                if (puVar23 == &DAT_14c952960) break;
              } while (puVar23 != (undefined *)0x0);
            }
            if (bVar28) goto LAB_1437c8bf6;
          }
          else if ((*(ulonglong *)(puVar23 + 0x18) & DAT_14c952968) != 0) {
LAB_1437c8bf6:
            local_b8 = (code *)0x0;
            uStack_b0 = 0;
            local_a8 = (void *)0x0;
            uStack_a0 = 0;
            local_90 = (code *)*puVar11;
            iStack_88 = *(int *)(puVar11 + 1) + -1;
            if (*(int *)(puVar11 + 1) == 0) {
              iStack_88 = 0;
            }
            FUN_14475bf92(&local_b8,&local_90);
            pvVar1 = local_a8;
            local_90 = (code *)0x0;
            iStack_88 = (undefined4)local_b8;
            uStack_84 = local_b8._4_4_;
            uStack_80 = (undefined4)uStack_b0;
            uStack_7c = uStack_b0._4_4_;
            local_78 = (void *)0x0;
            lVar26 = (longlong)(int)uStack_a0;
            local_70 = (int)uStack_a0;
            if (lVar26 == 0) {
              local_6c = 0;
            }
            else {
              ppvVar20 = &local_78;
              FUN_1446dd670(ppvVar20,uStack_a0 & 0xffffffff,0);
              memcpy(local_78,pvVar1,lVar26 * 2);
            }
            ppcVar13 = (code **)FUN_147dde4de(param_2,param_3,param_4,param_5);
            iVar4 = local_70;
            pvVar1 = local_78;
            ppvVar20 = (void **)CONCAT71((int7)((ulonglong)ppvVar20 >> 8),ppcVar13 != (code **)0x0);
            if (ppcVar13 != (code **)0x0) {
              *ppcVar13 = local_90;
              *(int *)(ppcVar13 + 1) = iStack_88;
              *(undefined4 *)((longlong)ppcVar13 + 0xc) = uStack_84;
              *(undefined4 *)(ppcVar13 + 2) = uStack_80;
              *(undefined4 *)((longlong)ppcVar13 + 0x14) = uStack_7c;
              if (ppcVar13 != &local_90) {
                lVar26 = (longlong)local_70;
                *(int *)(ppcVar13 + 4) = local_70;
                if (local_70 == 0 && *(int *)((longlong)ppcVar13 + 0x24) == 0) {
                  *(undefined4 *)((longlong)ppcVar13 + 0x24) = 0;
                }
                else {
                  FUN_1446dd670(ppcVar13 + 3,local_70);
                  if (iVar4 != 0) {
                    memcpy(ppcVar13[3],pvVar1,lVar26 * 2);
                  }
                }
              }
            }
            pvVar1 = local_a8;
            if (local_78 != (void *)0x0) {
              FUN_1400020a8();
              pvVar1 = local_a8;
            }
            goto joined_r0x0001437c9308;
          }
          break;
        }
        lVar26 = *(longlong *)(param_2 + 0x78);
        if (*(int *)(puVar11 + 1) == 0) {
          puVar19 = &DAT_149dfb77a;
        }
        else {
          puVar19 = (undefined2 *)*puVar11;
        }
        FUN_1446f470e(&local_68,puVar19,1);
        iVar4 = FUN_1448e5bf4(lVar26,local_68,0);
        if (((iVar4 != -1) &&
            (lVar26 = *(longlong *)(*(longlong *)(lVar26 + 0x40) + 8 + (longlong)iVar4 * 0x10),
            lVar26 != -1)) && (lVar9 = FUN_147dde4de(param_2,param_3,param_4,param_5), lVar9 != 0))
        {
          (**(code **)(**(longlong **)(param_2 + 0x70) + 0x1f8))
                    (*(longlong **)(param_2 + 0x70),lVar9,lVar26);
          goto switchD_1437c7e63_default;
        }
        break;
      }
      lVar26 = *(longlong *)(param_2 + 0x70);
      if (lVar26 != 0) {
        if (*(int *)(puVar11 + 1) == 0) {
          puVar19 = &DAT_149dfb77a;
        }
        else {
          puVar19 = (undefined2 *)*puVar11;
        }
        FUN_1446f470e(&local_60,puVar19,1);
        iVar4 = FUN_1448e5bf4(lVar26,local_60,0);
        if (((iVar4 != -1) &&
            (lVar26 = *(longlong *)(*(longlong *)(lVar26 + 0x40) + 8 + (longlong)iVar4 * 0x10),
            lVar26 != -1)) &&
           (puVar10 = (undefined1 *)FUN_147dde4de(param_2,param_3,param_4,param_5),
           puVar10 != (undefined1 *)0x0)) {
          *puVar10 = (char)lVar26;
          goto switchD_1437c7e63_default;
        }
      }
    }
    break;
  case 6:
    if (param_2 != 0) {
      lVar26 = *(longlong *)(param_1 + 0x20);
      puVar23 = *(undefined **)(param_2 + 8);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951d78) && (FUN_144b3d300(&DAT_14c951d78), DAT_14c951d78 == -1))
      {
        FUN_14475b26a();
        local_f0 = FUN_1409f1a5c;
        local_f8 = &DAT_14c9520b8;
        local_100 = 0;
        local_108 = (code **)0x1008041;
        FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
        atexit(FUN_14281201f);
        _Init_thread_footer(&DAT_14c951d78);
      }
      if (DAT_14c951d30 == 0) {
        bVar28 = puVar23 != (undefined *)0x0;
        if (puVar23 != &DAT_14c951d28 && bVar28) {
          do {
            puVar23 = *(undefined **)(puVar23 + 0x30);
            bVar28 = puVar23 != (undefined *)0x0;
            if (puVar23 == &DAT_14c951d28) break;
          } while (puVar23 != (undefined *)0x0);
        }
        if (bVar28) goto LAB_1437c8972;
      }
      else if ((*(ulonglong *)(puVar23 + 0x18) & DAT_14c951d30) != 0) {
LAB_1437c8972:
        local_90 = (code *)((ulonglong)local_90 & 0xffffffffffffff00);
        if (*(int *)(lVar26 + 0x50) == 0) {
          puVar19 = &DAT_149dfb77a;
        }
        else {
          puVar19 = *(undefined2 **)(lVar26 + 0x48);
        }
        cVar3 = FUN_146842de0(&local_90,puVar19);
        if (cVar3 != '\0') {
          puVar10 = (undefined1 *)FUN_147dde4de(param_2,param_3,param_4,param_5);
          ppvVar20 = (void **)CONCAT71(uVar21,puVar10 != (undefined1 *)0x0);
          if (puVar10 != (undefined1 *)0x0) {
            *puVar10 = local_90._0_1_;
          }
          goto switchD_1437c7e63_default;
        }
      }
      puVar23 = *(undefined **)(param_2 + 8);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952420) && (FUN_144b3d300(&DAT_14c952420), DAT_14c952420 == -1))
      {
        FUN_14475b26a();
        local_f0 = FUN_14079c5e4;
        local_f8 = &DAT_14c9520b8;
        local_108 = (code **)0x101008001;
        local_100 = 0;
        FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
        atexit(FUN_1428170bb);
        _Init_thread_footer(&DAT_14c952420);
      }
      if (DAT_14c9523d8 == 0) {
        bVar28 = puVar23 != (undefined *)0x0;
        if (puVar23 != &DAT_14c9523d0 && bVar28) {
          do {
            puVar23 = *(undefined **)(puVar23 + 0x30);
            bVar28 = puVar23 != (undefined *)0x0;
            if (puVar23 == &DAT_14c9523d0) break;
          } while (puVar23 != (undefined *)0x0);
        }
        if (bVar28) goto LAB_1437c8991;
      }
      else if ((*(ulonglong *)(puVar23 + 0x18) & DAT_14c9523d8) != 0) {
LAB_1437c8991:
        local_90 = (code *)0x0;
        if (*(int *)(lVar26 + 0x50) == 0) {
          puVar19 = &DAT_149dfb77a;
        }
        else {
          puVar19 = *(undefined2 **)(lVar26 + 0x48);
        }
        cVar3 = FUN_146842f4c(&local_90,puVar19);
        if (cVar3 != '\0') {
          puVar11 = (undefined8 *)FUN_147dde4de(param_2,param_3,param_4,param_5);
          ppvVar20 = (void **)CONCAT71(uVar21,puVar11 != (undefined8 *)0x0);
          if (puVar11 != (undefined8 *)0x0) {
            *puVar11 = local_90;
          }
          goto switchD_1437c7e63_default;
        }
      }
      puVar11 = *(undefined8 **)(param_2 + 8);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9523c8) && (FUN_144b3d300(&DAT_14c9523c8), DAT_14c9523c8 == -1))
      {
        FUN_14475b26a();
        local_f0 = FUN_1408a629c;
        local_f8 = &DAT_14c9520b8;
        local_100 = 0;
        local_108 = (code **)0x1008101;
        FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
        atexit(FUN_14281708e);
        _Init_thread_footer(&DAT_14c9523c8);
      }
      if (DAT_14c952380 == 0) {
        bVar28 = puVar11 != (undefined8 *)0x0;
        if (puVar11 != &DAT_14c952378 && bVar28) {
          do {
            puVar11 = (undefined8 *)puVar11[6];
            bVar28 = puVar11 != (undefined8 *)0x0;
            if (puVar11 == &DAT_14c952378) break;
          } while (puVar11 != (undefined8 *)0x0);
        }
        if (bVar28) goto LAB_1437c89b4;
      }
      else if ((puVar11[3] & DAT_14c952380) != 0) {
LAB_1437c89b4:
        local_90 = (code *)((ulonglong)local_90 & 0xffffffff00000000);
        if (*(int *)(lVar26 + 0x50) == 0) {
          puVar19 = &DAT_149dfb77a;
        }
        else {
          puVar19 = *(undefined2 **)(lVar26 + 0x48);
        }
        cVar3 = FUN_146842e8b(&local_90,puVar19);
        if (cVar3 != '\0') {
          puVar12 = (undefined4 *)FUN_147dde4de(param_2,param_3,param_4,param_5);
          ppvVar20 = (void **)CONCAT71(uVar21,puVar12 != (undefined4 *)0x0);
          if (puVar12 != (undefined4 *)0x0) {
            *puVar12 = local_90._0_4_;
          }
          goto switchD_1437c7e63_default;
        }
      }
      puVar11 = *(undefined8 **)(param_2 + 8);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952210) && (FUN_144b3d300(&DAT_14c952210), DAT_14c952210 == -1))
      {
        FUN_14475b26a();
        local_f0 = FUN_1405ebbb2;
        local_f8 = &DAT_14c9520b8;
        local_100 = 0;
        local_108 = (code **)0x1008081;
        FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
        atexit(FUN_142816fad);
        _Init_thread_footer(&DAT_14c952210);
      }
      if (DAT_14c9521c8 == 0) {
        bVar28 = puVar11 != (undefined8 *)0x0;
        if (puVar11 != &DAT_14c9521c0 && bVar28) {
          do {
            puVar11 = (undefined8 *)puVar11[6];
            bVar28 = puVar11 != (undefined8 *)0x0;
            if (puVar11 == &DAT_14c9521c0) break;
          } while (puVar11 != (undefined8 *)0x0);
        }
        if (!bVar28) goto LAB_1437c831b;
LAB_1437c89d6:
        local_90 = (code *)((ulonglong)local_90 & 0xffffffff00000000);
        if (*(int *)(lVar26 + 0x50) == 0) {
          puVar19 = &DAT_149dfb77a;
        }
        else {
          puVar19 = *(undefined2 **)(lVar26 + 0x48);
        }
        cVar3 = FUN_146842c83(&local_90,puVar19);
        if (cVar3 == '\0') goto LAB_1437c831b;
LAB_1437c8d7a:
        puVar12 = (undefined4 *)FUN_147dde4de(param_2,param_3,param_4,param_5);
        ppvVar20 = (void **)CONCAT71(uVar21,puVar12 != (undefined4 *)0x0);
        if (puVar12 != (undefined4 *)0x0) {
          *puVar12 = local_90._0_4_;
        }
        goto switchD_1437c7e63_default;
      }
      if ((puVar11[3] & DAT_14c9521c8) != 0) goto LAB_1437c89d6;
LAB_1437c831b:
      puVar23 = *(undefined **)(param_2 + 8);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952318) && (FUN_144b3d300(&DAT_14c952318), DAT_14c952318 == -1))
      {
        FUN_14475b26a();
        local_f0 = FUN_1468e122c;
        local_f8 = &DAT_14c9520b8;
        local_100 = 0;
        local_108 = (code **)0x1008801;
        FUN_14000176a(&DAT_14c9522c8,L"FUInt32Property",0x800,0);
        atexit(FUN_142817034);
        _Init_thread_footer(&DAT_14c952318);
      }
      if (DAT_14c9522d0 == 0) {
        bVar28 = puVar23 != (undefined *)0x0;
        if (puVar23 != &DAT_14c9522c8 && bVar28) {
          do {
            puVar23 = *(undefined **)(puVar23 + 0x30);
            bVar28 = puVar23 != (undefined *)0x0;
            if (puVar23 == &DAT_14c9522c8) break;
          } while (puVar23 != (undefined *)0x0);
        }
        if (bVar28) goto LAB_1437c89f8;
      }
      else if ((*(ulonglong *)(puVar23 + 0x18) & DAT_14c9522d0) != 0) {
LAB_1437c89f8:
        local_90 = (code *)((ulonglong)local_90 & 0xffffffff00000000);
        if (*(int *)(lVar26 + 0x50) == 0) {
          puVar19 = &DAT_149dfb77a;
        }
        else {
          puVar19 = *(undefined2 **)(lVar26 + 0x48);
        }
        cVar3 = FUN_1468429ca(&local_90,puVar19);
        if (cVar3 != '\0') goto LAB_1437c8d7a;
      }
      lVar9 = *(longlong *)(param_2 + 8);
      lVar8 = FUN_14093f0c0();
      if (*(ulonglong *)(lVar8 + 8) == 0) {
        bVar28 = lVar9 != 0;
        if (lVar9 != lVar8 && bVar28) {
          do {
            lVar9 = *(longlong *)(lVar9 + 0x30);
            bVar28 = lVar9 != 0;
            if (lVar9 == lVar8) break;
          } while (lVar9 != 0);
        }
        if (!bVar28) goto LAB_1437c83e5;
LAB_1437c8a1a:
        local_90 = (code *)((ulonglong)local_90 & 0xffffffffffff0000);
        if (*(int *)(lVar26 + 0x50) == 0) {
          puVar19 = &DAT_149dfb77a;
        }
        else {
          puVar19 = *(undefined2 **)(lVar26 + 0x48);
        }
        cVar3 = FUN_146842d31(&local_90,puVar19);
        if (cVar3 == '\0') goto LAB_1437c83e5;
LAB_1437c8dda:
        puVar19 = (undefined2 *)FUN_147dde4de(param_2,param_3,param_4,param_5);
        ppvVar20 = (void **)CONCAT71(uVar21,puVar19 != (undefined2 *)0x0);
        if (puVar19 != (undefined2 *)0x0) {
          *puVar19 = local_90._0_2_;
        }
        goto switchD_1437c7e63_default;
      }
      if ((*(ulonglong *)(lVar9 + 0x18) & *(ulonglong *)(lVar8 + 8)) != 0) goto LAB_1437c8a1a;
LAB_1437c83e5:
      lVar9 = *(longlong *)(param_2 + 8);
      lVar8 = FUN_140e98e1a();
      if (*(ulonglong *)(lVar8 + 8) == 0) {
        bVar28 = lVar9 != 0;
        if (lVar9 != lVar8 && bVar28) {
          do {
            lVar9 = *(longlong *)(lVar9 + 0x30);
            bVar28 = lVar9 != 0;
            if (lVar9 == lVar8) break;
          } while (lVar9 != 0);
        }
        if (bVar28) goto LAB_1437c8a3b;
      }
      else if ((*(ulonglong *)(lVar9 + 0x18) & *(ulonglong *)(lVar8 + 8)) != 0) {
LAB_1437c8a3b:
        local_90 = (code *)((ulonglong)local_90 & 0xffffffffffff0000);
        if (*(int *)(lVar26 + 0x50) == 0) {
          puVar19 = &DAT_149dfb77a;
        }
        else {
          puVar19 = *(undefined2 **)(lVar26 + 0x48);
        }
        cVar3 = FUN_146842a78(&local_90,puVar19);
        if (cVar3 != '\0') goto LAB_1437c8dda;
      }
      puVar23 = *(undefined **)(param_2 + 8);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952268) && (FUN_144b3d300(&DAT_14c952268), DAT_14c952268 == -1))
      {
        FUN_14475b26a();
        local_f0 = FUN_1459738d6;
        local_f8 = &DAT_14c9520b8;
        local_100 = 0;
        local_108 = (code **)0x1408001;
        FUN_14000176a(&DAT_14c952218,L"FInt64Property",0x400000,0);
        atexit(FUN_142816fda);
        _Init_thread_footer(&DAT_14c952268);
      }
      if (DAT_14c952220 == 0) {
        bVar28 = puVar23 != (undefined *)0x0;
        if (puVar23 != &DAT_14c952218 && bVar28) {
          do {
            puVar23 = *(undefined **)(puVar23 + 0x30);
            bVar28 = puVar23 != (undefined *)0x0;
            if (puVar23 == &DAT_14c952218) break;
          } while (puVar23 != (undefined *)0x0);
        }
        if (bVar28) goto LAB_1437c8a5c;
      }
      else if ((*(ulonglong *)(puVar23 + 0x18) & DAT_14c952220) != 0) {
LAB_1437c8a5c:
        local_90 = (code *)0x0;
        if (*(int *)(lVar26 + 0x50) == 0) {
          puVar19 = &DAT_149dfb77a;
        }
        else {
          puVar19 = *(undefined2 **)(lVar26 + 0x48);
        }
        cVar3 = FUN_146842bd2(&local_90,puVar19);
        if (cVar3 != '\0') goto LAB_1437c8e9f;
      }
      puVar23 = *(undefined **)(param_2 + 8);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952370) && (FUN_144b3d300(&DAT_14c952370), DAT_14c952370 == -1))
      {
        FUN_14475b26a();
        local_f0 = FUN_1468e12e4;
        local_f8 = &DAT_14c9520b8;
        local_100 = 0;
        local_108 = (code **)0x1008201;
        FUN_14000176a(&DAT_14c952320,L"FUInt64Property",0x200,0);
        atexit(FUN_142817061);
        _Init_thread_footer(&DAT_14c952370);
      }
      if (DAT_14c952328 == 0) {
        bVar28 = puVar23 != (undefined *)0x0;
        if (puVar23 != &DAT_14c952320 && bVar28) {
          do {
            puVar23 = *(undefined **)(puVar23 + 0x30);
            bVar28 = puVar23 != (undefined *)0x0;
            if (puVar23 == &DAT_14c952320) break;
          } while (puVar23 != (undefined *)0x0);
        }
        if (bVar28) goto LAB_1437c8a7f;
      }
      else if ((*(ulonglong *)(puVar23 + 0x18) & DAT_14c952328) != 0) {
LAB_1437c8a7f:
        local_90 = (code *)0x0;
        if (*(int *)(lVar26 + 0x50) == 0) {
          puVar19 = &DAT_149dfb77a;
        }
        else {
          puVar19 = *(undefined2 **)(lVar26 + 0x48);
        }
        cVar3 = FUN_146842914(&local_90,puVar19);
        if (cVar3 != '\0') goto LAB_1437c8e9f;
      }
      lVar9 = *(longlong *)(param_2 + 8);
      lVar8 = FUN_14093f012();
      if (*(ulonglong *)(lVar8 + 8) == 0) {
        bVar28 = lVar9 != 0;
        if (lVar9 != lVar8 && bVar28) {
          do {
            lVar9 = *(longlong *)(lVar9 + 0x30);
            bVar28 = lVar9 != 0;
            if (lVar9 == lVar8) break;
          } while (lVar9 != 0);
        }
        if (bVar28) goto LAB_1437c857a;
      }
      else if ((*(ulonglong *)(lVar9 + 0x18) & *(ulonglong *)(lVar8 + 8)) != 0) {
LAB_1437c857a:
        local_90 = (code *)((ulonglong)local_90 & 0xffffffffffffff00);
        if (*(int *)(lVar26 + 0x50) == 0) {
          puVar19 = &DAT_149dfb77a;
        }
        else {
          puVar19 = *(undefined2 **)(lVar26 + 0x48);
        }
        cVar3 = FUN_146842de0(&local_90,puVar19);
        if ((cVar3 != '\0') &&
           (puVar10 = (undefined1 *)FUN_147dde4de(param_2,param_3,param_4,param_5),
           puVar10 != (undefined1 *)0x0)) {
          *puVar10 = local_90._0_1_;
          ppvVar20 = (void **)CONCAT71(uVar21,1);
          goto switchD_1437c7e63_default;
        }
      }
    }
    break;
  case 7:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_128);
  default:
    goto switchD_1437c7e63_default;
  }
  ppvVar20 = (void **)0x0;
switchD_1437c7e63_default:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)ppvVar20 & 0xffffffff;
}



// FUNCTION 1437c9fe4 FUN_1437c9fe4 body=4720 status=ok
// SIG undefined FUN_1437c9fe4(void)

void FUN_1437c9fe4(longlong param_1,longlong param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined *puVar12;
  bool bVar13;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined *local_58;
  code *local_50;
  longlong local_48 [3];
  
  local_48[2] = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar10 = *(undefined8 **)(param_2 + 0x30);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1)) {
    local_58 = (undefined *)FUN_1446ddbd2();
    local_50 = FUN_14067a048;
    local_60 = 0;
    local_68 = 0x28001;
    FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
    atexit(FUN_142811fe5);
    _Init_thread_footer(&DAT_14c951d20);
  }
  if (puVar10 == &DAT_14c951cd0) {
    lVar7 = *(longlong *)(param_2 + 0x20);
    local_48[0] = CONCAT71(local_48[0]._1_7_,
                           (*(byte *)((ulonglong)*(byte *)(lVar7 + 0x71) +
                                     (longlong)param_3 * (longlong)*(int *)(lVar7 + 0x34) +
                                     (longlong)*(int *)(lVar7 + 0x44) +
                                     *(longlong *)(param_2 + 0x18)) & *(byte *)(lVar7 + 0x73)) != 0)
    ;
    FUN_147de06b6(param_1,param_2);
    goto LAB_1437cab8d;
  }
  puVar12 = *(undefined **)(param_2 + 0x30);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9496d8) && (FUN_144b3d300(&DAT_14c9496d8), DAT_14c9496d8 == -1)) {
    local_58 = (undefined *)FUN_1446ddbd2();
    local_50 = FUN_140a4831c;
    local_68 = 0x1000000008001;
    local_60 = 0;
    FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
    atexit(FUN_1427e14fe);
    _Init_thread_footer(&DAT_14c9496d8);
  }
  if (puVar12 == &DAT_14c949688) {
    lVar7 = *(longlong *)(param_2 + 0x20);
    lVar6 = *(longlong *)(lVar7 + 0x78);
    uVar8 = (**(code **)(**(longlong **)(lVar7 + 0x70) + 0x220))
                      (*(longlong **)(lVar7 + 0x70),
                       (longlong)param_3 * (longlong)*(int *)(lVar7 + 0x34) +
                       (longlong)*(int *)(lVar7 + 0x44) + *(longlong *)(param_2 + 0x18));
LAB_1437ca788:
    FUN_1401cfad2(lVar6,local_48,uVar8);
LAB_1437cab72:
    FUN_147de085c(param_1,param_2,local_48);
  }
  else {
    puVar12 = *(undefined **)(param_2 + 0x30);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951d78) && (FUN_144b3d300(&DAT_14c951d78), DAT_14c951d78 == -1)) {
      FUN_14475b26a();
      local_50 = FUN_1409f1a5c;
      local_58 = &DAT_14c9520b8;
      local_60 = 0;
      local_68 = 0x1008041;
      FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
      atexit(FUN_14281201f);
      _Init_thread_footer(&DAT_14c951d78);
    }
    if (puVar12 == &DAT_14c951d28) {
      plVar9 = *(longlong **)(param_2 + 0x20);
      lVar7 = (**(code **)(*plVar9 + 0x1f0))(plVar9);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48[2] ^ (ulonglong)auStack_88);
      }
      lVar6 = plVar9[0xe];
      uVar8 = (ulonglong)
              *(byte *)((longlong)param_3 * (longlong)*(int *)((longlong)plVar9 + 0x34) +
                       (longlong)*(int *)((longlong)plVar9 + 0x44) + *(longlong *)(param_2 + 0x18));
      goto LAB_1437ca788;
    }
    puVar12 = *(undefined **)(param_2 + 0x30);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952420) && (FUN_144b3d300(&DAT_14c952420), DAT_14c952420 == -1)) {
      FUN_14475b26a();
      local_50 = FUN_14079c5e4;
      local_58 = &DAT_14c9520b8;
      local_68 = 0x101008001;
      local_60 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
    if (puVar12 == &DAT_14c9523d0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48[2] ^ (ulonglong)auStack_88);
    }
    puVar10 = *(undefined8 **)(param_2 + 0x30);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9523c8) && (FUN_144b3d300(&DAT_14c9523c8), DAT_14c9523c8 == -1)) {
      FUN_14475b26a();
      local_50 = FUN_1408a629c;
      local_58 = &DAT_14c9520b8;
      local_60 = 0;
      local_68 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
    if (puVar10 == &DAT_14c952378) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48[2] ^ (ulonglong)auStack_88);
    }
    puVar10 = *(undefined8 **)(param_2 + 0x30);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952210) && (FUN_144b3d300(&DAT_14c952210), DAT_14c952210 == -1)) {
      FUN_14475b26a();
      local_50 = FUN_1405ebbb2;
      local_58 = &DAT_14c9520b8;
      local_60 = 0;
      local_68 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
    if (puVar10 == &DAT_14c9521c0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48[2] ^ (ulonglong)auStack_88);
    }
    lVar7 = *(longlong *)(param_2 + 0x30);
    lVar6 = FUN_14093f012();
    if (lVar7 == lVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48[2] ^ (ulonglong)auStack_88);
    }
    lVar7 = *(longlong *)(param_2 + 0x30);
    lVar6 = FUN_14093f0c0();
    if (lVar7 == lVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48[2] ^ (ulonglong)auStack_88);
    }
    puVar12 = *(undefined **)(param_2 + 0x30);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952268) && (FUN_144b3d300(&DAT_14c952268), DAT_14c952268 == -1)) {
      FUN_14475b26a();
      local_50 = FUN_1459738d6;
      local_58 = &DAT_14c9520b8;
      local_60 = 0;
      local_68 = 0x1408001;
      FUN_14000176a(&DAT_14c952218,L"FInt64Property",0x400000,0);
      atexit(FUN_142816fda);
      _Init_thread_footer(&DAT_14c952268);
    }
    if (puVar12 == &DAT_14c952218) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48[2] ^ (ulonglong)auStack_88);
    }
    lVar7 = *(longlong *)(param_2 + 0x30);
    lVar6 = FUN_140e98e1a();
    if (lVar7 == lVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48[2] ^ (ulonglong)auStack_88);
    }
    puVar12 = *(undefined **)(param_2 + 0x30);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952318) && (FUN_144b3d300(&DAT_14c952318), DAT_14c952318 == -1)) {
      FUN_14475b26a();
      local_50 = FUN_1468e122c;
      local_58 = &DAT_14c9520b8;
      local_60 = 0;
      local_68 = 0x1008801;
      FUN_14000176a(&DAT_14c9522c8,L"FUInt32Property",0x800,0);
      atexit(FUN_142817034);
      _Init_thread_footer(&DAT_14c952318);
    }
    if (puVar12 == &DAT_14c9522c8) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48[2] ^ (ulonglong)auStack_88);
    }
    puVar12 = *(undefined **)(param_2 + 0x30);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952370) && (FUN_144b3d300(&DAT_14c952370), DAT_14c952370 == -1)) {
      FUN_14475b26a();
      local_50 = FUN_1468e12e4;
      local_58 = &DAT_14c9520b8;
      local_60 = 0;
      local_68 = 0x1008201;
      FUN_14000176a(&DAT_14c952320,L"FUInt64Property",0x200,0);
      atexit(FUN_142817061);
      _Init_thread_footer(&DAT_14c952370);
    }
    if (puVar12 == &DAT_14c952320) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48[2] ^ (ulonglong)auStack_88);
    }
    puVar12 = *(undefined **)(param_2 + 0x30);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9520b0) && (FUN_144b3d300(&DAT_14c9520b0), DAT_14c9520b0 == -1)) {
      local_58 = (undefined *)FUN_1446ddbd2();
      local_50 = FUN_1409e12a0;
      local_60 = 0;
      local_68 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
    if (puVar12 == &DAT_14c952060) {
      FUN_1400021e4((longlong)param_3 * (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x34) +
                    (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x44) +
                    *(longlong *)(param_2 + 0x18),local_48);
      goto LAB_1437cab72;
    }
    puVar12 = *(undefined **)(param_2 + 0x30);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c963e88) && (FUN_144b3d300(&DAT_14c963e88), DAT_14c963e88 == -1)) {
      local_58 = (undefined *)FUN_1446ddbd2();
      local_50 = FUN_140dafe7a;
      local_60 = 0;
      local_68 = 0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
    }
    if (puVar12 == &DAT_14c963e38) {
LAB_1437ca9c4:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48[2] ^ (ulonglong)auStack_88);
    }
    puVar12 = *(undefined **)(param_2 + 0x30);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c963ee0) && (FUN_144b3d300(&DAT_14c963ee0), DAT_14c963ee0 == -1)) {
      local_58 = (undefined *)FUN_1446ddbd2();
      local_50 = FUN_140fb5c52;
      local_60 = 0;
      local_68 = 0x40008001;
      FUN_14000176a(&DAT_14c963e90,L"FTextProperty",0x40000000,0);
      atexit(FUN_14282980e);
      _Init_thread_footer(&DAT_14c963ee0);
    }
    if (puVar12 != &DAT_14c963e90) {
      lVar7 = *(longlong *)(param_2 + 0x30);
      lVar6 = FUN_140f4d408();
      if (lVar7 != lVar6) {
        lVar7 = *(longlong *)(param_2 + 0x30);
        lVar6 = FUN_14010a2ea();
        if (lVar7 != lVar6) {
          puVar12 = *(undefined **)(param_2 + 0x30);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c9529b0) && (FUN_144b3d300(&DAT_14c9529b0), DAT_14c9529b0 == -1)) {
            FUN_1446f4b16();
            local_50 = FUN_140f17fc6;
            local_58 = &DAT_14c951c78;
            local_60 = 0;
            local_68 = 0x24008001;
            FUN_14000176a(&DAT_14c952960,L"FSoftObjectProperty",0x20000000,0);
            atexit(FUN_142818859);
            _Init_thread_footer(&DAT_14c9529b0);
          }
          plVar9 = *(longlong **)(param_2 + 0x20);
          if (puVar12 == &DAT_14c952960) {
            FUN_14475cc44((longlong)param_3 * (longlong)*(int *)((longlong)plVar9 + 0x34) +
                          (longlong)*(int *)((longlong)plVar9 + 0x44) +
                          *(longlong *)(param_2 + 0x18) + 8,local_48);
          }
          else {
            if (plVar9 == (longlong *)0x0) goto LAB_1437cab8d;
            puVar12 = (undefined *)plVar9[1];
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c952478) && (FUN_144b3d300(&DAT_14c952478), DAT_14c952478 == -1))
            {
              FUN_1446f4b16();
              local_50 = FUN_1403a5f94;
              local_58 = &DAT_14c951c78;
              local_60 = 0;
              local_68 = 0x4018001;
              FUN_14000176a(&DAT_14c952428,L"FObjectProperty",0x10000,0);
              atexit(FUN_1428170e8);
              _Init_thread_footer(&DAT_14c952478);
            }
            if (DAT_14c952430 == 0) {
              bVar13 = puVar12 != (undefined *)0x0;
              if (puVar12 != &DAT_14c952428 && bVar13) {
                do {
                  puVar12 = *(undefined **)(puVar12 + 0x30);
                  bVar13 = puVar12 != (undefined *)0x0;
                  if (puVar12 == &DAT_14c952428) break;
                } while (puVar12 != (undefined *)0x0);
              }
              if (!bVar13) goto LAB_1437cab8d;
            }
            else if ((*(ulonglong *)(puVar12 + 0x18) & DAT_14c952430) == 0) goto LAB_1437cab8d;
            lVar7 = (**(code **)(*plVar9 + 0x220))(plVar9,*(undefined8 *)(param_2 + 0x18),param_3);
            local_48[0] = 0;
            local_48[1] = 0;
            if (lVar7 != 0) goto LAB_1437cab55;
          }
          goto LAB_1437cab72;
        }
        lVar7 = (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x44) +
                *(longlong *)(param_2 + 0x18);
        lVar6 = (longlong)param_3 * (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x34);
        iVar2 = *(int *)(lVar6 + 4 + lVar7);
        if (((((iVar2 == 0) || (uVar5 = *(uint *)(lVar7 + lVar6), (int)uVar5 < 0)) ||
             (DAT_14c9647dc <= (int)uVar5)) ||
            ((plVar9 = (longlong *)
                       ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
             plVar9 == (longlong *)0x0 || ((int)plVar9[2] != iVar2)))) ||
           ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) goto LAB_1437cab65;
        if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
          lVar7 = *plVar9;
          goto LAB_1437cab55;
        }
        goto LAB_1437caa9e;
      }
      lVar7 = (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x44) +
              *(longlong *)(param_2 + 0x18);
      lVar6 = (longlong)param_3 * (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x34);
      puVar1 = (uint *)(lVar7 + lVar6);
      uVar5 = *(uint *)(lVar6 + 4 + lVar7);
      if ((((uVar5 == 0) || (uVar11 = *puVar1, (int)uVar11 < 0)) ||
          ((DAT_14c9647dc <= (int)uVar11 ||
           (((plVar9 = (longlong *)
                       ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
             plVar9 == (longlong *)0x0 || (*(uint *)(plVar9 + 2) != uVar5)) ||
            ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))))) || (*plVar9 == 0)) {
        if (*(longlong *)(puVar1 + 2) != 0) {
          lVar7 = FUN_140007850();
          cVar4 = (*(code *)PTR_FUN_14c758760)();
          if ((lVar7 == 0) || (cVar4 == '\0')) {
            if (lVar7 != 0) {
              uVar5 = *(uint *)(lVar7 + 0xc);
              goto LAB_1437caa06;
            }
            puVar1[0] = 0;
            puVar1[1] = 0;
          }
          else {
            uVar5 = *(uint *)(lVar7 + 0xc);
            if ((int)uVar5 < DAT_14c9647dc) {
              lVar6 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
            }
            else {
              lVar6 = 0;
            }
            if ((*(uint *)(lVar6 + 8) & 0x8400000) == 0) {
LAB_1437caa06:
              *puVar1 = uVar5;
              if ((int)uVar5 < DAT_14c9647dc) {
                lVar6 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
              }
              else {
                lVar6 = 0;
              }
              uVar5 = *(uint *)(lVar6 + 0x10);
              if (*(uint *)(lVar6 + 0x10) == 0) {
                LOCK();
                iVar2 = DAT_14c964868 + 1;
                UNLOCK();
                uVar11 = DAT_14c964868 + 1;
                bVar13 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar2;
                if (bVar13) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,uVar11);
                }
                LOCK();
                uVar5 = *(uint *)(lVar6 + 0x10);
                bVar13 = uVar5 == 0;
                if (bVar13) {
                  *(uint *)(lVar6 + 0x10) = uVar11;
                  uVar5 = 0;
                }
                UNLOCK();
                if (bVar13) {
                  uVar5 = uVar11;
                }
              }
              puVar1[1] = uVar5;
            }
            if ((*(uint *)(lVar7 + 8) >> 0x1e & 1) == 0) {
              uVar5 = puVar1[1];
              if (uVar5 != 0) goto LAB_1437caa53;
              goto LAB_1437caa97;
            }
          }
        }
LAB_1437cab65:
        local_48[0] = 0;
        local_48[1] = 0;
        goto LAB_1437cab72;
      }
LAB_1437caa53:
      uVar11 = *puVar1;
      if ((((int)uVar11 < 0) || (DAT_14c9647dc <= (int)uVar11)) ||
         ((plVar9 = (longlong *)
                    ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
          plVar9 == (longlong *)0x0 ||
          (((*(uint *)(plVar9 + 2) != uVar5 || ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) ||
           (lVar7 = *plVar9, *plVar9 == 0)))))) {
LAB_1437caa97:
        if (*(longlong *)(puVar1 + 2) != 0) {
          lVar6 = FUN_140007850();
          cVar4 = (*(code *)PTR_FUN_14c758760)();
          if ((lVar6 != 0) && (cVar4 != '\0')) {
            uVar5 = *(uint *)(lVar6 + 0xc);
            if ((int)uVar5 < DAT_14c9647dc) {
              lVar7 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
            }
            else {
              lVar7 = 0;
            }
            if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) {
LAB_1437cab04:
              *puVar1 = uVar5;
              if ((int)uVar5 < DAT_14c9647dc) {
                lVar7 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
              }
              else {
                lVar7 = 0;
              }
              uVar5 = *(uint *)(lVar7 + 0x10);
              if (*(uint *)(lVar7 + 0x10) == 0) {
                LOCK();
                iVar2 = DAT_14c964868 + 1;
                UNLOCK();
                uVar11 = DAT_14c964868 + 1;
                bVar13 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar2;
                if (bVar13) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,uVar11);
                }
                LOCK();
                uVar5 = *(uint *)(lVar7 + 0x10);
                bVar13 = uVar5 == 0;
                if (bVar13) {
                  *(uint *)(lVar7 + 0x10) = uVar11;
                  uVar5 = 0;
                }
                UNLOCK();
                if (bVar13) {
                  uVar5 = uVar11;
                }
              }
              puVar1[1] = uVar5;
            }
            lVar7 = 0;
            if ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0) {
              lVar7 = lVar6;
            }
            goto LAB_1437cab55;
          }
          if (lVar6 != 0) {
            uVar5 = *(uint *)(lVar6 + 0xc);
            goto LAB_1437cab04;
          }
          puVar1[0] = 0;
          puVar1[1] = 0;
        }
LAB_1437caa9e:
        lVar7 = 0;
      }
LAB_1437cab55:
      local_48[1] = 0;
      local_48[0] = 0;
      FUN_1401031ac(lVar7,0,local_48);
      goto LAB_1437cab72;
    }
    puVar10 = (undefined8 *)
              ((longlong)param_3 * (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x34) +
              (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x44) +
              *(longlong *)(param_2 + 0x18));
    if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
      plVar9 = (longlong *)*puVar10;
      if (*(code **)(*plVar9 + 0x50) != FUN_144828418) {
        plVar9 = (longlong *)(**(code **)(*plVar9 + 0x50))();
      }
      FUN_1447a1fc0(plVar9);
      pcVar3 = *(code **)(*(longlong *)*puVar10 + 0x28);
      if ((pcVar3 != FUN_14482841c) && (pcVar3 != (code *)&LAB_14010c34c)) {
        (*pcVar3)((longlong *)*puVar10);
      }
      goto LAB_1437ca9c4;
    }
    local_48[0] = 0;
    local_48[1] = 0;
    FUN_1467d1a5a(local_48,puVar10,0,0);
    FUN_147de085c(param_1,param_2,local_48);
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
LAB_1437cab8d:
  if ((local_48[2] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437cb374 FUN_1437cb374 body=6356 status=ok
// SIG undefined FUN_1437cb374(void)

/* WARNING: Type propagation algorithm not settling */

uint FUN_1437cb374(longlong *******param_1,longlong *******param_2,longlong *param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  longlong *******ppppppplVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  longlong ******pppppplVar10;
  longlong ******pppppplVar11;
  longlong *****ppppplVar12;
  undefined8 uVar13;
  longlong *******ppppppplVar14;
  int iVar15;
  longlong *plVar16;
  longlong lVar17;
  void *pvVar18;
  undefined2 *puVar19;
  longlong *******ppppppplVar20;
  ulonglong *puVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong *******ppppppplVar24;
  size_t sVar25;
  longlong *******ppppppplVar26;
  bool bVar27;
  bool bVar28;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined8 local_160;
  undefined *local_158;
  code *local_150;
  int local_13c;
  longlong *******local_138;
  uint local_130;
  byte bStack_129;
  longlong *******local_128;
  undefined4 local_11c;
  size_t sStack_118;
  ulonglong *puStack_110;
  int *piStack_108;
  longlong *local_100;
  longlong *******local_f8;
  longlong *******ppppppplStack_f0;
  longlong *******local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  longlong ******local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  longlong *******local_b8;
  longlong *******ppppppplStack_b0;
  undefined8 local_a8;
  undefined2 *local_a0;
  int local_98;
  undefined4 local_94;
  undefined4 local_8c;
  longlong local_88;
  undefined8 uStack_80;
  longlong *******local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_88 = 0;
  uStack_80 = 0;
  local_128 = param_2;
  cVar5 = (**(code **)(*param_3 + 0x18))(param_3,&local_8c);
  if (cVar5 != '\0') {
    local_100 = (longlong *)(param_4 + 0xc);
    local_130 = (uint)local_100;
    local_13c = 0;
    ppppppplVar26 = (longlong *******)0x0;
    local_138 = param_1;
LAB_1437cb40b:
    puVar9 = (undefined8 *)(**(code **)*param_3)(param_3);
    local_a0 = (undefined2 *)0x0;
    local_98 = *(int *)(puVar9 + 1);
    lVar23 = (longlong)local_98;
    pvVar18 = (void *)*puVar9;
    if (lVar23 == 0) {
      local_94 = 0;
    }
    else {
      FUN_1446dd670(&local_a0,local_98,0);
      memcpy(local_a0,pvVar18,lVar23 * 2);
    }
    ppppppplVar24 = local_138;
    bVar28 = true;
    switch(local_8c) {
    case 0:
      if (ppppppplVar26 != (longlong *******)0x0) {
        pppppplVar10 = ppppppplVar26[1];
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c952900) &&
           (FUN_144b3d300(&DAT_14c952900), DAT_14c952900 == -1)) {
          local_158 = (undefined *)FUN_1446ddbd2();
          local_150 = FUN_1468e4cee;
          local_168 = 0x800000008001;
          local_160 = 0;
          FUN_14000176a(&DAT_14c9528b0,L"FSetProperty");
          atexit(FUN_142817fb7);
          _Init_thread_footer(&DAT_14c952900);
        }
        if (DAT_14c9528b8 == 0) {
          bVar28 = pppppplVar10 != (longlong ******)0x0;
          if (pppppplVar10 != (longlong ******)&DAT_14c9528b0 && bVar28) {
            do {
              pppppplVar10 = (longlong ******)pppppplVar10[6];
              bVar28 = pppppplVar10 != (longlong ******)0x0;
              if (pppppplVar10 == (longlong ******)&DAT_14c9528b0) break;
            } while (pppppplVar10 != (longlong ******)0x0);
          }
          if (bVar28) goto LAB_1437cb4d5;
        }
        else if (((ulonglong)pppppplVar10[3] & DAT_14c9528b8) != 0) {
LAB_1437cb4d5:
          local_f8 = (longlong *******)ppppppplVar26[0xe];
          ppppppplStack_f0 = local_138;
          iStack_d8 = *(int *)(ppppppplVar26 + 0x11);
          local_e8 = (longlong *******)ppppppplVar26[0xf];
          iStack_e0 = *(int *)(ppppppplVar26 + 0x10);
          uStack_dc = *(undefined4 *)((longlong)ppppppplVar26 + 0x84);
          local_b8 = (longlong *******)&local_70;
          local_c0 = FUN_14281ab14;
          local_70 = (longlong *******)&local_f8;
          FUN_1402609e8();
        }
      }
      lVar23 = (longlong)(int)uStack_80;
      if (lVar23 == 0) {
switchD_1437cb48b_caseD_3:
        bVar28 = true;
        local_130 = 0;
        break;
      }
LAB_1437cb968:
      lVar17 = lVar23 * 0x20;
      local_13c = *(int *)(local_88 + -0x20 + lVar17);
      local_11c = *(undefined4 *)(local_88 + -0x1c + lVar17);
      uStack_80 = CONCAT44(uStack_80._4_4_,(int)lVar23 + -1);
      ppppppplVar26 = *(longlong ********)(local_88 + -0x10 + lVar17);
      local_138 = *(longlong ********)(local_88 + -0x18 + lVar17);
      local_128 = *(longlong ********)(local_88 + -8 + lVar17);
      goto LAB_1437cc348;
    case 1:
      local_c0 = (code *)((ulonglong)local_c0._4_4_ << 0x20);
      local_b8 = (longlong *******)0x0;
      ppppppplStack_b0 = (longlong *******)0x0;
      local_a8 = 0;
      puVar19 = &DAT_149dfb77a;
      if (local_98 != 0) {
        puVar19 = local_a0;
      }
      FUN_1446f470e(&local_f8,puVar19);
      ppppppplVar20 = local_f8;
      ppppppplVar24 = local_128;
      ppppppplVar14 = local_f8;
      if (local_128 != (longlong *******)0x0) {
        while (ppppppplVar14 != (longlong *******)0x0) {
          for (ppppppplVar14 = (longlong *******)ppppppplVar24[10];
              ppppppplVar14 != (longlong *******)0x0;
              ppppppplVar14 = (longlong *******)ppppppplVar14[3]) {
            if ((~*(uint *)(ppppppplVar14[1] + 3) & 0x8001) == 0) goto LAB_1437cb63b;
          }
          ppppppplVar24 = (longlong *******)(*(code *)(*ppppppplVar24)[0x56])(ppppppplVar24);
          ppppppplVar14 = ppppppplVar24;
        }
      }
LAB_1437cb5df:
      if (*param_4 != 0) {
        (**(code **)(*param_3 + 0x30))(param_3);
        goto LAB_1437cc348;
      }
      goto LAB_1437cc957;
    default:
      goto switchD_1437cb48b_caseD_2;
    case 3:
      goto switchD_1437cb48b_caseD_3;
    case 5:
      if ((1 < local_98) || (ppppppplVar26 == (longlong *******)0x0)) {
LAB_1437cb864:
        if (1 < local_98) {
          if (ppppppplVar26 == (longlong *******)0x0) {
LAB_1437cba8e:
            puVar19 = local_a0;
          }
          else {
            pppppplVar10 = ppppppplVar26[1];
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c951f40) && (FUN_144b3d300(&DAT_14c951f40), DAT_14c951f40 == -1))
            {
              local_158 = (undefined *)FUN_1446ddbd2();
              local_150 = FUN_140eb3340;
              local_168 = 0x400000008001;
              local_160 = 0;
              FUN_14000176a(&DAT_14c951ef0,L"FMapProperty",0x400000000000,0);
              atexit(FUN_142815b60);
              _Init_thread_footer(&DAT_14c951f40);
            }
            pppppplVar11 = ppppppplVar26[1];
            if (pppppplVar10 == (longlong ******)&DAT_14c951ef0) {
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c951f40) &&
                 (FUN_144b3d300(&DAT_14c951f40), DAT_14c951f40 == -1)) {
                local_158 = (undefined *)FUN_1446ddbd2();
                local_150 = FUN_140eb3340;
                local_168 = 0x400000008001;
                local_160 = 0;
                FUN_14000176a(&DAT_14c951ef0,L"FMapProperty",0x400000000000,0);
                atexit(FUN_142815b60);
                _Init_thread_footer(&DAT_14c951f40);
              }
              if (DAT_14c951ef8 == 0) {
                bVar28 = pppppplVar11 != (longlong ******)0x0;
                if (pppppplVar11 != (longlong ******)&DAT_14c951ef0 && bVar28) {
                  do {
                    pppppplVar11 = (longlong ******)pppppplVar11[6];
                    bVar28 = pppppplVar11 != (longlong ******)0x0;
                    if (pppppplVar11 == (longlong ******)&DAT_14c951ef0) break;
                  } while (pppppplVar11 != (longlong ******)0x0);
                }
              }
              else {
                bVar28 = ((ulonglong)pppppplVar11[3] & DAT_14c951ef8) != 0;
              }
              ppppppplVar24 = (longlong *******)0x0;
              if (bVar28) {
                ppppppplVar24 = ppppppplVar26;
              }
              local_c8 = *(undefined1 *)(ppppppplVar24 + 0x13);
              local_f8 = (longlong *******)ppppppplVar24[0xe];
              ppppppplVar14 = (longlong *******)ppppppplVar24[0xf];
              local_d0 = ppppppplVar24[0x12];
              iStack_e0 = *(int *)(ppppppplVar24 + 0x10);
              uStack_dc = *(undefined4 *)((longlong)ppppppplVar24 + 0x84);
              iStack_d8 = *(int *)(ppppppplVar24 + 0x11);
              uStack_d4 = *(undefined4 *)((longlong)ppppppplVar24 + 0x8c);
              local_e8 = local_138;
              ppppppplStack_f0 = ppppppplVar14;
              local_c0 = (code *)&local_f8;
              uVar7 = FUN_140007ec8(&local_f8,&local_c0);
              local_b8 = (longlong *******)CONCAT44(local_b8._4_4_,uVar7);
              local_c0 = (code *)&local_f8;
              uVar13 = FUN_140005950(&local_f8,&local_c0);
              puVar19 = &DAT_149dfb77a;
              if (local_98 != 0) {
                puVar19 = local_a0;
              }
              if (puVar19 != (undefined2 *)0x0) {
                local_158 = DAT_14c872be8;
                local_160 = CONCAT44(local_160._4_4_,0x8000000);
                local_168 = 0;
                (*(code *)(*ppppppplVar24[0xe])[0x1f])(ppppppplVar24[0xe],puVar19,uVar13,0);
              }
              local_168 = CONCAT44(local_168._4_4_,local_13c);
              (**(code **)(*param_3 + 0x20))(param_3,ppppppplVar14);
              bVar28 = false;
              break;
            }
            pppppplVar10 = (longlong ******)FUN_140019ace();
            if (pppppplVar11 == pppppplVar10) {
              pppppplVar10 = ppppppplVar26[1];
              pppppplVar11 = (longlong ******)FUN_140019ace();
              if (pppppplVar11[1] == (longlong *****)0x0) {
                bVar28 = pppppplVar10 != (longlong ******)0x0;
                if (pppppplVar10 != pppppplVar11 && bVar28) {
                  do {
                    pppppplVar10 = (longlong ******)pppppplVar10[6];
                    bVar28 = pppppplVar10 != (longlong ******)0x0;
                    if (pppppplVar10 == pppppplVar11) break;
                  } while (pppppplVar10 != (longlong ******)0x0);
                }
              }
              else {
                bVar28 = ((ulonglong)pppppplVar10[3] & (ulonglong)pppppplVar11[1]) != 0;
              }
              ppppppplVar24 = (longlong *******)0x0;
              if (bVar28) {
                ppppppplVar24 = ppppppplVar26;
              }
              pppppplVar10 = ppppppplVar24[0xe];
              cVar5 = (*(code *)(*pppppplVar10)[0x37])(pppppplVar10);
              ppppppplVar14 = local_138;
              pppppplVar11 = ppppppplVar24[0xe];
              if (cVar5 == '\0') {
                sVar25 = (longlong)*(int *)((longlong)pppppplVar11 + 0x34) *
                         (longlong)*(int *)(pppppplVar11 + 6);
                if (*(char *)((longlong)local_138 + sVar25) == '\0') {
                  if ((*(byte *)((longlong)pppppplVar11 + 0x39) & 2) == 0) {
                    (*(code *)(*pppppplVar11)[0x2c])(pppppplVar11,local_138);
                  }
                  else {
                    memset(local_138,0,sVar25);
                  }
                  *(undefined1 *)((longlong)ppppppplVar14 + sVar25) = 1;
                }
              }
              else {
                cVar5 = (*(code *)(*pppppplVar11)[0x37])();
                pppppplVar11 = ppppppplVar24[0xe];
                if (cVar5 == '\0') {
                  if (*(char *)((longlong)local_138 +
                               (longlong)*(int *)((longlong)pppppplVar11 + 0x34) *
                               (longlong)*(int *)(pppppplVar11 + 6)) == '\0') goto LAB_1437cc84b;
                }
                else {
                  cVar5 = (*(code *)(*pppppplVar11)[0x39])();
                  if (cVar5 == '\0') {
                    pppppplVar11 = ppppppplVar24[0xe];
LAB_1437cc84b:
                    ppppplVar12 = pppppplVar11[7];
                    if (((ulonglong)ppppplVar12 >> 0x24 & 1) == 0) {
                      (*(code *)(*pppppplVar11)[0x29])();
                      pppppplVar11 = ppppppplVar24[0xe];
                      ppppplVar12 = pppppplVar11[7];
                    }
                    if (((uint)ppppplVar12 >> 9 & 1) == 0) {
                      (*(code *)(*pppppplVar11)[0x2c])(pppppplVar11,local_138);
                    }
                    else {
                      memset(local_138,0,
                             (longlong)*(int *)(pppppplVar11 + 6) *
                             (longlong)*(int *)((longlong)pppppplVar11 + 0x34));
                    }
                  }
                }
              }
              local_168 = CONCAT44(local_168._4_4_,local_13c);
              (**(code **)(*param_3 + 0x20))(param_3,pppppplVar10);
              bVar28 = false;
              break;
            }
            puVar19 = &DAT_149dfb77a;
            if (local_98 != 0) goto LAB_1437cba8e;
          }
          FUN_1446f470e(&local_f8,puVar19);
          ppppppplVar20 = local_f8;
          ppppppplVar24 = local_128;
          ppppppplVar14 = local_f8;
          if (local_128 != (longlong *******)0x0) {
            while (ppppppplVar14 != (longlong *******)0x0) {
              for (ppppppplVar14 = (longlong *******)ppppppplVar24[10];
                  ppppppplVar14 != (longlong *******)0x0;
                  ppppppplVar14 = (longlong *******)ppppppplVar14[3]) {
                if ((~*(uint *)(ppppppplVar14[1] + 3) & 0x8001) == 0) goto LAB_1437cbb42;
              }
              ppppppplVar24 = (longlong *******)(*(code *)(*ppppppplVar24)[0x56])(ppppppplVar24);
              ppppppplVar14 = ppppppplVar24;
            }
          }
LAB_1437cbaec:
          bVar28 = *param_4 == 0;
          local_130 = CONCAT31((int3)(local_130 >> 8),(byte)local_130 & !bVar28);
          break;
        }
        if (ppppppplVar26 == (longlong *******)0x0) {
          ppppppplVar26 = (longlong *******)0x0;
          goto switchD_1437cb48b_caseD_3;
        }
        pppppplVar10 = ppppppplVar26[1];
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951ae0) &&
           (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
          FUN_1446ddbd2();
          local_150 = FUN_140b31576;
          local_158 = &DAT_14c951a38;
          local_160 = 0;
          local_168 = 0x208001;
          FUN_14000176a(&DAT_14c951a90,L"FArrayProperty");
          atexit(FUN_14280cbf7);
          _Init_thread_footer(&DAT_14c951ae0);
        }
        iVar6 = local_13c;
        ppppppplVar24 = ppppppplVar26;
        if (DAT_14c951a98 == 0) {
          bVar28 = pppppplVar10 != (longlong ******)0x0;
          if (pppppplVar10 != (longlong ******)&DAT_14c951a90 && bVar28) {
            do {
              pppppplVar10 = (longlong ******)pppppplVar10[6];
              bVar28 = pppppplVar10 != (longlong ******)0x0;
              if (pppppplVar10 == (longlong ******)&DAT_14c951a90) break;
            } while (pppppplVar10 != (longlong ******)0x0);
          }
          if (bVar28) goto LAB_1437cc1af;
LAB_1437cc1b3:
          if (ppppppplVar24 == (longlong *******)0x0) goto switchD_1437cb48b_caseD_3;
        }
        else if (((ulonglong)pppppplVar10[3] & DAT_14c951a98) != 0) {
LAB_1437cc1af:
          ppppppplVar24 = (longlong *******)ppppppplVar26[0xf];
          goto LAB_1437cc1b3;
        }
        local_168 = CONCAT44(local_168._4_4_,local_13c);
        (**(code **)(*param_3 + 0x20))(param_3,ppppppplVar24);
        local_13c = iVar6 + 1;
        goto LAB_1437cc348;
      }
      pppppplVar10 = ppppppplVar26[1];
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952900) && (FUN_144b3d300(&DAT_14c952900), DAT_14c952900 == -1))
      {
        local_158 = (undefined *)FUN_1446ddbd2();
        local_150 = FUN_1468e4cee;
        local_168 = 0x800000008001;
        local_160 = 0;
        FUN_14000176a(&DAT_14c9528b0,L"FSetProperty",0x800000000000,0);
        atexit(FUN_142817fb7);
        _Init_thread_footer(&DAT_14c952900);
      }
      if (pppppplVar10 != (longlong ******)&DAT_14c9528b0) goto LAB_1437cb864;
      pppppplVar10 = ppppppplVar26[1];
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952900) && (FUN_144b3d300(&DAT_14c952900), DAT_14c952900 == -1))
      {
        local_158 = (undefined *)FUN_1446ddbd2();
        local_150 = FUN_1468e4cee;
        local_168 = 0x800000008001;
        local_160 = 0;
        FUN_14000176a(&DAT_14c9528b0,L"FSetProperty",0x800000000000,0);
        atexit(FUN_142817fb7);
        _Init_thread_footer(&DAT_14c952900);
      }
      if (DAT_14c9528b8 == 0) {
        bVar28 = pppppplVar10 != (longlong ******)0x0;
        if (pppppplVar10 != (longlong ******)&DAT_14c9528b0 && bVar28) {
          do {
            pppppplVar10 = (longlong ******)pppppplVar10[6];
            bVar28 = pppppplVar10 != (longlong ******)0x0;
            if (pppppplVar10 == (longlong ******)&DAT_14c9528b0) break;
          } while (pppppplVar10 != (longlong ******)0x0);
        }
      }
      else {
        bVar28 = ((ulonglong)pppppplVar10[3] & DAT_14c9528b8) != 0;
      }
      ppppppplVar24 = (longlong *******)0x0;
      if (bVar28) {
        ppppppplVar24 = ppppppplVar26;
      }
      ppppppplVar14 = (longlong *******)ppppppplVar24[0xe];
      ppppppplStack_f0 = local_138;
      iStack_d8 = *(int *)(ppppppplVar24 + 0x11);
      local_e8 = (longlong *******)ppppppplVar24[0xf];
      iStack_e0 = *(int *)(ppppppplVar24 + 0x10);
      uStack_dc = *(undefined4 *)((longlong)ppppppplVar24 + 0x84);
      local_f8 = ppppppplVar14;
      FUN_14026089e(&local_f8);
      lVar23 = *param_3;
      local_168 = CONCAT44(local_168._4_4_,local_13c);
      goto LAB_1437cc345;
    case 6:
      if (ppppppplVar26 != (longlong *******)0x0) {
        pppppplVar10 = ppppppplVar26[1];
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951f40) &&
           (FUN_144b3d300(&DAT_14c951f40), DAT_14c951f40 == -1)) {
          local_158 = (undefined *)FUN_1446ddbd2();
          local_150 = FUN_140eb3340;
          local_168 = 0x400000008001;
          local_160 = 0;
          FUN_14000176a(&DAT_14c951ef0,L"FMapProperty",0x400000000000,0);
          atexit(FUN_142815b60);
          _Init_thread_footer(&DAT_14c951f40);
        }
        if (DAT_14c951ef8 == 0) {
          bVar27 = pppppplVar10 != (longlong ******)0x0;
          if (pppppplVar10 != (longlong ******)&DAT_14c951ef0 && bVar27) {
            do {
              pppppplVar10 = (longlong ******)pppppplVar10[6];
              bVar27 = pppppplVar10 != (longlong ******)0x0;
              if (pppppplVar10 == (longlong ******)&DAT_14c951ef0) break;
            } while (pppppplVar10 != (longlong ******)0x0);
          }
          if (bVar27) goto LAB_1437cb909;
        }
        else if (((ulonglong)pppppplVar10[3] & DAT_14c951ef8) != 0) {
LAB_1437cb909:
          local_c8 = *(undefined1 *)(ppppppplVar26 + 0x13);
          local_f8 = (longlong *******)ppppppplVar26[0xe];
          ppppppplStack_f0 = (longlong *******)ppppppplVar26[0xf];
          local_d0 = ppppppplVar26[0x12];
          iStack_e0 = *(int *)(ppppppplVar26 + 0x10);
          uStack_dc = *(undefined4 *)((longlong)ppppppplVar26 + 0x84);
          iStack_d8 = *(int *)(ppppppplVar26 + 0x11);
          uStack_d4 = *(undefined4 *)((longlong)ppppppplVar26 + 0x8c);
          local_e8 = local_138;
          FUN_140458c30(&local_f8);
        }
      }
      lVar23 = (longlong)(int)uStack_80;
      if (lVar23 != 0) goto LAB_1437cb968;
      local_130 = (uint)CONCAT71((int7)(int3)(uStack_80 >> 8),1);
      break;
    case 7:
      local_c0 = (code *)((ulonglong)local_c0._4_4_ << 0x20);
      local_b8 = (longlong *******)0x0;
      ppppppplStack_b0 = (longlong *******)0x0;
      local_a8 = 0;
      if (local_98 < 2) {
        if (ppppppplVar26 != (longlong *******)0x0) {
          pppppplVar10 = ppppppplVar26[1];
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c952900) && (FUN_144b3d300(&DAT_14c952900), DAT_14c952900 == -1)) {
            local_158 = (undefined *)FUN_1446ddbd2();
            local_150 = FUN_1468e4cee;
            local_168 = 0x800000008001;
            local_160 = 0;
            FUN_14000176a(&DAT_14c9528b0,L"FSetProperty",0x800000000000,0);
            atexit(FUN_142817fb7);
            _Init_thread_footer(&DAT_14c952900);
          }
          if (DAT_14c9528b8 == 0) {
            bVar28 = pppppplVar10 != (longlong ******)0x0;
            if (pppppplVar10 != (longlong ******)&DAT_14c9528b0 && bVar28) {
              do {
                pppppplVar10 = (longlong ******)pppppplVar10[6];
                bVar28 = pppppplVar10 != (longlong ******)0x0;
                if (pppppplVar10 == (longlong ******)&DAT_14c9528b0) break;
              } while (pppppplVar10 != (longlong ******)0x0);
            }
            if (!bVar28) goto LAB_1437cbfaa;
          }
          else if (((ulonglong)pppppplVar10[3] & DAT_14c9528b8) == 0) {
LAB_1437cbfaa:
            pppppplVar10 = ppppppplVar26[1];
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1))
            {
              FUN_1446ddbd2();
              local_150 = FUN_140b31576;
              local_158 = &DAT_14c951a38;
              local_160 = 0;
              local_168 = 0x208001;
              FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
              atexit(FUN_14280cbf7);
              _Init_thread_footer(&DAT_14c951ae0);
            }
            ppppppplVar24 = local_138;
            if (DAT_14c951a98 == 0) {
              bVar28 = pppppplVar10 != (longlong ******)0x0;
              if (pppppplVar10 != (longlong ******)&DAT_14c951a90 && bVar28) {
                do {
                  pppppplVar10 = (longlong ******)pppppplVar10[6];
                  bVar28 = pppppplVar10 != (longlong ******)0x0;
                  if (pppppplVar10 == (longlong ******)&DAT_14c951a90) break;
                } while (pppppplVar10 != (longlong ******)0x0);
              }
              if (bVar28) goto LAB_1437cbfed;
            }
            else if (((ulonglong)pppppplVar10[3] & DAT_14c951a98) != 0) {
LAB_1437cbfed:
              lVar23 = (longlong)*(int *)((longlong)ppppppplVar26 + 0x44);
              puStack_110 = (ulonglong *)(lVar23 + (longlong)local_138);
              bVar1 = *(byte *)(ppppppplVar26 + 0xe);
              piStack_108 = param_4;
              (*(code *)(*ppppppplVar26[0xf])[0x2f])();
              puVar21 = puStack_110;
              pppppplVar10 = ppppppplVar26[0xf];
              sStack_118 = (size_t)*(int *)((longlong)pppppplVar10 + 0x34);
              iVar6 = *(int *)((longlong)ppppppplVar24 + lVar23 + 8);
              iVar15 = iVar6 + 1;
              *(int *)((longlong)ppppppplVar24 + lVar23 + 8) = iVar15;
              iVar2 = *(int *)((longlong)ppppppplVar24 + lVar23 + 0xc);
              bStack_129 = bVar1;
              if ((bVar1 & 1) == 0) {
                if (iVar2 <= iVar6) {
                  FUN_14097bbd2(puStack_110,iVar6,sStack_118);
                  iVar15 = (int)puVar21[1];
                }
                if (iVar15 == 0) {
                  pvVar18 = (void *)0x0;
                }
                else {
                  uVar22 = *puVar21;
LAB_1437cc06f:
                  pvVar18 = (void *)((longlong)iVar6 * sStack_118 + uVar22);
                }
              }
              else {
                if (iVar2 <= iVar6) {
                  FUN_1468c03c2(puStack_110,iVar6,sStack_118);
                  iVar15 = (int)puVar21[1];
                  puVar21 = puStack_110;
                }
                puStack_110 = puVar21;
                if (iVar15 != 0) {
                  uVar22 = *puVar21;
                  if ((uVar22 & 1) != 0) {
                    uVar22 = ((longlong)uVar22 >> 0x18) + (longlong)puVar21;
                  }
                  goto LAB_1437cc06f;
                }
                pvVar18 = (void *)0x0;
              }
              param_4 = piStack_108;
              if ((*(byte *)((longlong)pppppplVar10 + 0x39) & 2) == 0) {
                (*(code *)(*pppppplVar10)[0x2c])(pppppplVar10);
              }
              else {
                memset(pvVar18,0,sStack_118);
              }
              ppppppplStack_b0 = (longlong *******)ppppppplVar26[0xf];
              if ((int)puVar21[1] == 0) {
                local_b8 = (longlong *******)0x0;
              }
              else {
                if ((bStack_129 & 1) == 0) {
                  uVar22 = *puVar21;
                }
                else {
                  uVar22 = *puVar21;
                  if ((uVar22 & 1) != 0) {
                    uVar22 = (longlong)puVar21 + ((longlong)uVar22 >> 0x18);
                  }
                }
                local_b8 = (longlong *******)((longlong)iVar6 * sStack_118 + uVar22);
              }
              goto LAB_1437cc8de;
            }
            goto switchD_1437cb48b_caseD_3;
          }
          local_f8 = (longlong *******)ppppppplVar26[0xe];
          ppppppplStack_f0 = local_138;
          iStack_d8 = *(int *)(ppppppplVar26 + 0x11);
          local_e8 = (longlong *******)ppppppplVar26[0xf];
          iStack_e0 = *(int *)(ppppppplVar26 + 0x10);
          uStack_dc = *(undefined4 *)((longlong)ppppppplVar26 + 0x84);
          iVar6 = FUN_14026089e(&local_f8);
          if (*(int *)(ppppppplStack_f0 + 1) == *(int *)((longlong)ppppppplStack_f0 + 0x34)) {
            local_b8 = (longlong *******)0x0;
          }
          else {
            local_b8 = (longlong *******)
                       ((longlong)iVar6 * (longlong)iStack_d8 + (longlong)*ppppppplStack_f0);
          }
          ppppppplStack_b0 = (longlong *******)ppppppplVar26[0xe];
          goto LAB_1437cc8de;
        }
        goto switchD_1437cb48b_caseD_2;
      }
      puVar19 = local_a0;
      if (ppppppplVar26 != (longlong *******)0x0) {
        pppppplVar10 = ppppppplVar26[1];
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951f40) &&
           (FUN_144b3d300(&DAT_14c951f40), DAT_14c951f40 == -1)) {
          local_158 = (undefined *)FUN_1446ddbd2();
          local_150 = FUN_140eb3340;
          local_168 = 0x400000008001;
          local_160 = 0;
          FUN_14000176a(&DAT_14c951ef0,L"FMapProperty",0x400000000000,0);
          atexit(FUN_142815b60);
          _Init_thread_footer(&DAT_14c951f40);
        }
        pppppplVar11 = ppppppplVar26[1];
        if (pppppplVar10 == (longlong ******)&DAT_14c951ef0) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c951f40) && (FUN_144b3d300(&DAT_14c951f40), DAT_14c951f40 == -1)) {
            local_158 = (undefined *)FUN_1446ddbd2();
            local_150 = FUN_140eb3340;
            local_168 = 0x400000008001;
            local_160 = 0;
            FUN_14000176a(&DAT_14c951ef0,L"FMapProperty",0x400000000000,0);
            atexit(FUN_142815b60);
            _Init_thread_footer(&DAT_14c951f40);
          }
          if (DAT_14c951ef8 == 0) {
            bVar28 = pppppplVar11 != (longlong ******)0x0;
            if (pppppplVar11 != (longlong ******)&DAT_14c951ef0 && bVar28) {
              do {
                pppppplVar11 = (longlong ******)pppppplVar11[6];
                bVar28 = pppppplVar11 != (longlong ******)0x0;
                if (pppppplVar11 == (longlong ******)&DAT_14c951ef0) break;
              } while (pppppplVar11 != (longlong ******)0x0);
            }
          }
          else {
            bVar28 = ((ulonglong)pppppplVar11[3] & DAT_14c951ef8) != 0;
          }
          ppppppplVar14 = (longlong *******)0x0;
          if (bVar28) {
            ppppppplVar14 = ppppppplVar26;
          }
          local_c8 = *(undefined1 *)(ppppppplVar14 + 0x13);
          local_f8 = (longlong *******)ppppppplVar14[0xe];
          ppppppplStack_f0 = (longlong *******)ppppppplVar14[0xf];
          local_d0 = ppppppplVar14[0x12];
          iStack_e0 = *(int *)(ppppppplVar14 + 0x10);
          uStack_dc = *(undefined4 *)((longlong)ppppppplVar14 + 0x84);
          iStack_d8 = *(int *)(ppppppplVar14 + 0x11);
          uStack_d4 = *(undefined4 *)((longlong)ppppppplVar14 + 0x8c);
          local_e8 = ppppppplVar24;
          local_70 = (longlong *******)&local_f8;
          local_68 = FUN_140007ec8(&local_f8,&local_70);
          local_70 = (longlong *******)&local_f8;
          lVar23 = FUN_140005950(&local_f8,&local_70);
          local_b8 = (longlong *******)(iStack_e0 + lVar23);
          ppppppplStack_b0 = (longlong *******)ppppppplVar14[0xf];
          puVar19 = &DAT_149dfb77a;
          if (local_98 != 0) {
            puVar19 = local_a0;
          }
          if (puVar19 != (undefined2 *)0x0) {
            local_158 = DAT_14c872be8;
            local_160 = CONCAT44(local_160._4_4_,0x8000000);
            local_168 = 0;
            (*(code *)(*ppppppplVar14[0xe])[0x1f])();
          }
        }
        else {
          pppppplVar10 = (longlong ******)FUN_140019ace();
          if (pppppplVar11 != pppppplVar10) {
            puVar19 = &DAT_149dfb77a;
            if (local_98 != 0) {
              puVar19 = local_a0;
            }
            goto LAB_1437cbdd0;
          }
          ppppppplStack_b0 = (longlong *******)ppppppplVar26[0xe];
          cVar5 = (*(code *)(*ppppppplStack_b0)[0x37])();
          pppppplVar10 = ppppppplVar26[0xe];
          if (cVar5 == '\0') {
            sVar25 = (longlong)*(int *)((longlong)pppppplVar10 + 0x34) *
                     (longlong)*(int *)(pppppplVar10 + 6);
            if (*(char *)((longlong)ppppppplVar24 + sVar25) == '\0') {
              if ((*(byte *)((longlong)pppppplVar10 + 0x39) & 2) == 0) {
                (*(code *)(*pppppplVar10)[0x2c])(pppppplVar10,ppppppplVar24);
              }
              else {
                memset(ppppppplVar24,0,sVar25);
              }
              *(undefined1 *)((longlong)ppppppplVar24 + sVar25) = 1;
            }
          }
          else {
            cVar5 = (*(code *)(*pppppplVar10)[0x37])();
            pppppplVar10 = ppppppplVar26[0xe];
            if (cVar5 == '\0') {
              if (*(char *)((longlong)ppppppplVar24 +
                           (longlong)*(int *)((longlong)pppppplVar10 + 0x34) *
                           (longlong)*(int *)(pppppplVar10 + 6)) == '\0') goto LAB_1437cc7f4;
            }
            else {
              cVar5 = (*(code *)(*pppppplVar10)[0x39])();
              if (cVar5 == '\0') {
                pppppplVar10 = ppppppplVar26[0xe];
LAB_1437cc7f4:
                ppppplVar12 = pppppplVar10[7];
                if (((ulonglong)ppppplVar12 >> 0x24 & 1) == 0) {
                  (*(code *)(*pppppplVar10)[0x29])();
                  pppppplVar10 = ppppppplVar26[0xe];
                  ppppplVar12 = pppppplVar10[7];
                }
                if (((uint)ppppplVar12 >> 9 & 1) == 0) {
                  (*(code *)(*pppppplVar10)[0x2c])(pppppplVar10,ppppppplVar24);
                }
                else {
                  memset(ppppppplVar24,0,
                         (longlong)*(int *)(pppppplVar10 + 6) *
                         (longlong)*(int *)((longlong)pppppplVar10 + 0x34));
                }
              }
            }
          }
          local_b8 = ppppppplVar24;
        }
        goto LAB_1437cc8de;
      }
LAB_1437cbdd0:
      FUN_1446f470e(&local_f8,puVar19);
      ppppppplVar4 = local_f8;
      ppppppplVar14 = local_128;
      ppppppplVar20 = local_f8;
      if (local_128 != (longlong *******)0x0) {
        while (ppppppplVar20 != (longlong *******)0x0) {
          for (ppppppplVar20 = (longlong *******)ppppppplVar14[10];
              ppppppplVar20 != (longlong *******)0x0;
              ppppppplVar20 = (longlong *******)ppppppplVar20[3]) {
            if ((~*(uint *)(ppppppplVar20[1] + 3) & 0x8001) == 0) goto LAB_1437cbe70;
          }
          ppppppplVar14 = (longlong *******)(*(code *)(*ppppppplVar14)[0x56])(ppppppplVar14);
          ppppppplVar20 = ppppppplVar14;
        }
      }
LAB_1437cbe26:
      if (*param_4 == 0) goto LAB_1437cc957;
      goto LAB_1437cc943;
    }
    goto LAB_1437cca09;
  }
  uVar8 = 0;
LAB_1437cd2b1:
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffff01;
LAB_1437cbe70:
  if ((longlong *******)ppppppplVar20[4] != ppppppplVar4) {
    ppppppplVar20 = ppppppplVar20 + 3;
    do {
      for (ppppppplVar20 = (longlong *******)*ppppppplVar20; ppppppplVar20 != (longlong *******)0x0;
          ppppppplVar20 = (longlong *******)ppppppplVar20[3]) {
        if ((~*(uint *)(ppppppplVar20[1] + 3) & 0x8001) == 0) goto LAB_1437cbe70;
      }
      ppppppplVar14 = (longlong *******)(*(code *)(*ppppppplVar14)[0x56])(ppppppplVar14);
      ppppppplVar20 = ppppppplVar14 + 10;
    } while (ppppppplVar14 != (longlong *******)0x0);
    goto LAB_1437cbe26;
  }
  pppppplVar10 = ppppppplVar20[1];
  ppppppplStack_b0 = ppppppplVar20;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951f40) && (FUN_144b3d300(&DAT_14c951f40), DAT_14c951f40 == -1)) {
    local_158 = (undefined *)FUN_1446ddbd2();
    local_150 = FUN_140eb3340;
    local_168 = 0x400000008001;
    local_160 = 0;
    FUN_14000176a(&DAT_14c951ef0,L"FMapProperty",0x400000000000,0);
    atexit(FUN_142815b60);
    _Init_thread_footer(&DAT_14c951f40);
  }
  if (DAT_14c951ef8 == 0) {
    bVar28 = pppppplVar10 != (longlong ******)0x0;
    if (pppppplVar10 != (longlong ******)&DAT_14c951ef0 && bVar28) {
      do {
        pppppplVar10 = (longlong ******)pppppplVar10[6];
        bVar28 = pppppplVar10 != (longlong ******)0x0;
        if (pppppplVar10 == (longlong ******)&DAT_14c951ef0) break;
      } while (pppppplVar10 != (longlong ******)0x0);
    }
    if (bVar28) goto LAB_1437cbec1;
LAB_1437cc10e:
    pppppplVar10 = ppppppplVar20[1];
    pppppplVar11 = (longlong ******)FUN_140019ace();
    if (pppppplVar11[1] == (longlong *****)0x0) {
      bVar28 = pppppplVar10 != (longlong ******)0x0;
      if (pppppplVar10 != pppppplVar11 && bVar28) {
        do {
          pppppplVar10 = (longlong ******)pppppplVar10[6];
          bVar28 = pppppplVar10 != (longlong ******)0x0;
          if (pppppplVar10 == pppppplVar11) break;
        } while (pppppplVar10 != (longlong ******)0x0);
      }
      if (bVar28) goto LAB_1437cc12e;
    }
    else if (((ulonglong)pppppplVar10[3] & (ulonglong)pppppplVar11[1]) != 0) {
LAB_1437cc12e:
      ppppppplVar24 =
           (longlong *******)
           ((longlong)ppppppplVar24 +
           (longlong)local_13c * (longlong)*(int *)((longlong)ppppppplVar20 + 0x34) +
           (longlong)*(int *)((longlong)ppppppplVar20 + 0x44));
      local_b8 = ppppppplVar24;
      cVar5 = (*(code *)(*ppppppplVar20[0xe])[0x37])();
      pppppplVar10 = ppppppplVar20[0xe];
      if (cVar5 == '\0') {
        lVar23 = (longlong)*(int *)((longlong)pppppplVar10 + 0x34) *
                 (longlong)*(int *)(pppppplVar10 + 6);
        if (*(char *)((longlong)ppppppplVar24 + lVar23) == '\x01') {
          if ((*(byte *)((longlong)pppppplVar10 + 0x3c) & 0x10) == 0) {
            (*(code *)(*pppppplVar10)[0x29])(pppppplVar10,ppppppplVar24);
          }
          *(undefined1 *)((longlong)ppppppplVar24 + lVar23) = 0;
        }
      }
      else {
        (*(code *)(*pppppplVar10)[0x3a])(pppppplVar10,ppppppplVar24);
      }
      goto LAB_1437cc8de;
    }
    local_b8 = (longlong *******)
               ((longlong)*(int *)((longlong)ppppppplVar20 + 0x44) + (longlong)ppppppplVar24);
  }
  else {
    if (((ulonglong)pppppplVar10[3] & DAT_14c951ef8) == 0) goto LAB_1437cc10e;
LAB_1437cbec1:
    local_e8 = (longlong *******)
               ((longlong)ppppppplVar24 +
               (longlong)local_13c * (longlong)*(int *)((longlong)ppppppplVar20 + 0x34) +
               (longlong)*(int *)((longlong)ppppppplVar20 + 0x44));
    local_c8 = *(undefined1 *)(ppppppplVar20 + 0x13);
    local_f8 = (longlong *******)ppppppplVar20[0xe];
    ppppppplStack_f0 = (longlong *******)ppppppplVar20[0xf];
    local_d0 = ppppppplVar20[0x12];
    iStack_e0 = *(int *)(ppppppplVar20 + 0x10);
    uStack_dc = *(undefined4 *)((longlong)ppppppplVar20 + 0x84);
    iStack_d8 = *(int *)(ppppppplVar20 + 0x11);
    uStack_d4 = *(undefined4 *)((longlong)ppppppplVar20 + 0x8c);
    local_b8 = local_e8;
    FUN_140458a4e(&local_f8,0);
  }
LAB_1437cc8de:
  ppppppplVar24 = ppppppplStack_b0;
  if (ppppppplStack_b0 == (longlong *******)0x0) {
LAB_1437cc943:
    (**(code **)(*param_3 + 0x38))(param_3);
    if (*param_4 == 0) {
LAB_1437cc957:
      bVar28 = true;
      local_130 = 0;
      goto LAB_1437cca09;
    }
  }
  else {
    pcVar3 = *(code **)(param_4 + 4);
    if (pcVar3 != (code *)0x0) {
      plVar16 = *(longlong **)(param_4 + 8);
      if (*(longlong **)(param_4 + 8) == (longlong *)0x0) {
        plVar16 = local_100;
      }
      local_f8 = ppppppplVar26;
      local_70 = ppppppplStack_b0;
      uVar13 = (**(code **)(*plVar16 + 8))();
      cVar5 = (*pcVar3)(uVar13,&local_70);
      if (cVar5 == '\0') {
        (**(code **)(*param_3 + 0x38))(param_3);
        goto LAB_1437cc931;
      }
    }
    local_c0 = (code *)((ulonglong)local_c0 & 0xffffffff00000000);
    ppppppplVar14 = (longlong *******)FUN_147de1d6f(&local_c0);
    uVar22 = uStack_80;
    lVar23 = (longlong)(int)uStack_80;
    uVar8 = (int)uStack_80 + 1;
    uStack_80 = CONCAT44(uStack_80._4_4_,uVar8);
    if (uStack_80._4_4_ < uVar8) {
      FUN_147dedb52(&local_88,uVar22 & 0xffffffff);
    }
    lVar23 = lVar23 * 0x20;
    *(int *)(local_88 + lVar23) = local_13c;
    *(undefined4 *)(local_88 + 4 + lVar23) = local_11c;
    *(longlong ********)(local_88 + 8 + lVar23) = local_138;
    *(longlong ********)(local_88 + 0x10 + lVar23) = ppppppplVar26;
    *(longlong ********)(local_88 + 0x18 + lVar23) = local_128;
    local_11c = local_c0._4_4_;
    local_13c = 0;
    local_138 = local_b8;
    ppppppplVar26 = ppppppplVar24;
    local_128 = ppppppplVar14;
  }
switchD_1437cb48b_caseD_2:
  bVar28 = false;
  goto LAB_1437cca09;
LAB_1437cbb42:
  if ((longlong *******)ppppppplVar14[4] != ppppppplVar20) {
    ppppppplVar14 = ppppppplVar14 + 3;
    do {
      for (ppppppplVar14 = (longlong *******)*ppppppplVar14; ppppppplVar14 != (longlong *******)0x0;
          ppppppplVar14 = (longlong *******)ppppppplVar14[3]) {
        if ((~*(uint *)(ppppppplVar14[1] + 3) & 0x8001) == 0) goto LAB_1437cbb42;
      }
      ppppppplVar24 = (longlong *******)(*(code *)(*ppppppplVar24)[0x56])(ppppppplVar24);
      ppppppplVar14 = ppppppplVar24 + 10;
    } while (ppppppplVar24 != (longlong *******)0x0);
    goto LAB_1437cbaec;
  }
  pcVar3 = *(code **)(param_4 + 4);
  if (pcVar3 != (code *)0x0) {
    plVar16 = *(longlong **)(param_4 + 8);
    if (*(longlong **)(param_4 + 8) == (longlong *)0x0) {
      plVar16 = local_100;
    }
    local_f8 = ppppppplVar26;
    local_c0 = (code *)ppppppplVar14;
    uVar13 = (**(code **)(*plVar16 + 8))();
    cVar5 = (*pcVar3)(uVar13,&local_c0);
    bVar28 = false;
    if (cVar5 == '\0') goto LAB_1437cca09;
  }
  lVar23 = *param_3;
  local_168 = CONCAT44(local_168._4_4_,local_13c);
LAB_1437cc345:
  (**(code **)(lVar23 + 0x20))(param_3,ppppppplVar14);
  goto LAB_1437cc348;
LAB_1437cb63b:
  if ((longlong *******)ppppppplVar14[4] != ppppppplVar20) {
    ppppppplVar14 = ppppppplVar14 + 3;
    do {
      for (ppppppplVar14 = (longlong *******)*ppppppplVar14; ppppppplVar14 != (longlong *******)0x0;
          ppppppplVar14 = (longlong *******)ppppppplVar14[3]) {
        if ((~*(uint *)(ppppppplVar14[1] + 3) & 0x8001) == 0) goto LAB_1437cb63b;
      }
      ppppppplVar24 = (longlong *******)(*(code *)(*ppppppplVar24)[0x56])(ppppppplVar24);
      ppppppplVar14 = ppppppplVar24 + 10;
    } while (ppppppplVar24 != (longlong *******)0x0);
    goto LAB_1437cb5df;
  }
  pcVar3 = *(code **)(param_4 + 4);
  ppppppplStack_b0 = ppppppplVar14;
  if (pcVar3 != (code *)0x0) {
    plVar16 = *(longlong **)(param_4 + 8);
    if (*(longlong **)(param_4 + 8) == (longlong *)0x0) {
      plVar16 = local_100;
    }
    local_f8 = ppppppplVar26;
    local_70 = ppppppplVar14;
    uVar13 = (**(code **)(*plVar16 + 8))();
    cVar5 = (*pcVar3)(uVar13,&local_70);
    if (cVar5 == '\0') {
      (**(code **)(*param_3 + 0x30))(param_3);
LAB_1437cc931:
      bVar28 = false;
      goto LAB_1437cca09;
    }
  }
  pppppplVar10 = ppppppplVar14[1];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952900) && (FUN_144b3d300(&DAT_14c952900), DAT_14c952900 == -1)) {
    local_158 = (undefined *)FUN_1446ddbd2();
    local_150 = FUN_1468e4cee;
    local_168 = 0x800000008001;
    local_160 = 0;
    FUN_14000176a(&DAT_14c9528b0,L"FSetProperty");
    atexit(FUN_142817fb7);
    _Init_thread_footer(&DAT_14c952900);
  }
  if (DAT_14c9528b8 == 0) {
    bVar28 = pppppplVar10 != (longlong ******)0x0;
    if (pppppplVar10 != (longlong ******)&DAT_14c9528b0 && bVar28) {
      do {
        pppppplVar10 = (longlong ******)pppppplVar10[6];
        bVar28 = pppppplVar10 != (longlong ******)0x0;
        if (pppppplVar10 == (longlong ******)&DAT_14c9528b0) break;
      } while (pppppplVar10 != (longlong ******)0x0);
    }
    if (!bVar28) goto caseD_21_1;
code_r0x0001437cbbfc:
    ppppppplVar24 =
         (longlong *******)
         ((longlong)local_138 +
         (longlong)local_13c * (longlong)*(int *)((longlong)ppppppplVar14 + 0x34) +
         (longlong)*(int *)((longlong)ppppppplVar14 + 0x44));
    local_f8 = (longlong *******)ppppppplVar14[0xe];
    iStack_d8 = *(int *)(ppppppplVar14 + 0x11);
    local_e8 = (longlong *******)ppppppplVar14[0xf];
    iStack_e0 = *(int *)(ppppppplVar14 + 0x10);
    uStack_dc = *(undefined4 *)((longlong)ppppppplVar14 + 0x84);
    ppppppplStack_f0 = ppppppplVar24;
    local_b8 = ppppppplVar24;
    FUN_1402608fa(&local_f8,0);
  }
  else {
    if (((ulonglong)pppppplVar10[3] & DAT_14c9528b8) != 0) goto code_r0x0001437cbbfc;
caseD_21_1:
    pppppplVar10 = ppppppplVar14[1];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
      FUN_1446ddbd2();
      local_150 = FUN_140b31576;
      local_158 = &DAT_14c951a38;
      local_160 = 0;
      local_168 = 0x208001;
      FUN_14000176a(&DAT_14c951a90,L"FArrayProperty");
      atexit(FUN_14280cbf7);
      _Init_thread_footer(&DAT_14c951ae0);
    }
    ppppppplVar24 = local_138;
    if (DAT_14c951a98 == 0) {
      bVar28 = pppppplVar10 != (longlong ******)0x0;
      if (pppppplVar10 != (longlong ******)&DAT_14c951a90 && bVar28) {
        do {
          pppppplVar10 = (longlong ******)pppppplVar10[6];
          bVar28 = pppppplVar10 != (longlong ******)0x0;
          if (pppppplVar10 == (longlong ******)&DAT_14c951a90) break;
        } while (pppppplVar10 != (longlong ******)0x0);
      }
      if (!bVar28) goto LAB_1437cbd09;
LAB_1437cb718:
      cVar5 = (**(code **)(*param_3 + 0x28))(param_3,ppppppplVar14);
      bVar28 = false;
      if (cVar5 != '\0') goto LAB_1437cca09;
      local_b8 = ppppppplVar24;
    }
    else {
      if (((ulonglong)pppppplVar10[3] & DAT_14c951a98) != 0) goto LAB_1437cb718;
LAB_1437cbd09:
      local_b8 = local_138;
    }
  }
  ppppppplVar14 = (longlong *******)FUN_147de1d6f(&local_c0);
  uVar22 = uStack_80;
  lVar23 = (longlong)(int)uStack_80;
  uVar8 = (int)uStack_80 + 1;
  uStack_80 = CONCAT44(uStack_80._4_4_,uVar8);
  if (uStack_80._4_4_ < uVar8) {
    FUN_147dedb52(&local_88,uVar22 & 0xffffffff);
  }
  lVar23 = lVar23 * 0x20;
  *(int *)(local_88 + lVar23) = local_13c;
  *(undefined4 *)(local_88 + 4 + lVar23) = local_11c;
  *(longlong ********)(local_88 + 8 + lVar23) = local_138;
  *(longlong ********)(local_88 + 0x10 + lVar23) = ppppppplVar26;
  *(longlong ********)(local_88 + 0x18 + lVar23) = local_128;
  local_13c = (int)local_c0;
  local_11c = local_c0._4_4_;
  ppppppplVar26 = ppppppplStack_b0;
  local_138 = ppppppplVar24;
  local_128 = ppppppplVar14;
LAB_1437cc348:
  bVar28 = false;
LAB_1437cca09:
  if (local_a0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar8 = local_130;
  if (bVar28) goto LAB_1437cd29f;
  cVar5 = (**(code **)(*param_3 + 0x18))(param_3,&local_8c);
  if (cVar5 == '\0') goto LAB_1437cd297;
  goto LAB_1437cb40b;
LAB_1437cd297:
  uVar8 = 0;
LAB_1437cd29f:
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  goto LAB_1437cd2b1;
}



// FUNCTION 1437cd3a4 FUN_1437cd3a4 body=169 status=ok
// SIG undefined FUN_1437cd3a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437cd3a4(void)

{
  DAT_14cb12690 = 0;
  if (DAT_14cb12688 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb12650 = 0;
  if (DAT_14cb12654 != 0) {
    FUN_14472eb64(&DAT_14cb12648,0);
  }
  _DAT_14cb12678 = 0xffffffff;
  _DAT_14cb12670 = 0;
  if (0x80 < DAT_14cb12674) {
    DAT_14cb12674 = 0x80;
    FUN_1446efbd8(&DAT_14cb12658,0);
  }
  if (DAT_14cb12668 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb12648 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1437cd44d FUN_1437cd44d body=143 status=ok
// SIG undefined FUN_1437cd44d(void)

void FUN_1437cd44d(void)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  uStack_38 = 0;
  local_48 = 0xd;
  FUN_14282b410(L"/Script/Serialization",0,0,&PTR_FUN_14ab31d60);
  local_28 = 0x800000014ab32042;
  local_14 = 0xd;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_1464143f0(&local_28);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437cd4ee FUN_1437cd4ee body=236 status=ok
// SIG undefined FUN_1437cd4ee(void)

void FUN_1437cd4ee(void)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_60 = 0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/Overlay",&PTR_FUN_14ab33a30,1,&PTR_FUN_14ab33a00);
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/Overlay",&PTR_FUN_14ab33e20,1,0);
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/Overlay",&PTR_FUN_14ab342d0,1,0);
  local_48 = 0x800000014a54d87a;
  local_34 = 7;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_14641482a(&local_48);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437cd5dc FUN_1437cd5dc body=49 status=ok
// SIG undefined FUN_1437cd5dc(void)

void FUN_1437cd5dc(void)

{
  FUN_144760e21(DAT_14cb12738,DAT_14cb12740);
  if (DAT_14cb12738 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1437cd60d FUN_1437cd60d body=49 status=ok
// SIG undefined FUN_1437cd60d(void)

void FUN_1437cd60d(void)

{
  FUN_144760e21(DAT_14cb12750,DAT_14cb12758);
  if (DAT_14cb12750 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1437cd63e FUN_1437cd63e body=49 status=ok
// SIG undefined FUN_1437cd63e(void)

void FUN_1437cd63e(void)

{
  FUN_144760e21(DAT_14cb127b8,DAT_14cb127c0);
  if (DAT_14cb127b8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1437cd66f FUN_1437cd66f body=49 status=ok
// SIG undefined FUN_1437cd66f(void)

void FUN_1437cd66f(void)

{
  FUN_144760e21(DAT_14cb12720,DAT_14cb12728);
  if (DAT_14cb12720 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1437cd6a0 FUN_1437cd6a0 body=49 status=ok
// SIG undefined FUN_1437cd6a0(void)

void FUN_1437cd6a0(void)

{
  FUN_144760e21(DAT_14cb12768,DAT_14cb12770);
  if (DAT_14cb12768 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1437cd6d1 FUN_1437cd6d1 body=49 status=ok
// SIG undefined FUN_1437cd6d1(void)

void FUN_1437cd6d1(void)

{
  FUN_144760e21(DAT_14cb12780,DAT_14cb12788);
  if (DAT_14cb12780 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1437cd702 FUN_1437cd702 body=326 status=ok
// SIG undefined FUN_1437cd702(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437cd702(void)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  DAT_14cb12738 = 0;
  _DAT_14cb12740 = 0;
  _DAT_14cb12748 = 2;
  atexit(FUN_1437cd5dc);
  DAT_14cb12750 = 0;
  _DAT_14cb12758 = 0;
  _DAT_14cb12760 = 2;
  atexit(FUN_1437cd60d);
  DAT_14cb127b8 = 0;
  _DAT_14cb127c0 = 0;
  _DAT_14cb127c8 = 2;
  atexit(FUN_1437cd63e);
  DAT_14cb12720 = 0;
  _DAT_14cb12728 = 0;
  _DAT_14cb12730 = 2;
  atexit(FUN_1437cd66f);
  DAT_14cb12768 = 0;
  _DAT_14cb12770 = 0;
  _DAT_14cb12778 = 2;
  atexit(FUN_1437cd6a0);
  DAT_14cb12780 = 0;
  _DAT_14cb12788 = 0;
  _DAT_14cb12790 = 2;
  atexit(FUN_1437cd6d1);
  local_38 = 0x800000014ab3458e;
  local_24 = 0x14;
  local_30 = FUN_14577453c();
  local_2c = 1;
  FUN_146414afe(&local_38);
  FUN_1446f470e(&DAT_14cb127a4,L"InstallBundleManagerKeepAwake",1);
  FUN_1446f470e(&DAT_14cb127ac,L"InstallBundleManagerKeepAwakeWithRendering",1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437cd84c FUN_1437cd84c body=55 status=ok
// SIG undefined FUN_1437cd84c(void)

void FUN_1437cd84c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb127d8 == 0) {
    uVar1 = FUN_14125ebb0();
    DAT_14cb127d8 = FUN_14171c317(FUN_146414c1d,uVar1,L"EClothingWindMethod_Legacy");
  }
  return;
}



// FUNCTION 1437cd883 FUN_1437cd883 body=55 status=ok
// SIG undefined FUN_1437cd883(void)

void FUN_1437cd883(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb12838 == 0) {
    uVar1 = FUN_14125ebb0();
    DAT_14cb12838 = FUN_14171c317(FUN_146414d12,uVar1,L"EWeightMapTargetCommon");
  }
  return;
}



// FUNCTION 1437cd8ba FUN_1437cd8ba body=55 status=ok
// SIG undefined FUN_1437cd8ba(void)

void FUN_1437cd8ba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb12868 == 0) {
    uVar1 = FUN_14125ebb0();
    DAT_14cb12868 = FUN_14171c317(FUN_146414dd8,uVar1,L"EClothMassMode");
  }
  return;
}



// FUNCTION 1437cd909 FUN_1437cd909 body=69 status=ok
// SIG undefined FUN_1437cd909(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437cd909(void)

{
  _DAT_14cb12908 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437cd94b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb12910,1);
  return;
}



// FUNCTION 1437cd94e FUN_1437cd94e body=69 status=ok
// SIG undefined FUN_1437cd94e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437cd94e(void)

{
  _DAT_14cb12920 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437cd990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb12928,1);
  return;
}



// FUNCTION 1437cd994 FUN_1437cd994 body=180 status=ok
// SIG undefined FUN_1437cd994(void)

void FUN_1437cd994(longlong *param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  undefined8 unaff_RBX;
  
  (**(code **)(*param_1 + 0x10))();
  (**(code **)(*param_1 + 0x18))
            (param_1,param_2,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5) & 0xffffffff);
  (**(code **)(*param_1 + 0x20))(param_1,param_2);
  (**(code **)(*param_1 + 0x28))(param_1,param_2);
  (**(code **)(*param_1 + 0x30))(param_1,param_2);
  (**(code **)(*param_1 + 0x38))(param_1,param_3,param_4);
  (**(code **)(*param_1 + 0x40))(param_1,param_2,param_3,param_4);
  (**(code **)(*param_1 + 0x48))(param_1,param_2);
  (**(code **)(*param_1 + 0x50))(param_1,param_2);
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x854);
  return;
}



// FUNCTION 1437cda48 FUN_1437cda48 body=24 status=ok
// SIG undefined FUN_1437cda48(void)

void FUN_1437cda48(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)(param_2 + 0x240);
  puVar3 = (undefined8 *)(param_1 + 0x30);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 1437cda60 FUN_1437cda60 body=427 status=ok
// SIG undefined FUN_1437cda60(void)

void FUN_1437cda60(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  float *pfVar3;
  longlong lVar4;
  float fVar5;
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
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)(param_2 + 0xb0);
  if (lVar4 == 0) {
    lVar4 = FUN_1448abda6(param_2);
  }
  fVar5 = 0.0;
  if ((*(longlong *)(lVar4 + 0x30) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(lVar4 + 0x30) + 0x2b0), plVar1 != (longlong *)0x0)) {
    if (*(code **)(*plVar1 + 0x660) == FUN_1449fb17e) {
      if ((*(byte *)((longlong)plVar1 + 0x39e) & 1) == 0) {
        if ((*(byte *)((longlong)plVar1 + 0x39e) & 2) == 0) {
          if (DAT_14caf84d0 == 0) {
            local_40 = &local_28;
            local_28 = FUN_1449e2820;
            local_30 = FUN_14081d0ea;
            local_38 = &LAB_145a62952;
            local_48 = &LAB_147c8cd45;
            local_50 = &LAB_1461468ae;
            local_58 = L"Engine";
            local_60 = 0;
            local_68 = 0x10000006;
            local_70 = 8;
            local_78 = 0x218;
            FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
          }
          lVar2 = DAT_14caf84d0;
          lVar4 = *(longlong *)(DAT_14caf84d0 + 0x110);
          if (lVar4 == 0) {
            FUN_140aa6c08(DAT_14caf84d0);
            lVar4 = *(longlong *)(lVar2 + 0x110);
          }
          pfVar3 = (float *)(lVar4 + 0x38);
        }
        else {
          pfVar3 = (float *)((longlong)plVar1 + 0x41c);
        }
        fVar5 = *pfVar3;
        *(float *)(plVar1 + 0x83) = fVar5;
      }
      else {
        fVar5 = *(float *)(plVar1 + 0x83);
      }
    }
    else {
      fVar5 = (float)(**(code **)(*plVar1 + 0x660))(plVar1);
    }
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(double *)(param_1 + 0xa0) = (double)fVar5;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437cdc1a FUN_1437cdc1a body=409 status=ok
// SIG undefined FUN_1437cdc1a(void)

void FUN_1437cdc1a(longlong param_1,longlong param_2,float param_3,float param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  DWORD DVar5;
  DWORD DVar6;
  ulonglong uVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  
  lVar3 = DAT_14cb12918;
  cVar4 = *(char *)(param_2 + 0xc5e);
  if (cVar4 == '\0') {
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar1 = *(int *)(lVar2 + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar7 = 0;
    }
    else if (iVar1 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar7 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar7 = 1;
    }
    piVar8 = (int *)(lVar2 + 0xc60);
    if (*(float *)(lVar3 + uVar7 * 4) * param_4 < param_3) {
      cVar4 = '\x01';
    }
    else {
      cVar4 = *(char *)(param_2 + 0xc5e);
    }
  }
  else {
    piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
  }
  *(char *)(param_1 + 0xcc) = cVar4;
  lVar3 = DAT_14cb12930;
  iVar1 = *piVar8;
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar7 = 0;
  }
  else if (iVar1 == 1) {
    DVar5 = FUN_140ad26c0();
    DVar6 = GetCurrentThreadId();
    uVar7 = (ulonglong)(DVar5 != DVar6);
    cVar4 = *(char *)(param_1 + 0xcc);
  }
  else {
    uVar7 = 1;
  }
  fVar9 = 0.0;
  if ((0.0 < param_3) && (cVar4 == '\0')) {
    fVar9 = *(float *)(lVar3 + uVar7 * 4);
    if (1.0 <= fVar9) {
      fVar9 = 1.0;
    }
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    fVar10 = *(float *)(param_2 + 0xc6c);
    if (fVar9 <= *(float *)(param_2 + 0xc6c)) {
      fVar10 = fVar9;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    fVar9 = param_3;
    if (param_4 <= param_3) {
      fVar9 = param_4;
    }
    fVar9 = (fVar9 * fVar10) / param_3;
  }
  *(float *)(param_1 + 200) = fVar9;
  return;
}



// FUNCTION 1437cddd8 FUN_1437cddd8 body=190 status=ok
// SIG undefined FUN_1437cddd8(void)

ulonglong FUN_1437cddd8(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                       undefined1 param_5)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = (**(code **)(*param_4 + 8))(param_4,param_2,*param_4,*(undefined4 *)(param_1 + 8),param_5)
  ;
  if ((param_2 == 0) ||
     (uVar3 = (ulonglong)*(uint *)(param_2 + 8), (*(uint *)(param_2 + 8) >> 0x1e & 1) != 0)) {
    if (*(int *)((longlong)param_4 + 0x14) < 0) {
      *(undefined4 *)(param_4 + 2) = 0;
      uVar3 = FUN_1401a2688(param_4 + 1,0);
    }
    else {
      *(undefined4 *)(param_4 + 2) = 0;
    }
  }
  if ((int)param_4[2] == 0) {
    uVar1 = *(uint *)(param_2 + 0x66c);
    uVar3 = (ulonglong)uVar1;
    if ((((uVar1 != 0) && (uVar2 = *(uint *)(param_2 + 0x668), -1 < (int)uVar2)) &&
        ((int)uVar2 < DAT_14c9647dc)) &&
       ((lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar4 != 0 &&
        (*(uint *)(lVar4 + 0x10) == uVar1)))) {
      uVar3 = (ulonglong)*(uint *)(lVar4 + 8);
    }
    *(undefined4 *)(param_4 + 2) = 0;
    if (*(int *)((longlong)param_4 + 0x14) < 0) {
      uVar3 = FUN_1401a2688(param_4 + 1,0);
      return uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 1437cde96 FUN_1437cde96 body=5562 status=ok
// SIG undefined FUN_1437cde96(void)

void FUN_1437cde96(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  undefined1 param_5,char param_6,float param_7,undefined8 param_8)

{
  float *pfVar1;
  float *pfVar2;
  longlong *plVar3;
  int *piVar4;
  undefined8 *puVar5;
  float fVar6;
  ushort uVar7;
  undefined8 uVar8;
  int iVar9;
  float *pfVar10;
  longlong *plVar11;
  double dVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  float *pfVar20;
  ulonglong uVar21;
  wchar_t *pwVar22;
  int iVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  bool bVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auStack_508 [32];
  wchar_t *local_4e8;
  wchar_t *local_4e0;
  ulonglong local_4d8;
  float *local_4d0;
  ulonglong local_4c8;
  ulonglong local_4c0;
  wchar_t *local_4b8;
  wchar_t *local_4b0;
  float *local_4a8;
  float *local_4a0;
  ulonglong local_498;
  longlong local_490;
  ulonglong local_488;
  longlong local_480;
  ulonglong local_478;
  float *local_470;
  float *local_468;
  longlong local_460 [2];
  undefined1 local_450 [4];
  undefined1 local_44c [4];
  longlong *local_448 [2];
  undefined8 local_438;
  longlong *local_430;
  longlong local_428 [2];
  longlong *local_418 [2];
  longlong local_408 [2];
  longlong *local_3f8 [2];
  longlong local_3e8 [2];
  longlong *local_3d8 [2];
  longlong *local_3c8 [2];
  undefined8 local_3b8;
  longlong *local_3b0;
  undefined8 *local_3a8;
  undefined1 *local_3a0;
  float local_398;
  float fStack_394;
  float local_390;
  longlong *local_388 [2];
  longlong *local_378;
  undefined4 local_350;
  char local_34c;
  byte local_338;
  undefined8 local_328;
  double adStack_320 [6];
  float local_2f0 [65];
  float fStack_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  ulonglong local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_178;
  ulonglong local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined1 local_148 [16];
  undefined4 local_138;
  undefined1 local_128 [16];
  undefined4 local_118;
  undefined1 local_108 [16];
  undefined1 local_f8 [8];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_508;
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1400d0632(param_1,0);
  }
  if ((int)param_3[7] != 0) {
    uVar13 = *(uint *)(param_2 + 1);
    uVar25 = (ulonglong)uVar13;
    if ((((uVar25 != 0) && (uVar13 == *(uint *)(param_2 + 3))) &&
        ((int)param_2[7] * -0x55555555 + 0x2aaaaaaaU < 0x55555555)) &&
       (((int)param_3[7] * -0x55555555 + 0x2aaaaaaaU < 0x55555555 &&
        ((int)param_3[1] == (int)param_3[3])))) {
      local_480 = param_4;
      FUN_147df0ff6(param_2,local_460);
      pwVar22 = DAT_14c872be8;
      local_328 = L"GenerateMeshToMeshVertData";
      adStack_320[0]._0_4_ = 0x1a;
      FUN_1446e940c(&local_1e8,&local_328);
      local_328 = L"ClothingMeshUtils";
      adStack_320[0]._0_4_ = 0x11;
      FUN_1446e940c(&local_398,&local_328);
      local_328 = L"Generating cloth deformer data...";
      adStack_320[0] = (double)CONCAT44(adStack_320[0]._4_4_,0x21);
      FUN_140208c1e(&local_1b8,&local_398,&local_1e8,&local_328);
      local_4e8 = pwVar22;
      FUN_140997f46(local_388,(float)((int)uVar13 / 100),&local_1b8,1);
      FUN_140997a0e(local_388);
      if (local_1b8 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_1b8 + 0x10))();
      }
      local_350 = 0x3f800000;
      local_34c = '\x01';
      local_338 = local_338 & 0xfc;
      local_498 = uVar25;
      if (param_6 != '\0') {
        if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar13 * 5);
        }
        if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar13 * 5)) {
          FUN_1400d0632(param_1);
        }
        local_4a0 = (float *)(param_3 + 0x48);
        uVar21 = 0;
        do {
          FUN_147df090a(param_3,param_8,uVar21 & 0xffffffff);
          lVar16 = 0;
          do {
            *(undefined8 *)((longlong)&local_328 + lVar16) = 0;
            *(undefined8 *)((longlong)adStack_320 + lVar16) = 0x3f80000000000000;
            *(undefined8 *)((longlong)adStack_320 + lVar16 + 8) = 0;
            *(undefined8 *)((longlong)adStack_320 + lVar16 + 0x10) = 0x3f80000000000000;
            *(undefined8 *)((longlong)adStack_320 + lVar16 + 0x18) = 0;
            *(undefined8 *)((longlong)adStack_320 + lVar16 + 0x20) = 0x3f80000000000000;
            *(undefined4 *)((longlong)local_2f0 + lVar16) = 0;
            lVar16 = lVar16 + 0x40;
          } while (lVar16 != 0x140);
          local_4a8 = (float *)(*param_2 + uVar21 * 0xc);
          local_470 = (float *)(uVar21 * 0xc + param_2[2]);
          local_478 = uVar21;
          if ((int)param_2[1] == (int)param_2[5]) {
            lVar16 = param_2[4];
            fVar30 = *(float *)(lVar16 + 8 + uVar21 * 0xc);
            fVar41 = *(float *)(lVar16 + uVar21 * 0xc);
            fVar42 = *(float *)(lVar16 + 4 + uVar21 * 0xc);
          }
          else {
            FUN_14041c796(local_470,&local_1b8,&local_1e8);
            fVar30 = dStack_1b0._0_4_;
            fVar41 = (float)local_1b8;
            fVar42 = local_1b8._4_4_;
          }
          local_1a8 = (double)local_4a8[2];
          dStack_1b0 = (double)local_4a8[1];
          local_1b8 = (wchar_t *)(double)*local_4a8;
          FUN_147df0c5a(param_3,&local_398,&local_1b8,0x38d1b717);
          fVar39 = *(float *)(param_3 + 0x49);
          fVar28 = local_390;
          if ((uint)local_390 < 5) {
            fVar28 = fVar39;
            if ((int)fVar39 < 1) {
              fVar28 = (float)((int)param_3[7] / 3);
            }
            if (4 < (uint)fVar28) goto LAB_1437ce32f;
            local_1d8 = 0;
            uStack_1d0 = 0;
            local_1e8 = 0;
            uStack_1e0 = 0;
            local_1c8 = 0;
            if (fVar28 == 0.0) {
              uVar21 = 0;
            }
            else {
              uVar21 = (ulonglong)(uint)fVar28;
              uVar24 = 0;
              do {
                if ((int)fVar39 < 1) {
                  iVar15 = (int)uVar24;
                }
                else {
                  iVar15 = *(int *)(*(longlong *)local_4a0 + uVar24 * 4);
                }
                uVar27 = FUN_147df0b20(param_3,&local_1b8,iVar15 * 3);
                *(int *)(&local_1e8 + uVar24) = iVar15 * 3;
                *(undefined4 *)((longlong)&local_1e8 + uVar24 * 8 + 4) = uVar27;
                uVar24 = uVar24 + 1;
              } while (uVar21 != uVar24);
            }
            do {
              (&local_1e8)[uVar21] = 0xffffffff;
              uVar21 = uVar21 + 1;
            } while (uVar21 != 5);
          }
          else {
LAB_1437ce32f:
            local_1d8 = 0;
            uStack_1d0 = 0;
            local_1e8 = 0;
            uStack_1e0 = 0;
            local_1c8 = 0;
            lVar16 = 0;
            do {
              pfVar20 = &local_398;
              if (((uint)local_390 < 5) && (pfVar20 = local_4a0, (int)fVar39 < 1)) {
                iVar15 = (int)lVar16;
              }
              else {
                iVar15 = *(int *)(*(longlong *)pfVar20 + lVar16 * 4);
              }
              uVar27 = FUN_147df0b20(param_3,&local_1b8,iVar15 * 3);
              *(int *)(&local_1e8 + lVar16) = iVar15 * 3;
              *(undefined4 *)((longlong)&local_1e8 + lVar16 * 8 + 4) = uVar27;
              lVar16 = lVar16 + 1;
            } while (lVar16 != 5);
            iVar15 = 1;
            do {
              iVar23 = iVar15 * 2 + 1;
              iVar9 = iVar15;
              do {
                iVar18 = iVar23;
                if ((iVar9 < 2) &&
                   (fVar29 = *(float *)((longlong)&local_1e8 + (longlong)iVar18 * 8 + 4),
                   pfVar20 = (float *)((longlong)&local_1d8 + (longlong)(iVar9 * 2) * 8 + 4),
                   fVar29 < *pfVar20 || fVar29 == *pfVar20)) {
                  iVar18 = iVar9 * 2 + 2;
                }
                lVar16 = (longlong)iVar9;
                lVar17 = (longlong)iVar18;
                fVar29 = *(float *)((longlong)&local_1e8 + lVar17 * 8 + 4);
                pfVar20 = (float *)((longlong)&local_1e8 + lVar16 * 8 + 4);
                if (fVar29 < *pfVar20 || fVar29 == *pfVar20) break;
                uVar8 = (&local_1e8)[lVar16];
                (&local_1e8)[lVar16] = (&local_1e8)[lVar17];
                (&local_1e8)[lVar17] = uVar8;
                iVar23 = iVar18 * 2 + 1;
                iVar9 = iVar18;
              } while (iVar23 < 5);
              bVar26 = iVar15 != 0;
              iVar15 = iVar15 + -1;
            } while (bVar26);
            if (5 < (int)fVar28) {
              uVar21 = 5;
              do {
                pfVar20 = &local_398;
                if ((4 < (uint)local_390) ||
                   (iVar15 = (int)uVar21, pfVar20 = local_4a0, 0 < (int)fVar39)) {
                  iVar15 = *(int *)(*(longlong *)pfVar20 + uVar21 * 4);
                }
                fVar29 = (float)FUN_147df0b20(param_3,&local_1b8,iVar15 * 3);
                if (fVar29 < local_1e8._4_4_) {
                  local_1e8 = CONCAT44(fVar29,iVar15 * 3);
                  iVar15 = 1;
                  do {
                    iVar23 = iVar15 * 2 + 1;
                    iVar9 = iVar15;
                    do {
                      iVar18 = iVar23;
                      if ((iVar9 < 2) &&
                         (fVar29 = *(float *)((longlong)&local_1e8 + (longlong)iVar18 * 8 + 4),
                         pfVar20 = (float *)((longlong)&local_1d8 + (longlong)(iVar9 * 2) * 8 + 4),
                         fVar29 < *pfVar20 || fVar29 == *pfVar20)) {
                        iVar18 = iVar9 * 2 + 2;
                      }
                      lVar16 = (longlong)iVar9;
                      lVar17 = (longlong)iVar18;
                      fVar29 = *(float *)((longlong)&local_1e8 + lVar17 * 8 + 4);
                      pfVar20 = (float *)((longlong)&local_1e8 + lVar16 * 8 + 4);
                      if (fVar29 < *pfVar20 || fVar29 == *pfVar20) break;
                      uVar8 = (&local_1e8)[lVar16];
                      (&local_1e8)[lVar16] = (&local_1e8)[lVar17];
                      (&local_1e8)[lVar17] = uVar8;
                      iVar23 = iVar18 * 2 + 1;
                      iVar9 = iVar18;
                    } while (iVar23 < 5);
                    bVar26 = iVar15 != 0;
                    iVar15 = iVar15 + -1;
                  } while (bVar26);
                }
                uVar21 = uVar21 + 1;
              } while (uVar21 != (uint)fVar28);
            }
          }
          if (CONCAT44(fStack_394,local_398) != 0) {
            FUN_1400020a8();
          }
          fVar39 = 0.0;
          uVar21 = 0;
          pfVar20 = local_2f0;
          uVar24 = 0;
          while (pfVar10 = local_4a8, lVar16 = (longlong)*(int *)(&local_1e8 + uVar21), lVar16 == -1
                ) {
            *pfVar20 = 0.0;
            *(undefined2 *)((longlong)pfVar20 + -2) = 0xffff;
LAB_1437ce8c0:
            bVar26 = 3 < uVar21;
            uVar21 = uVar21 + 1;
            uVar24 = CONCAT71((int7)(uVar24 >> 8),bVar26);
            pfVar20 = pfVar20 + 0x10;
            if (uVar21 == 5) goto LAB_1437cecd8;
          }
          lVar17 = *param_3;
          lVar19 = param_3[6];
          local_4c8 = (ulonglong)*(int *)(lVar19 + lVar16 * 4);
          pfVar1 = (float *)(lVar17 + local_4c8 * 0xc);
          local_4b8 = (wchar_t *)(longlong)*(int *)(lVar19 + 4 + lVar16 * 4);
          pfVar2 = (float *)(lVar17 + (longlong)local_4b8 * 0xc);
          local_4b0 = (wchar_t *)(longlong)*(int *)(lVar19 + 8 + lVar16 * 4);
          fVar28 = *(float *)(lVar17 + 8 + (longlong)local_4b0 * 0xc);
          fVar35 = fVar28 - pfVar1[2];
          fVar29 = *(float *)(lVar17 + (longlong)local_4b0 * 0xc);
          fVar6 = *(float *)(lVar17 + 4 + (longlong)local_4b0 * 0xc);
          fVar32 = fVar6 - pfVar1[1];
          fVar31 = fVar29 - *pfVar1;
          fVar36 = pfVar2[2] - pfVar1[2];
          fVar40 = pfVar2[1] - pfVar1[1];
          fVar33 = *pfVar2 - *pfVar1;
          fVar34 = fVar33 * fVar32 - fVar31 * fVar40;
          fVar31 = fVar36 * fVar31 - fVar35 * fVar33;
          fVar32 = fVar40 * fVar35 - fVar36 * fVar32;
          if (1e-08 <= fVar34 * fVar34 + fVar32 * fVar32 + fVar31 * fVar31) {
            local_468 = pfVar20 + -0xe;
            local_490 = lVar16 + 1;
            local_4c0 = lVar17 + (longlong)local_4b0 * 0xc;
            lVar17 = param_3[2];
            local_4d8 = lVar17 + (longlong)local_4b0 * 0xc;
            local_4e0 = (wchar_t *)(lVar17 + (longlong)local_4b8 * 0xc);
            local_4e8 = (wchar_t *)(lVar17 + local_4c8 * 0xc);
            local_4d0 = local_4a8;
            local_4c8 = local_4d8;
            local_4b8 = local_4e0;
            local_4b0 = local_4e8;
            local_488 = uVar21;
            FUN_147df1c94(&local_1b8,pfVar1,pfVar2);
            dVar12 = dStack_1b0;
            *(wchar_t **)local_468 = local_1b8;
            *(double *)(local_468 + 2) = dVar12;
            local_390 = pfVar10[2] + local_470[2];
            fStack_394 = pfVar10[1] + local_470[1];
            local_398 = *pfVar10 + *local_470;
            local_4d0 = &local_398;
            local_4d8 = local_4c8;
            local_4e0 = local_4b8;
            local_4e8 = local_4b0;
            FUN_147df1c94(&local_1b8,pfVar1,pfVar2,local_4c0);
            dVar12 = dStack_1b0;
            *(wchar_t **)(pfVar20 + -10) = local_1b8;
            *(double *)(pfVar20 + -8) = dVar12;
            local_390 = pfVar10[2] + fVar30;
            fStack_394 = pfVar10[1] + fVar42;
            local_398 = *pfVar10 + fVar41;
            local_4d0 = &local_398;
            local_4d8 = local_4c8;
            local_4e0 = local_4b8;
            local_4e8 = local_4b0;
            FUN_147df1c94(&local_1b8,pfVar1,pfVar2,local_4c0);
            dVar12 = dStack_1b0;
            fVar28 = 0.0;
            *(wchar_t **)(pfVar20 + -6) = local_1b8;
            *(double *)(pfVar20 + -4) = dVar12;
            lVar17 = param_3[6];
            *(undefined2 *)(pfVar20 + -2) = *(undefined2 *)(lVar17 + lVar16 * 4);
            uVar7 = *(ushort *)(lVar17 + local_490 * 4);
            uVar24 = (ulonglong)uVar7;
            *(ushort *)((longlong)pfVar20 + -6) = uVar7;
            *(undefined2 *)(pfVar20 + -1) = *(undefined2 *)(lVar17 + 8 + lVar16 * 4);
            *(undefined2 *)((longlong)pfVar20 + -2) = 0;
            if ((param_7 != 0.0) || (NAN(param_7))) {
              fVar29 = *(float *)((longlong)&local_1e8 + local_488 * 8 + 4) / param_7;
              fVar28 = 1.0;
              if (fVar29 <= 1.0) {
                fVar28 = fVar29;
              }
              fVar29 = 0.0;
              if (0.0 <= fVar28) {
                fVar29 = fVar28;
              }
              fVar28 = 1.0 - fVar29 * fVar29;
              fVar28 = fVar28 * fVar28 * fVar28;
            }
            *pfVar20 = fVar28;
            fVar39 = fVar39 + fVar28;
            uVar21 = local_488;
            uVar25 = local_498;
            goto LAB_1437ce8c0;
          }
          local_4e8 = (wchar_t *)(double)fVar28;
          local_4c0 = uVar24;
          FUN_140002266(local_3e8,L"X=%3.3f Y=%3.3f Z=%3.3f",(double)fVar29,(double)fVar6);
          FUN_140233b1a(local_3d8,local_3e8);
          local_4e8 = (wchar_t *)(double)pfVar2[2];
          FUN_140002266(local_408,L"X=%3.3f Y=%3.3f Z=%3.3f",(double)*pfVar2,(double)pfVar2[1]);
          FUN_140233b1a(local_3f8,local_408);
          local_4e8 = (wchar_t *)(double)pfVar1[2];
          FUN_140002266(local_428,L"X=%3.3f Y=%3.3f Z=%3.3f",(double)*pfVar1,(double)pfVar1[1]);
          FUN_140233b1a(local_418,local_428);
          local_1b8 = L"DegenerateTriangleErrorMultipleInfluences";
          dStack_1b0._0_4_ = 5.74532e-44;
          FUN_1446e940c(local_44c,&local_1b8);
          local_1b8 = L"ClothingMeshUtils";
          dStack_1b0._0_4_ = 2.38221e-44;
          FUN_1446e940c(local_450,&local_1b8);
          local_1b8 = 
          L"Failed to generate skinning data, found coincident vertices in triangle ({0}, {1}, {2}), points A={3} B={4} C={5}"
          ;
          dStack_1b0 = (double)CONCAT44(dStack_1b0._4_4_,0x71);
          FUN_140208c1e(local_448,local_450,local_44c,&local_1b8);
          FUN_14023409e(&local_438,local_448,1);
          local_1b8 = (wchar_t *)CONCAT44(local_1b8._4_4_,1);
          local_1a8 = 0.0;
          local_1a0 = 0;
          dStack_1b0 = (double)(local_4c8 & 0xffffffff);
          local_198 = 1;
          local_188 = 0;
          local_180 = 0;
          local_190 = (ulonglong)local_4b8 & 0xffffffff;
          local_178 = 1;
          local_168 = 0;
          local_160 = 0;
          local_170 = (ulonglong)local_4b0 & 0xffffffff;
          local_158 = 4;
          FUN_14023423e(local_148,local_418);
          local_138 = 4;
          FUN_14023423e(local_128,local_3f8);
          local_118 = 4;
          FUN_14023423e(local_108,local_3d8);
          local_3a0 = local_f8;
          local_3a8 = &local_1b8;
          FUN_14010d304(&local_398,&local_3a8);
          local_3b8 = local_438;
          local_3b0 = local_430;
          if (local_430 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_430 + 1) = (int)local_430[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_3c8,&local_3b8,&local_398);
          FUN_14007f2db(CONCAT44(fStack_394,local_398),local_390);
          if (CONCAT44(fStack_394,local_398) != 0) {
            FUN_1400020a8();
          }
          lVar16 = 0xb0;
          do {
            if (*(longlong **)((longlong)&local_1b8 + lVar16) != (longlong *)0x0) {
              (**(code **)(**(longlong **)((longlong)&local_1b8 + lVar16) + 0x10))();
              *(undefined8 *)((longlong)&local_1b8 + lVar16) = 0;
              *(undefined4 *)((longlong)&dStack_1b0 + lVar16) = 0;
            }
            plVar11 = local_430;
            lVar16 = lVar16 + -0x20;
          } while (lVar16 != -0x10);
          if (local_430 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_430 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_430)(local_430);
              LOCK();
              piVar4 = (int *)((longlong)plVar11 + 0xc);
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              if (*piVar4 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
          }
          if (local_418[0] != (longlong *)0x0) {
            (**(code **)(*local_418[0] + 0x10))();
          }
          if (local_3f8[0] != (longlong *)0x0) {
            (**(code **)(*local_3f8[0] + 0x10))();
          }
          if (local_3d8[0] != (longlong *)0x0) {
            (**(code **)(*local_3d8[0] + 0x10))();
          }
          if (local_448[0] != (longlong *)0x0) {
            (**(code **)(*local_448[0] + 0x10))();
          }
          if (local_428[0] != 0) {
            FUN_1400020a8();
          }
          if (local_408[0] != 0) {
            FUN_1400020a8();
          }
          if (local_3e8[0] != 0) {
            FUN_1400020a8();
          }
          uVar24 = local_4c0;
          if (local_3c8[0] != (longlong *)0x0) {
            (**(code **)(*local_3c8[0] + 0x10))();
            uVar24 = local_4c0;
          }
LAB_1437cecd8:
          if (((uVar24 & 1) != 0) && (0.0 < fVar39)) {
            lVar16 = 0x38;
            do {
              *(float *)((longlong)&local_328 + lVar16) =
                   *(float *)((longlong)&local_328 + lVar16) / fVar39;
              lVar16 = lVar16 + 0x40;
            } while (lVar16 != 0x178);
          }
          if ((uVar24 & 1) == 0) {
            *(undefined4 *)(param_1 + 1) = 0;
            if (*(int *)((longlong)param_1 + 0xc) < 0) {
              FUN_1400d0632(param_1,0);
            }
            goto LAB_1437cf20b;
          }
          iVar15 = (int)param_1[1];
          *(int *)(param_1 + 1) = iVar15 + 5;
          if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar15) < 5) {
            FUN_147d20624(param_1,iVar15);
          }
          memcpy((void *)((longlong)iVar15 * 0x40 + *param_1),&local_328,0x140);
          uVar21 = local_478 + 1;
          if (((uint)((int)uVar21 * -0x3d70a3d7) >> 2 | (int)uVar21 * 0x40000000) < 0x28f5c29) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
            {
              DAT_14c844840 = (wchar_t *)FUN_14001cc68(0x30,0x10);
              DAT_14c844840[4] = L'\0';
              DAT_14c844840[5] = L'\0';
              DAT_14c844840[6] = L'\0';
              DAT_14c844840[7] = L'\0';
              *(undefined ***)DAT_14c844840 = &PTR_FUN_149e19310;
              DAT_14c844840[8] = L'\xffff';
              DAT_14c844840[9] = L'\xffff';
              DAT_14c844840[10] = L'\xffff';
              DAT_14c844840[0xb] = L'\xffff';
              DAT_14c844840[0xc] = L'\0';
              DAT_14c844840[0xd] = L'\0';
              DAT_14c844840[0xe] = L'\0';
              DAT_14c844840[0xf] = L'\0';
              DAT_14c844840[0x10] = L'\0';
              DAT_14c844840[0x11] = L'\0';
              DAT_14c844840[0x12] = L'\0';
              DAT_14c844840[0x13] = L'\0';
              DAT_14c844840[0x14] = L'\0';
              DAT_14c844840[0x15] = L'\0';
              DAT_14c844840[0x16] = L'\0';
              DAT_14c844840[0x17] = L'\0';
              if (DAT_14c844840 != (wchar_t *)0x0) {
                LOCK();
                *(int *)(DAT_14c844840 + 4) = *(int *)(DAT_14c844840 + 4) + 1;
                UNLOCK();
              }
              DAT_14c844848 = 0;
              atexit(FUN_142760bef);
              _Init_thread_footer(&DAT_14c844850);
              uVar25 = local_498;
            }
            local_1b8 = DAT_14c844840;
            if (DAT_14c844840 != (wchar_t *)0x0) {
              if (*(code **)(*(longlong *)DAT_14c844840 + 8) == FUN_144907e24) {
                LOCK();
                *(int *)(DAT_14c844840 + 4) = *(int *)(DAT_14c844840 + 4) + 1;
                UNLOCK();
              }
              else {
                (**(code **)(*(longlong *)DAT_14c844840 + 8))();
              }
            }
            dStack_1b0 = (double)((ulonglong)dStack_1b0 & 0xffffffff00000000);
            FUN_140997b30(local_388,0x3f800000,&local_1b8);
            if (local_1b8 != (wchar_t *)0x0) {
              (**(code **)(*(longlong *)local_1b8 + 0x10))();
            }
          }
          if (uVar21 == uVar25) goto LAB_1437cf1d2;
        } while( true );
      }
      if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar25);
      }
      if (*(int *)((longlong)param_1 + 0xc) < (int)uVar13) {
        FUN_1400d0632(param_1,uVar13);
      }
      local_490 = local_460[0];
      local_4c0 = CONCAT44(local_4c0._4_4_,1);
      pwVar22 = (wchar_t *)0x0;
      uVar21 = 0;
      do {
        FUN_147df090a(param_3,param_8,uVar21 & 0xffffffff);
        iVar15 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar15 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar15 + 1U) {
          FUN_147d20624(param_1,iVar15);
        }
        lVar16 = *param_1;
        lVar17 = (longlong)iVar15 * 0x40;
        puVar5 = (undefined8 *)(lVar16 + 0x30 + lVar17);
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5 = (undefined8 *)(lVar16 + 0x20 + lVar17);
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5 = (undefined8 *)(lVar16 + 0x10 + lVar17);
        *puVar5 = 0;
        puVar5[1] = 0;
        *(undefined8 *)(lVar16 + lVar17) = 0;
        ((undefined8 *)(lVar16 + lVar17))[1] = 0;
        local_4b0 = (wchar_t *)((longlong)((int)param_1[1] + -1) * 0x40 + *param_1);
        lVar16 = *param_2;
        local_4a8 = (float *)(param_2[2] + (longlong)pwVar22);
        local_4c8 = uVar21;
        if ((int)param_2[1] == (int)param_2[5]) {
          lVar17 = param_2[4];
          uVar27 = *(undefined4 *)(lVar17 + 8 + (longlong)pwVar22);
          uVar37 = *(undefined4 *)(lVar17 + (longlong)pwVar22);
          uVar38 = *(undefined4 *)(lVar17 + 4 + (longlong)pwVar22);
        }
        else {
          FUN_14041c796(local_4a8,&local_328,&local_1b8);
          uVar27 = adStack_320[0]._0_4_;
          uVar37 = (undefined4)local_328;
          uVar38 = local_328._4_4_;
        }
        uVar21 = local_4c8;
        uVar13 = (uint)local_4c0 / 100;
        local_488 = (longlong)pwVar22 + lVar16;
        adStack_320[1] = (double)*(float *)(lVar16 + 8 + (longlong)pwVar22);
        adStack_320[0] = (double)*(float *)(lVar16 + 4 + (longlong)pwVar22);
        local_328 = (wchar_t *)(double)*(float *)(lVar16 + (longlong)pwVar22);
        local_4b8 = pwVar22;
        uVar14 = FUN_1437cf452(param_3,&local_328,*(undefined4 *)(local_490 + local_4c8 * 4));
        local_328 = (wchar_t *)CONCAT44(uVar38,uVar37);
        adStack_320[0] = (double)CONCAT44(adStack_320[0]._4_4_,uVar27);
        local_4e0 = local_4b0;
        local_4e8 = (wchar_t *)CONCAT44(local_4e8._4_4_,uVar14);
        FUN_1437cf66f(local_488,local_4a8,&local_328,param_3);
        if ((uVar13 * 100 - 4 | 3) == (uint)uVar21) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
            DAT_14c844840 = (wchar_t *)FUN_14001cc68(0x30,0x10);
            DAT_14c844840[4] = L'\0';
            DAT_14c844840[5] = L'\0';
            DAT_14c844840[6] = L'\0';
            DAT_14c844840[7] = L'\0';
            *(undefined ***)DAT_14c844840 = &PTR_FUN_149e19310;
            DAT_14c844840[8] = L'\xffff';
            DAT_14c844840[9] = L'\xffff';
            DAT_14c844840[10] = L'\xffff';
            DAT_14c844840[0xb] = L'\xffff';
            DAT_14c844840[0xc] = L'\0';
            DAT_14c844840[0xd] = L'\0';
            DAT_14c844840[0xe] = L'\0';
            DAT_14c844840[0xf] = L'\0';
            DAT_14c844840[0x10] = L'\0';
            DAT_14c844840[0x11] = L'\0';
            DAT_14c844840[0x12] = L'\0';
            DAT_14c844840[0x13] = L'\0';
            DAT_14c844840[0x14] = L'\0';
            DAT_14c844840[0x15] = L'\0';
            DAT_14c844840[0x16] = L'\0';
            DAT_14c844840[0x17] = L'\0';
            if (DAT_14c844840 != (wchar_t *)0x0) {
              LOCK();
              *(int *)(DAT_14c844840 + 4) = *(int *)(DAT_14c844840 + 4) + 1;
              UNLOCK();
            }
            DAT_14c844848 = 0;
            atexit(FUN_142760bef);
            _Init_thread_footer(&DAT_14c844850);
            uVar21 = local_4c8;
            uVar25 = local_498;
          }
          local_328 = DAT_14c844840;
          if (DAT_14c844840 != (wchar_t *)0x0) {
            if (*(code **)(*(longlong *)DAT_14c844840 + 8) == FUN_144907e24) {
              LOCK();
              *(int *)(DAT_14c844840 + 4) = *(int *)(DAT_14c844840 + 4) + 1;
              UNLOCK();
            }
            else {
              (**(code **)(*(longlong *)DAT_14c844840 + 8))();
            }
          }
          adStack_320[0] = (double)((ulonglong)adStack_320[0] & 0xffffffff00000000);
          FUN_140997b30(local_388,0x3f800000,&local_328);
          if (local_328 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_328 + 0x10))();
          }
        }
        uVar21 = uVar21 + 1;
        local_4c0 = CONCAT44(local_4c0._4_4_,(uint)local_4c0 + 1);
        pwVar22 = local_4b8 + 6;
      } while (uVar25 != uVar21);
LAB_1437cf1d2:
      iVar15 = (int)param_1[1];
      if (iVar15 != 0) {
        if (param_6 == '\x01' && 0 < iVar15) {
          uVar13 = *(uint *)(param_2 + 1);
          uVar25 = (ulonglong)uVar13;
          if ((uVar13 * 5 == iVar15) && (FUN_147df0ff6(param_2,&local_1b8), 0 < (int)uVar13)) {
            local_4b8 = local_1b8;
            lVar16 = 0;
            uVar21 = 0;
            local_4c8 = uVar25;
            do {
              lVar17 = *param_1;
              fVar30 = 0.0;
              lVar19 = 0x38;
              do {
                if (*(short *)(lVar17 + lVar16 + -2 + lVar19) != -1) {
                  fVar30 = fVar30 + *(float *)(lVar17 + lVar16 + lVar19);
                }
                lVar19 = lVar19 + 0x40;
              } while (lVar19 != 0x178);
              if (fVar30 < 0.0001) {
                pfVar20 = (float *)(*param_2 + uVar21 * 0xc);
                lVar19 = uVar21 * 0xc + param_2[2];
                if ((int)param_2[1] == (int)param_2[5]) {
                  uStack_1e0 = CONCAT44(uStack_1e0._4_4_,
                                        *(undefined4 *)(param_2[4] + 8 + uVar21 * 0xc));
                  local_1e8 = *(undefined8 *)(param_2[4] + uVar21 * 0xc);
                }
                else {
                  FUN_14041c796(lVar19,&local_1e8,&local_328);
                  lVar17 = *param_1;
                }
                pwVar22 = (wchar_t *)(uVar21 * 0x140 + lVar17);
                adStack_320[1] = (double)pfVar20[2];
                adStack_320[0] = (double)pfVar20[1];
                local_328 = (wchar_t *)(double)*pfVar20;
                iVar15 = FUN_1437cf452(param_3,&local_328,*(undefined4 *)(local_4b8 + uVar21 * 2));
                if (iVar15 == -1) {
                  pwVar22[0x1c] = L'\0';
                  pwVar22[0x1d] = L'\0';
                }
                else {
                  local_4c0 = CONCAT62(local_4c0._2_6_,pwVar22[0x1b]);
                  local_4e8 = (wchar_t *)CONCAT44(local_4e8._4_4_,iVar15);
                  local_4e0 = pwVar22;
                  FUN_1437cf66f(pfVar20,lVar19,&local_1e8,param_3);
                  pwVar22[0x1b] = (wchar_t)local_4c0;
                }
                lVar17 = 0;
                do {
                  lVar19 = *param_1;
                  *(undefined2 *)(lVar17 + 0x76 + lVar19 + lVar16) = 0xffff;
                  *(undefined4 *)(lVar17 + 0x78 + lVar19 + lVar16) = 0;
                  lVar17 = lVar17 + 0x40;
                  uVar25 = local_4c8;
                } while (lVar17 != 0x100);
              }
              uVar21 = uVar21 + 1;
              lVar16 = lVar16 + 0x140;
            } while (uVar21 != uVar25);
          }
        }
        if (local_480 != 0) {
          FUN_147df1435(param_1,local_480,param_5,param_6);
        }
      }
LAB_1437cf20b:
      FUN_140997a5c(local_388);
      if (local_34c == '\x01') {
        local_34c = '\0';
      }
      if (local_378 != (longlong *)0x0) {
        (**(code **)(*local_378 + 0x10))();
      }
      if (local_388[0] != (longlong *)0x0) {
        (**(code **)(*local_388[0] + 0x10))();
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_508) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437cf452 FUN_1437cf452 body=540 status=ok
// SIG undefined FUN_1437cf452(void)

int FUN_1437cf452(longlong *param_1,double *param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_f8 [32];
  double *local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  longlong local_70;
  uint local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_147df0c5a(param_1,&local_70,param_2,param_3);
  uVar2 = local_68;
  if (local_68 == 0) {
    uVar2 = (int)param_1[7] / 3;
  }
  if ((int)uVar2 < 1) {
    iVar6 = -1;
  }
  else {
    fVar10 = 3.4028235e+38;
    uVar7 = 0;
    iVar5 = -1;
    do {
      if (local_68 == 0) {
        iVar6 = (int)uVar7;
      }
      else {
        iVar6 = *(int *)(local_70 + uVar7 * 4);
      }
      iVar6 = iVar6 * 3;
      lVar1 = param_1[6];
      lVar8 = (longlong)iVar6;
      lVar3 = (longlong)*(int *)(lVar1 + lVar8 * 4);
      lVar4 = (longlong)*(int *)(lVar1 + 4 + lVar8 * 4);
      lVar8 = (longlong)*(int *)(lVar1 + 8 + lVar8 * 4);
      lVar1 = *param_1;
      local_78 = (double)*(float *)(lVar1 + 8 + lVar3 * 0xc);
      local_80 = (double)*(float *)(lVar1 + 4 + lVar3 * 0xc);
      local_88 = (double)*(float *)(lVar1 + lVar3 * 0xc);
      local_90 = (double)*(float *)(lVar1 + 8 + lVar4 * 0xc);
      local_98 = (double)*(float *)(lVar1 + 4 + lVar4 * 0xc);
      local_a0 = (double)*(float *)(lVar1 + lVar4 * 0xc);
      local_a8 = (double)*(float *)(lVar1 + 8 + lVar8 * 0xc);
      local_b0 = (double)*(float *)(lVar1 + 4 + lVar8 * 0xc);
      local_b8 = (double)*(float *)(lVar1 + lVar8 * 0xc);
      local_d8 = &local_b8;
      FUN_14276f25e(&local_d0,param_2,&local_88,&local_a0);
      fVar9 = (float)((local_c0 - param_2[2]) * (local_c0 - param_2[2]) +
                     (local_d0 - *param_2) * (local_d0 - *param_2) +
                     (local_c8 - param_2[1]) * (local_c8 - param_2[1]));
      if (fVar10 <= fVar9) {
        fVar9 = fVar10;
        iVar6 = iVar5;
      }
      fVar10 = fVar9;
      uVar7 = uVar7 + 1;
      iVar5 = iVar6;
    } while (uVar2 != uVar7);
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437cf66f FUN_1437cf66f body=1758 status=ok
// SIG undefined FUN_1437cf66f(void)

void FUN_1437cf66f(float *param_1,float *param_2,float *param_3,longlong *param_4,int param_5,
                  undefined8 *param_6)

{
  longlong *plVar1;
  int *piVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_2a8 [32];
  double local_288;
  longlong local_280;
  ulonglong local_278;
  float *local_270;
  ulonglong local_260;
  double local_258;
  longlong local_250;
  longlong local_248;
  longlong local_240;
  longlong local_238;
  undefined1 local_230 [4];
  undefined1 local_22c [4];
  longlong *local_228 [2];
  undefined8 local_218;
  longlong *local_210;
  longlong local_208 [2];
  longlong *local_1f8 [2];
  longlong local_1e8 [2];
  longlong *local_1d8 [2];
  longlong local_1c8 [2];
  longlong *local_1b8 [2];
  longlong *local_1a8 [2];
  undefined8 local_198;
  longlong *local_190;
  undefined8 *local_188;
  undefined1 *local_180;
  float local_178;
  float fStack_174;
  float local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_148;
  ulonglong local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_128;
  ulonglong local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined1 local_f8 [16];
  undefined4 local_e8;
  undefined1 local_d8 [16];
  undefined4 local_c8;
  undefined1 local_b8 [16];
  undefined1 local_a8 [8];
  ulonglong local_a0;
  
  lVar12 = (longlong)param_5;
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  lVar11 = *param_4;
  lVar10 = param_4[6];
  uVar8 = *(uint *)(lVar10 + lVar12 * 4);
  pfVar3 = (float *)(lVar11 + (longlong)(int)uVar8 * 0xc);
  uVar9 = *(uint *)(lVar10 + 4 + lVar12 * 4);
  pfVar4 = (float *)(lVar11 + (longlong)(int)uVar9 * 0xc);
  local_260 = (ulonglong)*(int *)(lVar10 + 8 + lVar12 * 4);
  fVar5 = *(float *)(lVar11 + 8 + local_260 * 0xc);
  fVar15 = fVar5 - pfVar3[2];
  fVar6 = *(float *)(lVar11 + local_260 * 0xc);
  fVar7 = *(float *)(lVar11 + 4 + local_260 * 0xc);
  fVar16 = fVar7 - pfVar3[1];
  fVar17 = fVar6 - *pfVar3;
  fVar18 = pfVar4[2] - pfVar3[2];
  fVar19 = pfVar4[1] - pfVar3[1];
  fVar13 = *pfVar4 - *pfVar3;
  fVar14 = fVar13 * fVar16 - fVar17 * fVar19;
  fVar13 = fVar18 * fVar17 - fVar15 * fVar13;
  fVar15 = fVar19 * fVar15 - fVar18 * fVar16;
  if (1e-08 <= fVar14 * fVar14 + fVar15 * fVar15 + fVar13 * fVar13) {
    local_240 = lVar12 + 1;
    local_238 = lVar12 + 2;
    local_248 = lVar11 + local_260 * 0xc;
    lVar11 = param_4[2];
    local_278 = lVar11 + local_260 * 0xc;
    local_280 = lVar11 + (longlong)(int)uVar9 * 0xc;
    local_288 = (double)(lVar11 + (longlong)(int)uVar8 * 0xc);
    local_270 = param_1;
    local_260 = local_278;
    local_258 = local_288;
    local_250 = local_280;
    FUN_147df1c94(&local_168,pfVar3,pfVar4);
    lVar11 = local_248;
    *param_6 = local_168;
    param_6[1] = uStack_160;
    local_170 = param_1[2] + param_2[2];
    fStack_174 = param_1[1] + param_2[1];
    local_178 = *param_1 + *param_2;
    local_278 = local_260;
    local_280 = local_250;
    local_288 = local_258;
    local_270 = &local_178;
    FUN_147df1c94(&local_168,pfVar3,pfVar4,local_248);
    param_6[2] = local_168;
    param_6[3] = uStack_160;
    local_170 = param_1[2] + param_3[2];
    fStack_174 = param_1[1] + param_3[1];
    local_178 = *param_1 + *param_3;
    local_278 = local_260;
    local_280 = local_250;
    local_288 = local_258;
    local_270 = &local_178;
    FUN_147df1c94(&local_168,pfVar3,pfVar4,lVar11);
    *(undefined4 *)(param_6 + 4) = (undefined4)local_168;
    *(undefined4 *)((longlong)param_6 + 0x24) = local_168._4_4_;
    *(undefined4 *)(param_6 + 5) = (undefined4)uStack_160;
    *(undefined4 *)((longlong)param_6 + 0x2c) = uStack_160._4_4_;
    *(undefined2 *)(param_6 + 6) = *(undefined2 *)(param_4[6] + lVar12 * 4);
    *(undefined2 *)((longlong)param_6 + 0x32) = *(undefined2 *)(param_4[6] + local_240 * 4);
    *(undefined2 *)((longlong)param_6 + 0x34) = *(undefined2 *)(param_4[6] + local_238 * 4);
    *(undefined2 *)((longlong)param_6 + 0x36) = 0;
    *(undefined4 *)(param_6 + 7) = 0x3f800000;
  }
  else {
    local_288 = (double)fVar5;
    FUN_140002266(local_1c8,L"X=%3.3f Y=%3.3f Z=%3.3f",(double)fVar6,(double)fVar7);
    FUN_140233b1a(local_1b8,local_1c8);
    local_288 = (double)pfVar4[2];
    FUN_140002266(local_1e8,L"X=%3.3f Y=%3.3f Z=%3.3f",(double)*pfVar4,(double)pfVar4[1]);
    FUN_140233b1a(local_1d8,local_1e8);
    local_288 = (double)pfVar3[2];
    FUN_140002266(local_208,L"X=%3.3f Y=%3.3f Z=%3.3f",(double)*pfVar3,(double)pfVar3[1]);
    FUN_140233b1a(local_1f8,local_208);
    local_168 = L"DegenerateTriangleError";
    uStack_160._0_4_ = 0x17;
    FUN_1446e940c(local_22c,&local_168);
    local_168 = L"ClothingMeshUtils";
    uStack_160._0_4_ = 0x11;
    FUN_1446e940c(local_230,&local_168);
    local_168 = 
    L"Failed to generate skinning data, found coincident vertices in triangle ({0}, {1}, {2}), points A={3} B={4} C={5}"
    ;
    uStack_160 = CONCAT44(uStack_160._4_4_,0x71);
    FUN_140208c1e(local_228,local_230,local_22c,&local_168);
    FUN_14023409e(&local_218,local_228,1);
    local_168 = (wchar_t *)CONCAT44(local_168._4_4_,1);
    local_158 = 0;
    local_150 = 0;
    uStack_160 = (ulonglong)uVar8;
    local_148 = 1;
    local_138 = 0;
    local_130 = 0;
    local_140 = (ulonglong)uVar9;
    local_128 = 1;
    local_118 = 0;
    local_110 = 0;
    local_120 = local_260 & 0xffffffff;
    local_108 = 4;
    FUN_14023423e(local_f8,local_1f8);
    local_e8 = 4;
    FUN_14023423e(local_d8,local_1d8);
    local_c8 = 4;
    FUN_14023423e(local_b8,local_1b8);
    local_180 = local_a8;
    local_188 = &local_168;
    FUN_14010d304(&local_178);
    local_198 = local_218;
    local_190 = local_210;
    if (local_210 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_210 + 1) = (int)local_210[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_1a8,&local_198,&local_178);
    FUN_14007f2db(CONCAT44(fStack_174,local_178),local_170);
    if (CONCAT44(fStack_174,local_178) != 0) {
      FUN_1400020a8();
    }
    lVar11 = 0xb0;
    do {
      if (*(longlong **)((longlong)&local_168 + lVar11) != (longlong *)0x0) {
        (**(code **)(**(longlong **)((longlong)&local_168 + lVar11) + 0x10))();
        *(undefined8 *)((longlong)&local_168 + lVar11) = 0;
        *(undefined4 *)((longlong)&uStack_160 + lVar11) = 0;
      }
      lVar11 = lVar11 + -0x20;
    } while (lVar11 != -0x10);
    if (local_210 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_210 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_210)(local_210);
        LOCK();
        piVar2 = (int *)((longlong)local_210 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_210 + 0x10))(local_210);
        }
      }
    }
    if (local_1f8[0] != (longlong *)0x0) {
      (**(code **)(*local_1f8[0] + 0x10))();
    }
    if (local_1d8[0] != (longlong *)0x0) {
      (**(code **)(*local_1d8[0] + 0x10))();
    }
    if (local_1b8[0] != (longlong *)0x0) {
      (**(code **)(*local_1b8[0] + 0x10))();
    }
    if (local_228[0] != (longlong *)0x0) {
      (**(code **)(*local_228[0] + 0x10))();
    }
    if (local_208[0] != 0) {
      FUN_1400020a8();
    }
    if (local_1e8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_1c8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_1a8[0] != (longlong *)0x0) {
      (**(code **)(*local_1a8[0] + 0x10))();
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437cfdc6 FUN_1437cfdc6 body=151 status=ok
// SIG undefined FUN_1437cfdc6(void)

void FUN_1437cfdc6(longlong param_1,char param_2)

{
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  else {
    if (param_2 != '\0') {
      *(undefined4 *)(param_1 + 0x138) = 0;
    }
    if (*(int *)(param_1 + 0x158) != 0) {
      *(undefined4 *)(param_1 + 0x13c) = 0;
      QueryPerformanceCounter(&local_20);
      *(double *)(param_1 + 0x140) = (double)local_20.QuadPart * DAT_14c83f420 + 16777216.0;
      FUN_147df51b4(param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437cfe68 FUN_1437cfe68 body=149 status=ok
// SIG undefined FUN_1437cfe68(void)

undefined8 FUN_1437cfe68(longlong param_1,undefined8 param_2,longlong param_3,char param_4)

{
  double _X;
  double _X_00;
  int iVar1;
  longlong lVar2;
  bool bVar3;
  
  *(undefined1 *)(param_1 + 0x180) = 1;
  if (param_4 != '\0') {
    lVar2 = 0;
    while( true ) {
      _X = *(double *)(param_3 + lVar2 * 8);
      _X_00 = *(double *)(param_3 + 0x18 + lVar2 * 8);
      if (_X_00 < _X) break;
      iVar1 = _finite(_X);
      if (iVar1 == 0) break;
      iVar1 = _finite(_X_00);
      if ((iVar1 == 0) || (bVar3 = lVar2 == 2, lVar2 = lVar2 + 1, bVar3)) break;
    }
  }
  if ((*(longlong *)(param_1 + 0xc0) == 0) &&
     ((*(char *)(param_1 + 0x40) == '\0' && (DAT_14c75efe4 < *(int *)(param_1 + 0x38))))) {
    FUN_1437cfefe(param_1);
  }
  *(undefined1 *)(param_1 + 0x180) = 0;
  return 1;
}



// FUNCTION 1437cfefe FUN_1437cfefe body=353 status=ok
// SIG undefined FUN_1437cfefe(void)

void FUN_1437cfefe(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_268 [32];
  undefined8 local_248;
  undefined4 local_240;
  undefined1 local_238;
  undefined1 local_230;
  undefined1 local_228;
  longlong local_218 [2];
  undefined1 local_208 [472];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_268;
  local_218[0] = 0;
  local_218[1] = 0;
  iVar1 = *(int *)(param_1 + 0x110) + *(int *)(param_1 + 0x38);
  if (0 < (longlong)*(int *)(param_1 + 0x28)) {
    lVar2 = 0;
    do {
      iVar1 = iVar1 + *(int *)(*(longlong *)(param_1 + 0x20) + 8 + lVar2);
      lVar2 = lVar2 + 0x18;
    } while ((longlong)*(int *)(param_1 + 0x28) * 0x18 != lVar2);
  }
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (iVar1 != 0) {
    FUN_140c108c0(local_218);
  }
  FUN_146c9c488(local_218,param_1 + 0x30);
  FUN_146c9c488(local_218,param_1 + 0x108);
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      FUN_146c9c488(local_218,*(longlong *)(param_1 + 0x20) + lVar2);
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x18;
    } while (lVar3 < *(int *)(param_1 + 0x28));
  }
  local_228 = 1;
  local_230 = 0;
  local_238 = 0;
  local_248 = 0x40f86a0000000000;
  local_240 = 0;
  FUN_147df90c2(local_208,local_218,0xc,0x10);
  FUN_147df9264(param_1,local_208);
  *(undefined1 *)(param_1 + 0x181) = 1;
  FUN_147df5014(local_208);
  if (local_218[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437d0062 FUN_1437d0062 body=2032 status=ok
// SIG undefined FUN_1437d0062(void)

void FUN_1437d0062(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  LARGE_INTEGER *pLVar2;
  double *pdVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  LARGE_INTEGER LVar11;
  LARGE_INTEGER LVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  longlong *plVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  double dVar21;
  double dVar22;
  LARGE_INTEGER LVar23;
  double dVar24;
  LARGE_INTEGER LVar25;
  double dVar26;
  double dVar27;
  undefined1 auStack_178 [36];
  int local_154;
  longlong local_150;
  longlong local_148;
  ulonglong local_140;
  longlong *local_138;
  undefined4 *local_130;
  LARGE_INTEGER local_128 [2];
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  double local_100;
  undefined4 local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  *(undefined1 *)(param_1 + 0xc) = 0;
  uVar15 = *(uint *)(param_2 + 1);
  uVar18 = (ulonglong)uVar15;
  uVar5 = (longlong)(int)uVar15 / (longlong)*(int *)(param_1 + 0x128);
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar5 & 0xffffffff,
                  (longlong)(int)uVar15 % (longlong)*(int *)(param_1 + 0x128) & 0xffffffff);
  }
  lVar17 = param_1 + 0x150;
  if (*(int *)(param_1 + 0x15c) < (int)uVar5) {
    FUN_14481578e(lVar17,uVar5 & 0xffffffff);
  }
  iVar13 = FUN_147df5c52(param_1);
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar18);
  }
  lVar1 = *(longlong *)(param_1 + 0x170) + (longlong)iVar13 * 0xf8;
  local_150 = *(longlong *)(param_1 + 0x170) + (longlong)iVar13 * 0xf8 + 0x38;
  if (*(int *)(lVar1 + 0x44) < (int)uVar15) {
    FUN_140c108c0(local_150,uVar15);
  }
  plVar16 = (longlong *)(param_1 + 0x108);
  *(undefined4 *)(param_1 + 0x110) = 0;
  local_154 = iVar13;
  if (*(int *)(param_1 + 0x114) < 0) {
    FUN_140c108c0(plVar16,0);
  }
  iVar13 = *(int *)(param_1 + 0x2c);
  FUN_146e37bb6(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((iVar13 < 0) && (*(int *)(param_1 + 0x2c) != 0)) {
    FUN_146e37be2(param_1 + 0x20,0);
  }
  if (*(int *)(param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_14008b684(param_1 + 0x10,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined8 *)(param_1 + 0x44) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  if (*(int *)(param_1 + 0x3c) < 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    FUN_140c108c0(param_1 + 0x30,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  FUN_1402a3552(param_1 + 0x50);
  if (*(int *)(param_1 + 0xac) < 0) {
    *(undefined4 *)(param_1 + 0xa8) = 0;
    FUN_14481578e(param_1 + 0xa0,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  if (*(int *)(param_1 + 0xbc) < 0) {
    *(undefined4 *)(param_1 + 0xb8) = 0;
    FUN_14481578e(param_1 + 0xb0,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_147df49cc();
  }
  *(undefined8 *)(param_1 + 0xf4) = 0;
  *(undefined8 *)(param_1 + 0xfc) = 0;
  *(undefined8 *)(param_1 + 0xe4) = 0;
  *(undefined8 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  if (*(int *)(param_1 + 0x124) < 0) {
    *(undefined4 *)(param_1 + 0x120) = 0;
    FUN_145784e7e(param_1 + 0x118,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  *(undefined4 *)(param_1 + 0x13c) = 0;
  QueryPerformanceCounter(local_128);
  *(double *)(param_1 + 0x140) = (double)local_128[0].QuadPart * DAT_14c83f420 + 16777216.0;
  iVar13 = DAT_14c75efb8;
  dVar21 = (double)DAT_14c75efb8;
  *(double *)(param_1 + 200) = dVar21;
  dVar6 = 1.0;
  if (0 < iVar13) {
    dVar6 = 1.0 / dVar21;
  }
  *(double *)(param_1 + 0xd0) = dVar6;
  *(undefined4 *)(param_1 + 0xd8) = DAT_14c75efbc;
  *(undefined4 *)(param_1 + 0xdc) = DAT_14c75efc0;
  *(undefined4 *)(param_1 + 0xe0) = DAT_14c75efc4;
  local_148 = lVar17;
  local_140 = uVar18;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    if ((longlong)*(int *)(param_2 + 1) != 0) {
      puVar19 = (undefined4 *)*param_2;
      puVar20 = puVar19 + (longlong)*(int *)(param_2 + 1) * 0xe;
      do {
        local_f4 = *puVar19;
        local_118 = *(double *)(puVar19 + 6);
        local_128[0] = *(LARGE_INTEGER *)(puVar19 + 2);
        local_128[1] = *(LARGE_INTEGER *)(puVar19 + 4);
        local_100 = *(double *)(puVar19 + 0xc);
        local_110 = *(double *)(puVar19 + 8);
        uStack_108 = *(double *)(puVar19 + 10);
        FUN_1437cfe68(param_1,&local_f4,local_128,1);
        puVar19 = puVar19 + 0xe;
      } while (puVar19 != puVar20);
    }
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  else {
    *(undefined8 *)(lVar1 + 8) = 0x7fefffffffffffff;
    *(undefined8 *)(lVar1 + 0x10) = 0x7fefffffffffffff;
    *(undefined8 *)(lVar1 + 0x18) = 0x7fefffffffffffff;
    *(undefined8 *)(lVar1 + 0x20) = 0xffefffffffffffff;
    *(undefined8 *)(lVar1 + 0x28) = 0xffefffffffffffff;
    *(undefined8 *)(lVar1 + 0x30) = 0xffefffffffffffff;
    *(undefined8 *)(lVar1 + 0x48) = 0;
    *(undefined8 *)(lVar1 + 0x50) = 0;
    *(undefined8 *)(lVar1 + 0x58) = 0;
    *(undefined8 *)(lVar1 + 0x60) = 0;
    *(undefined8 *)(lVar1 + 0x68) = 0;
    *(undefined8 *)(lVar1 + 0x70) = 0;
    if ((longlong)*(int *)(param_2 + 1) != 0) {
      puVar19 = (undefined4 *)*param_2;
      local_130 = puVar19 + (longlong)*(int *)(param_2 + 1) * 0xe;
      local_138 = plVar16;
      do {
        uVar4 = *puVar19;
        local_118 = *(double *)(puVar19 + 6);
        local_128[0] = *(LARGE_INTEGER *)(puVar19 + 2);
        local_128[1] = *(LARGE_INTEGER *)(puVar19 + 4);
        local_100 = *(double *)(puVar19 + 0xc);
        local_110 = *(double *)(puVar19 + 8);
        uStack_108 = *(double *)(puVar19 + 10);
        lVar17 = 0;
        do {
          dVar6 = (double)(&local_110)[lVar17];
          if (dVar6 < (double)local_128[lVar17]) {
LAB_1437d0748:
            local_128[0].QuadPart = -0x10000000000001;
            local_128[1].QuadPart = -0x10000000000001;
            local_118 = -1.79769313486232e+308;
            local_110 = 1.79769313486232e+308;
            uStack_108 = 1.79769313486232e+308;
            local_100 = 1.79769313486232e+308;
            goto LAB_1437d077a;
          }
          iVar13 = _finite((double)local_128[lVar17]);
          if (iVar13 == 0) goto LAB_1437d0748;
          iVar13 = _finite(dVar6);
          dVar24 = local_100;
          dVar26 = uStack_108;
          dVar21 = local_110;
          dVar6 = local_118;
          LVar12 = local_128[1];
          LVar11 = local_128[0];
          if (iVar13 == 0) goto LAB_1437d0748;
          lVar17 = lVar17 + 1;
        } while (lVar17 != 3);
        dVar8 = local_100 - local_118;
        dVar9 = uStack_108 - (double)local_128[1];
        dVar10 = local_110 - (double)local_128[0];
        dVar7 = dVar10;
        if ((dVar10 <= dVar8 || dVar10 <= dVar9) && (dVar7 = dVar9, dVar9 <= dVar8)) {
          dVar7 = dVar8;
        }
        if (*(double *)(param_1 + 0x130) <= dVar7 && dVar7 != *(double *)(param_1 + 0x130)) {
LAB_1437d077a:
          iVar13 = *(int *)(param_1 + 0x110);
          *(uint *)(param_1 + 0x110) = iVar13 + 1U;
          if (*(uint *)(param_1 + 0x114) < iVar13 + 1U) {
            FUN_140c11858(plVar16,iVar13);
          }
          lVar17 = *plVar16;
          lVar14 = (longlong)iVar13 * 0x38;
          *(undefined4 *)(lVar17 + lVar14) = uVar4;
          pLVar2 = (LARGE_INTEGER *)(lVar17 + 8 + lVar14);
          *pLVar2 = local_128[0];
          pLVar2[1] = local_128[1];
          *(double *)(lVar17 + 0x18 + lVar14) = local_118;
          puVar20 = (undefined4 *)(lVar17 + 0x20 + lVar14);
          *puVar20 = (undefined4)local_110;
          puVar20[1] = local_110._4_4_;
          puVar20[2] = (undefined4)uStack_108;
          puVar20[3] = uStack_108._4_4_;
          *(double *)(lVar17 + 0x30 + lVar14) = local_100;
        }
        else {
          iVar13 = *(int *)(lVar1 + 0x40);
          uVar15 = iVar13 + 1;
          *(uint *)(lVar1 + 0x40) = uVar15;
          if (*(uint *)(lVar1 + 0x44) < uVar15) {
            FUN_140c11858(local_150,iVar13);
          }
          lVar17 = *(longlong *)(lVar1 + 0x38);
          lVar14 = (longlong)iVar13 * 0x38;
          *(undefined4 *)(lVar17 + lVar14) = uVar4;
          *(double *)(lVar17 + 0x18 + lVar14) = local_118;
          pLVar2 = (LARGE_INTEGER *)(lVar17 + 8 + lVar14);
          *pLVar2 = local_128[0];
          pLVar2[1] = local_128[1];
          pdVar3 = (double *)(lVar17 + 0x20 + lVar14);
          *pdVar3 = local_110;
          pdVar3[1] = uStack_108;
          *(double *)(lVar17 + 0x30 + lVar14) = local_100;
          dVar7 = (double)(int)uVar15;
          dVar22 = *(double *)(lVar1 + 0x18);
          if (dVar6 <= *(double *)(lVar1 + 0x18)) {
            dVar22 = dVar6;
          }
          LVar25 = *(LARGE_INTEGER *)(lVar1 + 0x10);
          if ((double)LVar12 <= (double)*(LARGE_INTEGER *)(lVar1 + 0x10)) {
            LVar25 = LVar12;
          }
          LVar23 = *(LARGE_INTEGER *)(lVar1 + 8);
          if ((double)LVar11 <= (double)*(LARGE_INTEGER *)(lVar1 + 8)) {
            LVar23 = LVar11;
          }
          *(LARGE_INTEGER *)(lVar1 + 8) = LVar23;
          *(LARGE_INTEGER *)(lVar1 + 0x10) = LVar25;
          *(double *)(lVar1 + 0x18) = dVar22;
          dVar22 = *(double *)(lVar1 + 0x30);
          if (*(double *)(lVar1 + 0x30) <= dVar24) {
            dVar22 = dVar24;
          }
          dVar24 = *(double *)(lVar1 + 0x28);
          if (*(double *)(lVar1 + 0x28) <= dVar26) {
            dVar24 = dVar26;
          }
          dVar26 = *(double *)(lVar1 + 0x20);
          if (*(double *)(lVar1 + 0x20) <= dVar21) {
            dVar26 = dVar21;
          }
          *(double *)(lVar1 + 0x20) = dVar26;
          *(double *)(lVar1 + 0x28) = dVar24;
          *(double *)(lVar1 + 0x30) = dVar22;
          dVar6 = dVar8 * 0.5 + dVar6;
          dVar21 = dVar9 * 0.5 + (double)LVar12;
          dVar26 = dVar10 * 0.5 + (double)LVar11;
          dVar27 = dVar6 - *(double *)(lVar1 + 0x58);
          dVar22 = dVar21 - *(double *)(lVar1 + 0x50);
          dVar24 = dVar26 - *(double *)(lVar1 + 0x48);
          dVar10 = dVar24 / dVar7 + *(double *)(lVar1 + 0x48);
          *(double *)(lVar1 + 0x48) = dVar10;
          dVar9 = dVar22 / dVar7 + *(double *)(lVar1 + 0x50);
          *(double *)(lVar1 + 0x50) = dVar9;
          dVar8 = dVar27 / dVar7 + *(double *)(lVar1 + 0x58);
          *(double *)(lVar1 + 0x58) = dVar8;
          *(double *)(lVar1 + 0x60) = (dVar26 - dVar10) * dVar24 + *(double *)(lVar1 + 0x60);
          *(double *)(lVar1 + 0x68) = (dVar21 - dVar9) * dVar22 + *(double *)(lVar1 + 0x68);
          *(double *)(lVar1 + 0x70) = (dVar6 - dVar8) * dVar27 + *(double *)(lVar1 + 0x70);
          plVar16 = local_138;
        }
        puVar19 = puVar19 + 0xe;
      } while (puVar19 != local_130);
    }
    *(int *)(param_1 + 0x13c) = (int)local_140;
    *(undefined8 *)(lVar1 + 0x78) = 0;
    iVar13 = *(int *)(param_1 + 0x158);
    *(uint *)(param_1 + 0x158) = iVar13 + 1U;
    if (*(uint *)(param_1 + 0x15c) < iVar13 + 1U) {
      FUN_1446f48e2(local_148,iVar13);
    }
    *(int *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar13 * 4) = local_154;
    FUN_147df51b4(param_1);
  }
  if ((local_f0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437d0854 FUN_1437d0854 body=144 status=ok
// SIG undefined FUN_1437d0854(void)

void FUN_1437d0854(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x88);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x88) = param_2;
    if ((uint)(*(int *)(param_1 + 0x8c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1456cba76(param_1);
    }
    lVar2 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x80) == 0) {
      lVar2 = param_1;
    }
    memset((void *)(lVar2 + (longlong)iVar1 * 4),0,(longlong)(param_2 - iVar1) << 2);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 0x88) = param_2, param_3 == '\x01')) {
      FUN_147dfa80c(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1437d08e6 FUN_1437d08e6 body=1974 status=ok
// SIG undefined FUN_1437d08e6(void)

void FUN_1437d08e6(longlong param_1,longlong *param_2)

{
  LARGE_INTEGER *pLVar1;
  double *pdVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  LARGE_INTEGER LVar10;
  LARGE_INTEGER LVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  double dVar21;
  double dVar22;
  LARGE_INTEGER LVar23;
  double dVar24;
  LARGE_INTEGER LVar25;
  double dVar26;
  double dVar27;
  undefined1 auStack_178 [40];
  longlong *local_150;
  int local_144;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  LARGE_INTEGER local_128 [2];
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  double local_100;
  int local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  *(undefined1 *)(param_1 + 0xc) = 0;
  iVar15 = (int)param_2[1];
  uVar4 = (longlong)iVar15 / (longlong)*(int *)(param_1 + 0x128);
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar4 & 0xffffffff,
                  (longlong)iVar15 % (longlong)*(int *)(param_1 + 0x128) & 0xffffffff);
  }
  lVar16 = param_1 + 0x150;
  if (*(int *)(param_1 + 0x15c) < (int)uVar4) {
    FUN_14481578e(lVar16,uVar4 & 0xffffffff);
  }
  iVar12 = FUN_147df5c52(param_1);
  if (iVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar15);
  }
  lVar20 = *(longlong *)(param_1 + 0x170) + (longlong)iVar12 * 0xf8;
  lVar17 = *(longlong *)(param_1 + 0x170) + (longlong)iVar12 * 0xf8 + 0x38;
  if (*(int *)(lVar20 + 0x44) < iVar15) {
    FUN_140c108c0(lVar17,iVar15);
  }
  local_150 = (longlong *)(param_1 + 0x108);
  *(undefined4 *)(param_1 + 0x110) = 0;
  if (*(int *)(param_1 + 0x114) < 0) {
    FUN_140c108c0(local_150,0);
  }
  iVar13 = *(int *)(param_1 + 0x2c);
  FUN_146e37bb6(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((iVar13 < 0) && (*(int *)(param_1 + 0x2c) != 0)) {
    FUN_146e37be2(param_1 + 0x20,0);
  }
  if (*(int *)(param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_14008b684(param_1 + 0x10,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined8 *)(param_1 + 0x44) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  if (*(int *)(param_1 + 0x3c) < 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    FUN_140c108c0(param_1 + 0x30,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  FUN_1402a3552(param_1 + 0x50);
  if (*(int *)(param_1 + 0xac) < 0) {
    *(undefined4 *)(param_1 + 0xa8) = 0;
    FUN_14481578e(param_1 + 0xa0,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  if (*(int *)(param_1 + 0xbc) < 0) {
    *(undefined4 *)(param_1 + 0xb8) = 0;
    FUN_14481578e(param_1 + 0xb0,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_147df49cc();
  }
  *(undefined8 *)(param_1 + 0xf4) = 0;
  *(undefined8 *)(param_1 + 0xfc) = 0;
  *(undefined8 *)(param_1 + 0xe4) = 0;
  *(undefined8 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  local_130 = lVar17;
  if (*(int *)(param_1 + 0x124) < 0) {
    *(undefined4 *)(param_1 + 0x120) = 0;
    FUN_145784e7e(param_1 + 0x118,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  *(undefined4 *)(param_1 + 0x13c) = 0;
  QueryPerformanceCounter(local_128);
  *(double *)(param_1 + 0x140) = (double)local_128[0].QuadPart * DAT_14c83f420 + 16777216.0;
  iVar13 = DAT_14c75efb8;
  dVar21 = (double)DAT_14c75efb8;
  *(double *)(param_1 + 200) = dVar21;
  dVar5 = 1.0;
  if (0 < iVar13) {
    dVar5 = 1.0 / dVar21;
  }
  *(double *)(param_1 + 0xd0) = dVar5;
  *(undefined4 *)(param_1 + 0xd8) = DAT_14c75efbc;
  *(undefined4 *)(param_1 + 0xdc) = DAT_14c75efc0;
  *(undefined4 *)(param_1 + 0xe0) = DAT_14c75efc4;
  local_144 = iVar12;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    if ((longlong)(int)param_2[1] != 0) {
      lVar16 = *param_2;
      lVar20 = (longlong)(int)param_2[1] << 4;
      iVar15 = 0;
      do {
        local_f4 = iVar15;
        FUN_147dfa9a6(lVar16,local_128);
        FUN_1437cfe68(param_1,&local_f4,local_128,1);
        iVar15 = iVar15 + 1;
        lVar16 = lVar16 + 0x10;
        lVar20 = lVar20 + -0x10;
      } while (lVar20 != 0);
    }
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  else {
    *(undefined8 *)(lVar20 + 8) = 0x7fefffffffffffff;
    *(undefined8 *)(lVar20 + 0x10) = 0x7fefffffffffffff;
    *(undefined8 *)(lVar20 + 0x18) = 0x7fefffffffffffff;
    *(undefined8 *)(lVar20 + 0x20) = 0xffefffffffffffff;
    *(undefined8 *)(lVar20 + 0x28) = 0xffefffffffffffff;
    *(undefined8 *)(lVar20 + 0x30) = 0xffefffffffffffff;
    *(undefined8 *)(lVar20 + 0x48) = 0;
    *(undefined8 *)(lVar20 + 0x50) = 0;
    *(undefined8 *)(lVar20 + 0x58) = 0;
    *(undefined8 *)(lVar20 + 0x60) = 0;
    *(undefined8 *)(lVar20 + 0x68) = 0;
    *(undefined8 *)(lVar20 + 0x70) = 0;
    if ((longlong)(int)param_2[1] != 0) {
      lVar17 = *param_2;
      local_138 = (longlong)(int)param_2[1] * 0x10 + lVar17;
      iVar12 = 0;
      local_140 = lVar16;
      do {
        FUN_147dfa9a6(lVar17,local_128);
        lVar18 = 0;
        do {
          dVar5 = (double)(&local_110)[lVar18];
          if (dVar5 < (double)local_128[lVar18]) {
LAB_1437d0f8f:
            local_128[0].QuadPart = -0x10000000000001;
            local_128[1].QuadPart = -0x10000000000001;
            local_118 = -1.79769313486232e+308;
            local_110 = 1.79769313486232e+308;
            uStack_108 = 1.79769313486232e+308;
            local_100 = 1.79769313486232e+308;
            goto LAB_1437d0fc1;
          }
          iVar13 = _finite((double)local_128[lVar18]);
          if (iVar13 == 0) goto LAB_1437d0f8f;
          iVar13 = _finite(dVar5);
          dVar24 = local_100;
          dVar26 = uStack_108;
          dVar21 = local_110;
          dVar5 = local_118;
          LVar11 = local_128[1];
          LVar10 = local_128[0];
          if (iVar13 == 0) goto LAB_1437d0f8f;
          lVar18 = lVar18 + 1;
        } while (lVar18 != 3);
        dVar7 = local_100 - local_118;
        dVar8 = uStack_108 - (double)local_128[1];
        dVar9 = local_110 - (double)local_128[0];
        dVar6 = dVar9;
        if ((dVar9 <= dVar7 || dVar9 <= dVar8) && (dVar6 = dVar8, dVar8 <= dVar7)) {
          dVar6 = dVar7;
        }
        if (*(double *)(param_1 + 0x130) <= dVar6 && dVar6 != *(double *)(param_1 + 0x130)) {
LAB_1437d0fc1:
          iVar13 = *(int *)(param_1 + 0x110);
          *(uint *)(param_1 + 0x110) = iVar13 + 1U;
          if (*(uint *)(param_1 + 0x114) < iVar13 + 1U) {
            FUN_140c11858(local_150,iVar13);
          }
          lVar18 = *local_150;
          lVar14 = (longlong)iVar13 * 0x38;
          *(int *)(lVar18 + lVar14) = iVar12;
          pLVar1 = (LARGE_INTEGER *)(lVar18 + 8 + lVar14);
          *pLVar1 = local_128[0];
          pLVar1[1] = local_128[1];
          *(double *)(lVar18 + 0x18 + lVar14) = local_118;
          puVar3 = (undefined4 *)(lVar18 + 0x20 + lVar14);
          *puVar3 = (undefined4)local_110;
          puVar3[1] = local_110._4_4_;
          puVar3[2] = (undefined4)uStack_108;
          puVar3[3] = uStack_108._4_4_;
          *(double *)(lVar18 + 0x30 + lVar14) = local_100;
        }
        else {
          iVar13 = *(int *)(lVar20 + 0x40);
          uVar19 = iVar13 + 1;
          *(uint *)(lVar20 + 0x40) = uVar19;
          if (*(uint *)(lVar20 + 0x44) < uVar19) {
            FUN_140c11858(local_130,iVar13);
          }
          lVar16 = *(longlong *)(lVar20 + 0x38);
          lVar18 = (longlong)iVar13 * 0x38;
          *(int *)(lVar16 + lVar18) = iVar12;
          *(double *)(lVar16 + 0x18 + lVar18) = local_118;
          pLVar1 = (LARGE_INTEGER *)(lVar16 + 8 + lVar18);
          *pLVar1 = local_128[0];
          pLVar1[1] = local_128[1];
          pdVar2 = (double *)(lVar16 + 0x20 + lVar18);
          *pdVar2 = local_110;
          pdVar2[1] = uStack_108;
          *(double *)(lVar16 + 0x30 + lVar18) = local_100;
          dVar6 = (double)(int)uVar19;
          dVar22 = *(double *)(lVar20 + 0x18);
          if (dVar5 <= *(double *)(lVar20 + 0x18)) {
            dVar22 = dVar5;
          }
          LVar25 = *(LARGE_INTEGER *)(lVar20 + 0x10);
          if ((double)LVar11 <= (double)*(LARGE_INTEGER *)(lVar20 + 0x10)) {
            LVar25 = LVar11;
          }
          LVar23 = *(LARGE_INTEGER *)(lVar20 + 8);
          if ((double)LVar10 <= (double)*(LARGE_INTEGER *)(lVar20 + 8)) {
            LVar23 = LVar10;
          }
          *(LARGE_INTEGER *)(lVar20 + 8) = LVar23;
          *(LARGE_INTEGER *)(lVar20 + 0x10) = LVar25;
          *(double *)(lVar20 + 0x18) = dVar22;
          dVar22 = *(double *)(lVar20 + 0x30);
          if (*(double *)(lVar20 + 0x30) <= dVar24) {
            dVar22 = dVar24;
          }
          dVar24 = *(double *)(lVar20 + 0x28);
          if (*(double *)(lVar20 + 0x28) <= dVar26) {
            dVar24 = dVar26;
          }
          dVar26 = *(double *)(lVar20 + 0x20);
          if (*(double *)(lVar20 + 0x20) <= dVar21) {
            dVar26 = dVar21;
          }
          *(double *)(lVar20 + 0x20) = dVar26;
          *(double *)(lVar20 + 0x28) = dVar24;
          *(double *)(lVar20 + 0x30) = dVar22;
          dVar5 = dVar7 * 0.5 + dVar5;
          dVar21 = dVar8 * 0.5 + (double)LVar11;
          dVar26 = dVar9 * 0.5 + (double)LVar10;
          dVar27 = dVar5 - *(double *)(lVar20 + 0x58);
          dVar22 = dVar21 - *(double *)(lVar20 + 0x50);
          dVar24 = dVar26 - *(double *)(lVar20 + 0x48);
          dVar9 = dVar24 / dVar6 + *(double *)(lVar20 + 0x48);
          *(double *)(lVar20 + 0x48) = dVar9;
          dVar8 = dVar22 / dVar6 + *(double *)(lVar20 + 0x50);
          *(double *)(lVar20 + 0x50) = dVar8;
          dVar7 = dVar27 / dVar6 + *(double *)(lVar20 + 0x58);
          *(double *)(lVar20 + 0x58) = dVar7;
          *(double *)(lVar20 + 0x60) = (dVar26 - dVar9) * dVar24 + *(double *)(lVar20 + 0x60);
          *(double *)(lVar20 + 0x68) = (dVar21 - dVar8) * dVar22 + *(double *)(lVar20 + 0x68);
          *(double *)(lVar20 + 0x70) = (dVar5 - dVar7) * dVar27 + *(double *)(lVar20 + 0x70);
          lVar16 = local_140;
        }
        iVar12 = iVar12 + 1;
        lVar17 = lVar17 + 0x10;
      } while (lVar17 != local_138);
    }
    *(int *)(param_1 + 0x13c) = iVar15;
    *(undefined8 *)(lVar20 + 0x78) = 0;
    iVar15 = *(int *)(param_1 + 0x158);
    *(uint *)(param_1 + 0x158) = iVar15 + 1U;
    if (*(uint *)(param_1 + 0x15c) < iVar15 + 1U) {
      FUN_1446f48e2(lVar16,iVar15);
    }
    *(int *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar15 * 4) = local_144;
    FUN_147df51b4(param_1);
  }
  if ((local_f0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437d109e FUN_1437d109e body=775 status=ok
// SIG undefined FUN_1437d109e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437d109e(void)

{
  char cVar1;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14ab35300;
  local_68 = 2;
  FUN_14282b410(L"/Script/ClothingSystemRuntimeCommon",0,0,&PTR_FUN_14ab35320);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14ab355a0;
  local_68 = 1;
  FUN_14282b410(L"/Script/ClothingSystemRuntimeCommon",0,0,&PTR_FUN_14ab355c0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14ab35d70;
  local_68 = 0;
  FUN_14282b410(L"/Script/ClothingSystemRuntimeCommon",&PTR_FUN_14ab35d90,2,0);
  FUN_1400b22c2(&local_48,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_48,&DAT_14cb128a8);
  if (cVar1 == '\0') {
    _DAT_14cb128a8 = 0;
    uRam000000014cb128b0 = 0;
  }
  if (local_48 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  local_48 = &DAT_14a19662d;
  uStack_40 = 4;
  uStack_3c = uStack_3c & 0xffffff00;
  FUN_14001a6c0(&local_48,1);
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  FUN_14282b410(L"/Script/ClothingSystemRuntimeCommon",&PTR_FUN_14ab36840,2,0);
  local_48 = (undefined *)0x59ef4ba3fb680af2;
  uStack_40 = 0xbaa819b5;
  uStack_3c = 0x73c8443d;
  _DAT_14cb128e8 = 0xfb680af2;
  uRam000000014cb128ec = 0x59ef4ba3;
  uRam000000014cb128f0 = 0xbaa819b5;
  uRam000000014cb128f4 = 0x73c8443d;
  FUN_141005458(&local_48,2,L"ClothingAssetVer",0);
  atexit((_func_5014 *)&LAB_1437cd8f1);
  local_48._0_4_ = 0xb4e322b9;
  local_48._4_4_ = 0xda7e47f9;
  uStack_40 = 0xbf7f6f57;
  uStack_3c = 0xf4371ebd;
  _DAT_14cb128f8 = 0xb4e322b9;
  uRam000000014cb128fc = 0xda7e47f9;
  uRam000000014cb12900 = 0xbf7f6f57;
  uRam000000014cb12904 = 0xf4371ebd;
  FUN_141005458(&local_48,1,L"GbxClothingAssetVer",0);
  atexit((_func_5014 *)&LAB_1437cd8fd);
  local_48._0_4_ = 0x3fc00000;
  local_68 = local_68 & 0xffffffff00000000;
  FUN_140a6b41e(&DAT_14cb12908,L"p.Cloth.MaxDeltaTimeTeleportMultiplier",&local_48,
                L"A multiplier of the MaxPhysicsDelta time at which we will automatically just teleport cloth to its new location\n default: 1.5"
               );
  atexit(FUN_1437cd909);
  local_48 = (undefined *)CONCAT44(local_48._4_4_,0x3f800000);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_140a6b41e(&DAT_14cb12920,L"p.Cloth.MaxVelocityScale",&local_48,
                L"The maximum amount of the component induced velocity allowed on all cloths.\nUse 1.0 for fully induced velocity(default), or use 0.0 for no induced velocity, and any other values in between for a reduced induced velocity.\nWhen set to 0.0, it also provides a way to force the clothing to simulate in local space.\n default: 1.0"
               );
  atexit(FUN_1437cd94e);
  local_48 = (undefined *)0x800000014ab36e58;
  local_34 = 0x1b;
  uStack_40 = FUN_14577453c();
  uStack_3c = CONCAT31(uStack_3c._1_3_,1);
  FUN_146414f58(&local_48);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/ClothingSystemRuntimeCommon",0,0,&PTR_FUN_14ab370c0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/ClothingSystemRuntimeCommon",&PTR_FUN_14ab37820,1,&PTR_FUN_14ab377f0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/ClothingSystemRuntimeCommon",0,0,&PTR_FUN_14ab37e80);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/ClothingSystemRuntimeCommon",0,0,&PTR_FUN_14ab37f10);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437d13a8 FUN_1437d13a8 body=57 status=ok
// SIG undefined FUN_1437d13a8(void)

void FUN_1437d13a8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb129f0 == 0) {
    uVar1 = FUN_145c5b49b();
    DAT_14cb129f0 = FUN_14171c317(FUN_14641547b,uVar1,L"EClothingWindMethodNv");
  }
  return;
}



// FUNCTION 1437d1408 FUN_1437d1408 body=339 status=ok
// SIG undefined FUN_1437d1408(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437d1408(void)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14ab39df0;
  local_68 = 1;
  FUN_14282b410(L"/Script/ClothingSystemRuntimeNv",&PTR_FUN_14ab39e40,1,&PTR_FUN_14ab39e10);
  local_48 = 0xb41a4e179950b70e;
  uStack_40 = 0xbbccfa0d;
  uStack_3c = 0x57817fd6;
  _DAT_14cb12a18 = 0x9950b70e;
  uRam000000014cb12a1c = 0xb41a4e17;
  uRam000000014cb12a20 = 0xbbccfa0d;
  uRam000000014cb12a24 = 0x57817fd6;
  FUN_141005458(&local_48,1,L"ClothConfigNvVer",0);
  atexit((_func_5014 *)&LAB_1437d13e1);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ClothingSystemRuntimeNv",&PTR_FUN_14ab3a220,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ClothingSystemRuntimeNv",&PTR_FUN_14ab3a6a0,1,0);
  local_48 = 0x800000014ab3a6c8;
  local_34 = 0x17;
  uStack_40 = FUN_14577453c();
  uStack_3c = CONCAT31(uStack_3c._1_3_,1);
  FUN_1464155ac(&local_48);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ClothingSystemRuntimeNv",&PTR_FUN_14ab3ace0,1,0);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437d15a2 FUN_1437d15a2 body=143 status=ok
// SIG undefined FUN_1437d15a2(void)

void FUN_1437d15a2(void)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  uStack_38 = 0;
  local_48 = 5;
  FUN_14282b410(L"/Script/SessionMessages",0,0,&PTR_FUN_14ab3b6a0);
  local_28 = 0x800000014ab3b768;
  local_14 = 0xf;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146415a64(&local_28);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437d1634 FUN_1437d1634 body=104 status=ok
// SIG undefined FUN_1437d1634(void)

undefined8 FUN_1437d1634(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140212f8e(&local_20);
  auVar1 = roundpd(ZEXT816(0x4187d78404000000),ZEXT816(0x4187d78404000000),1);
  if ((longlong)auVar1._0_8_ + *(longlong *)(param_1 + 0x28) <= local_20) {
    FUN_1437d169e(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437d169e FUN_1437d169e body=179 status=ok
// SIG undefined FUN_1437d169e(void)

void FUN_1437d169e(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [40];
  undefined2 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (lVar1 != 0) {
    uVar2 = FUN_14001cc68(1,0);
    FUN_147dff67a(lVar1,uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    if (DAT_14c8c3290 == 0) {
      local_20 = (undefined2 *)CONCAT44(local_20._4_4_,0x100);
      GetUserNameW(&DAT_14c8c3290,(LPDWORD)&local_20);
    }
    local_20 = &DAT_14c8c3290;
    uVar3 = FUN_147dff7ea();
    FUN_147dff732(uVar2,uVar3);
  }
  FUN_140212f8e(&local_20);
  *(undefined2 **)(param_1 + 0x28) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437d1752 FUN_1437d1752 body=102 status=ok
// SIG undefined FUN_1437d1752(void)

void FUN_1437d1752(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014ab3c1e0;
  local_14 = 0xf;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146415c2e(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437d17bc FUN_1437d17bc body=75 status=ok
// SIG undefined FUN_1437d17bc(void)

void FUN_1437d17bc(undefined8 param_1)

{
  char cVar1;
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  cVar1 = FUN_147e0983a();
  if (cVar1 != '\0') {
    FUN_147e0991a(local_18,param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437d1808 FUN_1437d1808 body=1260 status=ok
// SIG undefined FUN_1437d1808(void)

void FUN_1437d1808(longlong param_1)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong **pplVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  size_t sVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  int *piVar14;
  ulonglong uVar15;
  longlong *plVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  bool bVar20;
  undefined1 auStack_2f8 [32];
  longlong local_2d8;
  undefined8 local_2d0;
  undefined1 local_2c8 [8];
  undefined4 local_2c0;
  int local_2bc;
  longlong *local_2b8;
  undefined1 local_2ac [4];
  char local_2a8 [256];
  undefined8 local_1a8;
  undefined1 *puStack_1a0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_80;
  longlong *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  if (DAT_14ca84df4 == 0x10de) {
    *(undefined4 *)(param_1 + 0xa68) = 0xffffffff;
    iVar8 = (**(code **)(param_1 + 0x38))(0);
    if (iVar8 == 0) {
      local_2bc = 0;
      (**(code **)(param_1 + 0x50))(&local_2bc);
      if (local_2bc != 0) {
        if (0 < local_2bc) {
          local_2d8 = param_1 + 0xa70;
          iVar8 = 0;
          do {
            iVar9 = (**(code **)(param_1 + 0x48))(&local_2c0,iVar8);
            if (iVar9 == 0) {
              iVar9 = (**(code **)(param_1 + 0x58))(local_2a8,0x100,local_2c0);
              if (iVar9 == 0) {
                local_a8 = 0;
                sVar11 = strlen(local_2a8);
                FUN_1446e6fe8(&local_1a8,local_2a8,sVar11 & 0xffffffff,1);
                FUN_140056680(&local_78,local_a0);
                plVar16 = local_78;
                local_78 = (longlong *)0x0;
                uStack_70 = 0;
                if (local_a8 != 0) {
                  FUN_1400020a8();
                }
              }
              else {
                plVar16 = (longlong *)0x0;
              }
              uVar6 = local_2c0;
              iVar10 = (**(code **)(*DAT_14ca83900 + 0x28))();
              iVar17 = 0;
              iVar9 = 0;
              if (iVar10 == 2) {
                piVar14 = (int *)FUN_14001cc68(0x40,0x10);
                iVar10 = (**(code **)(param_1 + 0x68))(piVar14,local_2ac,uVar6);
                if (iVar10 == 0) {
                  puVar13 = (undefined8 *)(**(code **)(*DAT_14ca83900 + 0x3b8))();
                  local_78 = (longlong *)0x0;
                  iVar9 = (**(code **)*puVar13)(puVar13,&DAT_14a345190,&local_78);
                  if (iVar9 < 0) {
                    bVar20 = false;
                  }
                  else {
                    local_2b8 = (longlong *)0x0;
                    (**(code **)(*local_78 + 0x38))(local_78,&local_2b8);
                    (**(code **)(*local_2b8 + 0x40))(local_2b8,&local_1a8);
                    local_2d0 = local_80;
                    uVar5 = local_2d0;
                    if ((int)local_80 == *piVar14) {
                      local_2d0._4_4_ = (int)((ulonglong)local_80 >> 0x20);
                      bVar20 = local_2d0._4_4_ == piVar14[1];
                    }
                    else {
                      bVar20 = false;
                    }
                    local_2d0 = uVar5;
                    if (local_2b8 != (longlong *)0x0) {
                      (**(code **)(*local_2b8 + 0x10))();
                    }
                  }
                  if (local_78 != (longlong *)0x0) {
                    (**(code **)(*local_78 + 0x10))();
                  }
                  iVar9 = 0;
                  pplVar4 = local_1a8;
                  if (bVar20) goto LAB_1437d1b56;
                }
              }
              else if (iVar10 == 3) {
                piVar14 = (int *)FUN_14001cc68(0x40,0x10);
                iVar10 = (**(code **)(param_1 + 0x68))(piVar14,&local_78,uVar6);
                if (iVar10 == 0) {
                  plVar12 = (longlong *)(**(code **)(*DAT_14ca83900 + 0x3b8))();
                  (**(code **)(*plVar12 + 0x158))(plVar12,&local_1a8);
                  if (((int)local_1a8 == *piVar14) &&
                     (pplVar4 = local_1a8, local_1a8._4_4_ == piVar14[1])) goto LAB_1437d1b56;
                }
              }
              else {
                iVar9 = iVar17;
                if (iVar10 == 4) {
                  plVar12 = (longlong *)(**(code **)(*DAT_14ca83900 + 0x30))();
                  puVar13 = (undefined8 *)(**(code **)(*plVar12 + 0x528))(plVar12);
                  puStack_1a0 = (undefined1 *)puVar13[1];
                  local_1a8._0_4_ = (int)*puVar13;
                  local_1a8._4_4_ = (int)((ulonglong)*puVar13 >> 0x20);
                  iVar10 = (**(code **)(param_1 + 0x60))(&local_78,uVar6);
                  pplVar4 = (longlong **)CONCAT44(local_1a8._4_4_,(int)local_1a8);
                  local_1a8 = (longlong **)CONCAT44(local_1a8._4_4_,(int)local_1a8);
                  if ((iVar10 == 0) &&
                     (auVar3._8_8_ = uStack_70, auVar3._0_8_ = local_78,
                     auVar2._4_4_ = local_1a8._4_4_, auVar2._0_4_ = (int)local_1a8,
                     auVar2._8_8_ = puStack_1a0, local_1a8 = pplVar4, auVar3 == auVar2)) {
LAB_1437d1b56:
                    local_1a8 = pplVar4;
                    iVar10 = (**(code **)(param_1 + 0xe0))(local_2c8,0,iVar8);
                    iVar9 = 1;
                    if (iVar10 == 0) {
                      local_2b8 = (longlong *)CONCAT44(local_2b8._4_4_,iVar8);
                      local_1a8 = &local_2b8;
                      puStack_1a0 = local_2c8;
                      FUN_147e0b7be(local_2d8,&local_78,&local_1a8);
                      *(int *)(param_1 + 0xa68) = iVar8;
                      iVar9 = 2;
                    }
                  }
                }
              }
              if (plVar16 != (longlong *)0x0) {
                FUN_1400020a8(plVar16);
              }
              if (iVar9 != 0) {
                if (iVar9 != 2) goto LAB_1437d1cc1;
                break;
              }
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < local_2bc);
        }
        if (*(int *)(param_1 + 0xa68) != -1) {
          iVar8 = *(int *)(param_1 + 0x1c);
          *(int *)(param_1 + 0x1c) = iVar8 + 1;
          uVar15 = (ulonglong)*(int *)(param_1 + 0x10);
          if ((longlong)uVar15 < 1) {
            *(int *)(param_1 + 0x1c) = iVar8;
          }
          else {
            plVar16 = (longlong *)(param_1 + 8);
            bVar20 = false;
            do {
              lVar18 = uVar15 * 0x10 + -8;
              uVar19 = uVar15;
              while ((*(int *)(*plVar16 + lVar18) != 0 &&
                     (plVar12 = *(longlong **)(*plVar16 + -8 + lVar18), plVar12 != (longlong *)0x0))
                    ) {
                cVar7 = (**(code **)(*plVar12 + 0x60))();
                if (cVar7 == '\0') break;
                lVar18 = lVar18 + -0x10;
                bVar1 = uVar19 < 2;
                uVar19 = uVar19 - 1;
                if (bVar1) {
                  iVar8 = *(int *)(param_1 + 0x1c) + -1;
                  *(int *)(param_1 + 0x1c) = iVar8;
                  if (bVar20) goto LAB_1437d1c5c;
                  goto LAB_1437d1cc1;
                }
              }
              uVar15 = uVar19 - 1;
              bVar20 = true;
            } while (1 < uVar19);
            iVar8 = *(int *)(param_1 + 0x1c) + -1;
            *(int *)(param_1 + 0x1c) = iVar8;
LAB_1437d1c5c:
            if (iVar8 < 1) {
              iVar8 = *(int *)(param_1 + 0x10);
              iVar9 = iVar8;
              if (0 < iVar8) {
                iVar10 = 0;
                do {
                  if ((*(int *)(*plVar16 + 8 + (longlong)iVar10 * 0x10) == 0) ||
                     (plVar12 = *(longlong **)(*plVar16 + (longlong)iVar10 * 0x10),
                     plVar12 == (longlong *)0x0)) {
LAB_1437d1ca0:
                    FUN_14005b288(plVar16,iVar10);
                    FUN_14005b248(plVar16);
                  }
                  else {
                    cVar7 = (**(code **)(*plVar12 + 0x28))();
                    if (cVar7 != '\0') goto LAB_1437d1ca0;
                    iVar10 = iVar10 + 1;
                  }
                  iVar9 = *(int *)(param_1 + 0x10);
                } while (iVar10 < iVar9);
              }
              iVar10 = 2;
              if (2 < iVar9 * 2) {
                iVar10 = iVar9 * 2;
              }
              *(int *)(param_1 + 0x18) = iVar10;
              if ((iVar10 < iVar8) && (*(int *)(param_1 + 0x14) != iVar9)) {
                FUN_14045812c(plVar16);
              }
            }
          }
        }
      }
LAB_1437d1cc1:
      if ((local_60 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
  if (*(HMODULE *)(param_1 + 0x20) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_2f8);
}



// FUNCTION 1437d1d20 FUN_1437d1d20 body=102 status=ok
// SIG undefined FUN_1437d1d20(void)

void FUN_1437d1d20(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014ab3ce28;
  local_14 = 4;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146415eac(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437d1d88 FUN_1437d1d88 body=169 status=ok
// SIG undefined FUN_1437d1d88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437d1d88(void)

{
  undefined1 auStack_38 [40];
  undefined *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  DAT_14cb12b1c = '\x01';
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb12b38) {
    FUN_144b3d300(&DAT_14cb12b38);
    if (DAT_14cb12b38 == -1) {
      _DAT_14cb12b30 = &PTR_FUN_14ab40a50;
      _Init_thread_footer(&DAT_14cb12b38);
    }
  }
  if (DAT_14cb12b1c == '\0') {
    FUN_1437d1d88();
  }
  local_10 = &DAT_14cb12b30;
  FUN_147e0d99e();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437d1e52 FUN_1437d1e52 body=927 status=ok
// SIG undefined FUN_1437d1e52(void)

IID * FUN_1437d1e52(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  LPVOID *ppv;
  void *_Src;
  char cVar2;
  char cVar3;
  HRESULT HVar4;
  int iVar5;
  IID *rclsid;
  IID *pIVar6;
  bool bVar7;
  undefined1 auStackY_a8 [32];
  undefined8 *local_78;
  undefined4 local_70;
  undefined8 *local_68;
  undefined4 local_60;
  undefined4 *local_58;
  undefined4 local_50;
  IMFMediaType *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStackY_a8;
  if (*(int *)(param_1 + 0x40) == 0) {
    local_48 = (IMFMediaType *)0x0;
    uStack_40 = 0;
    local_58 = (undefined4 *)0x0;
    local_50 = 4;
    cVar3 = '\0';
    FUN_1447bda9e(&local_58,4,0);
    *local_58 = 96000;
    local_58[1] = 0x1f400;
    local_58[2] = 160000;
    local_58[3] = 0x2ee00;
    cVar2 = FUN_1437d21f2(L"AAC Bitrate",*(undefined4 *)(param_2 + 3),&local_58,&local_48);
    if (cVar2 != '\0') {
      local_68 = (undefined8 *)0x0;
      local_60 = 3;
      cVar3 = '\0';
      FUN_1447bda9e(&local_68,3,0);
      *local_68 = 0xbb800000ac44;
      *(undefined4 *)(local_68 + 1) = 0;
      cVar2 = FUN_1437d21f2(L"AAC Samplerate",*(undefined4 *)(param_2 + 2),&local_68,&local_48);
      if (cVar2 != '\0') {
        local_78 = (undefined8 *)0x0;
        local_70 = 3;
        FUN_1447bda9e(&local_78,3,0);
        *local_78 = 0x200000001;
        *(undefined4 *)(local_78 + 1) = 6;
        cVar3 = FUN_1437d21f2(L"AAC NumChannels",*(undefined4 *)((longlong)param_2 + 0x14),&local_78
                              ,&local_48);
        if (local_78 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_68 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_58 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != (IMFMediaType *)0x0) {
      FUN_1400020a8();
    }
    if (cVar3 != '\0') {
      puVar1 = (undefined8 *)(param_1 + 0x68);
      if (puVar1 != param_2) {
        iVar5 = *(int *)(param_2 + 1);
        _Src = (void *)*param_2;
        *(int *)(param_1 + 0x70) = iVar5;
        if (iVar5 == 0 && *(int *)(param_1 + 0x74) == 0) {
          *(undefined4 *)(param_1 + 0x74) = 0;
        }
        else {
          FUN_1446dd670(puVar1);
          if (iVar5 != 0) {
            memcpy((void *)*puVar1,_Src,(longlong)iVar5 * 2);
          }
        }
      }
      *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 3);
      *(undefined8 *)(param_1 + 0x78) = param_2[2];
      pIVar6 = (IID *)0x0;
      rclsid = (IID *)&DAT_14ab40a3c;
      if (*(int *)(param_1 + 0x40) != 0) {
        rclsid = pIVar6;
      }
      ppv = (LPVOID *)(param_1 + 0x88);
      HVar4 = CoCreateInstance(rclsid,(LPUNKNOWN)0x0,1,(IID *)&DAT_1499d7870,ppv);
      if (HVar4 < 0) goto LAB_1437d21ca;
      local_48 = (IMFMediaType *)0x0;
      HVar4 = MFCreateMediaType(&local_48);
      if (HVar4 < 0) {
LAB_1437d2132:
        bVar7 = false;
      }
      else {
        HVar4 = (*local_48->lpVtbl->SetGUID)(local_48,(GUID *)&DAT_1499d7cc0,(GUID *)&DAT_1499d7dc0)
        ;
        if (HVar4 < 0) goto LAB_1437d2132;
        HVar4 = (*local_48->lpVtbl->SetGUID)(local_48,(GUID *)&DAT_1499d7cd0,(GUID *)&DAT_1499d7c70)
        ;
        if (HVar4 < 0) goto LAB_1437d2132;
        HVar4 = (*local_48->lpVtbl->SetUINT32)(local_48,(GUID *)&DAT_1499d7d20,0x10);
        if (HVar4 < 0) goto LAB_1437d2132;
        HVar4 = (*local_48->lpVtbl->SetUINT32)
                          (local_48,(GUID *)&DAT_1499d7d00,*(UINT32 *)(param_1 + 0x78));
        if (HVar4 < 0) goto LAB_1437d2132;
        HVar4 = (*local_48->lpVtbl->SetUINT32)
                          (local_48,(GUID *)&DAT_1499d7cf0,*(UINT32 *)(param_1 + 0x7c));
        if (HVar4 < 0) goto LAB_1437d2132;
        iVar5 = (**(code **)(*(longlong *)*ppv + 0x78))(*ppv,0,local_48,0);
        bVar7 = -1 < iVar5;
      }
      if (local_48 != (IMFMediaType *)0x0) {
        (*local_48->lpVtbl->Release)(local_48);
      }
      if (bVar7) {
        cVar2 = FUN_1437d2410(param_1);
        if (cVar2 != '\0') {
          iVar5 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x30))
                            (*(longlong **)(param_1 + 0x88),0,param_1 + 0x98);
          if (-1 < iVar5) {
            iVar5 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x38))
                              (*(longlong **)(param_1 + 0x88),0,param_1 + 0xb0);
            if (-1 < iVar5) {
              iVar5 = (**(code **)(*(longlong *)*ppv + 0xb8))(*ppv,0x10000000,0);
              if (-1 < iVar5) {
                iVar5 = (**(code **)(*(longlong *)*ppv + 0xb8))(*ppv,0x10000003,0);
                pIVar6 = (IID *)&DAT_00000001;
                if (-1 < iVar5) goto LAB_1437d21ca;
              }
            }
          }
        }
      }
      (**(code **)(*(longlong *)*ppv + 0x10))();
    }
  }
  pIVar6 = (IID *)0x0;
LAB_1437d21ca:
  if ((local_30 ^ (ulonglong)auStackY_a8) == DAT_14c707940) {
    return pIVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437d21f2 FUN_1437d21f2 body=539 status=ok
// SIG undefined FUN_1437d21f2(void)

undefined8 FUN_1437d21f2(undefined8 param_1,int param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_98 [44];
  int local_6c;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((longlong)(int)param_3[1] != 0) {
    lVar4 = (longlong)(int)param_3[1] * 4;
    lVar7 = 0;
    do {
      if (*(int *)(*param_3 + lVar7) == param_2) {
        uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
        goto LAB_1437d23d8;
      }
      lVar7 = lVar7 + 4;
    } while (lVar4 != lVar7);
  }
  FUN_140056680(&local_68);
  iVar1 = (int)local_60;
  iVar3 = ((int)local_60 == 0) + 10;
  local_58 = local_68;
  local_68 = 0;
  iVar2 = local_60._4_4_;
  local_50 = local_60;
  local_60 = 0;
  iVar6 = iVar3 + iVar1;
  if (iVar6 < iVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  if (iVar2 < iVar6) {
    FUN_1446f8c06(&local_58);
  }
  FUN_1400020e8(&local_58,L" must be (",10);
  local_6c = param_2;
  if (&local_58 == param_4) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_4 != 0) {
      FUN_1400020a8();
    }
    *param_4 = local_58;
    local_58 = 0;
    *(int *)(param_4 + 1) = (int)local_50;
    *(undefined4 *)((longlong)param_4 + 0xc) = local_50._4_4_;
    local_50 = 0;
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  lVar4 = param_3[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar7 = *param_3;
    lVar9 = 0;
    do {
      puVar8 = &DAT_149e19f34;
      if ((int)param_4[1] < 2) {
        puVar8 = &DAT_149dfb77a;
      }
      FUN_140002266(&local_58,L"%s%u",puVar8,*(undefined4 *)(lVar7 + lVar9));
      iVar1 = (int)local_50 + -1;
      if ((int)local_50 == 0) {
        iVar1 = 0;
      }
      FUN_1400020e8(param_4,local_58,iVar1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      lVar9 = lVar9 + 4;
    } while ((longlong)(int)lVar4 * 4 != lVar9);
  }
  FUN_140002266(&local_58,L"). %u was specified.",local_6c);
  iVar1 = (int)local_50 + -1;
  if ((int)local_50 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_4,local_58,iVar1);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  uVar5 = 0;
LAB_1437d23d8:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437d2410 FUN_1437d2410 body=303 status=ok
// SIG undefined FUN_1437d2410(void)

bool FUN_1437d2410(longlong param_1)

{
  IMFMediaType **ppMFType;
  longlong *plVar1;
  HRESULT HVar2;
  int iVar3;
  
  ppMFType = (IMFMediaType **)(param_1 + 0x90);
  plVar1 = *(longlong **)(param_1 + 0x90);
  if (plVar1 != (longlong *)0x0) {
    *ppMFType = (IMFMediaType *)0x0;
    (**(code **)(*plVar1 + 0x10))();
  }
  HVar2 = MFCreateMediaType(ppMFType);
  if (((((-1 < HVar2) &&
        (HVar2 = (*(*ppMFType)->lpVtbl->SetGUID)
                           (*ppMFType,(GUID *)&DAT_1499d7cc0,(GUID *)&DAT_1499d7dc0), -1 < HVar2))
       && (*(int *)(param_1 + 0x40) == 0)) &&
      ((HVar2 = (*(*ppMFType)->lpVtbl->SetGUID)
                          (*ppMFType,(GUID *)&DAT_1499d7cd0,(GUID *)&DAT_1499d7ca0), -1 < HVar2 &&
       (HVar2 = (*(*ppMFType)->lpVtbl->SetUINT32)(*ppMFType,(GUID *)&DAT_1499d7d20,0x10), -1 < HVar2
       )))) && ((iVar3 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0xa8))
                                   (*(longlong **)(param_1 + 0x90),&DAT_1499d7d00,
                                    *(undefined4 *)(param_1 + 0x78)), -1 < iVar3 &&
                ((iVar3 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0xa8))
                                    (*(longlong **)(param_1 + 0x90),&DAT_1499d7cf0,
                                     *(undefined4 *)(param_1 + 0x7c)), -1 < iVar3 &&
                 (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0xa8))
                                    (*(longlong **)(param_1 + 0x90),&DAT_1499d7d10,
                                     *(uint *)(param_1 + 0x80) >> 3), -1 < iVar3)))))) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x80))
                      (*(longlong **)(param_1 + 0x88),0,*(undefined8 *)(param_1 + 0x90),0);
    return -1 < iVar3;
  }
  return false;
}



// FUNCTION 1437d2540 FUN_1437d2540 body=972 status=ok
// SIG undefined FUN_1437d2540(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1437d2540(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  DWORD cbMaxLength;
  uint cbCurrentLength;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  char cVar7;
  HRESULT HVar8;
  int iVar9;
  DWORD cbAligment;
  longlong lVar10;
  size_t _Size;
  longlong **pplVar11;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  undefined4 local_d0 [2];
  longlong *local_c8;
  longlong *plStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined1 local_8c [4];
  IMFMediaBuffer *local_88;
  longlong *local_80;
  uint local_78 [2];
  void *local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_147e0c334(param_1 + 0xc0,param_2 + 2);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  iVar9 = *(int *)(param_1 + 0xd0);
  pvVar3 = *(void **)(param_1 + 0xc0);
  local_d0[0] = 0;
  local_c8 = (longlong *)0x0;
  cVar7 = FUN_1437d2aca();
  if (cVar7 == '\0') {
    local_d8 = (longlong *)0x0;
  }
  else {
    cbCurrentLength = iVar9 * 2;
    cbMaxLength = *(DWORD *)(param_1 + 0xa4);
    if ((int)*(DWORD *)(param_1 + 0xa4) < (int)cbCurrentLength) {
      cbMaxLength = cbCurrentLength;
    }
    cbAligment = *(int *)(param_1 + 0xac) - 1;
    if (*(int *)(param_1 + 0xac) == 0) {
      cbAligment = 0;
    }
    local_88 = (IMFMediaBuffer *)0x0;
    HVar8 = MFCreateAlignedMemoryBuffer(cbMaxLength,cbAligment,&local_88);
    if (HVar8 < 0) {
      local_d8 = (longlong *)0x0;
    }
    else {
      local_68 = (longlong *)0x0;
      HVar8 = (*local_88->lpVtbl->Lock)(local_88,(BYTE **)&local_68,(DWORD *)0x0,(DWORD *)0x0);
      pplVar11 = &local_d8;
      if (-1 < HVar8) {
        memcpy(local_68,pvVar3,(ulonglong)cbCurrentLength);
        HVar8 = (*local_88->lpVtbl->Unlock)(local_88);
        if (((-1 < HVar8) &&
            (HVar8 = (*local_88->lpVtbl->SetCurrentLength)(local_88,cbCurrentLength), -1 < HVar8))
           && (iVar9 = (**(code **)(*local_c8 + 0x150))(local_c8,local_88), -1 < iVar9)) {
          pplVar11 = &local_c8;
          (**(code **)(*local_c8 + 0x120))(local_c8,uVar1);
          (**(code **)(*local_c8 + 0x130))(local_c8,uVar2);
          local_d8 = local_c8;
        }
      }
      *pplVar11 = (longlong *)0x0;
    }
    if (local_88 != (IMFMediaBuffer *)0x0) {
      (*local_88->lpVtbl->Release)(local_88);
    }
  }
  if (local_c8 != (longlong *)0x0) {
    (**(code **)(*local_c8 + 0x10))();
  }
  plVar4 = local_d8;
  if (local_d8 != (longlong *)0x0) {
    iVar9 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0xc0))
                      (*(longlong **)(param_1 + 0x88),0,local_d8,0);
    if ((-1 < iVar9) && (FUN_1437d290e(param_1,&local_88), local_80 != (longlong *)0x0)) {
      do {
        plVar6 = local_80;
        iVar9 = (**(code **)(*local_80 + 0x168))(local_80,local_8c);
        if (iVar9 < 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          break;
        }
        local_d0[0] = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_c8 = (longlong *)0x0;
        plStack_c0 = (longlong *)0x0;
        (**(code **)(*plVar6 + 0x118))(plVar6,&local_68);
        local_c8 = local_68;
        (**(code **)(*plVar6 + 0x128))(plVar6,&local_68);
        plStack_c0 = local_68;
        local_68 = (longlong *)((ulonglong)local_68 & 0xffffffff00000000);
        (**(code **)(*plVar6 + 0x138))(plVar6,&local_68);
        if (0 < (int)local_68) {
          local_68 = (longlong *)0x0;
          (**(code **)(*plVar6 + 0x140))(plVar6,0,&local_68);
          local_70 = (void *)0x0;
          local_78[1] = 0;
          local_78[0] = 0;
          (**(code **)(*local_68 + 0x18))(local_68,&local_70,local_78 + 1,local_78);
          pvVar3 = local_70;
          uVar5 = uStack_b0;
          _Size = (size_t)(int)local_78[0];
          iVar9 = (int)uStack_b0;
          lVar10 = (longlong)(int)uStack_b0;
          uStack_b0 = CONCAT44(uStack_b0._4_4_,local_78[0] + (int)uStack_b0);
          if ((uint)(uStack_b0._4_4_ - iVar9) < local_78[0]) {
            FUN_1447403be(&local_b8,uVar5 & 0xffffffff);
LAB_1437d2842:
            memcpy((void *)(lVar10 + local_b8),pvVar3,_Size);
          }
          else if (local_78[0] != 0) goto LAB_1437d2842;
          (**(code **)(*local_68 + 0x20))();
          if (local_68 != (longlong *)0x0) {
            (**(code **)(*local_68 + 0x10))();
          }
        }
        FUN_147e0bfe8(param_1,local_d0);
        if (local_b8 != 0) {
          FUN_1400020a8();
        }
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_1437d290e(param_1,&local_88);
      } while (local_80 != (longlong *)0x0);
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437d290e FUN_1437d290e body=442 status=ok
// SIG undefined FUN_1437d290e(void)

undefined4 * FUN_1437d290e(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  HRESULT HVar2;
  int iVar3;
  IMFMediaBufferVtbl *pIVar4;
  IMFMediaBuffer *This;
  DWORD cbAligment;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined4 local_5c;
  IMFMediaBuffer *local_58;
  longlong *plStack_50;
  undefined8 local_48;
  IMFMediaBuffer *pIStack_40;
  undefined4 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  local_30 = (longlong *)0x0;
  cVar1 = FUN_1437d2aca();
  if (cVar1 == '\0') {
    *param_2 = 2;
    *(undefined8 *)(param_2 + 2) = 0;
    goto LAB_1437d2a96;
  }
  local_58 = (IMFMediaBuffer *)0x0;
  cbAligment = *(int *)(param_1 + 0xb8) - 1;
  if (*(int *)(param_1 + 0xb8) == 0) {
    cbAligment = 0;
  }
  HVar2 = MFCreateAlignedMemoryBuffer(*(DWORD *)(param_1 + 0xb4),cbAligment,&local_58);
  if (HVar2 < 0) {
LAB_1437d2a44:
    *param_2 = 2;
    *(undefined8 *)(param_2 + 2) = 0;
    if (local_58 == (IMFMediaBuffer *)0x0) goto LAB_1437d2a96;
    pIVar4 = local_58->lpVtbl;
    This = local_58;
  }
  else {
    iVar3 = (**(code **)(*local_30 + 0x150))(local_30,local_58);
    if (iVar3 < 0) goto LAB_1437d2a44;
    if (local_58 != (IMFMediaBuffer *)0x0) {
      (*local_58->lpVtbl->Release)(local_58);
    }
    local_58 = (IMFMediaBuffer *)0x0;
    local_48 = 0;
    pIStack_40 = (IMFMediaBuffer *)0x0;
    plStack_50 = local_30;
    local_68 = &local_5c;
    local_5c = 0;
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x88) + 200))
                      (*(longlong **)(param_1 + 0x88),0,1,&local_58);
    This = pIStack_40;
    if (pIStack_40 != (IMFMediaBuffer *)0x0) {
      (*pIStack_40->lpVtbl->AddRef)(pIStack_40);
    }
    if (iVar3 == -0x3ff2928e || local_30 == (longlong *)0x0) {
LAB_1437d2a7a:
      *param_2 = 2;
      *(undefined8 *)(param_2 + 2) = 0;
    }
    else if (iVar3 == -0x3ff2929f) {
      cVar1 = FUN_1437d2410(param_1);
      if (cVar1 == '\0') goto LAB_1437d2a7a;
      FUN_1437d290e(param_1,param_2);
    }
    else {
      if (iVar3 < 0) goto LAB_1437d2a7a;
      *param_2 = local_38;
      *(longlong **)(param_2 + 2) = local_30;
      local_30 = (longlong *)0x0;
    }
    if (This == (IMFMediaBuffer *)0x0) goto LAB_1437d2a96;
    pIVar4 = This->lpVtbl;
  }
  (*pIVar4->Release)(This);
LAB_1437d2a96:
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437d2aca FUN_1437d2aca body=74 status=ok
// SIG undefined FUN_1437d2aca(void)

undefined8 FUN_1437d2aca(longlong param_1)

{
  longlong *plVar1;
  IMFSample *This;
  HRESULT HVar2;
  undefined4 extraout_var;
  IMFSample **ppIMFSample;
  
  plVar1 = *(longlong **)(param_1 + 8);
  ppIMFSample = (IMFSample **)(param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
    *ppIMFSample = (IMFSample *)0x0;
    (**(code **)(*plVar1 + 0x10))();
    This = *ppIMFSample;
    if (This != (IMFSample *)0x0) {
      *ppIMFSample = (IMFSample *)0x0;
      (*This->lpVtbl->Release)(This);
    }
  }
  HVar2 = MFCreateSample(ppIMFSample);
  return CONCAT71((int7)(CONCAT44(extraout_var,HVar2) >> 8),-1 < HVar2);
}



// FUNCTION 1437d2b14 FUN_1437d2b14 body=154 status=ok
// SIG undefined FUN_1437d2b14(void)

undefined8 * FUN_1437d2b14(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte bVar1;
  ushort uVar2;
  undefined2 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  
  if (*(int *)(param_3 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_3;
  }
  lVar5 = 0;
  do {
    uVar2 = puVar3[lVar5];
    bVar1 = (&DAT_14ab409e0)[lVar5];
    iVar6 = (uint)uVar2 - (uint)bVar1;
    if (iVar6 == 0) {
      if (uVar2 == 0) goto LAB_1437d2b92;
    }
    else {
      if (0x7f < ((uint)bVar1 | (uint)uVar2)) goto LAB_1437d2b7e;
      if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[bVar1]) {
        iVar6 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_1437d2b7e:
        if (iVar6 == 0) {
LAB_1437d2b92:
          uVar4 = FUN_14001cc68(0xe8,0x10);
          FUN_147e0c10c(uVar4);
        }
        else {
          uVar4 = 0;
        }
        *param_2 = uVar4;
        return param_2;
      }
    }
    lVar5 = lVar5 + 1;
  } while( true );
}



// FUNCTION 1437d2bae FUN_1437d2bae body=80 status=ok
// SIG undefined FUN_1437d2bae(void)

void FUN_1437d2bae(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_3 < *(uint *)(param_1 + 0x18)) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)(int)param_3 * 8);
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    uVar3 = *(undefined8 *)(lVar1 + 0x38);
    uVar4 = *(undefined8 *)(lVar1 + 0x40);
    uVar5 = *(undefined8 *)(lVar1 + 0x48);
    uVar6 = *(undefined8 *)(lVar1 + 0x54);
    *(undefined8 *)((longlong)param_2 + 0x1c) = *(undefined8 *)(lVar1 + 0x4c);
    *(undefined8 *)((longlong)param_2 + 0x24) = uVar6;
    param_2[2] = uVar4;
    param_2[3] = uVar5;
    *param_2 = uVar2;
    param_2[1] = uVar3;
    return;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0xffffffff00000000;
  param_2[3] = 0x3ffffffff;
  *(undefined4 *)(param_2 + 4) = 3;
  *(undefined1 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 5) = 2;
  return;
}



// FUNCTION 1437d2bfe FUN_1437d2bfe body=92 status=ok
// SIG undefined FUN_1437d2bfe(void)

void FUN_1437d2bfe(longlong param_1,uint param_2,undefined4 *param_3)

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
  
  if (param_2 < *(uint *)(param_1 + 0x18)) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)(int)param_2 * 8);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 8));
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[4];
    uVar7 = param_3[5];
    uVar8 = param_3[6];
    uVar9 = param_3[7];
    uVar10 = param_3[8];
    uVar11 = param_3[9];
    uVar12 = param_3[10];
    *(undefined4 *)(lVar1 + 0x4c) = param_3[7];
    *(undefined4 *)(lVar1 + 0x50) = uVar10;
    *(undefined4 *)(lVar1 + 0x54) = uVar11;
    *(undefined4 *)(lVar1 + 0x58) = uVar12;
    *(undefined4 *)(lVar1 + 0x40) = uVar6;
    *(undefined4 *)(lVar1 + 0x44) = uVar7;
    *(undefined4 *)(lVar1 + 0x48) = uVar8;
    *(undefined4 *)(lVar1 + 0x4c) = uVar9;
    *(undefined4 *)(lVar1 + 0x30) = uVar2;
    *(undefined4 *)(lVar1 + 0x34) = uVar3;
    *(undefined4 *)(lVar1 + 0x38) = uVar4;
    *(undefined4 *)(lVar1 + 0x3c) = uVar5;
    *(undefined1 *)(lVar1 + 0x5c) = 1;
    if ((LPCRITICAL_SECTION)(lVar1 + 8) != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001437d2c4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1437d2c6e FUN_1437d2c6e body=867 status=ok
// SIG undefined FUN_1437d2c6e(void)

bool FUN_1437d2c6e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  bool bVar8;
  undefined1 auStack_f8 [32];
  undefined4 *local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  longlong *local_c0;
  undefined1 *local_b8;
  undefined8 *local_b0;
  undefined2 *local_a0;
  int local_98;
  longlong local_90 [2];
  undefined2 *local_80;
  int local_78;
  undefined2 *local_70;
  int local_68;
  undefined1 local_60 [4];
  undefined4 local_5c;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  bVar8 = false;
  local_50 = (longlong *)0x0;
  local_58 = (longlong *)0x0;
  iVar4 = (**(code **)*param_2)(param_2,&DAT_14a345190);
  if (iVar4 == 0) {
    iVar4 = (**(code **)(*local_50 + 0x38))(local_50,&local_58);
    if (iVar4 == 0) {
      local_5c = 0xb100;
      plVar1 = (longlong *)(param_1 + 0x40);
      puVar2 = (undefined8 *)(param_1 + 0x48);
      plVar3 = *(longlong **)(param_1 + 0x48);
      if (plVar3 != (longlong *)0x0) {
        *puVar2 = 0;
        (**(code **)(*plVar3 + 0x10))();
      }
      plVar3 = (longlong *)*plVar1;
      if (plVar3 != (longlong *)0x0) {
        *plVar1 = 0;
        (**(code **)(*plVar3 + 0x10))();
      }
      local_b8 = local_60;
      local_d8 = &local_5c;
      local_c8 = 7;
      local_d0 = 1;
      local_c0 = plVar1;
      local_b0 = puVar2;
      iVar4 = D3D11CreateDevice(local_58,0,0,0);
      bVar8 = iVar4 == 0;
      if (bVar8) {
        FUN_1400b22c2(local_90,".\\Runtime/AVEncoder/Private/VideoEncoderInput.cpp");
        FUN_14093d9c4(&local_80,local_90);
        puVar6 = local_80;
        puVar5 = local_80;
        if (local_78 == 0) {
          puVar5 = &DAT_149dfb77a;
        }
        FUN_1400b22c2(&local_a0,"FVideoEncoderInputImpl");
        puVar7 = &DAT_149dfb77a;
        if (local_98 != 0) {
          puVar7 = local_a0;
        }
        local_d8 = (undefined4 *)CONCAT44(local_d8._4_4_,0x129);
        FUN_140002266(&local_70,L"%s (%s:%d)",puVar7,puVar5);
        if (local_a0 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (puVar6 != (undefined2 *)0x0) {
          FUN_1400020a8(puVar6);
        }
        if (local_90[0] != 0) {
          FUN_1400020a8();
        }
        iVar4 = local_68 + -1;
        puVar6 = local_70;
        if (local_68 == 0) {
          iVar4 = 0;
          puVar6 = &DAT_149dfb77a;
        }
        (**(code **)(*(longlong *)*plVar1 + 0x118))
                  ((longlong *)*plVar1,&DAT_14c761f44,iVar4 * 2,puVar6);
        if (local_70 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        FUN_1400b22c2(local_90,".\\Runtime/AVEncoder/Private/VideoEncoderInput.cpp");
        FUN_14093d9c4(&local_80,local_90);
        puVar6 = local_80;
        if (local_78 == 0) {
          puVar6 = &DAT_149dfb77a;
        }
        FUN_1400b22c2(&local_a0,"FVideoEncoderInputImpl");
        puVar5 = &DAT_149dfb77a;
        if (local_98 != 0) {
          puVar5 = local_a0;
        }
        local_d8 = (undefined4 *)CONCAT44(local_d8._4_4_,0x12a);
        FUN_140002266(&local_70,L"%s (%s:%d)",puVar5,puVar6);
        if (local_a0 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_80 != (undefined2 *)0x0) {
          FUN_1400020a8(local_80);
        }
        if (local_90[0] != 0) {
          FUN_1400020a8();
        }
        iVar4 = local_68 + -1;
        puVar6 = local_70;
        if (local_68 == 0) {
          iVar4 = 0;
          puVar6 = &DAT_149dfb77a;
        }
        (**(code **)(*(longlong *)*puVar2 + 0x28))
                  ((longlong *)*puVar2,&DAT_14c761f54,iVar4 * 2,puVar6);
        if (local_70 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        *(undefined4 *)(param_1 + 8) = 2;
        FUN_147e0cadc(param_1);
      }
    }
    else {
      bVar8 = false;
    }
  }
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return bVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437d2fd2 FUN_1437d2fd2 body=867 status=ok
// SIG undefined FUN_1437d2fd2(void)

bool FUN_1437d2fd2(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  bool bVar8;
  undefined1 auStack_f8 [32];
  undefined4 *local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  longlong *local_c0;
  undefined1 *local_b8;
  undefined8 *local_b0;
  undefined2 *local_a0;
  int local_98;
  longlong local_90 [2];
  undefined2 *local_80;
  int local_78;
  undefined2 *local_70;
  int local_68;
  undefined1 local_60 [4];
  undefined4 local_5c;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  bVar8 = false;
  local_50 = (longlong *)0x0;
  local_58 = (longlong *)0x0;
  iVar4 = (**(code **)*param_2)(param_2,&DAT_14a345190);
  if (iVar4 == 0) {
    iVar4 = (**(code **)(*local_50 + 0x38))(local_50,&local_58);
    if (iVar4 == 0) {
      local_5c = 0xb000;
      plVar1 = (longlong *)(param_1 + 0x40);
      puVar2 = (undefined8 *)(param_1 + 0x48);
      plVar3 = *(longlong **)(param_1 + 0x48);
      if (plVar3 != (longlong *)0x0) {
        *puVar2 = 0;
        (**(code **)(*plVar3 + 0x10))();
      }
      plVar3 = (longlong *)*plVar1;
      if (plVar3 != (longlong *)0x0) {
        *plVar1 = 0;
        (**(code **)(*plVar3 + 0x10))();
      }
      local_b8 = local_60;
      local_d8 = &local_5c;
      local_c8 = 7;
      local_d0 = 1;
      local_c0 = plVar1;
      local_b0 = puVar2;
      iVar4 = D3D11CreateDevice(local_58,0,0,0);
      bVar8 = iVar4 == 0;
      if (bVar8) {
        FUN_1400b22c2(local_90,".\\Runtime/AVEncoder/Private/VideoEncoderInput.cpp");
        FUN_14093d9c4(&local_80,local_90);
        puVar6 = local_80;
        puVar5 = local_80;
        if (local_78 == 0) {
          puVar5 = &DAT_149dfb77a;
        }
        FUN_1400b22c2(&local_a0,"FVideoEncoderInputImpl");
        puVar7 = &DAT_149dfb77a;
        if (local_98 != 0) {
          puVar7 = local_a0;
        }
        local_d8 = (undefined4 *)CONCAT44(local_d8._4_4_,0xf5);
        FUN_140002266(&local_70,L"%s (%s:%d)",puVar7,puVar5);
        if (local_a0 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (puVar6 != (undefined2 *)0x0) {
          FUN_1400020a8(puVar6);
        }
        if (local_90[0] != 0) {
          FUN_1400020a8();
        }
        iVar4 = local_68 + -1;
        puVar6 = local_70;
        if (local_68 == 0) {
          iVar4 = 0;
          puVar6 = &DAT_149dfb77a;
        }
        (**(code **)(*(longlong *)*plVar1 + 0x118))
                  ((longlong *)*plVar1,&DAT_14c761f24,iVar4 * 2,puVar6);
        if (local_70 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        FUN_1400b22c2(local_90,".\\Runtime/AVEncoder/Private/VideoEncoderInput.cpp");
        FUN_14093d9c4(&local_80,local_90);
        puVar6 = local_80;
        if (local_78 == 0) {
          puVar6 = &DAT_149dfb77a;
        }
        FUN_1400b22c2(&local_a0,"FVideoEncoderInputImpl");
        puVar5 = &DAT_149dfb77a;
        if (local_98 != 0) {
          puVar5 = local_a0;
        }
        local_d8 = (undefined4 *)CONCAT44(local_d8._4_4_,0xf6);
        FUN_140002266(&local_70,L"%s (%s:%d)",puVar5,puVar6);
        if (local_a0 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_80 != (undefined2 *)0x0) {
          FUN_1400020a8(local_80);
        }
        if (local_90[0] != 0) {
          FUN_1400020a8();
        }
        iVar4 = local_68 + -1;
        puVar6 = local_70;
        if (local_68 == 0) {
          iVar4 = 0;
          puVar6 = &DAT_149dfb77a;
        }
        (**(code **)(*(longlong *)*puVar2 + 0x28))
                  ((longlong *)*puVar2,&DAT_14c761f34,iVar4 * 2,puVar6);
        if (local_70 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        *(undefined4 *)(param_1 + 8) = 2;
        FUN_147e0cadc(param_1);
      }
    }
    else {
      bVar8 = false;
    }
  }
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return bVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437d3336 FUN_1437d3336 body=969 status=ok
// SIG undefined FUN_1437d3336(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_1437d3336(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  undefined1 auStack_f8 [32];
  int *local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  longlong *local_c0;
  int *local_b8;
  longlong *local_b0;
  undefined2 *local_a0;
  int local_98;
  longlong local_90 [2];
  undefined2 *local_80;
  int local_78;
  undefined2 *local_70;
  int local_68;
  int local_60 [2];
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  (**(code **)(*param_2 + 0x158))(param_2,&local_48);
  local_50 = (longlong *)0x0;
  iVar4 = CreateDXGIFactory(&DAT_14a349300);
  if (iVar4 != 0) {
    uVar7 = 0;
    goto LAB_1437d3478;
  }
  local_58 = (longlong *)0x0;
  iVar4 = (**(code **)(*local_50 + 0xd0))(local_50,local_48,&DAT_14a343ec0);
  if (iVar4 == 0) {
    local_60[1] = 0xb100;
    plVar1 = (longlong *)(param_1 + 0x40);
    plVar2 = (longlong *)(param_1 + 0x48);
    plVar3 = *(longlong **)(param_1 + 0x48);
    if (plVar3 != (longlong *)0x0) {
      *plVar2 = 0;
      (**(code **)(*plVar3 + 0x10))();
    }
    plVar3 = (longlong *)*plVar1;
    if (plVar3 != (longlong *)0x0) {
      *plVar1 = 0;
      (**(code **)(*plVar3 + 0x10))();
    }
    local_b8 = local_60;
    local_d8 = local_60 + 1;
    local_c8 = 7;
    local_d0 = 1;
    uVar7 = 0;
    local_c0 = plVar1;
    local_b0 = plVar2;
    iVar4 = D3D11CreateDevice(local_58,0,0,0);
    if (iVar4 == 0) {
      if (local_60[0] != 0xb100) {
        plVar3 = (longlong *)*plVar1;
        if (plVar3 != (longlong *)0x0) {
          *plVar1 = 0;
          (**(code **)(*plVar3 + 0x10))();
        }
        plVar1 = (longlong *)*plVar2;
        if (plVar1 != (longlong *)0x0) {
          *plVar2 = 0;
          (**(code **)(*plVar1 + 0x10))();
        }
        goto LAB_1437d33ce;
      }
      FUN_1400b22c2(local_90,".\\Runtime/AVEncoder/Private/VideoEncoderInput.cpp");
      FUN_14093d9c4(&local_80,local_90);
      puVar6 = local_80;
      puVar5 = local_80;
      if (local_78 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      FUN_1400b22c2(&local_a0,"FVideoEncoderInputImpl");
      puVar8 = &DAT_149dfb77a;
      if (local_98 != 0) {
        puVar8 = local_a0;
      }
      local_d8 = (int *)CONCAT44(local_d8._4_4_,0x18e);
      FUN_140002266(&local_70,L"%s (%s:%d)",puVar8,puVar5);
      if (local_a0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (puVar6 != (undefined2 *)0x0) {
        FUN_1400020a8(puVar6);
      }
      if (local_90[0] != 0) {
        FUN_1400020a8();
      }
      iVar4 = local_68 + -1;
      puVar6 = local_70;
      if (local_68 == 0) {
        iVar4 = 0;
        puVar6 = &DAT_149dfb77a;
      }
      (**(code **)(*(longlong *)*plVar1 + 0x118))
                ((longlong *)*plVar1,&DAT_14c761f64,iVar4 * 2,puVar6);
      if (local_70 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      FUN_1400b22c2(local_90,".\\Runtime/AVEncoder/Private/VideoEncoderInput.cpp");
      FUN_14093d9c4(&local_80,local_90);
      puVar6 = local_80;
      if (local_78 == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      FUN_1400b22c2(&local_a0,"FVideoEncoderInputImpl");
      puVar5 = &DAT_149dfb77a;
      if (local_98 != 0) {
        puVar5 = local_a0;
      }
      local_d8 = (int *)CONCAT44(local_d8._4_4_,399);
      FUN_140002266(&local_70,L"%s (%s:%d)",puVar5,puVar6);
      if (local_a0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_80 != (undefined2 *)0x0) {
        FUN_1400020a8(local_80);
      }
      if (local_90[0] != 0) {
        FUN_1400020a8();
      }
      iVar4 = local_68 + -1;
      puVar6 = local_70;
      if (local_68 == 0) {
        iVar4 = 0;
        puVar6 = &DAT_149dfb77a;
      }
      (**(code **)(*(longlong *)*plVar2 + 0x28))
                ((longlong *)*plVar2,&DAT_14c761f74,iVar4 * 2,puVar6);
      if (local_70 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      *(undefined4 *)(param_1 + 8) = 2;
      FUN_147e0cadc(param_1);
      uVar7 = CONCAT71((int7)((ulonglong)local_80 >> 8),1);
    }
  }
  else {
LAB_1437d33ce:
    uVar7 = 0;
  }
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
LAB_1437d3478:
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437d3700 FUN_1437d3700 body=259 status=ok
// SIG undefined FUN_1437d3700(void)

ulonglong FUN_1437d3700(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x158))(param_2,&local_20);
  local_28 = (longlong *)0x0;
  iVar2 = CreateDXGIFactory(&DAT_14a349300);
  if (iVar2 != 0) {
    uVar3 = 0;
    goto LAB_1437d37c0;
  }
  local_30 = (longlong *)0x0;
  iVar2 = (**(code **)(*local_28 + 0xd0))(local_28,local_20,&DAT_14a343ec0);
  if (iVar2 == 0) {
    plVar1 = *(longlong **)(param_1 + 0x50);
    if (plVar1 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x50) = 0;
      (**(code **)(*plVar1 + 0x10))();
    }
    iVar2 = Ordinal_101(local_30,0xc000,&DAT_14a349310,(undefined8 *)(param_1 + 0x50));
    if (iVar2 != 0) goto LAB_1437d37ae;
    *(undefined4 *)(param_1 + 8) = 3;
    FUN_147e0cadc(param_1);
    uVar3 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  }
  else {
LAB_1437d37ae:
    uVar3 = 0;
  }
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x10))();
  }
LAB_1437d37c0:
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437d3804 FUN_1437d3804 body=217 status=ok
// SIG undefined FUN_1437d3804(void)

void FUN_1437d3804(undefined8 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  *param_1 = &PTR_LAB_14ab40a80;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xf);
  EnterCriticalSection(lpCriticalSection);
  LeaveCriticalSection(lpCriticalSection);
  FUN_147e0dcbd(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_147e0dc74(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_147e0ca7e(param_1 + 0x14);
  DeleteCriticalSection(lpCriticalSection);
  if ((longlong *)param_1[10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[10] + 0x10))();
  }
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x10))();
  }
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[8] + 0x10))();
  }
  FUN_145c33f67(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1437d38de FUN_1437d38de body=263 status=ok
// SIG undefined FUN_1437d38de(void)

undefined8 * FUN_1437d38de(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x2d0,0x10);
  FUN_147e0cf8c(puVar1);
  *puVar1 = &PTR_FUN_14ab40bd0;
  puVar1[0x50] = param_1;
  puVar1[0x54] = 0;
  puVar1[0x51] = 0;
  puVar1[0x52] = 0;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  switch(*(undefined4 *)(param_1 + 8)) {
  case 1:
    *(undefined4 *)((longlong)puVar1 + 0xe4) = 1;
    *(undefined4 *)(puVar1 + 0x1a) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)((longlong)puVar1 + 0xd4) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(puVar1 + 0x1b) = *(undefined4 *)(param_1 + 0x3c);
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    break;
  case 2:
    *(undefined4 *)((longlong)puVar1 + 0xe4) = 2;
    puVar1[0x1e] = *(undefined8 *)(param_1 + 0x40);
    break;
  case 3:
    *(undefined4 *)((longlong)puVar1 + 0xe4) = 3;
    puVar1[0x2b] = *(undefined8 *)(param_1 + 0x50);
    break;
  case 4:
    *(undefined4 *)((longlong)puVar1 + 0xe4) = 4;
    puVar1[0x37] = *(undefined8 *)(param_1 + 0x58);
    break;
  case 5:
    *(undefined4 *)((longlong)puVar1 + 0xe4) = 5;
    puVar1[0x45] = *(undefined8 *)(param_1 + 0x70);
  }
  return puVar1;
}



// FUNCTION 1437d39e6 FUN_1437d39e6 body=477 status=ok
// SIG undefined FUN_1437d39e6(void)

longlong * FUN_1437d39e6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if (**(longlong **)(param_1 + 0xa8) != 0) {
    FUN_147e0ce02(param_1 + 0xa0,&local_48);
    plVar6 = plStack_40;
    goto LAB_1437d3ad5;
  }
  lVar7 = FUN_1437d38de(param_1);
  plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3 = plStack_40;
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14ab40cb0;
  plVar8[2] = lVar7;
  local_48 = lVar7;
  if (plVar8 == plStack_40) {
    plVar6 = plStack_40;
    if (plVar8 == (longlong *)0x0) goto LAB_1437d3ad5;
    LOCK();
    plVar3 = plVar8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_1437d3ad5;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    plVar6 = plStack_40;
    if (*piVar2 != 0) goto LAB_1437d3ad5;
    lVar7 = *plVar8;
  }
  else {
    plVar6 = plVar8;
    if (plStack_40 == (longlong *)0x0) goto LAB_1437d3ad5;
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_1437d3ad5;
    puVar5 = (undefined8 *)*plStack_40;
    plStack_40 = plVar8;
    (*(code *)*puVar5)(plVar3);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    plVar6 = plStack_40;
    if (*piVar2 != 0) goto LAB_1437d3ad5;
    lVar7 = *plVar3;
    plVar8 = plVar3;
  }
  (**(code **)(lVar7 + 0x10))(plVar8);
  plVar6 = plStack_40;
LAB_1437d3ad5:
  plStack_40 = plVar6;
  iVar4 = *(int *)(param_1 + 0xb8);
  *(uint *)(param_1 + 0xb8) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0xbc) < iVar4 + 1U) {
    FUN_147e0dee2((longlong *)(param_1 + 0xb0),iVar4);
  }
  lVar7 = *(longlong *)(param_1 + 0xb0);
  *(longlong *)(lVar7 + (longlong)iVar4 * 0x10) = local_48;
  *(longlong **)(lVar7 + 8 + (longlong)iVar4 * 0x10) = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
    UNLOCK();
  }
  iVar4 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x18) = iVar4 + 1;
  *(int *)(local_48 + 0x90) = iVar4;
  if (*(int *)(param_1 + 0x18) == 0) {
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  LOCK();
  *(int *)(local_48 + 0xa8) = *(int *)(local_48 + 0xa8) + 1;
  UNLOCK();
  *param_2 = local_48;
  param_2[1] = (longlong)plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
    UNLOCK();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  plVar6 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437d3bc4 FUN_1437d3bc4 body=521 status=ok
// SIG undefined FUN_1437d3bc4(void)

void FUN_1437d3bc4(longlong param_1,longlong param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x78);
  EnterCriticalSection(lpCriticalSection);
  if ((longlong)*(int *)(param_1 + 200) != 0) {
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0xc0) + 0x30);
    lVar10 = (longlong)*(int *)(param_1 + 200) * 0x50;
    do {
      if (plVar7[-6] == param_2) {
        pcVar4 = (code *)plVar7[-4];
        plVar11 = (longlong *)plVar7[-2];
        if ((longlong *)plVar7[-2] == (longlong *)0x0) {
          plVar11 = plVar7;
        }
        local_60 = param_2;
        uVar8 = (**(code **)(*plVar11 + 8))();
        (*pcVar4)(uVar8,&local_60);
        goto LAB_1437d3cb6;
      }
      plVar7 = plVar7 + 10;
      lVar10 = lVar10 + -0x50;
    } while (lVar10 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0xb8) != 0) {
    plVar7 = *(longlong **)(param_1 + 0xb0);
    lVar10 = (longlong)*(int *)(param_1 + 0xb8) << 4;
    do {
      lVar3 = *plVar7;
      plVar11 = (longlong *)plVar7[1];
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar11 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      if (lVar3 == param_2) {
        if (plVar7 != (longlong *)0x0) {
          local_60 = *plVar7;
          local_58 = (longlong *)plVar7[1];
          if (local_58 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_58 + 1) = (int)local_58[1] + 1;
            UNLOCK();
          }
          local_50 = &local_60;
          iVar6 = FUN_147e0df68(param_1 + 0xb0);
          if (0 < iVar6) {
            if ((*(int *)(param_2 + 0xe4) == *(int *)(param_1 + 8)) &&
               ((**(longlong **)(param_1 + 0xa8) == 0 ||
                (*(uint *)(param_1 + 0x10) <= *(uint *)(param_1 + 0xc))))) {
              puVar9 = (undefined8 *)FUN_14001cc68(0x18,0x10);
              *puVar9 = 0;
              puVar9[1] = local_60;
              puVar9[2] = local_58;
              if (local_58 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_58 + 1) = (int)local_58[1] + 1;
                UNLOCK();
              }
              if (puVar9 != (undefined8 *)0x0) {
                puVar5 = *(undefined8 **)(param_1 + 0xa0);
                *(undefined8 **)(param_1 + 0xa0) = puVar9;
                *puVar5 = puVar9;
              }
            }
            else {
              LeaveCriticalSection(lpCriticalSection);
              *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
            }
          }
          plVar7 = local_58;
          if (local_58 != (longlong *)0x0) {
            LOCK();
            plVar11 = local_58 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
              (**(code **)*local_58)(local_58);
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
        break;
      }
      plVar7 = plVar7 + 2;
      lVar10 = lVar10 + -0x10;
    } while (lVar10 != 0);
  }
LAB_1437d3cb6:
  LeaveCriticalSection(lpCriticalSection);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437d3dce FUN_1437d3dce body=861 status=ok
// SIG undefined FUN_1437d3dce(void)

void FUN_1437d3dce(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR__purecall_14ab40b40;
  if (*(char *)(param_1 + 0x1c) == '\x01') {
    if (param_1[0x17] != 0) {
      FUN_1400020a8();
    }
    if (param_1[0x18] != 0) {
      FUN_1400020a8();
    }
    if (param_1[0x19] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x1c) = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  if ((longlong *)param_1[0x1f] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1f] + 8))();
    (**(code **)(*(longlong *)param_1[0x1f] + 0x10))();
    (**(code **)(*(longlong *)param_1[0x1f] + 0x10))();
    param_1[0x1f] = 0;
  }
  if ((HANDLE)param_1[0x20] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[0x20]);
    param_1[0x20] = 0;
  }
  if ((param_1[0x1d] != 0) && (pcVar1 = (code *)param_1[0x22], pcVar1 != (code *)0x0)) {
    plVar3 = param_1 + 0x26;
    if ((longlong *)param_1[0x24] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x24];
    }
    local_28 = param_1[0x1d];
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(uVar2,&local_28);
  }
  if ((longlong *)param_1[0x2c] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x2c] + 8))();
    (**(code **)(*(longlong *)param_1[0x2c] + 0x10))();
    (**(code **)(*(longlong *)param_1[0x2c] + 0x10))();
    param_1[0x2c] = 0;
  }
  if ((param_1[0x2a] != 0) && (pcVar1 = (code *)param_1[0x2e], pcVar1 != (code *)0x0)) {
    plVar3 = param_1 + 0x32;
    if ((longlong *)param_1[0x30] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x30];
    }
    local_28 = param_1[0x2a];
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(uVar2,&local_28);
    param_1[0x2a] = 0;
  }
  if ((HANDLE)param_1[0x38] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[0x38]);
    param_1[0x38] = 0;
  }
  if (param_1[0x36] != 0) {
    pcVar1 = (code *)param_1[0x3a];
    plVar3 = param_1 + 0x3e;
    if ((longlong *)param_1[0x3c] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x3c];
    }
    local_28 = param_1[0x36];
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(uVar2,&local_28);
    param_1[0x36] = 0;
  }
  if (param_1[0x42] != 0) {
    pcVar1 = (code *)param_1[0x48];
    plVar3 = param_1 + 0x4c;
    if ((longlong *)param_1[0x4a] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x4a];
    }
    local_28 = param_1[0x42];
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(uVar2,&local_28);
  }
  if (param_1[0x46] != 0) {
    pcVar1 = (code *)param_1[10];
    plVar3 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0xc];
    }
    local_28 = param_1[0x46];
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(uVar2,&local_28);
  }
  if (param_1[0x48] != 0) {
    plVar3 = param_1 + 0x4c;
    if ((longlong *)param_1[0x4a] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x4a];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x3a] != 0) {
    plVar3 = param_1 + 0x3e;
    if ((longlong *)param_1[0x3c] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x3c];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x2e] != 0) {
    plVar3 = param_1 + 0x32;
    if ((longlong *)param_1[0x30] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x30];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x22] != 0) {
    plVar3 = param_1 + 0x26;
    if ((longlong *)param_1[0x24] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x24];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar3 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar3 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437d412c FUN_1437d412c body=528 status=ok
// SIG undefined FUN_1437d412c(void)

void FUN_1437d412c(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined2 *local_98;
  int local_90;
  longlong local_88 [2];
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(int *)(param_1 + 0xe4) == 2) && (*(longlong *)(param_1 + 0xe8) == 0)) {
    local_50 = (longlong *)0x0;
    iVar1 = (**(code **)*param_2)(param_2,&DAT_14ab40940);
    if ((-1 < iVar1) &&
       (iVar1 = (**(code **)(*local_50 + 0x40))(local_50,&local_58), local_58 != 0 && iVar1 == 0)) {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0xf0) + 0xe0))
                        (*(longlong **)(param_1 + 0xf0),local_58,&DAT_14ab40910,
                         (undefined8 *)(param_1 + 0xf8));
      if (iVar1 == 0) {
        FUN_1400b22c2(local_88,".\\Runtime/AVEncoder/Private/VideoEncoderInput.cpp");
        FUN_14093d9c4(&local_78,local_88);
        puVar3 = local_78;
        if (local_70 == 0) {
          puVar3 = &DAT_149dfb77a;
        }
        FUN_1400b22c2(&local_98,"FVideoEncoderInputFrame::SetTexture()");
        puVar4 = &DAT_149dfb77a;
        if (local_90 != 0) {
          puVar4 = local_98;
        }
        local_a8 = 0x3d2;
        FUN_140002266(&local_68,L"%s (%s:%d)",puVar4,puVar3);
        if (local_98 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_78 != (undefined2 *)0x0) {
          FUN_1400020a8(local_78);
        }
        if (local_88[0] != 0) {
          FUN_1400020a8();
        }
        plVar2 = *(longlong **)(param_1 + 0xf8);
        iVar1 = local_60 + -1;
        puVar3 = local_68;
        if (local_60 == 0) {
          iVar1 = 0;
          puVar3 = &DAT_149dfb77a;
        }
        (**(code **)(*plVar2 + 0x28))(plVar2,&DAT_14c761f84,iVar1 * 2,puVar3);
        if (local_68 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        *(undefined8 **)(param_1 + 0xe8) = param_2;
        FUN_147e0d20e(param_1 + 0x110,param_3);
      }
    }
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x10))();
    }
  }
  if (*param_3 != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437d433e FUN_1437d433e body=759 status=ok
// SIG undefined FUN_1437d433e(void)

void FUN_1437d433e(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  longlong *local_a0;
  undefined2 *local_98;
  int local_90;
  longlong local_88 [2];
  longlong *local_78;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0xe4) == 2) {
    local_50 = (longlong *)0x0;
    iVar1 = (**(code **)(*param_2 + 0x38))(param_2,&DAT_14a349310);
    plVar2 = local_50;
    if (iVar1 == 0) {
      LOCK();
      UNLOCK();
      iVar1 = DAT_14cb12bd4 + 1;
      DAT_14cb12bd4 = DAT_14cb12bd4 + 1;
      FUN_147e0c9f8(&local_70);
      puVar3 = &DAT_149dfb77a;
      if (local_68 != 0) {
        puVar3 = local_70;
      }
      FUN_140002266(&local_60,L"%s_FVideoEncoderInputFrame_%d",puVar3,iVar1);
      local_a8 = &DAT_149dfb77a;
      if (local_58 != 0) {
        local_a8 = local_60;
      }
      local_a0 = (longlong *)(param_1 + 0x100);
      iVar1 = (**(code **)(*plVar2 + 0xf8))(plVar2,param_2,0,0x10000000);
      if (local_60 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_70 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if ((iVar1 == 0) && (*(longlong *)(param_1 + 0x100) != 0)) {
        local_78 = (longlong *)0x0;
        iVar1 = (**(code **)**(undefined8 **)(param_1 + 0xf0))
                          (*(undefined8 **)(param_1 + 0xf0),&DAT_14ab40bc0);
        if (iVar1 == 0) {
          iVar1 = (**(code **)(*local_78 + 0x180))
                            (local_78,*(undefined8 *)(param_1 + 0x100),&DAT_14ab40910,
                             (undefined8 *)(param_1 + 0xf8));
          if (iVar1 == 0) {
            FUN_1400b22c2(local_88,".\\Runtime/AVEncoder/Private/VideoEncoderInput.cpp");
            FUN_14093d9c4(&local_70,local_88);
            puVar3 = local_70;
            if (local_68 == 0) {
              puVar3 = &DAT_149dfb77a;
            }
            FUN_1400b22c2(&local_98,"FVideoEncoderInputFrame::SetTexture()");
            puVar4 = &DAT_149dfb77a;
            if (local_90 != 0) {
              puVar4 = local_98;
            }
            local_a8 = (undefined2 *)CONCAT44(local_a8._4_4_,0x40f);
            FUN_140002266(&local_60,L"%s (%s:%d)",puVar4,puVar3);
            if (local_98 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (local_70 != (undefined2 *)0x0) {
              FUN_1400020a8(local_70);
            }
            if (local_88[0] != 0) {
              FUN_1400020a8();
            }
            plVar2 = *(longlong **)(param_1 + 0xf8);
            iVar1 = local_58 + -1;
            puVar3 = local_60;
            if (local_58 == 0) {
              iVar1 = 0;
              puVar3 = &DAT_149dfb77a;
            }
            (**(code **)(*plVar2 + 0x28))(plVar2,&DAT_14c761f94,iVar1 * 2,puVar3);
            if (local_60 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            *(longlong **)(param_1 + 0x150) = param_2;
            FUN_147e0d332(param_1 + 0x170,param_3);
          }
        }
        if (local_78 != (longlong *)0x0) {
          (**(code **)(*local_78 + 0x10))();
        }
      }
    }
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x10))();
    }
  }
  else {
    *(longlong **)(param_1 + 0x150) = param_2;
    *(longlong **)(param_1 + 0x160) = param_2;
    FUN_147e0d332(param_1 + 0x170,param_3);
  }
  if (*param_3 != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437d4636 FUN_1437d4636 body=293 status=ok
// SIG undefined FUN_1437d4636(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437d4636(void)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  DAT_14cb12b20 = 0;
  _DAT_14cb12b28 = 0;
  atexit((_func_5014 *)&LAB_1437d1e32);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cb12b40);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cb12b40,4000);
  atexit((_func_5014 *)&LAB_1437d1e43);
  _DAT_14cb12b68 = 1;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cb12b70);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cb12b70,4000);
  atexit((_func_5014 *)&LAB_1437d2c5a);
  DAT_14cb12b98 = 0;
  DAT_14cb12b9c = 0;
  DAT_14cb12bb0 = 0;
  _DAT_14cb12bb8 = 0;
  DAT_14cb12ba0 = 0;
  _DAT_14cb12ba8 = 0;
  atexit((_func_5014 *)&LAB_1437d2c68);
  _DAT_14cb12bc0 = 0x1267;
  DAT_14cb12bd4 = 0;
  local_48 = 0x800000014ab40be8;
  local_34 = 9;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_146415fcc(&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437d475c FUN_1437d475c body=69 status=ok
// SIG undefined FUN_1437d475c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437d475c(void)

{
  _DAT_14cb12be8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437d479e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb12bf0,1);
  return;
}



// FUNCTION 1437d47a1 FUN_1437d47a1 body=69 status=ok
// SIG undefined FUN_1437d47a1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437d47a1(void)

{
  _DAT_14cb12bf8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437d47e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb12c00,1);
  return;
}



// FUNCTION 1437d47e6 FUN_1437d47e6 body=69 status=ok
// SIG undefined FUN_1437d47e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437d47e6(void)

{
  _DAT_14cb12c08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437d4828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb12c10,1);
  return;
}



// FUNCTION 1437d482b FUN_1437d482b body=69 status=ok
// SIG undefined FUN_1437d482b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437d482b(void)

{
  _DAT_14cb12c18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437d486d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb12c20,1);
  return;
}



// FUNCTION 1437d4870 FUN_1437d4870 body=59 status=ok
// SIG undefined FUN_1437d4870(void)

void FUN_1437d4870(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cb12c30;
  if (DAT_14cb12c30 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cb12c30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001437d48a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1437d48ac FUN_1437d48ac body=124 status=ok
// SIG undefined FUN_1437d48ac(void)

ulonglong FUN_1437d48ac(longlong param_1,undefined8 param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if (*(int *)(param_1 + 0x50) == 0) {
    cVar1 = FUN_1437d492a(param_1);
    if (cVar1 == '\0') {
      uVar2 = 0;
      goto LAB_1437d48ea;
    }
  }
  FUN_147e0e89c(param_1 + 0x48,&local_20);
  uVar2 = CONCAT71((int7)((ulonglong)(param_1 + 0x48) >> 8),1);
LAB_1437d48ea:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437d492a FUN_1437d492a body=453 status=ok
// SIG undefined FUN_1437d492a(void)

ulonglong FUN_1437d492a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  longlong *plStack_80;
  undefined4 local_78;
  code *local_70;
  undefined4 local_68;
  LARGE_INTEGER local_60 [7];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(longlong *)(param_1 + 0xf0) == 0) {
    if ((*(longlong *)(param_1 + 0xd0) == 0) && (cVar4 = FUN_1437d4c88(param_1), cVar4 == '\0')) {
      uVar7 = 0;
    }
    else {
      QueryPerformanceCounter(local_60);
      auVar9._0_8_ = ((double)local_60[0].QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar9._8_8_ = 0;
      auVar9 = roundpd(auVar9,auVar9,1);
      *(longlong *)(param_1 + 0xf0) = (longlong)auVar9._0_8_;
      *(undefined8 *)(param_1 + 0xf8) = 0;
      *(undefined8 *)(param_1 + 0xe8) = 0;
      if (*(longlong *)(DAT_14cb0d2b0 + 0xf50) == 0) {
        local_88 = 0;
        plStack_80 = (longlong *)0x0;
        local_78 = 0xffffffff;
      }
      else {
        FUN_1479733cc(&local_88,*(longlong *)(DAT_14cb0d2b0 + 0xf50) + 0x90);
        plVar3 = plStack_80;
        if (plStack_80 != (longlong *)0x0) {
          *(undefined1 *)(param_1 + 0x108) = 0;
          uVar6 = (**(code **)(*plStack_80 + 0x88))(plStack_80);
          local_90 = *(longlong *)(param_1 + 0x10);
          if (local_90 == 0) {
            local_90 = 0;
            local_98 = 0;
          }
          else {
            iVar5 = *(int *)(local_90 + 8);
            local_98 = 0;
            do {
              if (iVar5 == 0) {
                local_90 = 0;
                goto LAB_1437d4ad3;
              }
              LOCK();
              iVar1 = *(int *)(local_90 + 8);
              bVar8 = iVar5 == iVar1;
              if (bVar8) {
                *(int *)(local_90 + 8) = iVar5 + 1;
                iVar1 = iVar5;
              }
              iVar5 = iVar1;
              UNLOCK();
            } while (!bVar8);
            local_98 = *(undefined8 *)(param_1 + 8);
          }
LAB_1437d4ad3:
          (**(code **)(*plVar3 + 0x90))(plVar3,&local_98,uVar6);
        }
      }
      lVar2 = *(longlong *)(DAT_14c98e618 + 0x20);
      local_70 = FUN_1437d5420;
      local_68 = 0;
      FUN_147e0ea66(local_60,param_1);
      FUN_14574c986(lVar2 + 0x78,&local_70,local_60);
      FUN_1401cb1ee(local_60);
      FUN_14051bf10(&local_88);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 1437d4af0 FUN_1437d4af0 body=117 status=ok
// SIG undefined FUN_1437d4af0(void)

void FUN_1437d4af0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  local_28 = &local_30;
  FUN_147e0e98c(param_1 + 0x48);
  iVar1 = *(int *)(param_1 + 0x50);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if (iVar1 < 1) {
    FUN_1437d4b66(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437d4b66 FUN_1437d4b66 body=289 status=ok
// SIG undefined FUN_1437d4b66(void)

void FUN_1437d4b66(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  lVar2 = DAT_14cb0d2b0;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    if (DAT_14cb0d2b0 != 0) {
      lVar4 = FUN_1413f862e();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
        if ((*(longlong *)(lVar2 + 0xf50) != 0) &&
           (((*(longlong *)(lVar2 + 0xf60) != 0 &&
             (plVar5 = (longlong *)FUN_1479735a4(*(longlong *)(lVar2 + 0xf50) + 0x90),
             plVar5 != (longlong *)0x0)) && (*(char *)(param_1 + 0x180) == '\0')))) {
          uVar6 = (**(code **)(*plVar5 + 0x88))(plVar5);
          local_28 = *(longlong *)(param_1 + 0x10);
          if (local_28 == 0) {
            local_28 = 0;
            local_30 = 0;
          }
          else {
            iVar3 = *(int *)(local_28 + 8);
            local_30 = 0;
            do {
              if (iVar3 == 0) {
                local_28 = 0;
                goto LAB_1437d4c6b;
              }
              LOCK();
              iVar1 = *(int *)(local_28 + 8);
              bVar7 = iVar3 == iVar1;
              if (bVar7) {
                *(int *)(local_28 + 8) = iVar3 + 1;
                iVar1 = iVar3;
              }
              iVar3 = iVar1;
              UNLOCK();
            } while (!bVar7);
            local_30 = *(undefined8 *)(param_1 + 8);
          }
LAB_1437d4c6b:
          (**(code **)(*plVar5 + 0xa0))(plVar5,&local_30,uVar6);
        }
        if (DAT_14c98e618 != 0) {
          FUN_14126849c(*(longlong *)(DAT_14c98e618 + 0x20) + 0x78,param_1);
        }
      }
    }
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437d4c88 FUN_1437d4c88 body=1943 status=ok
// SIG undefined FUN_1437d4c88(void)

ulonglong FUN_1437d4c88(longlong param_1)

{
  undefined8 **ppuVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined1 uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined7 uVar19;
  ulonglong uVar20;
  wchar_t *pwVar21;
  longlong lVar22;
  bool bVar23;
  undefined1 auStack_158 [32];
  undefined8 **local_138;
  undefined8 local_128;
  longlong local_120;
  undefined8 *local_118;
  uint local_110;
  undefined4 local_10c;
  uint local_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined1 local_f4;
  undefined4 local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 *local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_1400b22c2(&local_88,"Initial");
  if (local_88 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  uVar20 = CONCAT71((int7)((ulonglong)&local_88 >> 8),1);
  if (*(longlong *)(param_1 + 0xd0) != 0) goto LAB_1437d4ce1;
  FUN_1400b22c2(&local_88,&DAT_14ab409e0);
  plVar13 = (longlong *)FUN_147e0c044(&local_88);
  if (local_88 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (plVar13 != (longlong *)0x0) {
    FUN_1400b22c2(&local_88,&DAT_14ab409e0);
    (**(code **)(*plVar13 + 0x18))(plVar13,&local_118,&local_88);
    ppuVar1 = (undefined8 **)(param_1 + 0xa8);
    if (ppuVar1 == &local_118) {
LAB_1437d4da3:
      if (local_118 != (undefined8 *)0x0) {
        (**(code **)*local_118)(local_118,1);
      }
    }
    else {
      puVar6 = *ppuVar1;
      *ppuVar1 = local_118;
      local_118 = (undefined8 *)0x0;
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)(puVar6,1);
        goto LAB_1437d4da3;
      }
    }
    if (local_88 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    if (*ppuVar1 != (longlong *)0x0) {
      local_e8 = 0;
      uStack_e0 = 0;
      local_d8 = 0x20000bb80;
      local_d0 = 0x2ee00;
      cVar9 = (**(code **)(**ppuVar1 + 0x18))();
      if (cVar9 == '\0') {
LAB_1437d5087:
        bVar23 = false;
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x38))
                  (*(longlong **)(param_1 + 0xa8),param_1 + 0x18);
        FUN_1400b22c2(&local_88,"Audio encoder initialized");
        if (local_88 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        FUN_1400b22c2(&local_88,&DAT_14ab40fda);
        if ((undefined8 **)(param_1 + 0xb0) == &local_88) {
          if (local_88 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(param_1 + 0xb0) != 0) {
            FUN_1400020a8();
          }
          *(undefined8 **)(param_1 + 0xb0) = local_88;
          local_88 = (undefined8 *)0x0;
          *(undefined4 *)(param_1 + 0xb8) = (undefined4)uStack_80;
          *(undefined4 *)(param_1 + 0xbc) = uStack_80._4_4_;
        }
        piVar2 = (int *)(param_1 + 0xc4);
        *(undefined8 *)(param_1 + 0xc0) = 0;
        *(undefined8 *)(param_1 + 200) = 0;
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        FUN_1409887c6(&DAT_14c846b20,L"GameplayMediaEncoder.ResY=",piVar2);
        iVar12 = *piVar2;
        iVar10 = 0x2d0;
        uVar17 = 0x500;
        if ((iVar12 != 0) && (iVar12 != 0x2d0)) {
          if (iVar12 == 0x438) {
            iVar10 = 0x438;
            uVar17 = 0x780;
            goto LAB_1437d4f10;
          }
          pwVar21 = L"GameplayMediaEncoder.ResY can only have a value of 720 or 1080";
          uVar14 = 0xd3;
LAB_1437d5082:
          FUN_140033559(".\\Runtime/GameplayMediaEncoder/Private/GameplayMediaEncoder.cpp",uVar14,
                        pwVar21);
          goto LAB_1437d5087;
        }
LAB_1437d4f10:
        puVar3 = (uint *)(param_1 + 200);
        plVar13 = (longlong *)(param_1 + 0xc0);
        *(undefined4 *)plVar13 = uVar17;
        *piVar2 = iVar10;
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        FUN_1409887c6(&DAT_14c846b20,L"GameplayMediaEncoder.FPS=",puVar3);
        uVar11 = *puVar3;
        if (uVar11 == 0) {
          uVar11 = 0x3c;
          uVar16 = 0;
        }
        else {
          uVar18 = 0x3c;
          if (uVar11 < 0x3c) {
            uVar18 = uVar11;
          }
          uVar11 = 10;
          if (10 < uVar18) {
            uVar11 = uVar18;
          }
          uVar16 = 1;
        }
        puVar4 = (uint *)(param_1 + 0xcc);
        *(uint *)(param_1 + 200) = uVar11;
        *(undefined1 *)(param_1 + 0x109) = uVar16;
        *(undefined4 *)(param_1 + 0xcc) = 20000000;
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        FUN_1409887c6(&DAT_14c846b20,L"GameplayMediaEncoder.Bitrate=",puVar4);
        uVar11 = *puVar4;
        if (19999999 < uVar11) {
          uVar11 = 20000000;
        }
        local_108 = 1000000;
        if (1000000 < uVar11) {
          local_108 = uVar11;
        }
        *puVar4 = local_108;
        local_104 = 0xffffffff;
        uStack_100 = 0xffffffff;
        uStack_fc = 3;
        uStack_f8 = 3;
        local_f4 = 0;
        local_f0 = 2;
        local_118 = (undefined8 *)*plVar13;
        local_10c = 20000000;
        local_110 = *puVar3;
        if (DAT_14ca83900 != (longlong *)0x0) {
          iVar12 = (**(code **)(*DAT_14ca83900 + 0x28))();
          if (iVar12 == 4) {
            uVar14 = (**(code **)(*DAT_14ca83900 + 0x3b8))();
            FUN_147e0c76a(&local_88,uVar14,1);
          }
          else {
            uVar19 = (undefined7)((ulonglong)plVar13 >> 8);
            if (iVar12 == 3) {
              bVar23 = DAT_14ca84df4 == 0x10de;
              uVar14 = (**(code **)(*DAT_14ca83900 + 0x3b8))();
              FUN_147e0c644(&local_88,uVar14,1,CONCAT71(uVar19,bVar23) & 0xffffffff);
            }
            else {
              if (iVar12 != 2) goto LAB_1437d5087;
              bVar23 = DAT_14ca84df4 == 0x1002;
              uVar14 = (**(code **)(*DAT_14ca83900 + 0x3b8))();
              FUN_147e0c51e(&local_88,uVar14,1,CONCAT71(uVar19,bVar23) & 0xffffffff);
            }
          }
          plVar5 = uStack_80;
          *(undefined8 **)(param_1 + 0xd8) = local_88;
          local_88 = (undefined8 *)0x0;
          plVar13 = *(longlong **)(param_1 + 0xe0);
          if (uStack_80 != plVar13) {
            uStack_80 = (longlong *)0x0;
            *(longlong **)(param_1 + 0xe0) = plVar5;
            if (plVar13 == (longlong *)0x0) goto LAB_1437d5196;
            LOCK();
            plVar5 = plVar13 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar2 = (int *)((longlong)plVar13 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
              }
            }
          }
          plVar13 = uStack_80;
          if (uStack_80 != (longlong *)0x0) {
            LOCK();
            plVar5 = uStack_80 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
              (**(code **)*uStack_80)(uStack_80);
              LOCK();
              piVar2 = (int *)((longlong)plVar13 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
              }
            }
          }
        }
LAB_1437d5196:
        lVar15 = FUN_147e0c4d2();
        iVar12 = *(int *)(lVar15 + 0x20);
        if ((longlong)iVar12 == 0) goto LAB_1437d5087;
        ppuVar1 = (undefined8 **)(param_1 + 0xd0);
        lVar15 = *(longlong *)(lVar15 + 0x18);
        lVar22 = 0;
        do {
          if (*(int *)(lVar15 + 0xc + lVar22) == 1) {
            uVar14 = FUN_147e0c4d2();
            local_128 = *(undefined8 *)(param_1 + 0xd8);
            local_120 = *(longlong *)(param_1 + 0xe0);
            if (local_120 != 0) {
              LOCK();
              *(int *)(local_120 + 8) = *(int *)(local_120 + 8) + 1;
              UNLOCK();
            }
            local_138 = &local_118;
            FUN_147e0c84a(uVar14,&local_88,*(undefined4 *)(lVar15 + lVar22),&local_128);
            if (ppuVar1 != &local_88) {
              puVar6 = *ppuVar1;
              *ppuVar1 = local_88;
              local_88 = (undefined8 *)0x0;
              if (puVar6 == (undefined8 *)0x0) goto LAB_1437d51c6;
              (**(code **)*puVar6)(puVar6,1);
            }
            if (local_88 != (undefined8 *)0x0) {
              (**(code **)*local_88)(local_88,1);
            }
          }
LAB_1437d51c6:
          lVar22 = lVar22 + 0x30;
        } while ((longlong)iVar12 * 0x30 != lVar22);
        puVar6 = *ppuVar1;
        if (puVar6 == (undefined8 *)0x0) goto LAB_1437d5087;
        local_c8 = (undefined8 *)puVar6[4];
        uStack_80 = (longlong *)puVar6[5];
        local_b8 = (longlong *)puVar6[6];
        uStack_70 = puVar6[7];
        local_68 = puVar6[8];
        uStack_60 = puVar6[9];
        local_58 = puVar6[10];
        uStack_50 = puVar6[0xb];
        uVar7 = local_58;
        uVar8 = uStack_50;
        local_78 = local_b8;
        uVar14 = uStack_70;
        local_88 = local_c8;
        plVar13 = uStack_80;
        puVar6[10] = CONCAT44(uStack_94,local_98);
        puVar6[0xb] = CONCAT44(uStack_8c,uStack_90);
        puVar6[8] = &PTR_LAB_14ab41270;
        puVar6[9] = param_1;
        puVar6[6] = 0;
        puVar6[7] = CONCAT44(uStack_ac,uStack_b0);
        puVar6[4] = FUN_1437d6ba0;
        puVar6[5] = CONCAT44(uStack_bc,uStack_c0);
        uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
        uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
        local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
        uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
        local_98 = (undefined4)local_58;
        uStack_94 = local_58._4_4_;
        uStack_90 = (undefined4)uStack_50;
        uStack_8c = uStack_50._4_4_;
        local_a8 = local_68;
        uStack_a0 = uStack_60;
        uStack_b0 = (undefined4)uStack_70;
        uStack_ac = uStack_70._4_4_;
        uStack_c0 = (undefined4)uStack_80;
        uStack_bc = uStack_80._4_4_;
        uStack_80 = plVar13;
        uStack_70 = uVar14;
        local_58 = uVar7;
        uStack_50 = uVar8;
        if (local_c8 != (undefined8 *)0x0) {
          plVar13 = local_b8;
          if (local_b8 == (longlong *)0x0) {
            plVar13 = &local_a8;
          }
          (**(code **)(*plVar13 + 0x10))();
        }
        if (*ppuVar1 == (undefined8 *)0x0) {
          pwVar21 = L"Creating video encoder failed.";
          uVar14 = 0x13e;
          goto LAB_1437d5082;
        }
        FUN_1400b22c2(&local_88,"Video encoder initialized");
        if (local_88 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        bVar23 = true;
      }
      if (local_e8 != 0) {
        FUN_1400020a8();
      }
      if (bVar23) goto LAB_1437d4ce1;
    }
  }
  FUN_14164e6d6(param_1);
  uVar20 = 0;
LAB_1437d4ce1:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar20 & 0xffffffff;
}



// FUNCTION 1437d5420 FUN_1437d5420 body=5150 status=ok
// SIG undefined FUN_1437d5420(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437d5420(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong lVar9;
  code *pcVar10;
  undefined1 auVar11 [8];
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  longlong *plVar17;
  longlong lVar18;
  wchar_t *pwVar19;
  longlong lVar20;
  undefined8 uVar21;
  longlong *plVar22;
  longlong *plVar23;
  longlong *plVar24;
  undefined *puVar25;
  undefined1 auVar26 [4];
  longlong lVar27;
  byte bVar28;
  undefined8 *puVar29;
  wchar_t *_Dest;
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar30;
  undefined1 auVar31 [16];
  double dVar32;
  undefined1 auStack_408 [32];
  undefined8 *local_3e8;
  float local_3e0;
  undefined4 local_3d8;
  undefined4 local_3d0;
  undefined4 local_3c8;
  undefined4 local_3c0;
  undefined8 local_3b8;
  undefined1 *local_3b0;
  longlong **local_3a8;
  undefined4 local_3a0;
  longlong local_390;
  longlong local_388;
  LPCRITICAL_SECTION local_380;
  longlong *local_378;
  code *local_370;
  longlong *local_368;
  longlong *local_360;
  longlong local_358;
  undefined1 local_350 [8];
  undefined1 local_348 [8];
  undefined1 auStack_340 [8];
  code *local_338;
  longlong *local_330;
  undefined8 local_328;
  undefined **local_318;
  code *local_310;
  longlong *local_308;
  longlong local_300;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined1 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined1 local_250 [7];
  undefined1 auStack_249 [5];
  undefined1 auStack_244 [3];
  undefined1 auStack_241 [5];
  byte abStack_23c [3];
  undefined1 auStack_239 [2];
  undefined7 uStack_237;
  undefined4 uStack_230;
  uint uStack_22c;
  uint uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  uint uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined1 uStack_208;
  undefined1 uStack_207;
  undefined1 uStack_206;
  undefined1 uStack_205;
  undefined1 uStack_204;
  undefined1 local_203;
  undefined2 uStack_202;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined1 local_1f8 [16];
  undefined8 uStack_1e8;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined1 auStack_1d8 [12];
  undefined1 local_1cc [16];
  undefined1 local_1bc [16];
  undefined1 local_1ac [13];
  undefined3 uStack_19f;
  undefined1 auStack_19c [13];
  undefined1 local_188 [16];
  undefined1 local_178 [4];
  byte bStack_174;
  undefined3 uStack_173;
  uint local_170;
  undefined8 uStack_168;
  undefined1 local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  ushort local_88;
  undefined8 local_80;
  ushort local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_408;
  if (*(longlong *)(param_1 + 0xd0) == 0) goto LAB_1437d5528;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x80);
  EnterCriticalSection(lpCriticalSection);
  QueryPerformanceCounter((LARGE_INTEGER *)(auStack_239 + 1));
  auVar31._0_8_ =
       ((double)CONCAT71(uStack_237,auStack_239[1]) * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5
  ;
  auVar31._8_8_ = 0;
  auVar31 = roundpd(auVar31,auVar31,1);
  lVar27 = (longlong)auVar31._0_8_ - *(longlong *)(param_1 + 0xf0);
  if ((*(char *)(param_1 + 0x109) != '\x01') ||
     (dVar32 = (double)*(uint *)(param_1 + 200) * ((double)lVar27 / 10000000.0),
     uVar15 = (ulonglong)dVar32,
     *(longlong *)(param_1 + 0xe8) + 1U <=
     ((longlong)(dVar32 - 9.223372036854776e+18) & (longlong)uVar15 >> 0x3f | uVar15))) {
    local_380 = lpCriticalSection;
    FUN_147e0e56a(param_1);
    (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x20))(*(longlong **)(param_1 + 0xd8),&local_370)
    ;
    plVar23 = local_368;
    pcVar10 = local_370;
    *(undefined4 *)(local_370 + 0xac) = *(undefined4 *)(param_1 + 0xc0);
    *(undefined4 *)(local_370 + 0xb0) = *(undefined4 *)(param_1 + 0xc4);
    plVar24 = (longlong *)(param_1 + 0x130);
    auStack_239[1] = SUB81(local_370,0);
    uStack_237 = (undefined7)((ulonglong)local_370 >> 8);
    if (local_368 == (longlong *)0x0) {
      uStack_230 = 0;
      uStack_22c = 0;
    }
    else {
      LOCK();
      *(int *)(local_368 + 1) = (int)local_368[1] + 1;
      UNLOCK();
      uStack_230 = SUB84(local_368,0);
      uStack_22c = (uint)((ulonglong)local_368 >> 0x20);
      LOCK();
      *(int *)(local_368 + 1) = (int)local_368[1] + 1;
      UNLOCK();
      if (local_368 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_368 + 1) = (int)local_368[1] + 1;
        UNLOCK();
        LOCK();
        plVar22 = local_368 + 1;
        *(int *)plVar22 = (int)*plVar22 + -1;
        UNLOCK();
        if ((int)*plVar22 == 0) {
          (**(code **)*local_368)(local_368);
          LOCK();
          piVar1 = (int *)((longlong)plVar23 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar23 + 0x10))(plVar23);
          }
        }
      }
    }
    uVar12 = ((uint)((ulonglong)pcVar10 >> 0x14) & 0xffff ^ (uint)((ulonglong)pcVar10 >> 4)) *
             -0x7a143595;
    uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
    iVar13 = FUN_147e0f086(plVar24,uVar12 >> 0x10 ^ uVar12,auStack_239 + 1);
    plVar22 = (longlong *)CONCAT44(uStack_22c,uStack_230);
    if (plVar22 != (longlong *)0x0) {
      LOCK();
      plVar17 = plVar22 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
        (**(code **)*plVar22)(plVar22);
        LOCK();
        piVar1 = (int *)((longlong)plVar22 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
        }
      }
    }
    if (plVar23 != (longlong *)0x0) {
      LOCK();
      plVar22 = plVar23 + 1;
      *(int *)plVar22 = (int)*plVar22 + -1;
      UNLOCK();
      if ((int)*plVar22 == 0) {
        (**(code **)*plVar23)(plVar23);
        LOCK();
        piVar1 = (int *)((longlong)plVar23 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar23 + 0x10))(plVar23);
        }
      }
    }
    if (iVar13 == -1) {
      iVar13 = (**(code **)(*DAT_14ca83900 + 0x28))();
      uStack_21c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      uStack_22c = 0;
      uStack_228 = 0;
      uStack_224 = 0;
      uStack_220 = 0;
      uStack_1e8 = 0;
      local_1e0 = 0;
      uStack_1dc = 0;
      uStack_206 = 0;
      auStack_239[1] = 1;
      uStack_237 = 0x20200;
      uStack_205 = 2;
      uStack_204 = 0;
      uStack_214 = (undefined4)*(undefined8 *)(param_1 + 0xc0);
      uStack_210 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0xc0) >> 0x20);
      uStack_20c = 0x10001;
      uStack_208 = 1;
      uStack_207 = 1;
      uStack_230 = 1;
      uStack_218 = 0;
      local_203 = 0xff;
      local_200 = 0x2000;
      local_1f8 = ZEXT816(0x14ab411d6);
      if (iVar13 == 3) {
        (**(code **)(*DAT_14ca83900 + 0x1a0))
                  (DAT_14ca83900,&local_360,&DAT_14ca85100,auStack_239 + 1);
        pcVar10 = local_370;
        if (local_368 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_368 + 1) = (int)local_368[1] + 1;
          UNLOCK();
        }
        local_328 = 0;
        local_318 = &PTR_LAB_14ab41320;
        local_310 = local_370;
        local_308 = local_368;
        local_338 = FUN_1437d6dd8;
        local_300 = param_1;
        uVar16 = (**(code **)(*local_360 + 0x20))();
        FUN_1437d433e(pcVar10,uVar16,&local_338);
        local_348 = (undefined1  [8])&local_370;
        auStack_340 = (undefined1  [8])&local_360;
        FUN_147e0f3d4(plVar24,local_350);
        plVar23 = local_360;
        if (local_360 != (longlong *)0x0) {
          LOCK();
          puVar2 = (uint *)(local_360 + 1);
          uVar12 = *puVar2;
          *puVar2 = *puVar2 - 1;
          UNLOCK();
          if ((uVar12 & 0x3fffffff) == 1) {
            puVar2 = (uint *)(local_360 + 1);
            LOCK();
            uVar12 = *puVar2;
            *puVar2 = *puVar2 | 0x40000000;
            UNLOCK();
            if ((uVar12 >> 0x1e & 1) == 0) {
              bVar3 = *(byte *)((longlong)local_360 + 0xd);
              plVar17 = (longlong *)FUN_14001cc68(0x10,8);
              plVar17[1] = (longlong)plVar23;
              plVar23 = DAT_14ca843c0;
              plVar22 = DAT_14ca843c8;
              if ((bVar3 & 2) == 0) {
                do {
                  *plVar17 = (longlong)plVar23;
                  LOCK();
                  bVar30 = plVar23 != DAT_14ca843c0;
                  plVar22 = plVar17;
                  if (bVar30) {
                    plVar23 = DAT_14ca843c0;
                    plVar22 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar22;
                  UNLOCK();
                } while (bVar30);
              }
              else {
                do {
                  *plVar17 = (longlong)plVar22;
                  LOCK();
                  bVar30 = plVar22 != DAT_14ca843c8;
                  plVar23 = plVar17;
                  if (bVar30) {
                    plVar22 = DAT_14ca843c8;
                    plVar23 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar23;
                  UNLOCK();
                } while (bVar30);
              }
            }
          }
        }
      }
      else if (iVar13 == 2) {
        (**(code **)(*DAT_14ca83900 + 0x1a0))
                  (DAT_14ca83900,&local_360,&DAT_14ca85100,auStack_239 + 1);
        pcVar10 = local_370;
        if (local_368 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_368 + 1) = (int)local_368[1] + 1;
          UNLOCK();
        }
        local_328 = 0;
        local_318 = &PTR_LAB_14ab41300;
        local_310 = local_370;
        local_308 = local_368;
        local_338 = FUN_1437d6c90;
        local_300 = param_1;
        uVar16 = (**(code **)(*local_360 + 0x20))();
        FUN_1437d412c(pcVar10,uVar16,&local_338);
        local_348 = (undefined1  [8])&local_370;
        auStack_340 = (undefined1  [8])&local_360;
        FUN_147e0f3d4(plVar24,local_350);
        plVar23 = local_360;
        if (local_360 != (longlong *)0x0) {
          LOCK();
          puVar2 = (uint *)(local_360 + 1);
          uVar12 = *puVar2;
          *puVar2 = *puVar2 - 1;
          UNLOCK();
          if ((uVar12 & 0x3fffffff) == 1) {
            puVar2 = (uint *)(local_360 + 1);
            LOCK();
            uVar12 = *puVar2;
            *puVar2 = *puVar2 | 0x40000000;
            UNLOCK();
            if ((uVar12 >> 0x1e & 1) == 0) {
              bVar3 = *(byte *)((longlong)local_360 + 0xd);
              plVar17 = (longlong *)FUN_14001cc68(0x10,8);
              plVar17[1] = (longlong)plVar23;
              plVar23 = DAT_14ca843c0;
              plVar22 = DAT_14ca843c8;
              if ((bVar3 & 2) == 0) {
                do {
                  *plVar17 = (longlong)plVar23;
                  LOCK();
                  bVar30 = plVar23 != DAT_14ca843c0;
                  plVar22 = plVar17;
                  if (bVar30) {
                    plVar23 = DAT_14ca843c0;
                    plVar22 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar22;
                  UNLOCK();
                } while (bVar30);
              }
              else {
                do {
                  *plVar17 = (longlong)plVar22;
                  LOCK();
                  bVar30 = plVar22 != DAT_14ca843c8;
                  plVar23 = plVar17;
                  if (bVar30) {
                    plVar22 = DAT_14ca843c8;
                    plVar23 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar23;
                  UNLOCK();
                } while (bVar30);
              }
            }
          }
        }
      }
    }
    plVar23 = local_368;
    pcVar10 = local_370;
    *(longlong *)(local_370 + 0x98) = lVar27;
    auStack_239[1] = SUB81(local_370,0);
    uStack_237 = (undefined7)((ulonglong)local_370 >> 8);
    if (local_368 == (longlong *)0x0) {
      uStack_230 = 0;
      uStack_22c = 0;
    }
    else {
      LOCK();
      *(int *)(local_368 + 1) = (int)local_368[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_368 + 1) = (int)local_368[1] + 1;
      UNLOCK();
      uStack_230 = SUB84(local_368,0);
      uStack_22c = (uint)((ulonglong)local_368 >> 0x20);
      LOCK();
      *(int *)(local_368 + 1) = (int)local_368[1] + 1;
      UNLOCK();
      if (local_368 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_368 + 1) = (int)local_368[1] + 1;
        UNLOCK();
        LOCK();
        plVar22 = local_368 + 1;
        *(int *)plVar22 = (int)*plVar22 + -1;
        UNLOCK();
        if ((int)*plVar22 == 0) {
          (**(code **)*local_368)(local_368);
          LOCK();
          piVar1 = (int *)((longlong)plVar23 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar23 + 0x10))(plVar23);
          }
        }
      }
    }
    uVar12 = ((uint)((ulonglong)pcVar10 >> 0x14) & 0xffff ^ (uint)((ulonglong)pcVar10 >> 4)) *
             -0x7a143595;
    uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
    iVar13 = FUN_147e0f086(plVar24,uVar12 >> 0x10 ^ uVar12,auStack_239 + 1);
    if (iVar13 == -1) {
      lVar20 = 0;
    }
    else {
      lVar20 = (longlong)iVar13 * 0x20 + *plVar24;
    }
    plVar24 = (longlong *)CONCAT44(uStack_22c,uStack_230);
    if (plVar24 != (longlong *)0x0) {
      LOCK();
      plVar22 = plVar24 + 1;
      *(int *)plVar22 = (int)*plVar22 + -1;
      UNLOCK();
      if ((int)*plVar22 == 0) {
        (**(code **)*plVar24)(plVar24);
        LOCK();
        piVar1 = (int *)((longlong)plVar24 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
        }
      }
    }
    if (plVar23 != (longlong *)0x0) {
      LOCK();
      plVar24 = plVar23 + 1;
      *(int *)plVar24 = (int)*plVar24 + -1;
      UNLOCK();
      if ((int)*plVar24 == 0) {
        (**(code **)*plVar23)(plVar23);
        LOCK();
        piVar1 = (int *)((longlong)plVar23 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar23 + 0x10))(plVar23);
        }
      }
      LOCK();
      plVar24 = plVar23 + 1;
      *(int *)plVar24 = (int)*plVar24 + -1;
      UNLOCK();
      if ((int)*plVar24 == 0) {
        (**(code **)*plVar23)(plVar23);
        LOCK();
        piVar1 = (int *)((longlong)plVar23 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar23 + 0x10))(plVar23);
        }
      }
    }
    lVar18 = (**(code **)(*(longlong *)*param_3 + 8))();
    cVar4 = *(char *)(lVar18 + 0x33);
    lVar18 = (**(code **)(**(longlong **)(lVar20 + 0x10) + 8))();
    if (cVar4 == *(char *)(lVar18 + 0x33)) {
      plVar24 = (longlong *)*param_3;
      lVar18 = (**(code **)(*plVar24 + 8))(plVar24);
      iVar13 = *(int *)(lVar18 + 0x28);
      lVar18 = (**(code **)(*plVar24 + 8))(plVar24);
      iVar5 = *(int *)(lVar18 + 0x24);
      plVar24 = *(longlong **)(lVar20 + 0x10);
      lVar18 = (**(code **)(*plVar24 + 8))(plVar24);
      iVar6 = *(int *)(lVar18 + 0x28);
      lVar18 = (**(code **)(*plVar24 + 8))(plVar24);
      if ((iVar5 != *(int *)(lVar18 + 0x24)) || (iVar13 != iVar6)) goto LAB_1437d5bdb;
      uStack_230 = DAT_14c9a52a0;
      auStack_239[1] = (undefined1)DAT_14c9a5298;
      uStack_237 = (undefined7)((ulonglong)DAT_14c9a5298 >> 8);
      uStack_22c = (uint)DAT_14c9a5298;
      uStack_228 = (uint)((ulonglong)DAT_14c9a5298 >> 0x20);
      uStack_224 = DAT_14c9a52a0;
      uStack_218 = DAT_14c9a52a0;
      uStack_214 = 0;
      uStack_210 = 0;
      uStack_20c = 1;
      uStack_208 = 0;
      uStack_207 = 0;
      uStack_206 = 0;
      uStack_205 = 0;
      uStack_204 = 0;
      local_203 = 0;
      uStack_202 = 0;
      local_200 = 1;
      uStack_220 = uStack_22c;
      uStack_21c = uStack_228;
      FUN_1477f1eb1(&DAT_14ca85100,*param_3,*(undefined8 *)(lVar20 + 0x10));
      lpCriticalSection = local_380;
    }
    else {
LAB_1437d5bdb:
      auStack_239[1] = 0xb0;
      uStack_237 = 0x14a588c;
      uStack_230 = 8;
      uStack_22c = uStack_22c & 0xffffff00;
      uVar14 = FUN_14001a6c0(auStack_239 + 1,1);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1))
      {
        FUN_145762954(&DAT_14c874628);
        DAT_14c874a18 = 1;
        atexit(FUN_14278de47);
        _Init_thread_footer(&DAT_14c874a20);
      }
      local_378 = (longlong *)FUN_1401e3324(&DAT_14c874628,uVar14);
      local_338 = *(code **)(lVar20 + 0x10);
      lVar18 = 0x15;
      do {
        *(undefined8 *)(local_350 + lVar18 + 3) = 0;
        *(undefined8 *)(local_348 + lVar18 + 3) = 0;
        *(undefined4 *)(auStack_340 + lVar18 + 3) = 0xffffffff;
        *(undefined2 *)(auStack_340 + lVar18 + 7) = 0;
        lVar18 = lVar18 + 0x18;
      } while (lVar18 != 0xd5);
      local_264 = 0;
      local_278 = 0;
      uStack_270 = 0;
      local_268 = 0;
      local_260 = 0xffffffff;
      uStack_25c = 0xffffffff;
      uStack_258 = 0xffffffff;
      uStack_254 = 0xffffffff;
      _local_250 = 0;
      auStack_249._1_4_ = auStack_249._1_4_ & 0xffffff00;
      _auStack_244 = 0;
      auStack_241._1_3_ = 0;
      local_330 = (longlong *)0x0;
      local_328 = CONCAT26(local_328._6_2_,0x500ffffffff);
      auStack_239[1] = 0xff;
      uStack_237 = 0xffffffffffffff;
      uStack_230 = 0xffffffff;
      uStack_228 = (uint)local_338;
      uStack_224 = (undefined4)((ulonglong)local_338 >> 0x20);
      uStack_220 = CONCAT31(uStack_220._1_3_,1);
      uStack_21c = 0;
      uStack_218 = 0x1000;
      uStack_214 = 0;
      uStack_208 = 0;
      auStack_340._0_4_ = 1;
      local_348 = (undefined1  [8])(auStack_239 + 1);
      FUN_144760590(&DAT_14ca85100,local_348,0);
      _Dest = (wchar_t *)((longlong)DAT_14ca85100 + 1U & 0xfffffffffffffffe);
      pwVar19 = _Dest + 0xf;
      if (DAT_14ca85108 < pwVar19) {
        FUN_140023dd8(&DAT_14ca85100,0x20);
        _Dest = (wchar_t *)((longlong)DAT_14ca85100 + 1U & 0xfffffffffffffffe);
        pwVar19 = _Dest + 0xf;
      }
      DAT_14ca85100 = pwVar19;
      local_390 = lVar20;
      wcscpy(_Dest,L"CopyBackbuffer");
      puVar29 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      pwVar19 = (wchar_t *)(puVar29 + 0x23);
      if (DAT_14ca85108 < pwVar19) {
        FUN_140023dd8(&DAT_14ca85100,0x120);
        puVar29 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
        pwVar19 = (wchar_t *)(puVar29 + 0x23);
      }
      DAT_14ca85160 = DAT_14ca85160 + 1;
      DAT_14ca85100 = pwVar19;
      *DAT_14ca85130 = puVar29;
      DAT_14ca85130 = puVar29 + 1;
      puVar29[1] = 0;
      *puVar29 = &PTR_FUN_14a217b50;
      memcpy(puVar29 + 2,&local_338,0xe8);
      lVar20 = local_390;
      puVar29[0x1f] = 0;
      puVar29[0x20] = CONCAT44(_auStack_244,auStack_249._1_4_);
      *(uint *)((longlong)puVar29 + 0x107) = CONCAT31(auStack_241._1_3_,auStack_241[0]);
      puVar29[0x22] = _Dest;
      lVar18 = 0x11;
      do {
        *(undefined8 *)(local_250 + lVar18 + 7) = 0;
        *(undefined8 *)(auStack_244 + lVar18 + 3) = 0xffffffff00000000;
        *(undefined2 *)(auStack_239 + lVar18) = 0;
        lVar18 = lVar18 + 0x18;
      } while (lVar18 != 0xd1);
      _local_178 = _local_178 & 0xffffff0000000000;
      lVar18 = 0xd9;
      do {
        *(undefined8 *)(local_250 + lVar18 + 7) = 0;
        *(undefined8 *)(auStack_244 + lVar18 + 3) = 0xffffffff00000000;
        *(undefined2 *)(auStack_239 + lVar18) = 0;
        lVar18 = lVar18 + 0x18;
      } while (lVar18 != 0x199);
      local_b0 = 0;
      local_80 = 0;
      local_78 = local_78 & 0xff;
      local_a8 = (undefined1  [16])0x0;
      local_98 = (undefined1  [16])0x0;
      local_88 = local_88 & 0xff00;
      lVar18 = 0x15;
      do {
        if (*(longlong *)(local_350 + lVar18 + 3) == 0) {
          auVar26 = local_178;
          break;
        }
        *(longlong *)(local_250 + lVar18 + 3) = *(longlong *)(local_350 + lVar18 + 3);
        bVar3 = *(byte *)((longlong)&local_338 + lVar18);
        bVar28 = bVar3 >> 2;
        auStack_241[lVar18 + 4] = bVar28;
        abStack_23c[lVar18] = bVar3 & 3;
        *(undefined4 *)(auStack_244 + lVar18 + 3) = *(undefined4 *)(auStack_340 + lVar18 + 3);
        *(uint *)(auStack_249 + lVar18 + 4) = (uint)(byte)auStack_340[lVar18 + 7];
        auVar26 = (undefined1  [4])((int)local_178 + 1);
        bVar3 = bStack_174 | bVar28 == 2;
        _local_178 = CONCAT14(bVar3,auVar26);
        lVar9 = *(longlong *)(local_348 + lVar18 + 3);
        if (lVar9 != 0) {
          local_b0 = 1;
          uVar16 = *(undefined8 *)(auStack_249 + lVar18 + 4);
          *(undefined8 *)(local_188 + lVar18 + 3) = *(undefined8 *)(local_250 + lVar18 + 3);
          *(undefined8 *)(local_188 + lVar18 + 0xb) = uVar16;
          *(undefined8 *)(local_178 + lVar18 + 3) = *(undefined8 *)(auStack_241 + lVar18 + 4);
          *(longlong *)(local_188 + lVar18 + 3) = lVar9;
        }
        lVar18 = lVar18 + 0x18;
      } while (lVar18 != 0xd5);
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      local_a8 = ZEXT816(0);
      if (0 < (int)auVar26) {
        memcpy(&DAT_14ca851a8,auStack_239 + 1,(ulonglong)(uint)auVar26 * 0x18);
      }
      _DAT_14ca85268 = 0;
      uRam000000014ca85270 = 0;
      DAT_14ca8527a = 0;
      _DAT_14ca85278 = 0;
      DAT_14ca8527b = DAT_14ca8527b & 0xfc | 2;
      _DAT_14ca851a0 = (uint)auVar26;
      lVar18 = (**(code **)(**(longlong **)(lVar20 + 0x10) + 8))();
      uVar12 = *(uint *)(lVar18 + 0x28);
      lVar20 = (**(code **)(**(longlong **)(lVar20 + 0x10) + 8))();
      uVar7 = *(uint *)(lVar20 + 0x24);
      puVar29 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      pwVar19 = (wchar_t *)(puVar29 + 5);
      if (DAT_14ca85108 < pwVar19) {
        FUN_140023dd8(&DAT_14ca85100,0x30);
        puVar29 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
        pwVar19 = (wchar_t *)(puVar29 + 5);
      }
      DAT_14ca85160 = DAT_14ca85160 + 1;
      DAT_14ca85100 = pwVar19;
      *DAT_14ca85130 = puVar29;
      DAT_14ca85130 = puVar29 + 1;
      *(undefined1 (*) [16])(puVar29 + 1) = (undefined1  [16])0x0;
      *puVar29 = &PTR_LAB_14a1e7fc8;
      *(undefined4 *)(puVar29 + 3) = 0;
      *(float *)((longlong)puVar29 + 0x1c) = (float)uVar7;
      *(float *)(puVar29 + 4) = (float)uVar12;
      *(undefined4 *)((longlong)puVar29 + 0x24) = 0x3f800000;
      lVar20 = 0;
      uStack_1e8 = 0;
      local_1f8 = (undefined1  [16])0x0;
      uStack_208 = 0;
      uStack_207 = 0;
      uStack_206 = 0;
      uStack_205 = 0;
      uStack_204 = 0;
      local_203 = 0;
      uStack_202 = 0;
      local_200 = 0;
      uStack_1fc = 0;
      uStack_218 = 0;
      uStack_214 = 0;
      uStack_210 = 0;
      uStack_20c = 0;
      uStack_228 = 0;
      uStack_224 = 0;
      uStack_220 = 0;
      uStack_21c = 0;
      auStack_239[1] = 0;
      uStack_237 = 0;
      uStack_230 = 0;
      uStack_22c = 0;
      uStack_1dc = 0;
      auStack_1d8 = SUB1612((undefined1  [16])0x0,4);
      local_1cc = (undefined1  [16])0x0;
      local_1bc = (undefined1  [16])0x0;
      local_1ac = SUB1613((undefined1  [16])0x0,0);
      uStack_19f = 0;
      auStack_19c = SUB1613((undefined1  [16])0x0,3);
      local_188 = (undefined1  [16])0x0;
      _local_178 = 0;
      local_170 = 1;
      uStack_168 = 0;
      FUN_144b0e33a(&DAT_14ca85100,auStack_239 + 1);
      uStack_208 = (undefined1)DAT_14c9c0d50;
      uStack_207 = (undefined1)((ulonglong)DAT_14c9c0d50 >> 8);
      uStack_206 = (undefined1)((ulonglong)DAT_14c9c0d50 >> 0x10);
      uStack_205 = (undefined1)((ulonglong)DAT_14c9c0d50 >> 0x18);
      uStack_204 = (undefined1)((ulonglong)DAT_14c9c0d50 >> 0x20);
      local_203 = (undefined1)((ulonglong)DAT_14c9c0d50 >> 0x28);
      uStack_202 = (undefined2)((ulonglong)DAT_14c9c0d50 >> 0x30);
      local_200 = (undefined4)DAT_14c9c0db0;
      uStack_1fc = (undefined4)((ulonglong)DAT_14c9c0db0 >> 0x20);
      local_1f8._0_8_ = DAT_14c9c0d98;
      uVar16 = *(undefined8 *)
                (&DAT_14ca8c1f0 +
                (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
      uVar21 = FUN_1417ed4a6();
      FUN_1448e935e(uVar16,local_348,uVar21,0);
      FUN_1417ed4a6();
      auVar11 = local_348;
      local_388 = (longlong)auStack_340;
      uVar21 = FUN_145db0c8a();
      FUN_1448e935e(uVar16,local_348,uVar21,0);
      FUN_145db0c8a();
      auStack_239[1] = (undefined1)DAT_14ca94df8;
      uStack_237 = (undefined7)((ulonglong)DAT_14ca94df8 >> 8);
      if (auVar11 != (undefined1  [8])0x0) {
        lVar20 = *(longlong *)
                  (*(longlong *)(*(longlong *)(local_388 + 8) + 0x50) +
                  (longlong)*(int *)((longlong)auVar11 + 0xd4) * 8);
        if (lVar20 == 0) {
          lVar20 = FUN_1400bafc2(*(longlong *)(local_388 + 8),
                                 (longlong)*(int *)((longlong)auVar11 + 0xd4),1);
        }
      }
      lVar18 = local_390;
      uStack_230 = (undefined4)lVar20;
      uStack_22c = (uint)((ulonglong)lVar20 >> 0x20);
      if (local_348 == (undefined1  [8])0x0) {
        lVar20 = 0;
      }
      else {
        lVar20 = *(longlong *)
                  (*(longlong *)(*(longlong *)((longlong)auStack_340 + 8) + 0x50) +
                  (longlong)*(int *)((longlong)local_348 + 0xd4) * 8);
        if (lVar20 == 0) {
          lVar20 = FUN_1400bafc2(*(longlong *)((longlong)auStack_340 + 8),
                                 (longlong)*(int *)((longlong)local_348 + 0xd4),1);
        }
      }
      uStack_228 = (uint)lVar20;
      uStack_224 = (undefined4)((ulonglong)lVar20 >> 0x20);
      local_1e0 = 0;
      lVar20 = FUN_140028f18(&DAT_14ca85100);
      if ((lVar20 != 0) && ((local_170 & 0x10000000) == 0)) {
        _DAT_14ca85288 = CONCAT71(uStack_237,auStack_239[1]);
        DAT_14ca85290 = CONCAT44(uStack_22c,uStack_230);
        DAT_14ca85298 = CONCAT44(uStack_224,uStack_228);
        uRam000000014ca852a0 = CONCAT44(uStack_21c,uStack_220);
        _DAT_14ca852a8 = uStack_218;
        uRam000000014ca852ac = uStack_214;
        uRam000000014ca852b0 = uStack_210;
        uRam000000014ca852b4 = uStack_20c;
        puVar29 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
        pwVar19 = (wchar_t *)(puVar29 + 4);
        if (DAT_14ca85108 < pwVar19) {
          FUN_140023dd8(&DAT_14ca85100,0x28);
          puVar29 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
          pwVar19 = (wchar_t *)(puVar29 + 4);
        }
        DAT_14ca85160 = DAT_14ca85160 + 1;
        DAT_14ca85100 = pwVar19;
        *DAT_14ca85130 = puVar29;
        DAT_14ca85130 = puVar29 + 1;
        puVar29[1] = 0;
        *puVar29 = &PTR_LAB_14a37d348;
        puVar29[2] = lVar20;
        *(undefined4 *)(puVar29 + 3) = 0;
        *(undefined1 *)((longlong)puVar29 + 0x1c) = 1;
      }
      lVar20 = (**(code **)(**(longlong **)(lVar18 + 0x10) + 8))();
      lVar18 = (**(code **)(*(longlong *)*param_3 + 8))();
      puVar25 = &DAT_14c9c0dd0;
      if (*(int *)(lVar18 + 0x28) == *(int *)(lVar20 + 0x28) &&
          *(int *)(lVar20 + 0x24) == *(int *)(lVar18 + 0x24)) {
        puVar25 = &DAT_14c9c0d70;
      }
      local_350 = *(undefined1 (*) [8])(puVar25 + 0x10);
      if (local_348 == (undefined1  [8])0x0) {
        lVar20 = 0;
      }
      else {
        lVar20 = *(longlong *)
                  (*(longlong *)(*(longlong *)((longlong)auStack_340 + 8) + 0x50) +
                  (longlong)*(int *)((longlong)local_348 + 0xd4) * 8);
        if (lVar20 == 0) {
          lVar20 = FUN_1400bafc2(*(longlong *)((longlong)auStack_340 + 8),
                                 (longlong)*(int *)((longlong)local_348 + 0xd4),1);
        }
      }
      local_3e8 = param_3;
      FUN_1477faa35(&DAT_14ca85100,local_348,lVar20,local_350);
      lVar20 = local_390;
      local_360 = (longlong *)auVar11;
      local_358 = local_388;
      plVar24 = *(longlong **)(local_390 + 0x10);
      lVar18 = (**(code **)(*plVar24 + 8))(plVar24);
      uVar14 = *(undefined4 *)(lVar18 + 0x28);
      lVar18 = (**(code **)(*plVar24 + 8))(plVar24);
      uVar8 = *(undefined4 *)(lVar18 + 0x24);
      lVar18 = (**(code **)(**(longlong **)(lVar20 + 0x10) + 8))();
      uVar12 = *(uint *)(lVar18 + 0x28);
      lVar20 = (**(code **)(**(longlong **)(lVar20 + 0x10) + 8))();
      local_3b8 = CONCAT44(uVar14,uVar8);
      local_3a0 = 0;
      local_3b0 = &DAT_100000001;
      local_3c0 = 0x3f800000;
      local_3c8 = 0x3f800000;
      local_3d0 = 0;
      local_3d8 = 0;
      local_3e8 = (undefined8 *)CONCAT44(local_3e8._4_4_,(float)*(uint *)(lVar20 + 0x24));
      local_3e0 = (float)uVar12;
      local_3a8 = &local_360;
      (**(code **)(*local_378 + 0xd8))(local_378,&DAT_14ca85100,0,0);
      if ((DAT_14ca8527b & 8) != 0) {
        (**(code **)(*DAT_14ca83900 + 0x2a0))(DAT_14ca83900,&DAT_14ca85100,1);
        DAT_14ca8527b = DAT_14ca8527b & 0xf7;
      }
      puVar29 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      pwVar19 = (wchar_t *)(puVar29 + 2);
      if (DAT_14ca85108 < pwVar19) {
        FUN_140023dd8(&DAT_14ca85100,0x18);
        puVar29 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
        pwVar19 = (wchar_t *)(puVar29 + 2);
      }
      DAT_14ca85160 = DAT_14ca85160 + 1;
      DAT_14ca85100 = pwVar19;
      *DAT_14ca85130 = puVar29;
      DAT_14ca85130 = puVar29 + 1;
      puVar29[1] = 0;
      *puVar29 = &PTR_LAB_14a217b58;
      DAT_14ca8527b = DAT_14ca8527b & 0xfd;
      _DAT_14ca85278 = 0;
      auStack_239[1] = 0xff;
      uStack_237 = 0xffffffffffffff;
      uStack_230 = 0xffffffff;
      uStack_228 = (uint)*(undefined8 *)(local_390 + 0x10);
      uStack_224 = (undefined4)((ulonglong)*(undefined8 *)(local_390 + 0x10) >> 0x20);
      uStack_220 = CONCAT31(uStack_220._1_3_,1);
      uStack_21c = 0x1000;
      uStack_218 = 0x70;
      uStack_214 = 0;
      uStack_208 = 0;
      local_348 = (undefined1  [8])(auStack_239 + 1);
      auStack_340._0_4_ = 1;
      FUN_144760590(&DAT_14ca85100,local_348,0);
      lVar20 = _local_250;
      lpCriticalSection = local_380;
      if (_local_250 != 0) {
        LOCK();
        puVar2 = (uint *)(_local_250 + 8);
        uVar12 = *puVar2;
        *puVar2 = *puVar2 - 1;
        UNLOCK();
        if ((uVar12 & 0x3fffffff) == 1) {
          puVar2 = (uint *)(_local_250 + 8);
          LOCK();
          uVar12 = *puVar2;
          *puVar2 = *puVar2 | 0x40000000;
          UNLOCK();
          if ((uVar12 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(_local_250 + 0xd);
            plVar22 = (longlong *)FUN_14001cc68(0x10,8);
            plVar22[1] = lVar20;
            plVar24 = DAT_14ca843c0;
            plVar23 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar22 = (longlong)plVar24;
                LOCK();
                bVar30 = plVar24 != DAT_14ca843c0;
                plVar23 = plVar22;
                if (bVar30) {
                  plVar24 = DAT_14ca843c0;
                  plVar23 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar23;
                UNLOCK();
              } while (bVar30);
            }
            else {
              do {
                *plVar22 = (longlong)plVar23;
                LOCK();
                bVar30 = plVar23 != DAT_14ca843c8;
                plVar24 = plVar22;
                if (bVar30) {
                  plVar23 = DAT_14ca843c8;
                  plVar24 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar24;
                UNLOCK();
              } while (bVar30);
            }
          }
        }
      }
    }
    auStack_239[1] = 0;
    uStack_228 = 0;
    uStack_224 = 0;
    uStack_218 = 0;
    uStack_214 = 0;
    plVar24 = *(longlong **)(param_1 + 0xd0);
    local_338 = local_370;
    local_330 = local_368;
    if (local_368 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_368 + 1) = (int)local_368[1] + 1;
      UNLOCK();
    }
    (**(code **)(*plVar24 + 0x28))(plVar24,&local_338,auStack_239 + 1);
    *(longlong *)(param_1 + 0x100) = lVar27;
    *(longlong *)(param_1 + 0xe8) = *(longlong *)(param_1 + 0xe8) + 1;
    if (CONCAT44(uStack_224,uStack_228) != 0) {
      plVar24 = (longlong *)CONCAT44(uStack_214,uStack_218);
      if ((longlong *)CONCAT44(uStack_214,uStack_218) == (longlong *)0x0) {
        plVar24 = (longlong *)&uStack_208;
      }
      (**(code **)(*plVar24 + 0x10))();
    }
    if (local_368 != (longlong *)0x0) {
      LOCK();
      plVar24 = local_368 + 1;
      *(int *)plVar24 = (int)*plVar24 + -1;
      UNLOCK();
      if ((int)*plVar24 == 0) {
        (**(code **)*local_368)(local_368);
        LOCK();
        piVar1 = (int *)((longlong)local_368 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_368 + 0x10))(local_368);
        }
      }
    }
  }
  LeaveCriticalSection(lpCriticalSection);
LAB_1437d5528:
  if ((local_70 ^ (ulonglong)auStack_408) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437d6850 FUN_1437d6850 body=797 status=ok
// SIG undefined FUN_1437d6850(void)

void FUN_1437d6850(longlong param_1,undefined8 param_2,void *param_3,uint param_4,int param_5,
                  int param_6)

{
  float fVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined1 auStack_e8 [32];
  LARGE_INTEGER local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  longlong local_88;
  undefined8 uStack_80;
  int local_70;
  float local_68;
  void *local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_6 == 48000) {
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      local_58 = (void *)0x0;
      uStack_50 = (ulonglong)param_4;
      if (param_4 == 0) {
        uVar4 = 0;
      }
      else {
        FUN_145ca0cd4(&local_58,0);
        memcpy(local_58,param_3,(longlong)(int)param_4 << 2);
        uVar4 = uStack_50 & 0xffffffff;
      }
      _Src = local_58;
      local_88 = 0;
      uStack_80 = 0;
      local_c8.QuadPart = 0;
      uStack_c0 = 0;
      iVar2 = (int)uVar4 / param_5;
      local_b8 = CONCAT44(iVar2,(int)uVar4);
      uStack_b0 = CONCAT44(48000,param_5);
      local_a8 = CONCAT44(local_a8._4_4_,(float)iVar2 / 48000.0);
      FUN_14005ea14(&local_c8,uVar4);
      iVar2 = (int)uStack_c0;
      uStack_c0 = CONCAT44(uStack_c0._4_4_,(int)uStack_c0 + (uint)local_b8);
      if ((uint)(uStack_c0._4_4_ - iVar2) < (uint)local_b8) {
        FUN_14475e4ac(&local_c8);
      }
      memcpy((void *)local_c8,_Src,(longlong)(int)(uint)local_b8 << 2);
      FUN_147e0e4f8(&local_88,&local_c8);
      if ((void *)local_c8.QuadPart != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_70 != 2) {
        FUN_147e0e3c6(&local_88,2);
      }
      QueryPerformanceCounter(&local_c8);
      auVar6._0_8_ = ((double)local_c8.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar6._8_8_ = 0;
      auVar6 = roundpd(auVar6,auVar6,1);
      dVar9 = *(double *)(param_1 + 0xf8);
      dVar8 = (double)((longlong)auVar6._0_8_ - *(longlong *)(param_1 + 0xf0)) / 10000000.0;
      if (dVar9 < dVar8) {
        dVar9 = dVar8 + (double)(local_68 * 0.5);
        *(double *)(param_1 + 0xf8) = dVar9;
      }
      auVar7._0_8_ = dVar9 * 10000000.0 + 0.5;
      auVar7._8_8_ = 0;
      auVar6 = roundpd(auVar7,auVar7,1);
      local_c8.QuadPart = (LONGLONG)auVar6._0_8_;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_98 = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (double)local_68 * 10000000.0 + 0.5;
      auVar6 = roundpd(auVar5,auVar5,1);
      uStack_c0 = (longlong)auVar6._0_8_;
      if (0 < (int)uStack_80) {
        lVar3 = 0;
        do {
          fVar1 = *(float *)(local_88 + lVar3 * 4);
          if (1.0 <= fVar1) {
            fVar1 = 1.0;
          }
          if (fVar1 <= -1.0) {
            fVar1 = -1.0;
          }
          *(float *)(local_88 + lVar3 * 4) = fVar1;
          lVar3 = lVar3 + 1;
        } while (lVar3 < (int)uStack_80);
      }
      FUN_147e0e4f8(&local_b8,&local_88);
      (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x28))
                (*(longlong **)(param_1 + 0xa8),&local_c8);
      *(double *)(param_1 + 0xf8) = (double)local_68 + *(double *)(param_1 + 0xf8);
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      if (local_58 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else if (*(char *)(param_1 + 0x108) == '\0') {
    *(undefined1 *)(param_1 + 0x108) = 1;
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437d6b6e FUN_1437d6b6e body=49 status=ok
// SIG undefined FUN_1437d6b6e(void)

void FUN_1437d6b6e(void)

{
  FUN_147e0f743(DAT_14cb12c58,DAT_14cb12c60);
  if (DAT_14cb12c58 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1437d6ba0 FUN_1437d6ba0 body=150 status=ok
// SIG undefined FUN_1437d6ba0(void)

void FUN_1437d6ba0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  puVar2 = (undefined8 *)param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  uVar3 = *param_1;
  local_20 = puVar2;
  if (puVar2 == (undefined8 *)0x0) {
    FUN_147e0e68c(uVar3,&local_28,param_4);
  }
  else {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
    FUN_147e0e68c(uVar3,&local_28,param_4);
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



// FUNCTION 1437d6c72 FUN_1437d6c72 body=29 status=ok
// SIG undefined FUN_1437d6c72(void)

undefined8 FUN_1437d6c72(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437d6c90 FUN_1437d6c90 body=158 status=ok
// SIG undefined FUN_1437d6c90(void)

void FUN_1437d6c90(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = param_1[2];
  local_28 = *param_1;
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
    FUN_147e0f16a(lVar2 + 0x130);
  }
  else {
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
    local_20 = puVar3;
    FUN_147e0f16a(lVar2 + 0x130);
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar1 = (int *)((longlong)puVar3 + 0xc);
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



// FUNCTION 1437d6d84 FUN_1437d6d84 body=83 status=ok
// SIG undefined FUN_1437d6d84(void)

undefined8 * FUN_1437d6d84(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14ab41300;
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



// FUNCTION 1437d6dd8 FUN_1437d6dd8 body=158 status=ok
// SIG undefined FUN_1437d6dd8(void)

void FUN_1437d6dd8(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = param_1[2];
  local_28 = *param_1;
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
    FUN_147e0f16a(lVar2 + 0x130);
  }
  else {
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
    local_20 = puVar3;
    FUN_147e0f16a(lVar2 + 0x130);
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar1 = (int *)((longlong)puVar3 + 0xc);
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



// FUNCTION 1437d6ecc FUN_1437d6ecc body=83 status=ok
// SIG undefined FUN_1437d6ecc(void)

undefined8 * FUN_1437d6ecc(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14ab41320;
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



// FUNCTION 1437d6f1f FUN_1437d6f1f body=1227 status=ok
// SIG undefined FUN_1437d6f1f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437d6f1f(void)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  char *local_48;
  int local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = "UnixSocketPath";
  local_40 = 0xe;
  local_3c = 0;
  uVar2 = FUN_14001a6c0(&local_48,1);
  _DAT_14cb12be0 = (ulonglong)uVar2;
  local_48 = (char *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  local_40 = 2;
  *(undefined ***)local_48 = &PTR_LAB_149e020b0;
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
  *(longlong *)(local_48 + 0x10) = lVar3;
  *(undefined ***)local_48 = &PTR_FUN_149e062c0;
  *(code **)(local_48 + 0x18) = FUN_147e0e244;
  local_58 = 0;
  FUN_14152bcb8(&DAT_14cb12be8,L"GameplayMediaEncoder.Initialize",
                L"Constructs the audio/video encoding objects. Does not start encoding",&local_48);
  if (local_40 == 0) {
LAB_1437d703c:
    if (local_48 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_1437d703c;
  }
  atexit(FUN_1437d475c);
  local_48 = (char *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  local_40 = 2;
  *(undefined ***)local_48 = &PTR_LAB_149e020b0;
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
  *(longlong *)(local_48 + 0x10) = lVar3;
  *(undefined ***)local_48 = &PTR_FUN_149e062c0;
  *(code **)(local_48 + 0x18) = FUN_147e0e25a;
  local_58 = 0;
  FUN_14152bcb8(&DAT_14cb12bf8,L"GameplayMediaEncoder.Start",L"Starts encoding",&local_48);
  if (local_40 == 0) {
LAB_1437d711a:
    if (local_48 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_1437d711a;
  }
  atexit(FUN_1437d47a1);
  local_48 = (char *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  local_40 = 2;
  *(undefined ***)local_48 = &PTR_LAB_149e020b0;
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
  *(longlong *)(local_48 + 0x10) = lVar3;
  *(undefined ***)local_48 = &PTR_FUN_149e062c0;
  *(code **)(local_48 + 0x18) = FUN_147e0e270;
  local_58 = 0;
  FUN_14152bcb8(&DAT_14cb12c08,L"GameplayMediaEncoder.Stop",L"Stops encoding",&local_48);
  if (local_40 == 0) {
LAB_1437d71f8:
    if (local_48 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_1437d71f8;
  }
  atexit(FUN_1437d47e6);
  local_48 = (char *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  local_40 = 2;
  *(undefined ***)local_48 = &PTR_LAB_149e020b0;
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
  *(longlong *)(local_48 + 0x10) = lVar3;
  *(undefined ***)local_48 = &PTR_FUN_149e062c0;
  *(code **)(local_48 + 0x18) = FUN_147e0e286;
  local_58 = 0;
  FUN_14152bcb8(&DAT_14cb12c18,L"GameplayMediaEncoder.Shutdown",L"Releases all systems.",&local_48);
  if (local_40 != 0) {
    if (local_48 == (char *)0x0) goto LAB_1437d72e4;
    (*(code *)**(undefined8 **)local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
  }
  if (local_48 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_1437d72e4:
  atexit(FUN_1437d482b);
  DAT_14cb12c28 = 0;
  DAT_14cb12c30 = 0;
  atexit(FUN_1437d4870);
  DAT_14cb12c58 = 0;
  _DAT_14cb12c60 = 0;
  atexit(FUN_1437d6b6e);
  local_48 = (char *)0x800000014ab41224;
  local_34 = 0x14;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_14641610e(&local_48);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437d73ec FUN_1437d73ec body=69 status=ok
// SIG undefined FUN_1437d73ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437d73ec(void)

{
  _DAT_14cb12c70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437d742e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb12c78,1);
  return;
}



// FUNCTION 1437d7432 FUN_1437d7432 body=67 status=ok
// SIG undefined FUN_1437d7432(void)

void FUN_1437d7432(void)

{
  longlong lVar1;
  
  if (DAT_14cb12cc0 != 0) {
    FUN_1437d77be();
    lVar1 = DAT_14cb12cc0;
    if (DAT_14cb12cc0 != 0) {
      FUN_1437d7738(DAT_14cb12cc0);
      FUN_1400020a8(lVar1);
    }
    DAT_14cb12cc0 = 0;
  }
  return;
}



// FUNCTION 1437d7475 FUN_1437d7475 body=69 status=ok
// SIG undefined FUN_1437d7475(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437d7475(void)

{
  _DAT_14cb12c80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437d74b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb12c88,1);
  return;
}



// FUNCTION 1437d74ce FUN_1437d74ce body=69 status=ok
// SIG undefined FUN_1437d74ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437d74ce(void)

{
  _DAT_14cb12c90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437d7510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb12c98,1);
  return;
}



// FUNCTION 1437d7528 FUN_1437d7528 body=69 status=ok
// SIG undefined FUN_1437d7528(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437d7528(void)

{
  _DAT_14cb12ca0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437d756a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb12ca8,1);
  return;
}



// FUNCTION 1437d756e FUN_1437d756e body=383 status=ok
// SIG undefined FUN_1437d756e(void)

void FUN_1437d756e(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 **ppuVar1;
  int iVar2;
  wchar_t *_Str;
  undefined2 *puVar3;
  double dVar4;
  undefined4 uVar5;
  undefined1 auStack_a8 [32];
  undefined2 *local_88;
  int local_80;
  int local_7c;
  undefined1 *local_78 [2];
  undefined8 local_68;
  undefined **local_58;
  undefined *local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14cb12cc0 != 0) {
    if (2 < (int)param_1[1]) {
      FUN_146816218(param_3,2,
                    L"0-2 parameters expected: Save [filename=\"test.mp4\"] [max_duration_secs= ring buffer duration]"
                   );
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
    }
    FUN_1400b22c2(&local_88,"test.mp4");
    iVar2 = (int)param_1[1];
    uVar5 = 0;
    if (0 < iVar2) {
      ppuVar1 = (undefined2 **)*param_1;
      if (&local_88 != ppuVar1) {
        iVar2 = *(int *)(ppuVar1 + 1);
        puVar3 = *ppuVar1;
        local_80 = iVar2;
        if (iVar2 == 0 && local_7c == 0) {
          local_7c = 0;
        }
        else {
          FUN_1446dd670(&local_88,iVar2);
          if (iVar2 != 0) {
            memcpy(local_88,puVar3,(longlong)iVar2 * 2);
          }
        }
        iVar2 = (int)param_1[1];
      }
      if (iVar2 == 2) {
        if (*(int *)(*param_1 + 0x18) == 0) {
          _Str = L"";
        }
        else {
          _Str = *(wchar_t **)(*param_1 + 0x10);
        }
        dVar4 = wcstod(_Str,(wchar_t **)0x0);
        uVar5 = SUB84(dVar4,0);
      }
    }
    local_68 = 0;
    local_58 = &PTR_LAB_14ab41a50;
    local_50 = &DAT_1437d858e;
    local_78[0] = &LAB_147e0ffb4;
    puVar3 = local_88;
    if (local_80 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    FUN_1437d7aa4(DAT_14cb12cc0,puVar3,local_78,uVar5);
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437d76f3 FUN_1437d76f3 body=69 status=ok
// SIG undefined FUN_1437d76f3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437d76f3(void)

{
  _DAT_14cb12cb0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437d7735. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb12cb8,1);
  return;
}



// FUNCTION 1437d7738 FUN_1437d7738 body=133 status=ok
// SIG undefined FUN_1437d7738(void)

void FUN_1437d7738(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  FUN_1437d77be();
  if (*(longlong *)(param_1 + 0x90) != 0) {
    plVar2 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar2 = *(longlong **)(param_1 + 0xa0);
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (lVar1 != 0) {
    FUN_1411ee6a8(lVar1);
    FUN_1400020a8(lVar1);
  }
  FUN_145ec7706(param_1 + 0x18);
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != (longlong *)0x0) {
    if ((longlong *)*plVar2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar2 + 0x10))();
    }
    FUN_1400020a8(plVar2);
    return;
  }
  return;
}



// FUNCTION 1437d77be FUN_1437d77be body=100 status=ok
// SIG undefined FUN_1437d77be(void)

ulonglong FUN_1437d77be(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar3 = FUN_146244a94();
  FUN_1437d4af0(uVar3,param_1);
  LOCK();
  uVar1 = *(uint *)(param_1 + 8);
  *(uint *)(param_1 + 8) = 0;
  uVar4 = (ulonglong)uVar1;
  UNLOCK();
  if (*(longlong *)(param_1 + 0x80) != 0) {
    uVar4 = FUN_140f14a8a();
    lVar2 = *(longlong *)(param_1 + 0x80);
    if (lVar2 != 0) {
      *(undefined8 *)(param_1 + 0x80) = 0;
      FUN_1411ee6a8(lVar2);
      uVar4 = FUN_1400020a8(lVar2);
      return uVar4;
    }
  }
  return uVar4;
}



// FUNCTION 1437d7822 FUN_1437d7822 body=277 status=ok
// SIG undefined FUN_1437d7822(void)

undefined8 FUN_1437d7822(longlong param_1,double param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 8) == 0) {
    FUN_147e0f944(param_1 + 0x18);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = param_2 * 10000000.0 + 0.5;
    auVar4 = roundpd(auVar4,auVar4,1);
    *(longlong *)(param_1 + 0x18) = (longlong)auVar4._0_8_;
    QueryPerformanceCounter(&local_58);
    auVar5._0_8_ = ((double)local_58.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
    auVar5._8_8_ = 0;
    auVar4 = roundpd(auVar5,auVar5,1);
    *(longlong *)(param_1 + 0x68) = (longlong)auVar4._0_8_;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    uVar3 = FUN_146244a94();
    cVar2 = FUN_1437d48ac(uVar3,param_1);
    if (cVar2 != '\0') {
      LOCK();
      uVar1 = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(param_1 + 8) = 1;
      UNLOCK();
      uVar3 = CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
      goto LAB_1437d7853;
    }
  }
  uVar3 = 0;
LAB_1437d7853:
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437d7938 FUN_1437d7938 body=363 status=ok
// SIG undefined FUN_1437d7938(void)

ulonglong FUN_1437d7938(longlong param_1,char param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = (ulonglong)*(uint *)(param_1 + 8);
  if (*(uint *)(param_1 + 8) != 0) {
    uVar3 = *(ulonglong *)(param_1 + 0x70);
    if (param_2 == '\0') {
      if (uVar3 == 0) {
        QueryPerformanceCounter(&local_20);
        auVar5._0_8_ = ((double)local_20.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
        auVar5._8_8_ = 0;
        auVar5 = roundpd(auVar5,auVar5,1);
        uVar3 = (longlong)auVar5._0_8_ -
                (*(longlong *)(param_1 + 0x78) + *(longlong *)(param_1 + 0x68));
        if (*(ulonglong *)(param_1 + 0x70) != uVar3) goto LAB_1437d7a86;
      }
      QueryPerformanceCounter(&local_20);
      auVar6._0_8_ = ((double)local_20.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar6._8_8_ = 0;
      auVar5 = roundpd(auVar6,auVar6,1);
      *(longlong *)(param_1 + 0x78) =
           (longlong)auVar5._0_8_ - (*(longlong *)(param_1 + 0x70) + *(longlong *)(param_1 + 0x68));
      *(undefined8 *)(param_1 + 0x70) = 0;
      uVar2 = 1;
    }
    else {
      if (uVar3 != 0) goto LAB_1437d7a86;
      QueryPerformanceCounter(&local_20);
      auVar4._0_8_ = ((double)local_20.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar4._8_8_ = 0;
      auVar5 = roundpd(auVar4,auVar4,1);
      *(longlong *)(param_1 + 0x70) =
           (longlong)auVar5._0_8_ - (*(longlong *)(param_1 + 0x78) + *(longlong *)(param_1 + 0x68));
      uVar2 = 2;
    }
    LOCK();
    uVar1 = *(uint *)(param_1 + 8);
    *(uint *)(param_1 + 8) = uVar2;
    uVar3 = (ulonglong)uVar1;
    UNLOCK();
  }
LAB_1437d7a86:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437d7aa4 FUN_1437d7aa4 body=1130 status=ok
// SIG undefined FUN_1437d7aa4(void)

ulonglong FUN_1437d7aa4(undefined2 *param_1,wchar_t *param_2,longlong *param_3,longlong param_4)

{
  longlong lVar1;
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
  int iVar14;
  void *_Src;
  int iVar15;
  DWORD DVar16;
  longlong *plVar17;
  undefined8 uVar18;
  size_t sVar19;
  longlong lVar20;
  longlong *plVar21;
  int iVar22;
  ulonglong uVar23;
  undefined2 *puVar24;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined8 *local_f0;
  undefined4 local_e8;
  undefined2 *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  void *local_a8;
  uint local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 0x68) != 0)) {
    uVar23 = 0;
    goto LAB_1437d7e64;
  }
  plVar17 = (longlong *)FUN_1400dbadc();
  plVar21 = (longlong *)*plVar17;
  if (plVar21 == (longlong *)0x0) {
    plVar21 = (longlong *)FUN_140e92164();
    *plVar17 = (longlong)plVar21;
  }
  uVar18 = FUN_14047ac8c();
  FUN_1449b8608(&local_d8,uVar18,L"VideoCaptures/");
  if (param_2 == (wchar_t *)0x0) {
LAB_1437d7eca:
    local_98 = (code *)local_d8;
    local_d8 = (undefined2 *)0x0;
    uStack_90._0_4_ = (int)local_d0;
    local_d0 = (void *)0x0;
  }
  else {
    sVar19 = wcslen(param_2);
    if ((int)sVar19 == 0) goto LAB_1437d7eca;
    uStack_90._0_4_ = (int)local_d0;
    iVar15 = (int)sVar19 + (uint)((int)local_d0 == 0);
    local_98 = (code *)local_d8;
    local_d8 = (undefined2 *)0x0;
    iVar14 = local_d0._4_4_;
    local_d0 = (void *)0x0;
    iVar22 = iVar15 + (int)uStack_90;
    if (iVar22 < (int)uStack_90) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((longlong)iVar15);
    }
    if (iVar22 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar22);
    }
    if (iVar14 < iVar22) {
      FUN_1446f8c06(&local_98);
    }
    FUN_1400020e8(&local_98,param_2,sVar19 & 0xffffffff);
  }
  puVar24 = &DAT_149dfb77a;
  if ((int)uStack_90 != 0) {
    puVar24 = (undefined2 *)local_98;
  }
  (**(code **)(*plVar21 + 0x1f8))(plVar21,&local_a8,puVar24);
  if (local_98 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x68) = 1;
  UNLOCK();
  uVar18 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x4c);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uVar4 = *(undefined8 *)(param_1 + 0x54);
  lVar20 = *(longlong *)(param_1 + 0x58);
  uVar5 = *(undefined8 *)(param_1 + 0x5c);
  uVar6 = *(undefined8 *)(param_1 + 0x60);
  uVar7 = *(undefined8 *)(param_1 + 100);
  lVar1 = *param_3;
  lVar8 = param_3[1];
  lVar9 = param_3[2];
  lVar10 = param_3[3];
  lVar11 = param_3[4];
  lVar12 = param_3[5];
  lVar13 = param_3[7];
  *(longlong *)(param_1 + 0x60) = param_3[6];
  *(longlong *)(param_1 + 100) = lVar13;
  *(longlong *)(param_1 + 0x58) = lVar11;
  *(longlong *)(param_1 + 0x5c) = lVar12;
  *(longlong *)(param_1 + 0x50) = lVar9;
  *(longlong *)(param_1 + 0x54) = lVar10;
  *(longlong *)(param_1 + 0x48) = lVar1;
  *(longlong *)(param_1 + 0x4c) = lVar8;
  local_98._0_4_ = (undefined4)uVar18;
  local_98._4_4_ = (undefined4)((ulonglong)uVar18 >> 0x20);
  uStack_90._0_4_ = (int)uVar2;
  uStack_90._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_88._0_4_ = (undefined4)uVar3;
  local_88._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_80._0_4_ = (undefined4)uVar4;
  uStack_80._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_78._0_4_ = (undefined4)lVar20;
  local_78._4_4_ = (undefined4)((ulonglong)lVar20 >> 0x20);
  uStack_70._0_4_ = (undefined4)uVar5;
  uStack_70._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  local_68._0_4_ = (undefined4)uVar6;
  local_68._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  uStack_60._0_4_ = (undefined4)uVar7;
  uStack_60._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  *(undefined4 *)(param_3 + 6) = (undefined4)local_68;
  *(undefined4 *)((longlong)param_3 + 0x34) = local_68._4_4_;
  *(undefined4 *)(param_3 + 7) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)param_3 + 0x3c) = uStack_60._4_4_;
  *(undefined4 *)(param_3 + 4) = (undefined4)local_78;
  *(undefined4 *)((longlong)param_3 + 0x24) = local_78._4_4_;
  *(undefined4 *)(param_3 + 5) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)param_3 + 0x2c) = uStack_70._4_4_;
  *(undefined4 *)(param_3 + 2) = (undefined4)local_88;
  *(undefined4 *)((longlong)param_3 + 0x14) = local_88._4_4_;
  *(undefined4 *)(param_3 + 3) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)param_3 + 0x1c) = uStack_80._4_4_;
  *(undefined4 *)param_3 = (undefined4)local_98;
  *(undefined4 *)((longlong)param_3 + 4) = local_98._4_4_;
  *(int *)(param_3 + 1) = (int)uStack_90;
  *(undefined4 *)((longlong)param_3 + 0xc) = uStack_90._4_4_;
  local_98 = (code *)uVar18;
  uStack_90 = uVar2;
  local_88 = (longlong *)uVar3;
  uStack_80 = uVar4;
  local_78 = lVar20;
  uStack_70 = uVar5;
  local_68 = uVar6;
  uStack_60 = uVar7;
  if (((*(longlong **)(param_1 + 0x40) != (longlong *)0x0) &&
      (lVar20 = **(longlong **)(param_1 + 0x40), lVar20 != 0)) &&
     (*(longlong *)(lVar20 + 0xb0) != 0)) {
    DVar16 = GetCurrentThreadId();
    if (DVar16 != *(DWORD *)(*(longlong *)(lVar20 + 0xb0) + 0x34)) {
      FUN_140f14a8a(*(undefined8 *)(param_1 + 0x40));
    }
  }
  lVar20 = FUN_14001cc68(0x10,0x10);
  _Src = local_a8;
  local_b0 = 0;
  local_b8 = 0xffffffffffffffff;
  local_d0 = (void *)0x0;
  local_c8 = CONCAT44(local_c8._4_4_,local_a0);
  local_d8 = param_1;
  if ((longlong)(int)local_a0 == 0) {
    local_c8 = (ulonglong)local_a0;
  }
  else {
    FUN_1446dd670(&local_d0,local_a0,0);
    memcpy(local_d0,_Src,(longlong)(int)local_a0 * 2);
  }
  local_98 = (code *)0x0;
  local_c0 = param_4;
  local_88 = (longlong *)FUN_14001cc68(0x28,8);
  *local_88 = (longlong)&PTR_LAB_14ab41a70;
  local_88[1] = (longlong)local_d8;
  local_88[2] = (longlong)local_d0;
  local_d0 = (void *)0x0;
  *(undefined4 *)(local_88 + 3) = (undefined4)local_c8;
  *(undefined4 *)((longlong)local_88 + 0x1c) = local_c8._4_4_;
  local_c8 = 0;
  local_88[4] = local_c0;
  if (local_88 + 1 != (longlong *)0x0) {
    local_98 = FUN_1437d8590;
  }
  local_f0 = &local_b8;
  local_e8 = 1;
  local_f8 = 0;
  FUN_1411b0d90(lVar20,L"Highlight Saving",&local_98,0);
  lVar1 = *(longlong *)(param_1 + 0x40);
  if ((lVar1 != lVar20) && (*(longlong *)(param_1 + 0x40) = lVar20, lVar1 != 0)) {
    FUN_1411ee6a8(lVar1);
    FUN_1400020a8(lVar1);
  }
  if (local_98 != (code *)0x0) {
    plVar21 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar21 = &local_78;
    }
    (**(code **)(*plVar21 + 0x10))();
  }
  if (local_d0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_a8 != (void *)0x0) {
    FUN_1400020a8();
  }
  uVar23 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
LAB_1437d7e64:
  if (*param_3 != 0) {
    plVar21 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar21 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar21 + 0x10))(plVar21);
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar23 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437d7f10 FUN_1437d7f10 body=373 status=ok
// SIG undefined FUN_1437d7f10(void)

void FUN_1437d7f10(longlong param_1,char param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar1 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') {
      return;
    }
    bVar1 = DAT_14c8442b8 & 1;
  }
  if (bVar1 != 0) {
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x70);
  if (param_2 == '\0') {
    if (lVar4 == 0) goto LAB_1437d7fc9;
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  else {
    if (lVar4 != 0) goto LAB_1437d7fc9;
    lVar2 = FUN_14001cc68(0xe0,0x10);
    FUN_1464162f4(lVar2);
    lVar4 = *(longlong *)(param_1 + 0x70);
    if ((lVar4 == lVar2) || (*(longlong *)(param_1 + 0x70) = lVar2, lVar4 == 0)) goto LAB_1437d7fc9;
  }
  FUN_1437d7738(lVar4);
  FUN_1400020a8(lVar4);
LAB_1437d7fc9:
  puVar3 = *(undefined8 **)(param_1 + 0x80);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN_14001cc68(8,0x10);
    *puVar3 = 0;
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      *(undefined8 **)(param_1 + 0x80) = puVar3;
    }
  }
  if (param_2 == '\0') {
    FUN_1464164ca(puVar3);
    return;
  }
  FUN_145ee9dee();
  return;
}



// FUNCTION 1437d8090 FUN_1437d8090 body=322 status=ok
// SIG undefined FUN_1437d8090(void)

ulonglong FUN_1437d8090(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar4 = (**(code **)(*param_1 + 0x10))();
  if ((cVar4 == '\0') || ((int)param_1[4] != 0)) {
LAB_1437d80c2:
    uVar5 = 0;
  }
  else {
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    *(undefined4 *)(param_1 + 5) = *param_3;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar1;
    *(undefined4 *)(param_1 + 6) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x34) = uVar3;
    param_1[0xb] = 0;
    FUN_1400b22c2(&local_38,"recording");
    if (param_1 + 7 == &local_38) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[7] != 0) {
        FUN_1400020a8();
      }
      param_1[7] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 8) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x44) = local_2c;
    }
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    if (param_2 != 0) {
      FUN_14020fad6(param_1 + 7,param_2);
    }
    FUN_147e0fd94(param_1);
    if (*(int *)(param_1[0xe] + 8) == 0) {
      cVar4 = FUN_1437d7822(param_1[0xe],
                            SUB84(((double)CONCAT44(0x43300000,(int)param_1[5]) - 4503599627370496.0
                                  ) + ((double)CONCAT44(0x45300000,
                                                        (int)((ulonglong)param_1[5] >> 0x20)) -
                                      1.9342813113834067e+25),0));
      if (cVar4 == '\0') goto LAB_1437d80c2;
    }
    uVar5 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    FUN_1437d7938(param_1[0xe],1);
    LOCK();
    *(undefined4 *)(param_1 + 4) = 4;
    UNLOCK();
    if ((char)param_1[6] == '\x01') {
      (**(code **)(*param_1 + 0x20))(param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437d81d4 FUN_1437d81d4 body=157 status=ok
// SIG undefined FUN_1437d81d4(void)

void FUN_1437d81d4(longlong param_1)

{
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0x20) == 4) {
    if (*(int *)(*(longlong *)(param_1 + 0x70) + 8) == 0) {
      FUN_1437d7822(*(undefined8 *)(param_1 + 0x70),
                    SUB84(((double)CONCAT44(0x43300000,(int)*(undefined8 *)(param_1 + 0x28)) -
                          4503599627370496.0) +
                          ((double)CONCAT44(0x45300000,
                                            (int)((ulonglong)*(undefined8 *)(param_1 + 0x28) >> 0x20
                                                 )) - 1.9342813113834067e+25),0));
    }
    if (*(int *)(*(longlong *)(param_1 + 0x70) + 8) == 2) {
      FUN_1437d7938(*(undefined8 *)(param_1 + 0x70),0);
    }
    LOCK();
    *(undefined4 *)(param_1 + 0x20) = 2;
    UNLOCK();
    QueryPerformanceCounter(&local_20);
    *(LARGE_INTEGER *)(param_1 + 0x60) = local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437d8272 FUN_1437d8272 body=105 status=ok
// SIG undefined FUN_1437d8272(void)

int FUN_1437d8272(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 2) {
    QueryPerformanceCounter(&local_20);
    *(longlong *)(param_1 + 0x68) =
         *(longlong *)(param_1 + 0x68) + (local_20.QuadPart - *(longlong *)(param_1 + 0x60));
    FUN_1437d7938(*(undefined8 *)(param_1 + 0x70),1);
    LOCK();
    iVar1 = *(int *)(param_1 + 0x20);
    *(int *)(param_1 + 0x20) = 4;
    UNLOCK();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437d82dc FUN_1437d82dc body=115 status=ok
// SIG undefined FUN_1437d82dc(void)

undefined8 FUN_1437d82dc(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar6;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  QueryPerformanceCounter(&local_20);
  lVar1 = (local_20.QuadPart - *(longlong *)(param_1 + 0x60)) + *(longlong *)(param_1 + 0x68);
  auVar3._8_4_ = (int)((ulonglong)lVar1 >> 0x20);
  auVar3._0_8_ = lVar1;
  auVar3._12_4_ = 0x45300000;
  dVar2 = (double)CONCAT44(0x43300000,(int)lVar1) - 4503599627370496.0;
  dVar6 = auVar3._8_8_ - 1.9342813113834067e+25;
  auVar4._8_8_ = dVar2 + dVar6;
  auVar4._0_8_ = (dVar2 + dVar6) * DAT_14c83f420;
  auVar5._4_12_ = auVar4._4_12_;
  auVar5._0_4_ = (float)auVar4._0_8_;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return auVar5._0_8_;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437d8350 FUN_1437d8350 body=310 status=ok
// SIG undefined FUN_1437d8350(void)

ulonglong FUN_1437d8350(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                       byte param_5)

{
  uint uVar1;
  void *_Src;
  ulonglong uVar2;
  undefined2 *puVar3;
  undefined8 unaff_RBX;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  code *local_78 [2];
  undefined8 local_68;
  undefined **local_58;
  longlong local_50;
  byte local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x20);
  if (*(uint *)(param_1 + 0x20) != 0) {
    if (param_2 == '\0') {
      local_88 = (void *)0x0;
      local_80 = *(int *)(param_1 + 0x50);
      lVar4 = (longlong)local_80;
      _Src = *(void **)(param_1 + 0x48);
      if (lVar4 == 0) {
        local_7c = 0;
      }
      else {
        FUN_1446dd670(&local_88,local_80,0);
        memcpy(local_88,_Src,lVar4 * 2);
      }
      local_98 = 0;
      uVar2 = FUN_1437d8488(param_1,0,
                            CONCAT71((int7)((ulonglong)unaff_RBX >> 8),
                                     (param_5 ^ 1) & *(byte *)(param_1 + 0x31)) & 0xffffffff,
                            &local_88);
    }
    else {
      local_68 = 0;
      local_58 = &PTR_LAB_14ab41b20;
      local_48 = param_5;
      local_78[0] = FUN_1437d9194;
      if (*(int *)(param_1 + 0x50) == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      else {
        puVar3 = *(undefined2 **)(param_1 + 0x48);
      }
      local_50 = param_1;
      uVar2 = FUN_1437d7aa4(*(undefined8 *)(param_1 + 0x70),puVar3,local_78,
                            SUB84(((double)CONCAT44(0x43300000,(int)*(undefined8 *)(param_1 + 0x28))
                                  - 4503599627370496.0) +
                                  ((double)CONCAT44(0x45300000,
                                                    (int)((ulonglong)*(undefined8 *)(param_1 + 0x28)
                                                         >> 0x20)) - 1.9342813113834067e+25),0));
      if ((char)uVar2 != '\0') {
        LOCK();
        uVar1 = *(uint *)(param_1 + 0x20);
        *(uint *)(param_1 + 0x20) = 5;
        uVar2 = (ulonglong)uVar1;
        UNLOCK();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437d8488 FUN_1437d8488 body=113 status=ok
// SIG undefined FUN_1437d8488(void)

ulonglong FUN_1437d8488(longlong param_1,undefined4 param_2,char param_3,longlong *param_4,
                       char param_5)

{
  uint uVar1;
  ulonglong uVar2;
  
  LOCK();
  *(undefined4 *)(param_1 + 0x20) = 0;
  UNLOCK();
  if (param_3 == '\0') {
    uVar2 = FUN_1437d77be(*(undefined8 *)(param_1 + 0x70));
  }
  else {
    FUN_147e0fd94(param_1);
    LOCK();
    uVar1 = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x20) = 2;
    uVar2 = (ulonglong)uVar1;
    UNLOCK();
  }
  if (param_5 != '\0') {
    uVar2 = FUN_1468099c8(param_1 + 8,param_2,param_4);
  }
  if (*param_4 != 0) {
    uVar2 = FUN_1400020a8();
    return uVar2;
  }
  return uVar2;
}



// FUNCTION 1437d84fa FUN_1437d84fa body=147 status=ok
// SIG undefined FUN_1437d84fa(void)

void FUN_1437d84fa(longlong param_1)

{
  uint uVar1;
  void *_Dst;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  ulonglong uVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  uVar1 = *(uint *)(param_1 + 0x40);
  _Dst = *(void **)(param_1 + 0x38);
  uVar6 = 1;
  if ((ulonglong)uVar1 != 1) {
    pcVar4 = (char *)((longlong)_Dst + 0x68);
    uVar6 = 1;
    do {
      if ((*(int *)(pcVar4 + -0x28) == 1) && (*pcVar4 != '\0')) goto LAB_1437d8547;
      uVar6 = uVar6 + 1;
      pcVar4 = pcVar4 + 0x40;
    } while (uVar1 != uVar6);
    uVar6 = (ulonglong)uVar1;
  }
LAB_1437d8547:
  iVar5 = (int)uVar6;
  FUN_145ec773b(_Dst,uVar6 & 0xffffffff);
  iVar2 = *(int *)(param_1 + 0x40) - iVar5;
  iVar3 = iVar5;
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((uVar6 & 0xffffffff) * 0x40 + (longlong)_Dst),(longlong)iVar2 << 6);
    iVar3 = *(int *)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x40) = iVar3 - iVar5;
                    /* WARNING: Could not recover jumptable at 0x0001437d8586. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 1437d8590 FUN_1437d8590 body=2977 status=ok
// SIG undefined FUN_1437d8590(void)

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_1437d8590(longlong *param_1)

{
  double dVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  void *pvVar6;
  undefined8 *puVar7;
  code *pcVar8;
  IMFMediaType *pIVar9;
  LARGE_INTEGER LVar10;
  UINT32 UVar11;
  char cVar12;
  int iVar13;
  HRESULT HVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined8 uVar17;
  IMFMediaType *pIVar18;
  longlong *plVar19;
  int *piVar20;
  longlong lVar21;
  GUID *guidKey;
  longlong lVar22;
  undefined2 *puVar23;
  longlong lVar24;
  MF_ATTRIBUTE_TYPE *pType;
  BOOL *pbResult;
  undefined4 uVar25;
  ulonglong unValue;
  longlong *plVar26;
  ulonglong uVar27;
  UINT32 unValue_00;
  undefined1 uVar28;
  uint uVar29;
  ulonglong uVar30;
  bool bVar31;
  bool bVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auStack_118 [40];
  longlong *local_f0;
  undefined8 *local_e8;
  ulonglong local_e0;
  undefined8 *local_d8;
  int *local_d0;
  uint local_c8;
  IMFMediaType *local_c0;
  int local_b8;
  GUID local_a0;
  uint local_8c;
  LARGE_INTEGER local_88;
  longlong *plStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar5 = *param_1;
  dVar1 = (double)param_1[3];
  plVar26 = param_1 + 1;
  QueryPerformanceCounter(&local_88);
  FUN_147e0fd50(lVar5 + 0x18,&local_d0);
  uVar28 = 0;
  uVar29 = 0;
  if (local_c8 == 0) goto LAB_1437d904d;
  QueryPerformanceCounter(&local_88);
  uVar30 = 0;
  if ((ulonglong)local_c8 != 0) {
    auVar34._8_8_ = 0;
    auVar34._0_8_ = dVar1 * 10000000.0 + 0.5;
    auVar34 = roundpd(auVar34,auVar34,1);
    auVar33._8_8_ = 0;
    auVar33._0_8_ = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
    auVar33 = roundpd(auVar33,auVar33,1);
    lVar21 = (longlong)auVar33._0_8_ -
             ((longlong)auVar34._0_8_ + *(longlong *)(lVar5 + 0x68) + *(longlong *)(lVar5 + 0x78));
    lVar22 = *(longlong *)(local_d0 + 2);
    if (lVar21 < lVar22) {
LAB_1437d868f:
      uVar29 = (uint)uVar30;
      if (uVar29 == local_c8) {
        bVar32 = false;
      }
      else {
        iVar13 = ~uVar29 + local_c8;
        piVar20 = local_d0 + (longlong)(int)uVar29 * 0x10;
        do {
          bVar31 = iVar13 != 0;
          iVar13 = iVar13 + -1;
          bVar32 = *piVar20 == 0;
          if (bVar32) break;
          piVar20 = piVar20 + 0x10;
        } while (bVar31);
      }
      FUN_140bee914(&local_a0,plVar26);
      plVar15 = (longlong *)FUN_1400dbadc();
      plVar19 = (longlong *)*plVar15;
      if (plVar19 == (longlong *)0x0) {
        plVar19 = (longlong *)FUN_140e92164();
        *plVar15 = (longlong)plVar19;
      }
      puVar23 = (undefined2 *)local_a0._0_8_;
      if (local_a0.Data4._0_4_ == 0) {
        puVar23 = &DAT_149dfb77a;
      }
      cVar12 = (**(code **)(*plVar19 + 0x108))(plVar19,puVar23);
      if ((cVar12 == '\0') && (cVar12 = (**(code **)(*plVar19 + 0x110))(plVar19), cVar12 == '\0')) {
        bVar31 = false;
      }
      else {
        plVar16 = (longlong *)FUN_14001cc68(8);
        *plVar16 = 0;
        plVar19 = *(longlong **)(lVar5 + 0x10);
        plVar15 = plVar19;
        if ((plVar19 != plVar16) &&
           (*(longlong **)(lVar5 + 0x10) = plVar16, plVar15 = plVar16, plVar19 != (longlong *)0x0))
        {
          if ((longlong *)*plVar19 != (longlong *)0x0) {
            (**(code **)(*(longlong *)*plVar19 + 0x10))();
          }
          FUN_1400020a8(plVar19);
          plVar15 = *(longlong **)(lVar5 + 0x10);
        }
        if ((int)param_1[2] == 0) {
          puVar23 = &DAT_149dfb77a;
        }
        else {
          puVar23 = (undefined2 *)param_1[1];
        }
        plVar19 = (longlong *)*plVar15;
        if (plVar19 != (longlong *)0x0) {
          *plVar15 = 0;
          (**(code **)(*plVar19 + 0x10))();
        }
        bVar31 = false;
        iVar13 = MFCreateSinkWriterFromURL(puVar23,0,0);
        if (-1 < iVar13) {
          local_f0 = plVar26;
          if (bVar32) {
            uVar17 = FUN_146244a94();
            FUN_147e0e29c(uVar17,&local_88);
            uVar17 = FUN_146244a94();
            FUN_147e0e29c(uVar17);
            LVar10 = local_88;
            pIVar9 = local_c0;
            UVar11 = (UINT32)local_78;
            unValue_00 = local_78._4_4_;
            pIVar18 = (IMFMediaType *)&DAT_149dfb77a;
            if (local_b8 != 0) {
              pIVar18 = local_c0;
            }
            local_e0 = CONCAT44(local_e0._4_4_,(undefined4)uStack_70);
            lVar21 = 0;
            do {
              uVar3 = *(ushort *)((longlong)&pIVar18->lpVtbl + lVar21 * 2);
              bVar2 = (&DAT_149e02088)[lVar21];
              iVar13 = (uint)uVar3 - (uint)bVar2;
              if (iVar13 == 0) {
                if (uVar3 == 0) goto LAB_1437d88b7;
              }
              else {
                if (0x7f < ((uint)bVar2 | (uint)uVar3)) goto LAB_1437d88b2;
                if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[bVar2]) goto LAB_1437d88af;
              }
              lVar21 = lVar21 + 1;
            } while( true );
          }
          goto LAB_1437d8ac6;
        }
      }
      goto LAB_1437d8e82;
    }
    uVar30 = 0;
    piVar20 = local_d0;
    do {
      lVar22 = *(longlong *)(piVar20 + 2);
      if (((lVar21 <= lVar22) && (*piVar20 == 1)) && ((char)piVar20[10] != '\0'))
      goto LAB_1437d868f;
      uVar30 = uVar30 + 1;
      piVar20 = piVar20 + 0x10;
    } while (local_c8 != uVar30);
    goto LAB_1437d9039;
  }
  goto LAB_1437d9049;
LAB_1437d88af:
  iVar13 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[bVar2];
LAB_1437d88b2:
  if (iVar13 != 0) {
    local_e8 = *(undefined8 **)(lVar5 + 0x10);
    lVar21 = 0;
    do {
      uVar3 = *(ushort *)((longlong)&pIVar18->lpVtbl + lVar21 * 2);
      bVar2 = (&DAT_14ab409e0)[lVar21];
      iVar13 = (uint)uVar3 - (uint)bVar2;
      if (iVar13 == 0) {
        if (uVar3 == 0) goto LAB_1437d893b;
      }
      else {
        if (0x7f < ((uint)bVar2 | (uint)uVar3)) goto LAB_1437d8932;
        if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[bVar2]) goto LAB_1437d892f;
      }
      lVar21 = lVar21 + 1;
    } while( true );
  }
LAB_1437d88b7:
  if ((void *)local_88.QuadPart != (void *)0x0) {
    FUN_1400020a8(local_88.QuadPart);
  }
  bVar31 = false;
  plVar26 = local_f0;
  goto joined_r0x0001437d88cf;
LAB_1437d892f:
  iVar13 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[bVar2];
LAB_1437d8932:
  plVar26 = local_f0;
  if (iVar13 == 0) {
LAB_1437d893b:
    local_88.QuadPart = 0x10000000001610;
    plStack_80 = (longlong *)0x719b3800aa000080;
    local_c0 = (IMFMediaType *)0x0;
    HVar14 = MFCreateMediaType(&local_c0);
    if (((HVar14 < 0) ||
        (HVar14 = (*local_c0->lpVtbl->SetGUID)
                            (local_c0,(GUID *)&DAT_1499d7cc0,(GUID *)&DAT_1499d7dc0), HVar14 < 0))
       || ((HVar14 = (*local_c0->lpVtbl->SetGUID)
                               (local_c0,(GUID *)&DAT_1499d7cd0,(GUID *)&local_88.s), HVar14 < 0 ||
           (((HVar14 = (*local_c0->lpVtbl->SetUINT32)(local_c0,(GUID *)&DAT_1499d7d20,0x10),
             HVar14 < 0 ||
             (HVar14 = (*local_c0->lpVtbl->SetUINT32)(local_c0,(GUID *)&DAT_1499d7d00,UVar11),
             HVar14 < 0)) ||
            (HVar14 = (*local_c0->lpVtbl->SetUINT32)(local_c0,(GUID *)&DAT_1499d7cf0,unValue_00),
            HVar14 < 0)))))) {
LAB_1437d8a85:
      bVar32 = false;
    }
    else {
      HVar14 = (*local_c0->lpVtbl->SetUINT32)(local_c0,(GUID *)&DAT_1499d7d10,(UINT32)local_e0);
      if (HVar14 < 0) goto LAB_1437d8a85;
      local_8c = 0;
      iVar13 = (**(code **)(*(longlong *)*local_e8 + 0x18))();
      if (iVar13 < 0) {
        bVar32 = false;
      }
      else {
        iVar13 = (**(code **)(*(longlong *)*local_e8 + 0x20))
                           ((longlong *)*local_e8,local_8c,local_c0);
        bVar32 = -1 < iVar13;
        unValue_00 = local_8c;
      }
    }
    plVar26 = local_f0;
    if (local_c0 != (IMFMediaType *)0x0) {
      (*local_c0->lpVtbl->Release)(local_c0);
    }
    if (bVar32) {
      *(UINT32 *)(lVar5 + 0xd4) = unValue_00;
      if ((void *)LVar10.QuadPart != (void *)0x0) {
        FUN_1400020a8(LVar10.QuadPart);
      }
      if (pIVar9 != (IMFMediaType *)0x0) {
        FUN_1400020a8(pIVar9);
      }
LAB_1437d8ac6:
      lVar21 = FUN_146244a94();
      local_88.QuadPart = 0;
      uVar4 = *(uint *)(lVar21 + 0xb8);
      pvVar6 = *(void **)(lVar21 + 0xb0);
      plStack_80 = (longlong *)CONCAT44(plStack_80._4_4_,uVar4);
      if ((longlong)(int)uVar4 == 0) {
        plStack_80 = (longlong *)(ulonglong)uVar4;
      }
      else {
        FUN_1446dd670(&local_88,uVar4,0);
        memcpy((void *)local_88,pvVar6,(longlong)(int)uVar4 * 2);
      }
      local_78 = *(ulonglong *)(lVar21 + 0xc0);
      uStack_70 = *(ulonglong *)(lVar21 + 200);
      lVar21 = FUN_146244a94();
      local_c0 = (IMFMediaType *)0x0;
      local_b8 = *(int *)(lVar21 + 0xb8);
      lVar24 = (longlong)local_b8;
      pvVar6 = *(void **)(lVar21 + 0xb0);
      if (lVar24 == 0) {
        iVar13 = 0;
      }
      else {
        FUN_1446dd670(&local_c0,local_b8,0);
        memcpy(local_c0,pvVar6,lVar24 * 2);
        iVar13 = local_b8;
      }
      uVar27 = uStack_70;
      LVar10 = local_88;
      pIVar9 = local_c0;
      local_e0 = local_78 & 0xffffffff;
      local_e8 = (undefined8 *)(local_78 >> 0x20);
      unValue = uStack_70 & 0xffffffff;
      pIVar18 = (IMFMediaType *)&DAT_149dfb77a;
      if (iVar13 != 0) {
        pIVar18 = local_c0;
      }
      UVar11 = uStack_70._4_4_;
      lVar21 = 0;
      do {
        uVar3 = *(ushort *)((longlong)&pIVar18->lpVtbl + lVar21 * 2);
        bVar2 = (&DAT_149e02088)[lVar21];
        iVar13 = (uint)uVar3 - (uint)bVar2;
        if (iVar13 == 0) {
          if (uVar3 == 0) goto LAB_1437d8e49;
        }
        else {
          if (0x7f < ((uint)bVar2 | (uint)uVar3)) goto LAB_1437d8c27;
          if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[bVar2]) goto LAB_1437d8c24;
        }
        lVar21 = lVar21 + 1;
      } while( true );
    }
  }
  if ((void *)LVar10.QuadPart != (void *)0x0) {
    FUN_1400020a8(LVar10.QuadPart);
  }
  bVar31 = false;
  goto joined_r0x0001437d88cf;
LAB_1437d8c85:
  iVar13 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[bVar2];
LAB_1437d8c88:
  if (iVar13 != 0) goto LAB_1437d8e49;
LAB_1437d8c91:
  local_88.QuadPart = 0x10000034363248;
  plStack_80 = (longlong *)0x719b3800aa000080;
  local_c0 = (IMFMediaType *)0x0;
  HVar14 = MFCreateMediaType(&local_c0);
  if (((HVar14 < 0) ||
      (HVar14 = (*local_c0->lpVtbl->SetGUID)(local_c0,(GUID *)&DAT_1499d7cc0,(GUID *)&DAT_1499d7dd0)
      , HVar14 < 0)) ||
     ((HVar14 = (*local_c0->lpVtbl->SetGUID)(local_c0,(GUID *)&DAT_1499d7cd0,(GUID *)&local_88.s),
      HVar14 < 0 ||
      (HVar14 = (*local_c0->lpVtbl->SetUINT32)(local_c0,(GUID *)&DAT_1499d7d70,UVar11), HVar14 < 0))
     )) {
LAB_1437d8e16:
    uVar25 = (undefined4)unValue;
    bVar32 = false;
  }
  else {
    unValue = (uVar27 << 0x20) + 1;
    HVar14 = (*local_c0->lpVtbl->SetUINT64)(local_c0,(GUID *)&DAT_1499d7d40,unValue);
    if (((HVar14 < 0) ||
        (HVar14 = (*local_c0->lpVtbl->SetUINT64)
                            (local_c0,(GUID *)&DAT_1499d7d30,(local_e0 << 0x20) + (longlong)local_e8
                            ), HVar14 < 0)) ||
       (HVar14 = (*local_c0->lpVtbl->SetUINT64)(local_c0,(GUID *)&DAT_1499d7d50,0x100000001),
       HVar14 < 0)) goto LAB_1437d8e16;
    HVar14 = (*local_c0->lpVtbl->SetUINT32)(local_c0,(GUID *)&DAT_1499d7d60,2);
    if (HVar14 < 0) {
LAB_1437d90eb:
      bVar32 = false;
    }
    else {
      local_8c = 0;
      iVar13 = (**(code **)(*(longlong *)*local_d8 + 0x18))();
      if (iVar13 < 0) goto LAB_1437d90eb;
      iVar13 = (**(code **)(*(longlong *)*local_d8 + 0x20))((longlong *)*local_d8,local_8c,local_c0)
      ;
      bVar32 = -1 < iVar13;
      unValue = (ulonglong)local_8c;
    }
    uVar25 = (undefined4)unValue;
  }
  if (local_c0 != (IMFMediaType *)0x0) {
    (*local_c0->lpVtbl->Release)(local_c0);
  }
  if (!bVar32) goto LAB_1437d8e49;
  *(undefined4 *)(lVar5 + 0xd8) = uVar25;
  iVar13 = (**(code **)(*(longlong *)**(undefined8 **)(lVar5 + 0x10) + 0x28))();
  bVar31 = -1 < iVar13;
  goto LAB_1437d8e4c;
LAB_1437d8c24:
  iVar13 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[bVar2];
LAB_1437d8c27:
  if (iVar13 != 0) {
    local_d8 = *(undefined8 **)(lVar5 + 0x10);
    lVar21 = 0;
    do {
      uVar3 = *(ushort *)((longlong)&pIVar18->lpVtbl + lVar21 * 2);
      bVar2 = (&DAT_14ab40fda)[lVar21];
      iVar13 = (uint)uVar3 - (uint)bVar2;
      if (iVar13 == 0) {
        if (uVar3 == 0) goto LAB_1437d8c91;
      }
      else {
        if (0x7f < ((uint)bVar2 | (uint)uVar3)) goto LAB_1437d8c88;
        if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[bVar2]) goto LAB_1437d8c85;
      }
      lVar21 = lVar21 + 1;
    } while( true );
  }
LAB_1437d8e49:
  bVar31 = false;
LAB_1437d8e4c:
  plVar26 = local_f0;
  if ((void *)LVar10.QuadPart != (void *)0x0) {
    FUN_1400020a8(LVar10.QuadPart);
  }
joined_r0x0001437d88cf:
  if (pIVar9 != (IMFMediaType *)0x0) {
    FUN_1400020a8(pIVar9);
  }
LAB_1437d8e82:
  if ((undefined2 *)local_a0._0_8_ != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((bool)(bVar31 & uVar29 != local_c8)) {
    uVar27 = (longlong)(int)uVar29 << 6 | 0x20;
    local_f0 = plVar26;
    do {
      piVar20 = local_d0;
      plVar26 = (longlong *)((longlong)local_d0 + (uVar27 - 0x18));
      *plVar26 = *plVar26 - lVar22;
      puVar7 = *(undefined8 **)(lVar5 + 0x10);
      iVar13 = *(int *)((longlong)local_d0 + (uVar27 - 0x20));
      uVar25 = *(undefined4 *)(lVar5 + 0xd4 + (ulonglong)(iVar13 != 0) * 4);
      local_88.s.LowPart = iVar13;
      plStack_80 = (longlong *)0x0;
      cVar12 = FUN_1437d2aca(&local_88);
      if (cVar12 == '\0') {
        bVar32 = false;
      }
      else {
        local_c0 = (IMFMediaType *)0x0;
        bVar32 = false;
        HVar14 = MFCreateAlignedMemoryBuffer
                           (*(DWORD *)((longlong)piVar20 + uVar27),0,(IMFMediaBuffer **)&local_c0);
        if (-1 < HVar14) {
          local_a0._0_8_ = (undefined2 *)0x0;
          bVar32 = false;
          pbResult = (BOOL *)0x0;
          HVar14 = (*local_c0->lpVtbl->GetItem)(local_c0,&local_a0,(PROPVARIANT *)0x0);
          if (-1 < HVar14) {
            pType = (MF_ATTRIBUTE_TYPE *)(longlong)*(int *)((longlong)piVar20 + uVar27);
            guidKey = *(GUID **)((longlong)piVar20 + (uVar27 - 8));
            memcpy((void *)local_a0._0_8_,guidKey,(size_t)pType);
            HVar14 = (*local_c0->lpVtbl->GetItemType)(local_c0,guidKey,pType);
            if (HVar14 < 0) {
              bVar32 = false;
            }
            else {
              (*local_c0->lpVtbl->Compare)
                        (local_c0,(IMFAttributes *)(ulonglong)*(uint *)((longlong)piVar20 + uVar27),
                         (MF_ATTRIBUTES_MATCH_TYPE)pType,pbResult);
              (**(code **)(*plStack_80 + 0x150))(plStack_80,local_c0);
              (**(code **)(*plStack_80 + 0x120))
                        (plStack_80,*(undefined8 *)((longlong)piVar20 + (uVar27 - 0x18)));
              (**(code **)(*plStack_80 + 0x130))
                        (plStack_80,*(undefined8 *)((longlong)piVar20 + (uVar27 - 0x10)));
              iVar13 = (**(code **)(*(longlong *)*puVar7 + 0x30))
                                 ((longlong *)*puVar7,uVar25,plStack_80);
              bVar32 = -1 < iVar13;
            }
          }
        }
        if (local_c0 != (IMFMediaType *)0x0) {
          (*local_c0->lpVtbl->Release)(local_c0);
        }
      }
      if (plStack_80 != (longlong *)0x0) {
        (**(code **)(*plStack_80 + 0x10))();
      }
      if (!bVar32) {
        uVar30 = 0;
        plVar26 = local_f0;
        goto LAB_1437d9049;
      }
      uVar29 = (int)uVar30 + 1;
      uVar30 = (ulonglong)uVar29;
      uVar27 = uVar27 + 0x40;
    } while (uVar29 != local_c8);
    iVar13 = (**(code **)(*(longlong *)**(undefined8 **)(lVar5 + 0x10) + 0x58))();
    uVar30 = (ulonglong)(-1 < iVar13);
    plVar26 = local_f0;
  }
  else {
LAB_1437d9039:
    uVar30 = 0;
  }
LAB_1437d9049:
  uVar28 = (undefined1)uVar30;
  uVar29 = local_c8;
LAB_1437d904d:
  FUN_145ec773b(local_d0,uVar29);
  if (local_d0 != (int *)0x0) {
    FUN_1400020a8();
  }
  QueryPerformanceCounter(&local_88);
  local_88.s.LowPart._0_1_ = uVar28;
  pcVar8 = *(code **)(lVar5 + 0x90);
  plVar19 = (longlong *)(lVar5 + 0xb0);
  if (*(longlong **)(lVar5 + 0xa0) != (longlong *)0x0) {
    plVar19 = *(longlong **)(lVar5 + 0xa0);
  }
  uVar17 = (**(code **)(*plVar19 + 8))();
  (*pcVar8)(uVar17,&local_88,plVar26);
  LOCK();
  uVar25 = *(undefined4 *)(lVar5 + 0xd0);
  *(undefined4 *)(lVar5 + 0xd0) = 0;
  UNLOCK();
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar25;
}



// FUNCTION 1437d913c FUN_1437d913c body=29 status=ok
// SIG undefined FUN_1437d913c(void)

void FUN_1437d913c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1437d915a FUN_1437d915a body=57 status=ok
// SIG undefined FUN_1437d915a(void)

undefined8 * FUN_1437d915a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ab41a70;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437d9194 FUN_1437d9194 body=335 status=ok
// SIG undefined FUN_1437d9194(void)

void FUN_1437d9194(longlong *param_1,undefined1 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_98 [32];
  byte *local_78;
  byte local_62 [2];
  undefined8 *local_60;
  int local_58;
  undefined8 *local_50;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_41 = *param_2;
  lVar2 = *param_1;
  local_62[1] = 1;
  local_62[0] = *(byte *)(param_1 + 1) ^ 1;
  if (*(char *)(lVar2 + 0x31) == '\0') {
    local_62[0] = 0;
  }
  local_60 = (undefined8 *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,4,0x10);
  puVar3 = local_60;
  local_58 = 4;
  local_78 = local_62 + 1;
  FUN_147e10136(local_60,&local_41,local_62,param_3);
  *puVar3 = &PTR_FUN_14ab41b40;
  puVar3[6] = lVar2;
  puVar3[7] = FUN_1437d8488;
  local_78 = (byte *)CONCAT44(local_78._4_4_,1);
  FUN_142c039ac(&local_50,&local_60);
  if (local_58 != 0) {
    if (local_60 == (undefined8 *)0x0) goto LAB_1437d929c;
    (**(code **)*local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58 = 0;
  }
  if (local_60 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1437d929c:
  if (local_50 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_50 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_50)(local_50,1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437d930e FUN_1437d930e body=29 status=ok
// SIG undefined FUN_1437d930e(void)

undefined8 FUN_1437d930e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437d932b FUN_1437d932b body=1402 status=ok
// SIG undefined FUN_1437d932b(void)

void FUN_1437d932b(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 *local_48;
  int local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  local_40 = 2;
  *local_48 = &PTR_LAB_149e30fe0;
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
  local_48[2] = lVar2;
  *local_48 = &PTR_FUN_149e3c9b0;
  local_48[3] = FUN_147e0f89e;
  local_58 = 0;
  FUN_14170a7d0(&DAT_14cb12c70,L"HighlightRecorder.Start",
                L"Starts recording of highlight clip, optional parameter: max duration (float, 30 seconds by default)"
                ,&local_48);
  if (local_40 == 0) {
LAB_1437d9417:
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_1437d9417;
  }
  atexit(FUN_1437d73ec);
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  local_40 = 2;
  *local_48 = &PTR_LAB_149e020b0;
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
  local_48[2] = lVar2;
  *local_48 = &PTR_FUN_149e062c0;
  local_48[3] = FUN_1437d7432;
  local_58 = 0;
  FUN_14152bcb8(&DAT_14cb12c80,L"HighlightRecorder.Stop",L"Stops recording of highlight clip",
                &local_48);
  if (local_40 == 0) {
LAB_1437d9503:
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_1437d9503;
  }
  atexit(FUN_1437d7475);
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  local_40 = 2;
  *local_48 = &PTR_LAB_149e020b0;
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
  local_48[2] = lVar2;
  *local_48 = &PTR_FUN_149e062c0;
  local_48[3] = &LAB_1437d74ba;
  local_58 = 0;
  FUN_14152bcb8(&DAT_14cb12c90,L"HighlightRecorder.Pause",L"Pauses recording of highlight clip",
                &local_48);
  if (local_40 == 0) {
LAB_1437d95e1:
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_1437d95e1;
  }
  atexit(FUN_1437d74ce);
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  local_40 = 2;
  *local_48 = &PTR_LAB_149e020b0;
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
  local_48[2] = lVar2;
  *local_48 = &PTR_FUN_149e062c0;
  local_48[3] = &LAB_1437d7514;
  local_58 = 0;
  FUN_14152bcb8(&DAT_14cb12ca0,L"HighlightRecorder.Resume",L"Resumes recording of highlight clip",
                &local_48);
  if (local_40 == 0) {
LAB_1437d96bf:
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_1437d96bf;
  }
  atexit(FUN_1437d7528);
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  local_40 = 2;
  *local_48 = &PTR_LAB_149e30fe0;
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
  local_48[2] = lVar2;
  *local_48 = &PTR_FUN_149e3c9b0;
  local_48[3] = FUN_1437d756e;
  local_58 = 0;
  FUN_14170a7d0(&DAT_14cb12cb0,L"HighlightRecorder.Save",
                L"Saves highlight clip, optional parameters: filename (\"test.mp4\" by default) and max duration (float, secs, duration of ring buffer by default)"
                ,&local_48);
  if (local_40 != 0) {
    if (local_48 == (undefined8 *)0x0) goto LAB_1437d97ab;
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1437d97ab:
  atexit(FUN_1437d76f3);
  local_48 = (undefined8 *)0x8000000149e3f332;
  local_34 = 0x17;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_14641637e(&local_48);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437d98e3 FUN_1437d98e3 body=102 status=ok
// SIG undefined FUN_1437d98e3(void)

void FUN_1437d98e3(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014ab41df2;
  local_14 = 0x1b;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146416586(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437d994c FUN_1437d994c body=69 status=ok
// SIG undefined FUN_1437d994c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437d994c(void)

{
  _DAT_14cb12ce0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437d998e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb12ce8,1);
  return;
}



// FUNCTION 1437d9991 FUN_1437d9991 body=69 status=ok
// SIG undefined FUN_1437d9991(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437d9991(void)

{
  _DAT_14cb12cf8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437d99d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb12d00,1);
  return;
}



// FUNCTION 1437d99d6 FUN_1437d99d6 body=658 status=ok
// SIG undefined FUN_1437d99d6(void)

void FUN_1437d99d6(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_148 [32];
  undefined1 local_128 [88];
  LPVOID local_d0;
  longlong *local_c8;
  uint local_bc;
  longlong *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    local_b8 = (longlong *)0x0;
    local_bc = 0;
    iVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,2,0xf);
    if ((((-1 < iVar2) && (local_b8 != (longlong *)0x0)) &&
        (iVar2 = (**(code **)(*local_b8 + 0x18))(local_b8,&local_bc), -1 < iVar2)) &&
       (local_bc != 0)) {
      uVar3 = 0;
      do {
        local_c8 = (longlong *)0x0;
        iVar2 = (**(code **)(*local_b8 + 0x20))(local_b8,uVar3,&local_c8);
        if (local_c8 != (longlong *)0x0 && -1 < iVar2) {
          local_d0 = (LPVOID)0x0;
          iVar2 = (**(code **)(*local_c8 + 0x28))(local_c8,&local_d0);
          if (local_d0 != (LPVOID)0x0 && -1 < iVar2) {
            FUN_140056680(&local_b0);
            FUN_147e117ee(local_128,&local_b0);
            if (local_b0 != (undefined1 *)0x0) {
              FUN_1400020a8();
            }
            FUN_1437d9f78(&local_c8,local_128);
            local_b0 = local_128;
            local_a8 = local_128;
            FUN_147e129c0(&local_98,local_9c,&local_b0);
            FUN_147e11a44(local_128);
          }
          if (local_d0 != (LPVOID)0x0) {
            CoTaskMemFree(local_d0);
          }
        }
        if (local_c8 != (longlong *)0x0) {
          (**(code **)(*local_c8 + 0x10))();
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < local_bc);
    }
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x18));
    FUN_147e124ec(param_1 + 0x20,&local_98);
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x18));
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 0x10))();
    }
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_147e126ce(&local_98);
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437d9c6a FUN_1437d9c6a body=478 status=ok
// SIG undefined FUN_1437d9c6a(void)

void FUN_1437d9c6a(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined1 auStack_88 [32];
  PSRWLOCK local_68;
  ulonglong local_60;
  LPVOID local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = (PSRWLOCK)(param_1 + 0x18);
  AcquireSRWLockExclusive(local_68);
  uVar2 = 0;
  do {
    local_50 = (longlong *)0x0;
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))
                      (*(longlong **)(param_1 + 0x10),0,uVar2 & 0xffffffff,&local_50);
    if (iVar1 < 0) {
      uVar3 = 0;
      uVar4 = 0;
      bVar5 = false;
    }
    else {
      local_58 = (LPVOID)0x0;
      iVar1 = (**(code **)(*local_50 + 0x28))(local_50,&local_58);
      bVar5 = local_58 != (LPVOID)0x0 && -1 < iVar1;
      uVar3 = 0;
      if (local_58 != (LPVOID)0x0 && -1 < iVar1) {
        FUN_1446f470e(&local_60,local_58,1);
        uVar3 = local_60 >> 0x20;
        uVar4 = local_60;
      }
      else {
        uVar4 = 0;
      }
      if (local_58 != (LPVOID)0x0) {
        CoTaskMemFree(local_58);
      }
    }
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x10))();
    }
    if (bVar5) {
      *(ulonglong *)(param_1 + 0x88 + uVar2 * 8) = uVar4 & 0xffffffff | uVar3 << 0x20;
    }
    local_50 = (longlong *)0x0;
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))
                      (*(longlong **)(param_1 + 0x10),1,uVar2 & 0xffffffff,&local_50);
    if (iVar1 < 0) {
      bVar5 = false;
    }
    else {
      local_58 = (LPVOID)0x0;
      iVar1 = (**(code **)(*local_50 + 0x28))(local_50,&local_58);
      bVar5 = local_58 != (LPVOID)0x0 && -1 < iVar1;
      if (local_58 != (LPVOID)0x0 && -1 < iVar1) {
        FUN_1446f470e(&local_60,local_58,1);
        uVar3 = local_60 >> 0x20;
        uVar4 = local_60;
      }
      if (local_58 != (LPVOID)0x0) {
        CoTaskMemFree(local_58);
      }
    }
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x10))();
    }
    if (bVar5) {
      *(ulonglong *)(param_1 + 0x70 + uVar2 * 8) = uVar4 & 0xffffffff | uVar3 << 0x20;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != 3);
  ReleaseSRWLockExclusive(local_68);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437d9e4a FUN_1437d9e4a body=302 status=ok
// SIG undefined FUN_1437d9e4a(void)

void FUN_1437d9e4a(uint param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  *(uint *)(param_2 + 0x38) = param_1;
  lVar1 = param_2 + 0x40;
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(int *)(param_2 + 0x4c) < 0) {
    FUN_1470420ee(lVar1,0);
  }
  if ((*(int *)(param_2 + 0x34) != 2) && (uVar3 = *(uint *)(param_2 + 0x2c), uVar3 != 0)) {
    uVar8 = 0;
    puVar6 = &DAT_14ab423e0;
    uVar5 = 0;
    do {
      if ((*puVar6 & param_1) != 0) {
        iVar2 = *(int *)(param_2 + 0x48);
        *(uint *)(param_2 + 0x48) = iVar2 + 1U;
        if (*(uint *)(param_2 + 0x4c) < iVar2 + 1U) {
          FUN_1477b22f8(lVar1,iVar2);
        }
        *(int *)(*(longlong *)(param_2 + 0x40) + (longlong)iVar2 * 4) = (int)uVar8;
        uVar5 = uVar5 + 1;
        uVar3 = *(uint *)(param_2 + 0x2c);
      }
      if (0x11 < uVar8) break;
      uVar8 = uVar8 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar5 < uVar3);
    if (uVar5 < uVar3) {
      *(undefined4 *)(param_2 + 0x48) = 0;
      if (*(int *)(param_2 + 0x4c) < 0) {
        FUN_1470420ee(lVar1,0);
        uVar3 = *(uint *)(param_2 + 0x2c);
      }
      puVar4 = &DAT_14ab42430;
      if (uVar3 == 6) {
        puVar4 = &DAT_14ab42460;
      }
      puVar7 = &DAT_14ab42450;
      if (uVar3 != 4) {
        puVar7 = puVar4;
      }
      if (0 < (int)uVar3) {
        lVar9 = 0;
        do {
          iVar2 = *(int *)(param_2 + 0x48);
          *(uint *)(param_2 + 0x48) = iVar2 + 1U;
          if (*(uint *)(param_2 + 0x4c) < iVar2 + 1U) {
            FUN_1477b22f8(lVar1,iVar2);
          }
          *(undefined4 *)(*(longlong *)(param_2 + 0x40) + (longlong)iVar2 * 4) = puVar7[lVar9];
          lVar9 = lVar9 + 1;
        } while (lVar9 < *(int *)(param_2 + 0x2c));
      }
    }
  }
  return;
}



// FUNCTION 1437d9f78 FUN_1437d9f78 body=522 status=ok
// SIG undefined FUN_1437d9f78(void)

void FUN_1437d9f78(undefined8 *param_1,longlong param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  ushort uVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  longlong *local_58;
  int local_4c;
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = FUN_147e119ac();
  *(undefined4 *)(param_2 + 0x34) = uVar2;
  local_4c = 4;
  iVar3 = (**(code **)(*(longlong *)*param_1 + 0x30))();
  if (-1 < iVar3) {
    uVar2 = 2;
    if (local_4c - 1U < 8) {
      uVar2 = *(undefined4 *)(&DAT_14ab42630 + (ulonglong)(local_4c - 1U) * 4);
    }
    *(undefined4 *)(param_2 + 0x28) = uVar2;
  }
  local_58 = (longlong *)0x0;
  iVar3 = (**(code **)(*(longlong *)*param_1 + 0x20))((longlong *)*param_1,0);
  if (-1 < iVar3) {
    local_78 = 0;
    lStack_70 = 0;
    local_68 = 0;
    iVar3 = (**(code **)(*local_58 + 0x28))(local_58,&DAT_14ab42320,&local_78);
    if (lStack_70 != 0 && -1 < iVar3) {
      FUN_140056680(&local_48);
      if ((longlong *)(param_2 + 8) == &local_48) {
        if (local_48 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_2 + 8) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_2 + 8) = local_48;
        local_48 = 0;
        *(undefined4 *)(param_2 + 0x10) = (undefined4)uStack_40;
        *(undefined4 *)(param_2 + 0x14) = uStack_40._4_4_;
      }
      PropVariantClear((PROPVARIANT *)&local_78);
    }
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    iVar3 = (**(code **)(*local_58 + 0x28))(local_58,&DAT_14ab422c0,&local_48);
    if (local_38 == 0 || iVar3 < 0) {
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      iVar3 = (**(code **)(*local_58 + 0x28))(local_58,&DAT_14ab422d4,&local_48);
      if (local_38 == 0 || iVar3 < 0) goto LAB_1437da110;
    }
    uVar4 = 8;
    if (*(ushort *)(local_38 + 2) < 8) {
      uVar4 = *(ushort *)(local_38 + 2);
    }
    uVar1 = 2;
    if (2 < uVar4) {
      uVar1 = uVar4;
    }
    *(uint *)(param_2 + 0x2c) = (uint)uVar1;
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(local_38 + 4);
    FUN_147e11910(local_38,param_2);
    PropVariantClear((PROPVARIANT *)&local_48);
  }
LAB_1437da110:
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437da184 FUN_1437da184 body=166 status=ok
// SIG undefined FUN_1437da184(void)

void FUN_1437da184(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 local_84 [4];
  undefined1 local_80 [88];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_147e11b96(param_1,local_80,param_2);
  if (local_28 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x18));
    local_98 = local_80;
    local_90 = local_80;
    FUN_147e12f2e(param_1 + 0x20,local_84);
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x18));
  }
  if ((local_28 & 1) != 0) {
    FUN_147e11a44(local_80);
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437da22c FUN_1437da22c body=132 status=ok
// SIG undefined FUN_1437da22c(void)

void FUN_1437da22c(longlong param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x18));
  if (*(int *)(param_2 + 1) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = (undefined2 *)*param_2;
  }
  FUN_1446f470e(&local_28,puVar1,1);
  FUN_147e130ce(param_1 + 0x20,local_28);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x18));
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437da2b2 FUN_1437da2b2 body=280 status=ok
// SIG undefined FUN_1437da2b2(void)

void FUN_1437da2b2(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_2 + 1) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  FUN_1446f470e(&local_30,puVar5,1);
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x18));
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    uVar1 = (uint)((ulonglong)local_30 >> 0x10);
    uVar3 = (uint)local_30 & 0xffff;
    lVar2 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x60);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0x68) - 1U &
                             (int)((ulonglong)local_30 >> 0x20) + ((uint)local_30 << 0x10 | uVar3) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar3 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x68;
        if (*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x68) == local_30) {
          if ((lVar2 + 8U & 0xfffffffffffffff7) != 0) {
            AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0x58));
            *(undefined4 *)(lVar2 + 0x30) = param_3;
            ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0x58));
          }
          break;
        }
        iVar4 = *(int *)(lVar2 + 0x60);
      } while (iVar4 != -1);
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x18));
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437da3cc FUN_1437da3cc body=451 status=ok
// SIG undefined FUN_1437da3cc(void)

void FUN_1437da3cc(longlong param_1,undefined8 *param_2,int *param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  PSRWLOCK SRWLock;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  undefined1 auStack_b8 [40];
  longlong local_90 [5];
  int local_64;
  int local_60;
  int local_58;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar4 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar4 = 0;
  }
  FUN_1446f82e2(local_90,iVar4,*param_2,1);
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x18));
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    uVar1 = (uint)((ulonglong)local_90[0] >> 0x10);
    uVar3 = (uint)local_90[0] & 0xffff;
    lVar2 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x60);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0x68) - 1U &
                             (int)((ulonglong)local_90[0] >> 0x20) +
                             ((uint)local_90[0] << 0x10 | uVar3) + (uVar1 << 0x13 | uVar1 & 0xffff)
                             + (uVar3 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x68;
        if (*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x68) == local_90[0]) {
          lVar5 = lVar2 + 8;
          if (lVar5 != 0 && lVar2 != 0) {
            FUN_147e117ee(local_90,param_2);
            SRWLock = (PSRWLOCK)(lVar2 + 0x58);
            AcquireSRWLockShared(SRWLock);
            FUN_147e1178a(local_90,lVar5);
            ReleaseSRWLockShared(SRWLock);
            bVar6 = local_64 != *param_3;
            iVar4 = *param_3;
            if (!bVar6) {
              iVar4 = local_64;
            }
            local_64 = iVar4;
            iVar4 = param_3[1];
            bVar7 = local_60 != iVar4;
            if (bVar7) {
              local_60 = iVar4;
            }
            bVar7 = bVar7 || bVar6;
            iVar4 = param_3[2];
            if (local_58 == iVar4) {
              if (bVar6) goto LAB_1437da554;
            }
            else {
              bVar7 = true;
              local_58 = iVar4;
LAB_1437da554:
              FUN_1437d9e4a(iVar4,local_90);
            }
            if (bVar7) {
              AcquireSRWLockExclusive(SRWLock);
              FUN_147e1178a(lVar5,local_90);
              ReleaseSRWLockExclusive(SRWLock);
            }
            FUN_147e11a44(local_90);
          }
          break;
        }
        iVar4 = *(int *)(lVar2 + 0x60);
      } while (iVar4 != -1);
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x18));
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437da590 FUN_1437da590 body=696 status=ok
// SIG undefined FUN_1437da590(void)

longlong * FUN_1437da590(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  PSRWLOCK SRWLock;
  longlong local_70;
  
  *param_2 = 0;
  param_2[1] = 0;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x10));
  iVar8 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x4c);
  if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar8);
  }
  if (iVar8 != 0) {
    FUN_147e131ca(param_2);
  }
  local_70 = *(longlong *)(param_1 + 0x80);
  if (local_70 == 0) {
    local_70 = *(longlong *)(param_1 + 0x88);
  }
  iVar8 = *(int *)(param_1 + 0x40);
  if (iVar8 == 0) {
    uVar15 = 1;
    uVar12 = 0;
    iVar10 = 0;
    iVar4 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x38);
    if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0x28);
    }
    uVar11 = *puVar5;
    if (uVar11 == 0) {
      iVar4 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar4 = iVar8 + -1;
      }
      uVar12 = 0;
      uVar15 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar15 = uVar12;
      }
      iVar10 = 0;
      do {
        if (uVar15 == uVar12) goto LAB_1437da67b;
        iVar10 = iVar10 + 0x20;
        uVar11 = puVar5[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar12 = 0;
      iVar10 = 0;
    }
    uVar15 = (ulonglong)(-uVar11 & uVar11);
    uVar2 = uVar15 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar4 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar8 <= iVar4) {
      iVar4 = iVar8;
    }
  }
  if (iVar4 != iVar8) {
    uVar11 = 0xffffffff;
    do {
      lVar13 = *(longlong *)(param_1 + 0x18);
      lVar14 = (longlong)iVar4 * 0x68;
      SRWLock = (PSRWLOCK)(lVar13 + lVar14 + 0x58);
      AcquireSRWLockShared(SRWLock);
      if ((*(int *)(lVar13 + lVar14 + 0x30) == 0) && (*(int *)(lVar13 + 0x3c + lVar14) == 1)) {
        iVar4 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
          FUN_147e1323a(param_2,(longlong)iVar4);
        }
        puVar1 = (undefined8 *)(*param_2 + (longlong)iVar4 * 0x48);
        puVar1[2] = 0;
        puVar1[3] = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[6] = 0;
        puVar1[7] = 0;
        FUN_147042096(puVar1);
        FUN_147e11ce6(lVar13 + lVar14 + 8,local_70,puVar1);
      }
      ReleaseSRWLockShared(SRWLock);
      uVar11 = uVar11 & ~(uint)uVar15;
      puVar5 = *(uint **)(param_1 + 0x38);
      if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0x28);
      }
      iVar3 = *(int *)(param_1 + 0x40);
      iVar4 = (int)uVar12;
      lVar13 = (longlong)iVar4;
      uVar9 = puVar5[lVar13] & uVar11;
      if (uVar9 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar4 < iVar6) {
          lVar14 = 0;
          do {
            uVar9 = puVar5[lVar13 + lVar14 + 1];
            if (uVar9 != 0) {
              uVar12 = (ulonglong)(iVar4 + (int)lVar14 + 1);
              uVar11 = 0xffffffff;
              goto LAB_1437da76e;
            }
            iVar10 = iVar10 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar7 - lVar13 != lVar14);
          uVar11 = 0xffffffff;
          iVar4 = iVar7;
        }
        uVar12 = (ulonglong)(iVar4 + 1);
        iVar4 = iVar3;
      }
      else {
LAB_1437da76e:
        uVar15 = (ulonglong)(-uVar9 & uVar9);
        uVar2 = uVar15 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar4 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar4) {
          iVar4 = iVar3;
        }
      }
    } while (iVar4 != iVar8);
  }
LAB_1437da67b:
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x10));
  return param_2;
}



// FUNCTION 1437da84a FUN_1437da84a body=501 status=ok
// SIG undefined FUN_1437da84a(void)

undefined8 * FUN_1437da84a(longlong param_1,undefined8 *param_2,longlong param_3)

{
  PSRWLOCK SRWLock;
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x10));
  lVar5 = *(longlong *)(param_1 + 0x80);
  if (lVar5 == 0) {
    lVar5 = *(longlong *)(param_1 + 0x88);
  }
  if (((param_3 != 0) || (param_3 = lVar5, lVar5 != 0)) &&
     (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c))) {
    uVar1 = (uint)((ulonglong)param_3 >> 0x10);
    uVar3 = (uint)param_3 & 0xffff;
    lVar2 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x58);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0x60) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar3) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar3 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x18) + (longlong)iVar4 * 0x68;
        if (*(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar4 * 0x68) == param_3) {
          if (lVar2 + 8 != 0 && lVar2 != 0) {
            SRWLock = (PSRWLOCK)(lVar2 + 0x58);
            AcquireSRWLockShared(SRWLock);
            if ((*(int *)(lVar2 + 0x30) == 0) && (*(int *)(lVar2 + 0x3c) == 1)) {
              local_78 = 0;
              uStack_70 = 0;
              local_88 = 0;
              uStack_80 = 0;
              local_58 = 0;
              uStack_50 = 0;
              FUN_147042096(&local_88);
              FUN_147e11ce6(lVar2 + 8,lVar5,&local_88);
              *param_2 = local_88;
              local_88 = 0;
              *(undefined4 *)(param_2 + 1) = (undefined4)uStack_80;
              *(undefined4 *)((longlong)param_2 + 0xc) = uStack_80._4_4_;
              uStack_80 = 0;
              param_2[2] = local_78;
              local_78 = 0;
              *(undefined4 *)(param_2 + 3) = (undefined4)uStack_70;
              *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_70._4_4_;
              uStack_70 = 0;
              *(undefined4 *)(param_2 + 4) = local_68;
              *(undefined4 *)((longlong)param_2 + 0x24) = uStack_64;
              *(undefined4 *)(param_2 + 5) = uStack_60;
              *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_5c;
              param_2[6] = local_58;
              local_58 = 0;
              *(undefined4 *)(param_2 + 7) = (undefined4)uStack_50;
              *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_50._4_4_;
              uStack_50 = 0;
              *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) & 0xfe | local_48 & 1;
              *(undefined1 *)(param_2 + 9) = 1;
              FUN_147041ad4(&local_88);
              ReleaseSRWLockShared(SRWLock);
              goto LAB_1437da956;
            }
            ReleaseSRWLockShared(SRWLock);
          }
          break;
        }
        iVar4 = *(int *)(lVar2 + 0x60);
      } while (iVar4 != -1);
    }
  }
  *(undefined1 *)(param_2 + 9) = 0;
LAB_1437da956:
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x10));
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1437daa40 FUN_1437daa40 body=232 status=ok
// SIG undefined FUN_1437daa40(void)

ulonglong FUN_1437daa40(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 unaff_RDI;
  ulonglong uVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if (*(longlong *)(param_1 + 0xb0) != *param_2) {
    FUN_1437dab28(param_1);
    plVar2 = *(longlong **)(param_1 + 0xb0);
    plVar3 = (longlong *)*param_2;
    if (plVar2 != plVar3) {
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 8))();
        plVar2 = *(longlong **)(param_1 + 0xb0);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
      plVar3 = (longlong *)*param_2;
      *(longlong **)(param_1 + 0xb0) = plVar3;
    }
    if (plVar3 != (longlong *)0x0) {
      iVar1 = (**(code **)(*plVar3 + 0x18))(plVar3,&DAT_14ab42488,1,0,param_1 + 0xa0);
      if (-1 < iVar1) {
        iVar1 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
                          (*(longlong **)(param_1 + 0xa0),0,0,param_1 + 0xa8);
        if (-1 < iVar1) {
          iVar1 = (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x50))
                            (*(longlong **)(param_1 + 0xa8),param_1 + 8);
          if (-1 < iVar1) goto LAB_1437dab13;
        }
      }
    }
    uVar4 = 0;
  }
LAB_1437dab13:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  return uVar4 & 0xffffffff;
}



// FUNCTION 1437dab28 FUN_1437dab28 body=155 status=ok
// SIG undefined FUN_1437dab28(void)

void FUN_1437dab28(longlong param_1)

{
  longlong *plVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  plVar1 = *(longlong **)(param_1 + 0xa8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x58))(plVar1,param_1 + 8);
    if (*(longlong **)(param_1 + 0xa8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x10))();
      *(undefined8 *)(param_1 + 0xa8) = 0;
    }
  }
  if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x10))();
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x10))();
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  LOCK();
  *(undefined1 *)(param_1 + 0xb9) = 0;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x0001437dabbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  return;
}



// FUNCTION 1437dabc4 FUN_1437dabc4 body=467 status=ok
// SIG undefined FUN_1437dabc4(void)

undefined8 FUN_1437dabc4(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  if ((*(byte *)(param_1 + 0xb1) & 1) == 0) {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x60));
    uVar15 = 0;
    uVar11 = param_2 & 0xffffffff;
    if (4 < (int)param_2 - 1U) {
      uVar11 = uVar15;
    }
    iVar2 = *(int *)(param_1 + 0x38);
    if (iVar2 == 0) {
      uVar16 = 1;
      iVar10 = 0;
      iVar5 = 0;
    }
    else {
      puVar6 = *(uint **)(param_1 + 0x30);
      if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 0x20);
      }
      uVar7 = *puVar6;
      if (uVar7 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        uVar15 = 0;
        uVar16 = (ulonglong)(uint)(iVar5 >> 5);
        if (iVar5 >> 5 < 1) {
          uVar16 = uVar15;
        }
        iVar10 = 0;
        do {
          if (uVar16 == uVar15) goto LAB_1437dac8a;
          iVar10 = iVar10 + 0x20;
          uVar7 = puVar6[uVar15 + 1];
          uVar15 = uVar15 + 1;
        } while (uVar7 == 0);
      }
      else {
        uVar15 = 0;
        iVar10 = 0;
      }
      uVar16 = (ulonglong)(-uVar7 & uVar7);
      uVar1 = uVar16 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar5 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar5) {
        iVar5 = iVar2;
      }
    }
    if (iVar5 != iVar2) {
      uVar7 = 0xffffffff;
      do {
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x10) + (longlong)iVar5 * 0x10);
        (**(code **)(*plVar4 + 0x48))(plVar4,uVar11);
        uVar7 = ~(uint)uVar16 & uVar7;
        puVar6 = *(uint **)(param_1 + 0x30);
        if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
          puVar6 = (uint *)(param_1 + 0x20);
        }
        iVar3 = *(int *)(param_1 + 0x38);
        iVar5 = (int)uVar15;
        lVar13 = (longlong)iVar5;
        uVar12 = puVar6[lVar13] & uVar7;
        if (uVar12 == 0) {
          iVar8 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar8 = iVar3 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar10 = iVar10 + 0x20;
          iVar9 = iVar8;
          if (iVar8 < iVar5) {
            iVar9 = iVar5;
          }
          if (iVar5 < iVar8) {
            lVar14 = 0;
            do {
              uVar12 = puVar6[lVar13 + lVar14 + 1];
              if (uVar12 != 0) {
                uVar15 = (ulonglong)(iVar5 + (int)lVar14 + 1);
                uVar7 = 0xffffffff;
                goto LAB_1437dad44;
              }
              iVar10 = iVar10 + 0x20;
              lVar14 = lVar14 + 1;
            } while (iVar9 - lVar13 != lVar14);
            uVar7 = 0xffffffff;
            iVar5 = iVar9;
          }
          uVar15 = (ulonglong)(iVar5 + 1);
          iVar5 = iVar3;
        }
        else {
LAB_1437dad44:
          uVar16 = (ulonglong)(-uVar12 & uVar12);
          uVar1 = uVar16 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar5 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar5) {
            iVar5 = iVar3;
          }
        }
      } while (iVar5 != iVar2);
    }
LAB_1437dac8a:
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x60));
    LOCK();
    *(undefined1 *)(param_1 + 0xb1) = 1;
    UNLOCK();
  }
  return 0;
}



// FUNCTION 1437dad98 FUN_1437dad98 body=854 status=ok
// SIG undefined FUN_1437dad98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1437dad98(longlong param_1,undefined8 param_2,undefined1 (*param_3) [16])

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  ushort uVar7;
  uint uVar8;
  ushort uVar9;
  int iVar10;
  int iVar11;
  undefined2 *puVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined1 auStack_c8 [40];
  PSRWLOCK local_a0;
  uint local_94;
  undefined4 local_90;
  undefined4 local_8c;
  PROPVARIANT local_88 [16];
  short *local_78;
  longlong *local_68;
  longlong *local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*param_3 != _DAT_14ab42100) goto LAB_1437dafcf;
  FUN_140056680(&local_58);
  local_60 = (longlong *)0x0;
  puVar12 = local_58;
  if (local_50 == 0) {
    puVar12 = &DAT_149dfb77a;
  }
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))
                    (*(longlong **)(param_1 + 0x70),puVar12,&local_60);
  local_68 = (longlong *)0x0;
  if (iVar4 < 0) {
LAB_1437dafb0:
    if (local_60 != (longlong *)0x0) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  else if (local_60 != (longlong *)0x0) {
    iVar4 = (**(code **)(*local_60 + 0x20))(local_60,0,&local_68);
    if (local_68 != (longlong *)0x0 && -1 < iVar4) {
      local_88[0] = (PROPVARIANT)0x0;
      local_88[1] = (PROPVARIANT)0x0;
      local_88[2] = (PROPVARIANT)0x0;
      local_88[3] = (PROPVARIANT)0x0;
      local_88[4] = (PROPVARIANT)0x0;
      local_88[5] = (PROPVARIANT)0x0;
      local_88[6] = (PROPVARIANT)0x0;
      local_88[7] = (PROPVARIANT)0x0;
      local_88[8] = (PROPVARIANT)0x0;
      local_88[9] = (PROPVARIANT)0x0;
      local_88[10] = (PROPVARIANT)0x0;
      local_88[0xb] = (PROPVARIANT)0x0;
      local_88[0xc] = (PROPVARIANT)0x0;
      local_88[0xd] = (PROPVARIANT)0x0;
      local_88[0xe] = (PROPVARIANT)0x0;
      local_88[0xf] = (PROPVARIANT)0x0;
      local_78 = (short *)0x0;
      if ((*(longlong *)*param_3 == 0x4e27082cf19f064d &&
           *(longlong *)(*param_3 + 8) == 0x4c8ebba1826873bc) &&
         (iVar4 = (**(code **)(*local_68 + 0x28))(local_68,param_3,local_88),
         local_78 != (short *)0x0 && -1 < iVar4)) {
        uVar9 = 8;
        if ((ushort)local_78[1] < 8) {
          uVar9 = local_78[1];
        }
        uVar7 = 2;
        if (2 < uVar9) {
          uVar7 = uVar9;
        }
        local_94 = (uint)uVar7;
        local_90 = *(undefined4 *)(local_78 + 2);
        uVar18 = 0;
        local_8c = 0;
        if (*local_78 == -2) {
          local_8c = *(undefined4 *)(local_78 + 10);
        }
        local_a0 = (PSRWLOCK)(param_1 + 0x68);
        AcquireSRWLockShared(local_a0);
        iVar4 = *(int *)(param_1 + 0x40);
        if (iVar4 == 0) {
          uVar14 = 1;
          iVar13 = 0;
          iVar5 = 0;
        }
        else {
          puVar6 = *(uint **)(param_1 + 0x38);
          if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
            puVar6 = (uint *)(param_1 + 0x28);
          }
          uVar8 = *puVar6;
          if (uVar8 == 0) {
            iVar5 = iVar4 + 0x1e;
            if (-1 < iVar4 + -1) {
              iVar5 = iVar4 + -1;
            }
            uVar18 = 0;
            uVar14 = (ulonglong)(uint)(iVar5 >> 5);
            if (iVar5 >> 5 < 1) {
              uVar14 = uVar18;
            }
            iVar13 = 0;
            do {
              if (uVar14 == uVar18) goto LAB_1437daf8a;
              iVar13 = iVar13 + 0x20;
              uVar8 = puVar6[uVar18 + 1];
              uVar18 = uVar18 + 1;
            } while (uVar8 == 0);
          }
          else {
            uVar18 = 0;
            iVar13 = 0;
          }
          uVar14 = (ulonglong)(-uVar8 & uVar8);
          uVar1 = uVar14 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          iVar5 = (iVar13 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if (iVar4 <= iVar5) {
            iVar5 = iVar4;
          }
        }
        if (iVar5 != iVar4) {
          uVar8 = 0xffffffff;
          do {
            plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar5 * 0x10);
            (**(code **)(*plVar3 + 0x40))(plVar3,&local_58,&local_94);
            uVar8 = ~(uint)uVar14 & uVar8;
            puVar6 = *(uint **)(param_1 + 0x38);
            if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
              puVar6 = (uint *)(param_1 + 0x28);
            }
            iVar2 = *(int *)(param_1 + 0x40);
            iVar5 = (int)uVar18;
            lVar16 = (longlong)iVar5;
            uVar15 = puVar6[lVar16] & uVar8;
            if (uVar15 == 0) {
              iVar10 = iVar2 + 0x1e;
              if (-1 < iVar2 + -1) {
                iVar10 = iVar2 + -1;
              }
              iVar10 = iVar10 >> 5;
              iVar13 = iVar13 + 0x20;
              iVar11 = iVar10;
              if (iVar10 < iVar5) {
                iVar11 = iVar5;
              }
              if (iVar5 < iVar10) {
                lVar17 = 0;
                do {
                  uVar15 = puVar6[lVar16 + lVar17 + 1];
                  if (uVar15 != 0) {
                    uVar18 = (ulonglong)(iVar5 + (int)lVar17 + 1);
                    uVar8 = 0xffffffff;
                    goto LAB_1437db09d;
                  }
                  iVar13 = iVar13 + 0x20;
                  lVar17 = lVar17 + 1;
                } while (iVar11 - lVar16 != lVar17);
                uVar8 = 0xffffffff;
                iVar5 = iVar11;
              }
              uVar18 = (ulonglong)(iVar5 + 1);
              iVar5 = iVar2;
            }
            else {
LAB_1437db09d:
              uVar14 = (ulonglong)(-uVar15 & uVar15);
              uVar1 = uVar14 * 2 + 1;
              lVar16 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                }
              }
              iVar5 = (iVar13 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
              if (iVar2 <= iVar5) {
                iVar5 = iVar2;
              }
            }
          } while (iVar5 != iVar4);
        }
LAB_1437daf8a:
        ReleaseSRWLockShared(local_a0);
      }
      PropVariantClear(local_88);
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    goto LAB_1437dafb0;
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1437dafcf:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1437db0f0 FUN_1437db0f0 body=606 status=ok
// SIG undefined FUN_1437db0f0(void)

undefined8 FUN_1437db0f0(longlong param_1,undefined8 param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  PSRWLOCK local_60;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb12cf0 == 0) {
    FUN_140056680(local_58);
    uVar5 = FUN_147e12232(param_1,local_58);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    uVar11 = param_3 - 1;
    if ((uVar11 < 8) && ((0x8bU >> (uVar11 & 0x1f) & 1) != 0)) {
      local_64 = *(undefined4 *)(&DAT_14ab42650 + (ulonglong)uVar11 * 4);
      FUN_140056680(local_58,param_2);
      local_60 = (PSRWLOCK)(param_1 + 0x68);
      AcquireSRWLockShared(local_60);
      iVar2 = *(int *)(param_1 + 0x40);
      if (iVar2 == 0) {
        uVar16 = 1;
        uVar15 = 0;
        iVar10 = 0;
        iVar6 = 0;
      }
      else {
        puVar7 = *(uint **)(param_1 + 0x38);
        if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
          puVar7 = (uint *)(param_1 + 0x28);
        }
        uVar11 = *puVar7;
        if (uVar11 == 0) {
          iVar6 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar6 = iVar2 + -1;
          }
          uVar15 = 0;
          uVar16 = (ulonglong)(uint)(iVar6 >> 5);
          if (iVar6 >> 5 < 1) {
            uVar16 = uVar15;
          }
          iVar10 = 0;
          do {
            if (uVar16 == uVar15) goto LAB_1437db23a;
            iVar10 = iVar10 + 0x20;
            uVar11 = puVar7[uVar15 + 1];
            uVar15 = uVar15 + 1;
          } while (uVar11 == 0);
        }
        else {
          uVar15 = 0;
          iVar10 = 0;
        }
        uVar16 = (ulonglong)(-uVar11 & uVar11);
        uVar1 = uVar16 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar6 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar6) {
          iVar6 = iVar2;
        }
      }
      if (iVar6 != iVar2) {
        uVar11 = 0xffffffff;
        do {
          plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar6 * 0x10);
          (**(code **)(*plVar4 + 0x38))(plVar4,local_58,local_64,uVar5);
          uVar11 = ~(uint)uVar16 & uVar11;
          puVar7 = *(uint **)(param_1 + 0x38);
          if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
            puVar7 = (uint *)(param_1 + 0x28);
          }
          iVar3 = *(int *)(param_1 + 0x40);
          iVar6 = (int)uVar15;
          lVar13 = (longlong)iVar6;
          uVar12 = puVar7[lVar13] & uVar11;
          if (uVar12 == 0) {
            iVar8 = iVar3 + 0x1e;
            if (-1 < iVar3 + -1) {
              iVar8 = iVar3 + -1;
            }
            iVar8 = iVar8 >> 5;
            iVar10 = iVar10 + 0x20;
            iVar9 = iVar8;
            if (iVar8 < iVar6) {
              iVar9 = iVar6;
            }
            if (iVar6 < iVar8) {
              lVar14 = 0;
              do {
                uVar12 = puVar7[lVar13 + lVar14 + 1];
                if (uVar12 != 0) {
                  uVar15 = (ulonglong)(iVar6 + (int)lVar14 + 1);
                  uVar11 = 0xffffffff;
                  goto LAB_1437db2fc;
                }
                iVar10 = iVar10 + 0x20;
                lVar14 = lVar14 + 1;
              } while (iVar9 - lVar13 != lVar14);
              uVar11 = 0xffffffff;
              iVar6 = iVar9;
            }
            uVar15 = (ulonglong)(iVar6 + 1);
            iVar6 = iVar3;
          }
          else {
LAB_1437db2fc:
            uVar16 = (ulonglong)(-uVar12 & uVar12);
            uVar1 = uVar16 * 2 + 1;
            lVar13 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            iVar6 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
            if (iVar3 <= iVar6) {
              iVar6 = iVar3;
            }
          }
        } while (iVar6 != iVar2);
      }
LAB_1437db23a:
      ReleaseSRWLockShared(local_60);
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1437db350 FUN_1437db350 body=565 status=ok
// SIG undefined FUN_1437db350(void)

undefined8 FUN_1437db350(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auStack_88 [40];
  PSRWLOCK local_60;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb12cf0 == 0) {
    FUN_140056680(local_58);
    uVar5 = FUN_147e12232(param_1,local_58);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    FUN_140056680(local_58,param_2);
    local_60 = (PSRWLOCK)(param_1 + 0x68);
    AcquireSRWLockShared(local_60);
    iVar2 = *(int *)(param_1 + 0x40);
    if (iVar2 == 0) {
      uVar12 = 1;
      uVar16 = 0;
      iVar11 = 0;
      iVar6 = 0;
    }
    else {
      puVar7 = *(uint **)(param_1 + 0x38);
      if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x28);
      }
      uVar8 = *puVar7;
      if (uVar8 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        uVar16 = 0;
        uVar12 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar12 = uVar16;
        }
        iVar11 = 0;
        do {
          if (uVar12 == uVar16) goto LAB_1437db474;
          iVar11 = iVar11 + 0x20;
          uVar8 = puVar7[uVar16 + 1];
          uVar16 = uVar16 + 1;
        } while (uVar8 == 0);
      }
      else {
        uVar16 = 0;
        iVar11 = 0;
      }
      uVar12 = (ulonglong)(-uVar8 & uVar8);
      uVar1 = uVar12 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar6 = (iVar11 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar6) {
        iVar6 = iVar2;
      }
    }
    if (iVar6 != iVar2) {
      uVar8 = 0xffffffff;
      do {
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar6 * 0x10);
        (**(code **)(*plVar4 + 0x30))(plVar4,local_58,uVar5);
        uVar8 = ~(uint)uVar12 & uVar8;
        puVar7 = *(uint **)(param_1 + 0x38);
        if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
          puVar7 = (uint *)(param_1 + 0x28);
        }
        iVar3 = *(int *)(param_1 + 0x40);
        iVar6 = (int)uVar16;
        lVar14 = (longlong)iVar6;
        uVar13 = puVar7[lVar14] & uVar8;
        if (uVar13 == 0) {
          iVar9 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar9 = iVar3 + -1;
          }
          iVar9 = iVar9 >> 5;
          iVar11 = iVar11 + 0x20;
          iVar10 = iVar9;
          if (iVar9 < iVar6) {
            iVar10 = iVar6;
          }
          if (iVar6 < iVar9) {
            lVar15 = 0;
            do {
              uVar13 = puVar7[lVar14 + lVar15 + 1];
              if (uVar13 != 0) {
                uVar16 = (ulonglong)(iVar6 + (int)lVar15 + 1);
                uVar8 = 0xffffffff;
                goto LAB_1437db532;
              }
              iVar11 = iVar11 + 0x20;
              lVar15 = lVar15 + 1;
            } while (iVar10 - lVar14 != lVar15);
            uVar8 = 0xffffffff;
            iVar6 = iVar10;
          }
          uVar16 = (ulonglong)(iVar6 + 1);
          iVar6 = iVar3;
        }
        else {
LAB_1437db532:
          uVar12 = (ulonglong)(-uVar13 & uVar13);
          uVar1 = uVar12 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar6 = (iVar11 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar6) {
            iVar6 = iVar3;
          }
        }
      } while (iVar6 != iVar2);
    }
LAB_1437db474:
    ReleaseSRWLockShared(local_60);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1437db586 FUN_1437db586 body=565 status=ok
// SIG undefined FUN_1437db586(void)

undefined8 FUN_1437db586(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auStack_88 [40];
  PSRWLOCK local_60;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb12cf0 == 0) {
    FUN_140056680(local_58);
    uVar5 = FUN_147e12232(param_1,local_58);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    FUN_140056680(local_58,param_2);
    local_60 = (PSRWLOCK)(param_1 + 0x68);
    AcquireSRWLockShared(local_60);
    iVar2 = *(int *)(param_1 + 0x40);
    if (iVar2 == 0) {
      uVar12 = 1;
      uVar16 = 0;
      iVar11 = 0;
      iVar6 = 0;
    }
    else {
      puVar7 = *(uint **)(param_1 + 0x38);
      if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x28);
      }
      uVar8 = *puVar7;
      if (uVar8 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        uVar16 = 0;
        uVar12 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar12 = uVar16;
        }
        iVar11 = 0;
        do {
          if (uVar12 == uVar16) goto LAB_1437db6aa;
          iVar11 = iVar11 + 0x20;
          uVar8 = puVar7[uVar16 + 1];
          uVar16 = uVar16 + 1;
        } while (uVar8 == 0);
      }
      else {
        uVar16 = 0;
        iVar11 = 0;
      }
      uVar12 = (ulonglong)(-uVar8 & uVar8);
      uVar1 = uVar12 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar6 = (iVar11 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar6) {
        iVar6 = iVar2;
      }
    }
    if (iVar6 != iVar2) {
      uVar8 = 0xffffffff;
      do {
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar6 * 0x10);
        (**(code **)(*plVar4 + 0x28))(plVar4,local_58,uVar5);
        uVar8 = ~(uint)uVar12 & uVar8;
        puVar7 = *(uint **)(param_1 + 0x38);
        if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
          puVar7 = (uint *)(param_1 + 0x28);
        }
        iVar3 = *(int *)(param_1 + 0x40);
        iVar6 = (int)uVar16;
        lVar14 = (longlong)iVar6;
        uVar13 = puVar7[lVar14] & uVar8;
        if (uVar13 == 0) {
          iVar9 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar9 = iVar3 + -1;
          }
          iVar9 = iVar9 >> 5;
          iVar11 = iVar11 + 0x20;
          iVar10 = iVar9;
          if (iVar9 < iVar6) {
            iVar10 = iVar6;
          }
          if (iVar6 < iVar9) {
            lVar15 = 0;
            do {
              uVar13 = puVar7[lVar14 + lVar15 + 1];
              if (uVar13 != 0) {
                uVar16 = (ulonglong)(iVar6 + (int)lVar15 + 1);
                uVar8 = 0xffffffff;
                goto LAB_1437db768;
              }
              iVar11 = iVar11 + 0x20;
              lVar15 = lVar15 + 1;
            } while (iVar10 - lVar14 != lVar15);
            uVar8 = 0xffffffff;
            iVar6 = iVar10;
          }
          uVar16 = (ulonglong)(iVar6 + 1);
          iVar6 = iVar3;
        }
        else {
LAB_1437db768:
          uVar12 = (ulonglong)(-uVar13 & uVar13);
          uVar1 = uVar12 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar6 = (iVar11 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar6) {
            iVar6 = iVar3;
          }
        }
      } while (iVar6 != iVar2);
    }
LAB_1437db6aa:
    ReleaseSRWLockShared(local_60);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1437db7bc FUN_1437db7bc body=1375 status=ok
// SIG undefined FUN_1437db7bc(void)

undefined8 FUN_1437db7bc(longlong param_1,int param_2,int param_3,undefined8 param_4)

{
  PSRWLOCK SRWLock;
  longlong *plVar1;
  uint uVar2;
  uint *puVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  char cVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  uint *local_68;
  PSRWLOCK local_60;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cb12cf0 == 0) {
    cVar11 = (param_3 != 1) + '\x01';
    if (param_3 == 0) {
      cVar11 = '\0';
    }
    FUN_140056680(local_58,param_4);
    SRWLock = (PSRWLOCK)(param_1 + 0x68);
    AcquireSRWLockShared(SRWLock);
    local_68 = (uint *)(param_1 + 0x28);
    uVar5 = *(uint *)(param_1 + 0x40);
    local_70 = (ulonglong)uVar5;
    local_60 = SRWLock;
    if (param_2 == 1) {
      if (uVar5 == 0) {
        uVar15 = 1;
        uVar9 = 0;
        iVar10 = 0;
        uVar4 = 0;
      }
      else {
        puVar3 = *(uint **)(param_1 + 0x38);
        if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
          puVar3 = local_68;
        }
        uVar2 = *puVar3;
        if (uVar2 == 0) {
          iVar10 = uVar5 + 0x1e;
          if (-1 < (int)(uVar5 - 1)) {
            iVar10 = uVar5 - 1;
          }
          uVar9 = 0;
          uVar4 = (ulonglong)(uint)(iVar10 >> 5);
          if (iVar10 >> 5 < 1) {
            uVar4 = uVar9;
          }
          iVar10 = 0;
          do {
            if (uVar4 == uVar9) goto LAB_1437dbbc1;
            iVar10 = iVar10 + 0x20;
            uVar2 = puVar3[uVar9 + 1];
            uVar9 = uVar9 + 1;
          } while (uVar2 == 0);
        }
        else {
          uVar9 = 0;
          iVar10 = 0;
        }
        uVar15 = (ulonglong)(-uVar2 & uVar2);
        uVar4 = uVar15 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        uVar2 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        uVar4 = (ulonglong)uVar2;
        if ((int)uVar5 <= (int)uVar2) {
          uVar4 = local_70;
        }
      }
      if ((uint)uVar4 != uVar5) {
        uVar5 = 0xffffffff;
        do {
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + (longlong)(int)uVar4 * 0x10);
          (**(code **)(*plVar1 + 0x18))(plVar1,cVar11,local_58);
          uVar5 = ~(uint)uVar15 & uVar5;
          puVar3 = *(uint **)(param_1 + 0x38);
          if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
            puVar3 = local_68;
          }
          uVar2 = *(uint *)(param_1 + 0x40);
          iVar8 = (int)uVar9;
          lVar13 = (longlong)iVar8;
          uVar12 = puVar3[lVar13] & uVar5;
          if (uVar12 == 0) {
            iVar6 = uVar2 + 0x1e;
            if (-1 < (int)(uVar2 - 1)) {
              iVar6 = uVar2 - 1;
            }
            iVar6 = iVar6 >> 5;
            iVar10 = iVar10 + 0x20;
            iVar7 = iVar6;
            if (iVar6 < iVar8) {
              iVar7 = iVar8;
            }
            if (iVar8 < iVar6) {
              lVar14 = 0;
              do {
                uVar12 = puVar3[lVar13 + lVar14 + 1];
                if (uVar12 != 0) {
                  uVar9 = (ulonglong)(iVar8 + (int)lVar14 + 1);
                  uVar5 = 0xffffffff;
                  goto LAB_1437dbb65;
                }
                iVar10 = iVar10 + 0x20;
                lVar14 = lVar14 + 1;
              } while (iVar7 - lVar13 != lVar14);
              uVar5 = 0xffffffff;
              iVar8 = iVar7;
            }
            uVar9 = (ulonglong)(iVar8 + 1);
            uVar12 = uVar2;
          }
          else {
LAB_1437dbb65:
            uVar15 = (ulonglong)(-uVar12 & uVar12);
            uVar4 = uVar15 * 2 + 1;
            lVar13 = 0x3f;
            if (uVar4 != 0) {
              for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            uVar12 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
            if ((int)uVar2 <= (int)uVar12) {
              uVar12 = uVar2;
            }
          }
          uVar4 = (ulonglong)uVar12;
        } while (uVar12 != (uint)local_70);
      }
    }
    else if (param_2 == 0) {
      if (uVar5 == 0) {
        uVar15 = 1;
        iVar10 = 0;
        uVar9 = 0;
        uVar4 = 0;
      }
      else {
        puVar3 = *(uint **)(param_1 + 0x38);
        if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
          puVar3 = local_68;
        }
        uVar2 = *puVar3;
        if (uVar2 == 0) {
          iVar10 = uVar5 + 0x1e;
          if (-1 < (int)(uVar5 - 1)) {
            iVar10 = uVar5 - 1;
          }
          uVar9 = 0;
          uVar4 = (ulonglong)(uint)(iVar10 >> 5);
          if (iVar10 >> 5 < 1) {
            uVar4 = uVar9;
          }
          iVar10 = 0;
          do {
            if (uVar4 == uVar9) goto LAB_1437dbbc1;
            iVar10 = iVar10 + 0x20;
            uVar2 = puVar3[uVar9 + 1];
            uVar9 = uVar9 + 1;
          } while (uVar2 == 0);
        }
        else {
          iVar10 = 0;
          uVar9 = 0;
        }
        uVar15 = (ulonglong)(-uVar2 & uVar2);
        uVar4 = uVar15 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        uVar2 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        uVar4 = (ulonglong)uVar2;
        if ((int)uVar5 <= (int)uVar2) {
          uVar4 = local_70;
        }
      }
      if ((uint)uVar4 != uVar5) {
        uVar5 = 0xffffffff;
        do {
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + (longlong)(int)uVar4 * 0x10);
          (**(code **)(*plVar1 + 0x20))(plVar1,cVar11,local_58);
          uVar5 = ~(uint)uVar15 & uVar5;
          puVar3 = *(uint **)(param_1 + 0x38);
          if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
            puVar3 = local_68;
          }
          uVar2 = *(uint *)(param_1 + 0x40);
          iVar8 = (int)uVar9;
          lVar13 = (longlong)iVar8;
          uVar12 = puVar3[lVar13] & uVar5;
          if (uVar12 == 0) {
            iVar6 = uVar2 + 0x1e;
            if (-1 < (int)(uVar2 - 1)) {
              iVar6 = uVar2 - 1;
            }
            iVar6 = iVar6 >> 5;
            iVar10 = iVar10 + 0x20;
            iVar7 = iVar6;
            if (iVar6 < iVar8) {
              iVar7 = iVar8;
            }
            if (iVar8 < iVar6) {
              lVar14 = 0;
              do {
                uVar12 = puVar3[lVar13 + lVar14 + 1];
                if (uVar12 != 0) {
                  uVar9 = (ulonglong)(iVar8 + (int)lVar14 + 1);
                  uVar5 = 0xffffffff;
                  goto LAB_1437dba65;
                }
                iVar10 = iVar10 + 0x20;
                lVar14 = lVar14 + 1;
              } while (iVar7 - lVar13 != lVar14);
              uVar5 = 0xffffffff;
              iVar8 = iVar7;
            }
            uVar9 = (ulonglong)(iVar8 + 1);
            uVar12 = uVar2;
          }
          else {
LAB_1437dba65:
            uVar15 = (ulonglong)(-uVar12 & uVar12);
            uVar4 = uVar15 * 2 + 1;
            lVar13 = 0x3f;
            if (uVar4 != 0) {
              for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            uVar12 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
            if ((int)uVar2 <= (int)uVar12) {
              uVar12 = uVar2;
            }
          }
          uVar4 = (ulonglong)uVar12;
        } while (uVar12 != (uint)local_70);
      }
    }
    else {
      if (uVar5 == 0) {
        uVar15 = 1;
        uVar9 = 0;
        iVar10 = 0;
        uVar4 = 0;
      }
      else {
        puVar3 = *(uint **)(param_1 + 0x38);
        if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
          puVar3 = local_68;
        }
        uVar2 = *puVar3;
        if (uVar2 == 0) {
          iVar10 = uVar5 + 0x1e;
          if (-1 < (int)(uVar5 - 1)) {
            iVar10 = uVar5 - 1;
          }
          uVar9 = 0;
          uVar4 = (ulonglong)(uint)(iVar10 >> 5);
          if (iVar10 >> 5 < 1) {
            uVar4 = uVar9;
          }
          iVar10 = 0;
          do {
            if (uVar4 == uVar9) goto LAB_1437dbbc1;
            iVar10 = iVar10 + 0x20;
            uVar2 = puVar3[uVar9 + 1];
            uVar9 = uVar9 + 1;
          } while (uVar2 == 0);
        }
        else {
          uVar9 = 0;
          iVar10 = 0;
        }
        uVar15 = (ulonglong)(-uVar2 & uVar2);
        uVar4 = uVar15 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        uVar2 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        uVar4 = (ulonglong)uVar2;
        if ((int)uVar5 <= (int)uVar2) {
          uVar4 = local_70;
        }
      }
      if ((uint)uVar4 != uVar5) {
        uVar5 = 0xffffffff;
        do {
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + (longlong)(int)uVar4 * 0x10);
          (**(code **)(*plVar1 + 0x18))(plVar1,cVar11,local_58);
          (**(code **)(*plVar1 + 0x20))(plVar1,cVar11,local_58);
          uVar5 = ~(uint)uVar15 & uVar5;
          puVar3 = *(uint **)(param_1 + 0x38);
          if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
            puVar3 = local_68;
          }
          uVar2 = *(uint *)(param_1 + 0x40);
          iVar8 = (int)uVar9;
          lVar13 = (longlong)iVar8;
          uVar12 = puVar3[lVar13] & uVar5;
          if (uVar12 == 0) {
            iVar6 = uVar2 + 0x1e;
            if (-1 < (int)(uVar2 - 1)) {
              iVar6 = uVar2 - 1;
            }
            iVar6 = iVar6 >> 5;
            iVar10 = iVar10 + 0x20;
            iVar7 = iVar6;
            if (iVar6 < iVar8) {
              iVar7 = iVar8;
            }
            if (iVar8 < iVar6) {
              lVar14 = 0;
              do {
                uVar12 = puVar3[lVar13 + lVar14 + 1];
                if (uVar12 != 0) {
                  uVar9 = (ulonglong)(iVar8 + (int)lVar14 + 1);
                  uVar5 = 0xffffffff;
                  goto LAB_1437dbcb3;
                }
                iVar10 = iVar10 + 0x20;
                lVar14 = lVar14 + 1;
              } while (iVar7 - lVar13 != lVar14);
              uVar5 = 0xffffffff;
              iVar8 = iVar7;
            }
            uVar9 = (ulonglong)(iVar8 + 1);
            uVar12 = uVar2;
          }
          else {
LAB_1437dbcb3:
            uVar15 = (ulonglong)(-uVar12 & uVar12);
            uVar4 = uVar15 * 2 + 1;
            lVar13 = 0x3f;
            if (uVar4 != 0) {
              for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            uVar12 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
            if ((int)uVar2 <= (int)uVar12) {
              uVar12 = uVar2;
            }
          }
          uVar4 = (ulonglong)uVar12;
        } while (uVar12 != (uint)local_70);
      }
    }
LAB_1437dbbc1:
    ReleaseSRWLockShared(local_60);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1437dbd1c FUN_1437dbd1c body=202 status=ok
// SIG undefined FUN_1437dbd1c(void)

void FUN_1437dbd1c(void)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  FUN_141471170(&DAT_14cb12ce0,L"au.DisableDeviceSwap",&DAT_14cb12cf0,
                L"Disable device swap handling code for Audio Mixer on Windows.\n0: Not Enabled, 1: Enabled"
               );
  atexit(FUN_1437d994c);
  local_38 = 0;
  FUN_141471170(&DAT_14cb12cf8,L"au.EnableDetailedWindowsDeviceLogging",&DAT_14cb12d08,
                L"Enables detailed windows device logging.\n0: Not Enabled, 1: Enabled");
  atexit(FUN_1437d9991);
  local_28 = 0x800000014ab422e8;
  local_14 = 0x1a;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_1464166a6(&local_28);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


