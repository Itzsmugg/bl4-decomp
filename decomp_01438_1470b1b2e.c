// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1470b1b2e FUN_1470b1b2e body=549 status=ok
// SIG undefined FUN_1470b1b2e(void)

void FUN_1470b1b2e(longlong *param_1,longlong *param_2,undefined2 *param_3,short *param_4)

{
  ushort uVar1;
  short sVar2;
  longlong lVar3;
  short sVar4;
  short sVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  short sVar14;
  undefined1 auStack_78 [32];
  longlong local_58 [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar8 = (uint)*(ushort *)*param_2;
  iVar13 = (int)param_2[1];
  uVar9 = uVar8;
  if ((longlong)iVar13 != 0) {
    lVar11 = 0;
    uVar12 = uVar8;
    do {
      uVar1 = *(ushort *)(*param_2 + lVar11);
      if ((short)uVar1 < (short)uVar9) {
        uVar9 = (uint)uVar1;
      }
      uVar8 = (uint)uVar1;
      if ((short)uVar1 <= (short)uVar12) {
        uVar8 = uVar12;
      }
      lVar11 = lVar11 + 2;
      uVar12 = uVar8;
    } while ((longlong)iVar13 * 2 != lVar11);
  }
  sVar5 = (short)uVar9;
  sVar4 = (short)uVar8;
  sVar14 = (sVar4 - sVar5) + 1;
  iVar13 = (uVar8 - iVar13) + 1;
  *param_3 = (short)iVar13;
  *param_4 = sVar4;
  uVar8 = (uint)sVar14;
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_1405b54a2(local_58,uVar8);
  if (0 < sVar14) {
    uVar6 = 0;
    do {
      *(undefined2 *)(local_58[0] + uVar6 * 2) = 0xffff;
      uVar6 = uVar6 + 1;
    } while (uVar8 != uVar6);
  }
  lVar11 = param_2[1];
  lVar7 = (longlong)sVar5;
  if ((longlong)(int)lVar11 != 0) {
    lVar3 = *param_2;
    lVar10 = 0;
    do {
      *(short *)(local_58[0] + (*(short *)(lVar3 + lVar10) - lVar7) * 2) = (short)iVar13;
      iVar13 = iVar13 + 1;
      lVar10 = lVar10 + 2;
    } while ((longlong)(int)lVar11 * 2 != lVar10);
  }
  if (0 < sVar14) {
    uVar6 = 0;
    do {
      if (*(short *)(local_58[0] + uVar6 * 2) < 0) {
        *(short *)(local_58[0] + uVar6 * 2) = (short)uVar9;
        uVar9 = uVar9 + 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar8 != uVar6);
  }
  iVar13 = (int)sVar5;
  if (sVar5 <= sVar4) {
    uVar6 = lVar7 << 4 | 0xf;
    lVar11 = 0;
    do {
      lVar3 = param_1[9];
      *(undefined2 *)(lVar3 + -0x1e + uVar6 * 2) = *(undefined2 *)(local_58[0] + lVar11 * 2);
      sVar14 = *(short *)(lVar3 + -2 + uVar6 * 2);
      if ((sVar5 <= sVar14) && (sVar14 <= sVar4)) {
        *(undefined2 *)(lVar3 + -2 + uVar6 * 2) =
             *(undefined2 *)(local_58[0] + (longlong)(sVar14 - iVar13) * 2);
      }
      sVar14 = *(short *)(lVar3 + uVar6 * 2);
      if ((sVar5 <= sVar14) && (sVar14 <= sVar4)) {
        *(undefined2 *)(lVar3 + uVar6 * 2) =
             *(undefined2 *)(local_58[0] + (longlong)(sVar14 - iVar13) * 2);
      }
      lVar11 = lVar11 + 1;
      uVar6 = uVar6 + 0x10;
    } while ((sVar4 - lVar7) + 1 != lVar11);
  }
  sVar14 = *(short *)((longlong)param_1 + 0x12);
  if (0 < sVar14) {
    lVar11 = 0;
    do {
      sVar2 = *(short *)(*param_1 + lVar11 * 2);
      if ((sVar5 <= sVar2) && (sVar2 <= sVar4)) {
        *(undefined2 *)(*param_1 + lVar11 * 2) =
             *(undefined2 *)(local_58[0] + (longlong)(sVar2 - iVar13) * 2);
        sVar14 = *(short *)((longlong)param_1 + 0x12);
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < sVar14);
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470b1d54 FUN_1470b1d54 body=936 status=ok
// SIG undefined FUN_1470b1d54(void)

void FUN_1470b1d54(longlong *param_1,longlong ****param_2)

{
  short sVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  longlong ****pppplVar5;
  int iVar6;
  longlong lVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined1 auStack_128 [32];
  int local_108;
  int local_100;
  int local_f8;
  longlong local_e8;
  int local_e0;
  longlong local_d8;
  int local_d0;
  longlong ***local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong uStack_b0;
  undefined8 ***local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong local_90;
  undefined8 ***local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = (undefined8 ****)0x0;
  uStack_80 = 0;
  FUN_140cd1a74(&local_88,param_1[0xd],(longlong)(int)param_1[0xe]);
  local_a8 = (undefined8 ****)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0xf;
  FUN_1470b1a6e(&local_a8,param_1 + 0xf);
  ppppuVar9 = &local_a8;
  if (0xf < local_90) {
    ppppuVar9 = (undefined8 ****)local_a8;
  }
  local_108 = (int)(short)param_1[0xb];
  ppppuVar8 = &local_88;
  if (0xf < uStack_70) {
    ppppuVar8 = (undefined8 ****)local_88;
  }
  FUN_140002266(&local_c8,L"FGbxExpressionParser:\n  In: %hs\n  Out: %hs\n  Registers: %d\n",
                ppppuVar8,ppppuVar9);
  if (&local_c8 == param_2) {
    if ((longlong ****)local_c8 != (longlong ****)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != (longlong ***)0x0) {
      FUN_1400020a8();
    }
    *param_2 = local_c8;
    local_c8 = (longlong ***)0x0;
    *(int *)(param_2 + 1) = (int)uStack_c0;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_c0._4_4_;
  }
  if (param_1[0x11] == 0) {
    if (0 < (short)param_1[0xb]) {
      lVar7 = 0x18;
      lVar4 = 0;
      do {
        lVar2 = param_1[9];
        FUN_140002266(&local_d8,L"\n    [%d]",(int)*(short *)(lVar2 + -0x18 + lVar7));
        if (*(char *)(lVar2 + -0x14 + lVar7) == '\x01') {
          FUN_1400020e8(&local_d8,&DAT_14a184852,2);
        }
        pppplVar5 = &local_c8;
        if (*(int *)(lVar2 + -8 + lVar7) < 1) {
          if (-1 < *(int *)(lVar2 + lVar7)) {
            local_c8 = (longlong ***)0x0;
            uStack_c0 = 0;
            local_b8 = 0;
            uStack_b0 = 0xf;
            FUN_1470b1920(&local_c8,lVar2 + lVar7);
            if (0xf < uStack_b0) {
              pppplVar5 = (longlong ****)local_c8;
            }
            sVar1 = *(short *)(lVar2 + -0x16 + lVar7);
            local_f8 = (int)*(short *)(*param_1 + (longlong)sVar1 * 2);
            local_108 = (int)*(short *)(lVar2 + 6 + lVar7);
            iVar6 = (int)*(short *)(lVar2 + 4 + lVar7);
            local_100 = (int)sVar1;
            pwVar3 = L" op[%hs] l[%d] r[%d] stage[%d, term=%d]";
            goto LAB_1470b1fc2;
          }
        }
        else {
          local_b8 = 0;
          uStack_b0 = 0;
          local_c8 = (longlong ***)0x0;
          uStack_c0 = 0;
          FUN_140cd1a74(&local_c8,*(undefined8 *)(lVar2 + -0x10 + lVar7));
          iVar6 = (int)*(short *)(lVar2 + 4 + lVar7);
          if (iVar6 < 0) {
            if (0xf < uStack_b0) {
              pppplVar5 = (longlong ****)local_c8;
            }
            iVar6 = (int)*(short *)(lVar2 + -0x12 + lVar7);
            pwVar3 = L" value[%hs] @%d";
          }
          else {
            sVar1 = *(short *)(lVar2 + 6 + lVar7);
            local_108 = (int)sVar1;
            if (sVar1 < 0) {
              if (0xf < uStack_b0) {
                pppplVar5 = (longlong ****)local_c8;
              }
              local_108 = (int)*(short *)(lVar2 + -0x12 + lVar7);
              pwVar3 = L" call[%hs(%d)] @%d";
            }
            else {
              if (0xf < uStack_b0) {
                pppplVar5 = (longlong ****)local_c8;
              }
              local_100 = (int)*(short *)(lVar2 + -0x12 + lVar7);
              pwVar3 = L" call[%hs(%d->%d)] @%d";
            }
          }
LAB_1470b1fc2:
          FUN_140002266(&local_e8,pwVar3,pppplVar5,iVar6);
          iVar6 = local_e0 + -1;
          if (local_e0 == 0) {
            iVar6 = 0;
          }
          FUN_1400020e8(&local_d8,local_e8,iVar6);
          if (local_e8 != 0) {
            FUN_1400020a8();
          }
          FUN_1401d9a90(&local_c8);
        }
        iVar6 = local_d0 + -1;
        if (local_d0 == 0) {
          iVar6 = 0;
        }
        FUN_1400020e8(param_2,local_d8,iVar6);
        if (local_d8 != 0) {
          FUN_1400020a8();
        }
        lVar4 = lVar4 + 1;
        lVar7 = lVar7 + 0x20;
      } while (lVar4 < (short)param_1[0xb]);
    }
  }
  else {
    FUN_140002266(&local_c8,L"  Parse Error: %hs\n  Error At: %d\n",param_1[0x11],
                  (int)(short)param_1[0x12]);
    iVar6 = (int)uStack_c0 + -1;
    if ((int)uStack_c0 == 0) {
      iVar6 = 0;
    }
    FUN_1400020e8(param_2,local_c8,iVar6);
    if ((longlong ****)local_c8 != (longlong ****)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_1401d9a90(&local_a8);
  FUN_1401d9a90(&local_88);
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470b20fd FUN_1470b20fd body=257 status=ok
// SIG undefined FUN_1470b20fd(void)

float FUN_1470b20fd(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  
  dVar1 = *param_1;
  dVar2 = param_1[1];
  dVar3 = *param_2;
  dVar4 = param_2[1];
  dVar5 = param_1[2];
  dVar6 = param_2[2];
  dVar7 = param_1[3];
  dVar8 = param_2[3];
  fVar9 = ABS((float)(dVar7 * dVar8 + dVar5 * dVar6 + dVar1 * dVar3 + dVar2 * dVar4) /
              (float)(SQRT(dVar8 * dVar8 + dVar6 * dVar6 + dVar3 * dVar3 + dVar4 * dVar4) *
                     SQRT(dVar7 * dVar7 + dVar5 * dVar5 + dVar1 * dVar1 + dVar2 * dVar2)));
  if (1.0 <= fVar9) {
    fVar9 = 1.0;
  }
  fVar9 = acosf(fVar9);
  return fVar9 + fVar9;
}



// FUNCTION 1470b21fe FUN_1470b21fe body=135 status=ok
// SIG undefined FUN_1470b21fe(void)

undefined8 * FUN_1470b21fe(undefined8 *param_1,longlong *param_2,wchar_t *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  size_t sVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    iVar5 = 1;
    lVar7 = 0;
    do {
      if ((char)iVar5 == '\0') {
        sVar4 = wcslen(param_3);
        FUN_1400020e8(param_1,param_3,sVar4 & 0xffffffff);
      }
      iVar1 = *(int *)(lVar2 + 8 + lVar7);
      iVar5 = 0;
      iVar6 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar6 = iVar5;
      }
      FUN_1400020e8(param_1,*(undefined8 *)(lVar2 + lVar7),iVar6);
      lVar7 = lVar7 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar7);
  }
  return param_1;
}



// FUNCTION 1470b2285 FUN_1470b2285 body=157 status=ok
// SIG undefined FUN_1470b2285(void)

undefined8 FUN_1470b2285(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  iVar2 = iswalpha(*(wint_t *)*param_1);
  uVar4 = 0;
  if (iVar2 != 0) {
    iVar2 = (int)param_1[1];
    iVar3 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    if (iVar3 - 1U < 199) {
      lVar1 = *param_1;
      uVar4 = 1;
      if (lVar1 + (longlong)iVar2 * 2 + -2 != lVar1 && iVar2 != 0) {
        lVar5 = 0;
        do {
          iVar3 = iswalnum(*(wint_t *)(lVar1 + lVar5));
          if (((iVar3 == 0) && (*(short *)(lVar1 + lVar5) != 0x5f)) &&
             (*(short *)(lVar1 + lVar5) != 0x2e)) {
            return 0;
          }
          lVar5 = lVar5 + 2;
        } while ((longlong)iVar2 * 2 + -2 != lVar5);
      }
    }
  }
  return uVar4;
}



// FUNCTION 1470b2322 FUN_1470b2322 body=314 status=ok
// SIG undefined FUN_1470b2322(void)

ulonglong FUN_1470b2322(undefined8 *param_1)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar3 = iswalpha(*(wint_t *)*param_1);
  uVar5 = 0;
  if (iVar3 != 0) {
    iVar3 = *(int *)(param_1 + 1) + -1;
    if (*(int *)(param_1 + 1) == 0) {
      iVar3 = 0;
    }
    iVar6 = *(int *)(param_1 + 3) + -1;
    if (*(int *)(param_1 + 3) == 0) {
      iVar6 = 0;
    }
    if (iVar6 + iVar3 < 200) {
      FUN_140474144(&local_50,param_1,param_1 + 2);
      lVar2 = local_50;
      bVar1 = true;
      if (local_50 + (longlong)local_48 * 2 + -2 != local_50 && local_48 != 0) {
        lVar7 = 0;
        do {
          iVar3 = iswalnum(*(wint_t *)(lVar2 + lVar7));
          if ((iVar3 == 0) &&
             ((uVar4 = *(ushort *)(lVar2 + lVar7) - 0x2d, bVar1 = false, 0x32 < uVar4 ||
              (bVar1 = false, (0x4000000002007U >> ((ulonglong)uVar4 & 0x3f) & 1) == 0))))
          goto LAB_1470b2423;
          lVar7 = lVar7 + 2;
        } while ((longlong)local_48 * 2 + -2 != lVar7);
        bVar1 = true;
      }
LAB_1470b2423:
      if (local_50 != 0) {
        FUN_1400020a8(local_50);
      }
      if (bVar1) {
        uVar5 = FUN_144a38768(param_1 + 2,&DAT_149e31048,1,1);
        uVar5 = uVar5 ^ 1;
      }
      else {
        uVar5 = 0;
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1470b245e FUN_1470b245e body=147 status=ok
// SIG undefined FUN_1470b245e(void)

undefined2 * FUN_1470b245e(undefined2 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  uVar2 = DAT_14c990940;
  *(undefined4 *)(param_1 + 2) = DAT_14c990940;
  param_1[4] = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 0xc) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xe) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),_Src,(longlong)iVar1 * 2);
    uVar2 = DAT_14c990940;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x1c] = 0x100;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  return param_1;
}



// FUNCTION 1470b24f2 FUN_1470b24f2 body=2234 status=ok
// SIG undefined FUN_1470b24f2(void)

longlong * FUN_1470b24f2(byte *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined2 **ppuVar11;
  wchar_t *pwVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  longlong *plVar18;
  longlong *plVar19;
  char *pcVar20;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  uint local_c0;
  undefined4 local_b8;
  uint local_ac;
  undefined8 local_a8;
  undefined2 *local_a0;
  int local_98;
  longlong *local_90;
  int local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  longlong *local_70;
  int local_68;
  undefined4 uStack_64;
  longlong *local_60;
  longlong *local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1446f470e(&local_60,L"WINDOWS",1);
  plVar8 = (longlong *)FUN_140272950(&local_60);
  if (plVar8 == (longlong *)0x0) {
    uVar10 = FUN_144a82cde();
    FUN_1468161aa(uVar10,L"FUdpSocketBuilder: Failed to load socket subsystem");
    plVar9 = (longlong *)0x0;
    goto LAB_1470b28e9;
  }
  (**(code **)(*DAT_14c990958 + 0x90))(DAT_14c990958,&local_60);
  (**(code **)(*local_60 + 0x18))(local_60,*(undefined4 *)(param_1 + 4));
  (**(code **)(*local_60 + 0x28))(local_60,*(undefined2 *)(param_1 + 8));
  (**(code **)(*local_60 + 0xa8))(local_60,&local_90);
  if (*(int *)(param_1 + 0x18) == 0) {
    puVar17 = &DAT_149dfb77a;
  }
  else {
    puVar17 = *(undefined2 **)(param_1 + 0x10);
  }
  FUN_140056680(&local_70,puVar17);
  FUN_1401a700c(&local_4c,0x118);
  local_a0 = (undefined2 *)(ulonglong)local_4c;
  ppuVar11 = &local_a0;
  plVar9 = (longlong *)(**(code **)(*plVar8 + 0x18))(plVar8,ppuVar11,&local_70,&local_90);
  if (local_70 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (plVar9 == (longlong *)0x0) {
    uVar10 = FUN_144a82cde();
    if (*(int *)(param_1 + 0x18) == 0) {
      puVar17 = &DAT_149dfb77a;
    }
    else {
      puVar17 = *(undefined2 **)(param_1 + 0x10);
    }
    FUN_140047918(uVar10,L"FUdpSocketBuilder: Failed to create socket %s",puVar17);
LAB_1470b296e:
    plVar9 = (longlong *)0x0;
  }
  else {
    cVar5 = (**(code **)(*plVar9 + 0x98))
                      (plVar9,CONCAT71((int7)((ulonglong)ppuVar11 >> 8),param_1[1]) ^ 1);
    if ((((cVar5 == '\0') ||
         (cVar5 = (**(code **)(*plVar9 + 0xe8))(plVar9,param_1[0x40]), cVar5 == '\0')) ||
        (cVar5 = (**(code **)(*plVar9 + 0xa0))(plVar9,*param_1), cVar5 == '\0')) ||
       (cVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9,1), cVar5 == '\0')) {
      uVar7 = (**(code **)(*plVar8 + 0xb8))(plVar8);
      uVar10 = FUN_144a82cde();
      bVar4 = param_1[1];
      if (*(int *)(param_1 + 0x18) == 0) {
        puVar17 = &DAT_149dfb77a;
      }
      else {
        puVar17 = *(undefined2 **)(param_1 + 0x10);
      }
      local_c0 = (uint)*param_1;
      local_c8 = (longlong *)CONCAT44(local_c8._4_4_,(uint)param_1[0x40]);
      pwVar12 = 
      L"FUdpSocketBuilder: Failed to configure %s (blocking: %i, reusable: %i, broadcast: %i). Error code %d."
      ;
      local_b8 = uVar7;
LAB_1470b295a:
      FUN_140047918(uVar10,pwVar12,puVar17,bVar4);
LAB_1470b2962:
      (**(code **)(*plVar8 + 0x38))(plVar8,plVar9);
      goto LAB_1470b296e;
    }
    if ((param_1[2] == 1) && (cVar5 = (**(code **)(*plVar9 + 0x18))(plVar9,local_60), cVar5 == '\0')
       ) {
      uVar7 = (**(code **)(*plVar8 + 0xb8))(plVar8);
      uVar10 = FUN_144a82cde();
      FUN_146b13724(param_1 + 4,&local_70);
      puVar17 = &DAT_149dfb77a;
      plVar14 = (longlong *)&DAT_149dfb77a;
      if (local_68 != 0) {
        plVar14 = local_70;
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        puVar17 = *(undefined2 **)(param_1 + 0x10);
      }
      local_c8 = (longlong *)CONCAT44(local_c8._4_4_,uVar7);
      FUN_140047918(uVar10,L"FUdpSocketBuilder: Failed to bind %s to %s. Error code %d.",puVar17,
                    plVar14);
      if (local_70 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1470b2962;
    }
    cVar5 = (**(code **)(*plVar9 + 0xd0))(plVar9,param_1[0x38]);
    if ((cVar5 == '\0') ||
       (cVar5 = (**(code **)(*plVar9 + 0xd8))(plVar9,param_1[0x39]), cVar5 == '\0')) {
      uVar6 = (**(code **)(*plVar8 + 0xb8))(plVar8);
      uVar10 = FUN_144a82cde();
      bVar4 = param_1[0x38];
      if (*(int *)(param_1 + 0x18) == 0) {
        puVar17 = &DAT_149dfb77a;
      }
      else {
        puVar17 = *(undefined2 **)(param_1 + 0x10);
      }
      local_c8 = (longlong *)CONCAT44(local_c8._4_4_,(uint)param_1[0x39]);
      pwVar12 = 
      L"FUdpSocketBuilder: Failed to configure multicast for %s (loopback: %i, ttl: %i). Error code %d."
      ;
      local_c0 = uVar6;
      goto LAB_1470b295a;
    }
    (**(code **)(*local_60 + 0xa8))(local_60,&local_78);
    (**(code **)(*plVar8 + 0x88))(plVar8,&local_70,local_78);
    (**(code **)(*local_70 + 0x70))();
    if ((longlong)*(int *)(param_1 + 0x30) == 0) {
      plVar14 = (longlong *)0x0;
    }
    else {
      pcVar20 = *(char **)(param_1 + 0x28);
      lVar13 = (longlong)*(int *)(param_1 + 0x30) << 3;
      plVar14 = (longlong *)0x0;
      do {
        if ((((pcVar20[3] == -0x1a) && (pcVar20[2] == '\0')) && (pcVar20[1] == '\0')) &&
           (*pcVar20 == '\x01')) {
          (**(code **)(*local_70 + 0xa8))(local_70,&local_80);
          cVar5 = FUN_1403f35db(local_80,&DAT_14c9908e8);
          plVar15 = local_70;
          if (cVar5 != '\0') goto LAB_1470b2701;
          plVar18 = (longlong *)CONCAT44(uStack_64,local_68);
          if (plVar18 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
            UNLOCK();
          }
          plVar19 = plVar14;
          if (plVar18 != plVar14) goto LAB_1470b27a2;
          if (plVar14 == (longlong *)0x0) {
            plVar14 = (longlong *)0x0;
          }
          else {
            LOCK();
            plVar19 = plVar18 + 1;
            *(int *)plVar19 = (int)*plVar19 + -1;
            UNLOCK();
            if ((int)*plVar19 == 0) {
              (**(code **)*plVar18)(plVar18);
              LOCK();
              piVar1 = (int *)((longlong)plVar18 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar18 + 0x10))(plVar18);
              }
            }
          }
        }
        else {
LAB_1470b2701:
          uVar7 = *(undefined4 *)pcVar20;
          (**(code **)(*DAT_14c990958 + 0x90))(DAT_14c990958,&local_90);
          (**(code **)(*local_90 + 0x18))(local_90,uVar7);
          (**(code **)(*local_90 + 0x28))(local_90,0);
          plVar15 = local_90;
          plVar19 = (longlong *)CONCAT44(uStack_84,local_88);
          if (plVar19 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
            UNLOCK();
          }
          if (plVar19 == plVar14) {
            if (plVar14 == (longlong *)0x0) {
              plVar18 = (longlong *)0x0;
            }
            else {
              LOCK();
              plVar2 = plVar19 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              plVar18 = plVar14;
              if ((int)*plVar2 == 0) {
                (**(code **)*plVar19)(plVar19);
                LOCK();
                piVar1 = (int *)((longlong)plVar19 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar3 = *piVar1;
                UNLOCK();
                plVar14 = plVar19;
                goto joined_r0x0001470b2795;
              }
            }
          }
          else {
            plVar18 = plVar19;
            if (plVar14 != (longlong *)0x0) {
              LOCK();
              plVar19 = plVar14 + 1;
              *(int *)plVar19 = (int)*plVar19 + -1;
              UNLOCK();
              if ((int)*plVar19 == 0) {
                (**(code **)*plVar14)(plVar14);
                LOCK();
                piVar1 = (int *)((longlong)plVar14 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar3 = *piVar1;
                UNLOCK();
joined_r0x0001470b2795:
                if (iVar3 == 0) {
                  (**(code **)(*plVar14 + 0x10))();
                }
              }
            }
          }
          plVar19 = (longlong *)CONCAT44(uStack_84,local_88);
LAB_1470b27a2:
          plVar14 = plVar18;
          if (plVar19 != (longlong *)0x0) {
            LOCK();
            plVar18 = plVar19 + 1;
            *(int *)plVar18 = (int)*plVar18 + -1;
            UNLOCK();
            if ((int)*plVar18 == 0) {
              (**(code **)*plVar19)(plVar19);
              LOCK();
              piVar1 = (int *)((longlong)plVar19 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar19 + 0x10))(plVar19);
              }
            }
          }
        }
        uVar7 = *(undefined4 *)(pcVar20 + 4);
        (**(code **)(*DAT_14c990958 + 0x90))(DAT_14c990958,&local_90);
        (**(code **)(*local_90 + 0x18))(local_90,uVar7);
        (**(code **)(*local_90 + 0x28))(local_90,0);
        cVar5 = (**(code **)(*plVar9 + 0xb0))(plVar9,plVar15,local_90);
        plVar15 = (longlong *)CONCAT44(uStack_84,local_88);
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          plVar19 = plVar15 + 1;
          *(int *)plVar19 = (int)*plVar19 + -1;
          UNLOCK();
          if ((int)*plVar19 == 0) {
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
        if (cVar5 == '\0') {
          local_ac = (**(code **)(*plVar8 + 0xb8))(plVar8);
          local_a8 = FUN_144a82cde();
          FUN_146b135d2(pcVar20 + 4,&local_90);
          puVar17 = &DAT_149dfb77a;
          local_c8 = (longlong *)&DAT_149dfb77a;
          if (local_88 != 0) {
            local_c8 = local_90;
          }
          FUN_146b135d2(pcVar20,&local_a0);
          puVar16 = &DAT_149dfb77a;
          if (local_98 != 0) {
            puVar16 = local_a0;
          }
          if (*(int *)(param_1 + 0x18) != 0) {
            puVar17 = *(undefined2 **)(param_1 + 0x10);
          }
          local_c0 = local_ac;
          FUN_140047918(local_a8,
                        L"FUdpSocketBuilder: Failed to subscribe %s to multicast group %s on interface %s. Error code %d."
                        ,puVar17,puVar16);
          if (local_a0 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          goto LAB_1470b2ce1;
        }
        pcVar20 = pcVar20 + 8;
        lVar13 = lVar13 + -8;
      } while (lVar13 != 0);
    }
    iVar3 = *(int *)(param_1 + 0x20);
    if (iVar3 == DAT_14c990940) {
LAB_1470b2abe:
      if ((0 < *(int *)(param_1 + 0x3c)) &&
         (cVar5 = (**(code **)(*plVar9 + 0x108))(plVar9,*(int *)(param_1 + 0x3c),&local_90),
         cVar5 == '\0')) {
        uVar7 = (**(code **)(*plVar8 + 0xb8))(plVar8);
        uVar10 = FUN_144a82cde();
        if (*(int *)(param_1 + 0x18) == 0) {
          puVar17 = &DAT_149dfb77a;
        }
        else {
          puVar17 = *(undefined2 **)(param_1 + 0x10);
        }
        local_c8 = (longlong *)CONCAT44(local_c8._4_4_,uVar7);
        FUN_140047918(uVar10,
                      L"FUdpSocketBuilder: Warning - could not set receive buffer size to %d for %s. Error code %d."
                      ,*(undefined4 *)(param_1 + 0x3c),puVar17);
      }
      if ((0 < *(int *)(param_1 + 0x44)) &&
         (cVar5 = (**(code **)(*plVar9 + 0x100))(plVar9,*(int *)(param_1 + 0x44),&local_90),
         cVar5 == '\0')) {
        uVar7 = (**(code **)(*plVar8 + 0xb8))(plVar8);
        uVar10 = FUN_144a82cde();
        if (*(int *)(param_1 + 0x18) == 0) {
          puVar17 = &DAT_149dfb77a;
        }
        else {
          puVar17 = *(undefined2 **)(param_1 + 0x10);
        }
        local_c8 = (longlong *)CONCAT44(local_c8._4_4_,uVar7);
        FUN_140047918(uVar10,
                      L"FUdpSocketBuilder: Warning - could not set send buffer size to %d for %s. Error code %d."
                      ,*(undefined4 *)(param_1 + 0x44),puVar17);
      }
    }
    else {
      (**(code **)(*DAT_14c990958 + 0x90))(DAT_14c990958,&local_90);
      (**(code **)(*local_90 + 0x18))(local_90,iVar3);
      (**(code **)(*local_90 + 0x28))(local_90,0);
      cVar5 = (**(code **)(*plVar9 + 0xe0))(plVar9,local_90);
      plVar15 = (longlong *)CONCAT44(uStack_84,local_88);
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar19 = plVar15 + 1;
        *(int *)plVar19 = (int)*plVar19 + -1;
        UNLOCK();
        if ((int)*plVar19 == 0) {
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
      if (cVar5 != '\0') goto LAB_1470b2abe;
      uVar7 = (**(code **)(*plVar8 + 0xb8))(plVar8);
      uVar10 = FUN_144a82cde();
      FUN_146b135d2(param_1 + 0x20,&local_90);
      puVar17 = &DAT_149dfb77a;
      plVar15 = (longlong *)&DAT_149dfb77a;
      if (local_88 != 0) {
        plVar15 = local_90;
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        puVar17 = *(undefined2 **)(param_1 + 0x10);
      }
      local_c8 = (longlong *)CONCAT44(local_c8._4_4_,uVar7);
      FUN_140047918(uVar10,
                    L"FUdpSocketBuilder: Failed to set multicast outgoing interface for %s to %s. Error code %d."
                    ,puVar17,plVar15);
LAB_1470b2ce1:
      if (local_90 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      (**(code **)(*plVar8 + 0x38))(plVar8,plVar9);
      plVar9 = (longlong *)0x0;
    }
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar14 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
    plVar8 = (longlong *)CONCAT44(uStack_64,local_68);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar14 = plVar8 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*plVar8)(plVar8);
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
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_58 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
      }
    }
  }
LAB_1470b28e9:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return plVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b2dad FUN_1470b2dad body=531 status=ok
// SIG undefined FUN_1470b2dad(void)

undefined8 * FUN_1470b2dad(undefined8 *param_1,longlong *param_2)

{
  void *pvVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_f8 [32];
  longlong local_d8 [2];
  void *local_c8;
  int local_c0;
  undefined4 local_bc;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined1 *local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *param_1 = 0;
  param_1[1] = 0;
  if ((longlong)(int)param_2[1] != 0) {
    puVar5 = (undefined8 *)*param_2;
    puVar3 = puVar5 + (longlong)(int)param_2[1] * 4;
    bVar2 = true;
    do {
      if (!bVar2) {
        FUN_1400020e8(param_1,&DAT_149e06196,1);
      }
      local_b8 = (void *)0x0;
      local_b0 = *(int *)(puVar5 + 1);
      lVar4 = (longlong)local_b0;
      pvVar1 = (void *)*puVar5;
      if (lVar4 == 0) {
        local_ac = 0;
      }
      else {
        FUN_1446dd670(&local_b8,local_b0,0);
        memcpy(local_b8,pvVar1,lVar4 * 2);
      }
      FUN_14146ec20(local_88,&local_b8);
      local_c8 = (void *)0x0;
      local_c0 = *(int *)(puVar5 + 3);
      lVar4 = (longlong)local_c0;
      pvVar1 = (void *)puVar5[2];
      if (lVar4 == 0) {
        local_bc = 0;
      }
      else {
        FUN_1446dd670(&local_c8,local_c0,0);
        memcpy(local_c8,pvVar1,lVar4 * 2);
      }
      FUN_14146ec20(local_68,&local_c8);
      local_a0 = &local_48;
      local_a8 = local_88;
      FUN_1407adb6e(&local_98,&local_a8);
      FUN_140230a2e(local_d8,L"{0}:{1}",&local_98);
      FUN_1407adb3e(local_98,local_90);
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      lVar4 = 0x40;
      do {
        if (*(longlong *)((longlong)&local_98 + lVar4) != 0) {
          FUN_1400020a8();
        }
        lVar4 = lVar4 + -0x20;
      } while (lVar4 != 0);
      FUN_1400020e8(param_1,local_d8[0]);
      if (local_d8[0] != 0) {
        FUN_1400020a8();
      }
      puVar5 = puVar5 + 4;
      bVar2 = false;
    } while (puVar5 != puVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b2fc2 FUN_1470b2fc2 body=529 status=ok
// SIG undefined FUN_1470b2fc2(void)

undefined8 *
FUN_1470b2fc2(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4,
             double *param_5,longlong *param_6)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
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
  param_1[2] = param_3;
  *(undefined1 *)(param_1 + 3) = param_4;
  *(undefined1 *)(param_1 + 5) = 0;
  FUN_1470b31d4(param_1 + 6,param_6);
  FUN_1470b2285(param_2);
  bVar3 = *(byte *)(param_5 + 1);
  if ((bVar3 == 1) && ((*param_5 < 0.0 || (1.0 < *param_5)))) {
    *(undefined1 *)(param_5 + 1) = 0;
    bVar3 = 0;
  }
  if (*(int *)((longlong)param_6 + 0xc) != -1) {
    iVar1 = (int)param_6[1];
    lVar10 = (longlong)iVar1;
    if (lVar10 != 0) {
      lVar2 = *param_6;
      bVar3 = FUN_1470b2322(lVar2);
      iVar9 = 0;
      iVar6 = 0;
      do {
        lVar5 = (longlong)iVar6;
        iVar12 = iVar6 + 1;
        if (iVar6 + 1 < iVar1) {
          iVar12 = iVar1;
        }
        lVar11 = lVar5 * 0x20;
        lVar13 = lVar2 + 0x20 + lVar11;
        iVar7 = iVar6;
        do {
          lVar5 = lVar5 + 1;
          iVar8 = iVar12;
          if (lVar10 <= lVar5) break;
          bVar4 = FUN_1470b2322(lVar13);
          iVar7 = iVar7 + 1;
          lVar13 = lVar13 + 0x20;
          iVar8 = iVar7;
        } while ((bVar3 & 1) == bVar4);
        iVar12 = iVar8 - iVar6;
        if ((bVar3 & 1) == 0) {
          FUN_1470b6b15(lVar11 + lVar2,iVar12);
        }
        else {
          if (iVar9 != iVar6) {
            memmove((void *)((longlong)iVar9 * 0x20 + lVar2),(void *)(lVar11 + lVar2),
                    (longlong)iVar12 << 5);
          }
          iVar9 = iVar9 + iVar12;
        }
        iVar6 = iVar8;
        bVar3 = bVar3 ^ 1;
      } while (lVar5 < lVar10);
      *(int *)(param_6 + 1) = iVar9;
      bVar3 = *(byte *)(param_5 + 1);
    }
  }
  if ((bVar3 & 1) != 0) {
    *(undefined1 *)(param_5 + 1) = 0;
  }
  FUN_1470b6ad2(param_6);
  return param_1;
}



// FUNCTION 1470b31d4 FUN_1470b31d4 body=99 status=ok
// SIG undefined FUN_1470b31d4(void)

undefined8 * FUN_1470b31d4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)((longlong)param_2 + 0xc);
  *param_1 = 0;
  if (iVar1 == -1) {
    param_1[1] = 0xffffffff00000000;
  }
  else {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1470b6b52(param_1,iVar1,0);
      FUN_1470b6bb4(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1470b3238 FUN_1470b3238 body=1154 status=ok
// SIG undefined FUN_1470b3238(void)

longlong * FUN_1470b3238(undefined8 *param_1,longlong *param_2)

{
  void *pvVar1;
  longlong lVar2;
  undefined1 auStack_178 [32];
  undefined1 local_158 [16];
  void *local_148;
  int local_140;
  undefined4 local_13c;
  undefined1 *local_138;
  undefined1 *local_130;
  void *local_128;
  int local_120;
  undefined4 local_11c;
  undefined1 *local_118;
  undefined1 *local_110;
  longlong local_108;
  undefined4 local_100;
  void *local_f8;
  int local_f0;
  undefined4 local_ec;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined1 *local_d8;
  ulonglong *local_d0;
  longlong local_c8;
  undefined8 local_c0;
  void *local_b8;
  int local_b0;
  undefined1 local_a8 [16];
  longlong alStack_98 [2];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1400b22c2(&local_b8,(&PTR_DAT_14a184c30)[*(byte *)(param_1 + 3)]);
  local_e8 = (void *)0x0;
  local_e0 = *(int *)(param_1 + 1);
  lVar2 = (longlong)local_e0;
  pvVar1 = (void *)*param_1;
  if (lVar2 == 0) {
    local_dc = 0;
  }
  else {
    FUN_1446dd670(&local_e8,local_e0,0);
    memcpy(local_e8,pvVar1,lVar2 * 2);
  }
  FUN_14146ec20(local_a8,&local_e8);
  FUN_14681a82c(local_88,param_1[2]);
  pvVar1 = local_b8;
  local_f8 = (void *)0x0;
  local_f0 = local_b0;
  if ((longlong)local_b0 == 0) {
    local_ec = 0;
  }
  else {
    FUN_1446dd670(&local_f8,local_b0,0);
    memcpy(local_f8,pvVar1,(longlong)local_b0 * 2);
  }
  FUN_14146ec20(local_68,&local_f8);
  local_d0 = &local_48;
  local_d8 = local_a8;
  FUN_1407adb6e(&local_c8);
  FUN_140230a2e(param_2,L"{0}:{1}|{2}",&local_c8);
  FUN_1407adb3e(local_c8,local_c0 & 0xffffffff);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  lVar2 = 0x60;
  do {
    if (*(longlong *)((longlong)&local_b8 + lVar2) != 0) {
      FUN_1400020a8();
    }
    lVar2 = lVar2 + -0x20;
  } while (lVar2 != 0);
  if (*(char *)(param_1 + 5) == '\x01') {
    local_128 = (void *)0x0;
    local_120 = (int)param_2[1];
    lVar2 = (longlong)local_120;
    pvVar1 = (void *)*param_2;
    if (lVar2 == 0) {
      local_11c = 0;
    }
    else {
      FUN_1446dd670(&local_128,local_120,0);
      memcpy(local_128,pvVar1,lVar2 * 2);
    }
    FUN_14146ec20(local_a8,&local_128);
    FUN_14681a82c(local_88,param_1[4]);
    local_118 = local_a8;
    local_110 = local_68;
    FUN_1407adb6e(&local_108);
    FUN_140230a2e(&local_c8,L"{0}|@{1}",&local_108);
    if (&local_c8 == param_2) {
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_c8;
      local_c8 = 0;
      *(undefined4 *)(param_2 + 1) = (undefined4)local_c0;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_c0._4_4_;
      local_c0 = 0;
    }
    FUN_1407adb3e(local_108,local_100);
    if (local_108 != 0) {
      FUN_1400020a8();
    }
    lVar2 = 0x40;
    do {
      if (*(longlong *)((longlong)&local_b8 + lVar2) != 0) {
        FUN_1400020a8();
      }
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  if (*(int *)((longlong)param_1 + 0x3c) != -1) {
    local_148 = (void *)0x0;
    local_140 = (int)param_2[1];
    lVar2 = (longlong)local_140;
    pvVar1 = (void *)*param_2;
    if (lVar2 == 0) {
      local_13c = 0;
    }
    else {
      FUN_1446dd670(&local_148,local_140,0);
      memcpy(local_148,pvVar1,lVar2 * 2);
    }
    FUN_14146ec20(local_a8,&local_148);
    FUN_1470b2dad(local_158,param_1 + 6);
    FUN_14146ec20(local_88,local_158);
    local_138 = local_a8;
    local_130 = local_68;
    FUN_1407adb6e(&local_108);
    FUN_140230a2e(&local_c8,L"{0}|#{1}",&local_108);
    if (&local_c8 == param_2) {
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_c8;
      local_c8 = 0;
      *(undefined4 *)(param_2 + 1) = (undefined4)local_c0;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_c0._4_4_;
      local_c0 = 0;
    }
    FUN_1407adb3e(local_108,local_100);
    if (local_108 != 0) {
      FUN_1400020a8();
    }
    lVar2 = 0x40;
    do {
      if (*(longlong *)((longlong)&local_b8 + lVar2) != 0) {
        FUN_1400020a8();
      }
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1470b36bb FUN_1470b36bb body=109 status=ok
// SIG undefined FUN_1470b36bb(void)

void FUN_1470b36bb(longlong *param_1)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1470b38ac(local_58,param_1);
  FUN_1470b3729(local_58);
  FUN_1470b6ad2(param_1 + 6);
  if ((char)param_1[5] == '\x01') {
    *(undefined1 *)(param_1 + 5) = 0;
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b3729 FUN_1470b3729 body=385 status=ok
// SIG undefined FUN_1470b3729(void)

void FUN_1470b3729(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined1 local_b0;
  undefined1 *local_a8 [2];
  undefined8 *local_98;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar3 = *param_1;
  uVar6 = 0;
  *param_1 = 0;
  lVar5 = param_1[1];
  uVar7 = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  local_b0 = (undefined1)param_1[3];
  local_b8 = param_1[2];
  cVar1 = (char)param_1[5];
  if (cVar1 == '\x01') {
    unaff_XMM6_Da = (undefined4)param_1[4];
    unaff_XMM6_Db = (undefined4)((ulonglong)param_1[4] >> 0x20);
  }
  iVar2 = *(int *)((longlong)param_1 + 0x3c);
  if (iVar2 == -1) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1[6];
    uVar6 = (undefined4)param_1[7];
    param_1[6] = 0;
    param_1[7] = 0;
  }
  local_a8[0] = (undefined1 *)0x0;
  local_98 = (undefined8 *)FUN_14001cc68(0x48);
  *local_98 = &PTR_LAB_14a1858f0;
  local_98[1] = lVar3;
  *(int *)(local_98 + 2) = (int)lVar5;
  *(undefined4 *)((longlong)local_98 + 0x14) = uVar7;
  *(undefined1 *)(local_98 + 4) = local_b0;
  local_98[3] = local_b8;
  *(char *)(local_98 + 6) = cVar1;
  if (cVar1 != '\0') {
    local_98[5] = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  }
  if (iVar2 == -1) {
    lVar3 = 0;
    lVar5 = lVar4;
    uVar7 = uVar6;
    uVar6 = 0;
  }
  else {
    lVar5 = 0;
    uVar7 = 0;
    lVar3 = lVar4;
  }
  local_98[7] = lVar3;
  *(undefined4 *)(local_98 + 8) = uVar6;
  *(int *)((longlong)local_98 + 0x44) = iVar2;
  if (local_98 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_a8[0] = &LAB_1470b6c84;
  }
  FUN_1407461b0(0xff,local_a8);
  if (iVar2 != -1) {
    FUN_1470b6b15(lVar5,uVar7);
    if (lVar5 != 0) {
      FUN_1400020a8(lVar5);
    }
  }
  FUN_1470b6ad2(param_1 + 6);
  if ((char)param_1[5] == '\x01') {
    *(undefined1 *)(param_1 + 5) = 0;
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b38ac FUN_1470b38ac body=139 status=ok
// SIG undefined FUN_1470b38ac(void)

undefined8 * FUN_1470b38ac(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  void *_Src;
  
  *param_1 = 0;
  iVar2 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar2,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar2 * 2);
  }
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[2] = param_2[2];
  cVar1 = *(char *)(param_2 + 5);
  *(char *)(param_1 + 5) = cVar1;
  if (cVar1 == '\x01') {
    param_1[4] = param_2[4];
  }
  FUN_1470b31d4(param_1 + 6,param_2 + 6);
  return param_1;
}



// FUNCTION 1470b3937 FUN_1470b3937 body=2200 status=ok
// SIG undefined FUN_1470b3937(void)

undefined2 *
FUN_1470b3937(undefined2 *param_1,longlong param_2,uint param_3,longlong *param_4,longlong param_5,
             longlong param_6,longlong param_7)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined2 *local_d8;
  longlong *local_d0;
  uint local_c4;
  longlong local_c0;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  undefined1 local_98;
  undefined1 local_8a;
  char local_89;
  undefined8 local_88;
  longlong lStack_80;
  undefined8 local_78;
  undefined1 local_62;
  char local_61;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_e8 = param_7;
  local_f0 = param_6;
  local_f8 = param_5;
  FUN_1448275b3(&local_62,param_2);
  if (local_61 == '\x01') {
    *(undefined1 *)((longlong)param_1 + 1) = 1;
    *(undefined1 *)param_1 = local_62;
  }
  else if ((*param_4 == 0) || (param_4[1] == 0)) {
    *param_1 = 0x103;
  }
  else {
    lVar3 = param_4[2];
    local_d0 = param_4;
    if (lVar3 == 0) {
      param_1 = param_1;
      if (param_5 != 0) {
        lVar3 = FUN_1446f4bba();
        param_1 = param_1;
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_5 + 0x10) + 0x38)) &&
           (param_1 = param_1,
           *(longlong *)
            (*(longlong *)(*(longlong *)(param_5 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          uVar10 = 0;
LAB_1470b3c29:
          if (uVar10 < param_3) {
            local_c4 = param_3 - 1;
            local_d8 = param_1;
            do {
              FUN_1446e6d0e(&local_b8,param_5);
              local_78 = 0;
              local_88 = 0;
              lStack_80 = 0;
              local_e8 = 0;
              local_f0 = local_a8;
              local_f8 = param_5;
              FUN_1448275b3(&local_8a,(ulonglong)uVar10 * 0x38 + param_2,param_3 - uVar10,&local_88)
              ;
              plVar11 = local_d0;
              if (local_89 != '\x01') {
                local_61 = '\0';
                local_d0[3] = lStack_80;
                local_d0[4] = 0;
                if (local_d0 + 5 != &local_b8) {
                  (**(code **)(local_d0[5] + 0x48))();
                  plVar11[6] = lStack_b0;
                  plVar11[7] = local_a8;
                  *(undefined1 *)(plVar11 + 9) = local_98;
                  local_98 = 0;
                  (**(code **)(local_b8 + 0x48))();
                }
                *(undefined1 *)((longlong)param_1 + 1) = 0;
                FUN_1448eac94(&local_b8);
                goto LAB_1470b39c3;
              }
              local_61 = '\x01';
              local_62 = local_8a;
              uVar9 = uVar10;
              if (uVar10 + 1 < param_3) {
                uVar6 = (ulonglong)(uVar10 + 1);
                local_c0 = param_5;
                do {
                  lVar7 = uVar6 * 0x38;
                  lVar3 = FUN_14479d2ce(param_2 + lVar7 + 0x10);
                  plVar11 = (longlong *)(param_2 + lVar7 + 0x18);
                  if (lVar3 == 0) {
                    *plVar11 = 0;
                  }
                  else {
                    lVar8 = lVar7 + param_2;
                    lVar3 = FUN_1446ddbd2();
                    if (((*plVar11 == 0) || (cVar1 = FUN_144729dda(lVar8 + 0x20), cVar1 == '\0')) &&
                       (*(int *)(lVar8 + 0x30) != 0)) {
                      lVar4 = FUN_14007daa4(plVar11,0,0);
                      if (lVar4 == 0) {
LAB_1470b3e3f:
                        if (*plVar11 != 0) {
                          *plVar11 = 0;
                          *(undefined8 *)(param_2 + lVar7 + 0x20) = 0;
                        }
                        goto LAB_1470b3d70;
                      }
                      lVar5 = *(longlong *)(lVar4 + 8);
                      if (*(ulonglong *)(lVar3 + 8) == 0) {
                        bVar12 = lVar5 != 0;
                        if (lVar5 != lVar3 && bVar12) {
                          do {
                            lVar5 = *(longlong *)(lVar5 + 0x30);
                            bVar12 = lVar5 != 0;
                            if (lVar5 == lVar3) break;
                          } while (lVar5 != 0);
                        }
                        if (!bVar12) goto LAB_1470b3e3f;
                      }
                      else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0)
                      goto LAB_1470b3e3f;
                      *plVar11 = lVar4;
                    }
                    else {
                      lVar4 = *plVar11;
                    }
                    if (*(char *)(lVar8 + 8) == '\0') {
LAB_1470b3db6:
                      if (lVar4 == 0) goto LAB_1470b3d70;
                    }
                    else {
                      if (lVar4 == 0) goto LAB_1470b3d70;
                      lVar3 = *(longlong *)(lVar4 + 8);
                      lVar7 = FUN_1446e6bbc();
                      if (*(ulonglong *)(lVar7 + 8) == 0) {
                        bVar12 = lVar3 != 0;
                        if (lVar3 != lVar7 && bVar12) {
                          do {
                            lVar3 = *(longlong *)(lVar3 + 0x30);
                            bVar12 = lVar3 != 0;
                            if (lVar3 == lVar7) break;
                          } while (lVar3 != 0);
                        }
                        if (!bVar12) goto LAB_1470b3db6;
LAB_1470b3db2:
                        lVar4 = *(longlong *)(lVar4 + 0x78);
                        goto LAB_1470b3db6;
                      }
                      if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar7 + 8)) != 0)
                      goto LAB_1470b3db2;
                    }
                    lVar3 = *(longlong *)(lVar4 + 8);
                    lVar7 = FUN_1446dcc8c();
                    if (*(ulonglong *)(lVar7 + 8) == 0) {
                      bVar12 = lVar3 != 0;
                      if (lVar3 != lVar7 && bVar12) {
                        do {
                          lVar3 = *(longlong *)(lVar3 + 0x30);
                          bVar12 = lVar3 != 0;
                          if (lVar3 == lVar7) break;
                        } while (lVar3 != 0);
                      }
                      if (bVar12) goto LAB_1470b3ebf;
                    }
                    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar7 + 8)) != 0) {
LAB_1470b3ebf:
                      param_1 = local_d8;
                      param_5 = *(longlong *)(lVar4 + 0x70);
                      uVar9 = uVar10;
                      break;
                    }
                  }
LAB_1470b3d70:
                  uVar10 = (uint)uVar6;
                  uVar6 = uVar6 + 1;
                  param_1 = local_d8;
                  param_5 = local_c0;
                  uVar9 = local_c4;
                } while ((uint)uVar6 != param_3);
              }
              uVar10 = uVar9 + 2;
              FUN_1448eac94(&local_b8);
            } while (uVar10 < param_3);
          }
        }
      }
    }
    else {
      uVar10 = 0;
      uVar9 = param_3 - 1;
      uVar2 = param_3;
      if (param_3 - 1 != 0 && lVar3 != param_7) {
        do {
          uVar10 = uVar9;
          lVar7 = (ulonglong)(uVar2 - 2) * 0x38;
          lVar3 = FUN_14479d2ce(param_2 + lVar7 + 0x10);
          plVar11 = (longlong *)(param_2 + lVar7 + 0x18);
          if (lVar3 == 0) {
            *plVar11 = 0;
          }
          else {
            lVar8 = lVar7 + param_2;
            lVar3 = FUN_1446ddbd2();
            if (((*plVar11 == 0) || (cVar1 = FUN_144729dda(lVar8 + 0x20), cVar1 == '\0')) &&
               (*(int *)(lVar8 + 0x30) != 0)) {
              lVar4 = FUN_14007daa4(plVar11,0,0);
              if (lVar4 == 0) {
LAB_1470b3b97:
                if (*plVar11 != 0) {
                  *plVar11 = 0;
                  *(undefined8 *)(param_2 + lVar7 + 0x20) = 0;
                }
                goto LAB_1470b3ac9;
              }
              lVar5 = *(longlong *)(lVar4 + 8);
              if (*(ulonglong *)(lVar3 + 8) == 0) {
                bVar12 = lVar5 != 0;
                if (lVar5 != lVar3 && bVar12) {
                  do {
                    lVar5 = *(longlong *)(lVar5 + 0x30);
                    bVar12 = lVar5 != 0;
                    if (lVar5 == lVar3) break;
                  } while (lVar5 != 0);
                }
                if (!bVar12) goto LAB_1470b3b97;
              }
              else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0)
              goto LAB_1470b3b97;
              *plVar11 = lVar4;
            }
            else {
              lVar4 = *plVar11;
            }
            if (*(char *)(lVar8 + 8) == '\0') {
LAB_1470b3b0e:
              if (lVar4 == 0) goto LAB_1470b3ac9;
            }
            else {
              if (lVar4 == 0) goto LAB_1470b3ac9;
              lVar3 = *(longlong *)(lVar4 + 8);
              lVar7 = FUN_1446e6bbc();
              if (*(ulonglong *)(lVar7 + 8) == 0) {
                bVar12 = lVar3 != 0;
                if (lVar3 != lVar7 && bVar12) {
                  do {
                    lVar3 = *(longlong *)(lVar3 + 0x30);
                    bVar12 = lVar3 != 0;
                    if (lVar3 == lVar7) break;
                  } while (lVar3 != 0);
                }
                if (!bVar12) goto LAB_1470b3b0e;
LAB_1470b3b0a:
                lVar4 = *(longlong *)(lVar4 + 0x78);
                goto LAB_1470b3b0e;
              }
              if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar7 + 8)) != 0)
              goto LAB_1470b3b0a;
            }
            lVar3 = *(longlong *)(lVar4 + 8);
            lVar7 = FUN_1446f4b16();
            if (*(ulonglong *)(lVar7 + 8) == 0) {
              bVar12 = lVar3 != 0;
              if (lVar3 != lVar7 && bVar12) {
                do {
                  lVar3 = *(longlong *)(lVar3 + 0x30);
                  bVar12 = lVar3 != 0;
                  if (lVar3 == lVar7) break;
                } while (lVar3 != 0);
              }
              if (bVar12) goto LAB_1470b3ecc;
            }
            else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar7 + 8)) != 0)
            goto LAB_1470b3ecc;
          }
LAB_1470b3ac9:
          uVar9 = uVar10 - 1;
          uVar2 = uVar10;
        } while (uVar10 - 1 != 0);
        uVar10 = 0;
LAB_1470b3ecc:
        lVar3 = local_d0[2];
      }
      local_b8 = 0;
      lStack_b0 = 0;
      local_a8 = 0;
      lVar3 = *(longlong *)(lVar3 + 0x10);
      lVar7 = FUN_144938c96();
      if ((lVar7 == 0) && (lVar7 = *(longlong *)(lVar3 + 0x110), lVar7 == 0)) {
        FUN_140aa6c08(lVar3);
        lVar7 = *(longlong *)(lVar3 + 0x110);
      }
      local_f8 = lVar3;
      local_f0 = lVar7;
      local_e8 = lVar7;
      FUN_1448275b3(&local_88,(ulonglong)uVar10 * 0x38 + param_2,param_3 - uVar10,&local_b8);
      if (local_88._1_1_ == '\x01') {
        local_62 = (undefined1)local_88;
        local_61 = '\x01';
        param_1 = param_1;
        local_d8 = param_1;
        if (uVar10 + 1 < param_3) {
          uVar6 = (ulonglong)(uVar10 + 1);
          do {
            lVar7 = uVar6 * 0x38;
            lVar3 = FUN_14479d2ce(param_2 + lVar7 + 0x10);
            plVar11 = (longlong *)(param_2 + lVar7 + 0x18);
            if (lVar3 == 0) {
              *plVar11 = 0;
            }
            else {
              lVar8 = lVar7 + param_2;
              lVar3 = FUN_1446ddbd2();
              if (((*plVar11 == 0) || (cVar1 = FUN_144729dda(lVar8 + 0x20), cVar1 == '\0')) &&
                 (*(int *)(lVar8 + 0x30) != 0)) {
                lVar4 = FUN_14007daa4(plVar11,0,0);
                if (lVar4 == 0) {
LAB_1470b40b8:
                  if (*plVar11 != 0) {
                    *plVar11 = 0;
                    *(undefined8 *)(param_2 + lVar7 + 0x20) = 0;
                  }
                  goto LAB_1470b3fea;
                }
                lVar5 = *(longlong *)(lVar4 + 8);
                if (*(ulonglong *)(lVar3 + 8) == 0) {
                  bVar12 = lVar5 != 0;
                  if (lVar5 != lVar3 && bVar12) {
                    do {
                      lVar5 = *(longlong *)(lVar5 + 0x30);
                      bVar12 = lVar5 != 0;
                      if (lVar5 == lVar3) break;
                    } while (lVar5 != 0);
                  }
                  if (!bVar12) goto LAB_1470b40b8;
                }
                else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0)
                goto LAB_1470b40b8;
                *plVar11 = lVar4;
              }
              else {
                lVar4 = *plVar11;
              }
              if (*(char *)(lVar8 + 8) == '\0') {
LAB_1470b402f:
                if (lVar4 == 0) goto LAB_1470b3fea;
              }
              else {
                if (lVar4 == 0) goto LAB_1470b3fea;
                lVar3 = *(longlong *)(lVar4 + 8);
                lVar7 = FUN_1446e6bbc();
                if (*(ulonglong *)(lVar7 + 8) == 0) {
                  bVar12 = lVar3 != 0;
                  if (lVar3 != lVar7 && bVar12) {
                    do {
                      lVar3 = *(longlong *)(lVar3 + 0x30);
                      bVar12 = lVar3 != 0;
                      if (lVar3 == lVar7) break;
                    } while (lVar3 != 0);
                  }
                  if (!bVar12) goto LAB_1470b402f;
LAB_1470b402b:
                  lVar4 = *(longlong *)(lVar4 + 0x78);
                  goto LAB_1470b402f;
                }
                if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar7 + 8)) != 0)
                goto LAB_1470b402b;
              }
              lVar3 = *(longlong *)(lVar4 + 8);
              lVar7 = FUN_1446dcc8c();
              if (*(ulonglong *)(lVar7 + 8) == 0) {
                bVar12 = lVar3 != 0;
                if (lVar3 != lVar7 && bVar12) {
                  do {
                    lVar3 = *(longlong *)(lVar3 + 0x30);
                    bVar12 = lVar3 != 0;
                    if (lVar3 == lVar7) break;
                  } while (lVar3 != 0);
                }
                if (bVar12) goto LAB_1470b4154;
              }
              else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar7 + 8)) != 0) {
LAB_1470b4154:
                param_5 = *(longlong *)(lVar4 + 0x70);
                param_1 = local_d8;
                if (param_5 != 0) {
                  uVar10 = uVar10 + 2;
                  goto LAB_1470b3c29;
                }
                break;
              }
            }
