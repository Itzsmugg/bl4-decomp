// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148dc0506 FUN_148dc0506 body=22 status=ok
// SIG undefined FUN_148dc0506(void)

ulonglong FUN_148dc0506(uint *param_1)

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
  
  plVar3 = DAT_14cbd0108;
  if (DAT_14cbd0108 == (longlong *)0x0) {
    return 0;
  }
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(code **)(*DAT_14cbd0108 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cbd0108 + 0x154) & 1) != 0) &&
       (*(int *)((longlong)DAT_14cbd0108 + 0x1fc) < (int)DAT_14cbd0108[0x3a])) goto LAB_144815de0;
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
    cVar4 = (**(code **)(*DAT_14cbd0108 + 0x300))(DAT_14cbd0108);
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



// FUNCTION 148dc0554 FUN_148dc0554 body=40 status=ok
// SIG undefined FUN_148dc0554(void)

undefined8 FUN_148dc0554(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14597feea(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 148dc0588 FUN_148dc0588 body=117 status=ok
// SIG undefined FUN_148dc0588(void)

void FUN_148dc0588(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_14010113e();
  if (param_2 != 0 && lVar2 != 0) {
    lVar3 = FUN_144a2f878();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) &&
       ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0)) {
      cVar1 = FUN_1449ce97a(param_2);
      if (cVar1 == '\0') {
        FUN_148dc026a(lVar2 + 0x21e8,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148dc05fe FUN_148dc05fe body=37 status=ok
// SIG undefined FUN_148dc05fe(void)

void FUN_148dc05fe(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14010113e();
  if (lVar1 == 0) {
    return;
  }
  FUN_1458e7bbe(lVar1 + 0x21e8);
  return;
}



// FUNCTION 148dc0624 FUN_148dc0624 body=360 status=ok
// SIG undefined FUN_148dc0624(void)

void FUN_148dc0624(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_1489318f4();
  if (param_2 != 0) {
    lVar1 = FUN_144a7b4ca();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      *(undefined1 *)(param_2 + 0xce8) = *(undefined1 *)(param_1 + 0xce8);
      *(undefined1 *)(param_2 + 0xce9) = *(undefined1 *)(param_1 + 0xce9);
      FUN_1488c5dd2(param_2 + 0x770,param_1 + 0x770);
      FUN_1488c5f2e(param_2 + 0x8a0,param_1 + 0x8a0);
      FUN_1488c5dd2(param_2 + 0xa00,param_1 + 0xa00);
      FUN_1488c5f2e(param_2 + 0xb30,param_1 + 0xb30);
      *(undefined4 *)(param_2 + 0xce0) = *(undefined4 *)(param_1 + 0xce0);
      *(undefined4 *)(param_2 + 0xce4) = *(undefined4 *)(param_1 + 0xce4);
      FUN_148dc078c(param_2 + 0x6c8,param_1 + 0x6c8);
      *(undefined4 *)(param_2 + 0xdac) = *(undefined4 *)(param_1 + 0xdac);
      *(undefined4 *)(param_2 + 0xda8) = *(undefined4 *)(param_1 + 0xda8);
      *(undefined1 *)(param_2 + 0x710) = *(undefined1 *)(param_1 + 0x710);
      *(undefined1 *)(param_2 + 0x711) = *(undefined1 *)(param_1 + 0x711);
      *(undefined4 *)(param_2 + 0xef0) = *(undefined4 *)(param_1 + 0xef0);
      *(undefined4 *)(param_2 + 0xef4) = *(undefined4 *)(param_1 + 0xef4);
      *(undefined4 *)(param_2 + 0xef8) = *(undefined4 *)(param_1 + 0xef8);
      *(undefined1 *)(param_2 + 0xf18) = *(undefined1 *)(param_1 + 0xf18);
      *(undefined8 *)(param_2 + 0xf20) = *(undefined8 *)(param_1 + 0xf20);
      FUN_148dc07da(param_2 + 0xf30,param_1 + 0xf30);
      *(undefined1 *)(param_2 + 0xf40) = *(undefined1 *)(param_1 + 0xf40);
      *(undefined8 *)(param_2 + 0xf68) = *(undefined8 *)(param_1 + 0xf68);
    }
  }
  return;
}



// FUNCTION 148dc078c FUN_148dc078c body=78 status=ok
// SIG undefined FUN_148dc078c(void)

longlong * FUN_148dc078c(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1410681fd(*param_1,(int)param_1[1]);
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



// FUNCTION 148dc07da FUN_148dc07da body=93 status=ok
// SIG undefined FUN_148dc07da(void)

undefined8 * FUN_148dc07da(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14036924e(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148dc3362(param_1,iVar1);
      FUN_148dc33d1(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148dc0838 FUN_148dc0838 body=162 status=ok
// SIG undefined FUN_148dc0838(void)

void FUN_148dc0838(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  
  if ((*(char *)(param_1 + 0x518) != '\0') &&
     (*(undefined1 *)(param_1 + 0x518) = 0, *(char *)(param_1 + 0x178) != '\x03')) {
    FUN_1486e051e(param_1,0);
  }
  lVar1 = FUN_1447210f0(param_1);
  if (lVar1 != 0) {
    fVar2 = 0.0;
    if (0.0 <= *(float *)(param_1 + 0xef4)) {
      lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,lVar1,1);
      if (lVar1 != 0) {
        fVar2 = (float)*(double *)(lVar1 + 0x6d0);
      }
      if (*(float *)(param_1 + 0xef4) < fVar2) {
        *(float *)(param_1 + 0xef8) =
             (fVar2 - *(float *)(param_1 + 0xef4)) + *(float *)(param_1 + 0xef8);
      }
    }
  }
  return;
}



// FUNCTION 148dc08da FUN_148dc08da body=252 status=ok
// SIG undefined FUN_148dc08da(void)

undefined1 FUN_148dc08da(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [43];
  undefined1 local_7d;
  short local_7c [2];
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  undefined8 local_50;
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = FUN_1447210f0();
  if (lVar2 != 0) {
    lVar3 = FUN_1400f6f32(lVar2);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(longlong *)(lVar3 + 0x68);
    }
    lVar2 = FUN_1400f6f32(lVar2);
    if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x30), lVar2 != 0 && lVar3 != 0)) {
      FUN_14042af24(lVar3,local_7c,param_1);
      if (-1 < local_7c[0]) {
        local_48 = &local_7d;
        local_7d = 0;
        local_68 = 0;
        local_58 = &PTR_LAB_14b9969e0;
        local_78 = FUN_144202864;
        local_50 = param_1;
        local_40 = param_2;
        FUN_1489b0970(lVar2,local_7c);
        uVar1 = local_7d;
        goto LAB_148dc09a9;
      }
    }
  }
  uVar1 = 0;
LAB_148dc09a9:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc09d8 FUN_148dc09d8 body=36 status=ok
// SIG undefined FUN_148dc09d8(void)

void FUN_148dc09d8(longlong param_1)

{
  FUN_148dc09fc(param_1,0);
  FUN_148dc0b0e(param_1);
  *(undefined1 *)(param_1 + 0x6b0) = 0;
  return;
}



// FUNCTION 148dc09fc FUN_148dc09fc body=273 status=ok
// SIG undefined FUN_148dc09fc(void)

void FUN_148dc09fc(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_5c [4];
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_1447210f0();
  if (lVar1 != 0) {
    lVar2 = FUN_1400f6f32(lVar1);
    if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x30), lVar2 != 0)) {
      lVar1 = FUN_1400f6f32(lVar1);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x68) != 0)) {
        FUN_14042af24(*(longlong *)(lVar1 + 0x68),local_5c,param_1);
        uVar3 = FUN_144a8232a(&DAT_14cb8dd48);
        uVar3 = FUN_1489b10d6(lVar2,local_5c,uVar3);
        FUN_1447a97f4(local_58,uVar3);
        FUN_1489b0c94(lVar2,local_5c,local_58,param_2);
        if ((char)param_2 == '\0') {
          local_68 = 0;
          uVar3 = FUN_1403b0700(param_1);
          FUN_145d0a0b4(uVar3,&local_68,0);
          *(undefined1 *)(param_1 + 0x710) = 1;
          FUN_145be8d80(param_1);
        }
        if (local_40 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc0b0e FUN_148dc0b0e body=281 status=ok
// SIG undefined FUN_148dc0b0e(void)

void FUN_148dc0b0e(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  short local_54 [2];
  int local_50;
  int local_4c;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = FUN_1447210f0();
  if (lVar2 == 0) goto LAB_148dc0bcb;
  lVar3 = FUN_1400f6f32(lVar2);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 0x68);
  }
  lVar2 = FUN_1400f6f32(lVar2);
  if (((lVar2 == 0) || (lVar2 = *(longlong *)(lVar2 + 0x30), lVar2 == 0 || lVar3 == 0)) ||
     (FUN_14042af24(lVar3,local_54,param_1), local_54[0] < 0)) goto LAB_148dc0bcb;
  FUN_1489b0ee4(lVar2,&local_50,local_54);
  if (((local_50 == 0) || (local_4c == 0)) || (local_50 == DAT_14c948000)) {
LAB_148dc0bb4:
    FUN_1489afb7c(lVar2,local_54);
  }
  else {
    FUN_1447325ac(&local_50,&local_60,1);
    cVar1 = FUN_146242444(lVar2,local_54,local_60,1);
    if (cVar1 == '\0') goto LAB_148dc0bb4;
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
LAB_148dc0bcb:
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148dc0c28 FUN_148dc0c28 body=169 status=ok
// SIG undefined FUN_148dc0c28(void)

undefined8 FUN_148dc0c28(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [44];
  short local_2c [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1447210f0();
  if (lVar1 != 0) {
    lVar2 = FUN_1400f6f32(lVar1);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = *(longlong *)(lVar2 + 0x68);
    }
    lVar1 = FUN_1400f6f32(lVar1);
    if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x30), lVar1 != 0 && lVar2 != 0)) {
      FUN_14042af24(lVar2,local_2c,param_1);
      if (-1 < local_2c[0]) {
        uVar3 = FUN_140b9fdde(lVar1,local_2c);
        goto LAB_148dc0cad;
      }
    }
  }
  uVar3 = 0;
LAB_148dc0cad:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc0cd2 FUN_148dc0cd2 body=12 status=ok
// SIG undefined FUN_148dc0cd2(void)

void FUN_148dc0cd2(longlong param_1)

{
  FUN_144a787a6(param_1 + 0x728);
  return;
}



// FUNCTION 148dc0cde FUN_148dc0cde body=170 status=ok
// SIG undefined FUN_148dc0cde(void)

void FUN_148dc0cde(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined1 auStack_88 [40];
  undefined1 local_60 [40];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1414ae211(local_60);
  cVar1 = FUN_14493b798(param_2,local_60);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (cVar1 == '\0') goto LAB_148dc0d46;
  uVar2 = FUN_145ae004e();
  cVar1 = *(char *)(param_2 + 0x38);
  if (cVar1 == '\x03') {
    bVar4 = *(longlong *)(param_2 + 0x3c) == 0;
LAB_148dc0d38:
    uVar3 = (uint)!bVar4;
  }
  else if (cVar1 == '\x02') {
    uVar3 = *(uint *)(param_2 + 0x44);
  }
  else {
    if (cVar1 == '\x01') {
      bVar4 = *(int *)(param_2 + 0x44) == 0;
      goto LAB_148dc0d38;
    }
    uVar3 = 0;
  }
  if ((int)uVar3 < (int)uVar2) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0xdac) = uVar2;
LAB_148dc0d46:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc0d8a FUN_148dc0d8a body=170 status=ok
// SIG undefined FUN_148dc0d8a(void)

void FUN_148dc0d8a(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined1 auStack_88 [40];
  undefined1 local_60 [40];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1414ae1a9(local_60);
  cVar1 = FUN_14493b798(param_2,local_60);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (cVar1 == '\0') goto LAB_148dc0df2;
  uVar2 = FUN_145ae004e();
  cVar1 = *(char *)(param_2 + 0x38);
  if (cVar1 == '\x03') {
    bVar4 = *(longlong *)(param_2 + 0x3c) == 0;
LAB_148dc0de4:
    uVar3 = (uint)!bVar4;
  }
  else if (cVar1 == '\x02') {
    uVar3 = *(uint *)(param_2 + 0x44);
  }
  else {
    if (cVar1 == '\x01') {
      bVar4 = *(int *)(param_2 + 0x44) == 0;
      goto LAB_148dc0de4;
    }
    uVar3 = 0;
  }
  if ((int)uVar3 < (int)uVar2) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0xda8) = uVar2;
LAB_148dc0df2:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc0e36 FUN_148dc0e36 body=153 status=ok
// SIG undefined FUN_148dc0e36(void)

void FUN_148dc0e36(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = param_2[1];
  if (lVar4 == 0) {
    uVar3 = FUN_140b1c3dc();
    lVar4 = FUN_14477b664(uVar3);
    param_2[1] = lVar4;
  }
  lVar5 = param_2[2];
  if (((lVar5 != 0) || (lVar5 = 0, lVar4 == 0)) || (*param_2 == 0)) goto LAB_148dc0e6b;
  plVar1 = *(longlong **)(lVar4 + 0xb8);
  if (plVar1 == (longlong *)0x0) {
LAB_148dc0ecb:
    lVar5 = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
    if (cVar2 == '\0') goto LAB_148dc0ecb;
    uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar5 = FUN_144aff482(uVar3,param_2);
  }
  param_2[2] = lVar5;
LAB_148dc0e6b:
  FUN_1441fe432(param_1,lVar5,param_3,0);
  return;
}



// FUNCTION 148dc0ed0 FUN_148dc0ed0 body=141 status=ok
// SIG undefined FUN_148dc0ed0(void)

void FUN_148dc0ed0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = param_2[1];
  if (lVar4 == 0) {
    uVar3 = FUN_140b1c3dc();
    lVar4 = FUN_14477b664(uVar3);
    param_2[1] = lVar4;
  }
  lVar5 = param_2[2];
  if (((lVar5 != 0) || (lVar5 = 0, lVar4 == 0)) || (*param_2 == 0)) goto LAB_148dc0f47;
  plVar1 = *(longlong **)(lVar4 + 0xb8);
  if (plVar1 == (longlong *)0x0) {
LAB_148dc0f59:
    lVar5 = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
    if (cVar2 == '\0') goto LAB_148dc0f59;
    uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar5 = FUN_144aff482(uVar3,param_2);
  }
  param_2[2] = lVar5;
LAB_148dc0f47:
  FUN_1459489dc(param_1,lVar5,1);
  return;
}



// FUNCTION 148dc0fa8 FUN_148dc0fa8 body=42 status=ok
// SIG undefined FUN_148dc0fa8(void)

void FUN_148dc0fa8(longlong param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xda8) != param_2) {
    iVar1 = FUN_145ae004e();
    if (param_2 < iVar1) {
      iVar1 = param_2;
    }
    *(int *)(param_1 + 0xda8) = iVar1;
  }
  return;
}



// FUNCTION 148dc1002 FUN_148dc1002 body=91 status=ok
// SIG undefined FUN_148dc1002(void)

void FUN_148dc1002(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_14591febe(lVar1 + 0xe18,param_1 + 0xb30);
      return;
    }
  }
  return;
}



// FUNCTION 148dc105e FUN_148dc105e body=88 status=ok
// SIG undefined FUN_148dc105e(void)

undefined8 * FUN_148dc105e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_14474dad8(*param_1,*(undefined4 *)(param_1 + 2));
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x14) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_145de92b4(param_1,iVar1);
    FUN_14709b573(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148dc10cc FUN_148dc10cc body=228 status=ok
// SIG undefined FUN_148dc10cc(void)

void FUN_148dc10cc(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  
  iVar3 = FUN_14487fd02();
  if (((iVar3 != 3) &&
      (FUN_148dc11b0(param_1 + 0xe10,param_2,param_3),
      *(int *)(param_1 + 0xec8) != *(int *)(param_1 + 0xe20))) &&
     (*(int *)(param_1 + 0xe80) != *(int *)(param_1 + 0xeac))) {
    lVar1 = *param_2;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar5 = (uint)lVar1 & 0xffff;
    lVar4 = param_1 + 0xeb0;
    if (*(longlong *)(param_1 + 0xeb8) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xeb8);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0xec0) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0xe78) + (longlong)iVar3 * 0x10) == lVar1) {
          FUN_148c3cfb0(param_1,param_2,param_3);
          return;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0xe78) + 8);
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 148dc11b0 FUN_148dc11b0 body=466 status=ok
// SIG undefined FUN_148dc11b0(void)

void FUN_148dc11b0(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *_Str1;
  longlong *plVar5;
  wchar_t *_Str2;
  uint uVar6;
  longlong lVar7;
  undefined1 auStack_68 [36];
  int local_44;
  longlong *local_40;
  int *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[4] != *(int *)((longlong)param_1 + 0x4c)) {
    lVar4 = *param_2;
    uVar2 = (uint)((ulonglong)lVar4 >> 0x10);
    uVar6 = (uint)lVar4 & 0xffff;
    plVar5 = param_1 + 10;
    if ((longlong *)param_1[0xb] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[0xb];
    }
    iVar3 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)param_1[0xc] - 1U &
                    (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar6) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar5 = (longlong *)(param_1[3] + (longlong)iVar3 * 0x14);
        if (*plVar5 == lVar4) {
          if (plVar5 + 1 != (longlong *)0x0 && plVar5 != (longlong *)0x0) {
            local_44 = (int)plVar5[1];
            if (-1 < (longlong)local_44) {
              iVar3 = (int)param_1[1];
              if (iVar3 <= local_44) goto LAB_148dc11e4;
              lVar4 = (longlong)local_44 * 0x20;
              _Str1 = L"";
              _Str2 = L"";
              if (*(int *)(param_3 + 1) != 0) {
                _Str2 = (wchar_t *)*param_3;
              }
              lVar7 = *param_1 + lVar4;
              if (*(int *)(*param_1 + 0x10 + lVar4) != 0) {
                _Str1 = *(wchar_t **)(lVar7 + 8);
              }
              iVar3 = wcscmp(_Str1,_Str2);
              if (iVar3 == 0) goto LAB_148dc1266;
              goto LAB_148dc1240;
            }
          }
          break;
        }
        iVar3 = *(int *)((longlong)plVar5 + 0xc);
      } while (iVar3 != -1);
    }
  }
  iVar3 = (int)param_1[1];
LAB_148dc11e4:
  local_38 = &local_44;
  local_44 = iVar3;
  local_40 = param_2;
  FUN_140171856(param_1 + 3,local_2c,&local_40,0);
  iVar3 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
    FUN_148dc4074(param_1,iVar3);
  }
  lVar4 = *param_1;
  lVar7 = (longlong)iVar3 * 0x20;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar7);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + lVar7) = 0;
  ((undefined8 *)(lVar4 + lVar7))[1] = 0;
  *(longlong *)(lVar4 + lVar7) = *param_2;
  lVar7 = (longlong)local_44 * 0x20 + *param_1;
LAB_148dc1240:
  FUN_144a787a6(lVar7 + 8,param_3);
  iVar3 = (int)param_1[2] + 1;
  *(int *)(param_1 + 2) = iVar3;
  *(int *)(lVar7 + 0x18) = iVar3;
  FUN_1447f69b6(param_1 + 0x18);
LAB_148dc1266:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148dc1384 FUN_148dc1384 body=528 status=ok
// SIG undefined FUN_148dc1384(void)

