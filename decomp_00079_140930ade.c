// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140930ade FUN_140930ade body=208 status=ok
// SIG undefined FUN_140930ade(void)

void FUN_140930ade(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)FUN_14048bbc8(param_1 + 0xeb);
  if (plVar1 == (longlong *)0x0) {
    lVar3 = (**(code **)(*param_1 + 0xa00))(param_1);
    plVar2 = param_1;
    if (lVar3 != 0) {
      plVar2 = (longlong *)FUN_14048bbc8(lVar3 + 0x758,param_1);
    }
  }
  else {
    plVar2 = (longlong *)FUN_14048bbc8(plVar1 + 0xeb);
    if (plVar1 == plVar2 || plVar2 == (longlong *)0x0) {
      plVar2 = (longlong *)(**(code **)(*param_1 + 0x9f8))(param_1);
      if (plVar2 != param_1 && plVar2 != (longlong *)0x0) {
        do {
          FUN_1409308a0(plVar2,plVar1);
          plVar2 = (longlong *)(**(code **)(*plVar2 + 0x9f8))(plVar2);
        } while (plVar2 != (longlong *)0x0 && plVar2 != param_1);
      }
      FUN_140930bae(param_1);
      return;
    }
  }
  FUN_1409308a0(param_1,plVar2);
  return;
}



// FUNCTION 140930bae FUN_140930bae body=142 status=ok
// SIG undefined FUN_140930bae(void)

void FUN_140930bae(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar2 = FUN_14048bbc8(param_1 + 0x758);
  plVar1 = (longlong *)(param_1 + 0xfa8);
  if (lVar2 == param_1) {
    if (*(longlong *)(param_1 + 0xfb8) == 0) {
      *(longlong **)(param_1 + 0xfc0) = &DAT_14cb715f0;
      *(longlong *)(param_1 + 0xfb8) = param_1;
      lVar2 = DAT_14cb715f0;
      while( true ) {
        *(longlong *)(param_1 + 0xfa8) = lVar2;
        LOCK();
        lVar3 = **(longlong **)(param_1 + 0xfc0);
        bVar4 = lVar2 == lVar3;
        if (bVar4) {
          **(longlong **)(param_1 + 0xfc0) = (longlong)plVar1;
          lVar3 = lVar2;
        }
        UNLOCK();
        if (bVar4) break;
        *(longlong *)(param_1 + 0xfa8) = lVar3;
        lVar2 = **(longlong **)(param_1 + 0xfc0);
      }
      if (*plVar1 != 0) {
        *(longlong **)(*plVar1 + 8) = plVar1;
      }
    }
    return;
  }
  FUN_140b21c46(plVar1,0);
  return;
}



// FUNCTION 140930c3c FUN_140930c3c body=119 status=ok
// SIG undefined FUN_140930c3c(void)

undefined8 FUN_140930c3c(ushort *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3) {
    uVar1 = 0;
  }
  else {
    FUN_140930d82(&local_2c,*(undefined4 *)(param_1 + 2));
    local_48 = local_2c;
    uStack_44 = uStack_28;
    uStack_40 = uStack_24;
    uStack_3c = uStack_20;
    local_38 = local_1c;
    uVar1 = FUN_140930cb4(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140930cb4 FUN_140930cb4 body=206 status=ok
// SIG undefined FUN_140930cb4(void)

ulonglong FUN_140930cb4(ushort *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  bVar1 = param_2[9];
  bVar2 = param_2[10];
  uVar4 = (ulonglong)*param_1;
  if ((*param_2 & 1) == 0) {
    uVar5 = 1;
    if ((bVar1 & 1) == 0) {
      uVar5 = (uint)bVar1;
    }
    uVar3 = 0;
    uVar6 = (ulonglong)uVar5;
    if ((int)(&DAT_14ca814b8)[uVar4 * 0xf] < 3) {
      uVar6 = uVar3;
    }
    if (((byte)((byte)uVar6 == bVar1 & (param_2[8] == 1 | bVar1 ^ 1) &
               (param_2[0x10] == 1 | bVar1 ^ 1)) == 0) || (uVar3 = 1, (bVar2 & 1) == 0))
    goto LAB_140930d79;
LAB_140930d37:
    if (*(longlong *)(&DAT_14ca814b0 + uVar4 * 0x3c) == DAT_14ca838f8) {
      uVar3 = CONCAT71((int7)(uVar4 * 0x3c >> 8),*(byte *)(&DAT_14ca814c8 + uVar4 * 0xf));
      if ((*param_2 & *(byte *)(&DAT_14ca814c8 + uVar4 * 0xf) & 1) == 0) goto LAB_140930d79;
      goto LAB_140930d5b;
    }
  }
  else {
    if ((bVar2 & 1) != 0) goto LAB_140930d37;
LAB_140930d5b:
    if (((param_2[8] | bVar2 | bVar1) & 1) == 0 && *(int *)(param_2 + 4) == 0) {
      uVar3 = (ulonglong)(CONCAT31((int3)((ulonglong)param_1 >> 8),param_2[0x10]) ^ 1);
      goto LAB_140930d79;
    }
  }
  uVar3 = 0;
LAB_140930d79:
  return uVar3 & 0xffffffffffffff01;
}



// FUNCTION 140930d82 FUN_140930d82 body=285 status=ok
// SIG undefined FUN_140930d82(void)

void FUN_140930d82(longlong param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  
  *(bool *)param_1 = (param_2 % 0x60 & 0x80000001U) == 1;
  cVar2 = (char)(param_2 % 0x60);
  uVar1 = (cVar2 / '\x02') * 0x56;
  *(int *)(param_1 + 4) =
       (int)(char)(cVar2 / '\x02' + ((char)((uVar1 & 0xffff) >> 0xf) + (char)(uVar1 >> 8)) * -3);
  cVar3 = -(cVar2 >> 7);
  *(bool *)(param_1 + 8) = ((int)(cVar2 / '\x06') & 0x80000001U) == 1;
  uVar1 = (uint)(short)(cVar2 * 0x2b);
  *(bool *)(param_1 + 9) = ((int)(char)((char)(uVar1 >> 9) + cVar3) & 0x80000001U) == 1;
  *(bool *)(param_1 + 10) = ((int)(char)((char)(uVar1 >> 10) + cVar3) & 0x80000001U) == 1;
  *(bool *)(param_1 + 0xb) = ((int)(char)((char)(uVar1 >> 0xb) + cVar3) & 0x80000001U) == 1;
  *(bool *)(param_1 + 0x10) = (param_2 / 0x60 & 0x80000001U) == 1;
  *(bool *)(param_1 + 0x11) = (param_2 / 0xc0 & 0x80000001U) == 1;
  *(bool *)(param_1 + 0x12) = (param_2 / 0x180 & 0x80000001U) == 1;
  return;
}



// FUNCTION 140930eae FUN_140930eae body=45 status=ok
// SIG undefined FUN_140930eae(void)

undefined8 FUN_140930eae(undefined8 param_1,int param_2)

{
  FUN_140930edc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x4a8);
  }
  return param_1;
}



// FUNCTION 140930edc FUN_140930edc body=748 status=ok
// SIG undefined FUN_140930edc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140930edc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b60cf20;
  FUN_14400f095(param_1[0x93],*(undefined4 *)(param_1 + 0x94));
  if (param_1[0x93] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x90] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x88] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x85] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x80] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x74] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x65] != 0) {
    FUN_1400020a8();
  }
  if ((param_1[0x5f] != 0) && (*(int *)(param_1 + 0x60) != -1)) {
    *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  }
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x59] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  param_1[0x42] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x45) = 0;
  if (*(int *)((longlong)param_1 + 0x22c) != 0) {
    FUN_140115c12(param_1 + 0x44,0);
  }
  param_1[0x43] = 0;
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  param_1[0x3e] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x41) = 0;
  if (*(int *)((longlong)param_1 + 0x20c) != 0) {
    FUN_140115c12(param_1 + 0x40,0);
  }
  param_1[0x3f] = 0;
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_1406f0462(param_1 + 0xf);
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x000140931197. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 1409311c8 FUN_1409311c8 body=105 status=ok
// SIG undefined FUN_1409311c8(void)

void FUN_1409311c8(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x3338);
  if (0 < iVar1) {
    lVar2 = 0;
    do {
      if ((*(byte *)(*(longlong *)(param_1 + 0x33e8) + lVar2) & 1) != 0) {
        FUN_140931232(*(undefined8 *)(*(longlong *)(param_1 + 0x3330) + lVar2 * 8));
        *(undefined1 *)(*(longlong *)(param_1 + 0x33e8) + lVar2) =
             *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x3330) + lVar2 * 8) + 0x170);
        iVar1 = *(int *)(param_1 + 0x3338);
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar1);
  }
  return;
}



// FUNCTION 140931232 FUN_140931232 body=527 status=ok
// SIG undefined FUN_140931232(void)

void FUN_140931232(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  
  *(undefined1 *)(param_1 + 0x170) = 0;
  lVar1 = *(longlong *)(param_1 + 8);
  if (((0 < *(int *)(lVar1 + 0xd0)) && ((*(byte *)(lVar1 + 0x74) & 8) == 0)) &&
     (0 < *(int *)(param_1 + 0x48))) {
    *(undefined1 *)(param_1 + 0x170) = 1;
    lVar2 = *(longlong *)(param_1 + 0x148);
    iVar12 = *(int *)(lVar2 + 0x5158);
    if (iVar12 == 0) {
      uVar13 = 0;
      uVar15 = 1;
      iVar9 = 0;
      iVar3 = 0;
    }
    else {
      puVar7 = *(uint **)(lVar2 + 0x5150);
      if (*(uint **)(lVar2 + 0x5150) == (uint *)0x0) {
        puVar7 = (uint *)(lVar2 + 0x5140);
      }
      uVar8 = *puVar7;
      if (uVar8 == 0) {
        iVar3 = iVar12 + 0x1e;
        if (-1 < iVar12 + -1) {
          iVar3 = iVar12 + -1;
        }
        uVar13 = 0;
        uVar15 = (ulonglong)(uint)(iVar3 >> 5);
        if (iVar3 >> 5 < 1) {
          uVar15 = uVar13;
        }
        iVar9 = 0;
        do {
          if (uVar15 == uVar13) {
            return;
          }
          iVar9 = iVar9 + 0x20;
          uVar8 = puVar7[uVar13 + 1];
          uVar13 = uVar13 + 1;
        } while (uVar8 == 0);
      }
      else {
        uVar13 = 0;
        iVar9 = 0;
      }
      uVar15 = (ulonglong)(-uVar8 & uVar8);
      uVar11 = uVar15 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar3 = (iVar9 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar12 <= iVar3) {
        iVar3 = iVar12;
      }
    }
    if (iVar3 < iVar12) {
      uVar8 = 0xffffffff;
      bVar10 = 1;
      do {
        if ((iVar3 < 7) && ((longlong)*(int *)(lVar1 + 0xd0) != 0)) {
          uVar11 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar1 + 200) + uVar11) ==
                *(longlong *)
                 (*(longlong *)(*(longlong *)(lVar2 + 0x5130) + (longlong)iVar3 * 8) + 8)) {
              if ((~uVar11 & 0x7fffffff8) != 0) {
                bVar10 = (char)(1 << ((byte)iVar3 & 0x1f)) * '\x02' | bVar10;
                *(byte *)(param_1 + 0x170) = bVar10;
                iVar12 = *(int *)(lVar2 + 0x5158);
              }
              break;
            }
            uVar11 = uVar11 + 8;
          } while ((longlong)*(int *)(lVar1 + 0xd0) * 8 != uVar11);
        }
        uVar8 = uVar8 & ~(uint)uVar15;
        puVar7 = *(uint **)(lVar2 + 0x5150);
        if (*(uint **)(lVar2 + 0x5150) == (uint *)0x0) {
          puVar7 = (uint *)(lVar2 + 0x5140);
        }
        iVar3 = (int)uVar13;
        lVar14 = (longlong)iVar3;
        uVar4 = puVar7[lVar14] & uVar8;
        if (uVar4 == 0) {
          iVar5 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar5 = iVar12 + -1;
          }
          iVar5 = iVar5 >> 5;
          iVar6 = iVar5;
          if (iVar5 < iVar3) {
            iVar6 = iVar3;
          }
          if (iVar5 <= iVar3) {
            return;
          }
          lVar16 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar4 = puVar7[lVar14 + lVar16 + 1];
            if (uVar4 != 0) break;
            lVar16 = lVar16 + 1;
            if (iVar6 - lVar14 == lVar16) {
              return;
            }
          }
          uVar13 = (ulonglong)(iVar3 + (int)lVar16 + 1);
          uVar8 = 0xffffffff;
        }
        uVar15 = (ulonglong)(-uVar4 & uVar4);
        uVar11 = uVar15 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar3 = (iVar9 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar3 < iVar12);
    }
  }
  return;
}



// FUNCTION 140931442 FUN_140931442 body=180 status=ok
// SIG undefined FUN_140931442(void)

void FUN_140931442(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong *local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_1;
  local_38 = param_1 + 1;
  FUN_1409314f8(lVar2 + 0x70,&local_2c);
  lVar2 = *(longlong *)(lVar2 + 0x70);
  lVar6 = (longlong)local_2c * 0x40;
  cVar1 = *(char *)((longlong)param_1 + 0x1c);
  lVar4 = param_1[3];
  lVar3 = param_1[2];
  *(longlong *)(lVar2 + 8 + lVar6) = lVar3;
  *(undefined8 *)(lVar2 + 0x2c + lVar6) = 0xffffffff00000000;
  *(undefined4 *)(lVar2 + 0x34 + lVar6) = 0xffffffff;
  if (cVar1 == '\x01') {
    *(int *)(lVar2 + lVar6 + 0x2c) = (int)lVar4;
    uVar5 = FUN_1481c88ee(lVar3 + 0x38,param_2);
    *(undefined4 *)(lVar2 + lVar6 + 0x34) = uVar5;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409314f8 FUN_1409314f8 body=1532 status=ok
// SIG undefined FUN_1409314f8(void)

void FUN_1409314f8(longlong *param_1,int *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
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
  uint uVar17;
  byte bVar18;
  int iVar19;
  int iVar20;
  uint *puVar21;
  ulonglong uVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  longlong *plVar26;
  longlong *plVar27;
  ulonglong uVar28;
  uint uVar29;
  int iVar30;
  longlong lVar31;
  longlong lVar32;
  int iVar33;
  ulonglong uVar34;
  undefined1 auStack_a8 [40];
  int *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = param_2;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar30 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar30 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar30) {
      FUN_1406cd6a8(param_1,iVar30);
    }
    iVar33 = (int)param_1[5];
    if (iVar33 == 0) {
      iVar19 = -1;
    }
    else {
      iVar19 = iVar33 + 0x1e;
      if (-1 < iVar33 + -1) {
        iVar19 = iVar33 + -1;
      }
      iVar19 = iVar19 >> 5;
    }
    plVar27 = param_1 + 2;
    iVar20 = iVar33 + 1;
    iVar24 = iVar33 + 0x1f;
    if (-1 < iVar33) {
      iVar24 = iVar33;
    }
    if (iVar24 >> 5 == iVar19) {
      *(int *)(param_1 + 5) = iVar20;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar33) {
        if (iVar33 + 0x20U < 0xa0) {
          iVar20 = 0x80;
          iVar19 = iVar33;
        }
        else {
          uVar29 = iVar33 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar17 = 4;
            if (4 < uVar29) {
              uVar17 = uVar29;
            }
          }
          else {
            uVar17 = (uVar29 * 3 >> 3) + uVar29 + 0x10;
          }
          uVar22 = FUN_144a3809e(uVar17 << 2,0);
          iVar19 = (int)(uVar22 >> 2);
          iVar20 = -0x20;
          if ((int)uVar29 <= iVar19) {
            iVar20 = iVar19 << 5;
          }
          iVar19 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar20;
        FUN_1446efbd8(plVar27,iVar19);
        iVar20 = (int)param_1[5] + 1;
      }
      iVar19 = iVar20 + 0x1f;
      if (-1 < iVar20) {
        iVar19 = iVar20;
      }
      *(int *)(param_1 + 5) = iVar20;
      if (iVar20 % 0x20 != 0) {
        plVar26 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar26 = plVar27;
        }
        bVar18 = -(char)(iVar20 % 0x20);
        *(uint *)((longlong)plVar26 + (longlong)(iVar19 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar26 + (longlong)(iVar19 >> 5) * 4) << (bVar18 & 0x1f)) >>
             (bVar18 & 0x1f);
      }
    }
    lVar32 = (longlong)iVar30;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar27 = (longlong *)param_1[4];
    }
    bVar18 = (byte)iVar33 & 0x1f;
    puVar2 = (uint *)((longlong)plVar27 + (longlong)(iVar24 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar18 | 0xfffffffeU >> 0x20 - bVar18);
  }
  else {
    iVar30 = (int)param_1[6];
    lVar32 = (longlong)iVar30;
    iVar33 = *(int *)(*param_1 + 4 + lVar32 * 0x40);
    *(int *)(param_1 + 6) = iVar33;
    iVar19 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar19;
    if (iVar19 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar33 * 0x40) = 0xffffffff;
    }
  }
  puVar2 = (uint *)(param_1 + 2);
  uVar29 = 1;
  puVar21 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar21 = puVar2;
  }
  iVar33 = iVar30 + 0x1f;
  if (-1 < iVar30) {
    iVar33 = iVar30;
  }
  puVar21[iVar33 >> 5] = puVar21[iVar33 >> 5] | 1 << ((byte)iVar30 & 0x1f);
  lVar31 = *param_1;
  lVar32 = lVar32 * 0x40;
  puVar1 = (undefined4 *)(lVar31 + lVar32);
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0;
  uStack_50 = 0xffffffffffffffff;
  *(undefined8 *)(lVar31 + lVar32) = *(undefined8 *)*param_3;
  puVar3 = (undefined8 *)(lVar31 + 8 + lVar32);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3 = (undefined8 *)(lVar31 + 0x18 + lVar32);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar4 = (undefined4 *)(lVar31 + 0x28 + lVar32);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0xffffffff;
  puVar4[3] = 0xffffffff;
  FUN_140931af6();
  *(undefined4 *)(lVar31 + 0x38 + lVar32) = 0xffffffff;
  lVar32 = *(longlong *)(lVar31 + lVar32);
  uVar17 = (int)((ulonglong)lVar32 >> 0x20) * 0x17 + (int)lVar32;
  uVar23 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar23 != 0) && (uVar23 != 1)) {
    plVar27 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar27 = (longlong *)param_1[8];
    }
    iVar33 = *(int *)((longlong)plVar27 + (ulonglong)((int)param_1[9] - 1U & uVar17) * 4);
    if (iVar33 != -1) {
      do {
        puVar4 = (undefined4 *)(*param_1 + (longlong)iVar33 * 0x40);
        if (*(longlong *)(*param_1 + (longlong)iVar33 * 0x40) == lVar32) {
          FUN_140931af6(puVar4 + 2);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          uVar7 = puVar1[2];
          uVar8 = puVar1[3];
          uVar9 = puVar1[4];
          uVar10 = puVar1[5];
          uVar11 = puVar1[6];
          uVar12 = puVar1[7];
          uVar13 = puVar1[8];
          uVar14 = puVar1[9];
          uVar15 = puVar1[10];
          uVar16 = puVar1[0xb];
          *(undefined8 *)(puVar4 + 0xc) = *(undefined8 *)(puVar1 + 0xc);
          puVar4[8] = uVar13;
          puVar4[9] = uVar14;
          puVar4[10] = uVar15;
          puVar4[0xb] = uVar16;
          puVar4[4] = uVar9;
          puVar4[5] = uVar10;
          puVar4[6] = uVar11;
          puVar4[7] = uVar12;
          *puVar4 = uVar5;
          puVar4[1] = uVar6;
          puVar4[2] = uVar7;
          puVar4[3] = uVar8;
          FUN_1406e34a8(param_1,iVar30);
          iVar30 = iVar33;
          goto LAB_140931694;
        }
        iVar33 = puVar4[0xe];
      } while (iVar33 != -1);
    }
  }
  if (3 < uVar23) {
    uVar22 = (ulonglong)(uVar23 & 0xfffffffe) + 0xf;
    lVar32 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar32 == 0; lVar32 = lVar32 + -1) {
      }
    }
    uVar29 = 1 << ((byte)lVar32 & 0x1f);
  }
  if (((int)uVar23 < 1) || ((int)uVar29 <= (int)param_1[9])) {
    uVar17 = (int)param_1[9] - 1U & uVar17;
    puVar1[0xf] = uVar17;
    plVar27 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar27 = param_1 + 7;
    }
    puVar1[0xe] = *(undefined4 *)
                   ((longlong)plVar27 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar17) * 4
                   );
    plVar27 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar27 = param_1 + 7;
    }
    *(int *)((longlong)plVar27 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar17) * 4) =
         iVar30;
    goto LAB_140931694;
  }
  *(uint *)(param_1 + 9) = uVar29;
  plVar27 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar27,0,0,4);
    uVar29 = *(uint *)(param_1 + 9);
  }
  plVar26 = param_1 + 7;
  if (uVar29 == 1) {
    if (*plVar27 != 0) {
      FUN_1446efa72(plVar27,0,0,4);
    }
LAB_1409317d2:
    uVar17 = 0;
    do {
      plVar27 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar27 = plVar26;
      }
      *(undefined4 *)((longlong)plVar27 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar17) * 4) =
           0xffffffff;
      uVar17 = uVar17 + 1;
    } while (uVar29 != uVar17);
  }
  else {
    if (uVar29 == 0) goto LAB_140931694;
    FUN_1446efa72(plVar27,0,uVar29,4);
    if (0 < (int)uVar29) goto LAB_1409317d2;
  }
  iVar33 = (int)param_1[5];
  if (iVar33 == 0) {
    uVar22 = 0;
    uVar28 = 1;
    iVar19 = 0;
    iVar20 = 0;
  }
  else {
    puVar21 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar21 = puVar2;
    }
    uVar29 = *puVar21;
    if (uVar29 == 0) {
      iVar19 = iVar33 + 0x1e;
      if (-1 < iVar33 + -1) {
        iVar19 = iVar33 + -1;
      }
      uVar22 = 0;
      uVar28 = (ulonglong)(uint)(iVar19 >> 5);
      if (iVar19 >> 5 < 1) {
        uVar28 = uVar22;
      }
      iVar20 = 0;
      do {
        if (uVar28 == uVar22) goto LAB_140931694;
        iVar20 = iVar20 + 0x20;
        uVar29 = puVar21[uVar22 + 1];
        uVar22 = uVar22 + 1;
      } while (uVar29 == 0);
    }
    else {
      uVar22 = 0;
      iVar20 = 0;
    }
    uVar28 = (ulonglong)(-uVar29 & uVar29);
    uVar34 = uVar28 * 2 + 1;
    lVar32 = 0x3f;
    if (uVar34 != 0) {
      for (; uVar34 >> lVar32 == 0; lVar32 = lVar32 + -1) {
      }
    }
    iVar19 = (iVar20 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
    if (iVar33 <= iVar19) {
      iVar19 = iVar33;
    }
  }
  if (iVar19 < iVar33) {
    uVar29 = 0xffffffff;
    do {
      lVar32 = *param_1;
      lVar31 = (longlong)iVar19 * 0x40;
      uVar34 = (longlong)
               ((int)((ulonglong)*(undefined8 *)(lVar32 + lVar31) >> 0x20) * 0x17 +
               (int)*(undefined8 *)(lVar32 + lVar31)) & (longlong)(int)param_1[9] - 1U;
      iVar33 = (int)uVar34;
      *(int *)(lVar32 + 0x3c + lVar31) = iVar33;
      plVar27 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar27 = plVar26;
      }
      *(undefined4 *)(lVar32 + 0x38 + lVar31) =
           *(undefined4 *)((longlong)plVar27 + ((longlong)(int)param_1[9] - 1U & uVar34) * 4);
      plVar27 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar27 = plVar26;
      }
      *(int *)((longlong)plVar27 + ((longlong)iVar33 & (longlong)(int)param_1[9] - 1U) * 4) = iVar19
      ;
      uVar29 = ~(uint)uVar28 & uVar29;
      puVar21 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar21 = puVar2;
      }
      iVar33 = (int)param_1[5];
      iVar19 = (int)uVar22;
      lVar32 = (longlong)iVar19;
      uVar17 = puVar21[lVar32] & uVar29;
      if (uVar17 == 0) {
        iVar24 = iVar33 + 0x1e;
        if (-1 < iVar33 + -1) {
          iVar24 = iVar33 + -1;
        }
        iVar24 = iVar24 >> 5;
        iVar25 = iVar24;
        if (iVar24 < iVar19) {
          iVar25 = iVar19;
        }
        if (iVar24 <= iVar19) break;
        lVar31 = 0;
        while( true ) {
          iVar20 = iVar20 + 0x20;
          uVar17 = puVar21[lVar32 + lVar31 + 1];
          if (uVar17 != 0) break;
          lVar31 = lVar31 + 1;
          if (iVar25 - lVar32 == lVar31) goto LAB_140931694;
        }
        uVar22 = (ulonglong)(iVar19 + (int)lVar31 + 1);
        uVar29 = 0xffffffff;
      }
      uVar28 = (ulonglong)(-uVar17 & uVar17);
      uVar34 = uVar28 * 2 + 1;
      lVar32 = 0x3f;
      if (uVar34 != 0) {
        for (; uVar34 >> lVar32 == 0; lVar32 = lVar32 + -1) {
        }
      }
      iVar19 = (iVar20 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
    } while (iVar19 < iVar33);
  }
LAB_140931694:
  *local_80 = iVar30;
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140931af6 FUN_140931af6 body=164 status=ok
// SIG undefined FUN_140931af6(void)

void FUN_140931af6(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (*(int *)((longlong)param_1 + 0x2c) != -1) {
    FUN_1400ee60a(*param_1 + 0x38,(longlong)param_1 + 0x2c);
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0xffffffff;
  }
  FUN_140931b9a(param_1);
  if (param_1[3] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[3] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[1] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[1] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 140931b9a FUN_140931b9a body=398 status=ok
// SIG undefined FUN_140931b9a(void)

void FUN_140931b9a(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = *(longlong *)(param_1 + 8);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 8) = 0;
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
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
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
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
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
  return;
}



// FUNCTION 140931d28 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140931d2e FUN_140931d2e body=95 status=ok
// SIG undefined FUN_140931d2e(void)

void FUN_140931d2e(longlong *param_1,uint param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*param_1 + (longlong)(int)param_2 * 0x68),
            (void *)((longlong)(int)param_2 * 0x68 + *param_1 + 0x68),
            (longlong)(int)(~param_2 + iVar1) * 0x68);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  if (param_3 == '\x01') {
    FUN_140931d8e(param_1);
    return;
  }
  return;
}



// FUNCTION 140931d8e FUN_140931d8e body=64 status=ok
// SIG undefined FUN_140931d8e(void)

void FUN_140931d8e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_140931dce(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x68,8);
  }
  return;
}



// FUNCTION 140931dce FUN_140931dce body=101 status=ok
// SIG undefined FUN_140931dce(void)

ulonglong FUN_140931dce(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x68) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if ((param_2 == 0) || (0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x68,8);
      uVar1 = uVar1 / 0x68;
    }
  }
  return uVar1;
}



// FUNCTION 140931e3c FUN_140931e3c body=3309 status=ok
// SIG undefined FUN_140931e3c(void)

void FUN_140931e3c(longlong *param_1,longlong *param_2,uint *param_3)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  code **ppcVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_588 [32];
  undefined4 local_568;
  undefined4 local_560;
  undefined4 local_558;
  undefined8 local_550;
  wchar_t *local_548;
  undefined1 *local_540;
  undefined1 *local_538;
  code **local_530;
  code *local_528;
  code *local_520;
  longlong local_510;
  code **local_508;
  code **local_500;
  code *local_4f8;
  int local_4f0;
  undefined8 local_4e8;
  undefined1 local_4e0;
  undefined8 local_4d8;
  undefined4 local_4d0;
  undefined8 local_4c8;
  undefined1 local_4c0;
  undefined4 local_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined4 local_480;
  undefined8 local_478;
  undefined4 local_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined1 local_448;
  undefined **local_440;
  undefined8 local_438;
  undefined1 local_430;
  undefined **local_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined **local_410;
  undefined8 local_408;
  undefined4 local_400;
  undefined8 local_3f8;
  undefined4 local_3f0;
  undefined1 local_3ec;
  undefined4 local_3e8;
  undefined1 local_3e4;
  undefined8 local_3e0;
  undefined4 local_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined4 local_3c0;
  undefined8 local_3b8;
  undefined2 local_3b0;
  undefined4 local_3ac;
  undefined2 local_3a8;
  undefined4 local_3a4;
  undefined8 local_3a0;
  longlong *local_398;
  undefined4 local_390;
  undefined4 local_388;
  undefined2 local_380;
  undefined4 local_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined4 local_340;
  undefined8 local_338;
  undefined4 local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined4 local_2d8;
  uint local_2d0;
  longlong local_2c8;
  int local_2c0;
  undefined8 local_2b8;
  undefined1 local_2b0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined8 local_298;
  undefined1 local_290;
  undefined4 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined4 local_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined1 local_218;
  undefined **local_210;
  undefined8 local_208;
  undefined1 local_200;
  undefined **local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined **local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined1 local_1bc;
  undefined4 local_1b8;
  undefined1 local_1b4;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined2 local_180;
  undefined4 local_17c;
  undefined2 local_178;
  undefined4 local_174;
  undefined8 local_170;
  longlong *local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined2 local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  float local_94;
  undefined2 local_90;
  undefined2 uStack_8e;
  undefined4 uStack_8c;
  undefined2 uStack_88;
  undefined2 uStack_86;
  undefined1 local_84;
  undefined8 local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_588;
  lVar3 = (**(code **)(*param_1 + 8))();
  if (lVar3 == 0) goto LAB_14093209a;
  if (DAT_14cac9ca8 == 0) {
    local_530 = &local_4f8;
    local_4f8 = FUN_141030f22;
    local_520 = FUN_14081d0ea;
    local_528 = FUN_14081d0ea;
    local_538 = &LAB_1478c0a72;
    local_540 = &LAB_1417b2375;
    local_548 = L"Engine";
    local_550 = 0x1000000000;
    local_558 = 0x10000004;
    local_560 = 8;
    local_568 = 0x390;
    FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
  }
  if ((((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30)) ||
      ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0)) ||
     (((*(byte *)(lVar3 + 0x65) & 2) != 0 || ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0))))
  goto LAB_14093209a;
  lVar3 = (**(code **)(*param_1 + 0x40))(param_1);
  if (*(char *)(lVar3 + 0x99) == '\0') {
    lVar3 = (**(code **)(*param_1 + 0x40))(param_1);
    if ((((0 < (int)*(uint *)(lVar3 + 200)) && (*(longlong *)(lVar3 + 0x68) != 0)) &&
        ((*(int *)(lVar3 + 100) != 0 &&
         (((uVar1 = *(uint *)(lVar3 + 0x60), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
          (lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar7 != 0))))))
       && ((*(int *)(lVar7 + 0x10) == *(int *)(lVar3 + 100) &&
           ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))) {
      local_508 = (code **)(param_3 + 0x124);
      local_500 = (code **)(param_3 + 4);
      lVar7 = *(longlong *)(lVar3 + 0xc0) + 0x1a0;
      lVar3 = (ulonglong)*(uint *)(lVar3 + 200) * 0x1b8;
      do {
        cVar2 = *(char *)(lVar7 + -0x198);
        lVar8 = 0x488;
        if (cVar2 == '\0') {
LAB_140932294:
          if (*(char *)((longlong)param_3 + lVar8) == '\0') {
LAB_14093229e:
            if (((*(int *)(lVar7 + -0x18) != 0) && ((longlong *)*param_2 != (longlong *)0x0)) &&
               (local_510 = (**(code **)(*(longlong *)*param_2 + 0x18))(), local_510 != 0)) {
              lVar8 = FUN_144a75eb4();
              if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(local_510 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(local_510 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) {
                local_78 = *(undefined4 *)(lVar7 + -0x10);
                local_80 = *(undefined8 *)(lVar7 + -0x18);
                cVar2 = FUN_14891b07c(&local_80,local_510);
                if (cVar2 == '\0') goto LAB_1409327ed;
              }
            }
            local_4f8 = (code *)0x0;
            local_4f0 = 0x10;
            local_4e8 = 0;
            local_4e0 = 1;
            local_4d8 = 0;
            local_4d0 = 0xf00000d0;
            local_4c8 = 0;
            local_4c0 = 4;
            local_4b8 = 0;
            local_490 = 0;
            uStack_488 = 0;
            local_4a0 = 0;
            uStack_498 = 0;
            local_4b0 = 0;
            uStack_4a8 = 0;
            local_480 = 0xf00000d0;
            local_478 = 0;
            local_470 = 0x3f800000;
            local_448 = 0;
            local_458 = 0;
            uStack_450 = 0;
            local_468 = 0;
            uStack_460 = 0;
            local_438 = 0;
            local_430 = 0;
            local_440 = &PTR_FUN_14b023b20;
            local_428 = &PTR_FUN_14b023b40;
            local_420 = 0;
            uStack_418 = 0;
            local_410 = &PTR_FUN_14b00be70;
            local_408 = 0;
            local_400 = 0xf00000d0;
            local_3f8 = 0;
            local_3f0 = 0;
            local_3ec = 0;
            local_3e8 = 0;
            local_3e4 = 1;
            local_3e0 = 0;
            local_3d8 = 0xf00000d0;
            local_3d0 = 0;
            uStack_3c8 = 0;
            local_3c0 = 0xf00000d0;
            local_3b8 = 0;
            local_3b0 = 0;
            local_3ac = 0;
            local_3a8 = 0;
            local_3a4 = 6;
            local_3a0 = 0;
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
            {
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
            local_398 = DAT_14c844840;
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
            local_390 = 0;
            local_388 = 0;
            local_380 = 0;
            local_378 = 0;
            local_350 = 0;
            uStack_348 = 0;
            local_360 = 0;
            uStack_358 = 0;
            local_370 = 0;
            uStack_368 = 0;
            local_340 = 0xf00000d0;
            local_338 = 0;
            local_330 = 0x3f800000;
            local_2d0 = 0;
            local_2d8 = 0;
            local_2e8 = 0;
            uStack_2e0 = 0;
            local_2f8 = 0;
            uStack_2f0 = 0;
            local_308 = 0;
            uStack_300 = 0;
            local_318 = 0;
            uStack_310 = 0;
            local_328 = 0;
            uStack_320 = 0;
            local_2c8 = 0;
            local_2c0 = 0x10;
            local_2b8 = 0;
            local_2b0 = 1;
            local_2a8 = 0;
            local_2a0 = 0xf00000d0;
            local_298 = 0;
            local_290 = 4;
            local_288 = 0;
            local_260 = 0;
            uStack_258 = 0;
            local_270 = 0;
            uStack_268 = 0;
            local_280 = 0;
            uStack_278 = 0;
            local_250 = 0xf00000d0;
            local_248 = 0;
            local_240 = 0x3f800000;
            local_218 = 0;
            local_228 = 0;
            uStack_220 = 0;
            local_238 = 0;
            uStack_230 = 0;
            local_208 = 0;
            local_200 = 0;
            local_210 = &PTR_FUN_14b023b20;
            local_1f8 = &PTR_FUN_14b023b40;
            local_1f0 = 0;
            uStack_1e8 = 0;
            local_1e0 = &PTR_FUN_14b00be70;
            local_1d8 = 0;
            local_1d0 = 0xf00000d0;
            local_1c8 = 0;
            local_1c0 = 0;
            local_1bc = 0;
            local_1b8 = 0;
            local_1b4 = 1;
            local_1b0 = 0;
            local_1a8 = 0xf00000d0;
            local_1a0 = 0;
            uStack_198 = 0;
            local_190 = 0xf00000d0;
            local_188 = 0;
            local_180 = 0;
            local_17c = 0;
            local_178 = 0;
            local_174 = 6;
            local_170 = 0;
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
            {
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
            local_168 = DAT_14c844840;
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
            local_160 = 0;
            local_158 = 0;
            local_150 = 0;
            local_148 = 0;
            local_120 = 0;
            uStack_118 = 0;
            local_130 = 0;
            uStack_128 = 0;
            local_140 = 0;
            uStack_138 = 0;
            local_110 = 0xf00000d0;
            local_108 = 0;
            local_100 = 0x3f800000;
            local_a0 = 0;
            local_a8 = 0;
            local_b8 = 0;
            uStack_b0 = 0;
            local_c8 = 0;
            uStack_c0 = 0;
            local_d8 = 0;
            uStack_d0 = 0;
            local_e8 = 0;
            uStack_e0 = 0;
            local_f8 = 0;
            uStack_f0 = 0;
            local_98 = 0;
            local_84 = 0;
            uStack_8c = 0;
            uStack_88 = 0;
            local_94 = 0.0;
            local_90 = 0;
            uStack_8e = 0;
            if ((*(char *)(lVar7 + -0x197) != '\x01') || (*(float *)(lVar7 + -0x194) <= 0.0)) {
              local_2d0 = local_2d0 | 1;
              if (local_4f8 == *(code **)(lVar7 + -400)) {
                iVar5 = *(int *)(lVar7 + -0x188);
                if (local_4f0 != iVar5) goto LAB_140932a2c;
              }
              else {
                iVar5 = *(int *)(lVar7 + -0x188);
LAB_140932a2c:
                local_4e8 = 0;
                local_4f8 = *(code **)(lVar7 + -400);
                local_4f0 = iVar5;
              }
              FUN_14070e2ba(&local_440,lVar7 + -0x178);
              puVar6 = &uStack_2e0;
              if ((char)param_2[1] == '\x01') goto LAB_140932aa2;
            }
            else {
              local_a0 = 1;
              local_98 = 1;
              uStack_88 = 0;
              uStack_86 = 0;
              local_90 = 0;
              uStack_8e = 0;
              uStack_8c = 0;
              if (local_2c8 == *(longlong *)(lVar7 + -400)) {
                iVar5 = *(int *)(lVar7 + -0x188);
                if (local_2c0 != iVar5) goto LAB_140932a66;
              }
              else {
                iVar5 = *(int *)(lVar7 + -0x188);
LAB_140932a66:
                local_2b8 = 0;
                local_2c8 = *(longlong *)(lVar7 + -400);
                local_2c0 = iVar5;
              }
              local_94 = *(float *)(lVar7 + -0x194);
              FUN_14070e2ba(&local_210,lVar7 + -0x178);
              puVar6 = &uStack_b0;
              if ((char)param_2[1] != '\0') {
LAB_140932aa2:
                FUN_14007b0d4(puVar6,lVar7);
              }
            }
            ppcVar4 = local_500;
            if (((*(char *)(lVar7 + -0x198) == '\0') ||
                (ppcVar4 = local_508, *(char *)(lVar7 + -0x198) == '\x01')) &&
               (ppcVar4 != &local_4f8)) {
              FUN_14007afac(ppcVar4);
            }
            FUN_144908ac8(&local_2c8);
            FUN_144908ac8(&local_4f8);
          }
        }
        else {
          if (cVar2 != '\x02') {
            if (cVar2 == '\x01') {
              lVar8 = 0x908;
              goto LAB_140932294;
            }
            goto LAB_14093229e;
          }
          lVar8 = 0x908;
          if ((char)param_3[0x122] == '\0') goto LAB_140932294;
        }
LAB_1409327ed:
        lVar7 = lVar7 + 0x1b8;
        lVar3 = lVar3 + -0x1b8;
      } while (lVar3 != 0);
    }
    (**(code **)(*param_1 + 0xa0))(param_1,param_2,param_3);
    lVar3 = (**(code **)(*param_1 + 0x10))(param_1);
    if ((((lVar3 != 0) && (*(longlong *)(param_3 + 2) != 0)) &&
        ((param_3[1] != 0 && ((uVar1 = *param_3, -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)))))
        ) && ((lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar7 != 0 &&
              (((*(uint *)(lVar7 + 0x10) == param_3[1] && ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)
                ) && (*param_2 != 0)))))) {
      if (*(char *)(lVar3 + 0x18) == '\x01') {
        lVar7 = FUN_1406e36fe(lVar3);
        if (*(char *)(lVar3 + 0x38) == '\0') {
          if ((lVar7 == 0) || (*(char *)(lVar7 + 0x18) != '\x01')) goto LAB_140931fdb;
          lVar7 = lVar7 + 0x20;
        }
        else {
LAB_1409320e2:
          lVar7 = lVar3 + 0x40;
        }
        if (lVar7 != 0) {
          FUN_14007a81a(param_2,param_3,lVar7,0);
        }
      }
      else if (*(char *)(lVar3 + 0x38) == '\x01') goto LAB_1409320e2;
LAB_140931fdb:
      if (*(char *)(lVar3 + 0x18) == '\x01') {
        lVar7 = FUN_1406e36fe(lVar3);
        if (*(char *)(lVar3 + 0x39) == '\0') {
          if ((lVar7 == 0) || (*(char *)(lVar7 + 0x19) != '\x01')) goto LAB_140932006;
          lVar7 = lVar7 + 0x70;
        }
        else {
LAB_1409320f5:
          lVar7 = lVar3 + 0x90;
        }
        if (lVar7 != 0) {
          FUN_14007a81a(param_2,param_3,lVar7,1);
        }
      }
      else if (*(char *)(lVar3 + 0x39) == '\x01') goto LAB_1409320f5;
    }
  }
LAB_140932006:
  lVar3 = *param_2;
  if ((char)param_3[0x122] == '\x01') {
    if ((*(longlong *)(param_3 + 2) == 0) || (param_3[1] == 0)) {
LAB_14093206e:
      lVar7 = 0;
    }
    else {
      uVar1 = *param_3;
      lVar7 = 0;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if ((lVar8 == 0) || (*(uint *)(lVar8 + 0x10) != param_3[1])) goto LAB_14093206e;
        lVar7 = 0;
        if ((*(uint *)(lVar8 + 8) & 0x10200000) == 0) {
          lVar7 = *(longlong *)(param_3 + 2);
        }
      }
    }
    FUN_140103240(param_3 + 4,lVar7,lVar3);
    FUN_140103240(param_3 + 0x90,lVar7,lVar3);
  }
  if ((char)param_3[0x242] != '\x01') {
LAB_14093209a:
    if ((local_70 ^ (ulonglong)auStack_588) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  if ((*(longlong *)(param_3 + 2) != 0) && (param_3[1] != 0)) {
    uVar1 = *param_3;
    lVar7 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14093217c;
    lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((lVar8 != 0) && (*(uint *)(lVar8 + 0x10) == param_3[1])) {
      lVar7 = 0;
      if ((*(uint *)(lVar8 + 8) & 0x10200000) == 0) {
        lVar7 = *(longlong *)(param_3 + 2);
      }
      goto LAB_14093217c;
    }
  }
  lVar7 = 0;
LAB_14093217c:
  FUN_140103240(param_3 + 0x124,lVar7,lVar3);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_588);
}



// FUNCTION 140932b5c FUN_140932b5c body=18 status=ok
// SIG undefined FUN_140932b5c(void)

longlong FUN_140932b5c(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140932b6e();
  return lVar1 + 0x50;
}



// FUNCTION 140932b6e FUN_140932b6e body=120 status=ok
// SIG undefined FUN_140932b6e(void)

undefined * FUN_140932b6e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8686c0) {
    FUN_144b3d300(&DAT_14c8686c0);
    if (DAT_14c8686c0 == -1) {
      FUN_145759232(&DAT_14c868640);
      DAT_14c8686b8 = &DAT_14c868640;
      atexit(FUN_142783e95);
      _Init_thread_footer(&DAT_14c8686c0);
    }
  }
  return DAT_14c8686b8;
}



// FUNCTION 140932be6 FUN_140932be6 body=95 status=ok
// SIG undefined FUN_140932be6(void)

undefined8 FUN_140932be6(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong *)*param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*(longlong *)*param_2 + 8))();
    lVar2 = FUN_140932c46();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (lVar3 = lVar2 + 0x30,
       *(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar3))
    goto LAB_140932c41;
  }
  if ((*(char *)(param_1 + 0x1cb0) != '\x01') ||
     (lVar3 = *param_2, (*(byte *)(lVar3 + 0xc) & 1) == 0)) {
    return 0;
  }
LAB_140932c41:
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 140932c46 FUN_140932c46 body=57 status=ok
// SIG undefined FUN_140932c46(void)

void FUN_140932c46(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4430 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4430 = FUN_140002ddd(FUN_1465bd958,uVar1,L"GrenadeBehaviorAspect");
  }
  return;
}



// FUNCTION 140932c80 FUN_140932c80 body=120 status=ok
// SIG undefined FUN_140932c80(void)

undefined8 FUN_140932c80(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      FUN_14063a814(*param_2,*(undefined4 *)(param_2 + 1));
      iVar1 = *(int *)(param_3 + 1);
      uVar2 = *param_3;
      *(int *)(param_2 + 1) = iVar1;
      if (iVar1 == 0 && *(int *)((longlong)param_2 + 0xc) == 0) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        FUN_140932d7c(param_2,iVar1);
        FUN_140932cf8(*param_2,uVar2,iVar1);
      }
    }
    param_3 = param_3 + 2;
    param_2 = param_2 + 2;
  }
  return 1;
}



// FUNCTION 140932cf8 FUN_140932cf8 body=132 status=ok
// SIG undefined FUN_140932cf8(void)

void FUN_140932cf8(undefined8 *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    lVar2 = param_2 + 0x10;
    puVar3 = param_1 + 2;
    do {
      *param_1 = 0xffffffffffffffff;
      *(undefined4 *)(param_1 + 1) = 0xffffffff;
      *(undefined2 *)((longlong)param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
      lVar1 = 0;
      do {
        *(undefined1 *)((longlong)param_1 + lVar1 + 0x50) = 0xff;
        FUN_140219b74((longlong)puVar3 + lVar1,lVar2 + lVar1);
        lVar1 = lVar1 + 0x48;
      } while (lVar1 != 0x1b0);
      param_1 = param_1 + 0x38;
      param_2 = param_2 + 0x1c0;
      lVar2 = lVar2 + 0x1c0;
      puVar3 = puVar3 + 0x38;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140932d7c FUN_140932d7c body=234 status=ok
// SIG undefined FUN_140932d7c(void)

void FUN_140932d7c(longlong param_1,int param_2,int param_3)

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
    uVar2 = (longlong)param_2 * 0x1c0;
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
    auVar1._0_8_ = uVar2 >> 6;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar5 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar5 = iVar3;
    }
  }
  if (param_3 < iVar5) {
    FUN_1446f8d3c(param_1,0,iVar5,0x1c0,8);
    param_3 = iVar5;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140932e66 FUN_140932e66 body=155 status=ok
// SIG undefined FUN_140932e66(void)

void FUN_140932e66(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  char *local_38;
  undefined1 local_2b;
  char local_2a;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_29 = 0;
  local_38 = &local_2a;
  local_2a = '\0';
  local_2b = 0;
  (**(code **)(*param_1 + 0x5e8))(param_1,param_2,&local_29,&local_2b);
  *(byte *)((longlong)param_1 + 0x5b6) =
       *(byte *)((longlong)param_1 + 0x5b6) & 0x7f | (local_2a == '\x02') << 7;
  *(char *)((longlong)param_1 + 0x5aa) = local_2a;
  (**(code **)(*param_1 + 0x5d0))(param_1,local_29,local_2b);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140932f68 FUN_140932f68 body=372 status=ok
// SIG undefined FUN_140932f68(void)

void FUN_140932f68(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar1 = *param_1;
    lVar2 = (longlong)(int)param_1[1] << 5;
    do {
      FUN_14093316c(param_1,param_2,lVar1);
      lVar1 = lVar1 + 0x20;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  if ((longlong)(int)param_1[3] != 0) {
    lVar1 = param_1[2];
    lVar2 = (longlong)(int)param_1[3] * 0x38;
    do {
      FUN_140933242(param_1,param_2,lVar1);
      lVar1 = lVar1 + 0x38;
      lVar2 = lVar2 + -0x38;
    } while (lVar2 != 0);
  }
  if ((longlong)(int)param_1[5] != 0) {
    lVar1 = param_1[4];
    lVar2 = (longlong)(int)param_1[5] << 5;
    do {
      FUN_140933c02(param_1,param_2,lVar1);
      lVar1 = lVar1 + 0x20;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  if ((longlong)(int)param_1[7] != 0) {
    lVar1 = param_1[6];
    lVar2 = (longlong)(int)param_1[7] << 5;
    do {
      FUN_148adcc52(param_1,param_2,lVar1);
      lVar1 = lVar1 + 0x20;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  if ((longlong)(int)param_1[9] != 0) {
    lVar1 = param_1[8];
    lVar2 = (longlong)(int)param_1[9] * 0x30;
    do {
      FUN_148adcdde(param_1,param_2,lVar1);
      lVar1 = lVar1 + 0x30;
      lVar2 = lVar2 + -0x30;
    } while (lVar2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1409330dc(param_1);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_14093310c(param_1 + 2);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    FUN_14093313c(param_1 + 4);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if (*(int *)((longlong)param_1 + 0x3c) != 0) {
    FUN_148ad7758(param_1 + 6);
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if (*(int *)((longlong)param_1 + 0x4c) != 0) {
    FUN_148ad7788(param_1 + 8);
    return;
  }
  return;
}



// FUNCTION 1409330dc FUN_1409330dc body=48 status=ok
// SIG undefined FUN_1409330dc(void)

void FUN_1409330dc(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 14093310c FUN_14093310c body=48 status=ok
// SIG undefined FUN_14093310c(void)

void FUN_14093310c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x38,8);
  }
  return;
}



// FUNCTION 14093313c FUN_14093313c body=48 status=ok
// SIG undefined FUN_14093313c(void)

void FUN_14093313c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 14093316c FUN_14093316c body=212 status=ok
// SIG undefined FUN_14093316c(void)

void FUN_14093316c(undefined8 param_1,longlong param_2,double *param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  double local_28;
  double dStack_20;
  double local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((param_2 != 0) && (plVar2 = *(longlong **)(param_2 + 0x48), plVar2 != (longlong *)0x0)) &&
     (1 < *(byte *)((longlong)plVar2 + 0xc))) {
    cVar1 = *(char *)(*(longlong *)(*plVar2 + 0x2c0) + 0xb + (longlong)(int)plVar2[1] * 0x10);
    if ((cVar1 == '\x04') || (cVar1 == '\x01')) {
      if (((ulonglong)param_3[3] & 2) == 0) {
        local_18 = param_3[2];
        local_28 = *param_3;
        dStack_20 = param_3[1];
      }
      else {
        local_28 = (double)(float)*(double *)
                                   (*(longlong *)(*plVar2 + 0x3b0) + (longlong)(int)plVar2[1] * 8);
        local_18 = param_3[2] * local_28;
        dStack_20 = param_3[1] * local_28;
        local_28 = local_28 * *param_3;
      }
      FUN_140933574(param_2,&local_28,0);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140933242 FUN_140933242 body=663 status=ok
// SIG undefined FUN_140933242(void)

void FUN_140933242(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  double local_a8;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 != 0) {
    plVar2 = *(longlong **)(param_2 + 0x48);
    lVar3 = *plVar2;
    lVar10 = (longlong)(int)plVar2[1];
    lVar4 = *(longlong *)(lVar3 + 0x28);
    lVar5 = *(longlong *)(lVar3 + 0x48);
    lVar11 = lVar10 * 0x10;
    dVar14 = 0.0;
    if (plVar2 == (longlong *)0x0) {
      uVar17 = 0;
      uVar18 = 0;
      dVar16 = 0.0;
    }
    else {
      uVar17 = 0;
      uVar18 = 0;
      dVar16 = 0.0;
      if (1 < *(byte *)((longlong)plVar2 + 0xc)) {
        lVar3 = *(longlong *)(lVar3 + 0x3e0);
        dVar16 = *(double *)(lVar3 + lVar10 * 0x18);
        uVar1 = *(undefined8 *)(lVar3 + 8 + lVar10 * 0x18);
        uVar17 = (undefined4)uVar1;
        uVar18 = (undefined4)((ulonglong)uVar1 >> 0x20);
        dVar14 = *(double *)(lVar3 + 0x10 + lVar10 * 0x18);
      }
    }
    dVar12 = (double)*(float *)(lVar5 + lVar11);
    dVar6 = (double)*(float *)(lVar5 + 4 + lVar11);
    dVar15 = (double)*(float *)(lVar5 + 8 + lVar11);
    dVar13 = (double)*(float *)(lVar5 + 0xc + lVar11);
    dVar7 = dVar12 * (double)CONCAT44(uVar18,uVar17) - dVar16 * dVar6;
    dVar8 = dVar15 * dVar16 - dVar14 * dVar12;
    dVar9 = dVar6 * dVar14 - (double)CONCAT44(uVar18,uVar17) * dVar15;
    dVar7 = dVar7 + dVar7;
    dVar8 = dVar8 + dVar8;
    dVar9 = dVar9 + dVar9;
    dVar14 = param_3[5] -
             ((dVar12 * dVar8 - dVar9 * dVar6) + dVar7 * dVar13 + dVar14 +
             *(double *)(lVar4 + 0x10 + lVar10 * 0x18));
    dVar12 = param_3[4] -
             ((dVar15 * dVar9 - dVar7 * dVar12) + dVar8 * dVar13 + (double)CONCAT44(uVar18,uVar17) +
             *(double *)(lVar4 + 8 + lVar10 * 0x18));
    dVar16 = param_3[3] -
             ((dVar6 * dVar7 - dVar8 * dVar15) + dVar13 * dVar9 + dVar16 +
             *(double *)(lVar4 + lVar10 * 0x18));
    local_88 = dVar16 * param_3[1] - *param_3 * dVar12;
    local_90 = dVar14 * *param_3 - param_3[2] * dVar16;
    local_98 = dVar12 * param_3[2] - dVar14 * param_3[1];
    local_a8 = param_3[2];
    local_b8 = *(undefined4 *)param_3;
    uStack_b4 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_b0 = *(undefined4 *)(param_3 + 1);
    uStack_ac = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_140933574(param_2,&local_b8,0);
    FUN_1409334da(param_2,&local_98,0);
  }
  if ((local_80 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409334da FUN_1409334da body=153 status=ok
// SIG undefined FUN_1409334da(void)

void FUN_1409334da(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0);
  if (lVar2 != 0) {
    FUN_14093365e(lVar2,*(undefined8 *)(param_1 + 0x48));
  }
  plVar3 = *(longlong **)(param_1 + 0x48);
  if (((plVar3 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar3 + 0xc))) &&
     ((cVar1 = *(char *)(*(longlong *)(*plVar3 + 0x2c0) + 0xb + (longlong)(int)plVar3[1] * 0x10),
      cVar1 == '\x04' || (cVar1 == '\x01')))) {
    if ((char)param_3 != '\0') {
      FUN_14091cfa4(param_1,plVar3,4,1,1);
    }
    FUN_1409339b8(plVar3,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 140933574 FUN_140933574 body=233 status=ok
// SIG undefined FUN_140933574(void)

void FUN_140933574(longlong param_1,double *param_2,char param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0);
  if (lVar7 != 0) {
    FUN_14093365e(lVar7,*(undefined8 *)(param_1 + 0x48));
  }
  plVar5 = *(longlong **)(param_1 + 0x48);
  if ((plVar5 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar5 + 0xc))) {
    lVar7 = *plVar5;
    lVar8 = (longlong)(int)plVar5[1];
    cVar4 = *(char *)(*(longlong *)(lVar7 + 0x2c0) + 0xb + lVar8 * 0x10);
    if ((cVar4 == '\x04') || (cVar4 == '\x01')) {
      if (param_3 != '\0') {
        FUN_14091cfa4(param_1,plVar5,CONCAT71((int7)((ulonglong)(lVar8 * 0x10) >> 8),4),1,1);
        lVar7 = *plVar5;
        lVar8 = (longlong)(int)plVar5[1];
      }
      lVar6 = *(longlong *)(lVar7 + 0x308);
      dVar1 = *(double *)(*(longlong *)(lVar7 + 0x3c8) + lVar8 * 8);
      dVar2 = param_2[2];
      dVar3 = param_2[1];
      *(double *)(lVar6 + lVar8 * 0x18) = dVar1 * *param_2 + *(double *)(lVar6 + lVar8 * 0x18);
      *(double *)(lVar6 + 8 + lVar8 * 0x18) = dVar3 * dVar1 + *(double *)(lVar6 + 8 + lVar8 * 0x18);
      *(double *)(lVar6 + 0x10 + lVar8 * 0x18) =
           dVar2 * dVar1 + *(double *)(lVar6 + 0x10 + lVar8 * 0x18);
    }
  }
  return;
}



// FUNCTION 14093365e FUN_14093365e body=858 status=ok
// SIG undefined FUN_14093365e(void)

void FUN_14093365e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  bool bVar9;
  longlong lVar10;
  byte bVar11;
  int iVar12;
  int *piVar13;
  undefined8 *puVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  
  piVar13 = (int *)FUN_1447fdeae(param_1,param_1 + 0x298,param_2,0xffffffff);
  iVar12 = *(int *)(param_1 + 0x3e0);
  piVar13[100] = iVar12;
  if (iVar12 < *(int *)(param_1 + 0x3e4)) {
    cVar4 = *(char *)(*(longlong *)(*param_2 + 0x188) + (longlong)(int)param_2[1]);
    piVar13[0x65] = iVar12;
    uVar20 = *(uint *)(param_1 + 0x3e0) & 0x3fffffff | 0x40000000;
    if (cVar4 != '\0') goto LAB_1409336bc;
    iVar12 = piVar13[1];
    bVar9 = true;
    if (iVar12 < 1) goto LAB_1409336be;
    iVar16 = *piVar13;
    iVar17 = (int)(*(uint *)(param_1 + 0x3e0) << 2) >> 2;
    iVar18 = -1;
    do {
      if (iVar16 < 1) {
        iVar16 = piVar13[6];
      }
      uVar5 = *(uint *)(*(longlong *)(piVar13 + 4) + -4 + (longlong)iVar16 * 8);
      iVar19 = (int)(uVar5 * 4) >> 2;
      if ((iVar19 < iVar17) || ((uVar5 < 0x40000000 && (iVar19 == iVar17)))) break;
      iVar16 = iVar16 + -1;
      iVar12 = iVar12 + -1;
      iVar18 = iVar16;
    } while (iVar12 != 0);
    if (iVar18 == -1) goto LAB_1409336be;
    if (param_2 == (longlong *)0x0) {
      return;
    }
    bVar11 = *(byte *)((longlong)param_2 + 0xc);
    if (bVar11 == 0) {
      return;
    }
LAB_140933892:
    iVar12 = piVar13[0x11];
    bVar9 = true;
    if (iVar12 < 1) goto LAB_1409336f1;
    iVar16 = piVar13[0x10];
    iVar17 = (int)(uVar20 * 4) >> 2;
    iVar18 = -1;
    do {
      if (iVar16 < 1) {
        iVar16 = piVar13[0x16];
      }
      uVar5 = *(uint *)(*(longlong *)(piVar13 + 0x14) + -4 + (longlong)iVar16 * 8);
      iVar19 = (int)(uVar5 * 4) >> 2;
      if ((iVar19 < iVar17) || ((uVar5 < 0x40000000 && (iVar19 == iVar17)))) break;
      iVar16 = iVar16 + -1;
      iVar12 = iVar12 + -1;
      iVar18 = iVar16;
    } while (iVar12 != 0);
    if (iVar18 == -1) goto LAB_1409336f1;
    if (bVar11 < 2) {
      return;
    }
  }
  else {
    piVar13[0x65] = iVar12;
    uVar20 = *(uint *)(param_1 + 0x3e0) & 0x3fffffff | 0x40000000;
LAB_1409336bc:
    bVar9 = false;
LAB_1409336be:
    puVar14 = (undefined8 *)FUN_1400e660a(piVar13,uVar20,param_1 + 0x18);
    if (puVar14 != (undefined8 *)0x0) {
      lVar10 = param_2[1];
      lVar15 = *(longlong *)(*param_2 + 0x28);
      puVar14[2] = *(undefined8 *)(lVar15 + 0x10 + (longlong)(int)lVar10 * 0x18);
      puVar1 = (undefined8 *)(lVar15 + (longlong)(int)lVar10 * 0x18);
      uVar8 = puVar1[1];
      *puVar14 = *puVar1;
      puVar14[1] = uVar8;
      puVar2 = (undefined4 *)(*(longlong *)(*param_2 + 0x48) + (longlong)(int)param_2[1] * 0x10);
      uVar3 = puVar2[1];
      uVar6 = puVar2[2];
      uVar7 = puVar2[3];
      *(undefined4 *)(puVar14 + 4) = *puVar2;
      *(undefined4 *)((longlong)puVar14 + 0x24) = uVar3;
      *(undefined4 *)(puVar14 + 5) = uVar6;
      *(undefined4 *)((longlong)puVar14 + 0x2c) = uVar7;
    }
    if (param_2 == (longlong *)0x0) {
      return;
    }
    bVar11 = *(byte *)((longlong)param_2 + 0xc);
    if (bVar11 == 0) {
      return;
    }
    if (bVar9) goto LAB_140933892;
    bVar9 = false;
LAB_1409336f1:
    puVar14 = (undefined8 *)FUN_1400e6806(piVar13 + 0x10,uVar20,param_1 + 0x18);
    if (puVar14 != (undefined8 *)0x0) {
      uVar3 = *(undefined4 *)(*(longlong *)(*param_2 + 0x278) + 8 + (longlong)(int)param_2[1] * 0xc)
      ;
      *puVar14 = *(undefined8 *)(*(longlong *)(*param_2 + 0x278) + (longlong)(int)param_2[1] * 0xc);
      *(undefined4 *)(puVar14 + 1) = uVar3;
      uVar3 = *(undefined4 *)(*(longlong *)(*param_2 + 0x290) + 8 + (longlong)(int)param_2[1] * 0xc)
      ;
      *(undefined8 *)((longlong)puVar14 + 0xc) =
           *(undefined8 *)(*(longlong *)(*param_2 + 0x290) + (longlong)(int)param_2[1] * 0xc);
      *(undefined4 *)((longlong)puVar14 + 0x14) = uVar3;
    }
    if (*(byte *)((longlong)param_2 + 0xc) < 2) {
      return;
    }
    if (!bVar9) goto LAB_140933715;
  }
  iVar12 = piVar13[0x21];
  if (0 < iVar12) {
    iVar16 = piVar13[0x20];
    iVar17 = (int)(uVar20 * 4) >> 2;
    iVar18 = -1;
    do {
      if (iVar16 < 1) {
        iVar16 = piVar13[0x26];
      }
      uVar5 = *(uint *)(*(longlong *)(piVar13 + 0x24) + -4 + (longlong)iVar16 * 8);
      iVar19 = (int)(uVar5 * 4) >> 2;
      if ((iVar19 < iVar17) || ((uVar5 < 0x40000000 && (iVar19 == iVar17)))) break;
      iVar16 = iVar16 + -1;
      iVar12 = iVar12 + -1;
      iVar18 = iVar16;
    } while (iVar12 != 0);
    if (iVar18 != -1) {
      return;
    }
  }
LAB_140933715:
  lVar15 = FUN_1400e6706(piVar13 + 0x20,uVar20,param_1 + 0x18);
  if (lVar15 == 0) {
    return;
  }
  FUN_1400e690a(lVar15,param_2);
  return;
}



// FUNCTION 1409339b8 FUN_1409339b8 body=585 status=ok
// SIG undefined FUN_1409339b8(void)

void FUN_1409339b8(longlong *param_1,double *param_2)

{
  double *pdVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_148 [32];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_a8;
  double local_a0;
  double local_98;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar2 = *param_1;
  lVar11 = (longlong)(int)param_1[1];
  lVar12 = *(longlong *)(lVar2 + 0x380);
  local_f0 = (double)*(float *)(lVar12 + 8 + lVar11 * 0xc);
  local_f8 = (double)*(float *)(lVar12 + 4 + lVar11 * 0xc);
  local_100 = (double)*(float *)(lVar12 + lVar11 * 0xc);
  lVar12 = *(longlong *)(lVar2 + 0x548);
  lVar13 = lVar11 * 0x10;
  dVar3 = (double)*(float *)(lVar12 + 0xc + lVar13);
  dVar14 = (double)*(float *)(lVar12 + 8 + lVar13);
  dVar5 = (double)*(float *)(lVar12 + 4 + lVar13);
  dVar15 = (double)*(float *)(lVar12 + lVar13);
  pdVar1 = (double *)(*(longlong *)(lVar2 + 0x3f8) + lVar11 * 0x20);
  dVar7 = *pdVar1;
  dVar8 = pdVar1[1];
  pdVar1 = (double *)(*(longlong *)(lVar2 + 0x3f8) + 0x10 + lVar11 * 0x20);
  dVar9 = *pdVar1;
  dVar10 = pdVar1[1];
  dVar6 = dVar7 * dVar14 * 1.0 + dVar10 * dVar5 + dVar15 * dVar9 * -1.0 + dVar3 * dVar8;
  dVar4 = dVar9 * dVar14 * -1.0 + ((dVar15 * dVar7 * -1.0 + dVar3 * dVar10) - dVar5 * dVar8);
  local_128._8_4_ = SUB84(dVar6,0);
  local_128._0_8_ = dVar8 * dVar14 * -1.0 + dVar9 * dVar5 + dVar15 * dVar10 * 1.0 + dVar3 * dVar7;
  local_128._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  local_118._8_4_ = SUB84(dVar4,0);
  local_118._0_8_ = dVar10 * dVar14 * 1.0 + ((dVar15 * dVar8 * 1.0 + dVar3 * dVar9) - dVar5 * dVar7)
  ;
  local_118._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  FUN_140934b53(&local_e8);
  lVar12 = (longlong)(int)param_1[1];
  lVar2 = *(longlong *)(*param_1 + 800);
  dVar3 = *param_2;
  dVar4 = param_2[1];
  dVar5 = param_2[2];
  *(double *)(lVar2 + lVar12 * 0x18) =
       dVar5 * local_d8 + dVar3 * local_e8 + dVar4 * local_e0 + *(double *)(lVar2 + lVar12 * 0x18);
  *(double *)(lVar2 + 8 + lVar12 * 0x18) =
       local_b8 * dVar5 + local_c8 * dVar3 + local_c0 * dVar4 +
       *(double *)(lVar2 + 8 + lVar12 * 0x18);
  *(double *)(lVar2 + 0x10 + lVar12 * 0x18) =
       local_98 * dVar5 + local_a8 * dVar3 + local_a0 * dVar4 +
       *(double *)(lVar2 + 0x10 + lVar12 * 0x18);
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140933c02 FUN_140933c02 body=683 status=ok
// SIG undefined FUN_140933c02(void)

void FUN_140933c02(undefined8 param_1,longlong param_2,double *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  longlong lVar13;
  longlong lVar14;
  double *pdVar15;
  double dVar16;
  undefined1 auStack_158 [32];
  double local_138;
  double dStack_130;
  undefined1 local_128 [16];
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_b8;
  double local_b0;
  double local_a8;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (((param_2 != 0) && (plVar2 = *(longlong **)(param_2 + 0x48), plVar2 != (longlong *)0x0)) &&
     (1 < *(byte *)((longlong)plVar2 + 0xc))) {
    lVar3 = *plVar2;
    lVar13 = (longlong)(int)plVar2[1];
    lVar14 = lVar13 * 0x10;
    cVar1 = *(char *)(*(longlong *)(lVar3 + 0x2c0) + 0xb + lVar14);
    if ((cVar1 == '\x04') || (cVar1 == '\x01')) {
      if (((ulonglong)param_3[3] & 2) == 0) {
        local_e8 = param_3[2];
        pdVar15 = &local_f8;
        local_f8 = *param_3;
        dStack_f0 = param_3[1];
      }
      else {
        lVar4 = *(longlong *)(lVar3 + 0x368);
        local_110 = (double)*(float *)(lVar4 + lVar13 * 0xc);
        local_108 = (double)*(float *)(lVar4 + 4 + lVar13 * 0xc);
        local_100 = (double)*(float *)(lVar4 + 8 + lVar13 * 0xc);
        lVar4 = *(longlong *)(lVar3 + 0x48);
        pdVar15 = (double *)(*(longlong *)(lVar3 + 0x3f8) + lVar13 * 0x20);
        dVar9 = *pdVar15;
        dVar10 = pdVar15[1];
        dVar16 = (double)*(float *)(lVar4 + 8 + lVar14);
        dVar5 = (double)*(float *)(lVar4 + 0xc + lVar14);
        dVar7 = (double)*(float *)(lVar4 + lVar14);
        pdVar15 = (double *)(*(longlong *)(lVar3 + 0x3f8) + 0x10 + lVar13 * 0x20);
        dVar11 = *pdVar15;
        dVar12 = pdVar15[1];
        dVar8 = (double)*(float *)(lVar4 + 4 + lVar14);
        local_138 = dVar10 * dVar16 * -1.0 + dVar11 * dVar8 + dVar7 * dVar12 * 1.0 + dVar5 * dVar9;
        dStack_130 = dVar9 * dVar16 * 1.0 + dVar12 * dVar8 + dVar7 * dVar11 * -1.0 + dVar5 * dVar10;
        dVar6 = dVar11 * dVar16 * -1.0 + ((dVar7 * dVar9 * -1.0 + dVar5 * dVar12) - dVar8 * dVar10);
        local_128._8_4_ = SUB84(dVar6,0);
        local_128._0_8_ =
             dVar12 * dVar16 * 1.0 + ((dVar7 * dVar10 * 1.0 + dVar5 * dVar11) - dVar8 * dVar9);
        local_128._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        FUN_140935c2f(&local_f8,&local_138);
        dVar5 = *param_3;
        dVar6 = param_3[1];
        dVar7 = param_3[2];
        dStack_130 = local_c8 * dVar7 + local_d8 * dVar5 + local_d0 * dVar6;
        local_138 = dVar7 * local_e8 + dVar5 * local_f8 + dVar6 * dStack_f0;
        local_128._0_8_ = local_a8 * dVar7 + local_b8 * dVar5 + local_b0 * dVar6;
        pdVar15 = &local_138;
      }
      FUN_1409334da(param_2,pdVar15,0);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140933eae FUN_140933eae body=1078 status=ok
// SIG undefined FUN_140933eae(void)

double * FUN_140933eae(double *param_1,undefined8 param_2,double *param_3)

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
  undefined1 auStack_1a8 [40];
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 uStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  dVar1 = param_3[2];
  dVar2 = *param_3;
  dVar3 = param_3[1];
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0.0;
  uStack_f0 = 0;
  local_108 = 0.0;
  dStack_100 = 0.0;
  local_118 = 0.0;
  uStack_110 = 0;
  local_128 = 0.0;
  dStack_120 = 0.0;
  local_138 = 0.0;
  uStack_130 = 0;
  local_148 = 0.0;
  dStack_140 = 0.0;
  FUN_14076d742(param_2,&local_148);
  local_160 = local_118;
  dVar7 = dVar1 * local_f8 + local_138 * 0.0 + local_118 * 0.0;
  local_158 = dStack_120;
  dVar9 = dVar1 * dStack_100 + dStack_140 * 0.0 + dStack_120 * 0.0;
  local_150 = local_128;
  local_170 = local_148;
  local_168 = local_108;
  dVar4 = dVar1 * local_108 + local_148 * 0.0 + local_128 * 0.0;
  dVar8 = dVar3 * local_118 + local_138 * 0.0 + local_f8 * 0.0;
  dVar1 = dVar2 * local_138 + local_118 * 0.0 + local_f8 * 0.0;
  dVar6 = dVar3 * dStack_120 + dStack_140 * 0.0 + dStack_100 * 0.0;
  dVar5 = dVar2 * dStack_140 + dStack_120 * 0.0 + dStack_100 * 0.0;
  dVar3 = dVar3 * local_128 + local_148 * 0.0 + local_108 * 0.0;
  dVar2 = dVar2 * local_148 + local_128 * 0.0 + local_108 * 0.0;
  local_178 = local_f8 * dVar7 + local_138 * dVar1 + local_118 * dVar8;
  local_180 = local_f8 * dVar4 + local_138 * dVar2 + local_118 * dVar3;
  *param_1 = dVar4 * local_108 + dVar2 * local_148 + dVar3 * local_128;
  param_1[4] = dVar9 * local_108 + dVar5 * local_148 + dVar6 * local_128;
  param_1[8] = dVar7 * local_108 + dVar1 * local_148 + dVar8 * local_128;
  param_1[1] = dStack_100 * dVar4 + dStack_140 * dVar2 + dStack_120 * dVar3;
  param_1[5] = dStack_100 * dVar9 + dStack_140 * dVar5 + dStack_120 * dVar6;
  param_1[9] = dStack_100 * dVar7 + dStack_140 * dVar1 + dVar8 * dStack_120;
  param_1[2] = local_180;
  param_1[6] = local_f8 * dVar9 + local_138 * dVar5 + local_118 * dVar6;
  param_1[10] = local_178;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = 1.0;
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  if ((local_c0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409342e5 FUN_1409342e5 body=1078 status=ok
// SIG undefined FUN_1409342e5(void)

double * FUN_1409342e5(double *param_1,undefined8 param_2,double *param_3)

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
  undefined1 auStack_1a8 [40];
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 uStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  dVar1 = param_3[2];
  dVar2 = *param_3;
  dVar3 = param_3[1];
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0.0;
  uStack_f0 = 0;
  local_108 = 0.0;
  dStack_100 = 0.0;
  local_118 = 0.0;
  uStack_110 = 0;
  local_128 = 0.0;
  dStack_120 = 0.0;
  local_138 = 0.0;
  uStack_130 = 0;
  local_148 = 0.0;
  dStack_140 = 0.0;
  FUN_14076d742(param_2,&local_148);
  local_160 = local_118;
  dVar7 = dVar1 * local_f8 + local_138 * 0.0 + local_118 * 0.0;
  local_158 = dStack_120;
  dVar9 = dVar1 * dStack_100 + dStack_140 * 0.0 + dStack_120 * 0.0;
  local_150 = local_128;
  local_170 = local_148;
  local_168 = local_108;
  dVar4 = dVar1 * local_108 + local_148 * 0.0 + local_128 * 0.0;
  dVar8 = dVar3 * local_118 + local_138 * 0.0 + local_f8 * 0.0;
  dVar1 = dVar2 * local_138 + local_118 * 0.0 + local_f8 * 0.0;
  dVar6 = dVar3 * dStack_120 + dStack_140 * 0.0 + dStack_100 * 0.0;
  dVar5 = dVar2 * dStack_140 + dStack_120 * 0.0 + dStack_100 * 0.0;
  dVar3 = dVar3 * local_128 + local_148 * 0.0 + local_108 * 0.0;
  dVar2 = dVar2 * local_148 + local_128 * 0.0 + local_108 * 0.0;
  local_178 = local_f8 * dVar7 + local_138 * dVar1 + local_118 * dVar8;
  local_180 = local_f8 * dVar4 + local_138 * dVar2 + local_118 * dVar3;
  *param_1 = dVar4 * local_108 + dVar2 * local_148 + dVar3 * local_128;
  param_1[4] = dVar9 * local_108 + dVar5 * local_148 + dVar6 * local_128;
  param_1[8] = dVar7 * local_108 + dVar1 * local_148 + dVar8 * local_128;
  param_1[1] = dStack_100 * dVar4 + dStack_140 * dVar2 + dStack_120 * dVar3;
  param_1[5] = dStack_100 * dVar9 + dStack_140 * dVar5 + dStack_120 * dVar6;
  param_1[9] = dStack_100 * dVar7 + dStack_140 * dVar1 + dVar8 * dStack_120;
  param_1[2] = local_180;
  param_1[6] = local_f8 * dVar9 + local_138 * dVar5 + local_118 * dVar6;
  param_1[10] = local_178;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = 1.0;
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  if ((local_c0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14093471c FUN_14093471c body=1078 status=ok
// SIG undefined FUN_14093471c(void)

double * FUN_14093471c(double *param_1,undefined8 param_2,double *param_3)

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
  undefined1 auStack_1a8 [40];
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 uStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  dVar1 = param_3[2];
  dVar2 = *param_3;
  dVar3 = param_3[1];
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0.0;
  uStack_f0 = 0;
  local_108 = 0.0;
  dStack_100 = 0.0;
  local_118 = 0.0;
  uStack_110 = 0;
  local_128 = 0.0;
  dStack_120 = 0.0;
  local_138 = 0.0;
  uStack_130 = 0;
  local_148 = 0.0;
  dStack_140 = 0.0;
  FUN_14076d742(param_2,&local_148);
  local_160 = local_118;
  dVar7 = dVar1 * local_f8 + local_138 * 0.0 + local_118 * 0.0;
  local_158 = dStack_120;
  dVar9 = dVar1 * dStack_100 + dStack_140 * 0.0 + dStack_120 * 0.0;
  local_150 = local_128;
  local_170 = local_148;
  local_168 = local_108;
  dVar4 = dVar1 * local_108 + local_148 * 0.0 + local_128 * 0.0;
  dVar8 = dVar3 * local_118 + local_138 * 0.0 + local_f8 * 0.0;
  dVar1 = dVar2 * local_138 + local_118 * 0.0 + local_f8 * 0.0;
  dVar6 = dVar3 * dStack_120 + dStack_140 * 0.0 + dStack_100 * 0.0;
  dVar5 = dVar2 * dStack_140 + dStack_120 * 0.0 + dStack_100 * 0.0;
  dVar3 = dVar3 * local_128 + local_148 * 0.0 + local_108 * 0.0;
  dVar2 = dVar2 * local_148 + local_128 * 0.0 + local_108 * 0.0;
  local_178 = local_f8 * dVar7 + local_138 * dVar1 + local_118 * dVar8;
  local_180 = local_f8 * dVar4 + local_138 * dVar2 + local_118 * dVar3;
  *param_1 = dVar4 * local_108 + dVar2 * local_148 + dVar3 * local_128;
  param_1[4] = dVar9 * local_108 + dVar5 * local_148 + dVar6 * local_128;
  param_1[8] = dVar7 * local_108 + dVar1 * local_148 + dVar8 * local_128;
  param_1[1] = dStack_100 * dVar4 + dStack_140 * dVar2 + dStack_120 * dVar3;
  param_1[5] = dStack_100 * dVar9 + dStack_140 * dVar5 + dStack_120 * dVar6;
  param_1[9] = dStack_100 * dVar7 + dStack_140 * dVar1 + dVar8 * dStack_120;
  param_1[2] = local_180;
  param_1[6] = local_f8 * dVar9 + local_138 * dVar5 + local_118 * dVar6;
  param_1[10] = local_178;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = 1.0;
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  if ((local_c0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140934b53 FUN_140934b53 body=1078 status=ok
// SIG undefined FUN_140934b53(void)

double * FUN_140934b53(double *param_1,undefined8 param_2,double *param_3)

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
  undefined1 auStack_1a8 [40];
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 uStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  dVar1 = param_3[2];
  dVar2 = *param_3;
  dVar3 = param_3[1];
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0.0;
  uStack_f0 = 0;
  local_108 = 0.0;
  dStack_100 = 0.0;
  local_118 = 0.0;
  uStack_110 = 0;
  local_128 = 0.0;
  dStack_120 = 0.0;
  local_138 = 0.0;
  uStack_130 = 0;
  local_148 = 0.0;
  dStack_140 = 0.0;
  FUN_14076d742(param_2,&local_148);
  local_160 = local_118;
  dVar7 = dVar1 * local_f8 + local_138 * 0.0 + local_118 * 0.0;
  local_158 = dStack_120;
  dVar9 = dVar1 * dStack_100 + dStack_140 * 0.0 + dStack_120 * 0.0;
  local_150 = local_128;
  local_170 = local_148;
  local_168 = local_108;
  dVar4 = dVar1 * local_108 + local_148 * 0.0 + local_128 * 0.0;
  dVar8 = dVar3 * local_118 + local_138 * 0.0 + local_f8 * 0.0;
  dVar1 = dVar2 * local_138 + local_118 * 0.0 + local_f8 * 0.0;
  dVar6 = dVar3 * dStack_120 + dStack_140 * 0.0 + dStack_100 * 0.0;
  dVar5 = dVar2 * dStack_140 + dStack_120 * 0.0 + dStack_100 * 0.0;
  dVar3 = dVar3 * local_128 + local_148 * 0.0 + local_108 * 0.0;
  dVar2 = dVar2 * local_148 + local_128 * 0.0 + local_108 * 0.0;
  local_178 = local_f8 * dVar7 + local_138 * dVar1 + local_118 * dVar8;
  local_180 = local_f8 * dVar4 + local_138 * dVar2 + local_118 * dVar3;
  *param_1 = dVar4 * local_108 + dVar2 * local_148 + dVar3 * local_128;
  param_1[4] = dVar9 * local_108 + dVar5 * local_148 + dVar6 * local_128;
  param_1[8] = dVar7 * local_108 + dVar1 * local_148 + dVar8 * local_128;
  param_1[1] = dStack_100 * dVar4 + dStack_140 * dVar2 + dStack_120 * dVar3;
  param_1[5] = dStack_100 * dVar9 + dStack_140 * dVar5 + dStack_120 * dVar6;
  param_1[9] = dStack_100 * dVar7 + dStack_140 * dVar1 + dVar8 * dStack_120;
  param_1[2] = local_180;
  param_1[6] = local_f8 * dVar9 + local_138 * dVar5 + local_118 * dVar6;
  param_1[10] = local_178;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = 1.0;
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  if ((local_c0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140934f8a FUN_140934f8a body=1078 status=ok
// SIG undefined FUN_140934f8a(void)

double * FUN_140934f8a(double *param_1,undefined8 param_2,double *param_3)

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
  undefined1 auStack_1a8 [40];
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 uStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  dVar1 = param_3[2];
  dVar2 = *param_3;
  dVar3 = param_3[1];
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0.0;
  uStack_f0 = 0;
  local_108 = 0.0;
  dStack_100 = 0.0;
  local_118 = 0.0;
  uStack_110 = 0;
  local_128 = 0.0;
  dStack_120 = 0.0;
  local_138 = 0.0;
  uStack_130 = 0;
  local_148 = 0.0;
  dStack_140 = 0.0;
  FUN_14076d742(param_2,&local_148);
  local_160 = local_118;
  dVar7 = dVar1 * local_f8 + local_138 * 0.0 + local_118 * 0.0;
  local_158 = dStack_120;
  dVar9 = dVar1 * dStack_100 + dStack_140 * 0.0 + dStack_120 * 0.0;
  local_150 = local_128;
  local_170 = local_148;
  local_168 = local_108;
  dVar4 = dVar1 * local_108 + local_148 * 0.0 + local_128 * 0.0;
  dVar8 = dVar3 * local_118 + local_138 * 0.0 + local_f8 * 0.0;
  dVar1 = dVar2 * local_138 + local_118 * 0.0 + local_f8 * 0.0;
  dVar6 = dVar3 * dStack_120 + dStack_140 * 0.0 + dStack_100 * 0.0;
  dVar5 = dVar2 * dStack_140 + dStack_120 * 0.0 + dStack_100 * 0.0;
  dVar3 = dVar3 * local_128 + local_148 * 0.0 + local_108 * 0.0;
  dVar2 = dVar2 * local_148 + local_128 * 0.0 + local_108 * 0.0;
  local_178 = local_f8 * dVar7 + local_138 * dVar1 + local_118 * dVar8;
  local_180 = local_f8 * dVar4 + local_138 * dVar2 + local_118 * dVar3;
  *param_1 = dVar4 * local_108 + dVar2 * local_148 + dVar3 * local_128;
  param_1[4] = dVar9 * local_108 + dVar5 * local_148 + dVar6 * local_128;
  param_1[8] = dVar7 * local_108 + dVar1 * local_148 + dVar8 * local_128;
  param_1[1] = dStack_100 * dVar4 + dStack_140 * dVar2 + dStack_120 * dVar3;
  param_1[5] = dStack_100 * dVar9 + dStack_140 * dVar5 + dStack_120 * dVar6;
  param_1[9] = dStack_100 * dVar7 + dStack_140 * dVar1 + dVar8 * dStack_120;
  param_1[2] = local_180;
  param_1[6] = local_f8 * dVar9 + local_138 * dVar5 + local_118 * dVar6;
  param_1[10] = local_178;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = 1.0;
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  if ((local_c0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409353c1 FUN_1409353c1 body=1078 status=ok
// SIG undefined FUN_1409353c1(void)

double * FUN_1409353c1(double *param_1,undefined8 param_2,double *param_3)

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
  undefined1 auStack_1a8 [40];
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 uStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  dVar1 = param_3[2];
  dVar2 = *param_3;
  dVar3 = param_3[1];
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0.0;
  uStack_f0 = 0;
  local_108 = 0.0;
  dStack_100 = 0.0;
  local_118 = 0.0;
  uStack_110 = 0;
  local_128 = 0.0;
  dStack_120 = 0.0;
  local_138 = 0.0;
  uStack_130 = 0;
  local_148 = 0.0;
  dStack_140 = 0.0;
  FUN_14076d742(param_2,&local_148);
  local_160 = local_118;
  dVar7 = dVar1 * local_f8 + local_138 * 0.0 + local_118 * 0.0;
  local_158 = dStack_120;
  dVar9 = dVar1 * dStack_100 + dStack_140 * 0.0 + dStack_120 * 0.0;
  local_150 = local_128;
  local_170 = local_148;
  local_168 = local_108;
  dVar4 = dVar1 * local_108 + local_148 * 0.0 + local_128 * 0.0;
  dVar8 = dVar3 * local_118 + local_138 * 0.0 + local_f8 * 0.0;
  dVar1 = dVar2 * local_138 + local_118 * 0.0 + local_f8 * 0.0;
  dVar6 = dVar3 * dStack_120 + dStack_140 * 0.0 + dStack_100 * 0.0;
  dVar5 = dVar2 * dStack_140 + dStack_120 * 0.0 + dStack_100 * 0.0;
  dVar3 = dVar3 * local_128 + local_148 * 0.0 + local_108 * 0.0;
  dVar2 = dVar2 * local_148 + local_128 * 0.0 + local_108 * 0.0;
  local_178 = local_f8 * dVar7 + local_138 * dVar1 + local_118 * dVar8;
  local_180 = local_f8 * dVar4 + local_138 * dVar2 + local_118 * dVar3;
  *param_1 = dVar4 * local_108 + dVar2 * local_148 + dVar3 * local_128;
  param_1[4] = dVar9 * local_108 + dVar5 * local_148 + dVar6 * local_128;
  param_1[8] = dVar7 * local_108 + dVar1 * local_148 + dVar8 * local_128;
  param_1[1] = dStack_100 * dVar4 + dStack_140 * dVar2 + dStack_120 * dVar3;
  param_1[5] = dStack_100 * dVar9 + dStack_140 * dVar5 + dStack_120 * dVar6;
  param_1[9] = dStack_100 * dVar7 + dStack_140 * dVar1 + dVar8 * dStack_120;
  param_1[2] = local_180;
  param_1[6] = local_f8 * dVar9 + local_138 * dVar5 + local_118 * dVar6;
  param_1[10] = local_178;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = 1.0;
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  if ((local_c0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409357f8 FUN_1409357f8 body=1078 status=ok
// SIG undefined FUN_1409357f8(void)

double * FUN_1409357f8(double *param_1,undefined8 param_2,double *param_3)

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
  undefined1 auStack_1a8 [40];
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 uStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  dVar1 = param_3[2];
  dVar2 = *param_3;
  dVar3 = param_3[1];
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0.0;
  uStack_f0 = 0;
  local_108 = 0.0;
  dStack_100 = 0.0;
  local_118 = 0.0;
  uStack_110 = 0;
  local_128 = 0.0;
  dStack_120 = 0.0;
  local_138 = 0.0;
  uStack_130 = 0;
  local_148 = 0.0;
  dStack_140 = 0.0;
  FUN_14076d742(param_2,&local_148);
  local_160 = local_118;
  dVar7 = dVar1 * local_f8 + local_138 * 0.0 + local_118 * 0.0;
  local_158 = dStack_120;
  dVar9 = dVar1 * dStack_100 + dStack_140 * 0.0 + dStack_120 * 0.0;
  local_150 = local_128;
  local_170 = local_148;
  local_168 = local_108;
  dVar4 = dVar1 * local_108 + local_148 * 0.0 + local_128 * 0.0;
  dVar8 = dVar3 * local_118 + local_138 * 0.0 + local_f8 * 0.0;
  dVar1 = dVar2 * local_138 + local_118 * 0.0 + local_f8 * 0.0;
  dVar6 = dVar3 * dStack_120 + dStack_140 * 0.0 + dStack_100 * 0.0;
  dVar5 = dVar2 * dStack_140 + dStack_120 * 0.0 + dStack_100 * 0.0;
  dVar3 = dVar3 * local_128 + local_148 * 0.0 + local_108 * 0.0;
  dVar2 = dVar2 * local_148 + local_128 * 0.0 + local_108 * 0.0;
  local_178 = local_f8 * dVar7 + local_138 * dVar1 + local_118 * dVar8;
  local_180 = local_f8 * dVar4 + local_138 * dVar2 + local_118 * dVar3;
  *param_1 = dVar4 * local_108 + dVar2 * local_148 + dVar3 * local_128;
  param_1[4] = dVar9 * local_108 + dVar5 * local_148 + dVar6 * local_128;
  param_1[8] = dVar7 * local_108 + dVar1 * local_148 + dVar8 * local_128;
  param_1[1] = dStack_100 * dVar4 + dStack_140 * dVar2 + dStack_120 * dVar3;
  param_1[5] = dStack_100 * dVar9 + dStack_140 * dVar5 + dStack_120 * dVar6;
  param_1[9] = dStack_100 * dVar7 + dStack_140 * dVar1 + dVar8 * dStack_120;
  param_1[2] = local_180;
  param_1[6] = local_f8 * dVar9 + local_138 * dVar5 + local_118 * dVar6;
  param_1[10] = local_178;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = 1.0;
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  if ((local_c0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140935c2f FUN_140935c2f body=1078 status=ok
// SIG undefined FUN_140935c2f(void)

double * FUN_140935c2f(double *param_1,undefined8 param_2,double *param_3)

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
  undefined1 auStack_1a8 [40];
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 uStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  dVar1 = param_3[2];
  dVar2 = *param_3;
  dVar3 = param_3[1];
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0.0;
  uStack_f0 = 0;
  local_108 = 0.0;
  dStack_100 = 0.0;
  local_118 = 0.0;
  uStack_110 = 0;
  local_128 = 0.0;
  dStack_120 = 0.0;
  local_138 = 0.0;
  uStack_130 = 0;
  local_148 = 0.0;
  dStack_140 = 0.0;
  FUN_14076d742(param_2,&local_148);
  local_160 = local_118;
  dVar7 = dVar1 * local_f8 + local_138 * 0.0 + local_118 * 0.0;
  local_158 = dStack_120;
  dVar9 = dVar1 * dStack_100 + dStack_140 * 0.0 + dStack_120 * 0.0;
  local_150 = local_128;
  local_170 = local_148;
  local_168 = local_108;
  dVar4 = dVar1 * local_108 + local_148 * 0.0 + local_128 * 0.0;
  dVar8 = dVar3 * local_118 + local_138 * 0.0 + local_f8 * 0.0;
  dVar1 = dVar2 * local_138 + local_118 * 0.0 + local_f8 * 0.0;
  dVar6 = dVar3 * dStack_120 + dStack_140 * 0.0 + dStack_100 * 0.0;
  dVar5 = dVar2 * dStack_140 + dStack_120 * 0.0 + dStack_100 * 0.0;
  dVar3 = dVar3 * local_128 + local_148 * 0.0 + local_108 * 0.0;
  dVar2 = dVar2 * local_148 + local_128 * 0.0 + local_108 * 0.0;
  local_178 = local_f8 * dVar7 + local_138 * dVar1 + local_118 * dVar8;
  local_180 = local_f8 * dVar4 + local_138 * dVar2 + local_118 * dVar3;
  *param_1 = dVar4 * local_108 + dVar2 * local_148 + dVar3 * local_128;
  param_1[4] = dVar9 * local_108 + dVar5 * local_148 + dVar6 * local_128;
  param_1[8] = dVar7 * local_108 + dVar1 * local_148 + dVar8 * local_128;
  param_1[1] = dStack_100 * dVar4 + dStack_140 * dVar2 + dStack_120 * dVar3;
  param_1[5] = dStack_100 * dVar9 + dStack_140 * dVar5 + dStack_120 * dVar6;
  param_1[9] = dStack_100 * dVar7 + dStack_140 * dVar1 + dVar8 * dStack_120;
  param_1[2] = local_180;
  param_1[6] = local_f8 * dVar9 + local_138 * dVar5 + local_118 * dVar6;
  param_1[10] = local_178;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = 1.0;
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  if ((local_c0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140936066 FUN_140936066 body=31 status=ok
// SIG undefined FUN_140936066(void)

void FUN_140936066(longlong *param_1)

{
  FUN_140936086();
                    /* WARNING: Could not recover jumptable at 0x00014093607e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x98))(param_1);
  return;
}



// FUNCTION 140936086 FUN_140936086 body=568 status=ok
// SIG undefined FUN_140936086(void)

void FUN_140936086(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if (*(longlong *)(param_1 + 0x40) == 0) {
    return;
  }
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a1c9e40;
  plVar5[2] = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  plVar4 = *(longlong **)(param_1 + 0x118);
  if (plVar5 == plVar4) {
    if (plVar5 == (longlong *)0x0) goto LAB_1409360fb;
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1409360fb;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
    plVar4 = plVar5;
  }
  else {
    *(longlong **)(param_1 + 0x118) = plVar5;
    if (plVar4 == (longlong *)0x0) goto LAB_1409360fb;
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_1409360fb;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_1409360fb:
  FUN_1401211f6(param_1 + 0x80,*(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x48),1);
  lVar7 = *(longlong *)(param_1 + 0x80);
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x28);
  uVar2 = *(uint *)(*(longlong *)(param_1 + 0x40) + 0x30);
  plVar4 = (longlong *)(param_1 + 0x70);
  iVar3 = *(int *)(param_1 + 0x78);
  if (iVar3 < (int)uVar2) {
    *(uint *)(param_1 + 0x78) = uVar2;
    if ((uint)(*(int *)(param_1 + 0x7c) - iVar3) < uVar2 - iVar3) {
      FUN_1409362c2(plVar4);
    }
    memset((void *)((longlong)iVar3 * 8 + *plVar4),0,(longlong)(int)(uVar2 - iVar3) << 3);
  }
  else {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((ulonglong)uVar2);
    }
    if ((int)uVar2 < iVar3) {
      *(uint *)(param_1 + 0x78) = uVar2;
      FUN_1470e8870(plVar4);
    }
  }
  if (0 < (int)uVar2) {
    uVar6 = 0;
    do {
      plVar4 = *(longlong **)(lVar8 + uVar6 * 8);
      if ((plVar4 != (longlong *)0x0) &&
         (plVar5 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4), plVar5 != (longlong *)0x0)) {
        uVar9 = -(longlong)*(int *)((longlong)plVar5 + 0x5c) &
                (*(int *)((longlong)plVar5 + 0x5c) + lVar7) - 1U;
        (**(code **)(*plVar5 + 0x2e8))(plVar5,uVar9,1);
        *(longlong *)(uVar9 + 0x40) = param_1;
        *(longlong **)(uVar9 + 0x48) = plVar4;
        *(ulonglong *)(*(longlong *)(param_1 + 0x70) + uVar6 * 8) = uVar9;
        lVar7 = (longlong)
                (int)(-*(int *)((longlong)plVar5 + 0x5c) &
                     ((int)plVar5[0xb] + *(int *)((longlong)plVar5 + 0x5c)) - 1U) + uVar9;
      }
      uVar6 = uVar6 + 1;
    } while (uVar2 != uVar6);
  }
  iVar3 = *(int *)(param_1 + 0x78);
  if ((longlong)iVar3 != 0) {
    lVar7 = *(longlong *)(param_1 + 0x70);
    lVar8 = 0;
    do {
      plVar4 = *(longlong **)(lVar7 + lVar8);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar3 * 8 != lVar8);
    iVar3 = *(int *)(param_1 + 0x78);
    if ((longlong)iVar3 != 0) {
      lVar7 = *(longlong *)(param_1 + 0x70);
      lVar8 = 0;
      do {
        plVar4 = *(longlong **)(lVar7 + lVar8);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x18))();
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)iVar3 * 8 != lVar8);
    }
  }
  return;
}



// FUNCTION 1409362c2 FUN_1409362c2 body=353 status=ok
// SIG undefined FUN_1409362c2(void)

void FUN_1409362c2(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140936347;
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
LAB_140936347:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140936424 FUN_140936424 body=546 status=ok
// SIG undefined FUN_140936424(void)

void FUN_140936424(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)(param_1 + 0x149) != '\0') goto LAB_140936584;
  if (((((*(int *)(param_1 + 0x4c) != 0) && (uVar1 = *(uint *)(param_1 + 0x48), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar4 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar4 != (longlong *)0x0 && ((int)plVar4[2] == *(int *)(param_1 + 0x4c))))) &&
     (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (lVar2 = *plVar4, lVar2 != 0)))) {
    if (DAT_14cac9ca8 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1478c0a72;
      local_50 = &LAB_1417b2375;
      local_58 = L"Engine";
      local_60 = 0x1000000000;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    lVar2 = *(longlong *)(lVar2 + 0x10);
    if (((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8)
         == DAT_14cac9ca8 + 0x30)) &&
       ((0 < *(int *)(param_1 + 0x78) &&
        (plVar4 = (longlong *)**(longlong **)(param_1 + 0x70), plVar4 != (longlong *)0x0)))) {
      lVar2 = (**(code **)(*plVar4 + 8))(plVar4);
      lVar3 = FUN_1400de7f6();
      if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        if (*(int *)(param_1 + 0x4c) == 0) {
LAB_1409365a6:
          uVar5 = 0;
        }
        else {
          uVar1 = *(uint *)(param_1 + 0x48);
          uVar5 = 0;
          if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
            puVar6 = (undefined8 *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if ((puVar6 == (undefined8 *)0x0) ||
               ((*(int *)(puVar6 + 2) != *(int *)(param_1 + 0x4c) ||
                ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_1409365a6;
            uVar5 = *puVar6;
          }
        }
        (**(code **)(*plVar4 + 0x78))(plVar4,uVar5,0,0);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x149) = 1;
LAB_140936584:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140936648 FUN_140936648 body=4791 status=ok
// SIG undefined FUN_140936648(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140936648(undefined **param_1,double param_2,longlong *param_3,longlong param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong **pplVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 uVar9;
  uint *puVar10;
  double *pdVar11;
  uint uVar12;
  undefined **ppuVar13;
  longlong *plVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  bool bVar19;
  ulonglong uVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  double dVar48;
  double dVar49;
  undefined1 auVar50 [16];
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  undefined1 auStack_3a8 [32];
  undefined4 *local_388;
  undefined8 uStack_380;
  longlong *local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  longlong **local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  undefined8 uStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  undefined1 local_308 [16];
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  undefined1 local_2d8 [16];
  longlong *local_2c8;
  double dStack_2c0;
  longlong *local_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  longlong local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
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
  longlong **local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  code *local_1f8;
  undefined ***pppuStack_1f0;
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
  undefined **local_178;
  undefined8 local_170;
  longlong **local_168;
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
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  local_2a0 = param_4;
  cVar6 = (**(code **)(*param_1 + 0x28))();
  if (cVar6 == '\0') goto LAB_140936d32;
  plVar18 = (longlong *)param_1[8];
  cVar6 = (**(code **)(*plVar18 + 0x60))(plVar18,param_1);
  if (cVar6 == '\0') goto LAB_140936d32;
  plVar14 = (longlong *)param_1[9];
  FUN_14029eb6e(param_1,&local_2a8,param_4);
  local_2b0 = (longlong *)0x0;
  if (param_3 == (longlong *)0x0) {
    plVar8 = *(longlong **)((longlong)param_2 + 0x1c8);
    if (plVar8 == (longlong *)0x0) {
      param_3 = (longlong *)0x0;
      goto LAB_140936738;
    }
    if (plVar8[3] != CONCAT44(uStack_2a4,local_2a8)) {
      param_3 = plVar8;
      if ((int)plVar14[3] == 0) {
        param_3 = (longlong *)0x0;
      }
      goto LAB_140936738;
    }
    param_3 = (longlong *)0x0;
LAB_140936764:
    local_2b0 = plVar8;
    if (0 < *(int *)(param_1 + 0x26)) {
      lVar16 = 0;
      lVar17 = 0;
      local_378 = plVar18;
      do {
        ppuVar13 = (undefined **)param_1[0x25];
        if ((undefined **)param_1[0x25] == (undefined **)0x0) {
          ppuVar13 = param_1 + 0xd;
        }
        cVar6 = FUN_1403e9e5e((longlong)ppuVar13 + lVar16,local_2b0);
        if (cVar6 != '\0') {
          uStack_2a4 = *(undefined4 *)(param_1 + 0x26);
          local_388 = &local_2a8;
          local_2b0 = (longlong *)FUN_143d57278(param_1,param_2,param_3,&local_2a0);
          break;
        }
        lVar17 = lVar17 + 1;
        lVar16 = lVar16 + 0x18;
      } while (lVar17 < *(int *)(param_1 + 0x26));
      plVar18 = local_378;
      if (local_2b0 == (longlong *)0x0) goto LAB_140936874;
    }
    (**(code **)(*plVar18 + 0xa8))(plVar18,param_1,local_2b0);
    if ((*(byte *)((longlong)param_2 + 0x60) & 2) == 0) {
LAB_14093685f:
      plVar8 = local_2b0;
      (**(code **)(*plVar14 + 0xa0))(plVar14,local_2b0);
    }
    else {
      cVar6 = FUN_1401b0eb0(param_2);
      plVar8 = local_2b0;
      if (cVar6 == '\0') {
        (**(code **)(*local_2b0 + 0x410))(local_2b0);
      }
      else {
        if (((*(byte *)((longlong)param_2 + 0x60) & 2) == 0) ||
           ((*(uint *)(local_2b0 + 1) >> 0x12 & 1) == 0)) goto LAB_14093685f;
        *(undefined1 *)(local_2b0 + 0x21) = 1;
        if (param_2 != 0.0) {
          uVar9 = FUN_140566488();
          FUN_144718840(param_2,uVar9);
        }
        (**(code **)(*plVar8 + 0x408))(plVar8,&local_178);
        (**(code **)(*plVar14 + 0xa0))(plVar14,plVar8);
        if (((((local_170._4_4_ != 0) && (-1 < (int)(uint)local_170)) &&
             ((int)(uint)local_170 < DAT_14c9647dc)) &&
            ((lVar16 = (ulonglong)(((uint)local_170 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_170 >> 0x10) * 8),
             lVar16 != 0 && (*(int *)(lVar16 + 0x10) == local_170._4_4_)))) &&
           (local_168 != (longlong **)0x0 && (*(uint *)(lVar16 + 8) & 0x10200000) == 0)) {
          (*(code *)(*local_168)[6])(local_168,plVar8,1);
        }
        *(undefined1 *)(plVar8 + 0x21) = 0;
        local_178 = &PTR_FUN_149eacb10;
        if (local_158._0_1_ == '\x01') {
          if ((((local_170._4_4_ != 0) && (-1 < (int)(uint)local_170)) &&
              (((int)(uint)local_170 < DAT_14c9647dc &&
               (((plVar14 = (longlong *)
                            ((ulonglong)(((uint)local_170 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_170 >> 0x10) * 8))
                 , plVar14 != (longlong *)0x0 && ((int)plVar14[2] == local_170._4_4_)) &&
                ((*(uint *)(plVar14 + 1) & 0x10200000) == 0)))))) &&
             (plVar14 = (longlong *)*plVar14, plVar14 != (longlong *)0x0)) {
            if (local_168 != (longlong **)0x0) {
              if (*(code **)(*plVar14 + 0x2f0) == FUN_1401f99c8) {
                FUN_1401f99c8(plVar14,local_168,1);
              }
              else {
                (**(code **)(*plVar14 + 0x2f0))(plVar14,local_168,1);
              }
            }
            local_170 = 0.0;
          }
          if (local_168 != (longlong **)0x0) {
            FUN_1400020a8();
            local_168 = (longlong **)0x0;
          }
        }
      }
    }
  }
  else {
LAB_140936738:
    local_388 = &local_2a8;
    plVar8 = (longlong *)FUN_143d57278(param_1,param_2,param_3,&local_2a0);
    local_2b0 = plVar8;
    if (plVar8 != (longlong *)0x0) goto LAB_140936764;
LAB_140936874:
    local_388 = (undefined4 *)0x0;
    uStack_380 = 0;
    plVar8 = (longlong *)
             (**(code **)(*plVar14 + 0xa8))(plVar14,param_2,CONCAT44(uStack_2a4,local_2a8),0);
    local_2b0 = plVar8;
    if (plVar8 == (longlong *)0x0) goto LAB_140936d32;
    (**(code **)(*plVar18 + 0xa8))(plVar18,param_1,plVar8);
    if ((((char)plVar14[7] == '\0') && ((int)plVar14[3] == 0)) && ((char)plVar18[0x3e] == '\x01')) {
      dVar1 = (double)plVar8[0x39];
      dVar29 = (double)plVar8[0x3a];
      dVar52 = (double)plVar8[0x3b];
      pplVar5 = (longlong **)plVar8[0x33];
      dVar55 = (double)plVar8[0x34];
      dVar28 = (double)plVar8[0x35];
      auVar33 = *(undefined1 (*) [16])(plVar8 + 0x36);
      dVar30 = auVar33._0_8_;
      dVar21 = auVar33._8_8_;
      dVar49 = (double)plVar8[0x38];
      pdVar11 = (double *)plVar8[0x46];
      if (pdVar11 == (double *)0x0) {
        pdVar11 = (double *)FUN_14001cc68(0x40,0x10);
        dVar44 = DAT_14c8463d8;
        *pdVar11 = DAT_14c8463d0;
        pdVar11[1] = dVar44;
        dVar44 = DAT_14c8463e8;
        pdVar11[2] = DAT_14c8463e0;
        pdVar11[3] = dVar44;
        dVar44 = DAT_14c846500;
        pdVar11[4] = DAT_14c8464f8;
        pdVar11[5] = dVar44;
        pdVar11[6] = DAT_14c846508;
        plVar8[0x46] = (longlong)pdVar11;
      }
      auVar27 = _DAT_1499387d0;
      local_368 = dVar28;
      local_358 = (longlong **)dVar52;
      if (((pdVar11[4] != dVar30) || (NAN(pdVar11[4]) || NAN(dVar30))) ||
         ((pdVar11[5] != dVar21 ||
          (((NAN(pdVar11[5]) || NAN(dVar21) || (pdVar11[6] != dVar49)) ||
           (NAN(pdVar11[6]) || NAN(dVar49))))))) {
        auVar37._8_8_ = 0;
        auVar37._0_8_ = dVar49;
        dVar52 = (double)DAT_1499387d0;
        dVar28 = DAT_1499387d0._8_8_;
        auVar33 = divpd(auVar33,_DAT_1499387d0);
        auVar26 = divpd(auVar37,_DAT_1499387d0);
        auVar33 = roundpd(auVar33,auVar33,3);
        auVar26 = roundpd(auVar26,auVar26,3);
        auVar45._0_8_ = dVar30 - auVar33._0_8_ * dVar52;
        auVar45._8_8_ = dVar21 - auVar33._8_8_ * dVar28;
        auVar38._0_8_ = dVar49 - auVar26._0_8_ * dVar52;
        auVar38._8_8_ = 0.0 - auVar26._8_8_ * dVar28;
        auVar42._0_8_ = auVar45._0_8_ + dVar52;
        auVar42._8_8_ = auVar45._8_8_ + dVar28;
        auVar31._0_8_ = auVar38._0_8_ + dVar52;
        auVar31._8_8_ = auVar38._8_8_ + dVar28;
        auVar26._8_8_ = -(ulonglong)(0.0 <= auVar45._8_8_);
        auVar26._0_8_ = -(ulonglong)(0.0 <= auVar45._0_8_);
        auVar33 = blendvpd(auVar42,auVar45,auVar26);
        auVar43._8_8_ = -(ulonglong)(0.0 <= auVar38._8_8_);
        auVar43._0_8_ = -(ulonglong)(0.0 <= auVar38._0_8_);
        auVar26 = blendvpd(auVar31,auVar38,auVar43);
        auVar39._0_8_ = auVar33._0_8_ + -360.0;
        auVar39._8_8_ = auVar33._8_8_ + -360.0;
        auVar22._8_8_ = -(ulonglong)(180.0 < auVar33._8_8_);
        auVar22._0_8_ = -(ulonglong)(180.0 < auVar33._0_8_);
        auVar43 = blendvpd(auVar33,auVar39,auVar22);
        auVar23._8_8_ = -(ulonglong)(180.0 < auVar26._8_8_);
        auVar23._0_8_ = -(ulonglong)(180.0 < auVar26._0_8_);
        auVar33._8_8_ = auVar26._8_8_ + 0.0;
        auVar33._0_8_ = auVar26._0_8_ + -360.0;
        auVar33 = blendvpd(auVar26,auVar33,auVar23);
        *(undefined1 (*) [16])(pdVar11 + 4) = auVar43;
        dVar49 = auVar33._0_8_;
        pdVar11[6] = dVar49;
        auVar46._8_8_ = 0;
        auVar46._0_8_ = dVar49;
        auVar33 = divpd(auVar43,auVar27);
        auVar27 = divpd(auVar46,auVar27);
        auVar33 = roundpd(auVar33,auVar33,3);
        auVar27 = roundpd(auVar27,auVar27,3);
        dVar30 = (auVar43._0_8_ - auVar33._0_8_ * dVar52) * 0.008726646259971648;
        dVar44 = (auVar43._8_8_ - auVar33._8_8_ * dVar28) * 0.008726646259971648;
        dVar52 = (dVar49 - auVar27._0_8_ * dVar52) * 0.008726646259971648;
        dVar49 = (0.0 - auVar27._8_8_ * dVar28) * 0.008726646259971648;
        local_348 = sin(dVar30);
        dStack_370 = 0.0;
        local_378 = (longlong *)dVar29;
        dVar29 = sin(dVar44);
        dStack_350 = 0.0;
        dVar28 = sin(dVar52);
        dStack_360 = 0.0;
        sin(dVar49);
        dVar21 = cos(dVar30);
        dVar44 = cos(dVar44);
        dVar41 = cos(dVar52);
        cos(dVar49);
        dVar49 = -(dVar44 * local_348 * dVar28) + dVar29 * dVar21 * dVar41;
        dVar30 = dVar29 * local_348 * dVar28 + dVar44 * dVar21 * dVar41;
        dVar52 = local_348 * dVar29 * dVar41 - dVar21 * dVar44 * dVar28;
        dVar28 = -(local_348 * dVar44 * dVar41) - dVar21 * dVar29 * dVar28;
        *pdVar11 = dVar52;
        pdVar11[1] = dVar28;
        pdVar11[2] = dVar49;
        pdVar11[3] = dVar30;
      }
      else {
        dVar52 = *pdVar11;
        dVar28 = pdVar11[1];
        dVar49 = pdVar11[2];
        dVar30 = pdVar11[3];
        local_378 = (longlong *)dVar29;
      }
      auVar27._8_8_ = 0;
      auVar27._0_8_ = local_358;
      pdVar11 = (double *)&DAT_14c846480;
      if ((char)plVar18[0x3e] != '\0') {
        pdVar11 = (double *)(plVar18 + 0x32);
      }
      dVar41 = *pdVar11;
      dVar48 = pdVar11[1];
      dVar2 = pdVar11[2];
      dVar3 = pdVar11[3];
      local_348 = pdVar11[4];
      dStack_340 = pdVar11[5];
      dVar4 = pdVar11[6];
      dStack_360 = pdVar11[7];
      auVar33 = *(undefined1 (*) [16])(pdVar11 + 8);
      dVar29 = auVar33._0_8_;
      dVar44 = auVar33._8_8_;
      auVar26 = *(undefined1 (*) [16])(pdVar11 + 10);
      dVar21 = auVar26._0_8_;
      dStack_370 = auVar26._8_8_;
      local_2e8 = 0.0;
      dStack_2e0 = 0.0;
      local_2f8 = 0.0;
      dStack_2f0 = 0.0;
      auVar32._8_8_ = local_378;
      auVar32._0_8_ = dVar1;
      auVar33 = minpd(auVar32,auVar33);
      auVar27 = minpd(auVar27,auVar26);
      auVar34._8_8_ = -(ulonglong)(auVar33._8_8_ < 0.0);
      auVar34._0_8_ = -(ulonglong)(auVar33._0_8_ < 0.0);
      iVar7 = movmskpd((int)(plVar18 + 0x32),auVar34);
      auVar50._8_8_ = -(ulonglong)(auVar27._8_8_ < 0.0);
      auVar50._0_8_ = -(ulonglong)(auVar27._0_8_ < 0.0);
      uVar12 = movmskpd((int)pdVar11,auVar50);
      dStack_350 = dVar55;
      if ((uVar12 & 0x3fffffff) == 0 && iVar7 == 0) {
        local_318 = dVar28 * dVar2 * -1.0 + dVar49 * dVar48 + dVar30 * dVar41 * 1.0 + dVar52 * dVar3
        ;
        dStack_310 = dVar52 * dVar2 * 1.0 +
                     dVar30 * dVar48 + dVar49 * dVar41 * -1.0 + dVar28 * dVar3;
        local_308._8_8_ =
             dVar49 * dVar2 * -1.0 + ((dVar41 * dVar52 * -1.0 + dVar30 * dVar3) - dVar48 * dVar28);
        local_308._0_8_ =
             dVar30 * dVar2 * 1.0 + ((dVar41 * dVar28 * 1.0 + dVar49 * dVar3) - dVar48 * dVar52);
        dVar53 = (double)pplVar5 * dVar29;
        dVar55 = dVar55 * dVar44;
        local_368 = local_368 * dVar21;
        dVar52 = dStack_370 * 0.0;
        dVar30 = dVar55 * dVar41 - dVar48 * dVar53;
        dVar36 = local_368 * dVar48 - dVar2 * dVar55;
        dVar28 = dVar53 * dVar2 - dVar41 * local_368;
        dVar49 = dVar52 * dVar3 - dVar3 * dVar52;
        dVar36 = dVar36 + dVar36;
        dVar28 = dVar28 + dVar28;
        dVar30 = dVar30 + dVar30;
        dVar49 = dVar49 + dVar49;
        local_2f8 = local_348 + (dVar30 * dVar48 - dVar2 * dVar28) + dVar3 * dVar36 + dVar53;
        dStack_2f0 = dStack_340 + (dVar36 * dVar2 - dVar30 * dVar41) + dVar3 * dVar28 + dVar55;
        local_2e8 = dVar4 + (dVar28 * dVar41 - dVar48 * dVar36) + dVar3 * dVar30 + local_368;
        dStack_2e0 = dStack_360 + (dVar49 * dVar3 - dVar49 * dVar3) + dVar3 * dVar49 + dVar52;
        dVar1 = dVar1 * dVar29;
        dVar44 = (double)local_378 * dVar44;
        local_378 = (longlong *)((double)local_358 * dVar21);
        dStack_370 = dStack_370 * 0.0;
        local_368 = dVar4;
        local_358 = pplVar5;
      }
      else {
        dVar54 = dVar48 + dVar48;
        dVar47 = dVar2 + dVar2;
        uStack_330 = 0;
        dVar36 = dVar41 * (dVar41 + dVar41);
        dVar51 = (dVar41 + dVar41) * dVar3;
        dStack_370 = dStack_370 * 0.0;
        local_1a8 = (1.0 - (dVar36 + dVar48 * dVar54)) * dVar21;
        dVar53 = (dVar47 * dVar48 - dVar51) * dVar21;
        local_328 = dVar1 * dVar29;
        dStack_320 = (double)local_378 * dVar44;
        local_1f8 = (code *)((1.0 - (dVar2 * dVar47 + dVar48 * dVar54)) * dVar29);
        dVar2 = (1.0 - (dVar2 * dVar47 + dVar36)) * dVar44;
        pppuStack_1f0 = (undefined ***)((dVar54 * dVar41 + dVar47 * dVar3) * dVar29);
        local_1c8 = (dVar47 * dVar48 + dVar51) * dVar44;
        local_1e8 = (dVar41 * dVar47 - dVar54 * dVar3) * dVar29;
        uStack_1e0 = 0;
        local_1d8._8_4_ = SUB84(dVar2,0);
        local_1d8._0_8_ = (dVar54 * dVar41 - dVar47 * dVar3) * dVar44;
        local_1d8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
        uStack_1c0 = 0;
        local_1b8._8_4_ = SUB84(dVar53,0);
        local_1b8._0_8_ = (dVar54 * dVar3 + dVar41 * dVar47) * dVar21;
        local_1b8._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
        uStack_1a0 = 0;
        uStack_180 = 0x3ff0000000000000;
        dVar41 = dVar28 + dVar28;
        dVar29 = dVar49 + dVar49;
        dVar48 = dVar52 * (dVar52 + dVar52);
        local_228 = (1.0 - (dVar48 + dVar28 * dVar41)) * (double)local_358;
        dVar44 = (dVar52 + dVar52) * dVar30;
        local_238 = (dVar41 * dVar30 + dVar52 * dVar29) * (double)local_358;
        local_258 = (dVar41 * dVar52 - dVar29 * dVar30) * (double)local_378;
        dStack_230 = (dVar29 * dVar28 - dVar44) * (double)local_358;
        local_278 = (1.0 - (dVar49 * dVar29 + dVar28 * dVar41)) * dVar1;
        dStack_250 = (1.0 - (dVar49 * dVar29 + dVar48)) * (double)local_378;
        dStack_270 = (dVar41 * dVar52 + dVar29 * dVar30) * dVar1;
        local_248 = (dVar29 * dVar28 + dVar44) * (double)local_378;
        local_268 = (dVar52 * dVar29 - dVar41 * dVar30) * dVar1;
        uStack_260 = 0;
        uStack_240 = 0;
        uStack_220 = 0;
        uStack_200 = 0x3ff0000000000000;
        local_378 = (longlong *)((double)local_358 * dVar21);
        local_338 = local_368;
        local_368 = dVar4;
        local_358 = pplVar5;
        local_218 = pplVar5;
        dStack_210 = dVar55;
        local_208 = local_338;
        local_198 = local_348;
        dStack_190 = dStack_340;
        local_188 = dVar4;
        FUN_1447fea8d(&local_178);
        dVar44 = dStack_320;
        dVar1 = local_328;
        local_358 = local_168;
        dVar52 = (double)local_168 * (double)local_168 +
                 (double)local_178 * (double)local_178 + local_170 * local_170;
        local_368 = local_148;
        dVar29 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
        dVar49 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
        uVar20 = -(ulonglong)(0.0 <= dVar52 + -9.99999993922529e-09);
        dVar52 = (double)(~uVar20 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar52)) & uVar20);
        uVar20 = -(ulonglong)(0.0 <= dVar29 + -9.99999993922529e-09);
        dVar28 = (double)(~uVar20 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar29)) & uVar20);
        uVar20 = -(ulonglong)(0.0 <= dVar49 + -9.99999993922529e-09);
        dVar49 = (double)(~uVar20 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar49)) & uVar20);
        auVar24._8_8_ = -(ulonglong)(0.0 <= dStack_320);
        auVar24._0_8_ = -(ulonglong)(0.0 <= local_328);
        auVar33 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar24);
        dVar29 = (double)(~-(ulonglong)(0.0 <= (double)local_378) & 0xbff0000000000000 |
                         -(ulonglong)(0.0 <= (double)local_378) & 0x3ff0000000000000);
        dVar30 = auVar33._0_8_;
        local_178 = (undefined **)((double)local_178 * dVar52 * dVar30);
        local_170 = local_170 * dVar52 * dVar30;
        local_168 = (longlong **)(dVar52 * (double)local_168 * dVar30);
        dVar52 = auVar33._8_8_;
        local_148 = dVar28 * local_148 * dVar52;
        local_150 = local_150 * dVar28 * dVar52;
        local_158 = dVar52 * local_158 * dVar28;
        local_128 = dVar49 * local_128 * dVar29;
        local_130 = local_130 * dVar49 * dVar29;
        local_138 = dVar29 * local_138 * dVar49;
        FUN_14481fd10(&local_298,&local_178);
        dVar29 = local_288 * local_288 + local_298 * local_298;
        dVar52 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
        auVar35._0_8_ = dVar29 + dVar52;
        auVar35._8_8_ = dVar29 + dVar52;
        auVar25._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_);
        auVar25._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_);
        auVar33 = sqrtpd(auVar35,auVar35);
        auVar33 = divpd(_DAT_149934d80,auVar33);
        auVar40._0_8_ = auVar33._0_8_ * local_288;
        auVar40._8_8_ = auVar33._8_8_ * dStack_280;
        local_318 = (double)((ulonglong)(local_298 * auVar33._0_8_) &
                            -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_));
        dStack_310 = (double)((ulonglong)(dStack_290 * auVar33._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_));
        local_308 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar40,auVar25);
        local_2f8 = local_118;
        dStack_2f0 = dStack_110;
        local_2e8 = local_108;
        dStack_2e0 = 0.0;
        plVar8 = local_2b0;
      }
      local_2d8._8_4_ = SUB84(dVar44,0);
      local_2d8._0_8_ = dVar1;
      local_2d8._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
      local_2c8 = local_378;
      dStack_2c0 = dStack_370;
      local_388 = (undefined4 *)CONCAT71(local_388._1_7_,1);
      FUN_140613f88(plVar8,&local_318,0,0);
      plVar8 = local_2b0;
    }
  }
  (**(code **)(*plVar18 + 0x68))(plVar18,param_1,plVar8);
  if (param_3 != (longlong *)0x0) {
    if (*(byte *)((longlong)plVar8 + 0x1fb) < *(byte *)((longlong)param_3 + 0x1fb)) {
      (**(code **)(*plVar8 + 0x588))(plVar8);
    }
    if (((longlong *)plVar8[0x24] != param_3) || (plVar8[0x25] != local_2a0)) {
      if (((*(byte *)((longlong)plVar8 + 0x9c) & 1) == 0) &&
         ((*(uint *)(plVar8 + 1) >> 0x12 & 1) == 0)) {
        FUN_140486fc4(plVar8,param_3,local_2a0);
      }
      else {
        local_178 = (undefined **)CONCAT44(local_178._4_4_,0x10000);
        (**(code **)(*plVar8 + 0x490))(plVar8,param_3,&local_178,local_2a0);
      }
    }
  }
  puVar10 = (uint *)FUN_1401714f6(param_1 + 0xd);
  if (local_2b0 == (longlong *)0x0) {
    *puVar10 = 0;
    uVar12 = 0;
  }
  else {
    uVar12 = *(uint *)((longlong)local_2b0 + 0xc);
    *puVar10 = uVar12;
    if ((int)uVar12 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    uVar12 = *(uint *)(lVar16 + 0x10);
    if (*(uint *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      uVar15 = DAT_14c964868 + 1;
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar19) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar15);
      }
      LOCK();
      uVar12 = *(uint *)(lVar16 + 0x10);
      bVar19 = uVar12 == 0;
      if (bVar19) {
        *(uint *)(lVar16 + 0x10) = uVar15;
        uVar12 = 0;
      }
      UNLOCK();
      if (bVar19) {
        uVar12 = uVar15;
      }
    }
  }
  puVar10[1] = uVar12;
  if (param_3 == (longlong *)0x0) {
    puVar10[2] = 0;
    uVar12 = 0;
  }
  else {
    uVar12 = *(uint *)((longlong)param_3 + 0xc);
    puVar10[2] = uVar12;
    if ((int)uVar12 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    uVar12 = *(uint *)(lVar16 + 0x10);
    if (*(uint *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      uVar15 = DAT_14c964868 + 1;
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar19) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar15);
      }
      LOCK();
      uVar12 = *(uint *)(lVar16 + 0x10);
      bVar19 = uVar12 == 0;
      if (bVar19) {
        *(uint *)(lVar16 + 0x10) = uVar15;
        uVar12 = 0;
      }
      UNLOCK();
      if (bVar19) {
        uVar12 = uVar15;
      }
    }
  }
  puVar10[3] = uVar12;
  *(longlong *)(puVar10 + 4) = local_2a0;
  FUN_141741d20(param_1);
  FUN_141414c4c(param_1);
  plVar18 = local_2b0;
  if ((((*(byte *)((longlong)local_2b0 + 0x9d) & 0x20) != 0) &&
      ((*(byte *)((longlong)local_2b0 + 0x9c) & 1) == 0)) &&
     ((local_2b0[0x15] != 0 && (lVar16 = FUN_1447210f0(), lVar16 != 0)))) {
    FUN_140b506a4(plVar18);
  }
  pppuStack_1f0 = &local_178;
  local_168 = &local_2b0;
  local_1f8 = FUN_143d5e440;
  local_178 = param_1;
  local_170 = param_2;
  FUN_14056916e(param_1);
LAB_140936d32:
  if ((local_f0 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140937900 FUN_140937900 body=91 status=ok
// SIG undefined FUN_140937900(void)

undefined8 FUN_140937900(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_140566488();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140566488();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014093794f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*plVar3 + 0x20))(plVar3);
        return uVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 14093795c FUN_14093795c body=38 status=ok
// SIG undefined FUN_14093795c(void)

undefined8 FUN_14093795c(undefined8 param_1,int param_2)

{
  FUN_140937982();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140937982 FUN_140937982 body=106 status=ok
// SIG undefined FUN_140937982(void)

void FUN_140937982(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a1623b0;
  puVar2 = (undefined8 *)param_1[0x16];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_1[0xe] != 0) {
    plVar3 = param_1 + 0x12;
    if ((longlong *)param_1[0x10] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x10];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1409379ec FUN_1409379ec body=514 status=ok
// SIG undefined FUN_1409379ec(void)

void FUN_1409379ec(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cacc340) && (FUN_144b3d300(&DAT_14cacc340), DAT_14cacc340 == -1)) {
    DAT_14cacc33c = -1;
    _Init_thread_footer(&DAT_14cacc340);
  }
  if (DAT_14cacc33c == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cacc350) && (FUN_144b3d300(), DAT_14cacc350 == -1)) {
      FUN_1446ddc76(&DAT_14cacc348,"StateFullyBlendedOutFunction",1);
      _Init_thread_footer();
    }
    if (DAT_14cacbf50 == 0) {
      uVar4 = FUN_140002dac();
      DAT_14cacbf50 = FUN_140002ddd(FUN_1463a5c91,uVar4,L"AnimNode_StateResult");
    }
    plVar6 = *(longlong **)(param_1 + 8);
    if (plVar6 == (longlong *)0x0) {
      DAT_14cacc33c = -1;
    }
    else {
      if (*plVar6 == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = (longlong *)plVar6[1];
      }
      DAT_14cacc33c = (**(code **)(*plVar6 + 0x130))(plVar6,DAT_14cacbf50,DAT_14cacc348);
    }
  }
  plVar6 = *(longlong **)(param_1 + 8);
  lVar5 = *plVar6;
  uVar1 = *(uint *)(plVar6[2] + (longlong)DAT_14cacc33c * 4);
  uVar7 = uVar1 & 0x7fffffff;
  if ((int)uVar1 < 0) {
    if (lVar5 == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = (longlong *)plVar6[1];
    }
    lVar2 = plVar6[4];
    if (*(code **)(*plVar3 + 0x20) == (code *)&LAB_14488c8ee) {
      plVar3 = plVar3 + 0x12;
    }
    else {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3);
      lVar5 = *plVar6;
    }
    if (lVar5 == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = (longlong *)plVar6[1];
    }
                    /* WARNING: Could not recover jumptable at 0x000140937ace. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x108))
              (plVar6,uVar7,
               param_1 - *(int *)(*(longlong *)(*plVar3 + (longlong)(int)lVar2 * 8) + 0x44));
    return;
  }
  if (lVar5 == 0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    plVar6 = (longlong *)plVar6[1];
  }
                    /* WARNING: Could not recover jumptable at 0x000140937a6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x100))(plVar6,uVar7);
  return;
}



// FUNCTION 140937bee FUN_140937bee body=507 status=ok
// SIG undefined FUN_140937bee(void)

ulonglong FUN_140937bee(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar6 = FUN_1447262c2(param_3);
  if (lVar6 != 0) {
    if (DAT_14cac9ca8 == 0) {
      local_50 = &local_38;
      local_38 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_1478c0a72;
      local_60 = &LAB_1417b2375;
      local_68 = L"Engine";
      local_70 = 0x1000000000;
      local_78 = 0x10000004;
      local_80 = 8;
      local_88 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if (((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) &&
       (lVar7 = FUN_1447210f0(lVar6), lVar7 != 0)) {
      FUN_140937dea(&local_38,lVar7);
      if (local_30 == (longlong *)0x0) {
LAB_140937dac:
        bVar10 = false;
      }
      else {
        iVar4 = (int)local_30[1];
        do {
          if (iVar4 == 0) {
            plVar8 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar3 = (int)local_30[1];
          bVar10 = iVar4 == iVar3;
          if (bVar10) {
            *(int *)(local_30 + 1) = iVar4 + 1;
            iVar3 = iVar4;
          }
          iVar4 = iVar3;
          UNLOCK();
          plVar8 = local_30;
        } while (!bVar10);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_30 + 0x10))();
        }
        if (plVar8 == (longlong *)0x0) goto LAB_140937dac;
        bVar10 = local_38 != (code *)0x0;
        if (bVar10) {
          uVar5 = (**(code **)(*(longlong *)local_38 + 0x50 +
                              (ulonglong)*(byte *)(param_1 + 0x10) * 8))(local_38,lVar6);
          param_1 = (ulonglong)uVar5;
        }
        LOCK();
        plVar2 = plVar8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
      uVar9 = CONCAT71((int7)(param_1 >> 8),(byte)param_1 & bVar10);
      goto LAB_140937ce0;
    }
  }
  uVar9 = 0;
LAB_140937ce0:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 140937dea FUN_140937dea body=310 status=ok
// SIG undefined FUN_140937dea(void)

longlong * FUN_140937dea(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = DAT_14cb71828;
  if (param_2 != 0) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_38,uVar4,param_2);
    plVar1 = local_30;
    if (local_38 != 0) {
      if (local_30 == (longlong *)0x0) {
        *param_1 = local_38;
      }
      else {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
        *param_1 = local_38;
        if ((longlong *)param_1[1] != local_30) {
          LOCK();
          *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
          UNLOCK();
          plVar3 = (longlong *)param_1[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          param_1[1] = (longlong)plVar1;
        }
        LOCK();
        plVar3 = plVar1 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar1)(plVar1);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
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
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140937f22 FUN_140937f22 body=12 status=ok
// SIG undefined FUN_140937f22(void)

void FUN_140937f22(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140937f2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 140937f2e FUN_140937f2e body=59 status=ok
// SIG undefined FUN_140937f2e(void)

undefined8 * FUN_140937f2e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9c5370;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140937f6a FUN_140937f6a body=111 status=ok
// SIG undefined FUN_140937f6a(void)

void FUN_140937f6a(longlong *param_1)

{
  if ((char)param_1[0xe] == '\x01') {
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  FUN_140937fd9(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_140298e51(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_140938008(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140937fd9 FUN_140937fd9 body=47 status=ok
// SIG undefined FUN_140937fd9(void)

void FUN_140937fd9(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140938008 FUN_140938008 body=77 status=ok
// SIG undefined FUN_140938008(void)

void FUN_140938008(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140938055(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_1400020a8();
    }
    FUN_140938090(param_1 + 0x18);
    FUN_140d4afde(param_1);
    param_1 = param_1 + 0x48;
  }
  return;
}



// FUNCTION 140938055 FUN_140938055 body=58 status=ok
// SIG undefined FUN_140938055(void)

void FUN_140938055(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    do {
      FUN_1409f518e(param_1);
      FUN_1409f518e(param_1 + -0x18);
      param_1 = param_1 + 0x40;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140938090 FUN_140938090 body=63 status=ok
// SIG undefined FUN_140938090(void)

void FUN_140938090(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1409380d0();
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x0001409380cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1409380d0 FUN_1409380d0 body=99 status=ok
// SIG undefined FUN_1409380d0(void)

void FUN_1409380d0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*param_1 != 0) {
    FUN_144b3f230();
    *param_1 = 0;
  }
  param_1[1] = 0;
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    param_1[2] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014093812f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140938134 FUN_140938134 body=196 status=ok
// SIG undefined FUN_140938134(void)

int FUN_140938134(uint param_1,undefined8 *param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cc26548 != DAT_14cc26574) {
    puVar2 = &DAT_14cc26578;
    if (DAT_14cc26580 != (undefined *)0x0) {
      puVar2 = DAT_14cc26580;
    }
    iVar3 = *(int *)(puVar2 + (ulonglong)(DAT_14cc26588 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        local_40 = *param_2;
        local_38 = *(undefined8 *)(DAT_14cc26540 + (longlong)iVar3 * 0x20);
        cVar1 = FUN_1409381fa(&local_38,&local_40);
        if (cVar1 != '\0') goto LAB_1409381d4;
        iVar3 = *(int *)(DAT_14cc26540 + 0x18 + (longlong)iVar3 * 0x20);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_1409381d4:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409381fa FUN_1409381fa body=164 status=ok
// SIG undefined FUN_1409381fa(void)

bool FUN_1409381fa(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  bVar5 = true;
  if ((uVar1 != uVar3) || (uVar2 != param_2[1])) {
    if ((uVar2 == 0) ||
       (((((int)uVar1 < 0 || (DAT_14c9647dc <= (int)uVar1)) ||
         (lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 == 0)) ||
        ((*(uint *)(lVar4 + 0x10) != uVar2 || ((*(uint *)(lVar4 + 8) & 0x10200000) != 0)))))) {
      if ((param_2[1] != 0) &&
         (((-1 < (int)uVar3 && ((int)uVar3 < DAT_14c9647dc)) &&
          ((lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar4 != 0 &&
           (*(uint *)(lVar4 + 0x10) == param_2[1])))))) {
        bVar5 = (*(uint *)(lVar4 + 8) & 0x10200000) != 0;
      }
    }
    else {
      bVar5 = false;
    }
  }
  return bVar5;
}



// FUNCTION 1409382a6 FUN_1409382a6 body=473 status=ok
// SIG undefined FUN_1409382a6(void)

undefined8 * FUN_1409382a6(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_118 [40];
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined **local_d8;
  undefined **local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined7 uStack_5f;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b413640;
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3ff0000000000000;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  plVar2 = (longlong *)FUN_14093852e();
  lVar3 = plVar2[0x22];
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar3 = plVar2[0x22];
    if (lVar3 != 0) goto LAB_14093833c;
  }
  else {
LAB_14093833c:
    if (*(longlong *)(lVar3 + 0x38) != 0) {
      FUN_1401f3db8(param_1 + 0xb,lVar3 + 0x38);
      goto LAB_1409383fc;
    }
  }
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_4f = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_5f = 0;
  uStack_58 = 0;
  uStack_57 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_d8 = &PTR_FUN_14b1a6608;
  FUN_140c1345a();
  local_c8 = &DAT_14cb8dda8;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = &PTR_FUN_14b4151c0;
  FUN_1447a97f4(&local_b0,&DAT_14c9485f0);
  uStack_88 = 0;
  local_80 = CONCAT44(local_80._4_4_,0x6000);
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_5f = 0;
  uStack_58 = 0;
  uStack_57 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = uStack_38 & 0xffffffffffff0000;
  FUN_140938614(local_f0,&local_d8);
  FUN_14029d0b6(param_1 + 0xb,local_f0);
  if (local_e8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_e8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  FUN_140938480(&local_d8);
LAB_1409383fc:
  if ((local_30 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140938480 FUN_140938480 body=173 status=ok
// SIG undefined FUN_140938480(void)

void FUN_140938480(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1a6608;
  FUN_140298c7d(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[1] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(int *)((longlong)param_1 + 0x24) != 0) {
    FUN_140115c12(param_1 + 3,0);
  }
  param_1[2] = 0;
  if (param_1[3] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14093852e FUN_14093852e body=228 status=ok
// SIG undefined FUN_14093852e(void)

longlong FUN_14093852e(void)

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
  if (DAT_14cb603a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140eca530;
    local_38 = &LAB_1486c4db9;
    local_40 = FUN_1464ec0ae;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxLevelStreamingSettings",&DAT_14cb603a0,&DAT_1486c4db8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb603a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140938614 FUN_140938614 body=707 status=ok
// SIG undefined FUN_140938614(void)

longlong * FUN_140938614(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  bool bVar9;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar5 = (longlong *)FUN_14001cc68(0xb8,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b414b40;
  plVar5[2] = (longlong)&PTR_FUN_14b1a6608;
  plVar5[3] = (longlong)&DAT_14a171d50;
  plVar5[5] = 0;
  plVar5[6] = 0;
  plVar5[4] = *(longlong *)(param_2 + 0x10);
  FUN_1406022fe(plVar5 + 5,param_2 + 0x18);
  plVar5[3] = (longlong)&PTR_FUN_14b4151c0;
  plVar5[7] = 0;
  plVar5[8] = 0;
  *(undefined4 *)(plVar5 + 9) = 0;
  plVar5[10] = 0;
  plVar5[0xb] = 0;
  FUN_1404e49fa(plVar5 + 7,param_2 + 0x28);
  plVar5[0xc] = *(longlong *)(param_2 + 0x50);
  *(undefined4 *)(plVar5 + 0xd) = *(undefined4 *)(param_2 + 0x58);
  plVar5[0xe] = 0;
  plVar5[0xf] = *(longlong *)(param_2 + 0x68);
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined4 *)(plVar5 + 0x10) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)((longlong)plVar5 + 0x84) = *(undefined4 *)(param_2 + 0x74);
  *(undefined8 *)(param_2 + 0x70) = 0;
  plVar5[0x11] = *(longlong *)(param_2 + 0x78);
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined4 *)(plVar5 + 0x12) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)((longlong)plVar5 + 0x94) = *(undefined4 *)(param_2 + 0x84);
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined1 *)(plVar5 + 0x13) = *(undefined1 *)(param_2 + 0x88);
  plVar5[0x14] = *(longlong *)(param_2 + 0x90);
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined4 *)(plVar5 + 0x15) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)((longlong)plVar5 + 0xac) = *(undefined4 *)(param_2 + 0x9c);
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined2 *)(plVar5 + 0x16) = *(undefined2 *)(param_2 + 0xa0);
  if (plVar5 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar7 = (longlong *)param_1[1];
    if (plVar7 == (longlong *)0x0) goto LAB_14093879f;
    param_1[1] = 0;
LAB_14093883b:
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
    if (plVar5 == (longlong *)0x0) goto LAB_14093879f;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *param_1 = (longlong)(plVar5 + 2);
    plVar7 = (longlong *)param_1[1];
    if (plVar5 == plVar7) {
      LOCK();
      plVar7 = plVar5 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
    else {
      param_1[1] = (longlong)plVar5;
      if (plVar7 != (longlong *)0x0) goto LAB_14093883b;
    }
  }
  LOCK();
  plVar7 = plVar5 + 1;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)*plVar7 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
LAB_14093879f:
  lVar6 = FUN_1409388d8();
  if (lVar6 == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
    iVar4 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar6 + 0xc);
    *(uint *)(param_1 + 2) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar4 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar4 = *(int *)(lVar6 + 0x10);
      bVar9 = iVar4 == 0;
      if (bVar9) {
        *(int *)(lVar6 + 0x10) = iVar8;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar4 = iVar8;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x14) = iVar4;
  return param_1;
}



// FUNCTION 1409388d8 FUN_1409388d8 body=57 status=ok
// SIG undefined FUN_1409388d8(void)

void FUN_1409388d8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60378 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60378 = FUN_140002ddd(FUN_1464ebfed,uVar1,L"GbxMapAutoSaveData");
  }
  return;
}



// FUNCTION 140938912 FUN_140938912 body=37 status=ok
// SIG undefined FUN_140938912(void)

void FUN_140938912(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x4a8);
  FUN_140938938(param_2);
  return;
}



// FUNCTION 140938938 FUN_140938938 body=1201 status=ok
// SIG undefined FUN_140938938(void)

undefined8 * FUN_140938938(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b60cf20;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14494321d();
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
  }
  plVar1 = DAT_14c844840;
  param_1[3] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14494321d();
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
  }
  plVar1 = DAT_14c844840;
  param_1[5] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 7) = 0x101;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x19) = 1;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x26] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x116) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined2 *)(param_1 + 0x27) = 1;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 1;
  *(undefined1 *)((longlong)param_1 + 0x144) = 1;
  param_1[0x33] = 0;
  param_1[0x34] = 0x200000000;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x152) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15a) = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0x3002;
  param_1[0x39] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1cf) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1d3) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  FUN_1405c5fa2();
  param_1[0x3f] = &DAT_14cb769e8;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x3e] = &PTR_FUN_14b0394b0;
  FUN_1405c5fa2();
  param_1[0x43] = &DAT_14cb769e8;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x42] = &PTR_FUN_14b0394b0;
  param_1[0x53] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x259) = 0;
  *(undefined8 *)((longlong)param_1 + 0x261) = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x1000;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0x1001;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2cd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d5) = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  uVar2 = FUN_140938dea();
  param_1[0x5f] = uVar2;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  *(undefined8 *)((longlong)param_1 + 0x313) = 0;
  *(undefined8 *)((longlong)param_1 + 0x31b) = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  *(undefined1 *)(param_1 + 0x67) = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3cc) = 0;
  *(undefined2 *)(param_1 + 0x7b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3dc) = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  *(undefined2 *)(param_1 + 0x92) = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x494) = 0;
  *(undefined8 *)((longlong)param_1 + 0x49c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x42c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x434) = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  return param_1;
}



// FUNCTION 140938dea FUN_140938dea body=188 status=ok
// SIG undefined FUN_140938dea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140938dea(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb86cb0) {
    FUN_144b3d300(&DAT_14cb86cb0);
    if (DAT_14cb86cb0 == -1) {
      _DAT_14cb86c60 = 0;
      _DAT_14cb86c68 = 0;
      _DAT_14cb86c40 = 0;
      uRam000000014cb86c48 = 0;
      _DAT_14cb86c6c = 0xffffffff00000080;
      _DAT_14cb86c74 = 0;
      DAT_14cb86c80 = 0;
      _DAT_14cb86c88 = 0;
      DAT_14cb86c90 = 0;
      uRam000000014cb86c98 = 0;
      _DAT_14cb86ca0 = 0;
      InitializeSRWLock((PSRWLOCK)&DAT_14cb86ca8);
      atexit(FUN_143df6878);
      _Init_thread_footer(&DAT_14cb86cb0);
    }
  }
  return &DAT_14cb86c40;
}



// FUNCTION 140938eb2 FUN_140938eb2 body=258 status=ok
// SIG undefined FUN_140938eb2(void)

longlong * FUN_140938eb2(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_14480568a();
  *param_1 = (longlong)&PTR_FUN_14a8883d0;
  param_1[5] = (longlong)&PTR_LAB_14a888e20;
  param_1[6] = (longlong)&PTR_LAB_14a888e60;
  param_1[0x55] = (longlong)&PTR_LAB_14a888eb0;
  param_1[0x56] = (longlong)&PTR_LAB_14a888f30;
  param_1[0x57] = (longlong)&PTR_LAB_14a888f40;
  *(undefined8 *)((longlong)param_1 + 0x67c) = 0xffffffff00000000;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  *(undefined1 *)(param_1 + 0xc6) = 0;
  *(undefined8 *)((longlong)param_1 + 0x634) = 0;
  *(undefined8 *)((longlong)param_1 + 0x63c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x641) = 0;
  *(undefined8 *)((longlong)param_1 + 0x64c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x654) = 0;
  *(undefined8 *)((longlong)param_1 + 0x659) = 0;
  *(undefined8 *)((longlong)param_1 + 0x664) = 0;
  *(undefined8 *)((longlong)param_1 + 0x66c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x671) = 0;
  param_1[0xd1] = 0x3f8000000000000a;
  *(undefined4 *)(param_1 + 0xd2) = 0;
  *(undefined2 *)((longlong)param_1 + 0x694) = 1;
  param_1[0xd6] = DAT_14c8462d0;
  uVar3 = DAT_14c8462c8._4_4_;
  uVar2 = (undefined4)DAT_14c8462c8;
  uVar1 = DAT_14c8462c0._4_4_;
  *(undefined4 *)(param_1 + 0xd4) = (undefined4)DAT_14c8462c0;
  *(undefined4 *)((longlong)param_1 + 0x6a4) = uVar1;
  *(undefined4 *)(param_1 + 0xd5) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x6ac) = uVar3;
  FUN_140938fb4(param_1);
  (**(code **)(*param_1 + 0xa38))(param_1);
  return param_1;
}



// FUNCTION 140938fb4 FUN_140938fb4 body=981 status=ok
// SIG undefined FUN_140938fb4(void)

void FUN_140938fb4(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  
  lVar1 = param_1 + 0x620;
  *(undefined4 *)(param_1 + 0x628) = 0;
  if (*(int *)(param_1 + 0x62c) < 10) {
    FUN_14093938a(lVar1,10);
  }
  lVar12 = param_1 + 0x638;
  *(undefined4 *)(param_1 + 0x640) = 0;
  if (*(int *)(param_1 + 0x644) < 10) {
    FUN_1409394d2(lVar12,10);
  }
  plVar2 = (longlong *)(param_1 + 0x650);
  *(undefined4 *)(param_1 + 0x658) = 0;
  if (*(int *)(param_1 + 0x65c) < 10) {
    FUN_14093938a(plVar2,10);
  }
  iVar5 = *(int *)(param_1 + 0x628);
  *(uint *)(param_1 + 0x628) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x62c) < iVar5 + 1U) {
    FUN_140924c58(lVar1,iVar5);
  }
  lVar11 = *(longlong *)(param_1 + 0x620);
  lVar10 = (longlong)iVar5 * 0x58;
  *(undefined4 *)(lVar11 + lVar10) = 0;
  puVar3 = (undefined8 *)(lVar11 + 8 + lVar10);
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined8 *)(lVar11 + 0x18 + lVar10) = 0;
  uVar6 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  puVar3 = (undefined8 *)(lVar11 + 0x20 + lVar10);
  *puVar3 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  puVar3[1] = uVar6;
  *(undefined8 *)(lVar11 + 0x30 + lVar10) = DAT_14c8464f0;
  uVar9 = DAT_14c8464e8._4_4_;
  uVar8 = (undefined4)DAT_14c8464e8;
  uVar7 = DAT_14c8464e0._4_4_;
  puVar4 = (undefined4 *)(lVar11 + 0x38 + lVar10);
  *puVar4 = (undefined4)DAT_14c8464e0;
  puVar4[1] = uVar7;
  puVar4[2] = uVar8;
  puVar4[3] = uVar9;
  *(undefined8 *)(lVar11 + 0x48 + lVar10) = DAT_14c8464f0;
  *(undefined1 *)(lVar11 + 0x50 + lVar10) = 1;
  iVar5 = *(int *)(param_1 + 0x640);
  *(uint *)(param_1 + 0x640) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x644) < iVar5 + 1U) {
    FUN_147501e1a(lVar12,iVar5);
  }
  lVar11 = *(longlong *)(param_1 + 0x638);
  lVar10 = (longlong)iVar5 * 0x80;
  *(undefined4 *)(lVar11 + lVar10) = 0;
  uVar6 = CONCAT44(DAT_14c8463e8._4_4_,(undefined4)DAT_14c8463e8);
  puVar3 = (undefined8 *)(lVar11 + 0x20 + lVar10);
  *puVar3 = CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0);
  puVar3[1] = uVar6;
  uVar6 = DAT_14c8463d8;
  puVar3 = (undefined8 *)(lVar11 + 0x10 + lVar10);
  *puVar3 = DAT_14c8463d0;
  puVar3[1] = uVar6;
  uVar6 = DAT_14c8463d8;
  puVar3 = (undefined8 *)(lVar11 + 0x30 + lVar10);
  *puVar3 = DAT_14c8463d0;
  puVar3[1] = uVar6;
  uVar6 = CONCAT44(DAT_14c8463e8._4_4_,(undefined4)DAT_14c8463e8);
  puVar3 = (undefined8 *)(lVar11 + 0x40 + lVar10);
  *puVar3 = CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0);
  puVar3[1] = uVar6;
  uVar6 = DAT_14c8463d8;
  puVar3 = (undefined8 *)(lVar11 + 0x50 + lVar10);
  *puVar3 = DAT_14c8463d0;
  puVar3[1] = uVar6;
  uVar9 = DAT_14c8463e8._4_4_;
  uVar8 = (undefined4)DAT_14c8463e8;
  uVar7 = DAT_14c8463e0._4_4_;
  puVar4 = (undefined4 *)(lVar11 + 0x60 + lVar10);
  *puVar4 = (undefined4)DAT_14c8463e0;
  puVar4[1] = uVar7;
  puVar4[2] = uVar8;
  puVar4[3] = uVar9;
  *(undefined1 *)(lVar11 + 0x70 + lVar10) = 1;
  iVar5 = *(int *)(param_1 + 0x658);
  *(uint *)(param_1 + 0x658) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x65c) < iVar5 + 1U) {
    FUN_140924c58(plVar2,iVar5);
  }
  lVar11 = *(longlong *)(param_1 + 0x650);
  lVar10 = (longlong)iVar5 * 0x58;
  *(undefined4 *)(lVar11 + lVar10) = 0;
  *(undefined8 *)(lVar11 + 8 + lVar10) = 0x3ff0000000000000;
  *(undefined8 *)(lVar11 + 0x10 + lVar10) = 0x3ff0000000000000;
  *(undefined8 *)(lVar11 + 0x18 + lVar10) = 0x3ff0000000000000;
  uVar6 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  puVar3 = (undefined8 *)(lVar11 + 0x20 + lVar10);
  *puVar3 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  puVar3[1] = uVar6;
  *(undefined8 *)(lVar11 + 0x30 + lVar10) = DAT_14c8464f0;
  uVar9 = DAT_14c8464e8._4_4_;
  uVar8 = (undefined4)DAT_14c8464e8;
  uVar7 = DAT_14c8464e0._4_4_;
  puVar4 = (undefined4 *)(lVar11 + 0x38 + lVar10);
  *puVar4 = (undefined4)DAT_14c8464e0;
  puVar4[1] = uVar7;
  puVar4[2] = uVar8;
  puVar4[3] = uVar9;
  *(undefined8 *)(lVar11 + 0x48 + lVar10) = DAT_14c8464f0;
  *(undefined1 *)(lVar11 + 0x50 + lVar10) = 1;
  iVar5 = *(int *)(param_1 + 0x628);
  *(uint *)(param_1 + 0x628) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x62c) < iVar5 + 1U) {
    FUN_140924c58(lVar1,iVar5);
  }
  lVar1 = *(longlong *)(param_1 + 0x620);
  lVar11 = (longlong)iVar5 * 0x58;
  *(undefined4 *)(lVar1 + lVar11) = 0x3f800000;
  *(undefined8 *)(lVar1 + 8 + lVar11) = 0x4059000000000000;
  puVar3 = (undefined8 *)(lVar1 + 0x10 + lVar11);
  *puVar3 = 0;
  puVar3[1] = 0;
  uVar6 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  puVar3 = (undefined8 *)(lVar1 + 0x20 + lVar11);
  *puVar3 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  puVar3[1] = uVar6;
  *(undefined8 *)(lVar1 + 0x30 + lVar11) = DAT_14c8464f0;
  uVar9 = DAT_14c8464e8._4_4_;
  uVar8 = (undefined4)DAT_14c8464e8;
  uVar7 = DAT_14c8464e0._4_4_;
  puVar4 = (undefined4 *)(lVar1 + 0x38 + lVar11);
  *puVar4 = (undefined4)DAT_14c8464e0;
  puVar4[1] = uVar7;
  puVar4[2] = uVar8;
  puVar4[3] = uVar9;
  *(undefined8 *)(lVar1 + 0x48 + lVar11) = DAT_14c8464f0;
  *(undefined1 *)(lVar1 + 0x50 + lVar11) = 1;
  iVar5 = *(int *)(param_1 + 0x640);
  *(uint *)(param_1 + 0x640) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x644) < iVar5 + 1U) {
    FUN_147501e1a(lVar12,iVar5);
  }
  lVar1 = *(longlong *)(param_1 + 0x638);
  lVar12 = (longlong)iVar5 * 0x80;
  *(undefined4 *)(lVar1 + lVar12) = 0x3f800000;
  uVar6 = CONCAT44(DAT_14c8463e8._4_4_,(undefined4)DAT_14c8463e8);
  puVar3 = (undefined8 *)(lVar1 + 0x20 + lVar12);
  *puVar3 = CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0);
  puVar3[1] = uVar6;
  uVar6 = DAT_14c8463d8;
  puVar3 = (undefined8 *)(lVar1 + 0x10 + lVar12);
  *puVar3 = DAT_14c8463d0;
  puVar3[1] = uVar6;
  uVar6 = DAT_14c8463d8;
  puVar3 = (undefined8 *)(lVar1 + 0x30 + lVar12);
  *puVar3 = DAT_14c8463d0;
  puVar3[1] = uVar6;
  uVar6 = CONCAT44(DAT_14c8463e8._4_4_,(undefined4)DAT_14c8463e8);
  puVar3 = (undefined8 *)(lVar1 + 0x40 + lVar12);
  *puVar3 = CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0);
  puVar3[1] = uVar6;
  uVar6 = DAT_14c8463d8;
  puVar3 = (undefined8 *)(lVar1 + 0x50 + lVar12);
  *puVar3 = DAT_14c8463d0;
  puVar3[1] = uVar6;
  uVar9 = DAT_14c8463e8._4_4_;
  uVar8 = (undefined4)DAT_14c8463e8;
  uVar7 = DAT_14c8463e0._4_4_;
  puVar4 = (undefined4 *)(lVar1 + 0x60 + lVar12);
  *puVar4 = (undefined4)DAT_14c8463e0;
  puVar4[1] = uVar7;
  puVar4[2] = uVar8;
  puVar4[3] = uVar9;
  *(undefined1 *)(lVar1 + 0x70 + lVar12) = 1;
  iVar5 = *(int *)(param_1 + 0x658);
  *(uint *)(param_1 + 0x658) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x65c) < iVar5 + 1U) {
    FUN_140924c58(plVar2,iVar5);
  }
  lVar1 = *plVar2;
  lVar12 = (longlong)iVar5 * 0x58;
  *(undefined4 *)(lVar1 + lVar12) = 0x3f800000;
  *(undefined8 *)(lVar1 + 8 + lVar12) = 0x3ff0000000000000;
  *(undefined8 *)(lVar1 + 0x10 + lVar12) = 0x3ff0000000000000;
  *(undefined8 *)(lVar1 + 0x18 + lVar12) = 0x3ff0000000000000;
  uVar6 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  puVar3 = (undefined8 *)(lVar1 + 0x20 + lVar12);
  *puVar3 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  puVar3[1] = uVar6;
  *(undefined8 *)(lVar1 + 0x30 + lVar12) = DAT_14c8464f0;
  uVar6 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  puVar3 = (undefined8 *)(lVar1 + 0x38 + lVar12);
  *puVar3 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  puVar3[1] = uVar6;
  *(undefined8 *)(lVar1 + 0x48 + lVar12) = DAT_14c8464f0;
  *(undefined1 *)(lVar1 + 0x50 + lVar12) = 1;
  return;
}



// FUNCTION 14093938a FUN_14093938a body=328 status=ok
// SIG undefined FUN_14093938a(void)

void FUN_14093938a(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x58;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1409393f4;
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
LAB_1409393f4:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x58)) {
      uVar5 = uVar3 / 0x58 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x58,8);
  }
  return;
}



// FUNCTION 1409394d2 FUN_1409394d2 body=214 status=ok
// SIG undefined FUN_1409394d2(void)

void FUN_1409394d2(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x80;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x1ffffffffffffffU) * 8]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,0x10);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 7)) {
      uVar2 = uVar1 >> 7 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x80,0x10);
  }
  return;
}



// FUNCTION 1409395a8 FUN_1409395a8 body=1721 status=ok
// SIG undefined FUN_1409395a8(void)

void FUN_1409395a8(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined *puVar3;
  uint *puVar4;
  longlong *plVar5;
  uint uVar6;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined4 local_60;
  undefined8 *local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = *(undefined8 *)(param_1 + 0x280);
  uStack_40 = *(undefined8 *)(param_1 + 0x288);
  local_58 = &local_48;
  local_38 = *(undefined8 *)(param_1 + 0x290);
  local_60 = *(undefined4 *)(param_1 + 0x698);
  local_68 = *(undefined1 *)(param_1 + 0x696);
  FUN_140939c80(param_1 + 0x620,*(undefined1 *)(param_1 + 0x695),*(undefined1 *)(param_1 + 0x690),
                *(undefined4 *)(param_1 + 0x688));
  uVar1 = *(ulonglong *)(param_1 + 0x38);
  if (uVar1 < 0xffffffff00000000) {
    plVar5 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar5 = (longlong *)0x0;
    }
    (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,0x11);
  }
  else {
    uVar6 = (uint)uVar1;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
      puVar3 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar3 = DAT_14c998080;
      }
      if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
        lVar2 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
        puVar4 = *(uint **)(lVar2 + 0x18);
        if (*(uint **)(lVar2 + 0x18) == (uint *)0x0) {
          puVar4 = (uint *)(lVar2 + 8);
        }
        *puVar4 = *puVar4 | 0x20000;
        *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
      }
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x38);
  if (uVar1 < 0xffffffff00000000) {
    plVar5 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar5 = (longlong *)0x0;
    }
    (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,0x16);
  }
  else {
    uVar6 = (uint)uVar1;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
      puVar3 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar3 = DAT_14c998080;
      }
      if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
        lVar2 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
        puVar4 = *(uint **)(lVar2 + 0x18);
        if (*(uint **)(lVar2 + 0x18) == (uint *)0x0) {
          puVar4 = (uint *)(lVar2 + 8);
        }
        *puVar4 = *puVar4 | 0x400000;
        *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
      }
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x38);
  if (uVar1 < 0xffffffff00000000) {
    plVar5 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar5 = (longlong *)0x0;
    }
    (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,0x13);
  }
  else {
    uVar6 = (uint)uVar1;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
      puVar3 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar3 = DAT_14c998080;
      }
      if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
        lVar2 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
        puVar4 = *(uint **)(lVar2 + 0x18);
        if (*(uint **)(lVar2 + 0x18) == (uint *)0x0) {
          puVar4 = (uint *)(lVar2 + 8);
        }
        *puVar4 = *puVar4 | 0x80000;
        *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
      }
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x38);
  if (uVar1 < 0xffffffff00000000) {
    plVar5 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar5 = (longlong *)0x0;
    }
    (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,0x12);
  }
  else {
    uVar6 = (uint)uVar1;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
      puVar3 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar3 = DAT_14c998080;
      }
      if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
        lVar2 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
        puVar4 = *(uint **)(lVar2 + 0x18);
        if (*(uint **)(lVar2 + 0x18) == (uint *)0x0) {
          puVar4 = (uint *)(lVar2 + 8);
        }
        *puVar4 = *puVar4 | 0x40000;
        *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
      }
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x38);
  if (uVar1 < 0xffffffff00000000) {
    plVar5 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar5 = (longlong *)0x0;
    }
    (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,0x17);
  }
  else {
    uVar6 = (uint)uVar1;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
      puVar3 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar3 = DAT_14c998080;
      }
      if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
        lVar2 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
        puVar4 = *(uint **)(lVar2 + 0x18);
        if (*(uint **)(lVar2 + 0x18) == (uint *)0x0) {
          puVar4 = (uint *)(lVar2 + 8);
        }
        *puVar4 = *puVar4 | 0x800000;
        *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
      }
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x38);
  if (uVar1 < 0xffffffff00000000) {
    plVar5 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar5 = (longlong *)0x0;
    }
    (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,0x18);
  }
  else {
    uVar6 = (uint)uVar1;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
      puVar3 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar3 = DAT_14c998080;
      }
      if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
        lVar2 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
        puVar4 = *(uint **)(lVar2 + 0x18);
        if (*(uint **)(lVar2 + 0x18) == (uint *)0x0) {
          puVar4 = (uint *)(lVar2 + 8);
        }
        *puVar4 = *puVar4 | 0x1000000;
        *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
      }
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x38);
  if (uVar1 < 0xffffffff00000000) {
    plVar5 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar5 = (longlong *)0x0;
    }
    (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,0x19);
  }
  else {
    uVar6 = (uint)uVar1;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
      puVar3 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar3 = DAT_14c998080;
      }
      if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
        lVar2 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
        puVar4 = *(uint **)(lVar2 + 0x18);
        if (*(uint **)(lVar2 + 0x18) == (uint *)0x0) {
          puVar4 = (uint *)(lVar2 + 8);
        }
        *puVar4 = *puVar4 | 0x2000000;
        *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
      }
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x38);
  if (uVar1 < 0xffffffff00000000) {
    plVar5 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar5 = (longlong *)0x0;
    }
    (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,0x14);
  }
  else {
    uVar6 = (uint)uVar1;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
      puVar3 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar3 = DAT_14c998080;
      }
      if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
        lVar2 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
        puVar4 = *(uint **)(lVar2 + 0x18);
        if (*(uint **)(lVar2 + 0x18) == (uint *)0x0) {
          puVar4 = (uint *)(lVar2 + 8);
        }
        *puVar4 = *puVar4 | 0x100000;
        *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
      }
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x38);
  if (uVar1 < 0xffffffff00000000) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_88);
  }
  uVar6 = (uint)uVar1;
  if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
    puVar3 = &DAT_14c998070;
    if (DAT_14c998080 != (undefined *)0x0) {
      puVar3 = DAT_14c998080;
    }
    if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
      lVar2 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
      puVar4 = *(uint **)(lVar2 + 0x18);
      if (*(uint **)(lVar2 + 0x18) == (uint *)0x0) {
        puVar4 = (uint *)(lVar2 + 8);
      }
      *puVar4 = *puVar4 | 0x200000;
      *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140939c80 FUN_140939c80 body=1586 status=ok
// SIG undefined FUN_140939c80(void)

void FUN_140939c80(longlong *param_1,undefined8 param_2,uint param_3,int param_4,char param_5,
                  float param_6,undefined8 param_7)

{
  longlong *plVar1;
  double *pdVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  float *pfVar17;
  uint uVar18;
  longlong lVar19;
  int iVar20;
  longlong lVar21;
  float *pfVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  float fVar27;
  double dVar28;
  double dVar29;
  float fVar30;
  double dVar31;
  double dVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  undefined1 auStack_118 [32];
  undefined1 *local_f8;
  byte local_e2;
  char local_e1;
  ulonglong local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar24 = *(uint *)(param_1 + 1);
  local_e0 = (ulonglong)uVar24;
  local_e1 = (char)param_2;
  local_e2 = (byte)param_3;
  if (local_e1 == '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 8) = 0;
    goto LAB_140939d01;
  }
  if ((int)uVar24 < 1) {
    if (param_5 == '\0') {
      param_6 = 1.0;
    }
    if (local_e0 != 0) {
      lVar19 = *param_1;
      goto LAB_14093a076;
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  else {
    lVar19 = *param_1;
    if (param_5 == '\0') {
      param_6 = *(float *)(lVar19 + -0x58 + local_e0 * 0x58) + 1.0;
    }
LAB_14093a076:
    fVar35 = *(float *)(lVar19 + (longlong)(int)(uVar24 - 1) * 0x58);
    if (param_6 <= fVar35) {
      *(undefined1 *)(param_1 + 2) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 2) = 1;
      *(float *)((longlong)param_1 + 0x14) = param_6 - fVar35;
    }
  }
  if (((int)param_1[4] == 0) ||
     (fVar35 = *(float *)(param_1[3] + (longlong)((int)param_1[4] + -1) * 0x80), param_6 <= fVar35))
  {
    *(undefined1 *)(param_1 + 5) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 5) = 1;
    *(float *)((longlong)param_1 + 0x2c) = param_6 - fVar35;
  }
  if (((int)param_1[7] == 0) ||
     (fVar35 = *(float *)(param_1[6] + (longlong)((int)param_1[7] + -1) * 0x58), param_6 <= fVar35))
  {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 8) = 1;
    *(float *)((longlong)param_1 + 0x44) = param_6 - fVar35;
  }
LAB_140939d01:
  fVar35 = 0.0;
  FUN_14093ac1c(param_1,param_2,param_3);
  iVar23 = (int)param_1[4];
  if (0 < (longlong)iVar23) {
    uVar24 = iVar23 - 1;
    lVar19 = (ulonglong)uVar24 << 7;
    uVar26 = 1;
    lVar21 = 0;
    do {
      if (lVar21 == 0) {
        uVar16 = 0;
        if ((char)param_1[5] != '\0') {
          uVar16 = uVar24;
        }
      }
      else {
        uVar16 = uVar26 - 2;
      }
      uVar18 = uVar26;
      if ((lVar19 == lVar21) && (uVar18 = uVar24, (char)param_1[5] != '\0')) {
        uVar18 = 0;
      }
      lVar6 = param_1[3];
      pfVar17 = (float *)((longlong)(int)uVar16 * 0x80 + lVar6);
      pfVar22 = (float *)((longlong)(int)uVar18 * 0x80 + lVar6);
      cVar4 = *(char *)(lVar6 + 0x70 + lVar21);
      if (cVar4 == '\x01') {
LAB_140939d8a:
        if (((char)param_3 == '\0') ||
           ((lVar21 != 0 && ((lVar19 != lVar21 || ((char)param_1[5] != '\0')))))) {
          if ((*(byte *)(pfVar17 + 0x1c) == 1) || (*(byte *)(pfVar17 + 0x1c) - 3 < 3)) {
            if (lVar21 == 0 && (*(byte *)(param_1 + 5) ^ 1) == 0) {
              fVar27 = *(float *)(lVar6 + lVar21) - *(float *)((longlong)param_1 + 0x2c);
            }
            else {
              fVar27 = *pfVar17;
            }
            if (lVar19 == lVar21 && (*(byte *)(param_1 + 5) ^ 1) == 0) {
              fVar30 = *(float *)(lVar6 + lVar21) + *(float *)((longlong)param_1 + 0x2c);
            }
            else {
              fVar30 = *pfVar22;
            }
            fVar34 = 0.0001;
            if (0.0001 <= fVar30 - fVar27) {
              fVar34 = fVar30 - fVar27;
            }
            lVar6 = lVar6 + lVar21;
            local_f8 = local_d8;
            FUN_14093a7d4(pfVar17 + 4,lVar6 + 0x10,pfVar22 + 4,0);
            dVar28 = (double)fVar34;
            uVar33 = (undefined4)((ulonglong)dVar28 >> 0x20);
            auVar7._8_4_ = SUB84(dVar28,0);
            auVar7._0_8_ = dVar28;
            auVar7._12_4_ = uVar33;
            local_d8 = divpd(local_d8,auVar7);
            auVar8._8_4_ = SUB84(dVar28,0);
            auVar8._0_8_ = dVar28;
            auVar8._12_4_ = uVar33;
            local_c8 = divpd(local_c8,auVar8);
            *(undefined8 *)(lVar6 + 0x40) = local_c8._0_8_;
            *(undefined8 *)(lVar6 + 0x48) = local_c8._8_8_;
            *(undefined8 *)(lVar6 + 0x30) = local_d8._0_8_;
            *(undefined8 *)(lVar6 + 0x38) = local_d8._8_8_;
            *(undefined8 *)(lVar6 + 0x50) = local_d8._0_8_;
            *(undefined8 *)(lVar6 + 0x58) = local_d8._8_8_;
            *(undefined8 *)(lVar6 + 0x60) = local_c8._0_8_;
            *(undefined8 *)(lVar6 + 0x68) = local_c8._8_8_;
            goto LAB_140939e53;
          }
          uVar13 = *(undefined8 *)(pfVar17 + 0xc);
          uVar14 = *(undefined8 *)(pfVar17 + 0xe);
          uVar15 = *(undefined8 *)(pfVar17 + 0x12);
          puVar3 = (undefined8 *)(lVar6 + 0x40 + lVar21);
          *puVar3 = *(undefined8 *)(pfVar17 + 0x10);
          puVar3[1] = uVar15;
          puVar3 = (undefined8 *)(lVar6 + 0x30 + lVar21);
          *puVar3 = uVar13;
          puVar3[1] = uVar14;
          uVar13 = *(undefined8 *)(pfVar17 + 0x16);
          uVar14 = *(undefined8 *)(pfVar17 + 0x18);
          uVar15 = *(undefined8 *)(pfVar17 + 0x1a);
          puVar3 = (undefined8 *)(lVar6 + 0x50 + lVar21);
          *puVar3 = *(undefined8 *)(pfVar17 + 0x14);
          puVar3[1] = uVar13;
          puVar3 = (undefined8 *)(lVar6 + 0x60 + lVar21);
          *puVar3 = uVar14;
          puVar3[1] = uVar15;
        }
        else {
          puVar3 = (undefined8 *)(lVar6 + 0x30 + lVar21);
          *puVar3 = 0;
          puVar3[1] = 0;
          *(undefined8 *)(lVar6 + 0x40 + lVar21) = 0;
          *(undefined8 *)(lVar6 + 0x48 + lVar21) = 0x3ff0000000000000;
          puVar3 = (undefined8 *)(lVar6 + 0x50 + lVar21);
          *puVar3 = 0;
          puVar3[1] = 0;
          *(undefined8 *)(lVar6 + 0x60 + lVar21) = 0;
          *(undefined8 *)(lVar6 + 0x68 + lVar21) = 0x3ff0000000000000;
        }
      }
      else {
        if (cVar4 == '\0') {
          pdVar2 = (double *)(lVar6 + 0x10 + lVar21);
          dVar9 = *pdVar2;
          dVar10 = pdVar2[1];
          pdVar2 = (double *)(lVar6 + 0x20 + lVar21);
          dVar11 = *pdVar2;
          dVar12 = pdVar2[1];
          dVar28 = *(double *)(pfVar22 + 4) - dVar9;
          dVar29 = *(double *)(pfVar22 + 6) - dVar10;
          dVar31 = *(double *)(pfVar22 + 8) - dVar11;
          dVar32 = *(double *)(pfVar22 + 10) - dVar12;
          pdVar2 = (double *)(lVar6 + 0x50 + lVar21);
          *pdVar2 = dVar28;
          pdVar2[1] = dVar29;
          pdVar2 = (double *)(lVar6 + 0x60 + lVar21);
          *pdVar2 = dVar31;
          pdVar2[1] = dVar32;
          if ((5 < *(byte *)(pfVar17 + 0x1c)) ||
             ((0x3aU >> (*(byte *)(pfVar17 + 0x1c) & 0x1f) & 1) == 0)) {
            dVar28 = dVar9 - *(double *)(pfVar17 + 4);
            dVar29 = dVar10 - *(double *)(pfVar17 + 6);
            dVar31 = dVar11 - *(double *)(pfVar17 + 8);
            dVar32 = dVar12 - *(double *)(pfVar17 + 10);
          }
          pdVar2 = (double *)(lVar6 + 0x30 + lVar21);
          *pdVar2 = dVar28;
          pdVar2[1] = dVar29;
          pdVar2 = (double *)(lVar6 + 0x40 + lVar21);
          *pdVar2 = dVar31;
          pdVar2[1] = dVar32;
        }
        else {
          if (cVar4 != '\x02') {
            param_3 = (uint)local_e2;
            if (cVar4 == '\x05') goto LAB_140939d8a;
            goto LAB_140939e58;
          }
          puVar3 = (undefined8 *)(lVar6 + 0x30 + lVar21);
          *puVar3 = 0;
          puVar3[1] = 0;
          *(undefined8 *)(lVar6 + 0x40 + lVar21) = 0;
          *(undefined8 *)(lVar6 + 0x48 + lVar21) = 0x3ff0000000000000;
          puVar3 = (undefined8 *)(lVar6 + 0x50 + lVar21);
          *puVar3 = 0;
          puVar3[1] = 0;
          *(undefined8 *)(lVar6 + 0x60 + lVar21) = 0;
          *(undefined8 *)(lVar6 + 0x68 + lVar21) = 0x3ff0000000000000;
        }
LAB_140939e53:
        param_3 = (uint)local_e2;
      }
LAB_140939e58:
      lVar21 = lVar21 + 0x80;
      uVar26 = uVar26 + 1;
    } while ((longlong)iVar23 * 0x80 != lVar21);
  }
  FUN_14093ac1c(param_1 + 6);
  iVar20 = (int)local_e0;
  iVar23 = 1;
  if (1 < iVar20) {
    iVar23 = iVar20;
  }
  iVar23 = iVar23 + -1;
  if (local_e1 != '\0') {
    iVar23 = iVar20;
  }
  plVar1 = param_1 + 9;
  FUN_14093a2b4(plVar1,iVar23 * param_4 + 1);
  if (0 < iVar23) {
    fVar35 = 0.0;
    iVar20 = 0;
    do {
      if (0 < param_4) {
        iVar25 = 0;
        do {
          if (iVar25 == 0) {
            fVar27 = 0.0;
          }
          else {
            fVar27 = (float)FUN_14093a2e0(param_1,iVar20,(float)iVar25 / (float)param_4,param_7);
          }
          iVar5 = (int)param_1[10];
          lVar19 = (longlong)iVar5;
          *(uint *)(param_1 + 10) = iVar5 + 1U;
          if (*(uint *)((longlong)param_1 + 0x54) < iVar5 + 1U) {
            FUN_147a3a88c(plVar1,iVar5);
          }
          lVar21 = *plVar1;
          *(float *)(lVar21 + lVar19 * 0x14) = fVar27 + fVar35;
          *(float *)(lVar21 + 4 + lVar19 * 0x14) = (float)iVar25 / (float)param_4 + (float)iVar20;
          iVar25 = iVar25 + 1;
          *(undefined8 *)(lVar21 + 8 + lVar19 * 0x14) = 0;
          *(undefined1 *)(lVar21 + 0x10 + lVar19 * 0x14) = 0;
        } while (param_4 != iVar25);
      }
      fVar27 = (float)FUN_14093a2e0(param_1,iVar20,0x3f800000,param_7);
      fVar35 = fVar35 + fVar27;
      iVar20 = iVar20 + 1;
    } while (iVar20 != iVar23);
  }
  iVar20 = (int)param_1[10];
  lVar19 = (longlong)iVar20;
  *(uint *)(param_1 + 10) = iVar20 + 1U;
  if (*(uint *)((longlong)param_1 + 0x54) < iVar20 + 1U) {
    FUN_147a3a88c(plVar1,iVar20);
  }
  lVar21 = param_1[9];
  *(float *)(lVar21 + lVar19 * 0x14) = fVar35;
  *(float *)(lVar21 + 4 + lVar19 * 0x14) = (float)iVar23;
  *(undefined8 *)(lVar21 + 8 + lVar19 * 0x14) = 0;
  *(undefined1 *)(lVar21 + 0x10 + lVar19 * 0x14) = 0;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  if ((local_b0 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14093a2b4 FUN_14093a2b4 body=42 status=ok
// SIG undefined FUN_14093a2b4(void)

void FUN_14093a2b4(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_14093a688();
    return;
  }
  return;
}



// FUNCTION 14093a2e0 FUN_14093a2e0 body=936 status=ok
// SIG undefined FUN_14093a2e0(void)

float FUN_14093a2e0(longlong *param_1,int param_2,float param_3,double *param_4)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  
  lVar10 = *param_1;
  lVar1 = lVar10 + (longlong)param_2 * 0x58;
  iVar12 = 0;
  if ((int)param_1[1] + -1 != param_2) {
    iVar12 = param_2 + 1;
  }
  lVar11 = (longlong)iVar12 * 0x58 + lVar10;
  cVar5 = *(char *)(lVar10 + 0x50 + (longlong)param_2 * 0x58);
  if (cVar5 == '\x02') {
    if ((param_3 != 1.0) || (NAN(param_3))) {
      return 0.0;
    }
    dVar13 = (*(double *)(lVar11 + 0x18) - *(double *)(lVar1 + 0x18)) * param_4[2];
    dVar16 = (*(double *)(lVar11 + 0x10) - *(double *)(lVar1 + 0x10)) * param_4[1];
    dVar15 = (*(double *)(lVar11 + 8) - *(double *)(lVar1 + 8)) * *param_4;
    dVar13 = SQRT(dVar13 * dVar13 + dVar15 * dVar15 + dVar16 * dVar16);
  }
  else {
    if (cVar5 != '\0') {
      dVar14 = *(double *)(lVar1 + 0x18) - *(double *)(lVar11 + 0x18);
      dVar8 = *(double *)(lVar1 + 0x10) - *(double *)(lVar11 + 0x10);
      dVar9 = *(double *)(lVar1 + 8) - *(double *)(lVar11 + 8);
      dVar13 = *(double *)(lVar1 + 0x48);
      dVar15 = *(double *)(lVar1 + 0x40);
      dVar16 = *(double *)(lVar1 + 0x38);
      dVar2 = *(double *)(lVar11 + 0x30);
      dVar3 = *(double *)(lVar11 + 0x28);
      dVar4 = *(double *)(lVar11 + 0x20);
      fVar18 = 0.0;
      lVar10 = 4;
      do {
        dVar7 = (double)((*(float *)(&UNK_14a88922c + lVar10) + 1.0) * param_3 * 0.5);
        dVar17 = (((dVar8 + dVar8 + dVar15 + dVar3) * 3.0 * dVar7 +
                  (((*(double *)(lVar11 + 0x10) - *(double *)(lVar1 + 0x10)) * 6.0 - dVar15 * 4.0) -
                  (dVar3 + dVar3))) * dVar7 + dVar15) * param_4[1];
        dVar6 = (((dVar9 + dVar9 + dVar16 + dVar4) * 3.0 * dVar7 +
                 (((*(double *)(lVar11 + 8) - *(double *)(lVar1 + 8)) * 6.0 - dVar16 * 4.0) -
                 (dVar4 + dVar4))) * dVar7 + dVar16) * *param_4;
        dVar7 = (((dVar14 + dVar14 + dVar13 + dVar2) * 3.0 * dVar7 +
                 (((*(double *)(lVar11 + 0x18) - *(double *)(lVar1 + 0x18)) * 6.0 - dVar13 * 4.0) -
                 (dVar2 + dVar2))) * dVar7 + dVar13) * param_4[2];
        fVar18 = (float)((double)fVar18 +
                        (double)*(float *)((longlong)&DAT_14a889230 + lVar10) *
                        SQRT(dVar7 * dVar7 + dVar6 * dVar6 + dVar17 * dVar17));
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0x2c);
      return param_3 * 0.5 * fVar18;
    }
    dVar13 = (*(double *)(lVar11 + 0x18) - *(double *)(lVar1 + 0x18)) * param_4[2];
    dVar16 = (*(double *)(lVar11 + 0x10) - *(double *)(lVar1 + 0x10)) * param_4[1];
    dVar15 = (*(double *)(lVar11 + 8) - *(double *)(lVar1 + 8)) * *param_4;
    dVar13 = (double)param_3 * SQRT(dVar13 * dVar13 + dVar15 * dVar15 + dVar16 * dVar16);
  }
  return (float)dVar13;
}



// FUNCTION 14093a688 FUN_14093a688 body=332 status=ok
// SIG undefined FUN_14093a688(void)

void FUN_14093a688(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x14;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14093a6f6;
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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
LAB_14093a6f6:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x14)) {
      uVar5 = uVar3 / 0x14 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x14,4);
  }
  return;
}



// FUNCTION 14093a7d4 FUN_14093a7d4 body=880 status=ok
// SIG undefined FUN_14093a7d4(void)

void FUN_14093a7d4(double *param_1,double *param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar4;
  double dVar6;
  double dVar8;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_138 [32];
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  ulonglong local_b0;
  double dVar3;
  double dVar5;
  double dVar7;
  double dVar9;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  dVar10 = param_2[2] * -1.0;
  dVar12 = param_2[3] * 1.0;
  dVar1 = *param_2;
  dVar11 = *param_2;
  dVar2 = param_2[1];
  dVar3 = param_2[1];
  dVar4 = *param_1;
  dVar5 = param_1[1];
  dVar6 = param_1[2];
  dVar7 = param_1[3];
  local_f8 = dVar5 * dVar10 * -1.0 + ((dVar12 * dVar4 - dVar1 * dVar7 * 1.0) - dVar2 * dVar6);
  dStack_f0 = dVar4 * dVar10 * 1.0 + ((dVar12 * dVar5 - dVar11 * dVar6 * -1.0) - dVar3 * dVar7);
  local_e8 = dVar7 * dVar10 * 1.0 + (dVar12 * dVar6 - dVar1 * dVar5 * 1.0) + dVar2 * dVar4;
  dStack_e0 = dVar6 * dVar10 * -1.0 + (dVar12 * dVar7 - dVar11 * dVar4 * -1.0) + dVar3 * dVar5;
  FUN_14093ab46(&local_f8,&local_d8);
  dVar4 = *param_3;
  dVar5 = param_3[1];
  dVar6 = param_3[2];
  dVar7 = param_3[3];
  local_118 = dVar5 * dVar10 * -1.0 + ((dVar12 * dVar4 - dVar1 * dVar7 * 1.0) - dVar2 * dVar6);
  dStack_110 = dVar4 * dVar10 * 1.0 + ((dVar12 * dVar5 - dVar11 * dVar6 * -1.0) - dVar3 * dVar7);
  local_108 = dVar7 * dVar10 * 1.0 + dVar2 * dVar4 + (dVar12 * dVar6 - dVar1 * dVar5 * 1.0);
  dStack_100 = dVar6 * dVar10 * -1.0 + dVar3 * dVar5 + (dVar12 * dVar7 - dVar11 * dVar4 * -1.0);
  FUN_14093ab46(&local_118,&local_f8);
  dVar2 = (local_d8 + local_f8) * -0.5;
  dVar3 = (dStack_d0 + dStack_f0) * -0.5;
  dVar10 = (local_c8 + local_e8) * -0.5;
  dVar1 = SQRT(dVar10 * dVar10 + dVar2 * dVar2 + dVar3 * dVar3);
  dVar11 = sin(dVar1);
  dVar12 = cos(dVar1);
  if (9.99999993922529e-09 <= ABS(dVar11)) {
    dVar11 = dVar11 / dVar1;
    dVar2 = dVar2 * dVar11;
    dVar3 = dVar3 * dVar11;
    dVar10 = dVar10 * dVar11;
  }
  dVar11 = param_2[3];
  dVar1 = param_2[3];
  dVar4 = *param_2;
  dVar5 = *param_2;
  dVar6 = param_2[1];
  dVar7 = param_2[1];
  dVar8 = param_2[2];
  dVar9 = param_2[2];
  *param_5 = dVar3 * dVar8 * -1.0 + dVar10 * dVar6 + dVar12 * dVar4 * 1.0 + dVar2 * dVar11;
  param_5[1] = dVar2 * dVar9 * 1.0 + dVar12 * dVar7 + dVar10 * dVar5 * -1.0 + dVar3 * dVar1;
  param_5[2] = dVar12 * dVar8 * 1.0 + ((dVar4 * dVar3 * 1.0 + dVar11 * dVar10) - dVar2 * dVar6);
  param_5[3] = dVar10 * dVar9 * -1.0 + ((dVar5 * dVar2 * -1.0 + dVar1 * dVar12) - dVar3 * dVar7);
  if ((local_b0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14093ab46 FUN_14093ab46 body=213 status=ok
// SIG undefined FUN_14093ab46(void)

double * FUN_14093ab46(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  
  param_2[3] = 0.0;
  dVar1 = param_1[3];
  if (ABS(dVar1) < 1.0) {
    dVar2 = dVar1;
    if (1.0 <= dVar1) {
      dVar2 = 1.0;
    }
    dVar1 = acos((double)(~-(ulonglong)(dVar1 < -1.0) & (ulonglong)dVar2 |
                         -(ulonglong)(dVar1 < -1.0) & 0xbff0000000000000));
    dVar2 = sin(dVar1);
    if (9.99999993922529e-09 <= ABS(dVar2)) {
      dVar1 = dVar1 / dVar2;
      *param_2 = *param_1 * dVar1;
      param_2[1] = param_1[1] * dVar1;
      dVar1 = dVar1 * param_1[2];
      goto LAB_14093ab96;
    }
  }
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  dVar1 = param_1[2];
LAB_14093ab96:
  param_2[2] = dVar1;
  return param_2;
}



// FUNCTION 14093ac1c FUN_14093ac1c body=1141 status=ok
// SIG undefined FUN_14093ac1c(void)

void FUN_14093ac1c(longlong *param_1,float param_2,char param_3)

{
  float *pfVar1;
  char cVar2;
  longlong lVar3;
  double dVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  float *pfVar9;
  float *pfVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  float local_100;
  char local_f5;
  uint local_f4;
  ulonglong local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar11 = (ulonglong)(int)param_1[1];
  if (0 < (longlong)uVar11) {
    uVar12 = (int)param_1[1] - 1;
    dVar4 = (double)(1.0 - param_2);
    uVar14 = (ulonglong)uVar12;
    lVar15 = 8;
    uVar13 = 0;
    do {
      if (uVar13 == 0) {
        uVar6 = 0;
        if ((char)param_1[2] != '\0') {
          uVar6 = uVar12;
        }
      }
      else {
        uVar6 = (int)uVar13 - 1;
      }
      if (uVar13 == uVar14) {
        uVar7 = uVar12;
        if ((char)param_1[2] != '\0') {
          uVar7 = 0;
        }
      }
      else {
        uVar7 = (int)uVar13 + 1;
      }
      lVar3 = *param_1;
      pfVar1 = (float *)(lVar3 + uVar13 * 0x58);
      pfVar9 = (float *)((longlong)(int)uVar6 * 0x58 + lVar3);
      pfVar10 = (float *)((longlong)(int)uVar7 * 0x58 + lVar3);
      cVar2 = *(char *)(lVar3 + 0x50 + uVar13 * 0x58);
      if (cVar2 == '\x01') {
LAB_14093ad0b:
        if ((param_3 == '\0') ||
           ((uVar13 != 0 && ((uVar13 != uVar14 || ((char)param_1[2] != '\0')))))) {
          if ((*(byte *)(pfVar9 + 0x14) == 1) || (*(byte *)(pfVar9 + 0x14) - 3 < 3)) {
            if (uVar13 == 0 && (*(byte *)(param_1 + 2) ^ 1) == 0) {
              fVar20 = *pfVar1 - *(float *)((longlong)param_1 + 0x14);
            }
            else {
              fVar20 = *pfVar9;
            }
            if (uVar13 == uVar14 && (*(byte *)(param_1 + 2) ^ 1) == 0) {
              fVar21 = *pfVar1;
              fVar22 = *(float *)((longlong)param_1 + 0x14) + fVar21;
            }
            else {
              fVar22 = *pfVar10;
              fVar21 = *pfVar1;
            }
            if (cVar2 == '\x05') {
              local_e0 = -0x400000000;
              lVar8 = 0;
              local_f5 = param_3;
              local_f4 = uVar12;
              local_f0 = uVar11;
              do {
                local_e0 = local_e0 + 0x400000000;
                local_108 = *(undefined4 *)((longlong)pfVar10 + lVar8 + 8);
                local_100 = fVar22;
                local_e8 = lVar8;
                fVar16 = (float)FUN_1467f8d78(*(undefined4 *)((longlong)pfVar9 + lVar8 + 8),fVar20,
                                              *(undefined4 *)(lVar3 + lVar15 + lVar8),fVar21);
                *(float *)((longlong)&local_d8 + local_e8) = fVar16 * (1.0 - param_2);
                lVar8 = local_e8 + 4;
                param_3 = local_f5;
                uVar11 = local_f0;
                uVar12 = local_f4;
              } while ((uint)((ulonglong)local_e0 >> 0x22) < 5);
            }
            else {
              fVar21 = 0.0001;
              if (0.0001 <= fVar22 - fVar20) {
                fVar21 = fVar22 - fVar20;
              }
              local_c8 = 1.0 / (double)fVar21;
              local_d8 = ((*(double *)(pfVar10 + 2) - *(double *)(pfVar1 + 2)) +
                         (*(double *)(pfVar1 + 2) - *(double *)(pfVar9 + 2))) * dVar4 * local_c8;
              uStack_d0 = ((*(double *)(pfVar10 + 4) - *(double *)(pfVar1 + 4)) +
                          (*(double *)(pfVar1 + 4) - *(double *)(pfVar9 + 4))) * dVar4 * local_c8;
              local_c8 = local_c8 *
                         ((*(double *)(pfVar10 + 6) - *(double *)(pfVar1 + 6)) +
                         (*(double *)(pfVar1 + 6) - *(double *)(pfVar9 + 6))) * dVar4;
            }
            *(double *)(pfVar1 + 0xc) = local_c8;
            *(double *)(pfVar1 + 8) = local_d8;
            *(double *)(pfVar1 + 10) = uStack_d0;
            pfVar1[0xe] = (float)local_d8;
            pfVar1[0xf] = local_d8._4_4_;
            pfVar1[0x10] = (float)uStack_d0;
            pfVar1[0x11] = uStack_d0._4_4_;
            dVar17 = local_c8;
          }
          else {
            *(undefined8 *)(pfVar1 + 0xc) = *(undefined8 *)(pfVar9 + 0xc);
            uVar5 = *(undefined8 *)(pfVar9 + 10);
            *(undefined8 *)(pfVar1 + 8) = *(undefined8 *)(pfVar9 + 8);
            *(undefined8 *)(pfVar1 + 10) = uVar5;
            fVar20 = pfVar9[0xf];
            fVar22 = pfVar9[0x10];
            fVar21 = pfVar9[0x11];
            pfVar1[0xe] = pfVar9[0xe];
            pfVar1[0xf] = fVar20;
            pfVar1[0x10] = fVar22;
            pfVar1[0x11] = fVar21;
            dVar17 = *(double *)(pfVar9 + 0x12);
          }
          *(double *)(pfVar1 + 0x12) = dVar17;
        }
        else {
LAB_14093af48:
          pfVar1[0x10] = 0.0;
          pfVar1[0x11] = 0.0;
          pfVar1[0x12] = 0.0;
          pfVar1[0x13] = 0.0;
          pfVar1[0xc] = 0.0;
          pfVar1[0xd] = 0.0;
          pfVar1[0xe] = 0.0;
          pfVar1[0xf] = 0.0;
          pfVar1[8] = 0.0;
          pfVar1[9] = 0.0;
          pfVar1[10] = 0.0;
          pfVar1[0xb] = 0.0;
        }
      }
      else if (cVar2 == '\0') {
        dVar17 = *(double *)(pfVar10 + 6) - *(double *)(pfVar1 + 6);
        dVar19 = *(double *)(pfVar10 + 4) - *(double *)(pfVar1 + 4);
        dVar18 = *(double *)(pfVar10 + 2) - *(double *)(pfVar1 + 2);
        *(double *)(pfVar1 + 0xe) = dVar18;
        *(double *)(pfVar1 + 0x10) = dVar19;
        *(double *)(pfVar1 + 0x12) = dVar17;
        if ((5 < *(byte *)(pfVar9 + 0x14)) ||
           ((0x3aU >> (*(byte *)(pfVar9 + 0x14) & 0x1f) & 1) == 0)) {
          dVar17 = *(double *)(pfVar1 + 6) - *(double *)(pfVar9 + 6);
          dVar19 = *(double *)(pfVar1 + 4) - *(double *)(pfVar9 + 4);
          dVar18 = *(double *)(pfVar1 + 2) - *(double *)(pfVar9 + 2);
        }
        *(double *)(pfVar1 + 8) = dVar18;
        *(double *)(pfVar1 + 10) = dVar19;
        *(double *)(pfVar1 + 0xc) = dVar17;
      }
      else {
        if (cVar2 == '\x02') goto LAB_14093af48;
        if (cVar2 == '\x05') goto LAB_14093ad0b;
      }
      uVar13 = uVar13 + 1;
      lVar15 = lVar15 + 0x58;
    } while (uVar13 != uVar11);
  }
  if ((local_c0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14093b092 FUN_14093b092 body=75 status=ok
// SIG undefined FUN_14093b092(void)

undefined4 FUN_14093b092(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_14093b0de();
  if (*(char *)(param_1 + 0x88) == '\0') {
    FUN_14093b56a((*(byte *)(param_3 + 0x28) & 4) >> 2,param_3,param_1 + 0xb0,&DAT_14c948618);
  }
  return uVar1;
}



// FUNCTION 14093b0de FUN_14093b0de body=1163 status=ok
// SIG undefined FUN_14093b0de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_14093b0de(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  char *pcVar2;
  char *pcVar3;
  double *pdVar4;
  byte bVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  double dVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  byte bVar12;
  undefined8 unaff_R14;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  longlong local_60;
  char *local_58;
  undefined1 local_4e;
  undefined1 local_4d;
  byte local_4c;
  byte local_4b [3];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_4d = 1;
  bVar5 = *(byte *)(param_3 + 5);
  uVar11 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),bVar5);
  puVar1 = (undefined4 *)(param_1 + 0x10);
  (**(code **)(*param_3 + 0x178))(param_3,(char *)(param_1 + 0x88),1);
  puVar6 = *(undefined4 **)param_3[1];
  if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar6 + 1) {
    if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
      (**(code **)(*param_3 + 0x170))(param_3,puVar1,4);
    }
    else {
      thunk_FUN_14572512c(param_3,puVar1);
    }
  }
  else {
    *puVar1 = *puVar6;
    *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
  }
  if (*(char *)(param_1 + 0x88) != '\0') goto LAB_14093b16c;
  local_60 = param_2;
  (**(code **)(*param_3 + 0x178))(param_3,param_1 + 8,1);
  pcVar2 = (char *)(param_1 + 9);
  (**(code **)(*param_3 + 0x178))(param_3,pcVar2,1);
  local_58 = (char *)(param_1 + 10);
  (**(code **)(*param_3 + 0x178))(param_3,local_58,1);
  pcVar3 = (char *)(param_1 + 0xb);
  (**(code **)(*param_3 + 0x178))(param_3,pcVar3,1);
  FUN_140550820(param_1 + 0x18,param_3,param_4,&local_4d);
  FUN_140550820(param_1 + 0x30,param_3,param_4,&local_4d);
  pdVar4 = (double *)(param_1 + 0x60);
  if ((bVar5 & 4) == 0) {
    local_4b[2] = 0;
  }
  else {
    local_4b[2] = 1;
    if ((*pdVar4 == _DAT_14cad0ea8) && (!NAN(*pdVar4) && !NAN(_DAT_14cad0ea8))) {
      if ((*(double *)(param_1 + 0x68) == _DAT_14cad0eb0) &&
         (!NAN(*(double *)(param_1 + 0x68)) && !NAN(_DAT_14cad0eb0))) {
        local_4b[2] = -(DAT_14cad0eb8 != *(double *)(param_1 + 0x70)) & 1;
      }
    }
  }
  (**(code **)(*param_3 + 0x178))(param_3,local_4b + 2,1);
  if (local_4b[2] == 0) {
    if ((bVar5 & 4) == 0) {
      *(double *)(param_1 + 0x70) = DAT_14cad0eb8;
      dVar8 = _DAT_14cad0eb0;
      *pdVar4 = _DAT_14cad0ea8;
      *(double *)(param_1 + 0x68) = dVar8;
      if (*pcVar2 == '\x01') goto LAB_14093b52f;
LAB_14093b2d0:
      *(undefined8 *)(param_1 + 0x58) = DAT_14c846508;
      uVar7 = DAT_14c846500;
      *(undefined8 *)(param_1 + 0x48) = DAT_14c8464f8;
      *(undefined8 *)(param_1 + 0x50) = uVar7;
    }
    else if (*pcVar2 != '\0') {
LAB_14093b52f:
      FUN_14032b138(param_1 + 0x48,param_3);
      local_4d = 1;
    }
  }
  else {
    local_4b[1] = 1;
    FUN_140550820(pdVar4,param_3,param_4);
    if (*pcVar2 != '\0') goto LAB_14093b52f;
    if ((bVar5 & 4) == 0) goto LAB_14093b2d0;
  }
  bVar12 = (byte)((uVar11 & 0xffffffff) >> 2) & 0x3f;
  local_4c = *(longlong *)(param_1 + 0x78) != 0 & bVar12;
  (**(code **)(*param_3 + 0x178))(param_3,&local_4c,1);
  if (local_4c == 1) {
    (**(code **)(*param_3 + 0x150))(param_3,(undefined8 *)(param_1 + 0x78));
  }
  else if ((bVar5 & 4) == 0) {
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  local_4b[0] = bVar12 & *(longlong *)(param_1 + 0x80) != 0;
  (**(code **)(*param_3 + 0x178))(param_3,local_4b,1);
  if (local_4b[0] == 1) {
    (**(code **)(*param_3 + 0x160))(param_3,(undefined8 *)(param_1 + 0x80));
  }
  else if ((bVar5 & 4) == 0) {
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  uVar11 = uVar11 & 0xffffff04;
  local_4e = 1;
  FUN_1401fd88e(CONCAT71((int7)(uVar11 >> 8),(byte)uVar11 >> 2),param_3,param_1 + 0x8b);
  (**(code **)(*param_3 + 0x178))(param_3,param_1 + 0x89,1);
  (**(code **)(*param_3 + 0x178))(param_3,param_1 + 0x8a,1);
  if (*(char *)(param_1 + 10) == '\x01') {
    puVar1 = *(undefined4 **)param_3[1];
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
        (**(code **)(*param_3 + 0x170))(param_3,(undefined4 *)(param_1 + 0x90),4);
      }
      else {
        thunk_FUN_14572512c(param_3);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x90) = *puVar1;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
  }
  else if ((bVar5 & 4) == 0) {
    *(undefined4 *)(param_1 + 0x90) = 0xbf800000;
  }
  if (*pcVar3 == '\x01') {
    if (*(longlong *)(local_60 + 0xa8) == 0) {
      lVar10 = 0xd88;
    }
    else {
      iVar9 = FUN_14487fd02();
      lVar10 = 0xdd0;
      if (iVar9 < 3) {
        lVar10 = 0xd88;
      }
    }
    local_60 = local_60 + lVar10;
    if (local_60 != 0) {
      local_68 = 3;
      FUN_147aa08e2(local_60,param_3,param_4,&local_4d);
    }
  }
  if ((*local_58 != '\0') || (*pcVar3 == '\x01')) {
    FUN_1406076b2(param_1 + 0x98,param_3);
  }
LAB_14093b16c:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (*(byte *)((longlong)param_3 + 0x29) & 2) == 0;
}



// FUNCTION 14093b56a FUN_14093b56a body=165 status=ok
// SIG undefined FUN_14093b56a(void)

ulonglong FUN_14093b56a(char param_1,longlong *param_2,int *param_3,int *param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [39];
  char local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 == '\0') {
    local_31 = false;
  }
  else {
    local_31 = param_4[2] != param_3[2] || *param_3 != *param_4;
  }
  (**(code **)(*param_2 + 0x178))(param_2,&local_31,1);
  if (local_31 == '\x01') {
    uVar1 = FUN_14011750a(param_3,param_2);
    uVar2 = CONCAT71((int7)((ulonglong)uVar1 >> 8),local_31);
  }
  else {
    if (param_1 == '\0') {
      param_3[2] = param_4[2];
      *(undefined8 *)param_3 = *(undefined8 *)param_4;
    }
    uVar2 = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2 & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14093b610 FUN_14093b610 body=337 status=ok
// SIG undefined FUN_14093b610(void)

void FUN_14093b610(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = 0;
  if ((*(longlong *)(param_1 + 0x180) != 0) && (uVar2 = 1, *(longlong *)(param_1 + 0x188) != 0)) {
    FUN_141282b42(param_1);
  }
  uVar4 = (ulonglong)uVar2;
  *(undefined8 *)(param_1 + 0x180 + uVar4 * 8) = param_2;
  *(undefined8 *)(param_1 + 400 + uVar4 * 8) = param_3;
  *(undefined8 *)(param_1 + 0x1a0 + uVar4 * 8) = param_4;
  FUN_14093b8fc(param_1,uVar2);
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar2 = *(uint *)(param_1 + 8);
    uVar3 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14093b6c0;
    puVar1 = (undefined8 *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((puVar1 != (undefined8 *)0x0) &&
       ((*(int *)(puVar1 + 2) == *(int *)(param_1 + 0xc) &&
        ((*(uint *)(puVar1 + 1) & 0x10200000) == 0)))) {
      uVar3 = *puVar1;
      goto LAB_14093b6c0;
    }
  }
  uVar3 = 0;
LAB_14093b6c0:
  FUN_14093b762(param_1 + 0x2a0,*(undefined8 *)(param_1 + 400 + uVar4 * 8),uVar3);
  FUN_14093b762(param_1 + 0x2b8,*(undefined8 *)(param_1 + 0x1a0 + uVar4 * 8),uVar3);
  local_48 = *(undefined8 *)(param_1 + 0x1c4);
  local_58 = *(undefined4 *)(param_1 + 0x1b4);
  uStack_54 = *(undefined4 *)(param_1 + 0x1b8);
  uStack_50 = *(undefined4 *)(param_1 + 0x1bc);
  uStack_4c = *(undefined4 *)(param_1 + 0x1c0);
  FUN_14093b810(param_1 + 0x2e8,&local_58,uVar3);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14093b762 FUN_14093b762 body=173 status=ok
// SIG undefined FUN_14093b762(void)

void FUN_14093b762(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_14093b7f9;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14093b7f9:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14093b810 FUN_14093b810 body=235 status=ok
// SIG undefined FUN_14093b810(void)

void FUN_14093b810(longlong *param_1,undefined4 *param_2,undefined8 param_3)

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
  undefined8 local_48;
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
        local_48 = *(undefined8 *)(param_2 + 4);
        local_58 = *param_2;
        uStack_54 = param_2[1];
        uStack_50 = param_2[2];
        uStack_4c = param_2[3];
        cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,&local_58,param_3);
        if (cVar4 == '\0') break;
        lVar8 = lVar8 + -0x10;
        bVar3 = uVar7 < 2;
        uVar7 = uVar7 - 1;
        if (bVar3) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if (bVar6) goto LAB_14093b8ed;
          goto LAB_14093b845;
        }
      }
      uVar5 = uVar7 - 1;
      bVar6 = true;
    } while (1 < uVar7);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14093b8ed:
    FUN_14474d06a(param_1,0);
  }
LAB_14093b845:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14093b8fc FUN_14093b8fc body=1740 status=ok
// SIG undefined FUN_14093b8fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14093b8fc(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  longlong *local_78;
  longlong *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = param_1 + 0x30;
  FUN_14093c894(lVar1);
  lVar7 = (longlong)param_2;
  local_58 = DAT_14cb54774;
  local_68 = _DAT_14cb54764;
  uStack_64 = uRam000000014cb54768;
  uStack_60 = DAT_14cb5476c;
  uStack_5c = DAT_14cb54770;
  if ((longlong)*(int *)(param_1 + 0x1d8) != 0) {
    plVar8 = *(longlong **)(param_1 + 0x1d0);
    lVar6 = (longlong)*(int *)(param_1 + 0x1d8) * 0x18;
    do {
      if (*plVar8 == *(longlong *)(param_1 + 0x180 + lVar7 * 8)) {
        if ((plVar8 != (longlong *)0x0) && ((longlong)(int)plVar8[2] != 0)) {
          plVar9 = (longlong *)plVar8[1];
          lVar6 = (longlong)(int)plVar8[2] * 0x98;
          goto LAB_14093b9ab;
        }
        break;
      }
      plVar8 = plVar8 + 3;
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != 0);
  }
  goto LAB_14093bb99;
  while( true ) {
    plVar9 = plVar9 + 0x13;
    lVar6 = lVar6 + -0x98;
    if (lVar6 == 0) break;
LAB_14093b9ab:
    local_88 = param_1;
    local_80 = lVar7;
    if (*plVar9 == *(longlong *)(param_1 + 400 + lVar7 * 8)) {
      if (plVar9 != (longlong *)0x0) {
        if ((longlong)(int)plVar9[6] != 0) {
          puVar10 = (undefined8 *)plVar9[5];
          lVar7 = (longlong)(int)plVar9[6] * 0x90;
          do {
            FUN_14093c0ae(lVar1,&local_78,*puVar10);
            if (local_78 != (longlong *)0x0) {
              (**(code **)(*local_78 + 0x38))(local_78,param_2,puVar10);
            }
            plVar3 = local_70;
            if (local_70 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_70 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*local_70)(local_70);
                LOCK();
                piVar4 = (int *)((longlong)plVar3 + 0xc);
                *piVar4 = *piVar4 + -1;
                UNLOCK();
                if (*piVar4 == 0) {
                  (**(code **)(*plVar3 + 0x10))(plVar3);
                }
              }
            }
            puVar10 = puVar10 + 0x12;
            lVar7 = lVar7 + -0x90;
          } while (lVar7 != 0);
        }
        if ((longlong)(int)plVar9[8] != 0) {
          puVar10 = (undefined8 *)plVar9[7];
          lVar7 = (longlong)(int)plVar9[8] * 0x90;
          do {
            FUN_14093c0ae(lVar1,&local_78,*puVar10);
            if (local_78 != (longlong *)0x0) {
              (**(code **)(*local_78 + 0x30))(local_78,param_2,puVar10);
            }
            plVar3 = local_70;
            if (local_70 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_70 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*local_70)(local_70);
                LOCK();
                piVar4 = (int *)((longlong)plVar3 + 0xc);
                *piVar4 = *piVar4 + -1;
                UNLOCK();
                if (*piVar4 == 0) {
                  (**(code **)(*plVar3 + 0x10))(plVar3);
                }
              }
            }
            puVar10 = puVar10 + 0x12;
            lVar7 = lVar7 + -0x90;
          } while (lVar7 != 0);
        }
        if ((longlong)(int)plVar9[10] != 0) {
          puVar10 = (undefined8 *)plVar9[9];
          lVar7 = (longlong)(int)plVar9[10] * 0x210;
          do {
            FUN_14093c0ae(lVar1,&local_78,*puVar10);
            if (local_78 != (longlong *)0x0) {
              (**(code **)(*local_78 + 0x28))(local_78,param_2,puVar10);
            }
            plVar3 = local_70;
            if (local_70 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_70 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*local_70)(local_70);
                LOCK();
                piVar4 = (int *)((longlong)plVar3 + 0xc);
                *piVar4 = *piVar4 + -1;
                UNLOCK();
                if (*piVar4 == 0) {
                  (**(code **)(*plVar3 + 0x10))(plVar3);
                }
              }
            }
            puVar10 = puVar10 + 0x42;
            lVar7 = lVar7 + -0x210;
          } while (lVar7 != 0);
        }
        if ((longlong)(int)plVar9[0xc] != 0) {
          puVar10 = (undefined8 *)plVar9[0xb];
          lVar7 = (longlong)(int)plVar9[0xc] * 0x48;
          do {
            FUN_14093c0ae(lVar1,&local_78,*puVar10);
            if (local_78 != (longlong *)0x0) {
              (**(code **)(*local_78 + 0x18))(local_78,param_2,puVar10);
            }
            plVar3 = local_70;
            if (local_70 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_70 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*local_70)(local_70);
                LOCK();
                piVar4 = (int *)((longlong)plVar3 + 0xc);
                *piVar4 = *piVar4 + -1;
                UNLOCK();
                if (*piVar4 == 0) {
                  (**(code **)(*plVar3 + 0x10))(plVar3);
                }
              }
            }
            puVar10 = puVar10 + 9;
            lVar7 = lVar7 + -0x48;
          } while (lVar7 != 0);
        }
        if ((longlong)(int)plVar9[0xe] != 0) {
          puVar10 = (undefined8 *)plVar9[0xd];
          lVar7 = (longlong)(int)plVar9[0xe] << 5;
          do {
            FUN_14093c0ae(lVar1,&local_78,*puVar10);
            if (local_78 != (longlong *)0x0) {
              (**(code **)(*local_78 + 0x20))(local_78,param_2,puVar10);
            }
            plVar9 = local_70;
            if (local_70 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_70 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*local_70)(local_70);
                LOCK();
                piVar4 = (int *)((longlong)plVar9 + 0xc);
                *piVar4 = *piVar4 + -1;
                UNLOCK();
                if (*piVar4 == 0) {
                  (**(code **)(*plVar9 + 0x10))(plVar9);
                }
              }
            }
            puVar10 = puVar10 + 4;
            lVar7 = lVar7 + -0x20;
          } while (lVar7 != 0);
        }
      }
      break;
    }
  }
  param_1 = local_88;
  if ((longlong)(int)plVar8[2] != 0) {
    plVar9 = (longlong *)plVar8[1];
    lVar7 = (longlong)(int)plVar8[2] * 0x98;
    do {
      if (*plVar9 == *(longlong *)(local_88 + 0x1a0 + local_80 * 8)) {
        if (plVar9 != (longlong *)0x0) {
          if ((longlong)(int)plVar9[6] != 0) {
            puVar10 = (undefined8 *)plVar9[5];
            lVar7 = (longlong)(int)plVar9[6] * 0x90;
            do {
              FUN_14093c0ae(lVar1,&local_78,*puVar10);
              if (local_78 != (longlong *)0x0) {
                (**(code **)(*local_78 + 0x38))(local_78,param_2,puVar10);
              }
              plVar8 = local_70;
              if (local_70 != (longlong *)0x0) {
                LOCK();
                plVar3 = local_70 + 1;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)*plVar3 == 0) {
                  (**(code **)*local_70)(local_70);
                  LOCK();
                  piVar4 = (int *)((longlong)plVar8 + 0xc);
                  *piVar4 = *piVar4 + -1;
                  UNLOCK();
                  if (*piVar4 == 0) {
                    (**(code **)(*plVar8 + 0x10))(plVar8);
                  }
                }
              }
              puVar10 = puVar10 + 0x12;
              lVar7 = lVar7 + -0x90;
            } while (lVar7 != 0);
          }
          if ((longlong)(int)plVar9[8] != 0) {
            puVar10 = (undefined8 *)plVar9[7];
            lVar7 = (longlong)(int)plVar9[8] * 0x90;
            do {
              FUN_14093c0ae(lVar1,&local_78,*puVar10);
              if (local_78 != (longlong *)0x0) {
                (**(code **)(*local_78 + 0x30))(local_78,param_2,puVar10);
              }
              plVar8 = local_70;
              if (local_70 != (longlong *)0x0) {
                LOCK();
                plVar3 = local_70 + 1;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)*plVar3 == 0) {
                  (**(code **)*local_70)(local_70);
                  LOCK();
                  piVar4 = (int *)((longlong)plVar8 + 0xc);
                  *piVar4 = *piVar4 + -1;
                  UNLOCK();
                  if (*piVar4 == 0) {
                    (**(code **)(*plVar8 + 0x10))(plVar8);
                  }
                }
              }
              puVar10 = puVar10 + 0x12;
              lVar7 = lVar7 + -0x90;
            } while (lVar7 != 0);
          }
          if ((longlong)(int)plVar9[10] != 0) {
            puVar10 = (undefined8 *)plVar9[9];
            lVar7 = (longlong)(int)plVar9[10] * 0x210;
            do {
              FUN_14093c0ae(lVar1,&local_78,*puVar10);
              if (local_78 != (longlong *)0x0) {
                (**(code **)(*local_78 + 0x28))(local_78,param_2,puVar10);
              }
              plVar8 = local_70;
              if (local_70 != (longlong *)0x0) {
                LOCK();
                plVar3 = local_70 + 1;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)*plVar3 == 0) {
                  (**(code **)*local_70)(local_70);
                  LOCK();
                  piVar4 = (int *)((longlong)plVar8 + 0xc);
                  *piVar4 = *piVar4 + -1;
                  UNLOCK();
                  if (*piVar4 == 0) {
                    (**(code **)(*plVar8 + 0x10))(plVar8);
                  }
                }
              }
              puVar10 = puVar10 + 0x42;
              lVar7 = lVar7 + -0x210;
            } while (lVar7 != 0);
          }
          if ((longlong)(int)plVar9[0xc] != 0) {
            puVar10 = (undefined8 *)plVar9[0xb];
            lVar7 = (longlong)(int)plVar9[0xc] * 0x48;
            do {
              FUN_14093c0ae(lVar1,&local_78,*puVar10);
              if (local_78 != (longlong *)0x0) {
                (**(code **)(*local_78 + 0x18))(local_78,param_2,puVar10);
              }
              plVar8 = local_70;
              if (local_70 != (longlong *)0x0) {
                LOCK();
                plVar3 = local_70 + 1;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)*plVar3 == 0) {
                  (**(code **)*local_70)(local_70);
                  LOCK();
                  piVar4 = (int *)((longlong)plVar8 + 0xc);
                  *piVar4 = *piVar4 + -1;
                  UNLOCK();
                  if (*piVar4 == 0) {
                    (**(code **)(*plVar8 + 0x10))(plVar8);
                  }
                }
              }
              puVar10 = puVar10 + 9;
              lVar7 = lVar7 + -0x48;
            } while (lVar7 != 0);
          }
          if ((longlong)(int)plVar9[0xe] != 0) {
            puVar10 = (undefined8 *)plVar9[0xd];
            lVar7 = (longlong)(int)plVar9[0xe] << 5;
            do {
              FUN_14093c0ae(lVar1,&local_78,*puVar10);
              if (local_78 != (longlong *)0x0) {
                (**(code **)(*local_78 + 0x20))(local_78,param_2,puVar10);
              }
              plVar8 = local_70;
              if (local_70 != (longlong *)0x0) {
                LOCK();
                plVar3 = local_70 + 1;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)*plVar3 == 0) {
                  (**(code **)*local_70)(local_70);
                  LOCK();
                  piVar4 = (int *)((longlong)plVar8 + 0xc);
                  *piVar4 = *piVar4 + -1;
                  UNLOCK();
                  if (*piVar4 == 0) {
                    (**(code **)(*plVar8 + 0x10))(plVar8);
                  }
                }
              }
              puVar10 = puVar10 + 4;
              lVar7 = lVar7 + -0x20;
            } while (lVar7 != 0);
          }
          local_58 = *(undefined8 *)((longlong)plVar9 + 0x1c);
          local_68 = *(undefined4 *)((longlong)plVar9 + 0xc);
          uStack_64 = (undefined4)plVar9[2];
          uStack_60 = *(undefined4 *)((longlong)plVar9 + 0x14);
          uStack_5c = (undefined4)plVar9[3];
          param_1 = local_88;
        }
        break;
      }
      plVar9 = plVar9 + 0x13;
      lVar7 = lVar7 + -0x98;
    } while (lVar7 != 0);
  }
LAB_14093bb99:
  iVar5 = 1;
  if (*(longlong *)(param_1 + 0x188) == 0) {
    iVar5 = -(uint)(*(longlong *)(param_1 + 0x180) == 0);
  }
  if (iVar5 == param_2) {
    *(undefined8 *)(param_1 + 0x1c4) = local_58;
    *(undefined4 *)(param_1 + 0x1b4) = local_68;
    *(undefined4 *)(param_1 + 0x1b8) = uStack_64;
    *(undefined4 *)(param_1 + 0x1bc) = uStack_60;
    *(undefined4 *)(param_1 + 0x1c0) = uStack_5c;
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14093c00e FUN_14093c00e body=92 status=ok
// SIG undefined FUN_14093c00e(void)

undefined8 * FUN_14093c00e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_140501c24(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x1c);
      }
    }
  }
  return param_1;
}



// FUNCTION 14093c0ae FUN_14093c0ae body=712 status=ok
// SIG undefined FUN_14093c0ae(void)

void FUN_14093c0ae(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = (int)((ulonglong)param_3 >> 0x20);
  uVar4 = (ushort)((ulonglong)param_3 >> 0x10);
  uVar3 = (ushort)param_3;
  iVar7 = (int)param_3;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar2 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    iVar5 + (iVar7 << 0x10 | (uint)uVar3) + ((uint)uVar4 << 0x13 | (uint)uVar4) +
                    (uint)(uVar3 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar6 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x20) == param_3) {
          if ((lVar1 != 0) && (lVar1 != -8)) goto LAB_14093c267;
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x18);
      } while (iVar6 != -1);
    }
  }
  if ((int)param_1[0xb] != *(int *)((longlong)param_1 + 0x84)) {
    plVar2 = param_1 + 0x11;
    if ((longlong *)param_1[0x12] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[0x12];
    }
    iVar6 = *(int *)((longlong)plVar2 +
                    (ulonglong)
                    ((int)param_1[0x13] - 1U &
                    iVar5 + (iVar7 << 0x10 | (uint)uVar3) + ((uint)uVar4 << 0x13 | (uint)uVar4) +
                    (uint)(uVar3 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        lVar1 = param_1[10] + (longlong)iVar6 * 0x20;
        if (*(longlong *)(param_1[10] + (longlong)iVar6 * 0x20) == param_3) {
          if ((lVar1 != 0) && (lVar1 != -8)) goto LAB_14093c267;
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x18);
      } while (iVar6 != -1);
    }
  }
  if ((int)param_1[0x15] != *(int *)((longlong)param_1 + 0xd4)) {
    plVar2 = param_1 + 0x1b;
    if ((longlong *)param_1[0x1c] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[0x1c];
    }
    iVar6 = *(int *)((longlong)plVar2 +
                    (ulonglong)
                    ((int)param_1[0x1d] - 1U &
                    iVar5 + (iVar7 << 0x10 | (uint)uVar3) + ((uint)uVar4 << 0x13 | (uint)uVar4) +
                    (uint)(uVar3 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        lVar1 = param_1[0x14] + (longlong)iVar6 * 0x20;
        if (*(longlong *)(param_1[0x14] + (longlong)iVar6 * 0x20) == param_3) {
          if ((lVar1 != 0) && (lVar1 != -8)) goto LAB_14093c267;
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x18);
      } while (iVar6 != -1);
    }
  }
  if ((int)param_1[0x1f] != *(int *)((longlong)param_1 + 0x124)) {
    plVar2 = param_1 + 0x25;
    if ((longlong *)param_1[0x26] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[0x26];
    }
    iVar7 = *(int *)((longlong)plVar2 +
                    (ulonglong)
                    ((int)param_1[0x27] - 1U &
                    iVar5 + (iVar7 << 0x10 | (uint)uVar3) + ((uint)uVar4 << 0x13 | (uint)uVar4) +
                    (uint)(uVar3 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        lVar1 = param_1[0x1e] + (longlong)iVar7 * 0x20;
        if (*(longlong *)(param_1[0x1e] + (longlong)iVar7 * 0x20) == param_3) {
          if ((lVar1 + 8U & 0xfffffffffffffff7) != 0) goto LAB_14093c267;
          break;
        }
        iVar7 = *(int *)(lVar1 + 0x18);
      } while (iVar7 != -1);
    }
  }
  lVar1 = param_1[0x28];
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 8) != param_3)) {
    *param_2 = 0;
    param_2[1] = 0;
    return;
  }
  *param_2 = lVar1;
  lVar1 = param_1[0x29];
LAB_14093c272:
  param_2[1] = lVar1;
  if (lVar1 == 0) {
    return;
  }
  LOCK();
  *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  UNLOCK();
  return;
LAB_14093c267:
  *param_2 = *(longlong *)(lVar1 + 8);
  lVar1 = *(longlong *)(lVar1 + 0x10);
  goto LAB_14093c272;
}



// FUNCTION 14093c376 FUN_14093c376 body=86 status=ok
// SIG undefined FUN_14093c376(void)

void FUN_14093c376(longlong param_1,uint param_2,undefined8 *param_3)

{
  if (param_2 < 2) {
    param_1 = param_1 + (ulonglong)param_2 * 0x90;
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_3 + 1);
    *(undefined8 *)(param_1 + 0x10) = *param_3;
    FUN_14093c3cc(param_1 + 0x88,param_3 + 0xf);
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_3 + 0x11);
    *(undefined1 *)(param_1 + 0x9c) = *(undefined1 *)((longlong)param_3 + 0x8c);
  }
  return;
}



// FUNCTION 14093c3cc FUN_14093c3cc body=88 status=ok
// SIG undefined FUN_14093c3cc(void)

undefined8 * FUN_14093c3cc(undefined8 *param_1,undefined8 *param_2)

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
      FUN_140a3dae8(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14093c424 FUN_14093c424 body=112 status=ok
// SIG undefined FUN_14093c424(void)

void FUN_14093c424(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 < 2) {
    param_1 = (ulonglong)param_2 * 0x210 + param_1;
    lVar2 = param_1 + 0xa8;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_3 + 1);
    *(undefined8 *)(param_1 + 0x28) = *param_3;
    lVar1 = 4;
    do {
      *(undefined2 *)(lVar2 + -4) = *(undefined2 *)((longlong)param_3 + 0x7c);
      *(undefined4 *)(lVar2 + -8) = *(undefined4 *)(param_3 + 0xf);
      FUN_14093c00e(lVar2,param_3 + 0x10);
      lVar2 = lVar2 + 0x80;
      lVar1 = lVar1 + -1;
      param_3 = param_3 + 0x10;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 14093c494 FUN_14093c494 body=112 status=ok
// SIG undefined FUN_14093c494(void)

void FUN_14093c494(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 < 2) {
    param_1 = (ulonglong)param_2 * 0x210 + param_1;
    lVar2 = param_1 + 0x90;
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_3 + 1);
    *(undefined8 *)(param_1 + 0x10) = *param_3;
    lVar1 = 4;
    do {
      *(undefined2 *)(lVar2 + -4) = *(undefined2 *)((longlong)param_3 + 0x7c);
      *(undefined4 *)(lVar2 + -8) = *(undefined4 *)(param_3 + 0xf);
      FUN_14093c00e(lVar2,param_3 + 0x10);
      lVar2 = lVar2 + 0x80;
      lVar1 = lVar1 + -1;
      param_3 = param_3 + 0x10;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 14093c504 FUN_14093c504 body=112 status=ok
// SIG undefined FUN_14093c504(void)

void FUN_14093c504(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 < 2) {
    param_1 = (ulonglong)param_2 * 0x210 + param_1;
    lVar2 = param_1 + 0xd0;
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_3 + 1);
    *(undefined8 *)(param_1 + 0x50) = *param_3;
    lVar1 = 4;
    do {
      *(undefined2 *)(lVar2 + -4) = *(undefined2 *)((longlong)param_3 + 0x7c);
      *(undefined4 *)(lVar2 + -8) = *(undefined4 *)(param_3 + 0xf);
      FUN_14093c00e(lVar2,param_3 + 0x10);
      lVar2 = lVar2 + 0x80;
      lVar1 = lVar1 + -1;
      param_3 = param_3 + 0x10;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 14093c574 FUN_14093c574 body=86 status=ok
// SIG undefined FUN_14093c574(void)

void FUN_14093c574(longlong param_1,uint param_2,undefined8 *param_3)

{
  if (param_2 < 2) {
    param_1 = param_1 + (ulonglong)param_2 * 0x90;
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_3 + 1);
    *(undefined8 *)(param_1 + 0x10) = *param_3;
    FUN_14093c3cc(param_1 + 0x88,param_3 + 0xf);
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_3 + 0x11);
    *(undefined1 *)(param_1 + 0x9c) = *(undefined1 *)((longlong)param_3 + 0x8c);
  }
  return;
}



// FUNCTION 14093c5ca FUN_14093c5ca body=444 status=ok
// SIG undefined FUN_14093c5ca(void)

void FUN_14093c5ca(longlong param_1,uint param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  
  if (param_2 < 2) {
    lVar3 = (ulonglong)param_2 * 0x10 + (ulonglong)*(byte *)(param_3 + 8) * 0x20 + param_1;
    plVar10 = (longlong *)(lVar3 + 0x30);
    FUN_14093d487(*plVar10,*(undefined4 *)(lVar3 + 0x38));
    *(undefined4 *)(lVar3 + 0x38) = 0;
    if (*(int *)(lVar3 + 0x3c) != 0) {
      FUN_14093d50a(plVar10);
    }
    if ((longlong)*(int *)(param_3 + 0x18) != 0) {
      puVar11 = *(undefined4 **)(param_3 + 0x10);
      puVar4 = puVar11 + (longlong)*(int *)(param_3 + 0x18) * 6;
      do {
        plVar9 = (longlong *)FUN_14001cc68(0x30,0x10);
        plVar9[1] = (longlong)&DAT_100000001;
        *plVar9 = (longlong)&PTR_FUN_14afe2c60;
        plVar9[2] = 0;
        plVar9[3] = 0;
        plVar9[4] = 0;
        plVar9[5] = 0;
        *(undefined4 *)(plVar9 + 2) = 0xbf800000;
        plVar9[3] = 0;
        plVar9[4] = 0;
        *(undefined1 *)(plVar9 + 5) = 0;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
          LOCK();
          plVar8 = plVar9 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
        *(undefined4 *)(plVar9 + 2) = *puVar11;
        lVar6 = *(longlong *)(puVar11 + 2);
        lVar7 = *(longlong *)(puVar11 + 4);
        if (lVar7 != 0) {
          LOCK();
          *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
          UNLOCK();
        }
        plVar8 = (longlong *)plVar9[4];
        plVar9[3] = lVar6;
        plVar9[4] = lVar7;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar8 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
        iVar5 = *(int *)(lVar3 + 0x38);
        *(uint *)(lVar3 + 0x38) = iVar5 + 1U;
        if (*(uint *)(lVar3 + 0x3c) < iVar5 + 1U) {
          FUN_14093c786(plVar10,iVar5);
        }
        lVar6 = *plVar10;
        *(longlong **)(lVar6 + (longlong)iVar5 * 0x10) = plVar9 + 2;
        *(longlong **)(lVar6 + 8 + (longlong)iVar5 * 0x10) = plVar9;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
          LOCK();
          plVar8 = plVar9 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
        puVar11 = puVar11 + 6;
      } while (puVar11 != puVar4);
    }
  }
  return;
}



// FUNCTION 14093c786 FUN_14093c786 body=269 status=ok
// SIG undefined FUN_14093c786(void)

void FUN_14093c786(longlong param_1,int param_2)

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



// FUNCTION 14093c894 FUN_14093c894 body=1264 status=ok
// SIG undefined FUN_14093c894(void)

void FUN_14093c894(longlong *param_1,undefined4 param_2)

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
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar14 = 1;
    uVar15 = 0;
    iVar5 = 0;
    iVar10 = 0;
  }
  else {
    puVar6 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar6;
    if (uVar7 == 0) {
      iVar5 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar5 = iVar2 + -1;
      }
      uVar15 = 0;
      uVar14 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar14 = uVar15;
      }
      iVar10 = 0;
      do {
        if (uVar14 == uVar15) goto LAB_14093c9f8;
        iVar10 = iVar10 + 0x20;
        uVar7 = puVar6[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar15 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar7 & uVar7);
    uVar1 = uVar14 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar5 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
  }
  if (iVar5 != iVar2) {
    uVar7 = 0xffffffff;
    do {
      plVar4 = *(longlong **)(*param_1 + 8 + (longlong)iVar5 * 0x20);
      (**(code **)(*plVar4 + 0x98))(plVar4,param_2);
      uVar7 = ~(uint)uVar14 & uVar7;
      puVar6 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 2);
      }
      iVar3 = (int)param_1[5];
      iVar5 = (int)uVar15;
      lVar12 = (longlong)iVar5;
      uVar11 = puVar6[lVar12] & uVar7;
      if (uVar11 == 0) {
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
          lVar13 = 0;
          do {
            uVar11 = puVar6[lVar12 + lVar13 + 1];
            if (uVar11 != 0) {
              uVar15 = (ulonglong)(iVar5 + (int)lVar13 + 1);
              uVar7 = 0xffffffff;
              goto LAB_14093c9c0;
            }
            iVar10 = iVar10 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar9 - lVar12 != lVar13);
          uVar7 = 0xffffffff;
          iVar5 = iVar9;
        }
        uVar15 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar3;
      }
      else {
LAB_14093c9c0:
        uVar14 = (ulonglong)(-uVar11 & uVar11);
        uVar1 = uVar14 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar5 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar5) {
          iVar5 = iVar3;
        }
      }
    } while (iVar5 != iVar2);
  }
LAB_14093c9f8:
  iVar2 = (int)param_1[0xf];
  if (iVar2 == 0) {
    uVar14 = 1;
    uVar15 = 0;
    iVar5 = 0;
    iVar10 = 0;
  }
  else {
    puVar6 = (uint *)param_1[0xe];
    if ((uint *)param_1[0xe] == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 0xc);
    }
    uVar7 = *puVar6;
    if (uVar7 == 0) {
      iVar5 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar5 = iVar2 + -1;
      }
      uVar15 = 0;
      uVar14 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar14 = uVar15;
      }
      iVar10 = 0;
      do {
        if (uVar14 == uVar15) goto LAB_14093cb48;
        iVar10 = iVar10 + 0x20;
        uVar7 = puVar6[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar15 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar7 & uVar7);
    uVar1 = uVar14 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar5 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
  }
  if (iVar5 != iVar2) {
    uVar7 = 0xffffffff;
    do {
      plVar4 = *(longlong **)(param_1[10] + 8 + (longlong)iVar5 * 0x20);
      (**(code **)(*plVar4 + 0x98))(plVar4,param_2);
      uVar7 = ~(uint)uVar14 & uVar7;
      puVar6 = (uint *)param_1[0xe];
      if ((uint *)param_1[0xe] == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 0xc);
      }
      iVar3 = (int)param_1[0xf];
      iVar5 = (int)uVar15;
      lVar12 = (longlong)iVar5;
      uVar11 = puVar6[lVar12] & uVar7;
      if (uVar11 == 0) {
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
          lVar13 = 0;
          do {
            uVar11 = puVar6[lVar12 + lVar13 + 1];
            if (uVar11 != 0) {
              uVar15 = (ulonglong)(iVar5 + (int)lVar13 + 1);
              uVar7 = 0xffffffff;
              goto LAB_14093cb10;
            }
            iVar10 = iVar10 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar9 - lVar12 != lVar13);
          uVar7 = 0xffffffff;
          iVar5 = iVar9;
        }
        uVar15 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar3;
      }
      else {
LAB_14093cb10:
        uVar14 = (ulonglong)(-uVar11 & uVar11);
        uVar1 = uVar14 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar5 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar5) {
          iVar5 = iVar3;
        }
      }
    } while (iVar5 != iVar2);
  }
LAB_14093cb48:
  iVar2 = (int)param_1[0x19];
  if (iVar2 == 0) {
    uVar14 = 1;
    uVar15 = 0;
    iVar5 = 0;
    iVar10 = 0;
  }
  else {
    puVar6 = (uint *)param_1[0x18];
    if ((uint *)param_1[0x18] == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 0x16);
    }
    uVar7 = *puVar6;
    if (uVar7 == 0) {
      iVar5 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar5 = iVar2 + -1;
      }
      uVar15 = 0;
      uVar14 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar14 = uVar15;
      }
      iVar10 = 0;
      do {
        if (uVar14 == uVar15) {
          return;
        }
        iVar10 = iVar10 + 0x20;
        uVar7 = puVar6[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar15 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar7 & uVar7);
    uVar1 = uVar14 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar5 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
  }
  if (iVar5 != iVar2) {
    uVar7 = 0xffffffff;
    do {
      plVar4 = *(longlong **)(param_1[0x14] + 8 + (longlong)iVar5 * 0x20);
      (**(code **)(*plVar4 + 0x98))(plVar4,param_2);
      uVar7 = ~(uint)uVar14 & uVar7;
      puVar6 = (uint *)param_1[0x18];
      if ((uint *)param_1[0x18] == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 0x16);
      }
      iVar3 = (int)param_1[0x19];
      iVar5 = (int)uVar15;
      lVar12 = (longlong)iVar5;
      uVar11 = puVar6[lVar12] & uVar7;
      if (uVar11 == 0) {
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
          lVar13 = 0;
          do {
            uVar11 = puVar6[lVar12 + lVar13 + 1];
            if (uVar11 != 0) {
              uVar15 = (ulonglong)(iVar5 + (int)lVar13 + 1);
              uVar7 = 0xffffffff;
              goto LAB_14093cc72;
            }
            iVar10 = iVar10 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar9 - lVar12 != lVar13);
          uVar7 = 0xffffffff;
          iVar5 = iVar9;
        }
        uVar15 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar3;
      }
      else {
LAB_14093cc72:
        uVar14 = (ulonglong)(-uVar11 & uVar11);
        uVar1 = uVar14 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar5 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar5) {
          iVar5 = iVar3;
        }
      }
    } while (iVar5 != iVar2);
  }
  return;
}



// FUNCTION 14093cd84 FUN_14093cd84 body=57 status=ok
// SIG undefined FUN_14093cd84(void)

void FUN_14093cd84(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  if (param_2 < 2) {
    lVar1 = param_1 + (ulonglong)param_2 * 0x90;
    FUN_14093cdbe(lVar1 + 0x20);
    *(undefined4 *)(lVar1 + 0x88) = *(undefined4 *)(param_1 + 0xc);
  }
  return;
}



// FUNCTION 14093cdbe FUN_14093cdbe body=83 status=ok
// SIG undefined FUN_14093cdbe(void)

void FUN_14093cdbe(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_14093d050(param_1 + 0x70,0);
  }
  FUN_14093ce12(param_1 + 8,0);
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 100) == 0) {
    return;
  }
  FUN_1406525c2(param_1 + 0x58,0);
  return;
}



// FUNCTION 14093ce12 FUN_14093ce12 body=236 status=ok
// SIG undefined FUN_14093ce12(void)

void FUN_14093ce12(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  
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
  if ((int)param_2 < 1) {
    if (iVar4 < *(int *)(param_1 + 0x48)) {
LAB_14093cedb:
      FUN_147a4a3ea(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1406513ec(param_1);
      return;
    }
    FUN_14093cf00(param_1);
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
  }
  else {
    if (*(int *)(param_1 + 0x48) != iVar4) goto LAB_14093cedb;
    FUN_14093cf00(param_1);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(uint *)(param_1 + 0xc) != param_2) {
    FUN_14472eb64(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar5 = param_2 + 0x1f & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar5 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar2 = 0x80;
  if (0x80 < (int)uVar5) {
    uVar2 = uVar5;
  }
  *(uint *)(param_1 + 0x2c) = uVar2;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14093cf00 FUN_14093cf00 body=335 status=ok
// SIG undefined FUN_14093cf00(void)

void FUN_14093cf00(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
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



// FUNCTION 14093d050 FUN_14093d050 body=119 status=ok
// SIG undefined FUN_14093d050(void)

void FUN_14093d050(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x1c,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x1c)) {
      uVar2 = uVar1 / 0x1c & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x1c,4);
  }
  return;
}



// FUNCTION 14093d0c8 FUN_14093d0c8 body=57 status=ok
// SIG undefined FUN_14093d0c8(void)

void FUN_14093d0c8(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  if (param_2 < 2) {
    lVar1 = param_1 + (ulonglong)param_2 * 0x90;
    FUN_14093cdbe(lVar1 + 0x60);
    *(undefined4 *)(lVar1 + 200) = *(undefined4 *)(param_1 + 0x48);
  }
  return;
}



// FUNCTION 14093d102 FUN_14093d102 body=153 status=ok
// SIG undefined FUN_14093d102(void)

void FUN_14093d102(longlong param_1,uint param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 < 2) {
    local_28[0] = *(undefined4 *)(param_1 + 0x18);
    local_28[1] = *(undefined4 *)(param_1 + 0x1c);
    local_28[2] = *(undefined4 *)(param_1 + 0x20);
    local_28[3] = *(undefined4 *)(param_1 + 0x24);
    puVar1 = (undefined4 *)((ulonglong)param_2 * 0x210 + param_1 + 0xa0);
    lVar2 = 0;
    do {
      FUN_14093cdbe(puVar1 + -0x1a);
      *puVar1 = local_28[lVar2];
      lVar2 = lVar2 + 1;
      puVar1 = puVar1 + 0x20;
    } while (lVar2 != 4);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14093d19c FUN_14093d19c body=153 status=ok
// SIG undefined FUN_14093d19c(void)

void FUN_14093d19c(longlong param_1,uint param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 < 2) {
    local_28[0] = *(undefined4 *)(param_1 + 0x3c);
    local_28[1] = *(undefined4 *)(param_1 + 0x40);
    local_28[2] = *(undefined4 *)(param_1 + 0x44);
    local_28[3] = *(undefined4 *)(param_1 + 0x48);
    puVar1 = (undefined4 *)((ulonglong)param_2 * 0x210 + param_1 + 200);
    lVar2 = 0;
    do {
      FUN_14093cdbe(puVar1 + -0x1a);
      *puVar1 = local_28[lVar2];
      lVar2 = lVar2 + 1;
      puVar1 = puVar1 + 0x20;
    } while (lVar2 != 4);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14093d236 FUN_14093d236 body=472 status=ok
// SIG undefined FUN_14093d236(void)

void FUN_14093d236(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_d8 [40];
  undefined **local_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  undefined1 local_98 [16];
  longlong local_88;
  undefined4 local_80;
  uint local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (1 < param_2) goto LAB_14093d3a1;
  local_88 = 0;
  local_80 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_7c = 0x80;
  uStack_78 = 0xffffffff;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_b0 = &PTR_FUN_14a46be50;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0x7fffffff;
  local_34 = 0;
  lVar1 = param_1 + (ulonglong)param_2 * 0x90;
  if ((undefined ***)(lVar1 + 0x20) == &local_b0) {
LAB_14093d318:
    *(undefined1 *)(lVar1 + 0x9c) = 0;
    *(undefined4 *)(lVar1 + 0x98) = 0x7fffffff;
  }
  else {
    *(undefined4 *)(lVar1 + 0x90) = 0;
    if (*(int *)(lVar1 + 0x94) == 0) goto LAB_14093d318;
    FUN_140a3dae8(param_1 + (ulonglong)param_2 * 0x90 + 0x88,0);
    *(undefined1 *)(lVar1 + 0x9c) = local_34;
    *(undefined4 *)(lVar1 + 0x98) = local_38;
    local_b0 = &PTR_FUN_14a46be50;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  local_b0 = &PTR_FUN_14a177080;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  local_60 = 0;
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  uVar2 = uStack_a0 >> 0x20;
  uStack_a0 = uStack_a0 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    FUN_14472eb64(&local_a8,0);
  }
  uStack_78 = 0xffffffff;
  local_74 = 0;
  local_80 = 0;
  if (0x80 < local_7c) {
    local_7c = 0x80;
    FUN_1446efbd8(local_98,0);
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  *(uint *)(lVar1 + 0x98) = (uint)*(byte *)(param_1 + 9);
LAB_14093d3a1:
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14093d410 FUN_14093d410 body=119 status=ok
// SIG undefined FUN_14093d410(void)

void FUN_14093d410(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  if (param_2 < 2) {
    lVar1 = (ulonglong)param_2 * 0x10;
    FUN_14093d487(*(undefined8 *)(param_1 + 0x30 + lVar1),*(undefined4 *)(param_1 + 0x38 + lVar1));
    *(undefined4 *)(param_1 + 0x38 + lVar1) = 0;
    if (*(int *)(param_1 + 0x3c + lVar1) != 0) {
      FUN_14093d50a(param_1 + lVar1 + 0x30);
    }
    FUN_14093d487(*(undefined8 *)(param_1 + 0x50 + lVar1),*(undefined4 *)(param_1 + 0x58 + lVar1));
    *(undefined4 *)(param_1 + 0x58 + lVar1) = 0;
    if (*(int *)(param_1 + 0x5c + lVar1) != 0) {
      FUN_14093d50a(param_1 + lVar1 + 0x50);
      return;
    }
  }
  return;
}



// FUNCTION 14093d487 FUN_14093d487 body=75 status=ok
// SIG undefined FUN_14093d487(void)

void FUN_14093d487(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14093d4d2 FUN_14093d4d2 body=55 status=ok
// SIG undefined FUN_14093d4d2(void)

void FUN_14093d4d2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
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
                    /* WARNING: Could not recover jumptable at 0x00014093d505. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14093d50a FUN_14093d50a body=48 status=ok
// SIG undefined FUN_14093d50a(void)

void FUN_14093d50a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 14093d53a FUN_14093d53a body=21 status=ok
// SIG undefined FUN_14093d53a(void)

undefined8 FUN_14093d53a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14093d550 FUN_14093d550 body=103 status=ok
// SIG undefined FUN_14093d550(void)

void FUN_14093d550(char *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (*param_1 != '\0')) {
    lVar2 = *(longlong *)(param_2 + 0xa8);
    lVar1 = FUN_140458208(param_1);
    if (lVar2 == lVar1) {
      lVar2 = FUN_144a3a302();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar2 + 0x38) * 8) != lVar2 + 0x30)) {
        param_2 = 0;
      }
      FUN_145757ada(param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 14093d5b8 FUN_14093d5b8 body=306 status=ok
// SIG undefined FUN_14093d5b8(void)

void FUN_14093d5b8(undefined8 param_1,longlong param_2)

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
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_2 != 0) &&
     (lVar1 = *(longlong *)(param_2 + 0xa8), lVar2 = FUN_140458208(), lVar1 == lVar2)) {
    if (DAT_14cac6e60 == 0) {
      local_40 = &local_28;
      local_28 = FUN_144a7958c;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_142b47bc4;
      local_48 = &LAB_1478989f1;
      local_50 = &LAB_146391124;
      local_58 = L"Engine";
      local_60 = 0x10000000000;
      local_68 = 0x10000005;
      local_70 = 0x10;
      local_78 = 0x620;
      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14093d700 FUN_14093d700 body=170 status=ok
// SIG undefined FUN_14093d700(void)

void FUN_14093d700(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 != (longlong *)0x0) && ((longlong)*(int *)(param_1 + 0x18) != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar3 = (longlong)*(int *)(param_1 + 0x18) << 3;
    do {
      cVar1 = FUN_140f9880e(lVar2,param_2);
      if (cVar1 != '\0') {
        local_38 = 0;
        FUN_14485c47a(&local_38,param_2);
        local_30 = &local_38;
        FUN_141086cf2(param_1 + 0x10);
        (**(code **)(*param_2 + 0x660))(param_2,0);
        break;
      }
      lVar2 = lVar2 + 8;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14093d7ac FUN_14093d7ac body=385 status=ok
// SIG undefined FUN_14093d7ac(void)

undefined8 FUN_14093d7ac(longlong *param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [40];
  longlong local_60;
  int local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 == '\0') {
    if ((char)param_1[6] != '\x01') goto LAB_14093d8c5;
  }
  else if (*(char *)((longlong)param_1 + 0x31) == '\0') goto LAB_14093d8c5;
  FUN_140056680(&local_50,param_2);
  FUN_14093d9c4(&local_40,&local_50);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  lVar6 = local_40;
  local_60 = local_40;
  iVar1 = (int)uStack_38;
  local_58 = (int)uStack_38 + -1;
  if ((int)uStack_38 == 0) {
    local_58 = 0;
  }
  cVar5 = (**(code **)(*param_1 + 8))(param_1);
  if (cVar5 != '\0') {
    if (*(char *)((longlong)param_1 + 0x32) == '\x01') {
      FUN_140056680(&local_50,param_2);
    }
    else {
      local_50 = lVar6;
      uVar4 = uStack_38._4_4_;
      local_40 = 0;
      uStack_38 = 0;
      local_48 = CONCAT44(uVar4,iVar1);
      lVar6 = 0;
    }
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 3));
    plVar2 = (longlong *)param_1[2];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1447a1bd6(plVar2,iVar1);
    }
    lVar3 = *plVar2;
    lVar7 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar7) = 0;
    *(longlong *)(lVar3 + lVar7) = local_50;
    local_50 = 0;
    *(undefined4 *)(lVar3 + 8 + lVar7) = (undefined4)local_48;
    *(undefined4 *)(lVar3 + 0xc + lVar7) = local_48._4_4_;
    local_48 = 0;
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 3));
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  if (lVar6 != 0) {
    FUN_1400020a8(lVar6);
  }
LAB_14093d8c5:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 14093d92e FUN_14093d92e body=148 status=ok
// SIG undefined FUN_14093d92e(void)

undefined4 FUN_14093d92e(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14006620a(&local_30,*param_2,*(undefined4 *)(param_2 + 1));
  iVar4 = *(int *)(param_1 + 0x28);
  puVar5 = &DAT_149dfb77a;
  if (iVar4 != 0) {
    puVar5 = *(undefined2 **)(param_1 + 0x20);
  }
  iVar1 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar1 = 0;
  }
  iVar4 = local_28 + -1;
  puVar2 = local_30;
  if (local_28 == 0) {
    iVar4 = 0;
    puVar2 = &DAT_149dfb77a;
  }
  uVar3 = FUN_14038a9c4(puVar2,iVar4,puVar5,iVar1);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8(local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14093d9c4 FUN_14093d9c4 body=333 status=ok
// SIG undefined FUN_14093d9c4(void)

longlong * FUN_14093d9c4(longlong *param_1,longlong *param_2)

{
  void *_Dst;
  short sVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  iVar3 = (int)param_2[1];
  lVar2 = *param_2;
  iVar7 = -1;
  uVar4 = iVar3 - 1U;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  if (iVar3 != 0 && iVar3 - 1U != 0) {
    uVar6 = (longlong)(int)uVar4 * 2 - 2;
    do {
      if ((*(short *)(lVar2 + uVar6) != 0x5c) && (*(short *)(lVar2 + uVar6) != 0x2f)) {
        iVar7 = (int)(uVar6 >> 1);
        break;
      }
      uVar6 = uVar6 - 2;
    } while (uVar6 != 0xfffffffffffffffe);
  }
  uVar6 = (longlong)(int)uVar4 * 2;
  do {
    if (uVar6 == 0) {
      iVar5 = -1;
      goto LAB_14093da3d;
    }
    sVar1 = *(short *)(lVar2 + -2 + uVar6);
    uVar6 = uVar6 - 2;
  } while ((sVar1 != 0x2f) && (sVar1 != 0x5c));
  iVar5 = (int)(uVar6 >> 1);
LAB_14093da3d:
  if (iVar7 < iVar5) {
    FUN_144a7e010(param_2);
    iVar3 = (int)param_2[1];
  }
  else {
    iVar7 = iVar7 + 1;
    uVar9 = uVar4 - iVar7;
    if (0 < (int)uVar9) {
      iVar8 = iVar3 - (uVar9 + iVar7);
      if (iVar8 != 0) {
        _Dst = (void *)(lVar2 + (longlong)iVar7 * 2);
        memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)uVar9 * 2),(longlong)iVar8 * 2);
        iVar3 = (int)param_2[1];
      }
      iVar3 = iVar3 - uVar9;
      *(int *)(param_2 + 1) = iVar3;
      uVar4 = iVar3 - 1;
      if (iVar3 == 0) {
        uVar4 = 0;
      }
    }
    if ((int)(iVar5 + 1U) < (int)uVar4) {
      uVar4 = iVar5 + 1U;
    }
    if (0 < (int)uVar4) {
      if (iVar3 - uVar4 != 0) {
        memmove((void *)*param_2,(void *)(*param_2 + (ulonglong)uVar4 * 2),
                (longlong)(int)(iVar3 - uVar4) * 2);
        iVar3 = (int)param_2[1];
      }
      iVar3 = iVar3 - uVar4;
    }
  }
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = iVar3;
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  return param_1;
}



// FUNCTION 14093db12 FUN_14093db12 body=1285 status=ok
// SIG undefined FUN_14093db12(void)

undefined8 FUN_14093db12(longlong param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  wchar_t *local_90;
  undefined4 local_88;
  code *local_80;
  undefined1 *local_78;
  undefined2 **local_70;
  longlong *local_68;
  longlong local_60;
  int local_58;
  longlong local_50;
  int local_48;
  undefined2 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (((param_2 != (longlong *)0x0) && ((*(uint *)(param_2 + 1) & 0x18000) == 0)) &&
     ((*(uint *)(param_2 + 1) & 1) != 0)) {
    if (DAT_14cc01808 == 0) {
      uVar7 = FUN_1408ed7fc();
      DAT_14cc01808 = FUN_140002ddd(FUN_1466852b6,uVar7,L"RigVMStruct");
      if (DAT_14cc01808 != 0) goto LAB_14093db6b;
    }
    else {
LAB_14093db6b:
      if (((*(int *)(DAT_14cc01808 + 0x38) <= (int)param_2[7]) &&
          (*(longlong *)(param_2[6] + (longlong)*(int *)(DAT_14cc01808 + 0x38) * 8) ==
           DAT_14cc01808 + 0x30)) &&
         ((lVar5 = FUN_146681ebc(), lVar5 == 0 ||
          (((int)param_2[7] < *(int *)(lVar5 + 0x38) ||
           (*(longlong *)(param_2[6] + (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30))))))
      goto LAB_14093dd7f;
    }
    lVar5 = FUN_1408cc580();
    plVar9 = param_2;
    if ((lVar5 == 0) ||
       (((int)param_2[7] < *(int *)(lVar5 + 0x38) ||
        (*(longlong *)(param_2[6] + (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)))) {
LAB_14093dbae:
      plVar10 = plVar9;
      plVar9 = plVar10;
      if ((longlong *)plVar10[4] != (longlong *)0x0) goto code_r0x00014093dbbd;
      goto LAB_14093dbcb;
    }
  }
  goto LAB_14093dd7f;
LAB_14093df58:
  if (*(code **)(*param_2 + 0x2b0) == (code *)&LAB_1446e8c94) {
    param_2 = (longlong *)param_2[8];
  }
  else {
    param_2 = (longlong *)(**(code **)(*param_2 + 0x2b0))(param_2);
  }
  uVar7 = 1;
  if (param_2 == (longlong *)0x0) goto LAB_14093dd81;
  goto LAB_14093dd15;
code_r0x00014093dbbd:
  plVar9 = (longlong *)plVar10[4];
  if ((*(uint *)(plVar10 + 1) >> 0x1c & 1) == 0) goto LAB_14093dbae;
  plVar9 = (longlong *)FUN_142840154(plVar10);
LAB_14093dbcb:
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)plVar10[4];
    goto LAB_14093dbae;
  }
  local_40 = (undefined2 *)plVar9[3];
  FUN_1400021e4(&local_40);
  local_50 = local_60;
  local_48 = local_58 + -1;
  if (local_58 == 0) {
    local_48 = 0;
  }
  cVar2 = FUN_144a427d4();
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (cVar2 == '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cc01760) && (FUN_144b3d300(&DAT_14cc01760), DAT_14cc01760 == -1)) {
      FUN_1446f470e(&DAT_14cc01758,L"VerseStruct",1);
      _Init_thread_footer(&DAT_14cc01760);
    }
    if (DAT_14cc01758 != 0) {
      for (lVar5 = param_2[2]; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x40)) {
        if (DAT_14cc01758 == *(longlong *)(lVar5 + 0x18)) goto LAB_14093dd7f;
      }
    }
    lVar6 = FUN_1408cc5f4();
    lVar5 = param_2[2];
    iVar4 = *(int *)(lVar6 + 0x38);
    iVar1 = *(int *)(lVar5 + 0x38);
    if ((iVar1 < iVar4) ||
       (uVar7 = 1, *(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar4 * 8) != lVar6 + 0x30)
       ) {
      if (DAT_14c948fa0 == 0) {
        local_40 = &DAT_1427db2a2;
        lVar5 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,CONCAT71((int7)(int3)((uint)iVar4 >> 8),1));
        DAT_14c948fa0 = lVar5;
        FUN_1446f470e(&local_60,L"ScriptStruct",1);
        local_78 = &LAB_1468915ce;
        local_80 = FUN_1427dc742;
        local_90 = L"Engine";
        local_88 = 199;
        local_98 = 0x10;
        local_a0 = 0x10000020;
        local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,8);
        local_70 = &local_40;
        FUN_14574b4b2(lVar5);
        DAT_14c948fa0 = lVar5;
        uVar7 = FUN_1446f8646();
        lVar5 = DAT_14c948fa0;
        uVar8 = FUN_1449e2fb2();
        local_a8 = L"ScriptStruct";
        FUN_14574b446(uVar8,lVar5,uVar7,L"/Script/CoreUObject");
        lVar5 = param_2[2];
        iVar1 = *(int *)(lVar5 + 0x38);
      }
      if ((*(int *)(DAT_14c948fa0 + 0x38) <= iVar1) &&
         (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14c948fa0 + 0x38) * 8)
          == DAT_14c948fa0 + 0x30)) {
        local_68 = param_2;
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(param_2);
        }
        if ((DAT_14c950c29 & 1) != 0) {
          FUN_1456cec3c(param_2);
        }
        uVar3 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
                -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        iVar4 = FUN_1408cc6da(param_1 + 0x348,uVar3 >> 0x10 ^ uVar3,&local_68);
        if (iVar4 != -1) {
          uVar7 = 1;
          goto LAB_14093dd81;
        }
      }
LAB_14093dd15:
      lVar5 = param_2[10];
      while( true ) {
        if (lVar5 == 0) goto LAB_14093df58;
        if ((~*(uint *)(*(longlong *)(lVar5 + 8) + 0x18) & 0x8001) == 0) break;
        lVar5 = *(longlong *)(lVar5 + 0x18);
      }
      cVar2 = FUN_14093e018(param_1,lVar5);
      if (cVar2 == '\0') goto LAB_14093dd7f;
LAB_14093dd4c:
      plVar9 = (longlong *)(lVar5 + 0x18);
      do {
        for (lVar5 = *plVar9; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x18)) {
          if ((~*(uint *)(*(longlong *)(lVar5 + 8) + 0x18) & 0x8001) == 0) {
            cVar2 = FUN_14093e018(param_1,lVar5);
            if (cVar2 != '\0') goto LAB_14093dd4c;
            goto LAB_14093dd7f;
          }
        }
        if (*(code **)(*param_2 + 0x2b0) == (code *)&LAB_1446e8c94) {
          param_2 = (longlong *)param_2[8];
        }
        else {
          param_2 = (longlong *)(**(code **)(*param_2 + 0x2b0))(param_2);
        }
        plVar9 = param_2 + 10;
        uVar7 = 1;
      } while (param_2 != (longlong *)0x0);
    }
    goto LAB_14093dd81;
  }
LAB_14093dd7f:
  uVar7 = 0;
LAB_14093dd81:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 14093e018 FUN_14093e018 body=4090 status=ok
// SIG undefined FUN_14093e018(void)

ulonglong FUN_14093e018(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  bool bVar9;
  byte bVar10;
  
  do {
    lVar5 = param_2;
    puVar7 = *(undefined8 **)(lVar5 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1)) {
      uVar2 = FUN_1446ddbd2();
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0,0x28001,0,uVar2,FUN_14067a048);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
    if (DAT_14c951cd8 == 0) {
      uVar1 = (ulonglong)(puVar7 != (undefined8 *)0x0);
      if (puVar7 != &DAT_14c951cd0 && puVar7 != (undefined8 *)0x0) {
        do {
          puVar7 = (undefined8 *)puVar7[6];
          uVar1 = (ulonglong)(puVar7 != (undefined8 *)0x0);
          if (puVar7 == &DAT_14c951cd0) break;
        } while (puVar7 != (undefined8 *)0x0);
      }
      if ((char)uVar1 == '\0') goto LAB_14093e068;
LAB_14093ea5c:
      uVar1 = CONCAT71((int7)(uVar1 >> 8),1);
      goto LAB_14093ea5e;
    }
    uVar1 = DAT_14c951cd8;
    if ((puVar7[3] & DAT_14c951cd8) != 0) goto LAB_14093ea5c;
LAB_14093e068:
    puVar8 = *(undefined **)(lVar5 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952318) && (FUN_144b3d300(&DAT_14c952318), DAT_14c952318 == -1)) {
      FUN_14475b26a();
      FUN_14000176a(&DAT_14c9522c8,L"FUInt32Property",0x800,0,0x1008801,0,&DAT_14c9520b8,
                    FUN_1468e122c);
      atexit(FUN_142817034);
      _Init_thread_footer(&DAT_14c952318);
    }
    if (DAT_14c9522d0 == 0) {
      uVar1 = (ulonglong)(puVar8 != (undefined *)0x0);
      if (puVar8 != &DAT_14c9522c8 && puVar8 != (undefined *)0x0) {
        do {
          puVar8 = *(undefined **)(puVar8 + 0x30);
          uVar1 = (ulonglong)(puVar8 != (undefined *)0x0);
          if (puVar8 == &DAT_14c9522c8) break;
        } while (puVar8 != (undefined *)0x0);
      }
      if ((char)uVar1 == '\0') goto LAB_14093e0ab;
      goto LAB_14093ea5c;
    }
    uVar1 = DAT_14c9522d0;
    if ((*(ulonglong *)(puVar8 + 0x18) & DAT_14c9522d0) != 0) goto LAB_14093ea5c;
LAB_14093e0ab:
    uVar6 = *(ulonglong *)(lVar5 + 8);
    uVar1 = FUN_14093f012();
    if (*(ulonglong *)(uVar1 + 8) == 0) {
      bVar9 = uVar6 != 0;
      if (uVar6 != uVar1 && bVar9) {
        do {
          uVar6 = *(ulonglong *)(uVar6 + 0x30);
          bVar9 = uVar6 != 0;
          if (uVar6 == uVar1) break;
        } while (uVar6 != 0);
      }
      if (!bVar9) goto LAB_14093e0cb;
      goto LAB_14093ea5c;
    }
    if ((*(ulonglong *)(uVar6 + 0x18) & *(ulonglong *)(uVar1 + 8)) != 0) goto LAB_14093ea5c;
LAB_14093e0cb:
    uVar6 = *(ulonglong *)(lVar5 + 8);
    uVar1 = FUN_14093f0c0();
    if (*(ulonglong *)(uVar1 + 8) == 0) {
      bVar9 = uVar6 != 0;
      if (uVar6 != uVar1 && bVar9) {
        do {
          uVar6 = *(ulonglong *)(uVar6 + 0x30);
          bVar9 = uVar6 != 0;
          if (uVar6 == uVar1) break;
        } while (uVar6 != 0);
      }
      if (!bVar9) goto LAB_14093e0eb;
      goto LAB_14093ea5c;
    }
    if ((*(ulonglong *)(uVar6 + 0x18) & *(ulonglong *)(uVar1 + 8)) != 0) goto LAB_14093ea5c;
LAB_14093e0eb:
    puVar7 = *(undefined8 **)(lVar5 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952210) && (FUN_144b3d300(&DAT_14c952210), DAT_14c952210 == -1)) {
      FUN_14475b26a();
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0,0x1008081,0,&DAT_14c9520b8,FUN_1405ebbb2);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
    if (DAT_14c9521c8 == 0) {
      uVar1 = (ulonglong)(puVar7 != (undefined8 *)0x0);
      if (puVar7 != &DAT_14c9521c0 && puVar7 != (undefined8 *)0x0) {
        do {
          puVar7 = (undefined8 *)puVar7[6];
          uVar1 = (ulonglong)(puVar7 != (undefined8 *)0x0);
          if (puVar7 == &DAT_14c9521c0) break;
        } while (puVar7 != (undefined8 *)0x0);
      }
      if ((char)uVar1 == '\0') goto LAB_14093e12e;
      goto LAB_14093ea5c;
    }
    uVar1 = DAT_14c9521c8;
    if ((puVar7[3] & DAT_14c9521c8) != 0) goto LAB_14093ea5c;
LAB_14093e12e:
    puVar8 = *(undefined **)(lVar5 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952268) && (FUN_144b3d300(&DAT_14c952268), DAT_14c952268 == -1)) {
      FUN_14475b26a();
      FUN_14000176a(&DAT_14c952218,L"FInt64Property",0x400000,0,0x1408001,0,&DAT_14c9520b8,
                    FUN_1459738d6);
      atexit(FUN_142816fda);
      _Init_thread_footer(&DAT_14c952268);
    }
    if (DAT_14c952220 == 0) {
      uVar1 = (ulonglong)(puVar8 != (undefined *)0x0);
      if (puVar8 != &DAT_14c952218 && puVar8 != (undefined *)0x0) {
        do {
          puVar8 = *(undefined **)(puVar8 + 0x30);
          uVar1 = (ulonglong)(puVar8 != (undefined *)0x0);
          if (puVar8 == &DAT_14c952218) break;
        } while (puVar8 != (undefined *)0x0);
      }
      if ((char)uVar1 == '\0') goto LAB_14093e171;
      goto LAB_14093ea5c;
    }
    uVar1 = DAT_14c952220;
    if ((*(ulonglong *)(puVar8 + 0x18) & DAT_14c952220) != 0) goto LAB_14093ea5c;
LAB_14093e171:
    puVar7 = *(undefined8 **)(lVar5 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9523c8) && (FUN_144b3d300(&DAT_14c9523c8), DAT_14c9523c8 == -1)) {
      FUN_14475b26a();
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0,0x1008101,0,&DAT_14c9520b8,
                    FUN_1408a629c);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
    if (DAT_14c952380 == 0) {
      uVar1 = (ulonglong)(puVar7 != (undefined8 *)0x0);
      if (puVar7 != &DAT_14c952378 && puVar7 != (undefined8 *)0x0) {
        do {
          puVar7 = (undefined8 *)puVar7[6];
          uVar1 = (ulonglong)(puVar7 != (undefined8 *)0x0);
          if (puVar7 == &DAT_14c952378) break;
        } while (puVar7 != (undefined8 *)0x0);
      }
      if ((char)uVar1 == '\0') goto LAB_14093e1b4;
      goto LAB_14093ea5c;
    }
    uVar1 = DAT_14c952380;
    if ((puVar7[3] & DAT_14c952380) != 0) goto LAB_14093ea5c;
LAB_14093e1b4:
    puVar8 = *(undefined **)(lVar5 + 8);
    uVar1 = (ulonglong)DAT_14c952420;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < (int)DAT_14c952420) &&
       (uVar1 = FUN_144b3d300(&DAT_14c952420), DAT_14c952420 == 0xffffffff)) {
      FUN_14475b26a();
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0,0x101008001,0,&DAT_14c9520b8,
                    FUN_14079c5e4);
      atexit(FUN_1428170bb);
      uVar1 = _Init_thread_footer(&DAT_14c952420);
    }
    if (DAT_14c9523d8 == 0) {
      bVar9 = puVar8 != (undefined *)0x0;
      if (puVar8 != &DAT_14c9523d0 && bVar9) {
        do {
          puVar8 = *(undefined **)(puVar8 + 0x30);
          bVar9 = puVar8 != (undefined *)0x0;
          if (puVar8 == &DAT_14c9523d0) break;
        } while (puVar8 != (undefined *)0x0);
      }
      uVar1 = 0x14c952301;
      if (bVar9) goto LAB_14093ea5e;
    }
    else {
      uVar1 = CONCAT71((int7)(uVar1 >> 8),1);
      if ((*(ulonglong *)(puVar8 + 0x18) & DAT_14c9523d8) != 0) goto LAB_14093ea5e;
    }
    puVar8 = *(undefined **)(lVar5 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952108) && (FUN_144b3d300(&DAT_14c952108), DAT_14c952108 == -1)) {
      uVar2 = FUN_1446ddbd2();
      FUN_14000176a(&DAT_14c9520b8,L"FNumericProperty",0x1000000,0,0x1008001,0,uVar2,FUN_1468e0f50);
      atexit(FUN_142816f26);
      _Init_thread_footer(&DAT_14c952108);
    }
    if (DAT_14c9520c0 == 0) {
      uVar1 = (ulonglong)(puVar8 != (undefined *)0x0);
      if (puVar8 != &DAT_14c9520b8 && puVar8 != (undefined *)0x0) {
        do {
          puVar8 = *(undefined **)(puVar8 + 0x30);
          uVar1 = (ulonglong)(puVar8 != (undefined *)0x0);
          if (puVar8 == &DAT_14c9520b8) break;
        } while (puVar8 != (undefined *)0x0);
      }
      if ((char)uVar1 == '\0') goto LAB_14093e23c;
      goto LAB_14093ea5c;
    }
    uVar1 = DAT_14c9520c0;
    if ((*(ulonglong *)(puVar8 + 0x18) & DAT_14c9520c0) != 0) goto LAB_14093ea5c;
LAB_14093e23c:
    puVar8 = *(undefined **)(lVar5 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9520b0) && (FUN_144b3d300(&DAT_14c9520b0), DAT_14c9520b0 == -1)) {
      uVar2 = FUN_1446ddbd2();
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0,0xa001,0,uVar2,FUN_1409e12a0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
    if (DAT_14c952068 == 0) {
      uVar1 = (ulonglong)(puVar8 != (undefined *)0x0);
      if (puVar8 != &DAT_14c952060 && puVar8 != (undefined *)0x0) {
        do {
          puVar8 = *(undefined **)(puVar8 + 0x30);
          uVar1 = (ulonglong)(puVar8 != (undefined *)0x0);
          if (puVar8 == &DAT_14c952060) break;
        } while (puVar8 != (undefined *)0x0);
      }
      if ((char)uVar1 == '\0') goto LAB_14093e27f;
      goto LAB_14093ea5c;
    }
    uVar1 = DAT_14c952068;
    if ((*(ulonglong *)(puVar8 + 0x18) & DAT_14c952068) != 0) goto LAB_14093ea5c;
LAB_14093e27f:
    puVar8 = *(undefined **)(lVar5 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c963e88) && (FUN_144b3d300(&DAT_14c963e88), DAT_14c963e88 == -1)) {
      uVar2 = FUN_1446ddbd2();
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0,0xc001,0,uVar2,FUN_140dafe7a);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
    }
    if (DAT_14c963e40 == 0) {
      uVar1 = (ulonglong)(puVar8 != (undefined *)0x0);
      if (puVar8 != &DAT_14c963e38 && puVar8 != (undefined *)0x0) {
        do {
          puVar8 = *(undefined **)(puVar8 + 0x30);
          uVar1 = (ulonglong)(puVar8 != (undefined *)0x0);
          if (puVar8 == &DAT_14c963e38) break;
        } while (puVar8 != (undefined *)0x0);
      }
      if ((char)uVar1 != '\0') goto LAB_14093ea5c;
    }
    else {
      uVar1 = DAT_14c963e40;
      if ((*(ulonglong *)(puVar8 + 0x18) & DAT_14c963e40) != 0) goto LAB_14093ea5c;
    }
    puVar8 = *(undefined **)(lVar5 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
      FUN_1446ddbd2();
      FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0,0x208001,0,&DAT_14c951a38,
                    FUN_140b31576);
      atexit(FUN_14280cbf7);
      _Init_thread_footer(&DAT_14c951ae0);
    }
    if (DAT_14c951a98 == 0) {
      bVar9 = puVar8 != (undefined *)0x0;
      if (puVar8 != &DAT_14c951a90 && bVar9) {
        do {
          puVar8 = *(undefined **)(puVar8 + 0x30);
          bVar9 = puVar8 != (undefined *)0x0;
          if (puVar8 == &DAT_14c951a90) break;
        } while (puVar8 != (undefined *)0x0);
      }
      if (!bVar9) break;
    }
    else if ((*(ulonglong *)(puVar8 + 0x18) & DAT_14c951a98) == 0) break;
    param_2 = *(longlong *)(lVar5 + 0x78);
  } while (*(longlong *)(lVar5 + 0x78) != 0);
  puVar8 = *(undefined **)(lVar5 + 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
    uVar2 = FUN_1446ddbd2();
    FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0,0x108001,0,uVar2,FUN_1403a682c);
    atexit(FUN_142818c9e);
    _Init_thread_footer(&DAT_14c952a58);
  }
  if (DAT_14c952a10 == 0) {
    bVar9 = puVar8 != (undefined *)0x0;
    if (puVar8 != &DAT_14c952a08 && bVar9) {
      do {
        puVar8 = *(undefined **)(puVar8 + 0x30);
        bVar9 = puVar8 != (undefined *)0x0;
        if (puVar8 == &DAT_14c952a08) break;
      } while (puVar8 != (undefined *)0x0);
    }
    if (bVar9) goto LAB_14093e348;
  }
  else if ((*(ulonglong *)(puVar8 + 0x18) & DAT_14c952a10) != 0) {
LAB_14093e348:
    uVar1 = FUN_14093db12(param_1,*(undefined8 *)(lVar5 + 0x70));
    return uVar1;
  }
  puVar8 = *(undefined **)(lVar5 + 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952478) && (FUN_144b3d300(&DAT_14c952478), DAT_14c952478 == -1)) {
    FUN_1446f4b16();
    FUN_14000176a(&DAT_14c952428,L"FObjectProperty",0x10000,0,0x4018001,0,&DAT_14c951c78,
                  FUN_1403a5f94);
    atexit(FUN_1428170e8);
    _Init_thread_footer(&DAT_14c952478);
  }
  if (DAT_14c952430 == 0) {
    bVar9 = puVar8 != (undefined *)0x0;
    if (puVar8 != &DAT_14c952428 && bVar9) {
      do {
        puVar8 = *(undefined **)(puVar8 + 0x30);
        bVar9 = puVar8 != (undefined *)0x0;
        if (puVar8 == &DAT_14c952428) break;
      } while (puVar8 != (undefined *)0x0);
    }
    if (bVar9) goto LAB_14093ee70;
  }
  else if ((*(ulonglong *)(puVar8 + 0x18) & DAT_14c952430) != 0) goto LAB_14093ee70;
  puVar8 = *(undefined **)(lVar5 + 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9529b0) && (FUN_144b3d300(&DAT_14c9529b0), DAT_14c9529b0 == -1)) {
    FUN_1446f4b16();
    FUN_14000176a(&DAT_14c952960,L"FSoftObjectProperty",0x20000000,0,0x24008001,0,&DAT_14c951c78,
                  FUN_140f17fc6);
    atexit(FUN_142818859);
    _Init_thread_footer(&DAT_14c9529b0);
  }
  if (DAT_14c952968 == 0) {
    bVar9 = puVar8 != (undefined *)0x0;
    if (puVar8 != &DAT_14c952960 && bVar9) {
      do {
        puVar8 = *(undefined **)(puVar8 + 0x30);
        bVar9 = puVar8 != (undefined *)0x0;
        if (puVar8 == &DAT_14c952960) break;
      } while (puVar8 != (undefined *)0x0);
    }
    if (bVar9) goto LAB_14093ee70;
  }
  else if ((*(ulonglong *)(puVar8 + 0x18) & DAT_14c952968) != 0) {
LAB_14093ee70:
    uVar1 = FUN_1408cc7aa(param_1,*(undefined8 *)(lVar5 + 0x70));
    return uVar1;
  }
  puVar8 = *(undefined **)(lVar5 + 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9496d8) && (FUN_144b3d300(&DAT_14c9496d8), DAT_14c9496d8 == -1)) {
    uVar2 = FUN_1446ddbd2();
    FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0,0x1000000008001,0,uVar2,
                  FUN_140a4831c);
    atexit(FUN_1427e14fe);
    _Init_thread_footer(&DAT_14c9496d8);
  }
  if (DAT_14c949690 == 0) {
    bVar9 = puVar8 != (undefined *)0x0;
    if (puVar8 != &DAT_14c949688 && bVar9) {
      do {
        puVar8 = *(undefined **)(puVar8 + 0x30);
        bVar9 = puVar8 != (undefined *)0x0;
        if (puVar8 == &DAT_14c949688) break;
      } while (puVar8 != (undefined *)0x0);
    }
    if (bVar9) goto LAB_14093eca5;
  }
  else if ((*(ulonglong *)(puVar8 + 0x18) & DAT_14c949690) != 0) {
LAB_14093eca5:
    uVar1 = FUN_1408cca6c(*(undefined8 *)(lVar5 + 0x78));
    return uVar1;
  }
  puVar8 = *(undefined **)(lVar5 + 8);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar4 + 0x110) < DAT_14c951d78) {
    lVar4 = 0;
    FUN_144b3d300(&DAT_14c951d78);
    if (DAT_14c951d78 == -1) {
      FUN_14475b26a();
      FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0,0x1008041,0,&DAT_14c9520b8,FUN_1409f1a5c)
      ;
      atexit(FUN_14281201f);
      lVar4 = 0;
      _Init_thread_footer(&DAT_14c951d78);
    }
  }
  bVar10 = (byte)lVar4;
  if (DAT_14c951d30 == (undefined *)0x0) {
    bVar10 = puVar8 != (undefined *)0x0;
    puVar3 = &DAT_14c951d28;
    if (puVar8 != &DAT_14c951d28 && (bool)bVar10) {
      do {
        puVar8 = *(undefined **)(puVar8 + 0x30);
        bVar10 = puVar8 != (undefined *)0x0;
        if (puVar8 == &DAT_14c951d28) break;
      } while (puVar8 != (undefined *)0x0);
    }
    if ((bool)bVar10 != false) goto LAB_14093eff0;
  }
  else {
    puVar3 = DAT_14c951d30;
    if ((*(ulonglong *)(puVar8 + 0x18) & (ulonglong)DAT_14c951d30) != 0) {
LAB_14093eff0:
      lVar5 = *(longlong *)(lVar5 + 0x70);
      if (lVar5 != 0) {
        puVar3 = (undefined *)FUN_1408cca6c(lVar5);
        bVar10 = (byte)puVar3;
      }
      uVar1 = CONCAT71((int7)((ulonglong)puVar3 >> 8),lVar5 == 0 | bVar10);
      goto LAB_14093ea5e;
    }
  }
  uVar1 = 0;
LAB_14093ea5e:
  return uVar1 & 0xffffffffffffff01;
}



// FUNCTION 14093f012 FUN_14093f012 body=174 status=ok
// SIG undefined FUN_14093f012(void)

undefined * FUN_14093f012(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952160) {
    FUN_144b3d300(&DAT_14c952160);
    if (DAT_14c952160 == -1) {
      FUN_14475b26a();
      FUN_14000176a(&DAT_14c952110,L"FInt8Property",2,0,0x1008003,0,&DAT_14c9520b8,FUN_1468e1008);
      atexit(FUN_142816f53);
      _Init_thread_footer(&DAT_14c952160);
    }
  }
  return &DAT_14c952110;
}



// FUNCTION 14093f0c0 FUN_14093f0c0 body=181 status=ok
// SIG undefined FUN_14093f0c0(void)

undefined * FUN_14093f0c0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9521b8) {
    FUN_144b3d300(&DAT_14c9521b8);
    if (DAT_14c9521b8 == -1) {
      FUN_14475b26a();
      FUN_14000176a(&DAT_14c952168,L"FInt16Property",0x80000000,0,0x81008001,0,&DAT_14c9520b8,
                    FUN_1468e10be);
      atexit(FUN_142816f80);
      _Init_thread_footer(&DAT_14c9521b8);
    }
  }
  return &DAT_14c952168;
}



// FUNCTION 14093f184 FUN_14093f184 body=29 status=ok
// SIG undefined FUN_14093f184(void)

undefined8 FUN_14093f184(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14093f1b0 FUN_14093f1b0 body=29 status=ok
// SIG undefined FUN_14093f1b0(void)

undefined8 FUN_14093f1b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14093f1ce FUN_14093f1ce body=330 status=ok
// SIG undefined FUN_14093f1ce(void)

void FUN_14093f1ce(longlong *param_1,float param_2)

{
  longlong lVar1;
  byte bVar2;
  
  if (param_2 != 0.0 && (*(byte *)((longlong)param_1 + 0xc4) & 1) == 0) {
    param_2 = *(float *)(param_1 + 0x14) + param_2;
    if (1.0 <= param_2) {
      param_2 = 1.0;
    }
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    *(float *)(param_1 + 0x14) = param_2;
    if ((((*(byte *)(param_1[0x10] + 0xd0) & 4) != 0) &&
        ((*(byte *)((longlong)param_1 + 0xc4) & 4) == 0)) && (1.0 <= param_2)) {
      FUN_14093f318(param_1,1);
    }
    FUN_14485dd80(param_1 + 10);
    if (0.0 < *(float *)(param_1 + 0x18)) {
      bVar2 = *(byte *)((longlong)param_1 + 0xc4);
    }
    else {
      lVar1 = (**(code **)(*param_1 + 0x180))(param_1);
      bVar2 = *(byte *)((longlong)param_1 + 0xc4);
      *(float *)(param_1 + 0x17) =
           (float)((double)*(float *)((longlong)param_1 + (ulonglong)((bVar2 & 4) >> 2) * 8 + 0x94)
                  + *(double *)(lVar1 + 0x6d0));
    }
    if ((bVar2 & 0x40) != 0) {
      *(byte *)((longlong)param_1 + 0xc4) = bVar2 & 0xbf;
      FUN_140994e4c(param_1[6],*(undefined8 *)(param_1[0x10] + 0x1cc),
                    *(undefined1 *)((longlong)param_1 + 0xb5),0);
    }
    if ((*(byte *)(param_1 + 5) & 1) == 0) {
      *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
      if (param_1[6] != 0) {
        FUN_140b8222c(param_1[6],param_1,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14093f318 FUN_14093f318 body=493 status=ok
// SIG undefined FUN_14093f318(void)

void FUN_14093f318(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  byte bVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined7 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (*(char *)(lVar1 + 0x178) != '\x03') {
    return;
  }
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),*(undefined1 *)(param_1 + 0xc4)) &
          0xfffffffffffffffb;
  uVar5 = (undefined7)(uVar4 >> 8);
  bVar3 = (byte)uVar4 | param_2 << 2;
  uVar4 = CONCAT71(uVar5,bVar3);
  *(byte *)(param_1 + 0xc4) = bVar3;
  if (((*(byte *)(param_1 + 0x28) & 1) == 0) &&
     (*(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 1, lVar1 != 0)) {
    FUN_140b8222c(lVar1,param_1,1);
    uVar4 = CONCAT71(uVar5,*(undefined1 *)(param_1 + 0xc4));
  }
  if ((uVar4 & 4) == 0) {
    if ((uVar4 & 0x20) == 0) {
      FUN_148a21324(*(undefined8 *)(param_1 + 0x30),1);
    }
    *(byte *)(param_1 + 0xb4) = *(byte *)(param_1 + 0xb4) & 0x7f;
    FUN_14093f51c(lVar1);
    lVar1 = *(longlong *)(param_1 + 0x80);
    if ((*(longlong *)(lVar1 + 0x180) != 0) && ((longlong)*(int *)(lVar1 + 400) != 0)) {
      lVar7 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar1 + 0x188) + lVar7) != 0) {
          plVar2 = *(longlong **)(param_1 + 0xa8);
          if (plVar2 != (longlong *)0x0) {
            lVar7 = *plVar2;
            uVar8 = 0;
            goto LAB_14093f486;
          }
          break;
        }
        lVar7 = lVar7 + 8;
      } while ((longlong)*(int *)(lVar1 + 400) * 8 != lVar7);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x98);
    if ((uVar4 & 0x20) == 0) {
      FUN_148a210ba(*(undefined8 *)(param_1 + 0x30),0xbf800000,
                    CONCAT71((uint7)(uVar4 >> 8) & 0xffffff,1));
    }
    *(byte *)(param_1 + 0xb4) = *(byte *)(param_1 + 0xb4) | 0x80;
    FUN_14093f51c(lVar1);
    lVar1 = *(longlong *)(param_1 + 0x80);
    if ((*(longlong *)(lVar1 + 0x180) != 0) && ((longlong)*(int *)(lVar1 + 400) != 0)) {
      lVar6 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar1 + 0x188) + lVar6) != 0) {
          plVar2 = *(longlong **)(param_1 + 0xa8);
          if (plVar2 != (longlong *)0x0) {
            lVar7 = *plVar2;
            uVar8 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
LAB_14093f486:
            (**(code **)(lVar7 + 0x2f8))(plVar2,lVar1 + 0x178,uVar8);
          }
          break;
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)*(int *)(lVar1 + 400) * 8 != lVar6);
    }
  }
  FUN_140898514(param_1 + 0x68,
                CONCAT71((int7)((uVar4 & 0xffffffffffffff04) >> 8),
                         (byte)(uVar4 & 0xffffffffffffff04) >> 2) & 0xffffffff);
  return;
}



// FUNCTION 14093f51c FUN_14093f51c body=223 status=ok
// SIG undefined FUN_14093f51c(void)

void FUN_14093f51c(longlong param_1,char param_2,char param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined *puVar3;
  uint *puVar4;
  longlong *plVar5;
  uint uVar6;
  sbyte sVar7;
  
  if (param_3 == '\0') {
    if (*(char *)(param_1 + 0xd29) == param_2) {
      return;
    }
    *(char *)(param_1 + 0xd29) = param_2;
    sVar7 = 0x17;
  }
  else {
    if (*(char *)(param_1 + 0xd28) == param_2) {
      return;
    }
    *(char *)(param_1 + 0xd28) = param_2;
    sVar7 = 0x16;
  }
  uVar1 = *(ulonglong *)(param_1 + 0x28);
  if (0xfffffffeffffffff < uVar1) {
    uVar6 = (uint)uVar1;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
      puVar3 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar3 = DAT_14c998080;
      }
      if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
        lVar2 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
        puVar4 = *(uint **)(lVar2 + 0x18);
        if (*(uint **)(lVar2 + 0x18) == (uint *)0x0) {
          puVar4 = (uint *)(lVar2 + 8);
        }
        *puVar4 = *puVar4 | 1 << sVar7;
        *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
      }
    }
    return;
  }
  plVar5 = DAT_14c9980d0;
  if (DAT_14c9980d8 == 0) {
    plVar5 = (longlong *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014093f5f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x58))(plVar5,param_1);
  return;
}



// FUNCTION 14093f662 FUN_14093f662 body=657 status=ok
// SIG undefined FUN_14093f662(void)

void FUN_14093f662(longlong *param_1)

{
  float fVar1;
  uint uVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  float fVar12;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined8 *local_c0;
  int local_b8;
  undefined2 local_b0 [2];
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  cVar4 = (**(code **)(*param_1 + 0x6d8))();
  if (cVar4 != '\0') {
    *(int *)(param_1 + 0x80) = (int)param_1[0x80] + 1;
    iVar5 = FUN_14487fd02(param_1);
    if (iVar5 != 1) {
      (**(code **)(*param_1 + 0x708))(param_1);
    }
  }
  uVar6 = FUN_1401b4c98(param_1);
  plVar7 = (longlong *)FUN_14093f908(param_1);
  fVar12 = (float)(**(code **)(*plVar7 + 0x668))(plVar7);
  lVar8 = FUN_14093f908(param_1);
  fVar1 = *(float *)(lVar8 + 0x4d0);
  local_c0 = (undefined8 *)0x0;
  local_b8 = 0;
  FUN_1446efa72(&local_c0,0,3,0x10);
  puVar3 = local_c0;
  local_b8 = 3;
  *local_c0 = &PTR_LAB_14a1c8830;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  local_c0[2] = lVar9;
  *local_c0 = &PTR_FUN_14a909b80;
  local_c0[3] = 0;
  iVar5 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_c0 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar5 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar10);
      }
      LOCK();
      iVar5 = *(int *)(lVar8 + 0x10);
      bVar11 = iVar5 == 0;
      if (bVar11) {
        *(int *)(lVar8 + 0x10) = iVar10;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar5 = iVar10;
      }
    }
  }
  *(int *)((longlong)puVar3 + 0x1c) = iVar5;
  puVar3[4] = &LAB_14093f654;
  local_a8 = 0;
  local_a0 = 0;
  FUN_14487d8d8(&local_a8,&local_c0);
  local_68 = 1;
  local_c8 = local_b0;
  local_b0[0] = 1;
  local_ac = 0xbf800000;
  FUN_1406f4044(uVar6,param_1 + 0x81,&local_a8,fVar12 / fVar1);
  (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
  if (local_b8 != 0) {
    if (local_c0 == (undefined8 *)0x0) goto LAB_14093f824;
    (**(code **)*local_c0)(local_c0,0);
    FUN_1446efa72(&local_c0,0,0,0x10);
    local_b8 = 0;
  }
  if (local_c0 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14093f824:
  if ((local_50 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14093f908 FUN_14093f908 body=589 status=ok
// SIG undefined FUN_14093f908(void)

undefined8 FUN_14093f908(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((*(uint *)(param_1 + 8) & 0x10) == 0) && (lVar5 = *(longlong *)(param_1 + 0x20), lVar5 != 0)
      ) && (-1 < (short)*(undefined4 *)(lVar5 + 8))) {
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
        local_40 = &local_20;
        local_20 = (code *)&LAB_14355090c;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_14081d0ea;
        local_48 = &LAB_147b8e16d;
        local_50 = (code *)&LAB_140810a38;
        local_58 = L"Engine";
        local_60 = 0x800000000;
        local_68 = 0x10000000;
        local_70 = 8;
        local_78 = 0x3f0;
        FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
      }
      lVar5 = DAT_14cae8b20;
      if (DAT_14c951858 == 0) {
        local_40 = &local_20;
        local_20 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_14081d0ea;
        local_48 = &LAB_1468c5283;
        local_50 = FUN_142809da0;
        local_58 = L"Engine";
        local_60 = 0x400000000;
        local_68 = 0x10000000;
        local_70 = 8;
        local_78 = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar3 = *(longlong *)(param_1 + 0x20);
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
        if ((lVar6 != 0) &&
           ((*(longlong *)(lVar6 + 0xc0) != 0 &&
            (lVar5 = *(longlong *)(*(longlong *)(lVar6 + 0xc0) + 0x30), lVar5 != 0)))) {
          uVar4 = *(undefined8 *)(lVar5 + 0x2b0);
          goto LAB_14093f9f4;
        }
      }
    }
  }
  uVar4 = 0;
LAB_14093f9f4:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14093fb56 FUN_14093fb56 body=752 status=ok
// SIG undefined FUN_14093fb56(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14093fb56(longlong *param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined1 local_e8;
  undefined1 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong local_a0 [2];
  undefined4 local_90;
  char local_88;
  undefined4 local_80;
  longlong local_78;
  longlong local_70;
  undefined1 local_68 [16];
  char local_58;
  undefined4 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar1 = param_1 + -0x3d;
  cVar4 = (**(code **)(param_1[-0x3d] + 0x600))(plVar1);
  if (cVar4 != '\0') {
    lVar7 = param_1[0xc6];
    if (lVar7 == 0) {
      lVar7 = (**(code **)(*param_1 + 0x30))(param_1);
      param_1[0xc6] = lVar7;
    }
    if (*(float *)(lVar7 + 0x18) <= 0.0) goto LAB_14093fdb1;
    if (param_1[0x5f1] == 0) {
      if ((char)param_1[0x659] != '\x01') goto LAB_14093fbd1;
      plVar8 = param_1 + 0x605;
    }
    else {
      plVar8 = (longlong *)(param_1[0x5f1] + 0xd8);
    }
    lVar6 = FUN_140153468(plVar8);
    if ((((lVar6 == 0) || ((*(byte *)(plVar8 + 0x53) & 2) != 0)) || (param_1[-0x1b] == 0)) ||
       (*(char *)(lVar7 + 0x90) != '\0')) {
LAB_14093fbd1:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_128);
    }
    if (param_1[0x5f1] == 0) {
      if ((char)param_1[0x659] != '\x01') goto LAB_14093fdb1;
      param_1 = param_1 + 0x605;
    }
    else {
      param_1 = (longlong *)(param_1[0x5f1] + 0xd8);
    }
    local_58 = '\0';
    local_50 = 0;
    local_48 = 0;
    local_70 = param_1[5];
    FUN_1403ed422(local_68,param_1 + 6);
    lVar6 = FUN_140153468(param_1);
    if ((lVar6 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar6);
    }
    local_50 = (undefined4)param_1[0x11];
    local_48 = lVar6;
    uVar5 = (**(code **)(*plVar1 + 0x5e0))(plVar1);
    uVar2 = *(undefined1 *)(lVar7 + 0x91);
    lVar6 = *(longlong *)(lVar7 + 0x80);
    uVar3 = *(undefined8 *)(lVar7 + 0x88);
    local_b8 = *(undefined8 *)(lVar7 + 0x38);
    uStack_b0 = *(undefined8 *)(lVar7 + 0x40);
    local_a8 = *(undefined8 *)(lVar7 + 0x48);
    local_c8 = *(undefined8 *)(lVar7 + 0x30);
    local_d8 = *(undefined4 *)(lVar7 + 0x20);
    uStack_d4 = *(undefined4 *)(lVar7 + 0x24);
    uStack_d0 = *(undefined4 *)(lVar7 + 0x28);
    uStack_cc = *(undefined4 *)(lVar7 + 0x2c);
    local_a0[0] = local_70;
    local_88 = local_58;
    if (local_58 == '\x01') {
      local_a0[1] = 0;
      local_90 = 0;
      FUN_14867b726(local_a0 + 1,local_68);
    }
    local_80 = local_50;
    local_78 = local_48;
    if ((local_48 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_f0 = lVar6 != 0;
    local_108 = &local_b8;
    local_100 = lVar6;
    local_f8 = uVar3;
    local_e8 = uVar2;
    local_e0 = uVar5;
    FUN_1409407fc(plVar1,*(undefined4 *)(lVar7 + 0x18),local_a0,&local_d8);
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(undefined1 *)(lVar7 + 0x90) = 0;
    *(byte *)(lVar7 + 0xb4) = *(byte *)(lVar7 + 0xb4) & 0xfe;
    if (local_58 == '\x01') {
      FUN_1449db362(local_68);
    }
  }
LAB_14093fdb1:
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140940570 FUN_140940570 body=650 status=ok
// SIG undefined FUN_140940570(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140940570(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined *_Dst;
  longlong unaff_GS_OFFSET;
  bool bVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined *local_60;
  longlong local_58;
  undefined8 local_50;
  char *local_48;
  undefined1 local_40 [8];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = *(longlong **)(param_1 + 0xbf8);
  (**(code **)(*plVar2 + 8))(plVar2,param_1,param_2);
  local_40[0] = 0;
  local_38 = 0;
  lVar1 = param_1 + 0xc00;
  FUN_14278fe74(local_40,lVar1);
  if (*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad0d48) {
    FUN_144b3d300(&DAT_14cad0d48);
    if (DAT_14cad0d48 == -1) {
      DAT_14cad0cb0 = (undefined *)0x0;
      _DAT_14cad0cb8 = 0x40000000000;
      DAT_14cad0ce0 = 0;
      _DAT_14cad0ce8 = 0x400000000;
      DAT_14cad0d10 = 0;
      _DAT_14cad0d18 = 0x400000000;
      DAT_14cad0d30 = 0;
      _DAT_14cad0d38 = 0x400000000;
      _DAT_14cad0d40 = 0;
      atexit(FUN_14343d6e4);
      _Init_thread_footer(&DAT_14cad0d48);
    }
  }
  lVar4 = (**(code **)(**(longlong **)(param_1 + 0x1f0) + 0x498))();
  lVar5 = FUN_1435a0e22(lVar4);
  if ((lVar5 == 0) || (lVar5 = *(longlong *)(lVar5 + 0x600), lVar5 == 0)) {
    if (lVar4 == 0) {
      *(undefined8 *)(param_1 + 0xcb8) = 0;
      goto LAB_140940714;
    }
    lVar5 = *(longlong *)(lVar4 + 0x68);
    *(longlong *)(param_1 + 0xcb8) = lVar5;
    if (lVar5 == 0) goto LAB_140940714;
  }
  else {
    *(undefined **)(lVar5 + 0xe0) = &DAT_14cad0cc0;
    FUN_146f58fc2();
    *(longlong *)(param_1 + 0xcb8) = lVar5;
  }
  bVar6 = (longlong)_DAT_14cad0d38 < 0;
  _DAT_14cad0d38 = _DAT_14cad0d38 & 0xffffffff00000000;
  if (bVar6) {
    FUN_1479d8eae(&DAT_14cad0d20,0);
    lVar5 = *(longlong *)(param_1 + 0xcb8);
  }
  local_68 = *(undefined8 *)(*(longlong *)(lVar4 + 0x58) + 0x838);
  local_60 = &DAT_14cad0d20;
  local_50 = *(undefined8 *)(param_1 + 0xcc0);
  local_48 = "ServerSendMoveResponse";
  *(undefined8 **)(param_1 + 0xcc0) = &local_68;
  local_58 = lVar1;
  cVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,param_1,lVar1,lVar5);
  if ((cVar3 != '\0') && ((*(byte *)(param_1 + 0xc29) & 2) == 0)) {
    FUN_1417bc32a(&DAT_14cad0c30,*(undefined4 *)(param_1 + 0xca0));
    _Dst = DAT_14cad0cb0;
    if (DAT_14cad0cb0 == (undefined *)0x0) {
      _Dst = &DAT_14cad0c30;
    }
    memcpy(_Dst,*(void **)(param_1 + 0xc90),*(longlong *)(param_1 + 0xca0) + 7 >> 3);
    FUN_1417ba594(*(undefined8 *)(param_1 + 0x1f0),&DAT_14cad0c30);
  }
  *(undefined8 *)(local_58 + 0xc0) = local_50;
LAB_140940714:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409407fc FUN_1409407fc body=389 status=ok
// SIG undefined FUN_1409407fc(void)

void FUN_1409407fc(longlong *param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined4 *param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined1 param_9,undefined1 param_10)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_e8 [32];
  undefined4 local_c8 [2];
  undefined8 local_c0;
  undefined1 local_b8 [16];
  char local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_a8 = '\0';
  local_a0 = 0;
  local_98 = 0;
  local_58 = 0;
  local_c0 = *param_3;
  local_c8[0] = param_2;
  FUN_1403ed422(local_b8,param_3 + 1);
  local_a0 = *(undefined4 *)(param_3 + 4);
  lVar2 = param_3[5];
  if (DAT_14c950c29 == '\x01') {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_3[5];
    }
  }
  local_90 = *param_4;
  uStack_88 = param_4[1];
  local_80 = param_4[2];
  local_78 = *param_5;
  uStack_74 = param_5[1];
  uStack_70 = param_5[2];
  uStack_6c = param_5[3];
  local_68 = *(undefined8 *)(param_5 + 4);
  local_60 = param_6;
  local_58 = param_7;
  local_50 = param_8;
  local_4f = param_9;
  local_4e = param_10;
  local_98 = lVar2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb5b958);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_c8);
  if (local_a8 == '\x01') {
    FUN_1449db362(local_b8);
  }
  if (*(char *)(param_3 + 3) == '\x01') {
    FUN_1449db362(param_3 + 1);
    *(undefined1 *)(param_3 + 3) = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140940982 FUN_140940982 body=135 status=ok
// SIG undefined FUN_140940982(void)

void FUN_140940982(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0xd10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xd08);
    lVar3 = 0;
    do {
      FUN_14096c230(*(undefined8 *)(lVar2 + lVar3),param_2);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  iVar1 = *(int *)(param_1 + 0xd20);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xd18);
    lVar3 = 0;
    do {
      FUN_14096c230(*(undefined8 *)(lVar2 + lVar3),param_2);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  FUN_140940a0a(param_1,param_2);
  return;
}



// FUNCTION 140940a0a FUN_140940a0a body=95 status=ok
// SIG undefined FUN_140940a0a(void)

void FUN_140940a0a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x240);
  if ((param_1 != 0) && ((*(uint *)(param_1 + 8) & 0x10) == 0)) {
    plVar1 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x398) + 0x20))(param_1 + 0x398);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140940a5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x30))(plVar1,param_2,*(code **)(*plVar1 + 0x30));
      return;
    }
  }
  return;
}



// FUNCTION 140940a70 FUN_140940a70 body=978 status=ok
// SIG undefined FUN_140940a70(void)

void FUN_140940a70(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined1 *local_100;
  undefined8 local_f8;
  longlong *local_f0;
  longlong *local_e8;
  undefined8 *local_e0;
  code *local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong lStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  undefined1 local_68 [16];
  undefined1 *local_58;
  int local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_c8 = param_3;
  local_c0 = param_4;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    lVar1 = param_1 + 0x80;
    if (param_3 == 0) {
      local_b8._0_4_ = 0;
      iVar4 = 0;
      uVar11 = (uint)local_b8;
    }
    else {
      uVar11 = *(uint *)(param_3 + 0xc);
      local_b8 = (ulonglong)uVar11;
      if ((int)uVar11 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      iVar4 = *(int *)(lVar8 + 0x10);
      if (*(int *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar6 = DAT_14c964868 + 1;
        bVar12 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar12) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
        }
        LOCK();
        iVar4 = *(int *)(lVar8 + 0x10);
        bVar12 = iVar4 == 0;
        if (bVar12) {
          *(int *)(lVar8 + 0x10) = iVar6;
          iVar4 = 0;
        }
        UNLOCK();
        uVar11 = (uint)local_b8;
        if (bVar12) {
          iVar4 = iVar6;
        }
      }
    }
    local_b8._0_4_ = uVar11;
    local_b8 = CONCAT44(iVar4,(uint)local_b8);
    lVar8 = *(longlong *)(param_1 + 0x100);
    if (*(longlong *)(param_1 + 0x100) == 0) {
      lVar8 = lVar1;
    }
    lStack_b0 = param_4;
    if ((longlong)*(int *)(param_1 + 0x108) != 0) {
      lVar7 = (longlong)*(int *)(param_1 + 0x108) << 4;
      iVar4 = 1;
      lVar10 = 0;
      do {
        if ((*(longlong *)(lVar8 + 8) == lStack_b0) && (cVar2 = FUN_14038330a(lVar8), cVar2 != '\0')
           ) {
          if (iVar4 != 0) {
            iVar6 = *(int *)(param_1 + 0x108);
            iVar4 = iVar6 - iVar4;
            if (iVar4 != 0) {
              iVar9 = 1;
              if (iVar4 < 1) {
                iVar9 = iVar4;
              }
              lVar8 = *(longlong *)(param_1 + 0x100);
              if (*(longlong *)(param_1 + 0x100) == 0) {
                lVar8 = lVar1;
              }
              memmove((void *)((lVar10 >> 0x20) * 0x10 + lVar8),
                      (void *)((longlong)(iVar6 - iVar9) * 0x10 + lVar8),(longlong)iVar9 << 4);
              iVar6 = *(int *)(param_1 + 0x108);
            }
            *(int *)(param_1 + 0x108) = iVar6 + -1;
            FUN_140940e44(lVar1);
            lVar1 = *(longlong *)(param_1 + 0x40);
            local_50 = *(int *)(lVar1 + 0x78);
            local_58 = (undefined1 *)0x0;
            local_4c = 0x80;
            uVar11 = local_50 + 0x1f;
            if (0x1f < uVar11) {
              if (uVar11 < 0xa0) {
                puVar5 = local_68;
LAB_140940bcb:
                uVar11 = uVar11 >> 3 & 0xfffffffc;
              }
              else {
                FUN_1446efa72(&local_58,0,uVar11 >> 5,4);
                local_4c = uVar11 & 0xffffffe0;
                puVar5 = local_68;
                if (local_58 != (undefined1 *)0x0) {
                  puVar5 = local_58;
                }
                if (uVar11 < 0x120) goto LAB_140940bcb;
                uVar11 = (uVar11 >> 5) << 2;
              }
              memset(puVar5,0,(ulonglong)uVar11);
              iVar4 = local_50 + 0x1f;
              if (-1 < local_50) {
                iVar4 = local_50;
              }
              if (local_50 % 0x20 != 0) {
                puVar5 = local_58;
                if (local_58 == (undefined1 *)0x0) {
                  puVar5 = local_68;
                }
                bVar3 = -(char)(local_50 % 0x20);
                *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
                     (uint)(*(int *)(puVar5 + (longlong)(iVar4 >> 5) * 4) << (bVar3 & 0x1f)) >>
                     (bVar3 & 0x1f);
              }
            }
            local_98 = 0;
            local_90 = 0;
            local_b8 = 0;
            lStack_b0 = 0;
            local_8c = 0xffffffff00000080;
            local_84 = 0;
            local_78 = 0;
            local_70 = 0;
            local_d0 = &local_108;
            local_100 = local_68;
            local_f0 = &local_c8;
            local_e8 = &local_c0;
            local_e0 = &local_b8;
            local_d8 = FUN_143d5e654;
            local_108 = lVar1;
            local_f8 = param_2;
            FUN_14067478e(param_1,param_1 + 0x68);
            local_70 = 0;
            if (local_78 != 0) {
              FUN_1400020a8();
            }
            FUN_140497fb2(&local_b8);
            if (local_58 != (undefined1 *)0x0) {
              FUN_1400020a8();
            }
          }
          break;
        }
        lVar8 = lVar8 + 0x10;
        lVar10 = lVar10 + 0x100000000;
        iVar4 = iVar4 + 1;
        lVar7 = lVar7 + -0x10;
      } while (lVar7 != 0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140940e44 FUN_140940e44 body=164 status=ok
// SIG undefined FUN_140940e44(void)

void FUN_140940e44(longlong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  uVar4 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0x8c);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  else {
    iVar3 = iVar2 - uVar1;
    if (((longlong)iVar3 & 0xffffffffffffc00U) == 0) {
      if (iVar3 < 0x41 || iVar2 * 2 <= (int)(uVar1 * 3)) {
        return;
      }
    }
    else if (iVar3 < 0x41) {
      return;
    }
    if (0 < (int)uVar1) {
      uVar4 = FUN_144a3809e(uVar4 << 4,0);
      uVar4 = uVar4 >> 4;
      iVar2 = *(int *)(param_1 + 0x8c);
    }
  }
  if ((int)uVar4 == iVar2) {
    return;
  }
  *(int *)(param_1 + 0x8c) = (int)uVar4;
  FUN_148668ef2(param_1,*(undefined4 *)(param_1 + 0x88),uVar4,0x10);
  return;
}



// FUNCTION 140940ee8 FUN_140940ee8 body=80 status=ok
// SIG undefined FUN_140940ee8(void)

void FUN_140940ee8(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x9a28) != '\x01') goto LAB_140940f0e;
  if (*(longlong *)(param_2 + 0xa8) != 0) {
    if (*(longlong *)(param_2 + 0xa8) == param_1) goto LAB_140940f0e;
    cVar1 = FUN_140940f38();
    if (cVar1 == '\0') goto LAB_140940f0e;
  }
  *(undefined1 *)(param_1 + 0x9a28) = 0;
LAB_140940f0e:
  FUN_14009c94e(param_1 + 0x318,param_2);
  return;
}



// FUNCTION 140940f38 FUN_140940f38 body=77 status=ok
// SIG undefined FUN_140940f38(void)

undefined4 FUN_140940f38(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0x1ec) != 0) {
    uVar1 = *(uint *)(param_1 + 0x1e8);
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x1ec))) {
      return CONCAT31((int3)(*(uint *)(lVar2 + 8) >> 8),(*(uint *)(lVar2 + 8) & 0x10200000) == 0);
    }
  }
  return 0;
}



// FUNCTION 140940f86 FUN_140940f86 body=38 status=ok
// SIG undefined FUN_140940f86(void)

undefined8 FUN_140940f86(undefined8 param_1,int param_2)

{
  FUN_140940fac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140940fac FUN_140940fac body=106 status=ok
// SIG undefined FUN_140940fac(void)

void FUN_140940fac(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a1624b0;
  puVar2 = (undefined8 *)param_1[0x18];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_1[0xe] != 0) {
    plVar3 = param_1 + 0x12;
    if ((longlong *)param_1[0x10] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x10];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140941024 FUN_140941024 body=36 status=ok
// SIG undefined FUN_140941024(void)

undefined8 FUN_140941024(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 140941048 FUN_140941048 body=121 status=ok
// SIG undefined FUN_140941048(void)

void FUN_140941048(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  FUN_140941414();
  plVar1 = *(longlong **)(param_1 + 0x488);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))();
    lVar3 = FUN_14069c71e();
    if ((lVar3 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38))) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30) {
        plVar4 = plVar1;
      }
    }
    *(longlong **)(param_1 + 0x580) = plVar4;
  }
  FUN_1409410c1();
  *(undefined8 *)(param_1 + 0x520) = DAT_14cbc6bf0;
  FUN_1409411e2(param_1);
  return;
}



// FUNCTION 1409410c1 FUN_1409410c1 body=288 status=ok
// SIG undefined FUN_1409410c1(void)

undefined8 * FUN_1409410c1(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc6c00) {
    FUN_144b3d300(&DAT_14cbc6c00);
    if (DAT_14cbc6c00 == -1) {
      DAT_14cbc6bf8 = '\0';
      atexit((_func_5014 *)&LAB_1440fb0d4);
      _Init_thread_footer(&DAT_14cbc6c00);
    }
  }
  if (DAT_14cbc6bf8 == '\0') {
    DAT_14cbc6bf0 = 0;
    DAT_14cbc6bf8 = '\x01';
    uVar1 = FUN_140c70810();
    FUN_145759622(&DAT_14cbc6bf0,uVar1);
    uVar1 = FUN_14095c602();
    FUN_145759622(&DAT_14cbc6bf0,uVar1);
    uVar1 = FUN_1411a0a54();
    FUN_145759622(&DAT_14cbc6bf0,uVar1);
    uVar1 = FUN_140f17e42();
    FUN_145759622(&DAT_14cbc6bf0,uVar1);
    uVar1 = FUN_140c602de();
    FUN_145759622(&DAT_14cbc6bf0,uVar1);
    uVar1 = FUN_14599724c();
    FUN_145759622(&DAT_14cbc6bf0,uVar1);
    uVar1 = FUN_145997338();
    FUN_145759622(&DAT_14cbc6bf0,uVar1);
    uVar1 = FUN_140b473e0();
    FUN_145759622(&DAT_14cbc6bf0,uVar1);
    uVar1 = FUN_140941f82();
    FUN_145759622(&DAT_14cbc6bf0,uVar1);
  }
  return &DAT_14cbc6bf0;
}



// FUNCTION 1409411e2 FUN_1409411e2 body=561 status=ok
// SIG undefined FUN_1409411e2(void)

void FUN_1409411e2(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  byte bVar10;
  longlong *plVar11;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  byte local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x570) == '\x01') {
    *(undefined1 *)(param_1 + 0x570) = 0;
  }
  if (*(longlong **)(param_1 + 0x490) == (longlong *)0x0) goto LAB_1409413c1;
  uVar6 = (**(code **)(**(longlong **)(param_1 + 0x490) + 8))();
  lVar7 = FUN_1405c6693(uVar6);
  if (((lVar7 == 0) || (*(char *)(lVar7 + 0x5e4) != '\0')) || (*(char *)(lVar7 + 0x5e5) != '\x01'))
  goto LAB_1409413c1;
  plVar1 = (longlong *)(param_1 + 0x578);
  *(undefined8 *)(param_1 + 0x578) = *(undefined8 *)(param_1 + 0x498);
  bVar10 = *(byte *)(param_1 + 0x51a);
  if ((byte)(bVar10 - 1) < 2) {
    if (((*(longlong *)(param_1 + 0x410) != 0) && (*(longlong *)(param_1 + 0x438) != 0)) &&
       ((*(longlong **)(param_1 + 0x440) != (longlong *)0x0 &&
        (plVar8 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x440) + 0x10))(),
        plVar8 != (longlong *)0x0)))) {
      lVar7 = (**(code **)(*plVar8 + 8))(plVar8);
      lVar9 = FUN_14049e780();
      if (((lVar9 != 0) && (*(int *)(lVar9 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
         ((*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
           lVar9 + 0x30 &&
          (((char)plVar8[0x48] == '\x01' && (lVar7 = *(longlong *)(param_1 + 0x410), lVar7 != 0)))))
         ) {
        uVar6 = FUN_14018b740();
        lVar7 = FUN_144718840(lVar7,uVar6);
        if (lVar7 != 0) {
          *plVar1 = lVar7;
        }
      }
    }
    bVar10 = *(byte *)(param_1 + 0x51a);
  }
  plVar8 = (longlong *)(param_1 + 0x490);
  if (bVar10 - 2 < 2) {
    plVar11 = plVar1;
    if (((*(char *)(param_1 + 0x518) == '\0') &&
        (plVar11 = plVar8, plVar8 = plVar1, *(char *)(param_1 + 0x519) != '\x01')) ||
       (*plVar11 == 0)) goto LAB_1409413c1;
    plVar8 = (longlong *)*plVar8;
    FUN_1418dc8d5(&local_38);
    if ((local_34 & 1) == 0) {
      bVar10 = *(byte *)(param_1 + 0x570);
      if (bVar10 == 1) {
        bVar10 = 0;
        goto LAB_140941386;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x56c) = local_38;
      bVar10 = 1;
LAB_140941386:
      *(byte *)(param_1 + 0x570) = bVar10;
    }
    if ((plVar8 != (longlong *)0x0 & bVar10) != 1) goto LAB_1409413c1;
    iVar4 = *(int *)(param_1 + 0x56c);
    cVar2 = *(char *)(param_1 + 0x518);
    iVar5 = (**(code **)(*plVar8 + 0x28))(plVar8);
    iVar3 = iVar5 - iVar4;
    if (cVar2 != '\0') {
      iVar3 = iVar4 - iVar5;
    }
  }
  else {
    if ((bVar10 != 1) || (*plVar1 == 0)) goto LAB_1409413c1;
    iVar3 = (**(code **)(*(longlong *)*plVar8 + 0x28))();
    iVar4 = (**(code **)(*(longlong *)*plVar1 + 0x28))();
    if (iVar3 == iVar4) goto LAB_1409413c1;
    *(int *)(param_1 + 0x56c) = iVar4;
    *(undefined1 *)(param_1 + 0x570) = 1;
    iVar3 = 0;
  }
  *(int *)(param_1 + 0x514) = iVar3;
LAB_1409413c1:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140941414 FUN_140941414 body=2924 status=ok
// SIG undefined FUN_140941414(void)

void FUN_140941414(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  char cVar15;
  code *pcVar16;
  undefined ***pppuVar17;
  undefined8 *puVar18;
  float fVar19;
  undefined4 uVar20;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  code *local_a0;
  undefined1 *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  code *local_78;
  int local_70;
  undefined4 uStack_6c;
  undefined ***local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined1 *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1403e0b1c(param_1 + 0x10);
  lVar10 = *(longlong *)(param_1 + 0x48);
  if (lVar10 == 0) {
    if ((*(longlong *)(param_1 + 0x28) == 0) && (*(longlong *)(param_1 + 0x38) == 0)) {
      lVar10 = 0;
    }
    else {
      lVar10 = FUN_143cfee44();
      if ((lVar10 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(lVar10);
      }
      *(longlong *)(param_1 + 0x48) = lVar10;
    }
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    lVar10 = FUN_1410b18dc(lVar10);
    if (lVar10 == 0) {
      if (*(longlong *)(param_1 + 0x48) == 0) goto LAB_1409414ab;
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x3d0);
      if (lVar10 != 0) goto LAB_14094149a;
    }
    else {
LAB_14094149a:
      if (DAT_14c950c29 != 0) {
        FUN_1456cec3c(lVar10);
      }
    }
    *(longlong *)(param_1 + 0x28) = lVar10;
  }
LAB_1409414ab:
  if (*(longlong *)(param_1 + 0x38) == 0) {
    lVar10 = *(longlong *)(param_1 + 0x28);
    if (DAT_14c950c29 == 1) {
      if (lVar10 == 0) {
        lVar10 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar10 = *(longlong *)(param_1 + 0x28);
      }
    }
    *(longlong *)(param_1 + 0x38) = lVar10;
  }
  else {
    lVar10 = *(longlong *)(param_1 + 0x28);
  }
  if (lVar10 != 0) {
    lVar13 = *(longlong *)(lVar10 + 0x1b0);
    if (*(longlong *)(lVar10 + 0x1b0) == 0) {
      lVar13 = lVar10;
    }
    *(longlong *)(param_1 + 0x410) = lVar13;
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar13);
    }
    uVar11 = FUN_1403ec9c0();
    uVar11 = FUN_144718840(lVar13,uVar11);
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar13);
    }
    *(longlong *)(param_1 + 0x438) = lVar13;
    *(undefined8 *)(param_1 + 0x440) = uVar11;
  }
  *(undefined8 *)(param_1 + 0x418) = *(undefined8 *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x410) != 0) {
    lVar10 = FUN_143cfee44();
    *(longlong *)(param_1 + 0x418) = lVar10;
    if (lVar10 == 0) {
      uVar11 = FUN_143cfee44(*(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x418) = uVar11;
    }
  }
  *(undefined8 *)(param_1 + 0x478) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x480) = 0;
  *(undefined8 *)(param_1 + 0x488) = 0;
  if ((*(longlong *)(param_1 + 0x18) != 0) && (*(longlong **)(param_1 + 0x20) != (longlong *)0x0)) {
    uVar11 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
    *(undefined8 *)(param_1 + 0x480) = uVar11;
    if (*(longlong *)(param_1 + 0x18) == 0) {
      plVar12 = (longlong *)0x0;
    }
    else {
      plVar12 = *(longlong **)(param_1 + 0x20);
    }
    uVar11 = (**(code **)(*plVar12 + 0x20))();
    *(undefined8 *)(param_1 + 0x488) = uVar11;
  }
  if ((*(longlong *)(param_1 + 0x4a8) != 0) || (*(int *)(param_1 + 0x4b0) != 0x3006)) {
    *(undefined8 *)(param_1 + 0x4a8) = 0;
    *(undefined4 *)(param_1 + 0x4b0) = 0x3006;
    *(undefined8 *)(param_1 + 0x4b8) = 0;
  }
  *(undefined8 *)(param_1 + 0x4c0) = 0;
  *(undefined8 *)(param_1 + 0x448) = 0;
  *(undefined8 *)(param_1 + 0x450) = 0;
  *(undefined8 *)(param_1 + 0x458) = 0;
  *(undefined8 *)(param_1 + 0x460) = 0;
  *(undefined8 *)(param_1 + 0x468) = 0;
  *(undefined8 *)(param_1 + 0x470) = 0;
  *(undefined8 *)(param_1 + 0x490) = 0;
  *(undefined8 *)(param_1 + 0x498) = 0;
  *(undefined8 *)(param_1 + 0x4a0) = 0;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    uVar11 = FUN_143cfee44();
    *(undefined8 *)(param_1 + 0x420) = uVar11;
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1b0);
    if (lVar10 == 0) {
      lVar10 = *(longlong *)(param_1 + 0x30);
    }
    *(longlong *)(param_1 + 0x428) = lVar10;
    uVar11 = FUN_143cfee44();
    *(undefined8 *)(param_1 + 0x430) = uVar11;
  }
  lVar10 = *(longlong *)(param_1 + 0x28);
  if (lVar10 == 0) {
    if (*(longlong *)(param_1 + 0x448) != 0) {
      plVar12 = *(longlong **)(param_1 + 0x450);
      goto LAB_1409416b2;
    }
LAB_1409416d4:
    plVar12 = (longlong *)(param_1 + 0x438);
  }
  else {
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar10);
    }
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(lVar10);
    }
    uVar11 = FUN_1403ec9c0();
    plVar12 = (longlong *)FUN_144718840(lVar10,uVar11);
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar10);
    }
    *(longlong *)(param_1 + 0x448) = lVar10;
    *(longlong **)(param_1 + 0x450) = plVar12;
LAB_1409416b2:
    if (plVar12 == (longlong *)0x0) goto LAB_1409416d4;
    lVar10 = (**(code **)(*plVar12 + 0x10))(plVar12);
    plVar12 = (longlong *)(param_1 + 0x448);
    if (*(int *)(lVar10 + 0xd0) != 0) {
      plVar12 = (longlong *)(param_1 + 0x438);
    }
  }
  lVar10 = *plVar12;
  if (DAT_14c950c29 == 1) {
    if (lVar10 != 0) {
      FUN_1456cec3c();
      lVar10 = *plVar12;
      goto LAB_140941762;
    }
    *(undefined8 *)(param_1 + 0x458) = 0;
    lVar13 = plVar12[1];
    *(longlong *)(param_1 + 0x460) = lVar13;
    lVar10 = 0;
  }
  else {
LAB_140941762:
    bVar5 = DAT_14c950c29;
    *(longlong *)(param_1 + 0x458) = lVar10;
    lVar13 = plVar12[1];
    *(longlong *)(param_1 + 0x460) = lVar13;
    if (((bVar5 & 1) != 0) && (lVar10 != 0)) {
      FUN_1456cec3c();
      lVar10 = *(longlong *)(param_1 + 0x458);
      lVar13 = *(longlong *)(param_1 + 0x460);
    }
  }
  *(longlong *)(param_1 + 0x468) = lVar10;
  *(longlong *)(param_1 + 0x470) = lVar13;
  lVar10 = *(longlong *)(param_1 + 0x28);
  if (lVar10 != 0) {
    uVar11 = FUN_1403ec9c0();
    plVar12 = (longlong *)FUN_144718840(lVar10,uVar11);
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x18))(plVar12,&local_78);
      pcVar16 = local_78;
      if (DAT_14c950c29 == 1) {
        if (local_78 == (code *)0x0) {
          pcVar16 = (code *)0x0;
        }
        else {
          FUN_1456cec3c();
          pcVar16 = local_78;
        }
      }
      *(code **)(param_1 + 0x468) = pcVar16;
      *(ulonglong *)(param_1 + 0x470) = CONCAT44(uStack_6c,local_70);
    }
  }
  *(undefined8 *)(param_1 + 0x510) = 1;
  if (((*(longlong *)(param_1 + 0x48) == 0) ||
      (uVar6 = 1, (*(byte *)(*(longlong *)(param_1 + 0x48) + 0x420) & 2) == 0)) &&
     ((*(longlong *)(param_1 + 0x418) == 0 ||
      (uVar6 = 1, (*(byte *)(*(longlong *)(param_1 + 0x418) + 0x420) & 2) == 0)))) {
    uVar6 = 0;
  }
  *(undefined1 *)(param_1 + 0x518) = uVar6;
  lVar10 = *(longlong *)(param_1 + 0x478);
  if (lVar10 == 0) {
LAB_14094186b:
    *(undefined2 *)(param_1 + 0x519) = 0;
    if (*(char *)(param_1 + 0x518) != '\0') {
      cVar15 = '\x02';
      goto LAB_1409418ac;
    }
  }
  else {
    if (DAT_14caf64b8 == 0) {
      local_90 = &local_78;
      local_78 = FUN_141030f22;
      local_80 = FUN_14081d0ea;
      local_88 = FUN_142b4754c;
      local_98 = &LAB_147c45ce0;
      local_a0 = (code *)&LAB_1463f1ff4;
      local_a8 = L"Game";
      local_b0 = 0x4000000000;
      local_b8 = 0x10000004;
      local_c0 = 8;
      local_c8 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
    }
    if ((((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(DAT_14caf64b8 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) != DAT_14caf64b8 + 0x30)) ||
        (*(longlong *)(lVar10 + 0x3c0) == 0)) ||
       ((*(byte *)(*(longlong *)(lVar10 + 0x3c0) + 0x420) & 2) == 0)) goto LAB_14094186b;
    *(undefined1 *)(param_1 + 0x519) = 1;
    cVar15 = (*(byte *)(param_1 + 0x518) ^ 1) * '\x02' + '\x01';
LAB_1409418ac:
    *(char *)(param_1 + 0x51a) = cVar15;
  }
  if (*(longlong *)(param_1 + 0x488) != 0) {
    if (*(int *)(param_1 + 0x194) == 0) {
LAB_140941d55:
      uVar11 = 0;
    }
    else {
      uVar1 = *(uint *)(param_1 + 400);
      uVar11 = 0;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        puVar18 = (undefined8 *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((puVar18 == (undefined8 *)0x0) ||
           ((*(int *)(puVar18 + 2) != *(int *)(param_1 + 0x194) ||
            ((*(uint *)(puVar18 + 1) & 0x10200000) != 0)))) goto LAB_140941d55;
        uVar11 = *puVar18;
      }
    }
    FUN_1407176ee(*(longlong *)(param_1 + 0x488) + 0x270,&local_78,uVar11,
                  *(undefined8 *)(param_1 + 0x1a8));
    if ((*(code **)(param_1 + 0x4a8) != local_78) || (*(int *)(param_1 + 0x4b0) != local_70)) {
      *(code **)(param_1 + 0x4a8) = local_78;
      *(int *)(param_1 + 0x4b0) = local_70;
      *(undefined8 *)(param_1 + 0x4b8) = 0;
    }
    *(undefined8 *)(param_1 + 0x4c0) = local_60;
  }
  if ((*(longlong *)(param_1 + 0x438) == 0) ||
     (plVar12 = *(longlong **)(param_1 + 0x440), plVar12 == (longlong *)0x0)) {
    plVar12 = *(longlong **)(param_1 + 0x38);
    if (plVar12 != (longlong *)0x0) {
      if (DAT_14cb223d8 == 0) {
        local_90 = &local_78;
        local_78 = FUN_1449e2820;
        local_80 = FUN_14081d0ea;
        local_88 = FUN_1427b09ee;
        local_98 = &LAB_147f29feb;
        local_a0 = FUN_1464384fe;
        local_a8 = L"Engine";
        local_b0 = 0;
        local_b8 = 0x10004001;
        local_c0 = 8;
        local_c8 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
      }
      plVar12 = (longlong *)(**(code **)(*plVar12 + 0x288))(plVar12,DAT_14cb223d8);
      if (plVar12 != (longlong *)0x0) {
        if (DAT_14cb223d8 == 0) {
          local_90 = &local_78;
          local_78 = FUN_1449e2820;
          local_80 = FUN_14081d0ea;
          local_88 = FUN_1427b09ee;
          local_98 = &LAB_147f29feb;
          local_a0 = FUN_1464384fe;
          local_a8 = L"Engine";
          local_b0 = 0;
          local_b8 = 0x10004001;
          local_c0 = 8;
          local_c8 = 0x28;
          FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
        }
        plVar14 = (longlong *)FUN_144718840(plVar12,DAT_14cb223d8);
        if (((plVar12 == plVar14) || (plVar14 == (longlong *)0x0)) ||
           (lVar10 = (**(code **)(*plVar14 + 0x10))(plVar14), lVar10 == 0)) goto LAB_140941a7e;
        if (*(longlong *)(param_1 + 0x38) == *(longlong *)(param_1 + 0x478)) {
          uVar7 = 0;
        }
        else {
          uVar7 = FUN_14486116a(lVar10);
        }
        goto LAB_140941a78;
      }
    }
  }
  else {
    lVar10 = *(longlong *)(param_1 + 0x478);
    if ((lVar10 == 0) || (DAT_14c950c29 == 0)) {
      if (lVar10 != 0) goto LAB_1409419b1;
    }
    else {
      FUN_1456cec3c(lVar10);
LAB_1409419b1:
      uVar11 = FUN_1403ec9c0();
      plVar14 = (longlong *)FUN_144718840(lVar10,uVar11);
      lVar13 = *(longlong *)(param_1 + 0x438);
      uVar7 = 0;
      if (lVar13 == 0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        plVar12 = *(longlong **)(param_1 + 0x440);
        if ((lVar13 == lVar10) && (plVar12 == plVar14)) goto LAB_140941a78;
      }
    }
    uVar7 = (**(code **)(*plVar12 + 0x28))(plVar12,*(undefined8 *)(param_1 + 0x478));
LAB_140941a78:
    *(undefined4 *)(param_1 + 0x510) = uVar7;
  }
LAB_140941a7e:
  lVar10 = *(longlong *)(param_1 + 0x478);
  if (lVar10 != 0) {
    uVar11 = FUN_14018b740();
    lVar10 = FUN_144718840(lVar10,uVar11);
    *(longlong *)(param_1 + 0x490) = lVar10;
  }
  lVar10 = *(longlong *)(param_1 + 0x28);
  if (lVar10 == 0) {
    plVar12 = *(longlong **)(param_1 + 0x498);
LAB_140941af5:
    if (plVar12 != (longlong *)0x0) {
LAB_140941afa:
      if (*(longlong *)(param_1 + 0x490) != 0) {
        iVar8 = (**(code **)(*plVar12 + 0x28))(plVar12);
        iVar9 = (**(code **)(**(longlong **)(param_1 + 0x490) + 0x28))();
        *(int *)(param_1 + 0x514) = iVar8 - iVar9;
      }
    }
  }
  else {
    uVar11 = FUN_14018b740();
    plVar12 = (longlong *)FUN_144718840(lVar10,uVar11);
    *(longlong **)(param_1 + 0x498) = plVar12;
    if (plVar12 != (longlong *)0x0) goto LAB_140941afa;
    lVar10 = *(longlong *)(param_1 + 0x410);
    if (lVar10 != 0) {
      uVar11 = FUN_14018b740();
      plVar12 = (longlong *)FUN_144718840(lVar10,uVar11);
      *(longlong **)(param_1 + 0x498) = plVar12;
      goto LAB_140941af5;
    }
  }
  lVar10 = *(longlong *)(param_1 + 0x40);
  if (lVar10 != 0) {
    uVar11 = FUN_141419b90();
    uVar11 = FUN_144718840(lVar10,uVar11);
    *(undefined8 *)(param_1 + 0x4a0) = uVar11;
  }
  if ((((*(double *)(param_1 + 0x1f8) == 0.0) && (!NAN(*(double *)(param_1 + 0x1f8)))) &&
      (*(double *)(param_1 + 0x200) == 0.0)) &&
     (((!NAN(*(double *)(param_1 + 0x200)) && (*(double *)(param_1 + 0x208) == 0.0)) &&
      ((!NAN(*(double *)(param_1 + 0x208)) && (*(longlong *)(param_1 + 0x478) != 0)))))) {
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x478) + 0x1c8);
    if (lVar10 == 0) {
      puVar18 = &DAT_14c8464e0;
      uVar7 = (undefined4)DAT_14c8464f0;
      uVar20 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar7 = (undefined4)*(undefined8 *)(lVar10 + 0x270);
      uVar20 = (undefined4)((ulonglong)*(undefined8 *)(lVar10 + 0x270) >> 0x20);
      puVar18 = (undefined8 *)(lVar10 + 0x260);
    }
    uVar2 = *(undefined4 *)((longlong)puVar18 + 4);
    uVar3 = *(undefined4 *)(puVar18 + 1);
    uVar4 = *(undefined4 *)((longlong)puVar18 + 0xc);
    *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)puVar18;
    *(undefined4 *)(param_1 + 0x1fc) = uVar2;
    *(undefined4 *)(param_1 + 0x200) = uVar3;
    *(undefined4 *)(param_1 + 0x204) = uVar4;
    *(ulonglong *)(param_1 + 0x208) = CONCAT44(uVar20,uVar7);
  }
  if (((((*(longlong *)(param_1 + 0x468) != 0) &&
        (*(longlong **)(param_1 + 0x470) != (longlong *)0x0)) &&
       (lVar10 = (**(code **)(**(longlong **)(param_1 + 0x470) + 0x10))(),
       *(int *)(lVar10 + 0x138) != 0)) ||
      ((*(longlong *)(param_1 + 0x488) != 0 &&
       (*(int *)(*(longlong *)(param_1 + 0x488) + 0x22c) != 0)))) &&
     (*(int *)(param_1 + 0x510) != 0)) {
    if (*(longlong *)(param_1 + 0x50) != 0) {
      fVar19 = (float)FUN_140ce165c(*(longlong *)(param_1 + 0x50) + 0x70,
                                    *(undefined8 *)(param_1 + 0x478));
      if ((fVar19 == 0.0) && (!NAN(fVar19))) goto LAB_140941c38;
    }
    *(undefined1 *)(param_1 + 0x53d) = 1;
  }
LAB_140941c38:
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_14b3f76d0;
  local_50 = &LAB_143d0a66c;
  local_78 = (code *)&LAB_1402d0d18;
  uVar6 = FUN_1402d0c8a(param_1 + 0x58,&local_78);
  *(undefined1 *)(param_1 + 0x53e) = uVar6;
  if (local_78 != (code *)0x0) {
    pppuVar17 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar17 = &local_58;
    }
    (*(code *)(*pppuVar17)[2])();
  }
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_14b3f76d0;
  local_50 = &LAB_143d0a674;
  local_78 = (code *)&LAB_1402d0d18;
  uVar6 = FUN_1402d0c8a(param_1 + 0x58,&local_78);
  *(undefined1 *)(param_1 + 0x53f) = uVar6;
  if (local_78 != (code *)0x0) {
    pppuVar17 = &local_58;
    if (local_68 != (undefined ***)0x0) {
      pppuVar17 = local_68;
    }
    (*(code *)(*pppuVar17)[2])(pppuVar17);
  }
  if ((local_38 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140941f82 FUN_140941f82 body=227 status=ok
// SIG undefined FUN_140941f82(void)

longlong FUN_140941f82(void)

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
  if (DAT_14cb67718 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146516880;
    local_38 = &LAB_143c736b1;
    local_40 = FUN_143c736b4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxStatusEffectSignatureParam_DmgTags",&DAT_14cb67718,
                  FUN_143c7368a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb67718;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140942066 FUN_140942066 body=1665 status=ok
// SIG undefined FUN_140942066(void)

void FUN_140942066(undefined8 param_1,char *param_2,int *param_3,longlong param_4,longlong *param_5)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  int *piVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  undefined8 uVar17;
  longlong lVar18;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  undefined8 *local_b8;
  longlong local_b0;
  int local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  int local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 local_80 [16];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (DAT_14cb259f8 == 0) goto LAB_14094228f;
  lVar11 = FUN_14094275a(param_4,param_4 + 0x24);
  plVar3 = *(longlong **)(lVar11 + 8);
  local_b8 = *(undefined8 **)(lVar11 + 0x10);
  if (local_b8 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_b8 + 1) = *(int *)(local_b8 + 1) + 1;
    UNLOCK();
  }
  if ((plVar3 != (longlong *)0x0) && ((param_2[0x7c] & 2U) == 0)) {
    iVar10 = (**(code **)(*param_5 + 0x38))(param_5);
    if (iVar10 == 1) {
      if (((*param_2 == '\x01') && (param_2[0xc] == '\x01')) &&
         (*(int *)(param_2 + 4) == *(int *)(param_2 + 0x10))) {
        if ((*(float *)(param_2 + 8) == *(float *)(param_2 + 0x14)) &&
           (!NAN(*(float *)(param_2 + 8)) && !NAN(*(float *)(param_2 + 0x14)))) goto LAB_14094227b;
      }
      lVar11 = *(longlong *)(param_2 + 0x18);
      iVar10 = *(int *)(param_2 + 0x24);
      if (SBORROW4(0,iVar10)) {
        piVar14 = (int *)(param_2 + 4);
        if (*(int *)(param_2 + 0x20) == 0) {
          piVar14 = (int *)(param_2 + 0x10);
        }
        iVar10 = *piVar14;
        fVar1 = (float)piVar14[1];
      }
      else {
        fVar1 = 0.0;
      }
      fVar1 = ((float)((lVar11 >> 0x20) * (longlong)iVar10) +
              (float)(int)((ulonglong)lVar11 >> 0x20) * fVar1) / (float)(int)lVar11;
      lVar11 = *plVar3;
      bVar7 = *(float *)(lVar11 + 0x100) < fVar1;
      if (*(int *)(lVar11 + 0x50) == 0) {
        bVar7 = fVar1 < *(float *)(lVar11 + 0x100);
      }
      bVar8 = ~bVar7;
      if (*(int *)(param_2 + 0x20) == *(int *)(lVar11 + 0x50)) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar11 + 0xa0));
        iVar10 = *(int *)(lVar11 + 0x18);
        if ((LPCRITICAL_SECTION)(lVar11 + 0xa0) != (LPCRITICAL_SECTION)0x0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar11 + 0xa0));
        }
        if (!(bool)(bVar8 & 0 < iVar10)) {
          lVar11 = *plVar3;
LAB_1409421dc:
          EnterCriticalSection((LPCRITICAL_SECTION)(lVar11 + 0xa0));
          iVar10 = *(int *)(lVar11 + 0x18);
          if ((LPCRITICAL_SECTION)(lVar11 + 0xa0) != (LPCRITICAL_SECTION)0x0) {
            LeaveCriticalSection((LPCRITICAL_SECTION)(lVar11 + 0xa0));
          }
          if (!(bool)(bVar7 ^ 1U | iVar10 < 1)) {
            FUN_140942aa0(*plVar3);
          }
          if (((param_3[1] == 0 && *param_3 == 0) && param_3[2] == 0) && param_3[3] == 0) {
LAB_140942628:
            local_98 = 0;
            cVar9 = FUN_145759796();
            if ((cVar9 != '\0') &&
               (!(bool)(bVar8 & *(float *)(*plVar3 + 0xfc) != *(float *)(*plVar3 + 0x120)))) {
              FUN_140943a42(plVar3,param_2,&local_98);
            }
            FUN_144a61ac8(&local_98);
          }
          else {
            FUN_1401abe9c(param_5,&local_98,param_3,param_3 + 4);
            lVar11 = (longlong)local_90;
            if (lVar11 == 0) goto LAB_140942628;
            lVar13 = *plVar3;
            if ((!(bool)(bVar8 & *(float *)(lVar13 + 0xfc) != *(float *)(lVar13 + 0x120))) &&
               (lVar13 != 0)) {
              local_c0 = local_98;
              cVar9 = FUN_14094384e(plVar3,param_2);
              if (cVar9 != '\0') {
                lVar13 = *(longlong *)(param_2 + 0x18);
                iVar10 = *(int *)(param_2 + 0x24);
                fVar2 = 0.0;
                if (SBORROW4(0,iVar10)) {
                  piVar14 = (int *)(param_2 + 4);
                  if (*(int *)(param_2 + 0x20) == 0) {
                    piVar14 = (int *)(param_2 + 0x10);
                  }
                  iVar10 = *piVar14;
                  fVar2 = (float)piVar14[1];
                }
                lVar18 = 0;
                do {
                  uVar4 = *(ulonglong *)(local_c0 + lVar18);
                  if ((uVar4 >> 0x20 == 0) || (uVar12 = (uint)uVar4, (int)uVar12 < 0)) {
LAB_140942584:
                    uVar17 = 0;
                  }
                  else {
                    uVar17 = 0;
                    if ((int)uVar12 < DAT_14c9647dc) {
                      puVar15 = (undefined8 *)
                                ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0xd & 0x3fff8)))
                      ;
                      if (((puVar15 == (undefined8 *)0x0) ||
                          (*(int *)(puVar15 + 2) != (int)(uVar4 >> 0x20))) ||
                         ((*(uint *)(puVar15 + 1) & 0x10200000) != 0)) goto LAB_140942584;
                      uVar17 = *puVar15;
                    }
                  }
                  lVar5 = *plVar3;
                  FUN_14026e798(local_80,uVar17);
                  local_98 = FUN_140206ee8(lVar5 + 0x58,local_80);
                  FUN_140942716(&local_98);
                  lVar5 = *plVar3;
                  lVar6 = *(longlong *)(lVar5 + 0x98);
                  if ((lVar6 != 0) && ((DAT_14cb26569 & 1) != 0)) {
                    FUN_1400848c0(*(undefined8 *)(lVar6 + 0x50));
                  }
                  plVar16 = (longlong *)(lVar5 + 0x98);
                  *plVar16 = local_98;
                  FUN_140942716(plVar16);
                  if ((local_98 != 0) && ((DAT_14cb26569 & 1) != 0)) {
                    FUN_1400848c0(*(undefined8 *)(local_98 + 0x50));
                  }
                  lVar5 = *plVar3;
                  FUN_140942cb5(&local_98,uVar17,lVar5);
                  FUN_1409427a4(lVar5,&local_98);
                  local_b0 = local_98;
                  local_a8 = local_90;
                  uStack_a4 = uStack_8c;
                  uStack_a0 = uStack_88;
                  uStack_9c = uStack_84;
                  uVar17 = FUN_140942920(plVar3,param_2);
                  FUN_14094283f(*plVar3,uVar17,&local_b0);
                  *(float *)(*plVar3 + 0xfc) =
                       ((float)((lVar13 >> 0x20) * (longlong)iVar10) +
                       (float)(int)((ulonglong)lVar13 >> 0x20) * fVar2) / (float)(int)lVar13;
                  lVar18 = lVar18 + 8;
                } while (lVar11 * 8 != lVar18);
              }
            }
          }
          *(float *)(*plVar3 + 0x100) = fVar1;
        }
      }
      else if (bVar7) goto LAB_1409421dc;
    }
    else if (iVar10 == 0) {
      lVar11 = *(longlong *)(param_2 + 0x18);
      iVar10 = *(int *)(param_2 + 0x24);
      if (SBORROW4(0,iVar10)) {
        piVar14 = (int *)(param_2 + 4);
        if (*(int *)(param_2 + 0x20) == 0) {
          piVar14 = (int *)(param_2 + 0x10);
        }
        iVar10 = *piVar14;
        fVar1 = (float)piVar14[1];
      }
      else {
        fVar1 = 0.0;
      }
      lVar13 = *plVar3;
      if ((0.01 < ABS(((float)((lVar11 >> 0x20) * (longlong)iVar10) +
                      (float)(int)((ulonglong)lVar11 >> 0x20) * fVar1) / (float)(int)lVar11 -
                      *(float *)(lVar13 + 0x110))) || (*(char *)(lVar13 + 0x10c) != '\0')) {
        FUN_140942aa0();
        lVar13 = *plVar3;
      }
      *(undefined8 *)(lVar13 + 0x104) = 0x3f800000bf800000;
      *(undefined4 *)(lVar13 + 0x100) = *(undefined4 *)(lVar13 + 0x120);
      *(undefined4 *)(lVar13 + 0xfc) = *(undefined4 *)(lVar13 + 0x120);
    }
    else if (iVar10 - 2U < 3) {
      if ((((param_3[1] == 0 && *param_3 == 0) && param_3[2] == 0) && param_3[3] == 0) ||
         (FUN_1401abe9c(param_5,&local_98,param_3,param_3 + 4), local_90 == 0)) {
        local_98 = 0;
        cVar9 = FUN_145759796();
        if (cVar9 != '\0') {
          FUN_147f83b0a(plVar3,param_2,&local_98);
        }
        FUN_144a61ac8(&local_98);
      }
      else {
        FUN_147f839c8(plVar3,&local_98,param_2);
      }
    }
  }
LAB_14094227b:
  puVar15 = local_b8;
  if (local_b8 != (undefined8 *)0x0) {
    LOCK();
    piVar14 = (int *)(local_b8 + 1);
    *piVar14 = *piVar14 + -1;
    UNLOCK();
    if (*piVar14 == 0) {
      (**(code **)*local_b8)(local_b8);
      LOCK();
      piVar14 = (int *)((longlong)puVar15 + 0xc);
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (*piVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_e8);
      }
    }
  }
LAB_14094228f:
  if ((local_70 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140942716 FUN_140942716 body=67 status=ok
// SIG undefined FUN_140942716(void)

void FUN_140942716(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((*param_1 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    piVar1 = *(int **)(*param_1 + 0x50);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (DAT_14cb259f8 == 0) {
      iVar2 = 5;
    }
    else {
      if ((char)piVar1[1] != '\x01') {
        FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60));
        return;
      }
      iVar2 = 2;
    }
    LOCK();
    piVar1[2] = iVar2;
    UNLOCK();
  }
  return;
}



// FUNCTION 14094275a FUN_14094275a body=73 status=ok
// SIG undefined FUN_14094275a(void)

undefined8 FUN_14094275a(longlong param_1,uint *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  plVar1 = *(longlong **)(param_1 + 8);
  iVar2 = FUN_1401abde8(plVar1,~(*param_2 ^ param_2[1] ^ param_2[2]));
  if ((iVar2 == -1) ||
     (lVar3 = (longlong)iVar2 * 0x20 + *plVar1, puVar4 = (undefined8 *)(lVar3 + 0x10),
     puVar4 == (undefined8 *)0x0 || lVar3 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar4;
  }
  return uVar5;
}



// FUNCTION 1409427a4 FUN_1409427a4 body=155 status=ok
// SIG undefined FUN_1409427a4(void)

void FUN_1409427a4(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2[2] == 0) {
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  iVar1 = *(int *)(param_1 + 0x18);
  lVar3 = (longlong)iVar1;
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_140b760e0((longlong *)(param_1 + 0x10),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  *(undefined8 *)(lVar2 + lVar3 * 0x18) = 0;
  *(undefined8 *)(lVar2 + 8 + lVar3 * 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(lVar2 + lVar3 * 0x18) = *param_2;
  *(undefined8 *)(lVar2 + 8 + lVar3 * 0x18) = param_2[1];
  *(undefined8 *)(lVar2 + 0x10 + lVar3 * 0x18) = param_2[2];
                    /* WARNING: Could not recover jumptable at 0x000140942838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  return;
}



// FUNCTION 14094283f FUN_14094283f body=224 status=ok
// SIG undefined FUN_14094283f(void)

void FUN_14094283f(longlong param_1,float param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = (longlong *)*param_3;
  if (((plVar1 != (longlong *)0x0) && (param_3[1] != -1)) && (*plVar1 == param_3[1])) {
    *(int *)(plVar1 + 0x21) = (int)plVar1[0x21] + 1;
    cVar2 = FUN_140942c40(plVar1,param_3[2],param_2,0);
    if (cVar2 != '\0') {
      *(float *)(param_1 + 0x108) = 1.0 - param_2;
    }
    *(int *)(plVar1 + 0x21) = (int)plVar1[0x21] + -1;
    if ((int)plVar1[0x26] < 1) {
      FUN_1400847bc(plVar1 + 0x17,0);
      if ((int)plVar1[0x21] == 0) {
        FUN_140087e46(plVar1);
        if (*plVar1 != -1) {
          if (DAT_14cb259f8 == 0) goto LAB_1409428c1;
          FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar1);
        }
        if (DAT_14cb259f8 != 0) {
          FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar1);
        }
      }
    }
  }
LAB_1409428c1:
  *param_3 = 0;
  param_3[1] = -1;
  return;
}



// FUNCTION 140942920 FUN_140942920 body=384 status=ok
// SIG undefined FUN_140942920(void)

void FUN_140942920(longlong *param_1,longlong param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  longlong lVar5;
  float fVar6;
  float _Y;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
  if ((*(char *)(lVar2 + 0x40) == '\x01') && (*(char *)(lVar2 + 0x48) == '\x01')) {
    _Y = *(float *)(lVar2 + 0x4c);
    if (((_Y != 0.0) || (NAN(_Y))) &&
       ((*(float *)(lVar2 + 0x44) == _Y && (!NAN(*(float *)(lVar2 + 0x44)) && !NAN(_Y)))))
    goto LAB_140942970;
  }
  _Y = *(float *)(lVar2 + 0x104);
  if ((_Y == -1.0) && (!NAN(_Y))) {
    _Y = *(float *)(lVar2 + 0xf4) - *(float *)(lVar2 + 0xf0);
  }
LAB_140942970:
  if (0.0 < _Y) {
    lVar3 = *(longlong *)(param_2 + 0x18);
    fVar6 = *(float *)(lVar2 + 0xfc);
    fVar1 = *(float *)(lVar2 + 0x120);
    fVar4 = (float)(int)((ulonglong)lVar3 >> 0x20);
    if (*(int *)(lVar2 + 0x50) == 0) {
      lVar5 = 0xf0;
      if (fVar6 != fVar1) {
        lVar5 = 0xfc;
      }
      if (NAN(fVar6) || NAN(fVar1)) {
        lVar5 = 0xfc;
      }
      fVar6 = ((float)((longlong)(int)*(undefined8 *)(param_2 + 4) * (lVar3 >> 0x20)) +
              fVar4 * (float)((ulonglong)*(undefined8 *)(param_2 + 4) >> 0x20)) / (float)(int)lVar3
              - *(float *)(lVar2 + lVar5);
    }
    else {
      fVar6 = *(float *)(lVar2 + 0xf4 + (ulonglong)(-(uint)(fVar6 != fVar1) & 1) * 8) -
              ((float)((longlong)(int)*(undefined8 *)(param_2 + 0x10) * (lVar3 >> 0x20)) +
              fVar4 * (float)((ulonglong)*(undefined8 *)(param_2 + 0x10) >> 0x20)) /
              (float)(int)lVar3;
    }
    fmodf(fVar6,_Y);
  }
  return;
}



// FUNCTION 140942aa0 FUN_140942aa0 body=224 status=ok
// SIG undefined FUN_140942aa0(void)

void FUN_140942aa0(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0 [48];
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_208;
  FUN_140942bbf(local_1d0,param_1);
  if (local_50 == (undefined8 *)0x0) {
    local_50 = local_1d0;
  }
  if ((longlong)local_48 != 0) {
    puVar1 = local_50 + (longlong)local_48 * 3;
    do {
      local_1e8 = *local_50;
      local_1e0 = local_50[1];
      local_1d8 = local_50[2];
      FUN_14072d42a(&local_1e8,(float)*(int *)(param_1 + 0xf8) / 1000.0);
      local_50 = local_50 + 3;
    } while (local_50 != puVar1);
  }
  FUN_140942b82(local_1d0);
  if ((local_40 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140942b82 FUN_140942b82 body=61 status=ok
// SIG undefined FUN_140942b82(void)

void FUN_140942b82(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x180);
  if (*(longlong *)(param_1 + 0x180) == 0) {
    lVar1 = param_1;
  }
  FUN_140c576e0(lVar1,*(undefined4 *)(param_1 + 0x188));
  if (*(longlong *)(param_1 + 0x180) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140942bbf FUN_140942bbf body=129 status=ok
// SIG undefined FUN_140942bbf(void)

longlong FUN_140942bbf(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0xa0));
  *(undefined8 *)(param_1 + 0x180) = 0;
  iVar1 = *(int *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(int *)(param_1 + 0x188) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x18c) = 0x10;
  }
  else {
    FUN_1457596ec(param_1,iVar1);
    lVar3 = *(longlong *)(param_1 + 0x180);
    if (*(longlong *)(param_1 + 0x180) == 0) {
      lVar3 = param_1;
    }
    FUN_1457596ad(lVar3,uVar2,iVar1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0xa0));
  return param_1;
}



// FUNCTION 140942c40 FUN_140942c40 body=117 status=ok
// SIG undefined FUN_140942c40(void)

undefined8 FUN_140942c40(__uint64 *param_1,__uint64 param_2,float param_3,bool param_4)

{
  __uint64 _Var1;
  AKRESULT AVar2;
  __uint64 *p_Var3;
  undefined4 extraout_var;
  
  if (param_2 == 0) {
    return 0;
  }
  if (DAT_14cb25ab0 == '\0') {
    return 0;
  }
  p_Var3 = param_1 + 0x24;
  do {
    _Var1 = *p_Var3;
    p_Var3 = (__uint64 *)(_Var1 + 0x30);
  } while (_Var1 != 0 && _Var1 != param_2);
  if (_Var1 != 0) {
    if (*(longlong *)(_Var1 + 0x18) == 0) {
      return 0;
    }
    if ((DAT_14cb26569 & 1) == 0) {
      return 0;
    }
    if (*(uint *)(_Var1 + 8) != 0) {
      AVar2 = AK::SoundEngine::SeekOnEvent
                        (*(uint *)(*(longlong *)(_Var1 + 0x18) + 0x38),*param_1,param_3,param_4,
                         *(uint *)(_Var1 + 8));
      return CONCAT71((int7)(CONCAT44(extraout_var,AVar2) >> 8),AVar2 == 1);
    }
  }
  return 0;
}



// FUNCTION 140942cb5 FUN_140942cb5 body=2461 status=ok
// SIG undefined FUN_140942cb5(void)

longlong * FUN_140942cb5(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined8 local_100;
  wchar_t *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  code **local_e0;
  code *local_d8;
  code *local_d0;
  longlong *local_c0;
  longlong *local_b8;
  undefined8 *local_b0;
  code *local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  code *local_80;
  longlong *local_78;
  longlong *local_70;
  undefined1 local_68 [16];
  longlong *local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  *param_1 = 0;
  param_1[1] = -1;
  param_1[2] = 0;
  FUN_14026e798(local_68);
  lVar10 = FUN_140206ee8(param_3 + 0xb,local_68);
  if (lVar10 == 0) goto LAB_140942ec8;
  local_70 = (longlong *)0x0;
  FUN_14026e798(&local_a8,param_2);
  if (local_a8 == (code *)0x0) {
    if (param_2 != 0) {
      lVar11 = FUN_144a6c4d8();
      if ((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar11 + 0x30)) {
        lVar11 = FUN_147f82cb0(param_2);
        if (lVar11 == 0) {
          lVar11 = FUN_1447210f0(param_2);
          if (lVar11 != 0) {
            lVar11 = FUN_147f82d17(param_2);
            FUN_140b506a4(lVar11);
            if (lVar11 != 0) goto LAB_14094320e;
          }
          local_58 = (longlong *)0x0;
          plStack_50 = (longlong *)0x0;
LAB_140943589:
          local_b8 = (longlong *)0x0;
        }
        else {
LAB_14094320e:
          (**(code **)(*(longlong *)(lVar11 + 0x110) + 0x10))(lVar11 + 0x110,&local_58);
          if (local_58 == (longlong *)0x0) goto LAB_140943589;
          local_90 = local_58;
          local_88 = plStack_50;
          if (plStack_50 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
            UNLOCK();
          }
          FUN_140943653(&local_b8,&local_90,param_2,param_3);
        }
        FUN_1403c75f4(&local_70,&local_b8);
        FUN_144a61ac8(&local_b8);
        plVar1 = plStack_50;
        if (plStack_50 != (longlong *)0x0) {
          LOCK();
          plVar6 = plStack_50 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*plStack_50)(plStack_50);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
      }
    }
  }
  else {
    local_80 = local_a8;
    local_78 = local_a0;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
      UNLOCK();
    }
    FUN_140943653(&local_58,&local_80,param_2,param_3);
    FUN_1403c75f4(&local_70,&local_58);
    plVar1 = local_58;
    if (((local_58 != (longlong *)0x0) &&
        (*(int *)(local_58 + 0x21) = (int)local_58[0x21] + -1, (int)local_58[0x26] < 1)) &&
       (FUN_1400847bc(local_58 + 0x17,0), (int)plVar1[0x21] == 0)) {
      FUN_140087e46(plVar1);
      if (*plVar1 != -1) {
        if (DAT_14cb259f8 == 0) goto LAB_140942dd2;
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar1);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar1);
      }
    }
  }
LAB_140942dd2:
  plVar1 = local_a0;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_a0 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  plVar1 = local_70;
  if (local_70 == (longlong *)0x0) goto LAB_140942ec8;
  if (*local_70 != -1) {
    if (param_2 == 0) {
LAB_140942e3a:
      lVar11 = 0;
    }
    else {
      if (DAT_14cac9ca8 == 0) {
        local_a8 = FUN_141030f22;
        local_d0 = FUN_14081d0ea;
        local_d8 = FUN_14081d0ea;
        local_e8 = &LAB_1478c0a72;
        local_f0 = &LAB_1417b2375;
        local_f8 = L"Engine";
        local_100 = 0x1000000000;
        local_108 = 0x10000004;
        local_110 = 8;
        local_118 = 0x390;
        local_e0 = &local_a8;
        FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
      }
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
         (lVar11 = param_2,
         *(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30))
      goto LAB_140942e3a;
    }
    local_118 = 8;
    FUN_14084a448(plVar1,&local_a8,lVar10,lVar11);
    *param_1 = (longlong)local_a8;
    param_1[1] = (longlong)local_a0;
    param_1[2] = local_98;
    if (*(char *)((longlong)param_3 + 0x10e) == '\x01') {
      local_b8 = local_70;
      if (local_70 != (longlong *)0x0) {
        *(int *)(local_70 + 0x21) = (int)local_70[0x21] + 1;
      }
      local_b0 = param_3;
      if (param_2 != 0) {
        lVar10 = FUN_144a799b0();
        if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
          FUN_1438ab59e(&local_b8,param_2);
          local_98 = 0;
          local_58 = (longlong *)0x0;
          plStack_50 = (longlong *)((ulonglong)plStack_50 & 0xffffffff00000000);
          FUN_1446efa72(&local_58,0,3,0x10);
          plStack_50 = (longlong *)CONCAT44(plStack_50._4_4_,3);
          *local_58 = (longlong)&PTR_LAB_14a7feda0;
          LOCK();
          UNLOCK();
          lVar11 = DAT_14c758608 + 1;
          lVar10 = DAT_14c758608 + 1;
          if (lVar11 == 0) {
            LOCK();
            UNLOCK();
            lVar11 = DAT_14c758608 + 2;
            lVar10 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar10;
          local_58[2] = lVar11;
          *local_58 = (longlong)&PTR_FUN_14acb8c60;
          local_58[3] = (longlong)local_b8;
          if (local_b8 != (longlong *)0x0) {
            *(int *)(local_b8 + 0x21) = (int)local_b8[0x21] + 1;
          }
          local_58[4] = (longlong)local_b0;
          FUN_1408278de(param_2 + 0x200,&local_c0,&local_58);
          FUN_1449db362(&local_58);
          local_a0 = local_c0;
          FUN_14485c47a(&local_98,param_2);
          local_a8 = (code *)param_1[2];
          FUN_147f82b38(param_3,&local_a8);
        }
      }
      FUN_144a61ac8(&local_b8);
    }
    cVar8 = FUN_144904448(param_1);
    plVar1 = local_70;
    if (cVar8 != '\0') {
      plVar6 = local_70 + 4;
      plVar3 = (longlong *)param_3[1];
      if (plVar3 == (longlong *)0x0) {
LAB_1409432fe:
        if ((int)local_70[5] != 3) {
          FUN_1446efa72(plVar6,0,3,0x10);
          *(undefined4 *)(plVar1 + 5) = 3;
        }
        puVar5 = (undefined8 *)*plVar6;
        *puVar5 = &PTR_LAB_14acb8d40;
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 1;
        lVar10 = DAT_14c758608 + 1;
        if (lVar11 == 0) {
          LOCK();
          UNLOCK();
          lVar11 = DAT_14c758608 + 2;
          lVar10 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar10;
        puVar5[2] = lVar11;
        *puVar5 = &PTR_FUN_14acb8cd0;
        puVar5[3] = 0;
        puVar5[4] = 0;
        puVar5[5] = FUN_140b1ba30;
      }
      else {
        iVar9 = (int)plVar3[1];
        do {
          if (iVar9 == 0) goto LAB_1409432fe;
          LOCK();
          iVar7 = (int)plVar3[1];
          bVar12 = iVar9 == iVar7;
          if (bVar12) {
            *(int *)(plVar3 + 1) = iVar9 + 1;
            iVar7 = iVar9;
          }
          iVar9 = iVar7;
          UNLOCK();
        } while (!bVar12);
        uVar4 = *param_3;
        if ((int)local_70[5] != 3) {
          FUN_1446efa72(plVar6,0,3,0x10);
          *(undefined4 *)(plVar1 + 5) = 3;
        }
        puVar5 = (undefined8 *)*plVar6;
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        *puVar5 = &PTR_LAB_14acb8d40;
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 1;
        lVar10 = DAT_14c758608 + 1;
        if (lVar11 == 0) {
          LOCK();
          UNLOCK();
          lVar11 = DAT_14c758608 + 2;
          lVar10 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar10;
        puVar5[2] = lVar11;
        *puVar5 = &PTR_FUN_14acb8cd0;
        puVar5[3] = uVar4;
        puVar5[4] = plVar3;
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        puVar5[5] = FUN_140b1ba30;
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
      plVar3 = local_70;
      plVar1 = local_70 + 8;
      plVar6 = (longlong *)param_3[1];
      if (plVar6 == (longlong *)0x0) {
LAB_140943371:
        if ((int)local_70[9] != 3) {
          FUN_1446efa72(plVar1,0,3,0x10);
          *(undefined4 *)(plVar3 + 9) = 3;
        }
        puVar5 = (undefined8 *)*plVar1;
        *puVar5 = &PTR_LAB_14acb8e20;
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 1;
        lVar10 = DAT_14c758608 + 1;
        if (lVar11 == 0) {
          LOCK();
          UNLOCK();
          lVar11 = DAT_14c758608 + 2;
          lVar10 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar10;
        puVar5[2] = lVar11;
        *puVar5 = &PTR_FUN_14acb8db0;
        puVar5[3] = 0;
        puVar5[4] = 0;
        puVar5[5] = &LAB_140bb90fc;
      }
      else {
        iVar9 = (int)plVar6[1];
        do {
          if (iVar9 == 0) goto LAB_140943371;
          LOCK();
          iVar7 = (int)plVar6[1];
          bVar12 = iVar9 == iVar7;
          if (bVar12) {
            *(int *)(plVar6 + 1) = iVar9 + 1;
            iVar7 = iVar9;
          }
          iVar9 = iVar7;
          UNLOCK();
        } while (!bVar12);
        uVar4 = *param_3;
        if ((int)local_70[9] != 3) {
          FUN_1446efa72(plVar1,0,3,0x10);
          *(undefined4 *)(plVar3 + 9) = 3;
        }
        puVar5 = (undefined8 *)*plVar1;
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        *puVar5 = &PTR_LAB_14acb8e20;
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 1;
        lVar10 = DAT_14c758608 + 1;
        if (lVar11 == 0) {
          LOCK();
          UNLOCK();
          lVar11 = DAT_14c758608 + 2;
          lVar10 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar10;
        puVar5[2] = lVar11;
        *puVar5 = &PTR_FUN_14acb8db0;
        puVar5[3] = uVar4;
        puVar5[4] = plVar6;
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        puVar5[5] = &LAB_140bb90fc;
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
    }
    if (local_70 == (longlong *)0x0) goto LAB_140942ec8;
  }
  plVar1 = local_70;
  *(int *)(local_70 + 0x21) = (int)local_70[0x21] + -1;
  if (((int)local_70[0x26] < 1) && (FUN_1400847bc(local_70 + 0x17,0), (int)plVar1[0x21] == 0)) {
    FUN_140087e46(plVar1);
    if (*plVar1 != -1) {
      if (DAT_14cb259f8 == 0) goto LAB_140942ec8;
      FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar1);
    }
    if (DAT_14cb259f8 != 0) {
      FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar1);
    }
  }
LAB_140942ec8:
  if ((local_40 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140943653 FUN_140943653 body=506 status=ok
// SIG undefined FUN_140943653(void)

undefined8 FUN_140943653(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined2 *local_e8;
  int local_e0;
  undefined2 *local_d8;
  int local_d0;
  longlong local_c8 [2];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined2 local_50;
  undefined8 local_4c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(char *)(param_4 + 0x10d) == '\x01') {
    FUN_1403c747e(*param_2,param_1,*(undefined8 *)(param_4 + 0x90));
  }
  else {
    if (param_3 == 0) {
      FUN_140056680(local_c8);
    }
    else {
      FUN_1400021e4(param_4 + 0x88,&local_d8);
      puVar5 = &DAT_149dfb77a;
      if (local_d0 != 0) {
        puVar5 = local_d8;
      }
      local_c8[0] = *(longlong *)(param_3 + 0x18);
      FUN_1400021e4(local_c8,&local_e8);
      puVar4 = &DAT_149dfb77a;
      if (local_e0 != 0) {
        puVar4 = local_e8;
      }
      FUN_140002266(local_c8,L"%s - (%s)",puVar4,puVar5);
      if (local_e8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_d8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    if (*(char *)(param_4 + 0x10e) == '\x01') {
      local_f8 = (undefined8 *)((ulonglong)local_f8 & 0xffffffffffffff00);
      FUN_14084a140(*param_2,param_1,local_c8,*(undefined8 *)(param_4 + 0x90));
    }
    else {
      local_f8 = &local_b8;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a4 = 0;
      uStack_a0 = 0;
      uStack_9c = 0x3ff00000;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_74 = 0x3ff00000;
      uStack_70 = 0;
      uStack_6c = 0x3ff00000;
      local_68 = 0x3ff0000000000000;
      uStack_60 = 0;
      local_58 = 0x3f800000;
      local_50 = 0;
      local_4c = 0;
      local_f0 = 0;
      FUN_14071b0f2(*param_2,param_1,local_c8,*(undefined8 *)(param_4 + 0x88));
    }
    if (local_c8[0] != 0) {
      FUN_1400020a8();
    }
  }
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
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14094384e FUN_14094384e body=500 status=ok
// SIG undefined FUN_14094384e(void)

undefined8 FUN_14094384e(longlong *param_1,longlong param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  bool bVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  
  lVar2 = *param_1;
  fVar11 = *(float *)(lVar2 + 0xfc);
  fVar10 = *(float *)(lVar2 + 0x120);
  lVar3 = *(longlong *)(param_2 + 0x18);
  iVar5 = *(int *)(param_2 + 0x24);
  iVar4 = (int)((ulonglong)lVar3 >> 0x20);
  if (*(int *)(lVar2 + 0x50) != 0) {
    if (SBORROW4(0,iVar5)) {
      piVar6 = (int *)(param_2 + 4);
      if (*(int *)(param_2 + 0x20) == 0) {
        piVar6 = (int *)(param_2 + 0x10);
      }
      iVar5 = *piVar6;
      fVar1 = (float)piVar6[1];
    }
    else {
      fVar1 = 0.0;
    }
    fVar11 = *(float *)(lVar2 + 0xf4 + (ulonglong)(-(uint)(fVar11 != fVar10) & 1) * 8) -
             ((float)((lVar3 >> 0x20) * (longlong)iVar5) + (float)iVar4 * fVar1) / (float)(int)lVar3
    ;
    if ((*(char *)(lVar2 + 0x40) == '\x01') && (*(char *)(lVar2 + 0x48) == '\x01')) {
      fVar10 = *(float *)(lVar2 + 0x4c);
      if (((fVar10 == 0.0) && (!NAN(fVar10))) ||
         ((*(float *)(lVar2 + 0x44) != fVar10 || (NAN(*(float *)(lVar2 + 0x44)) || NAN(fVar10)))))
      goto LAB_140943a0d;
    }
    else {
LAB_140943a0d:
      fVar10 = *(float *)(lVar2 + 0x104);
      if ((fVar10 == -1.0) && (!NAN(fVar10))) {
        fVar10 = *(float *)(lVar2 + 0xf4) - *(float *)(lVar2 + 0xf0);
      }
    }
    bVar9 = fVar10 == fVar11;
    bVar8 = fVar10 < fVar11;
    goto LAB_140943930;
  }
  lVar7 = 0xf0;
  if (fVar11 != fVar10) {
    lVar7 = 0xfc;
  }
  if (NAN(fVar11) || NAN(fVar10)) {
    lVar7 = 0xfc;
  }
  if (SBORROW4(0,iVar5)) {
    piVar6 = (int *)(param_2 + 4);
    if (*(int *)(param_2 + 0x20) == 0) {
      piVar6 = (int *)(param_2 + 0x10);
    }
    iVar5 = *piVar6;
    fVar11 = (float)piVar6[1];
  }
  else {
    fVar11 = 0.0;
  }
  fVar11 = ((float)((lVar3 >> 0x20) * (longlong)iVar5) + (float)iVar4 * fVar11) / (float)(int)lVar3
           - *(float *)(lVar2 + lVar7);
  if ((*(char *)(lVar2 + 0x40) == '\x01') && (*(char *)(lVar2 + 0x48) == '\x01')) {
    fVar10 = *(float *)(lVar2 + 0x4c);
    if (((fVar10 == 0.0) && (!NAN(fVar10))) ||
       ((*(float *)(lVar2 + 0x44) != fVar10 || (NAN(*(float *)(lVar2 + 0x44)) || NAN(fVar10)))))
    goto LAB_1409439dd;
  }
  else {
LAB_1409439dd:
    fVar10 = *(float *)(lVar2 + 0x104);
    if ((fVar10 == -1.0) && (!NAN(fVar10))) {
      fVar10 = *(float *)(lVar2 + 0xf4) - *(float *)(lVar2 + 0xf0);
    }
  }
  bVar9 = fVar10 == fVar11;
  bVar8 = fVar10 < fVar11;
LAB_140943930:
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),!bVar8 && !bVar9);
}



// FUNCTION 140943a42 FUN_140943a42 body=395 status=ok
// SIG undefined FUN_140943a42(void)

void FUN_140943a42(longlong *param_1,longlong param_2,undefined8 param_3)

{
  float fVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  int iVar6;
  int *piVar7;
  longlong *plVar8;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *param_1;
  if (lVar2 != 0) {
    cVar4 = FUN_14094384e();
    if (cVar4 != '\0') {
      local_58 = 0;
      uStack_50 = 0;
      local_60 = FUN_140206ee8(lVar2 + 0x58);
      FUN_140942716();
      lVar2 = *(longlong *)(*param_1 + 0x98);
      plVar8 = (longlong *)(*param_1 + 0x98);
      if ((lVar2 != 0) && ((DAT_14cb26569 & 1) != 0)) {
        FUN_1400848c0(*(undefined8 *)(lVar2 + 0x50));
      }
      *plVar8 = local_60;
      FUN_140942716(plVar8);
      if ((local_60 != 0) && ((DAT_14cb26569 & 1) != 0)) {
        FUN_1400848c0(*(undefined8 *)(local_60 + 0x50));
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + 0xfc) =
           *(undefined4 *)(lVar2 + 0xf0 + (ulonglong)(*(int *)(lVar2 + 0x50) != 0) * 4);
      lVar2 = *(longlong *)(param_2 + 0x18);
      iVar6 = *(int *)(param_2 + 0x24);
      fVar1 = 0.0;
      if (SBORROW4(0,iVar6)) {
        piVar7 = (int *)(param_2 + 4);
        if (*(int *)(param_2 + 0x20) == 0) {
          piVar7 = (int *)(param_2 + 0x10);
        }
        iVar6 = *piVar7;
        fVar1 = (float)piVar7[1];
      }
      uVar5 = FUN_1461baf02(*param_1,param_3);
      uVar3 = FUN_140942920(param_1,param_2);
      FUN_14623c8e4(*param_1,param_3,uVar3,uVar5);
      *(float *)(*param_1 + 0xfc) =
           ((float)((lVar2 >> 0x20) * (longlong)iVar6) +
           (float)(int)((ulonglong)lVar2 >> 0x20) * fVar1) / (float)(int)lVar2;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140943bce FUN_140943bce body=281 status=ok
// SIG undefined FUN_140943bce(void)

longlong FUN_140943bce(longlong *param_1)

{
  longlong lVar1;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_1 + 0x5d0))();
  if (lVar1 != 0) {
    if (DAT_14caf9cd0 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1463c0cc2;
      local_38 = &LAB_147c9db5b;
      local_40 = &LAB_1463f9c44;
      local_48 = &DAT_149e063b2;
      local_50 = 0x2000000000;
      local_58 = 0x10000004;
      local_60 = 8;
      local_68 = 0x958;
      FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
    }
    if ((*(int *)(DAT_14caf9cd0 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) == DAT_14caf9cd0 + 0x30)) goto LAB_140943c1d;
  }
  lVar1 = 0;
LAB_140943c1d:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140943d10 FUN_140943d10 body=142 status=ok
// SIG undefined FUN_140943d10(void)

undefined8 * FUN_140943d10(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  int *piVar4;
  undefined8 uVar5;
  
  lVar3 = (**(code **)(*param_1 + 0x68))();
  if (lVar3 == 0) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    return param_2;
  }
  piVar2 = *(int **)(*(longlong *)(lVar3 + 0x40) + 8);
  piVar4 = &DAT_14c9485f0;
  if (piVar2 != (int *)0x0) {
    piVar4 = piVar2;
  }
  if (((*piVar4 != 0) && (iVar1 = piVar4[1], iVar1 != 0)) && (*piVar4 != DAT_14c948000)) {
    if ((iVar1 < 2) && (piVar4[9] < 1)) {
      piVar4 = piVar4 + 2;
    }
    else {
      piVar4 = *(int **)(piVar4 + 6);
    }
    if (0 < iVar1) {
      *(int *)(param_2 + 1) = piVar4[2];
      uVar5 = *(undefined8 *)piVar4;
      goto LAB_140943d81;
    }
  }
  *(undefined4 *)(param_2 + 1) = DAT_14c948620;
  uVar5 = DAT_14c948618;
LAB_140943d81:
  *param_2 = uVar5;
  return param_2;
}



// FUNCTION 140943da2 FUN_140943da2 body=9 status=ok
// SIG undefined FUN_140943da2(void)

void FUN_140943da2(longlong param_1)

{
  FUN_140943dac(param_1 + 0x10);
  return;
}



// FUNCTION 140943dac FUN_140943dac body=174 status=ok
// SIG undefined FUN_140943dac(void)

void FUN_140943dac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4a75c0;
  if (param_1[0x59] != 0) {
    FUN_1400020a8();
  }
  FUN_140943e8e(param_1[0x56],*(undefined4 *)(param_1 + 0x57));
  if (param_1[0x56] != 0) {
    FUN_1400020a8();
  }
  FUN_140943f04(param_1[0x54],*(undefined4 *)(param_1 + 0x55));
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_140943f4f(param_1[0x52],*(undefined4 *)(param_1 + 0x53));
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  FUN_140943e5a(param_1 + 0x41);
  FUN_140944000(param_1);
  return;
}



// FUNCTION 140943e5a FUN_140943e5a body=52 status=ok
// SIG undefined FUN_140943e5a(void)

void FUN_140943e5a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  if (*(longlong *)(param_1 + 0x70) == 0) {
    lVar1 = param_1;
  }
  FUN_140943ec3(lVar1,*(undefined4 *)(param_1 + 0x78));
  if (*(longlong *)(param_1 + 0x70) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140943e8e FUN_140943e8e body=53 status=ok
// SIG undefined FUN_140943e8e(void)

void FUN_140943e8e(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    *param_1 = 0;
    param_1 = param_1 + 5;
  }
  return;
}



// FUNCTION 140943ec3 FUN_140943ec3 body=65 status=ok
// SIG undefined FUN_140943ec3(void)

void FUN_140943ec3(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140943f04 FUN_140943f04 body=75 status=ok
// SIG undefined FUN_140943f04(void)

void FUN_140943f04(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140943f4f FUN_140943f4f body=177 status=ok
// SIG undefined FUN_140943f4f(void)

void FUN_140943f4f(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  
  if (param_2 != 0) {
    piVar4 = (int *)(param_1 + 8);
    do {
      lVar2 = DAT_14c9a3d60;
      if (*piVar4 != 0) {
        if (DAT_14c9a3d68 != DAT_14c9a3d94) {
          iVar3 = *piVar4 + -1;
          lVar1 = (longlong)iVar3 * 0x88;
          FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar1),
                        *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar1));
          if (*(longlong *)(lVar2 + 0x70 + lVar1) != 0) {
            FUN_1400020a8();
          }
          if (*(longlong *)(lVar2 + lVar1 + 0x60) != 0) {
            FUN_1400020a8();
          }
          FUN_14059507c(&DAT_14c9a3d60,iVar3,1);
        }
        *piVar4 = 0;
      }
      piVar4 = piVar4 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140944000 FUN_140944000 body=489 status=ok
// SIG undefined FUN_140944000(void)

void FUN_140944000(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b318750;
  plVar2 = (longlong *)param_1[0x3e];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  FUN_1409441ea(param_1 + 0x33);
  *(undefined4 *)(param_1 + 0x32) = 0;
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  FUN_1409441ea(param_1 + 0x29);
  FUN_1409442e6(param_1[0x25],*(undefined4 *)(param_1 + 0x26));
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_140944221(param_1[0x23],*(undefined4 *)(param_1 + 0x24));
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_140944385(param_1[0x21],*(undefined4 *)(param_1 + 0x22));
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_1400fd330(param_1 + 0x15);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_1 + 0xb);
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_140944221(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_140255aed(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1409441ea FUN_1409441ea body=55 status=ok
// SIG undefined FUN_1409441ea(void)

void FUN_1409441ea(longlong *param_1)

{
  FUN_14094426c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140944221 FUN_140944221 body=75 status=ok
// SIG undefined FUN_140944221(void)

void FUN_140944221(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14094426c FUN_14094426c body=121 status=ok
// SIG undefined FUN_14094426c(void)

void FUN_14094426c(longlong param_1,int param_2)

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



// FUNCTION 1409442e6 FUN_1409442e6 body=159 status=ok
// SIG undefined FUN_1409442e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409442e6(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  auVar1 = _DAT_149931e80;
  if (param_2 != 0) {
    lVar3 = (ulonglong)param_2 - 1;
    auVar5._8_4_ = (int)lVar3;
    auVar5._0_8_ = lVar3;
    auVar5._12_4_ = (int)((ulonglong)lVar3 >> 0x20);
    puVar2 = (undefined8 *)(param_1 + 0x10);
    uVar4 = 0;
    auVar6 = pmovsxbq(in_XMM1,0x100);
    auVar5 = auVar5 ^ _DAT_149931e80;
    do {
      if ((bool)(~(auVar5._0_8_ < (longlong)(uVar4 ^ auVar1._0_8_)) & 1)) {
        puVar2[-2] = 0;
      }
      auVar7._8_4_ = (int)uVar4;
      auVar7._0_8_ = uVar4;
      auVar7._12_4_ = (int)(uVar4 >> 0x20);
      if ((longlong)((auVar7._8_8_ | auVar6._8_8_) ^ auVar1._8_8_) <= auVar5._8_8_) {
        *puVar2 = 0;
      }
      uVar4 = uVar4 + 2;
      puVar2 = puVar2 + 4;
    } while (((ulonglong)param_2 + 1 & 0xfffffffffffffffe) != uVar4);
  }
  return;
}



// FUNCTION 140944385 FUN_140944385 body=177 status=ok
// SIG undefined FUN_140944385(void)

void FUN_140944385(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  
  if (param_2 != 0) {
    piVar4 = (int *)(param_1 + 8);
    do {
      lVar2 = DAT_14c9a3d60;
      if (*piVar4 != 0) {
        if (DAT_14c9a3d68 != DAT_14c9a3d94) {
          iVar3 = *piVar4 + -1;
          lVar1 = (longlong)iVar3 * 0x88;
          FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar1),
                        *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar1));
          if (*(longlong *)(lVar2 + 0x70 + lVar1) != 0) {
            FUN_1400020a8();
          }
          if (*(longlong *)(lVar2 + lVar1 + 0x60) != 0) {
            FUN_1400020a8();
          }
          FUN_14059507c(&DAT_14c9a3d60,iVar3,1);
        }
        *piVar4 = 0;
      }
      piVar4 = piVar4 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140944436 FUN_140944436 body=1068 status=ok
// SIG undefined FUN_140944436(void)

int FUN_140944436(longlong param_1,int param_2,undefined8 param_3,byte param_4,byte param_5,
                 byte param_6,undefined8 param_7,int *param_8)

{
  longlong *plVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined8 ****ppppuVar13;
  undefined4 *puVar14;
  longlong *plVar15;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 ***local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0x390) != *(int *)(param_1 + 0x3bc)) {
    lVar5 = FUN_140944864(param_3);
    iVar12 = param_2;
    if ((lVar5 != 0) && (lVar5 = FUN_140307b1c(lVar5), lVar5 != 0)) {
      puVar14 = &DAT_14c9485f0;
      if (*(undefined4 **)(lVar5 + 8) != (undefined4 *)0x0) {
        puVar14 = *(undefined4 **)(lVar5 + 8);
      }
      if (DAT_14c947fe0 == 0) {
        lVar5 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar5);
        DAT_14c947fe0 = lVar5;
      }
      FUN_140045924(DAT_14c947fe0,&local_88,puVar14,1);
      if (*(int *)(param_1 + 0x390) != *(int *)(param_1 + 0x3bc)) {
        uVar4 = (uint)((ulonglong)local_88 >> 0x10);
        uVar10 = (uint)local_88 & 0xffff;
        lVar5 = param_1 + 0x3c0;
        if (*(longlong *)(param_1 + 0x3c8) != 0) {
          lVar5 = *(longlong *)(param_1 + 0x3c8);
        }
        iVar3 = *(int *)(lVar5 + (ulonglong)
                                 (*(int *)(param_1 + 0x3d0) - 1U &
                                 (int)((ulonglong)local_88 >> 0x20) +
                                 ((uint)local_88 << 0x10 | uVar10) +
                                 (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar10 >> 4)) * 4);
        if (iVar3 != -1) {
          do {
            lVar5 = *(longlong *)(param_1 + 0x388) + (longlong)iVar3 * 0x20;
            if (*(longlong *)(*(longlong *)(param_1 + 0x388) + (longlong)iVar3 * 0x20) == local_88)
            {
              if (((lVar5 != 0) && ((longlong *)(lVar5 + 8) != (longlong *)0x0)) &&
                 (0 < *(int *)(lVar5 + 0x10))) {
                bVar9 = (char)*(int *)(lVar5 + 0x10) - 1;
                if (param_4 < bVar9) {
                  bVar9 = param_4;
                }
                lVar5 = *(longlong *)(lVar5 + 8);
                uVar6 = (ulonglong)bVar9;
                iVar12 = *(int *)(lVar5 + 8 + uVar6 * 0x18);
                iVar3 = *(int *)(lVar5 + 0xc + uVar6 * 0x18);
                iVar11 = *(int *)(lVar5 + 0x10 + uVar6 * 0x18);
                if (0 < *(int *)(param_1 + 0x3e0)) {
                  bVar9 = (char)*(int *)(param_1 + 0x3e0) - 1;
                  if (param_6 < bVar9) {
                    bVar9 = param_6;
                  }
                  lVar5 = *(longlong *)(param_1 + 0x3d8);
                  uVar6 = (ulonglong)bVar9;
                  iVar12 = iVar12 + *(int *)(lVar5 + 8 + uVar6 * 0x18);
                  iVar3 = iVar3 + *(int *)(lVar5 + 0xc + uVar6 * 0x18);
                  iVar11 = iVar11 + *(int *)(lVar5 + 0x10 + uVar6 * 0x18);
                }
                if (((iVar12 <= param_2) && (iVar12 = param_2, iVar3 < param_2)) &&
                   (iVar12 = iVar11 + param_2, iVar11 + param_2 < iVar3)) {
                  iVar12 = iVar3;
                }
              }
              break;
            }
            iVar3 = *(int *)(lVar5 + 0x18);
          } while (iVar3 != -1);
        }
      }
    }
    if ((char)param_8[1] == '\x01') {
      iVar3 = *param_8;
    }
    else {
      iVar3 = 0;
      if (*(longlong *)(param_1 + 0x260) != 0) {
        lVar5 = FUN_1409448ee(param_1 + 0x1f8);
        if ((*(int *)(param_1 + 0x218) != *(int *)(param_1 + 0x244)) &&
           ((int)(uint)param_5 < *(int *)(param_1 + 0x30))) {
          lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x28) + (ulonglong)param_5 * 0x170);
          uVar4 = (uint)((ulonglong)lVar7 >> 0x10);
          uVar10 = (uint)lVar7 & 0xffff;
          lVar8 = param_1 + 0x248;
          if (*(longlong *)(param_1 + 0x250) != 0) {
            lVar8 = *(longlong *)(param_1 + 0x250);
          }
          iVar11 = *(int *)(lVar8 + (ulonglong)
                                    (*(int *)(param_1 + 600) - 1U &
                                    (int)((ulonglong)lVar7 >> 0x20) + ((uint)lVar7 << 0x10 | uVar10)
                                    + (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar10 >> 4)) * 4);
          if (iVar11 != -1) {
            do {
              plVar1 = (longlong *)(*(longlong *)(param_1 + 0x210) + (longlong)iVar11 * 0x28);
              if (*plVar1 == lVar7) {
                plVar15 = plVar1 + 1;
                if ((plVar15 != (longlong *)0x0 && plVar1 != (longlong *)0x0) &&
                   (lVar7 = FUN_1409448ee(plVar15), lVar7 != 0)) {
                  lVar5 = FUN_1409448ee(plVar15);
                }
                break;
              }
              iVar11 = (int)plVar1[4];
            } while (iVar11 != -1);
          }
        }
        if (lVar5 != 0) {
          iVar3 = 0;
          uVar4 = FUN_14094497a(param_1,param_7,0);
          if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(param_1 + 200))) {
            local_74 = 0xffffffff;
            local_70 = *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + (ulonglong)uVar4 * 0x28);
            local_80 = 0xffffffff;
            local_7c = *(undefined8 *)(param_1 + 0x260);
            FUN_14092c00a(lVar5,local_68);
            iVar3 = FUN_14005fbd2(local_68,0);
            pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
            if (pcVar2 != (code *)0x0) {
              ppppuVar13 = local_68;
              if (0x18 < local_50) {
                ppppuVar13 = (undefined8 ****)local_68[0];
              }
              (*pcVar2)(ppppuVar13);
            }
            if (0x18 < local_50) {
              FUN_1400020a8(local_68[0]);
            }
          }
        }
      }
    }
    param_2 = 1;
    if (1 < iVar3 + iVar12) {
      param_2 = iVar3 + iVar12;
    }
  }
  if ((char)param_8[1] == '\x01') {
    *(undefined1 *)(param_8 + 1) = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140944864 FUN_140944864 body=136 status=ok
// SIG undefined FUN_140944864(void)

longlong FUN_140944864(undefined8 *param_1)

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
    if (DAT_14cb8df08 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144837462(DAT_14cb8df08,local_40);
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



// FUNCTION 1409448ee FUN_1409448ee body=138 status=ok
// SIG undefined FUN_1409448ee(void)

longlong FUN_1409448ee(undefined8 *param_1)

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
    if (DAT_14c9a75f8 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144837462(DAT_14c9a75f8,local_40);
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



// FUNCTION 14094497a FUN_14094497a body=308 status=ok
// SIG undefined FUN_14094497a(void)

ulonglong FUN_14094497a(longlong param_1,longlong *param_2,char param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = FUN_1401b0f18();
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_1401b0f18();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
        lVar4 = (**(code **)(*plVar3 + 0x28))(plVar3);
        if (0 < (longlong)*(int *)(param_1 + 200)) {
          uVar5 = 0;
          do {
            lVar6 = (longlong)*(int *)(*(longlong *)(param_1 + 0xc0) + 0x10 + uVar5 * 0x28);
            if (lVar6 != 0) {
              plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + uVar5 * 0x28 + 8);
              plVar2 = plVar3 + lVar6;
              do {
                if (*(int *)(lVar4 + 0x80) != 0) {
                  lVar6 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar4 + 0x78) + lVar6) == *plVar3) {
                      return uVar5;
                    }
                    lVar6 = lVar6 + 8;
                  } while ((longlong)*(int *)(lVar4 + 0x80) << 3 != lVar6);
                }
                if (*(int *)(lVar4 + 0x90) != 0) {
                  lVar6 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar4 + 0x88) + lVar6) == *plVar3) {
                      return uVar5;
                    }
                    lVar6 = lVar6 + 8;
                  } while ((longlong)*(int *)(lVar4 + 0x90) << 3 != lVar6);
                }
                plVar3 = plVar3 + 1;
              } while (plVar3 != plVar2);
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 != (longlong)*(int *)(param_1 + 200));
        }
      }
    }
  }
  uVar5 = 0xffffffff;
  if (param_3 != '\0') {
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x380);
  }
  return uVar5;
}



// FUNCTION 140944ab4 FUN_140944ab4 body=57 status=ok
// SIG undefined FUN_140944ab4(void)

void FUN_140944ab4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5aa80 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5aa80 = FUN_140002ddd(FUN_1464cb888,uVar1,L"GbxBrainAspectSettings_EngagePlayers");
  }
  return;
}



// FUNCTION 140944aed FUN_140944aed body=460 status=ok
// SIG undefined FUN_140944aed(void)

void FUN_140944aed(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14575994c();
  FUN_145759900(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  plVar1 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar15 = 1;
    local_58._0_4_ = 0xffffffff;
    iVar11 = 0;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar15 = local_68 >> 0x20;
    iVar11 = (int)param_1[5];
  }
  plVar5 = local_60;
  iVar8 = (int)local_68;
  uVar14 = (uint)local_58;
  iVar7 = local_58._4_4_;
  iVar10 = local_50;
  if (local_58._4_4_ != iVar11 || local_60 != plVar1) {
    do {
      lVar12 = *param_1;
      lVar6 = (longlong)iVar7 * 0x20;
      if (*(int *)(lVar12 + 0x14 + lVar6) != *(int *)(lVar12 + 0x10 + lVar6)) {
        FUN_140944cba(lVar12 + lVar6 + 8);
      }
      uVar14 = uVar14 & ~(uint)uVar15;
      plVar13 = (longlong *)plVar5[2];
      if ((longlong *)plVar5[2] == (longlong *)0x0) {
        plVar13 = plVar5;
      }
      iVar3 = (int)plVar5[3];
      lVar12 = (longlong)iVar8;
      uVar9 = *(uint *)((longlong)plVar13 + lVar12 * 4) & uVar14;
      if (uVar9 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar4 = iVar7;
        if (iVar7 < iVar8) {
          iVar4 = iVar8;
        }
        if (iVar8 < iVar7) {
          lVar6 = 0;
          do {
            uVar9 = *(uint *)((longlong)plVar13 + lVar6 * 4 + lVar12 * 4 + 4);
            if (uVar9 != 0) {
              iVar8 = iVar8 + (int)lVar6 + 1;
              uVar14 = 0xffffffff;
              goto LAB_140944c1a;
            }
            iVar10 = iVar10 + 0x20;
            lVar6 = lVar6 + 1;
          } while (iVar4 - lVar12 != lVar6);
          uVar14 = 0xffffffff;
          iVar8 = iVar4;
        }
        iVar8 = iVar8 + 1;
        iVar7 = iVar3;
      }
      else {
LAB_140944c1a:
        uVar15 = (ulonglong)(-uVar9 & uVar9);
        uVar2 = uVar15 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar7 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar7) {
          iVar7 = iVar3;
        }
      }
    } while (iVar7 != iVar11 || plVar5 != plVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140944cba FUN_140944cba body=315 status=ok
// SIG undefined FUN_140944cba(void)

void FUN_140944cba(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140944d24;
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
LAB_140944d24:
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



// FUNCTION 140944df6 FUN_140944df6 body=616 status=ok
// SIG undefined FUN_140944df6(void)

void FUN_140944df6(longlong param_1)

{
  FUN_1447a4a8e(param_1,0);
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(int *)(param_1 + 0x10c) != 0) {
    FUN_14094505e(param_1 + 0x100,0);
  }
  *(undefined4 *)(param_1 + 0x118) = 0;
  if (*(int *)(param_1 + 0x11c) != 0) {
    FUN_1448759c8(param_1 + 0x110,0);
  }
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (*(int *)(param_1 + 300) != 0) {
    FUN_147bb9c56(param_1 + 0x120,0);
  }
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(int *)(param_1 + 0x13c) != 0) {
    FUN_1448759c8(param_1 + 0x130,0);
  }
  *(undefined4 *)(param_1 + 0x148) = 0;
  if (*(int *)(param_1 + 0x14c) != 0) {
    FUN_140945132(param_1 + 0x140,0);
  }
  *(undefined4 *)(param_1 + 0x158) = 0;
  if (*(int *)(param_1 + 0x15c) != 0) {
    FUN_1448759c8(param_1 + 0x150,0);
  }
  *(undefined4 *)(param_1 + 0x168) = 0;
  if (*(int *)(param_1 + 0x16c) != 0) {
    FUN_1417dfd9c(param_1 + 0x160,0);
  }
  *(undefined4 *)(param_1 + 0x178) = 0;
  if (*(int *)(param_1 + 0x17c) != 0) {
    FUN_1448759c8(param_1 + 0x170,0);
  }
  *(undefined4 *)(param_1 + 0x188) = 0;
  if (*(int *)(param_1 + 0x18c) != 0) {
    FUN_147bb9d7c(param_1 + 0x180,0);
  }
  *(undefined4 *)(param_1 + 0x198) = 0;
  if (*(int *)(param_1 + 0x19c) != 0) {
    FUN_1448759c8(param_1 + 400,0);
  }
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  if (*(int *)(param_1 + 0x1ac) != 0) {
    FUN_1417e0060(param_1 + 0x1a0,0);
  }
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  if (*(int *)(param_1 + 0x1bc) != 0) {
    FUN_1448759c8(param_1 + 0x1b0,0);
  }
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  if (*(int *)(param_1 + 0x1cc) != 0) {
    FUN_1463eabc6(param_1 + 0x1c0,0);
  }
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  if (*(int *)(param_1 + 0x1dc) != 0) {
    FUN_1448759c8(param_1 + 0x1d0,0);
  }
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  if (*(int *)(param_1 + 0x1fc) == 0) {
    return;
  }
  FUN_147bbb6fe(param_1 + 0x1f0);
  return;
}



// FUNCTION 14094505e FUN_14094505e body=212 status=ok
// SIG undefined FUN_14094505e(void)

void FUN_14094505e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x400) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[(ulonglong)param_2 * 2]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,4);
      }
    }
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,4);
  }
  return;
}



// FUNCTION 140945132 FUN_140945132 body=337 status=ok
// SIG undefined FUN_140945132(void)

void FUN_140945132(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = (ulonglong)param_2 * 0x14;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar3 = uVar4 + 0xf;
        if (param_2 < 0x666) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          if ((uVar3 & 0x1ffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar3 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14094519f;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar3 & 0x1ffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_14094519f:
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar4 / 0x14)) {
      uVar3 = uVar4 / 0x14 & 0xffffffff;
    }
  }
  if ((int)uVar3 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x14,4);
  }
  return;
}



// FUNCTION 140945284 FUN_140945284 body=299 status=ok
// SIG undefined FUN_140945284(void)

longlong FUN_140945284(longlong *param_1,uint param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  int local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = FUN_1409453b0();
  if (lVar4 == 0) {
    FUN_1409454b0(param_1,local_48);
    uVar1 = param_3[1];
    *local_40 = *param_3;
    local_40[1] = uVar1;
    local_40[2] = 0;
    local_40[3] = 0;
    *(undefined4 *)(local_40 + 4) = 0xffffffff;
    cVar2 = FUN_140945406(param_1,param_2,local_40,local_48);
    if (cVar2 == '\0') {
      uVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
      if (uVar3 < 4) {
        iVar6 = 1;
      }
      else {
        uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
        lVar4 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        iVar6 = 1 << ((byte)lVar4 & 0x1f);
      }
      if (((int)uVar3 < 1) || (iVar6 <= (int)param_1[9])) {
        param_2 = (int)param_1[9] - 1U & param_2;
        *(uint *)((longlong)local_40 + 0x24) = param_2;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = param_1 + 7;
        }
        *(undefined4 *)(local_40 + 4) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = param_1 + 7;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4) =
             local_48[0];
      }
      else {
        *(int *)(param_1 + 9) = iVar6;
        FUN_1415be524(param_1);
      }
    }
    lVar4 = *param_1 + (longlong)local_48[0] * 0x28;
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4 + 0x10;
}



// FUNCTION 1409453b0 FUN_1409453b0 body=85 status=ok
// SIG undefined FUN_1409453b0(void)

longlong * FUN_1409453b0(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x28);
        if ((*plVar2 == *param_3) &&
           (*(longlong *)(*param_1 + 8 + (longlong)iVar1 * 0x28) == param_3[1])) {
          return plVar2;
        }
        iVar1 = (int)plVar2[4];
      } while (iVar1 != -1);
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 140945406 FUN_140945406 body=169 status=ok
// SIG undefined FUN_140945406(void)

undefined8 FUN_140945406(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        plVar8 = (longlong *)(*param_1 + (longlong)iVar9 * 0x28);
        if ((*plVar8 == *param_3) &&
           (*(longlong *)(*param_1 + 8 + (longlong)iVar9 * 0x28) == param_3[1])) {
          if (plVar8[2] != 0) {
            FUN_1400020a8();
          }
          lVar5 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar6 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar7 = param_3[3];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(int *)(plVar8 + 2) = (int)param_3[2];
          *(undefined4 *)((longlong)plVar8 + 0x14) = uVar3;
          *(int *)(plVar8 + 3) = (int)lVar7;
          *(undefined4 *)((longlong)plVar8 + 0x1c) = uVar4;
          *(int *)plVar8 = (int)lVar5;
          *(undefined4 *)((longlong)plVar8 + 4) = uVar1;
          *(int *)(plVar8 + 1) = (int)lVar6;
          *(undefined4 *)((longlong)plVar8 + 0xc) = uVar2;
          FUN_147009170(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = (int)plVar8[4];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 1409454b0 FUN_1409454b0 body=470 status=ok
// SIG undefined FUN_1409454b0(void)

int * FUN_1409454b0(longlong *param_1,int *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_140549c28(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar5 = iVar6 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar5 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar3 = FUN_144a3809e(uVar7 << 2,0);
          iVar5 = (int)(uVar3 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar5) {
            iVar8 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar5);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar5 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar5 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar4 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar5 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    lVar2 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar4 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar2 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar2 * 0x28);
    *(int *)(param_1 + 6) = iVar6;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x28) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar2 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 140945692 FUN_140945692 body=1239 status=ok
// SIG undefined FUN_140945692(void)

undefined8 * FUN_140945692(undefined8 *param_1)

{
  longlong *plVar1;
  undefined1 auStack_68 [39];
  undefined1 local_41;
  code *local_40;
  undefined1 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140945c4e();
  *param_1 = &PTR_FUN_14b2232d0;
  param_1[5] = &PTR_FUN_14b224060;
  param_1[6] = &PTR_LAB_14b2240a0;
  param_1[0x55] = &PTR_FUN_14b2240f0;
  param_1[0x56] = &PTR_FUN_14b224170;
  param_1[0x57] = &PTR_FUN_14b224180;
  param_1[0xca] = &PTR_FUN_14b2241b0;
  param_1[0x15a] = &PTR_FUN_14b224210;
  param_1[0x247] = &PTR_FUN_14b224250;
  param_1[0x248] = &PTR_FUN_14b224290;
  param_1[0x249] = &PTR_FUN_14b2242b0;
  param_1[0x24a] = &PTR_FUN_14b2242e0;
  param_1[0x24b] = &PTR_FUN_14b224300;
  param_1[0x24d] = 0;
  param_1[0x24e] = 0;
  param_1[0x24f] = 0;
  param_1[0x250] = 0;
  FUN_140945b6a(param_1 + 0x251);
  param_1[0x28a] = 0;
  *(undefined4 *)(param_1 + 0x28b) = 0;
  param_1[0x286] = 0;
  param_1[0x287] = 0;
  *(undefined8 *)((longlong)param_1 + 0x145c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1464) = 0;
  param_1[0x28e] = 0;
  *(undefined4 *)(param_1 + 0x28f) = 0;
  param_1[0x290] = 0;
  *(undefined4 *)(param_1 + 0x291) = 0;
  param_1[0x296] = 0;
  *(undefined4 *)(param_1 + 0x297) = 0;
  param_1[0x292] = 0;
  param_1[0x293] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x14c4) = 0;
  param_1[0x29a] = 0;
  *(undefined4 *)(param_1 + 0x29b) = 0;
  param_1[0x2a1] = 0;
  *(undefined4 *)(param_1 + 0x2a2) = 0;
  param_1[0x29e] = 0;
  param_1[0x29c] = 0;
  param_1[0x29d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1514) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x151c) = 0;
  param_1[0x2a5] = 0;
  *(undefined4 *)(param_1 + 0x2a6) = 0;
  param_1[0x2ab] = 0;
  *(undefined4 *)(param_1 + 0x2ac) = 0;
  param_1[0x2a7] = 0;
  param_1[0x2a8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1564) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x156c) = 0;
  param_1[0x2af] = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  param_1[0x2b8] = 0;
  *(undefined4 *)(param_1 + 0x2b9) = 0;
  param_1[0x2b5] = 0;
  param_1[0x2b3] = 0;
  param_1[0x2b4] = 0;
  param_1[0x2b1] = 0;
  param_1[0x2b2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x15cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x15d4) = 0;
  param_1[700] = 0;
  *(undefined4 *)(param_1 + 0x2bd) = 0;
  *(undefined1 *)(param_1 + 0x2c0) = 0;
  param_1[0x2be] = 0;
  param_1[0x2bf] = 0;
  param_1[0x2c3] = 0;
  param_1[0x2c4] = 0;
  param_1[0x2c1] = 0;
  param_1[0x2c2] = 0;
  *(undefined4 *)(param_1 + 0x2c5) = 2;
  param_1[0x2cd] = 0;
  param_1[0x2ce] = 0;
  *(undefined8 *)((longlong)param_1 + 0x165c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1664) = 0;
  *(undefined8 *)((longlong)param_1 + 0x164c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1654) = 0;
  *(undefined8 *)((longlong)param_1 + 0x163c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1644) = 0;
  *(undefined8 *)((longlong)param_1 + 0x162c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1634) = 0;
  *(undefined4 *)(param_1 + 0x2cf) = 0xffffffff;
  param_1[0x2d7] = 0;
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  param_1[0x2d3] = 0;
  param_1[0x2d4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x168c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1694) = 0;
  *(undefined8 *)((longlong)param_1 + 0x167c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1684) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x16cc) = 0;
  param_1[0x2db] = 0;
  *(undefined4 *)(param_1 + 0x2dc) = 0;
  param_1[0x2e3] = 0;
  *(undefined4 *)(param_1 + 0x2e4) = 0;
  param_1[0x2df] = 0;
  param_1[0x2e0] = 0;
  param_1[0x2dd] = 0;
  param_1[0x2de] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1724) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x172c) = 0;
  param_1[0x2e7] = 0;
  *(undefined4 *)(param_1 + 0x2e8) = 0;
  param_1[0x2ed] = 0;
  *(undefined4 *)(param_1 + 0x2ee) = 0;
  param_1[0x2e9] = 0;
  param_1[0x2ea] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1774) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x177c) = 0;
  param_1[0x2f1] = 0;
  *(undefined4 *)(param_1 + 0x2f2) = 0;
  *(undefined1 *)(param_1 + 0x2f3) = 0;
  param_1[0x2f8] = 0;
  *(undefined4 *)(param_1 + 0x2f9) = 0;
  param_1[0x2f4] = 0;
  param_1[0x2f5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x17cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x17d4) = 0;
  param_1[0x2fc] = 0;
  *(undefined4 *)(param_1 + 0x2fd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17f7) = 0;
  param_1[0x2fe] = 0;
  *(undefined2 *)((longlong)param_1 + 0x17ff) = 1;
  *(undefined1 *)((longlong)param_1 + 0x1801) = 0;
  param_1[0x30b] = 0;
  *(undefined4 *)(param_1 + 0x30c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1844) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1834) = 0;
  *(undefined8 *)((longlong)param_1 + 0x183c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1824) = 0;
  *(undefined8 *)((longlong)param_1 + 0x182c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1814) = 0;
  *(undefined8 *)((longlong)param_1 + 0x181c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1804) = 0;
  *(undefined8 *)((longlong)param_1 + 0x180c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1864) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x186c) = 0;
  param_1[0x30f] = 0;
  *(undefined4 *)(param_1 + 0x310) = 0;
  param_1[0x31c] = 0;
  *(undefined4 *)(param_1 + 0x31d) = 0;
  param_1[0x319] = 0;
  param_1[0x317] = 0;
  param_1[0x318] = 0;
  param_1[0x315] = 0;
  param_1[0x316] = 0;
  param_1[0x313] = 0;
  param_1[0x314] = 0;
  param_1[0x311] = 0;
  param_1[0x312] = 0;
  *(undefined8 *)((longlong)param_1 + 0x18ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x18f4) = 0;
  param_1[800] = 0;
  *(undefined4 *)(param_1 + 0x321) = 0;
  *(undefined1 *)(param_1 + 0x322) = 0;
  param_1[0x327] = 0;
  *(undefined4 *)(param_1 + 0x328) = 0;
  param_1[0x323] = 0;
  param_1[0x324] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1944) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x194c) = 0;
  param_1[0x32b] = 0;
  *(undefined4 *)(param_1 + 0x32c) = 0;
  *(undefined1 *)(param_1 + 0x32e) = 0;
  param_1[0x32d] = 0;
  param_1[0x32f] = 0;
  param_1[0x330] = 0;
  *(undefined4 *)(param_1 + 0x331) = 2;
  *(undefined4 *)((longlong)param_1 + 0x199c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x198c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1994) = 0;
  *(undefined4 *)(param_1 + 0x334) = 2;
  *(undefined4 *)((longlong)param_1 + 0x19b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19ac) = 0;
  param_1[0x337] = param_1[0x50];
  param_1[0x338] = param_1[0x51];
  param_1[0x339] = param_1[0x52];
  plVar1 = (longlong *)(**(code **)(param_1[0x247] + 0x10))(param_1 + 0x247);
  *plVar1 = (longlong)(param_1 + 0x247);
  *(undefined4 *)(plVar1 + 1) = 0;
  local_38 = &local_41;
  local_40 = FUN_142b5187e;
  FUN_1408d6bd2(plVar1,DAT_14c9abbf8);
  *(byte *)((longlong)param_1 + 1099) = *(byte *)((longlong)param_1 + 1099) | 0x20;
  *(byte *)(param_1 + 0x24c) = *(byte *)(param_1 + 0x24c) | 1;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140945b6a FUN_140945b6a body=227 status=ok
// SIG undefined FUN_140945b6a(void)

void FUN_140945b6a(undefined8 *param_1)

{
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 2;
  *(undefined2 *)(param_1 + 0x15) = 1;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x28) = 2;
  *(undefined8 *)((longlong)param_1 + 0x14b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  return;
}



// FUNCTION 140945c4e FUN_140945c4e body=571 status=ok
// SIG undefined FUN_140945c4e(void)

undefined8 * FUN_140945c4e(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  
  uVar6 = FUN_14007ca06();
  FUN_14099c692(param_1,uVar6);
  *param_1 = &PTR_FUN_14b1a6c90;
  param_1[5] = &PTR_FUN_14b1a7a10;
  param_1[6] = &PTR_LAB_14b1a7a50;
  param_1[0x55] = &PTR_FUN_14b1a7aa0;
  param_1[0x56] = &PTR_FUN_14b1a7b20;
  param_1[0x57] = &PTR_FUN_14b1a7b30;
  param_1[0xca] = &PTR_FUN_14b1a7b60;
  param_1[0x15a] = &PTR_FUN_14b1a7bc0;
  *(undefined2 *)((longlong)param_1 + 0x117e) = 0;
  *(undefined1 *)(param_1 + 0x231) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1194) = 0;
  puVar1 = param_1 + 0x233;
  *(undefined1 *)((longlong)param_1 + 0x117c) = 0;
  *(undefined4 *)(param_1 + 0x22f) = 0;
  param_1[0x233] = 0;
  param_1[0x234] = 0;
  *(undefined2 *)(param_1 + 0x235) = 1;
  param_1[0x236] = DAT_14cb72198;
  param_1[0x237] = 0;
  param_1[0x238] = 0;
  *(undefined2 *)(param_1 + 0x239) = 1;
  param_1[0x23f] = 0;
  param_1[0x240] = 0x200000000;
  *(undefined1 *)(param_1 + 0x23c) = 0;
  param_1[0x23a] = 0;
  param_1[0x23b] = 0;
  *(undefined1 *)(param_1 + 0x241) = 0;
  param_1[0x244] = 0;
  param_1[0x245] = 0x200000000;
  *(undefined1 *)(param_1 + 0x246) = 0;
  *(undefined4 *)(param_1 + 0x234) = 1;
  FUN_14475e4ac(puVar1,0);
  *(undefined4 *)param_1[0x233] = 0x3c23d70a;
  iVar2 = *(int *)(param_1 + 0x234);
  *(uint *)(param_1 + 0x234) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x11a4) < iVar2 + 1U) {
    FUN_14475e4ac(puVar1,iVar2);
  }
  *(undefined4 *)(param_1[0x233] + (longlong)iVar2 * 4) = 0x3ba3d70a;
  iVar2 = *(int *)(param_1 + 0x234);
  *(uint *)(param_1 + 0x234) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x11a4) < iVar2 + 1U) {
    FUN_14475e4ac(puVar1,iVar2);
  }
  *(undefined4 *)(param_1[0x233] + (longlong)iVar2 * 4) = 0x3b23d70a;
  *(undefined1 *)((longlong)param_1 + 0x11a9) = 1;
  *(undefined1 *)((longlong)param_1 + 0x89c) = 4;
  *(byte *)((longlong)param_1 + 0x63c) = *(byte *)((longlong)param_1 + 0x63c) | 1;
  *(byte *)(param_1 + 0x18e) = *(byte *)(param_1 + 0x18e) | 4;
  *(byte *)((longlong)param_1 + 0xc72) = *(byte *)((longlong)param_1 + 0xc72) | 2;
  *(undefined1 *)((longlong)param_1 + 0xa79) = DAT_14c763888;
  lVar3 = DAT_14cb76138;
  iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
    uVar7 = 0;
  }
  else if (iVar2 == 1) {
    DVar4 = FUN_140ad26c0();
    DVar5 = GetCurrentThreadId();
    uVar7 = (ulonglong)(DVar4 != DVar5);
  }
  else {
    uVar7 = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x1175) = *(undefined1 *)(lVar3 + uVar7);
  return param_1;
}



// FUNCTION 140945e89 FUN_140945e89 body=154 status=ok
// SIG undefined FUN_140945e89(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140945e89(uint param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca99ea0) {
    FUN_144b3d300(&DAT_14ca99ea0);
    if (DAT_14ca99ea0 == -1) {
      DAT_14ca99e90 = 0;
      uRam000000014ca99e98 = 0;
      DAT_14ca99e80 = 0;
      uRam000000014ca99e88 = 0;
      _DAT_14ca99e70 = 0;
      uRam000000014ca99e78 = 0;
      _DAT_14ca99e60 = 0;
      uRam000000014ca99e68 = 0;
      _DAT_14ca99e50 = 0;
      uRam000000014ca99e58 = 0;
      _DAT_14ca99e40 = 0;
      uRam000000014ca99e48 = 0;
      atexit(FUN_14322d69c);
      _Init_thread_footer(&DAT_14ca99ea0);
    }
  }
  return &DAT_14ca99e40 + (ulonglong)param_1 * 0x10;
}



// FUNCTION 140945f24 FUN_140945f24 body=40 status=ok
// SIG undefined FUN_140945f24(void)

undefined8 FUN_140945f24(undefined8 param_1,int param_2)

{
  FUN_140945f4c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140945f4c FUN_140945f4c body=86 status=ok
// SIG undefined FUN_140945f4c(void)

void FUN_140945f4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b149c90;
  param_1[0xad] = &PTR_FUN_14b14a030;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  if (param_1[0xc3] != 0) {
    FUN_1400020a8();
  }
  FUN_140333f4e(param_1 + 0xbb);
  FUN_140877576(param_1);
  return;
}



// FUNCTION 140945fa2 FUN_140945fa2 body=108 status=ok
// SIG undefined FUN_140945fa2(void)

longlong FUN_140945fa2(longlong param_1,byte param_2)

{
  int iVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44))) {
    lVar2 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x50);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x58) - 1U & (uint)param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 0x1c;
        if (*(byte *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 0x1c) == param_2) {
          if (lVar2 == 0) {
            return param_1;
          }
          return lVar2 + 4;
        }
        iVar1 = *(int *)(lVar2 + 0x14);
      } while (iVar1 != -1);
    }
  }
  return param_1;
}



// FUNCTION 14094600e FUN_14094600e body=31 status=ok
// SIG undefined FUN_14094600e(void)

undefined8 FUN_14094600e(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x20))
            (*(undefined8 *)(param_1 + 0x18),param_2,*(undefined2 *)(param_1 + 8),
             *(undefined2 *)(param_1 + 10));
  return 1;
}



// FUNCTION 14094602e FUN_14094602e body=752 status=ok
// SIG undefined FUN_14094602e(void)

void FUN_14094602e(longlong param_1,longlong param_2,short param_3,short param_4)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  short local_b4;
  short local_b2;
  int local_b0;
  int local_ac;
  longlong local_a8;
  ulonglong local_a0;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_98 = FUN_14038fb82();
  local_a0 = *(ulonglong *)(param_2 + 0x270);
  local_58 = 0;
  uStack_50 = 0;
  local_60 = param_2;
  FUN_1410ab3da(param_1 + 0xe8,&local_70,param_2 + 0x28);
  if ((longlong)local_68 != 0) {
    local_90 = local_70 + local_68;
    local_b4 = param_3;
    local_b2 = param_4;
    do {
      lVar2 = *local_70;
      *(undefined4 *)(lVar2 + 0x14) = 0;
      if (*(ushort *)(lVar2 + 0xc) != 0) {
        plVar8 = *(longlong **)(lVar2 + 0x28);
        lVar3 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
        do {
          if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(local_98 + 0xfa))
          goto LAB_140946107;
          plVar8 = plVar8 + 4;
          lVar3 = lVar3 + -0x20;
        } while (lVar3 != 0);
      }
      plVar8 = (longlong *)0x0;
LAB_140946107:
      uVar1 = *(ushort *)(lVar2 + 0xe);
      LOCK();
      *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
      UNLOCK();
      lVar3 = *plVar8;
      if (*(ushort *)(lVar2 + 0xc) != 0) {
        plVar9 = *(longlong **)(lVar2 + 0x28);
        lVar4 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
        do {
          if (*(short *)((longlong)plVar9 + 0x1e) == param_4) goto LAB_140946138;
          plVar9 = plVar9 + 4;
          lVar4 = lVar4 + -0x20;
        } while (lVar4 != 0);
      }
      plVar9 = (longlong *)0x0;
LAB_140946138:
      local_ac = *(int *)(lVar2 + 0x14);
      local_80 = local_70;
      if (local_ac == 1) {
        AcquireSRWLockShared((PSRWLOCK)(plVar9 + 1));
      }
      LOCK();
      *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
      UNLOCK();
      lVar4 = *plVar9;
      if (*(ushort *)(lVar2 + 0xc) != 0) {
        plVar7 = *(longlong **)(lVar2 + 0x28);
        lVar5 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
        do {
          if (*(short *)((longlong)plVar7 + 0x1e) == param_3) goto LAB_140946186;
          plVar7 = plVar7 + 4;
          lVar5 = lVar5 + -0x20;
        } while (lVar5 != 0);
      }
      plVar7 = (longlong *)0x0;
LAB_140946186:
      local_b0 = *(int *)(lVar2 + 0x14);
      local_a8 = lVar2;
      local_88 = plVar8;
      if (local_b0 == 1) {
        AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
      }
      LOCK();
      *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
      UNLOCK();
      if ((ulonglong)uVar1 != 0) {
        local_78 = *plVar7;
        lVar2 = *(longlong *)(local_a8 + 0x18);
        uVar6 = 0;
        do {
          local_c8 = lVar3;
          FUN_140ca0a1c(&local_60,*(undefined2 *)(lVar2 + uVar6 * 2),
                        *(undefined8 *)(local_78 + uVar6 * 8),lVar4);
          uVar6 = uVar6 + 1;
          lVar4 = lVar4 + 0x10;
          lVar3 = lVar3 + 0x10;
        } while (uVar1 != uVar6);
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
        UNLOCK();
        if (local_b0 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
        }
      }
      plVar7 = local_80;
      plVar8 = local_88;
      lVar2 = local_a8;
      param_4 = local_b2;
      param_3 = local_b4;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 3) = (int)plVar9[3] + -1;
        UNLOCK();
        if (local_ac == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(plVar9 + 1));
        }
      }
      if (plVar8 != (longlong *)0x0) {
        uVar6 = plVar8[2];
        if ((ulonglong)plVar8[2] < local_a0) {
          uVar6 = local_a0;
        }
        plVar8[2] = uVar6;
        LOCK();
        *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
        UNLOCK();
      }
      if (lVar2 != 0) {
        *(undefined4 *)(lVar2 + 0x14) = 1;
      }
      local_70 = plVar7 + 1;
    } while (local_70 != local_90);
  }
  lVar3 = FUN_14038fb82();
  lVar2 = local_58;
  lVar4 = (longlong)(int)uStack_50;
  if (lVar4 != 0) {
    lVar5 = 0;
    do {
      FUN_1405e0ab4(local_60 + 0x28,*(undefined2 *)(lVar2 + lVar5),*(undefined2 *)(lVar3 + 0xf10));
      lVar5 = lVar5 + 2;
    } while (lVar4 * 2 != lVar5);
  }
  if (local_58 != 0) {
    FUN_1400020a8(local_58);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140946378 thunk_FUN_14094637e body=5 status=ok
// SIG undefined thunk_FUN_14094637e(void)

void thunk_FUN_14094637e(longlong param_1)

{
  FUN_1401b2056();
  if ((*(longlong *)(param_1 + 0x390) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x390) + 0x1fb) == '\0')) {
    FUN_1479e4136();
    return;
  }
  return;
}



// FUNCTION 14094637e FUN_14094637e body=50 status=ok
// SIG undefined FUN_14094637e(void)

void FUN_14094637e(longlong param_1)

{
  FUN_1401b2056();
  if ((*(longlong *)(param_1 + 0x390) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x390) + 0x1fb) == '\0')) {
    FUN_1479e4136();
    return;
  }
  return;
}



// FUNCTION 1409463b0 FUN_1409463b0 body=115 status=ok
// SIG undefined FUN_1409463b0(void)

undefined8 FUN_1409463b0(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  local_28 = *(longlong *)(param_2 + 4);
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_140946424(param_1,*(undefined8 *)(param_2 + 2),&local_28,uVar1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140946424 FUN_140946424 body=131 status=ok
// SIG undefined FUN_140946424(void)

undefined4 *
FUN_140946424(undefined4 *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *param_1 = param_4;
  *(undefined1 *)(param_1 + 0x16) = 0;
  local_28 = param_2;
  FUN_140244552(param_1 + 2,&local_28,&local_30);
  FUN_1409464a8(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409464a8 FUN_1409464a8 body=946 status=ok
// SIG undefined FUN_1409464a8(void)

void FUN_1409464a8(uint *param_1)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  char cVar4;
  uint uVar5;
  uint *puVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
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
      puVar6 = param_1 + 4;
      lVar10 = lVar11;
      if (lVar14 <= lVar11) {
        puVar6 = param_1 + 0xe;
        lVar10 = lVar11 - lVar14;
      }
      lVar10 = *(longlong *)(*(longlong *)puVar6 + lVar10 * 8);
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
        lVar8 = DAT_14cae8b20;
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
        lVar7 = *(longlong *)(lVar10 + 0x20);
        if (lVar7 != 0) {
          iVar1 = *(int *)(lVar8 + 0x38);
          do {
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < iVar1) ||
               (lVar12 = lVar7,
               *(longlong *)
                (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
               lVar8 + 0x30)) {
              lVar12 = 0;
            }
          } while ((lVar12 == 0) && (lVar7 = *(longlong *)(lVar7 + 0x20), lVar7 != 0));
          if ((lVar12 != 0) &&
             ((uVar5 = *param_1, (uVar5 & 1) == 0 || ((*(uint *)(lVar10 + 8) >> 0x1e & 1) == 0)))) {
            if ((uVar5 & 2) != 0) {
              cVar4 = FUN_144affb44(lVar10);
              if (cVar4 == '\0') goto LAB_140946823;
              uVar5 = *param_1;
            }
            if ((uVar5 & 4) == 0) {
              lVar8 = *(longlong *)(lVar12 + 0xc0);
            }
            else {
              if (((*(byte *)(lVar12 + 0x240) & 0x20) == 0) ||
                 (bVar9 = 1, (*(byte *)(lVar12 + 0x242) & 8) != 0)) {
                bVar9 = 1;
                if ((*(byte *)(lVar12 + 0x241) & 0x20) == 0) {
                  bVar9 = (*(byte *)(lVar12 + 0x241) & 0x40) >> 6;
                }
              }
              lVar8 = *(longlong *)(lVar12 + 0xc0);
              if (lVar8 == 0) {
LAB_14094669a:
                pcVar13 = (char *)0x0;
              }
              else {
                iVar1 = *(int *)(lVar8 + 0x1b0);
                if (((longlong)iVar1 < 0) || (*(int *)(lVar8 + 0x1a8) <= iVar1)) goto LAB_14094669a;
                pcVar13 = (char *)((longlong)iVar1 * 0x78 + *(longlong *)(lVar8 + 0x1a0));
              }
              pcVar3 = *(char **)(lVar12 + 0x2e8);
              if (pcVar3 == (char *)0x0) {
                bVar15 = true;
              }
              else {
                bVar15 = *pcVar3 == '\x02';
              }
              if ((bVar9 & ((pcVar13 == (char *)0x0 || pcVar3 == pcVar13) | bVar15)) != 1)
              goto LAB_140946823;
            }
            if (lVar8 == lVar2) {
              if (*(longlong *)(lVar2 + 0x30) != lVar12) {
                lVar8 = FUN_14059e8cc();
                if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) goto LAB_140946823;
              }
              *(longlong *)(param_1 + 0xc) = lVar10;
              param_1[8] = (uint)lVar11;
              goto LAB_140946641;
            }
          }
        }
      }
LAB_140946823:
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)param_1[0x10] + lVar14);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
LAB_140946641:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14094685c FUN_14094685c body=40 status=ok
// SIG undefined FUN_14094685c(void)

undefined8 FUN_14094685c(undefined8 param_1,int param_2)

{
  FUN_140946884();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140946884 FUN_140946884 body=111 status=ok
// SIG undefined FUN_140946884(void)

void FUN_140946884(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5b9c90;
  param_1[5] = &PTR_FUN_14a5b9f50;
  FUN_144760e21(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_1409468f4(param_1 + 6);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1409468f4 FUN_1409468f4 body=55 status=ok
// SIG undefined FUN_1409468f4(void)

void FUN_1409468f4(longlong *param_1)

{
  FUN_14094692c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14094692c FUN_14094692c body=528 status=ok
// SIG undefined FUN_14094692c(void)

void FUN_14094692c(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar12 = *puVar7;
    if (uVar12 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar8 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar8 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar8 == uVar13) goto LAB_140946a0d;
        iVar10 = iVar10 + 0x20;
        uVar12 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
    uVar8 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar12 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + 8 + (longlong)iVar6 * 0x28) != 0) {
        FUN_1400020a8();
        iVar2 = (int)param_1[5];
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar6 = (int)uVar13;
      lVar11 = (longlong)iVar6;
      uVar3 = puVar7[lVar11] & uVar12;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar4 <= iVar6) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar7[lVar11 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar11 == lVar9) goto LAB_140946a0d;
        }
        uVar13 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar12 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_140946a0d:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar12 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar12) {
    uVar3 = uVar12;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140946b4c FUN_140946b4c body=45 status=ok
// SIG undefined FUN_140946b4c(void)

undefined8 FUN_140946b4c(undefined8 param_1,int param_2)

{
  FUN_140946b7a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 140946b7a FUN_140946b7a body=168 status=ok
// SIG undefined FUN_140946b7a(void)

void FUN_140946b7a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b358270;
  FUN_140946c22(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_140946c22(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1447cd778(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b357f70;
  FUN_1447cd778(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140946c22 FUN_140946c22 body=51 status=ok
// SIG undefined FUN_140946c22(void)

void FUN_140946c22(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xf;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140946c56 FUN_140946c56 body=309 status=ok
// SIG undefined FUN_140946c56(void)

undefined8 FUN_140946c56(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140946d85;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140946d85;
    }
    FUN_1400841de(param_1 + 0x18,&local_48);
    lVar7 = CONCAT44(uStack_44,local_48);
  }
  else {
LAB_140946d85:
    lVar7 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140946d39;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      local_38 = *(undefined8 *)(param_2 + 4);
      local_48 = *param_2;
      uStack_44 = param_2[1];
      uStack_40 = param_2[2];
      uStack_3c = param_2[3];
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),&local_48,param_3);
      uVar6 = 1;
      goto LAB_140946d39;
    }
  }
  uVar6 = 0;
LAB_140946d39:
  if (lVar7 != 0) {
    FUN_140113f3a(lVar7);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140946d8c FUN_140946d8c body=8512 status=ok
// SIG undefined FUN_140946d8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140946d8c(longlong param_1,double *param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  void *pvVar13;
  code **ppcVar14;
  longlong *plVar15;
  int iVar16;
  code *_Dst;
  void *pvVar17;
  void *pvVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  void *pvVar22;
  int iVar23;
  code *_Src;
  code *pcVar24;
  code *pcVar25;
  void *_Src_00;
  ulonglong uVar26;
  void *_Src_01;
  void *pvVar27;
  code *pcVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_938 [32];
  undefined8 *local_918;
  undefined4 local_910;
  undefined8 *local_908;
  undefined *local_900;
  wchar_t *local_8f8;
  code *local_8f0;
  undefined1 *local_8e8;
  code **local_8e0;
  code *local_8d8;
  code *local_8d0;
  longlong *local_8c0;
  void *local_8b8;
  ulonglong local_8b0;
  void *local_8a8;
  double *local_8a0;
  longlong local_898;
  longlong local_890;
  code *local_888;
  code *pcStack_880;
  code *local_878;
  code *local_868;
  undefined8 uStack_860;
  code *local_858;
  undefined4 local_850;
  undefined1 local_84c;
  code **local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  code *pcStack_4a0;
  double local_498 [2];
  double local_488;
  float local_424;
  char local_3e8;
  undefined8 local_1a0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_938;
  lVar10 = *(longlong *)(param_1 + 0x20);
  if (lVar10 == 0) goto LAB_140948c33;
  if (DAT_14cb10130 == 0) {
    local_8e0 = &local_858;
    local_858 = FUN_140754f84;
    local_8d0 = FUN_14081d0ea;
    local_8d8 = FUN_14081d0ea;
    local_8e8 = &LAB_147da9a76;
    local_8f0 = FUN_1409f3105;
    local_8f8 = L"Engine";
    local_900 = (undefined *)0x0;
    local_908 = (undefined8 *)CONCAT44(local_908._4_4_,0x10000000);
    local_910 = 8;
    local_918 = (undefined8 *)CONCAT44(local_918._4_4_,0x990);
    FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
  }
  if (((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(DAT_14cb10130 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) != DAT_14cb10130 + 0x30)) ||
     ((*(byte *)(*(longlong *)(param_3 + 8) + 0x48) & 1) == 0)) goto LAB_140948c33;
  *(undefined4 *)(param_1 + 0x84) = 0xbf800000;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb49800) && (FUN_144b3d300(&DAT_14cb49800), DAT_14cb49800 == -1)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb49f08) && (FUN_144b3d300(), DAT_14cb49f08 == -1)) {
      local_858 = (code *)0x14a837fe0;
      local_850 = 0x11;
      local_84c = 0;
      uVar8 = FUN_14001a6c0(&local_858,1);
      DAT_14cb49f00 = (ulonglong)uVar8;
      _Init_thread_footer();
    }
    _DAT_14cb497a4 = 0;
    _DAT_14cb49788 = 0;
    _DAT_14cb497a8 = 0x101;
    DAT_14cb497d0 = 0;
    _DAT_14cb497d8 = 0x800000000;
    DAT_14cb497f0 = 0;
    _DAT_14cb497f8 = 0x400000000;
    DAT_14cb49790 = 0;
    _DAT_14cb4979c = 0;
    _DAT_14cb49780 = DAT_14cb49f00;
    _DAT_14cb49791 = 1;
    DAT_14cb49793 = 0;
    DAT_14cb497a0 = 0;
    _DAT_14cb49794 = 0x1000000;
    DAT_14cb49798 = 1;
    atexit(FUN_143b4a168);
    _Init_thread_footer(&DAT_14cb49800);
  }
  local_868 = (code *)0x0;
  uStack_860 = 0;
  local_4b8 = (code **)0x0;
  local_4b0 = 0x400000000;
  if (*(int *)(param_1 + 300) < *(int *)(param_1 + 0x100)) {
    local_908 = &local_1a0;
    local_1a0 = (code *)0x42c8000000000002;
    local_910 = *(undefined4 *)(param_1 + 0x80);
    local_498[0] = param_2[2] + 100.0;
    pcStack_4a0 = (code *)(param_2[1] + 0.0);
    local_4a8 = (code *)(*param_2 + 0.0);
    local_8f8 = (wchar_t *)&DAT_14cad0f10;
    local_900 = &DAT_14cb49780;
    local_918 = &DAT_14c8463d0;
    cVar6 = FUN_14038e76e(lVar10,&local_868,param_2);
    pcVar28 = local_868;
    if (cVar6 != '\0') {
      local_8a0 = param_2;
      local_898 = param_3;
      local_890 = param_1;
      if (1 < (longlong)(int)uStack_860) {
        pcVar24 = local_868;
        pcVar25 = local_868 + (longlong)(int)uStack_860 * 0x100;
LAB_140946f93:
        _Dst = pcVar24;
        lVar10 = FUN_144835338(_Dst + 0xb8);
        pcVar24 = pcVar25;
        if (lVar10 != 0) {
          if (DAT_14cb46ec8 == 0) {
            local_4a8 = FUN_141030f22;
            local_8d0 = FUN_14081d0ea;
            local_8d8 = FUN_142b4754c;
            local_8e0 = (code **)&local_4a8;
            local_8e8 = &LAB_1483e40eb;
            local_8f0 = (code *)&LAB_146486986;
            local_8f8 = L"Engine";
            local_900 = (undefined *)0x0;
            local_908 = (undefined8 *)CONCAT44(local_908._4_4_,0x10000005);
            local_910 = 8;
            local_918 = (undefined8 *)CONCAT44(local_918._4_4_,0x420);
            FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
            if (DAT_14cb46ec8 == 0) goto LAB_1409470a0;
          }
          if (((*(int *)(DAT_14cb46ec8 + 0x38) <= *(int *)(lVar10 + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8) ==
               DAT_14cb46ec8 + 0x30)) && (lVar10 = FUN_14485cccc(_Dst + 0xb8), lVar10 != 0)) {
            pcVar24 = _Dst + 0x100;
            if (_Dst + 0x100 == pcVar25) goto LAB_1409471cf;
            goto LAB_140946f93;
          }
        }
LAB_1409470a0:
        do {
          _Src = pcVar24 + -0x100;
          lVar10 = FUN_144835338(pcVar24 + -0x48);
          if (lVar10 != 0) {
            if (DAT_14cb46ec8 == 0) {
              local_4a8 = FUN_141030f22;
              local_8d0 = FUN_14081d0ea;
              local_8d8 = FUN_142b4754c;
              local_8e0 = (code **)&local_4a8;
              local_8e8 = &LAB_1483e40eb;
              local_8f0 = (code *)&LAB_146486986;
              local_8f8 = L"Engine";
              local_900 = (undefined *)0x0;
              local_908 = (undefined8 *)CONCAT44(local_908._4_4_,0x10000005);
              local_910 = 8;
              local_918 = (undefined8 *)CONCAT44(local_918._4_4_,0x420);
              FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
              if (DAT_14cb46ec8 == 0) goto LAB_1409470ec;
            }
            if (((*(int *)(DAT_14cb46ec8 + 0x38) <= *(int *)(lVar10 + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8) ==
                 DAT_14cb46ec8 + 0x30)) && (lVar10 = FUN_14485cccc(pcVar24 + -0x48), lVar10 != 0))
            goto LAB_1409471a4;
          }
LAB_1409470ec:
          pcVar25 = _Dst;
          pcVar24 = _Src;
          if (_Src == _Dst) goto LAB_1409471cf;
        } while( true );
      }
      goto LAB_140948819;
    }
  }
  goto LAB_140948bcd;
LAB_1409471a4:
  memcpy(_Dst,_Src,0x100);
  pcVar24 = _Dst + 0x100;
  pcVar25 = _Src;
  if (_Src == _Dst + 0x100) goto code_r0x0001409471c5;
  goto LAB_140946f93;
LAB_1409473de:
  pvVar17 = _Src_01;
  if (*(int *)(*(longlong *)(lVar11 + 0x3a8) + 0x1034) <=
      *(int *)(*(longlong *)(lVar12 + 0x3a8) + 0x1034)) goto LAB_1409472f0;
LAB_1409473f7:
  pvVar17 = (void *)((longlong)pvVar22 - 0x100);
  pvVar27 = pvVar22;
  if (_Src_00 < pvVar17) {
    do {
      pvVar27 = pvVar22;
      pvVar13 = pvVar17;
      lVar11 = FUN_144835338((longlong)pvVar27 - 0x48U);
      if (lVar11 == 0) {
LAB_14094744b:
        lVar11 = 0;
      }
      else {
        if (DAT_14cb46ec8 == 0) {
          local_1a0 = FUN_141030f22;
          local_8d0 = FUN_14081d0ea;
          local_8d8 = FUN_142b4754c;
          local_8e0 = (code **)&local_1a0;
          local_8e8 = &LAB_1483e40eb;
          local_8f0 = (code *)&LAB_146486986;
          local_8f8 = L"Engine";
          local_900 = (undefined *)0x0;
          local_908 = (undefined8 *)CONCAT44(local_908._4_4_,0x10000005);
          local_910 = 8;
          local_918 = (undefined8 *)CONCAT44(local_918._4_4_,0x420);
          FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
          if (DAT_14cb46ec8 == 0) goto LAB_14094744b;
        }
        if ((*(int *)(lVar11 + 0x38) < *(int *)(DAT_14cb46ec8 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8) !=
            DAT_14cb46ec8 + 0x30)) goto LAB_14094744b;
        lVar11 = FUN_14485cccc((longlong)pvVar27 - 0x48U);
      }
      lVar12 = FUN_144835338(lVar10);
      if (lVar12 == 0) {
LAB_140947491:
        lVar12 = 0;
      }
      else {
        if (DAT_14cb46ec8 == 0) {
          local_1a0 = FUN_141030f22;
          local_8d0 = FUN_14081d0ea;
          local_8d8 = FUN_142b4754c;
          local_8e0 = (code **)&local_1a0;
          local_8e8 = &LAB_1483e40eb;
          local_8f0 = (code *)&LAB_146486986;
          local_8f8 = L"Engine";
          local_900 = (undefined *)0x0;
          local_908 = (undefined8 *)CONCAT44(local_908._4_4_,0x10000005);
          local_910 = 8;
          local_918 = (undefined8 *)CONCAT44(local_918._4_4_,0x420);
          FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
          if (DAT_14cb46ec8 == 0) goto LAB_140947491;
        }
        if ((*(int *)(lVar12 + 0x38) < *(int *)(DAT_14cb46ec8 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8) !=
            DAT_14cb46ec8 + 0x30)) goto LAB_140947491;
        lVar12 = FUN_14485cccc(lVar10);
      }
      cVar6 = FUN_1405b9b94(*(undefined8 *)(lVar11 + 0x3a8));
      cVar7 = FUN_1405b9b94(*(undefined8 *)(lVar12 + 0x3a8));
      if (cVar6 == cVar7) {
        pvVar17 = pvVar13;
        pvVar18 = local_8b8;
        if (*(int *)(*(longlong *)(lVar12 + 0x3a8) + 0x1034) <
            *(int *)(*(longlong *)(lVar11 + 0x3a8) + 0x1034)) goto LAB_1409476a9;
      }
      else {
        cVar6 = FUN_1405b9b94();
        if ((cVar6 != '\0') &&
           (cVar6 = FUN_1405b9b94(*(undefined8 *)(lVar12 + 0x3a8)), cVar6 == '\0')) {
          pvVar17 = (void *)((longlong)pvVar27 - 0x100);
          pvVar18 = local_8b8;
          goto LAB_1409476a9;
        }
      }
      pvVar17 = (void *)((longlong)pvVar13 - 0x100);
      pvVar22 = (void *)((longlong)pvVar27 - 0x100);
    } while (_Src_00 < (void *)((longlong)pvVar27 - 0x200U));
    pvVar17 = (void *)((longlong)pvVar27 - 0x200);
    pvVar18 = local_8b8;
    pvVar27 = pvVar13;
  }
LAB_1409476a9:
  if (_Src_01 <= pvVar17) {
    memcpy(&local_1a0,_Src_01,0x100);
    memcpy(_Src_01,pvVar17,0x100);
    memcpy(pvVar17,&local_1a0,0x100);
    pvVar22 = pvVar17;
    pvVar17 = _Src_01;
    goto LAB_1409472f0;
  }
  memcpy(&local_1a0,_Src_00,0x100);
  memcpy(_Src_00,pvVar17,0x100);
  memcpy(pvVar17,&local_1a0,0x100);
  iVar16 = (int)local_8b0 + -1;
  pvVar27 = (void *)((longlong)pvVar27 - 0x200);
  if ((longlong)pvVar27 - (longlong)_Src_00 < (longlong)local_8a8 - (longlong)_Src_01) {
    plVar15 = local_8c0;
    if (_Src_01 < pvVar18) {
      *local_8c0 = (longlong)_Src_01;
      local_8c0[1] = (longlong)pvVar18;
      *(int *)(local_8c0 + 2) = iVar16;
      plVar15 = local_8c0 + 3;
    }
    if (pvVar17 <= (void *)((longlong)_Src_00 + 0x100U)) goto LAB_1409487fc;
  }
  else {
    if ((void *)((longlong)_Src_00 + 0x100U) < pvVar17) {
      *local_8c0 = (longlong)_Src_00;
      local_8c0[1] = (longlong)pvVar27;
      *(int *)(local_8c0 + 2) = iVar16;
      local_8c0 = local_8c0 + 3;
    }
    plVar15 = local_8c0;
    pvVar27 = pvVar18;
    _Src_00 = _Src_01;
    if (pvVar18 <= _Src_01) goto LAB_1409487fc;
  }
  local_8c0 = plVar15;
  iVar9 = (int)((ulonglong)((longlong)pvVar27 - (longlong)_Src_00) >> 8);
  pvVar22 = (void *)(ulonglong)(iVar9 + 1);
  if (iVar16 == 0) goto LAB_140947929;
  goto LAB_14094727a;
LAB_14094866c:
  if (*(int *)(*(longlong *)(lVar11 + 0x3a8) + 0x1034) <
      *(int *)(*(longlong *)(lVar10 + 0x3a8) + 0x1034)) {
LAB_140948681:
    pvVar22 = pvVar17;
  }
  goto joined_r0x000140948539;
code_r0x0001409471c5:
  pcVar25 = _Dst + 0x100;
LAB_1409471cf:
  FUN_14009114a(&local_868,(ulonglong)((longlong)pcVar25 - (longlong)pcVar28) >> 8 & 0xffffffff,1);
  pcVar28 = local_868;
  iVar16 = (int)uStack_860;
  lVar10 = (longlong)(int)uStack_860;
  if (1 < lVar10) {
    memset(local_498,0,0x2f0);
    local_4a8 = pcVar28;
    pcStack_4a0 = pcVar28 + lVar10 * 0x100 + -0x100;
    fVar29 = logf((float)iVar16);
    local_498[0] = (double)CONCAT44(local_498[0]._4_4_,(int)(longlong)(fVar29 + fVar29));
    plVar15 = &local_4a8;
    do {
      _Src_00 = (void *)*plVar15;
      pvVar27 = (void *)plVar15[1];
      iVar16 = (int)plVar15[2];
      iVar9 = (int)((ulonglong)((longlong)pvVar27 - (longlong)_Src_00) >> 8);
      pvVar22 = (void *)(ulonglong)(iVar9 + 1);
      local_8c0 = plVar15;
      if (iVar16 != 0) {
LAB_14094727a:
        if (8 < (int)(uint)pvVar22) {
          local_8b0 = CONCAT44(local_8b0._4_4_,iVar16);
          pvVar22 = (void *)((ulonglong)((uint)pvVar22 >> 1) * 0x100 + (longlong)_Src_00);
          local_8a8 = pvVar27;
          memcpy(&local_1a0,pvVar22,0x100);
          memcpy(pvVar22,_Src_00,0x100);
          memcpy(_Src_00,&local_1a0,0x100);
          lVar10 = (longlong)_Src_00 + 0xb8;
          pvVar22 = (void *)((longlong)pvVar27 + 0x100);
          pvVar18 = pvVar27;
          pvVar17 = _Src_00;
          local_8b8 = pvVar27;
LAB_1409472f0:
          while (_Src_01 = (void *)((longlong)pvVar17 + 0x100), _Src_01 <= pvVar18) {
            lVar11 = FUN_144835338(lVar10);
            if (lVar11 == 0) {
LAB_140947337:
              lVar11 = 0;
            }
            else {
              if (DAT_14cb46ec8 == 0) {
                local_1a0 = FUN_141030f22;
                local_8d0 = FUN_14081d0ea;
                local_8d8 = FUN_142b4754c;
                local_8e0 = (code **)&local_1a0;
                local_8e8 = &LAB_1483e40eb;
                local_8f0 = (code *)&LAB_146486986;
                local_8f8 = L"Engine";
                local_900 = (undefined *)0x0;
                local_908 = (undefined8 *)CONCAT44(local_908._4_4_,0x10000005);
                local_910 = 8;
                local_918 = (undefined8 *)CONCAT44(local_918._4_4_,0x420);
                FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
                if (DAT_14cb46ec8 == 0) goto LAB_140947337;
              }
              if ((*(int *)(lVar11 + 0x38) < *(int *)(DAT_14cb46ec8 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8) !=
                  DAT_14cb46ec8 + 0x30)) goto LAB_140947337;
              lVar11 = FUN_14485cccc(lVar10);
            }
            lVar12 = FUN_144835338((longlong)pvVar17 + 0x1b8);
            if (lVar12 == 0) {
LAB_140947385:
              lVar12 = 0;
            }
            else {
              if (DAT_14cb46ec8 == 0) {
                local_1a0 = FUN_141030f22;
                local_8d0 = FUN_14081d0ea;
                local_8d8 = FUN_142b4754c;
                local_8e0 = (code **)&local_1a0;
                local_8e8 = &LAB_1483e40eb;
                local_8f0 = (code *)&LAB_146486986;
                local_8f8 = L"Engine";
                local_900 = (undefined *)0x0;
                local_908 = (undefined8 *)CONCAT44(local_908._4_4_,0x10000005);
                local_910 = 8;
                local_918 = (undefined8 *)CONCAT44(local_918._4_4_,0x420);
                FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
                if (DAT_14cb46ec8 == 0) goto LAB_140947385;
              }
              if ((*(int *)(lVar12 + 0x38) < *(int *)(DAT_14cb46ec8 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8) !=
                  DAT_14cb46ec8 + 0x30)) goto LAB_140947385;
              lVar12 = FUN_14485cccc((longlong)pvVar17 + 0x1b8);
            }
            cVar6 = FUN_1405b9b94(*(undefined8 *)(lVar11 + 0x3a8));
            cVar7 = FUN_1405b9b94(*(undefined8 *)(lVar12 + 0x3a8));
            if (cVar6 == cVar7) goto LAB_1409473de;
            cVar6 = FUN_1405b9b94();
            pvVar17 = _Src_01;
            if ((cVar6 != '\0') &&
               (cVar6 = FUN_1405b9b94(*(undefined8 *)(lVar12 + 0x3a8)), cVar6 == '\0')) break;
          }
          goto LAB_1409473f7;
        }
        for (; plVar15 = local_8c0, pvVar22 = _Src_00, pvVar18 = _Src_00, _Src_00 < pvVar27;
            pvVar27 = (void *)((longlong)pvVar27 + -0x100)) {
joined_r0x000140948539:
          while (pvVar17 = (void *)((longlong)pvVar18 + 0x100), pvVar17 <= pvVar27) {
            lVar10 = FUN_144835338((longlong)pvVar22 + 0xb8);
            if (lVar10 == 0) {
LAB_1409485ce:
              lVar10 = 0;
            }
            else {
              if (DAT_14cb46ec8 == 0) {
                local_1a0 = FUN_141030f22;
                local_8d0 = FUN_14081d0ea;
                local_8d8 = FUN_142b4754c;
                local_8e0 = (code **)&local_1a0;
                local_8e8 = &LAB_1483e40eb;
                local_8f0 = (code *)&LAB_146486986;
                local_8f8 = L"Engine";
                local_900 = (undefined *)0x0;
                local_908 = (undefined8 *)CONCAT44(local_908._4_4_,0x10000005);
                local_910 = 8;
                local_918 = (undefined8 *)CONCAT44(local_918._4_4_,0x420);
                FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
                if (DAT_14cb46ec8 == 0) goto LAB_1409485ce;
              }
              if ((*(int *)(lVar10 + 0x38) < *(int *)(DAT_14cb46ec8 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8) !=
                  DAT_14cb46ec8 + 0x30)) goto LAB_1409485ce;
              lVar10 = FUN_14485cccc((longlong)pvVar22 + 0xb8);
            }
            lVar11 = FUN_144835338((longlong)pvVar18 + 0x1b8U);
            if (lVar11 == 0) {
LAB_14094861c:
              lVar11 = 0;
            }
            else {
              if (DAT_14cb46ec8 == 0) {
                local_1a0 = FUN_141030f22;
                local_8d0 = FUN_14081d0ea;
                local_8d8 = FUN_142b4754c;
                local_8e0 = (code **)&local_1a0;
                local_8e8 = &LAB_1483e40eb;
                local_8f0 = (code *)&LAB_146486986;
                local_8f8 = L"Engine";
                local_900 = (undefined *)0x0;
                local_908 = (undefined8 *)CONCAT44(local_908._4_4_,0x10000005);
                local_910 = 8;
                local_918 = (undefined8 *)CONCAT44(local_918._4_4_,0x420);
                FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
                if (DAT_14cb46ec8 == 0) goto LAB_14094861c;
              }
              if ((*(int *)(lVar11 + 0x38) < *(int *)(DAT_14cb46ec8 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8) !=
                  DAT_14cb46ec8 + 0x30)) goto LAB_14094861c;
              lVar11 = FUN_14485cccc((longlong)pvVar18 + 0x1b8U);
            }
            cVar6 = FUN_1405b9b94(*(undefined8 *)(lVar10 + 0x3a8));
            cVar7 = FUN_1405b9b94(*(undefined8 *)(lVar11 + 0x3a8));
            pvVar18 = pvVar17;
            if (cVar6 == cVar7) goto LAB_14094866c;
            cVar6 = FUN_1405b9b94();
            if ((cVar6 != '\0') &&
               (cVar6 = FUN_1405b9b94(*(undefined8 *)(lVar11 + 0x3a8)), cVar6 == '\0'))
            goto LAB_140948681;
          }
          memcpy(&local_1a0,pvVar22,0x100);
          memcpy(pvVar22,pvVar27,0x100);
          memcpy(pvVar27,&local_1a0,0x100);
        }
        goto LAB_1409487fc;
      }
LAB_140947929:
      plVar15 = local_8c0;
      if ((int)pvVar22 != 0) {
        uVar8 = (iVar9 - (iVar9 + -1 >> 0x1f)) + -1 >> 1;
        local_8b8 = pvVar22;
        do {
          pvVar27 = (void *)(ulonglong)uVar8;
          uVar19 = uVar8 * 2 + 1;
          local_8a8 = pvVar27;
          if ((int)uVar19 < (int)pvVar22) {
            do {
              uVar8 = uVar8 * 2 + 2;
              if ((int)uVar8 < (int)pvVar22) {
                uVar26 = (ulonglong)(int)uVar8;
                lVar11 = (longlong)_Src_00 + uVar26 * 0x100 + 0xb8;
                lVar10 = FUN_144835338(lVar11);
                if (lVar10 == 0) {
LAB_1409479c3:
                  lVar10 = 0;
                }
                else {
                  if (DAT_14cb46ec8 == 0) {
                    local_1a0 = FUN_141030f22;
                    local_8d0 = FUN_14081d0ea;
                    local_8d8 = FUN_142b4754c;
                    local_8e0 = (code **)&local_1a0;
                    local_8e8 = &LAB_1483e40eb;
                    local_8f0 = (code *)&LAB_146486986;
                    local_8f8 = L"Engine";
                    local_900 = (undefined *)0x0;
                    local_908 = (undefined8 *)CONCAT44(local_908._4_4_,0x10000005);
                    local_910 = 8;
                    local_918 = (undefined8 *)CONCAT44(local_918._4_4_,0x420);
                    FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
                    if (DAT_14cb46ec8 == 0) goto LAB_1409479c3;
                  }
                  if ((*(int *)(lVar10 + 0x38) < *(int *)(DAT_14cb46ec8 + 0x38)) ||
                     (*(longlong *)
                       (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8)
                      != DAT_14cb46ec8 + 0x30)) goto LAB_1409479c3;
                  lVar10 = FUN_14485cccc(lVar11);
                }
                local_8b0 = (ulonglong)(int)uVar19;
                lVar12 = (longlong)_Src_00 + local_8b0 * 0x100 + 0xb8;
                lVar11 = FUN_144835338(lVar12);
                if (lVar11 == 0) {
LAB_140947a2b:
                  lVar11 = 0;
                }
                else {
                  if (DAT_14cb46ec8 == 0) {
                    local_1a0 = FUN_141030f22;
                    local_8d0 = FUN_14081d0ea;
                    local_8d8 = FUN_142b4754c;
                    local_8e0 = (code **)&local_1a0;
                    local_8e8 = &LAB_1483e40eb;
                    local_8f0 = (code *)&LAB_146486986;
                    local_8f8 = L"Engine";
                    local_900 = (undefined *)0x0;
                    local_908 = (undefined8 *)CONCAT44(local_908._4_4_,0x10000005);
                    local_910 = 8;
                    local_918 = (undefined8 *)CONCAT44(local_918._4_4_,0x420);
                    FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
                    if (DAT_14cb46ec8 == 0) goto LAB_140947a2b;
                  }
                  if ((*(int *)(lVar11 + 0x38) < *(int *)(DAT_14cb46ec8 + 0x38)) ||
                     (*(longlong *)
                       (*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8)
                      != DAT_14cb46ec8 + 0x30)) goto LAB_140947a2b;
                  lVar11 = FUN_14485cccc(lVar12);
                }
                cVar6 = FUN_1405b9b94(*(undefined8 *)(lVar10 + 0x3a8));
                cVar7 = FUN_1405b9b94(*(undefined8 *)(lVar11 + 0x3a8));
                if (cVar6 == cVar7) {
                  uVar21 = local_8b0;
                  if (*(int *)(*(longlong *)(lVar11 + 0x3a8) + 0x1034) <
                      *(int *)(*(longlong *)(lVar10 + 0x3a8) + 0x1034)) goto LAB_140947a98;
                }
                else {
                  cVar6 = FUN_1405b9b94();
                  if ((cVar6 != '\0') &&
                     (cVar6 = FUN_1405b9b94(*(undefined8 *)(lVar11 + 0x3a8)), uVar21 = local_8b0,
                     cVar6 == '\0')) goto LAB_140947a98;
                }
              }
              else {
                uVar21 = (longlong)(int)uVar19;
LAB_140947a98:
                uVar26 = uVar21;
                uVar8 = uVar19;
              }
              lVar11 = (longlong)(int)pvVar27 * 0x100;
              lVar12 = (longlong)_Src_00 + lVar11 + 0xb8;
              lVar10 = FUN_144835338(lVar12);
              if (lVar10 == 0) {
LAB_140947ae4:
                lVar10 = 0;
              }
              else {
                if (DAT_14cb46ec8 == 0) {
                  local_1a0 = FUN_141030f22;
                  local_8d0 = FUN_14081d0ea;
                  local_8d8 = FUN_142b4754c;
                  local_8e0 = (code **)&local_1a0;
                  local_8e8 = &LAB_1483e40eb;
                  local_8f0 = (code *)&LAB_146486986;
                  local_8f8 = L"Engine";
                  local_900 = (undefined *)0x0;
                  local_908 = (undefined8 *)CONCAT44(local_908._4_4_,0x10000005);
                  local_910 = 8;
                  local_918 = (undefined8 *)CONCAT44(local_918._4_4_,0x420);
                  FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
                  if (DAT_14cb46ec8 == 0) goto LAB_140947ae4;
                }
                if ((*(int *)(lVar10 + 0x38) < *(int *)(DAT_14cb46ec8 + 0x38)) ||
                   (*(longlong *)
                     (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8)
                    != DAT_14cb46ec8 + 0x30)) goto LAB_140947ae4;
                lVar10 = FUN_14485cccc(lVar12);
              }
              pvVar27 = (void *)(uVar26 * 0x100 + (longlong)_Src_00);
              lVar12 = FUN_144835338((longlong)pvVar27 + 0xb8);
              if (lVar12 == 0) {
LAB_140947b39:
                lVar12 = 0;
              }
              else {
                if (DAT_14cb46ec8 == 0) {
                  local_1a0 = FUN_141030f22;
                  local_8d0 = FUN_14081d0ea;
                  local_8d8 = FUN_142b4754c;
                  local_8e0 = (code **)&local_1a0;
                  local_8e8 = &LAB_1483e40eb;
                  local_8f0 = (code *)&LAB_146486986;
                  local_8f8 = L"Engine";
                  local_900 = (undefined *)0x0;
                  local_908 = (undefined8 *)CONCAT44(local_908._4_4_,0x10000005);
                  local_910 = 8;
                  local_918 = (undefined8 *)CONCAT44(local_918._4_4_,0x420);
                  FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
                  if (DAT_14cb46ec8 == 0) goto LAB_140947b39;
                }
                if ((*(int *)(lVar12 + 0x38) < *(int *)(DAT_14cb46ec8 + 0x38)) ||
                   (*(longlong *)
                     (*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8)
                    != DAT_14cb46ec8 + 0x30)) goto LAB_140947b39;
                lVar12 = FUN_14485cccc((longlong)pvVar27 + 0xb8);
              }
              cVar6 = FUN_1405b9b94(*(undefined8 *)(lVar10 + 0x3a8));
              cVar7 = FUN_1405b9b94(*(undefined8 *)(lVar12 + 0x3a8));
              if (cVar6 == cVar7) {
                pvVar22 = local_8b8;
                if (*(int *)(*(longlong *)(lVar10 + 0x3a8) + 0x1034) <=
                    *(int *)(*(longlong *)(lVar12 + 0x3a8) + 0x1034)) break;
              }
              else {
                cVar6 = FUN_1405b9b94();
                pvVar22 = local_8b8;
                if ((cVar6 == '\0') ||
                   (cVar6 = FUN_1405b9b94(*(undefined8 *)(lVar12 + 0x3a8)), cVar6 != '\0')) break;
              }
              pvVar18 = (void *)(lVar11 + (longlong)_Src_00);
              memcpy(&local_1a0,pvVar18,0x100);
              memcpy(pvVar18,pvVar27,0x100);
              memcpy(pvVar27,&local_1a0,0x100);
              uVar19 = uVar8 * 2 + 1;
              pvVar27 = (void *)(ulonglong)uVar8;
            } while ((int)uVar19 < (int)pvVar22);
          }
          uVar8 = (int)local_8a8 - 1;
        } while ((int)local_8a8 != 0);
        plVar15 = local_8c0;
        if (1 < (int)pvVar22) {
          uVar21 = ((ulonglong)pvVar22 & 0xffffffff) - 1;
          pvVar27 = (void *)(uVar21 * 0x100 + (longlong)_Src_00);
          memcpy(&local_1a0,_Src_00,0x100);
          memcpy(_Src_00,pvVar27,0x100);
          memcpy(pvVar27,&local_1a0,0x100);
          plVar15 = local_8c0;
          if ((int)pvVar22 != 2) {
            do {
              iVar9 = 0;
              iVar16 = 1;
              uVar26 = uVar21;
              local_8b0 = uVar21;
              iVar23 = 0;
              do {
                iVar20 = iVar9 + 2;
                pvVar22 = (void *)(longlong)iVar20;
                pvVar27 = (void *)(longlong)iVar16;
                if ((longlong)pvVar22 < (longlong)uVar26) {
                  lVar11 = (longlong)_Src_00 + (longlong)pvVar22 * 0x100 + 0xb8;
                  local_8b8 = (void *)(longlong)iVar16;
                  lVar10 = FUN_144835338(lVar11);
                  if (lVar10 == 0) {
LAB_140947fb6:
                    lVar10 = 0;
                  }
                  else {
                    if (DAT_14cb46ec8 == 0) {
                      local_1a0 = FUN_141030f22;
                      local_8d0 = FUN_14081d0ea;
                      local_8d8 = FUN_142b4754c;
                      local_8e0 = (code **)&local_1a0;
                      local_8e8 = &LAB_1483e40eb;
                      local_8f0 = (code *)&LAB_146486986;
                      local_8f8 = L"Engine";
                      local_900 = (undefined *)0x0;
                      local_908 = (undefined8 *)CONCAT44(local_908._4_4_,0x10000005);
                      local_910 = 8;
                      local_918 = (undefined8 *)CONCAT44(local_918._4_4_,0x420);
                      FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
                      if (DAT_14cb46ec8 == 0) goto LAB_140947fb6;
                    }
                    if ((*(int *)(lVar10 + 0x38) < *(int *)(DAT_14cb46ec8 + 0x38)) ||
                       (*(longlong *)
                         (*(longlong *)(lVar10 + 0x30) +
                         (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8) != DAT_14cb46ec8 + 0x30))
                    goto LAB_140947fb6;
                    lVar10 = FUN_14485cccc(lVar11);
                  }
                  lVar12 = (longlong)_Src_00 + (longlong)local_8b8 * 0x100 + 0xb8;
                  lVar11 = FUN_144835338(lVar12);
                  if (lVar11 == 0) {
LAB_14094801b:
                    lVar11 = 0;
                  }
                  else {
                    if (DAT_14cb46ec8 == 0) {
                      local_1a0 = FUN_141030f22;
                      local_8d0 = FUN_14081d0ea;
                      local_8d8 = FUN_142b4754c;
                      local_8e0 = (code **)&local_1a0;
                      local_8e8 = &LAB_1483e40eb;
                      local_8f0 = (code *)&LAB_146486986;
                      local_8f8 = L"Engine";
                      local_900 = (undefined *)0x0;
                      local_908 = (undefined8 *)CONCAT44(local_908._4_4_,0x10000005);
                      local_910 = 8;
                      local_918 = (undefined8 *)CONCAT44(local_918._4_4_,0x420);
                      FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
                      if (DAT_14cb46ec8 == 0) goto LAB_14094801b;
                    }
                    if ((*(int *)(lVar11 + 0x38) < *(int *)(DAT_14cb46ec8 + 0x38)) ||
                       (*(longlong *)
                         (*(longlong *)(lVar11 + 0x30) +
                         (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8) != DAT_14cb46ec8 + 0x30))
                    goto LAB_14094801b;
                    lVar11 = FUN_14485cccc(lVar12);
                  }
                  cVar6 = FUN_1405b9b94(*(undefined8 *)(lVar10 + 0x3a8));
                  cVar7 = FUN_1405b9b94(*(undefined8 *)(lVar11 + 0x3a8));
                  if (cVar6 == cVar7) {
                    pvVar27 = local_8b8;
                    if (*(int *)(*(longlong *)(lVar11 + 0x3a8) + 0x1034) <
                        *(int *)(*(longlong *)(lVar10 + 0x3a8) + 0x1034)) goto LAB_140948088;
                  }
                  else {
                    cVar6 = FUN_1405b9b94();
                    if ((cVar6 != '\0') &&
                       (cVar6 = FUN_1405b9b94(*(undefined8 *)(lVar11 + 0x3a8)), pvVar27 = local_8b8,
                       cVar6 == '\0')) goto LAB_140948088;
                  }
                }
                else {
LAB_140948088:
                  pvVar22 = pvVar27;
                  iVar20 = iVar16;
                }
                lVar11 = (longlong)_Src_00 + (longlong)iVar23 * 0x100 + 0xb8;
                lVar10 = FUN_144835338(lVar11);
                if (lVar10 == 0) {
LAB_1409480d4:
                  lVar10 = 0;
                }
                else {
                  if (DAT_14cb46ec8 == 0) {
                    local_1a0 = FUN_141030f22;
                    local_8d0 = FUN_14081d0ea;
                    local_8d8 = FUN_142b4754c;
                    local_8e0 = (code **)&local_1a0;
                    local_8e8 = &LAB_1483e40eb;
                    local_8f0 = (code *)&LAB_146486986;
                    local_8f8 = L"Engine";
                    local_900 = (undefined *)0x0;
                    local_908 = (undefined8 *)CONCAT44(local_908._4_4_,0x10000005);
                    local_910 = 8;
                    local_918 = (undefined8 *)CONCAT44(local_918._4_4_,0x420);
                    FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
                    if (DAT_14cb46ec8 == 0) goto LAB_1409480d4;
                  }
                  if ((*(int *)(lVar10 + 0x38) < *(int *)(DAT_14cb46ec8 + 0x38)) ||
                     (*(longlong *)
                       (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8)
                      != DAT_14cb46ec8 + 0x30)) goto LAB_1409480d4;
                  lVar10 = FUN_14485cccc(lVar11);
                }
                pvVar27 = (void *)((longlong)pvVar22 * 0x100 + (longlong)_Src_00);
                lVar11 = FUN_144835338((longlong)pvVar27 + 0xb8);
                if (lVar11 == 0) {
LAB_140948129:
                  lVar11 = 0;
                }
                else {
                  if (DAT_14cb46ec8 == 0) {
                    local_1a0 = FUN_141030f22;
                    local_8d0 = FUN_14081d0ea;
                    local_8d8 = FUN_142b4754c;
                    local_8e0 = (code **)&local_1a0;
                    local_8e8 = &LAB_1483e40eb;
                    local_8f0 = (code *)&LAB_146486986;
                    local_8f8 = L"Engine";
                    local_900 = (undefined *)0x0;
                    local_908 = (undefined8 *)CONCAT44(local_908._4_4_,0x10000005);
                    local_910 = 8;
                    local_918 = (undefined8 *)CONCAT44(local_918._4_4_,0x420);
                    FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
                    if (DAT_14cb46ec8 == 0) goto LAB_140948129;
                  }
                  if ((*(int *)(lVar11 + 0x38) < *(int *)(DAT_14cb46ec8 + 0x38)) ||
                     (*(longlong *)
                       (*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8)
                      != DAT_14cb46ec8 + 0x30)) goto LAB_140948129;
                  lVar11 = FUN_14485cccc((longlong)pvVar27 + 0xb8);
                }
                cVar6 = FUN_1405b9b94(*(undefined8 *)(lVar10 + 0x3a8));
                cVar7 = FUN_1405b9b94(*(undefined8 *)(lVar11 + 0x3a8));
                if (cVar6 == cVar7) {
                  uVar26 = local_8b0;
                  if (*(int *)(*(longlong *)(lVar10 + 0x3a8) + 0x1034) <=
                      *(int *)(*(longlong *)(lVar11 + 0x3a8) + 0x1034)) break;
                }
                else {
                  cVar6 = FUN_1405b9b94();
                  uVar26 = local_8b0;
                  if ((cVar6 == '\0') ||
                     (cVar6 = FUN_1405b9b94(*(undefined8 *)(lVar11 + 0x3a8)), cVar6 != '\0')) break;
                }
                pvVar22 = (void *)((longlong)iVar23 * 0x100 + (longlong)_Src_00);
                memcpy(&local_1a0,pvVar22,0x100);
                memcpy(pvVar22,pvVar27,0x100);
                memcpy(pvVar27,&local_1a0,0x100);
                iVar9 = iVar20 * 2;
                iVar16 = iVar20 * 2 + 1;
                iVar23 = iVar20;
              } while ((longlong)iVar16 < (longlong)uVar26);
              uVar21 = uVar26 - 1;
              pvVar27 = (void *)(uVar21 * 0x100 + (longlong)_Src_00);
              memcpy(&local_1a0,_Src_00,0x100);
              memcpy(_Src_00,pvVar27,0x100);
              memcpy(pvVar27,&local_1a0,0x100);
              plVar15 = local_8c0;
            } while (2 < uVar26);
          }
        }
      }
LAB_1409487fc:
      plVar15 = plVar15 + -3;
    } while (&local_4a8 <= plVar15);
  }
LAB_140948819:
  if ((int)uStack_860 != 0) {
    lVar10 = (longlong)(int)uStack_860 << 8;
    pcVar28 = local_868 + 0xb8;
    fVar29 = -3.4028235e+38;
    do {
      lVar11 = FUN_144835338(pcVar28);
      if (lVar11 != 0) {
        if (DAT_14cb46ec8 == 0) {
          local_4a8 = FUN_141030f22;
          local_8d0 = FUN_14081d0ea;
          local_8d8 = FUN_142b4754c;
          local_8e0 = (code **)&local_4a8;
          local_8e8 = &LAB_1483e40eb;
          local_8f0 = (code *)&LAB_146486986;
          local_8f8 = L"Engine";
          local_900 = (undefined *)0x0;
          local_908 = (undefined8 *)CONCAT44(local_908._4_4_,0x10000005);
          local_910 = 8;
          local_918 = (undefined8 *)CONCAT44(local_918._4_4_,0x420);
          FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
          if (DAT_14cb46ec8 == 0) goto LAB_140948887;
        }
        if (((*(int *)(DAT_14cb46ec8 + 0x38) <= *(int *)(lVar11 + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8) ==
             DAT_14cb46ec8 + 0x30)) && (lVar11 = FUN_14485cccc(pcVar28), lVar11 != 0)) {
          pcVar24 = *(code **)(lVar11 + 0x3a8);
          cVar6 = FUN_140041326(pcVar24);
          if ((cVar6 != '\0') && (*(longlong *)(pcVar24 + 0xf58) != 0)) {
            local_1a0._0_5_ = (uint5)(uint)local_1a0;
            local_918 = &local_1a0;
            (**(code **)(*(longlong *)pcVar24 + 0xa80))(pcVar24,&local_4a8,local_8a0,0x31);
            if ((local_3e8 == '\0') &&
               (dVar1 = (double)local_424 + local_488, fVar29 < (float)dVar1)) {
              local_888 = (code *)*local_8a0;
              pcStack_880 = (code *)local_8a0[1];
              local_878 = (code *)local_8a0[2];
              uVar4 = (undefined4)local_4a8;
              cVar6 = (char)pcStack_4a0;
              uVar5 = local_4a8._4_4_;
              memcpy((void *)((longlong)&local_1a0 + 7),local_498,0xb1);
              uVar21 = local_4b0;
              lVar11 = (longlong)(int)local_4b0;
              uVar8 = (int)local_4b0 + 1;
              local_4b0 = CONCAT44(local_4b0._4_4_,uVar8);
              if (local_4b0._4_4_ < uVar8) {
                FUN_14840b42c(&local_858,uVar21 & 0xffffffff);
              }
              ppcVar14 = local_4b8;
              if (local_4b8 == (code **)0x0) {
                ppcVar14 = &local_858;
              }
              ppcVar14[lVar11 * 0x1d] = pcVar24;
              ppcVar14[lVar11 * 0x1d + 1] = local_888;
              (ppcVar14 + lVar11 * 0x1d + 1)[1] = pcStack_880;
              ppcVar14[lVar11 * 0x1d + 3] = local_878;
              *(undefined4 *)(ppcVar14 + lVar11 * 0x1d + 4) = uVar4;
              *(char *)(ppcVar14 + lVar11 * 0x1d + 5) = cVar6;
              if (cVar6 != '\0') {
                *(undefined4 *)((longlong)ppcVar14 + lVar11 * 0xe8 + 0x24) = uVar5;
              }
              memcpy(ppcVar14 + lVar11 * 0x1d + 6,(void *)((longlong)&local_1a0 + 7),0xb1);
              fVar29 = (float)dVar1;
            }
          }
        }
      }
LAB_140948887:
      pcVar28 = pcVar28 + 0x100;
      lVar10 = lVar10 + -0x100;
    } while (lVar10 != 0);
  }
  param_1 = local_890;
  lVar10 = local_898;
  ppcVar14 = local_4b8;
  if (local_4b8 == (code **)0x0) {
    ppcVar14 = &local_858;
  }
  param_3 = local_898;
  if ((longlong)(int)local_4b0 != 0) {
    lVar11 = 0;
    do {
      fVar30 = *(float *)((longlong)ppcVar14 + lVar11 + 0x9c) * 10.0;
      dVar1 = *(double *)((longlong)ppcVar14 + lVar11 + 0x10);
      fVar29 = *(float *)((longlong)ppcVar14 + lVar11 + 0xc0);
      if (0.0 <= fVar29) {
LAB_140948c8c:
        if (fVar29 <= *(float *)(local_890 + 0x84)) {
          fVar29 = *(float *)(local_890 + 0x84);
        }
        *(float *)(local_890 + 0x84) = fVar29;
        FUN_143b2852e(*(undefined8 *)((longlong)ppcVar14 + lVar11),&local_4a8);
        *(double *)(param_1 + 0xc0) = local_498[0];
        *(code **)(param_1 + 0xb0) = local_4a8;
        *(code **)(param_1 + 0xb8) = pcStack_4a0;
        *(undefined4 *)(lVar10 + 0x23f8) = *(undefined4 *)(param_1 + 0x84);
        if ((DAT_14c76300c == 0) || ((*(byte *)(*(longlong *)(lVar10 + 8) + 0x60) & 2) != 0))
        goto LAB_140948bde;
        goto LAB_140948bf0;
      }
      dVar2 = *(double *)((longlong)ppcVar14 + lVar11 + 8);
      dVar3 = *(double *)((longlong)ppcVar14 + lVar11 + 0x48);
      if (((dVar2 + -10.0 <= dVar3) && (dVar3 <= dVar2 + 10.0)) &&
         ((dVar2 = *(double *)((longlong)ppcVar14 + lVar11 + 0x50), dVar1 + -10.0 <= dVar2 &&
          (dVar2 <= dVar1 + 10.0)))) {
        fVar31 = *(float *)((longlong)ppcVar14 + lVar11 + 0xa4);
        if (fVar31 <= fVar30) {
          fVar31 = fVar30;
        }
        dVar1 = *(double *)((longlong)ppcVar14 + lVar11 + 0x18);
        dVar2 = *(double *)((longlong)ppcVar14 + lVar11 + 0x58);
        if ((dVar1 - (double)fVar31 <= dVar2) && (dVar2 <= dVar1 + (double)fVar31))
        goto LAB_140948c8c;
      }
      lVar11 = lVar11 + 0xe8;
    } while ((longlong)(int)local_4b0 * 0xe8 - lVar11 != 0);
  }
LAB_140948bcd:
  *(undefined4 *)(param_3 + 0x23f8) = *(undefined4 *)(param_1 + 0x84);
LAB_140948bde:
  *(undefined1 *)(param_1 + 0xc4) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
LAB_140948bf0:
  ppcVar14 = local_4b8;
  if (local_4b8 == (code **)0x0) {
    ppcVar14 = &local_858;
  }
  FUN_143b4b3eb(ppcVar14,local_4b0 & 0xffffffff);
  if (local_4b8 != (code **)0x0) {
    FUN_1400020a8();
  }
  if (local_868 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_140948c33:
  if ((local_a0 ^ (ulonglong)auStack_938) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140948ece FUN_140948ece body=118 status=ok
// SIG undefined FUN_140948ece(void)

undefined4
FUN_140948ece(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined1 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_140948f46();
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    local_34 = 0;
    local_30 = param_3;
    local_28 = param_4;
    cVar1 = FUN_140948fa8(lVar2,param_2);
    uVar3 = 0;
    if (cVar1 != '\0') {
      uVar3 = local_34;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140948f46 FUN_140948f46 body=97 status=ok
// SIG undefined FUN_140948f46(void)

undefined8 FUN_140948f46(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_140eca14a();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140eca14a();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
                    /* WARNING: Could not recover jumptable at 0x000140948fa3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        return uVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 140948fa8 FUN_140948fa8 body=162 status=ok
// SIG undefined FUN_140948fa8(void)

bool FUN_140948fa8(undefined8 param_1,undefined8 param_2,char *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14094904c(param_1,&local_30,param_2);
  if (local_30 != (longlong *)0x0) {
    if (*param_3 == '\x01') {
      uVar3 = (**(code **)(*local_30 + 0x20))(local_30,*(undefined8 *)(param_3 + 8));
    }
    else {
      uVar3 = (**(code **)(*local_30 + 0x18))(local_30);
    }
    *param_4 = uVar3;
  }
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_30 != (longlong *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14094904c FUN_14094904c body=160 status=ok
// SIG undefined FUN_14094904c(void)

void FUN_14094904c(longlong param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x28);
    lVar4 = (longlong)*(int *)(param_1 + 0x30) << 4;
    do {
      lVar2 = *plVar3;
      if ((*(int *)(lVar2 + 0x74) == 0) || (uVar1 = *(uint *)(lVar2 + 0x70), (int)uVar1 < 0)) {
LAB_1409490e8:
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        if ((int)uVar1 < DAT_14c9647dc) {
          plVar6 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if (((plVar6 == (longlong *)0x0) || ((int)plVar6[2] != *(int *)(lVar2 + 0x74))) ||
             ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)) goto LAB_1409490e8;
          lVar5 = *plVar6;
        }
      }
      if (lVar5 == param_3) {
        if (plVar3 != (longlong *)0x0) {
          *param_2 = lVar2;
          lVar4 = plVar3[1];
          param_2[1] = lVar4;
          if (lVar4 == 0) {
            return;
          }
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
          return;
        }
        break;
      }
      plVar3 = plVar3 + 2;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 1409490f4 FUN_1409490f4 body=160 status=ok
// SIG undefined FUN_1409490f4(void)

undefined8 FUN_1409490f4(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(param_1 + 0x10);
  piVar2 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,piVar1,4);
    }
    else {
      thunk_FUN_14572512c(param_2,piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if ((*(byte *)(param_2 + 5) & 5) == 0) {
    (**(code **)(*param_2 + 0x138))(param_2,param_1);
  }
  else if (*piVar1 != 1) {
    (**(code **)(*param_2 + 0x138))(param_2,param_1);
    return 1;
  }
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 8);
  return 1;
}



// FUNCTION 140949194 FUN_140949194 body=1095 status=ok
// SIG undefined FUN_140949194(void)

void FUN_140949194(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  
  (**(code **)(*param_1 + 0x348))(param_1,(char)param_1[0x19],0);
  bVar2 = FUN_1401f76a8(param_1);
  iVar4 = (uint)bVar2 + (uint)bVar2 * 4 + 0xe;
  plVar1 = param_1 + 199;
  FUN_1401fd43c(plVar1,iVar4);
  FUN_1401fd468(plVar1,iVar4);
  *(undefined4 *)(param_1 + 0xcb) = 0;
  FUN_144965dc8(plVar1,param_2,param_1 + 0x29,0);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x37,1);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x30,2);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x45,3);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x3e,4);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x6f,5);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x7d,6);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x76,7);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x4c,8);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x84,0xd);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x53,9);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x5a,10);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x61,0xb);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x68,0xc);
  cVar3 = FUN_1401f76a8(param_1);
  if (cVar3 != '\0') {
    FUN_144965dc8(plVar1,param_2,param_1 + 0xa3,0xe);
    FUN_144965dc8(plVar1,param_2,param_1 + 0xaa,0xf);
    FUN_144965dc8(plVar1,param_2,param_1 + 0xb1,0x10);
    FUN_144965dc8(plVar1,param_2,param_1 + 0xb8,0x11);
    FUN_144965dc8(plVar1,param_2,param_1 + 0xbf,0x12);
  }
  FUN_140349258(plVar1);
  plVar1 = param_1 + 0xcc;
  FUN_1401fd43c(plVar1,iVar4);
  FUN_1401fd468(plVar1,iVar4);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  FUN_144965dc8(plVar1,param_2,param_1 + 0x29,0);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x37,1);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x30,2);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x45,3);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x3e,4);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x6f,5);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x7d,6);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x4c,8);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x84,0xd);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x53,9);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x5a,10);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x61,0xb);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x68,0xc);
  cVar3 = FUN_1401f76a8(param_1);
  if (cVar3 != '\0') {
    FUN_144965dc8(plVar1,param_2,param_1 + 0xa3,0xe);
    FUN_144965dc8(plVar1,param_2,param_1 + 0xaa,0xf);
    FUN_144965dc8(plVar1,param_2,param_1 + 0xb1,0x10);
    FUN_144965dc8(plVar1,param_2,param_1 + 0xb8,0x11);
    FUN_144965dc8(plVar1,param_2,param_1 + 0xbf,0x12);
  }
  FUN_140349258(plVar1);
  return;
}



// FUNCTION 1409495dc FUN_1409495dc body=156 status=ok
// SIG undefined FUN_1409495dc(void)

void FUN_1409495dc(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140349a5c();
  FUN_140349be2(param_1,local_48);
  if (local_48[0] != 0) {
    if ((longlong)*(int *)(param_1 + 0x4d0) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x4c8);
      lVar2 = (longlong)*(int *)(param_1 + 0x4d0) * 0x2c;
      do {
        FUN_140349dfc(lVar1,local_48[0]);
        lVar1 = lVar1 + 0x2c;
        lVar2 = lVar2 + -0x2c;
      } while (lVar2 != 0);
    }
    FUN_14094967a(param_1,local_48,param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14094967a FUN_14094967a body=151 status=ok
// SIG undefined FUN_14094967a(void)

void FUN_14094967a(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_1449662d0(param_1 + 0x518,param_1 + 0x148,param_2,param_3);
  FUN_1449662d0(param_1 + 0x550,param_1 + 0x228,param_2,param_3);
  FUN_1449662d0(param_1 + 0x588,param_1 + 0x1f0,param_2,param_3);
  FUN_1449662d0(param_1 + 0x5c0,param_1 + 0x420,param_2,param_3);
  FUN_1449662d0(param_1 + 0x5f8,param_1 + 0x1b8,param_2,param_3);
  return;
}



// FUNCTION 140949712 FUN_140949712 body=207 status=ok
// SIG undefined FUN_140949712(void)

int FUN_140949712(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    bVar4 = DAT_14c950c29;
    for (iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x18 + (longlong)iVar1 * 0x20)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x20);
      if (((bVar4 & 1) != 0) && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (lVar3 == lVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 1409497e2 FUN_1409497e2 body=347 status=ok
// SIG undefined FUN_1409497e2(void)

void FUN_1409497e2(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  
  if (*(int *)(param_1 + 0x248) == *(int *)(param_1 + 0x274)) {
    FUN_14094993e(param_1 + 0x1c0,param_1 + 0x240);
    FUN_14094993e(&DAT_14cb0e4b8,param_1 + 0x240);
    *(int *)(param_1 + 0x330) = *(int *)(param_1 + 0x330) + 1;
  }
  if (*(int *)(param_1 + 0x298) == *(int *)(param_1 + 0x2c4)) {
    plVar1 = (longlong *)(param_1 + 0x290);
    FUN_1409499b4(param_1 + 0x1d0,plVar1);
    FUN_1409499b4(&DAT_14cb0e4c8,plVar1);
    iVar5 = *(int *)(param_1 + 0x1e8);
    if (0 < iVar5) {
      lVar6 = 0;
      do {
        if (*(int *)(param_1 + 0x298) != *(int *)(param_1 + 0x2c4)) {
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1e0) + lVar6 * 8);
          uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
          uVar8 = (uint)lVar3 & 0xffff;
          lVar7 = *(longlong *)(param_1 + 0x2d0);
          if (*(longlong *)(param_1 + 0x2d0) == 0) {
            lVar7 = param_1 + 0x2c8;
          }
          iVar9 = *(int *)(lVar7 + (ulonglong)
                                   (*(int *)(param_1 + 0x2d8) - 1U &
                                   (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar8) +
                                   (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar8 >> 4)) * 4);
          if (iVar9 != -1) {
            do {
              plVar2 = (longlong *)(*plVar1 + (longlong)iVar9 * 0x28);
              if (*plVar2 == lVar3) {
                if (((ulonglong)(plVar2 + 1) & 0xfffffffffffffff7) != 0) {
                  *(byte *)(plVar2 + 3) = *(byte *)(plVar2 + 3) | 1;
                  iVar5 = *(int *)(param_1 + 0x1e8);
                }
                break;
              }
              iVar9 = (int)plVar2[4];
            } while (iVar9 != -1);
          }
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar5);
    }
  }
  *(byte *)(param_1 + 0x334) = *(byte *)(param_1 + 0x334) | 1;
  return;
}



// FUNCTION 14094993e FUN_14094993e body=117 status=ok
// SIG undefined FUN_14094993e(void)

void FUN_14094993e(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    puVar4 = (undefined8 *)*param_1;
    lVar3 = (longlong)*(int *)(param_1 + 1) * 0x28;
    do {
      uVar2 = *puVar4;
      uVar1 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar5 = (uint)uVar2 & 0xffff;
      uVar2 = FUN_147d9cca6(param_2,((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20)
                                    + (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4),puVar4);
      FUN_147da1a82(uVar2,puVar4);
      puVar4 = puVar4 + 5;
      lVar3 = lVar3 + -0x28;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 1409499b4 FUN_1409499b4 body=255 status=ok
// SIG undefined FUN_1409499b4(void)

void FUN_1409499b4(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong lVar10;
  
  if ((longlong)(int)param_1[1] != 0) {
    puVar8 = (undefined8 *)*param_1;
    puVar1 = puVar8 + (longlong)(int)param_1[1] * 5;
    do {
      uVar3 = *puVar8;
      uVar4 = (uint)((ulonglong)uVar3 >> 0x10);
      uVar9 = (uint)uVar3 & 0xffff;
      plVar5 = (longlong *)
               FUN_147d9d308(param_2,((uint)uVar3 << 0x10 | uVar9) + (int)((ulonglong)uVar3 >> 0x20)
                                     + (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar9 >> 4));
      lVar6 = *plVar5;
      iVar2 = (int)plVar5[1];
      lVar7 = (longlong)iVar2;
      if (lVar7 != 0) {
        lVar10 = 0;
        do {
          if (*(longlong *)(lVar6 + 0x10 + lVar10) == puVar8[2]) goto LAB_140949a89;
          lVar10 = lVar10 + 0x28;
        } while (lVar7 * 0x28 != lVar10);
      }
      *(uint *)(plVar5 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)plVar5 + 0xc) < iVar2 + 1U) {
        FUN_147da1dbc(plVar5,iVar2);
        lVar6 = *plVar5;
      }
      *(undefined4 *)(lVar6 + 8 + lVar7 * 0x28) = *(undefined4 *)(puVar8 + 1);
      *(undefined8 *)(lVar6 + lVar7 * 0x28) = *puVar8;
      *(undefined8 *)(lVar6 + 0x10 + lVar7 * 0x28) = puVar8[2];
      *(undefined8 *)(lVar6 + 0x18 + lVar7 * 0x28) = puVar8[3];
      lVar10 = puVar8[4];
      *(longlong *)(lVar6 + 0x20 + lVar7 * 0x28) = lVar10;
      if (lVar10 != 0) {
        LOCK();
        *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
        UNLOCK();
      }
LAB_140949a89:
      puVar8 = puVar8 + 5;
    } while (puVar8 != puVar1);
  }
  return;
}



// FUNCTION 140949ab4 FUN_140949ab4 body=639 status=ok
// SIG undefined FUN_140949ab4(void)

float FUN_140949ab4(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  code *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_2 + 0x430);
  }
  lVar3 = *(longlong *)(param_1 + 0xb0);
  if (lVar3 == 0) {
    lVar3 = FUN_1448abda6(param_1);
  }
  lVar3 = *(longlong *)(lVar3 + 0x178);
  if (DAT_14cac0fa8 == (longlong *)0x0) {
    local_70 = &local_58;
    local_58 = FUN_141030f22;
    local_60 = FUN_14081d0ea;
    local_68 = &LAB_141117124;
    local_78 = &LAB_14786c867;
    local_80 = &LAB_145abcadb;
    local_88 = &DAT_149e063b2;
    local_90 = 0;
    local_98 = 0x10000004;
    local_a0 = 8;
    local_a8 = 0x438;
    FUN_14081cfa3(L"/Script/Engine",L"GameNetworkManager",&DAT_14cac0fa8,&DAT_14786c866);
  }
  plVar1 = DAT_14cac0fa8;
  lVar5 = DAT_14cac0fa8[0x22];
  if (lVar5 == 0) {
    (**(code **)(*DAT_14cac0fa8 + 1000))(DAT_14cac0fa8);
    lVar5 = plVar1[0x22];
  }
  fVar6 = *(float *)(lVar5 + 0x3f8);
  if ((param_2 != 0) && (lVar4 != 0)) {
    if ((lVar3 == 0) ||
       ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar5 + 0x404) ||
        (fVar7 = fVar6, *(int *)(lVar5 + 0x408) < *(int *)(lVar3 + 0x3b0))))) {
      fVar6 = (*(float *)(lVar5 + 0x3d0) + *(float *)(lVar5 + 0x3d0)) /
              (float)*(int *)(lVar4 + 0x38);
      fVar7 = *(float *)(lVar5 + 0x3fc);
      if (*(float *)(lVar5 + 0x3fc) <= fVar6) {
        fVar7 = fVar6;
      }
    }
    fVar6 = fVar7;
    if (((((*(double *)(param_1 + 0x388) == 0.0) && (!NAN(*(double *)(param_1 + 0x388)))) &&
         (*(double *)(param_1 + 0x390) == 0.0)) &&
        (((!NAN(*(double *)(param_1 + 0x390)) && (*(double *)(param_1 + 0x398) == 0.0)) &&
         ((!NAN(*(double *)(param_1 + 0x398)) &&
          ((*(double *)(param_1 + 0x128) == 0.0 && (!NAN(*(double *)(param_1 + 0x128)))))))))) &&
       ((*(double *)(param_1 + 0x130) == 0.0 &&
        (((((!NAN(*(double *)(param_1 + 0x130)) && (*(double *)(param_1 + 0x138) == 0.0)) &&
           (!NAN(*(double *)(param_1 + 0x138)))) &&
          ((plVar1 = *(longlong **)(param_3 + 0x48), plVar1 != (longlong *)0x0 &&
           (cVar2 = (**(code **)(*plVar1 + 0x58))(plVar1,param_2), cVar2 != '\0')))) &&
         (fVar6 = *(float *)(lVar5 + 0x400), *(float *)(lVar5 + 0x400) <= fVar7)))))) {
      fVar6 = fVar7;
    }
  }
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return fVar6;
}



// FUNCTION 140949d34 FUN_140949d34 body=342 status=ok
// SIG undefined FUN_140949d34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140949d34(longlong param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auStack_68 [32];
  double local_48;
  double dStack_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == (longlong *)0x0) {
    uVar5 = 0;
  }
  else {
    dVar3 = (double)_DAT_14c7613c0;
    uVar5 = (**(code **)(*param_2 + 0x680))(param_2,&local_48);
    local_48 = *(double *)(param_1 + 0x1a0) - local_48;
    dStack_40 = *(double *)(param_1 + 0x1a8) - dStack_40;
    local_38 = *(double *)(param_1 + 0x1b0) - local_38;
    dVar1 = (double)DAT_1499387d0;
    dVar2 = DAT_1499387d0._8_8_;
    auVar13._8_8_ = dStack_40;
    auVar13._0_8_ = local_48;
    auVar14 = divpd(auVar13,_DAT_1499387d0);
    auVar7._0_8_ = local_38 / 360.0;
    auVar7._8_8_ = 0;
    auVar15 = roundpd(auVar14,auVar14,3);
    auVar14 = roundpd(auVar7,auVar7,3);
    auVar19._0_8_ = local_38 - auVar14._0_8_ * dVar1;
    auVar19._8_8_ = 0.0 - auVar14._8_8_ * dVar2;
    local_48 = local_48 - auVar15._0_8_ * dVar1;
    dStack_40 = dStack_40 - auVar15._8_8_ * dVar2;
    auVar18._0_8_ = local_48 + dVar1;
    auVar18._8_8_ = dStack_40 + dVar2;
    auVar17._0_8_ = dVar1 + auVar19._0_8_;
    auVar17._8_8_ = dVar2 + auVar19._8_8_;
    auVar8._8_8_ = -(ulonglong)(0.0 <= dStack_40);
    auVar8._0_8_ = -(ulonglong)(0.0 <= local_48);
    auVar14._8_8_ = dStack_40;
    auVar14._0_8_ = local_48;
    auVar15 = blendvpd(auVar18,auVar14,auVar8);
    auVar9._8_8_ = -(ulonglong)(0.0 <= auVar19._8_8_);
    auVar9._0_8_ = -(ulonglong)(0.0 <= auVar19._0_8_);
    auVar14 = blendvpd(auVar17,auVar19,auVar9);
    auVar20._0_8_ = auVar15._0_8_ + -360.0;
    auVar20._8_8_ = auVar15._8_8_ + -360.0;
    auVar10._8_8_ = -(ulonglong)(180.0 < auVar15._8_8_);
    auVar10._0_8_ = -(ulonglong)(180.0 < auVar15._0_8_);
    auVar7 = blendvpd(auVar15,auVar20,auVar10);
    auVar11._8_8_ = -(ulonglong)(180.0 < auVar14._8_8_);
    auVar11._0_8_ = -(ulonglong)(180.0 < auVar14._0_8_);
    auVar15._8_8_ = auVar14._8_8_ + -360.0;
    auVar15._0_8_ = auVar14._0_8_ + -360.0;
    auVar14 = blendvpd(auVar14,auVar15,auVar11);
    auVar16._8_8_ = -(ulonglong)(dVar3 < ABS(auVar7._8_8_));
    auVar16._0_8_ = -(ulonglong)(dVar3 < ABS(auVar7._0_8_));
    iVar4 = movmskpd((int)uVar5,auVar16);
    auVar12._8_8_ = -(ulonglong)(dVar3 < ABS(auVar14._8_8_));
    auVar12._0_8_ = -(ulonglong)(dVar3 < ABS(auVar14._0_8_));
    uVar6 = movmskpd((int)param_2,auVar12);
    uVar5 = CONCAT71((int7)(CONCAT44((int)((ulonglong)uVar5 >> 0x20),iVar4) >> 8),
                     (uVar6 & 0x3fffffff) == 0 && iVar4 == 0);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140949e96 FUN_140949e96 body=242 status=ok
// SIG undefined FUN_140949e96(void)

longlong * FUN_140949e96(longlong *param_1)

{
  FUN_1400ea704();
  *param_1 = (longlong)&PTR_FUN_14b1106e0;
  param_1[5] = (longlong)&PTR_FUN_14b1111e0;
  param_1[6] = (longlong)&PTR_FUN_14b111220;
  param_1[0x55] = (longlong)&PTR_FUN_14b111270;
  param_1[0x56] = (longlong)&PTR_FUN_14b1112f0;
  param_1[0x57] = (longlong)&PTR_FUN_14b111300;
  param_1[0xe3] = (longlong)&PTR_FUN_14b111330;
  param_1[0xe4] = 0;
  *(undefined1 *)(param_1 + 0xe5) = 1;
  *(undefined1 *)((longlong)param_1 + 0x75c) = 0;
  *(undefined1 *)(param_1 + 0xec) = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  *(undefined1 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x744) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x754) = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  FUN_140396f9a(param_1 + 0xef);
  *(undefined2 *)(param_1 + 0x140) = 0;
  param_1[0x141] = 0;
  *(byte *)((longlong)param_1 + 0x9f) = *(byte *)((longlong)param_1 + 0x9f) | 1;
  *(byte *)((longlong)param_1 + 1099) = *(byte *)((longlong)param_1 + 1099) | 0x20;
  (**(code **)(*param_1 + 0x730))(param_1,7);
  return param_1;
}



// FUNCTION 140949f88 FUN_140949f88 body=1819 status=ok
// SIG undefined FUN_140949f88(void)

ulonglong FUN_140949f88(longlong param_1,longlong *param_2,wchar_t **param_3,ulonglong param_4)

{
  longlong *plVar1;
  wchar_t *_Src;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  ulonglong uVar8;
  longlong lVar9;
  byte bVar10;
  ushort uVar12;
  ulonglong uVar13;
  ushort uVar14;
  int iVar15;
  longlong *plVar16;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong local_d0;
  int local_c8;
  longlong local_c0;
  int local_b8;
  wchar_t *local_b0;
  int local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  ulonglong local_60;
  wchar_t *pwVar11;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_2 != (longlong *)0x0) {
    lVar5 = (**(code **)(*param_2 + 0x180))(param_2);
    bVar10 = (byte)(param_4 & 0xffffffff) ^ 1 | lVar5 == 0;
    pwVar11 = (wchar_t *)CONCAT71((int7)((param_4 & 0xffffffff) >> 8),bVar10);
    if (bVar10 == 0) {
      lVar6 = param_2[0xb];
      if ((lVar6 != 0) && (*(int *)(lVar6 + 0x86c) != -1)) {
        FUN_147daa0c0(&local_b0,param_3);
        pwVar7 = local_b0;
        if (local_a8 == 0) {
          pwVar7 = L"";
        }
        FUN_1446f470e(&local_c0,pwVar7,1);
        if (local_b0 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        if ((longlong)*(int *)(lVar5 + 0x1a8) != 0) {
          local_f8 = *(longlong *)(lVar5 + 0x1a0);
          local_f0 = (longlong)*(int *)(lVar5 + 0x1a8) * 0x78 + local_f8;
          do {
            if ((*(longlong *)(local_f8 + 0x10) == lVar6) ||
               (*(longlong *)(local_f8 + 0x18) == lVar6)) {
              uVar8 = local_f8 + 0x38;
              local_88 = (wchar_t *)&DAT_100000000;
              local_78 = 0xffffffff;
              uStack_70 = 0;
              uStack_80 = uVar8;
              if (*(int *)(local_f8 + 0x50) == 0) {
                iVar15 = 0;
              }
              else {
                FUN_1449c0562(&local_88);
                iVar15 = *(int *)(local_f8 + 0x50);
              }
              pwVar11 = (wchar_t *)(local_f8 + 0x28);
              local_a8 = (int)local_88;
              uStack_a4 = local_88._4_4_;
              uStack_a0 = (int)uStack_80;
              uStack_9c = uStack_80._4_4_;
              uStack_90 = CONCAT44(uStack_6c,uStack_70);
              local_98 = local_78;
              uVar2 = local_98;
              local_98._4_4_ = (int)((ulonglong)local_78 >> 0x20);
              iVar4 = local_98._4_4_;
              local_b0 = pwVar11;
              if ((local_98._4_4_ != iVar15) || (local_98 = local_78, uStack_80 != uVar8)) {
                do {
                  local_98 = uVar2;
                  if ((*(longlong *)(*(longlong *)local_b0 + (longlong)iVar4 * 0x10) != 0) &&
                     ((lVar9 = FUN_144a79778(), lVar9 != 0 &&
                      (*(longlong *)(lVar9 + 0x18) == local_c0)))) {
                    FUN_1400021e4(&local_c0,&local_88);
                    pwVar7 = local_88;
                    if ((wchar_t **)&local_88 == param_3) goto LAB_14094a370;
                    if (*param_3 != (wchar_t *)0x0) {
                      FUN_1400020a8();
                    }
                    *param_3 = local_88;
                    *(int *)(param_3 + 1) = (int)uStack_80;
                    *(undefined4 *)((longlong)param_3 + 0xc) = uStack_80._4_4_;
                    goto LAB_14094a37a;
                  }
                  local_98 = CONCAT44(local_98._4_4_,(uint)local_98 & ~uStack_a4);
                  FUN_1449c0562(&local_a8);
                  iVar4 = local_98._4_4_;
                  uVar2 = local_98;
                } while (local_b0 != pwVar11 ||
                         (CONCAT44(uStack_9c,uStack_a0) != uVar8 || local_98._4_4_ != iVar15));
              }
            }
            local_f8 = local_f8 + 0x78;
          } while (local_f8 != local_f0);
        }
      }
      if ((*(byte *)((longlong)param_2 + 0xa4) & 2) != 0) {
        cVar3 = FUN_147daa410(lVar5,param_3);
        pwVar11 = (wchar_t *)CONCAT71((int7)((ulonglong)pwVar11 >> 8),1);
        if (cVar3 != '\0') goto LAB_14094a087;
      }
      lVar6 = FUN_1405e677a(param_1,lVar5);
      if (*(int *)(lVar6 + 0x2c0) != -1) {
        local_b0 = (wchar_t *)0x0;
        local_a8 = *(int *)(param_3 + 1);
        lVar9 = (longlong)local_a8;
        pwVar7 = *param_3;
        if (lVar9 == 0) {
          uStack_a4 = 0;
        }
        else {
          FUN_1446dd670(&local_b0,local_a8,0);
          memcpy(local_b0,pwVar7,lVar9 * 2);
        }
        FUN_140f11842(&local_b0,&local_b0,0,0);
        FUN_147daa0c0(&local_88,param_3,*(undefined4 *)(lVar6 + 0x2c0));
        FUN_147daa0c0(&local_c0,&local_b0);
        lVar6 = FUN_144a79778(lVar5);
        local_e8 = *(longlong *)(lVar6 + 0x18);
        FUN_1400021e4();
        pwVar7 = local_88;
        if (local_c8 == local_b8) {
          if (1 < local_c8) {
            lVar6 = 0;
            while( true ) {
              uVar12 = *(ushort *)(local_d0 + lVar6);
              uVar8 = (ulonglong)uVar12;
              uVar14 = *(ushort *)(local_c0 + lVar6);
              if (uVar12 != uVar14) break;
              if (uVar12 == 0) goto LAB_14094a522;
LAB_14094a1ed:
              lVar6 = lVar6 + 2;
            }
            if ((uVar14 | uVar12) < 0x80) {
              uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              uVar13 = (ulonglong)uVar14;
              uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
              if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar13]) goto LAB_14094a1ed;
            }
            if (uVar12 != uVar14) goto LAB_14094a21d;
          }
LAB_14094a522:
          pwVar11 = (wchar_t *)CONCAT71((int7)((ulonglong)pwVar11 >> 8),1);
          if ((wchar_t **)&local_88 != param_3) {
            iVar15 = (int)uStack_80;
            lVar5 = (longlong)(int)uStack_80;
            *(int *)(param_3 + 1) = (int)uStack_80;
            if ((int)uStack_80 == 0 && *(int *)((longlong)param_3 + 0xc) == 0) {
              *(undefined4 *)((longlong)param_3 + 0xc) = 0;
            }
            else {
              FUN_1446dd670(param_3,uStack_80 & 0xffffffff);
              if (iVar15 != 0) {
                memcpy(*param_3,pwVar7,lVar5 * 2);
              }
            }
          }
        }
        else {
          if (local_b8 + local_c8 == 1) goto LAB_14094a522;
LAB_14094a21d:
          if ((longlong)*(int *)(lVar5 + 0x90) != 0) {
            plVar16 = *(longlong **)(lVar5 + 0x88);
            plVar1 = plVar16 + *(int *)(lVar5 + 0x90);
            pwVar11 = (wchar_t *)0x0;
LAB_14094a251:
            if (*plVar16 == 0) goto LAB_14094a30d;
            local_68 = *(longlong *)(*plVar16 + 0x30);
            if (local_68 == 0) {
              local_e8 = 0;
              uStack_e0 = 0;
              uStack_e0._0_4_ = 0;
              if (local_b8 == 0) goto LAB_14094a642;
LAB_14094a2f3:
              if (local_b8 + (int)uStack_e0 == 1) goto LAB_14094a642;
              goto LAB_14094a303;
            }
            FUN_1400021e4(&local_68,&local_e8);
            if ((int)uStack_e0 != local_b8) goto LAB_14094a2f3;
            if (1 < (int)uStack_e0) {
              lVar5 = 0;
              do {
                uVar12 = *(ushort *)(local_e8 + lVar5);
                uVar8 = (ulonglong)uVar12;
                uVar14 = *(ushort *)(local_c0 + lVar5);
                if (uVar12 == uVar14) {
                  if (uVar12 == 0) break;
                }
                else {
                  if (0x7f < (uVar14 | uVar12)) goto LAB_14094a637;
                  uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
                  uVar13 = (ulonglong)uVar14;
                  uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
                  if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar13]) goto LAB_14094a637;
                }
                lVar5 = lVar5 + 2;
              } while( true );
            }
            goto LAB_14094a642;
          }
          pwVar11 = (wchar_t *)0x0;
        }
LAB_14094a56b:
        if (local_d0 != 0) {
          FUN_1400020a8();
        }
        if (local_c0 != 0) {
          FUN_1400020a8();
        }
        if (local_88 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        if (local_b0 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_14094a087;
      }
      if (1 < *(int *)(param_1 + 0x1150)) {
        FUN_14094a6a4(&local_b0,param_3,0);
        iVar15 = local_a8;
        pwVar7 = local_b0;
        if (local_a8 == *(int *)(param_3 + 1)) {
          if ((1 < local_a8) && (iVar4 = wcscmp(local_b0,*param_3), iVar4 != 0)) {
LAB_14094a330:
            _Src = local_b0;
            pwVar7 = local_b0;
            if (&local_b0 != param_3) {
              *(int *)(param_3 + 1) = iVar15;
              if (*(int *)((longlong)param_3 + 0xc) == 0 && iVar15 == 0) {
                *(undefined4 *)((longlong)param_3 + 0xc) = 0;
              }
              else {
                FUN_1446dd670(param_3,iVar15);
                pwVar7 = local_b0;
                if (iVar15 != 0) {
                  memcpy(*param_3,_Src,(longlong)iVar15 * 2);
                  pwVar7 = local_b0;
                }
              }
            }
LAB_14094a370:
            if (pwVar7 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
LAB_14094a37a:
            pwVar11 = (wchar_t *)CONCAT71((int7)((ulonglong)pwVar11 >> 8),1);
            goto LAB_14094a087;
          }
        }
        else if (*(int *)(param_3 + 1) + local_a8 != 1) goto LAB_14094a330;
        if (pwVar7 != (wchar_t *)0x0) {
          FUN_1400020a8(pwVar7);
        }
      }
    }
  }
  pwVar11 = (wchar_t *)0x0;
LAB_14094a087:
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)pwVar11 & 0xffffffff;
LAB_14094a637:
  if (uVar12 == uVar14) {
LAB_14094a642:
    pwVar11 = local_88;
    if ((wchar_t **)&local_88 != param_3) {
      iVar15 = (int)uStack_80;
      lVar5 = (longlong)(int)uStack_80;
      *(int *)(param_3 + 1) = (int)uStack_80;
      if ((int)uStack_80 == 0 && *(int *)((longlong)param_3 + 0xc) == 0) {
        *(undefined4 *)((longlong)param_3 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_3,uStack_80 & 0xffffffff);
        if (iVar15 != 0) {
          memcpy(*param_3,pwVar11,lVar5 * 2);
        }
      }
    }
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
    pwVar11 = (wchar_t *)&DAT_00000001;
    goto LAB_14094a56b;
  }
LAB_14094a303:
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
LAB_14094a30d:
  plVar16 = plVar16 + 1;
  if (plVar16 == plVar1) goto LAB_14094a56b;
  goto LAB_14094a251;
}



// FUNCTION 14094a6a4 FUN_14094a6a4 body=766 status=ok
// SIG undefined FUN_14094a6a4(void)

undefined8 * FUN_14094a6a4(undefined8 *param_1,undefined8 *param_2,int *param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  void *_Dst;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  wchar_t *_Str;
  longlong lVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  longlong local_78 [2];
  wchar_t *local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140056680(&local_58,&DAT_14a8eb0f8);
  if (param_3 != (int *)0x0) {
    *param_3 = -1;
  }
  iVar7 = local_50 + -1;
  puVar15 = local_58;
  if (local_50 == 0) {
    puVar15 = &DAT_149dfb77a;
    iVar7 = 0;
  }
  local_80 = 0xffffffff;
  local_88 = 0;
  iVar7 = FUN_1447ee042(param_2,puVar15,iVar7,1);
  if (iVar7 < 0) {
    *param_1 = 0;
    iVar7 = *(int *)(param_2 + 1);
    lVar12 = (longlong)iVar7;
    puVar15 = (undefined2 *)*param_2;
    *(int *)(param_1 + 1) = iVar7;
    if (lVar12 == 0) goto LAB_14094a807;
    FUN_1446dd670(param_1,iVar7,0);
    _Dst = (void *)*param_1;
  }
  else {
    iVar3 = local_50 + -1;
    if (local_50 == 0) {
      iVar3 = 0;
    }
    iVar3 = iVar3 + iVar7;
    iVar5 = *(int *)(param_2 + 1);
    lVar12 = (longlong)iVar5;
    iVar8 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar8 = 0;
    }
    puVar15 = (undefined2 *)*param_2;
    if (((iVar3 < iVar8) && (lVar10 = (longlong)iVar3, puVar15[lVar10] == 0x5f)) &&
       (uVar4 = iVar3 + 1, (int)uVar4 < iVar8)) {
      uVar6 = (ulonglong)iVar8;
      lVar13 = 0;
      do {
        if (puVar15[lVar10 + lVar13 + 1] == 0x5f) {
          iVar3 = (int)lVar13;
          if ((param_3 != (int *)0x0) && ((int)uVar4 < (int)(uVar4 + iVar3))) {
            if (iVar3 < 0) {
              local_68 = (wchar_t *)0x0;
              uStack_60 = 0;
              _Str = L"";
            }
            else {
              uVar2 = 0;
              if (0 < (int)uVar4) {
                uVar2 = uVar4;
              }
              uVar11 = (ulonglong)uVar2;
              uVar9 = (int)uVar4 + lVar13;
              if ((longlong)uVar6 <= (int)uVar4 + lVar13) {
                uVar9 = uVar6;
              }
              if ((longlong)uVar9 < (longlong)uVar11) {
                uVar9 = uVar11;
              }
              if (iVar5 == 0) {
                puVar15 = &DAT_149dfb77a;
              }
              FUN_14006620a(&local_68,puVar15 + uVar11,(int)uVar9 - uVar2);
              _Str = L"";
              if ((int)uStack_60 != 0) {
                _Str = local_68;
              }
            }
            iVar5 = _wtoi(_Str);
            *param_3 = iVar5;
            if (local_68 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            iVar5 = *(int *)(param_2 + 1);
            puVar15 = (undefined2 *)*param_2;
            iVar8 = iVar5 + -1;
            if (iVar5 == 0) {
              iVar8 = 0;
            }
          }
          puVar14 = &DAT_149dfb77a;
          if (iVar5 == 0) {
            puVar15 = &DAT_149dfb77a;
          }
          if (iVar7 < iVar8) {
            iVar8 = iVar7;
          }
          if (iVar8 < 1) {
            iVar8 = 0;
          }
          FUN_14006620a(&local_68,puVar15,iVar8);
          iVar5 = *(int *)(param_2 + 1);
          iVar8 = iVar5 + -1;
          if (iVar5 == 0) {
            iVar8 = 0;
          }
          iVar7 = (((((uint)(local_50 != 0) - iVar7) - local_50) + iVar8) - iVar3) + -2;
          if (iVar5 != 0) {
            puVar14 = (undefined2 *)*param_2;
          }
          iVar3 = iVar8;
          if (iVar7 < iVar8) {
            iVar3 = iVar7;
          }
          iVar7 = 0;
          if (0 < iVar3) {
            iVar7 = iVar3;
          }
          FUN_140056680(local_78,(longlong)puVar14 +
                                 ((longlong)iVar8 * 2 - (ulonglong)(uint)(iVar7 * 2)));
          FUN_140474144(param_1,&local_68,local_78);
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
          if (local_68 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          goto LAB_14094a80e;
        }
      } while ((0xfff5 < (ushort)(puVar15[lVar10 + lVar13 + 1] - 0x3a)) &&
              (lVar1 = lVar10 + lVar13, lVar13 = lVar13 + 1, lVar1 + 2 < (longlong)uVar6));
    }
    *param_1 = 0;
    *(int *)(param_1 + 1) = iVar5;
    if (iVar5 == 0) {
LAB_14094a807:
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      goto LAB_14094a80e;
    }
    FUN_1446dd670(param_1,iVar5,0);
    _Dst = (void *)*param_1;
  }
  memcpy(_Dst,puVar15,lVar12 * 2);
LAB_14094a80e:
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14094a9b2 FUN_14094a9b2 body=71 status=ok
// SIG undefined FUN_14094a9b2(void)

undefined8 * FUN_14094a9b2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b3d6790;
  FUN_14094a9f9(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14094a9f9 FUN_14094a9f9 body=162 status=ok
// SIG undefined FUN_14094a9f9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14094a9f9(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  auVar1 = _DAT_149931e80;
  if (param_2 != 0) {
    lVar3 = (ulonglong)param_2 - 1;
    auVar5._8_4_ = (int)lVar3;
    auVar5._0_8_ = lVar3;
    auVar5._12_4_ = (int)((ulonglong)lVar3 >> 0x20);
    puVar2 = (undefined8 *)(param_1 + 0x58);
    uVar4 = 0;
    auVar6 = pmovsxbq(in_XMM1,0x100);
    auVar5 = auVar5 ^ _DAT_149931e80;
    do {
      if ((bool)(~(auVar5._0_8_ < (longlong)(uVar4 ^ auVar1._0_8_)) & 1)) {
        *puVar2 = 0;
      }
      auVar7._8_4_ = (int)uVar4;
      auVar7._0_8_ = uVar4;
      auVar7._12_4_ = (int)(uVar4 >> 0x20);
      if ((longlong)((auVar7._8_8_ | auVar6._8_8_) ^ auVar1._8_8_) <= auVar5._8_8_) {
        puVar2[0xc] = 0;
      }
      uVar4 = uVar4 + 2;
      puVar2 = puVar2 + 0x18;
    } while (((ulonglong)param_2 + 1 & 0xfffffffffffffffe) != uVar4);
  }
  return;
}



// FUNCTION 14094aa9c FUN_14094aa9c body=190 status=ok
// SIG undefined FUN_14094aa9c(void)

void FUN_14094aa9c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_14094adb2(param_1,&local_30);
  lVar3 = *param_2;
  if (lVar3 != 0) {
    uVar6 = FUN_140158f46();
    cVar5 = FUN_1448093f4(lVar3,uVar6);
    if (cVar5 != '\0') {
      FUN_14094ab5c(lVar3 + 0x6a8,param_1 + 0x2e0);
    }
  }
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14094ab5c FUN_14094ab5c body=154 status=ok
// SIG undefined FUN_14094ab5c(void)

longlong FUN_14094ab5c(longlong param_1,longlong param_2)

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
    if (iVar2 == 0) goto LAB_14094ab88;
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
LAB_14094ab88:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_14094abf6(param_1,param_2);
  return param_1;
}



// FUNCTION 14094abf6 FUN_14094abf6 body=444 status=ok
// SIG undefined FUN_14094abf6(void)

longlong * FUN_14094abf6(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *_Dst;
  
  if (param_1 != param_2) {
    uVar2 = *(uint *)(param_2 + 1);
    FUN_14060f16e(param_1,(ulonglong)uVar2);
    lVar5 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar5 + uVar2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar5) < uVar2) {
      FUN_14488f93c(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar6 = (int)param_2[5] + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar6) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar8 = 0x80;
      if (0x80 < (int)uVar6) {
        uVar8 = uVar6;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar8;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar3 = (int)param_2[5];
    *(int *)(param_1 + 5) = iVar3;
    if (iVar3 != 0) {
      plVar7 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar7 = param_2 + 2;
      }
      _Dst = param_1 + 2;
      if ((longlong *)param_1[4] != (longlong *)0x0) {
        _Dst = (longlong *)param_1[4];
      }
      memcpy(_Dst,plVar7,(ulonglong)(iVar3 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (0 < (int)uVar2) {
      lVar5 = *param_1;
      lVar4 = *param_2;
      lVar10 = 0;
      uVar9 = 0;
      do {
        plVar7 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar7 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar7 + (uVar9 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar9 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar5 + lVar10) = *(undefined4 *)(lVar4 + lVar10);
          *(undefined4 *)(lVar5 + 4 + lVar10) = *(undefined4 *)(lVar4 + 4 + lVar10);
        }
        else {
          *(undefined8 *)(lVar5 + lVar10) = *(undefined8 *)(lVar4 + lVar10);
          *(undefined8 *)(lVar5 + 0x28 + lVar10) = 0;
          *(undefined4 *)(lVar5 + 0x30 + lVar10) = 0;
          puVar1 = (undefined8 *)(lVar5 + 8 + lVar10);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar5 + 0x34 + lVar10) = 0xffffffff00000080;
          *(undefined4 *)(lVar5 + 0x3c + lVar10) = 0;
          *(undefined8 *)(lVar5 + 0x48 + lVar10) = 0;
          *(undefined4 *)(lVar5 + 0x50 + lVar10) = 0;
          FUN_145759ac8(lVar5 + 8 + lVar10,lVar4 + 8 + lVar10);
          *(undefined8 *)(lVar5 + 0x58 + lVar10) = *(undefined8 *)(lVar4 + 0x58 + lVar10);
        }
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 0x60;
      } while (uVar2 != uVar9);
    }
  }
  return param_1;
}



// FUNCTION 14094adb2 FUN_14094adb2 body=918 status=ok
// SIG undefined FUN_14094adb2(void)

void FUN_14094adb2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_14094b946(param_1,&local_30);
  lVar3 = *param_2;
  if (lVar3 != 0) {
    uVar7 = FUN_1407f6684();
    cVar6 = FUN_1448093f4(lVar3,uVar7);
    if (cVar6 != '\0') {
      FUN_14094b14a(lVar3 + 0x360,param_1 + 0x148);
      *(undefined4 *)(lVar3 + 0x370) = *(undefined4 *)(param_1 + 0x2b8);
      FUN_14094b1a8(lVar3 + 0x378,param_1 + 0x158);
      FUN_14094b206(lVar3 + 0x388,param_1 + 0x168);
      *(undefined1 *)(lVar3 + 0x3d8) = *(undefined1 *)(param_1 + 0x1b8);
      *(undefined8 *)(lVar3 + 0x3e0) = *(undefined8 *)(param_1 + 0x1c0);
      lVar4 = *(longlong *)(param_1 + 0x1c8);
      if (*(longlong *)(lVar3 + 1000) != lVar4) {
        *(undefined8 *)(lVar3 + 0x3f8) = 0;
      }
      *(longlong *)(lVar3 + 1000) = lVar4;
      if (*(longlong *)(lVar3 + 0x3f0) != *(longlong *)(param_1 + 0x1d0)) {
        *(undefined8 *)(lVar3 + 0x3f8) = 0;
      }
      uVar7 = FUN_14477b664();
      uVar7 = FUN_14477b664(uVar7);
      *(undefined8 *)(lVar3 + 0x3f0) = uVar7;
      *(undefined8 *)(lVar3 + 0x3f8) = *(undefined8 *)(param_1 + 0x1d8);
      lVar4 = *(longlong *)(param_1 + 0x1e0);
      if (*(longlong *)(lVar3 + 0x400) != lVar4) {
        *(undefined8 *)(lVar3 + 0x410) = 0;
      }
      *(longlong *)(lVar3 + 0x400) = lVar4;
      if (*(longlong *)(lVar3 + 0x408) != *(longlong *)(param_1 + 0x1e8)) {
        *(undefined8 *)(lVar3 + 0x410) = 0;
      }
      uVar7 = FUN_14477b664();
      uVar7 = FUN_14477b664(uVar7);
      *(undefined8 *)(lVar3 + 0x408) = uVar7;
      *(undefined8 *)(lVar3 + 0x410) = *(undefined8 *)(param_1 + 0x1f0);
      *(undefined4 *)(lVar3 + 0x428) = *(undefined4 *)(param_1 + 0x208);
      uVar7 = *(undefined8 *)(param_1 + 0x200);
      *(undefined8 *)(lVar3 + 0x418) = *(undefined8 *)(param_1 + 0x1f8);
      *(undefined8 *)(lVar3 + 0x420) = uVar7;
      *(undefined4 *)(lVar3 + 0x430) = *(undefined4 *)(param_1 + 0x210);
      *(undefined4 *)(lVar3 + 0x434) = *(undefined4 *)(param_1 + 0x214);
      *(undefined4 *)(lVar3 + 0x438) = *(undefined4 *)(param_1 + 0x218);
      *(undefined8 *)(lVar3 + 0x43c) = *(undefined8 *)(param_1 + 0x21c);
      *(undefined4 *)(lVar3 + 0x444) = *(undefined4 *)(param_1 + 700);
      lVar4 = *(longlong *)(param_1 + 0x228);
      if (*(longlong *)(lVar3 + 0x448) != lVar4) {
        *(undefined8 *)(lVar3 + 0x458) = 0;
      }
      *(longlong *)(lVar3 + 0x448) = lVar4;
      if (*(longlong *)(lVar3 + 0x450) != *(longlong *)(param_1 + 0x230)) {
        *(undefined8 *)(lVar3 + 0x458) = 0;
      }
      uVar7 = FUN_14477b664();
      uVar7 = FUN_14477b664(uVar7);
      *(undefined8 *)(lVar3 + 0x450) = uVar7;
      *(undefined8 *)(lVar3 + 0x458) = *(undefined8 *)(param_1 + 0x238);
      *(undefined8 *)(lVar3 + 0x460) = *(undefined8 *)(param_1 + 0x240);
      *(undefined4 *)(lVar3 + 0x634) = *(undefined4 *)(param_1 + 0x248);
      *(undefined4 *)(lVar3 + 0x648) = *(undefined4 *)(param_1 + 0x24c);
      *(undefined4 *)(lVar3 + 0x64c) = *(undefined4 *)(param_1 + 0x250);
      FUN_14094b14a(lVar3 + 0x4b0,param_1 + 0x2a8);
      FUN_14094b2a0(lVar3 + 0x4c0,param_1 + 600);
      *(undefined1 *)(lVar3 + 0x304) = *(undefined1 *)(param_1 + 0x2c0);
      lVar4 = *(longlong *)(param_1 + 0x2c8);
      if (*(longlong *)(lVar3 + 0x468) != lVar4) {
        *(undefined8 *)(lVar3 + 0x478) = 0;
      }
      *(longlong *)(lVar3 + 0x468) = lVar4;
      if (*(longlong *)(lVar3 + 0x470) != *(longlong *)(param_1 + 0x2d0)) {
        *(undefined8 *)(lVar3 + 0x478) = 0;
      }
      uVar7 = FUN_14477b664();
      uVar7 = FUN_14477b664(uVar7);
      *(undefined8 *)(lVar3 + 0x470) = uVar7;
      *(undefined8 *)(lVar3 + 0x478) = *(undefined8 *)(param_1 + 0x2d8);
    }
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14094b14a FUN_14094b14a body=93 status=ok
// SIG undefined FUN_14094b14a(void)

undefined8 * FUN_14094b14a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14060f50f(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14094b85c(param_1,iVar1);
      FUN_14094c78c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14094b1a8 FUN_14094b1a8 body=93 status=ok
// SIG undefined FUN_14094b1a8(void)

undefined8 * FUN_14094b1a8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14060f567(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14094b67e(param_1,iVar1);
      FUN_14094b763(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14094b206 FUN_14094b206 body=154 status=ok
// SIG undefined FUN_14094b206(void)

longlong FUN_14094b206(longlong param_1,longlong param_2)

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
    if (iVar2 == 0) goto LAB_14094b232;
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
LAB_14094b232:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_14094b4aa(param_1,param_2);
  return param_1;
}



// FUNCTION 14094b2a0 FUN_14094b2a0 body=154 status=ok
// SIG undefined FUN_14094b2a0(void)

longlong FUN_14094b2a0(longlong param_1,longlong param_2)

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
    if (iVar2 == 0) goto LAB_14094b2cc;
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
LAB_14094b2cc:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_14094b33a(param_1,param_2);
  return param_1;
}



// FUNCTION 14094b33a FUN_14094b33a body=368 status=ok
// SIG undefined FUN_14094b33a(void)

longlong * FUN_14094b33a(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *_Dst;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14060f656(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar5 = (int)param_2[5] + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar5) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar7 = 0x80;
      if (0x80 < (int)uVar5) {
        uVar7 = uVar5;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar7;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar2 = (int)param_2[5];
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      plVar6 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar6 = param_2 + 2;
      }
      _Dst = param_1 + 2;
      if ((longlong *)param_1[4] != (longlong *)0x0) {
        _Dst = (longlong *)param_1[4];
      }
      memcpy(_Dst,plVar6,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar3 = *param_2;
      lVar9 = 0;
      uVar8 = 0;
      do {
        plVar6 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar6 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar6 + (uVar8 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar8 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar9) = *(undefined4 *)(lVar3 + lVar9);
          *(undefined4 *)(lVar4 + 4 + lVar9) = *(undefined4 *)(lVar3 + 4 + lVar9);
        }
        else {
          *(undefined8 *)(lVar4 + lVar9) = *(undefined8 *)(lVar3 + lVar9);
          FUN_145759a18(lVar4 + 8 + lVar9,lVar3 + 8 + lVar9);
          *(undefined8 *)(lVar4 + 0x18 + lVar9) = *(undefined8 *)(lVar3 + 0x18 + lVar9);
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 0x20;
      } while (uVar1 != uVar8);
    }
  }
  return param_1;
}



// FUNCTION 14094b4aa FUN_14094b4aa body=467 status=ok
// SIG undefined FUN_14094b4aa(void)

longlong * FUN_14094b4aa(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *_Dst;
  longlong lVar10;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14060f84a(param_1,(ulonglong)uVar1);
    lVar5 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar5 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar5) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar6 = (int)param_2[5] + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar6) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar8 = 0x80;
      if (0x80 < (int)uVar6) {
        uVar8 = uVar6;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar8;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar2 = (int)param_2[5];
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      plVar7 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar7 = param_2 + 2;
      }
      _Dst = param_1 + 2;
      if ((longlong *)param_1[4] != (longlong *)0x0) {
        _Dst = (longlong *)param_1[4];
      }
      memcpy(_Dst,plVar7,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (0 < (int)uVar1) {
      lVar5 = *param_1;
      lVar3 = *param_2;
      lVar10 = 0;
      uVar9 = 0;
      do {
        plVar7 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar7 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar7 + (uVar9 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar9 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar5 + lVar10) = *(undefined4 *)(lVar3 + lVar10);
          *(undefined4 *)(lVar5 + 4 + lVar10) = *(undefined4 *)(lVar3 + 4 + lVar10);
        }
        else {
          *(undefined8 *)(lVar5 + lVar10) = *(undefined8 *)(lVar3 + lVar10);
          *(undefined8 *)(lVar5 + 8 + lVar10) = 0;
          iVar2 = *(int *)(lVar3 + 0x10 + lVar10);
          uVar4 = *(undefined8 *)(lVar3 + 8 + lVar10);
          *(int *)(lVar5 + 0x10 + lVar10) = iVar2;
          if (iVar2 == 0) {
            *(undefined4 *)(lVar5 + 0x14 + lVar10) = 0;
          }
          else {
            FUN_14094b67e(lVar5 + 8 + lVar10,iVar2,0);
            FUN_14094b763(*(undefined8 *)(lVar5 + 8 + lVar10),uVar4);
          }
          *(undefined8 *)(lVar5 + 0x18 + lVar10) = *(undefined8 *)(lVar3 + 0x18 + lVar10);
        }
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 0x20;
      } while (uVar1 != uVar9);
    }
  }
  return param_1;
}



// FUNCTION 14094b67e FUN_14094b67e body=229 status=ok
// SIG undefined FUN_14094b67e(void)

void FUN_14094b67e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14094b763 FUN_14094b763 body=249 status=ok
// SIG undefined FUN_14094b763(void)

void FUN_14094b763(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = 0;
    do {
      *(undefined8 *)(param_1 + lVar4) = *(undefined8 *)(param_2 + lVar4);
      *(undefined8 *)(param_1 + 8 + lVar4) = *(undefined8 *)(param_2 + 8 + lVar4);
      *(undefined4 *)(param_1 + 0x10 + lVar4) = *(undefined4 *)(param_2 + 0x10 + lVar4);
      *(undefined8 *)(param_1 + 0x18 + lVar4) = 0;
      *(undefined8 *)(param_1 + 0x20 + lVar4) = *(undefined8 *)(param_2 + 0x20 + lVar4);
      *(undefined4 *)(param_1 + 0x28 + lVar4) = *(undefined4 *)(param_2 + 0x28 + lVar4);
      *(undefined8 *)(param_1 + 0x30 + lVar4) = 0;
      *(undefined8 *)(param_1 + 0x38 + lVar4) = *(undefined8 *)(param_2 + 0x38 + lVar4);
      *(undefined8 *)(param_1 + 0x40 + lVar4) = *(undefined8 *)(param_2 + 0x40 + lVar4);
      *(undefined4 *)(param_1 + 0x48 + lVar4) = *(undefined4 *)(param_2 + 0x48 + lVar4);
      puVar1 = (undefined8 *)(param_1 + 0x50 + lVar4);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(param_1 + 0x60 + lVar4) = 0;
      *(undefined8 *)(param_1 + 0x50 + lVar4) = *(undefined8 *)(param_2 + 0x50 + lVar4);
      uVar3 = FUN_14477b664(*(undefined8 *)(param_2 + 0x58 + lVar4));
      uVar3 = FUN_14477b664(uVar3);
      *(undefined8 *)(param_1 + 0x58 + lVar4) = uVar3;
      *(undefined8 *)(param_1 + 0x60 + lVar4) = *(undefined8 *)(param_2 + 0x60 + lVar4);
      lVar2 = *(longlong *)(param_2 + 0x68 + lVar4);
      *(longlong *)(param_1 + 0x68 + lVar4) = lVar2;
      if ((lVar2 != 0) && ((DAT_14cb26569 & 1) != 0)) {
        FUN_14036e5a4(*(undefined8 *)(lVar2 + 0x50));
      }
      lVar4 = lVar4 + 0x70;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14094b85c FUN_14094b85c body=233 status=ok
// SIG undefined FUN_14094b85c(void)

void FUN_14094b85c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0xc0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar2 & (uVar3 + uVar2) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,0x10);
      }
    }
    iVar1 = (int)(uVar3 / 0xc0);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0xc0,0x10);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}