LAB_1470b3fea:
            uVar10 = (uint)uVar6;
            uVar6 = uVar6 + 1;
            param_1 = local_d8;
          } while ((uint)uVar6 != param_3);
        }
      }
      else {
        local_d0[3] = lStack_b0;
        local_d0[4] = lVar7;
        FUN_144aa17a4(local_d0 + 5);
        param_1 = param_1;
      }
    }
    *(undefined1 *)((longlong)param_1 + 1) = 0;
  }
LAB_1470b39c3:
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1470b41d0 FUN_1470b41d0 body=193 status=ok
// SIG undefined FUN_1470b41d0(void)

undefined8
FUN_1470b41d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  longlong local_50;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  FUN_14485c47a(&local_58,param_4);
  FUN_140109984(&local_50,param_1,&local_58);
  local_70 = param_5;
  uStack_68 = param_6;
  local_78 = param_4;
  FUN_1470b3937(param_2,param_1,*(undefined4 *)(param_1 + 0x118),param_3);
  cVar1 = FUN_144729dda(local_48);
  if (cVar1 != '\0') {
    ReleaseSRWLockShared((PSRWLOCK)(local_50 + 0x140));
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b4292 FUN_1470b4292 body=206 status=ok
// SIG undefined FUN_1470b4292(void)

longlong FUN_1470b4292(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x140));
  AcquireSRWLockShared((PSRWLOCK)(param_2 + 0x140));
  lVar3 = param_1 + 0x10;
  lVar1 = param_2 + 0x10;
  lVar2 = 5;
  do {
    *(undefined2 *)(lVar3 + -8) = *(undefined2 *)(lVar1 + -8);
    *(undefined8 *)(lVar3 + -0x10) = *(undefined8 *)(lVar1 + -0x10);
    FUN_1406fa6b6(lVar3,lVar1);
    lVar3 = lVar3 + 0x38;
    lVar1 = lVar1 + 0x38;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  FUN_144a787a6(param_1 + 0x120,param_2 + 0x120);
  FUN_144a787a6(param_1 + 0x130,param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x148) = 0;
  ReleaseSRWLockShared((PSRWLOCK)(param_2 + 0x140));
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x140));
  return param_1;
}