void FUN_148dc1384(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined2 local_b0 [2];
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar3 = FUN_14487fd02();
  if (iVar3 != 3) {
    lVar1 = param_1 + 0xe10;
    FUN_1446f470e(&local_a8,L"proto_toast_header",1);
    FUN_148dc11b0(lVar1,&local_a8,param_2);
    FUN_1446f470e(&local_a8,L"proto_toast_message",1);
    FUN_148dc11b0(lVar1,&local_a8,param_3);
    FUN_1446f470e(&local_a8,L"proto_toast_style",1);
    FUN_148dc11b0(lVar1,&local_a8,param_4);
    uVar4 = FUN_1401b4c98(param_1);
    local_c0 = (undefined8 *)0x0;
    local_b8 = 0;
    FUN_1446efa72(&local_c0,0,3,0x10);
    puVar2 = local_c0;
    local_b8 = 3;
    *local_c0 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_c0[2] = lVar5;
    *local_c0 = &PTR_FUN_14b996d00;
    local_c0[3] = 0;
    FUN_14485c47a(local_c0 + 3,param_1);
    *(undefined4 *)(puVar2 + 5) = 0;
    puVar2[4] = FUN_148dc1596;
    local_a8 = 0;
    local_a0 = 0;
    FUN_14487d8d8(&local_a8,&local_c0);
    local_68 = 1;
    local_c8 = local_b0;
    local_b0[0] = 0;
    local_ac = 0xbf800000;
    FUN_1406f4044(uVar4,param_1 + 0xee8,&local_a8,param_5);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
    FUN_1449db362(&local_c0);
  }
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc1596 FUN_148dc1596 body=289 status=ok
// SIG undefined FUN_148dc1596(void)

void FUN_148dc1596(longlong param_1)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1 = param_1 + 0xe10;
  FUN_140056680(local_30,&DAT_149dfb77a);
  FUN_1446f470e(local_38,L"proto_toast_header",1);
  FUN_148dc11b0(param_1,local_38,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_30,&DAT_149dfb77a);
  FUN_1446f470e(local_38,L"proto_toast_message",1);
  FUN_148dc11b0(param_1,local_38,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_30,&DAT_149dfb77a);
  FUN_1446f470e(local_38,L"proto_toast_style",1);
  FUN_148dc11b0(param_1,local_38,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  FUN_148dc16b8(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc16b8 FUN_148dc16b8 body=188 status=ok
// SIG undefined FUN_148dc16b8(void)

void FUN_148dc16b8(longlong *param_1)

{
  int iVar1;
  undefined1 auStack_78 [44];
  int local_4c;
  longlong local_48;
  int *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_4c = 0;
  iVar1 = (int)param_1[1];
  if (0 < iVar1) {
    do {
      if (*(uint *)((longlong)param_1 + 0x14) <
          *(uint *)(*param_1 + 0x18 + (longlong)local_4c * 0x20)) {
        local_48 = *param_1 + (longlong)local_4c * 0x20;
        local_40 = &local_4c;
        FUN_140171856(param_1 + 3,local_34,&local_48,0);
        iVar1 = (int)param_1[1];
      }
      local_4c = local_4c + 1;
    } while (local_4c < iVar1);
  }
  *(int *)((longlong)param_1 + 0x14) = (int)param_1[2];
  FUN_1447f69b6(param_1 + 0x18);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc1776 FUN_148dc1776 body=12 status=ok
// SIG undefined FUN_148dc1776(void)

void FUN_148dc1776(longlong param_1)

{
  FUN_148dc1782(param_1 + 0xe10);
  return;
}



// FUNCTION 148dc1782 FUN_148dc1782 body=223 status=ok
// SIG undefined FUN_148dc1782(void)

undefined4 FUN_148dc1782(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if ((int)param_1[4] != *(int *)((longlong)param_1 + 0x4c)) {
    lVar3 = *param_2;
    uVar1 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar4 = (uint)lVar3 & 0xffff;
    plVar2 = param_1 + 10;
    if ((longlong *)param_1[0xb] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[0xb];
    }
    iVar5 = *(int *)((longlong)plVar2 +
                    (ulonglong)
                    ((int)param_1[0xc] - 1U &
                    (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar4) +
                    (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar2 = (longlong *)(param_1[3] + (longlong)iVar5 * 0x14);
        if (*plVar2 == lVar3) {
          if (plVar2 + 1 == (longlong *)0x0 || plVar2 == (longlong *)0x0) {
            return 0;
          }
          iVar5 = (int)plVar2[1];
          if ((longlong)iVar5 < 0) {
            return 0;
          }
          if (iVar5 < (int)param_1[1]) {
            lVar3 = (longlong)iVar5 * 0x20;
            iVar5 = *(int *)(*param_1 + 0x10 + lVar3);
            iVar6 = iVar5 + -1;
            if (iVar5 == 0) {
              iVar6 = 0;
            }
            FUN_1402980a2(param_3,*(undefined8 *)(*param_1 + 8 + lVar3),iVar6);
            return 1;
          }
          return 0;
        }
        iVar5 = *(int *)((longlong)plVar2 + 0xc);
      } while (iVar5 != -1);
    }
  }
  return 0;
}



// FUNCTION 148dc1862 FUN_148dc1862 body=69 status=ok
// SIG undefined FUN_148dc1862(void)

void FUN_148dc1862(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [44];
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_144a13f80(param_1 + 0xe78,local_c,param_2,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc18a8 FUN_148dc18a8 body=15 status=ok
// SIG undefined FUN_148dc18a8(void)

void FUN_148dc18a8(longlong param_1,undefined8 *param_2)

{
  FUN_144a8b5fe(param_1 + 0xe78,*param_2);
  return;
}



// FUNCTION 148dc18ba FUN_148dc18ba body=316 status=ok
// SIG undefined FUN_148dc18ba(void)

void FUN_148dc18ba(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  
  FUN_148dc16b8(param_1 + 0xe10);
  if ((*(int *)(param_1 + 0xeac) < *(int *)(param_1 + 0xe80)) &&
     (iVar4 = *(int *)(param_1 + 0xe20), *(int *)(param_1 + 0xec8) != iVar4)) {
    iVar3 = *(int *)(param_1 + 0xe18);
    if (0 < iVar3) {
      lVar6 = 0;
      do {
        if ((*(uint *)(param_1 + 0xec8) <
             *(uint *)(*(longlong *)(param_1 + 0xe10) + 0x18 + lVar6 * 0x20)) &&
           (*(int *)(param_1 + 0xe80) != *(int *)(param_1 + 0xeac))) {
          plVar5 = (longlong *)(*(longlong *)(param_1 + 0xe10) + lVar6 * 0x20);
          lVar1 = *plVar5;
          uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
          uVar8 = (uint)lVar1 & 0xffff;
          lVar7 = *(longlong *)(param_1 + 0xeb8);
          if (*(longlong *)(param_1 + 0xeb8) == 0) {
            lVar7 = param_1 + 0xeb0;
          }
          iVar4 = *(int *)(lVar7 + (ulonglong)
                                   (*(int *)(param_1 + 0xec0) - 1U &
                                   (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar8) +
                                   (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) * 4);
          if (iVar4 != -1) {
            do {
              if (*(longlong *)(*(longlong *)(param_1 + 0xe78) + (longlong)iVar4 * 0x10) == lVar1) {
                FUN_148c3cfb0(param_1,plVar5,plVar5 + 1);
                iVar3 = *(int *)(param_1 + 0xe18);
                break;
              }
              iVar4 = *(int *)((longlong)iVar4 * 0x10 + *(longlong *)(param_1 + 0xe78) + 8);
            } while (iVar4 != -1);
          }
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar3);
      iVar4 = *(int *)(param_1 + 0xe20);
    }
    *(int *)(param_1 + 0xec8) = iVar4;
  }
  return;
}



// FUNCTION 148dc19f6 FUN_148dc19f6 body=50 status=ok
// SIG undefined FUN_148dc19f6(void)

void FUN_148dc19f6(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_14041a931();
  if (plVar1 != (longlong *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
    FUN_143d1cb76(uVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 148dc1a28 FUN_148dc1a28 body=67 status=ok
// SIG undefined FUN_148dc1a28(void)

void FUN_148dc1a28(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_14041a931();
  if (plVar1 != (longlong *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
    FUN_143d1cd44(uVar2,param_1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 148dc1a6c FUN_148dc1a6c body=114 status=ok
// SIG undefined FUN_148dc1a6c(void)

longlong FUN_148dc1a6c(void)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = FUN_14088c018();
  FUN_1470b17c9(&local_18,3,*(undefined4 *)(lVar1 + 0x80),0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return (longlong)ROUND((double)local_18 / 10000000.0 + (double)local_18 / 10000000.0 + 0.5) >> 1
    ;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc1ae0 FUN_148dc1ae0 body=267 status=ok
// SIG undefined FUN_148dc1ae0(void)

void FUN_148dc1ae0(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    FUN_140ff3baa(param_2,&local_30);
    lVar4 = *(longlong *)(param_1 + 0x1300);
    iVar3 = *(int *)(param_1 + 0x1308);
    lVar6 = (longlong)iVar3;
    if (lVar6 != 0) {
      lVar5 = 0;
      do {
        if (*(longlong *)(lVar4 + lVar5) == local_30) {
          iVar7 = (int)(lVar5 >> 3) * -0x55555555;
          if (iVar7 != -1) {
            lVar6 = (longlong)iVar7;
            goto LAB_148dc1b79;
          }
          break;
        }
        lVar5 = lVar5 + 0x18;
      } while (lVar6 * 0x18 != lVar5);
    }
    plVar1 = (longlong *)(param_1 + 0x1300);
    *(uint *)(param_1 + 0x1308) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x130c) < iVar3 + 1U) {
      FUN_146252d9a(plVar1,iVar3);
      lVar4 = *plVar1;
    }
    puVar2 = (undefined8 *)(lVar4 + lVar6 * 0x18);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined8 *)(lVar4 + 0x10 + lVar6 * 0x18) = 0;
    lVar4 = *plVar1;
LAB_148dc1b79:
    plVar1 = (longlong *)(lVar4 + lVar6 * 0x18);
    *plVar1 = local_30;
    FUN_1488b0ef0(plVar1 + 1,param_3,1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc1bec FUN_148dc1bec body=175 status=ok
// SIG undefined FUN_148dc1bec(void)

undefined8 FUN_148dc1bec(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    FUN_140ff3baa(param_2,&local_20);
    if ((longlong)*(int *)(param_1 + 0x1308) != 0) {
      lVar2 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x1300) + lVar2) == local_20) {
          iVar3 = (int)(lVar2 >> 3) * -0x55555555;
          if (iVar3 != -1) {
            uVar1 = FUN_1488b0e9e(*(longlong *)(param_1 + 0x1300) + (longlong)iVar3 * 0x18 + 8,
                                  param_3);
            goto LAB_148dc1c4f;
          }
          break;
        }
        lVar2 = lVar2 + 0x18;
      } while ((longlong)*(int *)(param_1 + 0x1308) * 0x18 != lVar2);
    }
  }
  uVar1 = 0;
LAB_148dc1c4f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc1c9c FUN_148dc1c9c body=186 status=ok
// SIG undefined FUN_148dc1c9c(void)

longlong FUN_148dc1c9c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x1300);
  iVar2 = *(int *)(param_1 + 0x1308);
  lVar5 = (longlong)iVar2;
  if (lVar5 != 0) {
    lVar4 = 0;
    do {
      if (*(longlong *)(lVar3 + lVar4) == *param_2) {
        iVar6 = (int)(lVar4 >> 3) * -0x55555555;
        if (iVar6 != -1) {
          lVar5 = (longlong)iVar6;
          goto LAB_148dc1d1a;
        }
        break;
      }
      lVar4 = lVar4 + 0x18;
    } while (lVar5 * 0x18 != lVar4);
  }
  plVar1 = (longlong *)(param_1 + 0x1300);
  *(uint *)(param_1 + 0x1308) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x130c) < iVar2 + 1U) {
    FUN_146252d9a(plVar1,iVar2);
    lVar3 = *plVar1;
  }
  lVar4 = lVar5 * 0x18;
  *(undefined8 *)(lVar3 + lVar4) = 0;
  ((undefined8 *)(lVar3 + lVar4))[1] = 0;
  *(undefined8 *)(lVar3 + 0x10 + lVar4) = 0;
  *(longlong *)(*plVar1 + lVar4) = *param_2;
  lVar3 = *plVar1;
LAB_148dc1d1a:
  return lVar3 + lVar5 * 0x18;
}



// FUNCTION 148dc1d56 FUN_148dc1d56 body=203 status=ok
// SIG undefined FUN_148dc1d56(void)

ulonglong FUN_148dc1d56(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  undefined7 uVar7;
  ulonglong uVar6;
  bool bVar8;
  
  plVar2 = (longlong *)FUN_1403ca102();
  if (plVar2 == (longlong *)0x0) {
    bVar8 = false;
    uVar7 = 0;
  }
  else {
    if (*(code **)(*plVar2 + 0x498) == (code *)&LAB_14015c36e) {
      cVar1 = (char)plVar2[0x42];
    }
    else {
      cVar1 = (**(code **)(*plVar2 + 0x498))(plVar2);
    }
    lVar3 = FUN_140d27a2a(plVar2);
    bVar8 = cVar1 == '\b' && *(char *)(lVar3 + 0xb0) == '\0';
    uVar7 = (undefined7)((ulonglong)plVar2 >> 8);
  }
  lVar3 = FUN_1401b2ade(param_1);
  bVar5 = 1;
  if (lVar3 != 0) {
    lVar4 = FUN_144a5dd5e();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      bVar5 = *(byte *)(lVar3 + 0x23bd) ^ 1;
    }
  }
  cVar1 = FUN_148931df6(param_1,param_2);
  if (cVar1 == '\0') {
    uVar6 = 0;
  }
  else {
    uVar6 = CONCAT71(uVar7,bVar8 & (bVar5 | (byte)param_2));
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 148dc1e22 FUN_148dc1e22 body=91 status=ok
// SIG undefined FUN_148dc1e22(void)

void FUN_148dc1e22(longlong *param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x10))();
  *(undefined1 *)(lVar1 + 0x20) = 1;
  if (param_2 != 0) {
    lVar1 = FUN_144a7b4ca();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_148c3d472(param_2,param_3,param_4);
      return;
    }
  }
  return;
}



// FUNCTION 148dc1e7e FUN_148dc1e7e body=123 status=ok
// SIG undefined FUN_148dc1e7e(void)

void FUN_148dc1e7e(longlong param_1)

{
  FUN_145ac041a();
  FUN_14581c4f8(param_1);
  if (*(longlong *)(param_1 + 0x2430) != 0) {
    *(undefined8 *)(param_1 + 0x2440) = 0;
  }
  *(undefined8 *)(param_1 + 0x2430) = 0;
  if (*(longlong *)(param_1 + 0x2448) != 0) {
    *(undefined8 *)(param_1 + 0x2458) = 0;
  }
  *(undefined8 *)(param_1 + 0x2448) = 0;
  if (*(longlong *)(param_1 + 0x2370) != 0) {
    *(undefined8 *)(param_1 + 0x2380) = 0;
  }
  *(undefined8 *)(param_1 + 0x2370) = 0;
  return;
}



// FUNCTION 148dc1efa FUN_148dc1efa body=31 status=ok
// SIG undefined FUN_148dc1efa(void)

void FUN_148dc1efa(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xf48) == 0) {
    return;
  }
  FUN_148cd2adc(*(longlong *)(param_1 + 0xf48) + 0x6ed0,2);
  return;
}



// FUNCTION 148dc1f14 FUN_148dc1f14 body=180 status=ok
// SIG undefined FUN_148dc1f14(void)

void FUN_148dc1f14(undefined8 param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar5 = FUN_1447210f0();
  FUN_1410d53f0(&local_30,uVar5);
  if (local_28 != (longlong *)0x0) {
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
    if (plVar6 != (longlong *)0x0) {
      if (local_30 != 0) {
        FUN_148e0b8dc(local_30,param_1,param_2);
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



// FUNCTION 148dc1fca FUN_148dc1fca body=27 status=ok
// SIG undefined FUN_148dc1fca(void)

undefined1 FUN_148dc1fca(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  return 1;
}



// FUNCTION 148dc1fe6 FUN_148dc1fe6 body=189 status=ok
// SIG undefined FUN_148dc1fe6(void)

void FUN_148dc1fe6(undefined8 param_1,longlong param_2)

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
  uVar5 = FUN_1447210f0();
  FUN_1410d53f0(&local_28,uVar5);
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
        FUN_146259a36(local_28,param_2);
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
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148dc20a4 FUN_148dc20a4 body=8 status=ok
// SIG undefined FUN_148dc20a4(void)

undefined8 FUN_148dc20a4(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x2268);
}



// FUNCTION 148dc20ac FUN_148dc20ac body=101 status=ok
// SIG undefined FUN_148dc20ac(void)

void FUN_148dc20ac(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(longlong *)(param_1 + 0x2268) = param_2;
  if (*(longlong *)(param_1 + 0x398) != 0) {
    lVar3 = FUN_144a7b4ca();
    lVar1 = *(longlong *)(param_1 + 0x398);
    if ((((lVar1 != 0) && (lVar3 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
      *(bool *)(lVar1 + 0x741) = param_2 != 0;
    }
  }
  return;
}



// FUNCTION 148dc2112 FUN_148dc2112 body=94 status=ok
// SIG undefined FUN_148dc2112(void)

undefined8 FUN_148dc2112(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x398) != 0) {
    lVar4 = FUN_144a7b4ca();
    lVar2 = *(longlong *)(param_1 + 0x398);
    if (lVar2 != 0) {
      if (lVar4 == 0) {
        return 0;
      }
      lVar3 = *(longlong *)(lVar2 + 0x10);
      if (lVar3 == 0) {
        return 0;
      }
      iVar1 = *(int *)(lVar4 + 0x38);
      if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) == lVar4 + 0x30)) {
        return CONCAT71((int7)(int3)((uint)iVar1 >> 8),*(undefined1 *)(lVar2 + 0x6b4));
      }
    }
  }
  return 0;
}



// FUNCTION 148dc2170 FUN_148dc2170 body=86 status=ok
// SIG undefined FUN_148dc2170(void)

void FUN_148dc2170(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x398) != 0) {
    lVar3 = FUN_144a7b4ca();
    lVar1 = *(longlong *)(param_1 + 0x398);
    if ((((lVar1 != 0) && (lVar3 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
      *(undefined1 *)(lVar1 + 0x6b4) = 1;
    }
  }
  return;
}



// FUNCTION 148dc21c6 FUN_148dc21c6 body=178 status=ok
// SIG undefined FUN_148dc21c6(void)

void FUN_148dc21c6(undefined8 param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar5 = FUN_1447210f0();
  if ((lVar5 != 0) && (FUN_1410d53f0(&local_28,lVar5), local_20 != (longlong *)0x0)) {
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
        FUN_148e0b5aa(local_28,param_1);
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148dc228e FUN_148dc228e body=410 status=ok
// SIG undefined FUN_148dc228e(void)

void FUN_148dc228e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  char cVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  longlong local_c0;
  undefined1 local_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98;
  longlong *local_90 [8];
  longlong local_50;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined8 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(char *)(param_1 + 0x2270) == '\x01') && (lVar5 = FUN_1402a1246(), lVar5 != 0)) {
    cVar7 = *(char *)(lVar5 + 0x740);
    if (cVar7 == '\0') {
      cVar7 = '\x01';
    }
    else if (cVar7 == '\x01') {
      cVar7 = '\0';
    }
    FUN_148dc24ea(lVar5,cVar7);
    if (((*(char *)(lVar5 + 0x740) == '\x01') && (*(char *)(param_1 + 0x2270) == '\x01')) &&
       ((byte)(*(char *)(param_1 + 0x22ca) - 3U) < 2)) {
      uVar6 = FUN_1447210f0(param_1);
      FUN_1410d53f0(&local_98,uVar6);
      if (local_90[0] != (longlong *)0x0) {
        iVar4 = (int)local_90[0][1];
        do {
          if (iVar4 == 0) {
            plVar8 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar3 = (int)local_90[0][1];
          bVar9 = iVar4 == iVar3;
          if (bVar9) {
            *(int *)(local_90[0] + 1) = iVar4 + 1;
            iVar3 = iVar4;
          }
          iVar4 = iVar3;
          UNLOCK();
          plVar8 = local_90[0];
        } while (!bVar9);
        LOCK();
        piVar1 = (int *)((longlong)local_90[0] + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_90[0] + 0x10))();
        }
        if (plVar8 != (longlong *)0x0) {
          if (local_98 != 0) {
            FUN_148dc242a(&local_98,(char *)(param_1 + 0x2270));
            FUN_146259a36(local_98,&DAT_14c9485f0);
            local_c8 = &local_a8;
            local_a8 = local_3c;
            local_a0 = local_34;
            local_b8 = local_3e;
            local_c0 = param_1;
            FUN_144231904(local_98,local_90,local_3d,0);
            if (local_50 != 0) {
              FUN_1400020a8();
            }
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
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148dc242a FUN_148dc242a body=110 status=ok
// SIG undefined FUN_148dc242a(void)

undefined1 * FUN_148dc242a(undefined1 *param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = 0;
  lVar1 = *(longlong *)(param_2 + 0x20);
  *(longlong *)(param_1 + 0x20) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  FUN_1447a97f4(param_1 + 0x30,param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  return param_1;
}



// FUNCTION 148dc2498 FUN_148dc2498 body=80 status=ok
// SIG undefined FUN_148dc2498(void)

void FUN_148dc2498(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if (param_3 == '\0') {
    FUN_1400bc8c2(param_1 + 0xed8,&local_10);
  }
  else {
    FUN_1400bc96c();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc24ea FUN_148dc24ea body=65 status=ok
// SIG undefined FUN_148dc24ea(void)

void FUN_148dc24ea(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x740) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x740) = param_2;
  if (*(char *)(param_1 + 0x178) != '\x03') {
    FUN_148c3d878(param_1);
  }
  FUN_148dc42d8(param_1 + 0x6f8,param_1);
  return;
}



// FUNCTION 148dc2546 FUN_148dc2546 body=284 status=ok
// SIG undefined FUN_148dc2546(void)

void FUN_148dc2546(void)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_40 [3];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbd08c8 == 0) {
    local_58 = 0;
    uStack_50 = 0;
    local_68 = &DAT_14c872bc8;
    FUN_1449da20c(DAT_14c872ce0,L"PlayerProxyExtender",L"PlayerProxyDefinition",&local_58);
    iVar1 = (int)uStack_50 + -1;
    if ((int)uStack_50 == 0) {
      iVar1 = 0;
    }
    FUN_1446f82e2(local_40,iVar1,local_58,1);
    DAT_14cbd08c8 = local_40[0];
    FUN_14000bbd8(local_40,&local_58,0);
    FUN_1404e49fa(&DAT_14cbd08a0,local_40);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if (DAT_14cbd08d0 == 0) {
    lVar2 = FUN_1414dbae2();
    if (lVar2 != 0) {
      DAT_14cbd08d0 = thunk_FUN_144837462(lVar2,&DAT_14cbd08a0);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc2664 FUN_148dc2664 body=36 status=ok
// SIG undefined FUN_148dc2664(void)

void FUN_148dc2664(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_148dc2688();
  if (cVar1 == '\0') {
    return;
  }
  FUN_148dc26e4(param_1);
  return;
}



// FUNCTION 148dc2688 FUN_148dc2688 body=91 status=ok
// SIG undefined FUN_148dc2688(void)

undefined8 FUN_148dc2688(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  FUN_148dc2546();
  uVar3 = 0;
  if ((param_1 != 0) && (DAT_14cbd08c8 != 0)) {
    cVar1 = FUN_144729dda(&DAT_14cbd08d8);
    if ((cVar1 != '\0') && (lVar2 = FUN_14479d2ce(&DAT_14cbd08d8), lVar2 == param_1)) {
      return 0;
    }
    uVar3 = CONCAT71((int7)((ulonglong)*param_2 >> 8),*param_2 == DAT_14cbd08c8);
  }
  return uVar3;
}



// FUNCTION 148dc26e4 FUN_148dc26e4 body=188 status=ok
// SIG undefined FUN_148dc26e4(void)

void FUN_148dc26e4(longlong *param_1)

{
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined1 local_d0;
  undefined1 local_c8;
  longlong local_b8 [3];
  undefined1 local_a0 [128];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_1 != (longlong *)0x0) {
    local_b8[0] = 0;
    local_b8[1] = 0;
    local_c8 = 0;
    local_d0 = 0;
    local_d8 = 0;
    FUN_14689c554(local_a0,local_b8,0,0);
    FUN_14689c76a(local_a0,param_1,0,0);
    FUN_144757f48(param_1,0x800040);
    *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 2;
    (**(code **)(*param_1 + 0x5c8))(param_1,0);
    FUN_14689c70e(local_a0);
    if (local_b8[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc27ac FUN_148dc27ac body=32 status=ok
// SIG undefined FUN_148dc27ac(void)

undefined8 FUN_148dc27ac(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FRecentDamagePostCameraUpdateTickFunction");
  return param_2;
}



// FUNCTION 148dc27cc FUN_148dc27cc body=38 status=ok
// SIG undefined FUN_148dc27cc(void)

undefined8 FUN_148dc27cc(undefined8 param_1,int param_2)

{
  FUN_145a46a5a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dc27f2 FUN_148dc27f2 body=38 status=ok
// SIG undefined FUN_148dc27f2(void)

undefined8 FUN_148dc27f2(undefined8 param_1,int param_2)

{
  FUN_142b2c07c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dc2818 FUN_148dc2818 body=114 status=ok
// SIG undefined FUN_148dc2818(void)

void FUN_148dc2818(longlong *param_1,int param_2)

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



// FUNCTION 148dc288a FUN_148dc288a body=147 status=ok
// SIG undefined FUN_148dc288a(void)

void FUN_148dc288a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148dc291e FUN_148dc291e body=52 status=ok
// SIG undefined FUN_148dc291e(void)

void FUN_148dc291e(longlong *param_1)

{
  FUN_148dc2952();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148dc2952 FUN_148dc2952 body=320 status=ok
// SIG undefined FUN_148dc2952(void)

void FUN_148dc2952(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
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
      plVar3 = *(longlong **)(*local_68 + 0x10 + (longlong)iStack_4c * 0x38);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc2a94 FUN_148dc2a94 body=62 status=ok
// SIG undefined FUN_148dc2a94(void)

void FUN_148dc2a94(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148dc2ad2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 148dc2ad2 FUN_148dc2ad2 body=93 status=ok
// SIG undefined FUN_148dc2ad2(void)

ulonglong FUN_148dc2ad2(uint param_1,uint param_2)

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



// FUNCTION 148dc2b30 FUN_148dc2b30 body=31 status=ok
// SIG undefined FUN_148dc2b30(void)

undefined8 FUN_148dc2b30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dc2b68 FUN_148dc2b68 body=101 status=ok
// SIG undefined FUN_148dc2b68(void)

void FUN_148dc2b68(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b996660;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9965f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dc2bce FUN_148dc2bce body=101 status=ok
// SIG undefined FUN_148dc2bce(void)

void FUN_148dc2bce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b996660;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9965f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dc2c34 FUN_148dc2c34 body=134 status=ok
// SIG undefined FUN_148dc2c34(void)

void FUN_148dc2c34(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b996660;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9965f0;
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
                    /* WARNING: Could not recover jumptable at 0x000148dc2cab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dc2cce FUN_148dc2cce body=31 status=ok
// SIG undefined FUN_148dc2cce(void)

undefined8 FUN_148dc2cce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dc2d0a FUN_148dc2d0a body=101 status=ok
// SIG undefined FUN_148dc2d0a(void)

void FUN_148dc2d0a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9966d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dc2d70 FUN_148dc2d70 body=101 status=ok
// SIG undefined FUN_148dc2d70(void)

void FUN_148dc2d70(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9966d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dc2dd6 FUN_148dc2dd6 body=134 status=ok
// SIG undefined FUN_148dc2dd6(void)

void FUN_148dc2dd6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ef0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9966d0;
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
                    /* WARNING: Could not recover jumptable at 0x000148dc2e4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dc2e6e FUN_148dc2e6e body=83 status=ok
// SIG undefined FUN_148dc2e6e(void)

undefined8 * FUN_148dc2e6e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a184350;
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



// FUNCTION 148dc2ec2 FUN_148dc2ec2 body=83 status=ok
// SIG undefined FUN_148dc2ec2(void)

undefined8 * FUN_148dc2ec2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a184350;
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



// FUNCTION 148dc2f16 FUN_148dc2f16 body=31 status=ok
// SIG undefined FUN_148dc2f16(void)

undefined8 FUN_148dc2f16(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dc2f52 FUN_148dc2f52 body=101 status=ok
// SIG undefined FUN_148dc2f52(void)

void FUN_148dc2f52(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b419d50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b996790;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dc2fb8 FUN_148dc2fb8 body=101 status=ok
// SIG undefined FUN_148dc2fb8(void)

void FUN_148dc2fb8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b419d50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b996790;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dc301e FUN_148dc301e body=134 status=ok
// SIG undefined FUN_148dc301e(void)

void FUN_148dc301e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b419d50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b996790;
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
                    /* WARNING: Could not recover jumptable at 0x000148dc3095. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dc30b6 FUN_148dc30b6 body=31 status=ok
// SIG undefined FUN_148dc30b6(void)

undefined8 FUN_148dc30b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dc30f2 FUN_148dc30f2 body=101 status=ok
// SIG undefined FUN_148dc30f2(void)

void FUN_148dc30f2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c7440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b996800;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dc3158 FUN_148dc3158 body=101 status=ok
// SIG undefined FUN_148dc3158(void)

void FUN_148dc3158(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c7440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b996800;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dc31be FUN_148dc31be body=134 status=ok
// SIG undefined FUN_148dc31be(void)

void FUN_148dc31be(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c7440;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b996800;
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
                    /* WARNING: Could not recover jumptable at 0x000148dc3235. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dc3256 FUN_148dc3256 body=127 status=ok
// SIG undefined FUN_148dc3256(void)

void FUN_148dc3256(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x68);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x6c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x18,0);
      iVar4 = (int)(uVar3 / 0x18);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x6c) = iVar5;
    FUN_148dc32d6(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148dc32d6 FUN_148dc32d6 body=140 status=ok
// SIG undefined FUN_148dc32d6(void)

void FUN_148dc32d6(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x60);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x60,0,param_3,0x18);
    memmove(*(void **)((longlong)param_1 + 0x60),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x60,param_2,param_3,0x18);
  return;
}



// FUNCTION 148dc3362 FUN_148dc3362 body=111 status=ok
// SIG undefined FUN_148dc3362(void)

void FUN_148dc3362(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x68,8);
    iVar2 = (int)(uVar1 / 0x68);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x68,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148dc33d1 FUN_148dc33d1 body=52 status=ok
// SIG undefined FUN_148dc33d1(void)

void FUN_148dc33d1(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1415c753c(param_1,param_2);
    param_1 = param_1 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return;
}



// FUNCTION 148dc3406 FUN_148dc3406 body=31 status=ok
// SIG undefined FUN_148dc3406(void)

undefined8 FUN_148dc3406(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dc3440 FUN_148dc3440 body=101 status=ok
// SIG undefined FUN_148dc3440(void)

void FUN_148dc3440(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ecf50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9968e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dc34a6 FUN_148dc34a6 body=101 status=ok
// SIG undefined FUN_148dc34a6(void)

void FUN_148dc34a6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ecf50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9968e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dc350c FUN_148dc350c body=134 status=ok
// SIG undefined FUN_148dc350c(void)

void FUN_148dc350c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3ecf50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9968e0;
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
                    /* WARNING: Could not recover jumptable at 0x000148dc3583. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dc3592 FUN_148dc3592 body=52 status=ok
// SIG undefined FUN_148dc3592(void)

void FUN_148dc3592(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148dc35c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148dc35c6 FUN_148dc35c6 body=31 status=ok
// SIG undefined FUN_148dc35c6(void)

undefined8 FUN_148dc35c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dc3600 FUN_148dc3600 body=29 status=ok
// SIG undefined FUN_148dc3600(void)

bool FUN_148dc3600(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148dc361e FUN_148dc361e body=26 status=ok
// SIG undefined FUN_148dc361e(void)

bool FUN_148dc361e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148dc3638 FUN_148dc3638 body=101 status=ok
// SIG undefined FUN_148dc3638(void)

void FUN_148dc3638(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b996970;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dc369e FUN_148dc369e body=101 status=ok
// SIG undefined FUN_148dc369e(void)

void FUN_148dc369e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b996970;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dc3704 FUN_148dc3704 body=134 status=ok
// SIG undefined FUN_148dc3704(void)

void FUN_148dc3704(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8700;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b996970;
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
                    /* WARNING: Could not recover jumptable at 0x000148dc377b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dc378a FUN_148dc378a body=68 status=ok
// SIG undefined FUN_148dc378a(void)

void FUN_148dc378a(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148dc37cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3);
  return;
}



// FUNCTION 148dc37ce FUN_148dc37ce body=31 status=ok
// SIG undefined FUN_148dc37ce(void)

undefined8 FUN_148dc37ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dc3808 FUN_148dc3808 body=29 status=ok
// SIG undefined FUN_148dc3808(void)

bool FUN_148dc3808(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148dc3826 FUN_148dc3826 body=26 status=ok
// SIG undefined FUN_148dc3826(void)

bool FUN_148dc3826(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148dc3840 FUN_148dc3840 body=101 status=ok
// SIG undefined FUN_148dc3840(void)

void FUN_148dc3840(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ca0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b996ab0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dc38a6 FUN_148dc38a6 body=134 status=ok
// SIG undefined FUN_148dc38a6(void)

void FUN_148dc38a6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ca0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b996ab0;
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
                    /* WARNING: Could not recover jumptable at 0x000148dc391d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dc392c FUN_148dc392c body=62 status=ok
// SIG undefined FUN_148dc392c(void)

void FUN_148dc392c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148dc3967. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148dc396a FUN_148dc396a body=96 status=ok
// SIG undefined FUN_148dc396a(void)

void FUN_148dc396a(longlong param_1,int param_2)

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



// FUNCTION 148dc39e4 FUN_148dc39e4 body=29 status=ok
// SIG undefined FUN_148dc39e4(void)

bool FUN_148dc39e4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148dc3a02 FUN_148dc3a02 body=26 status=ok
// SIG undefined FUN_148dc3a02(void)

bool FUN_148dc3a02(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148dc3a1c FUN_148dc3a1c body=101 status=ok
// SIG undefined FUN_148dc3a1c(void)

void FUN_148dc3a1c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b996b90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dc3a82 FUN_148dc3a82 body=134 status=ok
// SIG undefined FUN_148dc3a82(void)

void FUN_148dc3a82(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b996b90;
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
                    /* WARNING: Could not recover jumptable at 0x000148dc3af9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dc3b08 FUN_148dc3b08 body=68 status=ok
// SIG undefined FUN_148dc3b08(void)

void FUN_148dc3b08(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148dc3b49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148dc3b4c FUN_148dc3b4c body=183 status=ok
// SIG undefined FUN_148dc3b4c(void)

bool FUN_148dc3b4c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_48,0);
    lVar3 = local_48;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc3c04 FUN_148dc3c04 body=31 status=ok
// SIG undefined FUN_148dc3c04(void)

undefined8 FUN_148dc3c04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dc3c3e FUN_148dc3c3e body=29 status=ok
// SIG undefined FUN_148dc3c3e(void)

bool FUN_148dc3c3e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148dc3c5c FUN_148dc3c5c body=26 status=ok
// SIG undefined FUN_148dc3c5c(void)

bool FUN_148dc3c5c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148dc3c76 FUN_148dc3c76 body=101 status=ok
// SIG undefined FUN_148dc3c76(void)

void FUN_148dc3c76(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b996c70;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b996c00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dc3cdc FUN_148dc3cdc body=134 status=ok
// SIG undefined FUN_148dc3cdc(void)

void FUN_148dc3cdc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  _LIST_ENTRY *p_Var6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b996c70;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14b996c00;
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
                    /* WARNING: Could not recover jumptable at 0x000148dc3d53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dc3d62 FUN_148dc3d62 body=74 status=ok
// SIG undefined FUN_148dc3d62(void)

void FUN_148dc3d62(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4,*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 148dc3dae FUN_148dc3dae body=48 status=ok
// SIG undefined FUN_148dc3dae(void)

void FUN_148dc3dae(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x60,8);
  }
  return;
}



// FUNCTION 148dc3dde FUN_148dc3dde body=29 status=ok
// SIG undefined FUN_148dc3dde(void)

undefined8 FUN_148dc3dde(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dc3e16 FUN_148dc3e16 body=29 status=ok
// SIG undefined FUN_148dc3e16(void)

bool FUN_148dc3e16(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148dc3e34 FUN_148dc3e34 body=26 status=ok
// SIG undefined FUN_148dc3e34(void)

bool FUN_148dc3e34(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148dc3e4e FUN_148dc3e4e body=24 status=ok
// SIG undefined FUN_148dc3e4e(void)

bool FUN_148dc3e4e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148dc3e66 FUN_148dc3e66 body=101 status=ok
// SIG undefined FUN_148dc3e66(void)

void FUN_148dc3e66(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b996d00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dc3ecc FUN_148dc3ecc body=101 status=ok
// SIG undefined FUN_148dc3ecc(void)

void FUN_148dc3ecc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b996d00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dc3f32 FUN_148dc3f32 body=134 status=ok
// SIG undefined FUN_148dc3f32(void)

void FUN_148dc3f32(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b996d00;
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
                    /* WARNING: Could not recover jumptable at 0x000148dc3fa9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dc3fb8 FUN_148dc3fb8 body=39 status=ok
// SIG undefined FUN_148dc3fb8(void)

void FUN_148dc3fb8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148dc3fdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148dc3fe0 FUN_148dc3fe0 body=146 status=ok
// SIG undefined FUN_148dc3fe0(void)

bool FUN_148dc3fe0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc4074 FUN_148dc4074 body=132 status=ok
// SIG undefined FUN_148dc4074(void)

void FUN_148dc4074(longlong param_1,int param_2)

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



// FUNCTION 148dc40fa FUN_148dc40fa body=31 status=ok
// SIG undefined FUN_148dc40fa(void)

undefined8 FUN_148dc40fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148dc4120 FUN_148dc4120 body=29 status=ok
// SIG undefined FUN_148dc4120(void)

bool FUN_148dc4120(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148dc413e FUN_148dc413e body=26 status=ok
// SIG undefined FUN_148dc413e(void)

bool FUN_148dc413e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148dc4158 FUN_148dc4158 body=101 status=ok
// SIG undefined FUN_148dc4158(void)

void FUN_148dc4158(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b996eb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148dc41be FUN_148dc41be body=134 status=ok
// SIG undefined FUN_148dc41be(void)

void FUN_148dc41be(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b996eb0;
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
                    /* WARNING: Could not recover jumptable at 0x000148dc4235. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148dc4244 FUN_148dc4244 body=146 status=ok
// SIG undefined FUN_148dc4244(void)

bool FUN_148dc4244(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc42d8 FUN_148dc42d8 body=164 status=ok
// SIG undefined FUN_148dc42d8(void)

void FUN_148dc42d8(longlong *param_1,undefined8 param_2)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_148dc4358;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148dc4358:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148dc437c FUN_148dc437c body=89 status=ok
// SIG undefined FUN_148dc437c(void)

void FUN_148dc437c(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_14147687a(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 148dc43d6 FUN_148dc43d6 body=62 status=ok
// SIG undefined FUN_148dc43d6(void)

void FUN_148dc43d6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148dc4414(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 148dc4414 FUN_148dc4414 body=93 status=ok
// SIG undefined FUN_148dc4414(void)

ulonglong FUN_148dc4414(uint param_1,uint param_2)

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



// FUNCTION 148dc4472 FUN_148dc4472 body=133 status=ok
// SIG undefined FUN_148dc4472(void)

longlong FUN_148dc4472(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_148dc44f8();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x70;
    if (lVar3 + lVar2 != 0) goto LAB_148dc44ab;
  }
  local_30 = param_3;
  FUN_148dc4622(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x70;
LAB_148dc44ab:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc44f8 FUN_148dc44f8 body=296 status=ok
// SIG undefined FUN_148dc44f8(void)

int FUN_148dc44f8(longlong *param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      lVar7 = *param_1;
      do {
        lVar10 = (longlong)iVar9 * 0x70;
        puVar1 = (undefined8 *)(lVar7 + lVar10);
        if (*(longlong *)(lVar7 + 8 + lVar10) == 0) {
          uVar6 = FUN_140067708();
          uVar6 = FUN_14477b664(uVar6);
          puVar1[1] = uVar6;
        }
        lVar7 = param_3[1];
        if (lVar7 == 0) {
          lVar7 = FUN_140067708();
        }
        uVar6 = *param_3;
        uVar8 = FUN_14477b664(lVar7);
        local_50 = uVar6;
        uVar3 = FUN_144a7891a(uVar8);
        local_58 = *puVar1;
        uVar6 = puVar1[1];
        uVar4 = FUN_144a7891a(uVar6);
        local_60 = &local_50;
        local_68 = uVar8;
        cVar2 = FUN_144a789b8(uVar4,uVar6,&local_58,uVar3);
        if (cVar2 != '\0') goto LAB_148dc4524;
        lVar7 = *param_1;
        iVar9 = *(int *)(lVar7 + 0x68 + lVar10);
      } while (iVar9 != -1);
    }
  }
  iVar9 = -1;
LAB_148dc4524:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar9;
}



// FUNCTION 148dc4622 FUN_148dc4622 body=272 status=ok
// SIG undefined FUN_148dc4622(void)

undefined4 * FUN_148dc4622(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_148dc4734(param_1,local_48);
  FUN_148dc489c(param_4,local_40);
  *(undefined4 *)(local_40 + 0x68) = 0xffffffff;
  cVar1 = FUN_148dc4816(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x6c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x68) =
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
      FUN_148dc4bb6(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc4734 FUN_148dc4734 body=226 status=ok
// SIG undefined FUN_148dc4734(void)

int * FUN_148dc4734(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_140275bcc(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x70);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x70) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x70 + *param_1;
  return param_2;
}



// FUNCTION 148dc4816 FUN_148dc4816 body=134 status=ok
// SIG undefined FUN_148dc4816(void)

undefined8 FUN_148dc4816(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar2 = FUN_148dc44f8(), iVar2 != -1)) {
    lVar1 = *param_1;
    lVar3 = (longlong)iVar2 * 0x70;
    *(undefined4 *)(lVar1 + 0x60 + lVar3) = 0;
    if (*(longlong *)(lVar1 + 0x58 + lVar3) != 0) {
      FUN_1400020a8();
    }
    FUN_148dc291e(lVar1 + lVar3 + 0x18);
    memmove((void *)(lVar1 + lVar3),param_3,0x68);
    FUN_148dc4b42(param_1,*param_4);
    *param_4 = iVar2;
    return 1;
  }
  return 0;
}



// FUNCTION 148dc489c FUN_148dc489c body=154 status=ok
// SIG undefined FUN_148dc489c(void)

longlong FUN_148dc489c(undefined8 *param_1,longlong param_2)

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
  FUN_1415c5ebe(param_2,*param_1);
  FUN_148dc4938(param_2 + 0x18,&local_68);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_148dc291e(&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc4938 FUN_148dc4938 body=123 status=ok
// SIG undefined FUN_148dc4938(void)

undefined8 * FUN_148dc4938(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_148dc49b4();
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



// FUNCTION 148dc49b4 FUN_148dc49b4 body=396 status=ok
// SIG undefined FUN_148dc49b4(void)

longlong * FUN_148dc49b4(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
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
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar9 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar7 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar8 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar9) || (local_60 = uVar7, uStack_48 != plVar1)) {
      do {
        local_60 = uVar7;
        plVar3 = *(longlong **)(*local_78 + 0x10 + (longlong)iVar8 * 0x38);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))();
          }
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar8 = local_60._4_4_;
        uVar7 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar9));
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
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar6 = param_2[3];
      uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
      *(int *)(param_1 + 3) = (int)lVar6;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
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
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc4b42 FUN_148dc4b42 body=116 status=ok
// SIG undefined FUN_148dc4b42(void)

void FUN_148dc4b42(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x70) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x70) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x70 + 4) = uVar5;
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



// FUNCTION 148dc4bb6 FUN_148dc4bb6 body=546 status=ok
// SIG undefined FUN_148dc4bb6(void)

void FUN_148dc4bb6(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
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
        lVar6 = *(longlong *)(lVar2 + 8 + (longlong)iVar10 * 0x70);
        if (lVar6 == 0) {
          lVar6 = FUN_140067708();
        }
        puVar12 = (undefined8 *)(lVar2 + (longlong)iVar10 * 0x70);
        uVar3 = *puVar12;
        uVar7 = FUN_14477b664(lVar6);
        uVar4 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
        uVar9 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uint)((ulonglong)uVar3 >> 0x10);
        uVar11 = (uint)uVar3 & 0xffff;
        iVar5 = FUN_144a78877(((uint)uVar3 << 0x10 | uVar11) + (int)((ulonglong)uVar3 >> 0x20) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar11 >> 4),uVar9 >> 0x10 ^ uVar9
                             );
        uVar7 = (longlong)iVar5 & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar7;
        *(int *)((longlong)puVar12 + 0x6c) = iVar5;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(puVar12 + 0xd) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
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



// FUNCTION 148dc4dda FUN_148dc4dda body=133 status=ok
// SIG undefined FUN_148dc4dda(void)

longlong FUN_148dc4dda(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_148dc4e60();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x38;
    if (lVar3 + lVar2 != 0) goto LAB_148dc4e13;
  }
  local_30 = param_3;
  FUN_148dc4f16(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x38;
LAB_148dc4e13:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc4e60 FUN_148dc4e60 body=180 status=ok
// SIG undefined FUN_148dc4e60(void)

int FUN_148dc4e60(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x38);
        cVar1 = FUN_14572220e(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_148dc4eee;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x30 + (longlong)iVar4 * 0x38);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_148dc4eee:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc4f16 FUN_148dc4f16 body=289 status=ok
// SIG undefined FUN_148dc4f16(void)

undefined4 * FUN_148dc4f16(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148dc5038(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  *(undefined4 *)(local_40 + 6) = 0xffffffff;
  cVar1 = FUN_148dc511a(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x34) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 6) =
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
      FUN_148dc5300(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc5038 FUN_148dc5038 body=226 status=ok
// SIG undefined FUN_148dc5038(void)

int * FUN_148dc5038(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447030e2(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x38) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 148dc511a FUN_148dc511a body=183 status=ok
// SIG undefined FUN_148dc511a(void)

undefined8 FUN_148dc511a(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong *plVar3;
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
  int iVar15;
  undefined8 uVar16;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_38 = *param_3;
    iVar15 = FUN_148dc51d2();
    if (iVar15 != -1) {
      puVar2 = (undefined4 *)(*param_1 + (longlong)iVar15 * 0x38);
      plVar3 = *(longlong **)(*param_1 + 0x10 + (longlong)iVar15 * 0x38);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      uVar4 = *(undefined4 *)param_3;
      uVar5 = *(undefined4 *)((longlong)param_3 + 4);
      uVar6 = *(undefined4 *)(param_3 + 1);
      uVar7 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar8 = *(undefined4 *)(param_3 + 2);
      uVar9 = *(undefined4 *)((longlong)param_3 + 0x14);
      uVar10 = *(undefined4 *)(param_3 + 3);
      uVar11 = *(undefined4 *)((longlong)param_3 + 0x1c);
      uVar12 = *(undefined4 *)((longlong)param_3 + 0x24);
      uVar13 = *(undefined4 *)(param_3 + 5);
      uVar14 = *(undefined4 *)((longlong)param_3 + 0x2c);
      puVar2[8] = *(undefined4 *)(param_3 + 4);
      puVar2[9] = uVar12;
      puVar2[10] = uVar13;
      puVar2[0xb] = uVar14;
      puVar2[4] = uVar8;
      puVar2[5] = uVar9;
      puVar2[6] = uVar10;
      puVar2[7] = uVar11;
      *puVar2 = uVar4;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      FUN_148dc528c(param_1,*param_4);
      *param_4 = iVar15;
      uVar16 = 1;
      goto LAB_148dc5140;
    }
  }
  uVar16 = 0;
LAB_148dc5140:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar16;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc51d2 FUN_148dc51d2 body=185 status=ok
// SIG undefined FUN_148dc51d2(void)

int FUN_148dc51d2(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x38);
        cVar1 = FUN_140584b78(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_148dc51fb;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x30 + (longlong)iVar4 * 0x38);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_148dc51fb:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 148dc528c FUN_148dc528c body=116 status=ok
// SIG undefined FUN_148dc528c(void)

void FUN_148dc528c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
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



// FUNCTION 148dc5300 FUN_148dc5300 body=436 status=ok
// SIG undefined FUN_148dc5300(void)

void FUN_148dc5300(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x38;
        uVar10 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x34 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x30 + lVar7) =
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



// FUNCTION 148dc54b6 FUN_148dc54b6 body=262 status=ok
// SIG undefined FUN_148dc54b6(void)

void FUN_148dc54b6(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    lVar2 = (longlong)
            *(int *)((longlong)plVar3 +
                    ((longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (lVar2 != -1) {
      lVar4 = *param_1;
      lVar2 = lVar2 * 0x38;
      local_40 = *(undefined8 *)(lVar4 + lVar2);
      local_48 = param_2;
      cVar1 = FUN_140584b78();
      if (cVar1 == '\0') {
        lVar4 = lVar4 + lVar2;
        do {
          if ((longlong)*(int *)(lVar4 + 0x30) == -1) goto LAB_148dc54da;
          lVar2 = (longlong)*(int *)(lVar4 + 0x30) * 0x38;
          lVar4 = *param_1 + lVar2;
          local_40 = *(undefined8 *)(*param_1 + lVar2);
          local_48 = param_2;
          cVar1 = FUN_140584b78(&local_40,&local_48);
        } while (cVar1 == '\0');
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
    }
  }
LAB_148dc54da:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148dc5668 FUN_148dc5668 body=429 status=ok
// SIG undefined FUN_148dc5668(void)

void FUN_148dc5668(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  uint uVar13;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar8 = param_2[1];
    if (lVar8 == 0) {
      lVar8 = FUN_140067708();
    }
    uVar10 = *param_2;
    uVar9 = FUN_14477b664(lVar8);
    uVar3 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
    uVar4 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar3 = (uint)((ulonglong)uVar10 >> 0x10);
    uVar13 = (uint)uVar10 & 0xffff;
    iVar5 = FUN_144a78877(((uint)uVar10 << 0x10 | uVar13) + (int)((ulonglong)uVar10 >> 0x20) +
                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar13 >> 4),uVar4 >> 0x10 ^ uVar4);
    plVar12 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar12 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar5 != -1) {
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar5 * 0x70);
        if (*(longlong *)(*param_1 + 8 + (longlong)iVar5 * 0x70) == 0) {
          uVar10 = FUN_140067708();
          uVar10 = FUN_14477b664(uVar10);
          puVar1[1] = uVar10;
        }
        lVar8 = param_2[1];
        if (lVar8 == 0) {
          lVar8 = FUN_140067708();
        }
        uVar10 = *param_2;
        uVar11 = FUN_14477b664(lVar8);
        local_50 = uVar10;
        uVar6 = FUN_144a7891a(uVar11);
        local_58 = *puVar1;
        uVar10 = puVar1[1];
        uVar7 = FUN_144a7891a(uVar10);
        local_60 = &local_50;
        local_68 = uVar11;
        cVar2 = FUN_144a789b8(uVar7,uVar10,&local_58,uVar6);
        if (cVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
        }
        iVar5 = *(int *)(puVar1 + 0xd);
      } while (iVar5 != -1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148dc58d6 FUN_148dc58d6 body=116 status=ok
// SIG undefined FUN_148dc58d6(void)

void FUN_148dc58d6(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
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



// FUNCTION 148dc594a FUN_148dc594a body=16 status=ok
// SIG undefined FUN_148dc594a(void)

bool FUN_148dc594a(longlong param_1,longlong param_2)

{
  return *(char *)(param_1 + 0x80) == *(char *)(param_2 + 0x80);
}



// FUNCTION 148dc595a FUN_148dc595a body=68 status=ok
// SIG undefined FUN_148dc595a(void)

void FUN_148dc595a(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  *(int *)(local_10 + 0x94) = *(int *)(local_10 + 0x94) + 1;
  FUN_1478b6d68();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc5a5e FUN_148dc5a5e body=170 status=ok
// SIG undefined FUN_148dc5a5e(void)

undefined4 FUN_148dc5a5e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 0x6b0) != *(int *)(param_1 + 0x6dc)) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar6 = (uint)lVar2 & 0xffff;
    lVar5 = param_1 + 0x6e0;
    if (*(longlong *)(param_1 + 0x6e8) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x6e8);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x6f0) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar6) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x6a8) + (longlong)iVar4 * 0x14);
        if (*plVar1 == lVar2) {
          if (plVar1 == (longlong *)0x0) {
            return 0;
          }
          if (plVar1 + 1 == (longlong *)0x0) {
            return 0;
          }
          return (int)plVar1[1];
        }
        iVar4 = *(int *)((longlong)plVar1 + 0xc);
      } while (iVar4 != -1);
    }
  }
  return 0;
}



// FUNCTION 148dc5b0e FUN_148dc5b0e body=163 status=ok
// SIG undefined FUN_148dc5b0e(void)

void FUN_148dc5b0e(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  (**(code **)(*param_1 + 0x10))();
  lVar3 = FUN_14050c909();
  lVar5 = *(longlong *)(lVar3 + 0x470);
  if (lVar5 == 0) {
    uVar4 = FUN_14050c9fe();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(lVar3 + 0x470) = lVar5;
  }
  if (*(longlong *)(lVar3 + 0x478) != 0) {
    return;
  }
  if (lVar5 == 0) {
    return;
  }
  if (*(longlong *)(lVar3 + 0x468) != 0) {
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar4 = FUN_144aff482(uVar4,(longlong *)(lVar3 + 0x468));
    }
    *(undefined8 *)(lVar3 + 0x478) = uVar4;
    return;
  }
  return;
}



// FUNCTION 148dc5bb2 FUN_148dc5bb2 body=305 status=ok
// SIG undefined FUN_148dc5bb2(void)

undefined8 FUN_148dc5bb2(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  byte *pbVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  undefined1 local_70 [24];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((byte *)*param_2 != (byte *)0x0) && ((~*(byte *)*param_2 & 3) == 0)) {
    lVar7 = 0;
    do {
      uVar3 = *(undefined8 *)((longlong)&PTR_s_PostCaptureActors_14b997a70 + lVar7);
      puVar6 = (undefined8 *)FUN_1408db39c(param_2,uVar3);
      pbVar4 = (byte *)*puVar6;
      plVar5 = (longlong *)puVar6[1];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      if ((pbVar4 != (byte *)0x0) && ((*pbVar4 & 3) != 0)) {
        pbVar4 = (byte *)*param_2;
        puVar6 = &DAT_14c9a1288;
        if ((pbVar4 != (byte *)0x0) && (puVar6 = &DAT_14c9a1288, (*pbVar4 & 2) != 0)) {
          puVar6 = (undefined8 *)(*(longlong *)(pbVar4 + 8) + 0x18);
        }
        FUN_1446ddc76(local_78,uVar3,1);
        FUN_1446dcdd4(local_70,local_78);
        FUN_14045886c(puVar6,local_70);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
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
      lVar7 = lVar7 + 8;
    } while (lVar7 != 0x38);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 148dc5d0c FUN_148dc5d0c body=106 status=ok
// SIG undefined FUN_148dc5d0c(void)

void FUN_148dc5d0c(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = FUN_148dc5d78(*param_2);
  FUN_14485c47a(param_1 + 5,uVar2);
  uVar2 = FUN_148dc5db6(*param_2);
  FUN_14485c47a(param_1 + 6,uVar2);
  *(undefined1 *)((longlong)param_1 + 0x39) = 0;
  lVar3 = FUN_14479d2ce(param_1 + 5);
  if (lVar3 != 0) {
    cVar1 = FUN_1410cda3e(lVar3);
    if (cVar1 != '\0') {
      *(byte *)((longlong)param_1 + 0x39) = *(byte *)((longlong)param_1 + 0x39) | 2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148dc5d72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1);
  return;
}



// FUNCTION 148dc5d78 FUN_148dc5d78 body=61 status=ok
// SIG undefined FUN_148dc5d78(void)

longlong FUN_148dc5d78(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1488817d6();
  if (lVar1 != 0) {
    lVar2 = FUN_1403ca142();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 148dc5db6 FUN_148dc5db6 body=61 status=ok
// SIG undefined FUN_148dc5db6(void)

longlong FUN_148dc5db6(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1488817e0();
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 148dc5dfe FUN_148dc5dfe body=83 status=ok
// SIG undefined FUN_148dc5dfe(void)

void FUN_148dc5dfe(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  *(undefined1 *)((longlong)param_1 + 0x39) = 0;
  lVar2 = FUN_14479d2ce(param_1 + 5);
  if (lVar2 != 0) {
    cVar1 = FUN_1410cda3e(lVar2);
    if (cVar1 != '\0') {
      *(byte *)((longlong)param_1 + 0x39) = *(byte *)((longlong)param_1 + 0x39) | 2;
    }
  }
  cVar1 = (**(code **)(*param_1 + 0x38))(param_1);
  if ((cVar1 != '\0') && ((char)param_1[7] == '\0')) {
    lVar2 = FUN_14479d2ce(param_1 + 6);
    *(bool *)(param_1 + 7) = lVar2 != 0;
  }
  return;
}



// FUNCTION 148dc5e54 FUN_148dc5e54 body=229 status=ok
// SIG undefined FUN_148dc5e54(void)

longlong * FUN_148dc5e54(undefined8 param_1,longlong *param_2)

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
  plVar4 = (longlong *)FUN_14001cc68(0x50,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b999710;
  plVar1 = plVar4 + 2;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  *(undefined4 *)((longlong)plVar4 + 0x47) = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b999730;
  *(undefined1 *)((longlong)plVar4 + 0x4a) = 1;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_148dd094c(&local_30,plVar1);
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



// FUNCTION 148dc5f3c FUN_148dc5f3c body=172 status=ok
// SIG undefined FUN_148dc5f3c(void)

undefined8 * FUN_148dc5f3c(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = (longlong *)FUN_140a68038(0);
  if (plVar3 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0x80))(plVar3,&local_38);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x110))(local_38,param_2,param_3);
      goto LAB_148dc5fa0;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_148dc5fa0:
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc5fea FUN_148dc5fea body=155 status=ok
// SIG undefined FUN_148dc5fea(void)

ulonglong FUN_148dc5fea(longlong *param_1)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = (**(code **)(*param_1 + 0x2d8))();
  if (cVar2 == '\0') {
    local_20 = 0;
    plVar3 = (longlong *)FUN_1401e3228();
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x70))(plVar3,&local_30);
      uVar4 = CONCAT71((int7)((ulonglong)&local_30 >> 8),local_30 != 0);
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
      goto LAB_148dc600e;
    }
  }
  uVar4 = 0;
LAB_148dc600e:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc6086 FUN_148dc6086 body=358 status=ok
// SIG undefined FUN_148dc6086(void)

undefined8 FUN_148dc6086(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar2 = FUN_145affae0(param_1,param_3);
  cVar1 = FUN_1447f8eee(param_3);
  if (cVar1 == '\0') {
    FUN_140002266(&local_38,&DAT_149e25cfc,iVar2);
  }
  else {
    FUN_14624635c(param_1 + 0x38,&local_38);
  }
  pwVar4 = L" point";
  if (1 < iVar2) {
    pwVar4 = L" points";
  }
  FUN_1400020e8(&local_38,pwVar4,1 < iVar2 | 6);
  uVar3 = FUN_145affa5a(param_1);
  FUN_1410a642a(&local_48,uVar3);
  local_68 = &DAT_149dfb77a;
  if (local_40 != 0) {
    local_68 = local_48;
  }
  local_60 = *(undefined8 *)(param_1 + 0x20);
  FUN_1400021e4(&local_60,&local_58);
  puVar6 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar6 = local_58;
  }
  puVar5 = &DAT_149dfb77a;
  if (local_30 != 0) {
    puVar5 = local_38;
  }
  FUN_140002266(param_2,L"Add %s for each \'%s\' level to \'%s\'",puVar5,puVar6);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc61ee FUN_148dc61ee body=354 status=ok
// SIG undefined FUN_148dc61ee(void)

undefined8 FUN_148dc61ee(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x20) < 0) {
    FUN_140056680(&local_40,&DAT_149dfb77a);
  }
  else {
    FUN_140002266(&local_40,L" (Tier %d)");
  }
  puVar5 = local_40;
  if (local_38 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 == 0) {
    uVar3 = FUN_14054e994();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x10) = lVar4;
  }
  if (((*(longlong *)(param_1 + 0x18) == 0) && (lVar4 != 0)) && (*(longlong *)(param_1 + 8) != 0)) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar3 = FUN_144aff482(uVar3,(longlong *)(param_1 + 8));
    }
    *(undefined8 *)(param_1 + 0x18) = uVar3;
  }
  FUN_1410a642a(&local_50);
  puVar6 = local_50;
  if (local_48 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"Challenge \'%s%s\' is completed",puVar6,puVar5);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148dc6352 FUN_148dc6352 body=441 status=ok
// SIG undefined FUN_148dc6352(void)

void FUN_148dc6352(longlong param_1,longlong param_2,undefined4 param_3,longlong param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  code *local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14485c47a(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = param_3;
  lVar4 = *(longlong *)(param_4 + 0x10);
  if (lVar4 == 0) {
    uVar3 = FUN_14054e994();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_4 + 0x10) = lVar4;
  }
  lVar5 = *(longlong *)(param_4 + 0x18);
  if (((lVar5 != 0) || (lVar5 = 0, lVar4 == 0)) || (*(longlong *)(param_4 + 8) == 0))
  goto LAB_148dc63fb;
  plVar1 = *(longlong **)(lVar4 + 0xb8);
  if (plVar1 == (longlong *)0x0) {
LAB_148dc6505:
    lVar5 = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
    if (cVar2 == '\0') goto LAB_148dc6505;
    uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar5 = FUN_144aff482(uVar3,(longlong *)(param_4 + 8));
  }
  *(longlong *)(param_4 + 0x18) = lVar5;
LAB_148dc63fb:
  *(longlong *)(param_1 + 0x48) = lVar5;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_4 + 0x20);
  local_58 = FUN_148dc6592;
  local_50 = 0;
  FUN_148dd0eea(local_48,param_1);
  FUN_145db23c0(param_2 + 0x720,&local_58,local_48);
  FUN_1449db362(local_48);
  local_58 = FUN_148dc661c;
  local_50 = 0;
  FUN_148dd0eea(local_48,param_1,&local_58);
  FUN_145db23c0(param_2 + 0x6f0,&local_58,local_48);
  FUN_1449db362(local_48);
  if (-1 < *(int *)(param_1 + 0x50)) {
    local_58 = FUN_148dc66a6;
    local_50 = 0;
    FUN_148dd14bc(local_48,param_1);
    FUN_148dd13d4(param_2 + 0x708,&local_58,local_48);
    FUN_1449db362(local_48);
  }
  FUN_148dc6730(param_1);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc650c FUN_148dc650c body=133 status=ok
// SIG undefined FUN_148dc650c(void)

undefined8 FUN_148dc650c(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = FUN_14479d2ce(param_1 + 0x38);
  if ((lVar2 == 0) || (*(longlong *)(param_1 + 0x48) == 0)) {
    uVar3 = 0;
  }
  else {
    puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0x48) + 8);
    puVar4 = &DAT_14c9485f0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar4 = puVar1;
    }
    FUN_1447325ac(puVar4,&local_28,1);
    uVar3 = FUN_14033629e(lVar2,*(undefined4 *)(param_1 + 0x40),local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc6592 FUN_148dc6592 body=137 status=ok
// SIG undefined FUN_148dc6592(void)

void FUN_148dc6592(longlong param_1,int param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_3 != 0) && (*(int *)(param_1 + 0x40) == param_2)) {
    FUN_140ff3baa(param_3,&local_28);
    puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0x48) + 8);
    puVar2 = &DAT_14c9485f0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = puVar1;
    }
    FUN_1447325ac(puVar2,&local_30,1);
    if (local_28 == local_30) {
      FUN_148dc6730(param_1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc661c FUN_148dc661c body=137 status=ok
// SIG undefined FUN_148dc661c(void)

void FUN_148dc661c(longlong param_1,int param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_3 != 0) && (*(int *)(param_1 + 0x40) == param_2)) {
    FUN_140ff3baa(param_3,&local_28);
    puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0x48) + 8);
    puVar2 = &DAT_14c9485f0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = puVar1;
    }
    FUN_1447325ac(puVar2,&local_30,1);
    if (local_28 == local_30) {
      FUN_148dc6730(param_1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc66a6 FUN_148dc66a6 body=137 status=ok
// SIG undefined FUN_148dc66a6(void)

void FUN_148dc66a6(longlong param_1,int param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_3 != 0) && (*(int *)(param_1 + 0x40) == param_2)) {
    FUN_140ff3baa(param_3,&local_28);
    puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0x48) + 8);
    puVar2 = &DAT_14c9485f0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = puVar1;
    }
    FUN_1447325ac(puVar2,&local_30,1);
    if (local_28 == local_30) {
      FUN_148dc6730(param_1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc6730 FUN_148dc6730 body=95 status=ok
// SIG undefined FUN_148dc6730(void)

void FUN_148dc6730(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = FUN_148dc650c();
  if (lVar2 != 0) {
    bVar3 = true;
    if (*(char *)(lVar2 + 0x11) == '\0') {
      if ((int)*(uint *)(param_1 + 0x50) < 0) {
        bVar3 = false;
      }
      else {
        bVar3 = *(uint *)(param_1 + 0x50) < (uint)*(byte *)(lVar2 + 0x10);
      }
    }
    if ((((bool)*(char *)(param_1 + 0x30) != bVar3) &&
        (*(bool *)(param_1 + 0x30) = bVar3, *(int *)(param_1 + 0x20) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 0x18), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000148dc678c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x60))(plVar1,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148dc6790 FUN_148dc6790 body=238 status=ok
// SIG undefined FUN_148dc6790(void)

undefined8 FUN_148dc6790(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  void *_Src;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_68 [32];
  longlong *local_48 [2];
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = FUN_14867dea6();
  FUN_1406f1d90(uVar2,local_48,uVar1);
  puVar3 = (undefined8 *)FUN_1447a1f4a(local_48);
  local_38 = (undefined2 *)0x0;
  local_30 = *(int *)(puVar3 + 1);
  lVar4 = (longlong)local_30;
  _Src = (void *)*puVar3;
  if (lVar4 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar4 * 2);
  }
  if (local_48[0] != (longlong *)0x0) {
    (**(code **)(*local_48[0] + 0x10))();
  }
  puVar5 = local_38;
  if (local_30 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"%s is granted",puVar5);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148dc6880 FUN_148dc6880 body=387 status=ok
// SIG undefined FUN_148dc6880(void)

longlong * FUN_148dc6880(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  param_2[1] = 0;
  lVar4 = *(longlong *)(param_3 + 0xa8);
  if (lVar4 == 0) goto LAB_148dc68dc;
  lVar6 = FUN_144a78b9e();
  if (((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
       != lVar6 + 0x30)) || (*(longlong *)(lVar4 + 0x11e8) == 0)) goto LAB_148dc68dc;
  plVar7 = (longlong *)FUN_14001cc68(0x48,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14b999b00;
  plVar1 = plVar7 + 2;
  plVar7[3] = 0;
  plVar7[4] = 0;
  plVar7[5] = 0;
  plVar7[6] = 0;
  plVar7[7] = 0;
  plVar7[8] = 0;
  plVar7[2] = (longlong)&PTR_FUN_14b999b18;
  local_40 = plVar1;
  local_38 = plVar7;
  FUN_148dd1a5a(&local_40,plVar1);
  FUN_148dc6a04(plVar1,*(undefined8 *)(lVar4 + 0x11e8),param_1);
  if (plVar7 == (longlong *)0x0) {
    *param_2 = 0x10;
    goto LAB_148dc68dc;
  }
  LOCK();
  *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
  UNLOCK();
  plVar5 = (longlong *)param_2[1];
  *param_2 = (longlong)plVar1;
  if (plVar7 == plVar5) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      iVar3 = *piVar2;
      UNLOCK();
      plVar5 = plVar7;
joined_r0x000148dc69c1:
      if (iVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  else {
    param_2[1] = (longlong)plVar7;
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
        iVar3 = *piVar2;
        UNLOCK();
        goto joined_r0x000148dc69c1;
      }
    }
  }
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_38 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
LAB_148dc68dc:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc6a04 FUN_148dc6a04 body=178 status=ok
// SIG undefined FUN_148dc6a04(void)

void FUN_148dc6a04(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = (**(code **)(*param_2 + 0xe78))(param_2,*(undefined4 *)(param_3 + 8));
  if (((*(char *)(param_1 + 0x30) != cVar2) &&
      (*(char *)(param_1 + 0x30) = cVar2, *(int *)(param_1 + 0x20) != 0)) &&
     (plVar1 = *(longlong **)(param_1 + 0x18), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_1);
  }
  local_40 = &LAB_148dc6ab8;
  local_38 = 0;
  FUN_148dd1bea(local_30,param_1);
  FUN_148dd1b02(param_2 + 0x6b8,&local_40,local_30);
  FUN_1449db362(local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc6af0 FUN_148dc6af0 body=248 status=ok
// SIG undefined FUN_148dc6af0(void)

undefined8 FUN_148dc6af0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_1447f8eee(param_3);
  if (cVar2 == '\0') {
    uVar3 = FUN_1410d6046(param_1,param_1 + 0x20,param_3);
    FUN_140002266(&local_40,&DAT_149e25cfc,uVar3);
  }
  else {
    FUN_14624635c(param_1 + 0x20,&local_40);
  }
  puVar1 = local_40;
  puVar4 = local_40;
  if (local_38 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  local_48 = *(undefined8 *)(param_1 + 8);
  FUN_1400021e4(&local_48,&local_40);
  puVar5 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar5 = local_40;
  }
  FUN_140002266(param_2,L"%s Level >= %s",puVar5,puVar4);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (puVar1 != (undefined2 *)0x0) {
    FUN_1400020a8(puVar1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc6bea FUN_148dc6bea body=261 status=ok
// SIG undefined FUN_148dc6bea(void)

undefined8 FUN_148dc6bea(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  undefined8 local_68;
  undefined2 *local_60;
  int local_58;
  longlong *local_50 [2];
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14624635c(param_1 + 0x40,&local_40);
  puVar5 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar5 = local_40;
  }
  uVar1 = FUN_148ba335c();
  FUN_1406f1d90(uVar1,local_50,*(undefined1 *)(param_1 + 0x38));
  puVar2 = (undefined8 *)FUN_1447a1f4a(local_50);
  puVar4 = &DAT_149dfb77a;
  if (*(int *)(puVar2 + 1) != 0) {
    puVar4 = (undefined2 *)*puVar2;
  }
  local_68 = *(undefined8 *)(param_1 + 0x20);
  FUN_1400021e4(&local_68,&local_60);
  puVar3 = &DAT_149dfb77a;
  if (local_58 != 0) {
    puVar3 = local_60;
  }
  local_78 = puVar5;
  FUN_140002266(param_2,L"Experience [%s.%s.%s]",puVar3,puVar4);
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_50[0] != (longlong *)0x0) {
    (**(code **)(*local_50[0] + 0x10))();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc6cf0 FUN_148dc6cf0 body=442 status=ok
// SIG undefined FUN_148dc6cf0(void)

int FUN_148dc6cf0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 ****ppppuVar10;
  float fVar11;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [40];
  undefined4 local_70;
  undefined8 ***local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar8 = *(longlong *)(param_1 + 0x28);
  if (lVar8 == 0) {
    uVar7 = FUN_140b1c3dc();
    lVar8 = FUN_14477b664(uVar7);
    *(longlong *)(param_1 + 0x28) = lVar8;
  }
  lVar9 = *(longlong *)(param_1 + 0x30);
  if (lVar9 == 0) {
    iVar4 = 0;
    if ((lVar8 == 0) || (*(longlong *)(param_1 + 0x20) == 0)) goto LAB_148dc6d97;
    plVar1 = *(longlong **)(lVar8 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0x30) = 0;
      iVar4 = 0;
      goto LAB_148dc6d97;
    }
    uVar7 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar9 = FUN_144aff482(uVar7,(longlong *)(param_1 + 0x20));
    *(longlong *)(param_1 + 0x30) = lVar9;
    if (lVar9 == 0) goto LAB_148dc6d97;
  }
  iVar4 = FUN_1441f0270(param_2,lVar9);
  uVar7 = FUN_140d72879();
  uVar5 = FUN_140df7d8e(param_2,lVar9);
  iVar6 = FUN_140d72a52(uVar7,lVar9,uVar5);
  local_98[0] = 0;
  local_70 = 0;
  FUN_1456bb102(local_98,param_2);
  FUN_1448729ea(param_1 + 0x40,local_68,local_98);
  fVar11 = (float)FUN_144a7ecd0(local_68);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
  if (pcVar2 != (code *)0x0) {
    ppppuVar10 = local_68;
    if (0x18 < local_50) {
      ppppuVar10 = (undefined8 ****)local_68[0];
    }
    (*pcVar2)(ppppuVar10);
  }
  if (0x18 < local_50) {
    FUN_1400020a8(local_68[0]);
  }
  FUN_144a5ac3a(local_98);
  iVar4 = (int)(fVar11 * (float)(iVar4 - iVar6));
LAB_148dc6d97:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 148dc6eac FUN_148dc6eac body=191 status=ok
// SIG undefined FUN_148dc6eac(void)

undefined8 FUN_148dc6eac(longlong param_1,undefined8 param_2)

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
  FUN_140002266(param_2,L"Faction [%s += %s]",puVar1,puVar2);
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



// FUNCTION 148dc6f70 FUN_148dc6f70 body=944 status=ok
// SIG undefined FUN_148dc6f70(void)

void FUN_148dc6f70(longlong param_1,longlong param_2)

{
  int *piVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 *puVar14;
  undefined8 ***pppuVar15;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined7 uStack_97;
  longlong local_80;
  undefined4 local_70;
  undefined8 **local_68;
  longlong *plStack_60;
  ushort local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = *(undefined8 ***)(param_2 + 0x20);
  FUN_1446dcdd4(&local_98);
  lVar9 = FUN_1488155c8(&local_98);
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if (lVar9 == 0) goto LAB_148dc6fce;
  if (DAT_14cb8d358 != 0) {
    puVar14 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar9 + 8) != (undefined4 *)0x0) {
      puVar14 = *(undefined4 **)(lVar9 + 8);
    }
    lVar9 = FUN_144837462(DAT_14cb8d358,puVar14);
    if ((lVar9 != 0) && (*(longlong *)(lVar9 + 0x18) != 0)) {
      *(longlong *)(param_1 + 8) = *(longlong *)(lVar9 + 0x18);
      plVar3 = *(longlong **)(lVar9 + 0x20);
      plVar4 = *(longlong **)(param_1 + 0xb8);
      if (plVar4 != plVar3) {
        *(longlong **)(param_1 + 0xb8) = plVar3;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(lVar9 + 0x28);
      lVar11 = *(longlong *)(lVar9 + 0x60);
      if (lVar11 == 0) {
        uVar10 = FUN_145c20674();
        lVar11 = FUN_14477b664(uVar10);
        *(longlong *)(lVar9 + 0x60) = lVar11;
      }
      lVar12 = *(longlong *)(lVar9 + 0x68);
      if (((lVar12 == 0) && (lVar12 = 0, lVar11 != 0)) && (*(longlong *)(lVar9 + 0x58) != 0)) {
        plVar3 = *(longlong **)(lVar11 + 0xb8);
        if (plVar3 == (longlong *)0x0) {
LAB_148dc7319:
          lVar12 = 0;
        }
        else {
          cVar7 = (**(code **)(*plVar3 + 0x108))(plVar3);
          if (cVar7 == '\0') goto LAB_148dc7319;
          uVar10 = (**(code **)(*plVar3 + 0x110))(plVar3);
          lVar12 = FUN_144aff482(uVar10,(longlong *)(lVar9 + 0x58));
        }
        *(longlong *)(lVar9 + 0x68) = lVar12;
      }
      uVar10 = FUN_140c54336();
      cVar7 = FUN_1448093f4(lVar12,uVar10);
      lVar11 = 0;
      if (cVar7 != '\0') {
        lVar11 = lVar12;
      }
      if (*(longlong *)(param_1 + 0x48) == 0) {
        uVar10 = FUN_140c54336();
        uVar10 = FUN_14477b664(uVar10);
        *(undefined8 *)(param_1 + 0x48) = uVar10;
      }
      lVar12 = FUN_140c54336();
      uVar10 = FUN_140c54336();
      FUN_1402d1bfa(&local_98,uVar10,lVar11);
      if (*(longlong *)(param_1 + 0x40) != CONCAT71(uStack_97,local_98)) {
        *(undefined8 *)(param_1 + 0x50) = 0;
      }
      *(longlong *)(param_1 + 0x40) = CONCAT71(uStack_97,local_98);
      lVar13 = FUN_140c54336();
      if (lVar12 == 0) {
LAB_148dc727d:
        lVar13 = lVar12;
      }
      else if (lVar13 == 0) {
        lVar13 = 0;
      }
      else if ((*(int *)(lVar13 + 0x38) <= *(int *)(lVar12 + 0x38)) &&
              (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8)
               == lVar13 + 0x30)) goto LAB_148dc727d;
      if (*(longlong *)(param_1 + 0x48) != lVar13) {
        *(undefined8 *)(param_1 + 0x50) = 0;
      }
      uVar10 = FUN_14477b664(lVar13);
      lVar12 = FUN_14477b664(uVar10);
      *(longlong *)(param_1 + 0x48) = lVar12;
      if ((lVar12 != 0) && (*(longlong *)(param_1 + 0x40) != 0)) {
        *(longlong *)(param_1 + 0x50) = lVar11;
      }
      lVar11 = FUN_14090ae24(param_1 + 0x58);
      if (lVar11 == 0) {
        *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(lVar9 + 0x30);
        uVar8 = *(undefined4 *)(lVar9 + 0x3c);
        uVar5 = *(undefined4 *)(lVar9 + 0x40);
        uVar6 = *(undefined4 *)(lVar9 + 0x44);
        *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar9 + 0x38);
        *(undefined4 *)(param_1 + 100) = uVar8;
        *(undefined4 *)(param_1 + 0x68) = uVar5;
        *(undefined4 *)(param_1 + 0x6c) = uVar6;
        FUN_144a787a6(param_1 + 0x70,lVar9 + 0x48);
      }
    }
  }
  FUN_1414288e4(param_2 + 0x38,param_1 + 0x10);
  local_98 = 0;
  local_70 = 0;
  FUN_14575a19a(&local_98,0);
  FUN_1448729ea(param_2 + 0x38,&local_68,&local_98);
  uVar8 = FUN_14005fbd2(&local_68,0);
  *(undefined4 *)(param_1 + 0xd8) = uVar8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
  if (pcVar2 != (code *)0x0) {
    pppuVar15 = &local_68;
    if (0x18 < local_50) {
      pppuVar15 = (undefined8 ***)local_68;
    }
    (*pcVar2)(pppuVar15);
  }
  if (0x18 < local_50) {
    FUN_1400020a8(local_68);
  }
  FUN_144a5ac3a(&local_98);
  local_68 = (undefined8 ***)0x0;
  plStack_60 = (longlong *)0x0;
  FUN_1413a454c(&local_98,*(undefined4 *)(param_1 + 0xd8),0);
  FUN_140008f88(param_1 + 200,&local_98);
  if ((longlong *)CONCAT71(uStack_97,local_98) != (longlong *)0x0) {
    (**(code **)(*(longlong *)CONCAT71(uStack_97,local_98) + 0x10))();
  }
  plVar3 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar4 = plStack_60 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_148dc6fce:
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc7322 FUN_148dc7322 body=969 status=ok
// SIG undefined FUN_148dc7322(void)

void FUN_148dc7322(longlong param_1,longlong param_2)

{
  int *piVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 ***pppuVar14;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined7 uStack_b7;
  undefined4 local_90;
  undefined8 **local_88;
  longlong *plStack_80;
  ushort local_70;
  byte local_68;
  undefined1 local_60 [24];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  pppuVar14 = *(undefined8 ****)(param_2 + 0x20);
  uVar9 = FUN_14477b664(*(undefined8 *)(param_2 + 0x28));
  FUN_14477b664(uVar9);
  local_88 = pppuVar14;
  FUN_1400021e4(&local_88,&local_b8);
  FUN_14047a987(&local_b8,"_Experience",0xb);
  FUN_14000bbd8(local_60,&local_b8,0);
  if (CONCAT71(uStack_b7,local_b8) != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb8d358 == 0) goto LAB_148dc73d1;
  lVar10 = FUN_144837462(DAT_14cb8d358,local_60);
  if ((lVar10 == 0) || (*(longlong *)(lVar10 + 0x18) == 0)) goto LAB_148dc73d1;
  *(longlong *)(param_1 + 8) = *(longlong *)(lVar10 + 0x18);
  plVar3 = *(longlong **)(lVar10 + 0x20);
  plVar4 = *(longlong **)(param_1 + 0xb8);
  if (plVar4 != plVar3) {
    *(longlong **)(param_1 + 0xb8) = plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(lVar10 + 0x28);
  lVar11 = *(longlong *)(lVar10 + 0x60);
  if (lVar11 == 0) {
    uVar9 = FUN_145c20674();
    lVar11 = FUN_14477b664(uVar9);
    *(longlong *)(lVar10 + 0x60) = lVar11;
  }
  lVar12 = *(longlong *)(lVar10 + 0x68);
  if (((lVar12 == 0) && (lVar12 = 0, lVar11 != 0)) && (*(longlong *)(lVar10 + 0x58) != 0)) {
    plVar3 = *(longlong **)(lVar11 + 0xb8);
    if (plVar3 == (longlong *)0x0) {
LAB_148dc76e4:
      lVar12 = 0;
    }
    else {
      cVar7 = (**(code **)(*plVar3 + 0x108))(plVar3);
      if (cVar7 == '\0') goto LAB_148dc76e4;
      uVar9 = (**(code **)(*plVar3 + 0x110))(plVar3);
      lVar12 = FUN_144aff482(uVar9,(longlong *)(lVar10 + 0x58));
    }
    *(longlong *)(lVar10 + 0x68) = lVar12;
  }
  uVar9 = FUN_140c54336();
  cVar7 = FUN_1448093f4(lVar12,uVar9);
  lVar11 = 0;
  if (cVar7 != '\0') {
    lVar11 = lVar12;
  }
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar9 = FUN_140c54336();
    uVar9 = FUN_14477b664(uVar9);
    *(undefined8 *)(param_1 + 0x48) = uVar9;
  }
  lVar12 = FUN_140c54336();
  uVar9 = FUN_140c54336();
  FUN_1402d1bfa(&local_b8,uVar9,lVar11);
  if (*(longlong *)(param_1 + 0x40) != CONCAT71(uStack_b7,local_b8)) {
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  *(longlong *)(param_1 + 0x40) = CONCAT71(uStack_b7,local_b8);
  lVar13 = FUN_140c54336();
  if (lVar12 == 0) {
LAB_148dc763e:
    lVar13 = lVar12;
  }
  else if (lVar13 == 0) {
    lVar13 = 0;
  }
  else if ((*(int *)(lVar13 + 0x38) <= *(int *)(lVar12 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) ==
           lVar13 + 0x30)) goto LAB_148dc763e;
  if (*(longlong *)(param_1 + 0x48) != lVar13) {
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  uVar9 = FUN_14477b664(lVar13);
  lVar12 = FUN_14477b664(uVar9);
  *(longlong *)(param_1 + 0x48) = lVar12;
  if ((lVar12 != 0) && (*(longlong *)(param_1 + 0x40) != 0)) {
    *(longlong *)(param_1 + 0x50) = lVar11;
  }
  lVar11 = FUN_14090ae24(param_1 + 0x58);
  if (lVar11 == 0) {
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(lVar10 + 0x30);
    uVar8 = *(undefined4 *)(lVar10 + 0x3c);
    uVar5 = *(undefined4 *)(lVar10 + 0x40);
    uVar6 = *(undefined4 *)(lVar10 + 0x44);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar10 + 0x38);
    *(undefined4 *)(param_1 + 100) = uVar8;
    *(undefined4 *)(param_1 + 0x68) = uVar5;
    *(undefined4 *)(param_1 + 0x6c) = uVar6;
    FUN_144a787a6(param_1 + 0x70,lVar10 + 0x48);
  }
LAB_148dc73d1:
  FUN_1414288e4(param_2 + 0x40,param_1 + 0x10);
  local_b8 = 0;
  local_90 = 0;
  FUN_14575a19a(&local_b8,0);
  FUN_1448729ea(param_2 + 0x40,&local_88,&local_b8);
  uVar8 = FUN_14005fbd2(&local_88,0);
  *(undefined4 *)(param_1 + 0xd8) = uVar8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
  if (pcVar2 != (code *)0x0) {
    pppuVar14 = &local_88;
    if (0x18 < local_70) {
      pppuVar14 = (undefined8 ***)local_88;
    }
    (*pcVar2)(pppuVar14);
  }
  if (0x18 < local_70) {
    FUN_1400020a8(local_88);
  }
  FUN_144a5ac3a(&local_b8);
  local_88 = (undefined8 **)0x0;
  plStack_80 = (longlong *)0x0;
  FUN_1413a454c(&local_b8,*(undefined4 *)(param_1 + 0xd8),0);
  FUN_140008f88(param_1 + 200,&local_b8);
  if ((longlong *)CONCAT71(uStack_b7,local_b8) != (longlong *)0x0) {
    (**(code **)(*(longlong *)CONCAT71(uStack_b7,local_b8) + 0x10))();
  }
  plVar3 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar4 = plStack_80 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc76ec FUN_148dc76ec body=215 status=ok
// SIG undefined FUN_148dc76ec(void)

void FUN_148dc76ec(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined2 local_28;
  undefined8 local_24;
  undefined8 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_88 = 0;
  local_80 = 0x8000000000;
  uStack_78 = 0xffffffff;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0xf;
  local_28 = 1;
  local_24 = 0;
  uStack_1c = 0;
  cVar1 = FUN_14088c870(&local_e8,param_2 + 0x20);
  if (cVar1 != '\0') {
    FUN_1457615ac(param_1,uStack_e0,local_e8);
  }
  FUN_140368b56(&local_e8);
  if ((local_10 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc77c4 FUN_148dc77c4 body=136 status=ok
// SIG undefined FUN_148dc77c4(void)

void FUN_148dc77c4(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar4 = *param_1;
    lVar5 = (longlong)(int)param_1[1] * 0xc0;
    do {
      lVar2 = FUN_1488ced12(lVar4);
      if (lVar2 == 0) {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_1418964ba(param_2,iVar1);
        }
        FUN_1487674fe((longlong)iVar1 * 0xc0 + *param_2,lVar4);
      }
      else {
        uVar3 = FUN_1488ceda0(lVar2);
        FUN_148dc77c4(uVar3,param_2);
      }
      lVar4 = lVar4 + 0xc0;
      lVar5 = lVar5 + -0xc0;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 148dc784c FUN_148dc784c body=56 status=ok
// SIG undefined FUN_148dc784c(void)

undefined8 FUN_148dc784c(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_stack_00000040;
  
  plVar3 = *(longlong **)(in_stack_00000040 + 8);
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
  return 0;
}



// FUNCTION 148dc789a FUN_148dc789a body=225 status=ok
// SIG undefined FUN_148dc789a(void)

ulonglong FUN_148dc789a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = FUN_14129d0d4();
    uVar4 = FUN_1459c2cb6();
    local_40 = (undefined8 *)0x0;
    local_38 = 2;
    uVar5 = 0;
    FUN_148a175e2(&local_40,2,0);
    *local_40 = uVar3;
    local_40[1] = uVar4;
    if ((longlong)local_38 != 0) {
      lVar6 = 0;
      do {
        iVar1 = *(int *)(*(longlong *)((longlong)local_40 + lVar6) + 0x38);
        if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
           (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30),
           *(longlong *)(lVar2 + (longlong)iVar1 * 8) ==
           *(longlong *)((longlong)local_40 + lVar6) + 0x30)) {
          uVar5 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
          goto LAB_148dc7964;
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)local_38 * 8 != lVar6);
      uVar5 = 0;
    }
LAB_148dc7964:
    if (local_40 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc79a8 FUN_148dc79a8 body=128 status=ok
// SIG undefined FUN_148dc79a8(void)

longlong FUN_148dc79a8(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  if ((*(longlong *)(param_1 + 0x70) != 0) && (iVar2 = FUN_1415c6332(), 0 < iVar2)) {
    iVar5 = 0;
    do {
      lVar3 = FUN_14574ef0a(*(undefined8 *)(param_1 + 0x70),iVar5);
      lVar1 = *(longlong *)(lVar3 + 0xc0);
      if (lVar1 != 0) {
        lVar4 = FUN_1411bcd44();
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30)) {
          return lVar3;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  return 0;
}



// FUNCTION 148dc7a28 FUN_148dc7a28 body=118 status=ok
// SIG undefined FUN_148dc7a28(void)

longlong FUN_148dc7a28(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_145d503e6();
  if (lVar1 != 0) {
    lVar2 = FUN_145a8acb6();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) && (lVar1 = FUN_148dc79a8(lVar1), lVar1 != 0)) {
      FUN_148951212(param_1,param_2,lVar1 + 0xa0,param_3);
      return param_2;
    }
  }
  *(undefined1 *)(param_2 + 0x60) = 0;
  return param_2;
}



// FUNCTION 148dc7aa4 FUN_148dc7aa4 body=846 status=ok
// SIG undefined FUN_148dc7aa4(void)

void FUN_148dc7aa4(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar4 = (longlong *)FUN_145a8ada2();
  lVar7 = plVar4[0x22];
  if (lVar7 == 0) {
    (**(code **)(*plVar4 + 1000))(plVar4);
    lVar7 = plVar4[0x22];
    if (lVar7 == 0) goto LAB_148dc7c27;
  }
  lVar5 = FUN_1403ca227();
  iVar2 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_1458fe376(param_2,iVar2);
  }
  lVar9 = *param_2;
  lVar6 = *(longlong *)(lVar7 + 0x70);
  if (lVar6 == 0) {
    lVar6 = FUN_1458f96d4();
  }
  local_58 = *(longlong *)(lVar7 + 0x68);
  local_50 = FUN_14477b664(lVar6);
  local_48 = *(longlong *)(lVar7 + 0x78);
  lVar7 = *(longlong *)(lVar5 + 0x28);
  if (lVar7 == 0) {
    lVar7 = FUN_14121240e();
  }
  local_70 = *(longlong *)(lVar5 + 0x20);
  local_68 = FUN_14477b664(lVar7);
  local_60 = *(longlong *)(lVar5 + 0x30);
  FUN_14151bf7c(lVar9 + (longlong)iVar2 * 0x30,&local_70);
  FUN_14151bf7c(lVar9 + (longlong)iVar2 * 0x30 + 0x18,&local_58);
  FUN_14604893f(&local_70,param_3);
  if (local_68 == 0) {
    uVar8 = FUN_140355b7c();
    local_68 = FUN_14477b664(uVar8);
  }
  if (local_60 == 0) {
    if ((local_68 != 0) && (local_70 != 0)) {
      plVar4 = *(longlong **)(local_68 + 0xb8);
      if ((plVar4 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar3 == '\0')) {
        local_60 = 0;
      }
      else {
        uVar8 = (**(code **)(*plVar4 + 0x110))(plVar4);
        local_60 = FUN_144aff482(uVar8,&local_70);
        if (local_60 != 0) goto LAB_148dc7bb7;
      }
    }
    FUN_14895221b(&local_88,param_3);
    if (local_80 == 0) {
      uVar8 = FUN_140355b7c();
      local_80 = FUN_14477b664(uVar8);
    }
    if (local_78 == 0) {
      if ((((local_80 == 0) || (local_88 == 0)) ||
          (plVar4 = *(longlong **)(local_80 + 0xb8), plVar4 == (longlong *)0x0)) ||
         (cVar3 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar3 == '\0')) goto LAB_148dc7c27;
      uVar8 = (**(code **)(*plVar4 + 0x110))(plVar4);
      local_78 = FUN_144aff482(uVar8,&local_88);
      if (local_78 == 0) goto LAB_148dc7c27;
    }
    iVar2 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
      FUN_1458fe376(param_2,iVar2);
    }
    lVar7 = *param_2;
    lVar5 = local_80;
    if (local_80 == 0) {
      lVar5 = FUN_140355b7c();
    }
    lVar6 = (longlong)iVar2 * 0x30;
    lVar9 = lVar7 + lVar6;
    local_58 = local_88;
    local_50 = FUN_14477b664(lVar5);
    local_48 = local_78;
  }
  else {
LAB_148dc7bb7:
    iVar2 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
      FUN_1458fe376(param_2,iVar2);
    }
    lVar7 = *param_2;
    lVar5 = local_68;
    if (local_68 == 0) {
      lVar5 = FUN_140355b7c();
    }
    lVar6 = (longlong)iVar2 * 0x30;
    lVar9 = lVar7 + lVar6;
    local_58 = local_70;
    local_50 = FUN_14477b664(lVar5);
    local_48 = local_60;
  }
  FUN_14151bf7c(lVar9,&local_58);
  puVar1 = (undefined8 *)(lVar7 + 0x18 + lVar6);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar7 + 0x28 + lVar6) = 0;
LAB_148dc7c27:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148dc7dfc FUN_148dc7dfc body=179 status=ok
// SIG undefined FUN_148dc7dfc(void)

longlong FUN_148dc7dfc(void)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar2 = (longlong *)FUN_145a8ada2();
  lVar5 = plVar2[0x22];
  if (lVar5 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar5 = plVar2[0x22];
    if (lVar5 == 0) {
      return 0;
    }
  }
  lVar4 = *(longlong *)(lVar5 + 0x70);
  if (lVar4 == 0) {
    uVar3 = FUN_1458f96d4();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(lVar5 + 0x70) = lVar4;
  }
  if (*(longlong *)(lVar5 + 0x78) != 0) {
    return *(longlong *)(lVar5 + 0x78);
  }
  if (lVar4 == 0) {
    return 0;
  }
  if (*(longlong *)(lVar5 + 0x68) != 0) {
    plVar2 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar1 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar1 == '\0')) {
      lVar4 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar4 = FUN_144aff482(uVar3,(longlong *)(lVar5 + 0x68));
    }
    *(longlong *)(lVar5 + 0x78) = lVar4;
    return lVar4;
  }
  return 0;
}



// FUNCTION 148dc7eb0 FUN_148dc7eb0 body=142 status=ok
// SIG undefined FUN_148dc7eb0(void)

void FUN_148dc7eb0(void)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar3 = FUN_1403ca227();
  lVar5 = *(longlong *)(lVar3 + 0x28);
  if (lVar5 == 0) {
    uVar4 = FUN_14121240e();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(lVar3 + 0x28) = lVar5;
  }
  if (*(longlong *)(lVar3 + 0x30) != 0) {
    return;
  }
  if (lVar5 == 0) {
    return;
  }
  if (*(longlong *)(lVar3 + 0x20) != 0) {
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar4 = FUN_144aff482(uVar4,(longlong *)(lVar3 + 0x20));
    }
    *(undefined8 *)(lVar3 + 0x30) = uVar4;
    return;
  }
  return;
}



// FUNCTION 148dc7f57 FUN_148dc7f57 body=183 status=ok
// SIG undefined FUN_148dc7f57(void)

undefined8 FUN_148dc7f57(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_141221b16();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc8016 FUN_148dc8016 body=317 status=ok
// SIG undefined FUN_148dc8016(void)

longlong FUN_148dc8016(undefined8 param_1,undefined8 param_2)

{
  void *_Src;
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined1 local_50 [40];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)thunk_FUN_14050fd64();
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x570))(plVar1);
  local_60 = (void *)0x0;
  local_58 = *(int *)(puVar2 + 1);
  lVar4 = (longlong)local_58;
  _Src = (void *)*puVar2;
  if (lVar4 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1401b309e(&local_60,local_58,0);
    memcpy(local_60,_Src,lVar4 << 3);
  }
  lVar4 = FUN_140115346(param_2);
  if (lVar4 != 0) {
    lVar4 = FUN_14887b7c6(lVar4);
    if (lVar4 != 0) {
      puVar3 = &DAT_14c9485f0;
      if (*(undefined4 **)(lVar4 + 8) != (undefined4 *)0x0) {
        puVar3 = *(undefined4 **)(lVar4 + 8);
      }
      FUN_1447325ac(puVar3,&local_68);
      if ((longlong)local_58 != 0) {
        lVar5 = 0;
        do {
          if (*(longlong *)((longlong)local_60 + lVar5) == local_68) goto LAB_148dc8112;
          lVar5 = lVar5 + 8;
        } while ((longlong)local_58 * 8 != lVar5);
      }
    }
  }
  if (local_58 == 0) {
    lVar4 = 0;
  }
  else {
    FUN_1446dcdd4(local_50);
    lVar4 = FUN_1400d6974(local_50);
  }
LAB_148dc8112:
  if (local_60 != (void *)0x0) {
    FUN_1400020a8(local_60);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc8162 FUN_148dc8162 body=219 status=ok
// SIG undefined FUN_148dc8162(void)

longlong FUN_148dc8162(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar3 = FUN_148dc823d(param_3,*param_4);
  plVar4 = (longlong *)FUN_145a8ada2();
  lVar8 = plVar4[0x22];
  if (lVar8 == 0) {
    (**(code **)(*plVar4 + 1000))(plVar4);
    lVar8 = plVar4[0x22];
    if (lVar8 == 0) {
      return lVar3;
    }
  }
  lVar1 = *(longlong *)(param_2 + 0x3f8);
  lVar6 = *(longlong *)(lVar8 + 0x58);
  if (lVar6 == 0) {
    uVar5 = FUN_1458f96d4();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(lVar8 + 0x58) = lVar6;
  }
  lVar7 = *(longlong *)(lVar8 + 0x60);
  if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*(longlong *)(lVar8 + 0x50) != 0)) {
    plVar4 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar4 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar2 == '\0')) {
      lVar7 = 0;
    }
    else {
      uVar5 = (**(code **)(*plVar4 + 0x110))(plVar4);
      lVar7 = FUN_144aff482(uVar5,(longlong *)(lVar8 + 0x50));
    }
    *(longlong *)(lVar8 + 0x60) = lVar7;
  }
  *(bool *)(lVar3 + 0x38) = lVar1 == lVar7;
  return lVar3;
}



// FUNCTION 148dc823d FUN_148dc823d body=183 status=ok
// SIG undefined FUN_148dc823d(void)

undefined8 FUN_148dc823d(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_1411bcd44();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc82f6 FUN_148dc82f6 body=53 status=ok
// SIG undefined FUN_148dc82f6(void)

undefined8 FUN_148dc82f6(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144837462(DAT_14cbd12c8,param_1);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  return uVar1;
}



// FUNCTION 148dc83f0 FUN_148dc83f0 body=196 status=ok
// SIG undefined FUN_148dc83f0(void)

longlong * FUN_148dc83f0(longlong param_1,char param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [39];
  char local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = param_2;
  if (*(char *)(param_1 + 0x1f0) == param_2) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = (longlong *)FUN_145d74667();
    *(char *)(plVar1 + 0x3e) = param_2;
    FUN_14485c47a(plVar1 + 0x33,param_1);
    if (param_1 != 0) {
      FUN_14895e4f6(param_1,plVar1);
    }
    (**(code **)(*plVar1 + 0x2a0))(plVar1,*(undefined8 *)(param_1 + 0x168));
    puVar2 = (undefined8 *)FUN_148dd29ec(param_1 + 0x1a0,param_2,&local_21);
    if ((plVar1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(plVar1);
    }
    *puVar2 = plVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc84b6 FUN_148dc84b6 body=71 status=ok
// SIG undefined FUN_148dc84b6(void)

void FUN_148dc84b6(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x1f0) == (char)param_2) {
    return;
  }
  plVar1 = (longlong *)FUN_14008f8aa();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2a8))(plVar1);
  }
  FUN_148dd2f24(param_1 + 0x1a0,param_2);
  return;
}



// FUNCTION 148dc84fe FUN_148dc84fe body=168 status=ok
// SIG undefined FUN_148dc84fe(void)

void FUN_148dc84fe(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0 && param_2 != param_1) {
    lVar1 = FUN_1406f6176();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_28 = param_2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      lVar1 = FUN_148dc85b8(param_1 + 0x1a0,&local_28);
      if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc85b8 FUN_148dc85b8 body=317 status=ok
// SIG undefined FUN_148dc85b8(void)

longlong FUN_148dc85b8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_50 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    lVar4 = 0;
    do {
      iVar3 = iStack_64;
      lVar1 = *local_80;
      lVar2 = *param_2;
      if ((lVar2 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar2);
      }
      if (*(longlong *)(lVar1 + (longlong)iVar3 * 0x18 + 8) == lVar2) {
        lVar4 = (longlong)iStack_64 * 0x18 + *local_80;
        break;
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  else {
    lVar4 = 0;
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 148dc8710 FUN_148dc8710 body=172 status=ok
// SIG undefined FUN_148dc8710(void)

void FUN_148dc8710(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  iVar2 = *(int *)(param_1 + 0x28a0);
  lVar3 = (longlong)iVar2;
  if (lVar3 < 0) {
    *(int *)(param_1 + 0x28a0) = iVar2 + 1;
  }
  else {
    if (iVar2 < *(int *)(param_1 + 0x2658)) {
      lVar1 = FUN_148dc87bc(param_1,iVar2);
      if (lVar1 == 0) {
        plVar4 = (longlong *)(lVar3 * 8 + *(longlong *)(param_1 + 0x2650));
      }
      else {
        FUN_148dc9120(param_1,lVar1,iVar2);
        plVar4 = (longlong *)(lVar3 * 8 + *(longlong *)(param_1 + 0x2650));
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar1);
        }
      }
      *plVar4 = lVar1;
      iVar2 = *(int *)(param_1 + 0x28a0);
    }
    *(int *)(param_1 + 0x28a0) = iVar2 + 1;
    if (2 < iVar2) {
      *(undefined4 *)(param_1 + 0x28a0) = 0;
      FUN_145879996(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148dc87bc FUN_148dc87bc body=2402 status=ok
// SIG undefined FUN_148dc87bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_148dc87bc(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  double dVar2;
  double dVar4;
  undefined1 auVar5 [16];
  longlong *plVar6;
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
  double dVar17;
  double dVar18;
  char cVar19;
  undefined4 uVar20;
  int iVar21;
  longlong lVar22;
  undefined8 uVar23;
  longlong lVar24;
  uint uVar25;
  longlong lVar26;
  ulonglong uVar27;
  undefined1 auVar28 [16];
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar33;
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auStack_3e8 [32];
  undefined8 local_3c8;
  longlong local_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  double local_358;
  double dStack_350;
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  double local_328;
  double dStack_320;
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  undefined1 local_2d8 [16];
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined1 local_2a8;
  byte local_2a6;
  longlong local_298;
  longlong *local_288;
  longlong local_278 [4];
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
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
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  double local_e8;
  ulonglong local_d0;
  double dVar3;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  lVar22 = FUN_1447210f0();
  if (((lVar22 == 0) || (*(longlong *)(param_1 + 0x25f8) == 0)) ||
     (*(longlong *)(*(longlong *)(param_1 + 0x25f8) + 0x4a0) == 0)) {
    lVar22 = 0;
    goto LAB_148dc886a;
  }
  FUN_1411371f6(local_2d8);
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_2a6 = local_2a6 | 2;
  local_2a8 = 1;
  lVar26 = param_1;
  uVar20 = FUN_148dca686(param_1,&local_3b8,param_2);
  auVar41 = _DAT_149934d80;
  local_328 = 0.0;
  dStack_320 = 0.0;
  local_338 = ZEXT816(0);
  auVar30 = *(undefined1 (*) [16])(param_1 + 0x27f0);
  dVar7 = auVar30._0_8_;
  dVar11 = auVar30._8_8_;
  auVar5 = *(undefined1 (*) [16])(param_1 + 0x2800);
  dVar8 = auVar5._0_8_;
  dVar9 = local_378._0_8_;
  dVar12 = local_378._8_8_;
  dVar10 = local_368._0_8_;
  auVar30 = minpd(local_378,auVar30);
  auVar34 = minpd(local_368,auVar5);
  auVar31._8_8_ = -(ulonglong)(auVar30._8_8_ < 0.0);
  auVar31._0_8_ = -(ulonglong)(auVar30._0_8_ < 0.0);
  iVar21 = movmskpd(uVar20,auVar31);
  auVar30._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
  auVar30._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
  uVar25 = movmskpd((int)lVar26,auVar30);
  if ((uVar25 & 0x3fffffff) == 0 && iVar21 == 0) {
    dVar15 = *(double *)(param_1 + 0x27b0);
    dVar16 = *(double *)(param_1 + 0x27b8);
    dVar17 = *(double *)(param_1 + 0x27c0);
    dVar18 = *(double *)(param_1 + 0x27c8);
    dVar29 = *(double *)(param_1 + 0x27c8);
    dVar35 = *(double *)(param_1 + 0x27c8);
    dVar38 = *(double *)(param_1 + 0x27b0);
    dVar40 = *(double *)(param_1 + 0x27b0);
    dVar2 = *(double *)(param_1 + 0x27b8);
    dVar3 = *(double *)(param_1 + 0x27b8);
    dVar33 = *(double *)(param_1 + 0x27c0);
    dVar4 = *(double *)(param_1 + 0x27c0);
    local_358 = dStack_3b0 * dVar33 * -1.0 +
                local_3a8 * dVar2 + dStack_3a0 * dVar38 * 1.0 + local_3b8 * dVar29;
    dStack_350 = local_3b8 * dVar4 * 1.0 +
                 dStack_3a0 * dVar3 + local_3a8 * dVar40 * -1.0 + dStack_3b0 * dVar35;
    local_398 = local_398 * dVar7;
    dStack_390 = dStack_390 * dVar11;
    local_388 = local_388 * dVar8;
    dStack_380 = dStack_380 * auVar5._8_8_;
    dVar36 = dStack_390 * dVar15 - dVar16 * local_398;
    dVar37 = local_388 * dVar16 - dVar17 * dStack_390;
    dVar39 = local_398 * dVar17 - dVar15 * local_388;
    dVar14 = dStack_380 * dVar18 - dVar18 * dStack_380;
    dVar37 = dVar37 + dVar37;
    dVar39 = dVar39 + dVar39;
    dVar36 = dVar36 + dVar36;
    dVar14 = dVar14 + dVar14;
    dVar13 = (dVar37 * dVar17 - dVar36 * dVar15) + dVar35 * dVar39 + dStack_390 +
             *(double *)(param_1 + 0x27d8);
    local_328 = (dVar39 * dVar15 - dVar16 * dVar37) + dVar29 * dVar36 + local_388 +
                *(double *)(param_1 + 0x27e0);
    dStack_320 = (dVar14 * dVar18 - dVar14 * dVar18) + dVar35 * dVar14 + dStack_380 +
                 *(double *)(param_1 + 0x27e8);
    local_348._8_8_ =
         local_3a8 * dVar4 * -1.0 +
         ((dVar40 * local_3b8 * -1.0 + dStack_3a0 * dVar35) - dStack_3b0 * dVar3);
    local_348._0_8_ =
         dStack_3a0 * dVar33 * 1.0 +
         ((dVar38 * dStack_3b0 * 1.0 + local_3a8 * dVar29) - local_3b8 * dVar2);
    local_338._8_4_ = SUB84(dVar13,0);
    local_338._0_8_ =
         (dVar36 * dVar16 - dVar17 * dVar39) + dVar29 * dVar37 + local_398 +
         *(double *)(param_1 + 0x27d0);
    local_338._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  }
  else {
    dVar2 = *(double *)(param_1 + 0x27b0);
    dVar3 = *(double *)(param_1 + 0x27b8);
    dVar4 = *(double *)(param_1 + 0x27c0);
    dVar33 = dVar3 + dVar3;
    dVar36 = dVar4 + dVar4;
    dVar35 = dVar2 * (dVar2 + dVar2);
    local_188 = (1.0 - (dVar35 + dVar3 * dVar33)) * dVar8;
    dVar40 = *(double *)(param_1 + 0x27b0) * dVar36;
    dVar29 = *(double *)(param_1 + 0x27c8);
    dVar37 = dVar36 * dVar29;
    dVar39 = (dVar2 + dVar2) * *(double *)(param_1 + 0x27c8);
    dVar29 = dVar33 * dVar29;
    local_198 = (dVar29 + dVar40) * dVar8;
    dVar35 = (DAT_149934d80._8_8_ - (dVar4 * dVar36 + dVar35)) * dVar11;
    dVar38 = (dVar33 * dVar2 + dVar37) * dVar7;
    local_1a8 = (dVar36 * dVar3 + dVar39) * dVar11;
    dStack_190 = (dVar36 * dVar3 - dVar39) * dVar8;
    local_1c8 = (dVar40 - dVar29) * dVar7;
    local_1d8._8_4_ = SUB84(dVar38,0);
    local_1d8._0_8_ = ((double)DAT_149934d80 - (dVar4 * dVar36 + dVar3 * dVar33)) * dVar7;
    local_1d8._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
    uStack_1c0 = 0;
    local_1b8._8_4_ = SUB84(dVar35,0);
    local_1b8._0_8_ = (dVar33 * dVar2 - dVar37) * dVar11;
    local_1b8._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
    uStack_1a0 = 0;
    uStack_180 = 0;
    local_178 = *(undefined8 *)(param_1 + 0x27d0);
    uStack_170 = *(undefined8 *)(param_1 + 0x27d8);
    local_168 = *(undefined8 *)(param_1 + 0x27e0);
    uStack_160 = 0x3ff0000000000000;
    dVar35 = dStack_3b0 + dStack_3b0;
    dVar38 = local_3a8 + local_3a8;
    dVar29 = local_3b8 * (local_3b8 + local_3b8);
    local_208 = (1.0 - (dVar29 + dStack_3b0 * dVar35)) * dVar10;
    dVar40 = (local_3b8 + local_3b8) * dStack_3a0;
    local_218 = (dVar35 * dStack_3a0 + local_3b8 * dVar38) * dVar10;
    dStack_210 = (dVar38 * dStack_3b0 - dVar40) * dVar10;
    local_258 = ((double)DAT_149934d80 - (local_3a8 * dVar38 + dStack_3b0 * dVar35)) * dVar9;
    dVar29 = (DAT_149934d80._8_8_ - (local_3a8 * dVar38 + dVar29)) * dVar12;
    dStack_250 = (dVar35 * local_3b8 + dVar38 * dStack_3a0) * dVar9;
    local_228 = (dVar38 * dStack_3b0 + dVar40) * dVar12;
    local_248 = (local_3b8 * dVar38 - dVar35 * dStack_3a0) * dVar9;
    uStack_240 = 0;
    local_238._8_4_ = SUB84(dVar29,0);
    local_238._0_8_ = (dVar35 * local_3b8 - dVar38 * dStack_3a0) * dVar12;
    local_238._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
    uStack_220 = 0;
    uStack_200 = 0;
    local_1f8 = local_398;
    dStack_1f0 = dStack_390;
    local_1e8 = local_388;
    uStack_1e0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_158);
    FUN_144a1c686(&local_158,0x3e45798ee0000000);
    auVar34._8_8_ = -(ulonglong)(0.0 <= dVar11 * dVar12);
    auVar34._0_8_ = -(ulonglong)(0.0 <= dVar7 * dVar9);
    auVar30 = blendvpd(_DAT_149936790,auVar41,auVar34);
    uVar27 = -(ulonglong)(0.0 <= dVar8 * dVar10);
    dVar29 = (double)(~uVar27 & 0xbff0000000000000 | uVar27 & 0x3ff0000000000000);
    dVar35 = auVar30._0_8_;
    local_148 = local_148 * dVar35;
    local_150 = local_150 * dVar35;
    local_158 = local_158 * dVar35;
    dVar35 = auVar30._8_8_;
    local_128 = local_128 * dVar35;
    local_130 = local_130 * dVar35;
    local_138 = dVar35 * local_138;
    local_108 = local_108 * dVar29;
    local_110 = local_110 * dVar29;
    local_118 = dVar29 * local_118;
    FUN_14481fd10(&local_2f8,&local_158);
    dVar29 = local_2e8 * local_2e8 + local_2f8 * local_2f8;
    dVar35 = dStack_2e0 * dStack_2e0 + dStack_2f0 * dStack_2f0;
    auVar32._0_8_ = dVar29 + dVar35;
    auVar32._8_8_ = dVar29 + dVar35;
    auVar28._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar32._8_8_);
    auVar28._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar32._0_8_);
    auVar30 = sqrtpd(auVar32,auVar32);
    auVar30 = divpd(auVar41,auVar30);
    auVar41._0_8_ = auVar30._0_8_ * local_2e8;
    auVar41._8_8_ = auVar30._8_8_ * dStack_2e0;
    local_358 = (double)((ulonglong)(local_2f8 * auVar30._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar32._0_8_));
    dStack_350 = (double)((ulonglong)(dStack_2f0 * auVar30._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar32._8_8_));
    local_348 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar41,auVar28);
    local_338._8_8_ = uStack_f0;
    local_338._0_8_ = local_f8;
    local_328 = local_e8;
    dStack_320 = 0.0;
  }
  dVar29 = auVar5._8_8_ * local_368._8_8_;
  local_318._8_4_ = SUB84(dVar11 * dVar12,0);
  local_318._0_8_ = dVar7 * dVar9;
  local_318._12_4_ = (int)((ulonglong)(dVar11 * dVar12) >> 0x20);
  local_308._8_4_ = SUB84(dVar29,0);
  local_308._0_8_ = dVar8 * dVar10;
  local_308._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
  uVar23 = FUN_14595e2bc();
  lVar22 = FUN_141037e38(lVar22,uVar23,&local_358,local_2d8);
  if (lVar22 != 0) {
    lVar26 = *(longlong *)(param_1 + 0x25f8);
    lVar24 = *(longlong *)(lVar26 + 0x4a8);
    if (lVar24 == 0) {
      uVar23 = FUN_140de9e7e();
      lVar24 = FUN_14477b664(uVar23);
      *(longlong *)(lVar26 + 0x4a8) = lVar24;
    }
    if (((*(longlong *)(lVar26 + 0x4b0) == 0) && (lVar24 != 0)) &&
       (*(longlong *)(lVar26 + 0x4a0) != 0)) {
      plVar6 = *(longlong **)(lVar24 + 0xb8);
      if (plVar6 == (longlong *)0x0) {
LAB_148dc911b:
        uVar23 = 0;
      }
      else {
        cVar19 = (**(code **)(*plVar6 + 0x108))(plVar6);
        if (cVar19 == '\0') goto LAB_148dc911b;
        uVar23 = (**(code **)(*plVar6 + 0x110))(plVar6);
        uVar23 = FUN_144aff482(uVar23,(longlong *)(lVar26 + 0x4a0));
      }
      *(undefined8 *)(lVar26 + 0x4b0) = uVar23;
    }
    FUN_140861c24(&local_158);
    uVar23 = FUN_1437e8bc6(&local_158,1);
    uVar23 = FUN_147e1ef70(uVar23,0);
    FUN_140fb05f2(uVar23,local_1d8);
    FUN_140861dac(&local_158);
    uVar23 = FUN_1415c99d8(lVar22 + 0x400);
    local_3c8 = local_1d8._0_8_;
    local_3c0 = local_1d8._8_8_;
    if (local_1d8._8_8_ != 0) {
      LOCK();
      *(int *)(local_1d8._8_8_ + 8) = *(int *)(local_1d8._8_8_ + 8) + 1;
      UNLOCK();
    }
    FUN_1405f862c(uVar23,&local_3c8);
    uVar23 = local_1d8._8_8_;
    if ((longlong *)local_1d8._8_8_ != (longlong *)0x0) {
      LOCK();
      plVar6 = (longlong *)(local_1d8._8_8_ + 8);
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (*(code *)**(undefined8 **)local_1d8._8_8_)(local_1d8._8_8_);
        LOCK();
        piVar1 = (int *)(uVar23 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*(longlong *)uVar23 + 0x10))(uVar23);
        }
      }
    }
  }
  if (local_298 != 0) {
    if (local_288 == (longlong *)0x0) {
      local_288 = local_278;
    }
    (**(code **)(*local_288 + 0x10))();
  }
LAB_148dc886a:
  if ((local_d0 ^ (ulonglong)auStack_3e8) == DAT_14c707940) {
    return lVar22;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dc9120 FUN_148dc9120 body=4723 status=ok
// SIG undefined FUN_148dc9120(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148dc9120(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  double *pdVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  double *pdVar7;
  double *pdVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar19;
  undefined1 auVar18 [16];
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar34;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  double dVar38;
  undefined4 uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auStack_448 [32];
  undefined4 local_428;
  undefined1 *local_420;
  double *local_418;
  undefined1 local_408 [16];
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  undefined1 local_378 [8];
  longlong local_370;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
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
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
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
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_448;
  if ((*(longlong *)(param_1 + 0x25f8) != 0) && (1 < *(int *)(param_1 + 0x26a0))) {
    iVar5 = (int)param_1 + 0x2690;
    uVar3 = SUB84(local_378,0);
    FUN_145c8f480();
    dVar12 = DAT_14c8462d0;
    dVar20 = DAT_14c8462c8;
    dVar35 = DAT_14c8462c0;
    dVar30 = (double)((float)param_3 * 0.25 * 6.2831855) * 0.5;
    dVar10 = sin(dVar30);
    dVar11 = cos(dVar30);
    auVar24 = _DAT_149934d80;
    dVar35 = dVar35 * dVar10;
    dVar20 = dVar20 * dVar10;
    dVar26 = -dVar35;
    dVar29 = -dVar20;
    dVar38 = dVar12 * dVar10 * -1.0;
    dVar11 = dVar11 * 1.0;
    dVar12 = dVar35 * -0.0 - dVar29 * 0.0;
    dVar10 = dVar20 * -0.0 - dVar38 * 0.0;
    dVar30 = dVar38 * 0.0 - dVar26 * 0.0;
    dVar10 = dVar10 + dVar10;
    dVar30 = dVar30 + dVar30;
    dVar12 = dVar12 + dVar12;
    dVar17 = 0.0 - ((dVar12 * dVar29 - dVar30 * dVar38) + dVar11 * dVar10 + 0.0);
    dVar19 = 0.0 - (dVar12 * dVar35 + dVar38 * dVar10 + dVar11 * dVar30 + 0.0);
    dVar13 = 0.0 - (dVar11 * dVar12 + 0.0 + (dVar30 * dVar26 - dVar10 * dVar29));
    auVar32 = *(undefined1 (*) [16])(local_370 + 0x100);
    dVar12 = auVar32._0_8_;
    dVar30 = auVar32._8_8_;
    auVar21 = *(undefined1 (*) [16])(local_370 + 0x110);
    dVar10 = auVar21._0_8_;
    auVar40 = minpd(auVar32,_DAT_149934d80);
    auVar44 = minpd(auVar21,ZEXT816(0x3ff0000000000000));
    auVar41._8_8_ = -(ulonglong)(auVar40._8_8_ < 0.0);
    auVar41._0_8_ = -(ulonglong)(auVar40._0_8_ < 0.0);
    iVar4 = movmskpd(uVar3,auVar41);
    auVar40._8_8_ = -(ulonglong)(auVar44._8_8_ < 0.0);
    auVar40._0_8_ = -(ulonglong)(auVar44._0_8_ < 0.0);
    uVar6 = movmskpd(iVar5,auVar40);
    if ((uVar6 & 0x3fffffff) == 0 && iVar4 == 0) {
      dVar27 = *(double *)(local_370 + 0xe0);
      dVar28 = *(double *)(local_370 + 0xe8);
      dVar20 = *(double *)(local_370 + 0xf0) * 1.0;
      dVar12 = *(double *)(local_370 + 0xf8) * 0.0;
      dVar31 = dVar28 * dVar26 - dVar29 * dVar27;
      dVar34 = dVar20 * dVar29 - dVar38 * dVar28;
      dVar43 = dVar27 * dVar38 - dVar26 * dVar20;
      dVar30 = dVar12 * dVar11 - dVar11 * dVar12;
      dVar34 = dVar34 + dVar34;
      dVar43 = dVar43 + dVar43;
      dVar31 = dVar31 + dVar31;
      dVar30 = dVar30 + dVar30;
      dVar35 = (dVar30 * dVar11 - dVar30 * dVar11) + dVar11 * dVar30 + dVar12 + 0.0;
      dVar12 = dVar17 + (dVar31 * dVar29 - dVar38 * dVar43) + dVar11 * dVar34 + dVar27;
      dVar30 = dVar19 + (dVar34 * dVar38 - dVar31 * dVar26) + dVar11 * dVar43 + dVar28;
      dVar20 = dVar13 + (dVar43 * dVar26 - dVar29 * dVar34) + dVar11 * dVar31 + dVar20;
    }
    else {
      dVar20 = dVar29 - dVar20;
      dVar27 = dVar38 + dVar38;
      dVar28 = (dVar26 - dVar35) * dVar26;
      dVar31 = DAT_149934d80._8_8_ - (dVar38 * dVar27 + dVar28);
      local_188 = 1.0 - (dVar28 + dVar20 * dVar29);
      dStack_190 = (dVar26 - dVar35) * dVar11;
      dVar35 = dVar20 * dVar26 + dVar27 * dVar11;
      local_1a8 = dVar27 * dVar29 + dStack_190;
      local_198 = dVar20 * dVar11 + dVar26 * dVar27;
      dStack_190 = dVar27 * dVar29 - dStack_190;
      local_1c8 = dVar26 * dVar27 - dVar20 * dVar11;
      local_1d8._8_4_ = SUB84(dVar35,0);
      local_1d8._0_8_ = (double)DAT_149934d80 - (dVar38 * dVar27 + dVar20 * dVar29);
      local_1d8._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
      uStack_1c0 = 0;
      local_1b8._8_4_ = SUB84(dVar31,0);
      local_1b8._0_8_ = dVar20 * dVar26 - dVar27 * dVar11;
      local_1b8._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
      uStack_1a0 = 0;
      uStack_180 = 0;
      local_178._8_8_ = dVar19;
      local_178._0_8_ = dVar17;
      uStack_160 = 0x3ff0000000000000;
      dVar35 = *(double *)(local_370 + 0xc0);
      dVar17 = *(double *)(local_370 + 200);
      dVar19 = *(double *)(local_370 + 0xd0);
      dVar26 = dVar17 + dVar17;
      dVar29 = dVar19 + dVar19;
      dVar38 = dVar35 * (dVar35 + dVar35);
      local_258 = ((double)DAT_149934d80 - (dVar19 * dVar29 + dVar17 * dVar26)) * dVar12;
      local_208 = (1.0 - (dVar38 + dVar17 * dVar26)) * dVar10;
      dVar11 = *(double *)(local_370 + 0xc0) * dVar29;
      dVar20 = *(double *)(local_370 + 0xd8);
      dVar31 = dVar29 * dVar20;
      dVar27 = (dVar35 + dVar35) * *(double *)(local_370 + 0xd8);
      dVar20 = dVar26 * dVar20;
      dStack_250 = (dVar26 * dVar35 + dVar31) * dVar12;
      local_228 = (dVar29 * dVar17 + dVar27) * dVar30;
      local_218 = (dVar20 + dVar11) * dVar10;
      dStack_210 = (dVar29 * dVar17 - dVar27) * dVar10;
      local_248 = (dVar11 - dVar20) * dVar12;
      uStack_240 = 0;
      local_238._8_8_ = (DAT_149934d80._8_8_ - (dVar19 * dVar29 + dVar38)) * dVar30;
      local_238._0_8_ = (dVar26 * dVar35 - dVar31) * dVar30;
      uStack_220 = 0;
      uStack_200 = 0;
      local_1f8 = *(double *)(local_370 + 0xe0);
      dStack_1f0 = *(double *)(local_370 + 0xe8);
      local_1e8 = *(double *)(local_370 + 0xf0);
      uStack_1e0 = 0x3ff0000000000000;
      local_168 = dVar13;
      FUN_1447fea8d(&local_158);
      FUN_144a1c686(&local_158,0x3e45798ee0000000);
      auVar44._8_8_ = -(ulonglong)(0.0 <= dVar30);
      auVar44._0_8_ = -(ulonglong)(0.0 <= dVar12);
      auVar24 = blendvpd(_DAT_149936790,auVar24,auVar44);
      uVar9 = -(ulonglong)(0.0 <= dVar10 * 1.0);
      dVar12 = (double)(~uVar9 & 0xbff0000000000000 | uVar9 & 0x3ff0000000000000);
      dVar30 = auVar24._0_8_;
      local_148 = local_148 * dVar30;
      dStack_150 = dStack_150 * dVar30;
      local_158 = local_158 * dVar30;
      dVar30 = auVar24._8_8_;
      local_128 = local_128 * dVar30;
      local_130 = local_130 * dVar30;
      local_138 = dVar30 * local_138;
      local_108 = local_108 * dVar12;
      local_110 = local_110 * dVar12;
      local_118 = dVar12 * local_118;
      FUN_14481fd10(&local_3f8,&local_158);
      dVar35 = 0.0;
      dVar12 = local_f8;
      dVar30 = dStack_f0;
      dVar20 = local_e8;
    }
    dVar38 = auVar21._8_8_ * 0.0;
    *(double *)(local_370 + 0xe0) = dVar12;
    *(double *)(local_370 + 0xe8) = dVar30;
    *(double *)(local_370 + 0xf0) = dVar20;
    *(double *)(local_370 + 0xf8) = dVar35;
    *(undefined1 (*) [16])(local_370 + 0x100) = auVar32;
    auVar32._8_4_ = SUB84(dVar38,0);
    auVar32._0_8_ = dVar10 * 1.0;
    auVar32._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
    *(undefined1 (*) [16])(local_370 + 0x110) = auVar32;
    FUN_14892924e(param_2,local_378);
    FUN_148d48454(param_2,param_1);
    pdVar7 = &local_3f8;
    FUN_148dca686(param_1,pdVar7,param_3);
    auVar32 = _DAT_149934d80;
    pdVar8 = (double *)(*(longlong *)(param_1 + 0x1c8) + 0x240);
    pdVar2 = (double *)&DAT_14c846480;
    if (*(longlong *)(param_1 + 0x1c8) != 0) {
      pdVar2 = pdVar8;
    }
    auVar21 = *(undefined1 (*) [16])(pdVar2 + 8);
    dVar12 = auVar21._0_8_;
    dVar38 = auVar21._8_8_;
    auVar24 = *(undefined1 (*) [16])(pdVar2 + 10);
    dVar10 = auVar24._0_8_;
    dVar30 = local_3b8._0_8_;
    dVar11 = local_3b8._8_8_;
    dVar20 = local_3a8._0_8_;
    auVar21 = minpd(local_3b8,auVar21);
    auVar40 = minpd(local_3a8,auVar24);
    auVar22._8_8_ = -(ulonglong)(auVar21._8_8_ < 0.0);
    auVar22._0_8_ = -(ulonglong)(auVar21._0_8_ < 0.0);
    iVar5 = movmskpd((int)pdVar8,auVar22);
    auVar21._8_8_ = -(ulonglong)(auVar40._8_8_ < 0.0);
    auVar21._0_8_ = -(ulonglong)(auVar40._0_8_ < 0.0);
    uVar6 = movmskpd((int)pdVar7,auVar21);
    if ((uVar6 & 0x3fffffff) == 0 && iVar5 == 0) {
      dVar31 = *pdVar2;
      dVar27 = pdVar2[1];
      dVar28 = pdVar2[2];
      dVar13 = pdVar2[3];
      dVar35 = pdVar2[3];
      dVar19 = pdVar2[1];
      dVar17 = pdVar2[1];
      dVar26 = pdVar2[2];
      dVar29 = pdVar2[2];
      dVar34 = dStack_3f0 * dVar26 * -1.0 +
               local_3e8 * dVar19 + dStack_3e0 * *pdVar2 * 1.0 + local_3f8 * dVar13;
      dVar43 = local_3f8 * dVar29 * 1.0 +
               dStack_3e0 * dVar17 + local_3e8 * *pdVar2 * -1.0 + dStack_3f0 * dVar35;
      auVar37._0_8_ =
           dStack_3e0 * dVar26 * 1.0 +
           ((*pdVar2 * dStack_3f0 * 1.0 + local_3e8 * dVar13) - local_3f8 * dVar19);
      auVar37._8_8_ =
           local_3e8 * dVar29 * -1.0 +
           ((*pdVar2 * local_3f8 * -1.0 + dStack_3e0 * dVar35) - dStack_3f0 * dVar17);
      local_3d8 = local_3d8 * dVar12;
      dStack_3d0 = dStack_3d0 * dVar38;
      local_3c8 = local_3c8 * dVar10;
      dVar17 = dStack_3d0 * dVar31 - dVar27 * local_3d8;
      dVar19 = local_3c8 * dVar27 - dVar28 * dStack_3d0;
      dVar29 = local_3d8 * dVar28 - dVar31 * local_3c8;
      dVar19 = dVar19 + dVar19;
      dVar29 = dVar29 + dVar29;
      dVar17 = dVar17 + dVar17;
      dVar26 = (dVar17 * dVar27 - dVar28 * dVar29) + dVar13 * dVar19 + local_3d8 + pdVar2[4];
      dVar35 = (dVar19 * dVar28 - dVar17 * dVar31) + dVar35 * dVar29 + dStack_3d0 + pdVar2[5];
      dVar13 = (dVar29 * dVar31 - dVar27 * dVar19) + dVar13 * dVar17 + local_3c8 + pdVar2[6];
      auVar42._8_8_ = dVar11 * dVar38;
      auVar42._0_8_ = dVar30 * dVar12;
      uVar3 = 0;
    }
    else {
      dVar19 = *pdVar2;
      dVar26 = pdVar2[1];
      dVar29 = pdVar2[2];
      dVar31 = dVar26 + dVar26;
      dVar27 = dVar29 + dVar29;
      dVar13 = dVar19 * (dVar19 + dVar19);
      local_188 = (1.0 - (dVar13 + dVar26 * dVar31)) * dVar10;
      dVar35 = pdVar2[3];
      dVar28 = dVar27 * dVar35;
      dVar34 = (dVar19 + dVar19) * pdVar2[3];
      dVar35 = dVar31 * dVar35;
      local_198 = (dVar35 + *pdVar2 * dVar27) * dVar10;
      dVar17 = (dVar31 * dVar19 + dVar28) * dVar12;
      local_1a8 = (dVar27 * dVar26 + dVar34) * dVar38;
      dStack_190 = (dVar27 * dVar26 - dVar34) * dVar10;
      local_1c8 = (*pdVar2 * dVar27 - dVar35) * dVar12;
      local_1d8._8_4_ = SUB84(dVar17,0);
      local_1d8._0_8_ = ((double)DAT_149934d80 - (dVar29 * dVar27 + dVar26 * dVar31)) * dVar12;
      local_1d8._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
      uStack_1c0 = 0;
      local_1b8._8_8_ = (DAT_149934d80._8_8_ - (dVar29 * dVar27 + dVar13)) * dVar38;
      local_1b8._0_8_ = (dVar31 * dVar19 - dVar28) * dVar38;
      uStack_1a0 = 0;
      uStack_180 = 0;
      local_178 = *(undefined1 (*) [16])(pdVar2 + 4);
      local_168 = pdVar2[6];
      uStack_160 = 0x3ff0000000000000;
      dVar13 = dStack_3f0 + dStack_3f0;
      dVar17 = local_3e8 + local_3e8;
      dVar35 = local_3f8 * (local_3f8 + local_3f8);
      local_208 = (1.0 - (dVar35 + dStack_3f0 * dVar13)) * dVar20;
      dVar19 = (local_3f8 + local_3f8) * dStack_3e0;
      local_218 = (dVar13 * dStack_3e0 + local_3f8 * dVar17) * dVar20;
      dStack_210 = (dVar17 * dStack_3f0 - dVar19) * dVar20;
      auVar42._0_8_ = dVar12 * dVar30;
      auVar42._8_8_ = dVar38 * dVar11;
      local_258 = ((double)DAT_149934d80 - (local_3e8 * dVar17 + dStack_3f0 * dVar13)) * dVar30;
      dVar12 = (DAT_149934d80._8_8_ - (local_3e8 * dVar17 + dVar35)) * dVar11;
      dStack_250 = (dVar13 * local_3f8 + dVar17 * dStack_3e0) * dVar30;
      local_228 = (dVar17 * dStack_3f0 + dVar19) * dVar11;
      local_248 = (local_3f8 * dVar17 - dVar13 * dStack_3e0) * dVar30;
      uStack_240 = 0;
      local_238._8_4_ = SUB84(dVar12,0);
      local_238._0_8_ = (dVar13 * local_3f8 - dVar17 * dStack_3e0) * dVar11;
      local_238._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      uStack_220 = 0;
      uStack_200 = 0;
      local_1f8 = local_3d8;
      dStack_1f0 = dStack_3d0;
      local_1e8 = local_3c8;
      uStack_1e0 = 0x3ff0000000000000;
      pdVar8 = &local_158;
      FUN_1447fea8d(pdVar8);
      FUN_144a1c686(pdVar8,0x3e45798ee0000000);
      auVar14._8_8_ = -(ulonglong)(0.0 <= auVar42._8_8_);
      auVar14._0_8_ = -(ulonglong)(0.0 <= auVar42._0_8_);
      auVar21 = blendvpd(_DAT_149936790,auVar32,auVar14);
      uVar9 = -(ulonglong)(0.0 <= dVar10 * dVar20);
      dVar12 = (double)(~uVar9 & 0xbff0000000000000 | uVar9 & 0x3ff0000000000000);
      dVar30 = auVar21._0_8_;
      local_148 = local_148 * dVar30;
      dStack_150 = dStack_150 * dVar30;
      local_158 = local_158 * dVar30;
      dVar30 = auVar21._8_8_;
      local_128 = local_128 * dVar30;
      local_130 = local_130 * dVar30;
      local_138 = dVar30 * local_138;
      local_108 = local_108 * dVar12;
      local_110 = local_110 * dVar12;
      local_118 = dVar12 * local_118;
      iVar5 = (int)&local_398;
      FUN_14481fd10();
      uVar3 = SUB84(pdVar8,0);
      dVar12 = local_388 * local_388 + local_398 * local_398;
      dVar30 = dStack_380 * dStack_380 + dStack_390 * dStack_390;
      auVar23._0_8_ = dVar12 + dVar30;
      auVar23._8_8_ = dVar12 + dVar30;
      auVar15._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar23._8_8_);
      auVar15._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar23._0_8_);
      auVar21 = sqrtpd(auVar23,auVar23);
      auVar32 = divpd(auVar32,auVar21);
      auVar33._0_8_ = auVar32._0_8_ * local_388;
      auVar33._8_8_ = auVar32._8_8_ * dStack_380;
      dVar34 = (double)((ulonglong)(local_398 * auVar32._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar23._0_8_));
      dVar43 = (double)((ulonglong)(dStack_390 * auVar32._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar23._8_8_));
      auVar37 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar33,auVar15);
      dVar26 = local_f8;
      dVar35 = dStack_f0;
      dVar13 = local_e8;
    }
    auVar40 = _DAT_149934d80;
    dVar38 = auVar24._8_8_ * local_3a8._8_8_;
    dVar10 = dVar10 * dVar20;
    uVar39 = (undefined4)((ulonglong)dVar35 >> 0x20);
    auVar32 = *(undefined1 (*) [16])(local_370 + 0x100);
    dVar12 = auVar32._0_8_;
    dVar30 = auVar32._8_8_;
    auVar21 = *(undefined1 (*) [16])(local_370 + 0x110);
    auVar32 = minpd(auVar32,auVar42);
    auVar24._8_4_ = SUB84(dVar38,0);
    auVar24._0_8_ = dVar10;
    auVar24._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
    auVar24 = minpd(auVar21,auVar24);
    auVar18._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
    auVar18._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
    iVar5 = movmskpd(iVar5,auVar18);
    auVar25._8_8_ = -(ulonglong)(auVar24._8_8_ < 0.0);
    auVar25._0_8_ = -(ulonglong)(auVar24._0_8_ < 0.0);
    uVar6 = movmskpd(uVar3,auVar25);
    dVar20 = auVar37._0_8_;
    dVar38 = auVar37._8_8_;
    dVar11 = auVar42._0_8_;
    dVar17 = auVar42._8_8_;
    if ((uVar6 & 0x3fffffff) == 0 && iVar5 == 0) {
      dVar11 = dVar11 * *(double *)(local_370 + 0xe0);
      dVar17 = dVar17 * *(double *)(local_370 + 0xe8);
      dVar10 = dVar10 * *(double *)(local_370 + 0xf0);
      dVar12 = dVar17 * dVar34 - dVar43 * dVar11;
      dVar30 = dVar10 * dVar43 - dVar20 * dVar17;
      dVar19 = dVar11 * dVar20 - dVar34 * dVar10;
      dVar30 = dVar30 + dVar30;
      dVar19 = dVar19 + dVar19;
      dVar12 = dVar12 + dVar12;
      local_f8 = (dVar12 * dVar43 - dVar20 * dVar19) + dVar38 * dVar30 + dVar11 + dVar26;
      dStack_f0 = (dVar30 * dVar20 - dVar12 * dVar34) + dVar38 * dVar19 + dVar17 + dVar35;
      local_e8 = (dVar19 * dVar34 - dVar43 * dVar30) + dVar38 * dVar12 + dVar10 + dVar13;
    }
    else {
      dVar19 = dVar43 + dVar43;
      dVar31 = dVar20 + dVar20;
      dVar29 = dVar34 * (dVar34 + dVar34);
      local_188 = (1.0 - (dVar29 + dVar43 * dVar19)) * dVar10;
      dVar27 = (dVar34 + dVar34) * dVar38;
      dStack_190 = (dVar31 * dVar43 - dVar27) * dVar10;
      local_1a8 = (dVar31 * dVar43 + dVar27) * dVar17;
      local_198 = (dVar34 * dVar31 + dVar19 * dVar38) * dVar10;
      local_1c8 = (dVar34 * dVar31 - dVar19 * dVar38) * dVar11;
      local_1d8._8_8_ = (dVar19 * dVar34 + dVar31 * dVar38) * dVar11;
      local_1d8._0_8_ = (1.0 - (dVar20 * dVar31 + dVar43 * dVar19)) * dVar11;
      uStack_1c0 = 0;
      local_1b8._8_8_ = (1.0 - (dVar20 * dVar31 + dVar29)) * dVar17;
      local_1b8._0_8_ = (dVar19 * dVar34 - dVar31 * dVar38) * dVar17;
      uStack_1a0 = 0;
      uStack_180 = 0;
      local_178._8_4_ = SUB84(dVar35,0);
      local_178._0_8_ = dVar26;
      local_178._12_4_ = uVar39;
      uStack_160 = 0x3ff0000000000000;
      dVar38 = *(double *)(local_370 + 0xc0);
      dVar19 = *(double *)(local_370 + 200);
      dVar29 = *(double *)(local_370 + 0xd0);
      dVar31 = dVar19 + dVar19;
      dVar27 = dVar29 + dVar29;
      dVar43 = dVar38 * (dVar38 + dVar38);
      dVar36 = *(double *)(local_370 + 0xc0) * dVar27;
      dVar20 = *(double *)(local_370 + 0xd8);
      dVar28 = dVar27 * dVar20;
      dVar34 = (dVar38 + dVar38) * *(double *)(local_370 + 0xd8);
      dVar20 = dVar31 * dVar20;
      local_408._0_8_ = auVar21._0_8_;
      uVar1 = local_408._0_8_;
      dStack_210 = (dVar27 * dVar19 - dVar34) * (double)local_408._0_8_;
      local_258 = ((double)DAT_149934d80 - (dVar29 * dVar27 + dVar19 * dVar31)) * dVar12;
      dStack_250 = (dVar31 * dVar38 + dVar28) * dVar12;
      local_228 = (dVar27 * dVar19 + dVar34) * dVar30;
      local_218 = (dVar20 + dVar36) * (double)local_408._0_8_;
      local_248 = (dVar36 - dVar20) * dVar12;
      uStack_240 = 0;
      local_238._8_8_ = (DAT_149934d80._8_8_ - (dVar29 * dVar27 + dVar43)) * dVar30;
      local_238._0_8_ = (dVar31 * dVar38 - dVar28) * dVar30;
      uStack_220 = 0;
      local_208 = (1.0 - (dVar43 + dVar19 * dVar31)) * (double)local_408._0_8_;
      uStack_200 = 0;
      local_1f8 = *(double *)(local_370 + 0xe0);
      dStack_1f0 = *(double *)(local_370 + 0xe8);
      local_1e8 = *(double *)(local_370 + 0xf0);
      uStack_1e0 = 0x3ff0000000000000;
      local_408 = auVar21;
      local_168 = dVar13;
      FUN_1447fea8d(&local_158);
      FUN_144a1c686(&local_158,0x3e45798ee0000000);
      auVar16._8_8_ = -(ulonglong)(0.0 <= dVar17 * dVar30);
      auVar16._0_8_ = -(ulonglong)(0.0 <= dVar11 * dVar12);
      auVar32 = blendvpd(_DAT_149936790,auVar40,auVar16);
      uVar9 = -(ulonglong)(0.0 <= dVar10 * (double)uVar1);
      dVar12 = (double)(~uVar9 & 0xbff0000000000000 |
                       (ulonglong)((uint)(uVar9 >> 0x20) & 0x3ff00000) << 0x20);
      dVar10 = auVar32._0_8_;
      local_148 = local_148 * dVar10;
      dStack_150 = dStack_150 * dVar10;
      local_158 = local_158 * dVar10;
      dVar10 = auVar32._8_8_;
      local_128 = local_128 * dVar10;
      local_130 = local_130 * dVar10;
      local_138 = dVar10 * local_138;
      local_108 = local_108 * dVar12;
      local_110 = local_110 * dVar12;
      local_118 = dVar12 * local_118;
      FUN_14481fd10(&local_3f8,&local_158);
    }
    local_418 = &local_158;
    local_420 = local_1d8;
    local_1d8._8_4_ = SUB84(dVar35,0);
    local_1d8._0_8_ = dVar26;
    local_1d8._12_4_ = uVar39;
    local_428 = *(undefined4 *)(param_1 + 0x2880);
    local_1c8 = dVar13;
    local_158 = local_f8;
    dStack_150 = dStack_f0;
    local_148 = local_e8;
    FUN_148cb4a04(param_1 + 0x2888,param_2,param_3);
    FUN_14129d1b2(local_378);
  }
  if ((local_d0 ^ (ulonglong)auStack_448) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dca394 FUN_148dca394 body=753 status=ok
// SIG undefined FUN_148dca394(void)

void FUN_148dca394(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined2 local_a0 [2];
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(char *)(param_1 + 0x178) != '\x03') goto LAB_148dca62d;
  lVar5 = FUN_1447210f0();
  if (lVar5 == 0) goto LAB_148dca62d;
  if (*(longlong *)(param_1 + 0x28a8) == 0) {
LAB_148dca550:
    uVar6 = FUN_144a88394(lVar5);
    local_b0 = (undefined8 *)0x0;
    local_a8 = 0;
    FUN_1446efa72(&local_b0,0,3,0x10);
    puVar3 = local_b0;
    local_a8 = 3;
    *local_b0 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    local_b0[2] = lVar8;
    *local_b0 = &PTR_FUN_14b999f30;
    local_b0[3] = 0;
    FUN_14485c47a(local_b0 + 3,param_1);
    *(undefined4 *)(puVar3 + 5) = 0;
    puVar3[4] = FUN_148dca394;
    local_98 = 0;
    local_90 = 0;
    FUN_14487d8d8(&local_98,&local_b0);
    local_58 = 1;
    FUN_14016fdb0(uVar6,local_a0,&local_98);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
  }
  else {
    cVar4 = FUN_144b23dda();
    if (cVar4 == '\0') goto LAB_148dca550;
    lVar8 = 0;
    do {
      if (lVar8 < *(int *)(param_1 + 0x2658)) {
        lVar7 = *(longlong *)(param_1 + 0x2650);
        plVar2 = *(longlong **)(lVar7 + lVar8 * 8);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x5c8))(plVar2,0);
          lVar7 = *(longlong *)(param_1 + 0x2650);
        }
        *(undefined8 *)(lVar7 + lVar8 * 8) = 0;
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != 4);
    if (*(longlong *)(param_1 + 0x25f8) == 0) goto LAB_148dca62d;
    local_b0 = (undefined8 *)0x0;
    local_a8 = 0;
    FUN_1446efa72(&local_b0,0,3,0x10);
    puVar3 = local_b0;
    local_a8 = 3;
    *local_b0 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    local_b0[2] = lVar7;
    *local_b0 = &PTR_FUN_14b999f30;
    local_b0[3] = 0;
    FUN_14485c47a(local_b0 + 3,param_1);
    *(undefined4 *)(puVar3 + 5) = 0;
    puVar3[4] = FUN_148dc8710;
    uVar6 = FUN_144a88394(lVar5);
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x25f8) + 0x5d8);
    local_98 = 0;
    local_90 = 0;
    FUN_14487d8d8(&local_98,&local_b0);
    local_58 = 1;
    local_b8 = local_a0;
    local_a0[0] = 1;
    local_9c = 0;
    FUN_1406f4044(uVar6,param_1 + 0x2898,&local_98,uVar1);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
  }
  FUN_1449db362(&local_b0);
LAB_148dca62d:
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dca686 FUN_148dca686 body=1877 status=ok
// SIG undefined FUN_148dca686(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_148dca686(longlong param_1,undefined1 (*param_2) [16],int param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 extraout_EAX;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  double dVar30;
  undefined1 auVar31 [16];
  double dVar32;
  undefined1 auVar33 [16];
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined1 auVar42 [16];
  undefined1 auStack_2b8 [32];
  double local_298;
  double dStack_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
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
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
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
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158 [16];
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong local_c0;
  
  dVar32 = DAT_14c8462d0;
  dVar15 = DAT_14c8462c8;
  dVar14 = DAT_14c8462c0;
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  lVar1 = *(longlong *)(param_1 + 0x25f8);
  if (lVar1 == 0) {
    local_298 = DAT_14c8464a0;
    dStack_290 = DAT_14c8464a8;
    uVar22 = (undefined4)DAT_14c846490;
    uVar23 = DAT_14c846490._4_4_;
    uVar24 = (undefined4)DAT_14c846498;
    uVar25 = DAT_14c846498._4_4_;
    uVar26 = (undefined4)DAT_14c8464d0;
    uVar27 = DAT_14c8464d0._4_4_;
    uVar28 = uRam000000014c8464d8;
    uVar29 = uRam000000014c8464dc;
    uVar34 = (undefined4)DAT_14c8464c0;
    uVar35 = DAT_14c8464c0._4_4_;
    uVar36 = (undefined4)DAT_14c8464c8;
    uVar37 = DAT_14c8464c8._4_4_;
    uVar38 = (undefined4)DAT_14c8464b0;
    uVar39 = DAT_14c8464b0._4_4_;
    uVar40 = (undefined4)DAT_14c8464b8;
    uVar41 = DAT_14c8464b8._4_4_;
    dVar30 = DAT_14c846480;
    dVar18 = DAT_14c846488;
  }
  else {
    local_298 = *(double *)(lVar1 + 0x5e0);
    dStack_290 = *(double *)(lVar1 + 0x5e8);
    uVar22 = 0;
    uVar23 = 0;
    uVar24 = 0;
    uVar25 = 0x3ff00000;
    uVar26 = 0;
    uVar27 = 0x3ff00000;
    uVar28 = 0;
    uVar29 = 0;
    uVar34 = 0;
    uVar35 = 0x3ff00000;
    uVar36 = 0;
    uVar37 = 0x3ff00000;
    uVar38 = (int)*(undefined8 *)(lVar1 + 0x5f0);
    uVar39 = (int)((ulonglong)*(undefined8 *)(lVar1 + 0x5f0) >> 0x20);
    uVar40 = 0;
    uVar41 = 0;
    dVar30 = 0.0;
    dVar18 = 0.0;
  }
  dVar9 = (double)((float)param_3 * 0.25 * 6.2831855) * 0.5;
  dVar8 = sin(dVar9);
  uVar6 = (undefined4)param_1;
  dVar9 = cos(dVar9);
  auVar42._0_8_ = dVar14 * dVar8;
  auVar42._8_8_ = 0;
  dVar15 = dVar15 * dVar8;
  dVar32 = dVar32 * dVar8;
  *(undefined8 *)param_2[2] = 0;
  *(undefined8 *)(param_2[2] + 8) = 0;
  *(undefined8 *)param_2[3] = 0;
  *(undefined8 *)(param_2[3] + 8) = 0;
  auVar31 = _DAT_149934d80;
  auVar10._4_4_ = uVar35;
  auVar10._0_4_ = uVar34;
  auVar10._12_4_ = uVar37;
  auVar10._8_4_ = uVar36;
  auVar10 = minpd(auVar10,_DAT_149934d80);
  auVar16._4_4_ = uVar27;
  auVar16._0_4_ = uVar26;
  auVar16._12_4_ = uVar29;
  auVar16._8_4_ = uVar28;
  auVar16 = minpd(auVar16,ZEXT816(0x3ff0000000000000));
  auVar11._8_8_ = -(ulonglong)(auVar10._8_8_ < 0.0);
  auVar11._0_8_ = -(ulonglong)(auVar10._0_8_ < 0.0);
  iVar5 = movmskpd(extraout_EAX,auVar11);
  auVar17._8_8_ = -(ulonglong)(auVar16._8_8_ < 0.0);
  auVar17._0_8_ = -(ulonglong)(auVar16._0_8_ < 0.0);
  uVar7 = movmskpd(uVar6,auVar17);
  if ((uVar7 & 0x3fffffff) == 0 && iVar5 == 0) {
    dVar8 = dVar30 * dVar32 * 1.0 +
            (double)CONCAT44(uVar25,uVar24) * dVar15 +
            (double)CONCAT44(uVar23,uVar22) * auVar42._0_8_ * -1.0 + dVar18 * dVar9;
    dVar14 = (double)CONCAT44(uVar23,uVar22) * dVar32 * -1.0 +
             ((auVar42._0_8_ * dVar30 * -1.0 + (double)CONCAT44(uVar25,uVar24) * dVar9) -
             dVar15 * dVar18);
    auVar4._8_4_ = SUB84(dVar8,0);
    auVar4._0_8_ = dVar18 * dVar32 * -1.0 +
                   (double)CONCAT44(uVar23,uVar22) * dVar15 +
                   (double)CONCAT44(uVar25,uVar24) * auVar42._0_8_ * 1.0 + dVar30 * dVar9;
    auVar4._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    *param_2 = auVar4;
    auVar3._8_4_ = SUB84(dVar14,0);
    auVar3._0_8_ = (double)CONCAT44(uVar25,uVar24) * dVar32 * 1.0 +
                   ((auVar42._0_8_ * dVar18 * 1.0 + (double)CONCAT44(uVar23,uVar22) * dVar9) -
                   dVar15 * dVar30);
    auVar3._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
    param_2[1] = auVar3;
    dVar14 = (double)CONCAT44(uVar39,uVar38) * 1.0;
    dVar30 = (double)CONCAT44(uVar41,uVar40) * 0.0;
    auVar31._8_4_ = SUB84(dVar9,0);
    auVar31._0_8_ = dVar32;
    auVar31._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    auVar31 = blendpd(auVar42,auVar31,2);
    dVar18 = dStack_290 * auVar42._0_8_ - local_298 * dVar15;
    dVar20 = dVar14 * dVar15 - dStack_290 * dVar32;
    dVar21 = local_298 * dVar32 - dVar14 * auVar31._0_8_;
    dVar8 = dVar30 * dVar9 - dVar30 * auVar31._8_8_;
    dVar20 = dVar20 + dVar20;
    dVar21 = dVar21 + dVar21;
    dVar18 = dVar18 + dVar18;
    dVar8 = dVar8 + dVar8;
    *(double *)param_2[2] = (dVar18 * dVar15 - dVar32 * dVar21) + dVar9 * dVar20 + local_298 + 0.0;
    *(double *)(param_2[2] + 8) =
         (dVar20 * dVar32 - dVar18 * auVar31._0_8_) + dVar9 * dVar21 + dStack_290 + 0.0;
    *(double *)param_2[3] =
         (dVar21 * auVar42._0_8_ - dVar15 * dVar20) + dVar9 * dVar18 + dVar14 + 0.0;
    *(double *)(param_2[3] + 8) =
         (dVar8 * dVar9 - dVar8 * auVar31._8_8_) + dVar9 * dVar8 + dVar30 + 0.0;
    dVar15 = (double)CONCAT44(uVar27,uVar26) * 1.0;
    local_288 = uVar26;
    uStack_284 = uVar27;
    uStack_280 = uVar28;
    uStack_27c = uVar29;
    local_278 = uVar34;
    uStack_274 = uVar35;
    uStack_270 = uVar36;
    uStack_26c = uVar37;
  }
  else {
    dVar8 = dVar15 + dVar15;
    dVar14 = dVar32 + dVar32;
    dVar20 = auVar42._0_8_ * (auVar42._0_8_ + auVar42._0_8_);
    local_1c8 = (double)DAT_149934d80 - (dVar32 * dVar14 + dVar15 * dVar8);
    dStack_1a0 = DAT_149934d80._8_8_ - (dVar32 * dVar14 + dVar20);
    local_178 = 1.0 - (dVar20 + dVar15 * dVar8);
    dStack_180 = (auVar42._0_8_ + auVar42._0_8_) * dVar9;
    dStack_1c0 = dVar8 * auVar42._0_8_ + dVar14 * dVar9;
    local_198 = dVar14 * dVar15 + dStack_180;
    local_1a8 = dVar8 * auVar42._0_8_ - dVar14 * dVar9;
    dStack_180 = dVar14 * dVar15 - dStack_180;
    local_188 = auVar42._0_8_ * dVar14 + dVar8 * dVar9;
    local_1b8 = auVar42._0_8_ * dVar14 - dVar8 * dVar9;
    uStack_1b0 = 0;
    uStack_190 = 0;
    uStack_170 = 0;
    dVar14 = dVar18 + dVar18;
    dVar9 = (double)CONCAT44(uVar23,uVar22) + (double)CONCAT44(uVar23,uVar22);
    dVar32 = dVar30 * (dVar30 + dVar30);
    dVar15 = (double)CONCAT44(uVar23,uVar22) * dVar9;
    local_248 = ((double)DAT_149934d80 - (dVar15 + dVar18 * dVar14)) *
                (double)CONCAT44(uVar35,uVar34);
    dStack_220 = (DAT_149934d80._8_8_ - (dVar15 + dVar32)) * (double)CONCAT44(uVar37,uVar36);
    dVar8 = dVar9 * (double)CONCAT44(uVar25,uVar24);
    dVar20 = (dVar30 + dVar30) * (double)CONCAT44(uVar25,uVar24);
    dVar15 = dVar14 * (double)CONCAT44(uVar25,uVar24);
    local_228 = (dVar14 * dVar30 - dVar8) * (double)CONCAT44(uVar37,uVar36);
    dStack_200 = (dVar9 * dVar18 - dVar20) * (double)CONCAT44(uVar27,uVar26);
    local_208 = (dVar15 + dVar30 * dVar9) * (double)CONCAT44(uVar27,uVar26);
    dStack_240 = (dVar14 * dVar30 + dVar8) * (double)CONCAT44(uVar35,uVar34);
    local_218 = (dVar9 * dVar18 + dVar20) * (double)CONCAT44(uVar37,uVar36);
    local_238 = (dVar30 * dVar9 - dVar15) * (double)CONCAT44(uVar35,uVar34);
    uStack_230 = 0;
    uStack_210 = 0;
    local_1f8 = (1.0 - (dVar32 + dVar18 * dVar14)) * (double)CONCAT44(uVar27,uVar26);
    uStack_1f0 = 0;
    local_1e8 = local_298;
    dStack_1e0 = dStack_290;
    dVar15 = (double)CONCAT44(uVar27,uVar26) * 1.0;
    local_168 = 0;
    uStack_160 = 0;
    uStack_1d0 = 0;
    uStack_1cc = 0x3ff00000;
    local_1d8 = uVar38;
    uStack_1d4 = uVar39;
    local_158 = ZEXT816(0x3ff0000000000000) << 0x40;
    FUN_1447fea8d(&local_148);
    FUN_144a1c686(&local_148,0x3e45798ee0000000);
    auVar12._8_8_ = -(ulonglong)(0.0 <= (double)CONCAT44(uVar37,uVar36));
    auVar12._0_8_ = -(ulonglong)(0.0 <= (double)CONCAT44(uVar35,uVar34));
    auVar10 = blendvpd(_DAT_149936790,auVar31,auVar12);
    dVar14 = (double)(~-(ulonglong)(0.0 <= dVar15) & 0xbff0000000000000 |
                     (ulonglong)((uint)(-(ulonglong)(0.0 <= dVar15) >> 0x20) & 0x3ff00000) << 0x20);
    dVar32 = auVar10._0_8_;
    local_138 = local_138 * dVar32;
    local_140 = local_140 * dVar32;
    local_148 = local_148 * dVar32;
    dVar32 = auVar10._8_8_;
    local_118 = local_118 * dVar32;
    local_120 = local_120 * dVar32;
    local_128 = dVar32 * local_128;
    local_f8 = local_f8 * dVar14;
    local_100 = local_100 * dVar14;
    local_108 = dVar14 * local_108;
    FUN_14481fd10(&local_268,&local_148);
    dVar14 = local_258 * local_258 + local_268 * local_268;
    dVar32 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
    auVar19._0_8_ = dVar14 + dVar32;
    auVar19._8_8_ = dVar14 + dVar32;
    auVar13._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar19._8_8_);
    auVar13._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar19._0_8_);
    auVar10 = sqrtpd(auVar19,auVar19);
    auVar10 = divpd(auVar31,auVar10);
    auVar33._0_8_ = auVar10._0_8_ * local_258;
    auVar33._8_8_ = auVar10._8_8_ * dStack_250;
    auVar31 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar33,auVar13);
    *(ulonglong *)*param_2 =
         (ulonglong)(local_268 * auVar10._0_8_) &
         -(ulonglong)(9.99999993922529e-09 <= auVar19._0_8_);
    *(ulonglong *)(*param_2 + 8) =
         (ulonglong)(dStack_260 * auVar10._8_8_) &
         -(ulonglong)(9.99999993922529e-09 <= auVar19._8_8_);
    param_2[1] = auVar31;
    *(undefined8 *)param_2[2] = local_e8;
    *(undefined8 *)(param_2[2] + 8) = uStack_e0;
    *(undefined8 *)param_2[3] = local_d8;
    *(undefined8 *)(param_2[3] + 8) = 0;
  }
  dVar14 = (double)CONCAT44(uVar29,uVar28) * 0.0;
  *(undefined4 *)param_2[4] = uVar34;
  *(undefined4 *)(param_2[4] + 4) = uVar35;
  *(undefined4 *)(param_2[4] + 8) = uVar36;
  *(undefined4 *)(param_2[4] + 0xc) = uVar37;
  auVar2._8_4_ = SUB84(dVar14,0);
  auVar2._0_8_ = dVar15;
  auVar2._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  param_2[5] = auVar2;
  if ((local_c0 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dcaddc FUN_148dcaddc body=70 status=ok
// SIG undefined FUN_148dcaddc(void)

void FUN_148dcaddc(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  FUN_1458166e8();
  uVar2 = 0;
  do {
    if ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x2658)) {
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x2650) + uVar2 * 8);
    }
    else {
      uVar1 = 0;
    }
    FUN_148dcae22(param_1,uVar1,uVar2 & 0xffffffff);
    uVar2 = uVar2 + 1;
  } while (uVar2 != 4);
  return;
}



// FUNCTION 148dcae22 FUN_148dcae22 body=404 status=ok
// SIG undefined FUN_148dcae22(void)

void FUN_148dcae22(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  undefined8 *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((param_2 != 0) && ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0)) {
    if ((*(byte *)(param_2 + 0x65) & 0x18) == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_c8);
    }
    lVar2 = FUN_1447210f0(param_1);
    if (lVar2 != 0) {
      uVar3 = FUN_144a88394(lVar2);
      local_98 = (undefined8 *)0x0;
      local_90 = 0;
      FUN_1446efa72(&local_98,0,4,0x10);
      puVar1 = local_98;
      local_90 = 4;
      *local_98 = &PTR_LAB_14b99a010;
      local_98[1] = param_2;
      *(undefined4 *)(local_98 + 2) = param_3;
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar4 == 0) {
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      local_98[3] = lVar4;
      *local_98 = &PTR_FUN_14b999fa0;
      local_98[4] = 0;
      FUN_14485c47a(local_98 + 4,param_1);
      *(undefined4 *)(puVar1 + 6) = 0;
      puVar1[5] = FUN_148dcae22;
      local_88 = 0;
      local_80 = 0;
      FUN_14487d8d8(&local_88,&local_98);
      local_48 = 1;
      FUN_14016fdb0(uVar3,local_a0,&local_88);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
      FUN_1449db362(&local_98);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dcafd8 FUN_148dcafd8 body=26 status=ok
// SIG undefined FUN_148dcafd8(void)

void FUN_148dcafd8(undefined8 param_1)

{
  FUN_1458166e8();
  FUN_148dca394(param_1);
  return;
}



// FUNCTION 148dcaff2 FUN_148dcaff2 body=332 status=ok
// SIG undefined FUN_148dcaff2(void)

undefined8 FUN_148dcaff2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  double dVar9;
  double *pdVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  double local_40;
  
  dVar9 = (double)(DAT_14c707940 ^ (ulonglong)auStack_98);
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  uVar12 = (undefined4)DAT_14c846500;
  uVar13 = DAT_14c846500._4_4_;
  local_40 = dVar9;
  if (lVar1 != 0) {
    dVar4 = *(double *)(lVar1 + 0x240);
    dVar5 = *(double *)(lVar1 + 0x248);
    dVar6 = *(double *)(lVar1 + 0x250);
    dVar7 = *(double *)(lVar1 + 600);
    pdVar10 = *(double **)(lVar1 + 0x228);
    local_78 = dVar4;
    uStack_70 = dVar5;
    local_68 = dVar6;
    uStack_60 = dVar7;
    if (pdVar10 == (double *)0x0) {
      param_1 = 0x40;
      pdVar10 = (double *)FUN_14001cc68(0x40,0x10);
      dVar9 = DAT_14c8463d8;
      *pdVar10 = DAT_14c8463d0;
      pdVar10[1] = dVar9;
      dVar9 = DAT_14c8463e8;
      pdVar10[2] = DAT_14c8463e0;
      pdVar10[3] = dVar9;
      dVar9 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
      pdVar10[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
      pdVar10[5] = dVar9;
      dVar9 = DAT_14c846508;
      pdVar10[6] = DAT_14c846508;
      *(double **)(lVar1 + 0x228) = pdVar10;
    }
    auVar2._8_4_ = (int)-(ulonglong)(dVar5 != pdVar10[1]);
    auVar2._0_8_ = -(ulonglong)(dVar4 != *pdVar10);
    auVar2._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar10[1]) >> 0x20);
    iVar8 = movmskpd(SUB84(dVar9,0),auVar2);
    auVar3._8_4_ = (int)-(ulonglong)(dVar7 != pdVar10[3]);
    auVar3._0_8_ = -(ulonglong)(dVar6 != pdVar10[2]);
    auVar3._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar10[3]) >> 0x20);
    uVar11 = movmskpd((int)param_1,auVar3);
    if ((uVar11 & 0x3fffffff) != 0 || iVar8 != 0) {
      *(undefined4 *)(pdVar10 + 2) = (undefined4)local_68;
      *(undefined4 *)((longlong)pdVar10 + 0x14) = local_68._4_4_;
      *(undefined4 *)(pdVar10 + 3) = (undefined4)uStack_60;
      *(undefined4 *)((longlong)pdVar10 + 0x1c) = uStack_60._4_4_;
      *(undefined4 *)pdVar10 = (undefined4)local_78;
      *(undefined4 *)((longlong)pdVar10 + 4) = local_78._4_4_;
      *(undefined4 *)(pdVar10 + 1) = (undefined4)uStack_70;
      *(undefined4 *)((longlong)pdVar10 + 0xc) = uStack_70._4_4_;
      FUN_1448052ee(&local_78,&local_58);
      pdVar10[6] = local_48;
      pdVar10[4] = local_58;
      pdVar10[5] = (double)CONCAT44(uStack_4c,uStack_50);
    }
    uVar12 = *(undefined4 *)(pdVar10 + 5);
    uVar13 = *(undefined4 *)((longlong)pdVar10 + 0x2c);
  }
  local_58 = 0.0;
  local_48 = 0.0;
  uStack_50 = uVar12;
  uStack_4c = uVar13;
  FUN_144a76660(&local_58,param_2);
  if (((ulonglong)local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148dcb140 FUN_148dcb140 body=25 status=ok
// SIG undefined FUN_148dcb140(void)

undefined4 FUN_148dcb140(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x25f8) != 0) {
    return *(undefined4 *)(*(longlong *)(param_1 + 0x25f8) + 0x5fc);
  }
  return 0;
}



// FUNCTION 148dcb15a FUN_148dcb15a body=25 status=ok
// SIG undefined FUN_148dcb15a(void)

undefined4 FUN_148dcb15a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x25f8) != 0) {
    return *(undefined4 *)(*(longlong *)(param_1 + 0x25f8) + 0x600);
  }
  return 0;
}



// FUNCTION 148dcb174 FUN_148dcb174 body=66 status=ok
// SIG undefined FUN_148dcb174(void)

undefined8 FUN_148dcb174(longlong param_1)

{
  double dVar1;
  
  if (*(longlong *)(param_1 + 0x25f8) == 0) {
    dVar1 = 0.0;
  }
  else {
    dVar1 = (double)*(float *)(*(longlong *)(param_1 + 0x25f8) + 0x604);
  }
  dVar1 = SQRT(*(double *)(param_1 + 0x2830) * *(double *)(param_1 + 0x2830) +
               *(double *)(param_1 + 0x2838) * *(double *)(param_1 + 0x2838)) * dVar1;
  return CONCAT44((int)((ulonglong)dVar1 >> 0x20),(float)dVar1);
}



// FUNCTION 148dcb1b6 FUN_148dcb1b6 body=146 status=ok
// SIG undefined FUN_148dcb1b6(void)

void FUN_148dcb1b6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140c2c6fa();
  local_30 = 0;
  local_40 = 0;
  local_38 = 0;
  FUN_1446f470e(&local_48,L"GbxActorData",1);
  uVar1 = FUN_145a88c66();
  FUN_145a88c66();
  uVar1 = FUN_140f1fabf(uVar1,local_48);
  FUN_140f1fa23(uVar1,param_2,&local_40);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dcb250 FUN_148dcb250 body=45 status=ok
// SIG undefined FUN_148dcb250(void)

void FUN_148dcb250(longlong param_1)

{
  FUN_1405f1eac();
  thunk_FUN_1405f85e0(param_1 + 0x3c0);
  FUN_1401b3e2a(param_1 + 0x4c8);
  return;
}



// FUNCTION 148dcb27e FUN_148dcb27e body=73 status=ok
// SIG undefined FUN_148dcb27e(void)

void FUN_148dcb27e(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  FUN_1406335ea(param_1 + 0x4c8);
  uVar1 = FUN_1447210f0(param_1);
  cVar2 = FUN_1415d8652(param_2,uVar1);
  if (cVar2 == '\0') {
    thunk_FUN_140633cb6(param_1 + 0x3c0);
  }
  FUN_1403d8a98(param_1,param_2);
  return;
}



// FUNCTION 148dcb2c8 FUN_148dcb2c8 body=72 status=ok
// SIG undefined FUN_148dcb2c8(void)

longlong FUN_148dcb2c8(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_144a7ff9e(*(undefined8 *)(param_1 + 0x10));
  lVar2 = param_1;
  if ((cVar1 == '\0') && (lVar2 = FUN_144862176(param_1 + 0x4c8,param_2), lVar2 == 0)) {
    lVar2 = switchD_143c3d4dc::caseD_57(param_1,param_2);
    return lVar2;
  }
  return lVar2;
}



// FUNCTION 148dcb32c FUN_148dcb32c body=59 status=ok
// SIG undefined FUN_148dcb32c(void)

undefined8 FUN_148dcb32c(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x3e0) != 0) {
    lVar1 = FUN_148dcb768(*(longlong *)(param_1 + 0x3e0) + 0x90);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000148dcb363. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x50) + 0x10))(lVar1 + 0x50);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 148dcb368 FUN_148dcb368 body=71 status=ok
// SIG undefined FUN_148dcb368(void)

undefined8 * FUN_148dcb368(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x3e0) != 0) &&
     (lVar1 = FUN_148dcb768(*(longlong *)(param_1 + 0x3e0) + 0x90), lVar1 != 0)) {
    (**(code **)(*(longlong *)(lVar1 + 0x50) + 0x18))(lVar1 + 0x50,param_2);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 148dcb3b0 FUN_148dcb3b0 body=160 status=ok
// SIG undefined FUN_148dcb3b0(void)

void FUN_148dcb3b0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  longlong local_58;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(uint *)(param_1 + -0x3a8) & 0x10) == 0) {
    FUN_1406c9d00(param_1 + 0x10,local_88);
    FUN_14031575e(local_70,local_88);
    FUN_14042b1ec(param_2,local_70,1);
    if (local_28 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dcb452 FUN_148dcb452 body=65 status=ok
// SIG undefined FUN_148dcb452(void)

void FUN_148dcb452(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + 0x1a0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2,param_3);
  }
  FUN_1409d1ca6(param_1 + 0x118,param_2,param_3);
  return;
}



// FUNCTION 148dcb494 FUN_148dcb494 body=238 status=ok
// SIG undefined FUN_148dcb494(void)

void FUN_148dcb494(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 8))(param_2);
    lVar2 = FUN_1465a32f0();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      *(longlong **)(param_1 + 0x3d8) = param_2;
      FUN_14078a36a(param_1 + 0x3e0,param_1 + 0x18);
      FUN_148dcb584(*(undefined8 *)(param_1 + 0x3d8),local_38);
      FUN_14078b280(param_1 + 0x130,param_1 + -0x398,local_38);
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
      goto LAB_148dcb4fb;
    }
  }
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  FUN_140355e94(param_1 + 0x130);
LAB_148dcb4fb:
  FUN_14078a0a0(param_1 + -8,0);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dcb584 FUN_148dcb584 body=472 status=ok
// SIG undefined FUN_148dcb584(void)

longlong * FUN_148dcb584(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  *param_2 = 0;
  param_2[1] = 0;
  if ((longlong)*(int *)(param_1 + 0xc0) != 0) {
    lVar8 = (longlong)*(int *)(param_1 + 0xc0) * 0x28;
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0xb8) + 8);
    do {
      plVar1 = plVar7 + -1;
      lVar5 = FUN_14479d2ce(plVar1);
      if (lVar5 == 0) {
        if (*plVar7 != 0) {
          lVar5 = FUN_140007850();
          cVar4 = (*(code *)PTR_FUN_14c758760)();
          if ((lVar5 == 0) || (cVar4 == '\0')) {
            FUN_14485c47a(plVar1,lVar5);
            if (lVar5 == 0) goto LAB_148dcb6f6;
          }
          else {
            uVar2 = *(uint *)(lVar5 + 0xc);
            if ((int)uVar2 < DAT_14c9647dc) {
              lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            }
            else {
              lVar6 = 0;
            }
            if ((*(uint *)(lVar6 + 8) & 0x8400000) == 0) {
              FUN_14485c47a(plVar1,lVar5);
            }
          }
          if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0) goto LAB_148dcb5d5;
        }
      }
      else {
LAB_148dcb5d5:
        lVar6 = FUN_144a797b2();
        if ((((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) &&
            (lVar6 = FUN_140789e1e(), lVar6 != 0)) &&
           (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) {
          lVar9 = 0;
          if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30) {
            lVar9 = lVar5;
          }
          if ((lVar9 == 0) || (DAT_14c950c29 == '\0')) {
            if (lVar9 == 0) goto LAB_148dcb6f6;
          }
          else {
            FUN_1456cec3c(lVar9);
          }
          lVar6 = FUN_140789e1e();
          if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30)) {
            iVar3 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar3 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
              FUN_140789f3e(param_2,iVar3);
            }
            *(longlong *)(*param_2 + (longlong)iVar3 * 8) = lVar5;
            if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar5);
            }
          }
        }
      }
LAB_148dcb6f6:
      plVar7 = plVar7 + 5;
      lVar8 = lVar8 + -0x28;
    } while (lVar8 != 0);
  }
  return param_2;
}



// FUNCTION 148dcb768 FUN_148dcb768 body=197 status=ok
// SIG undefined FUN_148dcb768(void)

longlong FUN_148dcb768(longlong param_1)

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
  lVar4 = FUN_1459f27d8();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 148dcb82e FUN_148dcb82e body=122 status=ok
// SIG undefined FUN_148dcb82e(void)

undefined8 * FUN_148dcb82e(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_2 = *(undefined8 *)(param_1 + 0x90);
  uVar2 = *(undefined4 *)(param_1 + 0x9c);
  uVar3 = *(undefined4 *)(param_1 + 0xa0);
  uVar4 = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar2;
  *(undefined4 *)(param_2 + 2) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar4;
  param_2[3] = 0;
  iVar1 = *(int *)(param_1 + 0xb0);
  _Src = *(void **)(param_1 + 0xa8);
  *(int *)(param_2 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_2 + 3,iVar1,0);
    memcpy((void *)param_2[3],_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 148dcb8a8 FUN_148dcb8a8 body=241 status=ok
// SIG undefined FUN_148dcb8a8(void)

void FUN_148dcb8a8(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78 [24];
  longlong local_60;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14147df5e();
  FUN_148dcb99a(local_78,param_1 + 0x90);
  FUN_14042b1ec(param_2,local_78,1);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((longlong)*(int *)(param_1 + 0xc0) != 0) {
    lVar2 = *(longlong *)(param_1 + 0xb8);
    lVar3 = (longlong)*(int *)(param_1 + 0xc0) * 0x28;
    do {
      FUN_140d2594c(local_78,lVar2);
      FUN_14042b1ec(param_2,local_78,1);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_30 + 0x10))();
        }
      }
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      lVar2 = lVar2 + 0x28;
      lVar3 = lVar3 + -0x28;
    } while (lVar3 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dcb99a FUN_148dcb99a body=521 status=ok
// SIG undefined FUN_148dcb99a(void)

undefined8 * FUN_148dcb99a(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  void **ppvVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar7 = FUN_148dcb768(param_2);
  puVar1 = param_1 + 1;
  ppvVar2 = (void **)(param_1 + 3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if (lVar7 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    FUN_1400bbfc4(&local_58,lVar7);
    *(undefined4 *)puVar1 = local_58;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_54;
    *(undefined4 *)(param_1 + 2) = uStack_50;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_4c;
    if (puVar1 == (undefined8 *)&local_58) {
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*ppvVar2 != (void *)0x0) {
        FUN_1400020a8();
      }
      param_1[3] = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 4) = local_40;
      *(undefined4 *)((longlong)param_1 + 0x24) = local_3c;
    }
    cVar6 = (*(code *)PTR_FUN_14c758760)();
    if (cVar6 != '\0') {
      uVar3 = *(uint *)(lVar7 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      if ((*(uint *)(lVar8 + 8) & 0x8400000) != 0) {
        *param_1 = 0;
        goto LAB_148dcba9f;
      }
    }
    FUN_14485c47a(param_1,lVar7);
  }
LAB_148dcba9f:
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  if (param_1[1] == 0) {
    local_78 = *(undefined4 *)(param_2 + 8);
    uStack_74 = *(undefined4 *)(param_2 + 0xc);
    uStack_70 = *(undefined4 *)(param_2 + 0x10);
    uStack_6c = *(undefined4 *)(param_2 + 0x14);
    local_68 = (void *)0x0;
    local_60 = *(int *)(param_2 + 0x20);
    lVar7 = (longlong)local_60;
    pvVar4 = *(void **)(param_2 + 0x18);
    if (lVar7 == 0) {
      local_5c = 0;
    }
    else {
      FUN_1446dd670(&local_68,local_60,0);
      memcpy(local_68,pvVar4,lVar7 * 2);
    }
    iVar5 = local_60;
    pvVar4 = local_68;
    *param_1 = 0;
    *(undefined4 *)puVar1 = local_78;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_74;
    *(undefined4 *)(param_1 + 2) = uStack_70;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_6c;
    if (ppvVar2 != &local_68) {
      lVar7 = (longlong)local_60;
      *(int *)(param_1 + 4) = local_60;
      if (local_60 == 0 && *(int *)((longlong)param_1 + 0x24) == 0) {
        *(undefined4 *)((longlong)param_1 + 0x24) = 0;
      }
      else {
        FUN_1446dd670(ppvVar2,local_60);
        if (iVar5 != 0) {
          memcpy(*ppvVar2,pvVar4,lVar7 * 2);
        }
      }
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dcbbb0 FUN_148dcbbb0 body=121 status=ok
// SIG undefined FUN_148dcbbb0(void)

void FUN_148dcbbb0(undefined8 param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar6 = FUN_148d491fc();
  if ((lVar6 != 0) && (plVar2 = *(longlong **)(lVar6 + 0x6f10), plVar2 != (longlong *)0x0)) {
    iVar5 = (int)plVar2[1];
    do {
      if (iVar5 == 0) goto LAB_148dcbc1b;
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    plVar3 = *(longlong **)(lVar6 + 0x6f08);
    if ((plVar3 != (longlong *)0x0) && ((*(byte *)(plVar3 + 6) & 2) != 0)) {
      (**(code **)(*plVar3 + 0x70))(plVar3,param_1);
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
LAB_148dcbc1b:
  FUN_1418a486e(param_1);
  return;
}



// FUNCTION 148dcbc36 FUN_148dcbc36 body=32 status=ok
// SIG undefined FUN_148dcbc36(void)

undefined1 FUN_148dcbc36(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_1400e8a68(param_3);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(lVar2 + 0x8a08);
  }
  return uVar1;
}



// FUNCTION 148dcbc56 FUN_148dcbc56 body=77 status=ok
// SIG undefined FUN_148dcbc56(void)

undefined8 * FUN_148dcbc56(undefined8 *param_1)

{
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_140d710e4();
  *param_1 = &PTR_FUN_14b9993e0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  return param_1;
}



// FUNCTION 148dcbcaa FUN_148dcbcaa body=192 status=ok
// SIG undefined FUN_148dcbcaa(void)

void FUN_148dcbcaa(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  uint local_40;
  uint local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 0x48);
  FUN_143888b1a(param_1,&local_48,param_2);
  if (local_38 < local_40) {
    do {
      lVar3 = FUN_14030a32e((longlong)(int)local_38 * 0x38 + local_48);
      if (lVar3 == 0) {
LAB_148dcbd19:
        uVar5 = 0;
      }
      else {
        lVar4 = FUN_144a2f878();
        iVar1 = *(int *)(lVar4 + 0x38);
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar1) ||
           (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8)
            != lVar4 + 0x30)) goto LAB_148dcbd19;
        uVar5 = CONCAT71((int7)(int3)((uint)iVar1 >> 8),
                         *(char *)(lVar2 + 0x80) == *(char *)(lVar3 + 0x8a08));
      }
      FUN_1402d7d58(&local_48,uVar5);
      local_38 = local_38 + 1;
      FUN_143888ae0(&local_48);
    } while (local_38 < local_40);
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148dcbd7c FUN_148dcbd7c body=319 status=ok
// SIG undefined FUN_148dcbd7c(void)

longlong * FUN_148dcbd7c(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141085fe4(param_1,&local_38);
  plVar4 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
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
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  FUN_1446efa72(param_2,0,3,0x10);
  *(undefined4 *)(param_2 + 1) = 3;
  puVar3 = (undefined8 *)*param_2;
  *puVar3 = &PTR_LAB_14b99ac60;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  puVar3[2] = lVar6;
  *puVar3 = &PTR_FUN_14b99a230;
  puVar3[3] = local_38;
  puVar3[4] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dcbebe FUN_148dcbebe body=147 status=ok
// SIG undefined FUN_148dcbebe(void)

longlong * FUN_148dcbebe(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar3 = (longlong *)FUN_148dd372c();
  lVar5 = *(longlong *)(*(longlong *)(param_3 + 8) + 0x40);
  if (lVar5 != 0) {
    lVar4 = FUN_144a2f878();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) goto LAB_148dcbf08;
  }
  lVar5 = 0;
LAB_148dcbf08:
  FUN_14485c47a(plVar3 + 0x2f,lVar5);
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
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
  return param_2;
}



// FUNCTION 148dcbf52 FUN_148dcbf52 body=74 status=ok
// SIG undefined FUN_148dcbf52(void)

void FUN_148dcbf52(longlong param_1)

{
  longlong lVar1;
  
  if ((((*(byte *)(param_1 + 0x30) & 2) != 0) && (*(longlong *)(param_1 + 0x178) != 0)) &&
     (*(longlong *)(param_1 + 0x168) != 0)) {
    lVar1 = FUN_14479d2ce(param_1 + 0x80);
    if (lVar1 != 0) {
      FUN_1458a0064(*(undefined8 *)(param_1 + 0x178));
      return;
    }
  }
  return;
}



// FUNCTION 148dcbfb4 FUN_148dcbfb4 body=125 status=ok
// SIG undefined FUN_148dcbfb4(void)

void FUN_148dcbfb4(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1488df66c(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x168) + 400));
  FUN_148d0ea54(local_40,param_3);
  uVar1 = FUN_1405faa04(local_40);
  (**(code **)(*(longlong *)(param_2 + 0x28) + 0x28))(param_2 + 0x28,uVar1);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dcc032 FUN_148dcc032 body=164 status=ok
// SIG undefined FUN_148dcc032(void)

void FUN_148dcc032(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_14479d2ce(param_1 + 0x70);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_1447210f0(lVar2);
  }
  lVar2 = thunk_FUN_1412af310(uVar3);
  if (lVar2 != 0) {
    FUN_1412af85e(lVar2,local_30,param_2);
    cVar1 = FUN_144729dda(local_30);
    if (cVar1 != '\0') {
      uVar3 = FUN_14479d2ce(local_30);
      FUN_148dcbfb4(param_1,uVar3,param_3);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dcc0d8 FUN_148dcc0d8 body=130 status=ok
// SIG undefined FUN_148dcc0d8(void)

void FUN_148dcc0d8(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148dcc16c(param_1,&local_30);
  FUN_148dcc032(local_30,param_2,param_3);
  if (local_28 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_28 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dcc16c FUN_148dcc16c body=144 status=ok
// SIG undefined FUN_148dcc16c(void)

undefined8 * FUN_148dcc16c(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140df5234(param_1,&local_28);
  *param_2 = local_28;
  param_2[1] = local_20;
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
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dcc230 FUN_148dcc230 body=164 status=ok
// SIG undefined FUN_148dcc230(void)

void FUN_148dcc230(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = FUN_14479d2ce(param_1 + 0x70);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1447210f0(lVar3);
  }
  lVar3 = thunk_FUN_1412af310(uVar4);
  if (lVar3 != 0) {
    FUN_1412af85e(lVar3,local_28,param_2);
    cVar1 = FUN_144729dda(local_28);
    if (cVar1 != '\0') {
      uVar2 = FUN_1458e8696(param_1);
      uVar4 = FUN_14479d2ce(local_28);
      FUN_148dcc2d6(param_1,uVar4,uVar2);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dcc2d6 FUN_148dcc2d6 body=125 status=ok
// SIG undefined FUN_148dcc2d6(void)

void FUN_148dcc2d6(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1488df66c(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x198) + 0x2a0));
  FUN_148d0ea54(local_40,param_3);
  uVar1 = FUN_1405faa04(local_40);
  (**(code **)(*(longlong *)(param_2 + 0x28) + 0x28))(param_2 + 0x28,uVar1);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dcc354 FUN_148dcc354 body=170 status=ok
// SIG undefined FUN_148dcc354(void)

void FUN_148dcc354(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = FUN_144729dda(param_1 + 0x168);
  if ((cVar2 == '\0') && (lVar1 = *(longlong *)(param_1 + 0x198), lVar1 != 0)) {
    lVar3 = FUN_148dcc476(param_1);
    if (lVar3 != 0) {
      local_38[0] = 0;
      local_38[1] = 0;
      uVar4 = FUN_140e99050(lVar3,lVar1 + 0x268,local_38);
      FUN_14485c47a(param_1 + 0x168,uVar4);
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
      FUN_145a1fb1e(param_1);
    }
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148dcc400 FUN_148dcc400 body=118 status=ok
// SIG undefined FUN_148dcc400(void)

void FUN_148dcc400(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  
  puVar1 = (undefined8 *)(param_1 + 0x168);
  cVar3 = FUN_144729dda(puVar1);
  if ((cVar3 != '\0') && (lVar2 = *(longlong *)(param_1 + 0x198), lVar2 != 0)) {
    lVar4 = FUN_148dcc476(param_1);
    if (lVar4 == 0) {
      plVar5 = (longlong *)FUN_14479d2ce(puVar1);
      (**(code **)(*plVar5 + 0x2b0))(plVar5);
    }
    else {
      FUN_14107e4c6(lVar4,*(undefined8 *)(lVar2 + 0x268),*(undefined8 *)(lVar2 + 0x290),1);
    }
    *puVar1 = 0;
  }
  return;
}



// FUNCTION 148dcc476 FUN_148dcc476 body=125 status=ok
// SIG undefined FUN_148dcc476(void)

undefined8 FUN_148dcc476(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_14479d2ce(param_1 + 0x70);
  if ((lVar3 != 0) && (plVar1 = *(longlong **)(lVar3 + 0x3c0), plVar1 != (longlong *)0x0)) {
    lVar3 = FUN_1449f3324();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       ((*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30 && ((*(byte *)(plVar1 + 0x84) & 2) != 0)))) {
      cVar2 = (**(code **)(*plVar1 + 0x6c8))(plVar1);
      if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000148dcc4ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(plVar1[300] + 0xd8))(plVar1 + 300);
        return uVar4;
      }
    }
  }
  return 0;
}


