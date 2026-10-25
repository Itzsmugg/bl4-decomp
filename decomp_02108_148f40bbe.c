// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148f40bbe FUN_148f40bbe body=323 status=ok
// SIG undefined FUN_148f40bbe(void)

void FUN_148f40bbe(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  FUN_148f40d02(&local_38,local_20,&local_40);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f40d02 FUN_148f40d02 body=317 status=ok
// SIG undefined FUN_148f40d02(void)

longlong * FUN_148f40d02(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Cannot call FindTracksByExactType on a null sequence",2,0);
  }
  else {
    lVar3 = (**(code **)(*param_2 + 0x2e8))(param_2);
    lVar2 = *param_3;
    if (lVar2 != 0) {
      lVar4 = FUN_1402984e6();
      if (lVar4 != 0) {
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30)) {
          lVar2 = *param_3;
          if (lVar2 != 0 && lVar3 != 0) {
            lVar4 = FUN_1402984e6();
            if (((lVar4 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar4 + 0x38))) ||
               (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
                lVar4 + 0x30)) {
              lVar4 = 0;
            }
            else {
              lVar4 = *param_3;
            }
            local_38 = *(undefined8 *)(lVar3 + 0xe0);
            local_30 = *(undefined4 *)(lVar3 + 0xe8);
            FUN_148f3a1b6(param_1,&local_38,lVar4,1);
            lVar3 = FUN_14756e164(lVar3);
            if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x10) == lVar2)) {
              iVar1 = (int)param_1[1];
              *(uint *)(param_1 + 1) = iVar1 + 1U;
              if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
                FUN_14574f0bc(param_1,iVar1);
              }
              *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar3;
            }
            if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0();
            }
            return param_1;
          }
        }
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 148f40e40 FUN_148f40e40 body=323 status=ok
// SIG undefined FUN_148f40e40(void)

void FUN_148f40e40(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  FUN_148f40f84(&local_38,local_20,&local_40);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f40f84 FUN_148f40f84 body=338 status=ok
// SIG undefined FUN_148f40f84(void)

longlong * FUN_148f40f84(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Cannot call FindTracksByType on a null sequence",2,0);
  }
  else {
    lVar3 = (**(code **)(*param_2 + 0x2e8))(param_2);
    lVar2 = *param_3;
    if (lVar2 != 0) {
      lVar4 = FUN_1402984e6();
      if (lVar4 != 0) {
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30)) {
          lVar2 = *param_3;
          if (lVar2 != 0 && lVar3 != 0) {
            lVar4 = FUN_1402984e6();
            if (((lVar4 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar4 + 0x38))) ||
               (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
                lVar4 + 0x30)) {
              lVar4 = 0;
            }
            else {
              lVar4 = *param_3;
            }
            local_38 = *(undefined8 *)(lVar3 + 0xe0);
            local_30 = *(undefined4 *)(lVar3 + 0xe8);
            FUN_148f3a1b6(param_1,&local_38,lVar4,0);
            lVar3 = FUN_14756e164(lVar3);
            if (lVar3 != 0) {
              if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
                iVar1 = (int)param_1[1];
                *(uint *)(param_1 + 1) = iVar1 + 1U;
                if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
                  FUN_14574f0bc(param_1,iVar1);
                }
                *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar3;
              }
            }
            if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0();
            }
            return param_1;
          }
        }
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 148f410d8 FUN_148f410d8 body=273 status=ok
// SIG undefined FUN_148f410d8(void)

void FUN_148f410d8(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
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
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar5 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = DAT_14cbf2a7c;
  uVar1 = *(undefined4 *)((longlong)puVar5 + 4);
  uVar2 = *(undefined4 *)(puVar5 + 1);
  uVar3 = *(undefined4 *)((longlong)puVar5 + 0xc);
  *param_3 = *(undefined4 *)puVar5;
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  param_3[4] = uVar4;
  param_3[5] = 0;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f411ea FUN_148f411ea body=218 status=ok
// SIG undefined FUN_148f411ea(void)

void FUN_148f411ea(undefined8 param_1,longlong param_2,longlong *param_3)

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
  FUN_148f412c6(&local_30,local_20);
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



// FUNCTION 148f412c6 FUN_148f412c6 body=203 status=ok
// SIG undefined FUN_148f412c6(void)

longlong * FUN_148f412c6(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  
  if (param_2 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Cannot call GetBindings on a null sequence",2,0);
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    lVar9 = (**(code **)(*param_2 + 0x2e8))(param_2);
    if ((lVar9 != 0) && (iVar3 = *(int *)(lVar9 + 0x88), (longlong)iVar3 != 0)) {
      lVar9 = *(longlong *)(lVar9 + 0x80);
      lVar10 = 0;
      do {
        iVar4 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
          FUN_148f481a2(param_1,iVar4);
        }
        puVar1 = (undefined4 *)(lVar9 + lVar10);
        lVar5 = *param_1;
        uVar6 = puVar1[1];
        uVar7 = puVar1[2];
        uVar8 = puVar1[3];
        puVar2 = (undefined4 *)(lVar5 + (longlong)iVar4 * 0x18);
        *puVar2 = *puVar1;
        puVar2[1] = uVar6;
        puVar2[2] = uVar7;
        puVar2[3] = uVar8;
        *(longlong **)(lVar5 + 0x10 + (longlong)iVar4 * 0x18) = param_2;
        if (DAT_14c950c29 == '\x01') {
          FUN_14689c22e(param_2);
        }
        lVar10 = lVar10 + 0x30;
      } while ((longlong)iVar3 * 0x30 != lVar10);
    }
  }
  return param_1;
}



// FUNCTION 148f41392 FUN_148f41392 body=202 status=ok
// SIG undefined FUN_148f41392(void)

void FUN_148f41392(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 auStack_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = (longlong *)0x0;
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
  if (local_20 == (longlong *)0x0) {
    uVar2 = 0;
    FUN_1415b7ec4(L"Cannot call GetClockSource on a null sequence",2,0);
  }
  else {
    lVar1 = (**(code **)(*local_20 + 0x2e8))();
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined1 *)(lVar1 + 0x129);
    }
  }
  *param_3 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f4145e FUN_148f4145e body=231 status=ok
// SIG undefined FUN_148f4145e(void)

void FUN_148f4145e(undefined8 param_1,longlong param_2,ulonglong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong *)0x0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  uVar3 = 0x100000000;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_28 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Cannot call GetDisplayRate on a null sequence",2,0);
  }
  else {
    lVar1 = (**(code **)(*local_28 + 0x2e8))();
    if (lVar1 != 0) {
      uVar3 = *(ulonglong *)(lVar1 + 0x120) & 0xffffffff00000000;
      uVar2 = *(ulonglong *)(lVar1 + 0x120) & 0xffffffff;
      goto LAB_148f41521;
    }
  }
  uVar2 = 60000;
LAB_148f41521:
  *param_3 = uVar3 | uVar2;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f41546 FUN_148f41546 body=78 status=ok
// SIG undefined FUN_148f41546(void)

undefined8 * FUN_148f41546(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Cannot call GetDisplayRate on a null sequence",2,0);
  }
  else {
    lVar1 = (**(code **)(*param_2 + 0x2e8))(param_2);
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x120);
      goto LAB_148f41588;
    }
  }
  uVar2 = 0x10000ea60;
LAB_148f41588:
  *param_1 = uVar2;
  return param_1;
}



// FUNCTION 148f41594 FUN_148f41594 body=196 status=ok
// SIG undefined FUN_148f41594(void)

void FUN_148f41594(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = (longlong *)0x0;
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
  if (local_20 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Cannot call GetEvaluationType on a null sequence",2,0);
  }
  else {
    lVar2 = (**(code **)(*local_20 + 0x2e8))();
    if (lVar2 != 0) {
      uVar1 = *(undefined1 *)(lVar2 + 0x128);
      goto LAB_148f41639;
    }
  }
  uVar1 = 1;
LAB_148f41639:
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f4165a FUN_148f4165a body=199 status=ok
// SIG undefined FUN_148f4165a(void)

void FUN_148f4165a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
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
  FUN_148f4187e(&local_30,local_20,1);
  FUN_148f41722(param_3,&local_30);
  FUN_140cae155(local_30,local_28);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f41722 FUN_148f41722 body=78 status=ok
// SIG undefined FUN_148f41722(void)

longlong * FUN_148f41722(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_140cae155(*param_1,(int)param_1[1]);
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



// FUNCTION 148f41770 FUN_148f41770 body=268 status=ok
// SIG undefined FUN_148f41770(void)

void FUN_148f41770(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined1 local_21;
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
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f4187e(&local_38,local_20,local_21);
  FUN_148f41722(param_3,&local_38);
  FUN_140cae155(local_38,local_30);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f4187e FUN_148f4187e body=320 status=ok
// SIG undefined FUN_148f4187e(void)

longlong * FUN_148f4187e(longlong *param_1,longlong *param_2,char param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  int local_68;
  float local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Cannot call GetMarkedFrames on a null sequence",2,0);
  }
  else {
    lVar5 = (**(code **)(*param_2 + 0x2e8))(param_2);
    if (lVar5 != 0) {
      *param_1 = 0;
      iVar1 = *(int *)(lVar5 + 0x158);
      uVar2 = *(undefined8 *)(lVar5 + 0x150);
      *(int *)(param_1 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1475903c0(param_1,iVar1,0);
        FUN_147590422(*param_1,uVar2,iVar1);
      }
      if ((param_3 == '\0') && (lVar4 = param_1[1], (longlong)(int)lVar4 != 0)) {
        uVar2 = *(undefined8 *)(lVar5 + 0x118);
        uVar3 = *(undefined8 *)(lVar5 + 0x120);
        lVar5 = *param_1;
        lVar6 = 0;
        do {
          FUN_144a808d5(&local_68,*(undefined4 *)(lVar5 + lVar6),uVar2,uVar3);
          *(uint *)(lVar5 + lVar6) = (uint)(0.5 <= local_64) + local_68;
          lVar6 = lVar6 + 0x20;
        } while ((longlong)(int)lVar4 * 0x20 != lVar6);
      }
      if ((local_60 ^ (ulonglong)auStack_88) == DAT_14c707940) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_88);
}



// FUNCTION 148f419c0 FUN_148f419c0 body=189 status=ok
// SIG undefined FUN_148f419c0(void)

void FUN_148f419c0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = (longlong *)0x0;
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
  if (local_20 == (longlong *)0x0) {
    uVar1 = 0;
    FUN_1415b7ec4(L"Cannot call GetMovieScene on a null sequence",2,0);
  }
  else {
    uVar1 = (**(code **)(*local_20 + 0x2e8))();
  }
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f41a7e FUN_148f41a7e body=155 status=ok
// SIG undefined FUN_148f41a7e(void)

void FUN_148f41a7e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  uVar1 = FUN_148f41b1a(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f41b1a FUN_148f41b1a body=226 status=ok
// SIG undefined FUN_148f41b1a(void)

undefined4 FUN_148f41b1a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  undefined4 local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Cannot call GetPlaybackEnd on a null sequence",2,0);
  }
  else {
    lVar1 = (**(code **)(*param_1 + 0x2e8))();
    if (lVar1 != 0) {
      uVar3 = 0x10000ea60;
      lVar2 = (**(code **)(*param_1 + 0x2e8))(param_1);
      uVar4 = 0x10000ea60;
      if (lVar2 != 0) {
        uVar4 = *(undefined8 *)(lVar2 + 0x120);
      }
      lVar2 = (**(code **)(*param_1 + 0x2e8))(param_1);
      if (lVar2 != 0) {
        uVar3 = *(undefined8 *)(lVar2 + 0x118);
      }
      FUN_144a808d5(local_30,(int)((ulonglong)*(undefined8 *)(lVar1 + 0x110) >> 0x20) +
                             *(int *)(&DAT_14a46e600 +
                                     (ulonglong)((char)*(undefined8 *)(lVar1 + 0x110) == '\x01') * 4
                                     ),uVar3,uVar4);
      goto LAB_148f41bdc;
    }
  }
  local_30[0] = 0xffffffff;
LAB_148f41bdc:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_30[0];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f41bfe FUN_148f41bfe body=157 status=ok
// SIG undefined FUN_148f41bfe(void)

void FUN_148f41bfe(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  uVar1 = FUN_148f41c9c(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f41c9c FUN_148f41c9c body=334 status=ok
// SIG undefined FUN_148f41c9c(void)

void FUN_148f41c9c(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Cannot call GetPlaybackEndSeconds on a null sequence",2,0);
  }
  else {
    lVar1 = (**(code **)(*param_1 + 0x2e8))();
    if (lVar1 != 0) {
      lVar2 = (**(code **)(*param_1 + 0x2e8))(param_1);
      if (lVar2 == 0) {
        uVar5 = 1;
        uVar4 = 60000;
      }
      else {
        uVar4 = *(ulonglong *)(lVar2 + 0x120);
        uVar5 = uVar4 >> 0x20;
      }
      lVar2 = (**(code **)(*param_1 + 0x2e8))(param_1);
      if (lVar2 == 0) {
        uVar3 = 0x10000ea60;
      }
      else {
        uVar3 = *(undefined8 *)(lVar2 + 0x118);
      }
      FUN_144a808d5(local_38,(int)((ulonglong)*(undefined8 *)(lVar1 + 0x110) >> 0x20) +
                             *(int *)(&DAT_14a46e600 +
                                     (ulonglong)((char)*(undefined8 *)(lVar1 + 0x110) == '\x01') * 4
                                     ),uVar3,uVar4 & 0xffffffff | uVar5 << 0x20);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f41dec FUN_148f41dec body=173 status=ok
// SIG undefined FUN_148f41dec(void)

void FUN_148f41dec(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
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
  FUN_148f41e9a(&local_34,local_20);
  param_3[4] = local_24;
  *param_3 = local_34;
  param_3[1] = uStack_30;
  param_3[2] = uStack_2c;
  param_3[3] = uStack_28;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f41e9a FUN_148f41e9a body=260 status=ok
// SIG undefined FUN_148f41e9a(void)

byte * FUN_148f41e9a(byte *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Cannot call GetPlaybackRange on a null sequence",2,0);
  }
  else {
    lVar1 = (**(code **)(*param_2 + 0x2e8))(param_2);
    if (lVar1 != 0) {
      lVar2 = (**(code **)(*param_2 + 0x2e8))(param_2);
      uVar5 = 60000;
      uVar4 = 0x100000000;
      if (lVar2 != 0) {
        uVar4 = *(ulonglong *)(lVar2 + 0x120) & 0xffffffff00000000;
        uVar5 = *(ulonglong *)(lVar2 + 0x120) & 0xffffffff;
      }
      lVar2 = (**(code **)(*param_2 + 0x2e8))(param_2);
      if (lVar2 == 0) {
        uVar3 = 0x10000ea60;
      }
      else {
        uVar3 = *(undefined8 *)(lVar2 + 0x118);
      }
      local_48 = *(undefined4 *)(lVar1 + 0x108);
      uStack_44 = *(undefined4 *)(lVar1 + 0x10c);
      uStack_40 = *(undefined4 *)(lVar1 + 0x110);
      uStack_3c = *(undefined4 *)(lVar1 + 0x114);
      FUN_148f45f92(param_1,&local_48,uVar3,uVar5 | uVar4);
      goto LAB_148f41ee0;
    }
  }
  *param_1 = *param_1 & 0xfc;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0x60;
  param_1[0xd] = 0xea;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 1;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
LAB_148f41ee0:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f41fa0 FUN_148f41fa0 body=155 status=ok
// SIG undefined FUN_148f41fa0(void)

void FUN_148f41fa0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  uVar1 = FUN_148f4203c(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f4203c FUN_148f4203c body=226 status=ok
// SIG undefined FUN_148f4203c(void)

undefined4 FUN_148f4203c(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  undefined4 local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Cannot call GetPlaybackStart on a null sequence",2,0);
  }
  else {
    lVar1 = (**(code **)(*param_1 + 0x2e8))();
    if (lVar1 != 0) {
      uVar3 = 0x10000ea60;
      lVar2 = (**(code **)(*param_1 + 0x2e8))(param_1);
      uVar4 = 0x10000ea60;
      if (lVar2 != 0) {
        uVar4 = *(undefined8 *)(lVar2 + 0x120);
      }
      lVar2 = (**(code **)(*param_1 + 0x2e8))(param_1);
      if (lVar2 != 0) {
        uVar3 = *(undefined8 *)(lVar2 + 0x118);
      }
      FUN_144a808d5(local_30,(int)((ulonglong)*(undefined8 *)(lVar1 + 0x108) >> 0x20) +
                             *(int *)(&DAT_14a46e5f8 +
                                     (ulonglong)((char)*(undefined8 *)(lVar1 + 0x108) == '\0') * 4),
                    uVar3,uVar4);
      goto LAB_148f420fe;
    }
  }
  local_30[0] = 0xffffffff;
LAB_148f420fe:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_30[0];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f42120 FUN_148f42120 body=157 status=ok
// SIG undefined FUN_148f42120(void)

void FUN_148f42120(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  uVar1 = FUN_148f421be(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f421be FUN_148f421be body=334 status=ok
// SIG undefined FUN_148f421be(void)

void FUN_148f421be(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Cannot call GetPlaybackStartSeconds on a null sequence",2,0);
  }
  else {
    lVar1 = (**(code **)(*param_1 + 0x2e8))();
    if (lVar1 != 0) {
      lVar2 = (**(code **)(*param_1 + 0x2e8))(param_1);
      if (lVar2 == 0) {
        uVar5 = 1;
        uVar4 = 60000;
      }
      else {
        uVar4 = *(ulonglong *)(lVar2 + 0x120);
        uVar5 = uVar4 >> 0x20;
      }
      lVar2 = (**(code **)(*param_1 + 0x2e8))(param_1);
      if (lVar2 == 0) {
        uVar3 = 0x10000ea60;
      }
      else {
        uVar3 = *(undefined8 *)(lVar2 + 0x118);
      }
      FUN_144a808d5(local_38,(int)((ulonglong)*(undefined8 *)(lVar1 + 0x108) >> 0x20) +
                             *(int *)(&DAT_14a46e5f8 +
                                     (ulonglong)((char)*(undefined8 *)(lVar1 + 0x108) == '\0') * 4),
                    uVar3,uVar4 & 0xffffffff | uVar5 << 0x20);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f4230e FUN_148f4230e body=345 status=ok
// SIG undefined FUN_148f4230e(void)

void FUN_148f4230e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f42468(&local_60,local_20,local_28,puVar1);
  *(undefined8 *)(param_3 + 4) = local_50;
  *param_3 = local_60;
  param_3[1] = uStack_5c;
  param_3[2] = uStack_58;
  param_3[3] = uStack_54;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f42468 FUN_148f42468 body=1176 status=ok
// SIG undefined FUN_148f42468(void)

undefined8 *
FUN_148f42468(undefined8 *param_1,longlong param_2,longlong param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  longlong *plVar9;
  undefined4 uVar10;
  undefined2 *puVar11;
  int iVar12;
  longlong lVar13;
  undefined4 *puVar14;
  byte bVar15;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  byte local_c9;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 *local_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong *local_a8;
  int local_a0;
  undefined8 local_98;
  int iStack_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  uVar10 = DAT_14cbf2a7c;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((param_3 == 0 || param_2 == 0) || (lVar6 = *(longlong *)(param_4 + 4), lVar6 == 0)) {
    FUN_1415b7ec4(L"Invalid sequence specified.",2,0);
  }
  else {
    if (lVar6 == param_2 && param_2 == param_3) {
      uVar2 = param_4[1];
      uVar3 = param_4[2];
      uVar4 = param_4[3];
      *(undefined4 *)param_1 = *param_4;
      *(undefined4 *)((longlong)param_1 + 4) = uVar2;
      *(undefined4 *)(param_1 + 1) = uVar3;
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
      *(undefined4 *)(param_1 + 2) = uVar10;
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
      goto LAB_148f42509;
    }
    local_c8 = CONCAT31(local_c8._1_3_,lVar6 == param_2);
    bVar15 = lVar6 == param_2;
    local_c9 = param_2 == param_3;
    uVar5 = FUN_140b55eae();
    FUN_1475350d8(uVar5,&local_6c,param_2);
    lVar6 = FUN_1400a382a(uVar5,local_6c);
    if (lVar6 == 0) {
      FUN_14010318a(param_2,&local_68,0);
      puVar11 = &DAT_149dfb77a;
      if ((int)uStack_60 != 0) {
        puVar11 = local_68;
      }
      FUN_140002266(&local_98,L"Root Sequence (\'%s\') does not have any sub-sequences.",puVar11);
      plVar9 = (longlong *)&DAT_149dfb77a;
      if (iStack_90 != 0) {
        plVar9 = local_98;
      }
      FUN_1415b7ec4(plVar9,2,0);
      local_a8 = local_98;
    }
    else {
      local_c4 = uVar10;
      local_b8 = (longlong *)(lVar6 + 0x98);
      lVar13 = lVar6 + 0xa8;
      local_68 = (undefined2 *)0x100000000;
      local_58 = 0xffffffff;
      uStack_50 = 0;
      local_c0 = param_4;
      uStack_60 = lVar13;
      if (*(int *)(lVar6 + 0xc0) == 0) {
        iVar12 = 0;
      }
      else {
        FUN_1449c0562(&local_68);
        iVar12 = *(int *)(lVar6 + 0xc0);
      }
      uStack_78 = CONCAT44(uStack_4c,uStack_50);
      local_80 = local_58;
      uVar5 = local_80;
      iStack_90 = (int)local_68;
      uStack_8c = local_68._4_4_;
      uStack_88 = (int)uStack_60;
      uStack_84 = uStack_60._4_4_;
      local_98 = local_b8;
      local_80._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      local_80 = uVar5;
      if ((local_80._4_4_ == iVar12) && (uStack_60 == lVar13)) {
        bVar15 = (byte)local_c8;
        uVar10 = local_c4;
        if (param_2 == param_3) goto LAB_148f4283e;
LAB_148f4264b:
        FUN_14010318a(param_2,&local_68,0);
        puVar11 = &DAT_149dfb77a;
        if ((int)uStack_60 != 0) {
          puVar11 = local_68;
        }
        FUN_14010318a(param_3,&local_a8,0);
        plVar9 = (longlong *)&DAT_149dfb77a;
        if (local_a0 != 0) {
          plVar9 = local_a8;
        }
        FUN_140002266(&local_98,
                      L"Unable to locate DestinationSequence (\'%s\') within Root Sequence hierarchy (\'%s\')."
                      ,plVar9,puVar11);
        plVar9 = (longlong *)&DAT_149dfb77a;
        if (iStack_90 != 0) {
          plVar9 = local_98;
        }
      }
      else {
        local_c8 = local_c4;
        iVar1 = local_80._4_4_;
        local_b0 = lVar6;
        do {
          lVar6 = *local_98;
          lVar7 = FUN_1400a4c08(lVar6 + (longlong)iVar1 * 0x100 + 8);
          bVar8 = local_c9;
          if (lVar7 != 0) {
            puVar14 = (undefined4 *)(lVar6 + (longlong)iVar1 * 0x100);
            if (((bool)bVar15 == false) && (*(longlong *)(local_c0 + 4) == lVar7)) {
              local_c4 = *puVar14;
              bVar15 = true;
            }
            if (lVar7 == param_3 && (local_c9 & 1) == 0) {
              local_c8 = *puVar14;
              bVar8 = 1;
            }
            else if ((local_c9 & 1) == 0) goto LAB_148f427e2;
            if ((bool)bVar15 != false) {
              bVar15 = true;
              break;
            }
          }
LAB_148f427e2:
          local_c9 = bVar8;
          local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_8c);
          FUN_1449c0562(&iStack_90);
          bVar8 = local_c9;
          iVar1 = local_80._4_4_;
        } while (local_98 != local_b8 ||
                 (CONCAT44(uStack_84,uStack_88) != lVar13 || local_80._4_4_ != iVar12));
        lVar6 = local_b0;
        uVar10 = local_c8;
        if ((bVar8 & 1) == 0) goto LAB_148f4264b;
LAB_148f4283e:
        if ((bVar15 & 1) != 0) {
          local_d8 = lVar6;
          FUN_14757413e(&local_98,uVar10,local_c4,local_c0);
          *(undefined4 *)param_1 = (undefined4)local_98;
          *(undefined4 *)((longlong)param_1 + 4) = local_98._4_4_;
          *(int *)(param_1 + 1) = iStack_90;
          *(uint *)((longlong)param_1 + 0xc) = uStack_8c;
          *(undefined4 *)(param_1 + 2) = uStack_88;
          *(undefined4 *)((longlong)param_1 + 0x14) = uStack_84;
          goto LAB_148f42509;
        }
        FUN_14010318a(param_2,&local_68,0);
        puVar11 = &DAT_149dfb77a;
        if ((int)uStack_60 != 0) {
          puVar11 = local_68;
        }
        FUN_14010318a(*(undefined8 *)(local_c0 + 4),&local_a8,0);
        plVar9 = (longlong *)&DAT_149dfb77a;
        if (local_a0 != 0) {
          plVar9 = local_a8;
        }
        FUN_140002266(&local_98,
                      L"Unable to locate Sequence for InBinding (\'%s\') within Root Sequence hierarchy (\'%s\')."
                      ,plVar9,puVar11);
        plVar9 = (longlong *)&DAT_149dfb77a;
        if (iStack_90 != 0) {
          plVar9 = local_98;
        }
      }
      FUN_1415b7ec4(plVar9,2,0);
      if (local_98 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_a8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = DAT_14cbf2a7c;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
LAB_148f42509:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148f42902 FUN_148f42902 body=218 status=ok
// SIG undefined FUN_148f42902(void)

void FUN_148f42902(undefined8 param_1,longlong param_2,longlong *param_3)

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
  FUN_148f429de(&local_30,local_20);
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



// FUNCTION 148f429de FUN_148f429de body=415 status=ok
// SIG undefined FUN_148f429de(void)

longlong * FUN_148f429de(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Cannot call GetPossessables on a null sequence",2,0);
    *param_1 = 0;
    param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
  }
  *param_1 = 0;
  param_1[1] = 0;
  lVar9 = FUN_1432dd568(param_2);
  if (lVar9 == 0) {
    lVar9 = (**(code **)(*param_2 + 0x2e8))(param_2);
    if ((lVar9 != 0) && (iVar8 = FUN_1432dd3cc(lVar9), 0 < iVar8)) {
      iVar11 = 0;
      do {
        lVar10 = FUN_1432dd3d0(lVar9,iVar11);
        iVar3 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
          FUN_148f481a2(param_1,iVar3);
        }
        lVar4 = *param_1;
        uVar5 = *(undefined4 *)(lVar10 + 0x3c);
        uVar6 = *(undefined4 *)(lVar10 + 0x40);
        uVar7 = *(undefined4 *)(lVar10 + 0x44);
        puVar1 = (undefined4 *)(lVar4 + (longlong)iVar3 * 0x18);
        *puVar1 = *(undefined4 *)(lVar10 + 0x38);
        puVar1[1] = uVar5;
        puVar1[2] = uVar6;
        puVar1[3] = uVar7;
        *(longlong **)(lVar4 + 0x10 + (longlong)iVar3 * 0x18) = param_2;
        if (DAT_14c950c29 == '\x01') {
          FUN_14689c22e(param_2);
        }
        iVar11 = iVar11 + 1;
      } while (iVar8 != iVar11);
    }
  }
  else {
    FUN_1432dd46e(lVar9,&local_50);
    if ((longlong)local_48 != 0) {
      lVar9 = 0;
      do {
        if (*(longlong *)(local_50 + 0x28 + lVar9) == 0) {
          iVar8 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar8 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar8 + 1U) {
            FUN_148f481a2(param_1,iVar8);
          }
          puVar1 = (undefined4 *)(local_50 + lVar9);
          lVar10 = *param_1;
          uVar5 = puVar1[1];
          uVar6 = puVar1[2];
          uVar7 = puVar1[3];
          puVar2 = (undefined4 *)(lVar10 + (longlong)iVar8 * 0x18);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar2[2] = uVar6;
          puVar2[3] = uVar7;
          *(longlong **)(lVar10 + 0x10 + (longlong)iVar8 * 0x18) = param_2;
          if (DAT_14c950c29 == '\x01') {
            FUN_14689c22e(param_2);
          }
        }
        lVar9 = lVar9 + 0x30;
      } while ((longlong)local_48 * 0x30 != lVar9);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f42b7e FUN_148f42b7e body=187 status=ok
// SIG undefined FUN_148f42b7e(void)

void FUN_148f42b7e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [40];
  longlong local_20;
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
  if (local_20 == 0) {
    FUN_1415b7ec4(L"Cannot call GetRootFoldersInSequence on a null sequence",2,0);
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  *param_3 = 0;
  param_3[1] = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f42c3a FUN_148f42c3a body=218 status=ok
// SIG undefined FUN_148f42c3a(void)

void FUN_148f42c3a(undefined8 param_1,longlong param_2,longlong *param_3)

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
  FUN_148f42d16(&local_30,local_20);
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



// FUNCTION 148f42d16 FUN_148f42d16 body=488 status=ok
// SIG undefined FUN_148f42d16(void)

longlong * FUN_148f42d16(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Cannot call GetSpawnables on a null sequence",2,0);
    *param_1 = 0;
    param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
  }
  *param_1 = 0;
  param_1[1] = 0;
  lVar8 = (**(code **)(*param_2 + 0x2e8))(param_2);
  if (lVar8 != 0) {
    iVar7 = FUN_1415c6332(lVar8);
    if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar7);
    }
    if (*(int *)((longlong)param_1 + 0xc) < iVar7) {
      FUN_148f48290(param_1,iVar7);
    }
    if (iVar7 != 0) {
      iVar11 = 0;
      do {
        lVar9 = FUN_14574ef0a(lVar8,iVar11);
        iVar3 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
          FUN_148f481a2(param_1,iVar3);
        }
        lVar10 = *param_1;
        uVar4 = *(undefined4 *)(lVar9 + 0xa4);
        uVar5 = *(undefined4 *)(lVar9 + 0xa8);
        uVar6 = *(undefined4 *)(lVar9 + 0xac);
        puVar1 = (undefined4 *)(lVar10 + (longlong)iVar3 * 0x18);
        *puVar1 = *(undefined4 *)(lVar9 + 0xa0);
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
        *(longlong **)(lVar10 + 0x10 + (longlong)iVar3 * 0x18) = param_2;
        if (DAT_14c950c29 == '\x01') {
          FUN_14689c22e(param_2);
        }
        iVar11 = iVar11 + 1;
      } while (iVar7 != iVar11);
    }
  }
  lVar8 = FUN_1432dd568(param_2);
  if (lVar8 != 0) {
    FUN_1432dd46e(lVar8,&local_50);
    if ((longlong)local_48 != 0) {
      lVar8 = 0;
      do {
        lVar9 = *(longlong *)(local_50 + 0x28 + lVar8);
        if (lVar9 != 0) {
          lVar10 = FUN_145a67d3c();
          lVar9 = *(longlong *)(lVar9 + 0x10);
          if ((*(int *)(lVar10 + 0x38) <= *(int *)(lVar9 + 0x38)) &&
             (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
              lVar10 + 0x30)) {
            iVar7 = (int)param_1[1];
            *(uint *)(param_1 + 1) = iVar7 + 1U;
            if (*(uint *)((longlong)param_1 + 0xc) < iVar7 + 1U) {
              FUN_148f481a2(param_1,iVar7);
            }
            puVar1 = (undefined4 *)(local_50 + lVar8);
            lVar9 = *param_1;
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            puVar2 = (undefined4 *)(lVar9 + (longlong)iVar7 * 0x18);
            *puVar2 = *puVar1;
            puVar2[1] = uVar4;
            puVar2[2] = uVar5;
            puVar2[3] = uVar6;
            *(longlong **)(lVar9 + 0x10 + (longlong)iVar7 * 0x18) = param_2;
            if (DAT_14c950c29 == '\x01') {
              FUN_14689c22e(param_2);
            }
          }
        }
        lVar8 = lVar8 + 0x30;
      } while ((longlong)local_48 * 0x30 != lVar8);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f42f00 FUN_148f42f00 body=231 status=ok
// SIG undefined FUN_148f42f00(void)

void FUN_148f42f00(undefined8 param_1,longlong param_2,ulonglong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong *)0x0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  uVar3 = 0x100000000;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_28 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Cannot call GetTickResolution on a null sequence",2,0);
  }
  else {
    lVar1 = (**(code **)(*local_28 + 0x2e8))();
    if (lVar1 != 0) {
      uVar3 = *(ulonglong *)(lVar1 + 0x118) & 0xffffffff00000000;
      uVar2 = *(ulonglong *)(lVar1 + 0x118) & 0xffffffff;
      goto LAB_148f42fc3;
    }
  }
  uVar2 = 60000;
LAB_148f42fc3:
  *param_3 = uVar3 | uVar2;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f42fe8 FUN_148f42fe8 body=78 status=ok
// SIG undefined FUN_148f42fe8(void)

undefined8 * FUN_148f42fe8(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Cannot call GetTickResolution on a null sequence",2,0);
  }
  else {
    lVar1 = (**(code **)(*param_2 + 0x2e8))(param_2);
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x118);
      goto LAB_148f4302a;
    }
  }
  uVar2 = 0x10000ea60;
LAB_148f4302a:
  *param_1 = uVar2;
  return param_1;
}



// FUNCTION 148f43036 FUN_148f43036 body=218 status=ok
// SIG undefined FUN_148f43036(void)

void FUN_148f43036(undefined8 param_1,longlong param_2,longlong *param_3)

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
  FUN_148f43112(&local_30,local_20);
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



// FUNCTION 148f43112 FUN_148f43112 body=145 status=ok
// SIG undefined FUN_148f43112(void)

longlong * FUN_148f43112(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_2 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Cannot call GetTracks on a null sequence",2,0);
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    lVar2 = (**(code **)(*param_2 + 0x2e8))(param_2);
    if (lVar2 != 0) {
      FUN_148f45f3a(param_1,lVar2 + 0xe0);
      lVar2 = FUN_14756e164(lVar2);
      if (lVar2 != 0) {
        iVar1 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_14574f0bc(param_1,iVar1);
        }
        *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar2;
      }
    }
  }
  return param_1;
}



// FUNCTION 148f431a4 FUN_148f431a4 body=188 status=ok
// SIG undefined FUN_148f431a4(void)

void FUN_148f431a4(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = (longlong *)0x0;
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
  if (local_20 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Cannot call GetViewRangeEnd on a null sequence",2,0);
  }
  else {
    (**(code **)(*local_20 + 0x2e8))();
  }
  *param_3 = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f43262 FUN_148f43262 body=188 status=ok
// SIG undefined FUN_148f43262(void)

void FUN_148f43262(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = (longlong *)0x0;
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
  if (local_20 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Cannot call GetViewRangeStart on a null sequence",2,0);
  }
  else {
    (**(code **)(*local_20 + 0x2e8))();
  }
  *param_3 = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f43320 FUN_148f43320 body=188 status=ok
// SIG undefined FUN_148f43320(void)

void FUN_148f43320(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = (longlong *)0x0;
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
  if (local_20 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Cannot call GetWorkRangeEnd on a null sequence",2,0);
  }
  else {
    (**(code **)(*local_20 + 0x2e8))();
  }
  *param_3 = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f433de FUN_148f433de body=188 status=ok
// SIG undefined FUN_148f433de(void)

void FUN_148f433de(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = (longlong *)0x0;
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
  if (local_20 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Cannot call GetWorkRangeStart on a null sequence",2,0);
  }
  else {
    (**(code **)(*local_20 + 0x2e8))();
  }
  *param_3 = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f434a2 FUN_148f434a2 body=171 status=ok
// SIG undefined FUN_148f434a2(void)

void FUN_148f434a2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 auStack_48 [40];
  longlong local_20;
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
  if (local_20 == 0) {
    FUN_1415b7ec4(L"Cannot call IsPlaybackRangeLocked on a null sequence",2,0);
  }
  *param_3 = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f43554 FUN_148f43554 body=171 status=ok
// SIG undefined FUN_148f43554(void)

void FUN_148f43554(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 auStack_48 [40];
  longlong local_20;
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
  if (local_20 == 0) {
    FUN_1415b7ec4(L"Cannot call IsReadOnly on a null sequence",2,0);
  }
  *param_3 = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f43600 FUN_148f43600 body=393 status=ok
// SIG undefined FUN_148f43600(void)

void FUN_148f43600(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f4378a(&local_60,local_28,puVar1,local_50);
  if (&local_60 == param_3) {
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_60;
    *(undefined4 *)(param_3 + 1) = local_58;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_54;
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f4378a FUN_148f4378a body=711 status=ok
// SIG undefined FUN_148f4378a(void)

longlong * FUN_148f4378a(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_1e8 [32];
  longlong **local_1c8;
  undefined8 local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  longlong local_1a0;
  int local_198;
  longlong *local_190;
  longlong *local_188;
  longlong *local_180;
  longlong *local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined **local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if (param_2 == 0) {
    FUN_1415b7ec4(L"Cannot call LocateBoundObjects on a null sequence",2,0);
    *param_1 = 0;
    param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_1e8);
  }
  local_168 = 0xffff;
  local_160 = 0;
  uStack_158 = 0;
  local_170 = param_4;
  plVar5 = (longlong *)FUN_14494321d(0x80);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a475bf0;
  plVar1 = plVar5 + 2;
  FUN_140b56624(plVar1,param_2,&local_170);
  local_180 = plVar1;
  local_178 = plVar5;
  FUN_140b560f4(&local_180,plVar1);
  plVar1 = local_180;
  local_150 = &PTR_FUN_14a490480;
  local_128 = 0;
  local_120 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_108 = 0;
  local_100 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_cc = 0xffffffff00000080;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_7c = 0xffffffff00000080;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  uVar6 = FUN_140cb5476(local_180 + 7);
  FUN_1409e50e6(plVar1,uVar6);
  local_190 = local_180;
  local_188 = local_178;
  if (local_178 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_178 + 1) = (int)local_178[1] + 1;
    UNLOCK();
  }
  FUN_140a473e6(&local_150,&DAT_14cbf2a7c,param_2,&local_190);
  local_1b0 = local_180;
  local_1a8 = local_178;
  if (local_178 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_178 + 1) = (int)local_178[1] + 1;
    UNLOCK();
  }
  local_1c8 = &local_1b0;
  FUN_1401abfd8(&local_150,&local_1a0,param_3,&DAT_14cbf2a7c);
  *param_1 = 0;
  param_1[1] = 0;
  if ((longlong)local_198 != 0) {
    lVar7 = 0;
    do {
      local_1b8 = *(undefined8 *)(local_1a0 + lVar7);
      cVar4 = FUN_144729dda(&local_1b8);
      if (cVar4 != '\0') {
        uVar6 = FUN_14479d2ce(&local_1b8);
        iVar3 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
          FUN_1447f76d2(param_1,iVar3);
        }
        *(undefined8 *)(*param_1 + (longlong)iVar3 * 8) = uVar6;
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)local_198 * 8 != lVar7);
  }
  FUN_14757433c(&local_150);
  plVar1 = local_178;
  if (local_178 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_178 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_178)(local_178);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148f43a52 FUN_148f43a52 body=323 status=ok
// SIG undefined FUN_148f43a52(void)

void FUN_148f43a52(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f43b96(&local_3c,local_20,local_24,local_28);
  param_3[4] = local_2c;
  *param_3 = local_3c;
  param_3[1] = uStack_38;
  param_3[2] = uStack_34;
  param_3[3] = uStack_30;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f43b96 FUN_148f43b96 body=169 status=ok
// SIG undefined FUN_148f43b96(void)

byte * FUN_148f43b96(byte *param_1,longlong *param_2,int param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [4];
  int local_2c;
  undefined1 local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Cannot call MakeRange on a null sequence",2,0);
    *param_1 = *param_1 & 0xfc;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0x60;
    param_1[0xd] = 0xea;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 1;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  else {
    lVar1 = (**(code **)(*param_2 + 0x2e8))(param_2);
    if (lVar1 == 0) {
      uVar2 = 0x10000ea60;
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + 0x120);
    }
    local_24 = param_4 + param_3;
    local_30[0] = 1;
    local_28 = 0;
    local_2c = param_3;
    FUN_148f45f92(param_1,local_30,uVar2,uVar2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f43c40 FUN_148f43c40 body=325 status=ok
// SIG undefined FUN_148f43c40(void)

void FUN_148f43c40(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f43d86(&local_3c,local_20,local_24,local_28);
  param_3[4] = local_2c;
  *param_3 = local_3c;
  param_3[1] = uStack_38;
  param_3[2] = uStack_34;
  param_3[3] = uStack_30;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f43d86 FUN_148f43d86 body=434 status=ok
// SIG undefined FUN_148f43d86(void)

byte * FUN_148f43d86(byte *param_1,longlong *param_2,float param_3,float param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  undefined1 in_XMM5 [16];
  float fVar10;
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  int local_4c;
  undefined1 local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Cannot call MakeRangeSeconds on a null sequence",2,0);
    *param_1 = *param_1 & 0xfc;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0x60;
    param_1[0xd] = 0xea;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 1;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  else {
    lVar1 = (**(code **)(*param_2 + 0x2e8))(param_2);
    if (lVar1 == 0) {
      uVar3 = 0x10000ea60;
    }
    else {
      uVar3 = *(undefined8 *)(lVar1 + 0x120);
    }
    dVar6 = (double)(int)((ulonglong)uVar3 >> 0x20);
    dVar8 = ((double)(param_4 + param_3) * (double)(int)uVar3) / dVar6;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = dVar8;
    auVar5 = roundpd(in_XMM5,auVar5,1);
    dVar9 = auVar5._0_8_;
    dVar8 = dVar8 - dVar9;
    if (2147483647.0 <= dVar9) {
      dVar9 = 2147483647.0;
    }
    if (dVar9 <= -2147483648.0) {
      dVar9 = -2147483648.0;
    }
    iVar2 = (int)dVar8;
    fVar7 = (float)dVar8 - (float)iVar2;
    fVar10 = fVar7;
    if (0.99999994 <= fVar7) {
      fVar10 = 0.99999994;
    }
    fVar10 = (float)(~-(uint)(0.0 < fVar7) & (uint)fVar7 | (uint)fVar10 & -(uint)(0.0 < fVar7)) +
             0.5 + -0.5;
    if (0.99999994 <= fVar10) {
      fVar10 = 0.99999994;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    local_44 = (int)dVar9 + iVar2 + (uint)(fVar10 != 0.0);
    dVar9 = ((double)param_3 * (double)(int)uVar3) / dVar6;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = dVar9;
    auVar5 = roundpd(auVar4,auVar4,1);
    dVar8 = auVar5._0_8_;
    dVar9 = dVar9 - dVar8;
    if (2147483647.0 <= dVar8) {
      dVar8 = 2147483647.0;
    }
    if (dVar8 <= -2147483648.0) {
      dVar8 = -2147483648.0;
    }
    local_4c = (int)dVar9 + (int)dVar8;
    local_50[0] = 1;
    local_48 = 0;
    FUN_148f45f92(param_1,local_50,dVar6,uVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f43f3a FUN_148f43f3a body=224 status=ok
// SIG undefined FUN_148f43f3a(void)

void FUN_148f43f3a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  FUN_148f4401c(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f4401c FUN_148f4401c body=326 status=ok
// SIG undefined FUN_148f4401c(void)

void FUN_148f4401c(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 == (longlong *)0x0 || param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_88);
  }
  uVar1 = FUN_14073751e();
  lVar2 = FUN_144a78ede(param_2,uVar1);
  lVar3 = (**(code **)(*param_1 + 0x2e8))(param_1);
  if (lVar2 != lVar3) {
    local_38 = (undefined2 *)param_1[3];
    FUN_1400021e4(&local_38,&local_48);
    puVar4 = &DAT_149dfb77a;
    if (local_40 != 0) {
      puVar4 = local_48;
    }
    FUN_147572b0e(param_2,local_60);
    FUN_1400021e4(local_60,&local_58);
    puVar5 = &DAT_149dfb77a;
    if (local_50 != 0) {
      puVar5 = local_58;
    }
    FUN_140002266(&local_38,L"The folder \'%s\' does not belong to sequence \'%s\'",puVar5,puVar4);
    puVar4 = &DAT_149dfb77a;
    if (local_30 != 0) {
      puVar4 = local_38;
    }
    FUN_1415b7ec4(puVar4,2,0);
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f44180 FUN_148f44180 body=231 status=ok
// SIG undefined FUN_148f44180(void)

void FUN_148f44180(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_148f44268(local_20,local_28);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f44268 FUN_148f44268 body=125 status=ok
// SIG undefined FUN_148f44268(void)

ulonglong FUN_148f44268(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined7 uVar4;
  
  uVar4 = (undefined7)((ulonglong)param_2 >> 8);
  if (param_1 == (longlong *)0x0) {
    uVar3 = 0;
    FUN_1415b7ec4(L"Cannot call RemoveTrack on a null sequence",CONCAT71(uVar4,2),0);
  }
  else {
    lVar1 = (**(code **)(*param_1 + 0x2e8))();
    if (lVar1 == 0) {
      uVar3 = 0;
    }
    else {
      lVar2 = FUN_1410cbb10();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar2 + 0x38) * 8) != lVar2 + 0x30)) {
        uVar3 = FUN_14756dd8e(lVar1,param_2);
        return uVar3;
      }
      FUN_14756e16c(lVar1);
      uVar3 = CONCAT71(uVar4,1);
    }
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 148f442e6 FUN_148f442e6 body=310 status=ok
// SIG undefined FUN_148f442e6(void)

void FUN_148f442e6(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = DAT_14cbf2a7c;
  uStack_24 = 0xffffffff;
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
  local_68 = (undefined4)local_38;
  uStack_64 = local_38._4_4_;
  uStack_60 = (undefined4)uStack_30;
  uStack_5c = uStack_30._4_4_;
  local_58 = CONCAT44(uStack_24,local_28);
  FUN_148f4441e(&local_50,local_20);
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = uStack_48;
  param_3[3] = uStack_44;
  if ((local_40 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e(local_40);
  }
  *(longlong *)(param_3 + 4) = local_40;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f4441e FUN_148f4441e body=261 status=ok
// SIG undefined FUN_148f4441e(void)

undefined8 * FUN_148f4441e(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 0) {
    FUN_1415b7ec4(L"Cannot call ResolveBindingID on a null sequence",2,0);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
  }
  uVar4 = FUN_140b55eae();
  FUN_1475350d8(uVar4,&local_34,param_2);
  uVar4 = FUN_140b55eae();
  lVar5 = FUN_1400a382a(uVar4,local_34);
  if (lVar5 != 0) {
    FUN_1475741a8(param_3,local_38,DAT_14cbf2a7c,lVar5);
    lVar5 = FUN_1400d12c6(lVar5,local_38);
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = FUN_1400a4c08(lVar5);
    }
    if (lVar5 != 0) {
      param_2 = lVar5;
    }
  }
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)param_1 = *param_3;
  *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 1) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  param_1[2] = param_2;
  if (DAT_14c950c29 == '\x01') {
    FUN_14689c22e(param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148f44524 FUN_148f44524 body=219 status=ok
// SIG undefined FUN_148f44524(void)

void FUN_148f44524(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  FUN_148f44600(local_18,local_19);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f44600 FUN_148f44600 body=132 status=ok
// SIG undefined FUN_148f44600(void)

void FUN_148f44600(longlong *param_1,char param_2)

{
  undefined2 *puVar1;
  longlong lVar2;
  
  if (param_1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_1 + 0x2e8))();
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0x129) = param_2, param_2 != '\x06')) {
      *(undefined8 *)(lVar2 + 0x130) = 0;
      *(undefined8 *)(lVar2 + 0x138) = 0;
      *(undefined4 *)(lVar2 + 0x148) = 0;
      if (*(int *)(lVar2 + 0x14c) < 0) {
        FUN_1446f8c06((undefined8 *)(lVar2 + 0x140),0);
      }
      puVar1 = *(undefined2 **)(lVar2 + 0x140);
      if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
      }
    }
    return;
  }
  FUN_1415b7ec4(L"Cannot call SetClockSource on a null sequence",2,0);
  return;
}



// FUNCTION 148f44684 FUN_148f44684 body=284 status=ok
// SIG undefined FUN_148f44684(void)

void FUN_148f44684(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = (longlong *)0x0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0x10000ea60;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_18 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Cannot call SetDisplayRate on a null sequence",2,0);
  }
  else {
    lVar2 = (**(code **)(*local_18 + 0x2e8))();
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x120) = uVar1;
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f447a2 FUN_148f447a2 body=219 status=ok
// SIG undefined FUN_148f447a2(void)

void FUN_148f447a2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  FUN_148f4487e(local_18,local_19);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f4487e FUN_148f4487e body=82 status=ok
// SIG undefined FUN_148f4487e(void)

void FUN_148f4487e(longlong *param_1,char param_2)

{
  longlong lVar1;
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x2e8))();
    if (((lVar1 != 0) && (*(char *)(lVar1 + 0x128) = param_2, param_2 == '\0')) &&
       (*(char *)(lVar1 + 0x129) == '\0')) {
      *(undefined1 *)(lVar1 + 0x129) = 1;
    }
    return;
  }
  FUN_1415b7ec4(L"Cannot call SetEvaluationType on a null sequence",2,0);
  return;
}



// FUNCTION 148f448d0 FUN_148f448d0 body=300 status=ok
// SIG undefined FUN_148f448d0(void)

void FUN_148f448d0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f44b70(local_18,local_1c,local_20,1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f449fe FUN_148f449fe body=369 status=ok
// SIG undefined FUN_148f449fe(void)

void FUN_148f449fe(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [39];
  undefined1 local_21;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f44b70(local_18,local_1c,local_20,local_21);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f44b70 FUN_148f44b70 body=177 status=ok
// SIG undefined FUN_148f44b70(void)

void FUN_148f44b70(longlong *param_1,undefined4 param_2,int param_3,char param_4)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  int local_38;
  float local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
  }
  lVar1 = (**(code **)(*param_1 + 0x2e8))();
  if (lVar1 != 0) {
    if (param_4 == '\0') {
      FUN_144a808d5(&local_38,param_3,*(undefined8 *)(lVar1 + 0x120),*(undefined8 *)(lVar1 + 0x118))
      ;
      param_3 = (uint)(0.5 <= local_34) + local_38;
    }
    FUN_14756e99a(lVar1,param_2,param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f44c40 FUN_148f44c40 body=239 status=ok
// SIG undefined FUN_148f44c40(void)

void FUN_148f44c40(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  if (local_18 == 0) {
    FUN_1415b7ec4(L"Cannot call SetMarkedFramesLocked on a null sequence",2,0);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f44d30 FUN_148f44d30 body=222 status=ok
// SIG undefined FUN_148f44d30(void)

void FUN_148f44d30(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  FUN_148f44e10(local_18,local_1c);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f44e10 FUN_148f44e10 body=294 status=ok
// SIG undefined FUN_148f44e10(void)

void FUN_148f44e10(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [40];
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
  }
  lVar1 = (**(code **)(*param_1 + 0x2e8))();
  if (lVar1 != 0) {
    uVar3 = 0x100000000;
    lVar2 = (**(code **)(*param_1 + 0x2e8))(param_1);
    if (lVar2 == 0) {
      uVar5 = 60000;
    }
    else {
      uVar3 = *(ulonglong *)(lVar2 + 0x120) & 0xffffffff00000000;
      uVar5 = *(ulonglong *)(lVar2 + 0x120) & 0xffffffff;
    }
    local_40 = *(undefined4 *)(lVar1 + 0x110);
    local_48 = *(undefined8 *)(lVar1 + 0x108);
    lVar2 = (**(code **)(*param_1 + 0x2e8))(param_1);
    if (lVar2 == 0) {
      uVar4 = 0x10000ea60;
    }
    else {
      uVar4 = *(undefined8 *)(lVar2 + 0x118);
    }
    FUN_144a808d5(local_50,param_2,uVar3 | uVar5,uVar4);
    local_3c = local_50[0];
    FUN_14756db80(lVar1,&local_48,1);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f44f52 FUN_148f44f52 body=224 status=ok
// SIG undefined FUN_148f44f52(void)

void FUN_148f44f52(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  FUN_148f45034(local_18,local_1c);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f45034 FUN_148f45034 body=358 status=ok
// SIG undefined FUN_148f45034(void)

void FUN_148f45034(longlong *param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  float fVar9;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  lVar1 = (**(code **)(*param_1 + 0x2e8))();
  if (lVar1 != 0) {
    local_38 = *(undefined4 *)(lVar1 + 0x110);
    local_40 = *(undefined8 *)(lVar1 + 0x108);
    lVar2 = (**(code **)(*param_1 + 0x2e8))(param_1);
    if (lVar2 == 0) {
      uVar3 = 0x10000ea60;
    }
    else {
      uVar3 = *(undefined8 *)(lVar2 + 0x118);
    }
    dVar6 = ((double)(int)uVar3 * (double)param_2) / (double)(int)((ulonglong)uVar3 >> 0x20);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = dVar6;
    auVar8 = roundpd(auVar8,auVar8,1);
    dVar7 = auVar8._0_8_;
    dVar6 = dVar6 - dVar7;
    if (2147483647.0 <= dVar7) {
      dVar7 = 2147483647.0;
    }
    if (dVar7 <= -2147483648.0) {
      dVar7 = -2147483648.0;
    }
    iVar4 = (int)dVar6;
    fVar5 = (float)dVar6 - (float)iVar4;
    fVar9 = fVar5;
    if (0.99999994 <= fVar5) {
      fVar9 = 0.99999994;
    }
    fVar9 = (float)(~-(uint)(0.0 < fVar5) & (uint)fVar5 | (uint)fVar9 & -(uint)(0.0 < fVar5)) + 0.5
            + -0.5;
    if (0.99999994 <= fVar9) {
      fVar9 = 0.99999994;
    }
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    local_34 = (uint)(0.5 <= fVar9) + (int)dVar7 + iVar4;
    FUN_14756db80(lVar1,&local_40,1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f451ba FUN_148f451ba body=239 status=ok
// SIG undefined FUN_148f451ba(void)

void FUN_148f451ba(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  if (local_18 == 0) {
    FUN_1415b7ec4(L"Cannot call SetPlaybackRangeLocked on a null sequence",2,0);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f452aa FUN_148f452aa body=222 status=ok
// SIG undefined FUN_148f452aa(void)

void FUN_148f452aa(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  FUN_148f4538a(local_18,local_1c);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f4538a FUN_148f4538a body=284 status=ok
// SIG undefined FUN_148f4538a(void)

void FUN_148f4538a(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [40];
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
  }
  lVar1 = (**(code **)(*param_1 + 0x2e8))();
  if (lVar1 != 0) {
    uVar3 = 0x100000000;
    lVar2 = (**(code **)(*param_1 + 0x2e8))(param_1);
    if (lVar2 == 0) {
      uVar5 = 60000;
    }
    else {
      uVar3 = *(ulonglong *)(lVar2 + 0x120) & 0xffffffff00000000;
      uVar5 = *(ulonglong *)(lVar2 + 0x120) & 0xffffffff;
    }
    local_48 = *(undefined4 *)(lVar1 + 0x108);
    uStack_44 = *(undefined4 *)(lVar1 + 0x10c);
    uStack_40 = *(undefined4 *)(lVar1 + 0x110);
    uStack_3c = *(undefined4 *)(lVar1 + 0x114);
    lVar2 = (**(code **)(*param_1 + 0x2e8))(param_1);
    if (lVar2 == 0) {
      uVar4 = 0x10000ea60;
    }
    else {
      uVar4 = *(undefined8 *)(lVar2 + 0x118);
    }
    FUN_144a808d5(local_50,param_2,uVar3 | uVar5,uVar4);
    uStack_44 = local_50[0];
    FUN_14756db80(lVar1,&local_48,1);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f454c2 FUN_148f454c2 body=224 status=ok
// SIG undefined FUN_148f454c2(void)

void FUN_148f454c2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  FUN_148f455a4(local_18,local_1c);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f455a4 FUN_148f455a4 body=351 status=ok
// SIG undefined FUN_148f455a4(void)

void FUN_148f455a4(longlong *param_1,float param_2)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  float fVar6;
  double dVar7;
  undefined1 auVar8 [16];
  float fVar9;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  lVar2 = (**(code **)(*param_1 + 0x2e8))();
  if (lVar2 != 0) {
    local_48 = *(undefined4 *)(lVar2 + 0x108);
    iStack_44 = *(undefined4 *)(lVar2 + 0x10c);
    uStack_40 = *(undefined4 *)(lVar2 + 0x110);
    uStack_3c = *(undefined4 *)(lVar2 + 0x114);
    lVar3 = (**(code **)(*param_1 + 0x2e8))(param_1);
    if (lVar3 == 0) {
      uVar4 = 0x10000ea60;
    }
    else {
      uVar4 = *(undefined8 *)(lVar3 + 0x118);
    }
    dVar1 = ((double)(int)uVar4 * (double)param_2) / (double)(int)((ulonglong)uVar4 >> 0x20);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = dVar1;
    auVar8 = roundpd(auVar8,auVar8,1);
    dVar7 = auVar8._0_8_;
    dVar1 = dVar1 - dVar7;
    if (2147483647.0 <= dVar7) {
      dVar7 = 2147483647.0;
    }
    if (dVar7 <= -2147483648.0) {
      dVar7 = -2147483648.0;
    }
    iVar5 = (int)dVar1;
    fVar6 = (float)dVar1 - (float)iVar5;
    fVar9 = fVar6;
    if (0.99999994 <= fVar6) {
      fVar9 = 0.99999994;
    }
    fVar9 = (float)(~-(uint)(0.0 < fVar6) & (uint)fVar6 | (uint)fVar9 & -(uint)(0.0 < fVar6)) + 0.5
            + -0.5;
    if (0.99999994 <= fVar9) {
      fVar9 = 0.99999994;
    }
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    iStack_44 = (uint)(0.5 <= fVar9) + (int)dVar7 + iVar5;
    FUN_14756db80(lVar2,&local_48,1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f45722 FUN_148f45722 body=239 status=ok
// SIG undefined FUN_148f45722(void)

void FUN_148f45722(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  if (local_18 == 0) {
    FUN_1415b7ec4(L"Cannot call SetReadOnly on a null sequence",2,0);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f45812 FUN_148f45812 body=230 status=ok
// SIG undefined FUN_148f45812(void)

void FUN_148f45812(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0x10000ea60;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f458fa(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f458fa FUN_148f458fa body=82 status=ok
// SIG undefined FUN_148f458fa(void)

void FUN_148f458fa(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (param_1 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Cannot call SetTickResolution on a null sequence",2,0);
    return;
  }
  lVar1 = (**(code **)(*param_1 + 0x2e8))();
  if (lVar1 != 0) {
    FUN_1475837f6(*(undefined8 *)(lVar1 + 0x118),param_2,lVar1,0);
    return;
  }
  return;
}



// FUNCTION 148f4594c FUN_148f4594c body=284 status=ok
// SIG undefined FUN_148f4594c(void)

void FUN_148f4594c(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = (longlong *)0x0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0x10000ea60;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_18 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Cannot call SetTickResolutionDirectly on a null sequence",2,0);
  }
  else {
    lVar2 = (**(code **)(*local_18 + 0x2e8))();
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x118) = uVar1;
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f45a6a FUN_148f45a6a body=253 status=ok
// SIG undefined FUN_148f45a6a(void)

void FUN_148f45a6a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = (longlong *)0x0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_18 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Cannot call SetViewRangeEnd on a null sequence",2,0);
  }
  else {
    (**(code **)(*local_18 + 0x2e8))();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f45b68 FUN_148f45b68 body=253 status=ok
// SIG undefined FUN_148f45b68(void)

void FUN_148f45b68(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = (longlong *)0x0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_18 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Cannot call SetViewRangeStart on a null sequence",2,0);
  }
  else {
    (**(code **)(*local_18 + 0x2e8))();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f45c66 FUN_148f45c66 body=253 status=ok
// SIG undefined FUN_148f45c66(void)

void FUN_148f45c66(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = (longlong *)0x0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_18 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Cannot call SetWorkRangeEnd on a null sequence",2,0);
  }
  else {
    (**(code **)(*local_18 + 0x2e8))();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f45d64 FUN_148f45d64 body=253 status=ok
// SIG undefined FUN_148f45d64(void)

void FUN_148f45d64(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = (longlong *)0x0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_18 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Cannot call SetWorkRangeStart on a null sequence",2,0);
  }
  else {
    (**(code **)(*local_18 + 0x2e8))();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f45e62 FUN_148f45e62 body=148 status=ok
// SIG undefined FUN_148f45e62(void)

void FUN_148f45e62(undefined8 param_1,longlong param_2)

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
  FUN_148f45ef8(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f45ef8 FUN_148f45ef8 body=62 status=ok
// SIG undefined FUN_148f45ef8(void)

void FUN_148f45ef8(longlong *param_1)

{
  longlong lVar1;
  
  if (param_1 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Cannot call SortMarkedFrames on a null sequence",2,0);
    return;
  }
  lVar1 = (**(code **)(*param_1 + 0x2e8))();
  if (lVar1 != 0) {
    FUN_140fe2f26(lVar1);
    return;
  }
  return;
}



// FUNCTION 148f45f3a FUN_148f45f3a body=88 status=ok
// SIG undefined FUN_148f45f3a(void)

undefined8 * FUN_148f45f3a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14757e5b0(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 148f45f92 FUN_148f45f92 body=244 status=ok
// SIG undefined FUN_148f45f92(void)

byte * FUN_148f45f92(byte *param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [40];
  undefined4 local_40 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)(param_1 + 0xc) = param_4;
  uVar1 = *param_2;
  uVar3 = uVar1 & 0xff;
  uVar2 = param_2[1];
  *param_1 = ((char)uVar2 != '\x02') * '\x02' | uVar3 != 2 | *param_1 & 0xfc;
  if (uVar3 != 2) {
    FUN_144a808d5(local_40,(int)(uVar1 >> 0x20) +
                           *(int *)(&DAT_14a46e5f8 + (ulonglong)(uVar3 == 0) * 4),param_3,param_4);
    *(undefined4 *)(param_1 + 4) = local_40[0];
  }
  if ((char)uVar2 != '\x02') {
    FUN_144a808d5(local_40,(int)(param_2[1] >> 0x20) +
                           *(int *)(&DAT_14a46e600 + (ulonglong)((char)param_2[1] == '\x01') * 4),
                  param_3,param_4);
    *(undefined4 *)(param_1 + 8) = local_40[0];
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f46088 FUN_148f46088 body=313 status=ok
// SIG undefined FUN_148f46088(void)

void FUN_148f46088(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1432e0f1a(&local_28,0x3ff0000000000000);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar4 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
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
  puVar3 = &local_30;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (((uint)((ulonglong)*puVar4 >> 0x33) < 0x1fff) || (cVar2 = FUN_1432e0f08(puVar4), cVar2 == -1))
  {
    uVar1 = FUN_147585474(puVar4);
    *puVar3 = uVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f461c2 FUN_148f461c2 body=189 status=ok
// SIG undefined FUN_148f461c2(void)

void FUN_148f461c2(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (undefined4)local_40;
  FUN_1432e0f0e(&local_38);
  FUN_1432e0f22(&local_38,uVar1);
  *param_3 = local_38;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f46280 FUN_148f46280 body=182 status=ok
// SIG undefined FUN_148f46280(void)

void FUN_148f46280(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1432e0f1a(local_28,0x3ff0000000000000);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar2 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148f46338(puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f46338 FUN_148f46338 body=78 status=ok
// SIG undefined FUN_148f46338(void)

undefined8 FUN_148f46338(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (0x1ffe < (uint)((ulonglong)*param_1 >> 0x33)) {
    cVar1 = FUN_1432e0f08(param_1);
    if (cVar1 != -1) {
      FUN_1415b7ec4(L"The specified TimeWarp is not a fixed play rate",2,0);
      return 0x3ff0000000000000;
    }
  }
  uVar2 = FUN_147585474(param_1);
  return uVar2;
}



// FUNCTION 148f46386 FUN_148f46386 body=189 status=ok
// SIG undefined FUN_148f46386(void)

void FUN_148f46386(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (undefined4)local_40;
  FUN_1432e0f0e(&local_38);
  FUN_1432e0f22(&local_38,uVar1);
  *param_3 = local_38;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f46444 FUN_148f46444 body=258 status=ok
// SIG undefined FUN_148f46444(void)

void FUN_148f46444(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1432e0f1a(local_28,0x3ff0000000000000);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_30 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar2 = local_28;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1432e0f22(puVar2,local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f46548 FUN_148f46548 body=182 status=ok
// SIG undefined FUN_148f46548(void)

void FUN_148f46548(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1432e0f1a(local_28,0x3ff0000000000000);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar2 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148f46338(puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f46602 FUN_148f46602 body=156 status=ok
// SIG undefined FUN_148f46602(void)

void FUN_148f46602(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_148f466a0(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f466a0 FUN_148f466a0 body=81 status=ok
// SIG undefined FUN_148f466a0(void)

longlong FUN_148f466a0(longlong *param_1)

{
  longlong lVar1;
  
  if (param_1 == (longlong *)0x0) {
    lVar1 = 0;
    FUN_1415b7ec4(L"Cannot call AddSection on a null track",2,0);
  }
  else {
    lVar1 = (**(code **)(*param_1 + 800))();
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      (**(code **)(*param_1 + 0x318))(param_1,lVar1);
    }
  }
  return lVar1;
}



// FUNCTION 148f466f2 FUN_148f466f2 body=174 status=ok
// SIG undefined FUN_148f466f2(void)

void FUN_148f466f2(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [40];
  longlong local_20;
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
  if (local_20 == 0) {
    FUN_1415b7ec4(L"Cannot call GetColorTint on a null track",2,0);
  }
  *param_3 = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f467a2 FUN_148f467a2 body=186 status=ok
// SIG undefined FUN_148f467a2(void)

void FUN_148f467a2(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
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
  FUN_148f4685e(local_30,local_20);
  FUN_140008f88(param_3,local_30);
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f4685e FUN_148f4685e body=72 status=ok
// SIG undefined FUN_148f4685e(void)

longlong * FUN_148f4685e(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 == 0) {
    FUN_1415b7ec4(L"Cannot call GetDisplayName on a null track",2,0);
  }
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *param_1 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 1) = (int)plVar2[1];
  return param_1;
}



// FUNCTION 148f468a6 FUN_148f468a6 body=218 status=ok
// SIG undefined FUN_148f468a6(void)

void FUN_148f468a6(undefined8 param_1,longlong param_2,longlong *param_3)

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
  FUN_148f46982(&local_30,local_20);
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



// FUNCTION 148f46982 FUN_148f46982 body=125 status=ok
// SIG undefined FUN_148f46982(void)

undefined8 * FUN_148f46982(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  if (param_2 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Cannot call GetSections on a null track",2,0);
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x328))(param_2);
    *param_1 = 0;
    iVar1 = *(int *)(puVar2 + 1);
    _Src = (void *)*puVar2;
    *(int *)(param_1 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14574f05a(param_1,iVar1,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
    }
  }
  return param_1;
}



// FUNCTION 148f46a00 FUN_148f46a00 body=189 status=ok
// SIG undefined FUN_148f46a00(void)

void FUN_148f46a00(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = (longlong *)0x0;
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
  if (local_20 == (longlong *)0x0) {
    uVar1 = 0;
    FUN_1415b7ec4(L"Cannot call GetSectionToKey on a null track",2,0);
  }
  else {
    uVar1 = (**(code **)(*local_20 + 0x300))();
  }
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f46abe FUN_148f46abe body=177 status=ok
// SIG undefined FUN_148f46abe(void)

void FUN_148f46abe(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
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
  uVar1 = 0;
  if (local_20 == 0) {
    FUN_1415b7ec4(L"Cannot call GetSortingOrder on a null track",2,0);
    uVar1 = 0xffffffff;
  }
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f46b70 FUN_148f46b70 body=256 status=ok
// SIG undefined FUN_148f46b70(void)

void FUN_148f46b70(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  longlong *local_38 [2];
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
  FUN_148f46c72(local_38,local_20);
  FUN_140008f88(param_3,local_38);
  if (local_38[0] != (longlong *)0x0) {
    (**(code **)(*local_38[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f46c72 FUN_148f46c72 body=72 status=ok
// SIG undefined FUN_148f46c72(void)

longlong * FUN_148f46c72(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 == 0) {
    FUN_1415b7ec4(L"Cannot call GetTrackRowDisplayName on a null track",2,0);
  }
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *param_1 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 1) = (int)plVar2[1];
  return param_1;
}



// FUNCTION 148f46cba FUN_148f46cba body=267 status=ok
// SIG undefined FUN_148f46cba(void)

void FUN_148f46cba(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = (longlong *)0x0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  if (local_18 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Cannot call RemoveSection on a null track",2,0);
  }
  else if (local_20 != 0) {
    (**(code **)(*local_18 + 0x338))();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f46dc6 FUN_148f46dc6 body=233 status=ok
// SIG undefined FUN_148f46dc6(void)

void FUN_148f46dc6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined1 local_1c [4];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_18 == 0) {
    FUN_1415b7ec4(L"Cannot call SetColorTint on a null track",2,0);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f46eb0 FUN_148f46eb0 body=273 status=ok
// SIG undefined FUN_148f46eb0(void)

void FUN_148f46eb0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  FUN_144a5dc74(local_28);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_18 == 0) {
    FUN_1415b7ec4(L"Cannot call SetDisplayName on a null track",2,0);
  }
  else {
    FUN_1410f8644();
  }
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f46fc2 FUN_148f46fc2 body=258 status=ok
// SIG undefined FUN_148f46fc2(void)

void FUN_148f46fc2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = (longlong *)0x0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  if (local_18 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Cannot call SetSectionToKey on a null track",2,0);
  }
  else {
    (**(code **)(*local_18 + 0x2f8))(local_18,local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f470c6 FUN_148f470c6 body=239 status=ok
// SIG undefined FUN_148f470c6(void)

void FUN_148f470c6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  if (local_18 == 0) {
    FUN_1415b7ec4(L"Cannot call SetSortingOrder on a null track",2,0);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f471b6 FUN_148f471b6 body=358 status=ok
// SIG undefined FUN_148f471b6(void)

void FUN_148f471b6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  longlong *local_28 [2];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  FUN_144a5dc74(local_28);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_18 == 0) {
    FUN_1415b7ec4(L"Cannot call SetTrackRowDisplayName on a null track",2,0);
  }
  else {
    FUN_1410f8644();
  }
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f47320 FUN_148f47320 body=185 status=ok
// SIG undefined FUN_148f47320(void)

void FUN_148f47320(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
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
  if (local_20 == 0) {
    FUN_1415b7ec4(L"Cannot call GetNumChannelsUsed on a null track",2,0);
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(local_20 + 0x128);
  }
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f473da FUN_148f473da body=253 status=ok
// SIG undefined FUN_148f473da(void)

void FUN_148f473da(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  if (local_18 == 0) {
    FUN_1415b7ec4(L"Cannot call SetNumChannelsUsed on a null track",2,0);
  }
  else {
    *(undefined4 *)(local_18 + 0x128) = local_1c;
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f474dc FUN_148f474dc body=185 status=ok
// SIG undefined FUN_148f474dc(void)

void FUN_148f474dc(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
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
  if (local_20 == 0) {
    FUN_1415b7ec4(L"Cannot call GetNumChannelsUsed on a null track",2,0);
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(local_20 + 0x128);
  }
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f47596 FUN_148f47596 body=253 status=ok
// SIG undefined FUN_148f47596(void)

void FUN_148f47596(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  if (local_18 == 0) {
    FUN_1415b7ec4(L"Cannot call SetNumChannelsUsed on a null track",2,0);
  }
  else {
    *(undefined4 *)(local_18 + 0x128) = local_1c;
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f47698 FUN_148f47698 body=174 status=ok
// SIG undefined FUN_148f47698(void)

void FUN_148f47698(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c[0] = 0;
  local_28 = 0;
  uStack_20 = 0x10000ea60;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar1 = local_2c;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *param_3 = *(undefined4 *)(puVar1 + 8);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f47748 FUN_148f47748 body=242 status=ok
// SIG undefined FUN_148f47748(void)

void FUN_148f47748(undefined8 param_1,longlong param_2,float *param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c[0] = 0;
  local_28 = 0;
  uStack_20 = 0x10000ea60;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar2 = local_2c;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  lVar1 = *(longlong *)(puVar2 + 0xc);
  *param_3 = (float)(((double)((lVar1 >> 0x20) * (longlong)*(int *)(puVar2 + 8)) +
                     (double)((ulonglong)(double)(int)((ulonglong)lVar1 >> 0x20) &
                             0x8000000000000000)) / (double)(int)lVar1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f4783c FUN_148f4783c body=174 status=ok
// SIG undefined FUN_148f4783c(void)

void FUN_148f4783c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c[0] = 0;
  local_28 = 0;
  uStack_20 = 0x10000ea60;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar1 = local_2c;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *param_3 = *(undefined4 *)(puVar1 + 4);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f478ec FUN_148f478ec body=242 status=ok
// SIG undefined FUN_148f478ec(void)

void FUN_148f478ec(undefined8 param_1,longlong param_2,float *param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c[0] = 0;
  local_28 = 0;
  uStack_20 = 0x10000ea60;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar2 = local_2c;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  lVar1 = *(longlong *)(puVar2 + 0xc);
  *param_3 = (float)(((double)((lVar1 >> 0x20) * (longlong)*(int *)(puVar2 + 4)) +
                     (double)((ulonglong)(double)(int)((ulonglong)lVar1 >> 0x20) &
                             0x8000000000000000)) / (double)(int)lVar1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f479e6 FUN_148f479e6 body=177 status=ok
// SIG undefined FUN_148f479e6(void)

void FUN_148f479e6(undefined8 param_1,longlong param_2,byte *param_3)

{
  byte *pbVar1;
  undefined1 auStack_58 [44];
  byte local_2c [4];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c[0] = 0;
  local_28 = 0;
  uStack_20 = 0x10000ea60;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_2c);
  }
  pbVar1 = local_2c;
  if (*(byte **)(param_2 + 0x38) != (byte *)0x0) {
    pbVar1 = *(byte **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = *pbVar1 >> 1 & 1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f47a9e FUN_148f47a9e body=175 status=ok
// SIG undefined FUN_148f47a9e(void)

void FUN_148f47a9e(undefined8 param_1,longlong param_2,byte *param_3)

{
  byte *pbVar1;
  undefined1 auStack_58 [44];
  byte local_2c [4];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c[0] = 0;
  local_28 = 0;
  uStack_20 = 0x10000ea60;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_2c);
  }
  pbVar1 = local_2c;
  if (*(byte **)(param_2 + 0x38) != (byte *)0x0) {
    pbVar1 = *(byte **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = *pbVar1 & 1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f47b4e FUN_148f47b4e body=174 status=ok
// SIG undefined FUN_148f47b4e(void)

void FUN_148f47b4e(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined1 auStack_48 [36];
  byte local_24 [4];
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24[0] = 0;
  local_20 = 0;
  uStack_18 = 0x10000ea60;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_24);
  }
  pbVar1 = local_24;
  if (*(byte **)(param_2 + 0x38) != (byte *)0x0) {
    pbVar1 = *(byte **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *pbVar1 = *pbVar1 & 0xfd;
  pbVar1[8] = 0xff;
  pbVar1[9] = 0xff;
  pbVar1[10] = 0xff;
  pbVar1[0xb] = 0x7f;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f47bfe FUN_148f47bfe body=174 status=ok
// SIG undefined FUN_148f47bfe(void)

void FUN_148f47bfe(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined1 auStack_48 [36];
  byte local_24 [4];
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24[0] = 0;
  local_20 = 0;
  uStack_18 = 0x10000ea60;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_24);
  }
  pbVar1 = local_24;
  if (*(byte **)(param_2 + 0x38) != (byte *)0x0) {
    pbVar1 = *(byte **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *pbVar1 = *pbVar1 & 0xfe;
  pbVar1[4] = 0;
  pbVar1[5] = 0;
  pbVar1[6] = 0;
  pbVar1[7] = 0x80;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f47cae FUN_148f47cae body=252 status=ok
// SIG undefined FUN_148f47cae(void)

void FUN_148f47cae(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  byte local_2c [4];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c[0] = 0;
  local_28 = 0;
  uStack_20 = 0x10000ea60;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_2c);
  }
  pbVar1 = *(byte **)(param_2 + 0x38);
  local_30 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  pbVar2 = local_2c;
  if (pbVar1 != (byte *)0x0) {
    pbVar2 = pbVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *pbVar2 = *pbVar2 | 2;
  *(undefined4 *)(pbVar2 + 8) = local_30;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f47dac FUN_148f47dac body=247 status=ok
// SIG undefined FUN_148f47dac(void)

void FUN_148f47dac(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined1 local_2c [4];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c[0] = 0;
  local_28 = 0;
  uStack_20 = 0x10000ea60;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_2c);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_30 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar2 = local_2c;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f47ea4(puVar2,local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f47ea4 FUN_148f47ea4 body=163 status=ok
// SIG undefined FUN_148f47ea4(void)

void FUN_148f47ea4(byte *param_1,float param_2)

{
  int iVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  float fVar6;
  
  *param_1 = *param_1 | 2;
  dVar3 = ((double)(int)*(undefined8 *)(param_1 + 0xc) * (double)param_2) /
          (double)(int)((ulonglong)*(undefined8 *)(param_1 + 0xc) >> 0x20);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar3;
  auVar5 = roundpd(auVar5,auVar5,1);
  dVar4 = auVar5._0_8_;
  dVar3 = dVar3 - dVar4;
  if (2147483647.0 <= dVar4) {
    dVar4 = 2147483647.0;
  }
  if (dVar4 <= -2147483648.0) {
    dVar4 = -2147483648.0;
  }
  iVar1 = (int)dVar3;
  fVar2 = (float)dVar3 - (float)iVar1;
  fVar6 = fVar2;
  if (0.99999994 <= fVar2) {
    fVar6 = 0.99999994;
  }
  fVar6 = (float)(~-(uint)(0.0 < fVar2) & (uint)fVar2 | (uint)fVar6 & -(uint)(0.0 < fVar2)) + 0.5 +
          -0.5;
  if (0.99999994 <= fVar6) {
    fVar6 = 0.99999994;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  *(uint *)(param_1 + 8) = (int)dVar4 + iVar1 + (uint)(fVar6 != 0.0);
  return;
}



// FUNCTION 148f47f48 FUN_148f47f48 body=252 status=ok
// SIG undefined FUN_148f47f48(void)

void FUN_148f47f48(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  byte local_2c [4];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c[0] = 0;
  local_28 = 0;
  uStack_20 = 0x10000ea60;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_2c);
  }
  pbVar1 = *(byte **)(param_2 + 0x38);
  local_30 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  pbVar2 = local_2c;
  if (pbVar1 != (byte *)0x0) {
    pbVar2 = pbVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *pbVar2 = *pbVar2 | 1;
  *(undefined4 *)(pbVar2 + 4) = local_30;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f48046 FUN_148f48046 body=339 status=ok
// SIG undefined FUN_148f48046(void)

void FUN_148f48046(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auStack_58 [40];
  float local_30;
  byte local_2c [4];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c[0] = 0;
  local_28 = 0;
  uStack_20 = 0x10000ea60;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_2c);
  }
  pbVar1 = *(byte **)(param_2 + 0x38);
  local_30 = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  pbVar2 = local_2c;
  if (pbVar1 != (byte *)0x0) {
    pbVar2 = pbVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *pbVar2 = *pbVar2 | 1;
  dVar5 = ((double)(int)*(undefined8 *)(pbVar2 + 0xc) * (double)local_30) /
          (double)(int)((ulonglong)*(undefined8 *)(pbVar2 + 0xc) >> 0x20);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar5;
  auVar4 = roundpd(auVar4,auVar4,1);
  dVar3 = auVar4._0_8_;
  dVar5 = dVar5 - dVar3;
  if (2147483647.0 <= dVar3) {
    dVar3 = 2147483647.0;
  }
  if (dVar3 <= -2147483648.0) {
    dVar3 = -2147483648.0;
  }
  *(int *)(pbVar2 + 4) = (int)dVar5 + (int)dVar3;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f481a2 FUN_148f481a2 body=147 status=ok
// SIG undefined FUN_148f481a2(void)

void FUN_148f481a2(longlong param_1,int param_2)

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



// FUNCTION 148f48236 FUN_148f48236 body=89 status=ok
// SIG undefined FUN_148f48236(void)

void FUN_148f48236(longlong param_1,int param_2)

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



// FUNCTION 148f48290 FUN_148f48290 body=112 status=ok
// SIG undefined FUN_148f48290(void)

void FUN_148f48290(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 148f48300 FUN_148f48300 body=31 status=ok
// SIG undefined FUN_148f48300(void)

undefined8 FUN_148f48300(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148f4833c FUN_148f4833c body=93 status=ok
// SIG undefined FUN_148f4833c(void)

void FUN_148f4833c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba05720;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f4839a FUN_148f4839a body=123 status=ok
// SIG undefined FUN_148f4839a(void)

void FUN_148f4839a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba05720;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f48416 FUN_148f48416 body=21 status=ok
// SIG undefined FUN_148f48416(void)

undefined8 FUN_148f48416(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148f4842c FUN_148f4842c body=36 status=ok
// SIG undefined FUN_148f4842c(void)

undefined8 FUN_148f4842c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 148f4846c FUN_148f4846c body=93 status=ok
// SIG undefined FUN_148f4846c(void)

void FUN_148f4846c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba05810;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148f484ca FUN_148f484ca body=123 status=ok
// SIG undefined FUN_148f484ca(void)

void FUN_148f484ca(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba05810;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148f48546 FUN_148f48546 body=21 status=ok
// SIG undefined FUN_148f48546(void)

undefined8 FUN_148f48546(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148f485fc FUN_148f485fc body=177 status=ok
// SIG undefined FUN_148f485fc(void)

longlong * FUN_148f485fc(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  switch(*(undefined4 *)(param_1 + 0x28)) {
  case 0:
    plVar1 = (longlong *)FUN_148f486ad(param_2[1]);
    break;
  case 1:
    plVar1 = (longlong *)FUN_148f48742(param_2[1]);
    break;
  case 2:
    plVar1 = (longlong *)FUN_148f487d7(param_2[1]);
    break;
  case 3:
    plVar1 = (longlong *)FUN_148f4886c(param_2[1]);
    break;
  case 4:
    plVar1 = (longlong *)FUN_148f48901(param_2[1]);
    break;
  case 5:
    plVar1 = (longlong *)FUN_148f48996(param_2[1]);
    break;
  case 6:
    plVar1 = (longlong *)FUN_148f48a2b(param_2[1]);
    break;
  case 7:
    plVar1 = (longlong *)FUN_148f48ac0(param_2[1]);
    break;
  case 8:
    plVar1 = (longlong *)FUN_148f48b55(param_2[1]);
    break;
  case 9:
    plVar1 = (longlong *)FUN_148f48bea(param_2[1]);
    break;
  default:
    plVar1 = (longlong *)0x0;
  }
  (**(code **)(*plVar1 + 0x378))(plVar1,*param_2);
  return plVar1;
}



// FUNCTION 148f486ad FUN_148f486ad body=148 status=ok
// SIG undefined FUN_148f486ad(void)

undefined8 FUN_148f486ad(undefined8 param_1)

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
  uVar1 = FUN_145b997c2();
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



// FUNCTION 148f48742 FUN_148f48742 body=148 status=ok
// SIG undefined FUN_148f48742(void)

undefined8 FUN_148f48742(undefined8 param_1)

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
  uVar1 = FUN_145b998ac();
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



// FUNCTION 148f487d7 FUN_148f487d7 body=148 status=ok
// SIG undefined FUN_148f487d7(void)

undefined8 FUN_148f487d7(undefined8 param_1)

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
  uVar1 = FUN_145b99a80();
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



// FUNCTION 148f4886c FUN_148f4886c body=148 status=ok
// SIG undefined FUN_148f4886c(void)

undefined8 FUN_148f4886c(undefined8 param_1)

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
  uVar1 = FUN_145b99e28();
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



// FUNCTION 148f48901 FUN_148f48901 body=148 status=ok
// SIG undefined FUN_148f48901(void)

undefined8 FUN_148f48901(undefined8 param_1)

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
  uVar1 = FUN_145b99b6a();
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



// FUNCTION 148f48996 FUN_148f48996 body=148 status=ok
// SIG undefined FUN_148f48996(void)

undefined8 FUN_148f48996(undefined8 param_1)

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
  uVar1 = FUN_145b99c54();
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



// FUNCTION 148f48a2b FUN_148f48a2b body=148 status=ok
// SIG undefined FUN_148f48a2b(void)

undefined8 FUN_148f48a2b(undefined8 param_1)

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
  uVar1 = FUN_145b99d3e();
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



// FUNCTION 148f48ac0 FUN_148f48ac0 body=148 status=ok
// SIG undefined FUN_148f48ac0(void)

undefined8 FUN_148f48ac0(undefined8 param_1)

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
  uVar1 = FUN_145b99f12();
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



// FUNCTION 148f48b55 FUN_148f48b55 body=148 status=ok
// SIG undefined FUN_148f48b55(void)

undefined8 FUN_148f48b55(undefined8 param_1)

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
  uVar1 = FUN_145b99ffc();
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



// FUNCTION 148f48bea FUN_148f48bea body=148 status=ok
// SIG undefined FUN_148f48bea(void)

undefined8 FUN_148f48bea(undefined8 param_1)

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
  uVar1 = FUN_145b99996();
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



// FUNCTION 148f48c94 FUN_148f48c94 body=1115 status=ok
// SIG undefined FUN_148f48c94(void)

void FUN_148f48c94(longlong *param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [8];
  undefined8 *local_c8;
  undefined8 uStack_c0;
  undefined1 *local_b8;
  undefined8 local_a8;
  undefined **local_98;
  longlong *local_90;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  longlong *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_14844264c();
  plVar3 = (longlong *)FUN_1484101e0(param_1);
  (**(code **)(*plVar3 + 0x300))(plVar3,param_1 + 0x14);
  (**(code **)(*param_1 + 0x2e8))(param_1,plVar3,0);
  plVar3 = (longlong *)FUN_1484c5a9a(param_1);
  if ((plVar3 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar3);
  }
  param_1[0x17] = (longlong)plVar3;
  FUN_140056680(&local_c8,&DAT_149dfb77a);
  (**(code **)(*plVar3 + 0x2a8))(plVar3,param_1,&local_c8);
  if (local_c8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14851cac4(param_1[0x17]);
  local_68 = 0;
  local_58 = &PTR_LAB_14ba25ec0;
  local_78 = FUN_144368d14;
  local_50 = param_1;
  FUN_1484c5b30(param_1[0x17] + 0x28,param_1[0x17] + 0xa8);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x17]);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x18]);
  local_a8 = 0;
  local_98 = &PTR_LAB_14ba25f40;
  local_b8 = &LAB_144368e00;
  local_90 = param_1;
  FUN_148f490f0(param_1[0x18] + 0x28,param_1[0x18] + 0xa9);
  uVar2 = (**(code **)(*param_1 + 0x380))(param_1);
  *(undefined1 *)(param_1[0x18] + 0xa8) = uVar2;
  plVar3 = (longlong *)param_1[0x18];
  FUN_140056680(&local_c8,&DAT_149dfb77a);
  (**(code **)(*plVar3 + 0x2a8))(plVar3,param_1,&local_c8);
  if (local_c8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_148f491c5(param_1);
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar4);
  }
  param_1[0x19] = lVar4;
  (**(code **)(*param_1 + 0x308))(param_1,lVar4);
  plVar3 = (longlong *)param_1[0x19];
  FUN_140056680(&local_c8,&DAT_149dfb77a);
  (**(code **)(*plVar3 + 0x2a8))(plVar3,param_1,&local_c8);
  if (local_c8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_1484e47e5(param_1);
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar4);
  }
  param_1[0x1a] = lVar4;
  FUN_14851b11a(lVar4,param_1[0x1f],&DAT_14c846480);
  FUN_148558526(param_1[0x1a],0);
  FUN_14851bab8(param_1[0x1a],0);
  lVar4 = param_1[0x1a];
  uVar5 = FUN_14479d2ce(param_1[0x19] + 0xa8);
  FUN_14851b338(lVar4,uVar5);
  FUN_14851b88e(param_1[0x1a],*(undefined1 *)(param_1[0x19] + 0xb5));
  lVar4 = FUN_1484c6256(param_1);
  local_c8 = (undefined8 *)0x0;
  uStack_c0._0_4_ = 0;
  FUN_1446efa72(&local_c8,0,3,0x10);
  puVar1 = local_c8;
  uStack_c0 = CONCAT44(uStack_c0._4_4_,3);
  *local_c8 = &PTR_LAB_14aeff220;
  uVar5 = FUN_144a3f946();
  puVar1[2] = uVar5;
  *puVar1 = &PTR_FUN_14ba25f60;
  puVar1[3] = 0;
  FUN_14485c47a(puVar1 + 3,param_1);
  puVar1[4] = param_1;
  FUN_1484d65de(lVar4 + 0x28,local_d0,&local_c8);
  FUN_1449db362(&local_c8);
  local_c8 = (undefined8 *)0x0;
  uStack_c0 = 0;
  uVar5 = (**(code **)(*param_1 + 0x2c8))(param_1);
  plVar3 = (longlong *)FUN_14843d0eb(uVar5,0x3fe,param_1,&local_c8);
  if ((plVar3 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar3);
  }
  param_1[0x1b] = (longlong)plVar3;
  if (local_c8 != (undefined8 *)0x0) {
    FUN_1400020a8();
    plVar3 = (longlong *)param_1[0x1b];
  }
  lVar6 = (**(code **)(*param_1 + 0x2c8))(param_1);
  lVar7 = lVar6 + 0x28;
  if (lVar6 == 0) {
    lVar7 = 0;
  }
  (**(code **)(*plVar3 + 800))(plVar3,lVar4,lVar7);
  plVar3 = (longlong *)FUN_148f4925a(param_1);
  if ((plVar3 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar3);
  }
  param_1[0x1c] = (longlong)plVar3;
  (**(code **)(*plVar3 + 0x2a0))(plVar3,param_1);
  FUN_1484f6c9e(param_1[0x1c] + 0x30,param_1[0x1b],0,0);
  FUN_148f492f0(param_1);
  FUN_148f49692(param_1,0);
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f490f0 FUN_148f490f0 body=212 status=ok
// SIG undefined FUN_148f490f0(void)

void FUN_148f490f0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_14001cc68(0xd0,0x10);
  local_68[0] = *param_3;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,local_58);
  }
  FUN_148f75fa4(uVar2,param_2,local_68);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14588c84a(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f491c5 FUN_148f491c5 body=148 status=ok
// SIG undefined FUN_148f491c5(void)

undefined8 FUN_148f491c5(undefined8 param_1)

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
  uVar1 = FUN_14121c466();
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



// FUNCTION 148f4925a FUN_148f4925a body=148 status=ok
// SIG undefined FUN_148f4925a(void)

undefined8 FUN_148f4925a(undefined8 param_1)

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
  uVar1 = FUN_1411e6166();
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



// FUNCTION 148f492f0 FUN_148f492f0 body=929 status=ok
// SIG undefined FUN_148f492f0(void)

void FUN_148f492f0(longlong *param_1)

{
  double *pdVar1;
  undefined4 *puVar2;
  float fVar3;
  byte bVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  undefined1 auStack_378 [32];
  undefined1 *local_358;
  undefined8 local_348;
  undefined8 uStack_340;
  double local_338;
  undefined1 *local_328;
  double local_320;
  double local_318;
  double local_310;
  double local_308;
  double local_300;
  undefined1 local_2f8 [80];
  undefined1 local_2a8;
  undefined1 local_2a0 [16];
  longlong local_290;
  int local_280;
  int local_27c;
  undefined8 *local_278;
  char local_90;
  int local_8c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_378;
  local_358 = (undefined1 *)((ulonglong)local_358 & 0xffffffffffffff00);
  uVar16 = 0;
  FUN_1411b354a(local_2a0,0,0,0);
  (**(code **)(*param_1 + 0x388))(param_1,local_2a0);
  if (*(char *)(param_1[0x18] + 0xa8) == '\0') {
    FUN_1482aa1c9(local_2a0,0);
  }
  fVar3 = *(float *)(param_1[0x19] + 0xb0);
  bVar4 = *(byte *)(param_1[0x19] + 0xb4);
  if (fVar3 != 1.0 || (bVar4 & 1) != 0) {
    fVar19 = 1.0;
    if (fVar3 == 1.0 || (bVar4 & 1) != 0) {
      fVar19 = 0.01;
    }
    local_358 = local_2f8;
    local_2a8 = 0;
    local_328 = local_2a0;
    FUN_146bcad02(&local_328,fVar3 * fVar19,
                  CONCAT71((int7)((ulonglong)uVar16 >> 8),fVar3 == 1.0 | bVar4) & 0xffffffffffffff01
                  ,0);
  }
  FUN_145c688c4(local_2a0,&local_328,1);
  dVar6 = local_318 + local_300;
  dVar8 = (double)local_328 + local_310;
  cVar10 = (**(code **)(*param_1 + 0x3a0))(param_1);
  if (cVar10 == '\0') {
    dVar8 = 0.0;
    dVar7 = 0.0;
  }
  else {
    dVar7 = (local_320 + local_308) * 0.5;
    dVar8 = dVar8 * 0.5;
  }
  dVar9 = local_300;
  if ((*(char *)(param_1[0x18] + 0xaa) != '\x02') &&
     (dVar9 = local_318, *(char *)(param_1[0x18] + 0xaa) != '\0')) {
    dVar9 = dVar6 * 0.5;
  }
  uVar14 = local_280 * 0x200 + local_27c;
  uVar17 = 0;
  if ((uVar14 != 0) && (uVar17 = 0, 0xfffd < (ushort)(*(short *)*local_278 - 1U))) {
    uVar18 = 1;
    uVar11 = 1;
    if (1 < (int)uVar14) {
      uVar18 = uVar14;
    }
    do {
      uVar17 = uVar18;
      if (uVar18 == uVar11) break;
      uVar13 = uVar11 >> 9;
      uVar15 = uVar11 & 0x1ff;
      uVar17 = uVar11;
      uVar11 = uVar11 + 1;
    } while (0xfffd < (ushort)(*(short *)(local_278[uVar13] + (ulonglong)uVar15 * 2) - 1U));
  }
  if (uVar17 != uVar14) {
    do {
      lVar5 = *(longlong *)(local_290 + (ulonglong)(uVar17 >> 9) * 8);
      uVar12 = (ulonglong)(uVar17 & 0x1ff);
      pdVar1 = (double *)(lVar5 + uVar12 * 0x18);
      local_348 = *pdVar1 - dVar8;
      uStack_340 = pdVar1[1] - dVar7;
      local_338 = *(double *)(lVar5 + 0x10 + uVar12 * 0x18) - dVar9;
      cVar10 = FUN_146bfed03(&local_348);
      if (cVar10 != '\0') {
        lVar5 = *(longlong *)(local_290 + (ulonglong)(uVar17 >> 9) * 8);
        *(double *)(lVar5 + 0x10 + uVar12 * 0x18) = local_338;
        puVar2 = (undefined4 *)(lVar5 + uVar12 * 0x18);
        *puVar2 = (undefined4)local_348;
        puVar2[1] = local_348._4_4_;
        puVar2[2] = (undefined4)uStack_340;
        puVar2[3] = uStack_340._4_4_;
        if (local_90 == '\x01') {
          LOCK();
          local_8c = local_8c + 1;
          UNLOCK();
        }
      }
      uVar18 = uVar17 + 1;
      if ((int)(uVar17 + 1) < (int)uVar14) {
        uVar18 = uVar14;
      }
      do {
        uVar11 = uVar18;
        if (uVar18 - 1 == uVar17) break;
        uVar17 = uVar17 + 1;
        uVar11 = uVar17;
      } while (0xfffd < (ushort)(*(short *)(local_278[uVar17 >> 9] + (ulonglong)(uVar17 & 0x1ff) * 2
                                           ) - 1U));
      uVar17 = uVar11;
    } while (uVar17 != uVar14);
  }
  FUN_14851bbe8(param_1[0x1a],local_2a0,1,0xf);
  FUN_14851b65c(param_1[0x1a],1);
  FUN_14851b666(param_1[0x1a]);
  FUN_141082778(local_2a0);
  if ((local_80 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f49692 FUN_148f49692 body=590 status=ok
// SIG undefined FUN_148f49692(void)

void FUN_148f49692(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  wchar_t **ppwVar6;
  wchar_t *pwVar7;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined8 uStack_90;
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
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(int *)(param_1 + 0x16) = param_2;
  if (param_2 == 1) {
    uVar4 = *(undefined1 *)(param_1[0x18] + 0xb1);
  }
  else {
    uVar4 = 0;
  }
  (**(code **)(*(longlong *)param_1[0x1b] + 0x350))((longlong *)param_1[0x1b],uVar4);
  *(bool *)(param_1[0x18] + 0xb2) = param_2 == 1;
  (**(code **)(*param_1 + 0x330))(param_1,param_1[0x18]);
  if ((int)param_1[0x16] == 0) {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_98 = L"OnStartAddPrimitiveTool";
    uStack_90._0_4_ = 0x17;
    FUN_1446e940c(local_2c,&local_98);
    local_98 = L"UAddPrimitiveTool";
    uStack_90 = CONCAT44(uStack_90._4_4_,0x11);
    FUN_1446e940c(local_30,&local_98);
    pwVar7 = 
    L"This Tool creates new shapes. Click in the scene to choose initial placement of mesh.";
  }
  else {
    lVar1 = param_1[0x1b];
    if (*(longlong *)(param_1[0x1a] + 0x48) == 0) {
      local_98 = (wchar_t *)0x0;
      uStack_90 = 0;
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
    }
    else {
      lVar3 = *(longlong *)(*(longlong *)(param_1[0x1a] + 0x48) + 0x1c8);
      puVar5 = &DAT_14c846480;
      if (lVar3 != 0) {
        puVar5 = (undefined8 *)(lVar3 + 0x240);
      }
      ppwVar6 = &local_98;
      for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
        *ppwVar6 = (wchar_t *)*puVar5;
        puVar5 = puVar5 + 1;
        ppwVar6 = ppwVar6 + 1;
      }
    }
    FUN_148415b4c(lVar1,&local_98,1);
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_98 = L"OnStartAddPrimitiveTool2";
    uStack_90._0_4_ = 0x18;
    FUN_1446e940c(local_2c,&local_98);
    local_98 = L"UAddPrimitiveTool";
    uStack_90 = CONCAT44(uStack_90._4_4_,0x11);
    FUN_1446e940c(local_30,&local_98);
    pwVar7 = 
    L"Alter shape settings in the detail panel or modify placement with gizmo, then accept the tool."
    ;
  }
  FUN_140208bae(&local_98,local_30,local_2c,pwVar7);
  (**(code **)(*plVar2 + 0x340))(plVar2,&local_98,2);
  if (local_98 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_98 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f498e2 FUN_148f498e2 body=347 status=ok
// SIG undefined FUN_148f498e2(void)

void FUN_148f498e2(longlong *param_1,char param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == '\x01') {
    (**(code **)(*param_1 + 0x398))(param_1);
  }
  (**(code **)(*(longlong *)param_1[0x1c] + 0x2a8))();
  param_1[0x1c] = 0;
  uVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
  plVar2 = (longlong *)FUN_148451354(uVar1);
  (**(code **)(*plVar2 + 0x2d8))(plVar2,param_1);
  param_1[0x1b] = 0;
  FUN_14851bab8(param_1[0x1a],0);
  FUN_14851b2ea(param_1[0x1a]);
  param_1[0x1a] = 0;
  plVar2 = (longlong *)param_1[0x17];
  FUN_140056680(local_30,&DAT_149dfb77a);
  (**(code **)(*plVar2 + 0x2a0))(plVar2,param_1,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[0x18];
  FUN_140056680(local_30,&DAT_149dfb77a);
  (**(code **)(*plVar2 + 0x2a0))(plVar2,param_1,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[0x19];
  FUN_140056680(local_30,&DAT_149dfb77a);
  (**(code **)(*plVar2 + 0x2a0))(plVar2,param_1,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f49a52 FUN_148f49a52 body=148 status=ok
// SIG undefined FUN_148f49a52(void)

void FUN_148f49a52(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_14851b88e(*(longlong *)(param_1 + 0xd0),*(undefined1 *)(*(longlong *)(param_1 + 200) + 0xb5)
                 );
    uVar2 = *(undefined8 *)(param_1 + 0xd0);
    uVar3 = FUN_14479d2ce(*(longlong *)(param_1 + 200) + 0xa8);
    FUN_14851b338(uVar2,uVar3);
    FUN_148f492f0(param_1);
  }
  plVar1 = *(longlong **)(param_1 + 0xd8);
  if (plVar1 != (longlong *)0x0) {
    if (*(int *)(param_1 + 0xb0) == 1) {
      uVar4 = *(undefined1 *)(*(longlong *)(param_1 + 0xc0) + 0xb1);
    }
    else {
      uVar4 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x000148f49aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x350))(plVar1,uVar4);
    return;
  }
  return;
}



// FUNCTION 148f49ae6 FUN_148f49ae6 body=138 status=ok
// SIG undefined FUN_148f49ae6(void)

undefined1 * FUN_148f49ae6(longlong param_1,undefined1 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = 1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_28 = 0;
  FUN_14485c47a(&local_28,0);
  *(undefined8 *)(param_2 + 0x38) = local_28;
  *param_2 = *(int *)(param_1 + 0x10) == 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f49b7e FUN_148f49b7e body=1380 status=ok
// SIG undefined FUN_148f49b7e(void)

void FUN_148f49b7e(longlong *param_1,undefined8 *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double _X;
  double dVar6;
  char cVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_298 [32];
  undefined4 *local_278;
  longlong *local_270;
  undefined8 local_268;
  longlong local_258;
  longlong lStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  longlong local_228;
  longlong local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  double local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  uint local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong local_158;
  undefined8 uStack_150;
  ulonglong local_148;
  longlong lStack_140;
  longlong local_138;
  longlong lStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e4;
  undefined4 local_b8;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_298;
  local_1d8 = *param_2;
  uStack_1d0 = param_2[1];
  local_1c8 = param_2[2];
  uStack_1c0 = param_2[3];
  local_1b8 = param_2[4];
  uStack_1b0 = param_2[5];
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0x3ff0000000000000;
  local_1e0 = DAT_14c8464e0 * 0.0 + DAT_14c8464e8 * 0.0 + DAT_14c8464f0;
  if (*(char *)(param_1[0x18] + 0xa9) == '\x01') {
    memset(&local_188,0,0x100);
    local_b8 = 0xffffffff;
    local_188 = (double)CONCAT44(0x3f800000,(undefined4)local_188);
    local_e4 = 0xffffffff;
    local_278 = (undefined4 *)0x0;
    cVar7 = FUN_14855784a(param_1,&local_188,&local_1d8,0);
    if (cVar7 != '\0') {
      local_208 = local_120;
      uStack_210 = CONCAT44(uStack_124,local_128);
      local_218 = lStack_130;
      if (*(char *)(param_1[0x18] + 0xb0) == '\0') {
        local_208 = DAT_14c8463c8;
        local_218 = CONCAT44(DAT_14c8463b8._4_4_,(undefined4)DAT_14c8463b8);
        uStack_210 = CONCAT44(DAT_14c8463c0._4_4_,(undefined4)DAT_14c8463c0);
      }
      local_248 = uStack_150;
      local_258 = CONCAT44(uStack_15c,uStack_160);
      lStack_250 = local_158;
      uStack_240 = 0;
      uStack_238 = 0;
      uStack_230 = 0;
      local_228 = 0x3ff0000000000000;
      local_198 = DAT_14c8463c8;
      local_1a8 = (undefined4)DAT_14c8463b8;
      uStack_1a4 = DAT_14c8463b8._4_4_;
      uStack_1a0 = (undefined4)DAT_14c8463c0;
      uStack_19c = DAT_14c8463c0._4_4_;
      FUN_146bfb7f2(&uStack_240,&local_1a8,&local_218);
      param_1[0x26] = local_228;
      *(undefined4 *)(param_1 + 0x24) = (undefined4)uStack_238;
      *(undefined4 *)((longlong)param_1 + 0x124) = uStack_238._4_4_;
      *(undefined4 *)(param_1 + 0x25) = (undefined4)uStack_230;
      *(undefined4 *)((longlong)param_1 + 300) = uStack_230._4_4_;
      *(undefined4 *)(param_1 + 0x22) = (undefined4)local_248;
      *(undefined4 *)((longlong)param_1 + 0x114) = local_248._4_4_;
      *(undefined4 *)(param_1 + 0x23) = (undefined4)uStack_240;
      *(undefined4 *)((longlong)param_1 + 0x11c) = uStack_240._4_4_;
      param_1[0x20] = local_258;
      param_1[0x21] = lStack_250;
      local_248 = DAT_14c8463b0;
      local_258 = DAT_14c8463a0;
      lStack_250 = DAT_14c8463a8;
      local_198 = DAT_14c8463c8;
      local_1a8 = (undefined4)DAT_14c8463b8;
      uStack_1a4 = DAT_14c8463b8._4_4_;
      uStack_1a0 = (undefined4)DAT_14c8463c0;
      uStack_19c = DAT_14c8463c0._4_4_;
      local_268 = 0x3fe69fbe76c8b439;
      local_270 = &local_258;
      local_278 = &local_1a8;
      FUN_148338b24(param_1 + 0x20,0,1,2);
      goto LAB_148f49cba;
    }
    plVar8 = &local_258;
LAB_148f49c71:
    FUN_1443662f8(plVar8,&local_1d8,&uStack_1c0,&local_1f8);
    param_1[0x22] = plVar8[2];
    uVar9 = (int)*plVar8;
    uVar10 = *(undefined4 *)((longlong)plVar8 + 4);
    uVar11 = (int)plVar8[1];
    uVar12 = *(undefined4 *)((longlong)plVar8 + 0xc);
  }
  else {
    if (*(char *)(param_1[0x18] + 0xa9) == '\0') {
      plVar8 = &local_188;
      goto LAB_148f49c71;
    }
    param_1[0x22] = (longlong)DAT_14c8464f0;
    uVar9 = DAT_14c8464e0._0_4_;
    uVar10 = DAT_14c8464e0._4_4_;
    uVar11 = DAT_14c8464e8._0_4_;
    uVar12 = DAT_14c8464e8._4_4_;
  }
  *(undefined4 *)(param_1 + 0x20) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x104) = uVar10;
  *(undefined4 *)(param_1 + 0x21) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0x10c) = uVar12;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0x3ff0000000000000;
LAB_148f49cba:
  (**(code **)(*param_1 + 0x2c8))(param_1);
  plVar8 = (longlong *)FUN_148452156();
  if (plVar8 != (longlong *)0x0) {
    local_168 = local_168 & 0xffffff00;
    local_148 = local_148 & 0xffffffffffffff00;
    local_128 = 0x41700000;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_188 = (double)CONCAT62(local_188._2_6_,0x401);
    lStack_140 = param_1[0x20];
    local_138 = param_1[0x21];
    lStack_130 = param_1[0x22];
    local_258 = 0;
    lStack_250 = 0;
    cVar7 = (**(code **)(*plVar8 + 0x2a8))(plVar8,&local_188,&local_258);
    if (cVar7 != '\0') {
      uVar9 = *(undefined4 *)(local_258 + 0x18);
      uVar10 = *(undefined4 *)(local_258 + 0x1c);
      uVar11 = *(undefined4 *)(local_258 + 0x20);
      uVar12 = *(undefined4 *)(local_258 + 0x24);
      param_1[0x22] = *(longlong *)(local_258 + 0x28);
      *(undefined4 *)(param_1 + 0x20) = uVar9;
      *(undefined4 *)((longlong)param_1 + 0x104) = uVar10;
      *(undefined4 *)(param_1 + 0x21) = uVar11;
      *(undefined4 *)((longlong)param_1 + 0x10c) = uVar12;
    }
    if (local_258 != 0) {
      FUN_1400020a8();
    }
  }
  fVar1 = *(float *)(param_1[0x18] + 0xac);
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    dVar2 = (double)param_1[0x23];
    dVar3 = (double)param_1[0x24];
    dVar6 = (double)param_1[0x25] + (double)param_1[0x25];
    dVar4 = (double)param_1[0x26];
    _X = (double)fVar1 * 0.017453292519943295 * 0.5;
    dVar5 = sin(_X);
    dStack_170 = cos(_X);
    local_188 = (dVar2 * dVar6 + dVar4 * (dVar3 + dVar3)) * dVar5;
    dStack_180 = (dVar6 * dVar3 - (dVar2 + dVar2) * dVar4) * dVar5;
    local_178 = (1.0 - ((dVar3 + dVar3) * dVar3 + dVar2 * (dVar2 + dVar2))) * dVar5;
    FUN_1482ff674(param_1 + 0x20);
  }
  FUN_14851bab8(param_1[0x1a],1);
  local_188 = (double)param_1[0x23];
  dStack_180 = (double)param_1[0x24];
  local_178 = (double)param_1[0x25];
  dStack_170 = (double)param_1[0x26];
  local_168 = (uint)param_1[0x20];
  uStack_164 = *(undefined4 *)((longlong)param_1 + 0x104);
  uStack_160 = (undefined4)param_1[0x21];
  uStack_15c = *(undefined4 *)((longlong)param_1 + 0x10c);
  local_158 = param_1[0x22];
  uStack_150 = 0;
  local_148 = 0x3ff0000000000000;
  lStack_140 = 0x3ff0000000000000;
  local_138 = 0x3ff0000000000000;
  lStack_130 = 0;
  FUN_14851b91a(param_1[0x1a]);
  if ((local_80 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f4a0e4 FUN_148f4a0e4 body=23 status=ok
// SIG undefined FUN_148f4a0e4(void)

undefined1 FUN_148f4a0e4(longlong param_1)

{
  FUN_148f49b7e(param_1 + -0xa0);
  return 1;
}



// FUNCTION 148f4a0fe FUN_148f4a0fe body=603 status=ok
// SIG undefined FUN_148f4a0fe(void)

void FUN_148f4a0fe(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
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
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 *local_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  longlong *local_c8 [2];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(char *)(param_1[0x18] + 0xa9) == '\x02') {
    local_a8 = DAT_14c8464f0;
    local_b8 = (undefined4)DAT_14c8464e0;
    uStack_b4 = DAT_14c8464e0._4_4_;
    uStack_b0 = (undefined4)DAT_14c8464e8;
    uStack_ac = DAT_14c8464e8._4_4_;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0x3ff0000000000000;
    local_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    FUN_148f49b7e(param_1);
    FUN_148f49692(param_1,1);
    lVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
    local_f8 = L"PlaceMeshTransaction";
    uStack_f0 = 0x14;
    FUN_1446e940c(local_cc,&local_f8);
    local_f8 = L"UAddPrimitiveTool";
    _uStack_f0 = CONCAT44(uStack_ec,0x11);
    FUN_1446e940c(local_d0,&local_f8);
    FUN_140208bae(local_c8,local_d0,local_cc,L"Place Mesh");
    if (*(longlong *)(param_1[0x1a] + 0x48) == 0) {
      local_e8 = 0;
      uStack_e0 = 0;
      local_f8._0_4_ = 0;
      local_f8._4_4_ = 0;
      uStack_f0 = 0;
      uStack_ec = 0;
      uVar8 = 0;
      uVar9 = 0;
      uVar10 = 0;
      uVar11 = 0x3ff00000;
      uVar12 = 0;
      uVar13 = 0x3ff00000;
      uVar14 = 0;
      uVar15 = 0x3ff00000;
      uVar16 = 0;
      uVar17 = 0x3ff00000;
      uVar18 = 0;
      uVar19 = 0;
    }
    else {
      lVar1 = *(longlong *)(*(longlong *)(param_1[0x1a] + 0x48) + 0x1c8);
      puVar3 = &DAT_14c846480;
      if (lVar1 != 0) {
        puVar3 = (undefined8 *)(lVar1 + 0x240);
      }
      uVar4 = *(undefined4 *)puVar3;
      uVar5 = *(undefined4 *)((longlong)puVar3 + 4);
      uVar6 = *(undefined4 *)(puVar3 + 1);
      uVar7 = *(undefined4 *)((longlong)puVar3 + 0xc);
      uVar8 = *(undefined4 *)(puVar3 + 2);
      uVar9 = *(undefined4 *)((longlong)puVar3 + 0x14);
      uVar10 = *(undefined4 *)(puVar3 + 3);
      uVar11 = *(undefined4 *)((longlong)puVar3 + 0x1c);
      local_e8 = puVar3[6];
      uStack_e0 = puVar3[7];
      local_f8._0_4_ = *(undefined4 *)(puVar3 + 4);
      local_f8._4_4_ = *(undefined4 *)((longlong)puVar3 + 0x24);
      uStack_f0 = *(undefined4 *)(puVar3 + 5);
      uStack_ec = *(undefined4 *)((longlong)puVar3 + 0x2c);
      uVar12 = *(undefined4 *)(puVar3 + 8);
      uVar13 = *(undefined4 *)((longlong)puVar3 + 0x44);
      uVar14 = *(undefined4 *)(puVar3 + 9);
      uVar15 = *(undefined4 *)((longlong)puVar3 + 0x4c);
      uVar16 = *(undefined4 *)(puVar3 + 10);
      uVar17 = *(undefined4 *)((longlong)puVar3 + 0x54);
      uVar18 = *(undefined4 *)(puVar3 + 0xb);
      uVar19 = *(undefined4 *)((longlong)puVar3 + 0x5c);
    }
    local_d8 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    *local_d8 = &PTR_LAB_14ba25fd0;
    *(undefined4 *)(local_d8 + 2) = uVar4;
    *(undefined4 *)((longlong)local_d8 + 0x14) = uVar5;
    *(undefined4 *)(local_d8 + 3) = uVar6;
    *(undefined4 *)((longlong)local_d8 + 0x1c) = uVar7;
    *(undefined4 *)(local_d8 + 4) = uVar8;
    *(undefined4 *)((longlong)local_d8 + 0x24) = uVar9;
    *(undefined4 *)(local_d8 + 5) = uVar10;
    *(undefined4 *)((longlong)local_d8 + 0x2c) = uVar11;
    *(undefined4 *)(local_d8 + 6) = (undefined4)local_f8;
    *(undefined4 *)((longlong)local_d8 + 0x34) = local_f8._4_4_;
    *(undefined4 *)(local_d8 + 7) = uStack_f0;
    *(undefined4 *)((longlong)local_d8 + 0x3c) = uStack_ec;
    *(undefined4 *)(local_d8 + 8) = (undefined4)local_e8;
    *(undefined4 *)((longlong)local_d8 + 0x44) = local_e8._4_4_;
    *(undefined4 *)(local_d8 + 9) = (undefined4)uStack_e0;
    *(undefined4 *)((longlong)local_d8 + 0x4c) = uStack_e0._4_4_;
    *(undefined4 *)(local_d8 + 10) = uVar12;
    *(undefined4 *)((longlong)local_d8 + 0x54) = uVar13;
    *(undefined4 *)(local_d8 + 0xb) = uVar14;
    *(undefined4 *)((longlong)local_d8 + 0x5c) = uVar15;
    *(undefined4 *)(local_d8 + 0xc) = uVar16;
    *(undefined4 *)((longlong)local_d8 + 100) = uVar17;
    *(undefined4 *)(local_d8 + 0xd) = uVar18;
    *(undefined4 *)((longlong)local_d8 + 0x6c) = uVar19;
    (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x20))
              ((longlong *)(lVar2 + 0x28),param_1,&local_d8,local_c8);
    if (local_c8[0] != (longlong *)0x0) {
      (**(code **)(*local_c8[0] + 0x10))();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_118);
  }
  if ((local_70 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    FUN_148f49692(param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f4a394 FUN_148f4a394 body=192 status=ok
// SIG undefined FUN_148f4a394(void)

void FUN_148f4a394(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  undefined1 uVar8;
  
  if ((*(longlong *)(param_1 + 0x28) == 0) ||
     (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x50), lVar7 == 0)) {
    uVar8 = 0;
  }
  else {
    dVar1 = *(double *)(lVar7 + 0x170);
    dVar2 = *(double *)(lVar7 + 0x188);
    dVar3 = *(double *)(lVar7 + 0x160);
    dVar4 = *(double *)(lVar7 + 0x168);
    dVar5 = *(double *)(lVar7 + 0x180);
    dVar6 = *(double *)(lVar7 + 0x178);
    *param_2 = dVar3 - dVar6;
    param_2[1] = dVar4 - dVar5;
    param_2[2] = dVar1 - dVar2;
    param_2[3] = dVar3 + dVar6;
    param_2[4] = dVar4 + dVar5;
    param_2[5] = dVar1 + dVar2;
    uVar8 = 1;
  }
  *(undefined1 *)(param_2 + 6) = uVar8;
  return;
}



// FUNCTION 148f4a45e FUN_148f4a45e body=172 status=ok
// SIG undefined FUN_148f4a45e(void)

undefined8 FUN_148f4a45e(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_148 [32];
  undefined1 local_128 [4];
  undefined4 local_124;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined4 local_84;
  undefined4 local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    memset(local_128,0,0x100);
    local_58 = 0xffffffff;
    local_124 = 0x3f800000;
    local_84 = 0xffffffff;
    cVar2 = FUN_14851bdfe(lVar1,param_2,local_128);
    if (cVar2 != '\0') {
      *(undefined8 *)(param_3 + 4) = local_f0;
      *param_3 = local_100;
      param_3[1] = uStack_fc;
      param_3[2] = uStack_f8;
      param_3[3] = uStack_f4;
      uVar3 = 1;
      goto LAB_148f4a4e4;
    }
  }
  uVar3 = 0;
LAB_148f4a4e4:
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f4a50c FUN_148f4a50c body=138 status=ok
// SIG undefined FUN_148f4a50c(void)

undefined1 * FUN_148f4a50c(longlong param_1,undefined1 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = 1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_28 = 0;
  FUN_14485c47a(&local_28,0);
  *(undefined8 *)(param_2 + 0x38) = local_28;
  *param_2 = *(int *)(param_1 + 0x18) == 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f4a598 FUN_148f4a598 body=523 status=ok
// SIG undefined FUN_148f4a598(void)

void FUN_148f4a598(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
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
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 *local_90;
  undefined1 local_88 [4];
  undefined1 local_84 [4];
  longlong *local_80 [2];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(int *)(param_1 + 0x18) == 0) {
    lVar1 = param_1 + -0x98;
    FUN_148f49b7e(lVar1);
    FUN_148f49692(lVar1,1);
    lVar3 = (**(code **)(*(longlong *)(param_1 + -0x98) + 0x2c8))(lVar1);
    local_b8 = L"PlaceMeshTransaction";
    uStack_b0._0_4_ = 0x14;
    FUN_1446e940c(local_84,&local_b8);
    local_b8 = L"UAddPrimitiveTool";
    uStack_b0 = CONCAT44(uStack_b0._4_4_,0x11);
    FUN_1446e940c(local_88,&local_b8);
    FUN_140208bae(local_80,local_88,local_84,L"Place Mesh");
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x48);
    if (lVar2 == 0) {
      uVar5 = 0;
      uVar6 = 0;
      uVar7 = 0;
      uVar8 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = (wchar_t *)0x0;
      uStack_b0 = 0;
      uVar9 = 0;
      uVar10 = 0;
      uVar11 = 0;
      uVar12 = 0x3ff00000;
      uVar13 = 0;
      uVar14 = 0x3ff00000;
      uVar15 = 0;
      uVar16 = 0x3ff00000;
      uVar17 = 0;
      uVar18 = 0x3ff00000;
      uVar19 = 0;
      uVar20 = 0;
    }
    else {
      lVar2 = *(longlong *)(lVar2 + 0x1c8);
      puVar4 = &DAT_14c846480;
      if (lVar2 != 0) {
        puVar4 = (undefined8 *)(lVar2 + 0x240);
      }
      uVar5 = *(undefined4 *)puVar4;
      uVar6 = *(undefined4 *)((longlong)puVar4 + 4);
      uVar7 = *(undefined4 *)(puVar4 + 1);
      uVar8 = *(undefined4 *)((longlong)puVar4 + 0xc);
      uVar9 = *(undefined4 *)(puVar4 + 2);
      uVar10 = *(undefined4 *)((longlong)puVar4 + 0x14);
      uVar11 = *(undefined4 *)(puVar4 + 3);
      uVar12 = *(undefined4 *)((longlong)puVar4 + 0x1c);
      local_a8 = puVar4[6];
      uStack_a0 = puVar4[7];
      local_b8 = (wchar_t *)puVar4[4];
      uStack_b0 = puVar4[5];
      uVar13 = *(undefined4 *)(puVar4 + 8);
      uVar14 = *(undefined4 *)((longlong)puVar4 + 0x44);
      uVar15 = *(undefined4 *)(puVar4 + 9);
      uVar16 = *(undefined4 *)((longlong)puVar4 + 0x4c);
      uVar17 = *(undefined4 *)(puVar4 + 10);
      uVar18 = *(undefined4 *)((longlong)puVar4 + 0x54);
      uVar19 = *(undefined4 *)(puVar4 + 0xb);
      uVar20 = *(undefined4 *)((longlong)puVar4 + 0x5c);
    }
    local_90 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    *local_90 = &PTR_LAB_14ba25fd0;
    *(undefined4 *)(local_90 + 2) = uVar5;
    *(undefined4 *)((longlong)local_90 + 0x14) = uVar6;
    *(undefined4 *)(local_90 + 3) = uVar7;
    *(undefined4 *)((longlong)local_90 + 0x1c) = uVar8;
    *(undefined4 *)(local_90 + 4) = uVar9;
    *(undefined4 *)((longlong)local_90 + 0x24) = uVar10;
    *(undefined4 *)(local_90 + 5) = uVar11;
    *(undefined4 *)((longlong)local_90 + 0x2c) = uVar12;
    *(undefined4 *)(local_90 + 6) = (undefined4)local_b8;
    *(undefined4 *)((longlong)local_90 + 0x34) = local_b8._4_4_;
    *(undefined4 *)(local_90 + 7) = (undefined4)uStack_b0;
    *(undefined4 *)((longlong)local_90 + 0x3c) = uStack_b0._4_4_;
    *(undefined4 *)(local_90 + 8) = (undefined4)local_a8;
    *(undefined4 *)((longlong)local_90 + 0x44) = local_a8._4_4_;
    *(undefined4 *)(local_90 + 9) = (undefined4)uStack_a0;
    *(undefined4 *)((longlong)local_90 + 0x4c) = uStack_a0._4_4_;
    *(undefined4 *)(local_90 + 10) = uVar13;
    *(undefined4 *)((longlong)local_90 + 0x54) = uVar14;
    *(undefined4 *)(local_90 + 0xb) = uVar15;
    *(undefined4 *)((longlong)local_90 + 0x5c) = uVar16;
    *(undefined4 *)(local_90 + 0xc) = uVar17;
    *(undefined4 *)((longlong)local_90 + 100) = uVar18;
    *(undefined4 *)(local_90 + 0xd) = uVar19;
    *(undefined4 *)((longlong)local_90 + 0x6c) = uVar20;
    (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x20))
              ((longlong *)(lVar3 + 0x28),lVar1,&local_90,local_80);
    if (local_80[0] != (longlong *)0x0) {
      (**(code **)(*local_80[0] + 0x10))();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f4a7a4 FUN_148f4a7a4 body=740 status=ok
// SIG undefined FUN_148f4a7a4(void)

void FUN_148f4a7a4(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_708 [32];
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined1 local_6bc [4];
  wchar_t *local_6b8;
  undefined4 local_6b0;
  longlong local_698;
  undefined4 local_688;
  undefined4 uStack_684;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  undefined4 local_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined4 local_668;
  undefined4 uStack_664;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  undefined4 local_658;
  undefined4 uStack_654;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  undefined4 local_648;
  undefined4 uStack_644;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined4 local_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined1 local_628 [16];
  longlong local_618;
  uint local_610;
  uint local_60c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_708;
  lVar3 = FUN_14851b4e4(param_1[0x1a],0);
  uVar4 = FUN_14851bd54(param_1[0x1a]);
  lVar5 = (**(code **)(*param_1 + 0x2c8))(param_1);
  local_6b8 = L"AddPrimitiveToolTransactionName";
  local_6b0 = 0x1f;
  FUN_1446e940c(&local_6e8,&local_6b8);
  local_6b8 = L"UAddPrimitiveTool";
  local_6b0 = 0x11;
  FUN_1446e940c(local_6bc,&local_6b8);
  FUN_140208bae(&local_6b8,local_6bc,&local_6e8,L"Add Primitive Tool");
  (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x10))(lVar5 + 0x28,&local_6b8);
  if (local_6b8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_6b8 + 0x10))();
  }
  FUN_14850577a(&local_6b8,1);
  local_698 = param_1[0x1f];
  if ((local_698 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_698);
  }
  if (*(longlong *)(param_1[0x1a] + 0x48) == 0) {
    local_688 = 0;
    uStack_684 = 0;
    uStack_680 = 0;
    uStack_67c = 0;
    local_6d8 = 0;
    uStack_6d0 = 0;
    local_6e8 = 0;
    uStack_6e0 = 0;
    local_678 = 0;
    uStack_674 = 0;
    uStack_670 = 0;
    uStack_66c = 0x3ff00000;
    local_648 = 0;
    uStack_644 = 0x3ff00000;
    uStack_640 = 0;
    uStack_63c = 0x3ff00000;
    local_638 = 0;
    uStack_634 = 0x3ff00000;
    uStack_630 = 0;
    uStack_62c = 0;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(param_1[0x1a] + 0x48) + 0x1c8);
    puVar6 = &DAT_14c846480;
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)(lVar5 + 0x240);
    }
    local_688 = *(undefined4 *)puVar6;
    uStack_684 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_680 = *(undefined4 *)(puVar6 + 1);
    uStack_67c = *(undefined4 *)((longlong)puVar6 + 0xc);
    local_678 = *(undefined4 *)(puVar6 + 2);
    uStack_674 = *(undefined4 *)((longlong)puVar6 + 0x14);
    uStack_670 = *(undefined4 *)(puVar6 + 3);
    uStack_66c = *(undefined4 *)((longlong)puVar6 + 0x1c);
    local_6d8 = puVar6[6];
    uStack_6d0 = puVar6[7];
    local_6e8 = puVar6[4];
    uStack_6e0 = puVar6[5];
    local_648 = *(undefined4 *)(puVar6 + 8);
    uStack_644 = *(undefined4 *)((longlong)puVar6 + 0x44);
    uStack_640 = *(undefined4 *)(puVar6 + 9);
    uStack_63c = *(undefined4 *)((longlong)puVar6 + 0x4c);
    local_638 = *(undefined4 *)(puVar6 + 10);
    uStack_634 = *(undefined4 *)((longlong)puVar6 + 0x54);
    uStack_630 = *(undefined4 *)(puVar6 + 0xb);
    uStack_62c = *(undefined4 *)((longlong)puVar6 + 0x5c);
  }
  local_668 = (undefined4)local_6e8;
  uStack_664 = local_6e8._4_4_;
  uStack_660 = (undefined4)uStack_6e0;
  uStack_65c = uStack_6e0._4_4_;
  local_658 = (undefined4)local_6d8;
  uStack_654 = local_6d8._4_4_;
  uStack_650 = (undefined4)uStack_6d0;
  uStack_64c = uStack_6d0._4_4_;
  iVar1 = (int)param_1[0x1e] + -1;
  if ((int)param_1[0x1e] == 0) {
    iVar1 = 0;
  }
  FUN_1402980a2(local_628,param_1[0x1d],iVar1);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar3);
  }
  uVar2 = local_610;
  lVar5 = (longlong)(int)local_610;
  local_610 = local_610 + 1;
  if (local_60c < local_610) {
    FUN_140655806(&local_618,uVar2);
  }
  *(longlong *)(local_618 + lVar5 * 8) = lVar3;
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar3);
  }
  FUN_148505bae(&local_6b8,uVar4);
  (**(code **)(*(longlong *)param_1[0x17] + 0x2c0))((longlong *)param_1[0x17],&local_6b8);
  uVar4 = (**(code **)(*param_1 + 0x2c8))(param_1);
  FUN_148505c7a(&local_6e8,uVar4,&local_6b8);
  lVar3 = uStack_6e0;
  if (((char)local_6e8 == '\0') && (uStack_6e0 != 0)) {
    uVar4 = (**(code **)(*param_1 + 0x2c8))(param_1);
    FUN_1485509b4(uVar4,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x18))(lVar3 + 0x28);
  FUN_1484c7624(&local_6b8);
  if ((local_48 ^ (ulonglong)auStack_708) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f4aa8a FUN_148f4aa8a body=89 status=ok
// SIG undefined FUN_148f4aa8a(void)

void FUN_148f4aa8a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_14588b3c8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_148f4aabd;
  }
  param_2 = 0;
LAB_148f4aabd:
  FUN_14851b91a(*(undefined8 *)(param_2 + 0xd0),param_1 + 0x10);
  FUN_148f49692(param_2,1);
  return;
}



// FUNCTION 148f4aae4 FUN_148f4aae4 body=62 status=ok
// SIG undefined FUN_148f4aae4(void)

void FUN_148f4aae4(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_14588b3c8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_148f4ab13;
  }
  param_2 = 0;
LAB_148f4ab13:
  FUN_148f49692(param_2,0);
  return;
}



// FUNCTION 148f4ab22 FUN_148f4ab22 body=482 status=ok
// SIG undefined FUN_148f4ab22(void)

void FUN_148f4ab22(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_168 [40];
  undefined **local_140;
  undefined1 local_138 [152];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  double local_68;
  double local_60;
  double local_58;
  undefined8 local_50;
  int local_48;
  undefined2 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar4 = 0;
  memset(local_138,0,0x91);
  local_140 = &PTR_FUN_14ae75120;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0x3ff0000000000000;
  local_68 = 1.0;
  local_60 = 1.0;
  local_58 = 1.0;
  local_50 = 0x800000008;
  local_48 = 8;
  local_44 = 1;
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = FUN_145a905ac();
    cVar1 = FUN_144a7ca96((longlong *)(param_1 + 0xc0),uVar2);
    lVar4 = *(longlong *)(param_1 + 0xc0);
    lVar3 = 0;
    if (cVar1 != '\0') {
      lVar3 = lVar4;
    }
  }
  local_58 = (double)*(float *)(lVar3 + 0xc0) * 0.5;
  local_60 = (double)*(float *)(lVar3 + 0xb8) * 0.5;
  local_68 = (double)*(float *)(lVar3 + 0xbc) * 0.5;
  local_90 = DAT_14c8464f0;
  local_a0 = (undefined4)DAT_14c8464e0;
  uStack_9c = DAT_14c8464e0._4_4_;
  uStack_98 = (undefined4)DAT_14c8464e8;
  uStack_94 = DAT_14c8464e8._4_4_;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0x3ff0000000000000;
  local_48 = *(int *)(lVar3 + 0xcc) + 1;
  local_50 = CONCAT44(*(int *)(lVar3 + 0xc4) + 1,*(int *)(lVar3 + 200) + 1);
  local_44 = CONCAT11(*(char *)(lVar4 + 0xa8) == '\x02',(undefined1)local_44);
  FUN_148396580(&local_140);
  FUN_146c00e98(param_2,&local_140);
  FUN_146bd8050(&local_140);
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f4ad06 FUN_148f4ad06 body=593 status=ok
// SIG undefined FUN_148f4ad06(void)

void FUN_148f4ad06(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  double dVar5;
  undefined1 auStack_158 [40];
  undefined1 local_130 [200];
  double local_68;
  double local_60;
  int local_58;
  int local_54;
  undefined1 local_4f;
  double local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  plVar1 = param_1 + 0x18;
  if (param_1[0x18] == 0) {
LAB_148f4ad3d:
    lVar4 = 0;
  }
  else {
    uVar3 = FUN_145a90698();
    cVar2 = FUN_144a7ca96(plVar1,uVar3);
    if (cVar2 == '\0') goto LAB_148f4ad3d;
    lVar4 = *plVar1;
  }
  if (*(int *)(lVar4 + 0xb8) == 1) {
    FUN_146c60328(local_130);
    local_68 = (double)*(float *)(lVar4 + 0xc0);
    local_60 = (double)*(float *)(lVar4 + 0xbc);
    local_40 = (double)*(float *)(lVar4 + 0xd0);
    if (*(char *)(lVar4 + 0xcc) == '\x01') {
      dVar5 = local_68;
      if (*(float *)(lVar4 + 0xbc) <= *(float *)(lVar4 + 0xc0)) {
        dVar5 = local_60;
      }
      dVar5 = (dVar5 + -0.0001) * 0.5;
      if (dVar5 <= local_40) {
        local_40 = dVar5;
      }
      if (local_40 <= 5e-05) {
        local_40 = 5e-05;
      }
      dVar5 = local_68 + (-local_40 - local_40);
      local_68 = 0.0001;
      if (0.0001 <= dVar5) {
        local_68 = dVar5;
      }
      dVar5 = (-local_40 - local_40) + local_60;
      local_60 = 0.0001;
      if (0.0001 <= dVar5) {
        local_60 = dVar5;
      }
      if ((local_40 != (double)*(float *)(lVar4 + 0xd0)) ||
         (NAN(local_40) || NAN((double)*(float *)(lVar4 + 0xd0)))) {
        *(float *)(lVar4 + 0xd0) = (float)local_40;
        (**(code **)(*param_1 + 0x330))(param_1,lVar4);
      }
    }
    local_58 = *(int *)(lVar4 + 200) + 1;
    local_54 = *(int *)(lVar4 + 0xc4) + 1;
    local_4f = *(char *)(*plVar1 + 0xa8) != '\x02';
    local_38 = *(int *)(lVar4 + 0xd4) + -1;
    FUN_146c60402(local_130);
  }
  else {
    if (*(int *)(lVar4 + 0xb8) != 0) goto LAB_148f4ad52;
    FUN_146c6027e(local_130);
    local_68 = (double)*(float *)(lVar4 + 0xc0);
    local_60 = (double)*(float *)(lVar4 + 0xbc);
    local_58 = *(int *)(lVar4 + 200) + 1;
    local_54 = *(int *)(lVar4 + 0xc4) + 1;
    local_4f = *(char *)(*plVar1 + 0xa8) != '\x02';
    FUN_142978942(local_130);
  }
  FUN_146c00e98(param_2,local_130);
  FUN_146bd8050(local_130);
LAB_148f4ad52:
  if ((local_30 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f4af58 FUN_148f4af58 body=227 status=ok
// SIG undefined FUN_148f4af58(void)

void FUN_148f4af58(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_98;
  undefined **local_88;
  longlong local_80;
  undefined4 local_78;
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_148f48c94();
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    uVar2 = FUN_145a90784();
    cVar1 = FUN_144a7ca96((longlong *)(param_1 + 0xc0),uVar2);
    if (cVar1 != '\0') {
      lVar3 = *(longlong *)(param_1 + 0xc0);
      goto LAB_148f4afa8;
    }
  }
  lVar3 = 0;
LAB_148f4afa8:
  local_58 = 0;
  local_48 = &PTR_LAB_14ba26060;
  local_68 = &LAB_1443692c4;
  local_40 = lVar3;
  local_78 = FUN_1484de26e(lVar3 + 0x28,lVar3 + 200);
  local_98 = 0;
  local_88 = &PTR_LAB_14ba26080;
  local_a8 = &LAB_14436932e;
  local_80 = lVar3;
  FUN_1484de26e(lVar3 + 0x28,lVar3 + 0xbc);
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f4b03c FUN_148f4b03c body=353 status=ok
// SIG undefined FUN_148f4b03c(void)

void FUN_148f4b03c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_128 [40];
  undefined1 local_100 [160];
  float local_60;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_40;
  float local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar1 = (longlong *)(param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0xc0) == 0) {
LAB_148f4b06e:
    lVar4 = 0;
  }
  else {
    uVar3 = FUN_145a90784();
    cVar2 = FUN_144a7ca96(plVar1,uVar3);
    if (cVar2 == '\0') goto LAB_148f4b06e;
    lVar4 = *plVar1;
  }
  if (*(int *)(lVar4 + 0xb8) == 1) {
    FUN_146c5e828(local_100);
    local_60 = *(float *)(lVar4 + 0xbc);
    local_30 = *(float *)(lVar4 + 200);
    if (local_60 * 0.999 <= *(float *)(lVar4 + 200)) {
      local_30 = local_60 * 0.999;
    }
    local_50 = *(undefined4 *)(lVar4 + 0xc0);
    local_4c = *(undefined4 *)(lVar4 + 0xc4);
    local_40 = *(char *)(*plVar1 + 0xa8) != '\x02';
    FUN_146c5e980(local_100);
  }
  else {
    if (*(int *)(lVar4 + 0xb8) != 0) goto LAB_148f4b085;
    FUN_146c5e79e(local_100);
    local_60 = *(float *)(lVar4 + 0xbc);
    local_50 = *(undefined4 *)(lVar4 + 0xc0);
    local_4c = *(undefined4 *)(lVar4 + 0xc4);
    local_40 = *(char *)(*plVar1 + 0xa8) != '\x02';
    FUN_142976fcc(local_100);
  }
  FUN_146c00e98(param_2,local_100);
  FUN_146bd8050(local_100);
LAB_148f4b085:
  if ((local_28 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f4b19e FUN_148f4b19e body=738 status=ok
// SIG undefined FUN_148f4b19e(void)

void FUN_148f4b19e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_238 [40];
  undefined4 local_210;
  undefined4 uStack_20c;
  int iStack_208;
  undefined **local_200;
  undefined1 local_1f8 [152];
  undefined2 local_160;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined2 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined2 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_238;
  lVar8 = 0;
  memset(local_1f8,0,0x91);
  local_160 = 0x100;
  local_200 = &PTR_FUN_14ae73538;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = (undefined8 *)0x0;
  uStack_118 = 0;
  local_110 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_108 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_100 = DAT_14c8464f0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  local_e0 = 0x3ff0000000000000;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_b4 = 1;
  local_b0 = 0x3ff0000000000000;
  local_a8 = 0x3ff0000000000000;
  local_a0 = 0x3ff0000000000000;
  local_98 = 0;
  local_94 = 0x42c80000;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  plVar1 = (longlong *)(param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    uVar6 = FUN_145a90870();
    cVar4 = FUN_144a7ca96(plVar1,uVar6);
    if (cVar4 == '\0') {
      lVar8 = 0;
    }
    else {
      lVar8 = *plVar1;
    }
  }
  FUN_1485ab348(&local_210,SUB84((double)*(float *)(lVar8 + 0xbc),0),*(undefined4 *)(lVar8 + 0xc4),0
               );
  FUN_1485ab348(&local_210,SUB84((double)*(float *)(lVar8 + 0xb8),0),*(undefined4 *)(lVar8 + 0xc0),0
               );
  if (iStack_208 < 1) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    lVar9 = 8;
    lVar8 = 0;
    do {
      uVar3 = uStack_118;
      uVar6 = *(undefined8 *)(CONCAT44(uStack_20c,local_210) + -8 + lVar9);
      uVar2 = *(undefined8 *)(CONCAT44(uStack_20c,local_210) + lVar9);
      lVar10 = (longlong)(int)uStack_118;
      uVar5 = (int)uStack_118 + 1;
      uStack_118 = CONCAT44(uStack_118._4_4_,uVar5);
      if (uStack_118._4_4_ < uVar5) {
        FUN_1403e3958(&local_120,uVar3 & 0xffffffff);
      }
      local_120[lVar10 * 3] = uVar6;
      local_120[lVar10 * 3 + 1] = uVar2;
      local_120[lVar10 * 3 + 2] = 0;
      lVar8 = lVar8 + 1;
      lVar9 = lVar9 + 0x10;
      puVar7 = local_120;
    } while (lVar8 < iStack_208);
  }
  local_b8 = 0x100;
  local_160 = CONCAT11(local_160._1_1_,*(char *)(*plVar1 + 0xa8) == '\x02');
  local_110 = *puVar7;
  uStack_108 = puVar7[1];
  local_100 = puVar7[2];
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  local_e0 = 0x3ff0000000000000;
  FUN_14831809a(&local_200);
  FUN_146c00e98(param_2,&local_200);
  if (CONCAT44(uStack_20c,local_210) != 0) {
    FUN_1400020a8();
  }
  FUN_148319084(&local_200);
  if ((local_70 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f4b482 FUN_148f4b482 body=327 status=ok
// SIG undefined FUN_148f4b482(void)

void FUN_148f4b482(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_138 [32];
  undefined **local_118;
  undefined1 local_110 [152];
  undefined1 local_78;
  undefined1 local_77;
  undefined4 local_48;
  undefined2 local_44;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar4 = 0;
  memset(local_110,0,0x91);
  local_77 = 1;
  local_48 = 0x10;
  local_44 = 0x100;
  local_40 = 2;
  local_118 = &PTR_FUN_14af77dd0;
  local_38 = 0x3f800000;
  uStack_34 = 0x3f800000;
  uStack_30 = 0x3f800000;
  iStack_2c = 0;
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = FUN_145a9095c();
    cVar1 = FUN_144a7ca96((longlong *)(param_1 + 0xc0),uVar2);
    lVar4 = *(longlong *)(param_1 + 0xc0);
    lVar3 = 0;
    if (cVar1 != '\0') {
      lVar3 = lVar4;
    }
  }
  local_38 = *(undefined4 *)(lVar3 + 0xb8);
  uStack_30 = *(undefined4 *)(lVar3 + 0xbc);
  local_48 = *(undefined4 *)(lVar3 + 0xc0);
  iStack_2c = *(int *)(lVar3 + 0xc4) + -1;
  local_44 = CONCAT11(local_44._1_1_,1);
  local_78 = *(char *)(lVar4 + 0xa8) == '\x02';
  uStack_34 = local_38;
  FUN_1485ab0de(&local_118);
  FUN_146c00e98(param_2,&local_118);
  FUN_146bd8050(&local_118);
  if ((local_28 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f4b5ca FUN_148f4b5ca body=292 status=ok
// SIG undefined FUN_148f4b5ca(void)

void FUN_148f4b5ca(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_108 [32];
  undefined **local_e8;
  undefined1 local_e0 [152];
  double local_48;
  double local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar4 = 0;
  memset(local_e0,0,0x91);
  local_e8 = &PTR_FUN_14ae75180;
  local_30 = 0;
  local_2c = 0;
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = FUN_145a90d0c();
    cVar1 = FUN_144a7ca96((longlong *)(param_1 + 0xc0),uVar2);
    lVar4 = *(longlong *)(param_1 + 0xc0);
    lVar3 = 0;
    if (cVar1 != '\0') {
      lVar3 = lVar4;
    }
  }
  local_48 = (double)*(float *)(lVar3 + 0xb8);
  local_40 = (double)*(float *)(lVar3 + 0xbc);
  local_38 = *(undefined4 *)(lVar3 + 0xc0);
  local_34 = *(undefined4 *)(lVar3 + 0xc4);
  local_30 = *(undefined4 *)(lVar3 + 200);
  local_2c = *(char *)(lVar4 + 0xa8) == '\x02';
  FUN_148397c72(&local_e8);
  FUN_146c00e98(param_2,&local_e8);
  FUN_146bd8050(&local_e8);
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f4b6f0 FUN_148f4b6f0 body=329 status=ok
// SIG undefined FUN_148f4b6f0(void)

void FUN_148f4b6f0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_138 [32];
  undefined **local_118;
  undefined1 local_110 [152];
  undefined1 local_78;
  undefined1 local_77;
  undefined4 local_48;
  undefined2 local_44;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar4 = 0;
  memset(local_110,0,0x91);
  local_77 = 1;
  local_48 = 0x10;
  local_44 = 0x100;
  local_40 = 2;
  local_118 = &PTR_FUN_14af77dd0;
  local_38 = 0x3f800000;
  uStack_34 = 0x3f800000;
  uStack_30 = 0x3f800000;
  iStack_2c = 0;
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = FUN_145a90a48();
    cVar1 = FUN_144a7ca96((longlong *)(param_1 + 0xc0),uVar2);
    lVar4 = *(longlong *)(param_1 + 0xc0);
    lVar3 = 0;
    if (cVar1 != '\0') {
      lVar3 = lVar4;
    }
  }
  local_38 = *(undefined4 *)(lVar3 + 0xb8);
  uStack_34 = 0x3c23d70a;
  uStack_30 = *(undefined4 *)(lVar3 + 0xbc);
  local_48 = *(undefined4 *)(lVar3 + 0xc0);
  iStack_2c = *(int *)(lVar3 + 0xc4) + -1;
  local_44 = CONCAT11(local_44._1_1_,1);
  local_78 = *(char *)(lVar4 + 0xa8) == '\x02';
  FUN_1485ab0de(&local_118);
  FUN_146c00e98(param_2,&local_118);
  FUN_146bd8050(&local_118);
  if ((local_28 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f4b83a FUN_148f4b83a body=404 status=ok
// SIG undefined FUN_148f4b83a(void)

void FUN_148f4b83a(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_148 [32];
  undefined **local_128;
  undefined1 local_120 [152];
  undefined1 local_88;
  undefined1 local_87;
  undefined4 local_58;
  undefined2 local_54;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar4 = 0;
  memset(local_120,0,0x91);
  local_87 = 1;
  local_58 = 0x10;
  local_54 = 0x100;
  local_50 = 2;
  local_128 = &PTR_FUN_14ba25018;
  local_48 = 0x3f8000003f000000;
  uStack_40 = 0x3c23d70a3f800000;
  local_38 = 0x3f000000;
  uStack_30 = 0;
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = FUN_145a90b34();
    cVar1 = FUN_144a7ca96((longlong *)(param_1 + 0xc0),uVar2);
    lVar4 = *(longlong *)(param_1 + 0xc0);
    lVar3 = 0;
    if (cVar1 != '\0') {
      lVar3 = lVar4;
    }
  }
  local_48 = *(undefined8 *)(lVar3 + 0xb8);
  uStack_40 = CONCAT44(0x3c23d70a,*(undefined4 *)(lVar3 + 0xc0));
  local_58 = *(undefined4 *)(lVar3 + 200);
  local_54 = CONCAT11(local_54._1_1_,1);
  local_88 = *(char *)(lVar4 + 0xa8) == '\x02';
  if (1 < *(int *)(lVar3 + 0xcc)) {
    local_38._4_4_ = *(int *)(lVar3 + 0xcc) + -1;
    uStack_30 = CONCAT44(local_38._4_4_,local_38._4_4_);
  }
  local_38 = CONCAT44(local_38._4_4_,*(undefined4 *)(lVar3 + 0xc4));
  FUN_148f4b9d0(&local_128);
  FUN_146c00e98(param_2,&local_128);
  FUN_146bd8050(&local_128);
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f4b9d0 FUN_148f4b9d0 body=744 status=ok
// SIG undefined FUN_148f4b9d0(void)

longlong FUN_148f4b9d0(longlong param_1)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_108 [32];
  float *local_e8;
  undefined4 local_e0;
  undefined4 *local_d8;
  undefined4 local_d0;
  undefined8 *local_c8;
  undefined4 local_c0;
  undefined8 *local_b8;
  undefined4 local_b0;
  undefined4 *local_a8;
  undefined8 uStack_a0;
  float *local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  float local_84 [4];
  float local_74 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  fVar11 = *(float *)(param_1 + 0xe0);
  local_74[1] = *(float *)(param_1 + 0xe8);
  local_74[2] = *(float *)(param_1 + 0xec);
  lVar3 = 0;
  local_88 = 0;
  local_84[0] = *(float *)(param_1 + 0xe4);
  local_84[2] = local_84[0] + *(float *)(param_1 + 0xf0);
  local_98 = (float *)0x0;
  uStack_90 = 0;
  local_a8 = (undefined4 *)0x0;
  uStack_a0 = 0;
  iVar4 = *(int *)(param_1 + 0xfc) + *(int *)(param_1 + 0xf4) + *(int *)(param_1 + 0xf8) + 4;
  local_84[1] = local_84[0];
  local_84[3] = fVar11;
  local_74[0] = fVar11;
  FUN_144a12820(&local_98,iVar4,1);
  FUN_144a12820(&local_a8,iVar4,1);
  *local_98 = fVar11;
  *local_a8 = 0;
  fVar9 = 0.0;
  iVar4 = 0;
  do {
    iVar2 = *(int *)(param_1 + 0xf4 + lVar3 * 4);
    iVar5 = iVar4 + 1;
    if (iVar2 < 1) {
      fVar10 = local_74[lVar3];
      fVar9 = local_84[lVar3];
    }
    else {
      fVar1 = local_84[lVar3];
      fVar10 = local_74[lVar3];
      lVar6 = (longlong)iVar5;
      iVar7 = 1;
      do {
        fVar12 = (float)iVar7 / (float)(iVar2 + 1);
        local_98[lVar6] = fVar12 * (fVar10 - fVar11) + fVar11;
        local_a8[lVar6] = fVar12 * (fVar1 - fVar9) + fVar9;
        lVar6 = lVar6 + 1;
        iVar5 = iVar7 + 1;
        bVar8 = iVar7 != iVar2;
        iVar7 = iVar5;
      } while (bVar8);
      iVar5 = iVar4 + iVar5;
      fVar9 = fVar1;
    }
    lVar3 = lVar3 + 1;
    local_98[iVar5] = fVar10;
    local_a8[iVar5] = fVar9;
    fVar11 = fVar10;
    iVar4 = iVar5;
  } while (lVar3 != 3);
  iVar4 = *(int *)(param_1 + 0xf4);
  iVar2 = *(int *)(param_1 + 0xf8);
  local_b8 = (undefined8 *)0x0;
  local_b0 = 2;
  FUN_144a06ca8(&local_b8,2,0);
  *local_b8 = CONCAT44(iVar4 + iVar2 + 2,iVar4 + 1);
  local_c8 = local_b8;
  local_c0 = local_b0;
  local_d8 = local_a8;
  local_d0 = (undefined4)uStack_a0;
  local_e8 = local_98;
  local_e0 = (undefined4)uStack_90;
  FUN_1485bb3d8(param_1);
  if (local_b8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != (float *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f4bcba FUN_148f4bcba body=597 status=ok
// SIG undefined FUN_148f4bcba(void)

void FUN_148f4bcba(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined1 local_130 [152];
  undefined8 local_98;
  int iStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  double local_60;
  double local_58;
  double local_50;
  int local_48;
  int local_44;
  int local_40;
  undefined1 local_3c;
  bool bStack_3b;
  undefined4 local_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    lVar2 = 0;
    lVar3 = 0;
  }
  else {
    FUN_145a90c20();
    cVar1 = FUN_144a7ca96((longlong *)(param_1 + 0xc0));
    lVar2 = *(longlong *)(param_1 + 0xc0);
    lVar3 = 0;
    if (cVar1 != '\0') {
      lVar3 = lVar2;
    }
  }
  if (*(int *)(lVar3 + 0xbc) == 1) {
    memset(local_130,0,0x91);
    local_138 = &PTR_FUN_14ae75170;
    _local_38 = CONCAT44(1,*(undefined4 *)(lVar3 + 0xb8));
    local_60 = (double)(*(int *)(lVar3 + 0xc0) + 1) * 0.5;
    local_98 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    iStack_90 = (int)DAT_14c8464e8;
    uStack_8c = DAT_14c8464e8._4_4_;
    local_88 = DAT_14c8464f0;
    local_70 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_68 = 0x3ff0000000000000;
    local_48 = *(int *)(lVar3 + 0xc0) + 1;
    _local_3c = CONCAT11(*(char *)(lVar2 + 0xa8) == '\x02',1);
    local_58 = local_60;
    local_50 = local_60;
    local_44 = local_48;
    local_40 = local_48;
    FUN_148397678(&local_138);
  }
  else {
    if (*(int *)(lVar3 + 0xbc) != 0) goto LAB_148f4bd00;
    memset(local_130,0,0x91);
    local_138 = &PTR_FUN_14af11230;
    local_98 = (double)*(float *)(lVar3 + 0xb8);
    uStack_8c = *(undefined4 *)(lVar3 + 200);
    iStack_90 = *(int *)(lVar3 + 0xc4) + 1;
    local_88 = CONCAT71((int7)((ulonglong)local_88 >> 8),*(char *)(lVar2 + 0xa8) != '\0');
    FUN_14850e248(&local_138);
  }
  FUN_146c00e98(param_2,&local_138);
  FUN_146bd8050(&local_138);
LAB_148f4bd00:
  if ((local_30 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f4bf10 FUN_148f4bf10 body=877 status=ok
// SIG undefined FUN_148f4bf10(void)

void FUN_148f4bf10(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_1c8 [40];
  undefined **local_1a0;
  undefined1 local_198 [152];
  undefined1 local_100;
  bool local_ff;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined1 local_e8 [136];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined8 local_44;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    lVar2 = 0;
    lVar3 = 0;
  }
  else {
    FUN_145a90df8();
    cVar1 = FUN_144a7ca96((longlong *)(param_1 + 0xc0));
    lVar2 = *(longlong *)(param_1 + 0xc0);
    lVar3 = 0;
    if (cVar1 != '\0') {
      lVar3 = lVar2;
    }
  }
  switch(*(undefined4 *)(lVar3 + 0xb8)) {
  case 0:
    memset(local_198,0,0x91);
    local_100 = 1;
    memset(local_e8,0,0x88);
    local_1a0 = &PTR_FUN_14af7cc30;
    local_f0 = 0;
    break;
  case 1:
    memset(local_198,0,0x91);
    local_100 = 1;
    memset(local_e8,0,0x88);
    local_1a0 = &PTR_FUN_14af7cbf0;
    local_f0 = 1;
    break;
  case 2:
    memset(local_198,0,0x91);
    local_100 = 1;
    memset(local_e8,0,0x88);
    local_1a0 = &PTR_FUN_14af7ccb0;
    local_58 = 1;
    local_54 = 0;
    uStack_4c = 0x3f80000000000000;
    local_44 = DAT_14c846330;
    local_3c = DAT_14c846338;
    local_f0 = 0;
    local_fc = *(undefined4 *)(lVar3 + 0xc0);
    local_f8 = *(undefined4 *)(lVar3 + 0xc4);
    local_f4 = *(undefined4 *)(lVar3 + 0xbc);
    _local_60 = CONCAT44(*(undefined4 *)(lVar3 + 0xcc),*(undefined4 *)(lVar3 + 0xd4));
    cVar1 = *(char *)(lVar2 + 0xa8);
    goto LAB_148f4c209;
  case 3:
    memset(local_198,0,0x91);
    local_100 = 1;
    memset(local_e8,0,0x88);
    local_58 = 1;
    local_54 = 0;
    uStack_4c = 0x3f80000000000000;
    local_44 = DAT_14c846330;
    local_3c = DAT_14c846338;
    local_1a0 = &PTR_FUN_14af7cc70;
    local_f0 = 1;
    local_fc = *(undefined4 *)(lVar3 + 0xc0);
    local_f8 = *(undefined4 *)(lVar3 + 0xc4);
    local_f4 = *(undefined4 *)(lVar3 + 0xbc);
    _local_60 = CONCAT44(*(undefined4 *)(lVar3 + 0xd0),*(undefined4 *)(lVar3 + 0xd4));
    goto LAB_148f4c1fd;
  default:
    goto switchD_148f4bf67_default;
  }
  local_fc = *(undefined4 *)(lVar3 + 0xc0);
  local_f8 = *(undefined4 *)(lVar3 + 0xc4);
  _local_60 = CONCAT44(uStack_5c,*(undefined4 *)(lVar3 + 200));
  local_f4 = *(undefined4 *)(lVar3 + 0xbc);
LAB_148f4c1fd:
  cVar1 = *(char *)(lVar2 + 0xa8);
LAB_148f4c209:
  local_ff = cVar1 == '\x02';
  FUN_14297c9ec(&local_1a0);
  FUN_146c00e98(param_2,&local_1a0);
  FUN_146c6125e(&local_1a0);
switchD_148f4bf67_default:
  if ((local_38 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f4c292 FUN_148f4c292 body=73 status=ok
// SIG undefined FUN_148f4c292(void)

bool FUN_148f4c292(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  lVar3 = param_1[5];
  uVar5 = (**(code **)(*param_1 + 0x2c0))();
  iVar4 = (**(code **)(*plVar1 + 0x2c0))(plVar1,param_2,uVar5);
  bVar2 = 1 < iVar4;
  if ((char)lVar3 != '\0') {
    bVar2 = iVar4 == 1;
  }
  return bVar2;
}



// FUNCTION 148f4c2dc FUN_148f4c2dc body=46 status=ok
// SIG undefined FUN_148f4c2dc(void)

longlong * FUN_148f4c2dc(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_148f4c30a(*(undefined8 *)(param_2 + 8));
  (**(code **)(*plVar1 + 0x398))(plVar1,*(undefined1 *)(param_1 + 0x28));
  return plVar1;
}



// FUNCTION 148f4c30a FUN_148f4c30a body=148 status=ok
// SIG undefined FUN_148f4c30a(void)

undefined8 FUN_148f4c30a(undefined8 param_1)

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
  uVar1 = FUN_145b9a1d0();
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



// FUNCTION 148f4c3a8 FUN_148f4c3a8 body=1298 status=ok
// SIG undefined FUN_148f4c3a8(void)

void FUN_148f4c3a8(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  wchar_t *pwVar4;
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  wchar_t *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined8 local_a8;
  undefined **local_98;
  longlong *local_90;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  longlong *local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1484416be();
  lVar1 = FUN_148f4c8bb(param_1);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar1);
  }
  param_1[0x18] = lVar1;
  (**(code **)(*param_1 + 0x308))(param_1,lVar1);
  plVar3 = (longlong *)param_1[0x18];
  FUN_140056680(&local_c8,&DAT_149dfb77a);
  (**(code **)(*plVar3 + 0x2a8))(plVar3,param_1,&local_c8);
  if (local_c8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  *(char *)(param_1[0x18] + 0xa8) = (char)param_1[0x1b];
  lVar1 = FUN_1484c5a9a(param_1);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar1);
  }
  param_1[0x19] = lVar1;
  FUN_14851cc7c(lVar1);
  FUN_144a787a6(param_1[0x19] + 0xa8,&DAT_14cb4d6a0);
  plVar3 = (longlong *)param_1[0x19];
  FUN_140056680(&local_c8,L"OutputTypeFromInputTool");
  (**(code **)(*plVar3 + 0x2a8))(plVar3,param_1,&local_c8);
  if (local_c8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_68 = 0;
  local_58 = &PTR_LAB_14ba260a0;
  local_78 = FUN_1443693ae;
  local_50 = param_1;
  FUN_1484c5b30(param_1[0x19] + 0x28,param_1[0x19] + 0xa8);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x19]);
  local_a8 = 0;
  local_98 = &PTR_LAB_14ba260c0;
  local_b8 = FUN_14436949a;
  local_90 = param_1;
  FUN_1484c5eb6(param_1[0x18] + 0x28,param_1[0x18] + 0xac);
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x19],*(int *)(param_1[0x18] + 0xac) == 0);
  if ((char)param_1[0x1b] == '\x01') {
    local_c8 = L"DuplicateMeshesToolName";
    local_c0 = 0x17;
    FUN_1446e940c(local_cc,&local_c8);
    local_c8 = L"UCombineMeshesTool";
    local_c0 = 0x12;
    FUN_1446e940c(local_d0,&local_c8);
    FUN_140208bae(&local_c8,local_d0,local_cc,L"Duplicate");
    (**(code **)(*param_1 + 0x370))(param_1,&local_c8);
    if (local_c8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_c8 + 0x10))();
    }
    uVar2 = FUN_1485062e8(*(undefined8 *)param_1[0x14]);
    FUN_148505e5e(&local_c8,uVar2,1);
  }
  else {
    local_c8 = L"CombineMeshesToolName";
    local_c0 = 0x15;
    FUN_1446e940c(local_cc,&local_c8);
    local_c8 = L"UCombineMeshesTool";
    local_c0 = 0x12;
    FUN_1446e940c(local_d0,&local_c8);
    FUN_140208bae(&local_c8,local_d0,local_cc,L"Append");
    (**(code **)(*param_1 + 0x370))(param_1,&local_c8);
    if (local_c8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_c8 + 0x10))();
    }
    FUN_1400b22c2(&local_c8,"Combined");
  }
  lVar1 = param_1[0x18];
  if ((wchar_t **)(lVar1 + 0xb0) == &local_c8) {
    if (local_c8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(lVar1 + 0xb0) != 0) {
      FUN_1400020a8();
    }
    *(wchar_t **)(lVar1 + 0xb0) = local_c8;
    local_c8 = (wchar_t *)0x0;
    *(undefined4 *)(lVar1 + 0xb8) = local_c0;
    *(undefined4 *)(lVar1 + 0xbc) = local_bc;
  }
  if ((char)param_1[0x1b] == '\x01') {
    lVar1 = FUN_148f4c950(param_1);
  }
  else {
    lVar1 = FUN_148f4c9e5(param_1);
  }
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar1);
  }
  param_1[0x1a] = lVar1;
  (**(code **)(*param_1 + 0x308))(param_1,lVar1);
  plVar3 = (longlong *)param_1[0x1a];
  FUN_140056680(&local_c8,&DAT_149dfb77a);
  (**(code **)(*plVar3 + 0x2a8))(plVar3,param_1,&local_c8);
  if (local_c8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  lVar1 = param_1[0x1b];
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  if ((char)lVar1 == '\x01') {
    local_c8 = L"OnStartToolDuplicate";
    local_c0 = 0x14;
    FUN_1446e940c(local_cc,&local_c8);
    local_c8 = L"UCombineMeshesTool";
    local_c0 = 0x12;
    FUN_1446e940c(local_d0,&local_c8);
    pwVar4 = 
    L"This tool duplicates a single input object to create new objects, and optionally replaces the input object."
    ;
  }
  else {
    local_c8 = L"OnStartToolCombine";
    local_c0 = 0x12;
    FUN_1446e940c(local_cc,&local_c8);
    local_c8 = L"UCombineMeshesTool";
    local_c0 = 0x12;
    FUN_1446e940c(local_d0,&local_c8);
    pwVar4 = 
    L"This tool appends multiple input object to create new objects, and optionally replaces the one of the input objects."
    ;
  }
  FUN_140208bae(&local_c8,local_d0,local_cc,pwVar4);
  (**(code **)(*plVar3 + 0x340))(plVar3,&local_c8,2);
  if (local_c8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_c8 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f4c8bb FUN_148f4c8bb body=148 status=ok
// SIG undefined FUN_148f4c8bb(void)

undefined8 FUN_148f4c8bb(undefined8 param_1)

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
  uVar1 = FUN_1459f3ef6();
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



// FUNCTION 148f4c950 FUN_148f4c950 body=148 status=ok
// SIG undefined FUN_148f4c950(void)

undefined8 FUN_148f4c950(undefined8 param_1)

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
  uVar1 = FUN_145b75528();
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



// FUNCTION 148f4c9e5 FUN_148f4c9e5 body=148 status=ok
// SIG undefined FUN_148f4c9e5(void)

undefined8 FUN_148f4c9e5(undefined8 param_1)

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
  uVar1 = FUN_145995b30();
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



// FUNCTION 148f4ca7a FUN_148f4ca7a body=285 status=ok
// SIG undefined FUN_148f4ca7a(void)

void FUN_148f4ca7a(longlong param_1,char param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 0xc0);
  FUN_140056680(local_38,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  plVar1 = *(longlong **)(param_1 + 200);
  FUN_140056680(local_38,L"OutputTypeFromInputTool");
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  plVar1 = *(longlong **)(param_1 + 0xd0);
  FUN_140056680(local_38,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (param_2 == '\x01') {
    if ((*(char *)(param_1 + 0xd8) == '\0') && (*(int *)(*(longlong *)(param_1 + 0xc0) + 0xac) != 0)
       ) {
      FUN_148f4e144(param_1);
    }
    else {
      FUN_148f4cb98(param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f4cb98 FUN_148f4cb98 body=5546 status=ok
// SIG undefined FUN_148f4cb98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148f4cb98(longlong *param_1)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  char cVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  uint uVar13;
  longlong lVar14;
  undefined7 uVar16;
  double *pdVar15;
  undefined2 *puVar17;
  ulonglong uVar18;
  wchar_t *pwVar19;
  ushort uVar20;
  ulonglong uVar21;
  ushort uVar22;
  ulonglong uVar23;
  longlong lVar24;
  uint uVar25;
  uint uVar26;
  longlong lVar27;
  ulonglong uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auVar34 [16];
  double dVar35;
  double dVar38;
  double dVar39;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined1 auStack_db8 [32];
  code **local_d98;
  undefined1 local_d90;
  ulonglong local_d80;
  undefined8 local_d78;
  ulonglong local_d70;
  ulonglong local_d68;
  ulonglong local_d60;
  double local_d58;
  undefined8 uStack_d50;
  double local_d48;
  double dStack_d40;
  double local_d38;
  undefined8 uStack_d30;
  double local_d28;
  undefined8 uStack_d20;
  double local_d18;
  double dStack_d10;
  double local_d08;
  double dStack_d00;
  double local_cf8;
  double dStack_cf0;
  double local_ce8;
  undefined1 local_cd8 [16];
  undefined1 local_cc8 [16];
  undefined1 *local_cb0;
  undefined1 local_ca8 [16];
  undefined1 local_c98 [16];
  undefined1 local_c88 [16];
  undefined1 local_c78 [16];
  undefined1 local_c68 [16];
  undefined1 local_c58 [16];
  undefined1 local_c48 [16];
  longlong local_c38;
  undefined8 uStack_c30;
  double local_c28;
  double dStack_c20;
  double local_c18;
  double dStack_c10;
  undefined8 local_c08;
  uint uStack_c00;
  uint uStack_bfc;
  undefined4 local_bf8;
  undefined4 uStack_bf4;
  undefined4 uStack_bf0;
  undefined4 uStack_bec;
  double local_be8;
  undefined4 uStack_be0;
  undefined4 uStack_bdc;
  undefined4 uStack_bd8;
  undefined4 uStack_bd4;
  undefined4 uStack_bd0;
  undefined4 uStack_bcc;
  undefined8 local_bc8;
  undefined4 uStack_bc0;
  undefined4 uStack_bbc;
  undefined1 local_bb8 [16];
  double local_ba8;
  undefined8 uStack_ba0;
  double local_b98;
  undefined4 uStack_b90;
  undefined4 uStack_b8c;
  undefined4 uStack_b88;
  undefined4 uStack_b84;
  undefined4 uStack_b80;
  undefined4 uStack_b7c;
  undefined8 local_b78;
  undefined4 local_b70;
  undefined2 local_b68 [4];
  undefined8 local_b60;
  undefined8 uStack_b58;
  undefined8 local_b40;
  undefined4 local_b38;
  undefined8 local_b34;
  undefined4 local_b2c;
  undefined8 local_b20;
  undefined4 local_b18;
  undefined8 local_b10;
  undefined8 uStack_b08;
  undefined8 local_af0;
  undefined4 local_ae8;
  undefined8 local_ae4;
  undefined4 local_adc;
  undefined8 local_ad0;
  undefined4 local_ac8;
  undefined2 local_ac0;
  undefined8 local_ab8;
  undefined8 uStack_ab0;
  undefined8 local_a98;
  undefined4 local_a90;
  undefined8 local_a8c;
  undefined4 local_a84;
  undefined8 local_a78;
  undefined4 local_a70;
  undefined8 local_a68;
  undefined8 uStack_a60;
  undefined8 local_a48;
  undefined4 local_a40;
  undefined8 local_a3c;
  undefined4 local_a34;
  undefined8 local_a28;
  undefined4 local_a20;
  undefined2 local_a18;
  undefined8 local_a10;
  undefined8 uStack_a08;
  undefined8 local_9f0;
  undefined4 local_9e8;
  undefined8 local_9e4;
  undefined4 local_9dc;
  undefined8 local_9d0;
  undefined4 local_9c8;
  undefined8 local_9c0;
  undefined8 uStack_9b8;
  undefined8 local_9a0;
  undefined4 local_998;
  undefined8 local_994;
  undefined4 local_98c;
  undefined8 local_980;
  undefined4 local_978;
  undefined2 local_970;
  undefined8 local_968;
  undefined8 uStack_960;
  undefined8 local_958;
  undefined8 uStack_950;
  code *local_598;
  undefined8 local_588;
  undefined **local_578;
  double *local_570;
  code *local_558 [2];
  undefined8 local_548;
  undefined **local_538;
  double *local_530;
  undefined8 local_518;
  undefined8 local_508;
  code *local_4d8 [2];
  undefined8 local_4c8;
  undefined1 local_498 [520];
  undefined8 local_290;
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
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined1 auStack_1c0 [16];
  double local_1b0;
  undefined8 local_1a8;
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
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_db8;
  DAT_14c7647e8 = 1;
  local_c38 = 0;
  uStack_c30 = 0;
  iVar10 = (int)param_1[0x15];
  if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar10);
  }
  if ((iVar10 != 0) && (FUN_146bfda82(&local_c38), 0 < (int)param_1[0x15])) {
    lVar24 = 0;
    do {
      FUN_148506727(&local_c08,*(undefined8 *)(param_1[0x14] + lVar24 * 8),&DAT_14c7647e0);
      uVar28 = uStack_c30;
      lVar27 = (longlong)(int)uStack_c30;
      uVar8 = (int)uStack_c30 + 1;
      uStack_c30 = CONCAT44(uStack_c30._4_4_,uVar8);
      if (uStack_c30._4_4_ < uVar8) {
        FUN_146bfdb28(&local_c38,uVar28 & 0xffffffff);
      }
      FUN_146bffece(lVar27 * 0x220 + local_c38,&local_c08);
      FUN_141082778(&local_c08);
      lVar24 = lVar24 + 1;
    } while (lVar24 < (int)param_1[0x15]);
  }
  lVar24 = (**(code **)(*param_1 + 0x2c8))(param_1);
  if ((char)param_1[0x1b] == '\0') {
    local_c08 = L"CombineMeshesToolTransactionName";
    uStack_c00 = 0x20;
    FUN_1446e940c(local_498,&local_c08);
    local_c08 = L"UCombineMeshesTool";
    uStack_c00 = 0x12;
    FUN_1446e940c(&local_178,&local_c08);
    pwVar19 = L"Merge Meshes";
  }
  else {
    local_c08 = L"DuplicateMeshToolTransactionName";
    uStack_c00 = 0x20;
    FUN_1446e940c(local_498,&local_c08);
    local_c08 = L"UCombineMeshesTool";
    uStack_c00 = 0x12;
    FUN_1446e940c(&local_178,&local_c08);
    pwVar19 = L"Duplicate Mesh";
  }
  FUN_140208bae(&local_c08,&local_178,local_498,pwVar19);
  (**(code **)(*(longlong *)(lVar24 + 0x28) + 0x10))((longlong *)(lVar24 + 0x28),&local_c08);
  if (local_c08 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_c08 + 0x10))();
  }
  if (0 < (int)param_1[0x15]) {
    lVar24 = 0;
    do {
      FUN_1485062e8(*(undefined8 *)(param_1[0x14] + lVar24 * 8));
      lVar24 = lVar24 + 1;
    } while (lVar24 < (int)param_1[0x15]);
  }
  auVar36 = ZEXT816(0);
  local_c58 = auVar36;
  local_c48 = auVar36;
  FUN_148f4f2f0(param_1,local_c48);
  local_d98 = (code **)((ulonglong)local_d98 & 0xffffffffffffff00);
  uVar28 = 0;
  FUN_1411b354a(local_498,0,0,0);
  FUN_14582eef4(local_498,0);
  FUN_14582ed12(local_498);
  FUN_146c1a132(local_290);
  FUN_14582ed9a(local_290);
  FUN_146c17f82(local_290);
  uVar8 = *(uint *)(param_1 + 0x15);
  local_d80 = (ulonglong)uVar8;
  if (uVar8 == 0) {
    local_d80 = 0;
    dVar3 = DAT_14c8464e0;
    dVar4 = DAT_14c8464e8;
    dVar43 = DAT_14c8464f0;
  }
  else {
    dVar43 = DAT_14c8464f0;
    dVar3 = DAT_14c8464e0;
    dVar4 = DAT_14c8464e8;
    if (0 < (int)uVar8) {
      lVar24 = 0;
      do {
        FUN_1485063a5(&local_c08,*(undefined8 *)(param_1[0x14] + lVar24 * 8));
        dVar42 = DAT_14c8464f0 * (double)local_bb8._0_8_;
        dVar33 = DAT_14c8464e0 * local_bc8;
        dVar40 = DAT_14c8464e8 * (double)CONCAT44(uStack_bbc,uStack_bc0);
        dVar2 = (double)CONCAT44(uStack_bfc,uStack_c00);
        dVar41 = (double)CONCAT44(uStack_bf4,local_bf8);
        dVar35 = dVar40 * (double)local_c08 - dVar33 * dVar2;
        dVar38 = dVar42 * dVar2 - dVar40 * dVar41;
        dVar39 = dVar33 * dVar41 - (double)local_c08 * dVar42;
        dVar38 = dVar38 + dVar38;
        dVar39 = dVar39 + dVar39;
        dVar35 = dVar35 + dVar35;
        dVar43 = dVar43 + dVar35 * (double)CONCAT44(uStack_bec,uStack_bf0) + dVar42 +
                          (dVar39 * (double)local_c08 - dVar38 * dVar2) +
                          (double)CONCAT44(uStack_bd4,uStack_bd8);
        dVar3 = dVar3 + (dVar35 * dVar2 - dVar39 * dVar41) +
                        (double)CONCAT44(uStack_bec,uStack_bf0) * dVar38 + dVar33 + local_be8;
        dVar4 = dVar4 + (dVar41 * dVar38 - (double)local_c08 * dVar35) +
                        (double)CONCAT44(uStack_bec,uStack_bf0) * dVar39 + dVar40 +
                        (double)CONCAT44(uStack_bdc,uStack_be0);
        lVar24 = lVar24 + 1;
        local_d80 = (ulonglong)(int)param_1[0x15];
      } while (lVar24 < (longlong)local_d80);
    }
    dVar35 = 1.0 / (double)(int)local_d80;
    dVar3 = dVar3 * dVar35;
    dVar4 = dVar4 * dVar35;
    dVar43 = dVar43 * dVar35;
  }
  local_ca8 = auVar36;
  local_c98 = auVar36;
  local_c88 = auVar36;
  local_c78 = auVar36;
  local_c68 = auVar36;
  if ((int)local_d80 < 1) {
    uVar18 = 1;
LAB_148f4dc4d:
    FUN_146c18122(local_290);
  }
  else {
    local_d38 = -dVar43;
    uStack_d20 = 0;
    uStack_d30 = 0x3ff0000000000000;
    local_d80 = CONCAT71((int7)(local_d80 >> 8),1);
    local_d48 = 1.0;
    dStack_d40 = -1.0;
    local_d58 = 0.0;
    uStack_d50 = 0x3ff0000000000000;
    uVar18 = 0;
    local_d60 = 0;
    uVar28 = 0;
    local_d68 = local_d80;
    local_d28 = local_d38;
    do {
      local_d78 = FUN_1485062e8(*(undefined8 *)(param_1[0x14] + uVar18 * 8));
      lVar14 = uVar18 * 0x220;
      lVar24 = local_c38 + lVar14;
      lVar27 = *(longlong *)(local_c38 + 0x208 + lVar14);
      uVar16 = (undefined7)((ulonglong)lVar14 >> 8);
      if ((uVar28 & 1) == 0) {
        if (lVar27 == 0) {
          local_d70 = 0;
          goto LAB_148f4d150;
        }
        local_d70 = CONCAT71(uVar16,*(longlong *)(lVar27 + 0x40) != 0);
LAB_148f4d15c:
        FUN_146c02390(local_290,lVar27,0,0);
        lVar27 = *(longlong *)(lVar24 + 0x208);
      }
      else {
        local_d70 = CONCAT71(uVar16,1);
        if (lVar27 != 0) goto LAB_148f4d15c;
        local_d70 = CONCAT71((int7)((ulonglong)local_d78 >> 8),1);
LAB_148f4d150:
        lVar27 = 0;
      }
      uVar12 = *(undefined8 *)(lVar27 + 0x48);
      uVar26 = *(int *)(lVar24 + 0x140) * 0x200 + *(int *)(lVar24 + 0x144);
      uVar8 = 0;
      if ((uVar26 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar24 + 0x148) - 1U))) {
        uVar6 = 1;
        uVar25 = 1;
        if (1 < (int)uVar26) {
          uVar25 = uVar26;
        }
        do {
          uVar13 = uVar6;
          uVar8 = uVar25;
          if (uVar25 == uVar13) break;
          uVar6 = uVar13 + 1;
          uVar8 = uVar13;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar24 + 0x148))[uVar13 >> 9] +
                                             (ulonglong)(uVar13 & 0x1ff) * 2) - 1U));
      }
LAB_148f4d251:
      if (uVar8 != uVar26) {
        local_d98 = (code **)local_c48;
        FUN_1443663d9(uVar18 & 0xffffffff,uVar12,uVar8,local_c58);
        uVar6 = uVar8 + 1;
        if ((int)(uVar8 + 1) < (int)uVar26) {
          uVar6 = uVar26;
        }
        uVar25 = uVar8;
        do {
          uVar8 = uVar6;
          if (uVar6 - 1 == uVar25) break;
          uVar8 = uVar25 + 1;
          uVar25 = uVar8;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar24 + 0x148) +
                                               (ulonglong)(uVar8 >> 9) * 8) +
                                             (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
        goto LAB_148f4d251;
      }
      local_cb0 = local_498;
      local_be8 = 0.0;
      uStack_be0 = 0;
      local_c08 = (wchar_t *)0x0;
      uStack_c00 = 0;
      uStack_bfc = 0;
      uStack_bdc = 0x80;
      uStack_bd8 = 0xffffffff;
      uStack_bd4 = 0;
      local_bc8 = 0.0;
      uStack_bc0 = 0;
      local_b98 = 0.0;
      uStack_b90 = 0;
      local_bb8 = ZEXT816(0);
      uStack_b8c = 0x80;
      uStack_b88 = 0xffffffff;
      uStack_b84 = 0;
      local_b78 = 0;
      local_b70 = 0;
      local_b68[0] = 0x101;
      local_b40 = 0;
      local_b38 = 0;
      local_b60 = 0;
      uStack_b58 = 0;
      local_b34 = 0xffffffff00000080;
      local_b2c = 0;
      local_b20 = 0;
      local_b18 = 0;
      local_af0 = 0;
      local_ae8 = 0;
      local_b10 = 0;
      uStack_b08 = 0;
      local_ae4 = 0xffffffff00000080;
      local_adc = 0;
      local_ad0 = 0;
      local_ac8 = 0;
      local_ac0 = 0x101;
      local_a98 = 0;
      local_a90 = 0;
      local_ab8 = 0;
      uStack_ab0 = 0;
      local_a8c = 0xffffffff00000080;
      local_a84 = 0;
      local_a78 = 0;
      local_a70 = 0;
      local_a48 = 0;
      local_a40 = 0;
      local_a68 = 0;
      uStack_a60 = 0;
      local_a3c = 0xffffffff00000080;
      local_a34 = 0;
      local_a28 = 0;
      local_a20 = 0;
      local_a18 = 0x101;
      local_9f0 = 0;
      local_9e8 = 0;
      local_a10 = 0;
      uStack_a08 = 0;
      local_9e4 = 0xffffffff00000080;
      local_9dc = 0;
      local_9d0 = 0;
      local_9c8 = 0;
      local_9a0 = 0;
      local_998 = 0;
      local_9c0 = 0;
      uStack_9b8 = 0;
      local_994 = 0xffffffff00000080;
      local_98c = 0;
      local_980 = 0;
      local_978 = 0;
      local_970 = 0x101;
      local_958 = 0;
      uStack_950 = 0;
      local_968 = 0;
      uStack_960 = 0;
      if ((char)param_1[0x1b] == '\0') {
        pdVar15 = &local_d18;
        uVar9 = FUN_1485063a5(pdVar15,*(undefined8 *)(param_1[0x14] + uVar18 * 8));
        auVar5 = local_cd8;
        auVar36 = _DAT_149934d80;
        dVar35 = local_cd8._0_8_;
        dVar2 = local_cd8._8_8_;
        dVar39 = local_cc8._0_8_;
        auVar30 = minpd(local_cd8,_DAT_149934d80);
        auVar32 = minpd(local_cc8,ZEXT816(0x3ff0000000000000));
        auVar31._8_8_ = -(ulonglong)(auVar30._8_8_ < 0.0);
        auVar31._0_8_ = -(ulonglong)(auVar30._0_8_ < 0.0);
        iVar10 = movmskpd(uVar9,auVar31);
        auVar30._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
        auVar30._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
        uVar8 = movmskpd((int)pdVar15,auVar30);
        if ((uVar8 & 0x3fffffff) == 0 && iVar10 == 0) {
          dVar40 = local_d18 * 0.0;
          dVar42 = dStack_d10 * 0.0;
          dVar41 = dStack_d00 * 0.0 * local_d48;
          dVar33 = local_d08 * 0.0 * dStack_d40;
          local_1f8 = dVar42 * -1.0 + local_d18 + dVar41 + local_d08 * 0.0;
          dStack_1f0 = dVar40 * 1.0 + dStack_d10 + dVar33 + dStack_d00 * 0.0;
          local_1e8._0_8_ = ((dVar42 * 1.0 + local_d08) - dVar40) + dVar41;
          local_1e8._8_8_ = ((dVar40 * -1.0 + dStack_d00) - dVar42) + dVar33;
          dVar40 = local_ce8 * 1.0;
          dVar41 = dStack_cf0 * 0.0 - local_cf8 * 0.0;
          dVar42 = dVar40 * 0.0 - dStack_cf0 * 0.0;
          dVar33 = local_cf8 * local_d58 - dVar40 * local_d58;
          dVar42 = dVar42 + dVar42;
          dVar33 = dVar33 + dVar33;
          dVar41 = dVar41 + dVar41;
          local_1c8 = (dVar33 * 0.0 - dVar42 * 0.0) + dVar40 + dVar41 + local_d28;
          local_1d8._0_8_ = (dVar41 * 0.0 - dVar33 * 0.0) + local_cf8 + dVar42 + -dVar3;
          local_1d8._8_8_ = (dVar42 * local_d58 - dVar41 * local_d58) + dStack_cf0 + dVar33 + -dVar4
          ;
        }
        else {
          dVar41 = dStack_d10 + dStack_d10;
          dVar33 = local_d08 + local_d08;
          dVar42 = local_d18 * (local_d18 + local_d18);
          local_278 = ((double)DAT_149934d80 - (local_d08 * dVar33 + dStack_d10 * dVar41)) * dVar35;
          dStack_250 = (DAT_149934d80._8_8_ - (local_d08 * dVar33 + dVar42)) * dVar2;
          dVar40 = (local_d18 + local_d18) * dStack_d00;
          local_258 = (dVar41 * local_d18 - dVar33 * dStack_d00) * dVar2;
          dStack_230 = (dVar33 * dStack_d10 - dVar40) * dVar39;
          local_238 = (dVar41 * dStack_d00 + local_d18 * dVar33) * dVar39;
          dStack_270 = (dVar41 * local_d18 + dVar33 * dStack_d00) * dVar35;
          local_248 = (dVar33 * dStack_d10 + dVar40) * dVar2;
          local_268 = (local_d18 * dVar33 - dVar41 * dStack_d00) * dVar35;
          uStack_260 = 0;
          uStack_240 = 0;
          local_228 = (1.0 - (dVar42 + dStack_d10 * dVar41)) * dVar39;
          local_1f8 = 1.0;
          dStack_1f0 = 0.0;
          local_1e8 = ZEXT816(0);
          uStack_220 = 0;
          local_218 = local_cf8;
          dStack_210 = dStack_cf0;
          local_208 = local_ce8;
          uStack_200 = 0x3ff0000000000000;
          local_1b0 = 0.0;
          local_1c8 = 0.0;
          auStack_1c0 = ZEXT816(0);
          local_1a8 = 0x3ff0000000000000;
          uStack_1a0 = 0;
          local_198._8_4_ = SUB84(dVar4,0);
          local_198._0_8_ = -dVar3;
          local_198._12_4_ = (int)((ulonglong)-dVar4 >> 0x20);
          local_188 = local_d38;
          uStack_180 = uStack_d30;
          local_1d8 = ZEXT816(0x3ff0000000000000) << 0x40;
          FUN_1447fea8d(&local_178,&local_278,&local_1f8);
          FUN_144a1c686(&local_178,0x3e45798ee0000000);
          auVar32._8_8_ = -(ulonglong)(0.0 <= dVar2);
          auVar32._0_8_ = -(ulonglong)(0.0 <= dVar35);
          auVar30 = blendvpd(_DAT_149936790,auVar36,auVar32);
          uVar28 = -(ulonglong)(0.0 <= dVar39 * 1.0);
          dVar41 = (double)(~uVar28 & 0xbff0000000000000 | uVar28 & 0x3ff0000000000000);
          dVar33 = auVar30._0_8_;
          local_168 = local_168 * dVar33;
          dStack_170 = dStack_170 * dVar33;
          local_178 = local_178 * dVar33;
          dVar33 = auVar30._8_8_;
          local_148 = local_148 * dVar33;
          dStack_150 = dStack_150 * dVar33;
          local_158 = dVar33 * local_158;
          local_128 = local_128 * dVar41;
          dStack_130 = dStack_130 * dVar41;
          local_138 = dVar41 * local_138;
          FUN_14481fd10(&local_c28,&local_178);
          dVar41 = local_c18 * local_c18 + local_c28 * local_c28;
          dVar33 = dStack_c10 * dStack_c10 + dStack_c20 * dStack_c20;
          auVar34._0_8_ = dVar41 + dVar33;
          auVar34._8_8_ = dVar41 + dVar33;
          auVar29._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar34._8_8_);
          auVar29._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar34._0_8_);
          auVar30 = sqrtpd(auVar34,auVar34);
          auVar36 = divpd(auVar36,auVar30);
          auVar37._0_8_ = auVar36._0_8_ * local_c18;
          auVar37._8_8_ = auVar36._8_8_ * dStack_c10;
          local_1f8 = (double)((ulonglong)(local_c28 * auVar36._0_8_) &
                              -(ulonglong)(9.99999993922529e-09 <= auVar34._0_8_));
          dStack_1f0 = (double)((ulonglong)(dStack_c20 * auVar36._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar34._8_8_));
          local_1e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar37,auVar29);
          local_1c8 = local_108;
          local_1d8._0_8_ = local_118;
          local_1d8._8_8_ = dStack_110;
        }
        uVar12 = local_d78;
        local_1b0 = dVar39 * 1.0;
        auStack_1c0 = auVar5;
        if (dVar2 * dVar35 * local_1b0 < 0.0) {
          FUN_146c0aee0(lVar24,0);
        }
        local_548 = 0;
        local_538 = &PTR_LAB_14ba26100;
        local_570 = &local_1f8;
        local_558[0] = FUN_1443696bc;
        local_588 = 0;
        local_578 = &PTR_LAB_14ba260e0;
        local_598 = FUN_14436961c;
        local_d98 = local_558;
        local_d90 = 0;
        local_530 = local_570;
        FUN_146bcbbdc(&local_cb0,lVar24);
        cVar7 = FUN_1485075e2(uVar12,1);
        if (cVar7 != '\0') {
          local_178 = local_1f8;
          dStack_170 = dStack_1f0;
          local_168 = (double)local_1e8._0_8_;
          uStack_160 = local_1e8._8_8_;
          local_158 = (double)local_1d8._0_8_;
          dStack_150 = (double)local_1d8._8_8_;
          local_148 = local_1c8;
          uStack_140 = 0;
          local_138 = (double)auStack_1c0._0_8_;
          dStack_130 = (double)auStack_1c0._8_8_;
          local_128 = local_1b0;
          uStack_120 = 0;
          goto LAB_148f4dbe3;
        }
      }
      else {
        local_4d8[0] = (code *)0x0;
        local_4c8 = 0;
        local_518 = 0;
        local_508 = 0;
        local_d98 = local_4d8;
        local_d90 = 0;
        FUN_146bcbbdc(&local_cb0,lVar24);
        uVar12 = local_d78;
        cVar7 = FUN_1485075e2(local_d78,1);
        if (cVar7 != '\0') {
          local_d60 = FUN_14850766a(uVar12);
          local_d68 = local_d60 >> 0x20;
          local_d80 = local_d60 >> 0x28;
LAB_148f4dbe3:
          FUN_148508c9e(uVar12,local_ca8);
        }
      }
      FUN_148506417(&local_178,*(undefined8 *)(param_1[0x14] + uVar18 * 8));
      if (local_178 != 0.0) {
        FUN_1400020a8();
      }
      FUN_146bfdcfe(&local_c08);
      uVar18 = uVar18 + 1;
      uVar28 = local_d70;
    } while ((longlong)uVar18 < (longlong)(int)param_1[0x15]);
    uVar18 = local_d68;
    uVar28 = local_d60;
    if ((char)local_d70 == '\0') goto LAB_148f4dc4d;
  }
  if ((char)param_1[0x1b] == '\x01') {
    FUN_1485063a5(&local_c08,*(undefined8 *)param_1[0x14]);
    dVar4 = (double)CONCAT44(uStack_bdc,uStack_be0);
    dVar43 = (double)CONCAT44(uStack_bd4,uStack_bd8);
    uVar12 = CONCAT44(uStack_bcc,uStack_bd0);
    uVar44 = (undefined4)local_c08;
    uVar45 = local_c08._4_4_;
    uVar8 = uStack_c00;
    uVar26 = uStack_bfc;
    uVar46 = local_bf8;
    uVar47 = uStack_bf4;
    uVar48 = uStack_bf0;
    uVar49 = uStack_bec;
    uVar50 = local_bb8._0_4_;
    uVar51 = local_bb8._4_4_;
    uVar52 = local_bb8._8_4_;
    uVar53 = local_bb8._12_4_;
    dVar3 = local_be8;
    dVar35 = local_bc8;
    uVar9 = uStack_bc0;
    uVar54 = uStack_bbc;
  }
  else {
    uVar12 = 0;
    uVar44 = 0;
    uVar45 = 0;
    uVar8 = 0;
    uVar26 = 0;
    uVar46 = 0;
    uVar47 = 0;
    uVar48 = 0;
    uVar49 = 0x3ff00000;
    uVar50 = 0;
    uVar51 = 0x3ff00000;
    uVar52 = 0;
    uVar53 = 0;
    dVar35 = 1.0;
    uVar9 = 0;
    uVar54 = 0x3ff00000;
  }
  iVar10 = *(int *)(param_1[0x18] + 0xb8);
  iVar11 = iVar10 + -1;
  if (iVar10 == 0) {
    puVar17 = &DAT_149dfb77a;
    iVar11 = 0;
  }
  else {
    puVar17 = *(undefined2 **)(param_1[0x18] + 0xb0);
  }
  if (0xf9 < iVar11) {
    iVar11 = 0xfa;
  }
  if (iVar11 < 1) {
    iVar11 = 0;
  }
  FUN_14006620a(&local_1f8,puVar17,iVar11);
  if (dStack_1f0._0_4_ < 2) {
    pwVar19 = L"Merge";
    if ((char)param_1[0x1b] != '\0') {
      pwVar19 = L"Duplicate";
    }
    FUN_14020fad6(&local_1f8,pwVar19);
  }
  FUN_14850577a(&local_c08,1);
  lVar24 = (**(code **)(*param_1 + 0x390))(param_1);
  if ((lVar24 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar24);
  }
  local_bc8 = (double)CONCAT44(uVar47,uVar46);
  local_bb8._8_4_ = SUB84(dVar4,0);
  local_bb8._0_8_ = dVar3;
  local_bb8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  local_be8 = (double)lVar24;
  uStack_bd8 = uVar44;
  uStack_bd4 = uVar45;
  uStack_bd0 = uVar8;
  uStack_bcc = uVar26;
  uStack_bc0 = uVar48;
  uStack_bbc = uVar49;
  local_ba8 = dVar43;
  uStack_ba0 = uVar12;
  local_b98 = dVar35;
  uStack_b90 = uVar9;
  uStack_b8c = uVar54;
  uStack_b88 = uVar50;
  uStack_b84 = uVar51;
  uStack_b80 = uVar52;
  uStack_b7c = uVar53;
  FUN_1402980a2(&local_b78,local_1f8);
  FUN_1457c8d02(local_b68,local_c48);
  FUN_148505bae(&local_c08,local_498);
  plVar1 = (longlong *)param_1[0x19];
  iVar10 = (int)plVar1[0x16];
  if (iVar10 == DAT_14cb4d6a8) {
    if (1 < iVar10) {
      lVar24 = 0;
      while( true ) {
        uVar20 = *(ushort *)(plVar1[0x15] + lVar24);
        uVar21 = (ulonglong)uVar20;
        uVar22 = *(ushort *)(DAT_14cb4d6a0 + lVar24);
        if (uVar20 != uVar22) break;
        if (uVar20 == 0) goto LAB_148f4de7a;
LAB_148f4de35:
        lVar24 = lVar24 + 2;
      }
      if ((uVar22 | uVar20) < 0x80) {
        uVar20 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
        uVar23 = (ulonglong)uVar22;
        uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar23];
        if ((&DAT_149e05da0)[uVar21] == (&DAT_149e05da0)[uVar23]) goto LAB_148f4de35;
      }
      if (uVar20 != uVar22) goto LAB_148f4de60;
    }
  }
  else if (DAT_14cb4d6a8 + iVar10 != 1) {
LAB_148f4de60:
    (**(code **)(*plVar1 + 0x2c0))(plVar1,&local_c08);
    goto LAB_148f4de91;
  }
LAB_148f4de7a:
  FUN_1485073fd(*(undefined8 *)param_1[0x14],&local_c08);
LAB_148f4de91:
  uVar12 = (**(code **)(*param_1 + 0x2c8))(param_1);
  FUN_148505c7a(&local_178,uVar12,&local_c08);
  if ((local_178._0_1_ == '\0') && (dStack_170 != 0.0)) {
    cVar7 = FUN_1485075e2(local_168,1);
    if (cVar7 != '\0') {
      iVar10 = local_c98._8_4_ + local_ca8._8_4_ + local_c88._8_4_ + local_c78._8_4_;
      iVar11 = iVar10 + local_c68._8_4_;
      if (iVar11 != 0 && SCARRY4(iVar10,local_c68._8_4_) == iVar11 < 0) {
        FUN_148507fa1(local_168,local_ca8,
                      uVar28 & 0xffffffff | (uVar18 & 0xff) << 0x20 | local_d80 << 0x28);
      }
    }
    dVar3 = dStack_170;
    uVar12 = (**(code **)(*param_1 + 0x2c8))(param_1);
    FUN_1485509b4(uVar12,dVar3);
  }
  FUN_1484c7624(&local_c08);
  if (local_1f8 != 0.0) {
    FUN_1400020a8();
  }
  local_c08 = (wchar_t *)0x0;
  uStack_c00 = 0;
  uStack_bfc = 0;
  if (0 < (int)param_1[0x15]) {
    lVar24 = 0;
    do {
      uVar12 = FUN_1485062af(*(undefined8 *)(param_1[0x14] + lVar24 * 8));
      uVar8 = uStack_c00;
      lVar27 = (longlong)(int)uStack_c00;
      uStack_c00 = uStack_c00 + 1;
      if (uStack_bfc < uStack_c00) {
        FUN_1447d05f2(&local_c08,uVar8);
      }
      *(undefined8 *)((longlong)local_c08 + lVar27 * 8) = uVar12;
      lVar24 = lVar24 + 1;
    } while (lVar24 < (int)param_1[0x15]);
  }
  lVar24 = param_1[0x1a];
  uVar12 = (**(code **)(*param_1 + 0x2c8))(param_1);
  FUN_14851d420(lVar24,&local_c08,uVar12,0);
  lVar24 = (**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*(longlong *)(lVar24 + 0x28) + 0x18))(lVar24 + 0x28);
  if (local_c08 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_14838fe66(local_ca8);
  FUN_141082778(local_498);
  FUN_144716727(local_c58._0_8_,local_c58._8_4_);
  if (local_c58._0_8_ != 0) {
    FUN_1400020a8();
  }
  if ((code *)local_c48._0_8_ != (code *)0x0) {
    FUN_1400020a8();
  }
  FUN_1461a8f9d(local_c38,uStack_c30 & 0xffffffff);
  if (local_c38 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_db8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f4e144 FUN_148f4e144 body=4521 status=ok
// SIG undefined FUN_148f4e144(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148f4e144(longlong *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  void *_Src;
  char cVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  uint uVar21;
  undefined7 uVar23;
  undefined1 **ppuVar22;
  undefined8 *puVar24;
  undefined8 *puVar25;
  longlong lVar26;
  ulonglong uVar27;
  uint uVar28;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 *puVar43;
  undefined1 auVar44 [16];
  double dVar45;
  double dVar46;
  double dVar47;
  undefined1 auStack_838 [32];
  void **local_818;
  undefined1 local_810;
  char local_801;
  ulonglong local_800;
  undefined8 local_7f8;
  ulonglong local_7f0;
  ulonglong local_7e8;
  ulonglong local_7e0;
  undefined8 local_7d8;
  undefined8 local_7d0;
  longlong local_7c8;
  ulonglong local_7c0;
  undefined8 local_7b8;
  undefined8 uStack_7b0;
  undefined8 local_7a8;
  undefined8 uStack_7a0;
  undefined1 *local_798;
  double dStack_790;
  undefined8 local_788;
  undefined8 uStack_780;
  undefined8 local_778;
  undefined8 uStack_770;
  double local_768;
  double dStack_760;
  double dStack_758;
  double local_750;
  undefined8 *local_748;
  undefined8 uStack_740;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined8 local_728;
  undefined8 uStack_720;
  undefined8 local_718;
  undefined8 uStack_710;
  undefined8 local_708;
  undefined8 uStack_700;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  undefined1 *local_6e8;
  double dStack_6e0;
  double local_6d8;
  double dStack_6d0;
  undefined4 local_6c8;
  undefined4 uStack_6c4;
  undefined4 uStack_6c0;
  undefined4 uStack_6bc;
  double local_6b8;
  double local_6a8;
  double dStack_6a0;
  double local_698;
  double dStack_690;
  longlong local_688;
  ulonglong uStack_680;
  void *local_678;
  ulonglong uStack_670;
  undefined1 local_668 [16];
  undefined8 local_658 [2];
  undefined8 local_648;
  void *local_618 [2];
  undefined8 local_608;
  undefined1 local_5d8 [16];
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined8 local_598;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_568;
  undefined4 local_560;
  undefined8 local_55c;
  undefined4 local_554;
  undefined8 local_548;
  undefined4 local_540;
  undefined2 local_538;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 local_510;
  undefined4 local_508;
  undefined8 local_504;
  undefined4 local_4fc;
  undefined8 local_4f0;
  undefined4 local_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4c0;
  undefined4 local_4b8;
  undefined8 local_4b4;
  undefined4 local_4ac;
  undefined8 local_4a0;
  undefined4 local_498;
  undefined2 local_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_468;
  undefined4 local_460;
  undefined8 local_45c;
  undefined4 local_454;
  undefined8 local_448;
  undefined4 local_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_418;
  undefined4 local_410;
  undefined8 local_40c;
  undefined4 local_404;
  undefined8 local_3f8;
  undefined4 local_3f0;
  undefined2 local_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3c0;
  undefined4 local_3b8;
  undefined8 local_3b4;
  undefined4 local_3ac;
  undefined8 local_3a0;
  undefined4 local_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_370;
  undefined4 local_368;
  undefined8 local_364;
  undefined4 local_35c;
  undefined8 local_350;
  undefined4 local_348;
  undefined2 local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined1 local_310 [520];
  undefined8 local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_838;
  DAT_14c7647f4 = 1;
  local_668 = (undefined1  [16])0x0;
  iVar20 = (int)param_1[0x15];
  if (iVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar20);
  }
  if ((iVar20 != 0) && (FUN_146bfda82(local_668), 0 < (int)param_1[0x15])) {
    lVar26 = 0;
    do {
      FUN_148506727(local_5d8,*(undefined8 *)(param_1[0x14] + lVar26 * 8),&DAT_14c7647ec);
      uVar37 = local_668._8_4_;
      lVar29 = (longlong)(int)local_668._8_4_;
      uVar15 = local_668._8_4_ + 1;
      local_668._8_4_ = uVar15;
      if ((uint)local_668._12_4_ < uVar15) {
        FUN_146bfdb28(local_668,uVar37);
      }
      FUN_146bffece(lVar29 * 0x220 + local_668._0_8_,local_5d8);
      FUN_141082778(local_5d8);
      lVar26 = lVar26 + 1;
    } while (lVar26 < (int)param_1[0x15]);
  }
  lVar26 = (**(code **)(*param_1 + 0x2c8))(param_1);
  local_5d8._8_4_ = 0x20;
  local_5d8._0_8_ = L"CombineMeshesToolTransactionName";
  FUN_1446e940c(local_310,local_5d8);
  local_5d8._8_4_ = 0x12;
  local_5d8._0_8_ = L"UCombineMeshesTool";
  FUN_1446e940c(&local_6e8,local_5d8);
  FUN_140208bae(local_5d8,&local_6e8,local_310,L"Merge Meshes");
  (**(code **)(*(longlong *)(lVar26 + 0x28) + 0x10))(lVar26 + 0x28,local_5d8);
  if ((longlong *)local_5d8._0_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_5d8._0_8_ + 0x10))();
  }
  local_678 = (void *)0x0;
  uStack_670 = 0;
  local_688 = 0;
  uStack_680 = 0;
  FUN_148f4f2f0(param_1,&local_678);
  local_818 = (void **)((ulonglong)local_818 & 0xffffffffffffff00);
  uVar15 = 0;
  FUN_1411b354a(local_310,0,0,0);
  FUN_14582eef4(local_310,0);
  FUN_14582ed12(local_310);
  FUN_146c1a132(local_108);
  FUN_14582ed9a(local_108);
  FUN_146c17f82(local_108);
  if (*(int *)(param_1[0x18] + 0xac) != 1) {
    uVar15 = (int)param_1[0x15] - 1;
  }
  lVar26 = (longlong)(int)uVar15;
  uVar16 = FUN_1485062e8(*(undefined8 *)(param_1[0x14] + lVar26 * 8));
  uVar17 = FUN_1485062af(*(undefined8 *)(param_1[0x14] + lVar26 * 8));
  local_7c8 = lVar26;
  FUN_1485063a5(&local_6e8,*(undefined8 *)(param_1[0x14] + lVar26 * 8));
  local_6f8 = 0;
  uStack_6f0 = 0;
  local_708 = 0;
  uStack_700 = 0;
  local_718 = 0;
  uStack_710 = 0;
  local_728 = 0;
  uStack_720 = 0;
  local_738 = 0;
  uStack_730 = 0;
  local_801 = FUN_1485075e2(uVar16,1);
  if (local_801 == '\0') {
    local_7e0 = 0x100000000;
    local_7f0 = 0;
    local_7e8 = 0;
  }
  else {
    local_7f0 = FUN_14850766a(uVar16);
    local_7e8 = local_7f0 & 0xffffff0000000000;
    local_7e0 = local_7f0 & 0xff00000000;
    local_7f0 = local_7f0 & 0xffffffff;
  }
  local_748 = (undefined8 *)0x0;
  uStack_740 = 0;
  lVar26 = 0;
  FUN_140ee84a4(&local_748,2,1);
  if (0 < (int)param_1[0x15]) {
    local_7c0 = (ulonglong)uVar15;
    uVar27 = 0;
    uVar19 = 0;
    local_7d8 = uVar16;
    local_7d0 = uVar17;
    do {
      local_7f8 = FUN_1485062e8(*(undefined8 *)(param_1[0x14] + uVar27 * 8));
      lVar29 = *(longlong *)(local_668._0_8_ + 0x208 + uVar27 * 0x220);
      uVar23 = (undefined7)((ulonglong)lVar26 >> 8);
      if ((uVar19 & 1) == 0) {
        if (lVar29 == 0) {
          lVar29 = 0;
          local_800 = 0;
        }
        else {
          local_800 = CONCAT71(uVar23,*(longlong *)(lVar29 + 0x40) != 0);
        }
      }
      else {
        local_800 = CONCAT71(uVar23,1);
      }
      lVar26 = local_668._0_8_ + uVar27 * 0x220;
      uVar17 = *(undefined8 *)(lVar29 + 0x48);
      uVar28 = *(int *)(lVar26 + 0x140) * 0x200 + *(int *)(lVar26 + 0x144);
      uVar15 = 0;
      if ((uVar28 != 0) &&
         (uVar15 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar26 + 0x148) - 1U))) {
        uVar19 = 1;
        uVar21 = 1;
        if (1 < (int)uVar28) {
          uVar21 = uVar28;
        }
        do {
          uVar18 = (uint)uVar19;
          uVar15 = uVar21;
          if (uVar21 == uVar18) break;
          uVar10 = uVar19 >> 9;
          uVar19 = (ulonglong)(uVar18 + 1);
          uVar15 = uVar18;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar26 + 0x148))[uVar10] +
                                             (ulonglong)(uVar18 & 0x1ff) * 2) - 1U));
      }
LAB_148f4e60e:
      uVar19 = local_800;
      if (uVar15 != uVar28) {
        local_818 = &local_678;
        FUN_1443663d9(uVar27 & 0xffffffff,uVar17,uVar15,&local_688);
        uVar21 = uVar15 + 1;
        if ((int)(uVar15 + 1) < (int)uVar28) {
          uVar21 = uVar28;
        }
        uVar18 = uVar15;
        do {
          uVar15 = uVar21;
          if (uVar21 - 1 == uVar18) break;
          uVar15 = uVar18 + 1;
          uVar18 = uVar15;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar26 + 0x148) +
                                               (ulonglong)(uVar15 >> 9) * 8) +
                                             (ulonglong)(uVar15 & 0x1ff) * 2) - 1U));
        goto LAB_148f4e60e;
      }
      if (uVar27 == local_7c0) {
        if ((local_801 != '\0') && (cVar14 = FUN_1485075e2(local_7f8,1), cVar14 != '\0')) {
          FUN_148508c9e(local_7f8,&local_738,&DAT_14c846480);
        }
      }
      else {
        FUN_1485063a5(local_5d8,*(undefined8 *)(param_1[0x14] + uVar27 * 8));
        local_798 = (undefined1 *)local_5d8._0_8_;
        dStack_790 = (double)local_5d8._8_8_;
        local_788 = (double)local_5c8;
        uStack_780 = (double)uStack_5c0;
        local_768 = (double)CONCAT44(uStack_5a4,uStack_5a8);
        local_778 = (double)local_5b8;
        uStack_770 = (double)CONCAT44(uStack_5ac,uStack_5b0);
        dStack_758 = (double)CONCAT44(uStack_58c,uStack_590);
        dStack_760 = (double)local_598;
        local_750 = (double)local_588;
        ppuVar22 = &local_798;
        FUN_146c3cd49(lVar26,ppuVar22,1);
        local_798 = local_6e8;
        dStack_790 = dStack_6e0;
        local_788 = local_6d8;
        uStack_780 = dStack_6d0;
        local_778 = (double)CONCAT44(uStack_6c4,local_6c8);
        uStack_770 = (double)CONCAT44(uStack_6bc,uStack_6c0);
        local_768 = local_6b8;
        dStack_760 = local_6a8;
        dStack_758 = dStack_6a0;
        local_750 = local_698;
        FUN_146c3cfa5(lVar26,ppuVar22,1);
        dVar6 = local_698;
        uVar10 = uStack_740;
        uVar19 = local_800;
        puVar24 = (undefined8 *)local_5d8;
        puVar25 = local_748;
        for (lVar29 = 0xc; uVar13 = DAT_14c846520, uVar16 = DAT_14c846518, uVar17 = DAT_14c846510,
            lVar29 != 0; lVar29 = lVar29 + -1) {
          *puVar25 = *puVar24;
          puVar24 = puVar24 + 1;
          puVar25 = puVar25 + 1;
        }
        auVar42._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dStack_6e0 - DAT_14c8463d8));
        auVar42._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS((double)local_6e8 - DAT_14c8463d0));
        uVar28 = movmskpd(0,auVar42);
        auVar44._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dStack_6d0 - DAT_14c8463e8));
        auVar44._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_6d8 - DAT_14c8463e0));
        iVar20 = movmskpd((int)ppuVar22,auVar44);
        uVar21 = iVar20 << 2 | uVar28;
        uVar15 = 0;
        if (uVar21 == 0) {
LAB_148f4e82d:
          auVar11._8_8_ = dStack_6a0;
          auVar11._0_8_ = local_6a8;
          auVar12._8_8_ = dStack_690;
          auVar12._0_8_ = local_698;
          auVar2._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dStack_6a0));
          auVar2._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_6a8));
          iVar20 = movmskpd(uVar28,auVar2);
          auVar3._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dStack_690));
          auVar3._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_698));
          uVar15 = movmskpd(uVar15,auVar3);
          uVar37 = (undefined4)DAT_14c8464c0;
          uVar38 = DAT_14c8464c0._4_4_;
          uVar39 = (undefined4)DAT_14c8464c8;
          uVar40 = DAT_14c8464c8._4_4_;
          dVar6 = DAT_14c846490;
          dVar7 = DAT_14c846498;
          dVar32 = DAT_14c8464a0;
          dVar34 = DAT_14c8464a8;
          dVar31 = DAT_14c8464b0;
          dVar33 = DAT_14c8464b8;
          dVar30 = DAT_14c8464d0;
          uVar17 = uRam000000014c8464d8;
          puVar43 = DAT_14c846480;
          dVar45 = DAT_14c846488;
          if ((uVar15 & 0x3fffffff) != 0 || iVar20 != 0) {
            auVar44 = divpd(_DAT_149934d80,auVar11);
            auVar42 = divpd(ZEXT816(0x3ff0000000000000),auVar12);
            dVar32 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_6a8)) & auVar44._0_8_);
            dVar34 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dStack_6a0)) & auVar44._8_8_);
            dVar30 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_698)) & auVar42._0_8_);
            puVar43 = (undefined1 *)-(double)local_6e8;
            dVar45 = -dStack_6e0;
            dVar6 = local_6d8 * -1.0;
            dVar7 = dStack_6d0 * 1.0;
            dVar35 = (double)CONCAT44(uStack_6c4,local_6c8) * dVar32;
            dVar36 = (double)CONCAT44(uStack_6bc,uStack_6c0) * dVar34;
            dVar46 = local_6b8 * dVar30;
            dVar31 = dVar36 * (double)puVar43 - dVar45 * dVar35;
            dVar33 = dVar46 * dVar45 - dVar6 * dVar36;
            dVar9 = dVar35 * dVar6 - (double)puVar43 * dVar46;
            dVar33 = dVar33 + dVar33;
            dVar9 = dVar9 + dVar9;
            dVar31 = dVar31 + dVar31;
            uVar37 = SUB84(dVar32,0);
            uVar38 = (int)((ulonglong)dVar32 >> 0x20);
            uVar39 = SUB84(dVar34,0);
            uVar40 = (int)((ulonglong)dVar34 >> 0x20);
            dVar32 = 0.0 - ((dVar31 * dVar45 - dVar9 * dVar6) + dVar7 * dVar33 + dVar35);
            dVar34 = 0.0 - (dVar31 * (double)local_6e8 + dVar6 * dVar33 + dVar7 * dVar9 + dVar36);
            dVar31 = 0.0 - (dVar7 * dVar31 + dVar46 + (dVar9 * (double)puVar43 - dVar33 * dVar45));
            dVar33 = 0.0;
            uVar17 = 0;
          }
          local_748[0xc] = puVar43;
          local_748[0xd] = dVar45;
          auVar4._8_4_ = SUB84(dVar7,0);
          auVar4._0_8_ = dVar6;
          auVar4._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
          *(undefined1 (*) [16])(local_748 + 0xe) = auVar4;
          local_748[0x10] = dVar32;
          local_748[0x11] = dVar34;
          local_748[0x12] = dVar31;
          local_748[0x13] = dVar33;
          *(undefined4 *)(local_748 + 0x14) = uVar37;
          *(undefined4 *)((longlong)local_748 + 0xa4) = uVar38;
          *(undefined4 *)(local_748 + 0x15) = uVar39;
          *(undefined4 *)((longlong)local_748 + 0xac) = uVar40;
          local_748[0x16] = dVar30;
          local_748[0x17] = uVar17;
        }
        else {
          auVar41._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8463d8 + dStack_6e0));
          auVar41._0_8_ =
               -(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8463d0 + (double)local_6e8));
          uVar28 = movmskpd(uVar28,auVar41);
          lVar29 = -(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8463e8 + dStack_6d0));
          auVar1._8_4_ = (int)lVar29;
          auVar1._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8463e0 + local_6d8));
          auVar1._12_4_ = (int)((ulonglong)lVar29 >> 0x20);
          iVar20 = movmskpd(uVar21,auVar1);
          uVar15 = iVar20 << 2 | uVar28;
          if ((uVar15 == 0) ||
             (((ABS(local_6a8 - dStack_6a0) <= 9.999999747378752e-05 &&
               (ABS(local_6a8 - local_698) <= 9.999999747378752e-05)) &&
              (ABS(dStack_6a0 - local_698) <= 9.999999747378752e-05)))) goto LAB_148f4e82d;
          dVar7 = local_6d8 * -1.0;
          dVar32 = dStack_6d0 * 1.0;
          local_7a8 = DAT_14c846510;
          uStack_7a0 = DAT_14c846518;
          dVar34 = (double)CONCAT44(uStack_6c4,local_6c8);
          dVar31 = (double)CONCAT44(uStack_6bc,uStack_6c0);
          local_7b8 = DAT_14c846520;
          uStack_7b0 = 0;
          local_768 = DAT_14c8464b0;
          dStack_760 = DAT_14c8464b8;
          local_778 = DAT_14c8464a0;
          uStack_770 = DAT_14c8464a8;
          local_788 = DAT_14c846490;
          uStack_780 = DAT_14c846498;
          local_798 = DAT_14c846480;
          dStack_790 = DAT_14c846488;
          dVar33 = 1.0 / local_6a8;
          dVar30 = ABS(local_6a8);
          if (9.99999993922529e-09 < ABS(dStack_6a0)) {
            dVar45 = 1.0 / dStack_6a0;
          }
          else {
            dVar45 = 0.0;
          }
          dVar35 = -(double)local_6e8;
          dVar36 = -dStack_6e0;
          dVar47 = dVar36 * dVar34 - dVar35 * dVar31;
          dVar46 = local_6b8 * dVar35 - dVar7 * dVar34;
          dVar9 = dVar7 * dVar31 - dVar36 * local_6b8;
          dVar47 = dVar47 + dVar47;
          dVar46 = dVar46 + dVar46;
          dVar9 = dVar9 + dVar9;
          dVar31 = (dVar7 * dVar9 - dVar47 * dVar35) + (dVar32 * dVar46 - dVar31);
          local_748[0xc] = dVar35;
          local_748[0xd] = dVar36;
          auVar5._8_4_ = SUB84(dVar32,0);
          auVar5._0_8_ = dVar7;
          auVar5._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
          *(undefined1 (*) [16])(local_748 + 0xe) = auVar5;
          auVar8._8_4_ = SUB84(dVar31,0);
          auVar8._0_8_ = (dVar36 * dVar47 - dVar46 * dVar7) + (dVar32 * dVar9 - dVar34);
          auVar8._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
          *(undefined1 (*) [16])(local_748 + 0x10) = auVar8;
          local_748[0x12] = (dVar35 * dVar46 - dVar9 * dVar36) + (dVar32 * dVar47 - local_6b8);
          local_748[0x13] = 0;
          local_748[0x14] = uVar17;
          local_748[0x15] = uVar16;
          local_748[0x16] = uVar13;
          local_748[0x17] = 0;
          lVar29 = (longlong)(int)uStack_740;
          uVar15 = (int)uStack_740 + 1;
          uStack_740 = CONCAT44(uStack_740._4_4_,uVar15);
          if (uStack_740._4_4_ < uVar15) {
            FUN_144a2c682(&local_748,uVar10 & 0xffffffff);
          }
          local_748[lVar29 * 0xc + 6] = local_768;
          (local_748 + lVar29 * 0xc + 6)[1] = dStack_760;
          local_748[lVar29 * 0xc + 4] = local_778;
          (local_748 + lVar29 * 0xc + 4)[1] = uStack_770;
          puVar24 = local_748 + lVar29 * 0xc + 2;
          *(undefined4 *)puVar24 = (undefined4)local_788;
          *(undefined4 *)((longlong)puVar24 + 4) = local_788._4_4_;
          *(undefined4 *)(puVar24 + 1) = (undefined4)uStack_780;
          *(undefined4 *)((longlong)puVar24 + 0xc) = uStack_780._4_4_;
          local_748[lVar29 * 0xc] = local_798;
          (local_748 + lVar29 * 0xc)[1] = dStack_790;
          local_748[lVar29 * 0xc + 8] =
               -(ulonglong)(9.99999993922529e-09 < dVar30) & (ulonglong)dVar33;
          (local_748 + lVar29 * 0xc + 8)[1] = dVar45;
          local_748[lVar29 * 0xc + 10] =
               -(ulonglong)(9.99999993922529e-09 < ABS(dVar6)) & (ulonglong)(1.0 / dVar6);
          (local_748 + lVar29 * 0xc + 10)[1] = 0;
        }
        if ((local_801 != '\0') && (cVar14 = FUN_1485075e2(local_7f8,1), cVar14 != '\0')) {
          FUN_148508d7c(local_7f8,&local_738,&local_748);
        }
      }
      local_798 = local_310;
      local_5b8 = 0;
      uStack_5b0 = 0;
      local_5d8 = ZEXT816(0);
      uStack_5ac = 0x80;
      uStack_5a8 = 0xffffffff;
      uStack_5a4 = 0;
      local_598 = 0;
      uStack_590 = 0;
      local_568 = 0;
      local_560 = 0;
      local_588 = 0;
      uStack_580 = 0;
      local_55c = 0xffffffff00000080;
      local_554 = 0;
      local_548 = 0;
      local_540 = 0;
      local_538 = 0x101;
      local_510 = 0;
      local_508 = 0;
      local_530 = 0;
      uStack_528 = 0;
      local_504 = 0xffffffff00000080;
      local_4fc = 0;
      local_4f0 = 0;
      local_4e8 = 0;
      local_4c0 = 0;
      local_4b8 = 0;
      local_4e0 = 0;
      uStack_4d8 = 0;
      local_4b4 = 0xffffffff00000080;
      local_4ac = 0;
      local_4a0 = 0;
      local_498 = 0;
      local_490 = 0x101;
      local_468 = 0;
      local_460 = 0;
      local_488 = 0;
      uStack_480 = 0;
      local_45c = 0xffffffff00000080;
      local_454 = 0;
      local_448 = 0;
      local_440 = 0;
      local_418 = 0;
      local_410 = 0;
      local_438 = 0;
      uStack_430 = 0;
      local_40c = 0xffffffff00000080;
      local_404 = 0;
      local_3f8 = 0;
      local_3f0 = 0;
      local_3e8 = 0x101;
      local_3c0 = 0;
      local_3b8 = 0;
      local_3e0 = 0;
      uStack_3d8 = 0;
      local_3b4 = 0xffffffff00000080;
      local_3ac = 0;
      local_3a0 = 0;
      local_398 = 0;
      local_370 = 0;
      local_368 = 0;
      local_390 = 0;
      uStack_388 = 0;
      local_364 = 0xffffffff00000080;
      local_35c = 0;
      local_350 = 0;
      local_348 = 0;
      local_340 = 0x101;
      local_328 = 0;
      uStack_320 = 0;
      local_338 = 0;
      uStack_330 = 0;
      local_618[0] = (void *)0x0;
      local_608 = 0;
      local_658[0] = 0;
      local_648 = 0;
      local_818 = local_618;
      local_810 = 0;
      FUN_146bcbbdc(&local_798,lVar26,local_5d8,local_658);
      FUN_146bfdcfe(local_5d8);
      uVar27 = uVar27 + 1;
    } while ((longlong)uVar27 < (longlong)(int)param_1[0x15]);
    uVar17 = local_7d0;
    uVar16 = local_7d8;
    if ((char)uVar19 != '\0') goto LAB_148f4f01b;
  }
  FUN_146c18122(local_108);
LAB_148f4f01b:
  _Src = local_678;
  lVar26 = (longlong)(int)(uint)uStack_670;
  local_5d8 = ZEXT416((uint)uStack_670) << 0x40;
  if (lVar26 != 0) {
    FUN_1411312f2(local_5d8,uStack_670 & 0xffffffff,0);
    memcpy((void *)local_5d8._0_8_,_Src,lVar26 << 3);
  }
  lVar26 = local_7c8;
  local_798 = (undefined1 *)0x1000000010101;
  local_818 = (void **)local_5d8;
  FUN_148506f34(*(undefined8 *)(param_1[0x14] + local_7c8 * 8),local_310,1);
  FUN_148506462(*(undefined8 *)(param_1[0x14] + lVar26 * 8),local_5d8,0);
  if (local_801 != '\0') {
    FUN_148507fa1(uVar16,&local_738,local_7e0 | local_7f0 | local_7e8);
  }
  uVar16 = (**(code **)(*param_1 + 0x2c8))(param_1);
  FUN_1485509b4(uVar16,uVar17);
  if (local_5d8._0_8_ != 0) {
    FUN_1400020a8();
  }
  local_5d8 = (undefined1  [16])0x0;
  if (0 < (int)param_1[0x15]) {
    lVar26 = 0;
    do {
      uVar16 = FUN_1485062af(*(undefined8 *)(param_1[0x14] + lVar26 * 8));
      uVar37 = local_5d8._8_4_;
      lVar29 = (longlong)(int)local_5d8._8_4_;
      uVar15 = local_5d8._8_4_ + 1;
      local_5d8._8_4_ = uVar15;
      if ((uint)local_5d8._12_4_ < uVar15) {
        FUN_1447d05f2(local_5d8,uVar37);
      }
      *(undefined8 *)(local_5d8._0_8_ + lVar29 * 8) = uVar16;
      lVar26 = lVar26 + 1;
    } while (lVar26 < (int)param_1[0x15]);
  }
  lVar26 = param_1[0x1a];
  uVar16 = (**(code **)(*param_1 + 0x2c8))(param_1);
  FUN_14851d420(lVar26,local_5d8,uVar16,uVar17);
  lVar26 = (**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*(longlong *)(lVar26 + 0x28) + 0x18))(lVar26 + 0x28);
  if (local_5d8._0_8_ != 0) {
    FUN_1400020a8();
  }
  if (local_748 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14838fe66(&local_738);
  FUN_141082778(local_310);
  FUN_144716727(local_688,uStack_680 & 0xffffffff);
  if (local_688 != 0) {
    FUN_1400020a8();
  }
  if (local_678 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1461a8f9d(local_668._0_8_,local_668._8_4_);
  if (local_668._0_8_ != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_838) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148f4f2f0 FUN_148f4f2f0 body=705 status=ok
// SIG undefined FUN_148f4f2f0(void)

void FUN_148f4f2f0(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  ulonglong *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_108 [40];
  longlong local_e0;
  longlong local_d8;
  undefined4 local_cc;
  ulonglong local_c8;
  longlong local_c0;
  int local_b8;
  ulonglong *local_b0;
  undefined4 *local_a8;
  undefined1 local_9c [4];
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_1448831cc(param_2,0);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  FUN_140bfc200(param_3,*(undefined4 *)(param_1 + 0xa8),1);
  if (*(int *)(param_1 + 0xa8) < 1) {
    local_50 = 0;
  }
  else {
    lVar7 = 0;
    local_d8 = param_1;
    do {
      local_e0 = lVar7;
      FUN_148506417(&local_c0,*(undefined8 *)(*(longlong *)(local_d8 + 0xa0) + lVar7 * 8),0);
      lVar7 = (longlong)local_b8;
      if (0 < lVar7) {
        lVar9 = local_e0 * 0x10;
        lVar8 = 0;
LAB_148f4f3db:
        local_c8 = *(ulonglong *)(local_c0 + lVar8 * 8);
        if ((int)uStack_90 != local_64) {
          uVar3 = ((uint)(local_c8 >> 0x14) & 0xffff ^ (uint)(local_c8 >> 4)) * -0x7a143595;
          uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
          puVar4 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar4 = local_60;
          }
          iVar5 = *(int *)(puVar4 + (ulonglong)(local_50 - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
          for (iVar1 = iVar5; iVar1 != -1;
              iVar1 = *(int *)(local_98 + (longlong)iVar1 * 0x18 + 0x10)) {
            if (*(ulonglong *)(local_98 + (longlong)iVar1 * 0x18) == local_c8) goto LAB_148f4f4c8;
          }
        }
        local_cc = (undefined4)param_2[1];
        local_b0 = &local_c8;
        local_a8 = &local_cc;
        FUN_1474bddaa(&local_98,local_9c,&local_b0,0);
        iVar5 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
          FUN_144769b64(param_2,iVar5);
        }
        *(ulonglong *)(*param_2 + (longlong)iVar5 * 8) = local_c8;
        goto LAB_148f4f4e9;
      }
LAB_148f4f524:
      if (local_c0 != 0) {
        FUN_1400020a8();
      }
      lVar7 = local_e0 + 1;
    } while (lVar7 < *(int *)(local_d8 + 0xa8));
    local_50 = 0;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_145cd3170(&local_98);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while (iVar5 = (int)puVar6[2], iVar5 != -1) {
LAB_148f4f4c8:
    puVar6 = (ulonglong *)(local_98 + (longlong)iVar5 * 0x18);
    if (*puVar6 == local_c8) goto LAB_148f4f4e2;
  }
  puVar6 = (ulonglong *)0x0;
LAB_148f4f4e2:
  local_cc = (undefined4)puVar6[1];
LAB_148f4f4e9:
  lVar2 = *param_3;
  iVar5 = *(int *)(lVar2 + 8 + lVar9);
  *(uint *)(lVar2 + 8 + lVar9) = iVar5 + 1U;
  if (*(uint *)(lVar2 + 0xc + lVar9) < iVar5 + 1U) {
    FUN_1446f48e2((longlong *)(lVar2 + lVar9),iVar5);
  }
  *(undefined4 *)(*(longlong *)(lVar2 + lVar9) + (longlong)iVar5 * 4) = local_cc;
  lVar8 = lVar8 + 1;
  if (lVar8 == lVar7) goto LAB_148f4f524;
  goto LAB_148f4f3db;
}



// FUNCTION 148f4f5b6 FUN_148f4f5b6 body=152 status=ok
// SIG undefined FUN_148f4f5b6(void)

undefined8 FUN_148f4f5b6(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"ShortString";
  local_28 = 0xb;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"UDeleteGeometrySelectionCommand";
  local_28 = 0x1f;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_2,local_38,local_34,L"Delete Selection");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f4f660 FUN_148f4f660 body=65 status=ok
// SIG undefined FUN_148f4f660(void)

longlong FUN_148f4f660(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_14479d2ce(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FUN_140a1ade6();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 148f4f6a6 FUN_148f4f6a6 body=152 status=ok
// SIG undefined FUN_148f4f6a6(void)

undefined8 FUN_148f4f6a6(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"ShortString";
  local_28 = 0xb;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"UDisconnectGeometrySelectionCommand";
  local_28 = 0x23;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_2,local_38,local_34,L"Disconnect Selection");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f4f750 FUN_148f4f750 body=571 status=ok
// SIG undefined FUN_148f4f750(void)

void FUN_148f4f750(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong *local_a0;
  char *local_98;
  undefined8 **local_90;
  longlong *local_88;
  char local_79;
  longlong local_78;
  code *local_70;
  undefined8 **local_68;
  undefined2 local_60;
  undefined1 uStack_5e;
  undefined5 uStack_5d;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_3 != (longlong *)0x0) {
    *param_3 = 0;
  }
  uVar8 = FUN_148f4f660(param_2 + 6);
  local_78 = param_2[8];
  if (*(int *)(local_78 + 0x10) != *(int *)(local_78 + 0x3c)) {
    local_79 = (**(code **)(*param_2 + 0x2a8))(param_2);
    local_98 = &local_79;
    local_90 = &local_88;
    local_88 = (longlong *)0x0;
    local_a0 = &local_78;
    local_68 = &local_a0;
    uStack_5e = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_60 = 0;
    local_70 = FUN_14436a036;
    FUN_1484b8434(uVar8,&local_70,&local_60,0);
    if ((local_79 == '\x01') && (local_88 != (longlong *)0x0)) {
      plVar9 = (longlong *)(**(code **)(*param_2 + 0x2b0))(param_2);
      (**(code **)(*param_1 + 0x2a0))(param_1,&local_60);
      (**(code **)(*plVar9 + 0x18))(plVar9,&local_60);
      plVar9 = (longlong *)CONCAT53(uStack_5d,CONCAT12(uStack_5e,local_60));
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x10))();
      }
      plVar9 = (longlong *)(**(code **)(*param_2 + 0x2b0))(param_2);
      (**(code **)(*param_1 + 0x2a0))(param_1,&local_60);
      uVar10 = FUN_14001cc68(0x50,0x10);
      local_a0 = local_88;
      local_88 = (longlong *)0x0;
      FUN_1484acd58(uVar10);
      local_a8 = uVar10;
      (**(code **)(*plVar9 + 0x28))(plVar9,uVar8,&local_a8,&local_60);
      plVar9 = (longlong *)CONCAT53(uStack_5d,CONCAT12(uStack_5e,local_60));
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x10))();
      }
      plVar9 = (longlong *)(**(code **)(*param_2 + 0x2b0))(param_2);
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
    if (param_3 != (longlong *)0x0) {
      lVar11 = FUN_148f4f98c(DAT_14c951640);
      lVar5 = param_2[6];
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x34);
      lVar6 = param_2[7];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x3c);
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x44);
      lVar7 = param_2[9];
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x4c);
      *(int *)(lVar11 + 0x38) = (int)param_2[8];
      *(undefined4 *)(lVar11 + 0x3c) = uVar3;
      *(int *)(lVar11 + 0x40) = (int)lVar7;
      *(undefined4 *)(lVar11 + 0x44) = uVar4;
      *(int *)(lVar11 + 0x28) = (int)lVar5;
      *(undefined4 *)(lVar11 + 0x2c) = uVar1;
      *(int *)(lVar11 + 0x30) = (int)lVar6;
      *(undefined4 *)(lVar11 + 0x34) = uVar2;
      *(undefined8 *)(lVar11 + 0x48) = **(undefined8 **)(lVar11 + 0x38);
      FUN_147371fc4(lVar11 + 0x50,*(undefined8 **)(lVar11 + 0x38) + 1);
      *param_3 = lVar11;
    }
    plVar9 = local_88;
    if (local_88 != (longlong *)0x0) {
      FUN_146c2a142(local_88);
      FUN_1400020a8(plVar9);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f4f98c FUN_148f4f98c body=148 status=ok
// SIG undefined FUN_148f4f98c(void)

undefined8 FUN_148f4f98c(undefined8 param_1)

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
  uVar1 = FUN_145b74ec2();
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



// FUNCTION 148f4fa3a FUN_148f4fa3a body=633 status=ok
// SIG undefined FUN_148f4fa3a(void)

undefined8 FUN_148f4fa3a(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = (**(code **)(*param_1 + 0x2d8))();
  if (iVar1 < 0xb) {
    if (iVar1 == 1) {
      local_30 = L"ShortString_ExpandToConnected";
      local_28 = 0x1d;
      FUN_1446e940c(local_34,&local_30);
      local_30 = L"UModifyGeometrySelectionCommand";
      local_28 = 0x1f;
      FUN_1446e940c(local_38,&local_30);
      pwVar2 = L"Expand To Connected";
      goto LAB_148f4fc84;
    }
    if (iVar1 == 10) {
      local_30 = L"ShortString_Invert";
      local_28 = 0x12;
      FUN_1446e940c(local_34,&local_30);
      local_30 = L"UModifyGeometrySelectionCommand";
      local_28 = 0x1f;
      FUN_1446e940c(local_38,&local_30);
      pwVar2 = L"Invert Selection";
      goto LAB_148f4fc84;
    }
  }
  else {
    if (iVar1 == 0xb) {
      local_30 = L"ShortString_InvertConnected";
      local_28 = 0x1b;
      FUN_1446e940c(local_34,&local_30);
      local_30 = L"UModifyGeometrySelectionCommand";
      local_28 = 0x1f;
      FUN_1446e940c(local_38,&local_30);
      pwVar2 = L"Invert Selection (Connected)";
      goto LAB_148f4fc84;
    }
    if (iVar1 == 0x14) {
      local_30 = L"ShortString_Expand";
      local_28 = 0x12;
      FUN_1446e940c(local_34,&local_30);
      local_30 = L"UModifyGeometrySelectionCommand";
      local_28 = 0x1f;
      FUN_1446e940c(local_38,&local_30);
      pwVar2 = L"Expand/Grow Selection";
      goto LAB_148f4fc84;
    }
    if (iVar1 == 0x15) {
      local_30 = L"ShortString_Contract";
      local_28 = 0x14;
      FUN_1446e940c(local_34,&local_30);
      local_30 = L"UModifyGeometrySelectionCommand";
      local_28 = 0x1f;
      FUN_1446e940c(local_38,&local_30);
      pwVar2 = L"Contract/Shrink Selection";
      goto LAB_148f4fc84;
    }
  }
  local_30 = L"ShortString_SelectAll";
  local_28 = 0x15;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"UModifyGeometrySelectionCommand";
  local_28 = 0x1f;
  FUN_1446e940c(local_38,&local_30);
  pwVar2 = L"Select All";
LAB_148f4fc84:
  FUN_140208bae(param_2,local_38,local_34,pwVar2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f4fcc8 FUN_148f4fcc8 body=152 status=ok
// SIG undefined FUN_148f4fcc8(void)

undefined8 FUN_148f4fcc8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"ShortString";
  local_28 = 0xb;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"URetriangulateGeometrySelectionCommand";
  local_28 = 0x26;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_2,local_38,local_34,L"Retriangulate Selection");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f4fdc4 FUN_148f4fdc4 body=1280 status=ok
// SIG undefined FUN_148f4fdc4(void)

void FUN_148f4fdc4(longlong *param_1)

{
  longlong *plVar1;
  wchar_t *pwVar2;
  undefined1 auStack_278 [40];
  undefined1 local_250 [4];
  undefined1 local_24c [4];
  wchar_t *local_248;
  undefined4 local_240;
  undefined1 *local_238;
  undefined8 local_228;
  undefined **local_218;
  longlong *local_210;
  undefined1 *local_1f8;
  undefined8 local_1e8;
  undefined **local_1d8;
  longlong *local_1d0;
  undefined1 *local_1b8;
  undefined8 local_1a8;
  undefined **local_198;
  longlong *local_190;
  code *local_178;
  undefined8 local_168;
  undefined **local_158;
  longlong *local_150;
  undefined1 *local_138;
  undefined8 local_128;
  undefined **local_118;
  longlong *local_110;
  undefined1 *local_f8;
  undefined8 local_e8;
  undefined **local_d8;
  longlong *local_d0;
  undefined1 *local_b8;
  undefined8 local_a8;
  undefined **local_98;
  longlong *local_90;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  longlong *local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_278;
  if ((char)param_1[0x2b] == '\x01') {
    plVar1 = (longlong *)FUN_148f502c5(param_1);
    if ((plVar1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(plVar1);
    }
    param_1[0x22] = (longlong)plVar1;
    FUN_140056680(&local_248,&DAT_149dfb77a);
    (**(code **)(*plVar1 + 0x2a8))(plVar1,param_1,&local_248);
    if (local_248 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    (**(code **)(*param_1 + 0x308))(param_1,param_1[0x22]);
    local_68 = 0;
    local_58 = &PTR_LAB_14ba261a0;
    local_78 = FUN_14436b120;
    local_50 = param_1;
    FUN_148f5035a(param_1[0x22] + 0x28,param_1[0x22] + 0xa8);
    local_a8 = 0;
    local_98 = &PTR_LAB_14ba261c0;
    local_b8 = &LAB_14436b18a;
    local_90 = param_1;
    FUN_1484c9b00(param_1[0x22] + 0x28,param_1[0x22] + 0xb0);
    local_e8 = 0;
    local_d8 = &PTR_LAB_14ba26240;
    local_f8 = &LAB_14436b1da;
    local_d0 = param_1;
    FUN_148f50430(param_1[0x22] + 0x28,param_1[0x22] + 0xb8);
    local_128 = 0;
    local_118 = &PTR_LAB_14ba26260;
    local_138 = &LAB_14436b22a;
    local_110 = param_1;
    FUN_1484de26e(param_1[0x22] + 0x28,param_1[0x22] + 0xb4);
    local_248 = L"TrimMeshesToolName";
    local_240 = 0x12;
    FUN_1446e940c(local_24c,&local_248);
    local_248 = L"UCSGMeshesTool";
    local_240 = 0xe;
    FUN_1446e940c(local_250,&local_248);
    FUN_140208bae(&local_248,local_250,local_24c,L"Trim");
    (**(code **)(*param_1 + 0x370))(param_1,&local_248);
    if (local_248 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_248 + 0x10))();
    }
    plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_248 = L"OnStartTrimTool";
    local_240 = 0xf;
    FUN_1446e940c(local_24c,&local_248);
    local_248 = L"UCSGMeshesTool";
    local_240 = 0xe;
    FUN_1446e940c(local_250,&local_248);
    pwVar2 = 
    L"Trim one mesh with another. Use the transform gizmos to tweak the positions of the input objects (can help to resolve errors/failures)"
    ;
  }
  else {
    plVar1 = (longlong *)FUN_148f50508(param_1);
    if ((plVar1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(plVar1);
    }
    param_1[0x21] = (longlong)plVar1;
    FUN_140056680(&local_248,&DAT_149dfb77a);
    (**(code **)(*plVar1 + 0x2a8))(plVar1,param_1,&local_248);
    if (local_248 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    (**(code **)(*param_1 + 0x308))(param_1,param_1[0x21]);
    local_168 = 0;
    local_158 = &PTR_LAB_14ba262e0;
    local_178 = FUN_14436b27a;
    local_150 = param_1;
    FUN_148f5059e(param_1[0x21] + 0x28,param_1[0x21] + 0xa8);
    local_1a8 = 0;
    local_198 = &PTR_LAB_14ba26300;
    local_1b8 = &LAB_14436b2e4;
    local_190 = param_1;
    FUN_1484c9b00(param_1[0x21] + 0x28,param_1[0x21] + 0xb1);
    local_1e8 = 0;
    local_1d8 = &PTR_LAB_14ba26320;
    local_1f8 = &LAB_14436b334;
    local_1d0 = param_1;
    FUN_148f50430(param_1[0x21] + 0x28,param_1[0x21] + 0xb8);
    local_228 = 0;
    local_218 = &PTR_LAB_14ba26340;
    local_238 = &LAB_14436b384;
    local_210 = param_1;
    FUN_1484de26e(param_1[0x21] + 0x28,param_1[0x21] + 0xb4);
    local_248 = L"CSGMeshesToolName";
    local_240 = 0x11;
    FUN_1446e940c(local_24c,&local_248);
    local_248 = L"UCSGMeshesTool";
    local_240 = 0xe;
    FUN_1446e940c(local_250,&local_248);
    FUN_140208bae(&local_248,local_250,local_24c,L"Mesh Boolean");
    (**(code **)(*param_1 + 0x370))(param_1,&local_248);
    if (local_248 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_248 + 0x10))();
    }
    plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_248 = L"OnStartTool";
    local_240 = 0xb;
    FUN_1446e940c(local_24c,&local_248);
    local_248 = L"UCSGMeshesTool";
    local_240 = 0xe;
    FUN_1446e940c(local_250,&local_248);
    pwVar2 = 
    L"Perform Boolean operations on the input meshes; any interior faces will be removed. Use the transform gizmos to modify the position and orientation of the input objects."
    ;
  }
  FUN_140208bae(&local_248,local_250,local_24c,pwVar2);
  (**(code **)(*plVar1 + 0x340))(plVar1,&local_248,2);
  if (local_248 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_248 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f502c5 FUN_148f502c5 body=148 status=ok
// SIG undefined FUN_148f502c5(void)

undefined8 FUN_148f502c5(undefined8 param_1)

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
  uVar1 = FUN_1459f40ce();
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



// FUNCTION 148f5035a FUN_148f5035a body=212 status=ok
// SIG undefined FUN_148f5035a(void)

void FUN_148f5035a(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_14001cc68(0xd0,0x10);
  local_68[0] = *param_3;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,local_58);
  }
  FUN_148f7642a(uVar2,param_2,local_68);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14588c84a(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f50430 FUN_148f50430 body=215 status=ok
// SIG undefined FUN_148f50430(void)

int FUN_148f50430(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_14001cc68(0xe0,0x10);
  local_68[0] = *param_3;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,local_58);
  }
  FUN_148f76748(uVar2,param_2,local_68);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14588c84a(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f50508 FUN_148f50508 body=148 status=ok
// SIG undefined FUN_148f50508(void)

undefined8 FUN_148f50508(undefined8 param_1)

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
  uVar1 = FUN_1459f3fe2();
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



// FUNCTION 148f5059e FUN_148f5059e body=212 status=ok
// SIG undefined FUN_148f5059e(void)

void FUN_148f5059e(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_14001cc68(0xd0,0x10);
  local_68[0] = *param_3;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,local_58);
  }
  FUN_148f76aea(uVar2,param_2,local_68);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14588c84a(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f50674 FUN_148f50674 body=282 status=ok
// SIG undefined FUN_148f50674(void)

void FUN_148f50674(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = param_1[0x27];
  if (lVar4 == 0) {
    uVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
    lVar4 = FUN_148557fff(uVar3,&DAT_149e1e308,0x3e4ccccd);
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar4);
    }
    param_1[0x27] = lVar4;
  }
  lVar2 = param_1[(ulonglong)*(byte *)(param_1 + 0x2b) + 0x21];
  local_58 = *(undefined4 *)(lVar2 + 0xb8);
  uStack_54 = *(undefined4 *)(lVar2 + 0xbc);
  uStack_50 = *(undefined4 *)(lVar2 + 0xc0);
  uStack_4c = *(undefined4 *)(lVar2 + 0xc4);
  uVar1 = *(undefined4 *)(lVar2 + 0xb4);
  FUN_1446f470e(&local_60,L"Color",1);
  FUN_144a9d3f0(lVar4,local_60,&local_58);
  lVar4 = param_1[0x27];
  FUN_1446f470e(&local_68,L"Opacity",1);
  FUN_14472da24(lVar4,local_68,uVar1);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f50790 FUN_148f50790 body=162 status=ok
// SIG undefined FUN_148f50790(void)

void FUN_148f50790(longlong param_1)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (*(char *)(param_1 + 0x158) == '\x01') {
    uVar2 = 0xffffffff;
    if ((*(char *)(*(longlong *)(param_1 + 0x110) + 0xb0) != '\x01') ||
       (uVar2 = 0, *(char *)(*(longlong *)(param_1 + 0x110) + 0xa8) != '\0')) goto LAB_148f507f8;
  }
  else {
    uVar2 = 0xffffffff;
    if (*(char *)(*(longlong *)(param_1 + 0x108) + 0xb1) != '\x01') goto LAB_148f507f8;
    cVar1 = *(char *)(*(longlong *)(param_1 + 0x108) + 0xa8);
    if (cVar1 != '\0') {
      uVar2 = -(uint)(cVar1 != '\x01');
      goto LAB_148f507f8;
    }
  }
  uVar2 = *(int *)(param_1 + 0x130) - 1;
LAB_148f507f8:
  if (0 < *(int *)(param_1 + 0x130)) {
    uVar3 = 0;
    do {
      FUN_14851bab8(*(undefined8 *)(*(longlong *)(param_1 + 0x128) + uVar3 * 8),uVar2 == uVar3);
      uVar3 = uVar3 + 1;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x130));
  }
  return;
}



// FUNCTION 148f50832 FUN_148f50832 body=91 status=ok
// SIG undefined FUN_148f50832(void)

ulonglong FUN_148f50832(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_1484c5f8e();
  if ((int)uVar2 == -1) {
    if (*(char *)(param_1 + 0x158) == '\x01') {
      uVar2 = (ulonglong)(*(char *)(*(longlong *)(param_1 + 0x110) + 0xa8) != '\0');
    }
    else {
      cVar1 = *(char *)(*(longlong *)(param_1 + 0x108) + 0xa8);
      if (cVar1 == '\0') {
        uVar2 = 0;
      }
      else {
        uVar2 = (ulonglong)((uint)(cVar1 == '\x01') * 2 - 1);
      }
    }
  }
  return uVar2;
}



// FUNCTION 148f5088e FUN_148f5088e body=131 status=ok
// SIG undefined FUN_148f5088e(void)

void FUN_148f5088e(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x158) == '\x01') {
    plVar1 = *(longlong **)(param_1 + 0x110);
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x108);
  }
  FUN_140056680(local_30,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f50912 FUN_148f50912 body=2207 status=ok
// SIG undefined FUN_148f50912(void)

void FUN_148f50912(longlong *param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong *puVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong lVar21;
  longlong lVar22;
  undefined1 auStack_358 [32];
  undefined1 local_338;
  char local_329;
  longlong *local_328;
  longlong *local_320;
  void *local_318;
  int local_310;
  undefined4 local_30c;
  int local_304;
  ulonglong local_300;
  ulonglong *local_2f8;
  int local_2f0;
  longlong *local_2e8;
  ulonglong uStack_2e0;
  ulonglong *local_2d8;
  undefined8 uStack_2d0;
  undefined1 local_2bc [4];
  ulonglong *local_2b8;
  int *local_2b0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_358;
  local_320 = param_1 + 0x23;
  local_329 = param_2;
  FUN_1484ca2a6(local_320,(int)param_1[0x15],1);
  local_2d8 = (ulonglong *)0x0;
  uStack_2d0 = (int *)0x0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  local_2e8 = (longlong *)0x0;
  uStack_2e0 = 0;
  FUN_140bfc200(&local_2e8,(int)param_1[0x15],1);
  if (((char)param_1[0x2b] == '\0') && (*(char *)(param_1[0x21] + 200) != '\0')) {
    FUN_148506417(&local_2b8,*(undefined8 *)param_1[0x14],0);
    if (local_2d8 != (ulonglong *)0x0) {
      FUN_1400020a8();
    }
    local_2d8 = local_2b8;
    uStack_2d0 = local_2b0;
    if (0 < (int)local_2b0) {
      iVar15 = 0;
      do {
        plVar9 = local_2e8;
        iVar5 = (int)local_2e8[1];
        *(uint *)(local_2e8 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)local_2e8 + 0xc) < iVar5 + 1U) {
          FUN_1446f48e2(local_2e8,iVar5);
        }
        *(int *)(*plVar9 + (longlong)iVar5 * 4) = iVar15;
        iVar15 = iVar15 + 1;
      } while (iVar15 < (int)uStack_2d0);
    }
    if (1 < (int)param_1[0x15]) {
      lVar22 = 1;
      lVar19 = 0x10;
      do {
        lVar21 = (longlong)local_2e8 + lVar19;
        lVar11 = *(longlong *)(param_1[0x14] + lVar22 * 8);
        if (lVar11 == 0) {
          plVar9 = (longlong *)0x0;
        }
        else {
          uVar8 = FUN_145b7126e();
          plVar9 = (longlong *)FUN_144718840(lVar11,uVar8);
        }
        uVar7 = (**(code **)(*plVar9 + 0x10))();
        local_2b8 = (ulonglong *)((ulonglong)local_2b8 & 0xffffffff00000000);
        FUN_1448156a8(lVar21,&local_2b8,uVar7);
        lVar22 = lVar22 + 1;
        lVar19 = lVar19 + 0x10;
      } while (lVar22 < (int)param_1[0x15]);
    }
  }
  else if (0 < (int)param_1[0x15]) {
    lVar19 = 0;
    do {
      FUN_148506417(&local_2f8,*(undefined8 *)(param_1[0x14] + lVar19 * 8),0);
      if ((longlong)local_2f0 != 0) {
        puVar3 = local_2f8 + local_2f0;
        puVar13 = local_2f8;
        do {
          piVar2 = uStack_2d0;
          local_300 = *puVar13;
          if ((int)uStack_90 != local_64) {
            uVar12 = ((uint)(local_300 >> 0x14) & 0xffff ^ (uint)(local_300 >> 4)) * -0x7a143595;
            uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
            puVar10 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              puVar10 = local_60;
            }
            iVar15 = *(int *)(puVar10 + (ulonglong)(local_50 - 1U & (uVar12 >> 0x10 ^ uVar12)) * 4);
            while (iVar15 != -1) {
              puVar4 = (ulonglong *)(local_98 + (longlong)iVar15 * 0x18);
              if (*puVar4 == local_300) {
                if ((puVar4 != (ulonglong *)0x0) && (puVar4 + 1 != (ulonglong *)0x0)) {
                  local_304 = (int)puVar4[1];
                  goto LAB_148f50c55;
                }
                break;
              }
              iVar15 = (int)puVar4[2];
            }
          }
          iVar15 = (int)uStack_2d0;
          uVar12 = (int)uStack_2d0 + 1;
          uStack_2d0 = (int *)CONCAT44(uStack_2d0._4_4_,uVar12);
          if (uStack_2d0._4_4_ < uVar12) {
            FUN_144769b64(&local_2d8,(ulonglong)piVar2 & 0xffffffff);
          }
          local_2d8[iVar15] = local_300;
          local_304 = iVar15;
          local_2b8 = &local_300;
          local_2b0 = &local_304;
          FUN_1474bddaa(&local_98,local_2bc,&local_2b8,0);
LAB_148f50c55:
          plVar9 = local_2e8 + lVar19 * 2;
          iVar15 = (int)local_2e8[lVar19 * 2 + 1];
          *(uint *)(local_2e8 + lVar19 * 2 + 1) = iVar15 + 1U;
          if (*(uint *)((longlong)local_2e8 + lVar19 * 0x10 + 0xc) < iVar15 + 1U) {
            FUN_1446f48e2(plVar9,iVar15);
          }
          *(int *)(*plVar9 + (longlong)iVar15 * 4) = local_304;
          puVar13 = puVar13 + 1;
        } while (puVar13 != puVar3);
      }
      if (local_2f8 != (ulonglong *)0x0) {
        FUN_1400020a8(local_2f8);
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 < (int)param_1[0x15]);
  }
  FUN_148f50674(param_1);
  if (0 < (int)param_1[0x15]) {
    local_328 = param_1 + 0x25;
    lVar19 = 0;
    cVar14 = local_329;
    do {
      plVar9 = (longlong *)FUN_14001cc68(0x230,0x10);
      plVar9[1] = (longlong)&DAT_100000001;
      *plVar9 = (longlong)&PTR_FUN_149fab260;
      local_338 = 0;
      FUN_1411b354a(plVar9 + 2,0,0,0);
      if (plVar9 == (longlong *)0x0) {
        lVar22 = *local_320;
        lVar11 = lVar19 * 0x10;
        *(undefined8 *)(lVar22 + lVar11) = 0x10;
        plVar20 = *(longlong **)(lVar22 + 8 + lVar11);
        if (plVar20 != (longlong *)0x0) {
          *(undefined8 *)(lVar22 + lVar11 + 8) = 0;
LAB_148f50d6f:
          LOCK();
          plVar1 = plVar20 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar20)(plVar20);
            LOCK();
            piVar2 = (int *)((longlong)plVar20 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar20 + 0x10))(plVar20);
            }
          }
          if (plVar9 != (longlong *)0x0) goto LAB_148f50d95;
        }
      }
      else {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        lVar22 = *local_320;
        lVar11 = lVar19 * 0x10;
        *(longlong **)(lVar22 + lVar11) = plVar9 + 2;
        plVar20 = *(longlong **)(lVar22 + 8 + lVar11);
        if (plVar9 == plVar20) {
          LOCK();
          plVar20 = plVar9 + 1;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)*plVar20 == 0) {
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
        else {
          *(longlong **)(lVar22 + lVar11 + 8) = plVar9;
          if (plVar20 != (longlong *)0x0) goto LAB_148f50d6f;
        }
LAB_148f50d95:
        LOCK();
        plVar20 = plVar9 + 1;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)*plVar20 == 0) {
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
      local_2f0 = 0;
      local_2f8 = (ulonglong *)0x3e800000000;
      FUN_148506727(&local_2b8,*(undefined8 *)(param_1[0x14] + lVar19 * 8));
      lVar21 = lVar19 * 0x10;
      FUN_146c00942(*(undefined8 *)(param_1[0x23] + lVar21),&local_2b8);
      FUN_141082778(&local_2b8);
      FUN_14582ed12(*(undefined8 *)(param_1[0x23] + lVar21));
      FUN_14582ed9a(*(undefined8 *)(*(longlong *)(param_1[0x23] + lVar21) + 0x208));
      lVar22 = *(longlong *)(param_1[0x23] + lVar21);
      lVar11 = *(longlong *)(*(longlong *)(lVar22 + 0x208) + 0x48);
      uVar12 = *(int *)(lVar22 + 0x140) * 0x200 + *(int *)(lVar22 + 0x144);
      uVar17 = 0;
      if ((uVar12 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar22 + 0x148) - 1U))) {
        uVar17 = 1;
        uVar16 = 1;
        if (1 < (int)uVar12) {
          uVar17 = (ulonglong)uVar12;
        }
        do {
          uVar18 = uVar16;
          if ((uint)uVar17 == uVar18) goto LAB_148f50f31;
          uVar16 = uVar18 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar22 + 0x148))[uVar18 >> 9] +
                                             (ulonglong)(uVar18 & 0x1ff) * 2) - 1U));
        uVar17 = (ulonglong)uVar18;
      }
LAB_148f50f31:
      uVar16 = (uint)uVar17;
      if (uVar16 != uVar12) {
        lVar6 = *(longlong *)(*(longlong *)(lVar11 + 0x20) + (uVar17 >> 9) * 8);
        *(undefined4 *)(lVar6 + (ulonglong)(uVar16 & 0x1ff) * 4) =
             *(undefined4 *)
              (local_2e8[lVar19 * 2] +
              (longlong)*(int *)(lVar6 + (ulonglong)(uVar16 & 0x1ff) * 4) * 4);
        uVar18 = uVar16 + 1;
        if ((int)(uVar16 + 1) < (int)uVar12) {
          uVar18 = uVar12;
        }
        do {
          iVar15 = (int)uVar17;
          uVar17 = (ulonglong)uVar18;
          if (uVar18 - 1 == iVar15) break;
          uVar16 = iVar15 + 1;
          uVar17 = (ulonglong)uVar16;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar22 + 0x148) +
                                               (ulonglong)(uVar16 >> 9) * 8) +
                                             (ulonglong)(uVar16 & 0x1ff) * 2) - 1U));
        goto LAB_148f50f31;
      }
      if (cVar14 != '\0') {
        lVar22 = FUN_1484e47e5(DAT_14c951640);
        if ((lVar22 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_14689c22e(lVar22);
        }
        iVar15 = (int)param_1[0x26];
        *(uint *)(param_1 + 0x26) = iVar15 + 1U;
        if (*(uint *)((longlong)param_1 + 0x134) < iVar15 + 1U) {
          FUN_148f76e08(local_328,iVar15);
        }
        lVar11 = *local_328;
        *(longlong *)(lVar11 + (longlong)iVar15 * 8) = lVar22;
        if ((lVar22 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_14689c22e(lVar22);
          lVar22 = *(longlong *)(lVar11 + (longlong)iVar15 * 8);
        }
        FUN_1485063a5(&local_2b8,*(undefined8 *)(param_1[0x14] + lVar19 * 8));
        uVar8 = (**(code **)(*param_1 + 0x390))(param_1);
        FUN_14851b11a(lVar22,uVar8,&local_2b8);
        FUN_14851bbe8(lVar22,*(undefined8 *)(param_1[0x23] + lVar21),1);
        FUN_14851b37c(lVar22,0,param_1[0x27]);
        FUN_14851bab8(lVar22,0);
        plVar9 = *(longlong **)(param_1[0x1d] + lVar19 * 8);
        (**(code **)(*plVar9 + 0x2a0))(plVar9,*(undefined8 *)(lVar22 + 0x50));
        cVar14 = local_329;
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 < (int)param_1[0x15]);
  }
  lVar19 = param_1[0x1c];
  uVar8 = (**(code **)(*param_1 + 0x2c8))(param_1);
  uVar8 = FUN_1485578f6(uVar8);
  puVar3 = local_2d8;
  local_318 = (void *)0x0;
  lVar22 = (longlong)(int)uStack_2d0;
  local_310 = (int)uStack_2d0;
  if (lVar22 == 0) {
    local_30c = 0;
  }
  else {
    FUN_1411312f2(&local_318,(ulonglong)uStack_2d0 & 0xffffffff,0);
    memcpy(local_318,puVar3,lVar22 << 3);
  }
  FUN_1485053d2(lVar19,&local_318,uVar8,0);
  FUN_144716727(local_2e8,uStack_2e0 & 0xffffffff);
  if (local_2e8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_145cd3170(&local_98);
  if (local_2d8 != (ulonglong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_358) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f511b2 FUN_148f511b2 body=419 status=ok
// SIG undefined FUN_148f511b2(void)

void FUN_148f511b2(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = FUN_1484e2e03(*(undefined8 *)(*(longlong *)(param_1[0x1c] + 0x58) + 0x50));
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar2);
  }
  param_1[0x28] = lVar2;
  FUN_140486fc4(lVar2,*(undefined8 *)(*(longlong *)(param_1[0x1c] + 0x58) + 0x50),0);
  lVar2 = param_1[0x28];
  uVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
  uVar3 = FUN_1485583eb(uVar3,1);
  FUN_1484d0608(lVar2,uVar3);
  FUN_140b506a4(param_1[0x28]);
  lVar2 = param_1[0x1c];
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  puVar1 = local_48;
  local_40 = 2;
  *local_48 = &PTR_LAB_14ba263d0;
  uVar3 = FUN_144a3f946();
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14ba26360;
  puVar1[3] = param_1;
  FUN_148f76e8e(lVar2 + 0x40,local_50,&local_48);
  FUN_1449db362(&local_48);
  lVar2 = param_1[0x1c];
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  puVar1 = local_48;
  local_40 = 2;
  *local_48 = &PTR_LAB_14aefe820;
  uVar3 = FUN_144a3f946();
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14ba26440;
  puVar1[3] = param_1;
  FUN_1484d607c(lVar2 + 0x28,local_50,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f51356 FUN_148f51356 body=391 status=ok
// SIG undefined FUN_148f51356(void)

void FUN_148f51356(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar6 = FUN_14851bd54(*(undefined8 *)(*(longlong *)(param_1 + 0xe0) + 0x58));
  FUN_1484d04e2(*(undefined8 *)(param_1 + 0x140));
  if (((*(char *)(param_1 + 0x158) == '\0') &&
      (*(char *)(*(longlong *)(param_1 + 0x108) + 0xb0) == '\x01')) &&
     (iVar2 = *(int *)(param_1 + 0x150), (longlong)iVar2 != 0)) {
    lVar4 = *(longlong *)(param_1 + 0x148);
    lVar8 = 0;
    do {
      uVar3 = *(uint *)(lVar4 + lVar8);
      uVar7 = *(ulonglong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x1c0) + (ulonglong)(uVar3 >> 9) * 8) +
               (ulonglong)((uVar3 & 0x1ff) << 4));
      lVar5 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + (uVar7 >> 9 & 0x7fffff) * 8);
      local_b8 = *(undefined8 *)(lVar5 + 0x10 + (uVar7 & 0x1ff) * 0x18);
      puVar1 = (undefined4 *)(lVar5 + (uVar7 & 0x1ff) * 0x18);
      local_c8 = *puVar1;
      uStack_c4 = puVar1[1];
      uStack_c0 = puVar1[2];
      uStack_bc = puVar1[3];
      lVar5 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + (uVar7 >> 0x29) * 8);
      uVar7 = uVar7 >> 0x20 & 0x1ff;
      local_98 = *(undefined8 *)(lVar5 + 0x10 + uVar7 * 0x18);
      puVar1 = (undefined4 *)(lVar5 + uVar7 * 0x18);
      local_a8 = *puVar1;
      uStack_a4 = puVar1[1];
      uStack_a0 = puVar1[2];
      uStack_9c = puVar1[3];
      local_58 = 0xfff00f0f;
      local_54 = 0x4000000040000000;
      local_88 = local_c8;
      uStack_84 = uStack_c4;
      uStack_80 = uStack_c0;
      uStack_7c = uStack_bc;
      local_78 = local_b8;
      local_70 = local_a8;
      uStack_6c = uStack_a4;
      uStack_68 = uStack_a0;
      uStack_64 = uStack_9c;
      local_60 = local_98;
      FUN_1484d0812(*(undefined8 *)(param_1 + 0x140),&local_88);
      lVar8 = lVar8 + 4;
    } while ((longlong)iVar2 * 4 != lVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f514de FUN_148f514de body=680 status=ok
// SIG undefined FUN_148f514de(void)

void FUN_148f514de(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 uVar11;
  undefined8 *_Dst;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  longlong *plVar15;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0 = param_2;
  _Dst = (undefined8 *)FUN_14001cc68(0xd8);
  memset(_Dst,0,0xd8);
  FUN_14845abbc(_Dst);
  *_Dst = &PTR_FUN_14ba264b0;
  plVar2 = _Dst + 0x12;
  _Dst[0x12] = 0;
  _Dst[0x13] = 0;
  _Dst[0x14] = 0;
  _Dst[0x15] = 0;
  *(undefined1 *)(_Dst + 0x16) = 0;
  _Dst[0x17] = 0x3fe0000000000000;
  *(undefined1 *)(_Dst + 0x18) = 0;
  *(undefined4 *)((longlong)_Dst + 0xc4) = 0x3c23d70a;
  _Dst[0x19] = 0;
  _Dst[0x1a] = 0;
  cVar6 = *(char *)(param_1 + 0xa0);
  *(char *)((longlong)_Dst + 0x8b) = cVar6;
  if (cVar6 == '\x01') {
    lVar13 = *(longlong *)(param_1 + 0x58);
    _Dst[0x17] = (double)*(float *)(lVar13 + 0xac);
    *(undefined1 *)((longlong)_Dst + 0x89) = *(undefined1 *)(lVar13 + 0xa8);
    *(undefined1 *)((longlong)_Dst + 0x8a) = *(undefined1 *)(lVar13 + 0xa9);
    *(undefined1 *)(_Dst + 0x16) = 0;
    uVar11 = 0;
  }
  else {
    lVar13 = *(longlong *)(param_1 + 0x50);
    _Dst[0x17] = (double)*(float *)(lVar13 + 0xac);
    *(undefined1 *)(_Dst + 0x11) = *(undefined1 *)(lVar13 + 0xa8);
    *(undefined1 *)(_Dst + 0x16) = *(undefined1 *)(lVar13 + 0xa9);
    uVar11 = *(undefined1 *)(lVar13 + 0xaa);
  }
  *(undefined1 *)(_Dst + 0x18) = uVar11;
  local_b8 = _Dst;
  FUN_148f51788(_Dst + 0x14,2,1);
  FUN_148f517fe(plVar2,2,1);
  lVar13 = 0;
  bVar14 = true;
  do {
    lVar12 = lVar13 * 0x10;
    uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x60) + lVar12);
    plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 8 + lVar12);
    if (plVar8 == (longlong *)0x0) {
      lVar9 = *plVar2;
      *(undefined8 *)(lVar9 + lVar12) = uVar7;
      plVar15 = *(longlong **)(lVar9 + 8 + lVar12);
      if (plVar15 != (longlong *)0x0) {
        *(undefined8 *)(lVar9 + lVar12 + 8) = 0;
LAB_148f5169c:
        LOCK();
        plVar8 = plVar15 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar5 = *piVar1;
          UNLOCK();
joined_r0x000148f516cb:
          if (iVar5 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      lVar9 = *plVar2;
      *(undefined8 *)(lVar9 + lVar12) = uVar7;
      plVar15 = *(longlong **)(lVar9 + 8 + lVar12);
      if (plVar8 == plVar15) {
        LOCK();
        plVar15 = plVar8 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar5 = *piVar1;
          UNLOCK();
          plVar15 = plVar8;
          goto joined_r0x000148f516cb;
        }
      }
      else {
        *(longlong **)(lVar9 + lVar12 + 8) = plVar8;
        if (plVar15 != (longlong *)0x0) goto LAB_148f5169c;
      }
    }
    plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x30) + lVar13 * 8);
    (**(code **)(*plVar8 + 0x2b0))(plVar8,&local_a8);
    lVar12 = _Dst[0x14];
    lVar13 = lVar13 * 0x50;
    puVar3 = (undefined4 *)(lVar12 + lVar13);
    *puVar3 = local_a8;
    puVar3[1] = uStack_a4;
    puVar3[2] = uStack_a0;
    puVar3[3] = uStack_9c;
    puVar3 = (undefined4 *)(lVar12 + 0x10 + lVar13);
    *puVar3 = local_98;
    puVar3[1] = uStack_94;
    puVar3[2] = uStack_90;
    puVar3[3] = uStack_8c;
    puVar3 = (undefined4 *)(lVar12 + 0x20 + lVar13);
    *puVar3 = local_88;
    puVar3[1] = uStack_84;
    puVar3[2] = uStack_80;
    puVar3[3] = uStack_7c;
    *(undefined8 *)(lVar12 + 0x30 + lVar13) = local_78;
    puVar4 = (undefined8 *)(lVar12 + 0x38 + lVar13);
    *puVar4 = local_68;
    puVar4[1] = uStack_60;
    *(undefined8 *)(lVar12 + 0x48 + lVar13) = local_58;
    lVar13 = 1;
    bVar10 = !bVar14;
    bVar14 = false;
    if (bVar10) {
      *local_b0 = local_b8;
      if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 148f51788 FUN_148f51788 body=116 status=ok
// SIG undefined FUN_148f51788(void)

void FUN_148f51788(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1485c29b8(param_1,iVar1);
    }
    FUN_148f77080((longlong)iVar1 * 0x50 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_148f770d6(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148f517fe FUN_148f517fe body=143 status=ok
// SIG undefined FUN_148f517fe(void)

void FUN_148f517fe(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148f7718c(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_148f77212(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_148f77272(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148f5188e FUN_148f5188e body=971 status=ok
// SIG undefined FUN_148f5188e(void)

void FUN_148f5188e(longlong *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  longlong local_50;
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_3 != 0) {
    lVar3 = *(longlong *)(param_3 + 0x20);
    FUN_1446f470e(&local_50,L"bUseFirstMeshMaterials",1);
    if (lVar3 == local_50) {
      cVar1 = (**(code **)(*param_1 + 0x378))(param_1);
      if (cVar1 == '\0') {
        plVar2 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
        local_48 = L"InvalidTargets";
        local_40 = 0xe;
        FUN_1446e940c(local_54,&local_48);
        local_48 = L"UCSGMeshesTool";
        local_40 = 0xe;
        FUN_1446e940c(local_58,&local_48);
        FUN_140208bae(&local_48,local_58,local_54,L"Target meshes are no longer valid");
        (**(code **)(*plVar2 + 0x340))(plVar2,&local_48,3);
        if (local_48 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_48 + 0x10))();
        }
      }
      else {
        (**(code **)(*param_1 + 0x398))(param_1,0);
        FUN_1485051e4(param_1[0x1c]);
      }
      goto LAB_148f51bf4;
    }
    lVar3 = *(longlong *)(param_3 + 0x20);
    FUN_1446f470e(&local_60,L"bShowNewBoundaries",1);
    if (lVar3 == local_60) {
      plVar2 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
      (**(code **)(*plVar2 + 0x348))(plVar2);
      FUN_148f51356(param_1);
      goto LAB_148f51bf4;
    }
    lVar3 = *(longlong *)(param_3 + 0x20);
    if ((char)param_1[0x2b] == '\x01') {
      FUN_1446f470e(&local_68,L"bShowTrimmingMesh",1);
      if (lVar3 == local_68) goto LAB_148f51bf4;
      lVar3 = *(longlong *)(param_3 + 0x20);
      FUN_1446f470e(&local_70,L"OpacityOfTrimmingMesh",1);
      if (lVar3 == local_70) goto LAB_148f51bf4;
      lVar3 = *(longlong *)(param_3 + 0x20);
      FUN_1446f470e(&local_78,L"ColorOfTrimmingMesh",1);
      if (lVar3 == local_78) goto LAB_148f51bf4;
      lVar3 = *(longlong *)(param_3 + 0x20);
      FUN_1446ddc76(&local_80,&DAT_149e512b0,1);
      if (lVar3 == local_80) goto LAB_148f51bf4;
      lVar3 = *(longlong *)(param_3 + 0x20);
      FUN_1446ddc76(&local_88,&DAT_149e51268,1);
      if (lVar3 == local_88) goto LAB_148f51bf4;
      lVar3 = *(longlong *)(param_3 + 0x20);
      FUN_1446ddc76(&local_90,&DAT_149e4b430,1);
      if (lVar3 == local_90) goto LAB_148f51bf4;
      lVar3 = *(longlong *)(param_3 + 0x20);
      plVar2 = &local_98;
    }
    else {
      FUN_1446f470e(&local_a0,L"bShowSubtractedMesh",1);
      if (lVar3 == local_a0) goto LAB_148f51bf4;
      lVar3 = *(longlong *)(param_3 + 0x20);
      FUN_1446f470e(&local_a8,L"SubtractedMeshColor",1);
      if (lVar3 == local_a8) goto LAB_148f51bf4;
      lVar3 = *(longlong *)(param_3 + 0x20);
      FUN_1446f470e(&local_b0,L"SubtractedMeshOpacity",1);
      if (lVar3 == local_b0) goto LAB_148f51bf4;
      lVar3 = *(longlong *)(param_3 + 0x20);
      FUN_1446ddc76(&local_b8,&DAT_149e512b0,1);
      if (lVar3 == local_b8) goto LAB_148f51bf4;
      lVar3 = *(longlong *)(param_3 + 0x20);
      FUN_1446ddc76(&local_c0,&DAT_149e51268,1);
      if (lVar3 == local_c0) goto LAB_148f51bf4;
      lVar3 = *(longlong *)(param_3 + 0x20);
      FUN_1446ddc76(&local_c8,&DAT_149e4b430,1);
      if (lVar3 == local_c8) goto LAB_148f51bf4;
      lVar3 = *(longlong *)(param_3 + 0x20);
      plVar2 = &local_d0;
    }
    FUN_1446ddc76(plVar2,&DAT_149e4b3f2,1);
    if (lVar3 == *plVar2) goto LAB_148f51bf4;
  }
  FUN_1484c7892(param_1,param_2,param_3);
LAB_148f51bf4:
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f51c5a FUN_148f51c5a body=50 status=ok
// SIG undefined FUN_148f51c5a(void)

undefined8 FUN_148f51c5a(longlong param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"Boolean";
  if (*(char *)(param_1 + 0x158) != '\0') {
    pwVar1 = L"Trim";
  }
  FUN_140056680(param_2,pwVar1);
  return param_2;
}



// FUNCTION 148f51c8c FUN_148f51c8c body=242 status=ok
// SIG undefined FUN_148f51c8c(void)

undefined8 FUN_148f51c8c(longlong param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x158) == '\x01') {
    local_38 = L"TrimActionName";
    local_30 = 0xe;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"UCSGMeshesTool";
    local_30 = 0xe;
    FUN_1446e940c(local_40,&local_38);
    pwVar1 = L"Trim Meshes";
  }
  else {
    local_38 = L"BooleanActionName";
    local_30 = 0x11;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"UCSGMeshesTool";
    local_30 = 0xe;
    FUN_1446e940c(local_40,&local_38);
    pwVar1 = L"Boolean Meshes";
  }
  FUN_140208bae(param_2,local_40,local_3c,pwVar1);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f51d80 FUN_148f51d80 body=84 status=ok
// SIG undefined FUN_148f51d80(void)

void FUN_148f51d80(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  FUN_1484c791c();
  iVar1 = *(int *)(param_1 + 0x130);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x128);
    lVar4 = 0;
    do {
      uVar3 = *(undefined8 *)(lVar2 + lVar4);
      FUN_14851bab8(uVar3,0);
      FUN_14851b2ea(uVar3);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 148f51e00 FUN_148f51e00 body=576 status=ok
// SIG undefined FUN_148f51e00(void)

void FUN_148f51e00(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)FUN_148f52041();
  if ((plVar1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar1);
  }
  param_1[0x21] = (longlong)plVar1;
  FUN_140056680(&local_40,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a8))(plVar1,param_1,&local_40);
  if (local_40 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x21]);
  local_40 = L"CutMeshWithMeshToolName";
  local_38 = 0x17;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"UCutMeshWithMeshTool";
  local_38 = 0x14;
  FUN_1446e940c(local_48,&local_40);
  FUN_140208bae(&local_40,local_48,local_44,L"Cut With Mesh");
  (**(code **)(*param_1 + 0x370))(param_1,&local_40);
  if (local_40 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_40 + 0x10))();
  }
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  local_40 = L"OnStartTool";
  local_38 = 0xb;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"UCutMeshWithMeshTool";
  local_38 = 0x14;
  FUN_1446e940c(local_48,&local_40);
  FUN_140208bae(&local_40,local_48,local_44,
                L"Cut the first input mesh with the second input mesh. Use the transform gizmos to modify the position and orientation of the input objects."
               );
  (**(code **)(*plVar1 + 0x340))(plVar1,&local_40,2);
  if (local_40 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_40 + 0x10))();
  }
  lVar2 = FUN_1484e47e5(param_1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar2);
  }
  param_1[0x22] = lVar2;
  uVar3 = (**(code **)(*param_1 + 0x390))(param_1);
  FUN_14851b11a(lVar2,uVar3,&DAT_14c846480);
  FUN_148558526(param_1[0x22],0);
  FUN_14851bab8(param_1[0x22],1);
  lVar2 = param_1[0x22];
  uVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
  uVar3 = FUN_148557a90(uVar3);
  FUN_14851b338(lVar2,uVar3);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f52041 FUN_148f52041 body=148 status=ok
// SIG undefined FUN_148f52041(void)

undefined8 FUN_148f52041(undefined8 param_1)

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
  uVar1 = FUN_1459f41ba();
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



// FUNCTION 148f520d6 FUN_148f520d6 body=125 status=ok
// SIG undefined FUN_148f520d6(void)

void FUN_148f520d6(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 0x108);
  FUN_140056680(local_30,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  FUN_14851b2ea(*(undefined8 *)(param_1 + 0x110));
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f52154 FUN_148f52154 body=2133 status=ok
// SIG undefined FUN_148f52154(void)

void FUN_148f52154(longlong *param_1)

{
  int *piVar1;
  wchar_t *pwVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  char cVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong *plVar21;
  ulonglong *puVar22;
  longlong lVar23;
  ulonglong *puVar24;
  undefined1 auStack_328 [32];
  undefined1 local_308;
  void *local_2f8;
  int local_2f0;
  undefined4 local_2ec;
  int local_2e4;
  ulonglong local_2e0;
  ulonglong *local_2d8;
  int local_2d0;
  longlong *local_2c8;
  ulonglong uStack_2c0;
  wchar_t *local_2b8;
  undefined8 uStack_2b0;
  ulonglong *local_2a0;
  int *local_298;
  undefined1 local_28c [4];
  wchar_t *local_288;
  ulonglong uStack_280;
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_25c;
  int local_254;
  undefined1 local_250 [8];
  undefined1 *local_248;
  int local_240;
  ulonglong local_60;
  ulonglong uVar16;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_328;
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x1a],0);
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x19],0);
  local_2b8 = (wchar_t *)0x0;
  uStack_2b0 = 0;
  local_2c8 = (longlong *)0x0;
  uStack_2c0 = 0;
  FUN_140bfc200(&local_2c8,(int)param_1[0x15],1);
  if (*(char *)(param_1[0x21] + 0xb1) == '\0') {
    local_268 = 0;
    local_260 = 0;
    local_288 = (wchar_t *)0x0;
    uStack_280 = 0;
    local_25c = 0xffffffff00000080;
    local_254 = 0;
    local_248 = (undefined1 *)0x0;
    local_240 = 0;
    if (0 < (int)param_1[0x15]) {
      lVar20 = 0;
      do {
        FUN_148506417(&local_2d8,*(undefined8 *)(param_1[0x14] + lVar20 * 8),0);
        if ((longlong)local_2d0 != 0) {
          puVar24 = local_2d8 + local_2d0;
          puVar22 = local_2d8;
          do {
            uVar16 = uStack_2b0;
            local_2e0 = *puVar22;
            if ((int)uStack_280 != local_254) {
              uVar12 = ((uint)(local_2e0 >> 0x14) & 0xffff ^ (uint)(local_2e0 >> 4)) * -0x7a143595;
              uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
              puVar13 = local_248;
              if (local_248 == (undefined1 *)0x0) {
                puVar13 = local_250;
              }
              iVar18 = *(int *)(puVar13 +
                               (ulonglong)(local_240 - 1U & (uVar12 >> 0x10 ^ uVar12)) * 4);
              while (iVar18 != -1) {
                pwVar2 = local_288 + (longlong)iVar18 * 0xc;
                if (*(ulonglong *)pwVar2 == local_2e0) {
                  if ((pwVar2 != (wchar_t *)0x0) && (pwVar2 + 4 != (wchar_t *)0x0)) {
                    local_2e4 = *(int *)(pwVar2 + 4);
                    goto LAB_148f5247d;
                  }
                  break;
                }
                iVar18 = *(int *)(pwVar2 + 8);
              }
            }
            iVar18 = (int)uStack_2b0;
            uVar12 = (int)uStack_2b0 + 1;
            uStack_2b0 = CONCAT44(uStack_2b0._4_4_,uVar12);
            if (uStack_2b0._4_4_ < uVar12) {
              FUN_144769b64(&local_2b8,uVar16 & 0xffffffff);
            }
            *(ulonglong *)(local_2b8 + (longlong)iVar18 * 4) = local_2e0;
            local_2e4 = iVar18;
            local_2a0 = &local_2e0;
            local_298 = &local_2e4;
            FUN_1474bddaa(&local_288,local_28c,&local_2a0,0);
LAB_148f5247d:
            plVar10 = local_2c8 + lVar20 * 2;
            iVar18 = (int)local_2c8[lVar20 * 2 + 1];
            *(uint *)(local_2c8 + lVar20 * 2 + 1) = iVar18 + 1U;
            if (*(uint *)((longlong)local_2c8 + lVar20 * 0x10 + 0xc) < iVar18 + 1U) {
              FUN_1446f48e2(plVar10,iVar18);
            }
            *(int *)(*plVar10 + (longlong)iVar18 * 4) = local_2e4;
            puVar22 = puVar22 + 1;
          } while (puVar22 != puVar24);
        }
        if (local_2d8 != (ulonglong *)0x0) {
          FUN_1400020a8(local_2d8);
        }
        lVar20 = lVar20 + 1;
      } while (lVar20 < (int)param_1[0x15]);
      local_240 = 0;
      if (local_248 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_145cd3170(&local_288);
    iVar18 = (int)param_1[0x15];
  }
  else {
    FUN_148506417(&local_288,*(undefined8 *)param_1[0x14],0);
    if (local_2b8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    local_2b8 = local_288;
    uStack_2b0 = uStack_280;
    if (0 < (int)uStack_280) {
      iVar18 = 0;
      do {
        plVar10 = local_2c8;
        iVar3 = (int)local_2c8[1];
        *(uint *)(local_2c8 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)local_2c8 + 0xc) < iVar3 + 1U) {
          FUN_1446f48e2(local_2c8,iVar3);
        }
        *(int *)(*plVar10 + (longlong)iVar3 * 4) = iVar18;
        iVar18 = iVar18 + 1;
      } while (iVar18 < (int)uStack_2b0);
    }
    iVar18 = (int)param_1[0x15];
    if (1 < iVar18) {
      lVar23 = 1;
      lVar20 = 0x10;
      do {
        lVar17 = (longlong)local_2c8 + lVar20;
        lVar4 = *(longlong *)(param_1[0x14] + lVar23 * 8);
        if (lVar4 == 0) {
          plVar10 = (longlong *)0x0;
        }
        else {
          uVar9 = FUN_145b7126e();
          plVar10 = (longlong *)FUN_144718840(lVar4,uVar9);
        }
        uVar8 = (**(code **)(*plVar10 + 0x10))();
        local_288 = (wchar_t *)((ulonglong)local_288 & 0xffffffff00000000);
        FUN_1448156a8(lVar17,&local_288,uVar8);
        lVar23 = lVar23 + 1;
        iVar18 = (int)param_1[0x15];
        lVar20 = lVar20 + 0x10;
      } while (lVar23 < iVar18);
    }
  }
  if (0 < iVar18) {
    lVar20 = 0;
    do {
      plVar11 = (longlong *)FUN_14001cc68(0x230,0x10);
      plVar11[1] = (longlong)&DAT_100000001;
      *plVar11 = (longlong)&PTR_FUN_149fab260;
      plVar10 = plVar11 + 2;
      local_308 = 0;
      FUN_1411b354a(plVar10,0,0,0);
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
        LOCK();
        plVar21 = plVar11 + 1;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)*plVar21 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      local_298 = (int *)((ulonglong)local_298 & 0xffffffff00000000);
      local_2a0 = (ulonglong *)0x3e800000000;
      FUN_148506727(&local_288,*(undefined8 *)(param_1[0x14] + lVar20 * 8));
      FUN_146c00942(plVar10);
      FUN_141082778(&local_288);
      FUN_14582ed12(plVar10);
      FUN_14582ed9a(plVar11[0x43]);
      lVar23 = *(longlong *)(plVar11[0x43] + 0x48);
      uVar12 = (int)plVar11[0x2a] * 0x200 + *(int *)((longlong)plVar11 + 0x154);
      uVar16 = 0;
      if ((uVar12 != 0) && (0xfffd < (ushort)(**(short **)plVar11[0x2b] - 1U))) {
        uVar15 = 1;
        uVar19 = 1;
        if (1 < (int)uVar12) {
          uVar15 = (ulonglong)uVar12;
        }
        do {
          uVar14 = (uint)uVar19;
          uVar16 = uVar15;
          if ((uint)uVar15 == uVar14) break;
          uVar5 = uVar19 >> 9;
          uVar16 = uVar19;
          uVar19 = (ulonglong)(uVar14 + 1);
        } while (0xfffd < (ushort)(*(short *)(((undefined8 *)plVar11[0x2b])[uVar5] +
                                             (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
      }
LAB_148f526ff:
      uVar14 = (uint)uVar16;
      if (uVar14 != uVar12) {
        lVar4 = *(longlong *)(*(longlong *)(lVar23 + 0x20) + (uVar16 >> 9) * 8);
        *(undefined4 *)(lVar4 + (ulonglong)(uVar14 & 0x1ff) * 4) =
             *(undefined4 *)
              (local_2c8[lVar20 * 2] +
              (longlong)*(int *)(lVar4 + (ulonglong)(uVar14 & 0x1ff) * 4) * 4);
        uVar6 = uVar14 + 1;
        if ((int)(uVar14 + 1) < (int)uVar12) {
          uVar6 = uVar12;
        }
        do {
          iVar18 = (int)uVar16;
          uVar16 = (ulonglong)uVar6;
          if (uVar6 - 1 == iVar18) break;
          uVar14 = iVar18 + 1;
          uVar16 = (ulonglong)uVar14;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (plVar11[0x2b] + (ulonglong)(uVar14 >> 9) * 8) +
                                             (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
        goto LAB_148f526ff;
      }
      if (lVar20 == 0) {
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
        }
        plVar21 = (longlong *)param_1[0x24];
        param_1[0x23] = (longlong)plVar10;
        param_1[0x24] = (longlong)plVar11;
      }
      else {
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
        }
        plVar21 = (longlong *)param_1[0x26];
        param_1[0x25] = (longlong)plVar10;
        param_1[0x26] = (longlong)plVar11;
      }
      if (plVar21 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar21 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
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
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar11 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      lVar20 = lVar20 + 1;
    } while (lVar20 < (int)param_1[0x15]);
  }
  lVar20 = param_1[0x1c];
  uVar9 = (**(code **)(*param_1 + 0x2c8))(param_1);
  uVar9 = FUN_1485578f6(uVar9);
  pwVar2 = local_2b8;
  local_2f8 = (void *)0x0;
  lVar23 = (longlong)(int)uStack_2b0;
  local_2f0 = (int)uStack_2b0;
  if (lVar23 == 0) {
    local_2ec = 0;
  }
  else {
    FUN_1411312f2(&local_2f8,uStack_2b0 & 0xffffffff,0);
    memcpy(local_2f8,pwVar2,lVar23 << 3);
  }
  FUN_1485053d2(lVar20,&local_2f8,uVar9,0);
  lVar20 = *(longlong *)param_1[0x14];
  if (lVar20 != 0) {
    uVar9 = FUN_1459edb30();
    lVar20 = FUN_144718840(lVar20,uVar9);
    if (lVar20 != 0) {
      plVar10 = (longlong *)param_1[0x14];
      lVar20 = *plVar10;
      if (lVar20 == 0) {
        plVar11 = (longlong *)0x0;
      }
      else {
        uVar9 = FUN_1459edb30();
        plVar11 = (longlong *)FUN_144718840(lVar20,uVar9);
        plVar10 = (longlong *)param_1[0x14];
      }
      cVar7 = (**(code **)(*plVar11 + 0x18))(plVar11,plVar10[1]);
      if (cVar7 != '\0') {
        plVar10 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
        local_288 = L"SameSourceError";
        uStack_280._0_4_ = 0xf;
        FUN_1446e940c(&local_2a0,&local_288);
        local_288 = L"UCutMeshWithMeshTool";
        uStack_280 = CONCAT44(uStack_280._4_4_,0x14);
        FUN_1446e940c(&local_2d8,&local_288);
        FUN_140208bae(&local_288,&local_2d8,&local_2a0,
                      L"WARNING: Both input meshes have the same Asset; both inputs will be affected."
                     );
        (**(code **)(*plVar10 + 0x340))(plVar10,&local_288,3);
        if (local_288 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_288 + 0x10))();
        }
      }
    }
  }
  FUN_144716727(local_2c8,uStack_2c0 & 0xffffffff);
  if (local_2c8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_2b8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f529aa FUN_148f529aa body=419 status=ok
// SIG undefined FUN_148f529aa(void)

void FUN_148f529aa(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = FUN_1484e2e03(*(undefined8 *)(*(longlong *)(param_1[0x1c] + 0x58) + 0x50));
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar2);
  }
  param_1[0x27] = lVar2;
  FUN_140486fc4(lVar2,*(undefined8 *)(*(longlong *)(param_1[0x1c] + 0x58) + 0x50),0);
  lVar2 = param_1[0x27];
  uVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
  uVar3 = FUN_1485583eb(uVar3,1);
  FUN_1484d0608(lVar2,uVar3);
  FUN_140b506a4(param_1[0x27]);
  lVar2 = param_1[0x1c];
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  puVar1 = local_48;
  local_40 = 2;
  *local_48 = &PTR_LAB_14ba263d0;
  uVar3 = FUN_144a3f946();
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14ba264d0;
  puVar1[3] = param_1;
  FUN_148f76e8e(lVar2 + 0x40,local_50,&local_48);
  FUN_1449db362(&local_48);
  lVar2 = param_1[0x1c];
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  puVar1 = local_48;
  local_40 = 2;
  *local_48 = &PTR_LAB_14aefe820;
  uVar3 = FUN_144a3f946();
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14ba26540;
  puVar1[3] = param_1;
  FUN_1484d607c(lVar2 + 0x28,local_50,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f52b4e FUN_148f52b4e body=617 status=ok
// SIG undefined FUN_148f52b4e(void)

void FUN_148f52b4e(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1484d04e2(*(undefined8 *)(param_1 + 0x138));
  if (*(char *)(*(longlong *)(param_1 + 0x108) + 0xb0) == '\x01') {
    lVar7 = FUN_14851bd54(*(undefined8 *)(*(longlong *)(param_1 + 0xe0) + 0x58));
    iVar2 = *(int *)(param_1 + 0x148);
    if ((longlong)iVar2 != 0) {
      lVar10 = *(longlong *)(param_1 + 0x140);
      lVar9 = 0;
      do {
        uVar3 = *(uint *)(lVar10 + lVar9);
        uVar4 = *(ulonglong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x1c0) + (ulonglong)(uVar3 >> 9) * 8) +
                 (ulonglong)((uVar3 & 0x1ff) << 4));
        lVar5 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + (uVar4 >> 9 & 0x7fffff) * 8);
        lVar6 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + (uVar4 >> 0x29) * 8);
        uVar8 = uVar4 >> 0x20 & 0x1ff;
        local_98 = *(undefined8 *)(lVar6 + 0x10 + uVar8 * 0x18);
        puVar1 = (undefined4 *)(lVar6 + uVar8 * 0x18);
        local_a8 = *puVar1;
        uStack_a4 = puVar1[1];
        uStack_a0 = puVar1[2];
        uStack_9c = puVar1[3];
        local_b8 = *(undefined8 *)(lVar5 + 0x10 + (uVar4 & 0x1ff) * 0x18);
        puVar1 = (undefined4 *)(lVar5 + (uVar4 & 0x1ff) * 0x18);
        local_c8 = *puVar1;
        uStack_c4 = puVar1[1];
        uStack_c0 = puVar1[2];
        uStack_bc = puVar1[3];
        local_58 = 0xfff00f0f;
        local_54 = 0x4000000040000000;
        local_88 = local_c8;
        uStack_84 = uStack_c4;
        uStack_80 = uStack_c0;
        uStack_7c = uStack_bc;
        local_78 = local_b8;
        local_70 = local_a8;
        uStack_6c = uStack_a4;
        uStack_68 = uStack_a0;
        uStack_64 = uStack_9c;
        local_60 = local_98;
        FUN_1484d0812(*(undefined8 *)(param_1 + 0x138),&local_88);
        lVar9 = lVar9 + 4;
      } while ((longlong)iVar2 * 4 != lVar9);
    }
    iVar2 = *(int *)(param_1 + 0x158);
    if ((longlong)iVar2 != 0) {
      lVar7 = *(longlong *)(param_1 + 0x150);
      lVar10 = 0;
      do {
        uVar3 = *(uint *)(lVar7 + lVar10);
        uVar4 = *(ulonglong *)
                 (*(longlong *)(*(longlong *)(param_1 + 800) + (ulonglong)(uVar3 >> 9) * 8) +
                 (ulonglong)((uVar3 & 0x1ff) << 4));
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x170) + (uVar4 >> 9 & 0x7fffff) * 8);
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x170) + (uVar4 >> 0x29) * 8);
        uVar8 = uVar4 >> 0x20 & 0x1ff;
        local_98 = *(undefined8 *)(lVar5 + 0x10 + uVar8 * 0x18);
        puVar1 = (undefined4 *)(lVar5 + uVar8 * 0x18);
        local_a8 = *puVar1;
        uStack_a4 = puVar1[1];
        uStack_a0 = puVar1[2];
        uStack_9c = puVar1[3];
        local_b8 = *(undefined8 *)(lVar9 + 0x10 + (uVar4 & 0x1ff) * 0x18);
        puVar1 = (undefined4 *)(lVar9 + (uVar4 & 0x1ff) * 0x18);
        local_c8 = *puVar1;
        uStack_c4 = puVar1[1];
        uStack_c0 = puVar1[2];
        uStack_bc = puVar1[3];
        local_58 = 0xfff00f0f;
        local_54 = 0x4000000040000000;
        local_88 = local_c8;
        uStack_84 = uStack_c4;
        uStack_80 = uStack_c0;
        uStack_7c = uStack_bc;
        local_78 = local_b8;
        local_70 = local_a8;
        uStack_6c = uStack_a4;
        uStack_68 = uStack_a0;
        uStack_64 = uStack_9c;
        local_60 = local_98;
        FUN_1484d0812(*(undefined8 *)(param_1 + 0x138),&local_88);
        lVar10 = lVar10 + 4;
      } while ((longlong)iVar2 * 4 != lVar10);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f52db8 FUN_148f52db8 body=523 status=ok
// SIG undefined FUN_148f52db8(void)

undefined8 * FUN_148f52db8(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  void *_Dst;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [13];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  _Dst = (void *)FUN_14001cc68(0x1b0);
  memset(_Dst,0,0x1b0);
  FUN_148f77314(_Dst);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  plVar4 = *(longlong **)(param_1 + 0x68);
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)((longlong)_Dst + 0x88) = uVar3;
    plVar6 = *(longlong **)((longlong)_Dst + 0x90);
    if (plVar6 != (longlong *)0x0) {
      *(undefined8 *)((longlong)_Dst + 0x90) = 0;
LAB_148f52e58:
      LOCK();
      plVar4 = plVar6 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x000148f52e83:
        if (iVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)((longlong)_Dst + 0x88) = uVar3;
    plVar6 = *(longlong **)((longlong)_Dst + 0x90);
    if (plVar4 == plVar6) {
      LOCK();
      plVar6 = plVar4 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar6 = plVar4;
        goto joined_r0x000148f52e83;
      }
    }
    else {
      *(longlong **)((longlong)_Dst + 0x90) = plVar4;
      if (plVar6 != (longlong *)0x0) goto LAB_148f52e58;
    }
  }
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x30) + 0x2b0))
            ((longlong *)**(undefined8 **)(param_1 + 0x30),local_98);
  puVar7 = local_98;
  puVar8 = (undefined8 *)((longlong)_Dst + 0xa0);
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  plVar4 = *(longlong **)(param_1 + 0x78);
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)((longlong)_Dst + 0x100) = uVar3;
    plVar6 = *(longlong **)((longlong)_Dst + 0x108);
    if (plVar6 == (longlong *)0x0) goto LAB_148f52f3b;
    *(undefined8 *)((longlong)_Dst + 0x108) = 0;
LAB_148f52f05:
    LOCK();
    plVar4 = plVar6 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_148f52f3b;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar6;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)((longlong)_Dst + 0x100) = uVar3;
    plVar6 = *(longlong **)((longlong)_Dst + 0x108);
    if (plVar4 != plVar6) {
      *(longlong **)((longlong)_Dst + 0x108) = plVar4;
      if (plVar6 == (longlong *)0x0) goto LAB_148f52f3b;
      goto LAB_148f52f05;
    }
    LOCK();
    plVar6 = plVar4 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_148f52f3b;
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
LAB_148f52f3b:
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  (**(code **)(*plVar4 + 0x2b0))(plVar4,local_98);
  puVar7 = local_98;
  puVar8 = (undefined8 *)((longlong)_Dst + 0x110);
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  lVar5 = *(longlong *)(param_1 + 0x50);
  *(undefined1 *)((longlong)_Dst + 0x170) = *(undefined1 *)(lVar5 + 0xa8);
  *(undefined1 *)((longlong)_Dst + 0x171) = *(undefined1 *)(lVar5 + 0xa9);
  *(double *)((longlong)_Dst + 0x178) = (double)*(float *)(lVar5 + 0xac);
  *param_2 = _Dst;
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f52fc4 FUN_148f52fc4 body=398 status=ok
// SIG undefined FUN_148f52fc4(void)

void FUN_148f52fc4(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  longlong local_48;
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 != 0) {
    lVar1 = *(longlong *)(param_3 + 0x20);
    FUN_1446f470e(&local_48,L"bUseFirstMeshMaterials",1);
    if (lVar1 == local_48) {
      cVar2 = (**(code **)(*param_1 + 0x378))(param_1);
      if (cVar2 == '\0') {
        plVar3 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
        local_40 = L"InvalidTargets";
        local_38 = 0xe;
        FUN_1446e940c(local_4c,&local_40);
        local_40 = L"UCutMeshWithMeshTool";
        local_38 = 0x14;
        FUN_1446e940c(local_50,&local_40);
        FUN_140208bae(&local_40,local_50,local_4c,L"Input meshes are no longer valid");
        (**(code **)(*plVar3 + 0x340))(plVar3,&local_40,3);
        if (local_40 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_40 + 0x10))();
        }
      }
      else {
        (**(code **)(*param_1 + 0x398))(param_1,0);
        FUN_1485051e4(param_1[0x1c]);
      }
      goto LAB_148f530f4;
    }
    lVar1 = *(longlong *)(param_3 + 0x20);
    FUN_1446f470e(&local_58,L"bShowNewBoundaries",1);
    if (lVar1 == local_58) {
      plVar3 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
      (**(code **)(*plVar3 + 0x348))(plVar3);
      FUN_148f52b4e(param_1);
      goto LAB_148f530f4;
    }
  }
  FUN_1484c7892(param_1,param_2,param_3);
LAB_148f530f4:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f53154 FUN_148f53154 body=32 status=ok
// SIG undefined FUN_148f53154(void)

undefined8 FUN_148f53154(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Boolean");
  return param_2;
}



// FUNCTION 148f53174 FUN_148f53174 body=152 status=ok
// SIG undefined FUN_148f53174(void)

undefined8 FUN_148f53174(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"CutMeshWithMeshActionName";
  local_28 = 0x19;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"UCutMeshWithMeshTool";
  local_28 = 0x14;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_2,local_38,local_34,L"Cut Mesh");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f5320e FUN_148f5320e body=1445 status=ok
// SIG undefined FUN_148f5320e(void)

void FUN_148f5320e(longlong *param_1,char param_2)

{
  ulonglong uVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  longlong **pplVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  undefined1 auStack_848 [32];
  char local_828;
  undefined7 uStack_827;
  longlong local_820;
  longlong local_808;
  int local_800;
  undefined2 *local_7f8;
  int local_7f0;
  undefined8 local_7e8 [12];
  longlong *local_788 [4];
  undefined4 local_768;
  undefined4 uStack_764;
  undefined4 uStack_760;
  undefined4 uStack_75c;
  undefined8 local_758;
  undefined4 local_748;
  undefined4 uStack_744;
  undefined4 uStack_740;
  undefined4 uStack_73c;
  undefined8 local_738;
  undefined4 local_728;
  undefined4 uStack_724;
  undefined4 uStack_720;
  undefined4 uStack_71c;
  longlong local_718;
  undefined8 uStack_710;
  undefined8 *local_700;
  undefined1 local_6f8 [80];
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 local_688;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  undefined8 local_678;
  undefined4 local_670;
  undefined4 uStack_66c;
  undefined4 uStack_668;
  undefined4 uStack_664;
  undefined8 local_660;
  undefined1 local_618 [16];
  undefined1 local_608 [1488];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_848;
  (**(code **)(*param_1 + 0x3a8))();
  plVar4 = (longlong *)param_1[0x1a];
  FUN_140056680(&local_6a8,&DAT_149dfb77a);
  (**(code **)(*plVar4 + 0x2a0))(plVar4,param_1,&local_6a8);
  if (local_6a8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[0x18];
  FUN_140056680(&local_6a8,&DAT_149dfb77a);
  (**(code **)(*plVar4 + 0x2a0))(plVar4,param_1,&local_6a8);
  if (local_6a8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_143b84538(param_1[0x1c],&local_700);
  if (0 < (int)param_1[0x15]) {
    lVar8 = 0;
    do {
      FUN_14850635b(*(undefined8 *)(param_1[0x14] + lVar8 * 8));
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)param_1[0x15]);
  }
  if (param_2 == '\x01') {
    lVar8 = (**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*param_1 + 0x3c0))(param_1,&local_6a8);
    (**(code **)(*(longlong *)(lVar8 + 0x28) + 0x10))(lVar8 + 0x28,&local_6a8);
    if (local_6a8 != (longlong *)0x0) {
      (**(code **)(*local_6a8 + 0x10))();
    }
    local_718 = 0;
    uStack_710 = 0;
    (**(code **)(*param_1 + 0x3c8))(param_1,&local_6a8);
    local_728 = (undefined4)local_6a8;
    uStack_724 = local_6a8._4_4_;
    uStack_720 = (undefined4)uStack_6a0;
    uStack_71c = uStack_6a0._4_4_;
    FUN_1485063a5(local_788,*(undefined8 *)param_1[0x14]);
    if (*(int *)(local_700 + 0x2e) < 1) {
      uVar2 = 0;
      iVar5 = 0;
    }
    else {
      FUN_146c3cd49(local_700,local_6f8,1);
      local_6a8 = local_788[0];
      uStack_6a0 = local_788[1];
      local_698 = local_788[2];
      uStack_690 = local_788[3];
      local_688 = CONCAT44(uStack_764,local_768);
      uStack_680 = uStack_760;
      uStack_67c = uStack_75c;
      local_678 = local_758;
      local_670 = local_748;
      uStack_66c = uStack_744;
      uStack_668 = uStack_740;
      uStack_664 = uStack_73c;
      local_660 = local_738;
      FUN_146c3cfa5(local_700,&local_6a8,1);
      local_6a8 = (longlong *)0x3e800000000;
      FUN_148506aa7(*(undefined8 *)param_1[0x14],local_700,1,&local_6a8);
      lVar8 = *(longlong *)param_1[0x14];
      if (lVar8 == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        uVar3 = FUN_145b7126e();
        plVar4 = (longlong *)FUN_144718840(lVar8,uVar3);
      }
      (**(code **)(*plVar4 + 0x28))(plVar4,&local_728,1);
      iVar5 = (int)uStack_710;
      uVar2 = uStack_710._4_4_;
    }
    uVar3 = FUN_1485062af(*(undefined8 *)param_1[0x14]);
    uStack_710 = CONCAT44(uStack_710._4_4_,iVar5 + 1U);
    if (uVar2 < iVar5 + 1U) {
      FUN_1447d05f2(&local_718,iVar5);
    }
    *(undefined8 *)(local_718 + (longlong)iVar5 * 8) = uVar3;
    if (0 < (int)param_1[0x5a]) {
      plVar4 = param_1 + 0x2c;
      FUN_146c3cd49(plVar4,local_6f8,1);
      local_6a8 = local_788[0];
      uStack_6a0 = local_788[1];
      local_698 = local_788[2];
      uStack_690 = local_788[3];
      uStack_680 = uStack_760;
      uStack_67c = uStack_75c;
      local_678 = local_758;
      local_670 = local_748;
      uStack_66c = uStack_744;
      uStack_668 = uStack_740;
      uStack_664 = uStack_73c;
      local_660 = local_738;
      FUN_146c3cfa5(plVar4,&local_6a8,1);
      pplVar6 = local_788;
      puVar7 = local_7e8;
      for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar7 = *pplVar6;
        pplVar6 = pplVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      uVar3 = FUN_1485062e8(*(undefined8 *)param_1[0x14]);
      FUN_148505e5e(&local_7f8,uVar3,1);
      puVar10 = &DAT_149dfb77a;
      if (local_7f0 != 0) {
        puVar10 = local_7f8;
      }
      FUN_140002266(&local_808,L"%s_%s",puVar10,L"CutPart");
      FUN_14850577a(&local_6a8,1);
      local_688 = (**(code **)(*param_1 + 0x390))(param_1);
      if ((local_688 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_14689c22e(local_688);
      }
      puVar7 = local_7e8;
      puVar9 = &local_678;
      for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      iVar5 = local_800 + -1;
      if (local_800 == 0) {
        iVar5 = 0;
      }
      FUN_1402980a2(local_618,local_808,iVar5);
      (**(code **)(*param_1 + 0x3c8))(param_1,&local_828);
      FUN_1484c75da(local_608,&local_828);
      if (CONCAT71(uStack_827,local_828) != 0) {
        FUN_1400020a8();
      }
      FUN_148505bae(&local_6a8,plVar4);
      FUN_1485073fd(*(undefined8 *)param_1[0x14],&local_6a8);
      uVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
      FUN_148505c7a(&local_828,uVar3,&local_6a8);
      uVar1 = uStack_710;
      if ((local_828 == '\0') && (local_820 != 0)) {
        lVar8 = (longlong)(int)uStack_710;
        uVar2 = (int)uStack_710 + 1;
        uStack_710 = CONCAT44(uStack_710._4_4_,uVar2);
        if (uStack_710._4_4_ < uVar2) {
          FUN_1447d05f2(&local_718,uVar1 & 0xffffffff);
        }
        *(longlong *)(local_718 + lVar8 * 8) = local_820;
      }
      FUN_1484c7624(&local_6a8);
      if (local_808 != 0) {
        FUN_1400020a8();
      }
      if (local_7f8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    uVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
    FUN_148550a4d(uVar3,&local_718);
    lVar8 = (**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*(longlong *)(lVar8 + 0x28) + 0x18))(lVar8 + 0x28);
    if (CONCAT44(uStack_724,local_728) != 0) {
      FUN_1400020a8();
    }
    if (local_718 != 0) {
      FUN_1400020a8();
    }
  }
  uVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
  plVar4 = (longlong *)FUN_148451354(uVar3);
  (**(code **)(*plVar4 + 0x2d8))(plVar4,param_1);
  if (local_700 != (undefined8 *)0x0) {
    (**(code **)*local_700)(local_700,1);
  }
  if ((local_38 ^ (ulonglong)auStack_848) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f537e0 FUN_148f537e0 body=227 status=ok
// SIG undefined FUN_148f537e0(void)

longlong * FUN_148f537e0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = (longlong *)FUN_148f538c4(param_2[1]);
  (**(code **)(*plVar1 + 0x378))(plVar1,*param_2);
  local_60 = 0x4056800000000000;
  local_58 = 0;
  uStack_50 = 0;
  FUN_144a7484c(&local_60,&local_48);
  local_b8 = local_48;
  uStack_b4 = uStack_44;
  uStack_b0 = uStack_40;
  uStack_ac = uStack_3c;
  local_a8 = local_38;
  uStack_a4 = uStack_34;
  uStack_a0 = uStack_30;
  uStack_9c = uStack_2c;
  FUN_148558567(&local_98,param_2[1],&local_b8,0x407f400000000000);
  plVar1[0x2a] = local_68;
  *(undefined4 *)(plVar1 + 0x28) = local_78;
  *(undefined4 *)((longlong)plVar1 + 0x144) = uStack_74;
  *(undefined4 *)(plVar1 + 0x29) = uStack_70;
  *(undefined4 *)((longlong)plVar1 + 0x14c) = uStack_6c;
  *(undefined4 *)(plVar1 + 0x26) = local_88;
  *(undefined4 *)((longlong)plVar1 + 0x134) = uStack_84;
  *(undefined4 *)(plVar1 + 0x27) = uStack_80;
  *(undefined4 *)((longlong)plVar1 + 0x13c) = uStack_7c;
  *(undefined4 *)(plVar1 + 0x24) = local_98;
  *(undefined4 *)((longlong)plVar1 + 0x124) = uStack_94;
  *(undefined4 *)(plVar1 + 0x25) = uStack_90;
  *(undefined4 *)((longlong)plVar1 + 300) = uStack_8c;
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f538c4 FUN_148f538c4 body=148 status=ok
// SIG undefined FUN_148f538c4(void)

undefined8 FUN_148f538c4(undefined8 param_1)

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
  uVar1 = FUN_1459f4392();
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



// FUNCTION 148f5395a FUN_148f5395a body=758 status=ok
// SIG undefined FUN_148f5395a(void)

undefined8 * FUN_148f5395a(longlong param_1,undefined8 *param_2)

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
  char cVar10;
  int iVar11;
  double dVar12;
  void *_Dst;
  double *pdVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong lVar17;
  
  _Dst = (void *)FUN_14001cc68(0x150);
  memset(_Dst,0,0x150);
  FUN_148f77eaa(_Dst);
  lVar17 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x160);
  iVar11 = *(int *)(lVar17 + 0xc0) + 2;
  if (-3 < *(int *)(lVar17 + 0xc0)) {
    puVar15 = (undefined8 *)((longlong)_Dst + 0x88);
    if (*(int *)((longlong)_Dst + 0x94) < iVar11) {
      FUN_1447a8aa0(puVar15);
      lVar17 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x160);
    }
    FUN_1484f458e(lVar17,puVar15);
    lVar17 = *(longlong *)(param_1 + 8);
    cVar10 = *(char *)(*(longlong *)(lVar17 + 0x160) + 0x118);
    *(char *)((longlong)_Dst + 0xf8) = cVar10;
    if ((cVar10 == '\0') && (*(char *)(*(longlong *)(lVar17 + 0x178) + 0x119) == '\x01')) {
      pdVar13 = *(double **)((longlong)_Dst + 0x88);
      dVar1 = *pdVar13;
      dVar2 = pdVar13[1];
      dVar3 = pdVar13[2];
      iVar11 = *(int *)((longlong)_Dst + 0x90);
      lVar16 = (longlong)iVar11;
      lVar14 = (longlong)(iVar11 + -1);
      dVar4 = *(double *)(lVar17 + 0x100);
      dVar5 = *(double *)(lVar17 + 0xf0);
      dVar6 = *(double *)(lVar17 + 0xf8);
      dVar7 = *(double *)(lVar17 + 0x108);
      dVar8 = *(double *)(lVar17 + 0x110);
      dVar9 = *(double *)(lVar17 + 0x118);
      dVar12 = (pdVar13[lVar14 * 3 + 2] - dVar4) * dVar9 +
               (pdVar13[lVar14 * 3] - dVar5) * dVar7 + (pdVar13[lVar14 * 3 + 1] - dVar6) * dVar8;
      *(uint *)((longlong)_Dst + 0x90) = iVar11 + 1U;
      if (*(uint *)((longlong)_Dst + 0x94) < iVar11 + 1U) {
        FUN_1403e3958(puVar15,iVar11);
        pdVar13 = (double *)*puVar15;
      }
      pdVar13[lVar16 * 3] = dVar12 * dVar7 + dVar5;
      pdVar13[lVar16 * 3 + 1] = dVar8 * dVar12 + dVar6;
      pdVar13[lVar16 * 3 + 2] = dVar9 * dVar12 + dVar4;
      lVar17 = *(longlong *)(param_1 + 8);
      dVar4 = *(double *)(lVar17 + 0x100);
      dVar5 = *(double *)(lVar17 + 0xf0);
      dVar6 = *(double *)(lVar17 + 0xf8);
      dVar7 = *(double *)(lVar17 + 0x108);
      dVar8 = *(double *)(lVar17 + 0x110);
      dVar9 = *(double *)(lVar17 + 0x118);
      dVar1 = (dVar3 - dVar4) * dVar9 + (dVar1 - dVar5) * dVar7 + (dVar2 - dVar6) * dVar8;
      iVar11 = *(int *)((longlong)_Dst + 0x90);
      lVar17 = (longlong)iVar11;
      *(uint *)((longlong)_Dst + 0x90) = iVar11 + 1U;
      if (*(uint *)((longlong)_Dst + 0x94) < iVar11 + 1U) {
        FUN_1403e3958(puVar15,iVar11);
      }
      lVar14 = *(longlong *)((longlong)_Dst + 0x88);
      *(double *)(lVar14 + lVar17 * 0x18) = dVar1 * dVar7 + dVar5;
      *(double *)(lVar14 + 8 + lVar17 * 0x18) = dVar8 * dVar1 + dVar6;
      *(double *)(lVar14 + 0x10 + lVar17 * 0x18) = dVar9 * dVar1 + dVar4;
      *(undefined1 *)((longlong)_Dst + 0xf8) = 1;
      lVar17 = *(longlong *)(param_1 + 8);
    }
    FUN_148f53c52(*(undefined8 *)(lVar17 + 0x178),*(undefined8 *)(lVar17 + 0x180),lVar17 + 0xf0,
                  lVar17 + 0x108,_Dst);
    *param_2 = _Dst;
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar11);
}



// FUNCTION 148f53c52 FUN_148f53c52 body=1051 status=ok
// SIG undefined FUN_148f53c52(void)

void FUN_148f53c52(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  undefined1 auStack_108 [32];
  double local_e8;
  int local_e0;
  longlong local_d8;
  byte local_c1;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar1 = param_5 + 0x88;
  local_c0 = param_2;
  bVar9 = FUN_146c8a8a4(lVar1,param_3,param_4,*(undefined1 *)(param_5 + 0xf8));
  bVar9 = bVar9 ^ *(byte *)((longlong)param_1 + 0xd9) ^ 1;
  local_c1 = *(byte *)(param_1 + 0x1b);
  if ((bVar9 != local_c1) && (iVar15 = *(int *)(param_5 + 0x90), 1 < iVar15)) {
    iVar11 = -1;
    lVar12 = 0;
    lVar13 = 0;
    do {
      lVar5 = *(longlong *)(param_5 + 0x88);
      lVar14 = (longlong)(iVar15 + iVar11);
      local_a8 = *(undefined8 *)(lVar5 + 0x10 + lVar12);
      local_b8 = *(undefined8 *)(lVar5 + lVar12);
      uStack_b0 = ((undefined8 *)(lVar5 + lVar12))[1];
      *(undefined8 *)(lVar5 + 0x10 + lVar12) = *(undefined8 *)(lVar5 + 0x10 + lVar14 * 0x18);
      puVar2 = (undefined8 *)(lVar5 + lVar14 * 0x18);
      uVar8 = puVar2[1];
      *(undefined8 *)(lVar5 + lVar12) = *puVar2;
      ((undefined8 *)(lVar5 + lVar12))[1] = uVar8;
      *(undefined8 *)(lVar5 + 0x10 + lVar14 * 0x18) = local_a8;
      puVar2 = (undefined8 *)(lVar5 + lVar14 * 0x18);
      *puVar2 = local_b8;
      puVar2[1] = uStack_b0;
      lVar13 = lVar13 + 1;
      iVar15 = *(int *)(param_5 + 0x90);
      lVar12 = lVar12 + 0x18;
      iVar11 = iVar11 + -1;
    } while (lVar13 < iVar15 / 2);
  }
  dVar3 = (double)param_1[0x1a];
  dVar4 = (double)param_1[(ulonglong)(-(uint)(dVar3 != 0.0) & 1) + 0x15];
  if ((char)param_1[0x19] == '\x01') {
    iVar15 = *(int *)((longlong)param_1 + 0xcc);
  }
  else {
    iVar15 = -(int)((ulonglong)
                    (longlong)
                    ROUND(-0.5 - (dVar4 / (double)param_1[0x18] + dVar4 / (double)param_1[0x18])) >>
                   1);
  }
  dVar6 = dVar4 / (double)iVar15;
  lVar12 = param_1[0x17];
  uVar16 = (uint)((ulonglong)lVar12 >> 0x20);
  dVar7 = dVar6;
  if ((char)param_1[0x1b] != '\0') {
    uVar16 = uVar16 ^ 0x80000000;
    dVar7 = -dVar6;
  }
  if (((char)param_1[0x1d] == '\x01') && (((dVar6 != 0.0 || (NAN(dVar6))) && (ABS(dVar6) < 180.0))))
  {
    FUN_146c8abe2(lVar1,dVar7,param_3,param_4);
  }
  if ((((char)param_1[0x1f] != '\x01') || ((double)param_1[0x1a] != 0.0)) ||
     (NAN((double)param_1[0x1a]))) {
    bVar10 = 0;
  }
  else {
    bVar10 = -(dVar4 == 360.0) & 1;
  }
  *(byte *)(param_5 + 0xf9) = bVar10;
  local_e0 = iVar15 + (uint)(bVar10 ^ 1);
  if (-1 < local_e0) {
    dVar3 = (dVar3 * dVar4) / (double)iVar15;
    if (*(int *)(param_5 + 0xa4) < local_e0) {
      FUN_146c7ec56(param_5 + 0x98,local_e0);
    }
    local_e8 = dVar3;
    local_d8 = param_5 + 0x98;
    FUN_146c8a403(param_3,param_4,CONCAT44(uVar16,(int)lVar12),dVar7);
    if (((*(char *)((longlong)param_1 + 0xf9) == '\x01') && (dVar3 == 0.0)) && (!NAN(dVar3))) {
      local_e8 = (double)(param_5 + 0xa8);
      FUN_146c8a6d8(lVar1,param_3,param_4,param_1[0x20]);
    }
    *(undefined1 *)(param_5 + 0xfa) = *(undefined1 *)((longlong)param_1 + 0xda);
    *(longlong *)(param_5 + 0x100) = param_1[0x1c];
    *(longlong *)(param_5 + 0x148) = param_1[0x1e];
    dVar3 = (double)*(float *)(local_c0 + 0xb0);
    *(double *)(param_5 + 0x110) = dVar3;
    *(double *)(param_5 + 0x118) = dVar3;
    if ((bool)(char)param_1[0x21] != (bVar9 != local_c1)) {
      *(double *)(param_5 + 0x118) = -dVar3;
      *(undefined8 *)(param_5 + 0x120) = 0;
      *(double *)(param_5 + 0x128) = dVar3;
    }
    *(undefined1 *)(param_5 + 0x10c) = *(undefined1 *)((longlong)param_1 + 0x109);
    *(undefined1 *)(param_5 + 0x130) = *(undefined1 *)(local_c0 + 0xb4);
    *(undefined8 *)(param_5 + 0x138) = 0x4059000000000000;
    if (*(byte *)((longlong)param_1 + 0xe9) < 4) {
      *(byte *)(param_5 + 0x140) = *(byte *)((longlong)param_1 + 0xe9);
    }
    if (*(byte *)((longlong)param_1 + 0xea) < 2) {
      *(byte *)(param_5 + 0x141) = *(byte *)((longlong)param_1 + 0xea);
    }
    bVar9 = (**(code **)(*param_1 + 0x2b8))(param_1);
    if (bVar9 < 4) {
      *(undefined4 *)(param_5 + 0x108) = *(undefined4 *)(&DAT_14ba274e8 + (ulonglong)bVar9 * 4);
    }
    if ((local_a0 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_e0);
}



// FUNCTION 148f54070 FUN_148f54070 body=833 status=ok
// SIG undefined FUN_148f54070(void)

void FUN_148f54070(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_158 [32];
  wchar_t **local_138;
  longlong **local_130;
  undefined1 local_128;
  undefined8 *local_120;
  undefined1 **local_118;
  undefined8 local_110;
  longlong local_108 [2];
  undefined1 local_f8 [4];
  undefined1 local_f4 [4];
  undefined1 local_f0 [4];
  undefined1 local_ec [4];
  longlong *local_e8 [2];
  wchar_t *local_d8;
  undefined4 local_d0;
  undefined1 *local_c8 [2];
  undefined8 local_b8;
  undefined **local_a8;
  undefined8 local_a0;
  undefined1 *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  undefined8 local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_78 = 0;
  local_68 = &PTR_LAB_14ba26690;
  local_88[0] = &LAB_14436c09a;
  local_d8 = L"DeletePointTooltip";
  local_d0 = 0x12;
  local_110 = param_2;
  local_60 = param_1;
  FUN_1446e940c(local_ec,&local_d8);
  local_d8 = L"UDrawAndRevolveTool";
  local_d0 = 0x13;
  FUN_1446e940c(local_f0,&local_d8);
  FUN_140208bae(local_e8,local_f0,local_ec,L"Delete currently selected point(s)");
  local_d8 = L"DeletePointUIName";
  local_d0 = 0x11;
  FUN_1446e940c(local_f4,&local_d8);
  local_d8 = L"UDrawAndRevolveTool";
  local_d0 = 0x13;
  FUN_1446e940c(local_f8,&local_d8);
  FUN_140208bae(&local_d8,local_f8,local_f4,L"Delete Point");
  FUN_140056680(local_108,L"DeletePointBackspaceKey");
  local_120 = &DAT_14c966f40;
  local_128 = 0;
  local_138 = &local_d8;
  local_130 = local_e8;
  local_118 = local_88;
  FUN_148450124(local_110,param_1,0x2711,local_108);
  if (local_108[0] != 0) {
    FUN_1400020a8();
  }
  if (local_d8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_d8 + 0x10))();
  }
  if (local_e8[0] != (longlong *)0x0) {
    (**(code **)(*local_e8[0] + 0x10))();
  }
  local_b8 = 0;
  local_a8 = &PTR_LAB_14ba266b0;
  local_c8[0] = &LAB_14436c0f0;
  local_d8 = L"DeletePointTooltip";
  local_d0 = 0x12;
  local_a0 = param_1;
  FUN_1446e940c(local_ec,&local_d8);
  local_d8 = L"UDrawAndRevolveTool";
  local_d0 = 0x13;
  FUN_1446e940c(local_f0,&local_d8);
  FUN_140208bae(local_e8,local_f0,local_ec,L"Delete currently selected point(s)");
  local_d8 = L"DeletePointUIName";
  local_d0 = 0x11;
  FUN_1446e940c(local_f4,&local_d8);
  local_d8 = L"UDrawAndRevolveTool";
  local_d0 = 0x13;
  FUN_1446e940c(local_f8,&local_d8);
  FUN_140208bae(&local_d8,local_f8,local_f4,L"Delete Point");
  FUN_140056680(local_108,L"DeletePointDeleteKey");
  local_120 = &DAT_14c966f58;
  local_128 = 0;
  local_138 = &local_d8;
  local_130 = local_e8;
  local_118 = local_c8;
  FUN_148450124(local_110,param_1,0x2712,local_108);
  if (local_108[0] != 0) {
    FUN_1400020a8();
  }
  if (local_d8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_d8 + 0x10))();
  }
  if (local_e8[0] != (longlong *)0x0) {
    (**(code **)(*local_e8[0] + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f543d8 FUN_148f543d8 body=1905 status=ok
// SIG undefined FUN_148f543d8(void)

void FUN_148f543d8(longlong *param_1)

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
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined8 uVar19;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  code *local_c8;
  undefined8 local_b8;
  undefined **local_a8;
  longlong *local_a0;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1484416be();
  local_88 = L"ToolName";
  uStack_80._0_4_ = 8;
  FUN_1446e940c(&local_108,&local_88);
  local_88 = L"UDrawAndRevolveTool";
  uStack_80 = CONCAT44(uStack_80._4_4_,0x13);
  FUN_1446e940c(&local_148,&local_88);
  FUN_140208bae(&local_88,&local_148,&local_108,L"Revolve PolyPath");
  (**(code **)(*param_1 + 0x370))(param_1,&local_88);
  if (local_88 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_88 + 0x10))();
  }
  plVar17 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*plVar17 + 0x340))(plVar17,&DAT_14cbf3720,2);
  plVar17 = (longlong *)FUN_1484c5a9a(param_1);
  if ((plVar17 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar17);
  }
  param_1[0x2e] = (longlong)plVar17;
  FUN_140056680(&local_88,&DAT_149dfb77a);
  (**(code **)(*plVar17 + 0x2a8))(plVar17,param_1,&local_88);
  if (local_88 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_14851cac4(param_1[0x2e]);
  local_b8 = 0;
  local_a8 = &PTR_LAB_14ba266d0;
  local_c8 = FUN_14436c146;
  local_a0 = param_1;
  FUN_1484c5b30(param_1[0x2e] + 0x28,param_1[0x2e] + 0xa8);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x2e]);
  FUN_1446f470e(&local_110,L"Revolve Tool Settings",1);
  plVar17 = (longlong *)FUN_148f54b4a(param_1,local_110);
  if ((plVar17 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar17);
  }
  param_1[0x2f] = (longlong)plVar17;
  FUN_140056680(&local_88,&DAT_149dfb77a);
  (**(code **)(*plVar17 + 0x2a8))(plVar17,param_1,&local_88);
  if (local_88 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  *(undefined1 *)(param_1[0x2f] + 0x151) = 1;
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x2f]);
  lVar18 = param_1[0x2f];
  *(longlong *)(lVar18 + 0x130) = param_1[0x26];
  lVar1 = param_1[0x25];
  *(longlong *)(lVar18 + 0x120) = param_1[0x24];
  *(longlong *)(lVar18 + 0x128) = lVar1;
  local_88 = (wchar_t *)param_1[0x27];
  uStack_80 = param_1[0x28];
  local_78 = (longlong *)param_1[0x29];
  uStack_70 = param_1[0x2a];
  FUN_1448052ee(&local_88,&local_108);
  lVar18 = param_1[0x2f];
  *(longlong **)(lVar18 + 0x148) = local_f8;
  *(undefined4 *)(lVar18 + 0x138) = (undefined4)local_108;
  *(undefined4 *)(lVar18 + 0x13c) = local_108._4_4_;
  *(undefined4 *)(lVar18 + 0x140) = uStack_100;
  *(undefined4 *)(lVar18 + 0x144) = uStack_fc;
  lVar18 = FUN_148f491c5(param_1);
  if ((lVar18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar18);
  }
  param_1[0x30] = lVar18;
  (**(code **)(*param_1 + 0x308))(param_1,lVar18);
  plVar17 = (longlong *)param_1[0x30];
  FUN_140056680(&local_88,&DAT_149dfb77a);
  (**(code **)(*plVar17 + 0x2a8))(plVar17,param_1,&local_88);
  if (local_88 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  plVar17 = (longlong *)FUN_148f54c02(param_1);
  if ((plVar17 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar17);
  }
  param_1[0x2c] = (longlong)plVar17;
  (**(code **)(*plVar17 + 0x2a0))(plVar17,param_1);
  FUN_1484f34b0(param_1[0x2c],param_1[0x13]);
  lVar18 = param_1[0x2c];
  local_88 = (wchar_t *)0x0;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  FUN_1446efa72(&local_88,0,2,0x10);
  puVar13 = (undefined8 *)local_88;
  uStack_80._0_4_ = 2;
  *(undefined ***)local_88 = &PTR_LAB_149e020b0;
  uVar19 = FUN_144a3f946();
  puVar13[2] = uVar19;
  *puVar13 = &PTR_FUN_14ba266f0;
  puVar13[3] = param_1;
  FUN_1448b6402(lVar18 + 0x50,&local_108,&local_88);
  FUN_1449db362(&local_88);
  lVar18 = param_1[0x2c];
  local_88 = (wchar_t *)0x0;
  uStack_80._0_4_ = 0;
  FUN_1446efa72(&local_88,0,2,0x10);
  puVar13 = (undefined8 *)local_88;
  uStack_80._0_4_ = 2;
  *(undefined ***)local_88 = &PTR_LAB_149e020b0;
  uVar19 = FUN_144a3f946();
  puVar13[2] = uVar19;
  *puVar13 = &PTR_FUN_14ba26760;
  puVar13[3] = param_1;
  FUN_1448b6402(lVar18 + 0x68,&local_108,&local_88);
  FUN_1449db362(&local_88);
  FUN_1484f5afc(param_1[0x2c],*(undefined1 *)(param_1[0x2f] + 0x150));
  FUN_148f54c98(param_1);
  FUN_144a7484c(param_1[0x2f] + 0x138,&local_88);
  lVar18 = param_1[0x2f];
  local_138 = *(undefined8 *)(lVar18 + 0x130);
  local_148 = *(undefined8 *)(lVar18 + 0x120);
  uStack_140 = *(undefined8 *)(lVar18 + 0x128);
  local_130 = (int)local_88;
  uStack_12c = local_88._4_4_;
  uStack_128 = (undefined4)uStack_80;
  uStack_124 = uStack_80._4_4_;
  local_120 = (undefined4)local_78;
  uStack_11c = local_78._4_4_;
  uStack_118 = (undefined4)uStack_70;
  uStack_114 = uStack_70._4_4_;
  plVar17 = (longlong *)FUN_148f54d86(param_1);
  if ((plVar17 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar17);
  }
  param_1[0x2d] = (longlong)plVar17;
  (**(code **)(*plVar17 + 0x2a0))(plVar17,param_1);
  FUN_1484f0d7a(param_1[0x2d],param_1[0x13],&local_148);
  lVar18 = param_1[0x2d];
  (**(code **)(**(longlong **)(param_1[0x2c] + 0x40) + 0x2a0))
            (*(longlong **)(param_1[0x2c] + 0x40),&local_88);
  FUN_1484f17c8(lVar18,(int)local_88 + -1);
  lVar18 = param_1[0x2d];
  local_108 = *(longlong *)(lVar18 + 0x30);
  uStack_80 = *(ulonglong *)(lVar18 + 0x38);
  local_f8 = *(longlong **)(lVar18 + 0x40);
  uStack_70 = *(undefined8 *)(lVar18 + 0x48);
  local_68 = *(longlong *)(lVar18 + 0x50);
  uStack_60 = *(undefined8 *)(lVar18 + 0x58);
  local_58 = *(undefined8 *)(lVar18 + 0x60);
  uStack_50 = *(undefined8 *)(lVar18 + 0x68);
  uVar15 = local_58;
  uVar16 = uStack_50;
  local_78 = local_f8;
  uVar19 = uStack_70;
  local_88 = (wchar_t *)local_108;
  uVar14 = uStack_80;
  *(ulonglong *)(lVar18 + 0x60) = CONCAT44(uStack_d4,local_d8);
  *(ulonglong *)(lVar18 + 0x68) = CONCAT44(uStack_cc,uStack_d0);
  *(undefined ***)(lVar18 + 0x50) = &PTR_LAB_14ba267d0;
  *(longlong **)(lVar18 + 0x58) = param_1;
  *(undefined8 *)(lVar18 + 0x40) = 0;
  *(ulonglong *)(lVar18 + 0x48) = CONCAT44(uStack_ec,uStack_f0);
  *(undefined1 **)(lVar18 + 0x30) = &LAB_14436c622;
  *(ulonglong *)(lVar18 + 0x38) = CONCAT44(uStack_fc,uStack_100);
  uStack_80._4_4_ = (undefined4)(uStack_80 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_e8 = local_68;
  uStack_e0 = uStack_60;
  local_d8 = (undefined4)local_58;
  uStack_d4 = local_58._4_4_;
  uStack_d0 = (undefined4)uStack_50;
  uStack_cc = uStack_50._4_4_;
  uStack_f0 = (undefined4)uStack_70;
  uStack_ec = uStack_70._4_4_;
  uStack_100 = (undefined4)uStack_80;
  uStack_fc = uStack_80._4_4_;
  uStack_80 = uVar14;
  uStack_70 = uVar19;
  local_58 = uVar15;
  uStack_50 = uVar16;
  if (local_108 != 0) {
    plVar17 = local_f8;
    if (local_f8 == (longlong *)0x0) {
      plVar17 = &local_e8;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  lVar18 = param_1[0x2d];
  local_88 = (wchar_t *)0x0;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  FUN_1446efa72(&local_88,0,2,0x10);
  puVar13 = (undefined8 *)local_88;
  uStack_80 = CONCAT44(uStack_80._4_4_,2);
  *(undefined ***)local_88 = &PTR_LAB_149e020b0;
  uVar19 = FUN_144a3f946();
  puVar13[2] = uVar19;
  *puVar13 = &PTR_FUN_14ba267f0;
  puVar13[3] = param_1;
  FUN_1448b6402(lVar18 + 0xb0,&local_108,&local_88);
  FUN_1449db362(&local_88);
  lVar18 = param_1[0x2c];
  lVar1 = param_1[0x2d];
  *(undefined8 *)(lVar18 + 0x570) = *(undefined8 *)(lVar1 + 0xa8);
  uVar2 = *(undefined4 *)(lVar1 + 0x78);
  uVar3 = *(undefined4 *)(lVar1 + 0x7c);
  uVar4 = *(undefined4 *)(lVar1 + 0x80);
  uVar5 = *(undefined4 *)(lVar1 + 0x84);
  uVar6 = *(undefined4 *)(lVar1 + 0x88);
  uVar7 = *(undefined4 *)(lVar1 + 0x8c);
  uVar8 = *(undefined4 *)(lVar1 + 0x90);
  uVar9 = *(undefined4 *)(lVar1 + 0x94);
  uVar10 = *(undefined4 *)(lVar1 + 0x9c);
  uVar11 = *(undefined4 *)(lVar1 + 0xa0);
  uVar12 = *(undefined4 *)(lVar1 + 0xa4);
  *(undefined4 *)(lVar18 + 0x560) = *(undefined4 *)(lVar1 + 0x98);
  *(undefined4 *)(lVar18 + 0x564) = uVar10;
  *(undefined4 *)(lVar18 + 0x568) = uVar11;
  *(undefined4 *)(lVar18 + 0x56c) = uVar12;
  *(undefined4 *)(lVar18 + 0x550) = uVar6;
  *(undefined4 *)(lVar18 + 0x554) = uVar7;
  *(undefined4 *)(lVar18 + 0x558) = uVar8;
  *(undefined4 *)(lVar18 + 0x55c) = uVar9;
  *(undefined4 *)(lVar18 + 0x540) = uVar2;
  *(undefined4 *)(lVar18 + 0x544) = uVar3;
  *(undefined4 *)(lVar18 + 0x548) = uVar4;
  *(undefined4 *)(lVar18 + 0x54c) = uVar5;
  FUN_1484f4aac(lVar18);
  *(undefined8 *)(lVar18 + 0x318) = *(undefined8 *)(lVar18 + 0x570);
  *(undefined4 *)(lVar18 + 0x308) = *(undefined4 *)(lVar18 + 0x560);
  *(undefined4 *)(lVar18 + 0x30c) = *(undefined4 *)(lVar18 + 0x564);
  *(undefined4 *)(lVar18 + 0x310) = *(undefined4 *)(lVar18 + 0x568);
  *(undefined4 *)(lVar18 + 0x314) = *(undefined4 *)(lVar18 + 0x56c);
  *(undefined4 *)(lVar18 + 0x2f8) = *(undefined4 *)(lVar18 + 0x550);
  *(undefined4 *)(lVar18 + 0x2fc) = *(undefined4 *)(lVar18 + 0x554);
  *(undefined4 *)(lVar18 + 0x300) = *(undefined4 *)(lVar18 + 0x558);
  *(undefined4 *)(lVar18 + 0x304) = *(undefined4 *)(lVar18 + 0x55c);
  *(undefined4 *)(lVar18 + 0x2e8) = *(undefined4 *)(lVar18 + 0x540);
  *(undefined4 *)(lVar18 + 0x2ec) = *(undefined4 *)(lVar18 + 0x544);
  *(undefined4 *)(lVar18 + 0x2f0) = *(undefined4 *)(lVar18 + 0x548);
  *(undefined4 *)(lVar18 + 0x2f4) = *(undefined4 *)(lVar18 + 0x54c);
  FUN_1484f464e(param_1[0x2c],1);
  *(undefined1 *)(param_1[0x2c] + 0x124) = 1;
  *(undefined8 *)(param_1[0x2c] + 0x11c) = 0x200000003;
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f54b4a FUN_148f54b4a body=183 status=ok
// SIG undefined FUN_148f54b4a(void)

undefined8 FUN_148f54b4a(undefined8 param_1,longlong param_2)

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
  uVar1 = FUN_1459f42a6();
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



// FUNCTION 148f54c02 FUN_148f54c02 body=148 status=ok
// SIG undefined FUN_148f54c02(void)

undefined8 FUN_148f54c02(undefined8 param_1)

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
  uVar1 = FUN_1459ef150();
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



// FUNCTION 148f54c98 FUN_148f54c98 body=237 status=ok
// SIG undefined FUN_148f54c98(void)

void FUN_148f54c98(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0x178);
  uVar2 = *(undefined8 *)(lVar1 + 0x130);
  uVar3 = *(undefined8 *)(lVar1 + 0x128);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(lVar1 + 0x120);
  *(undefined8 *)(param_1 + 0xf8) = uVar3;
  *(undefined8 *)(param_1 + 0x100) = uVar2;
  local_30 = 0x3ff0000000000000;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1401c9a0e(lVar1 + 0x138,&local_68);
  *(undefined8 *)(param_1 + 0x118) = local_58;
  *(undefined4 *)(param_1 + 0x108) = (undefined4)local_68;
  *(undefined4 *)(param_1 + 0x10c) = local_68._4_4_;
  *(undefined4 *)(param_1 + 0x110) = (undefined4)uStack_60;
  *(undefined4 *)(param_1 + 0x114) = uStack_60._4_4_;
  FUN_1484f5b28(*(undefined8 *)(param_1 + 0x160),1);
  local_58 = *(undefined8 *)(param_1 + 0x100);
  local_68 = *(undefined8 *)(param_1 + 0xf0);
  uStack_60 = *(undefined8 *)(param_1 + 0xf8);
  local_50 = *(undefined4 *)(param_1 + 0x108);
  uStack_4c = *(undefined4 *)(param_1 + 0x10c);
  uStack_48 = *(undefined4 *)(param_1 + 0x110);
  uStack_44 = *(undefined4 *)(param_1 + 0x114);
  local_40 = *(undefined8 *)(param_1 + 0x118);
  FUN_1484f5b04(*(undefined8 *)(param_1 + 0x160),1,&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f54d86 FUN_148f54d86 body=148 status=ok
// SIG undefined FUN_148f54d86(void)

undefined8 FUN_148f54d86(undefined8 param_1)

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
  uVar1 = FUN_14121c380();
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



// FUNCTION 148f54e1c FUN_148f54e1c body=361 status=ok
// SIG undefined FUN_148f54e1c(void)

void FUN_148f54e1c(longlong param_1,char param_2)

{
  longlong *plVar1;
  undefined1 auStack_a8 [40];
  undefined8 *local_80 [11];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = *(longlong **)(param_1 + 0x170);
  FUN_140056680(local_80,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,local_80);
  if (local_80[0] != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  plVar1 = *(longlong **)(param_1 + 0x178);
  FUN_140056680(local_80,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,local_80);
  if (local_80[0] != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  plVar1 = *(longlong **)(param_1 + 0x180);
  FUN_140056680(local_80,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,local_80);
  if (local_80[0] != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(**(longlong **)(param_1 + 0x168) + 0x2a8))();
  (**(code **)(**(longlong **)(param_1 + 0x160) + 0x2a8))();
  if (*(longlong *)(param_1 + 0x188) != 0) {
    if (param_2 == '\x01') {
      FUN_14851b666(*(undefined8 *)(*(longlong *)(param_1 + 0x188) + 0x58));
      FUN_143b84538(*(undefined8 *)(param_1 + 0x188),local_80);
      FUN_148f54f86(param_1,local_80);
      if (local_80[0] != (undefined8 *)0x0) {
        (**(code **)*local_80[0])(local_80[0],1);
      }
    }
    else {
      FUN_143b846cc();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f54f86 FUN_148f54f86 body=620 status=ok
// SIG undefined FUN_148f54f86(void)

void FUN_148f54f86(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_708 [40];
  char local_6e0 [8];
  longlong local_6d8;
  undefined1 local_6bc [4];
  wchar_t *local_6b8;
  undefined4 local_6b0;
  longlong local_698;
  undefined4 local_688;
  undefined4 uStack_684;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  undefined4 local_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined4 local_668;
  undefined4 uStack_664;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  longlong local_658;
  undefined8 uStack_650;
  undefined4 local_648;
  undefined4 uStack_644;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  longlong local_638;
  undefined8 uStack_630;
  undefined1 local_628 [16];
  longlong local_618;
  uint local_610;
  uint local_60c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_708;
  if (0 < *(int *)(*param_2 + 0x170)) {
    lVar2 = (**(code **)(*param_1 + 0x2c8))();
    local_6b8 = L"RevolveToolTransactionName";
    local_6b0 = 0x1a;
    FUN_1446e940c(local_6e0,&local_6b8);
    local_6b8 = L"UDrawAndRevolveTool";
    local_6b0 = 0x13;
    FUN_1446e940c(local_6bc,&local_6b8);
    FUN_140208bae(&local_6b8,local_6bc,local_6e0,L"Path Revolve Tool");
    (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x10))(lVar2 + 0x28,&local_6b8);
    if (local_6b8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_6b8 + 0x10))();
    }
    FUN_14850577a(&local_6b8,1);
    local_698 = param_1[0x13];
    if ((local_698 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(local_698);
    }
    local_648 = (undefined4)param_2[8];
    uStack_644 = *(undefined4 *)((longlong)param_2 + 0x44);
    uStack_640 = (undefined4)param_2[9];
    uStack_63c = *(undefined4 *)((longlong)param_2 + 0x4c);
    local_688 = (undefined4)param_2[1];
    uStack_684 = *(undefined4 *)((longlong)param_2 + 0xc);
    uStack_680 = (undefined4)param_2[2];
    uStack_67c = *(undefined4 *)((longlong)param_2 + 0x14);
    local_678 = (undefined4)param_2[3];
    uStack_674 = *(undefined4 *)((longlong)param_2 + 0x1c);
    uStack_670 = (undefined4)param_2[4];
    uStack_66c = *(undefined4 *)((longlong)param_2 + 0x24);
    local_668 = (undefined4)param_2[5];
    uStack_664 = *(undefined4 *)((longlong)param_2 + 0x2c);
    uStack_660 = (undefined4)param_2[6];
    uStack_65c = *(undefined4 *)((longlong)param_2 + 0x34);
    local_658 = param_2[7];
    local_638 = param_2[10];
    uStack_650 = 0;
    uStack_630 = 0;
    FUN_14020fad6(local_628,L"Revolve");
    lVar2 = FUN_14479d2ce(param_1[0x30] + 0xa8);
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar2);
    }
    uVar1 = local_610;
    lVar4 = (longlong)(int)local_610;
    local_610 = local_610 + 1;
    if (local_60c < local_610) {
      FUN_140655806(&local_618,uVar1);
    }
    *(longlong *)(local_618 + lVar4 * 8) = lVar2;
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar2);
    }
    FUN_148505bae(&local_6b8,*param_2);
    (**(code **)(*(longlong *)param_1[0x2e] + 0x2c0))((longlong *)param_1[0x2e],&local_6b8);
    uVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
    FUN_148505c7a(local_6e0,uVar3,&local_6b8);
    if ((local_6e0[0] == '\0') && (local_6d8 != 0)) {
      uVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
      FUN_1485509b4(uVar3,local_6d8);
    }
    lVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x18))(lVar2 + 0x28);
    FUN_1484c7624(&local_6b8);
  }
  if ((local_40 ^ (ulonglong)auStack_708) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f551f4 FUN_148f551f4 body=486 status=ok
// SIG undefined FUN_148f551f4(void)

void FUN_148f551f4(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = FUN_148f553db(DAT_14c951640);
  if ((param_1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_1);
  }
  *(longlong **)(lVar2 + 0x30) = param_1;
  FUN_1446ddc76(&local_40,"RevolveToolPreview",1);
  local_50 = 0;
  local_58 = 0;
  lVar3 = FUN_1484c90fb(lVar2,local_40,0,0);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar3);
  }
  param_1[0x31] = lVar3;
  lVar6 = lVar2 + 0x28;
  if (lVar2 == 0) {
    lVar6 = 0;
  }
  FUN_148504f74(lVar3,param_1[0x13],lVar6);
  FUN_148558526(*(undefined8 *)(param_1[0x31] + 0x58),0);
  FUN_14851b65c(*(undefined8 *)(param_1[0x31] + 0x58),1);
  lVar2 = param_1[0x31];
  uVar4 = (**(code **)(*param_1 + 0x2c8))(param_1);
  uVar4 = FUN_1485578f6(uVar4);
  uVar5 = FUN_14479d2ce(param_1[0x30] + 0xa8);
  FUN_1485052fe(lVar2,uVar5,uVar4);
  FUN_14851b88e(*(undefined8 *)(param_1[0x31] + 0x58),*(undefined1 *)(param_1[0x30] + 0xb5));
  lVar2 = param_1[0x31];
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14aefe820;
  uVar4 = FUN_144a3f946();
  puVar1[2] = uVar4;
  *puVar1 = &PTR_FUN_14ba26860;
  puVar1[3] = param_1;
  FUN_1484d607c(lVar2 + 0x28,local_48,&local_38);
  FUN_1449db362(&local_38);
  FUN_1485054ca(param_1[0x31],1);
  FUN_1485051e4(param_1[0x31]);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f553db FUN_148f553db body=148 status=ok
// SIG undefined FUN_148f553db(void)

undefined8 FUN_148f553db(undefined8 param_1)

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
  uVar1 = FUN_145b13438();
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



// FUNCTION 148f55470 FUN_148f55470 body=502 status=ok
// SIG undefined FUN_148f55470(void)

void FUN_148f55470(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_144a7484c(param_1[0x2f] + 0x138,&local_88);
  lVar4 = param_1[0x2f];
  local_58 = *(undefined8 *)(lVar4 + 0x130);
  uVar2 = *(undefined8 *)(lVar4 + 0x120);
  uVar3 = *(undefined8 *)(lVar4 + 0x128);
  local_50 = local_88;
  local_48 = local_80;
  uStack_44 = uStack_7c;
  uStack_40 = uStack_78;
  uStack_3c = uStack_74;
  local_38 = local_70;
  lVar4 = param_1[0x2c];
  *(undefined8 *)(lVar4 + 0x570) = local_70;
  *(ulonglong *)(lVar4 + 0x560) = CONCAT44(uStack_7c,local_80);
  *(ulonglong *)(lVar4 + 0x568) = CONCAT44(uStack_74,uStack_78);
  *(undefined8 *)(lVar4 + 0x550) = local_58;
  *(undefined8 *)(lVar4 + 0x558) = local_88;
  local_68._0_4_ = (undefined4)uVar2;
  local_68._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_60._0_4_ = (undefined4)uVar3;
  uStack_60._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  *(undefined4 *)(lVar4 + 0x540) = (undefined4)local_68;
  *(undefined4 *)(lVar4 + 0x544) = local_68._4_4_;
  *(undefined4 *)(lVar4 + 0x548) = (undefined4)uStack_60;
  *(undefined4 *)(lVar4 + 0x54c) = uStack_60._4_4_;
  local_68 = uVar2;
  uStack_60 = uVar3;
  FUN_1484f4aac(lVar4);
  *(undefined8 *)(lVar4 + 0x318) = *(undefined8 *)(lVar4 + 0x570);
  *(undefined4 *)(lVar4 + 0x308) = *(undefined4 *)(lVar4 + 0x560);
  *(undefined4 *)(lVar4 + 0x30c) = *(undefined4 *)(lVar4 + 0x564);
  *(undefined4 *)(lVar4 + 0x310) = *(undefined4 *)(lVar4 + 0x568);
  *(undefined4 *)(lVar4 + 0x314) = *(undefined4 *)(lVar4 + 0x56c);
  *(undefined4 *)(lVar4 + 0x2f8) = *(undefined4 *)(lVar4 + 0x550);
  *(undefined4 *)(lVar4 + 0x2fc) = *(undefined4 *)(lVar4 + 0x554);
  *(undefined4 *)(lVar4 + 0x300) = *(undefined4 *)(lVar4 + 0x558);
  *(undefined4 *)(lVar4 + 0x304) = *(undefined4 *)(lVar4 + 0x55c);
  *(undefined4 *)(lVar4 + 0x2e8) = *(undefined4 *)(lVar4 + 0x540);
  *(undefined4 *)(lVar4 + 0x2ec) = *(undefined4 *)(lVar4 + 0x544);
  *(undefined4 *)(lVar4 + 0x2f0) = *(undefined4 *)(lVar4 + 0x548);
  *(undefined4 *)(lVar4 + 0x2f4) = *(undefined4 *)(lVar4 + 0x54c);
  FUN_1484f1b84(param_1[0x2d],&local_68);
  FUN_148f54c98(param_1);
  FUN_1484f5afc(param_1[0x2c],*(undefined1 *)(param_1[0x2f] + 0x150));
  lVar4 = param_1[0x31];
  if (lVar4 != 0) {
    if (param_3 != 0) {
      lVar1 = *(longlong *)(param_3 + 0x20);
      FUN_1446f470e(&local_90,L"Material",1);
      lVar4 = param_1[0x31];
      if (lVar1 == local_90) {
        uVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
        uVar2 = FUN_1485578f6(uVar2);
        uVar3 = FUN_14479d2ce(param_1[0x30] + 0xa8);
        FUN_1485052fe(lVar4,uVar3,uVar2);
        lVar4 = param_1[0x31];
      }
    }
    FUN_14851b88e(*(undefined8 *)(lVar4 + 0x58),*(undefined1 *)(param_1[0x30] + 0xb5));
    FUN_1485051e4(param_1[0x31]);
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f55668 FUN_148f55668 body=81 status=ok
// SIG undefined FUN_148f55668(void)

void FUN_148f55668(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x168);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2b8))(plVar1,param_2);
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FUN_148505016(*(longlong *)(param_1 + 0x188),param_2);
    return;
  }
  return;
}



// FUNCTION 148f556ba FUN_148f556ba body=518 status=ok
// SIG undefined FUN_148f556ba(void)

void FUN_148f556ba(longlong *param_1,longlong *param_2)

{
  float fVar1;
  longlong *plVar2;
  double dVar3;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  float local_d0;
  undefined4 local_c8;
  undefined1 local_c0;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x2c8))();
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x378))(plVar2);
  (**(code **)(*plVar2 + 0x18))(plVar2,param_1 + 0x14);
  plVar2 = (longlong *)param_1[0x2d];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x2b0))(plVar2,param_2);
    fVar1 = *(float *)(param_1 + 0x1c);
    plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2);
    dVar3 = (double)FUN_148556b6a(param_1 + 0x14,param_1 + 0x1e,0x4056800000000000);
    dVar3 = dVar3 * (double)(fVar1 / 90.0);
    local_a0 = (double)param_1[0x20] - (double)param_1[0x23] * dVar3;
    local_a8 = (double)param_1[0x1f] - (double)param_1[0x22] * dVar3;
    local_b0 = (double)param_1[0x1e] - dVar3 * (double)param_1[0x21];
    local_88 = (double)param_1[0x23] * dVar3 + (double)param_1[0x20];
    local_90 = (double)param_1[0x22] * dVar3 + (double)param_1[0x1f];
    local_98 = dVar3 * (double)param_1[0x21] + (double)param_1[0x1e];
    local_80 = DAT_14c759020;
    local_7c = DAT_14c758ca0;
    local_78 = DAT_14c759020;
    local_74 = 0x3f800000;
    local_c0 = 1;
    local_d8 = 1;
    local_c8 = 0;
    local_d0 = fVar1 / 90.0;
    (**(code **)(*plVar2 + 0x30))(plVar2);
  }
  plVar2 = (longlong *)param_1[0x2c];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x2b0))(plVar2,param_2);
  }
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f5591e FUN_148f5591e body=197 status=ok
// SIG undefined FUN_148f5591e(void)

longlong * FUN_148f5591e(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)FUN_148f559e4(param_2[1]);
  (**(code **)(*plVar1 + 0x378))(plVar1,*param_2);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0x3ff0000000000000;
  FUN_148558567(&local_50,param_2[1],&local_78,0x407f400000000000);
  plVar1[0x31] = local_20;
  *(undefined4 *)(plVar1 + 0x2f) = local_30;
  *(undefined4 *)((longlong)plVar1 + 0x17c) = uStack_2c;
  *(undefined4 *)(plVar1 + 0x30) = uStack_28;
  *(undefined4 *)((longlong)plVar1 + 0x184) = uStack_24;
  *(undefined4 *)(plVar1 + 0x2d) = local_40;
  *(undefined4 *)((longlong)plVar1 + 0x16c) = uStack_3c;
  *(undefined4 *)(plVar1 + 0x2e) = uStack_38;
  *(undefined4 *)((longlong)plVar1 + 0x174) = uStack_34;
  *(undefined4 *)(plVar1 + 0x2b) = local_50;
  *(undefined4 *)((longlong)plVar1 + 0x15c) = uStack_4c;
  *(undefined4 *)(plVar1 + 0x2c) = uStack_48;
  *(undefined4 *)((longlong)plVar1 + 0x164) = uStack_44;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f559e4 FUN_148f559e4 body=148 status=ok
// SIG undefined FUN_148f559e4(void)

undefined8 FUN_148f559e4(undefined8 param_1)

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
  uVar1 = FUN_145b9af86();
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



// FUNCTION 148f55a82 FUN_148f55a82 body=1869 status=ok
// SIG undefined FUN_148f55a82(void)

void FUN_148f55a82(longlong *param_1)

{
  undefined4 uVar1;
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
  ulonglong uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  longlong lVar16;
  undefined8 uVar17;
  longlong lVar18;
  char cVar19;
  longlong *plVar20;
  undefined8 uVar21;
  longlong lVar22;
  undefined ***pppuVar23;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined8 uStack_140;
  undefined ***local_138;
  undefined8 uStack_130;
  undefined **local_128;
  undefined1 *puStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined ***local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined **local_d8;
  longlong lStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 *local_b8;
  undefined8 local_a8;
  undefined **local_98;
  longlong *local_90;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  longlong *local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1484416be();
  plVar20 = (longlong *)FUN_148f561d0(DAT_14c951640);
  (**(code **)(*plVar20 + 0x358))(plVar20,param_1 + 0x13);
  local_138 = (undefined ***)0x0;
  local_128 = &PTR_LAB_14aedb970;
  puStack_120 = &LAB_148441f14;
  local_148 = (undefined8 *)&LAB_14844e6fa;
  FUN_14840df3c(plVar20 + 0x10,1,&local_148);
  if (local_148 != (undefined8 *)0x0) {
    pppuVar23 = local_138;
    if (local_138 == (undefined ***)0x0) {
      pppuVar23 = &local_128;
    }
    (*(code *)(*pppuVar23)[2])();
  }
  (**(code **)(*param_1 + 0x2e8))(param_1,plVar20,0);
  plVar20 = (longlong *)FUN_1484c5a9a(param_1);
  if ((plVar20 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar20);
  }
  param_1[0x14] = (longlong)plVar20;
  FUN_140056680(&local_148,&DAT_149dfb77a);
  (**(code **)(*plVar20 + 0x2a8))(plVar20,param_1,&local_148);
  if (local_148 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14851cac4(param_1[0x14]);
  local_68 = 0;
  local_58 = &PTR_LAB_14ba268d0;
  local_78 = FUN_14436cb1c;
  local_50 = param_1;
  FUN_1484c5b30(param_1[0x14] + 0x28,param_1[0x14] + 0xa8);
  plVar20 = (longlong *)FUN_148f56265(param_1);
  if ((plVar20 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar20);
  }
  param_1[0x15] = (longlong)plVar20;
  FUN_140056680(&local_148,&DAT_149dfb77a);
  (**(code **)(*plVar20 + 0x2a8))(plVar20,param_1,&local_148);
  if (local_148 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_a8 = 0;
  local_98 = &PTR_LAB_14ba268f0;
  local_b8 = &LAB_14436cc08;
  local_90 = param_1;
  FUN_1484c9b00(param_1[0x15] + 0x28,param_1[0x15] + 0xb8);
  plVar20 = (longlong *)FUN_148f54d86(param_1);
  if ((plVar20 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar20);
  }
  param_1[0xaf] = (longlong)plVar20;
  (**(code **)(*plVar20 + 0x2a0))(plVar20,param_1);
  lVar22 = param_1[0xaf];
  local_148 = *(undefined8 **)(lVar22 + 0x30);
  uVar12 = *(ulonglong *)(lVar22 + 0x38);
  local_138 = *(undefined ****)(lVar22 + 0x40);
  uVar21 = *(undefined8 *)(lVar22 + 0x48);
  local_128 = *(undefined ***)(lVar22 + 0x50);
  puStack_120 = *(undefined1 **)(lVar22 + 0x58);
  local_118 = *(undefined8 *)(lVar22 + 0x60);
  uStack_110 = *(undefined8 *)(lVar22 + 0x68);
  uVar15 = local_118;
  uVar17 = uStack_110;
  *(ulonglong *)(lVar22 + 0x60) = CONCAT44(uStack_c4,local_c8);
  *(ulonglong *)(lVar22 + 0x68) = CONCAT44(uStack_bc,uStack_c0);
  *(undefined ***)(lVar22 + 0x50) = &PTR_LAB_14ba26910;
  *(longlong **)(lVar22 + 0x58) = param_1;
  *(undefined8 *)(lVar22 + 0x40) = 0;
  *(ulonglong *)(lVar22 + 0x48) = CONCAT44(uStack_dc,uStack_e0);
  *(undefined1 **)(lVar22 + 0x30) = &LAB_14436cc70;
  *(ulonglong *)(lVar22 + 0x38) = CONCAT44(uStack_ec,uStack_f0);
  uStack_140._0_4_ = (undefined4)uVar12;
  uStack_140._4_4_ = (undefined4)(uVar12 >> 0x20);
  uStack_130._0_4_ = (undefined4)uVar21;
  uStack_130._4_4_ = (undefined4)((ulonglong)uVar21 >> 0x20);
  local_118._4_4_ = (undefined4)((ulonglong)local_118 >> 0x20);
  uStack_110._4_4_ = (undefined4)((ulonglong)uStack_110 >> 0x20);
  local_f8 = local_148;
  uStack_f0 = (undefined4)uStack_140;
  uStack_ec = uStack_140._4_4_;
  local_d8 = local_128;
  lStack_d0 = (longlong)puStack_120;
  local_c8 = (undefined4)local_118;
  uStack_c4 = local_118._4_4_;
  uStack_c0 = (undefined4)uStack_110;
  uStack_bc = uStack_110._4_4_;
  local_e8 = local_138;
  uStack_e0 = (undefined4)uStack_130;
  uStack_dc = uStack_130._4_4_;
  uStack_140 = uVar12;
  uStack_130 = uVar21;
  local_118 = uVar15;
  uStack_110 = uVar17;
  if (local_148 != (undefined8 *)0x0) {
    pppuVar23 = local_e8;
    if (local_138 == (undefined ***)0x0) {
      pppuVar23 = &local_d8;
    }
    (*(code *)(*pppuVar23)[2])();
  }
  lVar22 = param_1[0xaf];
  local_148 = (undefined8 *)0x0;
  uStack_140 = uStack_140 & 0xffffffff00000000;
  FUN_1446efa72(&local_148,0,2,0x10);
  puVar14 = local_148;
  uStack_140 = CONCAT44(uStack_140._4_4_,2);
  *local_148 = &PTR_LAB_149e020b0;
  uVar21 = FUN_144a3f946();
  puVar14[2] = uVar21;
  *puVar14 = &PTR_FUN_14ba26930;
  puVar14[3] = param_1;
  FUN_1448b6402(lVar22 + 0xb0,&local_f8,&local_148);
  FUN_1449db362(&local_148);
  FUN_1484f0d7a(param_1[0xaf],param_1[0x1f],param_1 + 0x2b);
  plVar20 = (longlong *)FUN_148f4925a(param_1);
  if ((plVar20 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar20);
  }
  param_1[0xae] = (longlong)plVar20;
  (**(code **)(*plVar20 + 0x2a0))(plVar20,param_1);
  FUN_1484f6c9e(param_1[0xae] + 0x30,*(undefined8 *)(param_1[0xaf] + 200),0,0);
  plVar20 = (longlong *)FUN_148f491c5(param_1);
  if ((plVar20 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar20);
  }
  param_1[0x17] = (longlong)plVar20;
  FUN_140056680(&local_148,&DAT_149dfb77a);
  (**(code **)(*plVar20 + 0x2a8))(plVar20,param_1,&local_148);
  if (local_148 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  *(undefined1 *)(param_1[0x17] + 0xb6) = 1;
  lVar22 = FUN_1484e47e5(param_1);
  if ((lVar22 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar22);
  }
  param_1[0x2a] = lVar22;
  FUN_14851b11a(lVar22,param_1[0x1f],&DAT_14c846480);
  uVar21 = 0;
  FUN_148558526(param_1[0x2a],0);
  FUN_14851bab8(param_1[0x2a],0);
  cVar19 = FUN_144729dda(param_1[0x17] + 0xa8);
  if (cVar19 != '\0') {
    uVar21 = FUN_14479d2ce(param_1[0x17] + 0xa8);
  }
  FUN_14851b338(param_1[0x2a],uVar21);
  *(undefined1 *)(param_1 + 0xac) = 0;
  lVar22 = FUN_14855653a();
  param_1[0x4c] = lVar22;
  local_148 = (undefined8 *)param_1[0x44];
  lVar22 = param_1[0x45];
  local_138 = (undefined ***)param_1[0x46];
  lVar13 = param_1[0x47];
  local_128 = (undefined **)param_1[0x48];
  puStack_120 = (undefined1 *)param_1[0x49];
  local_118 = param_1[0x4a];
  uStack_110 = param_1[0x4b];
  lVar16 = local_118;
  lVar18 = uStack_110;
  param_1[0x4a] = CONCAT44(uStack_c4,local_c8);
  param_1[0x4b] = CONCAT44(uStack_bc,uStack_c0);
  param_1[0x48] = (longlong)&PTR_LAB_14ba269a0;
  param_1[0x49] = (longlong)param_1;
  param_1[0x46] = 0;
  param_1[0x47] = CONCAT44(uStack_dc,uStack_e0);
  param_1[0x44] = (longlong)&LAB_14436cec6;
  param_1[0x45] = CONCAT44(uStack_ec,uStack_f0);
  uStack_140._0_4_ = (undefined4)lVar22;
  uStack_140._4_4_ = (undefined4)((ulonglong)lVar22 >> 0x20);
  uStack_130._0_4_ = (undefined4)lVar13;
  uStack_130._4_4_ = (undefined4)((ulonglong)lVar13 >> 0x20);
  local_118._4_4_ = (undefined4)((ulonglong)local_118 >> 0x20);
  uStack_110._4_4_ = (undefined4)((ulonglong)uStack_110 >> 0x20);
  local_c8 = (undefined4)local_118;
  uStack_c4 = local_118._4_4_;
  uStack_c0 = (undefined4)uStack_110;
  uStack_bc = uStack_110._4_4_;
  local_d8 = local_128;
  lStack_d0 = (longlong)puStack_120;
  local_e8 = local_138;
  uStack_e0 = (undefined4)uStack_130;
  uStack_dc = uStack_130._4_4_;
  local_f8 = local_148;
  uStack_f0 = (undefined4)uStack_140;
  uStack_ec = uStack_140._4_4_;
  uStack_140 = lVar22;
  uStack_130 = lVar13;
  local_118 = lVar16;
  uStack_110 = lVar18;
  if (local_148 != (undefined8 *)0x0) {
    pppuVar23 = &local_d8;
    if (local_138 != (undefined ***)0x0) {
      pppuVar23 = local_e8;
    }
    (*(code *)(*pppuVar23)[2])(pppuVar23);
  }
  lVar22 = param_1[0xaf];
  uVar1 = *(undefined4 *)(lVar22 + 0x7c);
  uVar2 = *(undefined4 *)(lVar22 + 0x80);
  uVar3 = *(undefined4 *)(lVar22 + 0x84);
  uVar4 = *(undefined4 *)(lVar22 + 0x88);
  uVar5 = *(undefined4 *)(lVar22 + 0x8c);
  uVar6 = *(undefined4 *)(lVar22 + 0x90);
  uVar7 = *(undefined4 *)(lVar22 + 0x94);
  uVar8 = *(undefined4 *)(lVar22 + 0x98);
  uVar9 = *(undefined4 *)(lVar22 + 0x9c);
  uVar10 = *(undefined4 *)(lVar22 + 0xa0);
  uVar11 = *(undefined4 *)(lVar22 + 0xa4);
  *(undefined4 *)(param_1 + 0x79) = *(undefined4 *)(lVar22 + 0x78);
  *(undefined4 *)((longlong)param_1 + 0x3cc) = uVar1;
  *(undefined4 *)(param_1 + 0x7a) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x3d4) = uVar3;
  *(undefined4 *)(param_1 + 0x7b) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x3dc) = uVar5;
  *(undefined4 *)(param_1 + 0x7c) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x3e4) = uVar7;
  *(undefined4 *)(param_1 + 0x7d) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x3ec) = uVar9;
  *(undefined4 *)(param_1 + 0x7e) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x3f4) = uVar11;
  param_1[0x7f] = *(longlong *)(lVar22 + 0xa8);
  plVar20 = (longlong *)FUN_148f562fa(param_1);
  if ((plVar20 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar20);
  }
  param_1[0x16] = (longlong)plVar20;
  FUN_140056680(&local_148,&DAT_149dfb77a);
  (**(code **)(*plVar20 + 0x2a8))(plVar20,param_1,&local_148);
  if (local_148 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  plVar20 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  plVar20 = (longlong *)(**(code **)(*plVar20 + 0x378))(plVar20);
  (**(code **)(*plVar20 + 0x30))(plVar20,&local_148);
  *(undefined1 *)(param_1[0x16] + 0xa9) = local_148._0_1_;
  cVar19 = FUN_14851ca9a(param_1[0x14]);
  if (cVar19 != '\0') {
    (**(code **)(*param_1 + 0x308))(param_1,param_1[0x14]);
  }
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x15]);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x16]);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x17]);
  FUN_148f56390(param_1);
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148f561d0 FUN_148f561d0 body=148 status=ok
// SIG undefined FUN_148f561d0(void)

undefined8 FUN_148f561d0(undefined8 param_1)

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
  uVar1 = FUN_145b724b6();
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



// FUNCTION 148f56265 FUN_148f56265 body=148 status=ok
// SIG undefined FUN_148f56265(void)

undefined8 FUN_148f56265(undefined8 param_1)

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
  uVar1 = FUN_1459f447e();
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