// FUNCTION 1470b4366 FUN_1470b4366 body=38 status=ok
// SIG undefined FUN_1470b4366(void)

undefined8 FUN_1470b4366(undefined8 param_1,int param_2)

{
  FUN_145789548();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470b438e FUN_1470b438e body=186 status=ok
// SIG undefined FUN_1470b438e(void)

void FUN_1470b438e(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*param_2 == 0) || (*(int *)(param_1 + 0x50) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x48) + (longlong)(*(int *)(param_1 + 0x50) + -1) * 4) != 6))
  {
    FUN_145d36528(param_1 + 0x38);
  }
  else {
    FUN_1400021e4(param_2,local_30);
    FUN_1470b498c(param_1 + 0x38,local_30);
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1470b585c(param_1 + 8,iVar1);
  }
  lVar2 = param_1 + 8;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
  }
  *(undefined4 *)(lVar2 + (longlong)iVar1 * 4) = 1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b444a FUN_1470b444a body=37 status=ok
// SIG undefined FUN_1470b444a(void)

void FUN_1470b444a(longlong param_1)

{
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
  FUN_1401cd118(param_1 + 8);
  FUN_145d36462(param_1 + 0x38);
  return;
}



// FUNCTION 1470b4470 FUN_1470b4470 body=164 status=ok
// SIG undefined FUN_1470b4470(void)

void FUN_1470b4470(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 == 0) {
    FUN_14683d618(param_1 + 0x38);
  }
  else {
    FUN_1400021e4(param_2,local_30);
    FUN_1470b4b36(param_1 + 0x38,local_30);
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1470b585c(param_1 + 8,iVar1);
  }
  lVar2 = param_1 + 8;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
  }
  *(undefined4 *)(lVar2 + (longlong)iVar1 * 4) = 2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b4516 FUN_1470b4516 body=37 status=ok
// SIG undefined FUN_1470b4516(void)

void FUN_1470b4516(longlong param_1)

{
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
  FUN_1401cd118(param_1 + 8);
  FUN_14683d522(param_1 + 0x38);
  return;
}



// FUNCTION 1470b4560 FUN_1470b4560 body=132 status=ok
// SIG undefined FUN_1470b4560(void)

void FUN_1470b4560(longlong param_1,longlong *param_2,undefined4 param_3)

{
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  FUN_1400021e4(param_2,local_40);
  FUN_1470b4cb0(param_1 + 0x38,local_40,param_3);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b460a FUN_1470b460a body=124 status=ok
// SIG undefined FUN_1470b460a(void)

void FUN_1470b460a(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  FUN_1400021e4(param_2,local_30);
  FUN_1470b4f74(param_1 + 0x38,local_30,param_3);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b469a FUN_1470b469a body=124 status=ok
// SIG undefined FUN_1470b469a(void)

void FUN_1470b469a(longlong param_1,longlong *param_2,undefined4 param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  FUN_1400021e4(param_2,local_30);
  FUN_1470b511c(param_1 + 0x38,local_30,param_3);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b4728 FUN_1470b4728 body=209 status=ok
// SIG undefined FUN_1470b4728(void)

void FUN_1470b4728(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
  }
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_3 + 1);
  lVar1 = (longlong)local_38;
  _Src = (void *)*param_3;
  if (lVar1 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar1 * 2);
  }
  FUN_1400021e4(param_2,local_50);
  FUN_1470b528c(param_1 + 0x38,local_50,&local_40);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b4810 FUN_1470b4810 body=163 status=ok
// SIG undefined FUN_1470b4810(void)

void FUN_1470b4810(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_2 == 0) {
    FUN_1400021e4(param_3,local_38);
    FUN_14683d42c(param_1 + 0x38,local_38);
  }
  else {
    FUN_1400021e4(param_3,local_48);
    FUN_1400021e4(param_2,local_38);
    FUN_1470b528c(param_1 + 0x38,local_38,local_48);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b48b4 FUN_1470b48b4 body=32 status=ok
// SIG undefined FUN_1470b48b4(void)

longlong FUN_1470b48b4(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x38) + 8))(param_1 + 0x38);
  return param_1 + 0x78;
}



// FUNCTION 1470b48d4 FUN_1470b48d4 body=94 status=ok
// SIG undefined FUN_1470b48d4(void)

void FUN_1470b48d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a184e80;
  param_1[7] = &PTR_FUN_14a184f20;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_145c3c5b2(param_1 + 7);
  *param_1 = &PTR_LAB_14a185980;
  if (param_1[5] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1470b4932 FUN_1470b4932 body=38 status=ok
// SIG undefined FUN_1470b4932(void)

undefined8 FUN_1470b4932(undefined8 param_1,int param_2)

{
  FUN_1470b48d4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470b495c FUN_1470b495c body=45 status=ok
// SIG undefined FUN_1470b495c(void)

longlong FUN_1470b495c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_1470b48d4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470b498c FUN_1470b498c body=424 status=ok
// SIG undefined FUN_1470b498c(void)

void FUN_1470b498c(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_78 [46];
  undefined2 local_4a;
  undefined1 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_48 = (undefined1 *)CONCAT62(local_48._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_48,2);
  }
  local_48 = &DAT_149e02010;
  local_40 = 2;
  FUN_145d3640c();
  iVar1 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar1) {
    plVar2 = (longlong *)param_1[1];
    do {
      local_48 = (undefined1 *)CONCAT62(local_48._2_6_,9);
      (**(code **)(*plVar2 + 0x170))(plVar2,&local_48,2);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  local_48 = (undefined1 *)*param_2;
  local_40 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_40 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1,&local_48);
  local_4a = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_4a,2);
  local_48 = &DAT_149e02010;
  local_40 = 2;
  FUN_145d3640c(param_1[1],&local_48);
  iVar1 = *(int *)((longlong)param_1 + 0x24);
  plVar2 = (longlong *)param_1[1];
  if (0 < iVar1) {
    do {
      local_48 = (undefined1 *)CONCAT62(local_48._2_6_,9);
      (**(code **)(*plVar2 + 0x170))(plVar2,&local_48,2);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    plVar2 = (longlong *)param_1[1];
  }
  local_48 = (undefined1 *)CONCAT62(local_48._2_6_,0x7b);
  (**(code **)(*plVar2 + 0x170))(plVar2,&local_48,2);
  *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
  iVar1 = (int)param_1[3];
  *(uint *)(param_1 + 3) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1c) < iVar1 + 1U) {
    FUN_14047d866(param_1 + 2,iVar1);
  }
  *(undefined4 *)(param_1[2] + (longlong)iVar1 * 4) = 6;
  *(undefined4 *)(param_1 + 4) = 2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b4b36 FUN_1470b4b36 body=377 status=ok
// SIG undefined FUN_1470b4b36(void)

void FUN_1470b4b36(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  int local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_48 = (undefined1 *)CONCAT62(local_48._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_48,2);
  }
  local_48 = &DAT_149e02010;
  local_40 = 2;
  FUN_145d3640c();
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar2) {
    plVar1 = (longlong *)param_1[1];
    do {
      local_48 = (undefined1 *)CONCAT62(local_48._2_6_,9);
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_48,2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_48 = (undefined1 *)*param_2;
  local_40 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_40 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1,&local_48);
  local_32 = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_32,2);
  local_48._0_2_ = 0x20;
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_48,2);
  local_48 = (undefined1 *)CONCAT62(local_48._2_6_,0x5b);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_48,2);
  *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
  iVar2 = (int)param_1[3];
  *(uint *)(param_1 + 3) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1c) < iVar2 + 1U) {
    FUN_14047d866(param_1 + 2,iVar2);
  }
  *(undefined4 *)(param_1[2] + (longlong)iVar2 * 4) = 5;
  *(undefined4 *)(param_1 + 4) = 4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b4cb0 FUN_1470b4cb0 body=330 status=ok
// SIG undefined FUN_1470b4cb0(void)

void FUN_1470b4cb0(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  int local_50;
  undefined2 local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_58 = (undefined1 *)CONCAT62(local_58._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_58,2);
  }
  local_58 = &DAT_149e02010;
  local_50 = 2;
  FUN_145d3640c();
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar2) {
    plVar1 = (longlong *)param_1[1];
    do {
      local_58 = (undefined1 *)CONCAT62(local_58._2_6_,9);
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_58,2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_58 = (undefined1 *)*param_2;
  local_50 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_50 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1,&local_58);
  local_42 = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_42,2);
  local_58 = (undefined1 *)CONCAT62(local_58._2_6_,0x20);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_58,2);
  FUN_145928232(param_1[1],param_3);
  *(undefined4 *)(param_1 + 4) = 8;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b4f74 FUN_1470b4f74 body=422 status=ok
// SIG undefined FUN_1470b4f74(void)

void FUN_1470b4f74(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined4 local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  ulonglong *local_88;
  undefined1 local_80;
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_98 = (undefined1 *)CONCAT62(local_98._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_98,2);
  }
  local_98 = &DAT_149e02010;
  local_90 = (undefined1 *)CONCAT44(local_90._4_4_,2);
  FUN_145d3640c();
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar2) {
    plVar1 = (longlong *)param_1[1];
    do {
      local_98 = (undefined1 *)CONCAT62(local_98._2_6_,9);
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_98,2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_98 = (undefined1 *)*param_2;
  iVar2 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar2 = 0;
  }
  local_90 = (undefined1 *)CONCAT44(local_90._4_4_,iVar2);
  (**(code **)(*param_1 + 0x18))(param_1,&local_98);
  local_a8 = (undefined1 *)CONCAT62(local_a8._2_6_,0x3a);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_a8,2);
  local_98 = (undefined1 *)CONCAT62(local_98._2_6_,0x20);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_98,2);
  local_98 = local_78;
  local_80 = 0;
  local_88 = &local_38;
  local_90 = local_98;
  FUN_140212e80(&local_98,L"%lld",param_3);
  local_a8 = local_98;
  local_a0 = (undefined4)((ulonglong)((longlong)local_90 - (longlong)local_98) >> 1);
  FUN_145d3640c(param_1[1],&local_a8);
  FUN_144724f3c(&local_98);
  *(undefined4 *)(param_1 + 4) = 8;
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b511c FUN_1470b511c body=366 status=ok
// SIG undefined FUN_1470b511c(void)

void FUN_1470b511c(longlong *param_1,undefined8 *param_2,byte param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_78 [46];
  undefined2 local_4a;
  wchar_t *local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_48 = (wchar_t *)CONCAT62(local_48._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_48,2);
  }
  local_48 = L"\r\n";
  local_40 = 2;
  FUN_145d3640c();
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar2) {
    plVar1 = (longlong *)param_1[1];
    do {
      local_48 = (wchar_t *)CONCAT62(local_48._2_6_,9);
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_48,2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_48 = (wchar_t *)*param_2;
  local_40 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_40 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1,&local_48);
  local_4a = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_4a,2);
  local_48 = (wchar_t *)CONCAT62(local_48._2_6_,0x20);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_48,2);
  local_48 = L"false";
  if (param_3 != 0) {
    local_48 = L"true";
  }
  local_40 = param_3 ^ 5;
  FUN_145d3640c(param_1[1],&local_48);
  *(uint *)(param_1 + 4) = 10 - (uint)param_3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b528c FUN_1470b528c body=362 status=ok
// SIG undefined FUN_1470b528c(void)

void FUN_1470b528c(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_78 [46];
  undefined2 local_4a;
  undefined1 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_48 = (undefined1 *)CONCAT62(local_48._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_48,2);
  }
  local_48 = &DAT_149e02010;
  local_40 = 2;
  FUN_145d3640c(param_1[1]);
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar2) {
    plVar1 = (longlong *)param_1[1];
    do {
      local_48 = (undefined1 *)CONCAT62(local_48._2_6_,9);
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_48,2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_48 = (undefined1 *)*param_2;
  local_40 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_40 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1,&local_48);
  local_4a = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_4a,2);
  local_48 = (undefined1 *)CONCAT62(local_48._2_6_,0x20);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_48,2);
  local_40 = (int)param_3[1] + -1;
  if ((int)param_3[1] == 0) {
    local_40 = 0;
  }
  local_48 = (undefined1 *)*param_3;
  (**(code **)(*param_1 + 0x18))(param_1,&local_48);
  *(undefined4 *)(param_1 + 4) = 7;
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b53f8 FUN_1470b53f8 body=128 status=ok
// SIG undefined FUN_1470b53f8(void)

void FUN_1470b53f8(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14c9a3f00;
  if (DAT_14c9a3f34 != 0) {
    *(int *)(DAT_14c9a3f00 + (longlong)DAT_14c9a3f30 * 0x18) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x18) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c9a3f34) {
    iVar4 = DAT_14c9a3f30;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x18) = iVar4;
  DAT_14c9a3f34 = DAT_14c9a3f34 + 1;
  puVar3 = &DAT_14c9a3f10;
  if (DAT_14c9a3f20 != (undefined *)0x0) {
    puVar3 = DAT_14c9a3f20;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14c9a3f30 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 1470b5478 FUN_1470b5478 body=132 status=ok
// SIG undefined FUN_1470b5478(void)

void FUN_1470b5478(longlong param_1,int param_2)

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



// FUNCTION 1470b54fe FUN_1470b54fe body=136 status=ok
// SIG undefined FUN_1470b54fe(void)

void FUN_1470b54fe(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14c9a3c68;
  if (DAT_14c9a3c9c != 0) {
    *(int *)(DAT_14c9a3c68 + (longlong)DAT_14c9a3c98 * 0x60) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x60) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c9a3c9c) {
    iVar4 = DAT_14c9a3c98;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x60) = iVar4;
  DAT_14c9a3c9c = DAT_14c9a3c9c + 1;
  puVar3 = &DAT_14c9a3c78;
  if (DAT_14c9a3c88 != (undefined *)0x0) {
    puVar3 = DAT_14c9a3c88;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14c9a3c98 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 1470b5586 FUN_1470b5586 body=114 status=ok
// SIG undefined FUN_1470b5586(void)

void FUN_1470b5586(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 1470b55f8 FUN_1470b55f8 body=31 status=ok
// SIG undefined FUN_1470b55f8(void)

undefined8 FUN_1470b55f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470b5632 FUN_1470b5632 body=93 status=ok
// SIG undefined FUN_1470b5632(void)

void FUN_1470b5632(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a1855d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1470b5690 FUN_1470b5690 body=93 status=ok
// SIG undefined FUN_1470b5690(void)

void FUN_1470b5690(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a1855d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1470b56ee FUN_1470b56ee body=126 status=ok
// SIG undefined FUN_1470b56ee(void)

void FUN_1470b56ee(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a1855d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001470b575d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1470b576c FUN_1470b576c body=35 status=ok
// SIG undefined FUN_1470b576c(void)

void FUN_1470b576c(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001470b578b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 1470b5790 FUN_1470b5790 body=59 status=ok
// SIG undefined FUN_1470b5790(void)

longlong FUN_1470b5790(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1470b57d6(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *param_1;
  FUN_1470b57cb(lVar2);
  return lVar2;
}



// FUNCTION 1470b57cb FUN_1470b57cb body=11 status=ok
// SIG undefined FUN_1470b57cb(void)

void FUN_1470b57cb(undefined8 *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 1470b57d6 FUN_1470b57d6 body=132 status=ok
// SIG undefined FUN_1470b57d6(void)

void FUN_1470b57d6(longlong param_1,int param_2)

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



// FUNCTION 1470b585c FUN_1470b585c body=110 status=ok
// SIG undefined FUN_1470b585c(void)

void FUN_1470b585c(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x2c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 2,0);
      iVar2 = (int)(uVar3 >> 2);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x2c) = iVar5;
    FUN_1470b58cc(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1470b58cc FUN_1470b58cc body=132 status=ok
// SIG undefined FUN_1470b58cc(void)

void FUN_1470b58cc(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,4);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,4);
  return;
}



// FUNCTION 1470b5950 FUN_1470b5950 body=38 status=ok
// SIG undefined FUN_1470b5950(void)

undefined8 FUN_1470b5950(undefined8 param_1,int param_2)

{
  FUN_1470b5f06();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470b5976 FUN_1470b5976 body=186 status=ok
// SIG undefined FUN_1470b5976(void)

void FUN_1470b5976(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*param_2 == 0) || (*(int *)(param_1 + 0x50) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x48) + (longlong)(*(int *)(param_1 + 0x50) + -1) * 4) != 6))
  {
    FUN_145928344(param_1 + 0x38);
  }
  else {
    FUN_1400021e4(param_2,local_30);
    FUN_1470b5f64(param_1 + 0x38,local_30);
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1470b585c(param_1 + 8,iVar1);
  }
  lVar2 = param_1 + 8;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
  }
  *(undefined4 *)(lVar2 + (longlong)iVar1 * 4) = 1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b5a32 FUN_1470b5a32 body=114 status=ok
// SIG undefined FUN_1470b5a32(void)

void FUN_1470b5a32(longlong param_1)

{
  undefined1 auStack_38 [38];
  undefined2 local_12;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
  FUN_1401cd118(param_1 + 8);
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
  local_12 = 0x7d;
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x170))(*(longlong **)(param_1 + 0x40),&local_12,2)
  ;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
  FUN_14047c610(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x58) = 3;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b5aa6 FUN_1470b5aa6 body=164 status=ok
// SIG undefined FUN_1470b5aa6(void)

void FUN_1470b5aa6(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 == 0) {
    FUN_14683e51e(param_1 + 0x38);
  }
  else {
    FUN_1400021e4(param_2,local_30);
    FUN_1470b606a(param_1 + 0x38,local_30);
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1470b585c(param_1 + 8,iVar1);
  }
  lVar2 = param_1 + 8;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
  }
  *(undefined4 *)(lVar2 + (longlong)iVar1 * 4) = 2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b5b4c FUN_1470b5b4c body=37 status=ok
// SIG undefined FUN_1470b5b4c(void)

void FUN_1470b5b4c(longlong param_1)

{
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
  FUN_1401cd118(param_1 + 8);
  FUN_1459282dc(param_1 + 0x38);
  return;
}



// FUNCTION 1470b5b72 FUN_1470b5b72 body=132 status=ok
// SIG undefined FUN_1470b5b72(void)

void FUN_1470b5b72(longlong param_1,longlong *param_2,undefined4 param_3)

{
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  FUN_1400021e4(param_2,local_40);
  FUN_1470b6170(param_1 + 0x38,local_40,param_3);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b5c0e FUN_1470b5c0e body=124 status=ok
// SIG undefined FUN_1470b5c0e(void)

void FUN_1470b5c0e(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  FUN_1400021e4(param_2,local_30);
  FUN_1470b6324(param_1 + 0x38,local_30,param_3);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b5c9e FUN_1470b5c9e body=124 status=ok
// SIG undefined FUN_1470b5c9e(void)

void FUN_1470b5c9e(longlong param_1,longlong *param_2,undefined4 param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  FUN_1400021e4(param_2,local_30);
  FUN_1470b6454(param_1 + 0x38,local_30,param_3);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b5d2c FUN_1470b5d2c body=209 status=ok
// SIG undefined FUN_1470b5d2c(void)

void FUN_1470b5d2c(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
  }
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_3 + 1);
  lVar1 = (longlong)local_38;
  _Src = (void *)*param_3;
  if (lVar1 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar1 * 2);
  }
  FUN_1400021e4(param_2,local_50);
  FUN_146b399f4(param_1 + 0x38,local_50,&local_40);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b5e14 FUN_1470b5e14 body=163 status=ok
// SIG undefined FUN_1470b5e14(void)

void FUN_1470b5e14(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_2 == 0) {
    FUN_1400021e4(param_3,local_38);
    FUN_145927f78(param_1 + 0x38,local_38);
  }
  else {
    FUN_1400021e4(param_3,local_48);
    FUN_1400021e4(param_2,local_38);
    FUN_146b399f4(param_1 + 0x38,local_38,local_48);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b5eb8 FUN_1470b5eb8 body=32 status=ok
// SIG undefined FUN_1470b5eb8(void)

longlong FUN_1470b5eb8(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x38) + 8))(param_1 + 0x38);
  return param_1 + 0x78;
}



// FUNCTION 1470b5ed8 FUN_1470b5ed8 body=45 status=ok
// SIG undefined FUN_1470b5ed8(void)

longlong FUN_1470b5ed8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_1470b5f06(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470b5f06 FUN_1470b5f06 body=94 status=ok
// SIG undefined FUN_1470b5f06(void)

void FUN_1470b5f06(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a185660;
  param_1[7] = &PTR_FUN_14a185700;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_145a10eee(param_1 + 7);
  *param_1 = &PTR_LAB_14a185980;
  if (param_1[5] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1470b5f64 FUN_1470b5f64 body=260 status=ok
// SIG undefined FUN_1470b5f64(void)

void FUN_1470b5f64(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int local_30;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_38 = CONCAT62(local_38._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_38,2);
  }
  local_38 = *param_2;
  local_30 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_30 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1,&local_38);
  local_22 = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_22,2);
  local_38 = CONCAT62(local_38._2_6_,0x7b);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_38,2);
  *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
  iVar1 = (int)param_1[3];
  *(uint *)(param_1 + 3) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1c) < iVar1 + 1U) {
    FUN_14047d866(param_1 + 2,iVar1);
  }
  *(undefined4 *)(param_1[2] + (longlong)iVar1 * 4) = 6;
  *(undefined4 *)(param_1 + 4) = 2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b606a FUN_1470b606a body=260 status=ok
// SIG undefined FUN_1470b606a(void)

void FUN_1470b606a(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int local_30;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_38 = CONCAT62(local_38._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_38,2);
  }
  local_38 = *param_2;
  local_30 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_30 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1,&local_38);
  local_22 = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_22,2);
  local_38 = CONCAT62(local_38._2_6_,0x5b);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_38,2);
  *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
  iVar1 = (int)param_1[3];
  *(uint *)(param_1 + 3) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1c) < iVar1 + 1U) {
    FUN_14047d866(param_1 + 2,iVar1);
  }
  *(undefined4 *)(param_1[2] + (longlong)iVar1 * 4) = 5;
  *(undefined4 *)(param_1 + 4) = 4;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b6170 FUN_1470b6170 body=203 status=ok
// SIG undefined FUN_1470b6170(void)

void FUN_1470b6170(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_48 = CONCAT62(local_48._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_48,2);
  }
  local_48 = *param_2;
  local_40 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_40 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  local_32 = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_32,2);
  FUN_145928232(param_1[1],param_3);
  *(undefined4 *)(param_1 + 4) = 8;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b6324 FUN_1470b6324 body=303 status=ok
// SIG undefined FUN_1470b6324(void)

void FUN_1470b6324(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined4 local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  ulonglong *local_78;
  undefined1 local_70;
  undefined1 local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_88 = (undefined1 *)CONCAT62(local_88._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_88,2);
  }
  local_88 = (undefined1 *)*param_2;
  iVar1 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar1 = 0;
  }
  local_80 = (undefined1 *)CONCAT44(local_80._4_4_,iVar1);
  (**(code **)(*param_1 + 0x18))(param_1);
  local_98 = (undefined1 *)CONCAT62(local_98._2_6_,0x3a);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_98,2);
  local_88 = local_68;
  local_70 = 0;
  local_78 = &local_28;
  local_80 = local_88;
  FUN_140212e80(&local_88,L"%lld",param_3);
  local_98 = local_88;
  local_90 = (undefined4)((ulonglong)((longlong)local_80 - (longlong)local_88) >> 1);
  FUN_145d3640c(param_1[1],&local_98);
  FUN_144724f3c(&local_88);
  *(undefined4 *)(param_1 + 4) = 8;
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b6454 FUN_1470b6454 body=248 status=ok
// SIG undefined FUN_1470b6454(void)

void FUN_1470b6454(longlong *param_1,undefined8 *param_2,byte param_3)

{
  undefined1 auStack_68 [46];
  undefined2 local_3a;
  wchar_t *local_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_38 = (wchar_t *)CONCAT62(local_38._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_38,2);
  }
  local_38 = (wchar_t *)*param_2;
  local_30 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_30 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1,&local_38);
  local_3a = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_3a,2);
  local_38 = L"false";
  if (param_3 != 0) {
    local_38 = L"true";
  }
  local_30 = param_3 ^ 5;
  FUN_145d3640c(param_1[1],&local_38);
  *(uint *)(param_1 + 4) = 10 - (uint)param_3;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b654e FUN_1470b654e body=112 status=ok
// SIG undefined FUN_1470b654e(void)

void FUN_1470b654e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 8;
    if (8 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0xc,0);
      iVar2 = (int)(uVar1 / 0xc);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x6c)) {
    *(int *)(param_1 + 0x6c) = iVar3;
    FUN_1402a4ac6(param_1,*(undefined4 *)(param_1 + 0x68));
    return;
  }
  return;
}



// FUNCTION 1470b65be FUN_1470b65be body=31 status=ok
// SIG undefined FUN_1470b65be(void)

undefined8 FUN_1470b65be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470b65fa FUN_1470b65fa body=93 status=ok
// SIG undefined FUN_1470b65fa(void)

void FUN_1470b65fa(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a185830;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1470b6658 FUN_1470b6658 body=126 status=ok
// SIG undefined FUN_1470b6658(void)

void FUN_1470b6658(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a185830;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001470b66c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1470b66d6 FUN_1470b66d6 body=21 status=ok
// SIG undefined FUN_1470b66d6(void)

undefined8 FUN_1470b66d6(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1470b66ec FUN_1470b66ec body=140 status=ok
// SIG undefined FUN_1470b66ec(void)

void FUN_1470b66ec(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14c9a3e50;
  if (param_1 <= (int)DAT_14c9a3e50) {
    if (DAT_14c9a3e54 == 0) {
      uVar2 = 4;
      if (4 < DAT_14c9a3e50) {
        uVar2 = DAT_14c9a3e50;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)DAT_14c9a3e50 + ((ulonglong)((longlong)(int)DAT_14c9a3e50 * 3) >> 3) +
              0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    DAT_14c9a3e54 = (int)uVar5;
    FUN_1446f8d3c(&DAT_14c9a3e48,param_1,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1470b677a FUN_1470b677a body=110 status=ok
// SIG undefined FUN_1470b677a(void)

void FUN_1470b677a(longlong param_1,int param_2)

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
    FUN_1470b67ea(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1470b67ea FUN_1470b67ea body=132 status=ok
// SIG undefined FUN_1470b67ea(void)

void FUN_1470b67ea(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 1470b686e FUN_1470b686e body=62 status=ok
// SIG undefined FUN_1470b686e(void)

void FUN_1470b686e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1470b68ac(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 1470b68ac FUN_1470b68ac body=93 status=ok
// SIG undefined FUN_1470b68ac(void)

ulonglong FUN_1470b68ac(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 5,8);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 1470b690a FUN_1470b690a body=62 status=ok
// SIG undefined FUN_1470b690a(void)

void FUN_1470b690a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1470b6948(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1470b6948 FUN_1470b6948 body=93 status=ok
// SIG undefined FUN_1470b6948(void)

ulonglong FUN_1470b6948(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1470b69a6 FUN_1470b69a6 body=62 status=ok
// SIG undefined FUN_1470b69a6(void)

void FUN_1470b69a6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1470b69e4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc,4);
  }
  return;
}



// FUNCTION 1470b69e4 FUN_1470b69e4 body=112 status=ok
// SIG undefined FUN_1470b69e4(void)

ulonglong FUN_1470b69e4(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xc) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1470b6a1e;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xc,4);
      param_2 = param_2 / 0xc;
    }
  }
LAB_1470b6a1e:
  return param_2 & 0xffffffff;
}



// FUNCTION 1470b6a54 FUN_1470b6a54 body=125 status=ok
// SIG undefined FUN_1470b6a54(void)

void FUN_1470b6a54(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0x10;
    if (0x10 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x10c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 4,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 4)) {
        uVar4 = uVar2 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x10c) = (int)uVar4;
    FUN_140a8dc7a(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1470b6ad2 FUN_1470b6ad2 body=67 status=ok
// SIG undefined FUN_1470b6ad2(void)

void FUN_1470b6ad2(longlong *param_1)

{
  if (*(int *)((longlong)param_1 + 0xc) != -1) {
    FUN_1470b6b15(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = 0;
    param_1[1] = -0x100000000;
  }
  return;
}



// FUNCTION 1470b6b15 FUN_1470b6b15 body=61 status=ok
// SIG undefined FUN_1470b6b15(void)

void FUN_1470b6b15(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1470b6b52 FUN_1470b6b52 body=98 status=ok
// SIG undefined FUN_1470b6b52(void)

void FUN_1470b6b52(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1470b6bb4 FUN_1470b6bb4 body=52 status=ok
// SIG undefined FUN_1470b6bb4(void)

void FUN_1470b6bb4(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1470b6be8(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 1470b6be8 FUN_1470b6be8 body=156 status=ok
// SIG undefined FUN_1470b6be8(void)

undefined8 * FUN_1470b6be8(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 1470b6c94 FUN_1470b6c94 body=29 status=ok
// SIG undefined FUN_1470b6c94(void)

void FUN_1470b6c94(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1470b6cb2 FUN_1470b6cb2 body=76 status=ok
// SIG undefined FUN_1470b6cb2(void)

undefined8 * FUN_1470b6cb2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a1858f0;
  FUN_1470b6ad2(param_1 + 7);
  if (*(char *)(param_1 + 6) == '\x01') {
    *(undefined1 *)(param_1 + 6) = 0;
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470b6cfe FUN_1470b6cfe body=233 status=ok
// SIG undefined FUN_1470b6cfe(void)

void FUN_1470b6cfe(undefined8 param_1)

{
  size_t sVar1;
  int iVar2;
  wchar_t *_Str;
  undefined1 auStack_e8 [32];
  wchar_t *local_c8;
  int local_c0;
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1470b3238(param_1,&local_c8);
  iVar2 = local_c0 + -1;
  _Str = local_c8;
  if (local_c0 == 0) {
    iVar2 = 0;
    _Str = L"";
  }
  local_38 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_30 = 0;
    local_28 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(local_b8,_Str,sVar1 & 0xffffffff,1);
  }
  FUN_142b308c3(local_30,iVar2);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_c8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b6de8 FUN_1470b6de8 body=77 status=ok
// SIG undefined FUN_1470b6de8(void)

void FUN_1470b6de8(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    lVar1 = param_1;
  }
  FUN_140c43101(lVar1,*(undefined4 *)(param_1 + 200));
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(int *)(param_1 + 0xcc) == param_2) {
    return;
  }
  FUN_1470b6e36(param_1,param_2);
  return;
}



// FUNCTION 1470b6e36 FUN_1470b6e36 body=120 status=ok
// SIG undefined FUN_1470b6e36(void)

void FUN_1470b6e36(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 8;
    if (8 < param_2) {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,0);
      iVar2 = (int)(uVar1 / 0x18);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0xcc)) {
    *(int *)(param_1 + 0xcc) = iVar3;
    FUN_1470b6eae(param_1,*(undefined4 *)(param_1 + 200));
    return;
  }
  return;
}



// FUNCTION 1470b6eae FUN_1470b6eae body=149 status=ok
// SIG undefined FUN_1470b6eae(void)

void FUN_1470b6eae(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc0);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,0x18);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,0x18);
  return;
}



// FUNCTION 1470b6f44 FUN_1470b6f44 body=136 status=ok
// SIG undefined FUN_1470b6f44(void)

void FUN_1470b6f44(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0xcc)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x18,0);
      iVar4 = (int)(uVar3 / 0x18);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0xcc) = iVar5;
    FUN_1470b6eae(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1470b6fce FUN_1470b6fce body=31 status=ok
// SIG undefined FUN_1470b6fce(void)

undefined8 FUN_1470b6fce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470b700a FUN_1470b700a body=93 status=ok
// SIG undefined FUN_1470b700a(void)

void FUN_1470b700a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a185910;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1470b7068 FUN_1470b7068 body=93 status=ok
// SIG undefined FUN_1470b7068(void)

void FUN_1470b7068(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a185910;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1470b70c6 FUN_1470b70c6 body=126 status=ok
// SIG undefined FUN_1470b70c6(void)

void FUN_1470b70c6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a185910;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001470b7135. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1470b7154 FUN_1470b7154 body=216 status=ok
// SIG undefined FUN_1470b7154(void)

void FUN_1470b7154(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong lStack_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = 0;
  uStack_48 = 0xffffffff;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0xffffffff;
  lStack_38 = 0;
  local_30 = 0xffffffff;
  lVar2 = FUN_1400796d0(param_1[2],DAT_14c9a42a8,1);
  if (lVar2 != 0) {
    if (local_50 != *param_2) {
      uStack_48 = (undefined4)param_2[1];
      local_50 = *param_2;
    }
    lVar1 = *param_3;
    if (CONCAT44(uStack_40,uStack_44) != lVar1) {
      uStack_44 = (undefined4)lVar1;
      uStack_40 = (undefined4)((ulonglong)lVar1 >> 0x20);
      uStack_3c = (undefined4)param_3[1];
    }
    if (lStack_38 != *param_4) {
      local_30 = (undefined4)param_4[1];
      lStack_38 = *param_4;
    }
    (**(code **)(*param_1 + 0x248))(param_1,lVar2,&local_50);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b7232 FUN_1470b7232 body=288 status=ok
// SIG undefined FUN_1470b7232(void)

void FUN_1470b7232(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  local_38 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar3 = &local_40;
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 8);
    lVar2 = FUN_144a63fc8();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar5 = lVar4 != 0;
      if (lVar4 != lVar2 && bVar5) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar5 = lVar4 != 0;
          if (lVar4 == lVar2) break;
        } while (lVar4 != 0);
      }
      if (!bVar5) goto LAB_1470b7316;
    }
    else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) goto LAB_1470b7316;
    local_40 = *puVar3;
    local_38 = 0xffffffff;
    puVar3 = &local_40;
  }
LAB_1470b7316:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1470d679c(puVar3);
  *param_3 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470b7354 FUN_1470b7354 body=351 status=ok
// SIG undefined FUN_1470b7354(void)

void FUN_1470b7354(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0;
  local_38 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar2 = &local_40;
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 8);
    lVar1 = FUN_144a63fc8();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar1 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar1) break;
        } while (lVar3 != 0);
      }
      if (!bVar4) goto LAB_1470b7438;
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) goto LAB_1470b7438;
    local_40 = *puVar2;
    local_38 = 0xffffffff;
    puVar2 = &local_40;
  }
LAB_1470b7438:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1470d6780(&local_50,puVar2);
  if (&local_50 == param_3) {
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_50;
    *(undefined4 *)(param_3 + 1) = local_48;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_44;
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470b74ba FUN_1470b74ba body=288 status=ok
// SIG undefined FUN_1470b74ba(void)

void FUN_1470b74ba(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  local_38 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar3 = &local_40;
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 8);
    lVar2 = FUN_144a63fc8();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar5 = lVar4 != 0;
      if (lVar4 != lVar2 && bVar5) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar5 = lVar4 != 0;
          if (lVar4 == lVar2) break;
        } while (lVar4 != 0);
      }
      if (!bVar5) goto LAB_1470b759e;
    }
    else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) goto LAB_1470b759e;
    local_40 = *puVar3;
    local_38 = 0xffffffff;
    puVar3 = &local_40;
  }
LAB_1470b759e:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1470d67bc(puVar3);
  *param_3 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470b75dc FUN_1470b75dc body=351 status=ok
// SIG undefined FUN_1470b75dc(void)

void FUN_1470b75dc(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0;
  local_38 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar2 = &local_40;
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 8);
    lVar1 = FUN_144a63fc8();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar1 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar1) break;
        } while (lVar3 != 0);
      }
      if (!bVar4) goto LAB_1470b76c0;
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) goto LAB_1470b76c0;
    local_40 = *puVar2;
    local_38 = 0xffffffff;
    puVar2 = &local_40;
  }
LAB_1470b76c0:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1470d67a0(&local_50,puVar2);
  if (&local_50 == param_3) {
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_50;
    *(undefined4 *)(param_3 + 1) = local_48;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_44;
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470b773c FUN_1470b773c body=179 status=ok
// SIG undefined FUN_1470b773c(void)

void FUN_1470b773c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1470d6772(&local_30,local_20);
  if (*param_3 != local_30) {
    *param_3 = local_30;
    *(undefined4 *)(param_3 + 1) = local_28;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b77f6 FUN_1470b77f6 body=390 status=ok
// SIG undefined FUN_1470b77f6(void)

void FUN_1470b77f6(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = 0;
  local_40 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar3 = &local_48;
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 8);
    lVar2 = FUN_144a63fc8();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar5 = lVar4 != 0;
      if (lVar4 != lVar2 && bVar5) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar5 = lVar4 != 0;
          if (lVar4 == lVar2) break;
        } while (lVar4 != 0);
      }
      if (!bVar5) goto LAB_1470b793b;
    }
    else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) goto LAB_1470b793b;
    local_48 = *puVar3;
    local_40 = 0xffffffff;
    puVar3 = &local_48;
  }
LAB_1470b793b:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_142b351a2(local_38,puVar3);
  *param_3 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470b797e FUN_1470b797e body=221 status=ok
// SIG undefined FUN_1470b797e(void)

void FUN_1470b797e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_142b350ae(&local_30,local_20);
  if (&local_30 == param_3) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_30;
    *(undefined4 *)(param_3 + 1) = local_28;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_24;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b7a5c FUN_1470b7a5c body=402 status=ok
// SIG undefined FUN_1470b7a5c(void)

void FUN_1470b7a5c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = 0;
  local_40 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar2 = &local_48;
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 8);
    lVar1 = FUN_144a63fc8();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar1 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar1) break;
        } while (lVar3 != 0);
      }
      if (!bVar4) goto LAB_1470b7ba1;
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) goto LAB_1470b7ba1;
    local_48 = *puVar2;
    local_40 = 0xffffffff;
    puVar2 = &local_48;
  }
LAB_1470b7ba1:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1470d680c(&local_50,local_38,puVar2);
  *param_3 = local_50;
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470b7c08 FUN_1470b7c08 body=587 status=ok
// SIG undefined FUN_1470b7c08(void)

void FUN_1470b7c08(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = 0;
  local_40 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar3 = &local_48;
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 8);
    lVar1 = FUN_144a63fc8();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar5 = lVar4 != 0;
      if (lVar4 != lVar1 && bVar5) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar5 = lVar4 != 0;
          if (lVar4 == lVar1) break;
        } while (lVar4 != 0);
      }
      if (bVar5) goto LAB_1470b7cc0;
    }
    else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
LAB_1470b7cc0:
      local_48 = *puVar3;
      local_40 = 0xffffffff;
      puVar3 = &local_48;
    }
  }
  local_58 = 0;
  local_50 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar2 = &local_58;
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 8);
    lVar1 = FUN_144a63fc8();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar5 = lVar4 != 0;
      if (lVar4 != lVar1 && bVar5) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar5 = lVar4 != 0;
          if (lVar4 == lVar1) break;
        } while (lVar4 != 0);
      }
      if (!bVar5) goto LAB_1470b7e11;
    }
    else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) goto LAB_1470b7e11;
    local_58 = *puVar2;
    local_50 = 0xffffffff;
    puVar2 = &local_58;
  }
LAB_1470b7e11:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_142b3569a(local_38,puVar3,puVar2);
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470b7e5a FUN_1470b7e5a body=601 status=ok
// SIG undefined FUN_1470b7e5a(void)

void FUN_1470b7e5a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_50 = 0;
  local_48 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar3 = &local_50;
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 8);
    lVar2 = FUN_144a63fc8();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar6 = lVar4 != 0;
      if (lVar4 != lVar2 && bVar6) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar6 = lVar4 != 0;
          if (lVar4 == lVar2) break;
        } while (lVar4 != 0);
      }
      if (bVar6) goto LAB_1470b7f18;
    }
    else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
LAB_1470b7f18:
      local_50 = *puVar3;
      local_48 = 0xffffffff;
      puVar3 = &local_50;
    }
  }
  local_60 = 0;
  local_58 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar5 = &local_60;
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 8);
    lVar2 = FUN_144a63fc8();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar6 = lVar4 != 0;
      if (lVar4 != lVar2 && bVar6) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar6 = lVar4 != 0;
          if (lVar4 == lVar2) break;
        } while (lVar4 != 0);
      }
      if (!bVar6) goto LAB_1470b806d;
    }
    else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) goto LAB_1470b806d;
    local_60 = *puVar5;
    local_58 = 0xffffffff;
    puVar5 = &local_60;
  }
LAB_1470b806d:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = thunk_FUN_1409c2518(local_40,puVar3,puVar5);
  *param_3 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470b80b4 FUN_1470b80b4 body=414 status=ok
// SIG undefined FUN_1470b80b4(void)

void FUN_1470b80b4(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = 0;
  local_40 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar2 = &local_48;
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 8);
    lVar1 = FUN_144a63fc8();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar1 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar1) break;
        } while (lVar3 != 0);
      }
      if (!bVar4) goto LAB_1470b81f9;
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) goto LAB_1470b81f9;
    local_48 = *puVar2;
    local_40 = 0xffffffff;
    puVar2 = &local_48;
  }
LAB_1470b81f9:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_142b35302(&local_58,local_38,puVar2);
  if (*param_3 != local_58) {
    *param_3 = local_58;
    *(undefined4 *)(param_3 + 1) = local_50;
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470b825a FUN_1470b825a body=390 status=ok
// SIG undefined FUN_1470b825a(void)

void FUN_1470b825a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = 0;
  local_40 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar3 = &local_48;
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 8);
    lVar2 = FUN_144a63fc8();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar5 = lVar4 != 0;
      if (lVar4 != lVar2 && bVar5) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar5 = lVar4 != 0;
          if (lVar4 == lVar2) break;
        } while (lVar4 != 0);
      }
      if (!bVar5) goto LAB_1470b839f;
    }
    else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) goto LAB_1470b839f;
    local_48 = *puVar3;
    local_40 = 0xffffffff;
    puVar3 = &local_48;
  }
LAB_1470b839f:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1470d67c0(local_38,puVar3);
  *param_3 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470b83ea FUN_1470b83ea body=55 status=ok
// SIG undefined FUN_1470b83ea(void)

void FUN_1470b83ea(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4450 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4450 = FUN_140002ddd(FUN_1462a71b5,uVar1,L"GbxActorStateMachineAspect_SetState");
  }
  return;
}



// FUNCTION 1470b8422 FUN_1470b8422 body=241 status=ok
// SIG undefined FUN_1470b8422(void)

longlong * FUN_1470b8422(undefined8 param_1,longlong *param_2)

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
  plVar4 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a18e280;
  plVar1 = plVar4 + 2;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[0xb] = 0;
  *(undefined4 *)(plVar4 + 8) = 0xffffffff;
  plVar4[9] = 0;
  plVar4[10] = 0;
  *(undefined1 *)(plVar4 + 0xb) = 0;
  plVar4[2] = (longlong)&PTR_FUN_14a18d5c0;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_1470bc3f6(&local_30,plVar1);
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



// FUNCTION 1470b8516 FUN_1470b8516 body=55 status=ok
// SIG undefined FUN_1470b8516(void)

void FUN_1470b8516(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4438 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4438 =
         FUN_140002ddd(FUN_1462a711f,uVar1,L"GbxActorStateMachineAspectSettings_SetState");
  }
  return;
}



// FUNCTION 1470b85b0 FUN_1470b85b0 body=59 status=ok
// SIG undefined FUN_1470b85b0(void)

undefined8 FUN_1470b85b0(longlong *param_1)

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



// FUNCTION 1470b8644 FUN_1470b8644 body=55 status=ok
// SIG undefined FUN_1470b8644(void)

void FUN_1470b8644(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4150 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4150 = FUN_140002ddd(FUN_1462a6281,uVar1,L"ActorContextResolver");
  }
  return;
}



// FUNCTION 1470b867c FUN_1470b867c body=34 status=ok
// SIG undefined FUN_1470b867c(void)

undefined8 FUN_1470b867c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1470b869e FUN_1470b869e body=55 status=ok
// SIG undefined FUN_1470b869e(void)

void FUN_1470b869e(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4198 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4198 = FUN_140002ddd(FUN_141739b61,uVar1,L"AttributeContextResolver");
  }
  return;
}



// FUNCTION 1470b86d6 FUN_1470b86d6 body=73 status=ok
// SIG undefined FUN_1470b86d6(void)

undefined8 * FUN_1470b86d6(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("Runtime\\Gearbox\\GbxEngine\\Public\\Attributes/AttributeContextResolver.h",0x29,
                L"Pure virtual not implemented (%s)",L"FAttributeContextResolver::ResolveContext");
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 1;
  return param_2;
}



// FUNCTION 1470b877a FUN_1470b877a body=59 status=ok
// SIG undefined FUN_1470b877a(void)

undefined8 FUN_1470b877a(longlong *param_1)

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



// FUNCTION 1470b881a FUN_1470b881a body=55 status=ok
// SIG undefined FUN_1470b881a(void)

void FUN_1470b881a(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4168 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4168 = FUN_140002ddd(FUN_1462a6317,uVar1,L"ActorRootComponentContextResolver");
  }
  return;
}



// FUNCTION 1470b88ba FUN_1470b88ba body=59 status=ok
// SIG undefined FUN_1470b88ba(void)

undefined8 FUN_1470b88ba(longlong *param_1)

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



// FUNCTION 1470b895a FUN_1470b895a body=34 status=ok
// SIG undefined FUN_1470b895a(void)

undefined8 FUN_1470b895a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1470b897c FUN_1470b897c body=55 status=ok
// SIG undefined FUN_1470b897c(void)

void FUN_1470b897c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4180 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4180 = FUN_140002ddd(FUN_1462a63ad,uVar1,L"AnimInstanceContextResolver");
  }
  return;
}



// FUNCTION 1470b8a1c FUN_1470b8a1c body=59 status=ok
// SIG undefined FUN_1470b8a1c(void)

undefined8 FUN_1470b8a1c(longlong *param_1)

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



// FUNCTION 1470b8b26 FUN_1470b8b26 body=59 status=ok
// SIG undefined FUN_1470b8b26(void)

undefined8 FUN_1470b8b26(longlong *param_1)

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



// FUNCTION 1470b8bc6 FUN_1470b8bc6 body=34 status=ok
// SIG undefined FUN_1470b8bc6(void)

undefined8 FUN_1470b8bc6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1470b8c62 FUN_1470b8c62 body=59 status=ok
// SIG undefined FUN_1470b8c62(void)

undefined8 FUN_1470b8c62(longlong *param_1)

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



// FUNCTION 1470b8d02 FUN_1470b8d02 body=34 status=ok
// SIG undefined FUN_1470b8d02(void)

undefined8 FUN_1470b8d02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1470b8d24 FUN_1470b8d24 body=55 status=ok
// SIG undefined FUN_1470b8d24(void)

void FUN_1470b8d24(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a41c8 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a41c8 = FUN_140002ddd(FUN_141739b92,uVar1,L"AttributeValueResolver");
  }
  return;
}



// FUNCTION 1470b8d78 FUN_1470b8d78 body=58 status=ok
// SIG undefined FUN_1470b8d78(void)

longlong FUN_1470b8d78(undefined8 param_1,longlong param_2)

{
  FUN_140033559(".\\Runtime/Gearbox/GbxEngine/Public/Attributes/AttributeValueResolver.h",0x27,
                L"Pure virtual not implemented (%s)",L"FAttributeValueResolver::Resolve");
  *(undefined2 *)(param_2 + 0x18) = 0;
  *(undefined1 *)(param_2 + 0x20) = 0;
  return param_2;
}



// FUNCTION 1470b8db2 FUN_1470b8db2 body=42 status=ok
// SIG undefined FUN_1470b8db2(void)

undefined8 FUN_1470b8db2(void)

{
  FUN_140033559(".\\Runtime/Gearbox/GbxEngine/Public/Attributes/AttributeValueResolver.h",0x2a,
                L"Pure virtual not implemented (%s)",L"FAttributeValueResolver::SetBaseValue");
  return 0;
}



// FUNCTION 1470b8ddc FUN_1470b8ddc body=42 status=ok
// SIG undefined FUN_1470b8ddc(void)

undefined8 FUN_1470b8ddc(void)

{
  FUN_140033559(".\\Runtime/Gearbox/GbxEngine/Public/Attributes/AttributeValueResolver.h",0x2b,
                L"Pure virtual not implemented (%s)",L"FAttributeValueResolver::ResetBaseValue");
  return 0;
}



// FUNCTION 1470b8e60 FUN_1470b8e60 body=59 status=ok
// SIG undefined FUN_1470b8e60(void)

undefined8 FUN_1470b8e60(longlong *param_1)

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



// FUNCTION 1470b8ef4 FUN_1470b8ef4 body=55 status=ok
// SIG undefined FUN_1470b8ef4(void)

void FUN_1470b8ef4(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a41e0 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a41e0 = FUN_140002ddd(FUN_1462a653d,uVar1,L"CharacterAnimInstanceContextResolver");
  }
  return;
}



// FUNCTION 1470b8f54 FUN_1470b8f54 body=62 status=ok
// SIG undefined FUN_1470b8f54(void)

undefined1 FUN_1470b8f54(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_1470b90d2(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1470b8fba FUN_1470b8fba body=59 status=ok
// SIG undefined FUN_1470b8fba(void)

undefined8 FUN_1470b8fba(longlong *param_1)

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



// FUNCTION 1470b9000 FUN_1470b9000 body=32 status=ok
// SIG undefined FUN_1470b9000(void)

void FUN_1470b9000(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_1470b909a(param_2);
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1470b9062 FUN_1470b9062 body=55 status=ok
// SIG undefined FUN_1470b9062(void)

void FUN_1470b9062(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a41f8 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a41f8 = FUN_140002ddd(FUN_1462a65d3,uVar1,L"ContextResolverChain");
  }
  return;
}



// FUNCTION 1470b909a FUN_1470b909a body=55 status=ok
// SIG undefined FUN_1470b909a(void)

void FUN_1470b909a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a18c310;
  FUN_140ece796(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1470b90d2 FUN_1470b90d2 body=93 status=ok
// SIG undefined FUN_1470b90d2(void)

undefined8 * FUN_1470b90d2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140ece796(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1470b9130(param_1,iVar1);
      FUN_1470b91a3(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1470b9130 FUN_1470b9130 body=115 status=ok
// SIG undefined FUN_1470b9130(void)

void FUN_1470b9130(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1470b91a3 FUN_1470b91a3 body=76 status=ok
// SIG undefined FUN_1470b91a3(void)

void FUN_1470b91a3(undefined8 *param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_1401f3db8(param_1,param_2);
    param_1 = param_1 + 3;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 1470b9242 FUN_1470b9242 body=59 status=ok
// SIG undefined FUN_1470b9242(void)

undefined8 FUN_1470b9242(longlong *param_1)

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



// FUNCTION 1470b92d8 FUN_1470b92d8 body=62 status=ok
// SIG undefined FUN_1470b92d8(void)

void FUN_1470b92d8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *param_2 = &PTR_FUN_14a18c5f0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  return;
}



// FUNCTION 1470b932c FUN_1470b932c body=91 status=ok
// SIG undefined FUN_1470b932c(void)

undefined8 FUN_1470b932c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
    do {
      FUN_141289ada(param_2 + -0x28,param_3 + -0x28);
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1470b93b0 FUN_1470b93b0 body=59 status=ok
// SIG undefined FUN_1470b93b0(void)

undefined8 FUN_1470b93b0(longlong *param_1)

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



// FUNCTION 1470b93f6 FUN_1470b93f6 body=34 status=ok
// SIG undefined FUN_1470b93f6(void)

void FUN_1470b93f6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1459a5612(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1470b946a FUN_1470b946a body=57 status=ok
// SIG undefined FUN_1470b946a(void)

void FUN_1470b946a(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4248 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4248 = FUN_140002ddd(FUN_1462a66c9,uVar1,L"DeveloperSettingsDef");
  }
  return;
}



// FUNCTION 1470b94a4 FUN_1470b94a4 body=104 status=ok
// SIG undefined FUN_1470b94a4(void)

undefined8 FUN_1470b94a4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_1470e552a(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b950e FUN_1470b950e body=28 status=ok
// SIG undefined FUN_1470b950e(void)

undefined8 FUN_1470b950e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 1470b958a FUN_1470b958a body=59 status=ok
// SIG undefined FUN_1470b958a(void)

undefined8 FUN_1470b958a(longlong *param_1)

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



// FUNCTION 1470b9626 FUN_1470b9626 body=55 status=ok
// SIG undefined FUN_1470b9626(void)

void FUN_1470b9626(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4260 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4260 = FUN_140002ddd(FUN_1462a675f,uVar1,L"GameStateContextResolver");
  }
  return;
}



// FUNCTION 1470b9712 FUN_1470b9712 body=63 status=ok
// SIG undefined FUN_1470b9712(void)

undefined1 FUN_1470b9712(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1470b988e(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 1470b977a FUN_1470b977a body=59 status=ok
// SIG undefined FUN_1470b977a(void)

undefined8 FUN_1470b977a(longlong *param_1)

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



// FUNCTION 1470b97c6 FUN_1470b97c6 body=38 status=ok
// SIG undefined FUN_1470b97c6(void)

void FUN_1470b97c6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_1470b983a(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 1470b983a FUN_1470b983a body=84 status=ok
// SIG undefined FUN_1470b983a(void)

void FUN_1470b983a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x60);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  FUN_14078aadc(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1470b988e FUN_1470b988e body=130 status=ok
// SIG undefined FUN_1470b988e(void)

undefined4 * FUN_1470b988e(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = param_2[4];
  uVar2 = *(undefined8 *)(param_2 + 2);
  param_1[4] = iVar1;
  if (iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_1470b9910(param_1 + 2,iVar1);
    FUN_1470b9968(*(undefined8 *)(param_1 + 2),uVar2,iVar1);
  }
  FUN_14042b2d2(param_1 + 6,param_2 + 6);
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  param_1[0x1c] = param_2[0x1c];
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  return param_1;
}



// FUNCTION 1470b9910 FUN_1470b9910 body=88 status=ok
// SIG undefined FUN_1470b9910(void)

void FUN_1470b9910(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1470b9968 FUN_1470b9968 body=40 status=ok
// SIG undefined FUN_1470b9968(void)

void FUN_1470b9968(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
    lVar1 = *(longlong *)(param_2 + 8 + lVar2);
    *(longlong *)(param_1 + 8 + lVar2) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    lVar2 = lVar2 + 0x10;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1470b9a14 FUN_1470b9a14 body=54 status=ok
// SIG undefined FUN_1470b9a14(void)

undefined1 FUN_1470b9a14(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1470b9b26(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 1470b9a72 FUN_1470b9a72 body=59 status=ok
// SIG undefined FUN_1470b9a72(void)

undefined8 FUN_1470b9a72(longlong *param_1)

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



// FUNCTION 1470b9ab8 FUN_1470b9ab8 body=32 status=ok
// SIG undefined FUN_1470b9ab8(void)

void FUN_1470b9ab8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1403d7b38(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 1470b9b26 FUN_1470b9b26 body=97 status=ok
// SIG undefined FUN_1470b9b26(void)

longlong FUN_1470b9b26(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_1470b9b88();
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  FUN_1470b9d0a(param_1 + 0x20,param_2 + 0x20);
  FUN_140311eb6(param_1 + 0x30,param_2 + 0x30);
  if (param_2 != param_1) {
    FUN_1470b9dd8(param_1 + 0x40,param_2 + 0x40);
    FUN_1470b9f0a(param_1 + 0x58,param_2 + 0x58);
  }
  return param_1;
}



// FUNCTION 1470b9b88 FUN_1470b9b88 body=93 status=ok
// SIG undefined FUN_1470b9b88(void)

undefined8 * FUN_1470b9b88(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14078aa76(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1470b9be6(param_1,iVar1);
      FUN_1470b9c5c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1470b9be6 FUN_1470b9be6 body=118 status=ok
// SIG undefined FUN_1470b9be6(void)

void FUN_1470b9be6(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x88,8);
    iVar2 = (int)(uVar1 / 0x88);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x88,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1470b9c5c FUN_1470b9c5c body=173 status=ok
// SIG undefined FUN_1470b9c5c(void)

void FUN_1470b9c5c(undefined4 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (param_3 != 0) {
    param_2 = param_2 + 0x18;
    do {
      *param_1 = *(undefined4 *)(param_2 + -0x18);
      *(undefined8 *)(param_1 + 2) = 0;
      iVar1 = *(int *)(param_2 + -8);
      uVar2 = *(undefined8 *)(param_2 + -0x10);
      param_1[4] = iVar1;
      if (iVar1 == 0) {
        param_1[5] = 0;
      }
      else {
        FUN_1470b9910(param_1 + 2,iVar1);
        FUN_1470b9968(*(undefined8 *)(param_1 + 2),uVar2,iVar1);
      }
      FUN_14042b2d2(param_1 + 6,param_2);
      *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x50);
      param_1[0x1c] = *(undefined4 *)(param_2 + 0x58);
      uVar3 = *(undefined4 *)(param_2 + 100);
      uVar4 = *(undefined4 *)(param_2 + 0x68);
      uVar5 = *(undefined4 *)(param_2 + 0x6c);
      param_1[0x1e] = *(undefined4 *)(param_2 + 0x60);
      param_1[0x1f] = uVar3;
      param_1[0x20] = uVar4;
      param_1[0x21] = uVar5;
      param_1 = param_1 + 0x22;
      param_2 = param_2 + 0x88;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1470b9d0a FUN_1470b9d0a body=89 status=ok
// SIG undefined FUN_1470b9d0a(void)

undefined8 * FUN_1470b9d0a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1470b9d64(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
      }
    }
  }
  return param_1;
}



// FUNCTION 1470b9d64 FUN_1470b9d64 body=115 status=ok
// SIG undefined FUN_1470b9d64(void)

void FUN_1470b9d64(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,4);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1470b9dd8 FUN_1470b9dd8 body=304 status=ok
// SIG undefined FUN_1470b9dd8(void)

void FUN_1470b9dd8(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar4 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a71f6(&local_58,uVar4 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  FUN_144a3e8f2(param_1,&local_58);
  FUN_144760e21(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b9f0a FUN_1470b9f0a body=304 status=ok
// SIG undefined FUN_1470b9f0a(void)

void FUN_1470b9f0a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar4 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a71f6(&local_58,uVar4 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  FUN_144a3e8f2(param_1,&local_58);
  FUN_144760e21(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470ba0da FUN_1470ba0da body=59 status=ok
// SIG undefined FUN_1470ba0da(void)

undefined8 FUN_1470ba0da(longlong *param_1)

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



// FUNCTION 1470ba1b0 FUN_1470ba1b0 body=54 status=ok
// SIG undefined FUN_1470ba1b0(void)

undefined1 FUN_1470ba1b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1470b9d0a(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1470ba20e FUN_1470ba20e body=59 status=ok
// SIG undefined FUN_1470ba20e(void)

undefined8 FUN_1470ba20e(longlong *param_1)

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



// FUNCTION 1470ba254 FUN_1470ba254 body=37 status=ok
// SIG undefined FUN_1470ba254(void)

void FUN_1470ba254(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 1470ba304 FUN_1470ba304 body=249 status=ok
// SIG undefined FUN_1470ba304(void)

undefined4
FUN_1470ba304(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_60 [12];
  byte local_54;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_4 != 0) {
    local_70 = param_7;
    local_78 = param_6;
    FUN_1470d69a8(param_3,param_2,param_4,param_5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
  }
  local_48 = 0;
  local_50 = 0;
  (**(code **)(*param_1 + 8))(param_1,local_60);
  if ((local_54 & 2) == 0) {
    local_50 = 0;
    local_48 = 0xffffffff;
  }
  local_70 = param_7;
  local_78 = param_6;
  uVar1 = FUN_1470d69a8(param_3,param_2,&local_50,param_5);
  (**(code **)(*param_1 + 8))(param_1,local_60);
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1470ba3fe FUN_1470ba3fe body=39 status=ok
// SIG undefined FUN_1470ba3fe(void)

void FUN_1470ba3fe(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_1470d68e4(param_3,param_2,param_4,param_5,param_6);
  return;
}



// FUNCTION 1470ba43e FUN_1470ba43e body=109 status=ok
// SIG undefined FUN_1470ba43e(void)

int FUN_1470ba43e(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  uVar1 = *param_2;
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar3 = (uint)uVar1 & 0xffff;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return ((uint)uVar1 << 0x10 | uVar3) + (int)((ulonglong)uVar1 >> 0x20) +
           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar3 >> 4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470ba534 FUN_1470ba534 body=39 status=ok
// SIG undefined FUN_1470ba534(void)

void FUN_1470ba534(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_1470d6b32(param_3,param_2,param_4,param_5,param_6);
  return;
}



// FUNCTION 1470ba668 FUN_1470ba668 body=108 status=ok
// SIG undefined FUN_1470ba668(void)

undefined8 FUN_1470ba668(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      if (*(longlong *)(param_2 + -0x20) != *(longlong *)(param_3 + -0x20)) {
        *(longlong *)(param_2 + -0x20) = *(longlong *)(param_3 + -0x20);
        *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      }
      if (*(longlong *)(param_2 + -0x14) != *(longlong *)(param_3 + -0x14)) {
        *(longlong *)(param_2 + -0x14) = *(longlong *)(param_3 + -0x14);
        *(undefined4 *)(param_2 + -0xc) = *(undefined4 *)(param_3 + -0xc);
      }
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_14117b026(param_2,param_3);
      param_3 = param_3 + 0x60;
      param_2 = param_2 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1470ba6fc FUN_1470ba6fc body=59 status=ok
// SIG undefined FUN_1470ba6fc(void)

undefined8 FUN_1470ba6fc(longlong *param_1)

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



// FUNCTION 1470ba742 FUN_1470ba742 body=32 status=ok
// SIG undefined FUN_1470ba742(void)

void FUN_1470ba742(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_1410fee06(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 1470ba7b0 FUN_1470ba7b0 body=43 status=ok
// SIG undefined FUN_1470ba7b0(void)

undefined8 FUN_1470ba7b0(undefined8 param_1,int param_2)

{
  FUN_1410fee06();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1470ba7dc FUN_1470ba7dc body=55 status=ok
// SIG undefined FUN_1470ba7dc(void)

void FUN_1470ba7dc(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4408 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4408 = FUN_140002ddd(FUN_1462a6fef,uVar1,L"GbxActorStateMachineAspectSettings");
  }
  return;
}



// FUNCTION 1470ba89c FUN_1470ba89c body=54 status=ok
// SIG undefined FUN_1470ba89c(void)

undefined1 FUN_1470ba89c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1470baa6e(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 1470ba8fa FUN_1470ba8fa body=59 status=ok
// SIG undefined FUN_1470ba8fa(void)

undefined8 FUN_1470ba8fa(longlong *param_1)

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



// FUNCTION 1470ba940 FUN_1470ba940 body=32 status=ok
// SIG undefined FUN_1470ba940(void)

void FUN_1470ba940(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_141313ea4(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1470ba9ae FUN_1470ba9ae body=43 status=ok
// SIG undefined FUN_1470ba9ae(void)

undefined8 FUN_1470ba9ae(undefined8 param_1,int param_2)

{
  FUN_141313ea4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1470ba9da FUN_1470ba9da body=55 status=ok
// SIG undefined FUN_1470ba9da(void)

void FUN_1470ba9da(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4420 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4420 = FUN_140002ddd(FUN_1462a7087,uVar1,L"GbxActorStateMachineAspect");
  }
  return;
}



// FUNCTION 1470baa12 FUN_1470baa12 body=55 status=ok
// SIG undefined FUN_1470baa12(void)

void FUN_1470baa12(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4408 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4408 = FUN_140002ddd(FUN_1462a6fef,uVar1,L"GbxActorStateMachineAspectSettings");
  }
  return;
}



// FUNCTION 1470baa4c FUN_1470baa4c body=27 status=ok
// SIG undefined FUN_1470baa4c(void)

longlong FUN_1470baa4c(longlong *param_1,longlong param_2)

{
  (**(code **)(*param_1 + 0x40))();
  *(undefined1 *)(param_2 + 4) = 0;
  return param_2;
}



// FUNCTION 1470baa6e FUN_1470baa6e body=167 status=ok
// SIG undefined FUN_1470baa6e(void)

longlong FUN_1470baa6e(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar3 = *(undefined8 *)(param_2 + 8);
  lVar4 = *(longlong *)(param_2 + 0x10);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(longlong *)(param_1 + 0x10) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  uVar6 = *(undefined4 *)(param_2 + 0x1c);
  uVar7 = *(undefined4 *)(param_2 + 0x20);
  uVar8 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar6;
  *(undefined4 *)(param_1 + 0x20) = uVar7;
  *(undefined4 *)(param_1 + 0x24) = uVar8;
  if (*(longlong *)(param_1 + 0x28) != *(longlong *)(param_2 + 0x28)) {
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  }
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  lVar4 = *(longlong *)(param_2 + 0x40);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  *(longlong *)(param_1 + 0x40) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
  return param_1;
}



// FUNCTION 1470bab16 FUN_1470bab16 body=119 status=ok
// SIG undefined FUN_1470bab16(void)

void FUN_1470bab16(undefined8 param_1,undefined8 *param_2)

{
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[0xe] = 0;
  *param_2 = &PTR_FUN_14a18e3d0;
  param_2[1] = 0;
  param_2[2] = 0xffffffff;
  param_2[3] = 0xffffffff00000000;
  FUN_141218d3c(param_2 + 5);
  *param_2 = &PTR_FUN_14a18d440;
  param_2[0xc] = 0;
  param_2[0xd] = 0xffffffff;
  param_2[0xe] = 0xffffffff00000000;
  return;
}



// FUNCTION 1470bab8e FUN_1470bab8e body=92 status=ok
// SIG undefined FUN_1470bab8e(void)

void FUN_1470bab8e(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a18e3d0;
  param_2[1] = 0;
  param_2[2] = 0xffffffff;
  param_2[3] = 0xffffffff00000000;
  *(undefined1 *)(param_2 + 4) = 0;
  FUN_141218d3c(param_2 + 5);
  *param_2 = &PTR_FUN_14a18d440;
  param_2[0xc] = 0;
  param_2[0xd] = 0xffffffff;
  param_2[0xe] = 0xffffffff00000000;
  return;
}



// FUNCTION 1470bac0e FUN_1470bac0e body=54 status=ok
// SIG undefined FUN_1470bac0e(void)

undefined1 FUN_1470bac0e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1470bad84(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 1470bac6c FUN_1470bac6c body=59 status=ok
// SIG undefined FUN_1470bac6c(void)

undefined8 FUN_1470bac6c(longlong *param_1)

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



// FUNCTION 1470bacb2 FUN_1470bacb2 body=32 status=ok
// SIG undefined FUN_1470bacb2(void)

void FUN_1470bacb2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_1410fee06(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 1470bad20 FUN_1470bad20 body=43 status=ok
// SIG undefined FUN_1470bad20(void)

undefined8 FUN_1470bad20(undefined8 param_1,int param_2)

{
  FUN_1410fee06();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 1470bad4c FUN_1470bad4c body=55 status=ok
// SIG undefined FUN_1470bad4c(void)

void FUN_1470bad4c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4438 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4438 =
         FUN_140002ddd(FUN_1462a711f,uVar1,L"GbxActorStateMachineAspectSettings_SetState");
  }
  return;
}



// FUNCTION 1470bad84 FUN_1470bad84 body=121 status=ok
// SIG undefined FUN_1470bad84(void)

longlong FUN_1470bad84(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_2 + 8)) {
    *(longlong *)(param_1 + 8) = *(longlong *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  }
  if (*(longlong *)(param_1 + 0x14) != *(longlong *)(param_2 + 0x14)) {
    *(longlong *)(param_1 + 0x14) = *(longlong *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  }
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  FUN_14117b026(param_1 + 0x28,param_2 + 0x28);
  if (*(longlong *)(param_1 + 0x60) != *(longlong *)(param_2 + 0x60)) {
    *(longlong *)(param_1 + 0x60) = *(longlong *)(param_2 + 0x60);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  }
  if (*(longlong *)(param_1 + 0x6c) != *(longlong *)(param_2 + 0x6c)) {
    *(longlong *)(param_1 + 0x6c) = *(longlong *)(param_2 + 0x6c);
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  }
  return param_1;
}



// FUNCTION 1470bae82 FUN_1470bae82 body=54 status=ok
// SIG undefined FUN_1470bae82(void)

undefined1 FUN_1470bae82(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1470baa6e(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 1470baee0 FUN_1470baee0 body=59 status=ok
// SIG undefined FUN_1470baee0(void)

undefined8 FUN_1470baee0(longlong *param_1)

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



// FUNCTION 1470baf26 FUN_1470baf26 body=57 status=ok
// SIG undefined FUN_1470baf26(void)

void FUN_1470baf26(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 10) == '\x01') {
    *param_2 = &PTR_FUN_14a18d5c0;
    if (param_2[7] != 0) {
      FUN_14078b1f4(param_2);
    }
    FUN_141313ea4(param_2);
    *(undefined1 *)(param_2 + 10) = 0;
  }
  return;
}



// FUNCTION 1470bafae FUN_1470bafae body=71 status=ok
// SIG undefined FUN_1470bafae(void)

undefined8 * FUN_1470bafae(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a18d5c0;
  if (param_1[7] != 0) {
    FUN_14078b1f4(param_1);
  }
  FUN_141313ea4(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1470baff6 FUN_1470baff6 body=55 status=ok
// SIG undefined FUN_1470baff6(void)

void FUN_1470baff6(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4450 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4450 = FUN_140002ddd(FUN_1462a71b5,uVar1,L"GbxActorStateMachineAspect_SetState");
  }
  return;
}



// FUNCTION 1470bb076 FUN_1470bb076 body=55 status=ok
// SIG undefined FUN_1470bb076(void)

void FUN_1470bb076(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_2 + 0x48);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1470bb0c4 FUN_1470bb0c4 body=256 status=ok
// SIG undefined FUN_1470bb0c4(void)

undefined8 FUN_1470bb0c4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      puVar2 = (undefined8 *)(param_3 + lVar10);
      *(undefined8 *)(param_2 + lVar10) = *puVar2;
      uVar6 = *(undefined4 *)((longlong)puVar2 + 0xc);
      uVar7 = *(undefined4 *)(puVar2 + 2);
      uVar8 = *(undefined4 *)((longlong)puVar2 + 0x14);
      puVar3 = (undefined4 *)(param_2 + 8 + lVar10);
      *puVar3 = *(undefined4 *)(puVar2 + 1);
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      FUN_144a787a6(param_2 + 0x18 + lVar10,puVar2 + 3);
      lVar4 = puVar2[5];
      if (*(longlong *)(param_2 + 0x28 + lVar10) != lVar4) {
        *(undefined8 *)(param_2 + 0x38 + lVar10) = 0;
      }
      *(longlong *)(param_2 + 0x28 + lVar10) = lVar4;
      if (*(longlong *)(param_2 + 0x30 + lVar10) != puVar2[6]) {
        *(undefined8 *)(param_2 + 0x38 + lVar10) = 0;
      }
      uVar9 = FUN_14477b664();
      uVar9 = FUN_14477b664(uVar9);
      *(undefined8 *)(param_2 + 0x30 + lVar10) = uVar9;
      *(undefined8 *)(param_2 + 0x38 + lVar10) = puVar2[7];
      uVar9 = puVar2[8];
      lVar4 = puVar2[9];
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
        UNLOCK();
      }
      plVar5 = *(longlong **)(param_2 + 0x48 + lVar10);
      *(undefined8 *)(param_2 + 0x40 + lVar10) = uVar9;
      *(longlong *)(param_2 + 0x48 + lVar10) = lVar4;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))();
        }
      }
      if (*(longlong *)(param_2 + 0x50 + lVar10) != puVar2[10]) {
        *(undefined8 *)(param_2 + 0x50 + lVar10) = puVar2[10];
        *(undefined4 *)(param_2 + 0x58 + lVar10) = *(undefined4 *)(param_3 + 0x58 + lVar10);
      }
      lVar10 = lVar10 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1470bb1ec FUN_1470bb1ec body=59 status=ok
// SIG undefined FUN_1470bb1ec(void)

undefined8 FUN_1470bb1ec(longlong *param_1)

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



// FUNCTION 1470bb28a FUN_1470bb28a body=59 status=ok
// SIG undefined FUN_1470bb28a(void)

void FUN_1470bb28a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x60) == '\x01') {
    plVar2 = *(longlong **)(param_1 + 0x48);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  return;
}



// FUNCTION 1470bb30e FUN_1470bb30e body=63 status=ok
// SIG undefined FUN_1470bb30e(void)

undefined1 FUN_1470bb30e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1470bb42a(param_2,param_3);
    param_3 = param_3 + 0x90;
    param_2 = param_2 + 0x90;
  }
  return 1;
}



// FUNCTION 1470bb376 FUN_1470bb376 body=59 status=ok
// SIG undefined FUN_1470bb376(void)

undefined8 FUN_1470bb376(longlong *param_1)

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



// FUNCTION 1470bb3c2 FUN_1470bb3c2 body=38 status=ok
// SIG undefined FUN_1470bb3c2(void)

void FUN_1470bb3c2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    FUN_14072ff4a(param_2);
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 1470bb42a FUN_1470bb42a body=226 status=ok
// SIG undefined FUN_1470bb42a(void)

undefined8 * FUN_1470bb42a(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  *param_1 = *param_2;
  FUN_1406fa324(param_1 + 1,param_2 + 1);
  if (param_1[3] != param_2[3]) {
    param_1[3] = param_2[3];
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  param_1[5] = param_2[5];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar5 = *(undefined4 *)(param_2 + 7);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar4;
  *(undefined4 *)(param_1 + 7) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar6;
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  lVar2 = param_2[10];
  if (param_1[10] != lVar2) {
    param_1[0xc] = 0;
  }
  param_1[10] = lVar2;
  if (param_1[0xb] != param_2[0xb]) {
    param_1[0xc] = 0;
  }
  uVar7 = FUN_14477b664();
  uVar7 = FUN_14477b664(uVar7);
  param_1[0xb] = uVar7;
  param_1[0xc] = param_2[0xc];
  uVar7 = param_2[0xd];
  lVar2 = param_2[0xe];
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  plVar3 = (longlong *)param_1[0xe];
  param_1[0xd] = uVar7;
  param_1[0xe] = lVar2;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_1470bb50c(param_1 + 0xf,param_2 + 0xf);
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  return param_1;
}



// FUNCTION 1470bb50c FUN_1470bb50c body=93 status=ok
// SIG undefined FUN_1470bb50c(void)

undefined8 * FUN_1470bb50c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14072ffb2(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140e96728(param_1,iVar1);
      FUN_140e966db(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1470bb5ae FUN_1470bb5ae body=63 status=ok
// SIG undefined FUN_1470bb5ae(void)

undefined1 FUN_1470bb5ae(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1470bb6c4(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 1470bb616 FUN_1470bb616 body=59 status=ok
// SIG undefined FUN_1470bb616(void)

undefined8 FUN_1470bb616(longlong *param_1)

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



// FUNCTION 1470bb662 FUN_1470bb662 body=38 status=ok
// SIG undefined FUN_1470bb662(void)

void FUN_1470bb662(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_1401eddde(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 1470bb6c4 FUN_1470bb6c4 body=237 status=ok
// SIG undefined FUN_1470bb6c4(void)

longlong FUN_1470bb6c4(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(param_2 + 8);
  lVar2 = *(longlong *)(param_2 + 0x10);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  plVar3 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar7;
  *(longlong *)(param_1 + 0x10) = lVar2;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar4 = *(undefined4 *)(param_2 + 0x24);
  uVar5 = *(undefined4 *)(param_2 + 0x28);
  uVar6 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  *(undefined4 *)(param_1 + 0x28) = uVar5;
  *(undefined4 *)(param_1 + 0x2c) = uVar6;
  FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
  lVar2 = *(longlong *)(param_2 + 0x40);
  if (*(longlong *)(param_1 + 0x40) != lVar2) {
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  *(longlong *)(param_1 + 0x40) = lVar2;
  if (*(longlong *)(param_1 + 0x48) != *(longlong *)(param_2 + 0x48)) {
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  uVar7 = FUN_14477b664();
  uVar7 = FUN_14477b664(uVar7);
  *(undefined8 *)(param_1 + 0x48) = uVar7;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  uVar7 = *(undefined8 *)(param_2 + 0x58);
  lVar2 = *(longlong *)(param_2 + 0x60);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  plVar3 = *(longlong **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar7;
  *(longlong *)(param_1 + 0x60) = lVar2;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_1470bb7b2(param_1 + 0x68,param_2 + 0x68);
  FUN_1470bb810(param_1 + 0x78,param_2 + 0x78);
  return param_1;
}



// FUNCTION 1470bb7b2 FUN_1470bb7b2 body=93 status=ok
// SIG undefined FUN_1470bb7b2(void)

undefined8 * FUN_1470bb7b2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1401ede73(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1470bb86e(param_1,iVar1);
      FUN_1470bb8e1(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1470bb810 FUN_1470bb810 body=93 status=ok
// SIG undefined FUN_1470bb810(void)

undefined8 * FUN_1470bb810(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1401edebb(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1470bb916(param_1,iVar1);
      FUN_1470bb989(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1470bb86e FUN_1470bb86e body=115 status=ok
// SIG undefined FUN_1470bb86e(void)

void FUN_1470bb86e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1470bb8e1 FUN_1470bb8e1 body=52 status=ok
// SIG undefined FUN_1470bb8e1(void)

void FUN_1470bb8e1(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14042b2d2(param_1,param_2);
    param_1 = param_1 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return;
}



// FUNCTION 1470bb916 FUN_1470bb916 body=115 status=ok
// SIG undefined FUN_1470bb916(void)

void FUN_1470bb916(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x90,8);
    iVar2 = (int)(uVar1 / 0x90);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x90,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1470bb989 FUN_1470bb989 body=60 status=ok
// SIG undefined FUN_1470bb989(void)

void FUN_1470bb989(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_140e965fc(param_1,param_2);
    param_1 = param_1 + 0x90;
    param_2 = param_2 + 0x90;
  }
  return;
}



// FUNCTION 1470bb9f6 FUN_1470bb9f6 body=55 status=ok
// SIG undefined FUN_1470bb9f6(void)

void FUN_1470bb9f6(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_2 + 0x48);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1470bba44 FUN_1470bba44 body=219 status=ok
// SIG undefined FUN_1470bba44(void)

undefined8 FUN_1470bba44(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      puVar2 = (undefined8 *)(param_3 + lVar10);
      lVar3 = param_2 + 0x18 + lVar10;
      *(undefined8 *)(lVar3 + -0x18) = *puVar2;
      uVar6 = *(undefined4 *)((longlong)puVar2 + 0xc);
      uVar7 = *(undefined4 *)(puVar2 + 2);
      uVar8 = *(undefined4 *)((longlong)puVar2 + 0x14);
      *(undefined4 *)(lVar3 + -0x10) = *(undefined4 *)(puVar2 + 1);
      *(undefined4 *)(lVar3 + -0xc) = uVar6;
      *(undefined4 *)(lVar3 + -8) = uVar7;
      *(undefined4 *)(lVar3 + -4) = uVar8;
      FUN_144a787a6(lVar3,puVar2 + 3);
      lVar4 = puVar2[5];
      if (*(longlong *)(lVar3 + 0x10) != lVar4) {
        *(undefined8 *)(param_2 + 0x38 + lVar10) = 0;
      }
      *(longlong *)(lVar3 + 0x10) = lVar4;
      if (*(longlong *)(lVar3 + 0x18) != puVar2[6]) {
        *(undefined8 *)(param_2 + 0x38 + lVar10) = 0;
      }
      uVar9 = FUN_14477b664();
      uVar9 = FUN_14477b664(uVar9);
      *(undefined8 *)(lVar3 + 0x18) = uVar9;
      *(undefined8 *)(lVar3 + 0x20) = puVar2[7];
      uVar9 = puVar2[8];
      lVar4 = puVar2[9];
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
        UNLOCK();
      }
      plVar5 = *(longlong **)(lVar3 + 0x30);
      *(undefined8 *)(lVar3 + 0x28) = uVar9;
      *(longlong *)(lVar3 + 0x30) = lVar4;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))();
        }
      }
      lVar10 = lVar10 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1470bbb48 FUN_1470bbb48 body=59 status=ok
// SIG undefined FUN_1470bbb48(void)

undefined8 FUN_1470bbb48(longlong *param_1)

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



// FUNCTION 1470bbbe0 FUN_1470bbbe0 body=59 status=ok
// SIG undefined FUN_1470bbbe0(void)

void FUN_1470bbbe0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x50) == '\x01') {
    plVar2 = *(longlong **)(param_1 + 0x48);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1470bbd00 FUN_1470bbd00 body=59 status=ok
// SIG undefined FUN_1470bbd00(void)

undefined8 FUN_1470bbd00(longlong *param_1)

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



// FUNCTION 1470bbda0 FUN_1470bbda0 body=55 status=ok
// SIG undefined FUN_1470bbda0(void)

void FUN_1470bbda0(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a44f8 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a44f8 = FUN_140002ddd(FUN_1462a7529,uVar1,L"GbxActorStateValueResolver");
  }
  return;
}



// FUNCTION 1470bbe22 FUN_1470bbe22 body=111 status=ok
// SIG undefined FUN_1470bbe22(void)

undefined1 FUN_1470bbe22(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_2 + lVar3) = *(undefined8 *)(param_3 + lVar3);
      lVar2 = *(longlong *)(param_3 + 8 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + 8 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 8 + lVar3) = lVar2;
      *(undefined4 *)(param_2 + 0x10 + lVar3) = *(undefined4 *)(param_3 + 0x10 + lVar3);
      lVar3 = lVar3 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1470bbeba FUN_1470bbeba body=59 status=ok
// SIG undefined FUN_1470bbeba(void)

undefined8 FUN_1470bbeba(longlong *param_1)

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



// FUNCTION 1470bbfa8 FUN_1470bbfa8 body=62 status=ok
// SIG undefined FUN_1470bbfa8(void)

undefined1 FUN_1470bbfa8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14708aac6(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x14);
    uVar2 = *(undefined4 *)(param_3 + 0x18);
    uVar3 = *(undefined4 *)(param_3 + 0x1c);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = uVar1;
    *(undefined4 *)(param_2 + 0x18) = uVar2;
    *(undefined4 *)(param_2 + 0x1c) = uVar3;
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 1470bc00e FUN_1470bc00e body=59 status=ok
// SIG undefined FUN_1470bc00e(void)

undefined8 FUN_1470bc00e(longlong *param_1)

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



// FUNCTION 1470bc0ac FUN_1470bc0ac body=48 status=ok
// SIG undefined FUN_1470bc0ac(void)

void FUN_1470bc0ac(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    FUN_140a87f81(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 1470bc0dc FUN_1470bc0dc body=71 status=ok
// SIG undefined FUN_1470bc0dc(void)

void FUN_1470bc0dc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *param_2 = &PTR_FUN_14a18e380;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0x459c40000000000a;
  return;
}



// FUNCTION 1470bc13a FUN_1470bc13a body=89 status=ok
// SIG undefined FUN_1470bc13a(void)

undefined8 FUN_1470bc13a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_4 != 0) {
    puVar2 = (undefined4 *)(param_3 + 0x18);
    puVar1 = (undefined4 *)(param_2 + 0x18);
    do {
      FUN_141289ada(puVar1 + -4,puVar2 + -4);
      *puVar1 = *puVar2;
      FUN_1470bc2ac(puVar1 + 2,puVar2 + 2);
      *(undefined8 *)(puVar1 + 6) = *(undefined8 *)(puVar2 + 6);
      puVar2 = puVar2 + 0xe;
      puVar1 = puVar1 + 0xe;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1470bc1bc FUN_1470bc1bc body=59 status=ok
// SIG undefined FUN_1470bc1bc(void)

undefined8 FUN_1470bc1bc(longlong *param_1)

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



// FUNCTION 1470bc202 FUN_1470bc202 body=34 status=ok
// SIG undefined FUN_1470bc202(void)

void FUN_1470bc202(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_14597eea0(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1470bc272 FUN_1470bc272 body=57 status=ok
// SIG undefined FUN_1470bc272(void)

void FUN_1470bc272(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4570 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4570 = FUN_140002ddd(FUN_1462a7745,uVar1,L"GbxAnimationPerformanceGlobals");
  }
  return;
}



// FUNCTION 1470bc2ac FUN_1470bc2ac body=95 status=ok
// SIG undefined FUN_1470bc2ac(void)

undefined8 * FUN_1470bc2ac(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14597eee7(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1470bc30c(param_1,iVar1);
      FUN_1470bc36e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1470bc30c FUN_1470bc30c body=98 status=ok
// SIG undefined FUN_1470bc30c(void)

void FUN_1470bc30c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1470bc36e FUN_1470bc36e body=52 status=ok
// SIG undefined FUN_1470bc36e(void)

void FUN_1470bc36e(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1408cda62(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 1470bc3a4 FUN_1470bc3a4 body=48 status=ok
// SIG undefined FUN_1470bc3a4(void)

void FUN_1470bc3a4(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14a18d5c0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_14078b1f4(param_1 + 0x10);
  }
  FUN_141313ea4(param_1 + 0x10);
  return;
}



// FUNCTION 1470bc3d4 FUN_1470bc3d4 body=34 status=ok
// SIG undefined FUN_1470bc3d4(void)

undefined8 FUN_1470bc3d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1470bc3f6 FUN_1470bc3f6 body=158 status=ok
// SIG undefined FUN_1470bc3f6(void)

void FUN_1470bc3f6(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1470bc468;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1470bc468;
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
LAB_1470bc468:
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
                    /* WARNING: Could not recover jumptable at 0x0001470bc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1470bc4c8 FUN_1470bc4c8 body=148 status=ok
// SIG undefined FUN_1470bc4c8(void)

void FUN_1470bc4c8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1470e59ea(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


