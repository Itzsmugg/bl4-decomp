// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14254cc70 FUN_14254cc70 body=1885 status=ok
// SIG undefined FUN_14254cc70(void)

void FUN_14254cc70(longlong param_1,longlong param_2,longlong param_3,char param_4,int *param_5)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined2 uVar13;
  undefined2 *puVar14;
  ulonglong uVar15;
  byte bVar16;
  uint uVar17;
  longlong *plVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint uVar22;
  undefined8 *in_stack_fffffffffffffd48;
  undefined1 local_2a8 [224];
  undefined8 local_1c8;
  undefined1 local_1c0 [104];
  undefined **local_158;
  short local_150;
  int local_14c;
  undefined **local_118;
  ushort local_110;
  undefined2 local_10e;
  int local_10c;
  undefined2 *local_100;
  undefined1 local_d8 [8];
  short local_d0;
  uint local_cc;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined4 local_74;
  longlong *local_70;
  int local_68;
  char local_61;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  if (((*(byte *)(param_3 + 8) & 1) == 0) && (*param_5 < 1)) {
    local_158 = &PTR_FUN_149e18960;
    local_150 = 2;
    local_118 = &PTR_FUN_149e18960;
    local_110 = 2;
    local_98 = param_2 + 0x1a;
    local_90 = param_2 + 8;
    local_68 = (int)param_4;
    plVar18 = (longlong *)0x0;
    uVar22 = 0;
    uVar4 = 1;
    local_88 = param_2;
    local_80 = param_3;
    local_61 = param_4;
    while ((char)uVar4 != '\0') {
      sVar1 = *(short *)(local_80 + 8);
      if ((int)uVar22 < 0) {
        uVar17 = *(uint *)(local_80 + 0xc);
        uVar15 = 0;
        uVar20 = uVar15;
      }
      else {
        uVar17 = *(uint *)(local_80 + 0xc);
        uVar19 = (int)sVar1 >> 5;
        if (sVar1 < 0) {
          uVar19 = uVar17;
        }
        uVar15 = (ulonglong)uVar19;
        uVar20 = uVar15;
        if ((int)uVar22 <= (int)uVar19) {
          uVar20 = (ulonglong)uVar22;
        }
      }
      uVar19 = (int)sVar1 >> 5;
      if (sVar1 < 0) {
        uVar19 = uVar17;
      }
      uVar8 = FUN_1424a8940(local_80,CONCAT62((int6)(uVar15 >> 0x10),0x3b),uVar20,
                            uVar19 - (int)uVar20);
      iVar5 = (int)uVar8;
      if (iVar5 == -1) {
        if (*(short *)(local_80 + 8) < 0) {
          iVar7 = *(int *)(local_80 + 0xc);
        }
        else {
          iVar7 = (int)*(short *)(local_80 + 8) >> 5;
        }
        local_74 = 0;
      }
      else {
        local_74 = (undefined4)CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
        iVar7 = iVar5;
      }
      FUN_1424a7950(local_d8,local_80,uVar22,iVar7 - uVar22);
      uVar17 = local_cc;
      if (-1 < local_d0) {
        uVar17 = (int)local_d0 >> 5;
      }
      uVar19 = (int)uVar17 >> 0x1f & uVar17;
      iVar6 = FUN_1424a8940(local_d8,0x3d,uVar19,uVar17 - uVar19);
      uVar4 = (undefined4)((ulonglong)in_stack_fffffffffffffd48 >> 0x20);
      if (iVar6 == -1) {
        FUN_1424a7600(&local_158,local_d8,0);
        FUN_1424a7130(&local_118);
      }
      else {
        FUN_1424a8e40();
        if (iVar6 < -1) {
          uVar17 = 0;
        }
        else {
          uVar17 = (int)local_d0 >> 5;
          if (local_d0 < 0) {
            uVar17 = local_cc;
          }
          if (iVar6 < (int)uVar17) {
            uVar17 = iVar6 + 1;
          }
        }
        uVar19 = (int)local_d0 >> 5;
        if (local_d0 < 0) {
          uVar19 = local_cc;
        }
        iVar6 = local_14c;
        if (-1 < local_150) {
          iVar6 = (int)local_150 >> 5;
        }
        uVar20 = CONCAT44(uVar4,uVar17);
        FUN_1424a9610(&local_158,0,iVar6,local_d8,uVar20,uVar19 - uVar17);
        FUN_1424a8e40(&local_118);
        iVar6 = local_10c;
        if (-1 < (short)local_110) {
          iVar6 = (int)(short)local_110 >> 5;
        }
        in_stack_fffffffffffffd48 = (undefined8 *)(uVar20 & 0xffffffff00000000);
        FUN_1424a9610(&local_118,0,iVar6,local_d8,in_stack_fffffffffffffd48,1);
      }
      iVar6 = FUN_1424a9a40(&local_158);
      uVar4 = (undefined4)((ulonglong)in_stack_fffffffffffffd48 >> 0x20);
      for (plVar9 = plVar18; plVar9 != (longlong *)0x0; plVar9 = (longlong *)plVar9[2]) {
        if ((int)plVar9[1] == iVar6) {
          lVar21 = *plVar9;
          goto LAB_14254d1bf;
        }
      }
      plVar9 = (longlong *)thunk_FUN_1424da030(0x18);
      if (plVar9 == (longlong *)0x0) {
        local_70 = (longlong *)0x0;
        *param_5 = 7;
        while (plVar18 != (longlong *)0x0) {
          plVar9 = (longlong *)plVar18[2];
          if (*plVar18 != 0) {
            FUN_142537ca0();
          }
          FUN_1401773f0(plVar18);
          plVar18 = plVar9;
        }
LAB_14254d405:
        FUN_140859a90(local_d8);
        goto LAB_14254d411;
      }
      *plVar9 = 0;
      *(undefined4 *)(plVar9 + 1) = 0;
      plVar9[2] = 0;
      local_1c8 = 0x3d737265626d756e;
      local_1c0[0] = 0;
      local_70 = plVar9;
      FUN_1424a83f0(&local_158,0,iVar7 - uVar22,local_1c0,CONCAT44(uVar4,0x5c),0);
      in_stack_fffffffffffffd48 = &local_1c8;
      FUN_1412ae150(local_2a8,local_90,local_98,
                    (longlong)*(int *)(local_88 + 0x20) + *(longlong *)(local_88 + 0xd0),
                    in_stack_fffffffffffffd48);
      *(int *)(plVar9 + 1) = iVar6;
      plVar9[2] = (longlong)plVar18;
      plVar10 = (longlong *)FUN_140236d20(local_2a8);
      if (*param_5 < 1) {
        (**(code **)(*plVar10 + 200))(plVar10,0);
        in_stack_fffffffffffffd48 =
             (undefined8 *)((ulonglong)in_stack_fffffffffffffd48 & 0xffffffff00000000);
        plVar11 = (longlong *)
                  __RTDynamicCast(plVar10,0,&icu_64::NumberFormat::RTTI_Type_Descriptor,
                                  &icu_64::DecimalFormat::RTTI_Type_Descriptor,
                                  in_stack_fffffffffffffd48);
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar11 + 0x208))(plVar11,0);
        }
        (**(code **)(*plVar10 + 0xb0))(plVar10);
        (**(code **)(*plVar10 + 0xe8))(plVar10);
        puVar12 = (undefined8 *)thunk_FUN_1424da030(0x20);
        if (puVar12 == (undefined8 *)0x0) {
          (**(code **)*plVar10)(plVar10);
          *param_5 = 7;
          goto LAB_14254d054;
        }
        puVar12[1] = 0;
        puVar12[2] = 0;
        *puVar12 = icu_64::SharedNumberFormat::vftable;
        puVar12[3] = plVar10;
      }
      else {
LAB_14254d054:
        puVar12 = (undefined8 *)0x0;
      }
      if ((undefined8 *)*plVar9 != puVar12) {
        if ((undefined8 *)*plVar9 != (undefined8 *)0x0) {
          FUN_142537ca0();
        }
        *plVar9 = (longlong)puVar12;
        if (puVar12 != (undefined8 *)0x0) {
          FUN_142537c90(puVar12);
        }
      }
      plVar9 = local_70;
      iVar7 = *param_5;
      if (iVar7 < 1) {
        lVar21 = *local_70;
        local_70 = (longlong *)0x0;
      }
      else {
        plVar9 = plVar18;
        if (plVar18 == (longlong *)0x0) {
          plVar18 = (longlong *)0x0;
        }
        else {
          do {
            plVar10 = (longlong *)plVar9[2];
            if (*plVar9 != 0) {
              FUN_142537ca0();
            }
            FUN_1401773f0(plVar9);
            plVar9 = plVar10;
          } while (plVar10 != (longlong *)0x0);
        }
        lVar21 = 0;
        plVar9 = plVar18;
      }
      FUN_1414b3f60(local_2a8);
      plVar18 = local_70;
      if (local_70 != (longlong *)0x0) {
        if (*local_70 != 0) {
          FUN_142537ca0();
        }
        FUN_1401773f0(plVar18);
      }
      plVar18 = plVar9;
      if (0 < iVar7) goto LAB_14254d405;
LAB_14254d1bf:
      if ((local_110 & 1) == 0) {
        if ((short)local_110 < 0) {
          if (local_10c != 0) goto LAB_14254d1e1;
LAB_14254d28e:
          uVar13 = 0xffff;
        }
        else {
          if ((short)local_110 >> 5 == 0) goto LAB_14254d28e;
LAB_14254d1e1:
          puVar14 = &local_10e;
          if ((local_110 & 2) == 0) {
            puVar14 = local_100;
          }
          uVar13 = *puVar14;
        }
        iVar7 = FUN_1426051e0(uVar13);
        if (iVar7 == 0x26) {
          *param_5 = 3;
          while (plVar18 != (longlong *)0x0) {
            plVar9 = (longlong *)plVar18[2];
            if (*plVar18 != 0) {
              FUN_142537ca0();
            }
            FUN_1401773f0(plVar18);
            plVar18 = plVar9;
          }
          goto LAB_14254d405;
        }
        lVar2 = *(longlong *)(param_1 + 800);
        lVar3 = *(longlong *)(lVar2 + (longlong)iVar7 * 8);
        if (lVar3 != lVar21) {
          if (lVar3 != 0) {
            FUN_142537ca0();
          }
          *(longlong *)(lVar2 + (longlong)iVar7 * 8) = lVar21;
          if (lVar21 != 0) {
            FUN_142537c90(lVar21);
          }
        }
      }
      else if (local_68 == 2) {
LAB_14254d223:
        for (bVar16 = 0; bVar16 < 0x10; bVar16 = bVar16 + 1) {
          lVar2 = *(longlong *)(param_1 + 800);
          iVar7 = (&DAT_1499e0820)[bVar16];
          lVar3 = *(longlong *)(lVar2 + (longlong)iVar7 * 8);
          if (lVar3 != lVar21) {
            if (lVar3 != 0) {
              FUN_142537ca0();
            }
            *(longlong *)(lVar2 + (longlong)iVar7 * 8) = lVar21;
            if (lVar21 != 0) {
              FUN_142537c90(lVar21);
            }
          }
        }
        if (local_61 != '\0') {
LAB_14254d2ed:
          for (bVar16 = 0; bVar16 < 10; bVar16 = bVar16 + 1) {
            lVar2 = *(longlong *)(param_1 + 800);
            iVar7 = (&DAT_1499e0860)[bVar16];
            lVar3 = *(longlong *)(lVar2 + (longlong)iVar7 * 8);
            if (lVar3 != lVar21) {
              if (lVar3 != 0) {
                FUN_142537ca0();
              }
              *(longlong *)(lVar2 + (longlong)iVar7 * 8) = lVar21;
              if (lVar21 != 0) {
                FUN_142537c90(lVar21);
              }
            }
          }
        }
      }
      else {
        if (local_68 == 1) goto LAB_14254d2ed;
        if (local_68 == 0) goto LAB_14254d223;
      }
      uVar22 = iVar5 + 1;
      FUN_140859a90(local_d8);
      uVar4 = local_74;
    }
    while (plVar18 != (longlong *)0x0) {
      plVar9 = (longlong *)plVar18[2];
      if (*plVar18 != 0) {
        FUN_142537ca0();
      }
      FUN_1401773f0(plVar18);
      plVar18 = plVar9;
    }
LAB_14254d411:
    FUN_140859a90(&local_118);
    FUN_140859a90(&local_158);
  }
  return;
}



// FUNCTION 14254d480 Unwind@14254d480 body=38 status=ok
// SIG undefined Unwind@14254d480(void)

void Unwind_14254d480(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14254d4b0 Unwind@14254d4b0 body=38 status=ok
// SIG undefined Unwind@14254d4b0(void)

void Unwind_14254d4b0(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14254d4e0 Unwind@14254d4e0 body=38 status=ok
// SIG undefined Unwind@14254d4e0(void)

void Unwind_14254d4e0(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14254d510 Unwind@14254d510 body=38 status=ok
// SIG undefined Unwind@14254d510(void)

void Unwind_14254d510(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14254d540 Unwind@14254d540 body=64 status=ok
// SIG undefined Unwind@14254d540(void)

void Unwind_14254d540(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x30);
  return;
}



// FUNCTION 14254d580 Unwind@14254d580 body=67 status=ok
// SIG undefined Unwind@14254d580(void)

void Unwind_14254d580(undefined8 param_1,longlong param_2)

{
  FUN_1425509c0(param_2 + 0x268);
  return;
}



// FUNCTION 14254d5d0 Unwind@14254d5d0 body=38 status=ok
// SIG undefined Unwind@14254d5d0(void)

void Unwind_14254d5d0(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14254d600 Unwind@14254d600 body=67 status=ok
// SIG undefined Unwind@14254d600(void)

void Unwind_14254d600(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x200);
  return;
}



// FUNCTION 14254d650 Unwind@14254d650 body=79 status=ok
// SIG undefined Unwind@14254d650(void)

void Unwind_14254d650(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x1c0);
  FUN_140859a90(param_2 + 0x180);
  return;
}



// FUNCTION 14254d6a0 FUN_14254d6a0 body=531 status=ok
// SIG undefined FUN_14254d6a0(void)

longlong * FUN_14254d6a0(longlong *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 local_3c;
  longlong *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_1424bd6e0();
  *param_1 = (longlong)icu_64::SimpleDateFormat::vftable;
  local_38 = param_1;
  FUN_1424a6be0(param_1 + 0x2c,param_2);
  plVar1 = local_38 + 0x34;
  local_38[0x34] = (longlong)&PTR_FUN_149e18960;
  *(undefined2 *)(local_38 + 0x35) = 2;
  plVar2 = local_38 + 0x3c;
  local_38[0x3c] = (longlong)&PTR_FUN_149e18960;
  *(undefined2 *)(local_38 + 0x3d) = 2;
  plVar7 = local_38 + 0x44;
  FUN_1424a3ce0(plVar7,param_3);
  local_38[0x61] = 0;
  local_38[0x6b] = 0;
  local_38[100] = 0;
  local_38[0x65] = 0;
  local_38[0x66] = 0;
  local_38[0x67] = 0;
  local_38[0x68] = 0;
  local_38[0x69] = 0;
  FUN_1424a7130(plVar1);
  FUN_1424a7130(plVar2);
  local_3c = 0;
  (**(code **)(*local_38 + 0xd0))(local_38,0,1,&local_3c);
  (**(code **)(*local_38 + 0xd0))(local_38,1,1,&local_3c);
  (**(code **)(*local_38 + 0xd0))(local_38,2,1,&local_3c);
  (**(code **)(*local_38 + 0xd0))(local_38,3,1,&local_3c);
  if (*param_4 < 1) {
    uVar5 = FUN_1424b77f0();
    lVar6 = FUN_1424cc240(uVar5,plVar7,param_4);
    local_38[0x29] = lVar6;
  }
  lVar6 = FUN_1425fc7b0(plVar7,param_4);
  local_38[0x60] = lVar6;
  FUN_14254ca50(local_38,plVar7,param_4);
  if ((longlong *)local_38[0x29] != (longlong *)0x0) {
    cVar3 = (**(code **)(*(longlong *)local_38[0x29] + 0x160))();
    *(char *)(local_38 + 0x6a) = cVar3;
    if (cVar3 == '\0') {
      local_38[0x62] = 0x10000000000000;
      uVar4 = 0xffffffff;
    }
    else {
      lVar6 = (**(code **)(*(longlong *)local_38[0x29] + 0x168))();
      local_38[0x62] = lVar6;
      uVar4 = (**(code **)(*(longlong *)local_38[0x29] + 0x170))();
    }
    *(undefined4 *)((longlong)local_38 + 0x31c) = uVar4;
  }
  return local_38;
}



// FUNCTION 14254d8c0 Unwind@14254d8c0 body=40 status=ok
// SIG undefined Unwind@14254d8c0(void)

void Unwind_14254d8c0(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 14254d8f0 Unwind@14254d8f0 body=58 status=ok
// SIG undefined Unwind@14254d8f0(void)

void Unwind_14254d8f0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x38));
  FUN_140859a90(*(undefined8 *)(param_2 + 0x30));
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14254d930 Unwind@14254d930 body=40 status=ok
// SIG undefined Unwind@14254d930(void)

void Unwind_14254d930(undefined8 param_1,longlong param_2)

{
  FUN_1424bd8b0(*(undefined8 *)(param_2 + 0x50));
  return;
}



// FUNCTION 14254d960 FUN_14254d960 body=472 status=ok
// SIG undefined FUN_14254d960(void)

longlong *
FUN_14254d960(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             int *param_5)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 local_3c;
  longlong *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_1424bd6e0();
  *param_1 = (longlong)icu_64::SimpleDateFormat::vftable;
  param_1[0x2c] = (longlong)&PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x2d) = 2;
  param_1[0x34] = (longlong)&PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x35) = 2;
  param_1[0x3c] = (longlong)&PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x3d) = 2;
  local_38 = param_1;
  FUN_1424a3ce0(param_1 + 0x44,param_4);
  local_38[0x6b] = 0;
  local_38[0x60] = 0;
  local_38[0x61] = 0;
  local_38[100] = 0;
  local_38[0x65] = 0;
  local_38[0x66] = 0;
  local_38[0x67] = 0;
  local_38[0x68] = 0;
  local_38[0x69] = 0;
  local_3c = 0;
  (**(code **)(*local_38 + 0xd0))(local_38,0,1,&local_3c);
  (**(code **)(*local_38 + 0xd0))(local_38,1,1,&local_3c);
  (**(code **)(*local_38 + 0xd0))(local_38,2,1,&local_3c);
  (**(code **)(*local_38 + 0xd0))(local_38,3,1,&local_3c);
  FUN_14254c0a0(local_38,param_2,param_3,param_1 + 0x44,param_5);
  if ((*param_5 < 1) && ((longlong *)local_38[0x29] != (longlong *)0x0)) {
    cVar2 = (**(code **)(*(longlong *)local_38[0x29] + 0x160))();
    *(char *)(local_38 + 0x6a) = cVar2;
    if (cVar2 == '\0') {
      local_38[0x62] = 0x10000000000000;
      uVar3 = 0xffffffff;
    }
    else {
      lVar1 = (**(code **)(*(longlong *)local_38[0x29] + 0x168))();
      local_38[0x62] = lVar1;
      uVar3 = (**(code **)(*(longlong *)local_38[0x29] + 0x170))();
    }
    *(undefined4 *)((longlong)local_38 + 0x31c) = uVar3;
  }
  return local_38;
}



// FUNCTION 14254db40 Unwind@14254db40 body=40 status=ok
// SIG undefined Unwind@14254db40(void)

void Unwind_14254db40(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 14254db70 Unwind@14254db70 body=67 status=ok
// SIG undefined Unwind@14254db70(void)

void Unwind_14254db70(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x38));
  FUN_140859a90(*(undefined8 *)(param_2 + 0x30));
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  FUN_1424bd8b0(*(undefined8 *)(param_2 + 0x50));
  return;
}



// FUNCTION 14254dbc0 FUN_14254dbc0 body=643 status=ok
// SIG undefined FUN_14254dbc0(void)

longlong * FUN_14254dbc0(longlong *param_1,undefined8 param_2,int *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 local_34;
  longlong *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_1424bd6e0();
  *param_1 = (longlong)icu_64::SimpleDateFormat::vftable;
  local_30 = param_1;
  FUN_1424a6c90(param_1 + 0x2c,L"yyyyMMdd hh:mm a");
  plVar1 = local_30 + 0x34;
  local_30[0x34] = (longlong)&PTR_FUN_149e18960;
  *(undefined2 *)(local_30 + 0x35) = 2;
  plVar2 = local_30 + 0x3c;
  local_30[0x3c] = (longlong)&PTR_FUN_149e18960;
  *(undefined2 *)(local_30 + 0x3d) = 2;
  plVar3 = local_30 + 0x44;
  FUN_1424a3ce0(plVar3,param_2);
  local_30[0x6b] = 0;
  local_30[0x60] = 0;
  local_30[0x61] = 0;
  local_30[100] = 0;
  local_30[0x65] = 0;
  local_30[0x66] = 0;
  local_30[0x67] = 0;
  local_30[0x68] = 0;
  local_30[0x69] = 0;
  if (*param_3 < 1) {
    local_34 = 0;
    (**(code **)(*local_30 + 0xd0))(local_30,0,1,&local_34);
    (**(code **)(*local_30 + 0xd0))(local_30,1,1,&local_34);
    (**(code **)(*local_30 + 0xd0))(local_30,2,1,&local_34);
    (**(code **)(*local_30 + 0xd0))(local_30,3,1,&local_34);
    if (*param_3 < 1) {
      uVar7 = FUN_1424b77f0();
      lVar8 = FUN_1424cc240(uVar7,plVar3,param_3);
      local_30[0x29] = lVar8;
    }
    lVar8 = FUN_1425fc7b0(plVar3,param_3);
    plVar4 = local_30 + 0x60;
    *plVar4 = lVar8;
    if (0 < *param_3) {
      *param_3 = 0;
      lVar8 = *plVar4;
      if (lVar8 != 0) {
        FUN_1425fc660(lVar8);
        FUN_1401773f0(lVar8);
      }
      lVar8 = thunk_FUN_1424da030(0x4d8);
      if (lVar8 == 0) {
        *plVar4 = 0;
        *param_3 = 7;
        return local_30;
      }
      FUN_1426021b0(lVar8,param_3);
      *plVar4 = lVar8;
    }
    FUN_1424a7130(plVar1);
    FUN_1424a7130(plVar2);
    FUN_14254ca50(local_30,plVar3,param_3);
    if ((*param_3 < 1) && ((longlong *)local_30[0x29] != (longlong *)0x0)) {
      cVar5 = (**(code **)(*(longlong *)local_30[0x29] + 0x160))();
      *(char *)(local_30 + 0x6a) = cVar5;
      if (cVar5 == '\0') {
        local_30[0x62] = 0x10000000000000;
        uVar6 = 0xffffffff;
      }
      else {
        lVar8 = (**(code **)(*(longlong *)local_30[0x29] + 0x168))();
        local_30[0x62] = lVar8;
        uVar6 = (**(code **)(*(longlong *)local_30[0x29] + 0x170))();
      }
      *(undefined4 *)((longlong)local_30 + 0x31c) = uVar6;
    }
  }
  return local_30;
}



// FUNCTION 14254de50 Unwind@14254de50 body=36 status=ok
// SIG undefined Unwind@14254de50(void)

void Unwind_14254de50(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 14254de80 Unwind@14254de80 body=36 status=ok
// SIG undefined Unwind@14254de80(void)

void Unwind_14254de80(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 14254deb0 Unwind@14254deb0 body=54 status=ok
// SIG undefined Unwind@14254deb0(void)

void Unwind_14254deb0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x38));
  FUN_140859a90(*(undefined8 *)(param_2 + 0x30));
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14254def0 Unwind@14254def0 body=36 status=ok
// SIG undefined Unwind@14254def0(void)

void Unwind_14254def0(undefined8 param_1,longlong param_2)

{
  FUN_1424bd8b0(*(undefined8 *)(param_2 + 0x58));
  return;
}



// FUNCTION 14254df20 FUN_14254df20 body=326 status=ok
// SIG undefined FUN_14254df20(void)

longlong * FUN_14254df20(longlong *param_1,longlong param_2)

{
  undefined4 local_24;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_1424bd720();
  *param_1 = (longlong)icu_64::SimpleDateFormat::vftable;
  param_1[0x2c] = (longlong)&PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x2d) = 2;
  param_1[0x34] = (longlong)&PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x35) = 2;
  param_1[0x3c] = (longlong)&PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x3d) = 2;
  FUN_1424a3ce0(param_1 + 0x44,param_2 + 0x220);
  param_1[0x6b] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  local_24 = 0;
  (**(code **)(*param_1 + 0xd0))(param_1,0,1,&local_24);
  (**(code **)(*param_1 + 0xd0))(param_1,1,1,&local_24);
  (**(code **)(*param_1 + 0xd0))(param_1,2,1,&local_24);
  (**(code **)(*param_1 + 0xd0))(param_1,3,1,&local_24);
  FUN_14254e0e0(param_1,param_2);
  return param_1;
}



// FUNCTION 14254e070 Unwind@14254e070 body=34 status=ok
// SIG undefined Unwind@14254e070(void)

void Unwind_14254e070(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 14254e0a0 Unwind@14254e0a0 body=61 status=ok
// SIG undefined Unwind@14254e0a0(void)

void Unwind_14254e0a0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x38));
  FUN_140859a90(*(undefined8 *)(param_2 + 0x30));
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  FUN_1424bd8b0(*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 14254e0e0 FUN_14254e0e0 body=609 status=ok
// SIG undefined FUN_14254e0e0(void)

longlong FUN_14254e0e0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  void *_Dst;
  longlong lVar6;
  longlong lVar7;
  undefined4 local_44;
  longlong local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (param_1 != param_2) {
    FUN_1424bd810(param_1);
    FUN_1424a7c80(param_1 + 0x1a0,param_2 + 0x1a0);
    FUN_1424a7c80(param_1 + 0x1e0,param_2 + 0x1e0);
    lVar7 = *(longlong *)(param_1 + 0x300);
    if (lVar7 != 0) {
      FUN_1425fc660(lVar7);
      FUN_1401773f0(lVar7);
    }
    *(undefined8 *)(param_1 + 0x300) = 0;
    if (*(longlong *)(param_2 + 0x300) != 0) {
      local_40 = thunk_FUN_1424da030(0x4d8);
      if (local_40 != 0) {
        FUN_1425fca20(local_40,*(undefined8 *)(param_2 + 0x300));
      }
      *(longlong *)(param_1 + 0x300) = local_40;
    }
    *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_2 + 0x310);
    *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_2 + 0x31c);
    *(undefined1 *)(param_1 + 0x350) = *(undefined1 *)(param_2 + 0x350);
    FUN_1424a7c80(param_1 + 0x160,param_2 + 0x160);
    *(undefined1 *)(param_1 + 0x318) = *(undefined1 *)(param_2 + 0x318);
    *(undefined1 *)(param_1 + 0x319) = *(undefined1 *)(param_2 + 0x319);
    cVar4 = FUN_1424a3f70(param_1 + 0x220);
    if (cVar4 == '\0') {
      puVar1 = *(undefined8 **)(param_1 + 0x308);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      *(undefined8 *)(param_1 + 0x308) = 0;
      FUN_1424a3d10(param_1 + 0x220);
    }
    if (*(longlong **)(param_2 + 0x358) != (longlong *)0x0) {
      uVar5 = (**(code **)(**(longlong **)(param_2 + 0x358) + 0x18))();
      *(undefined8 *)(param_1 + 0x358) = uVar5;
    }
    lVar7 = *(longlong *)(param_1 + 800);
    if (lVar7 != 0) {
      lVar6 = 0;
      do {
        if (*(longlong *)(lVar7 + lVar6 * 8) != 0) {
          FUN_142537ca0();
          *(undefined8 *)(lVar7 + lVar6 * 8) = 0;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0x26);
      FUN_1424da110(lVar7);
      *(undefined8 *)(param_1 + 800) = 0;
    }
    if (*(longlong *)(param_2 + 800) != 0) {
      _Dst = (void *)FUN_1424da030(0x130);
      if (_Dst == (void *)0x0) {
        *(undefined8 *)(param_1 + 800) = 0;
      }
      else {
        lVar7 = 0;
        memset(_Dst,0,0x130);
        *(void **)(param_1 + 800) = _Dst;
        do {
          lVar6 = *(longlong *)(param_1 + 800);
          lVar2 = *(longlong *)(*(longlong *)(param_2 + 800) + lVar7 * 8);
          lVar3 = *(longlong *)(lVar6 + lVar7 * 8);
          if (lVar3 != lVar2) {
            if (lVar3 != 0) {
              FUN_142537ca0();
            }
            *(longlong *)(lVar6 + lVar7 * 8) = lVar2;
            if (lVar2 != 0) {
              FUN_142537c90(lVar2);
            }
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 != 0x26);
      }
    }
    local_44 = 0;
    FUN_14254bfe0(param_1);
    FUN_14254e380(param_1,&local_44);
  }
  return param_1;
}



// FUNCTION 14254e350 Unwind@14254e350 body=44 status=ok
// SIG undefined Unwind@14254e350(void)

void Unwind_14254e350(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14254e380 FUN_14254e380 body=540 status=ok
// SIG undefined FUN_14254e380(void)

void FUN_14254e380(longlong param_1,int *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  longlong local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*param_2 < 1) {
    lVar1 = __RTDynamicCast(*(undefined8 *)(param_1 + 0x150),0,
                            &icu_64::NumberFormat::RTTI_Type_Descriptor,
                            &icu_64::DecimalFormat::RTTI_Type_Descriptor,0);
    if (lVar1 != 0) {
      local_30 = thunk_FUN_1424da030(0x1d8);
      if (local_30 != 0) {
        uVar2 = FUN_1424ca2f0(lVar1);
        FUN_142607ca0(local_3c,1);
        FUN_142607cd0(local_3c,local_48,10);
        FUN_14256a630(uVar2,local_30,local_48);
      }
      *(longlong *)(param_1 + 0x328) = local_30;
      local_30 = thunk_FUN_1424da030(0x1d8);
      if (local_30 != 0) {
        uVar2 = FUN_1424ca2f0(lVar1);
        FUN_142607ca0(local_3c,2);
        FUN_142607cd0(local_3c,local_48,10);
        FUN_14256a630(uVar2,local_30,local_48);
      }
      *(longlong *)(param_1 + 0x330) = local_30;
      local_30 = thunk_FUN_1424da030(0x1d8);
      if (local_30 != 0) {
        uVar2 = FUN_1424ca2f0(lVar1);
        FUN_142607ca0(local_3c,3);
        FUN_142607cd0(local_3c,local_48,10);
        FUN_14256a630(uVar2,local_30,local_48);
      }
      *(longlong *)(param_1 + 0x338) = local_30;
      local_30 = thunk_FUN_1424da030(0x1d8);
      if (local_30 != 0) {
        uVar2 = FUN_1424ca2f0(lVar1);
        FUN_142607ca0(local_3c,4);
        FUN_142607cd0(local_3c,local_48,10);
        FUN_14256a630(uVar2,local_30,local_48);
      }
      *(longlong *)(param_1 + 0x340) = local_30;
      local_30 = thunk_FUN_1424da030(0x1d8);
      if (local_30 != 0) {
        uVar2 = FUN_1424ca2f0(lVar1);
        FUN_142607ca0(local_3c,2);
        FUN_142607cd0(local_3c,local_48,2);
        FUN_14256a630(uVar2,local_30,local_48);
      }
      *(longlong *)(param_1 + 0x348) = local_30;
    }
  }
  return;
}



// FUNCTION 14254e5a0 Unwind@14254e5a0 body=36 status=ok
// SIG undefined Unwind@14254e5a0(void)

void Unwind_14254e5a0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 14254e5d0 Unwind@14254e5d0 body=36 status=ok
// SIG undefined Unwind@14254e5d0(void)

void Unwind_14254e5d0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 14254e600 Unwind@14254e600 body=36 status=ok
// SIG undefined Unwind@14254e600(void)

void Unwind_14254e600(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 14254e630 Unwind@14254e630 body=36 status=ok
// SIG undefined Unwind@14254e630(void)

void Unwind_14254e630(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 14254e660 Unwind@14254e660 body=36 status=ok
// SIG undefined Unwind@14254e660(void)

void Unwind_14254e660(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 14254e690 FUN_14254e690 body=64 status=ok
// SIG undefined FUN_14254e690(void)

longlong FUN_14254e690(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = thunk_FUN_1424da030(0x360);
  if (lVar1 != 0) {
    FUN_14254df20(lVar1,param_1);
  }
  return lVar1;
}



// FUNCTION 14254e6d0 Unwind@14254e6d0 body=32 status=ok
// SIG undefined Unwind@14254e6d0(void)

void Unwind_14254e6d0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14254e6f0 FUN_14254e6f0 body=225 status=ok
// SIG undefined FUN_14254e6f0(void)

byte FUN_14254e6f0(longlong param_1,longlong param_2)

{
  ushort uVar1;
  short sVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  
  cVar3 = FUN_1424bd900();
  if (cVar3 != '\0') {
    uVar1 = *(ushort *)(param_1 + 0x168);
    if ((uVar1 & 1) == 0) {
      if ((short)uVar1 < 0) {
        iVar6 = *(int *)(param_1 + 0x16c);
      }
      else {
        iVar6 = (int)(short)uVar1 >> 5;
      }
      sVar2 = *(short *)(param_2 + 0x168);
      if (sVar2 < 0) {
        iVar5 = *(int *)(param_2 + 0x16c);
      }
      else {
        iVar5 = (int)sVar2 >> 5;
      }
      if (((int)sVar2 & 1U) != 0) {
        return 0;
      }
      if (iVar6 != iVar5) {
        return 0;
      }
      bVar4 = FUN_1412ae090(param_1 + 0x160,param_2 + 0x160);
    }
    else {
      bVar4 = *(byte *)(param_2 + 0x168) & 1;
    }
    if ((((bVar4 != 0) && (*(longlong *)(param_1 + 0x300) != 0)) &&
        (*(longlong *)(param_2 + 0x300) != 0)) &&
       ((cVar3 = FUN_142604a80(), cVar3 != '\0' &&
        (*(char *)(param_1 + 0x350) == *(char *)(param_2 + 0x350))))) {
      return -(*(double *)(param_2 + 0x310) == *(double *)(param_1 + 0x310)) & 1;
    }
  }
  return 0;
}



// FUNCTION 14254e7e0 FUN_14254e7e0 body=62 status=ok
// SIG undefined FUN_14254e7e0(void)

undefined8 * FUN_14254e7e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 1) = 2;
  FUN_1425fb600();
  return param_1;
}



// FUNCTION 14254e820 Unwind@14254e820 body=30 status=ok
// SIG undefined Unwind@14254e820(void)

void Unwind_14254e820(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 14254e840 FUN_14254e840 body=504 status=ok
// SIG undefined FUN_14254e840(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14254e840(longlong param_1,undefined8 param_2,int *param_3)

{
  void *_Dst;
  
  if ((*param_3 < 1) &&
     (((*(byte *)(param_1 + 0x1a8) & 1) == 0 || ((*(byte *)(param_1 + 0x1e8) & 1) == 0)))) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c793380) {
      FUN_144b3d300(&DAT_14c793380);
      if (DAT_14c793380 == -1) {
        _DAT_14c793370 = 0;
        uRam000000014c793378 = 0;
        _DAT_14c793360 = 0;
        uRam000000014c793368 = 0;
        _DAT_14c793350 = 0;
        uRam000000014c793358 = 0;
        _DAT_14c793340 = 0;
        uRam000000014c793348 = 0;
        _DAT_14c793330 = 0;
        uRam000000014c793338 = 0;
        _Mtx_init_in_situ(&DAT_14c793330);
        atexit((_func_5014 *)&LAB_1425562c0);
        _Init_thread_footer(&DAT_14c793380);
      }
    }
    FUN_142501320(&DAT_14c793330);
    if (*(longlong *)(param_1 + 800) == 0) {
      _Dst = (void *)FUN_1424da030(0x130);
      if (_Dst == (void *)0x0) {
        *(undefined8 *)(param_1 + 800) = 0;
        *param_3 = 7;
      }
      else {
        memset(_Dst,0,0x130);
        *(void **)(param_1 + 800) = _Dst;
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c793380) {
      FUN_144b3d300(&DAT_14c793380);
      if (DAT_14c793380 == -1) {
        _DAT_14c793370 = 0;
        uRam000000014c793378 = 0;
        _DAT_14c793360 = 0;
        uRam000000014c793368 = 0;
        _DAT_14c793350 = 0;
        uRam000000014c793358 = 0;
        _DAT_14c793340 = 0;
        uRam000000014c793348 = 0;
        _DAT_14c793330 = 0;
        uRam000000014c793338 = 0;
        _Mtx_init_in_situ(&DAT_14c793330,2);
        atexit((_func_5014 *)&LAB_1425562c0);
        _Init_thread_footer(&DAT_14c793380);
      }
    }
    FUN_142501400(&DAT_14c793330);
    if (*param_3 < 1) {
      FUN_14254cc70(param_1,param_2,param_1 + 0x1a0,0,param_3);
      FUN_14254cc70(param_1,param_2,param_1 + 0x1e0,1,param_3);
    }
  }
  return;
}



// FUNCTION 14254ea40 FUN_14254ea40 body=103 status=ok
// SIG undefined FUN_14254ea40(void)

undefined8
FUN_14254ea40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 local_58 [36];
  undefined4 local_34;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_34 = 0;
  FUN_14256f3a0(local_58,param_4);
  FUN_14254eae0(param_1,param_2,param_3,local_58,&local_34);
  FUN_14256f380(local_58);
  return param_3;
}



// FUNCTION 14254eab0 Unwind@14254eab0 body=40 status=ok
// SIG undefined Unwind@14254eab0(void)

void Unwind_14254eab0(undefined8 param_1,longlong param_2)

{
  FUN_14256f380(param_2 + 0x30);
  return;
}



// FUNCTION 14254eae0 FUN_14254eae0 body=803 status=ok
// SIG undefined FUN_14254eae0(void)

void FUN_14254eae0(longlong *param_1,longlong *param_2,undefined8 param_3,ulonglong param_4,
                  int *param_5)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  char *_Str2;
  char *_Str1;
  longlong *plVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  ushort uVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  int local_a0;
  ulonglong local_98;
  longlong *local_90;
  int *local_88;
  undefined4 local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong local_60;
  longlong *local_58;
  undefined2 local_4c;
  ushort local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*param_5 < 1) {
    if ((longlong *)param_1[0x29] == param_2) {
      plVar5 = (longlong *)0x0;
    }
    else {
      _Str2 = (char *)(**(code **)(*(longlong *)param_1[0x29] + 0xb0))();
      _Str1 = (char *)(**(code **)(*param_2 + 0xb0))(param_2);
      iVar3 = strcmp(_Str1,_Str2);
      if (iVar3 == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = (longlong *)(**(code **)(*(longlong *)param_1[0x29] + 0x10))();
        if (plVar5 == (longlong *)0x0) {
          *param_5 = 7;
          goto LAB_14254ee19;
        }
        uVar13 = FUN_1424cd180(param_2,param_5);
        FUN_1424ccf20(plVar5,uVar13,param_5);
        uVar6 = FUN_1424ce780(param_2);
        FUN_14153dfe0(plVar5,uVar6);
        param_2 = plVar5;
      }
    }
    local_74 = (**(code **)(*param_1 + 200))(param_1,1,param_5);
    uVar4 = (uint)(short)param_1[0x2d];
    if ((short)param_1[0x2d] < 0) {
      uVar7 = *(uint *)((longlong)param_1 + 0x16c);
    }
    else {
      uVar7 = (int)uVar4 >> 5;
    }
    if ((0 < (int)uVar7) && (*param_5 < 1)) {
      local_60 = (longlong)param_1 + 0x16a;
      uVar12 = 0;
      iVar3 = 0;
      iVar11 = 0;
      uVar10 = 0;
      bVar2 = false;
      local_70 = param_2;
      local_68 = param_4;
      local_58 = plVar5;
      do {
        param_4 = CONCAT62((int6)(param_4 >> 0x10),0xffff);
        if (uVar12 < uVar7) {
          lVar8 = local_60;
          if ((uVar4 & 2) == 0) {
            lVar8 = param_1[0x2f];
          }
          param_4 = (ulonglong)*(ushort *)(lVar8 + (longlong)(int)uVar12 * 2);
        }
        uVar9 = (ushort)param_4;
        if ((uVar9 != (ushort)uVar10) && (0 < iVar11)) {
          local_90 = local_70;
          local_98 = local_68;
          local_a8 = local_74;
          local_a0 = iVar3;
          local_88 = param_5;
          FUN_14254eee0(param_1,param_3,uVar10,iVar11);
          iVar11 = 0;
          iVar3 = iVar3 + 1;
        }
        if (uVar9 == 0x27) {
          sVar1 = (short)param_1[0x2d];
          if (sVar1 < 0) {
            uVar4 = *(uint *)((longlong)param_1 + 0x16c);
          }
          else {
            uVar4 = (int)sVar1 >> 5;
          }
          uVar7 = uVar12 + 1;
          param_4 = (ulonglong)uVar7;
          if (uVar7 < uVar4 && (int)uVar7 < (int)uVar4) {
            lVar8 = local_60;
            if (((int)sVar1 & 2U) == 0) {
              lVar8 = param_1[0x2f];
            }
            if (*(short *)(lVar8 + (longlong)(int)uVar7 * 2) == 0x27) {
              local_4c = 0x27;
              FUN_1424a6cf0(param_3,&local_4c,0,1);
              uVar12 = uVar7;
              goto LAB_14254ed87;
            }
          }
          bVar2 = !bVar2;
        }
        else if (((bVar2) || (0x7f < uVar9)) || ((&DAT_1499e0660)[param_4 & 0xffff] == '\0')) {
          local_4a = uVar9;
          FUN_1424a6cf0(param_3,&local_4a,0,1);
        }
        else {
          iVar11 = iVar11 + 1;
          bVar2 = false;
          uVar10 = param_4 & 0xffffffff;
        }
LAB_14254ed87:
        plVar5 = local_58;
        uVar4 = (uint)(short)param_1[0x2d];
        if ((short)param_1[0x2d] < 0) {
          uVar7 = *(uint *)((longlong)param_1 + 0x16c);
        }
        else {
          uVar7 = (int)uVar4 >> 5;
        }
        uVar12 = uVar12 + 1;
      } while (((int)uVar12 < (int)uVar7) && (*param_5 < 1));
      if (0 < iVar11) {
        local_90 = local_70;
        local_98 = local_68;
        local_a8 = local_74;
        local_a0 = iVar3;
        local_88 = param_5;
        FUN_14254eee0(param_1,param_3,uVar10,iVar11);
      }
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)*plVar5)(plVar5,1);
    }
  }
LAB_14254ee19:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
}



// FUNCTION 14254ee40 FUN_14254ee40 body=103 status=ok
// SIG undefined FUN_14254ee40(void)

undefined8
FUN_14254ee40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 local_60 [40];
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  FUN_14256f430(local_60,param_4,param_5);
  FUN_14254eae0(param_1,param_2,param_3,local_60,param_5);
  FUN_14256f4d0(local_60);
  return param_3;
}



// FUNCTION 14254eeb0 Unwind@14254eeb0 body=44 status=ok
// SIG undefined Unwind@14254eeb0(void)

void Unwind_14254eeb0(undefined8 param_1,longlong param_2)

{
  FUN_14256f4d0(param_2 + 0x28);
  return;
}



// FUNCTION 14254eee0 FUN_14254eee0 body=6534 status=ok
// SIG undefined FUN_14254eee0(void)

void FUN_14254eee0(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  int param_5,int param_6,longlong *param_7,longlong *param_8,int *param_9)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  char *pcVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined ***pppuVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  bool bVar17;
  undefined8 in_stack_fffffffffffffdc8;
  undefined8 in_stack_fffffffffffffdd0;
  undefined4 uVar18;
  undefined1 local_208 [64];
  undefined **local_1c8;
  undefined2 local_1c0;
  undefined **local_c8;
  short local_c0;
  int local_bc;
  longlong local_88;
  int local_7c;
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  
  uVar18 = (undefined4)((ulonglong)in_stack_fffffffffffffdd0 >> 0x20);
  uVar6 = (undefined4)((ulonglong)in_stack_fffffffffffffdc8 >> 0x20);
  local_60 = 0xfffffffffffffffe;
  if (0 < *param_9) {
    return;
  }
  local_78 = param_4;
  uVar3 = FUN_1426051e0(param_3);
  if (*(short *)(param_2 + 8) < 0) {
    local_7c = *(int *)(param_2 + 0xc);
  }
  else {
    local_7c = (int)*(short *)(param_2 + 8) >> 5;
  }
  pcVar9 = (char *)(**(code **)(*param_8 + 0xb0))(param_8);
  iVar4 = strcmp(pcVar9,"hebrew");
  pcVar9 = (char *)(**(code **)(*param_8 + 0xb0))(param_8);
  iVar5 = strcmp(pcVar9,"chinese");
  if (iVar5 == 0) {
    bVar17 = true;
  }
  else {
    pcVar9 = (char *)(**(code **)(*param_8 + 0xb0))(param_8);
    iVar5 = strcmp(pcVar9,"dangi");
    bVar17 = iVar5 == 0;
  }
  if (uVar3 == 0x26) {
    if ((short)param_3 == 0x6c) {
      return;
    }
    *param_9 = 3;
    return;
  }
  local_88 = (longlong)(int)uVar3;
  iVar5 = 0;
  if (uVar3 < 0x23) {
    if (uVar3 == 0x22) {
      iVar5 = (**(code **)(*param_8 + 0x178))(param_8,param_9);
    }
    else {
      iVar5 = FUN_1424cd2e0(param_8,*(undefined4 *)(&DAT_1499e06e0 + local_88 * 4),param_9);
    }
  }
  if (0 < *param_9) {
    return;
  }
  if ((*(longlong *)(param_1 + 800) == 0) ||
     (lVar12 = *(longlong *)(*(longlong *)(param_1 + 800) + local_88 * 8), lVar12 == 0)) {
    plVar10 = (longlong *)(param_1 + 0x150);
  }
  else {
    plVar10 = (longlong *)(lVar12 + 0x18);
  }
  lVar12 = *plVar10;
  if (lVar12 == 0) {
    *param_9 = 5;
    return;
  }
  local_70 = param_2;
  local_68 = param_1;
  FUN_1424a7220(local_208,&DAT_1499e0af2,4,0);
  iVar16 = (int)local_78;
  switch(uVar3) {
  case 0:
    if (bVar17) {
      lVar15 = 0;
      FUN_142550a20(local_68,lVar12,local_70,iVar5,CONCAT44(uVar6,1),CONCAT44(uVar18,9));
    }
    else if (iVar16 == 4) {
      lVar15 = 7;
      FUN_142550e10(local_70,iVar5,*(undefined8 *)(*(longlong *)(local_68 + 0x300) + 0x18),
                    *(undefined4 *)(*(longlong *)(local_68 + 0x300) + 0x20));
    }
    else if (iVar16 == 5) {
      lVar15 = 9;
      FUN_142550e10(local_70,iVar5,*(undefined8 *)(*(longlong *)(local_68 + 0x300) + 0x28),
                    *(undefined4 *)(*(longlong *)(local_68 + 0x300) + 0x30));
    }
    else {
      lVar15 = 8;
      FUN_142550e10(local_70,iVar5,*(undefined8 *)(*(longlong *)(local_68 + 0x300) + 8),
                    *(undefined4 *)(*(longlong *)(local_68 + 0x300) + 0x10));
    }
    break;
  case 1:
  case 0x12:
switchD_14254f0d5_caseD_1:
    cVar2 = FUN_1424bcee0(local_68 + 0x1a0,local_208);
    iVar4 = iVar5 + -5000;
    if (cVar2 != '\0') {
      iVar4 = iVar5;
    }
    if (0x3e6 < iVar5 - 0x1389U) {
      iVar4 = iVar5;
    }
    lVar15 = 0;
    if ((int)local_78 == 2) {
      FUN_142550a20(local_68,lVar12,local_70,iVar4,CONCAT44(uVar6,2),CONCAT44(uVar18,2));
    }
    else {
      FUN_142550a20(local_68,lVar12,local_70,iVar4,CONCAT44(uVar6,(int)local_78),CONCAT44(uVar18,10)
                   );
    }
    break;
  case 2:
  case 0x1a:
    if (iVar4 == 0) {
      uVar7 = FUN_1424cd2e0(param_8,1,param_9);
      cVar2 = FUN_142577a00(uVar7);
      iVar4 = 0xd;
      if (cVar2 == '\0') {
        iVar4 = iVar5;
      }
      if (iVar5 != 6) {
        iVar4 = iVar5;
      }
      if ((int)local_78 < 3) {
        iVar4 = iVar5;
      }
      uVar7 = FUN_1424cd2e0(param_8,1,param_9);
      cVar2 = FUN_142577a00(uVar7);
      iVar5 = iVar4 - (uint)(((int)local_78 < 3 && cVar2 == '\0') && 5 < iVar4);
    }
    iVar4 = 0;
    if (*(longlong *)(*(longlong *)(local_68 + 0x300) + 0x1b8) == 0) {
LAB_14254f383:
      iVar16 = (int)local_78;
    }
    else {
      iVar16 = (int)local_78;
      if (6 < *(int *)(*(longlong *)(local_68 + 0x300) + 0x1c0)) {
        iVar4 = FUN_1424cd2e0(param_8,0x16,param_9);
        goto LAB_14254f383;
      }
    }
    if (iVar16 == 3) {
      lVar12 = *(longlong *)(local_68 + 0x300);
      if (uVar3 == 2) {
        if (iVar4 == 0) {
          lVar14 = 0;
        }
        else {
          lVar14 = *(longlong *)(lVar12 + 0x1b8) + 0x40;
        }
        lVar15 = 1;
        FUN_142550e50(local_70,iVar5,*(undefined8 *)(lVar12 + 0x48),*(undefined4 *)(lVar12 + 0x50),
                      lVar14,param_9);
      }
      else {
        if (iVar4 == 0) {
          lVar14 = 0;
        }
        else {
          lVar14 = *(longlong *)(lVar12 + 0x1b8) + 0x100;
        }
        lVar15 = 2;
        FUN_142550e50(local_70,iVar5,*(undefined8 *)(lVar12 + 0x78),*(undefined4 *)(lVar12 + 0x80),
                      lVar14,param_9);
      }
    }
    else if (iVar16 == 4) {
      lVar12 = *(longlong *)(local_68 + 0x300);
      if (uVar3 == 2) {
        if (iVar4 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined8 *)(lVar12 + 0x1b8);
        }
        lVar15 = 1;
        FUN_142550e50(local_70,iVar5,*(undefined8 *)(lVar12 + 0x38),*(undefined4 *)(lVar12 + 0x40),
                      uVar11,param_9);
      }
      else {
        if (iVar4 == 0) {
          lVar14 = 0;
        }
        else {
          lVar14 = *(longlong *)(lVar12 + 0x1b8) + 0xc0;
        }
        lVar15 = 2;
        FUN_142550e50(local_70,iVar5,*(undefined8 *)(lVar12 + 0x68),*(undefined4 *)(lVar12 + 0x70),
                      lVar14,param_9);
      }
    }
    else {
      if (iVar16 != 5) {
        local_1c8 = &PTR_FUN_149e18960;
        local_1c0 = 2;
        FUN_142550a20(local_68,lVar12,&local_1c8,iVar5 + 1,CONCAT44(uVar6,iVar16),
                      CONCAT44(uVar18,10));
        if (iVar4 == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = *(longlong *)(*(longlong *)(local_68 + 0x300) + 0x1b8) + 0x180;
        }
        FUN_142550e50(local_70,0,&local_1c8,1,lVar12,param_9);
        goto LAB_1425500fc;
      }
      lVar12 = *(longlong *)(local_68 + 0x300);
      if (uVar3 == 2) {
        if (iVar4 == 0) {
          lVar14 = 0;
        }
        else {
          lVar14 = *(longlong *)(lVar12 + 0x1b8) + 0x80;
        }
        lVar15 = 3;
        FUN_142550e50(local_70,iVar5,*(undefined8 *)(lVar12 + 0x58),*(undefined4 *)(lVar12 + 0x60),
                      lVar14,param_9);
      }
      else {
        if (iVar4 == 0) {
          lVar14 = 0;
        }
        else {
          lVar14 = *(longlong *)(lVar12 + 0x1b8) + 0x140;
        }
        lVar15 = 3;
        FUN_142550e50(local_70,iVar5,*(undefined8 *)(lVar12 + 0x88),*(undefined4 *)(lVar12 + 0x90),
                      lVar14,param_9);
      }
    }
    break;
  default:
    FUN_142550a20(local_68,lVar12,local_70,iVar5,CONCAT44(uVar6,iVar16),CONCAT44(uVar18,10));
    lVar15 = 0;
    break;
  case 4:
    if (iVar5 == 0) {
      iVar4 = (**(code **)(*param_8 + 0x70))(param_8,0xb);
      lVar15 = 0;
      FUN_142550a20(local_68,lVar12,local_70,iVar4 + 1,CONCAT44(uVar6,(int)local_78),
                    CONCAT44(uVar18,10));
    }
    else {
      lVar15 = 0;
      FUN_142550a20(local_68,lVar12,local_70,iVar5,CONCAT44(uVar6,iVar16),CONCAT44(uVar18,10));
    }
    break;
  case 8:
    iVar4 = 3;
    if (iVar16 < 3) {
      iVar4 = iVar16;
    }
    if (iVar16 == 2) {
      iVar5 = iVar5 / 10;
    }
    else if (iVar16 == 1) {
      iVar5 = iVar5 / 100;
    }
    FUN_142550a20(local_68,lVar12,local_70,iVar5,CONCAT44(uVar6,iVar4),CONCAT44(uVar18,10));
    lVar15 = 0;
    if (3 < (int)local_78) {
      lVar15 = 0;
      FUN_142550a20(local_68,lVar12,local_70,0,(int)local_78 + -3,10);
    }
    break;
  case 9:
switchD_14254f0d5_caseD_9:
    iVar4 = (int)local_78;
    if (iVar4 == 4) {
      lVar15 = 4;
      FUN_142550e10(local_70,iVar5,*(undefined8 *)(*(longlong *)(local_68 + 0x300) + 0x98),
                    *(undefined4 *)(*(longlong *)(local_68 + 0x300) + 0xa0));
    }
    else if (iVar4 == 6) {
      lVar15 = 4;
      FUN_142550e10(local_70,iVar5,*(undefined8 *)(*(longlong *)(local_68 + 0x300) + 0xb8),
                    *(undefined4 *)(*(longlong *)(local_68 + 0x300) + 0xc0));
    }
    else if (iVar4 == 5) {
      lVar15 = 6;
      FUN_142550e10(local_70,iVar5,*(undefined8 *)(*(longlong *)(local_68 + 0x300) + 200),
                    *(undefined4 *)(*(longlong *)(local_68 + 0x300) + 0xd0));
    }
    else {
      lVar15 = 4;
      FUN_142550e10(local_70,iVar5,*(undefined8 *)(*(longlong *)(local_68 + 0x300) + 0xa8),
                    *(undefined4 *)(*(longlong *)(local_68 + 0x300) + 0xb0));
    }
    break;
  case 0xe:
    lVar12 = *(longlong *)(local_68 + 0x300);
    if (iVar16 < 5) {
      lVar15 = 0;
      FUN_142550e10(local_70,iVar5,*(undefined8 *)(lVar12 + 0x118),*(undefined4 *)(lVar12 + 0x120));
    }
    else {
      lVar15 = 0;
      FUN_142550e10(local_70,iVar5,*(undefined8 *)(lVar12 + 0x128),*(undefined4 *)(lVar12 + 0x130));
    }
    break;
  case 0xf:
    if (iVar5 == 0) {
      iVar4 = (**(code **)(*param_8 + 0x90))(param_8,10);
      lVar15 = 0;
      FUN_142550a20(local_68,lVar12,local_70,iVar4 + 1,CONCAT44(uVar6,(int)local_78),
                    CONCAT44(uVar18,10));
    }
    else {
      lVar15 = 0;
      FUN_142550a20(local_68,lVar12,local_70,iVar5,CONCAT44(uVar6,iVar16),CONCAT44(uVar18,10));
    }
    break;
  case 0x11:
  case 0x17:
  case 0x18:
  case 0x1d:
  case 0x1f:
  case 0x20:
  case 0x21:
    FUN_1424a7170(&local_c8,&local_1c8,0,0x80);
    uVar11 = FUN_1424ce780(param_8);
    uVar6 = FUN_1424cd180(param_8,param_9);
    plVar10 = (longlong *)FUN_142550f80(local_68,param_9);
    lVar15 = 0;
    lVar12 = 0;
    if (*param_9 < 1) {
      switch(uVar3) {
      case 0x11:
        if ((int)local_78 < 4) {
          (**(code **)(*plVar10 + 0x38))(plVar10,4,uVar11,uVar6,&local_c8,0);
          lVar15 = 0xd;
        }
        else {
          (**(code **)(*plVar10 + 0x38))(plVar10,3,uVar11,uVar6,&local_c8,0);
          lVar15 = 0xc;
        }
        break;
      default:
                    /* WARNING: Subroutine does not return */
        abort();
      case 0x17:
        if ((int)local_78 < 4) {
          (**(code **)(*plVar10 + 0x38))(plVar10,0xc,uVar11,uVar6,&local_c8,0);
          lVar15 = lVar12;
        }
        else if ((int)local_78 == 5) {
          (**(code **)(*plVar10 + 0x38))(plVar10,0xf,uVar11,uVar6,&local_c8,0);
          lVar15 = lVar12;
        }
        else {
          (**(code **)(*plVar10 + 0x38))(plVar10,5,uVar11,uVar6,&local_c8,0);
          lVar15 = lVar12;
        }
        break;
      case 0x18:
        if ((int)local_78 == 4) {
          (**(code **)(*plVar10 + 0x38))(plVar10,1,uVar11,uVar6,&local_c8,0);
          lVar15 = 0xc;
        }
        else {
          lVar15 = lVar12;
          if ((int)local_78 == 1) {
            (**(code **)(*plVar10 + 0x38))(plVar10,2,uVar11,uVar6,&local_c8,0);
            lVar15 = 0xd;
          }
        }
        break;
      case 0x1d:
        lVar15 = lVar12;
        switch((int)local_78) {
        case 1:
          (**(code **)(*plVar10 + 0x38))(plVar10,0x12,uVar11,uVar6,&local_c8,0);
          break;
        case 2:
          (**(code **)(*plVar10 + 0x38))(plVar10,0x11,uVar11,uVar6,&local_c8,0);
          break;
        case 3:
          (**(code **)(*plVar10 + 0x38))(plVar10,0x13,uVar11,uVar6,&local_c8,0);
          break;
        case 4:
          (**(code **)(*plVar10 + 0x38))(plVar10,0,uVar11,uVar6,&local_c8,0);
          lVar15 = 10;
        }
        break;
      case 0x1f:
        if ((int)local_78 == 4) {
          (**(code **)(*plVar10 + 0x38))(plVar10,5,uVar11,uVar6,&local_c8,0);
          lVar15 = lVar12;
        }
        else {
          lVar15 = lVar12;
          if ((int)local_78 == 1) {
            (**(code **)(*plVar10 + 0x38))(plVar10,6,uVar11,uVar6,&local_c8,0);
          }
        }
        break;
      case 0x20:
        switch((int)local_78) {
        case 1:
          (**(code **)(*plVar10 + 0x38))(plVar10,7,uVar11,uVar6,&local_c8,0);
          lVar15 = lVar12;
          break;
        case 2:
          (**(code **)(*plVar10 + 0x38))(plVar10,9,uVar11,uVar6,&local_c8,0);
          lVar15 = lVar12;
          break;
        case 3:
          (**(code **)(*plVar10 + 0x38))(plVar10,0xd,uVar11,uVar6,&local_c8,0);
          lVar15 = lVar12;
          break;
        case 4:
          (**(code **)(*plVar10 + 0x38))(plVar10,0xb,uVar11,uVar6,&local_c8,0);
          lVar15 = lVar12;
          break;
        case 5:
          (**(code **)(*plVar10 + 0x38))(plVar10,0xf,uVar11,uVar6,&local_c8,0);
          lVar15 = lVar12;
        }
        break;
      case 0x21:
        switch((int)local_78) {
        case 1:
          (**(code **)(*plVar10 + 0x38))(plVar10,8,uVar11,uVar6,&local_c8,0);
          lVar15 = lVar12;
          break;
        case 2:
          (**(code **)(*plVar10 + 0x38))(plVar10,10,uVar11,uVar6,&local_c8,0);
          lVar15 = lVar12;
          break;
        case 3:
          (**(code **)(*plVar10 + 0x38))(plVar10,0xe,uVar11,uVar6,&local_c8,0);
          lVar15 = lVar12;
          break;
        case 4:
          (**(code **)(*plVar10 + 0x38))(plVar10,0xc,uVar11,uVar6,&local_c8,0);
          lVar15 = lVar12;
          break;
        case 5:
          (**(code **)(*plVar10 + 0x38))(plVar10,0x10,uVar11,uVar6,&local_c8,0);
          lVar15 = lVar12;
        }
      }
    }
    if (-1 < local_c0) {
      local_bc = (int)local_c0 >> 5;
    }
    FUN_1424a9690(local_70,&local_c8,0,local_bc);
    pppuVar13 = &local_c8;
    goto LAB_14254f172;
  case 0x13:
    if (2 < iVar16) {
      iVar5 = FUN_1424cd2e0(param_8,7,param_9);
      if (0 < *param_9) goto LAB_14254f1c1;
      goto switchD_14254f0d5_caseD_9;
    }
    lVar15 = 0;
    FUN_142550a20(local_68,lVar12,local_70,iVar5,CONCAT44(uVar6,iVar16),CONCAT44(uVar18,10));
    break;
  case 0x19:
    if (iVar16 < 3) {
      lVar15 = 0;
      FUN_142550a20(local_68,lVar12,local_70,iVar5,CONCAT44(uVar6,1),CONCAT44(uVar18,10));
    }
    else {
      uVar6 = FUN_1424cd2e0(param_8,7,param_9);
      if (0 < *param_9) goto LAB_14254f1c1;
      iVar4 = (int)local_78;
      if (iVar4 == 4) {
        lVar15 = 5;
        FUN_142550e10(local_70,uVar6,*(undefined8 *)(*(longlong *)(local_68 + 0x300) + 0xd8),
                      *(undefined4 *)(*(longlong *)(local_68 + 0x300) + 0xe0));
      }
      else if (iVar4 == 6) {
        lVar15 = 5;
        FUN_142550e10(local_70,uVar6,*(undefined8 *)(*(longlong *)(local_68 + 0x300) + 0xf8),
                      *(undefined4 *)(*(longlong *)(local_68 + 0x300) + 0x100));
      }
      else if (iVar4 == 5) {
        lVar15 = 6;
        FUN_142550e10(local_70,uVar6,*(undefined8 *)(*(longlong *)(local_68 + 0x300) + 0x108),
                      *(undefined4 *)(*(longlong *)(local_68 + 0x300) + 0x110));
      }
      else {
        lVar15 = 5;
        FUN_142550e10(local_70,uVar6,*(undefined8 *)(*(longlong *)(local_68 + 0x300) + 0xe8),
                      *(undefined4 *)(*(longlong *)(local_68 + 0x300) + 0xf0));
      }
    }
    break;
  case 0x1b:
    if (iVar16 < 4) {
      if (iVar16 == 3) {
        lVar15 = 0;
        FUN_142550e10(local_70,iVar5 / 3,*(undefined8 *)(*(longlong *)(local_68 + 0x300) + 0x188),
                      *(undefined4 *)(*(longlong *)(local_68 + 0x300) + 400));
      }
      else {
        lVar15 = 0;
        FUN_142550a20(local_68,lVar12,local_70,iVar5 / 3 + 1,CONCAT44(uVar6,iVar16),
                      CONCAT44(uVar18,10));
      }
    }
    else {
      lVar15 = 0;
      FUN_142550e10(local_70,iVar5 / 3,*(undefined8 *)(*(longlong *)(local_68 + 0x300) + 0x178),
                    *(undefined4 *)(*(longlong *)(local_68 + 0x300) + 0x180));
    }
    break;
  case 0x1c:
    if (iVar16 < 4) {
      if (iVar16 == 3) {
        lVar15 = 0;
        FUN_142550e10(local_70,iVar5 / 3,*(undefined8 *)(*(longlong *)(local_68 + 0x300) + 0x1a8),
                      *(undefined4 *)(*(longlong *)(local_68 + 0x300) + 0x1b0));
      }
      else {
        lVar15 = 0;
        FUN_142550a20(local_68,lVar12,local_70,iVar5 / 3 + 1,CONCAT44(uVar6,iVar16),
                      CONCAT44(uVar18,10));
      }
    }
    else {
      lVar15 = 0;
      FUN_142550e10(local_70,iVar5 / 3,*(undefined8 *)(*(longlong *)(local_68 + 0x300) + 0x198),
                    *(undefined4 *)(*(longlong *)(local_68 + 0x300) + 0x1a0));
    }
    break;
  case 0x1e:
    if ((*(longlong *)(*(longlong *)(local_68 + 0x300) + 0x1c8) == 0) ||
       (*(int *)(*(longlong *)(local_68 + 0x300) + 0x1d0) < iVar5)) goto switchD_14254f0d5_caseD_1;
    lVar15 = 0;
    FUN_142550e10(local_70,iVar5 + -1);
    break;
  case 0x23:
    iVar4 = FUN_1424cd2e0(param_8,0xb,param_9);
    if (((iVar4 == 0xc) &&
        ((*(char *)(local_68 + 0x318) == '\0' ||
         (iVar4 = FUN_1424cd2e0(param_8,0xc,param_9), iVar4 == 0)))) &&
       ((*(char *)(local_68 + 0x319) == '\0' ||
        (iVar4 = FUN_1424cd2e0(param_8,0xd,param_9), iVar4 == 0)))) {
      iVar4 = FUN_1424cd2e0(param_8,9,param_9);
      uVar3 = (uint)local_78;
      if ((int)uVar3 < 4) {
        lVar12 = (longlong)iVar4 * 0x40 + *(longlong *)(*(longlong *)(local_68 + 0x300) + 0x340);
      }
      else if ((uVar3 == 4) || (5 < uVar3)) {
        lVar12 = (longlong)iVar4 * 0x40 + *(longlong *)(*(longlong *)(local_68 + 0x300) + 0x350);
      }
      else {
        lVar12 = (longlong)iVar4 * 0x40 + *(longlong *)(*(longlong *)(local_68 + 0x300) + 0x360);
      }
      if ((lVar12 != 0) && (uVar1 = *(ushort *)(lVar12 + 8), (uVar1 & 1) == 0)) {
        if ((short)uVar1 < 0) {
          iVar4 = *(int *)(lVar12 + 0xc);
        }
        else {
          iVar4 = (int)(short)uVar1 >> 5;
        }
        lVar15 = 0;
        FUN_1424a9690(local_70,lVar12,0,iVar4);
        break;
      }
    }
    lVar15 = 0;
    FUN_14254eee0(local_68,local_70,0x61,local_78,CONCAT44(uVar6,param_5),CONCAT44(uVar18,param_6),
                  param_7,param_8,param_9);
    break;
  case 0x24:
    pcVar9 = (char *)FUN_142607f60(local_68 + 0x220,param_9);
    lVar15 = 0;
    if (*param_9 < 1) {
      if (pcVar9 == (char *)0x0) {
        FUN_14254eee0(local_68,local_70,0x61,local_78,CONCAT44(uVar6,param_5),
                      CONCAT44(uVar18,param_6),param_7,param_8,param_9);
        lVar15 = 0;
      }
      else {
        iVar4 = FUN_1424cd2e0(param_8,0xb);
        iVar16 = 0;
        iVar5 = 0;
        if (*(char *)(local_68 + 0x318) != '\0') {
          iVar5 = FUN_1424cd2e0(param_8,0xc,param_9);
        }
        if (*(char *)(local_68 + 0x319) != '\0') {
          iVar16 = FUN_1424cd2e0(param_8,0xd,param_9);
        }
        uVar3 = (uint)local_78;
        if (((iVar5 == 0 && iVar4 == 0) && iVar16 == 0) && (*pcVar9 != '\0')) {
LAB_142550771:
          uVar8 = *(uint *)(pcVar9 + (longlong)iVar4 * 4 + 4);
          lVar12 = (longlong)(int)uVar8;
          if ((int)uVar3 < 4) {
            lVar12 = lVar12 * 0x40 + *(longlong *)(*(longlong *)(local_68 + 0x300) + 0x340);
          }
          else if ((uVar3 == 4) || (5 < uVar3)) {
            lVar12 = lVar12 * 0x40 + *(longlong *)(*(longlong *)(local_68 + 0x300) + 0x350);
          }
          else {
            lVar12 = lVar12 * 0x40 + *(longlong *)(*(longlong *)(local_68 + 0x300) + 0x360);
          }
        }
        else if ((((iVar4 == 0xc) && ((iVar16 == 0 && iVar5 == 0 && (uVar8 = 1, pcVar9[1] != '\0')))
                  ) || (uVar8 = *(uint *)(pcVar9 + (longlong)iVar4 * 4 + 4), 0xb < uVar8)) ||
                ((0xc01U >> (uVar8 & 0x1f) & 1) == 0)) {
          if ((int)uVar3 < 4) {
            lVar12 = (longlong)(int)uVar8 * 0x40 +
                     *(longlong *)(*(longlong *)(local_68 + 0x300) + 0x340);
          }
          else if ((uVar3 == 4) || (5 < uVar3)) {
            lVar12 = (longlong)(int)uVar8 * 0x40 +
                     *(longlong *)(*(longlong *)(local_68 + 0x300) + 0x350);
          }
          else {
            lVar12 = (longlong)(int)uVar8 * 0x40 +
                     *(longlong *)(*(longlong *)(local_68 + 0x300) + 0x360);
          }
          if (lVar12 == 0) goto LAB_14255076c;
          if ((uVar8 < 2) && ((*(ushort *)(lVar12 + 8) & 1) != 0)) goto LAB_142550771;
        }
        else {
LAB_14255076c:
          if (uVar8 < 2) goto LAB_142550771;
          lVar12 = 0;
        }
        if (((uVar8 & 0xfffffffe) == 10) || (uVar1 = *(ushort *)(lVar12 + 8), (uVar1 & 1) != 0)) {
          FUN_14254eee0(local_68,local_70,0x61,local_78,CONCAT44(uVar6,param_5),
                        CONCAT44(uVar18,param_6),param_7,param_8,param_9);
          lVar15 = 0;
        }
        else {
          if ((short)uVar1 < 0) {
            iVar4 = *(int *)(lVar12 + 0xc);
          }
          else {
            iVar4 = (int)(short)uVar1 >> 5;
          }
          FUN_1424a9690(local_70,lVar12,0,iVar4);
          lVar15 = 0;
        }
      }
    }
    break;
  case 0x25:
    local_1c8 = &PTR_FUN_149e18960;
    local_1c0 = 2;
    lVar12 = FUN_1426051b0(*(undefined8 *)(local_68 + 0x300),&local_1c8);
    if (*(short *)(lVar12 + 8) < 0) {
      iVar4 = *(int *)(lVar12 + 0xc);
    }
    else {
      iVar4 = (int)*(short *)(lVar12 + 8) >> 5;
    }
    FUN_1424a9690(local_70,lVar12,0,iVar4);
LAB_1425500fc:
    lVar15 = 0;
    pppuVar13 = &local_1c8;
LAB_14254f172:
    FUN_140859a90(pppuVar13);
  }
  if ((param_6 == 0) && (*(longlong *)(local_68 + 0x358) != 0)) {
    if (*(short *)(local_70 + 8) < 0) {
      iVar4 = *(int *)(local_70 + 0xc);
    }
    else {
      iVar4 = (int)*(short *)(local_70 + 8) >> 5;
    }
    if (local_7c < iVar4) {
      uVar6 = FUN_1424a8030(local_70);
      cVar2 = FUN_1424d8720(uVar6);
      if (cVar2 != '\0') {
        if (param_5 != 0x102) {
          if (param_5 == 0x104) {
            pcVar9 = (char *)(*(longlong *)(local_68 + 0x300) + lVar15 * 2 + 0x321);
          }
          else {
            if (param_5 != 0x103) goto LAB_14254f180;
            pcVar9 = (char *)(*(longlong *)(local_68 + 0x300) + lVar15 * 2 + 800);
          }
          if (*pcVar9 == '\0') goto LAB_14254f180;
        }
        FUN_1424a7860(&local_1c8,local_70,local_7c);
        FUN_1425f56e0(&local_1c8,*(undefined8 *)(local_68 + 0x358),local_68 + 0x220,0x300);
        if (*(short *)(local_70 + 8) < 0) {
          iVar4 = *(int *)(local_70 + 0xc);
        }
        else {
          iVar4 = (int)*(short *)(local_70 + 8) >> 5;
        }
        FUN_142551110(local_70,local_7c,iVar4,&local_1c8);
        FUN_140859a90(&local_1c8);
      }
    }
  }
LAB_14254f180:
  if (*(short *)(local_70 + 8) < 0) {
    iVar4 = *(int *)(local_70 + 0xc);
  }
  else {
    iVar4 = (int)*(short *)(local_70 + 8) >> 5;
  }
  (**(code **)(*param_7 + 8))(param_7,*(undefined4 *)(&DAT_1499e0780 + local_88 * 4),local_7c,iVar4)
  ;
LAB_14254f1c1:
  FUN_140859a90(local_208);
  return;
}



// FUNCTION 142550870 Unwind@142550870 body=64 status=ok
// SIG undefined Unwind@142550870(void)

void Unwind_142550870(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 1425508b0 Unwind@1425508b0 body=64 status=ok
// SIG undefined Unwind@1425508b0(void)

void Unwind_1425508b0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 1425508f0 Unwind@1425508f0 body=64 status=ok
// SIG undefined Unwind@1425508f0(void)

void Unwind_1425508f0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 142550930 Unwind@142550930 body=67 status=ok
// SIG undefined Unwind@142550930(void)

void Unwind_142550930(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 400);
  return;
}



// FUNCTION 142550980 Unwind@142550980 body=64 status=ok
// SIG undefined Unwind@142550980(void)

void Unwind_142550980(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x50);
  return;
}



// FUNCTION 1425509c0 FUN_1425509c0 body=62 status=ok
// SIG undefined FUN_1425509c0(void)

void FUN_1425509c0(longlong *param_1)

{
  param_1 = (longlong *)*param_1;
  if (param_1 != (longlong *)0x0) {
    if (*param_1 != 0) {
      FUN_142537ca0();
    }
    FUN_1401773f0(param_1);
    return;
  }
  return;
}



// FUNCTION 142550a00 Unwind@142550a00 body=20 status=ok
// SIG undefined Unwind@142550a00(void)

void Unwind_142550a00(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 142550a20 FUN_142550a20 body=623 status=ok
// SIG undefined FUN_142550a20(void)

void FUN_142550a20(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
                  int param_5,int param_6)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined **local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined1 local_d8 [72];
  undefined1 local_90 [8];
  short local_88;
  int local_84;
  int local_4c;
  longlong *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (*(longlong **)(param_1 + 0x150) == param_2) {
    if (param_6 == 10) {
      switch(param_5) {
      case 1:
        plVar2 = (longlong *)(param_1 + 0x328);
        break;
      case 2:
        plVar2 = (longlong *)(param_1 + 0x330);
        break;
      case 3:
        plVar2 = (longlong *)(param_1 + 0x338);
        break;
      case 4:
        plVar2 = (longlong *)(param_1 + 0x340);
        break;
      default:
        goto switchD_142550adb_default;
      }
    }
    else {
      if ((param_5 != 2) || (param_6 != 2)) goto switchD_142550adb_default;
      plVar2 = (longlong *)(param_1 + 0x348);
    }
    lVar1 = *plVar2;
    if (lVar1 != 0) {
      FUN_142573c40(&local_170,0);
      local_170 = icu_64::number::impl::UFormattedNumberData::vftable;
      FUN_142537d10(local_d8);
      FUN_142538f60(local_d8,param_4);
      local_4c = 0;
      FUN_142569a70(lVar1,&local_170,&local_4c);
      if (local_4c < 1) {
        FUN_14260a2b0(&local_168,local_90);
        if (-1 < local_88) {
          local_84 = (int)local_88 >> 5;
        }
        FUN_1424a9690(param_3,local_90,0,local_84);
        FUN_140859a90(local_90);
      }
      FUN_142564760(&local_170);
      return;
    }
  }
switchD_142550adb_default:
  plVar2 = (longlong *)
           __RTDynamicCast(param_2,0,&icu_64::NumberFormat::RTTI_Type_Descriptor,
                           &icu_64::RuleBasedNumberFormat::RTTI_Type_Descriptor,0);
  if (plVar2 == (longlong *)0x0) {
    if (param_2 == (longlong *)0x0) {
      return;
    }
    local_170 = icu_64::FieldPosition::vftable;
    local_168 = 0xffffffff;
    local_160 = 0;
    uVar3 = (**(code **)(*param_2 + 0x18))(param_2);
    local_48 = (longlong *)
               __RTDynamicCast(uVar3,0,&icu_64::Format::RTTI_Type_Descriptor,
                               &icu_64::NumberFormat::RTTI_Type_Descriptor,0);
    (**(code **)(*local_48 + 0xd8))(local_48,param_5);
    (**(code **)(*local_48 + 0xd0))(local_48,param_6);
    (**(code **)(*local_48 + 0x78))(local_48,param_4,param_3,&local_170);
    (**(code **)*local_48)(local_48,1);
  }
  else {
    local_170 = icu_64::FieldPosition::vftable;
    local_168 = 0xffffffff;
    local_160 = 0;
    (**(code **)(*plVar2 + 0x78))(plVar2,param_4,param_3,&local_170);
  }
  thunk_FUN_1424b70d0(&local_170);
  return;
}



// FUNCTION 142550c90 Unwind@142550c90 body=51 status=ok
// SIG undefined Unwind@142550c90(void)

void Unwind_142550c90(undefined8 param_1,longlong param_2)

{
  FUN_142564760(param_2 + 0x28);
  return;
}



// FUNCTION 142550cd0 Unwind@142550cd0 body=51 status=ok
// SIG undefined Unwind@142550cd0(void)

void Unwind_142550cd0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x28);
  return;
}



// FUNCTION 142550d10 Unwind@142550d10 body=59 status=ok
// SIG undefined Unwind@142550d10(void)

void Unwind_142550d10(undefined8 param_1,longlong param_2)

{
  (**(code **)**(undefined8 **)(param_2 + 0x150))(*(undefined8 **)(param_2 + 0x150),1);
  return;
}



// FUNCTION 142550d50 Unwind@142550d50 body=51 status=ok
// SIG undefined Unwind@142550d50(void)

void Unwind_142550d50(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x28);
  return;
}



// FUNCTION 142550d90 Unwind@142550d90 body=51 status=ok
// SIG undefined Unwind@142550d90(void)

void Unwind_142550d90(undefined8 param_1,longlong param_2)

{
  FUN_142573ca0(param_2 + 0x28);
  return;
}



// FUNCTION 142550dd0 Unwind@142550dd0 body=54 status=ok
// SIG undefined Unwind@142550dd0(void)

void Unwind_142550dd0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x108);
  return;
}



// FUNCTION 142550e10 FUN_142550e10 body=57 status=ok
// SIG undefined FUN_142550e10(void)

void FUN_142550e10(undefined8 param_1,uint param_2,longlong param_3,int param_4)

{
  short sVar1;
  longlong lVar2;
  
  if ((-1 < (int)param_2) && ((int)param_2 < param_4)) {
    lVar2 = (ulonglong)param_2 * 0x40;
    sVar1 = *(short *)(param_3 + 8 + lVar2);
    if (sVar1 < 0) {
      FUN_1424a9690(param_1,param_3 + lVar2,0,*(undefined4 *)(param_3 + 0xc + lVar2));
      return;
    }
    FUN_1424a9690(param_1,param_3 + lVar2,0,(int)sVar1 >> 5);
    return;
  }
  return;
}



// FUNCTION 142550e50 FUN_142550e50 body=198 status=ok
// SIG undefined FUN_142550e50(void)

void FUN_142550e50(undefined8 param_1,uint param_2,longlong param_3,int param_4,longlong param_5,
                  undefined8 param_6)

{
  short sVar1;
  longlong lVar2;
  int iVar3;
  undefined **local_70;
  undefined2 local_68;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if ((-1 < (int)param_2) && ((int)param_2 < param_4)) {
    if (param_5 == 0) {
      lVar2 = (ulonglong)param_2 * 0x40;
      sVar1 = *(short *)(param_3 + 8 + lVar2);
      if (sVar1 < 0) {
        iVar3 = *(int *)(param_3 + 0xc + lVar2);
      }
      else {
        iVar3 = (int)sVar1 >> 5;
      }
      FUN_1424a9690(param_1,param_3 + lVar2,0,iVar3);
      return;
    }
    local_70 = &PTR_FUN_149e18960;
    local_68 = 2;
    FUN_1425fb600(&local_70,param_5,1,1,param_6);
    FUN_1425fb990(&local_70,param_3 + (ulonglong)param_2 * 0x40,param_1,param_6);
    thunk_FUN_140859a90(&local_70);
  }
  return;
}



// FUNCTION 142550f20 Unwind@142550f20 body=40 status=ok
// SIG undefined Unwind@142550f20(void)

void Unwind_142550f20(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 142550f50 Unwind@142550f50 body=40 status=ok
// SIG undefined Unwind@142550f50(void)

void Unwind_142550f50(undefined8 param_1,longlong param_2)

{
  thunk_FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 142550f80 FUN_142550f80 body=397 status=ok
// SIG undefined FUN_142550f80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_142550f80(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x308);
  if (lVar2 == 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c793380) && (FUN_144b3d300(&DAT_14c793380), DAT_14c793380 == -1)) {
      _DAT_14c793370 = 0;
      uRam000000014c793378 = 0;
      _DAT_14c793360 = 0;
      uRam000000014c793368 = 0;
      _DAT_14c793350 = 0;
      uRam000000014c793358 = 0;
      _DAT_14c793340 = 0;
      uRam000000014c793348 = 0;
      _DAT_14c793330 = 0;
      uRam000000014c793338 = 0;
      _Mtx_init_in_situ(&DAT_14c793330,2);
      atexit((_func_5014 *)&LAB_1425562c0);
      _Init_thread_footer(&DAT_14c793380);
    }
    FUN_142501320(&DAT_14c793330);
    if (*(longlong *)(param_1 + 0x308) == 0) {
      uVar1 = FUN_142523a50(param_1 + 0x220,param_2);
      if (0 < *param_2) {
        return 0;
      }
      *(undefined8 *)(param_1 + 0x308) = uVar1;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c793380) && (FUN_144b3d300(&DAT_14c793380), DAT_14c793380 == -1)) {
      _DAT_14c793370 = 0;
      uRam000000014c793378 = 0;
      _DAT_14c793360 = 0;
      uRam000000014c793368 = 0;
      _DAT_14c793350 = 0;
      uRam000000014c793358 = 0;
      _DAT_14c793340 = 0;
      uRam000000014c793348 = 0;
      _DAT_14c793330 = 0;
      uRam000000014c793338 = 0;
      _Mtx_init_in_situ(&DAT_14c793330,2);
      atexit((_func_5014 *)&LAB_1425562c0);
      _Init_thread_footer(&DAT_14c793380);
    }
    FUN_142501400(&DAT_14c793330);
    lVar2 = *(longlong *)(param_1 + 0x308);
  }
  return lVar2;
}



// FUNCTION 142551110 FUN_142551110 body=49 status=ok
// SIG undefined FUN_142551110(void)

void FUN_142551110(undefined8 param_1,int param_2,int param_3,longlong param_4)

{
  int iVar1;
  
  if (*(short *)(param_4 + 8) < 0) {
    iVar1 = *(int *)(param_4 + 0xc);
  }
  else {
    iVar1 = (int)*(short *)(param_4 + 8) >> 5;
  }
  FUN_1424a9610(param_1,param_2,param_3 - param_2,param_4,0,iVar1);
  return;
}



// FUNCTION 142551150 FUN_142551150 body=261 status=ok
// SIG undefined FUN_142551150(void)

void FUN_142551150(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 200))(param_2,0);
  local_38 = 0;
  plVar3 = (longlong *)
           __RTDynamicCast(param_2,0,&icu_64::NumberFormat::RTTI_Type_Descriptor,
                           &icu_64::DecimalFormat::RTTI_Type_Descriptor);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x208))(plVar3,0);
  }
  (**(code **)(*param_2 + 0xb0))(param_2,1);
  (**(code **)(*param_2 + 0xe8))(param_2,0);
  puVar1 = *(undefined8 **)(param_1 + 0x150);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(longlong **)(param_1 + 0x150) = param_2;
  lVar2 = *(longlong *)(param_1 + 800);
  if (lVar2 != 0) {
    lVar4 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar4 * 8) != 0) {
        FUN_142537ca0();
        *(undefined8 *)(lVar2 + lVar4 * 8) = 0;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x26);
    FUN_1424da110(lVar2);
    *(undefined8 *)(param_1 + 800) = 0;
  }
  local_24 = 0;
  FUN_14254bfe0(param_1);
  FUN_14254e380(param_1,&local_24);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 142551270 FUN_142551270 body=3829 status=ok
// SIG undefined FUN_142551270(void)

void FUN_142551270(longlong *param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  ushort uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  char *_Str2;
  char *_Str1;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  ushort *puVar15;
  undefined2 uVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong *plVar19;
  int iVar20;
  ushort uVar21;
  short sVar22;
  short sVar23;
  undefined8 uVar24;
  ulonglong uVar25;
  uint uVar26;
  uint uVar27;
  undefined8 uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  ulonglong in_stack_fffffffffffffe68;
  ulonglong in_stack_fffffffffffffe70;
  ulonglong in_stack_fffffffffffffe78;
  undefined1 local_140 [32];
  longlong *local_120;
  uint local_118 [8];
  ulonglong local_f8;
  longlong local_f0;
  longlong *local_e8;
  longlong local_e0;
  int local_d8;
  undefined4 local_d4;
  longlong local_d0;
  longlong *local_c8;
  int local_bc;
  undefined8 *local_b8;
  int local_b0;
  int local_ac;
  longlong *local_a8;
  int local_9c;
  ulonglong local_98;
  uint local_90;
  uint local_8c;
  char local_85;
  int local_84;
  undefined8 local_80;
  
  local_80 = 0xfffffffffffffffe;
  local_84 = 0;
  uVar27 = *(uint *)(param_4 + 8);
  if ((int)uVar27 < 0) {
    *(undefined4 *)(param_4 + 0xc) = 0;
    return;
  }
  local_d8 = -1;
  local_85 = '\0';
  local_d4 = 0xffffffff;
  local_9c = 0;
  local_90 = uVar27;
  if ((longlong *)param_1[0x29] == param_3) {
LAB_14255137b:
    local_e8 = (longlong *)0x0;
    local_c8 = param_3;
LAB_142551385:
    if ((*(longlong *)(param_1[0x60] + 0x1b8) == 0) || (*(int *)(param_1[0x60] + 0x1c0) < 7)) {
      local_b8 = (undefined8 *)0x0;
LAB_142551407:
      local_118[0] = 0;
      uVar13 = (uint)(short)param_1[0x2d];
      if ((short)param_1[0x2d] < 0) {
        uVar8 = *(uint *)((longlong)param_1 + 0x16c);
      }
      else {
        uVar8 = (int)uVar13 >> 5;
      }
      uVar26 = uVar27;
      local_e0 = param_4;
      local_a8 = param_3;
      local_8c = uVar27;
      if (0 < (int)uVar8) {
        local_120 = param_1 + 0x2c;
        local_d0 = (longlong)param_1 + 0x16a;
        local_f8 = 0;
        uVar25 = 0xffffffff;
        local_ac = 0;
LAB_142551490:
        do {
          uVar26 = local_118[0];
          if (uVar8 < local_118[0] || uVar8 - local_118[0] == 0) {
LAB_142551520:
            uVar2 = (**(code **)(*param_1 + 0x58))(param_1);
            uVar3 = (**(code **)(*param_1 + 0xd8))(param_1,2,&local_84);
            uVar4 = (**(code **)(*param_1 + 0xd8))(param_1,0,&local_84);
            in_stack_fffffffffffffe78 = CONCAT71((int7)(in_stack_fffffffffffffe78 >> 8),uVar2);
            in_stack_fffffffffffffe70 = CONCAT71((int7)(in_stack_fffffffffffffe70 >> 8),uVar3);
            in_stack_fffffffffffffe68 = CONCAT71((int7)(in_stack_fffffffffffffe68 >> 8),uVar4);
            cVar5 = FUN_1425544c0(local_120,local_118,param_2,&local_90,in_stack_fffffffffffffe68,
                                  in_stack_fffffffffffffe70,in_stack_fffffffffffffe78);
            if (cVar5 == '\0') {
              local_84 = 9;
              param_4 = local_e0;
              goto LAB_1425520e3;
            }
            uVar25 = 0xffffffff;
            uVar13 = local_118[0];
            uVar8 = local_90;
          }
          else {
            lVar12 = local_d0;
            if ((uVar13 & 2) == 0) {
              lVar12 = param_1[0x2f];
            }
            uVar1 = *(ushort *)(lVar12 + (longlong)(int)local_118[0] * 2);
            uVar18 = (ulonglong)uVar1;
            if ((0x7f < uVar18) || ((&DAT_1499e0660)[uVar18] == '\0')) goto LAB_142551520;
            uVar27 = local_118[0] + 1;
            iVar20 = 1;
            iVar7 = iVar20;
            uVar14 = uVar27;
            uVar13 = local_118[0];
            if ((int)uVar27 < (int)uVar8) {
              uVar13 = uVar8 - 1;
              puVar15 = (ushort *)(lVar12 + (longlong)(int)local_118[0] * 2);
              do {
                puVar15 = puVar15 + 1;
                uVar21 = 0xffff;
                if (uVar27 < uVar8) {
                  uVar21 = *puVar15;
                }
                if (uVar21 != uVar1) {
                  iVar7 = iVar20;
                  uVar14 = uVar27;
                  uVar13 = uVar27 - 1;
                  break;
                }
                iVar20 = iVar20 + 1;
                uVar27 = uVar27 + 1;
                iVar7 = uVar8 - local_118[0];
                uVar14 = uVar8;
              } while (uVar8 != uVar27);
            }
            local_98 = uVar25;
            cVar5 = FUN_142605250(uVar18,iVar7);
            uVar32 = (undefined4)(in_stack_fffffffffffffe68 >> 0x20);
            if (cVar5 == '\0') {
              uVar25 = 0xffffffff;
LAB_142551629:
              param_3 = local_a8;
              uVar27 = local_8c;
              uVar8 = local_90;
              if (uVar1 != 0x6c) {
                in_stack_fffffffffffffe68 = CONCAT44((int)(in_stack_fffffffffffffe68 >> 0x20),iVar7)
                ;
                in_stack_fffffffffffffe78 = CONCAT71((int7)(in_stack_fffffffffffffe78 >> 8),1);
                in_stack_fffffffffffffe70 = in_stack_fffffffffffffe70 & 0xffffffffffffff00;
                local_98 = uVar25;
                uVar8 = FUN_1425522f0(param_1,param_2,&local_90,uVar1,in_stack_fffffffffffffe68,
                                      in_stack_fffffffffffffe70,in_stack_fffffffffffffe78,&local_85,
                                      &local_d4,local_c8,uVar13,local_b8,&local_9c,&local_d8);
                uVar27 = local_8c;
                uVar25 = local_98;
                if (uVar8 == ~local_90) {
                  sVar22 = (short)param_1[0x2d];
                  if (sVar22 < 0) {
                    uVar26 = *(uint *)((longlong)param_1 + 0x16c);
                  }
                  else {
                    uVar26 = (int)sVar22 >> 5;
                  }
                  uVar14 = uVar13 + 1;
                  uVar8 = local_90;
                  if ((int)uVar14 < (int)uVar26) {
                    uVar16 = 0xffff;
                    if (uVar14 < uVar26) {
                      lVar12 = local_d0;
                      if (((int)sVar22 & 2U) == 0) {
                        lVar12 = param_1[0x2f];
                      }
                      uVar16 = *(undefined2 *)(lVar12 + (longlong)(int)uVar14 * 2);
                    }
                    cVar5 = FUN_1425cc7f0(uVar16);
                    uVar25 = local_98;
                    uVar27 = local_8c;
                    if (cVar5 != '\0') {
                      lVar12 = (longlong)(int)uVar13 + 2;
                      do {
                        sVar22 = (short)param_1[0x2d];
                        if (sVar22 < 0) {
                          uVar27 = *(uint *)((longlong)param_1 + 0x16c);
                        }
                        else {
                          uVar27 = (int)sVar22 >> 5;
                        }
                        uVar13 = (uint)lVar12;
                        if ((int)uVar27 <= lVar12) break;
                        uVar16 = 0xffff;
                        if (uVar13 < uVar27) {
                          lVar17 = local_d0;
                          if (((int)sVar22 & 2U) == 0) {
                            lVar17 = param_1[0x2f];
                          }
                          uVar16 = *(undefined2 *)(lVar17 + lVar12 * 2);
                        }
                        cVar5 = FUN_1425cc7f0(uVar16);
                        lVar12 = lVar12 + 1;
                      } while (cVar5 != '\0');
                      uVar13 = uVar13 - 1;
                      uVar25 = local_98;
                      uVar27 = local_8c;
                    }
                  }
                }
                else if ((int)uVar8 < 1) {
                  local_84 = 9;
                  param_4 = local_e0;
                  goto LAB_1425520e3;
                }
              }
            }
            else {
              uVar25 = local_98;
              if ((int)local_98 < 0) {
                sVar22 = (short)param_1[0x2d];
                if (sVar22 < 0) {
                  uVar27 = *(uint *)((longlong)param_1 + 0x16c);
                }
                else {
                  uVar27 = (int)sVar22 >> 5;
                }
                if ((int)uVar14 < (int)uVar27) {
                  uVar18 = CONCAT62((int6)((ulonglong)param_2 >> 0x10),0xffff);
                  if (uVar14 < uVar27) {
                    lVar12 = local_d0;
                    if (((int)sVar22 & 2U) == 0) {
                      lVar12 = param_1[0x2f];
                    }
                    uVar18 = (ulonglong)*(ushort *)(lVar12 + (longlong)(int)uVar14 * 2);
                  }
                  local_f0 = param_2;
                  iVar20 = FUN_1426051e0(uVar18 & 0xffffffff);
                  param_2 = local_f0;
                  uVar25 = local_98;
                  if (iVar20 != 0x26) {
                    sVar22 = (short)param_1[0x2d];
                    if (sVar22 < 0) {
                      uVar27 = *(uint *)((longlong)param_1 + 0x16c);
                    }
                    else {
                      uVar27 = (int)sVar22 >> 5;
                    }
                    lVar12 = local_d0;
                    if (((int)sVar22 & 2U) == 0) {
                      lVar12 = param_1[0x2f];
                    }
                    lVar17 = 0;
                    do {
                      sVar22 = -1;
                      if (uVar14 + 1 + (int)lVar17 < uVar27) {
                        sVar22 = *(short *)(lVar12 + (longlong)(int)uVar14 * 2 + 2 + lVar17 * 2);
                      }
                      lVar17 = lVar17 + 1;
                    } while (sVar22 == (short)uVar18);
                    cVar5 = FUN_142605210(iVar20);
                    uVar32 = (undefined4)(in_stack_fffffffffffffe68 >> 0x20);
                    uVar25 = local_98;
                    if (cVar5 != '\0') {
                      local_ac = 0;
                      local_f8 = (ulonglong)local_90;
                      uVar25 = (ulonglong)uVar26;
                    }
                    param_2 = local_f0;
                    if (-1 < (int)uVar25) goto LAB_1425515f0;
                  }
                }
                goto LAB_142551629;
              }
LAB_1425515f0:
              param_3 = local_a8;
              iVar20 = local_ac;
              local_98 = uVar25;
              if (uVar26 == (uint)uVar25) {
                iVar7 = iVar7 - local_ac;
                if (iVar7 == 0) {
                  local_84 = 9;
                  param_4 = local_e0;
                  uVar27 = local_8c;
                  goto LAB_1425520e3;
                }
                iVar20 = local_ac + 1;
              }
              in_stack_fffffffffffffe68 = CONCAT44(uVar32,iVar7);
              in_stack_fffffffffffffe78 = in_stack_fffffffffffffe78 & 0xffffffffffffff00;
              in_stack_fffffffffffffe70 = CONCAT71((int7)(in_stack_fffffffffffffe70 >> 8),1);
              uVar8 = FUN_1425522f0(param_1,param_2,&local_90,uVar1,in_stack_fffffffffffffe68,
                                    in_stack_fffffffffffffe70,in_stack_fffffffffffffe78,&local_85,
                                    &local_d4,local_c8,uVar13,local_b8,&local_9c,0);
              uVar25 = local_98;
              uVar27 = local_8c;
              local_ac = iVar20;
              if ((int)uVar8 < 0) {
                uVar13 = (int)local_98 - 1;
                uVar8 = (uint)local_f8;
              }
            }
          }
          local_90 = uVar8;
          local_118[0] = uVar13 + 1;
          uVar13 = (uint)(short)param_1[0x2d];
          uVar26 = local_90;
          if ((short)param_1[0x2d] < 0) {
            uVar8 = *(uint *)((longlong)param_1 + 0x16c);
            if ((int)uVar8 <= (int)local_118[0]) break;
            goto LAB_142551490;
          }
          uVar8 = (int)uVar13 >> 5;
        } while ((int)local_118[0] < (int)uVar8);
      }
      sVar22 = *(short *)(param_2 + 8);
      if (sVar22 < 0) {
        uVar13 = *(uint *)(param_2 + 0xc);
      }
      else {
        uVar13 = (int)sVar22 >> 5;
      }
      if (uVar26 < uVar13) {
        if (((int)sVar22 & 2U) == 0) {
          param_2 = *(longlong *)(param_2 + 0x18);
        }
        else {
          param_2 = param_2 + 10;
        }
        if ((*(short *)(param_2 + (longlong)(int)uVar26 * 2) == 0x2e) &&
           (cVar5 = (**(code **)(*param_1 + 0xd8))(param_1,0,&local_84), cVar5 != '\0')) {
          sVar22 = (short)param_1[0x2d];
          if (sVar22 < 0) {
            iVar7 = *(int *)((longlong)param_1 + 0x16c);
          }
          else {
            iVar7 = (int)sVar22 >> 5;
          }
          if (0 < iVar7) {
            lVar12 = (longlong)param_1 + 0x16a;
            lVar17 = lVar12;
            if (((int)sVar22 & 2U) == 0) {
              lVar17 = param_1[0x2f];
            }
            sVar22 = *(short *)(lVar17 + (ulonglong)(iVar7 - 1) * 2);
            iVar20 = FUN_1426051e0(sVar22);
            if (iVar20 != 0x26) {
              sVar23 = (short)param_1[0x2d];
              if (sVar23 < 0) {
                uVar13 = *(uint *)((longlong)param_1 + 0x16c);
              }
              else {
                uVar13 = (int)sVar23 >> 5;
              }
              if (((int)sVar23 & 2U) == 0) {
                lVar12 = param_1[0x2f];
              }
              lVar17 = 0;
              do {
                sVar23 = -1;
                if ((uint)(iVar7 + -2 + (int)lVar17) < uVar13) {
                  sVar23 = *(short *)(lVar12 + (ulonglong)(iVar7 - 1) * 2 + -2 + lVar17 * 2);
                }
                lVar17 = lVar17 + -1;
              } while (sVar23 == sVar22);
              cVar5 = FUN_142605210(iVar20,-(int)lVar17);
              if (cVar5 == '\0') {
                uVar26 = uVar26 + 1;
                local_90 = uVar26;
              }
            }
          }
        }
      }
      iVar7 = local_d8;
      if (-1 < local_d8) {
        uVar28 = FUN_142607f60(param_1 + 0x44,&local_84);
        plVar10 = local_a8;
        cVar5 = FUN_1424ce0d0(local_a8,10);
        if ((cVar5 == '\0') && (cVar5 = FUN_1424ce0d0(plVar10,0xb), cVar5 == '\0')) {
          dVar29 = (double)FUN_1426080e0(uVar28,iVar7,&local_84);
          uVar27 = local_8c;
          plVar10 = local_a8;
          if (local_84 < 1) {
            uVar32 = 0x1e;
            if (dVar29 - (double)(int)dVar29 <= 0.0) {
              uVar32 = 0;
            }
            FUN_1424cd3f0(local_a8,0xb,(int)dVar29);
            uVar28 = 0xc;
LAB_142551cfb:
            FUN_1424cd3f0(plVar10,uVar28,uVar32);
          }
        }
        else {
          cVar5 = FUN_1424ce0d0(plVar10,0xb);
          if (cVar5 == '\0') {
            iVar9 = FUN_1424cd2e0(plVar10,10,&local_84);
            iVar20 = 0xc;
            if (iVar9 != 0) {
              iVar20 = iVar9;
            }
          }
          else {
            iVar20 = FUN_1424cd2e0(plVar10,0xb,&local_84);
          }
          if ((iVar20 == 0) || (iVar20 - 0xdU < 0xb)) {
            FUN_1424cd3f0(plVar10,0xb,iVar20);
            uVar27 = local_8c;
          }
          else {
            iVar9 = FUN_1424cd2e0(plVar10,0xc,&local_84);
            dVar29 = (double)FUN_1426080e0(uVar28,iVar7,&local_84);
            uVar27 = local_8c;
            if (local_84 < 1) {
              iVar7 = 0;
              if (iVar20 != 0xc) {
                iVar7 = iVar20;
              }
              dVar29 = ((double)iVar9 / 60.0 + (double)iVar7) - dVar29;
              plVar10 = local_a8;
              if ((dVar29 < -6.0) || (6.0 <= dVar29)) {
                uVar28 = 9;
                uVar32 = 1;
              }
              else {
                uVar28 = 9;
                uVar32 = 0;
              }
              goto LAB_142551cfb;
            }
          }
        }
      }
      param_3 = local_a8;
      param_4 = local_e0;
      *(uint *)(local_e0 + 8) = uVar26;
      if ((local_85 != '\0') || (local_9c != 0)) {
        if (local_85 == '\0') {
LAB_142551d9f:
          if (local_9c != 0) {
            puVar11 = (undefined8 *)(**(code **)(*param_3 + 0x10))(param_3);
            if (puVar11 == (undefined8 *)0x0) goto LAB_142551edd;
            plVar10 = (longlong *)FUN_1424ce780(param_3);
            in_stack_fffffffffffffe68 = in_stack_fffffffffffffe68 & 0xffffffff00000000;
            lVar12 = __RTDynamicCast(plVar10,0,&icu_64::TimeZone::RTTI_Type_Descriptor,
                                     &icu_64::OlsonTimeZone::RTTI_Type_Descriptor,
                                     in_stack_fffffffffffffe68);
            if (lVar12 == 0) {
              in_stack_fffffffffffffe68 = in_stack_fffffffffffffe68 & 0xffffffff00000000;
              lVar12 = __RTDynamicCast(plVar10,0,&icu_64::TimeZone::RTTI_Type_Descriptor,
                                       &icu_64::SimpleTimeZone::RTTI_Type_Descriptor,
                                       in_stack_fffffffffffffe68);
              if (lVar12 != 0) goto LAB_142551e5d;
              in_stack_fffffffffffffe68 = in_stack_fffffffffffffe68 & 0xffffffff00000000;
              lVar12 = __RTDynamicCast(plVar10,0,&icu_64::TimeZone::RTTI_Type_Descriptor,
                                       &icu_64::RuleBasedTimeZone::RTTI_Type_Descriptor,
                                       in_stack_fffffffffffffe68);
              if (lVar12 != 0) goto LAB_142551e5d;
              lVar12 = __RTDynamicCast(plVar10,0,&icu_64::TimeZone::RTTI_Type_Descriptor,
                                       &icu_64::VTimeZone::RTTI_Type_Descriptor,
                                       in_stack_fffffffffffffe68 & 0xffffffff00000000);
              plVar19 = (longlong *)0x0;
              if (lVar12 != 0) goto LAB_142551e5d;
            }
            else {
LAB_142551e5d:
              plVar19 = plVar10;
            }
            FUN_1424cd3f0(puVar11,0xf,0);
            FUN_1424cd3f0(puVar11,0x10,0);
            dVar29 = (double)FUN_1424cd180(puVar11,&local_84);
            if (plVar19 == (longlong *)0x0) {
              (**(code **)(*plVar10 + 0x18))(plVar10,dVar29,1,&local_b0,&local_bc,&local_84);
            }
            else {
              if (local_9c == 1) {
                uVar28 = 1;
                uVar24 = 1;
              }
              else {
                uVar28 = 3;
                uVar24 = 3;
              }
              (**(code **)(*plVar19 + 0x98))
                        (plVar19,dVar29,uVar28,uVar24,&local_b0,&local_bc,&local_84);
            }
            iVar7 = 0;
            if ((local_9c != 1) && (iVar7 = local_bc, local_bc == 0)) {
              if (plVar19 == (longlong *)0x0) {
                iVar20 = (**(code **)(*plVar10 + 0x60))(plVar10);
              }
              else {
                dVar30 = (double)local_b0;
                FUN_14257c0f0(local_118);
                FUN_14257c0f0(local_140);
                dVar29 = dVar29 + dVar30;
                dVar30 = dVar29;
                do {
                  cVar5 = (**(code **)(*plVar19 + 0x70))(plVar19,dVar30,1,local_118);
                  if (cVar5 == '\0') {
                    iVar20 = 0;
                    break;
                  }
                  dVar30 = (double)FUN_14257c2c0(local_118);
                  dVar30 = dVar30 + -1.0;
                  uVar28 = FUN_14257c2e0(local_118);
                  iVar20 = FUN_1425da440(uVar28);
                } while (iVar20 == 0);
                uVar32 = SUB84(dVar29,0);
                uVar33 = (undefined4)((ulonglong)dVar29 >> 0x20);
                do {
                  cVar6 = (**(code **)(*plVar19 + 0x68))
                                    (plVar19,CONCAT44(uVar33,uVar32),0,local_140);
                  if (cVar6 == '\0') {
                    if ((cVar5 == '\0') || (iVar20 == 0)) goto LAB_142552079;
                    goto LAB_142552084;
                  }
                  dVar31 = (double)FUN_14257c2c0(local_140);
                  uVar32 = SUB84(dVar31,0);
                  uVar33 = (undefined4)((ulonglong)dVar31 >> 0x20);
                  uVar28 = FUN_14257c2d0(local_140);
                  iVar7 = FUN_1425da440(uVar28);
                } while (iVar7 == 0);
                if (cVar5 == '\0') {
                  iVar20 = iVar7;
                  if (cVar6 == '\0') {
LAB_142552079:
                    iVar20 = (**(code **)(*plVar19 + 0x60))(plVar19);
                  }
                }
                else if (dVar31 - dVar29 < dVar29 - dVar30) {
                  iVar20 = iVar7;
                }
LAB_142552084:
                FUN_14257c110(local_140);
                FUN_14257c110(local_118);
              }
              iVar7 = 3600000;
              if (iVar20 != 0) {
                iVar7 = iVar20;
              }
            }
            param_3 = local_a8;
            FUN_1424cd3f0(local_a8,0xf,local_b0);
            FUN_1424cd3f0(param_3,0x10,iVar7);
            (**(code **)*puVar11)(puVar11,1);
            uVar27 = local_8c;
          }
        }
        else {
          puVar11 = (undefined8 *)(**(code **)(*local_a8 + 0x10))(local_a8);
          if (puVar11 != (undefined8 *)0x0) {
            dVar29 = (double)FUN_1424cd180(puVar11,&local_84);
            if (((char)param_1[0x6a] != '\0') && (dVar29 < (double)param_1[0x62])) {
              FUN_1424cd3f0(param_3,1,*(int *)((longlong)param_1 + 0x31c) + 100);
            }
            (**(code **)*puVar11)(puVar11,1);
            goto LAB_142551d9f;
          }
LAB_142551edd:
          local_84 = 7;
        }
      }
    }
    else {
      local_b8 = (undefined8 *)thunk_FUN_1424da030(0x330);
      if (local_b8 == (undefined8 *)0x0) {
        local_84 = 7;
        local_b8 = (undefined8 *)0x0;
      }
      else {
        FUN_14260aa90(local_b8,*(longlong *)(param_1[0x60] + 0x1b8) + 0x180,param_1 + 0x44,&local_84
                     );
        if (local_84 < 1) goto LAB_142551407;
      }
    }
LAB_1425520e3:
    plVar10 = local_c8;
    if ((local_c8 != param_3) && (local_84 < 1)) {
      uVar28 = FUN_1424ce780(local_c8);
      FUN_14153dfe0(param_3,uVar28);
      uVar28 = FUN_1424cd180(plVar10,&local_84);
      FUN_1424ccf20(param_3,uVar28,&local_84);
    }
    if (local_b8 != (undefined8 *)0x0) {
      (**(code **)*local_b8)(local_b8,1);
    }
    plVar10 = local_e8;
    if (local_e8 != (longlong *)0x0) goto LAB_142552148;
  }
  else {
    _Str2 = (char *)(**(code **)(*(longlong *)param_1[0x29] + 0xb0))();
    _Str1 = (char *)(**(code **)(*param_3 + 0xb0))(param_3);
    iVar7 = strcmp(_Str1,_Str2);
    if (iVar7 == 0) goto LAB_14255137b;
    plVar10 = (longlong *)(**(code **)(*(longlong *)param_1[0x29] + 0x10))();
    if (plVar10 == (longlong *)0x0) goto LAB_14255215b;
    uVar28 = FUN_1424cd180(param_3,&local_84);
    FUN_1424ccf20(plVar10,uVar28,&local_84);
    if (local_84 < 1) {
      uVar28 = FUN_1424ce780(param_3);
      FUN_14153dfe0(plVar10,uVar28);
      local_e8 = plVar10;
      local_c8 = plVar10;
      goto LAB_142551385;
    }
LAB_142552148:
    (**(code **)*plVar10)(plVar10,1);
  }
  if (local_84 < 1) {
    return;
  }
LAB_14255215b:
  *(uint *)(param_4 + 0xc) = local_90;
  *(uint *)(param_4 + 8) = uVar27;
  return;
}



// FUNCTION 1425521a0 Unwind@1425521a0 body=110 status=ok
// SIG undefined Unwind@1425521a0(void)

void Unwind_1425521a0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x100));
  return;
}



// FUNCTION 142552210 Unwind@142552210 body=110 status=ok
// SIG undefined Unwind@142552210(void)

void Unwind_142552210(undefined8 param_1,longlong param_2)

{
  FUN_14257c110(param_2 + 0x78);
  return;
}



// FUNCTION 142552280 Unwind@142552280 body=107 status=ok
// SIG undefined Unwind@142552280(void)

void Unwind_142552280(undefined8 param_1,longlong param_2)

{
  FUN_14257c110(param_2 + 0xa0);
  return;
}



// FUNCTION 1425522f0 FUN_1425522f0 body=8318 status=ok
// SIG undefined FUN_1425522f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1425522f0(longlong *param_1,undefined ***param_2,int *param_3,undefined2 param_4,int param_5
                 ,char param_6,undefined1 param_7,undefined8 param_8,uint *param_9,
                 longlong *param_10,int param_11,longlong *param_12,undefined8 param_13,
                 undefined8 param_14)

{
  undefined1 auVar1 [12];
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  char *pcVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  undefined ***pppuVar17;
  undefined4 uVar18;
  undefined8 unaff_RSI;
  longlong lVar19;
  longlong lVar20;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar21;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 uVar22;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 extraout_XMM0_Qa_08;
  uint uVar28;
  uint uVar29;
  undefined1 auVar26 [16];
  ulonglong uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar33 [16];
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  undefined ***in_stack_fffffffffffffd68;
  uint7 uVar40;
  undefined8 uVar39;
  undefined1 local_248 [8];
  uint local_240;
  undefined1 local_1d8 [64];
  undefined **local_198;
  undefined2 local_190;
  undefined **local_158;
  undefined2 local_150;
  undefined **local_118;
  undefined2 local_110;
  undefined **local_d8;
  undefined2 local_d0;
  longlong local_90;
  longlong local_88;
  ulonglong local_80;
  undefined4 local_78;
  int local_74;
  undefined **local_70;
  ulonglong local_68;
  bool local_59;
  longlong *local_58;
  int local_4c [3];
  undefined1 auVar27 [16];
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  
  local_4c[1] = -2;
  local_4c[2] = -1;
  FUN_14252c810(local_248);
  local_4c[0] = 0;
  local_70 = icu_64::ParsePosition::vftable;
  local_68 = 0xffffffff00000000;
  uVar4 = FUN_1426051e0(CONCAT62((int6)((ulonglong)unaff_RSI >> 0x10),param_4) & 0xffffffff);
  local_198 = &PTR_FUN_149e18960;
  local_190 = 2;
  if (uVar4 == 0x26) {
LAB_14255245e:
    iVar5 = -*param_3;
    goto LAB_142552629;
  }
  uVar14 = (ulonglong)(int)uVar4;
  if ((param_1[100] == 0) || (lVar12 = *(longlong *)(param_1[100] + uVar14 * 8), lVar12 == 0)) {
    plVar10 = param_1 + 0x2a;
  }
  else {
    plVar10 = (longlong *)(lVar12 + 0x18);
  }
  local_88 = *plVar10;
  if (local_88 == 0) goto LAB_14255245e;
  local_78 = *(undefined4 *)(&DAT_1499e06e0 + uVar14 * 4);
  local_80 = uVar14;
  local_58 = param_1;
  FUN_1424a7220(local_1d8,&DAT_1499e0af2,4,0);
  if (param_12 != (longlong *)0x0) {
    (**(code **)(*param_12 + 0x70))(param_12,&local_88,1);
  }
  pcVar11 = (char *)(**(code **)(*param_10 + 0xb0))();
  iVar5 = strcmp(pcVar11,"chinese");
  if (iVar5 == 0) {
    local_59 = true;
  }
  else {
    pcVar11 = (char *)(**(code **)(*param_10 + 0xb0))();
    iVar5 = strcmp(pcVar11,"dangi");
    local_59 = iVar5 == 0;
  }
  iVar5 = *param_3;
  while( true ) {
    if (*(short *)(param_2 + 1) < 0) {
      iVar9 = *(int *)((longlong)param_2 + 0xc);
    }
    else {
      iVar9 = (int)*(short *)(param_2 + 1) >> 5;
    }
    if (iVar9 <= iVar5) goto LAB_14255261e;
    uVar6 = FUN_1424a8030(param_2,iVar5);
    cVar3 = FUN_1424d8b40(uVar6);
    if ((cVar3 == '\0') && (cVar3 = FUN_1425cc7f0(uVar6), cVar3 == '\0')) break;
    iVar5 = (*param_3 - (uint)(uVar6 < 0x10000)) + 2;
    *param_3 = iVar5;
  }
  local_74 = *param_3;
  local_68 = CONCAT44(local_68._4_4_,local_74);
  if ((uVar4 < 0x11) && ((0x18030U >> (uVar4 & 0x1f) & 1) != 0)) {
LAB_142552504:
    uVar21 = extraout_XMM0_Qa;
    if ((param_12 != (longlong *)0x0) && ((uVar4 == 0x1a || (uVar4 == 2)))) {
      lVar12 = (**(code **)(*param_12 + 0xb8))(param_12,param_2,&local_70,&local_158);
      if ((lVar12 == 0) ||
         ((((int)local_158 != 1 || ((int)local_68 <= local_74)) ||
          (cVar3 = FUN_14252d150(lVar12), cVar3 == '\0')))) {
        local_68 = CONCAT44(local_68._4_4_,local_74);
        uVar21 = FUN_1424cd3f0(param_10,0x16,0);
        goto LAB_1425525f0;
      }
      FUN_14252d370(local_248,*(undefined4 *)(lVar12 + 8));
      FUN_1424cd3f0(param_10,0x16,1);
      local_90 = lVar12 + -8;
      if (*(longlong *)(lVar12 + -8) != 0) {
        lVar20 = *(longlong *)(lVar12 + -8) * 0x70;
        do {
          FUN_14252d110(lVar12 + -0x70 + lVar20);
          lVar20 = lVar20 + -0x70;
        } while (lVar20 != 0);
      }
      uVar21 = FUN_1424b70c0(local_90);
LAB_1425526aa:
      uVar6 = local_240;
      if ((int)local_68 <= local_74) {
        uVar14 = 0;
        bVar2 = true;
        local_74 = (int)local_68;
        goto LAB_1425527f5;
      }
      uVar40 = (uint7)((ulonglong)in_stack_fffffffffffffd68 >> 8);
      if ((int)local_240 < 0) {
        in_stack_fffffffffffffd68 = (undefined ***)CONCAT71(uVar40,1);
        local_74 = FUN_1425551d0(local_58,param_2,local_68 & 0xffffffff,param_11 + 1,
                                 in_stack_fffffffffffffd68);
        uVar13 = -uVar6;
        if (local_74 == (int)local_68) {
          uVar13 = uVar6;
        }
      }
      else {
        in_stack_fffffffffffffd68 = (undefined ***)((ulonglong)uVar40 << 8);
        local_74 = FUN_1425551d0(local_58,param_2,local_68 & 0xffffffff,param_11 + 1,
                                 in_stack_fffffffffffffd68);
        uVar13 = uVar6;
      }
      uVar14 = (ulonglong)uVar13;
      cVar3 = (**(code **)(*local_58 + 0xd8))(local_58,0,local_4c);
      uVar21 = extraout_XMM0_Qa_00;
      if ((cVar3 != '\0') || ((0x60000ccUL >> (local_80 & 0x3f) & 1) == 0)) {
LAB_1425527e7:
        local_68 = CONCAT44(local_68._4_4_,local_74);
        bVar2 = false;
        goto LAB_1425527f5;
      }
      iVar5 = *(int *)(&DAT_1499e0890 + local_80 * 4);
      iVar9 = (**(code **)(*param_10 + 0x70))(param_10,local_78);
      if (((int)uVar13 <= iVar9 + iVar5) &&
         (iVar9 = (**(code **)(*param_10 + 0x60))(), uVar21 = extraout_XMM0_Qa_01,
         iVar9 + iVar5 <= (int)uVar13)) goto LAB_1425527e7;
      goto LAB_142553e34;
    }
LAB_1425525f0:
    pppuVar17 = param_2;
    if (param_6 == '\0') {
LAB_142552675:
      in_stack_fffffffffffffd68 = &local_70;
      uVar21 = FUN_142555460(uVar21,pppuVar17,local_248,0xffffffff,in_stack_fffffffffffffd68,param_7
                             ,local_88);
      goto LAB_1425526aa;
    }
    iVar5 = *param_3;
    if (*(short *)(param_2 + 1) < 0) {
      iVar9 = *(int *)((longlong)param_2 + 0xc);
    }
    else {
      iVar9 = (int)*(short *)(param_2 + 1) >> 5;
    }
    if (iVar5 + param_5 <= iVar9) {
      pppuVar17 = &local_198;
      uVar21 = (*(code *)(*param_2)[2])(param_2,0,iVar5 + param_5,pppuVar17);
      goto LAB_142552675;
    }
    goto LAB_14255261e;
  }
  if ((((param_5 < 3) &&
       ((uVar4 == 0x1c || (uVar4 & 0xfffffffe) == 0x1a) ||
        (uVar4 == 2 || (uVar4 == 0x13 || uVar4 == 0x19)))) ||
      ((uVar4 < 0x1f && ((0x40040002U >> (uVar4 & 0x1f) & 1) != 0)))) ||
     ((uVar4 == 8 || ((uVar4 == 0 & local_59) != 0)))) goto LAB_142552504;
  uVar14 = 0;
  bVar2 = true;
  uVar21 = extraout_XMM0_Qa;
LAB_1425527f5:
  plVar10 = local_58;
  uVar7 = (undefined4)((ulonglong)in_stack_fffffffffffffd68 >> 0x20);
  uVar6 = (uint)uVar14;
  switch(uVar4) {
  case 0:
    if (local_59 != false) {
      if (bVar2) break;
      FUN_1424cd3f0(param_10,0,uVar14);
      goto LAB_1425542f9;
    }
    if (param_5 == 4) {
      iVar5 = FUN_1425562d0(param_2,*param_3,0,*(undefined8 *)(local_58[0x60] + 0x18),
                            CONCAT44(uVar7,*(undefined4 *)(local_58[0x60] + 0x20)),param_10);
    }
    else if (param_5 == 5) {
      iVar5 = FUN_1425562d0(param_2,*param_3,0,*(undefined8 *)(local_58[0x60] + 0x28),
                            CONCAT44(uVar7,*(undefined4 *)(local_58[0x60] + 0x30)),param_10);
    }
    else {
      iVar5 = FUN_1425562d0(param_2,*param_3,0,*(undefined8 *)(local_58[0x60] + 8),
                            CONCAT44(uVar7,*(undefined4 *)(local_58[0x60] + 0x10)),param_10);
    }
    iVar5 = iVar5 - (uint)(*param_3 + iVar5 == 0);
    goto LAB_142552620;
  case 1:
  case 8:
  case 0x12:
switchD_142552810_caseD_1:
    if (bVar2) break;
    switch(uVar4) {
    case 1:
      cVar3 = FUN_1424bcee0(local_58 + 0x34,local_1d8);
      if ((cVar3 == '\0') && ((int)uVar6 < 1000)) {
        uVar14 = (ulonglong)(uVar6 + 5000);
      }
      else {
        iVar5 = FUN_1424a81b0(param_2,*param_3,2);
        if (iVar5 == (int)local_68 && local_59 == false) {
          uVar7 = FUN_1424a8030(param_2,*param_3);
          cVar3 = FUN_1424d87b0(uVar7);
          if (cVar3 != '\0') {
            uVar7 = FUN_1424a81b0(param_2,*param_3,1);
            uVar7 = FUN_1424a8030(param_2,uVar7);
            cVar3 = FUN_1424d87b0(uVar7);
            if (((param_5 < 3) && (cVar3 != '\0')) && ((char)local_58[0x6a] != '\0')) {
              uVar4 = *(int *)((longlong)local_58 + 0x31c) % 100;
              *(bool *)param_8 = uVar6 == uVar4;
              iVar5 = *(int *)((longlong)local_58 + 0x31c);
              iVar9 = iVar5 + 100;
              if ((int)uVar4 <= (int)uVar6) {
                iVar9 = iVar5;
              }
              uVar14 = (ulonglong)(((iVar5 / 100) * 100 - iVar5) + iVar9 + uVar6);
            }
          }
        }
      }
      FUN_1424cd3f0(param_10,1,uVar14);
      if (-1 < (int)*param_9) {
        cVar3 = FUN_142577a00(uVar14);
        if ((cVar3 == '\0') && (5 < (int)*param_9)) {
          FUN_1424cd3f0(param_10,2);
        }
        else {
          FUN_1424cd3f0(param_10,2,*param_9 - 1);
        }
        *param_9 = 0xffffffff;
      }
      break;
    case 2:
      goto switchD_142552840_caseD_2;
    default:
      goto switchD_142552810_caseD_3;
    case 4:
      iVar5 = (**(code **)(*param_10 + 0x70))(param_10,0xb);
      uVar4 = 0;
      if (uVar6 != iVar5 + 1U) {
        uVar4 = uVar6;
      }
      uVar14 = (ulonglong)uVar4;
    case 5:
      FUN_1424cd3f0(param_10,0xb,uVar14);
      break;
    case 8:
      uVar4 = FUN_142555390(&switchD_142552840::switchdataD_1499e0d28,param_2,*param_3,local_74);
      if ((int)uVar4 < 3) {
        uVar13 = 3 - uVar4;
        if (7 < uVar13) {
          uVar15 = uVar13 & 0xfffffff8;
          uVar4 = uVar4 + uVar15;
          auVar1._4_8_ = extraout_XMM0_Qb;
          auVar1._0_4_ = 1;
          auVar23._0_8_ = auVar1._0_8_ << 0x20;
          auVar23._8_4_ = 1;
          auVar23._12_4_ = 1;
          auVar24._4_12_ = auVar23._4_12_;
          auVar24._0_4_ = uVar6;
          auVar31 = _DAT_149931e70;
          uVar6 = uVar15;
          do {
            uVar16 = auVar24._4_4_;
            uVar28 = auVar24._12_4_;
            uVar30 = auVar24._8_8_;
            uVar14 = (ulonglong)auVar24._0_4_ * 10;
            auVar24._0_4_ = (undefined4)uVar14;
            auVar25._8_4_ = (undefined4)((uVar30 & 0xffffffff) * 10);
            auVar25._4_4_ = auVar25._8_4_;
            auVar25._0_4_ = auVar24._0_4_;
            uVar35 = (ulonglong)uVar16 * 10;
            uVar37 = (ulonglong)uVar28 * 10;
            auVar25._12_4_ = (int)uVar37;
            auVar24._8_8_ = auVar25._8_8_;
            auVar24._4_4_ = (int)uVar35;
            uVar16 = auVar31._4_4_;
            uVar28 = auVar31._12_4_;
            uVar36 = auVar31._8_8_;
            uVar30 = (ulonglong)auVar31._0_4_ * 10;
            auVar31._0_4_ = (undefined4)uVar30;
            auVar32._8_4_ = (undefined4)((uVar36 & 0xffffffff) * 10);
            auVar32._4_4_ = auVar32._8_4_;
            auVar32._0_4_ = auVar31._0_4_;
            uVar36 = (ulonglong)uVar16 * 10;
            uVar38 = (ulonglong)uVar28 * 10;
            auVar32._12_4_ = (int)uVar38;
            auVar31._8_8_ = auVar32._8_8_;
            auVar31._4_4_ = (int)uVar36;
            uVar6 = uVar6 - 8;
          } while (uVar6 != 0);
          uVar14 = (((uVar38 & 0xffffffff) * (uVar37 & 0xffffffff) & 0xffffffff) *
                    ((uVar36 & 0xffffffff) * (uVar35 & 0xffffffff) & 0xffffffff) & 0xffffffff) *
                   (((auVar31._8_8_ & 0xffffffff) * (auVar24._8_8_ & 0xffffffff) & 0xffffffff) *
                    ((uVar30 & 0xffffffff) * (uVar14 & 0xffffffff) & 0xffffffff) & 0xffffffff) &
                   0xffffffff;
          if (uVar13 == uVar15) goto LAB_14255414e;
        }
        iVar5 = uVar4 - 3;
        do {
          uVar14 = (ulonglong)(uint)((int)uVar14 * 10);
          iVar5 = iVar5 + 1;
        } while (iVar5 != 0);
      }
      else {
        uVar13 = 1;
        if (uVar4 != 3) {
          uVar15 = uVar4 - 4;
          if (uVar4 < 4) {
            uVar15 = 0;
          }
          uVar14 = 1;
          if (6 < uVar15) {
            uVar16 = uVar15 + 1 & 0xfffffff8;
            uVar4 = uVar4 - uVar16;
            auVar26 = _DAT_149931e70;
            auVar33 = _DAT_149931e70;
            uVar13 = uVar16;
            do {
              uVar28 = auVar26._4_4_;
              uVar29 = auVar26._12_4_;
              uVar30 = auVar26._8_8_;
              uVar14 = (ulonglong)auVar26._0_4_ * 10;
              auVar26._0_4_ = (undefined4)uVar14;
              auVar27._8_4_ = (undefined4)((uVar30 & 0xffffffff) * 10);
              auVar27._4_4_ = auVar27._8_4_;
              auVar27._0_4_ = auVar26._0_4_;
              uVar35 = (ulonglong)uVar28 * 10;
              uVar37 = (ulonglong)uVar29 * 10;
              auVar27._12_4_ = (int)uVar37;
              auVar26._8_8_ = auVar27._8_8_;
              auVar26._4_4_ = (int)uVar35;
              uVar28 = auVar33._4_4_;
              uVar29 = auVar33._12_4_;
              uVar36 = auVar33._8_8_;
              uVar30 = (ulonglong)auVar33._0_4_ * 10;
              auVar33._0_4_ = (undefined4)uVar30;
              auVar34._8_4_ = (undefined4)((uVar36 & 0xffffffff) * 10);
              auVar34._4_4_ = auVar34._8_4_;
              auVar34._0_4_ = auVar33._0_4_;
              uVar36 = (ulonglong)uVar28 * 10;
              uVar38 = (ulonglong)uVar29 * 10;
              auVar34._12_4_ = (int)uVar38;
              auVar33._8_8_ = auVar34._8_8_;
              auVar33._4_4_ = (int)uVar36;
              uVar13 = uVar13 - 8;
            } while (uVar13 != 0);
            uVar30 = (((uVar38 & 0xffffffff) * (uVar37 & 0xffffffff) & 0xffffffff) *
                      ((uVar36 & 0xffffffff) * (uVar35 & 0xffffffff) & 0xffffffff) & 0xffffffff) *
                     (((auVar33._8_8_ & 0xffffffff) * (auVar26._8_8_ & 0xffffffff) & 0xffffffff) *
                      ((uVar30 & 0xffffffff) * (uVar14 & 0xffffffff) & 0xffffffff) & 0xffffffff);
            uVar14 = uVar30 & 0xffffffff;
            uVar13 = (uint)uVar30;
            if (uVar15 + 1 == uVar16) goto LAB_142554144;
          }
          uVar4 = uVar4 + 1;
          do {
            uVar13 = (int)uVar14 * 10;
            uVar14 = (ulonglong)uVar13;
            uVar4 = uVar4 - 1;
          } while (4 < uVar4);
        }
LAB_142554144:
        uVar14 = (longlong)(int)uVar6 / (longlong)(int)uVar13 & 0xffffffff;
      }
LAB_14255414e:
      FUN_1424cd3f0(param_10,0xe,uVar14);
      break;
    case 9:
      goto switchD_142552810_caseD_9;
    case 0xe:
      goto switchD_142552810_caseD_e;
    case 0xf:
      iVar5 = (**(code **)(*param_10 + 0x90))(param_10,10);
      uVar4 = 0;
      if (uVar6 != iVar5 + 1U) {
        uVar4 = uVar6;
      }
      uVar14 = (ulonglong)uVar4;
    case 0x10:
      FUN_1424cd3f0(param_10,10,uVar14);
      break;
    case 0x11:
      goto switchD_142552810_caseD_11;
    case 0x12:
      cVar3 = FUN_1424bcee0(local_58 + 0x34,local_1d8);
      if ((cVar3 == '\0') && ((int)uVar6 < 1000)) {
        uVar14 = (ulonglong)(uVar6 + 5000);
      }
      else {
        iVar5 = FUN_1424a81b0(param_2,*param_3,2);
        if (iVar5 == (int)local_68) {
          uVar7 = FUN_1424a8030(param_2,*param_3);
          cVar3 = FUN_1424d87b0(uVar7);
          if (cVar3 != '\0') {
            uVar7 = FUN_1424a81b0(param_2,*param_3,1);
            uVar7 = FUN_1424a8030(param_2,uVar7);
            cVar3 = FUN_1424d87b0(uVar7);
            if ((cVar3 != '\0') && ((char)local_58[0x6a] != '\0')) {
              uVar4 = *(int *)((longlong)local_58 + 0x31c) % 100;
              *(bool *)param_8 = uVar6 == uVar4;
              iVar5 = *(int *)((longlong)local_58 + 0x31c);
              iVar9 = iVar5 + 100;
              if ((int)uVar4 <= (int)uVar6) {
                iVar9 = iVar5;
              }
              uVar14 = (ulonglong)(((iVar5 / 100) * 100 - iVar5) + iVar9 + uVar6);
            }
          }
        }
      }
      FUN_1424cd3f0(param_10,0x11,uVar14);
    }
    goto LAB_1425542f9;
  case 2:
  case 0x1a:
    if (!bVar2) {
switchD_142552840_caseD_2:
      pcVar11 = (char *)(**(code **)(*param_10 + 0xb0))();
      iVar5 = strcmp(pcVar11,"hebrew");
      if (iVar5 == 0) {
        cVar3 = FUN_1424ce0d0(param_10,1);
        if (cVar3 == '\0') {
          *param_9 = uVar6;
        }
        else {
          local_158 = (undefined **)((ulonglong)local_158 & 0xffffffff00000000);
          uVar7 = FUN_1424cd2e0(param_10,1,&local_158);
          cVar3 = FUN_142577a00(uVar7);
          if ((cVar3 == '\0') && (5 < (int)uVar6)) {
            FUN_1424cd3f0(param_10,2,uVar14);
          }
          else {
            FUN_1424cd3f0(param_10,2,uVar6 - 1);
          }
        }
      }
      else {
        FUN_1424cd3f0(param_10,2,uVar6 - 1);
      }
      goto LAB_1425542f9;
    }
    lVar12 = *(longlong *)(local_58[0x60] + 0x1b8);
    if ((lVar12 == 0) || (*(int *)(local_58[0x60] + 0x1c0) < 7)) {
      lVar19 = 0;
      lVar20 = 0;
      lVar12 = 0;
      if (uVar4 != 2) goto LAB_142553c95;
LAB_142553869:
      cVar3 = (**(code **)(*local_58 + 0xd8))(local_58,3,local_4c);
      if (((param_5 == 4) || (iVar5 = 0, cVar3 != '\0')) &&
         (uVar7 = *(undefined4 *)(local_58[0x60] + 0x40),
         iVar5 = FUN_142554df0(uVar7,param_2,*param_3,2,*(undefined8 *)(local_58[0x60] + 0x38),uVar7
                               ,lVar19,param_10), 0 < iVar5)) goto LAB_142552620;
      cVar3 = (**(code **)(*local_58 + 0xd8))(local_58,3,local_4c);
      if ((param_5 == 3) || (cVar3 != '\0')) {
        uVar7 = *(undefined4 *)(local_58[0x60] + 0x50);
        iVar5 = FUN_142554df0(uVar7,param_2,*param_3,2,*(undefined8 *)(local_58[0x60] + 0x48),uVar7,
                              lVar20,param_10);
LAB_142553d7a:
        if (0 < iVar5) goto LAB_142552620;
      }
    }
    else {
      if (uVar4 == 2) {
        lVar20 = lVar12 + 0x40;
        lVar19 = lVar12;
        goto LAB_142553869;
      }
      lVar19 = lVar12 + 0xc0;
      lVar12 = lVar12 + 0x100;
LAB_142553c95:
      cVar3 = (**(code **)(*local_58 + 0xd8))(local_58,3,local_4c);
      if (((param_5 == 4) || (iVar5 = 0, cVar3 != '\0')) &&
         (uVar7 = *(undefined4 *)(local_58[0x60] + 0x70),
         iVar5 = FUN_142554df0(uVar7,param_2,*param_3,2,*(undefined8 *)(local_58[0x60] + 0x68),uVar7
                               ,lVar19,param_10), 0 < iVar5)) goto LAB_142552620;
      cVar3 = (**(code **)(*local_58 + 0xd8))(local_58,3,local_4c);
      if ((param_5 == 3) || (cVar3 != '\0')) {
        uVar7 = *(undefined4 *)(local_58[0x60] + 0x80);
        iVar5 = FUN_142554df0(uVar7,param_2,*param_3,2,*(undefined8 *)(local_58[0x60] + 0x78),uVar7,
                              lVar12,param_10);
        goto LAB_142553d7a;
      }
    }
    cVar3 = (**(code **)(*local_58 + 0xd8))(local_58,1,local_4c);
    uVar21 = extraout_XMM0_Qa_08;
    goto LAB_142553da0;
  default:
    goto switchD_142552810_caseD_3;
  case 4:
  case 5:
  case 0xf:
  case 0x10:
    if (uVar6 < 0x19) goto switchD_142552810_caseD_1;
    break;
  case 9:
    goto switchD_142552810_caseD_9;
  case 0xe:
switchD_142552810_caseD_e:
    cVar3 = (**(code **)(*local_58 + 0xd8))(local_58,3,local_4c);
    if ((param_5 < 5) || (cVar3 != '\0')) {
      uVar21 = CONCAT44(uVar7,*(undefined4 *)(local_58[0x60] + 0x120));
      iVar5 = FUN_1425562d0(param_2,*param_3,9,*(undefined8 *)(local_58[0x60] + 0x118),uVar21,
                            param_10);
      uVar7 = (undefined4)((ulonglong)uVar21 >> 0x20);
      if (0 < iVar5) goto LAB_142552620;
    }
    cVar3 = (**(code **)(*local_58 + 0xd8))(local_58,3,local_4c);
    if ((4 < param_5) || (cVar3 != '\0')) {
      iVar5 = FUN_1425562d0(param_2,*param_3,9,*(undefined8 *)(local_58[0x60] + 0x128),
                            CONCAT44(uVar7,*(undefined4 *)(local_58[0x60] + 0x130)),param_10);
LAB_142553728:
      if (0 < iVar5) goto LAB_142552620;
    }
    break;
  case 0x11:
switchD_142552810_caseD_11:
    uVar21 = FUN_142550f80(local_58,local_4c);
    if ((local_4c[0] < 1) &&
       (lVar12 = FUN_142524b40(uVar21,(param_5 < 4) + '\x03',param_2,&local_70,param_13),
       lVar12 != 0)) {
      FUN_1424ccee0(param_10,lVar12);
      goto LAB_1425542f9;
    }
    break;
  case 0x13:
    if (!bVar2) {
      FUN_1424cd3f0(param_10,0x12,uVar14);
      goto LAB_1425542f9;
    }
switchD_142552810_caseD_9:
    cVar3 = (**(code **)(*local_58 + 0xd8))(local_58,3,local_4c);
    if ((param_5 == 4) || (iVar5 = 0, cVar3 != '\0')) {
      uVar21 = CONCAT44(uVar7,*(undefined4 *)(local_58[0x60] + 0xa0));
      iVar5 = FUN_1425562d0(param_2,*param_3,7,*(undefined8 *)(local_58[0x60] + 0x98),uVar21,
                            param_10);
      uVar7 = (undefined4)((ulonglong)uVar21 >> 0x20);
      if (0 < iVar5) goto LAB_142552620;
    }
    cVar3 = (**(code **)(*local_58 + 0xd8))(local_58,3,local_4c);
    if ((param_5 == 3) || (cVar3 != '\0')) {
      uVar21 = CONCAT44(uVar7,*(undefined4 *)(local_58[0x60] + 0xb0));
      iVar5 = FUN_1425562d0(param_2,*param_3,7,*(undefined8 *)(local_58[0x60] + 0xa8),uVar21,
                            param_10);
      uVar7 = (undefined4)((ulonglong)uVar21 >> 0x20);
      if (0 < iVar5) goto LAB_142552620;
    }
    cVar3 = (**(code **)(*local_58 + 0xd8))(local_58,3,local_4c);
    if ((param_5 == 6) || (cVar3 != '\0')) {
      uVar21 = CONCAT44(uVar7,*(undefined4 *)(local_58[0x60] + 0xc0));
      iVar5 = FUN_1425562d0(param_2,*param_3,7,*(undefined8 *)(local_58[0x60] + 0xb8),uVar21,
                            param_10);
      uVar7 = (undefined4)((ulonglong)uVar21 >> 0x20);
      if (0 < iVar5) goto LAB_142552620;
    }
    cVar3 = (**(code **)(*local_58 + 0xd8))(local_58,3,local_4c);
    if ((((param_5 != 5) && (cVar3 == '\0')) ||
        (iVar5 = FUN_1425562d0(param_2,*param_3,7,*(undefined8 *)(local_58[0x60] + 200),
                               CONCAT44(uVar7,*(undefined4 *)(local_58[0x60] + 0xd0)),param_10),
        iVar5 < 1)) &&
       (cVar3 = (**(code **)(*local_58 + 0xd8))(local_58,1,local_4c), uVar21 = extraout_XMM0_Qa_02,
       uVar4 != 9)) goto LAB_142553da0;
    goto LAB_142552620;
  case 0x17:
    uVar7 = 5;
    if (param_5 == 5) {
      uVar7 = 0xf;
    }
    uVar18 = 0xc;
    if (3 < param_5) {
      uVar18 = uVar7;
    }
    uVar21 = FUN_142550f80(local_58,local_4c);
    if ((local_4c[0] < 1) &&
       (lVar12 = FUN_142524b40(uVar21,uVar18,param_2,&local_70,param_13), lVar12 != 0)) {
      FUN_1424ccee0(param_10,lVar12);
      goto LAB_1425542f9;
    }
    break;
  case 0x18:
    uVar21 = FUN_142550f80(local_58,local_4c);
    if ((local_4c[0] < 1) &&
       (lVar12 = FUN_142524b40(uVar21,(param_5 < 4) + '\x01',param_2,&local_70,param_13),
       lVar12 != 0)) {
      FUN_1424ccee0(param_10,lVar12);
      goto LAB_1425542f9;
    }
    break;
  case 0x19:
    if (!bVar2) {
      FUN_1424cd3f0(param_10,0x12,uVar14);
      goto LAB_1425542f9;
    }
    cVar3 = (**(code **)(*local_58 + 0xd8))(local_58,3,local_4c);
    if ((param_5 == 4) || (iVar5 = 0, cVar3 != '\0')) {
      uVar21 = CONCAT44(uVar7,*(undefined4 *)(local_58[0x60] + 0xe0));
      iVar5 = FUN_1425562d0(param_2,*param_3,7,*(undefined8 *)(local_58[0x60] + 0xd8),uVar21,
                            param_10);
      uVar7 = (undefined4)((ulonglong)uVar21 >> 0x20);
      if (0 < iVar5) goto LAB_142552620;
    }
    cVar3 = (**(code **)(*local_58 + 0xd8))(local_58,3,local_4c);
    if ((param_5 == 3) || (cVar3 != '\0')) {
      uVar21 = CONCAT44(uVar7,*(undefined4 *)(local_58[0x60] + 0xf0));
      iVar5 = FUN_1425562d0(param_2,*param_3,7,*(undefined8 *)(local_58[0x60] + 0xe8),uVar21,
                            param_10);
      uVar7 = (undefined4)((ulonglong)uVar21 >> 0x20);
      if (0 < iVar5) goto LAB_142552620;
    }
    cVar3 = (**(code **)(*local_58 + 0xd8))(local_58,3,local_4c);
    if (((param_5 == 6) || (cVar3 != '\0')) &&
       (iVar5 = FUN_1425562d0(param_2,*param_3,7,*(undefined8 *)(local_58[0x60] + 0xf8),
                              CONCAT44(uVar7,*(undefined4 *)(local_58[0x60] + 0x100)),param_10),
       0 < iVar5)) goto LAB_142552620;
    cVar3 = (**(code **)(*local_58 + 0xd8))(local_58,1,local_4c);
    uVar21 = extraout_XMM0_Qa_03;
LAB_142553da0:
    if (cVar3 != '\0') {
switchD_142552810_caseD_3:
      iVar9 = (int)local_68;
      pppuVar17 = param_2;
      if (param_6 != '\0') {
        iVar5 = *param_3;
        if (*(short *)(param_2 + 1) < 0) {
          iVar8 = *(int *)((longlong)param_2 + 0xc);
        }
        else {
          iVar8 = (int)*(short *)(param_2 + 1) >> 5;
        }
        if (iVar8 < param_5 + iVar5) {
LAB_14255261e:
          iVar5 = -iVar5;
          goto LAB_142552620;
        }
        pppuVar17 = &local_198;
        uVar21 = (*(code *)(*param_2)[2])(param_2,0,param_5 + iVar5,pppuVar17);
      }
      FUN_142555460(uVar21,pppuVar17,local_248,0xffffffff,&local_70,param_7,local_88);
      if ((int)local_68 == iVar9) break;
      cVar3 = (**(code **)(*local_58 + 0xd8))(local_58,1,local_4c);
      if ((cVar3 == '\0') && ((0x60000ccUL >> (local_80 & 0x3f) & 1) != 0)) {
        iVar5 = *(int *)(&DAT_1499e0890 + local_80 * 4);
        iVar9 = (**(code **)(*param_10 + 0x70))(param_10,local_78);
        if ((iVar9 + iVar5 < (int)local_240) ||
           (iVar9 = (**(code **)(*param_10 + 0x60))(param_10,local_78),
           (int)local_240 < iVar9 + iVar5)) break;
      }
      switch(uVar4) {
      case 2:
        pcVar11 = (char *)(**(code **)(*param_10 + 0xb0))();
        iVar5 = strcmp(pcVar11,"hebrew");
        if (iVar5 == 0) {
          cVar3 = FUN_1424ce0d0(param_10,1);
          if (cVar3 == '\0') {
            *param_9 = local_240;
          }
          else {
            local_158 = (undefined **)((ulonglong)local_158 & 0xffffffff00000000);
            uVar7 = FUN_1424cd2e0(param_10,1,&local_158);
            cVar3 = FUN_142577a00(uVar7);
            if (((int)local_240 < 6) || (cVar3 != '\0')) {
              FUN_1424cd3f0(param_10,2,local_240 - 1);
            }
            else {
              FUN_1424cd3f0(param_10,2,local_240);
            }
          }
        }
        else {
          FUN_1424cd3f0(param_10,2,local_240 - 1);
        }
        break;
      default:
        FUN_1424cd3f0(param_10,local_78,local_240);
        break;
      case 0x13:
      case 0x19:
        FUN_1424cd3f0(param_10,0x12,local_240);
        break;
      case 0x1a:
        FUN_1424cd3f0(param_10,2,local_240 - 1);
        break;
      case 0x1b:
      case 0x1c:
        FUN_1424cd3f0(param_10,2,local_240 * 3 + -3);
        break;
      case 0x22:
        (**(code **)(*param_10 + 0x180))(param_10,local_240);
      }
LAB_1425542f9:
      iVar5 = (int)local_68;
    }
    goto LAB_142552620;
  case 0x1b:
    if (!bVar2) {
      FUN_1424cd3f0(param_10,2,uVar6 * 3 + -3);
      goto LAB_1425542f9;
    }
    cVar3 = (**(code **)(*local_58 + 0xd8))(local_58,3,local_4c);
    if ((((param_5 != 4) && (iVar5 = 0, cVar3 == '\0')) ||
        (uVar7 = *(undefined4 *)(local_58[0x60] + 0x180),
        iVar5 = FUN_142554b30(uVar7,param_2,*param_3,2,*(undefined8 *)(local_58[0x60] + 0x178),uVar7
                              ,param_10), iVar5 < 1)) &&
       ((((cVar3 = (**(code **)(*local_58 + 0xd8))(local_58,3,local_4c), param_5 != 3 &&
          (cVar3 == '\0')) ||
         (uVar7 = *(undefined4 *)(local_58[0x60] + 400),
         iVar5 = FUN_142554b30(uVar7,param_2,*param_3,2,*(undefined8 *)(local_58[0x60] + 0x188),
                               uVar7,param_10), iVar5 < 1)) &&
        (cVar3 = (**(code **)(*local_58 + 0xd8))(local_58,1,local_4c), cVar3 != '\0')))) {
      cVar3 = (**(code **)(*local_58 + 0xd8))(local_58,3,local_4c);
      uVar21 = extraout_XMM0_Qa_04;
LAB_1425531a4:
      if (cVar3 == '\0') break;
      goto switchD_142552810_caseD_3;
    }
    goto LAB_142552620;
  case 0x1c:
    if (!bVar2) {
      FUN_1424cd3f0(param_10,2,uVar6 * 3 + -3);
      goto LAB_1425542f9;
    }
    cVar3 = (**(code **)(*local_58 + 0xd8))(local_58,3,local_4c);
    if (((((param_5 != 4) && (iVar5 = 0, cVar3 == '\0')) ||
         (uVar7 = *(undefined4 *)(local_58[0x60] + 0x1a0),
         iVar5 = FUN_142554b30(uVar7,param_2,*param_3,2,*(undefined8 *)(local_58[0x60] + 0x198),
                               uVar7,param_10), iVar5 < 1)) &&
        (((cVar3 = (**(code **)(*local_58 + 0xd8))(local_58,3,local_4c), param_5 != 3 &&
          (cVar3 == '\0')) ||
         (uVar7 = *(undefined4 *)(local_58[0x60] + 0x1b0),
         iVar5 = FUN_142554b30(uVar7,param_2,*param_3,2,*(undefined8 *)(local_58[0x60] + 0x1a8),
                               uVar7,param_10), iVar5 < 1)))) &&
       (cVar3 = (**(code **)(*local_58 + 0xd8))(local_58,1,local_4c), cVar3 != '\0')) {
      cVar3 = (**(code **)(*local_58 + 0xd8))(local_58,3,local_4c);
      uVar21 = extraout_XMM0_Qa_05;
      goto LAB_1425531a4;
    }
    goto LAB_142552620;
  case 0x1d:
    uVar7 = 0;
    if (param_5 - 1U < 3) {
      uVar7 = *(undefined4 *)(&DAT_1499e0928 + (longlong)(int)(param_5 - 1U) * 4);
    }
    uVar21 = FUN_142550f80(local_58,local_4c);
    if ((local_4c[0] < 1) &&
       (lVar12 = FUN_142524b40(uVar21,uVar7,param_2,&local_70,param_13), lVar12 != 0)) {
      FUN_1424ccee0(param_10,lVar12);
      goto LAB_1425542f9;
    }
    break;
  case 0x1e:
    lVar12 = *(longlong *)(local_58[0x60] + 0x1c8);
    if ((lVar12 == 0) ||
       (iVar5 = FUN_1425562d0(param_2,*param_3,1,lVar12,
                              CONCAT44(uVar7,*(undefined4 *)(local_58[0x60] + 0x1d0)),param_10),
       iVar5 < 1)) {
      if ((bVar2) ||
         ((cVar3 = (**(code **)(*local_58 + 0xd8))(local_58,1,local_4c), cVar3 == '\0' &&
          ((int)uVar6 <= *(int *)(local_58[0x60] + 0x1d0))))) break;
      FUN_1424cd3f0(param_10,1,uVar14);
      goto LAB_1425542f9;
    }
    goto LAB_142552620;
  case 0x1f:
    uVar21 = FUN_142550f80(local_58,local_4c);
    if ((local_4c[0] < 1) &&
       (lVar12 = FUN_142524b40(uVar21,(param_5 < 4) + '\x05',param_2,&local_70,param_13),
       lVar12 != 0)) {
      FUN_1424ccee0(param_10,lVar12);
      goto LAB_1425542f9;
    }
    break;
  case 0x20:
    uVar7 = 0xf;
    if (param_5 - 1U < 4) {
      uVar7 = *(undefined4 *)(&DAT_1499e0934 + (longlong)(int)(param_5 - 1U) * 4);
    }
    uVar21 = FUN_142550f80(local_58,local_4c);
    if ((local_4c[0] < 1) &&
       (lVar12 = FUN_142524b40(uVar21,uVar7,param_2,&local_70,param_13), lVar12 != 0)) {
      FUN_1424ccee0(param_10,lVar12);
      goto LAB_1425542f9;
    }
    break;
  case 0x21:
    uVar7 = 0x10;
    if (param_5 - 1U < 4) {
      uVar7 = *(undefined4 *)(&DAT_1499e0944 + (longlong)(int)(param_5 - 1U) * 4);
    }
    uVar21 = FUN_142550f80(local_58,local_4c);
    if ((local_4c[0] < 1) &&
       (lVar12 = FUN_142524b40(uVar21,uVar7,param_2,&local_70,param_13), lVar12 != 0)) {
      FUN_1424ccee0(param_10,lVar12);
      goto LAB_1425542f9;
    }
    break;
  case 0x23:
    uVar21 = CONCAT44(uVar7,param_5);
    iVar5 = FUN_1425522f0(local_58,param_2,param_3,0x61,uVar21,param_6,param_7,param_8,param_9,
                          param_10,param_11,param_12,param_13,0);
    uVar7 = (undefined4)((ulonglong)uVar21 >> 0x20);
    if (iVar5 < 1) {
      cVar3 = (**(code **)(*local_58 + 0xd8))(local_58,3,local_4c);
      if ((param_5 == 3) || (cVar3 != '\0')) {
        uVar21 = CONCAT44(uVar7,2);
        iVar5 = FUN_142554d60(param_5,param_2,*param_3,*(undefined8 *)(local_58[0x60] + 0x340),
                              uVar21,param_14);
        uVar7 = (undefined4)((ulonglong)uVar21 >> 0x20);
        if (0 < iVar5) goto LAB_142552620;
      }
      cVar3 = (**(code **)(*local_58 + 0xd8))(local_58,3,local_4c);
      if ((param_5 == 5) || (cVar3 != '\0')) {
        uVar21 = CONCAT44(uVar7,2);
        iVar5 = FUN_142554d60(param_5,param_2,*param_3,*(undefined8 *)(local_58[0x60] + 0x360),
                              uVar21,param_14);
        uVar7 = (undefined4)((ulonglong)uVar21 >> 0x20);
        if (0 < iVar5) goto LAB_142552620;
      }
      cVar3 = (**(code **)(*local_58 + 0xd8))(local_58,3,local_4c);
      if (cVar3 == '\0') break;
      uVar21 = *(undefined8 *)(local_58[0x60] + 0x350);
      iVar5 = *param_3;
      uVar39 = CONCAT44(uVar7,2);
      uVar22 = extraout_XMM0_Qa_06;
LAB_142553720:
      iVar5 = FUN_142554d60(uVar22,param_2,iVar5,uVar21,uVar39,param_14);
      goto LAB_142553728;
    }
    goto LAB_142552620;
  case 0x24:
    cVar3 = (**(code **)(*local_58 + 0xd8))(local_58,3,local_4c);
    if ((param_5 == 3) || (cVar3 != '\0')) {
      uVar18 = *(undefined4 *)(local_58[0x60] + 0x348);
      uVar21 = CONCAT44(uVar7,uVar18);
      iVar5 = FUN_142554d60(uVar18,param_2,*param_3,*(undefined8 *)(local_58[0x60] + 0x340),uVar21,
                            param_14);
      uVar7 = (undefined4)((ulonglong)uVar21 >> 0x20);
      if (0 < iVar5) goto LAB_142552620;
    }
    cVar3 = (**(code **)(*local_58 + 0xd8))(local_58,3,local_4c);
    if ((param_5 == 5) || (cVar3 != '\0')) {
      uVar18 = *(undefined4 *)(local_58[0x60] + 0x368);
      uVar21 = CONCAT44(uVar7,uVar18);
      iVar5 = FUN_142554d60(uVar18,param_2,*param_3,*(undefined8 *)(local_58[0x60] + 0x360),uVar21,
                            param_14);
      uVar7 = (undefined4)((ulonglong)uVar21 >> 0x20);
      if (0 < iVar5) goto LAB_142552620;
    }
    cVar3 = (**(code **)(*local_58 + 0xd8))(local_58,3,local_4c);
    if ((param_5 == 4) || (cVar3 != '\0')) {
      uVar21 = *(undefined8 *)(local_58[0x60] + 0x350);
      iVar5 = *param_3;
      uVar39 = CONCAT44(uVar7,*(undefined4 *)(local_58[0x60] + 0x358));
      uVar22 = extraout_XMM0_Qa_07;
      goto LAB_142553720;
    }
    break;
  case 0x25:
    local_158 = &PTR_FUN_149e18960;
    local_150 = 2;
    local_118 = &PTR_FUN_149e18960;
    local_110 = 2;
    local_d8 = &PTR_FUN_149e18960;
    local_d0 = 2;
    FUN_1426051b0(local_58[0x60],&local_158);
    lVar12 = 1;
    cVar3 = FUN_1424c19f0(&local_158,&DAT_1499e0920,1);
    if (cVar3 != '\0') {
      lVar12 = 2;
      FUN_1425553f0(&local_118,0x3a);
    }
    iVar5 = (int)lVar12;
    cVar3 = (**(code **)(*plVar10 + 0x58))(plVar10);
    if ((cVar3 != '\0') && (cVar3 = FUN_1424c19f0(&local_158,&DAT_1499e0922,1), cVar3 != '\0')) {
      FUN_1425553f0(&local_158 + lVar12 * 8,0x2e);
      iVar5 = iVar5 + 1;
    }
    iVar5 = FUN_1425562d0(param_2,*param_3,0x17,&local_158,CONCAT44(uVar7,iVar5),param_10);
    FUN_140859a90(&local_d8);
    FUN_140859a90(&local_118);
    FUN_140859a90(&local_158);
    goto LAB_142552620;
  }
LAB_142553e34:
  iVar5 = -*param_3;
LAB_142552620:
  FUN_140859a90(local_1d8);
LAB_142552629:
  FUN_140859a90(&local_198);
  thunk_FUN_1424b70d0(&local_70);
  FUN_14252d110(local_248);
  return iVar5;
}



// FUNCTION 142554390 Unwind@142554390 body=82 status=ok
// SIG undefined Unwind@142554390(void)

void Unwind_142554390(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x1e0);
  FUN_140859a90(param_2 + 0x1a0);
  FUN_140859a90(param_2 + 0x160);
  return;
}



// FUNCTION 1425543f0 Unwind@1425543f0 body=55 status=ok
// SIG undefined Unwind@1425543f0(void)

void Unwind_1425543f0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xe0);
  return;
}



// FUNCTION 142554430 Unwind@142554430 body=58 status=ok
// SIG undefined Unwind@142554430(void)

void Unwind_142554430(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x120);
  return;
}



// FUNCTION 142554470 Unwind@142554470 body=67 status=ok
// SIG undefined Unwind@142554470(void)

void Unwind_142554470(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x248);
  FUN_14252d110(param_2 + 0x70);
  return;
}



// FUNCTION 1425544c0 FUN_1425544c0 body=1483 status=ok
// SIG undefined FUN_1425544c0(void)

ulonglong FUN_1425544c0(longlong param_1,uint *param_2,longlong param_3,uint *param_4,char param_5,
                       char param_6,char param_7)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined2 uVar6;
  ushort uVar7;
  uint uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  short sVar14;
  short sVar15;
  uint uVar16;
  undefined ***pppuVar17;
  undefined **local_b8;
  ushort local_b0;
  undefined1 local_ae [2];
  uint local_ac;
  undefined1 *local_a0;
  uint *local_78;
  ulonglong local_70;
  uint *local_68;
  longlong local_60;
  ushort local_52;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_68 = param_4;
  local_b8 = &PTR_FUN_149e18960;
  local_b0 = 2;
  local_78 = param_2;
  uVar16 = *param_2;
  local_50 = param_1;
  local_60 = param_1 + 10;
  bVar12 = false;
  pppuVar17 = &local_b8;
  do {
    while( true ) {
      sVar14 = *(short *)(local_50 + 8);
      if (sVar14 < 0) {
        uVar13 = *(uint *)(local_50 + 0xc);
      }
      else {
        uVar13 = (int)sVar14 >> 5;
      }
      if ((int)uVar13 <= (int)uVar16) goto LAB_1425545d9;
      uVar7 = 0xffff;
      if (uVar16 < uVar13) break;
LAB_1425545b0:
      local_52 = uVar7;
      FUN_1424a6cf0(pppuVar17,&local_52,0,1);
      uVar16 = uVar16 + 1;
    }
    lVar11 = local_60;
    if (((int)sVar14 & 2U) == 0) {
      lVar11 = *(longlong *)(local_50 + 0x18);
    }
    uVar7 = *(ushort *)(lVar11 + (longlong)(int)uVar16 * 2);
    if (!bVar12) {
      if (0x7f < uVar7) goto LAB_1425545b0;
      if ((&DAT_1499e0660)[uVar7] != '\0') break;
    }
    if ((uVar7 != 0x27) ||
       ((uVar16 = uVar16 + 1, uVar16 < uVar13 && (int)uVar16 < (int)uVar13 &&
        (uVar7 = 0x27, *(short *)(lVar11 + (longlong)(int)uVar16 * 2) == 0x27))))
    goto LAB_1425545b0;
    bVar12 = (bool)(bVar12 ^ 1);
  } while( true );
LAB_1425545d9:
  uVar13 = *local_68;
  if (param_5 != '\0') {
    FUN_14260fe90(&local_b8);
    uVar2 = (uint)*(short *)(param_3 + 8);
    if (*(short *)(param_3 + 8) < 0) {
      uVar8 = *(uint *)(param_3 + 0xc);
    }
    else {
      uVar8 = (int)uVar2 >> 5;
    }
    if ((int)uVar13 < (int)uVar8) {
      lVar11 = (longlong)(int)uVar13;
      do {
        uVar6 = 0xffff;
        if (uVar13 < uVar8) {
          lVar5 = param_3 + 10;
          if ((uVar2 & 2) == 0) {
            lVar5 = *(longlong *)(param_3 + 0x18);
          }
          uVar6 = *(undefined2 *)(lVar5 + lVar11 * 2);
        }
        cVar1 = FUN_140665610(uVar6);
        if (cVar1 == '\0') break;
        uVar2 = (uint)*(short *)(param_3 + 8);
        if (*(short *)(param_3 + 8) < 0) {
          uVar8 = *(uint *)(param_3 + 0xc);
        }
        else {
          uVar8 = (int)uVar2 >> 5;
        }
        lVar11 = lVar11 + 1;
        uVar13 = uVar13 + 1;
      } while (lVar11 < (int)uVar8);
    }
  }
  lVar11 = param_3 + 10;
  uVar2 = 0;
  do {
    uVar3 = (uint)(short)local_b0;
    uVar8 = (int)uVar3 >> 5;
    if ((short)local_b0 < 0) {
      uVar8 = local_ac;
    }
    if ((int)uVar8 <= (int)uVar2) goto joined_r0x0001425549e4;
    if (*(short *)(param_3 + 8) < 0) {
      iVar4 = *(int *)(param_3 + 0xc);
    }
    else {
      iVar4 = (int)*(short *)(param_3 + 8) >> 5;
    }
    if (iVar4 <= (int)uVar13) goto joined_r0x0001425549e4;
    bVar12 = true;
    while( true ) {
      uVar8 = (int)(short)uVar3 >> 5;
      if ((short)uVar3 < 0) {
        uVar8 = local_ac;
      }
      if ((int)uVar8 <= (int)uVar2) break;
      uVar6 = 0xffff;
      if (uVar2 < uVar8) {
        puVar9 = local_ae;
        if ((uVar3 & 2) == 0) {
          puVar9 = local_a0;
        }
        uVar6 = *(undefined2 *)(puVar9 + (longlong)(int)uVar2 * 2);
      }
      cVar1 = FUN_1425cc7f0(uVar6);
      if (cVar1 == '\0') break;
      uVar2 = uVar2 + 1;
      uVar3 = (uint)local_b0;
      bVar12 = false;
    }
    uVar8 = uVar13;
    if (!bVar12) {
      while( true ) {
        sVar14 = *(short *)(param_3 + 8);
        if (sVar14 < 0) {
          uVar3 = *(uint *)(param_3 + 0xc);
        }
        else {
          uVar3 = (int)sVar14 >> 5;
        }
        if ((int)uVar3 <= (int)uVar8) break;
        uVar7 = 0xffff;
        if (uVar8 < uVar3) {
          lVar5 = lVar11;
          if (((int)sVar14 & 2U) == 0) {
            lVar5 = *(longlong *)(param_3 + 0x18);
          }
          uVar7 = *(ushort *)(lVar5 + (longlong)(int)uVar8 * 2);
        }
        pppuVar17 = (undefined ***)(ulonglong)uVar7;
        cVar1 = FUN_1424d8b40(pppuVar17);
        if ((cVar1 == '\0') && (cVar1 = FUN_1425cc7f0(uVar7), cVar1 == '\0')) break;
        uVar8 = uVar8 + 1;
      }
      if ((param_5 == '\0') && (uVar8 == uVar13)) {
        pppuVar17 = (undefined ***)0x0;
        goto LAB_1425549f9;
      }
      uVar3 = local_ac;
      if (-1 < (short)local_b0) {
        uVar3 = (int)(short)local_b0 >> 5;
      }
      uVar13 = uVar8;
      if ((int)uVar3 <= (int)uVar2) goto joined_r0x0001425549e4;
    }
    uVar7 = *(ushort *)(param_3 + 8);
    if ((short)uVar7 < 0) {
      uVar8 = *(uint *)(param_3 + 0xc);
    }
    else {
      uVar8 = (int)(short)uVar7 >> 5;
    }
    if ((int)uVar13 < (int)uVar8) {
      uVar3 = local_ac;
      if (-1 < (short)local_b0) {
        uVar3 = (int)(short)local_b0 >> 5;
      }
      sVar14 = -1;
      if (uVar2 < uVar3) {
        puVar9 = local_ae;
        if (((int)(short)local_b0 & 2U) == 0) {
          puVar9 = local_a0;
        }
        sVar14 = *(short *)(puVar9 + (longlong)(int)uVar2 * 2);
        sVar15 = sVar14;
        if (uVar8 <= uVar13) goto LAB_142554819;
LAB_14255484a:
        lVar5 = lVar11;
        if ((uVar7 & 2) == 0) {
          lVar5 = *(longlong *)(param_3 + 0x18);
        }
        if (sVar15 != *(short *)(lVar5 + (longlong)(int)uVar13 * 2)) goto LAB_142554870;
      }
      else {
        sVar15 = -1;
        if (uVar13 < uVar8) goto LAB_14255484a;
LAB_142554819:
        if (sVar14 != -1) goto LAB_142554870;
      }
      uVar2 = uVar2 + 1;
    }
    else {
LAB_142554870:
      if (param_5 == '\0') break;
      if ((uVar13 < uVar8) && (uVar13 == *local_68)) {
        lVar5 = lVar11;
        if ((uVar7 & 2) == 0) {
          lVar5 = *(longlong *)(param_3 + 0x18);
        }
        if ((*(short *)(lVar5 + (longlong)(int)uVar13 * 2) == 0x2e) &&
           (uVar8 = *local_78, 0 < (int)uVar8)) {
          sVar14 = *(short *)(local_50 + 8);
          if (sVar14 < 0) {
            uVar3 = *(uint *)(local_50 + 0xc);
          }
          else {
            uVar3 = (int)sVar14 >> 5;
          }
          pppuVar17 = (undefined ***)CONCAT62((int6)((ulonglong)pppuVar17 >> 0x10),0xffff);
          local_70 = (ulonglong)(uVar8 - 1);
          if (uVar8 - 1 < uVar3) {
            lVar5 = local_60;
            if (((int)sVar14 & 2U) == 0) {
              lVar5 = *(longlong *)(local_50 + 0x18);
            }
            pppuVar17 = (undefined ***)(ulonglong)*(ushort *)(lVar5 + local_70 * 2);
          }
          iVar4 = FUN_1426051e0((ulonglong)pppuVar17 & 0xffffffff);
          if (iVar4 != 0x26) {
            sVar14 = *(short *)(local_50 + 8);
            if (sVar14 < 0) {
              uVar3 = *(uint *)(local_50 + 0xc);
            }
            else {
              uVar3 = (int)sVar14 >> 5;
            }
            lVar5 = local_60;
            if (((int)sVar14 & 2U) == 0) {
              lVar5 = *(longlong *)(local_50 + 0x18);
            }
            lVar10 = 0;
            do {
              sVar14 = -1;
              if ((uVar8 - 2) + (int)lVar10 < uVar3) {
                sVar14 = *(short *)(lVar5 + local_70 * 2 + -2 + lVar10 * 2);
              }
              lVar10 = lVar10 + -1;
            } while (sVar14 == (short)pppuVar17);
            cVar1 = FUN_142605210(iVar4,-(int)lVar10);
            if (cVar1 == '\0') goto LAB_142554672;
          }
        }
      }
      sVar14 = *(short *)(param_3 + 8);
      if (sVar14 < 0) {
        uVar8 = *(uint *)(param_3 + 0xc);
      }
      else {
        uVar8 = (int)sVar14 >> 5;
      }
      uVar6 = 0xffff;
      if (uVar13 < uVar8) {
        lVar5 = lVar11;
        if (((int)sVar14 & 2U) == 0) {
          lVar5 = *(longlong *)(param_3 + 0x18);
        }
        uVar6 = *(undefined2 *)(lVar5 + (longlong)(int)uVar13 * 2);
      }
      cVar1 = FUN_1425cc7f0(uVar6);
      if (cVar1 == '\0') break;
    }
LAB_142554672:
    uVar13 = uVar13 + 1;
  } while( true );
  pppuVar17 = (undefined ***)0x0;
  if ((param_6 != '\0') && (param_7 != '\0')) {
joined_r0x0001425549e4:
    if ((int)uVar2 < 1) {
      sVar14 = *(short *)(local_50 + 8);
      if (sVar14 < 0) {
        uVar13 = *(uint *)(local_50 + 0xc);
      }
      else {
        uVar13 = (int)sVar14 >> 5;
      }
      uVar6 = 0xffff;
      if (uVar16 < uVar13) {
        if (((int)sVar14 & 2U) == 0) {
          local_60 = *(longlong *)(local_50 + 0x18);
        }
        uVar6 = *(undefined2 *)(local_60 + (longlong)(int)uVar16 * 2);
      }
      iVar4 = FUN_1426051e0(uVar6);
      if (iVar4 == 0x26) {
        lVar5 = 0;
      }
      else {
        lVar5 = FUN_1426103b0(iVar4);
      }
      uVar13 = *local_68;
      while( true ) {
        sVar14 = *(short *)(param_3 + 8);
        if (sVar14 < 0) {
          uVar2 = *(uint *)(param_3 + 0xc);
        }
        else {
          uVar2 = (int)sVar14 >> 5;
        }
        if ((int)uVar2 <= (int)uVar13) break;
        uVar6 = 0xffff;
        if (uVar13 < uVar2) {
          lVar10 = lVar11;
          if (((int)sVar14 & 2U) == 0) {
            lVar10 = *(longlong *)(param_3 + 0x18);
          }
          uVar6 = *(undefined2 *)(lVar10 + (longlong)(int)uVar13 * 2);
        }
        if ((lVar5 == 0) || (cVar1 = FUN_142512880(lVar5,uVar6), cVar1 == '\0')) break;
        uVar13 = uVar13 + 1;
      }
    }
    *local_78 = uVar16 - 1;
    *local_68 = uVar13;
    pppuVar17 = (undefined ***)CONCAT71((int7)((ulonglong)pppuVar17 >> 8),1);
  }
LAB_1425549f9:
  FUN_140859a90(&local_b8);
  return (ulonglong)pppuVar17 & 0xffffffff;
}



// FUNCTION 142554af0 Unwind@142554af0 body=55 status=ok
// SIG undefined Unwind@142554af0(void)

void Unwind_142554af0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 142554b30 FUN_142554b30 body=176 status=ok
// SIG undefined FUN_142554b30(void)

int FUN_142554b30(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4,
                 longlong param_5,uint param_6,undefined8 param_7)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined **local_90;
  undefined2 local_88;
  undefined4 local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_90 = &PTR_FUN_149e18960;
  local_88 = 2;
  if (0 < (int)param_6) {
    uVar2 = 0;
    uVar4 = 0xffffffff;
    iVar3 = 0;
    local_4c = param_4;
    do {
      iVar1 = FUN_142554c20(param_2,param_3,param_5);
      if (iVar3 < iVar1) {
        uVar4 = uVar2 & 0xffffffff;
        iVar3 = iVar1;
      }
      uVar2 = uVar2 + 1;
      param_5 = param_5 + 0x40;
    } while (param_6 != uVar2);
    if (-1 < (int)uVar4) {
      FUN_1424cd3f0(param_7,local_4c,(int)uVar4 * 3);
      param_3 = param_3 + iVar3;
      goto LAB_142554bc4;
    }
  }
  param_3 = -param_3;
LAB_142554bc4:
  FUN_140859a90(&local_90);
  return param_3;
}



// FUNCTION 142554be0 Unwind@142554be0 body=52 status=ok
// SIG undefined Unwind@142554be0(void)

void Unwind_142554be0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 142554c20 FUN_142554c20 body=299 status=ok
// SIG undefined FUN_142554c20(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_142554c20(longlong param_1,int param_2,longlong param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  int *local_40;
  int *local_38;
  int *local_30;
  int local_24 [3];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24[2] = 0;
  local_24[1] = 0;
  local_24[0] = 0;
  uVar1 = *(ushort *)(param_3 + 8);
  if ((short)uVar1 < 0) {
    iVar3 = *(int *)(param_3 + 0xc);
  }
  else {
    iVar3 = (int)(short)uVar1 >> 5;
  }
  if ((uVar1 & 0x11) == 0) {
    if ((uVar1 & 2) == 0) {
      param_3 = *(longlong *)(param_3 + 0x18);
    }
    else {
      param_3 = param_3 + 10;
    }
  }
  else {
    param_3 = 0;
  }
  uVar1 = *(ushort *)(param_1 + 8);
  if ((short)uVar1 < 0) {
    iVar2 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar2 = (int)(short)uVar1 >> 5;
  }
  if (((int)(short)uVar1 & 0x11U) == 0) {
    if ((uVar1 & 2) == 0) {
      param_1 = *(longlong *)(param_1 + 0x18);
    }
    else {
      param_1 = param_1 + 10;
    }
  }
  else {
    param_1 = 0;
  }
  local_30 = local_24 + 2;
  local_38 = local_24;
  local_40 = local_24 + 1;
  local_48 = 0;
  thunk_FUN_14257e1f0(param_1 + (longlong)param_2 * 2,iVar2 - param_2,param_3,iVar3);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
}



// FUNCTION 142554d60 FUN_142554d60 body=133 status=ok
// SIG undefined FUN_142554d60(void)

int FUN_142554d60(undefined8 param_1,undefined8 param_2,int param_3,longlong param_4,uint param_5,
                 int *param_6)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  
  if (0 < (int)param_5) {
    uVar4 = 0;
    uVar2 = 0xffffffff;
    iVar3 = 0;
    do {
      iVar1 = FUN_142554c20(param_2,param_3,param_4);
      if (iVar3 < iVar1) {
        uVar2 = uVar4 & 0xffffffff;
        iVar3 = iVar1;
      }
      uVar4 = uVar4 + 1;
      param_4 = param_4 + 0x40;
    } while (param_5 != uVar4);
    if (-1 < (int)uVar2) {
      *param_6 = (int)uVar2;
      return param_3 + iVar3;
    }
  }
  return -param_3;
}



// FUNCTION 142554df0 FUN_142554df0 body=594 status=ok
// SIG undefined FUN_142554df0(void)

int FUN_142554df0(undefined8 param_1,undefined8 param_2,int param_3,int param_4,longlong param_5,
                 uint param_6,longlong param_7,longlong *param_8)

{
  int iVar1;
  int iVar2;
  char *_Str1;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  undefined **local_128;
  undefined2 local_120;
  undefined **local_e8;
  undefined2 local_e0;
  undefined **local_a8;
  undefined2 local_a0;
  ulonglong local_68;
  undefined8 local_60;
  int local_58;
  int local_54;
  undefined4 local_50;
  int local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_128 = &PTR_FUN_149e18960;
  local_120 = 2;
  local_60 = param_2;
  local_4c = param_3;
  if ((int)(uint)(param_4 == 7) < (int)param_6) {
    uVar4 = (ulonglong)(param_4 == 7);
    local_68 = (ulonglong)param_6;
    param_5 = uVar4 * 0x40 + param_5;
    iVar3 = -1;
    local_50 = 0;
    iVar5 = 0;
    local_58 = param_4;
    do {
      iVar1 = FUN_142554c20(local_60,local_4c,param_5);
      iVar2 = (int)uVar4;
      if (iVar1 <= iVar5) {
        iVar2 = iVar3;
        iVar1 = iVar5;
      }
      iVar5 = iVar1;
      iVar3 = iVar2;
      if (param_7 != 0) {
        local_54 = 0;
        local_a8 = &PTR_FUN_149e18960;
        local_a0 = 2;
        local_e8 = &PTR_FUN_149e18960;
        local_e0 = 2;
        FUN_1425fb600(&local_e8,param_7,1,1,&local_54);
        FUN_1425fb990(&local_e8,param_5,&local_a8,&local_54);
        thunk_FUN_140859a90(&local_e8);
        if ((local_54 < 1) && (iVar2 = FUN_142554c20(local_60,local_4c,&local_a8), iVar5 < iVar2)) {
          local_50 = 1;
          iVar3 = (int)uVar4;
          iVar5 = iVar2;
        }
        FUN_140859a90(&local_a8);
      }
      iVar2 = local_58;
      uVar4 = uVar4 + 1;
      param_5 = param_5 + 0x40;
    } while (local_68 != uVar4);
    if (-1 < iVar3) {
      if (local_58 < 0x17) {
        _Str1 = (char *)(**(code **)(*param_8 + 0xb0))(param_8);
        iVar1 = strcmp(_Str1,"hebrew");
        if (((iVar2 == 2) && (iVar1 == 0)) && (iVar3 == 0xd)) {
          FUN_1424cd3f0(param_8,2,6);
        }
        else {
          FUN_1424cd3f0(param_8,iVar2,iVar3 + (uint)(iVar2 == 1));
        }
        if (param_7 != 0) {
          FUN_1424cd3f0(param_8,0x16,local_50);
        }
      }
      iVar5 = iVar5 + local_4c;
      goto LAB_14255502b;
    }
  }
  iVar5 = -local_4c;
LAB_14255502b:
  FUN_140859a90(&local_128);
  return iVar5;
}



// FUNCTION 142555050 Unwind@142555050 body=55 status=ok
// SIG undefined Unwind@142555050(void)

void Unwind_142555050(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x70);
  return;
}



// FUNCTION 142555090 Unwind@142555090 body=55 status=ok
// SIG undefined Unwind@142555090(void)

void Unwind_142555090(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 1425550d0 Unwind@1425550d0 body=55 status=ok
// SIG undefined Unwind@1425550d0(void)

void Unwind_1425550d0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_140859a90(param_2 + 0x70);
  return;
}



// FUNCTION 142555110 Unwind@142555110 body=55 status=ok
// SIG undefined Unwind@142555110(void)

void Unwind_142555110(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xb0);
  return;
}



// FUNCTION 142555150 FUN_142555150 body=114 status=ok
// SIG undefined FUN_142555150(void)

void FUN_142555150(longlong param_1,undefined8 param_2,int *param_3)

{
  undefined4 uVar1;
  undefined8 in_RDX;
  
  if (*param_3 < 1) {
    if (*(longlong *)(param_1 + 0x148) == 0) {
      *param_3 = 1;
    }
    else {
      FUN_1424ccf20(*(longlong *)(param_1 + 0x148),in_RDX,param_3);
      if (*param_3 < 1) {
        *(undefined1 *)(param_1 + 0x350) = 1;
        *(undefined8 *)(param_1 + 0x310) = param_2;
        uVar1 = FUN_1424cd2e0(*(undefined8 *)(param_1 + 0x148),1,param_3);
        *(undefined4 *)(param_1 + 0x31c) = uVar1;
      }
    }
  }
  return;
}



// FUNCTION 1425551d0 FUN_1425551d0 body=385 status=ok
// SIG undefined FUN_1425551d0(void)

uint FUN_1425551d0(longlong param_1,longlong param_2,uint param_3,uint param_4,char param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined **local_70;
  short local_68;
  int local_64;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_70 = &PTR_FUN_149e18960;
  local_68 = 2;
  if (*(short *)(param_2 + 8) < 0) {
    iVar1 = *(int *)(param_2 + 0xc);
  }
  else {
    iVar1 = (int)*(short *)(param_2 + 8) >> 5;
  }
  if ((-1 < (int)(param_4 | param_3)) && ((int)param_3 <= iVar1)) {
    if (*(short *)(param_1 + 0x168) < 0) {
      iVar1 = *(int *)(param_1 + 0x16c);
    }
    else {
      iVar1 = (int)*(short *)(param_1 + 0x168) >> 5;
    }
    if ((int)param_4 <= iVar1) {
      lVar5 = __RTDynamicCast(*(undefined8 *)(param_1 + 0x150),0,
                              &icu_64::NumberFormat::RTTI_Type_Descriptor,
                              &icu_64::DecimalFormat::RTTI_Type_Descriptor,0);
      if (lVar5 != 0) {
        if (param_5 == '\0') {
          uVar6 = FUN_1424c8fb0(lVar5,&local_70);
          FUN_1424a7c80(&local_70,uVar6);
        }
        else {
          uVar6 = FUN_1424c9100(lVar5,&local_70);
          FUN_1424a7c80(&local_70,uVar6);
        }
      }
      if (local_68 < 0) {
        if (local_64 < 1) goto LAB_14255533b;
      }
      else if (local_68 >> 5 < 1) goto LAB_14255533b;
      uVar2 = FUN_142555f50();
      uVar3 = FUN_142555f50();
      uVar4 = FUN_142555f50();
      if ((((uVar3 != uVar2) || ((int)(uVar3 | uVar2) < 0)) && (uVar4 == uVar2)) &&
         (-1 < (int)(uVar4 | uVar2))) {
        if (-1 < local_68) {
          local_64 = (int)local_68 >> 5;
        }
        param_3 = param_3 - local_64;
      }
    }
  }
LAB_14255533b:
  FUN_140859a90(&local_70);
  return param_3;
}



// FUNCTION 142555360 Unwind@142555360 body=40 status=ok
// SIG undefined Unwind@142555360(void)

void Unwind_142555360(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 142555390 FUN_142555390 body=87 status=ok
// SIG undefined FUN_142555390(void)

int FUN_142555390(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_3 < param_4) {
    iVar3 = 0;
    do {
      uVar2 = FUN_1424a8030(param_2,param_3);
      cVar1 = FUN_1424d87b0(uVar2);
      iVar3 = (iVar3 + 1) - (uint)(cVar1 == '\0');
      param_3 = (param_3 - (uint)(uVar2 < 0x10000)) + 2;
    } while (param_3 < param_4);
  }
  return iVar3;
}



// FUNCTION 1425553f0 FUN_1425553f0 body=101 status=ok
// SIG undefined FUN_1425553f0(void)

void FUN_1425553f0(longlong param_1,undefined2 param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_20;
  undefined2 local_12;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_12 = param_2;
  FUN_1424a8e40();
  if (*(short *)(param_1 + 8) < 0) {
    iVar1 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar1 = (int)*(short *)(param_1 + 8) >> 5;
  }
  local_20 = 1;
  local_28 = 0;
  FUN_1424a9130(param_1,0,iVar1,&local_12);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
}



// FUNCTION 142555460 FUN_142555460 body=515 status=ok
// SIG undefined FUN_142555460(void)

void FUN_142555460(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4,
                  longlong param_5,char param_6,longlong *param_7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  undefined **local_d8;
  undefined2 local_d0;
  undefined1 local_98 [64];
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_d8 = &PTR_FUN_149e18960;
  local_d0 = 2;
  plVar4 = (longlong *)
           __RTDynamicCast(param_7,0,&icu_64::NumberFormat::RTTI_Type_Descriptor,
                           &icu_64::DecimalFormat::RTTI_Type_Descriptor,0);
  plVar6 = (longlong *)0x0;
  if ((param_6 == '\0') && (plVar4 != (longlong *)0x0)) {
    local_50 = (longlong *)0x0;
    uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4);
    local_50 = (longlong *)0x0;
    plVar6 = (longlong *)
             __RTDynamicCast(uVar5,0,&icu_64::Format::RTTI_Type_Descriptor,
                             &icu_64::DecimalFormat::RTTI_Type_Descriptor,0);
    if (plVar6 == (longlong *)0x0) goto LAB_142555645;
    local_50 = plVar6;
    FUN_1424a7060(local_98,1,&DAT_1499e0924,0xffffffff);
    local_58 = plVar6;
    (**(code **)(*plVar6 + 0x168))(plVar6,local_98);
    FUN_140859a90(local_98);
    plVar6 = local_58;
    param_7 = local_58;
  }
  uVar1 = *(uint *)(param_5 + 8);
  local_50 = plVar6;
  (**(code **)(*param_7 + 0xa0))(param_7,param_2,param_3);
  if (0 < param_4) {
    iVar2 = *(int *)(param_5 + 8) - uVar1;
    uVar3 = iVar2 - param_4;
    if (uVar3 != 0 && param_4 <= iVar2) {
      iVar7 = *(int *)(param_3 + 8);
      if (uVar3 != 0 && param_4 <= iVar2) {
        if ((uVar3 & 3) != 0) {
          uVar8 = 0;
          do {
            iVar7 = iVar7 / 10;
            uVar8 = uVar8 + 1;
          } while ((uVar3 & 3) != uVar8);
          uVar3 = uVar3 - uVar8;
        }
        if (2 < (*(int *)(param_5 + 8) + ~uVar1) - param_4) {
          uVar3 = uVar3 - 1;
          do {
            iVar7 = iVar7 / 10000;
            uVar3 = uVar3 - 4;
          } while (uVar3 < 0xfffffffe);
        }
      }
      *(uint *)(param_5 + 8) = uVar1 + param_4;
      local_50 = plVar6;
      FUN_14252d370(param_3,iVar7);
    }
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)*plVar6)(plVar6,1);
  }
LAB_142555645:
  FUN_140859a90(&local_d8);
  return;
}



// FUNCTION 142555670 Unwind@142555670 body=65 status=ok
// SIG undefined Unwind@142555670(void)

void Unwind_142555670(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0xb8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}



// FUNCTION 1425556c0 Unwind@1425556c0 body=55 status=ok
// SIG undefined Unwind@1425556c0(void)

void Unwind_1425556c0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 142555700 Unwind@142555700 body=62 status=ok
// SIG undefined Unwind@142555700(void)

void Unwind_142555700(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x70);
  *(undefined8 *)(param_2 + 0xb8) = *(undefined8 *)(param_2 + 0xb0);
  return;
}



// FUNCTION 142555740 FUN_142555740 body=426 status=ok
// SIG undefined FUN_142555740(void)

void FUN_142555740(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int *param_5)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  ushort local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_5 < 1) {
    uVar2 = 2;
    if ((*(ushort *)(param_2 + 8) & 1) == 0) {
      uVar2 = *(ushort *)(param_2 + 8) & 0x1f;
    }
    *(ushort *)(param_2 + 8) = uVar2;
    uVar3 = (uint)*(short *)(param_1 + 8);
    if (*(short *)(param_1 + 8) < 0) {
      uVar4 = *(uint *)(param_1 + 0xc);
    }
    else {
      uVar4 = (int)uVar3 >> 5;
    }
    if (0 < (int)uVar4) {
      local_58 = param_4 + 10;
      uVar6 = 0;
      bVar8 = false;
      do {
        if (uVar6 < uVar4) {
          lVar5 = param_1 + 10;
          if ((uVar3 & 2) == 0) {
            lVar5 = *(longlong *)(param_1 + 0x18);
          }
          uVar2 = *(ushort *)(lVar5 + uVar6 * 2);
          if (bVar8) {
            bVar8 = uVar2 != 0x27;
          }
          else if (uVar2 == 0x27) {
            bVar8 = true;
            uVar2 = 0x27;
          }
          else {
            if ((uVar2 < 0x80) && ((&DAT_1499e0660)[uVar2] != '\0')) {
              if (*(short *)(param_3 + 8) < 0) {
                iVar7 = *(int *)(param_3 + 0xc);
              }
              else {
                iVar7 = (int)*(short *)(param_3 + 8) >> 5;
              }
              uVar3 = FUN_1424a8940(param_3,(ulonglong)uVar2,0,iVar7);
              if (uVar3 == 0xffffffff) goto LAB_142555903;
              sVar1 = *(short *)(param_4 + 8);
              if (sVar1 < 0) {
                uVar4 = *(uint *)(param_4 + 0xc);
              }
              else {
                uVar4 = (int)sVar1 >> 5;
              }
              if (uVar3 < uVar4) {
                lVar5 = local_58;
                if (((int)sVar1 & 2U) == 0) {
                  lVar5 = *(longlong *)(param_4 + 0x18);
                }
                uVar2 = *(ushort *)(lVar5 + (longlong)(int)uVar3 * 2);
              }
              else {
                uVar2 = 0xffff;
              }
            }
            bVar8 = false;
          }
        }
        else {
          uVar2 = 0xffff;
        }
        local_4a = uVar2;
        FUN_1424a6cf0(param_2,&local_4a,0,1);
        uVar3 = (uint)*(short *)(param_1 + 8);
        if (*(short *)(param_1 + 8) < 0) {
          uVar4 = *(uint *)(param_1 + 0xc);
        }
        else {
          uVar4 = (int)uVar3 >> 5;
        }
        uVar6 = uVar6 + 1;
      } while ((longlong)uVar6 < (longlong)(int)uVar4);
      if (bVar8) {
LAB_142555903:
        *param_5 = 3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
}



// FUNCTION 142555910 FUN_142555910 body=32 status=ok
// SIG undefined FUN_142555910(void)

undefined8 FUN_142555910(longlong param_1,undefined8 param_2)

{
  FUN_1424a7c80(param_2,param_1 + 0x160);
  return param_2;
}



// FUNCTION 142555930 FUN_142555930 body=121 status=ok
// SIG undefined FUN_142555930(void)

undefined8 FUN_142555930(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_78 [64];
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(param_1 + 0x300);
  uVar2 = FUN_1426051d0();
  FUN_1424a6c90(local_78,uVar2);
  FUN_142555740(param_1 + 0x160,param_2,local_78,lVar1 + 0x2e0,param_3);
  FUN_140859a90(local_78);
  return param_2;
}



// FUNCTION 1425559b0 Unwind@1425559b0 body=44 status=ok
// SIG undefined Unwind@1425559b0(void)

void Unwind_1425559b0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 1425559e0 FUN_1425559e0 body=208 status=ok
// SIG undefined FUN_1425559e0(void)

void FUN_1425559e0(longlong param_1)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  
  FUN_1424a7c80(param_1 + 0x160);
  *(undefined2 *)(param_1 + 0x318) = 0;
  *(undefined1 *)(param_1 + 0x31a) = 0;
  sVar1 = *(short *)(param_1 + 0x168);
  if (sVar1 < 0) {
    uVar7 = *(uint *)(param_1 + 0x16c);
  }
  else {
    uVar7 = (int)sVar1 >> 5;
  }
  if (0 < (int)uVar7) {
    if (((int)sVar1 & 2U) == 0) {
      lVar6 = *(longlong *)(param_1 + 0x178);
    }
    else {
      lVar6 = param_1 + 0x16a;
    }
    uVar8 = 0;
    bVar4 = false;
    bVar3 = false;
    do {
      sVar1 = *(short *)(lVar6 + uVar8 * 2);
      bVar2 = !bVar4;
      bVar5 = !bVar4;
      if (sVar1 != 0x27) {
        bVar2 = bVar3;
        bVar5 = bVar4;
      }
      bVar4 = bVar5;
      if (sVar1 == 0x5e74) {
        *(undefined1 *)(param_1 + 0x31a) = 1;
      }
      if (!bVar2) {
        if (sVar1 == 0x73) {
          *(undefined1 *)(param_1 + 0x319) = 1;
        }
        else if (sVar1 == 0x6d) {
          *(undefined1 *)(param_1 + 0x318) = 1;
        }
      }
      uVar8 = uVar8 + 1;
      bVar3 = bVar2;
    } while (uVar7 != uVar8);
  }
  return;
}



// FUNCTION 142555ad0 FUN_142555ad0 body=112 status=ok
// SIG undefined FUN_142555ad0(void)

void FUN_142555ad0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_70 [64];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  uVar1 = FUN_1426051d0();
  FUN_1424a6c90(local_70,uVar1);
  FUN_142555740(param_2,param_1 + 0x160,*(longlong *)(param_1 + 0x300) + 0x2e0,local_70,param_3);
  FUN_140859a90(local_70);
  return;
}



// FUNCTION 142555b40 Unwind@142555b40 body=40 status=ok
// SIG undefined Unwind@142555b40(void)

void Unwind_142555b40(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 142555b70 FUN_142555b70 body=8 status=ok
// SIG undefined FUN_142555b70(void)

undefined8 FUN_142555b70(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x300);
}



// FUNCTION 142555b80 FUN_142555b80 body=56 status=ok
// SIG undefined FUN_142555b80(void)

void FUN_142555b80(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x300);
  if (lVar1 != 0) {
    FUN_1425fc660(lVar1);
    FUN_1401773f0(lVar1);
  }
  *(undefined8 *)(param_1 + 0x300) = param_2;
  return;
}



// FUNCTION 142555bc0 FUN_142555bc0 body=106 status=ok
// SIG undefined FUN_142555bc0(void)

void FUN_142555bc0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x300);
  if (lVar1 != 0) {
    FUN_1425fc660(lVar1);
    FUN_1401773f0(lVar1);
  }
  lVar1 = thunk_FUN_1424da030(0x4d8);
  if (lVar1 != 0) {
    FUN_1425fca20(lVar1,param_2);
  }
  *(longlong *)(param_1 + 0x300) = lVar1;
  return;
}



// FUNCTION 142555c30 Unwind@142555c30 body=36 status=ok
// SIG undefined Unwind@142555c30(void)

void Unwind_142555c30(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142555c60 FUN_142555c60 body=54 status=ok
// SIG undefined FUN_142555c60(void)

void FUN_142555c60(undefined8 param_1)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_142550f80(param_1,&local_14);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 142555ca0 FUN_142555ca0 body=48 status=ok
// SIG undefined FUN_142555ca0(void)

void FUN_142555ca0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x308);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x308) = param_2;
  return;
}



// FUNCTION 142555cd0 FUN_142555cd0 body=98 status=ok
// SIG undefined FUN_142555cd0(void)

void FUN_142555cd0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x308);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  lVar2 = thunk_FUN_1424da030(0x530);
  if (lVar2 != 0) {
    FUN_142523060(lVar2,param_2);
  }
  *(longlong *)(param_1 + 0x308) = lVar2;
  return;
}



// FUNCTION 142555d40 Unwind@142555d40 body=34 status=ok
// SIG undefined Unwind@142555d40(void)

void Unwind_142555d40(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 142555d70 FUN_142555d70 body=301 status=ok
// SIG undefined FUN_142555d70(void)

void FUN_142555d70(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 local_110 [228];
  int local_2c [3];
  
  local_2c[1] = -2;
  local_2c[2] = -1;
  local_2c[0] = 0;
  FUN_1424a3ce0(local_110,param_1 + 0x220);
  uVar4 = (**(code **)(*param_2 + 0xb0))(param_2);
  FUN_1424a54a0(local_110,"calendar",uVar4,local_2c);
  uVar4 = FUN_1425fc7b0(local_110,local_2c);
  if (local_2c[0] < 1) {
    FUN_1424be460(param_1,param_2);
    lVar1 = *(longlong *)(param_1 + 0x300);
    if (lVar1 != 0) {
      FUN_1425fc660(lVar1);
      FUN_1401773f0(lVar1);
    }
    *(undefined8 *)(param_1 + 0x300) = uVar4;
    if (*(longlong **)(param_1 + 0x148) != (longlong *)0x0) {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x148) + 0x160))();
      *(char *)(param_1 + 0x350) = cVar2;
      if (cVar2 == '\0') {
        *(undefined8 *)(param_1 + 0x310) = 0x10000000000000;
        uVar3 = 0xffffffff;
      }
      else {
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0x148) + 0x168))();
        *(undefined8 *)(param_1 + 0x310) = uVar4;
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x148) + 0x170))();
      }
      *(undefined4 *)(param_1 + 0x31c) = uVar3;
    }
  }
  FUN_1414b3f60(local_110);
  return;
}



// FUNCTION 142555ea0 Unwind@142555ea0 body=39 status=ok
// SIG undefined Unwind@142555ea0(void)

void Unwind_142555ea0(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x28);
  return;
}



// FUNCTION 142555ed0 FUN_142555ed0 body=119 status=ok
// SIG undefined FUN_142555ed0(void)

void FUN_142555ed0(longlong param_1,int param_2,int *param_3)

{
  undefined8 *puVar1;
  
  FUN_1424be730();
  if (((*param_3 < 1) && (param_2 - 0x102U < 3)) && (*(longlong *)(param_1 + 0x358) == 0)) {
    *param_3 = 0;
    puVar1 = (undefined8 *)FUN_1424ba430(param_1 + 0x220,param_3);
    *(undefined8 **)(param_1 + 0x358) = puVar1;
    if (0 < *param_3) {
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      *(undefined8 *)(param_1 + 0x358) = 0;
    }
  }
  return;
}



// FUNCTION 142555f50 FUN_142555f50 body=745 status=ok
// SIG undefined FUN_142555f50(void)

int FUN_142555f50(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  
  if (*(short *)(param_2 + 8) < 0) {
    iVar9 = *(int *)(param_2 + 0xc);
  }
  else {
    iVar9 = (int)*(short *)(param_2 + 8) >> 5;
  }
  iVar7 = param_4;
  if (0 < iVar9) {
    uVar12 = 0;
LAB_142555fac:
    do {
      iVar11 = (int)uVar12;
      uVar3 = FUN_1424a8030(param_2,uVar12);
      iVar9 = 2 - (uint)(uVar3 < 0x10000);
      cVar2 = FUN_1425cc7f0(uVar3);
      if (*(short *)(param_3 + 8) < 0) {
        iVar5 = *(int *)(param_3 + 0xc);
        if (cVar2 != '\0') goto LAB_142555fde;
LAB_142556017:
        if (iVar5 <= iVar7) {
          return -1;
        }
        uVar4 = FUN_1424a8030(param_3,iVar7);
        if (uVar4 != uVar3) {
          return -1;
        }
        uVar12 = (ulonglong)(uint)(iVar11 + iVar9);
        iVar7 = iVar7 + iVar9;
      }
      else {
        iVar5 = (int)*(short *)(param_3 + 8) >> 5;
        if (cVar2 == '\0') goto LAB_142556017;
LAB_142555fde:
        if ((iVar7 < iVar5) && (uVar4 = FUN_1424a8030(param_3,iVar7), uVar4 == uVar3)) {
          if (*(short *)(param_2 + 8) < 0) {
            iVar5 = *(int *)(param_2 + 0xc);
          }
          else {
            iVar5 = (int)*(short *)(param_2 + 8) >> 5;
          }
          iVar11 = iVar11 + iVar9;
          iVar9 = iVar7 + iVar9;
          bVar8 = 1;
          if (iVar11 != iVar5) {
            uVar3 = FUN_1424a8030(param_2,iVar11);
            cVar2 = FUN_1425cc7f0(uVar3);
            if (cVar2 != '\0') {
              if (*(short *)(param_3 + 8) < 0) {
                iVar7 = *(int *)(param_3 + 0xc);
              }
              else {
                iVar7 = (int)*(short *)(param_3 + 8) >> 5;
              }
              if (iVar9 < iVar7) {
                iVar7 = 2 - (uint)(uVar3 < 0x10000);
                do {
                  while( true ) {
                    uVar4 = FUN_1424a8030(param_3,iVar9);
                    if (uVar4 != uVar3) goto LAB_142556052;
                    if (*(short *)(param_2 + 8) < 0) {
                      iVar5 = *(int *)(param_2 + 0xc);
                    }
                    else {
                      iVar5 = (int)*(short *)(param_2 + 8) >> 5;
                    }
                    iVar11 = iVar11 + iVar7;
                    iVar9 = iVar9 + iVar7;
                    if (iVar11 == iVar5) goto LAB_142556052;
                    uVar3 = FUN_1424a8030(param_2,iVar11);
                    cVar2 = FUN_1425cc7f0(uVar3);
                    if (cVar2 == '\0') goto LAB_142556052;
                    iVar7 = 2 - (uint)(uVar3 < 0x10000);
                    if (-1 < *(short *)(param_3 + 8)) break;
                    if (*(int *)(param_3 + 0xc) <= iVar9) goto LAB_142556052;
                  }
                } while (iVar9 < (int)*(short *)(param_3 + 8) >> 5);
              }
            }
          }
        }
        else {
          bVar8 = 0;
          iVar9 = iVar7;
        }
LAB_142556052:
        uVar1 = *(ushort *)(param_2 + 8);
        lVar13 = param_2 + 10;
        if ((uVar1 & 2) == 0) {
          lVar13 = *(longlong *)(param_2 + 0x18);
        }
        if ((uVar1 & 0x11) != 0) {
          lVar13 = 0;
        }
        if ((short)uVar1 < 0) {
          iVar7 = *(int *)(param_2 + 0xc);
        }
        else {
          iVar7 = (int)(short)uVar1 >> 5;
        }
        lVar6 = FUN_1425cc830(lVar13 + (longlong)iVar11 * 2,iVar7 - iVar11);
        uVar10 = (ulonglong)(lVar6 - lVar13) >> 1;
        iVar11 = iVar9;
        do {
          iVar7 = iVar11;
          if (*(short *)(param_3 + 8) < 0) {
            iVar11 = *(int *)(param_3 + 0xc);
          }
          else {
            iVar11 = (int)*(short *)(param_3 + 8) >> 5;
          }
          if (iVar11 <= iVar7) break;
          uVar3 = FUN_1424a8030(param_3,iVar7);
          cVar2 = FUN_1424d8b40(uVar3);
          iVar11 = (iVar7 - (uint)(uVar3 < 0x10000)) + 2;
        } while (cVar2 != '\0');
        if ((bool)(~bVar8 & iVar7 == iVar9)) {
          return -1;
        }
        do {
          uVar12 = uVar10 & 0xffffffff;
          if (*(short *)(param_2 + 8) < 0) {
            iVar9 = *(int *)(param_2 + 0xc);
          }
          else {
            iVar9 = (int)*(short *)(param_2 + 8) >> 5;
          }
          if (iVar9 <= (int)uVar10) break;
          uVar3 = FUN_1424a8030(param_2,uVar12);
          cVar2 = FUN_1424d8b40(uVar3);
          uVar10 = (ulonglong)(((int)uVar10 - (uint)(uVar3 < 0x10000)) + 2);
        } while (cVar2 != '\0');
      }
      if (-1 < *(short *)(param_2 + 8)) {
        if ((int)*(short *)(param_2 + 8) >> 5 <= (int)uVar12) break;
        goto LAB_142555fac;
      }
    } while ((int)uVar12 < *(int *)(param_2 + 0xc));
  }
  return iVar7 - param_4;
}



// FUNCTION 142556290 FUN_142556290 body=38 status=ok
// SIG undefined FUN_142556290(void)

undefined8 FUN_142556290(undefined8 param_1,int param_2)

{
  FUN_14254bed0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425562d0 FUN_1425562d0 body=285 status=ok
// SIG undefined FUN_1425562d0(void)

int FUN_1425562d0(undefined8 param_1,int param_2,int param_3,longlong param_4,uint param_5,
                 longlong *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *_Str1;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined **local_90;
  undefined2 local_88;
  int local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_90 = &PTR_FUN_149e18960;
  local_88 = 2;
  if ((int)(uint)(param_3 == 7) < (int)param_5) {
    uVar5 = (ulonglong)(param_3 == 7);
    param_4 = param_4 + uVar5 * 0x40;
    iVar4 = 0;
    uVar6 = 0xffffffff;
    local_4c = param_3;
    do {
      iVar2 = FUN_142554c20(param_1,param_2,param_4);
      iVar1 = local_4c;
      if (iVar4 < iVar2) {
        uVar6 = uVar5 & 0xffffffff;
        iVar4 = iVar2;
      }
      uVar5 = uVar5 + 1;
      param_4 = param_4 + 0x40;
    } while (param_5 != uVar5);
    iVar2 = (int)uVar6;
    if (-1 < iVar2) {
      if (local_4c < 0x17) {
        _Str1 = (char *)(**(code **)(*param_6 + 0xb0))();
        iVar3 = strcmp(_Str1,"hebrew");
        if (((iVar1 == 2) && (iVar3 == 0)) && (iVar2 == 0xd)) {
          FUN_1424cd3f0(param_6,2,6);
        }
        else {
          FUN_1424cd3f0(param_6,iVar1,iVar2 + (uint)(iVar1 == 1));
        }
      }
      iVar4 = iVar4 + param_2;
      goto LAB_1425563d1;
    }
  }
  iVar4 = -param_2;
LAB_1425563d1:
  FUN_140859a90(&local_90);
  return iVar4;
}



// FUNCTION 1425563f0 Unwind@1425563f0 body=52 status=ok
// SIG undefined Unwind@1425563f0(void)

void Unwind_1425563f0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 142556430 FUN_142556430 body=8 status=ok
// SIG undefined FUN_142556430(void)

undefined * FUN_142556430(void)

{
  return &DAT_14c793388;
}



// FUNCTION 142556440 FUN_142556440 body=114 status=ok
// SIG undefined FUN_142556440(void)

undefined8 * FUN_142556440(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  if (*param_2 < 1) {
    puVar1 = (undefined8 *)thunk_FUN_1424da030(0x1200);
    if (puVar1 == (undefined8 *)0x0) {
      if (*param_2 < 1) {
        *param_2 = 7;
      }
    }
    else {
      FUN_1425564f0(puVar1,param_1,param_2,param_4,puVar1,uVar2);
      if (*param_2 < 1) {
        return puVar1;
      }
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1425564c0 Unwind@1425564c0 body=34 status=ok
// SIG undefined Unwind@1425564c0(void)

void Unwind_1425564c0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1425564f0 FUN_1425564f0 body=1540 status=ok
// SIG undefined FUN_1425564f0(void)

undefined8 * FUN_1425564f0(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  *param_1 = icu_64::DateTimePatternGenerator::vftable;
  FUN_1424a3c00(param_1 + 1);
  param_1[0x21] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x22) = 2;
  param_1[0x29] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x2a) = 2;
  param_1[0x31] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x32) = 2;
  param_1[0x39] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x3a) = 2;
  param_1[0x41] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x42) = 2;
  param_1[0x49] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x4a) = 2;
  param_1[0x51] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x52) = 2;
  param_1[0x59] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x5a) = 2;
  param_1[0x61] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x62) = 2;
  param_1[0x69] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x6a) = 2;
  param_1[0x71] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x72) = 2;
  param_1[0x79] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x7a) = 2;
  param_1[0x81] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x82) = 2;
  param_1[0x89] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x8a) = 2;
  param_1[0x91] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x92) = 2;
  param_1[0x99] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x9a) = 2;
  param_1[0xa1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xa2) = 2;
  param_1[0xa9] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xaa) = 2;
  param_1[0xb1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xb2) = 2;
  param_1[0xb9] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xba) = 2;
  param_1[0xc1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xc2) = 2;
  param_1[0xc9] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xca) = 2;
  param_1[0xd1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xd2) = 2;
  param_1[0xd9] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xda) = 2;
  param_1[0xe1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xe2) = 2;
  param_1[0xe9] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xea) = 2;
  param_1[0xf1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xf2) = 2;
  param_1[0xf9] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xfa) = 2;
  param_1[0x101] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x102) = 2;
  param_1[0x109] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x10a) = 2;
  param_1[0x111] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x112) = 2;
  param_1[0x119] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x11a) = 2;
  param_1[0x121] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x122) = 2;
  param_1[0x129] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x12a) = 2;
  param_1[0x131] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x132) = 2;
  param_1[0x139] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x13a) = 2;
  param_1[0x141] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x142) = 2;
  param_1[0x149] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x14a) = 2;
  param_1[0x151] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x152) = 2;
  param_1[0x159] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x15a) = 2;
  param_1[0x161] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x162) = 2;
  param_1[0x169] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x16a) = 2;
  param_1[0x171] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x172) = 2;
  param_1[0x179] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x17a) = 2;
  param_1[0x181] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x182) = 2;
  param_1[0x189] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x18a) = 2;
  param_1[0x191] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x192) = 2;
  param_1[0x199] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x19a) = 2;
  param_1[0x1a1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x1a2) = 2;
  param_1[0x1a9] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x1aa) = 2;
  param_1[0x1b1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x1b2) = 2;
  param_1[0x1b9] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x1ba) = 2;
  param_1[0x1c1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x1c2) = 2;
  param_1[0x1c9] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x1ca) = 2;
  param_1[0x1d1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x1d2) = 2;
  param_1[0x1d9] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x1da) = 2;
  param_1[0x1e1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x1e2) = 2;
  param_1[0x1e9] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x1ea) = 2;
  param_1[0x1f1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x1f2) = 2;
  param_1[0x1f9] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x1fa) = 2;
  param_1[0x201] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x202) = 2;
  param_1[0x209] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x20a) = 2;
  param_1[0x211] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x212) = 2;
  param_1[0x219] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x21a) = 2;
  param_1[0x221] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x222) = 2;
  param_1[0x229] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x22a) = 2;
  param_1[0x231] = 0;
  param_1[0x232] = 0;
  param_1[0x233] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x234) = 2;
  *(undefined4 *)(param_1 + 0x23f) = 0;
  lVar1 = thunk_FUN_1424da030(0xc90);
  if (lVar1 != 0) {
    FUN_142556eb0(lVar1);
  }
  param_1[0x1d] = lVar1;
  puVar2 = (undefined8 *)thunk_FUN_1424da030(0x98);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = icu_64::DateTimeMatcher::vftable;
    puVar2[1] = icu_64::PtnSkeleton::vftable;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
  }
  param_1[0x1e] = puVar2;
  puVar2 = (undefined8 *)thunk_FUN_1424da030(0x10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = icu_64::DistanceInfo::vftable;
  }
  param_1[0x1f] = puVar2;
  puVar2 = (undefined8 *)thunk_FUN_1424da030(0x1b0);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = icu_64::PatternMap::vftable;
    memset(puVar2 + 1,0,0x1a0);
    *(undefined1 *)(puVar2 + 0x35) = 1;
  }
  param_1[0x20] = puVar2;
  if ((((puVar2 == (undefined8 *)0x0) || (param_1[0x1d] == 0)) || (param_1[0x1e] == 0)) ||
     (param_1[0x1f] == 0)) {
    *param_3 = 7;
    *(undefined4 *)(param_1 + 0x23f) = 7;
  }
  else {
    FUN_1425571f0(param_1,param_2,param_3);
  }
  return param_1;
}



// FUNCTION 142556b00 Unwind@142556b00 body=894 status=ok
// SIG undefined Unwind@142556b00(void)

void Unwind_142556b00(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_140859a90(*(undefined8 *)(param_2 + 0x40));
  FUN_140859a90(*(undefined8 *)(param_2 + 0x38));
  FUN_140859a90(*(undefined8 *)(param_2 + 0x30));
  lVar1 = *(longlong *)(param_2 + 0x48);
  FUN_140859a90(lVar1 + 0x10c8);
  FUN_140859a90(lVar1 + 0x1088);
  FUN_140859a90(lVar1 + 0x1048);
  FUN_140859a90(lVar1 + 0x1008);
  FUN_140859a90(lVar1 + 0xfc8);
  FUN_140859a90(lVar1 + 0xf88);
  FUN_140859a90(lVar1 + 0xf48);
  FUN_140859a90(lVar1 + 0xf08);
  FUN_140859a90(lVar1 + 0xec8);
  FUN_140859a90(lVar1 + 0xe88);
  FUN_140859a90(lVar1 + 0xe48);
  FUN_140859a90(lVar1 + 0xe08);
  FUN_140859a90(lVar1 + 0xdc8);
  FUN_140859a90(lVar1 + 0xd88);
  FUN_140859a90(lVar1 + 0xd48);
  FUN_140859a90(lVar1 + 0xd08);
  FUN_140859a90(lVar1 + 0xcc8);
  FUN_140859a90(lVar1 + 0xc88);
  FUN_140859a90(lVar1 + 0xc48);
  FUN_140859a90(lVar1 + 0xc08);
  FUN_140859a90(lVar1 + 0xbc8);
  FUN_140859a90(lVar1 + 0xb88);
  FUN_140859a90(lVar1 + 0xb48);
  FUN_140859a90(lVar1 + 0xb08);
  FUN_140859a90(lVar1 + 0xac8);
  FUN_140859a90(lVar1 + 0xa88);
  FUN_140859a90(lVar1 + 0xa48);
  FUN_140859a90(lVar1 + 0xa08);
  FUN_140859a90(lVar1 + 0x9c8);
  FUN_140859a90(lVar1 + 0x988);
  FUN_140859a90(lVar1 + 0x948);
  FUN_140859a90(lVar1 + 0x908);
  FUN_140859a90(lVar1 + 0x8c8);
  FUN_140859a90(lVar1 + 0x888);
  FUN_140859a90(lVar1 + 0x848);
  FUN_140859a90(lVar1 + 0x808);
  FUN_140859a90(lVar1 + 0x7c8);
  FUN_140859a90(lVar1 + 0x788);
  FUN_140859a90(lVar1 + 0x748);
  FUN_140859a90(lVar1 + 0x708);
  FUN_140859a90(lVar1 + 0x6c8);
  FUN_140859a90(lVar1 + 0x688);
  FUN_140859a90(lVar1 + 0x648);
  FUN_140859a90(lVar1 + 0x608);
  FUN_140859a90(lVar1 + 0x5c8);
  FUN_140859a90(lVar1 + 0x588);
  FUN_140859a90(lVar1 + 0x548);
  FUN_140859a90(lVar1 + 0x508);
  FUN_140859a90(lVar1 + 0x4c8);
  FUN_140859a90(lVar1 + 0x488);
  FUN_140859a90(lVar1 + 0x448);
  FUN_140859a90(lVar1 + 0x408);
  FUN_140859a90(lVar1 + 0x3c8);
  FUN_140859a90(lVar1 + 0x388);
  FUN_140859a90(lVar1 + 0x348);
  FUN_140859a90(lVar1 + 0x308);
  FUN_140859a90(lVar1 + 0x2c8);
  FUN_140859a90(lVar1 + 0x288);
  FUN_140859a90(lVar1 + 0x248);
  FUN_140859a90(lVar1 + 0x208);
  FUN_140859a90(lVar1 + 0x1c8);
  FUN_140859a90(lVar1 + 0x188);
  FUN_140859a90(lVar1 + 0x148);
  FUN_140859a90(lVar1 + 0x108);
  FUN_1414b3f60(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142556e80 Unwind@142556e80 body=44 status=ok
// SIG undefined Unwind@142556e80(void)

void Unwind_142556e80(undefined8 param_1,longlong param_2)

{
  FUN_1424b70d0(*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 142556eb0 FUN_142556eb0 body=829 status=ok
// SIG undefined FUN_142556eb0(void)

void FUN_142556eb0(undefined8 *param_1)

{
  *param_1 = icu_64::FormatParser::vftable;
  param_1[1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 2) = 2;
  param_1[9] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 10) = 2;
  param_1[0x11] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x12) = 2;
  param_1[0x19] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x1a) = 2;
  param_1[0x21] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x22) = 2;
  param_1[0x29] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x2a) = 2;
  param_1[0x31] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x32) = 2;
  param_1[0x39] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x3a) = 2;
  param_1[0x41] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x42) = 2;
  param_1[0x49] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x4a) = 2;
  param_1[0x51] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x52) = 2;
  param_1[0x59] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x5a) = 2;
  param_1[0x61] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x62) = 2;
  param_1[0x69] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x6a) = 2;
  param_1[0x71] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x72) = 2;
  param_1[0x79] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x7a) = 2;
  param_1[0x81] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x82) = 2;
  param_1[0x89] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x8a) = 2;
  param_1[0x91] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x92) = 2;
  param_1[0x99] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x9a) = 2;
  param_1[0xa1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xa2) = 2;
  param_1[0xa9] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xaa) = 2;
  param_1[0xb1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xb2) = 2;
  param_1[0xb9] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xba) = 2;
  param_1[0xc1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xc2) = 2;
  param_1[0xc9] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xca) = 2;
  param_1[0xd1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xd2) = 2;
  param_1[0xd9] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xda) = 2;
  param_1[0xe1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xe2) = 2;
  param_1[0xe9] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xea) = 2;
  param_1[0xf1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xf2) = 2;
  param_1[0xf9] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xfa) = 2;
  param_1[0x101] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x102) = 2;
  param_1[0x109] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x10a) = 2;
  param_1[0x111] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x112) = 2;
  param_1[0x119] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x11a) = 2;
  param_1[0x121] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x122) = 2;
  param_1[0x129] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x12a) = 2;
  param_1[0x131] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x132) = 2;
  param_1[0x139] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x13a) = 2;
  param_1[0x141] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x142) = 2;
  param_1[0x149] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x14a) = 2;
  param_1[0x151] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x152) = 2;
  param_1[0x159] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x15a) = 2;
  param_1[0x161] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x162) = 2;
  param_1[0x169] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x16a) = 2;
  param_1[0x171] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x172) = 2;
  param_1[0x179] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x17a) = 2;
  param_1[0x181] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x182) = 2;
  param_1[0x189] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x18a) = 2;
  *(undefined4 *)((longlong)param_1 + 0xc8c) = 0;
  *(undefined4 *)(param_1 + 0x191) = 0;
  return;
}



// FUNCTION 1425571f0 FUN_1425571f0 body=194 status=ok
// SIG undefined FUN_1425571f0(void)

void FUN_1425571f0(longlong param_1,undefined8 param_2,int *param_3)

{
  char cVar1;
  
  *(undefined8 *)(param_1 + 0x1188) = 0;
  *(undefined8 *)(param_1 + 0x1190) = 0;
  FUN_142557710(0,param_3);
  FUN_142557860(param_1,param_2,param_3);
  FUN_142557a80(param_1,param_2,param_3);
  FUN_142557f70(param_1,param_2,param_3);
  FUN_1425582c0(param_1,param_2,param_3);
  if (*param_3 < 1) {
    if (DAT_14c793398 != 2) {
      cVar1 = FUN_142501800(&DAT_14c793398);
      if (cVar1 != '\0') {
        FUN_142558370(param_3);
        DAT_14c79339c = *param_3;
        FUN_1425019c0(&DAT_14c793398);
        goto LAB_142557294;
      }
    }
    if (0 < DAT_14c79339c) {
      *param_3 = DAT_14c79339c;
    }
  }
LAB_142557294:
  FUN_142558430(param_1,param_2,param_3);
  *(int *)(param_1 + 0x11f8) = *param_3;
  return;
}



// FUNCTION 1425572c0 FUN_1425572c0 body=1042 status=ok
// SIG undefined FUN_1425572c0(void)

void FUN_1425572c0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = icu_64::DateTimePatternGenerator::vftable;
  plVar1 = (longlong *)param_1[0x232];
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FUN_142502220();
    }
    FUN_1401773f0(plVar1);
  }
  puVar2 = (undefined8 *)param_1[0x1d];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)param_1[0x1e];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)param_1[0x1f];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)param_1[0x20];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)param_1[0x231];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  FUN_140859a90(param_1 + 0x233);
  FUN_140859a90(param_1 + 0x229);
  FUN_140859a90(param_1 + 0x221);
  FUN_140859a90(param_1 + 0x219);
  FUN_140859a90(param_1 + 0x211);
  FUN_140859a90(param_1 + 0x209);
  FUN_140859a90(param_1 + 0x201);
  FUN_140859a90(param_1 + 0x1f9);
  FUN_140859a90(param_1 + 0x1f1);
  FUN_140859a90(param_1 + 0x1e9);
  FUN_140859a90(param_1 + 0x1e1);
  FUN_140859a90(param_1 + 0x1d9);
  FUN_140859a90(param_1 + 0x1d1);
  FUN_140859a90(param_1 + 0x1c9);
  FUN_140859a90(param_1 + 0x1c1);
  FUN_140859a90(param_1 + 0x1b9);
  FUN_140859a90(param_1 + 0x1b1);
  FUN_140859a90(param_1 + 0x1a9);
  FUN_140859a90(param_1 + 0x1a1);
  FUN_140859a90(param_1 + 0x199);
  FUN_140859a90(param_1 + 0x191);
  FUN_140859a90(param_1 + 0x189);
  FUN_140859a90(param_1 + 0x181);
  FUN_140859a90(param_1 + 0x179);
  FUN_140859a90(param_1 + 0x171);
  FUN_140859a90(param_1 + 0x169);
  FUN_140859a90(param_1 + 0x161);
  FUN_140859a90(param_1 + 0x159);
  FUN_140859a90(param_1 + 0x151);
  FUN_140859a90(param_1 + 0x149);
  FUN_140859a90(param_1 + 0x141);
  FUN_140859a90(param_1 + 0x139);
  FUN_140859a90(param_1 + 0x131);
  FUN_140859a90(param_1 + 0x129);
  FUN_140859a90(param_1 + 0x121);
  FUN_140859a90(param_1 + 0x119);
  FUN_140859a90(param_1 + 0x111);
  FUN_140859a90(param_1 + 0x109);
  FUN_140859a90(param_1 + 0x101);
  FUN_140859a90(param_1 + 0xf9);
  FUN_140859a90(param_1 + 0xf1);
  FUN_140859a90(param_1 + 0xe9);
  FUN_140859a90(param_1 + 0xe1);
  FUN_140859a90(param_1 + 0xd9);
  FUN_140859a90(param_1 + 0xd1);
  FUN_140859a90(param_1 + 0xc9);
  FUN_140859a90(param_1 + 0xc1);
  FUN_140859a90(param_1 + 0xb9);
  FUN_140859a90(param_1 + 0xb1);
  FUN_140859a90(param_1 + 0xa9);
  FUN_140859a90(param_1 + 0xa1);
  FUN_140859a90(param_1 + 0x99);
  FUN_140859a90(param_1 + 0x91);
  FUN_140859a90(param_1 + 0x89);
  FUN_140859a90(param_1 + 0x81);
  FUN_140859a90(param_1 + 0x79);
  FUN_140859a90(param_1 + 0x71);
  FUN_140859a90(param_1 + 0x69);
  FUN_140859a90(param_1 + 0x61);
  FUN_140859a90(param_1 + 0x59);
  FUN_140859a90(param_1 + 0x51);
  FUN_140859a90(param_1 + 0x49);
  FUN_140859a90(param_1 + 0x41);
  FUN_140859a90(param_1 + 0x39);
  FUN_140859a90(param_1 + 0x31);
  FUN_140859a90(param_1 + 0x29);
  FUN_140859a90(param_1 + 0x21);
  FUN_1414b3f60(param_1 + 1);
  FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 1425576f0 FUN_1425576f0 body=23 status=ok
// SIG undefined FUN_1425576f0(void)

undefined1 FUN_1425576f0(void)

{
  FUN_142502220(DAT_14c793390);
  return 1;
}



// FUNCTION 142557710 FUN_142557710 body=192 status=ok
// SIG undefined FUN_142557710(void)

void FUN_142557710(longlong param_1,int *param_2)

{
  uint uVar1;
  undefined1 local_c0 [64];
  undefined **local_80;
  undefined2 local_78;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (*param_2 < 1) {
    local_80 = &PTR_FUN_149e18960;
    local_78 = 2;
    uVar1 = 0;
    do {
      if (0xf < uVar1) break;
      FUN_1424a6c10(local_c0,L"GyQMwWEDFdaHmsSv"[uVar1]);
      if (*(int *)(param_1 + 0x11f8) < 1) {
        FUN_14255b730(param_1,local_c0,0,0,&local_80,param_2);
      }
      else {
        *param_2 = *(int *)(param_1 + 0x11f8);
      }
      FUN_140859a90(local_c0);
      uVar1 = uVar1 + 1;
    } while (*param_2 < 1);
    FUN_140859a90(&local_80);
  }
  return;
}



// FUNCTION 1425577e0 Unwind@1425577e0 body=51 status=ok
// SIG undefined Unwind@1425577e0(void)

void Unwind_1425577e0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x38);
  return;
}



// FUNCTION 142557820 Unwind@142557820 body=51 status=ok
// SIG undefined Unwind@142557820(void)

void Unwind_142557820(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x78);
  return;
}



// FUNCTION 142557860 FUN_142557860 body=475 status=ok
// SIG undefined FUN_142557860(void)

void FUN_142557860(longlong param_1,undefined8 param_2,int *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  undefined ***in_stack_ffffffffffffff28;
  undefined **local_c8;
  undefined2 local_c0;
  undefined **local_88;
  ushort local_80;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (*param_3 < 1) {
    local_88 = &PTR_FUN_149e18960;
    local_80 = 2;
    local_c8 = &PTR_FUN_149e18960;
    local_c0 = 2;
    iVar3 = 0;
    while( true ) {
      puVar1 = (undefined8 *)FUN_1424bde60(iVar3,param_2);
      if (puVar1 != (undefined8 *)0x0) {
        in_stack_ffffffffffffff28 =
             (undefined ***)((ulonglong)in_stack_ffffffffffffff28 & 0xffffffff00000000);
        plVar2 = (longlong *)
                 __RTDynamicCast(puVar1,0,&icu_64::DateFormat::RTTI_Type_Descriptor,
                                 &icu_64::SimpleDateFormat::RTTI_Type_Descriptor,
                                 in_stack_ffffffffffffff28);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0xe8))(plVar2,&local_88);
          if (*(int *)(param_1 + 0x11f8) < 1) {
            in_stack_ffffffffffffff28 = &local_c8;
            FUN_14255b730(param_1,&local_88,0,0,in_stack_ffffffffffffff28,param_3);
          }
          else {
            *param_3 = *(int *)(param_1 + 0x11f8);
          }
        }
        (**(code **)*puVar1)(puVar1,1);
      }
      if (0 < *param_3) break;
      puVar1 = (undefined8 *)FUN_1424bde30(iVar3,param_2);
      if (puVar1 != (undefined8 *)0x0) {
        in_stack_ffffffffffffff28 =
             (undefined ***)((ulonglong)in_stack_ffffffffffffff28 & 0xffffffff00000000);
        plVar2 = (longlong *)
                 __RTDynamicCast(puVar1,0,&icu_64::DateFormat::RTTI_Type_Descriptor,
                                 &icu_64::SimpleDateFormat::RTTI_Type_Descriptor,
                                 in_stack_ffffffffffffff28);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0xe8))(plVar2,&local_88);
          if (*(int *)(param_1 + 0x11f8) < 1) {
            in_stack_ffffffffffffff28 = &local_c8;
            FUN_14255b730(param_1,&local_88,0,0,in_stack_ffffffffffffff28,param_3);
          }
          else {
            *param_3 = *(int *)(param_1 + 0x11f8);
          }
          if (((iVar3 == 3) && (0x1f < local_80)) && (*param_3 < 1)) {
            FUN_142559220(param_1,&local_88,param_3);
          }
        }
        (**(code **)*puVar1)(puVar1,1);
      }
      if ((0 < *param_3) || (bVar4 = iVar3 == 3, iVar3 = iVar3 + 1, bVar4)) break;
    }
    FUN_140859a90(&local_c8);
    FUN_140859a90(&local_88);
  }
  return;
}



// FUNCTION 142557a40 Unwind@142557a40 body=64 status=ok
// SIG undefined Unwind@142557a40(void)

void Unwind_142557a40(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  FUN_140859a90(param_2 + 0x70);
  return;
}



// FUNCTION 142557a80 FUN_142557a80 body=969 status=ok
// SIG undefined FUN_142557a80(void)

void FUN_142557a80(undefined8 param_1,longlong param_2,int *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined **local_230;
  undefined2 local_228;
  undefined **local_1f0;
  undefined2 local_1e8;
  undefined **local_1b0;
  undefined2 local_1a8;
  undefined **local_170;
  undefined8 local_168;
  undefined **local_160;
  undefined2 local_158;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  longlong local_e0;
  undefined4 local_d8;
  undefined2 local_d4;
  undefined4 local_a8;
  undefined1 *local_a0;
  undefined4 local_98;
  undefined2 local_94;
  undefined4 local_68;
  undefined **local_60;
  undefined8 local_58;
  undefined **local_50;
  undefined8 local_48;
  longlong local_40;
  undefined4 local_34;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*param_3 < 1) {
    local_230 = &PTR_FUN_149e18960;
    local_228 = 2;
    local_1f0 = &PTR_FUN_149e18960;
    local_1e8 = 2;
    local_1b0 = &PTR_FUN_149e18960;
    local_1a8 = 2;
    local_a0 = (undefined1 *)((longlong)&local_94 + 1);
    local_98 = 0x28;
    local_94 = 0;
    local_68 = 0;
    lVar1 = FUN_1424ebfe0(0,*(undefined8 *)(param_2 + 0x28));
    if (*param_3 < 1) {
      local_e0 = (longlong)&local_d4 + 1;
      local_d8 = 0x28;
      local_d4 = 0;
      local_a8 = 0;
      local_40 = lVar1;
      FUN_1425598b0();
      if (*param_3 < 1) {
        local_34 = 0;
        local_60 = icu_64::DateTimePatternGenerator::AppendItemFormatsSink::vftable;
        local_68 = 0;
        local_58 = param_1;
        *local_a0 = 0;
        FUN_1425038b0(&local_120,"calendar");
        uVar2 = FUN_142503520(&local_a0,local_120,local_118,param_3);
        uVar2 = FUN_1425034d0(uVar2,0x2f,param_3);
        uVar2 = FUN_142503520(uVar2,local_e0,local_a8,param_3);
        uVar2 = FUN_1425034d0(uVar2,0x2f,param_3);
        FUN_1425038b0(&local_110,"appendItems");
        FUN_142503520(uVar2,local_110,local_108,param_3);
        if (*param_3 < 1) {
          FUN_1424ec6e0(local_40,local_a0,&local_60,&local_34);
          FUN_1425599d0(&local_60);
          local_34 = 0;
          local_50 = icu_64::DateTimePatternGenerator::AppendItemNamesSink::vftable;
          local_48 = param_1;
          FUN_1424ec6e0(local_40,"fields",&local_50,&local_34);
          FUN_142559a90(&local_50);
          local_34 = 0;
          FUN_142559c60(param_1,param_3);
          if (*param_3 < 1) {
            local_170 = icu_64::DateTimePatternGenerator::AvailableFormatsSink::vftable;
            local_160 = &PTR_FUN_149e18960;
            local_158 = 2;
            local_68 = 0;
            local_168 = param_1;
            *local_a0 = 0;
            FUN_1425038b0(&local_100,"calendar");
            uVar2 = FUN_142503520(&local_a0,local_100,local_f8,param_3);
            uVar2 = FUN_1425034d0(uVar2,0x2f,param_3);
            uVar2 = FUN_142503520(uVar2,local_e0,local_a8,param_3);
            uVar2 = FUN_1425034d0(uVar2,0x2f,param_3);
            FUN_1425038b0(&local_f0,"availableFormats");
            FUN_142503520(uVar2,local_f0,local_e8,param_3);
            if (*param_3 < 1) {
              FUN_1424ec6e0(local_40,local_a0,&local_170,&local_34);
            }
            local_170 = icu_64::DateTimePatternGenerator::AvailableFormatsSink::vftable;
            FUN_140859a90(&local_160);
            thunk_FUN_1424b70d0(&local_170);
          }
          thunk_FUN_1424b70d0(&local_50);
        }
        thunk_FUN_1424b70d0(&local_60);
      }
      lVar1 = local_40;
      if ((char)local_d4 != '\0') {
        FUN_1424da110(local_e0);
        lVar1 = local_40;
      }
    }
    if (lVar1 != 0) {
      FUN_1424ea9f0(lVar1);
    }
    if ((char)local_94 != '\0') {
      FUN_1424da110(local_a0);
    }
    FUN_140859a90(&local_1b0);
    FUN_140859a90(&local_1f0);
    FUN_140859a90(&local_230);
  }
  return;
}



// FUNCTION 142557e50 Unwind@142557e50 body=63 status=ok
// SIG undefined Unwind@142557e50(void)

void Unwind_142557e50(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0xe8) = icu_64::DateTimePatternGenerator::AvailableFormatsSink::vftable
  ;
  FUN_140859a90(param_2 + 0xf8);
  thunk_FUN_1424b70d0(param_2 + 0xe8);
  return;
}



// FUNCTION 142557e90 Unwind@142557e90 body=46 status=ok
// SIG undefined Unwind@142557e90(void)

void Unwind_142557e90(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x208);
  return;
}



// FUNCTION 142557ec0 Unwind@142557ec0 body=46 status=ok
// SIG undefined Unwind@142557ec0(void)

void Unwind_142557ec0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x1f8);
  return;
}



// FUNCTION 142557ef0 Unwind@142557ef0 body=125 status=ok
// SIG undefined Unwind@142557ef0(void)

void Unwind_142557ef0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x184) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x178));
  }
  if (*(longlong *)(param_2 + 0x218) != 0) {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0x218));
  }
  if (*(char *)(param_2 + 0x1c4) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x1b8));
  }
  FUN_140859a90(param_2 + 0xa8);
  FUN_140859a90(param_2 + 0x68);
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 142557f70 FUN_142557f70 body=628 status=ok
// SIG undefined FUN_142557f70(void)

void FUN_142557f70(longlong param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  char *pcVar5;
  longlong lVar6;
  undefined1 local_a0 [64];
  longlong local_60;
  undefined4 local_54;
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (0 < *param_3) {
    return;
  }
  local_54 = 0;
  plVar2 = (longlong *)FUN_1424cc3e0(param_2,param_3);
  if ((plVar2 == (longlong *)0x0) && (*param_3 < 1)) {
    *param_3 = 7;
    return;
  }
  if (0 < *param_3) goto LAB_1425581b8;
  local_40 = plVar2;
  uVar3 = FUN_1424a5500(param_2);
  lVar4 = FUN_1424ebfe0(0,uVar3,param_3);
  plVar2 = local_40;
  if ((*param_3 < 1) && (FUN_1424ecc30(lVar4,"calendar",lVar4,param_3), *param_3 < 1)) {
    local_50 = 0;
    local_48 = lVar4;
    lVar4 = (**(code **)(*plVar2 + 0xb0))(plVar2);
    if (lVar4 == 0) {
LAB_1425580e7:
      lVar6 = 0;
      lVar4 = local_48;
LAB_1425580f2:
      plVar2 = local_40;
      *param_3 = 0;
      lVar6 = FUN_1424ec1c0(lVar4,"gregorian",lVar6,param_3);
      FUN_1424ec1c0(lVar6,"DateTimePatterns",lVar6,param_3);
      iVar1 = *param_3;
    }
    else {
      local_50 = 0;
      pcVar5 = (char *)(**(code **)(*local_40 + 0xb0))();
      if (*pcVar5 == '\0') goto LAB_1425580e7;
      local_50 = 0;
      pcVar5 = (char *)(**(code **)(*local_40 + 0xb0))();
      iVar1 = strcmp(pcVar5,"gregorian");
      if (iVar1 == 0) goto LAB_1425580e7;
      local_50 = 0;
      uVar3 = (**(code **)(*local_40 + 0xb0))();
      lVar4 = local_48;
      lVar6 = FUN_1424ec1c0(local_48,uVar3,0,param_3);
      FUN_1424ec1c0(lVar6,"DateTimePatterns",lVar6,param_3);
      if ((lVar6 == 0) || (iVar1 = *param_3, plVar2 = local_40, iVar1 == 2)) goto LAB_1425580f2;
    }
    if (iVar1 < 1) {
      iVar1 = FUN_1424eaf70(lVar6);
      if (iVar1 < 9) {
        *param_3 = 3;
      }
      else {
        uVar3 = FUN_1424ebec0(lVar6,8,&local_54,param_3);
        local_60 = lVar6;
        local_50 = lVar6;
        FUN_1424a7060(local_a0,1,uVar3,local_54);
        FUN_1424a7c80(param_1 + 0x1108,local_a0);
        FUN_1424a8e50(param_1 + 0x1108);
        FUN_140859a90(local_a0);
        lVar4 = local_48;
        plVar2 = local_40;
        lVar6 = local_60;
      }
    }
    if (lVar6 != 0) {
      FUN_1424ea9f0(lVar6);
    }
  }
  if (lVar4 != 0) {
    FUN_1424ea9f0(lVar4);
  }
LAB_1425581b8:
  if (plVar2 != (longlong *)0x0) {
    (**(code **)*plVar2)(plVar2,1);
  }
  return;
}



// FUNCTION 1425581f0 Unwind@1425581f0 body=54 status=ok
// SIG undefined Unwind@1425581f0(void)

void Unwind_1425581f0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_2 + 0x68);
  return;
}



// FUNCTION 142558230 Unwind@142558230 body=68 status=ok
// SIG undefined Unwind@142558230(void)

void Unwind_142558230(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x78) != 0) {
    FUN_1424ea9f0();
  }
  if (*(longlong *)(param_2 + 0x80) != 0) {
    FUN_1424ea9f0(*(longlong *)(param_2 + 0x80));
  }
  return;
}



// FUNCTION 142558280 Unwind@142558280 body=59 status=ok
// SIG undefined Unwind@142558280(void)

void Unwind_142558280(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x88) != 0) {
    (**(code **)**(undefined8 **)(param_2 + 0x88))(*(undefined8 **)(param_2 + 0x88),1);
  }
  return;
}



// FUNCTION 1425582c0 FUN_1425582c0 body=127 status=ok
// SIG undefined FUN_1425582c0(void)

void FUN_1425582c0(longlong param_1,undefined8 param_2,int *param_3)

{
  undefined1 local_b60 [8];
  undefined1 local_b58 [2808];
  undefined1 local_60 [64];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_1425423f0(local_b60);
  if (*param_3 < 1) {
    FUN_1424a6be0(local_60,local_b58);
    FUN_1424a7ca0(param_1 + 0x1148,local_60);
    FUN_140859a90(local_60);
    FUN_1424a8e50(param_1 + 0x1148);
  }
  FUN_1425434a0(local_b60);
  return;
}



// FUNCTION 142558340 Unwind@142558340 body=37 status=ok
// SIG undefined Unwind@142558340(void)

void Unwind_142558340(undefined8 param_1,longlong param_2)

{
  FUN_1425434a0(param_2 + 0x28);
  return;
}



// FUNCTION 142558370 FUN_142558370 body=181 status=ok
// SIG undefined FUN_142558370(void)

void FUN_142558370(int *param_1)

{
  longlong lVar1;
  undefined **local_20;
  
  if (*param_1 < 1) {
    DAT_14c793390 = FUN_142501e10(FUN_1425031c0,FUN_142503270,0,param_1);
    if (*param_1 < 1) {
      FUN_142502350(DAT_14c793390,&LAB_1425576e0);
      FUN_14251f960(0x16,FUN_1425576f0);
      lVar1 = FUN_1424edad0(0,"supplementalData",param_1);
      if (*param_1 < 1) {
        local_20 = icu_64::_anon_F0E369BF::AllowedHourFormatsSink::vftable;
        FUN_1424ec6e0(lVar1,"timeData",&local_20,param_1);
        thunk_FUN_1424b70d0(&local_20);
      }
      if (lVar1 != 0) {
        FUN_1424ea9f0(lVar1);
      }
    }
  }
  return;
}



// FUNCTION 142558430 FUN_142558430 body=474 status=ok
// SIG undefined FUN_142558430(void)

void FUN_142558430(longlong param_1,undefined8 param_2,int *param_3)

{
  uint uVar1;
  size_t sVar2;
  uint *puVar3;
  undefined2 uVar4;
  char *_Str;
  undefined1 local_150 [8];
  char local_148 [18];
  char local_136 [198];
  longlong local_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined4 local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*param_3 < 1) {
    FUN_1424a3ce0(local_150);
    FUN_1424a4070(local_150,param_3);
    if (*param_3 < 1) {
      _Str = "001";
      if (local_136[0] != '\0') {
        _Str = local_136;
      }
      local_70 = (longlong)&local_64 + 1;
      local_68 = 0x28;
      local_64 = 0;
      local_38 = 0;
      sVar2 = strlen(local_148);
      FUN_142503520(&local_70,local_148,sVar2 & 0xffffffff,param_3);
      FUN_1425034d0(&local_70,0x5f,param_3);
      sVar2 = strlen(_Str);
      FUN_142503520(&local_70,_Str,sVar2 & 0xffffffff,param_3);
      puVar3 = (uint *)FUN_142502620(DAT_14c793390,local_70);
      if ((puVar3 == (uint *)0x0) &&
         (puVar3 = (uint *)FUN_142502620(DAT_14c793390,_Str), puVar3 == (uint *)0x0)) {
        *(undefined2 *)(param_1 + 0x11d8) = 0x48;
        *(undefined8 *)(param_1 + 0x11dc) = 0xffffffff00000001;
      }
      else {
        uVar4 = 0x48;
        if (*puVar3 < 4) {
          uVar4 = (undefined2)(0x6b004b00480068 >> ((byte)(*puVar3 << 4) & 0x3f));
        }
        *(undefined2 *)(param_1 + 0x11d8) = uVar4;
        uVar1 = puVar3[1];
        *(uint *)(param_1 + 0x11dc) = uVar1;
        if ((((uVar1 != 0xffffffff) &&
             (uVar1 = puVar3[2], *(uint *)(param_1 + 0x11e0) = uVar1, uVar1 != 0xffffffff)) &&
            (uVar1 = puVar3[3], *(uint *)(param_1 + 0x11e4) = uVar1, uVar1 != 0xffffffff)) &&
           (((uVar1 = puVar3[4], *(uint *)(param_1 + 0x11e8) = uVar1, uVar1 != 0xffffffff &&
             (uVar1 = puVar3[5], *(uint *)(param_1 + 0x11ec) = uVar1, uVar1 != 0xffffffff)) &&
            (uVar1 = puVar3[6], *(uint *)(param_1 + 0x11f0) = uVar1, uVar1 != 0xffffffff)))) {
          *(uint *)(param_1 + 0x11f4) = puVar3[7];
        }
      }
      if ((char)local_64 != '\0') {
        FUN_1424da110(local_70);
      }
    }
    FUN_1414b3f60(local_150);
    return;
  }
  return;
}



// FUNCTION 142558610 Unwind@142558610 body=55 status=ok
// SIG undefined Unwind@142558610(void)

void Unwind_142558610(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x114) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x108));
  }
  return;
}



// FUNCTION 142558650 Unwind@142558650 body=43 status=ok
// SIG undefined Unwind@142558650(void)

void Unwind_142558650(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x28);
  return;
}



// FUNCTION 142558680 FUN_142558680 body=906 status=ok
// SIG undefined FUN_142558680(void)

void FUN_142558680(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  short sVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  short *psVar14;
  longlong lVar15;
  longlong lVar16;
  short sVar17;
  ulonglong uVar18;
  int iVar19;
  undefined **local_b0;
  undefined2 local_a8;
  longlong local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  int local_50;
  int local_4c [3];
  
  local_4c[1] = -2;
  local_4c[2] = -1;
  local_60 = (undefined8 *)(param_4 + 8);
  *(undefined8 *)(param_4 + 0x38) = 0;
  *(undefined8 *)(param_4 + 0x40) = 0;
  *(undefined8 *)(param_4 + 0x28) = 0;
  *(undefined8 *)(param_4 + 0x30) = 0;
  *(undefined8 *)(param_4 + 0x18) = 0;
  *(undefined8 *)(param_4 + 0x20) = 0;
  *(undefined8 *)(param_4 + 8) = 0;
  *(undefined8 *)(param_4 + 0x10) = 0;
  local_58 = (undefined8 *)(param_4 + 0x48);
  local_68 = (undefined8 *)(param_4 + 0x68);
  *(undefined8 *)(param_4 + 0x48) = 0;
  *(undefined8 *)(param_4 + 0x50) = 0;
  *(undefined8 *)(param_4 + 0x58) = 0;
  *(undefined8 *)(param_4 + 0x60) = 0;
  *(undefined8 *)(param_4 + 0x68) = 0;
  *(undefined8 *)(param_4 + 0x70) = 0;
  *(undefined8 *)(param_4 + 0x78) = 0;
  *(undefined8 *)(param_4 + 0x80) = 0;
  *(undefined1 *)(param_4 + 0x88) = 0;
  local_50 = 0;
  *(undefined4 *)(param_3 + 0x191) = 0;
  iVar19 = 0;
  local_70 = param_1;
  do {
    iVar9 = (**(code **)(*param_3 + 8))(param_3,param_2,iVar19,&local_50);
    if (iVar9 != 1) {
      if ((int)param_3[0x191] < 1) goto LAB_142558967;
      break;
    }
    FUN_1424a7950(&local_b0,param_2,iVar19,local_50);
    lVar12 = param_3[0x191];
    *(int *)(param_3 + 0x191) = (int)lVar12 + 1;
    FUN_1424a7ca0(param_3 + (longlong)(int)lVar12 * 8 + 1,&local_b0);
    FUN_140859a90(&local_b0);
    iVar19 = iVar19 + local_50;
  } while ((int)param_3[0x191] < 0x32);
  local_4c[0] = 0;
  do {
    lVar12 = (longlong)local_4c[0];
    lVar13 = lVar12 * 0x40;
    sVar10 = (short)param_3[lVar12 * 8 + 2];
    if (sVar10 < 0) {
      uVar11 = *(uint *)((longlong)param_3 + lVar13 + 0x14);
    }
    else {
      uVar11 = (int)sVar10 >> 5;
    }
    if (uVar11 != 0) {
      if (((int)sVar10 & 2U) == 0) {
        psVar14 = (short *)param_3[lVar12 * 8 + 4];
      }
      else {
        psVar14 = (short *)((longlong)param_3 + lVar13 + 0x12);
      }
      sVar10 = *psVar14;
      if (sVar10 == 0x27) {
        local_b0 = &PTR_FUN_149e18960;
        local_a8 = 2;
        FUN_1425596f0(param_3,&local_b0,local_4c);
        FUN_140859a90(&local_b0);
      }
      else {
        if (1 < (int)uVar11) {
          uVar18 = 1;
          do {
            if (sVar10 != psVar14[uVar18]) goto LAB_1425587d0;
            uVar18 = uVar18 + 1;
          } while (uVar11 != uVar18);
        }
        iVar19 = 0;
        sVar17 = 0x47;
        do {
          if (sVar17 == 0) goto LAB_1425587d0;
          uVar18 = (ulonglong)iVar19;
          psVar14 = (short *)(&DAT_1499e0ea0 + uVar18 * 0x10);
          iVar9 = iVar19;
          while (psVar14 = psVar14 + 8, sVar17 != sVar10) {
            uVar18 = uVar18 + 1;
            sVar17 = *psVar14;
            iVar9 = iVar9 + 1;
            if (sVar17 == 0) goto LAB_1425587d0;
          }
          iVar19 = iVar9 + 1;
        } while ((sVar10 == *(short *)(&DAT_1499e0ea0 + (longlong)iVar19 * 0x10)) &&
                (sVar17 = sVar10,
                (int)*(short *)(&DAT_1499e0eaa + (longlong)iVar19 * 0x10) <= (int)uVar11));
        if (-1 < iVar9) {
          lVar16 = (uVar18 & 0xffffffff) * 0x10;
          lVar15 = (longlong)*(int *)(&DAT_1499e0ea4 + lVar16);
          *(char *)(param_4 + 0x48 + lVar15) = (char)sVar10;
          *(char *)(param_4 + 0x58 + lVar15) = (char)uVar11;
          uVar1 = (&DAT_1499e0eaa)[lVar16];
          *(undefined *)(param_4 + 0x68 + lVar15) = (&DAT_1499e0ea0)[lVar16];
          *(undefined1 *)(param_4 + 0x78 + lVar15) = uVar1;
          sVar10 = *(short *)(&DAT_1499e0ea8 + lVar16);
          if (0 < sVar10) {
            if ((short)param_3[lVar12 * 8 + 2] < 0) {
              sVar17 = *(short *)((longlong)param_3 + lVar13 + 0x14);
            }
            else {
              sVar17 = (short)((uint)(int)(short)param_3[lVar12 * 8 + 2] >> 5);
            }
            sVar10 = sVar10 + sVar17;
          }
          *(int *)(param_4 + 8 + lVar15 * 4) = (int)sVar10;
        }
      }
    }
LAB_1425587d0:
    local_4c[0] = local_4c[0] + 1;
  } while (local_4c[0] < (int)param_3[0x191]);
LAB_142558967:
  if (*(char *)(param_4 + 99) != '\0') {
    if ((*(char *)(param_4 + 0x53) == 'h') || (*(char *)(param_4 + 0x53) == 'K')) {
      if (*(char *)(param_4 + 0x62) == '\0') {
        *(undefined1 *)(param_4 + 0x52) = 0x61;
        *(undefined1 *)(param_4 + 0x62) = 1;
        *(undefined1 *)(param_4 + 0x72) = 0x61;
        *(undefined1 *)(param_4 + 0x82) = 1;
        *(undefined4 *)(param_4 + 0x30) = 0xfffffefd;
        *(undefined1 *)(param_4 + 0x88) = 1;
      }
    }
    else {
      *(undefined1 *)(param_4 + 0x52) = 0;
      *(undefined1 *)(param_4 + 0x62) = 0;
      *(undefined1 *)(param_4 + 0x72) = 0;
      *(undefined1 *)(param_4 + 0x82) = 0;
      *(undefined4 *)(param_4 + 0x30) = 0;
    }
  }
  uVar2 = *local_60;
  uVar3 = local_60[1];
  uVar4 = local_60[2];
  uVar5 = local_60[3];
  uVar6 = local_60[4];
  uVar7 = local_60[5];
  uVar8 = local_60[7];
  *(undefined8 *)(local_70 + 0x40) = local_60[6];
  *(undefined8 *)(local_70 + 0x48) = uVar8;
  *(undefined8 *)(local_70 + 0x30) = uVar6;
  *(undefined8 *)(local_70 + 0x38) = uVar7;
  *(undefined8 *)(local_70 + 0x20) = uVar4;
  *(undefined8 *)(local_70 + 0x28) = uVar5;
  *(undefined8 *)(local_70 + 0x10) = uVar2;
  *(undefined8 *)(local_70 + 0x18) = uVar3;
  uVar2 = local_58[1];
  *(undefined8 *)(local_70 + 0x50) = *local_58;
  *(undefined8 *)(local_70 + 0x58) = uVar2;
  uVar2 = *(undefined8 *)(param_4 + 0x60);
  *(undefined8 *)(local_70 + 0x60) = *(undefined8 *)(param_4 + 0x58);
  *(undefined8 *)(local_70 + 0x68) = uVar2;
  uVar2 = local_68[1];
  *(undefined8 *)(local_70 + 0x70) = *local_68;
  *(undefined8 *)(local_70 + 0x78) = uVar2;
  uVar2 = *(undefined8 *)(param_4 + 0x80);
  *(undefined8 *)(local_70 + 0x80) = *(undefined8 *)(param_4 + 0x78);
  *(undefined8 *)(local_70 + 0x88) = uVar2;
  return;
}



// FUNCTION 142558a30 Unwind@142558a30 body=55 status=ok
// SIG undefined Unwind@142558a30(void)

void Unwind_142558a30(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 142558a70 FUN_142558a70 body=242 status=ok
// SIG undefined FUN_142558a70(void)

undefined8 * FUN_142558a70(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  short local_42 [5];
  
  local_42[1] = -2;
  local_42[2] = -1;
  local_42[3] = -1;
  local_42[4] = -1;
  *param_2 = &PTR_FUN_149e18960;
  *(undefined2 *)(param_2 + 1) = 2;
  lVar3 = 0;
  do {
    cVar1 = *(char *)(param_1 + 0x58 + lVar3);
    if ('\0' < cVar1) {
      cVar2 = *(char *)(param_1 + 0x48 + lVar3);
      iVar4 = 0;
      do {
        local_42[0] = (short)cVar2;
        FUN_1424a6cf0(param_2,local_42,0,1);
        iVar4 = iVar4 + 1;
      } while (iVar4 != cVar1);
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x10);
  FUN_1424a7c80(param_2);
  if (*(char *)(param_1 + 0x88) != '\0') {
    if (*(short *)(param_2 + 1) < 0) {
      iVar4 = *(int *)((longlong)param_2 + 0xc);
    }
    else {
      iVar4 = (int)*(short *)(param_2 + 1) >> 5;
    }
    iVar4 = FUN_1424a8940(param_2,0x61,0,iVar4);
    if (-1 < iVar4) {
      FUN_1424a9130(param_2,iVar4,1,0,0,0);
    }
  }
  return param_2;
}



// FUNCTION 142558b70 Unwind@142558b70 body=48 status=ok
// SIG undefined Unwind@142558b70(void)

void Unwind_142558b70(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 142558ba0 FUN_142558ba0 body=625 status=ok
// SIG undefined FUN_142558ba0(void)

void FUN_142558ba0(undefined8 *param_1)

{
  *param_1 = icu_64::FormatParser::vftable;
  FUN_140859a90(param_1 + 0x189);
  FUN_140859a90(param_1 + 0x181);
  FUN_140859a90(param_1 + 0x179);
  FUN_140859a90(param_1 + 0x171);
  FUN_140859a90(param_1 + 0x169);
  FUN_140859a90(param_1 + 0x161);
  FUN_140859a90(param_1 + 0x159);
  FUN_140859a90(param_1 + 0x151);
  FUN_140859a90(param_1 + 0x149);
  FUN_140859a90(param_1 + 0x141);
  FUN_140859a90(param_1 + 0x139);
  FUN_140859a90(param_1 + 0x131);
  FUN_140859a90(param_1 + 0x129);
  FUN_140859a90(param_1 + 0x121);
  FUN_140859a90(param_1 + 0x119);
  FUN_140859a90(param_1 + 0x111);
  FUN_140859a90(param_1 + 0x109);
  FUN_140859a90(param_1 + 0x101);
  FUN_140859a90(param_1 + 0xf9);
  FUN_140859a90(param_1 + 0xf1);
  FUN_140859a90(param_1 + 0xe9);
  FUN_140859a90(param_1 + 0xe1);
  FUN_140859a90(param_1 + 0xd9);
  FUN_140859a90(param_1 + 0xd1);
  FUN_140859a90(param_1 + 0xc9);
  FUN_140859a90(param_1 + 0xc1);
  FUN_140859a90(param_1 + 0xb9);
  FUN_140859a90(param_1 + 0xb1);
  FUN_140859a90(param_1 + 0xa9);
  FUN_140859a90(param_1 + 0xa1);
  FUN_140859a90(param_1 + 0x99);
  FUN_140859a90(param_1 + 0x91);
  FUN_140859a90(param_1 + 0x89);
  FUN_140859a90(param_1 + 0x81);
  FUN_140859a90(param_1 + 0x79);
  FUN_140859a90(param_1 + 0x71);
  FUN_140859a90(param_1 + 0x69);
  FUN_140859a90(param_1 + 0x61);
  FUN_140859a90(param_1 + 0x59);
  FUN_140859a90(param_1 + 0x51);
  FUN_140859a90(param_1 + 0x49);
  FUN_140859a90(param_1 + 0x41);
  FUN_140859a90(param_1 + 0x39);
  FUN_140859a90(param_1 + 0x31);
  FUN_140859a90(param_1 + 0x29);
  FUN_140859a90(param_1 + 0x21);
  FUN_140859a90(param_1 + 0x19);
  FUN_140859a90(param_1 + 0x11);
  FUN_140859a90(param_1 + 9);
  FUN_140859a90(param_1 + 1);
  return;
}



// FUNCTION 142558e20 FUN_142558e20 body=965 status=ok
// SIG undefined FUN_142558e20(void)

undefined8 FUN_142558e20(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_dd0 [152];
  undefined **local_d38;
  undefined **local_d30;
  undefined2 local_d28;
  undefined **local_cf0;
  undefined2 local_ce8;
  undefined **local_cb0;
  undefined2 local_ca8;
  undefined **local_c70;
  undefined2 local_c68;
  undefined **local_c30;
  undefined2 local_c28;
  undefined **local_bf0;
  undefined2 local_be8;
  undefined **local_bb0;
  undefined2 local_ba8;
  undefined **local_b70;
  undefined2 local_b68;
  undefined **local_b30;
  undefined2 local_b28;
  undefined **local_af0;
  undefined2 local_ae8;
  undefined **local_ab0;
  undefined2 local_aa8;
  undefined **local_a70;
  undefined2 local_a68;
  undefined **local_a30;
  undefined2 local_a28;
  undefined **local_9f0;
  undefined2 local_9e8;
  undefined **local_9b0;
  undefined2 local_9a8;
  undefined **local_970;
  undefined2 local_968;
  undefined **local_930;
  undefined2 local_928;
  undefined **local_8f0;
  undefined2 local_8e8;
  undefined **local_8b0;
  undefined2 local_8a8;
  undefined **local_870;
  undefined2 local_868;
  undefined **local_830;
  undefined2 local_828;
  undefined **local_7f0;
  undefined2 local_7e8;
  undefined **local_7b0;
  undefined2 local_7a8;
  undefined **local_770;
  undefined2 local_768;
  undefined **local_730;
  undefined2 local_728;
  undefined **local_6f0;
  undefined2 local_6e8;
  undefined **local_6b0;
  undefined2 local_6a8;
  undefined **local_670;
  undefined2 local_668;
  undefined **local_630;
  undefined2 local_628;
  undefined **local_5f0;
  undefined2 local_5e8;
  undefined **local_5b0;
  undefined2 local_5a8;
  undefined **local_570;
  undefined2 local_568;
  undefined **local_530;
  undefined2 local_528;
  undefined **local_4f0;
  undefined2 local_4e8;
  undefined **local_4b0;
  undefined2 local_4a8;
  undefined **local_470;
  undefined2 local_468;
  undefined **local_430;
  undefined2 local_428;
  undefined **local_3f0;
  undefined2 local_3e8;
  undefined **local_3b0;
  undefined2 local_3a8;
  undefined **local_370;
  undefined2 local_368;
  undefined **local_330;
  undefined2 local_328;
  undefined **local_2f0;
  undefined2 local_2e8;
  undefined **local_2b0;
  undefined2 local_2a8;
  undefined **local_270;
  undefined2 local_268;
  undefined **local_230;
  undefined2 local_228;
  undefined **local_1f0;
  undefined2 local_1e8;
  undefined **local_1b0;
  undefined2 local_1a8;
  undefined **local_170;
  undefined2 local_168;
  undefined **local_130;
  undefined2 local_128;
  undefined **local_f0;
  undefined2 local_e8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined **local_a8 [9];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_d38 = icu_64::FormatParser::vftable;
  local_d30 = &PTR_FUN_149e18960;
  local_d28 = 2;
  local_cf0 = &PTR_FUN_149e18960;
  local_ce8 = 2;
  local_cb0 = &PTR_FUN_149e18960;
  local_ca8 = 2;
  local_c70 = &PTR_FUN_149e18960;
  local_c68 = 2;
  local_c30 = &PTR_FUN_149e18960;
  local_c28 = 2;
  local_bf0 = &PTR_FUN_149e18960;
  local_be8 = 2;
  local_bb0 = &PTR_FUN_149e18960;
  local_ba8 = 2;
  local_b70 = &PTR_FUN_149e18960;
  local_b68 = 2;
  local_b30 = &PTR_FUN_149e18960;
  local_b28 = 2;
  local_af0 = &PTR_FUN_149e18960;
  local_ae8 = 2;
  local_ab0 = &PTR_FUN_149e18960;
  local_aa8 = 2;
  local_a70 = &PTR_FUN_149e18960;
  local_a68 = 2;
  local_a30 = &PTR_FUN_149e18960;
  local_a28 = 2;
  local_9f0 = &PTR_FUN_149e18960;
  local_9e8 = 2;
  local_9b0 = &PTR_FUN_149e18960;
  local_9a8 = 2;
  local_970 = &PTR_FUN_149e18960;
  local_968 = 2;
  local_930 = &PTR_FUN_149e18960;
  local_928 = 2;
  local_8f0 = &PTR_FUN_149e18960;
  local_8e8 = 2;
  local_8b0 = &PTR_FUN_149e18960;
  local_8a8 = 2;
  local_870 = &PTR_FUN_149e18960;
  local_868 = 2;
  local_830 = &PTR_FUN_149e18960;
  local_828 = 2;
  local_7f0 = &PTR_FUN_149e18960;
  local_7e8 = 2;
  local_7b0 = &PTR_FUN_149e18960;
  local_7a8 = 2;
  local_770 = &PTR_FUN_149e18960;
  local_768 = 2;
  local_730 = &PTR_FUN_149e18960;
  local_728 = 2;
  local_6f0 = &PTR_FUN_149e18960;
  local_6e8 = 2;
  local_6b0 = &PTR_FUN_149e18960;
  local_6a8 = 2;
  local_670 = &PTR_FUN_149e18960;
  local_668 = 2;
  local_630 = &PTR_FUN_149e18960;
  local_628 = 2;
  local_5f0 = &PTR_FUN_149e18960;
  local_5e8 = 2;
  local_5b0 = &PTR_FUN_149e18960;
  local_5a8 = 2;
  local_570 = &PTR_FUN_149e18960;
  local_568 = 2;
  local_530 = &PTR_FUN_149e18960;
  local_528 = 2;
  local_4f0 = &PTR_FUN_149e18960;
  local_4e8 = 2;
  local_4b0 = &PTR_FUN_149e18960;
  local_4a8 = 2;
  local_470 = &PTR_FUN_149e18960;
  local_468 = 2;
  local_430 = &PTR_FUN_149e18960;
  local_428 = 2;
  local_3f0 = &PTR_FUN_149e18960;
  local_3e8 = 2;
  local_3b0 = &PTR_FUN_149e18960;
  local_3a8 = 2;
  local_370 = &PTR_FUN_149e18960;
  local_368 = 2;
  local_330 = &PTR_FUN_149e18960;
  local_328 = 2;
  local_2f0 = &PTR_FUN_149e18960;
  local_2e8 = 2;
  local_2b0 = &PTR_FUN_149e18960;
  local_2a8 = 2;
  local_270 = &PTR_FUN_149e18960;
  local_268 = 2;
  local_230 = &PTR_FUN_149e18960;
  local_228 = 2;
  local_1f0 = &PTR_FUN_149e18960;
  local_1e8 = 2;
  local_1b0 = &PTR_FUN_149e18960;
  local_1a8 = 2;
  local_170 = &PTR_FUN_149e18960;
  local_168 = 2;
  local_130 = &PTR_FUN_149e18960;
  local_128 = 2;
  local_f0 = &PTR_FUN_149e18960;
  local_e8 = 2;
  local_ac = 0;
  local_b0 = 0;
  local_a8[0] = icu_64::PtnSkeleton::vftable;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_142558680(local_dd0,param_2,&local_d38,local_a8);
  FUN_142558a70(local_a8,param_1);
  FUN_142558ba0(&local_d38);
  return param_1;
}



// FUNCTION 1425591f0 Unwind@1425591f0 body=35 status=ok
// SIG undefined Unwind@1425591f0(void)

void Unwind_1425591f0(undefined8 param_1,longlong param_2)

{
  FUN_142558ba0(param_2 + 0xc0);
  return;
}



// FUNCTION 142559220 FUN_142559220 body=947 status=ok
// SIG undefined FUN_142559220(void)

void FUN_142559220(longlong param_1,undefined8 param_2,int *param_3)

{
  longlong *plVar1;
  bool bVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  short *psVar6;
  longlong lVar7;
  ushort *puVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  undefined **local_160;
  undefined2 local_158;
  undefined **local_120;
  short local_118;
  int local_114;
  undefined **local_e0;
  undefined2 local_d8;
  int local_a0 [2];
  short local_98;
  short local_96;
  uint local_94;
  short *local_88;
  longlong local_60;
  int *local_58;
  int local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_160 = &PTR_FUN_149e18960;
  local_158 = 2;
  plVar1 = *(longlong **)(param_1 + 0xe8);
  local_a0[0] = 0;
  *(undefined4 *)(plVar1 + 0x191) = 0;
  iVar11 = 0;
  do {
    iVar5 = (**(code **)(*plVar1 + 8))(plVar1,param_2,iVar11,local_a0);
    if (iVar5 != 1) break;
    FUN_1424a7950(&local_e0,param_2,iVar11,local_a0[0]);
    lVar7 = plVar1[0x191];
    *(int *)(plVar1 + 0x191) = (int)lVar7 + 1;
    FUN_1424a7ca0(plVar1 + (longlong)(int)lVar7 * 8 + 1,&local_e0);
    FUN_140859a90(&local_e0);
    iVar11 = iVar11 + local_a0[0];
  } while ((int)plVar1[0x191] < 0x32);
  local_e0 = &PTR_FUN_149e18960;
  local_d8 = 2;
  iVar11 = 0;
  bVar2 = false;
  local_60 = param_1;
  local_58 = param_3;
  do {
    local_4c = iVar11;
    if (*(int *)(*(longlong *)(param_1 + 0xe8) + 0xc88) <= iVar11) {
LAB_1425595c7:
      FUN_140859a90(&local_e0);
      FUN_140859a90(&local_160);
      return;
    }
    FUN_1424a6be0(local_a0);
    lVar7 = local_60;
    if (local_98 < 0) {
      uVar9 = local_94;
      if (local_94 == 0) goto LAB_142559340;
LAB_1425593bc:
      psVar6 = &local_96;
      if (((int)local_98 & 2U) == 0) {
        psVar6 = local_88;
      }
      sVar3 = *psVar6;
      if (sVar3 != 0x27) {
        if ((int)uVar9 < 1) {
          bVar12 = true;
        }
        else {
          puVar8 = (ushort *)(*(longlong *)(param_1 + 0xe8) + 0x10);
          bVar12 = false;
          uVar10 = 1;
          do {
            if ((0x3c < (ushort)psVar6[uVar10 - 1] - 0x20) ||
               ((0x1000000004003085U >> ((ulonglong)((ushort)psVar6[uVar10 - 1] - 0x20) & 0x3f) & 1)
                == 0)) {
              uVar4 = *puVar8;
              if ((short)uVar4 < 0) {
                if (*(int *)(puVar8 + 2) == 0) break;
              }
              else if ((short)uVar4 >> 5 == 0) break;
              if ((uVar4 & 2) == 0) {
                uVar4 = **(ushort **)(puVar8 + 8);
              }
              else {
                uVar4 = puVar8[1];
              }
              if (uVar4 != 0x2e) break;
            }
            bVar12 = uVar9 <= uVar10;
            puVar8 = puVar8 + 0x20;
            bVar13 = uVar10 != uVar9;
            uVar10 = uVar10 + 1;
          } while (bVar13);
        }
        param_1 = local_60;
        if ((!bVar2) || (!bVar12)) {
          if (sVar3 == 0x6d) {
            bVar2 = true;
            FUN_1424a9690(&local_e0,local_a0,0);
            goto LAB_14255935a;
          }
          if (sVar3 != 0x73) {
            if (bVar2) goto LAB_1425595be;
            goto LAB_142559505;
          }
          if (bVar2) {
            FUN_1424a9690(&local_e0,local_a0,0);
            if (*(int *)(lVar7 + 0x11f8) < 1) {
              FUN_14255b730(lVar7,&local_e0,0,0,&local_160,local_58);
            }
            else {
              *local_58 = *(int *)(lVar7 + 0x11f8);
            }
          }
          goto LAB_1425595be;
        }
        goto LAB_142559349;
      }
      lVar7 = param_1;
      if (bVar2) {
        local_120 = &PTR_FUN_149e18960;
        local_118 = 2;
        FUN_1425596f0(*(undefined8 *)(param_1 + 0xe8),&local_120);
        iVar11 = local_114;
        if (-1 < local_118) {
          iVar11 = (int)local_118 >> 5;
        }
        FUN_1424a9690(&local_e0,&local_120,0,iVar11);
        FUN_140859a90(&local_120);
        bVar2 = true;
        iVar11 = local_4c;
      }
      else {
        bVar2 = false;
      }
    }
    else {
      uVar9 = (int)local_98 >> 5;
      if (uVar9 != 0) goto LAB_1425593bc;
LAB_142559340:
      if (bVar2) {
LAB_142559349:
        FUN_1424a9690(&local_e0,local_a0);
        lVar7 = param_1;
        bVar2 = true;
      }
      else {
        sVar3 = -1;
LAB_142559505:
        uVar4 = (sVar3 - 0x56U) * 0x4000 | (ushort)(sVar3 - 0x56U) >> 2;
        lVar7 = param_1;
        bVar2 = false;
        if ((uVar4 < 10) && (bVar2 = false, (0x303U >> (uVar4 & 0x1f) & 1) != 0)) {
LAB_1425595be:
          FUN_140859a90(local_a0);
          goto LAB_1425595c7;
        }
      }
    }
LAB_14255935a:
    FUN_140859a90(local_a0);
    iVar11 = iVar11 + 1;
    param_1 = lVar7;
  } while( true );
}



// FUNCTION 1425595f0 Unwind@1425595f0 body=55 status=ok
// SIG undefined Unwind@1425595f0(void)

void Unwind_1425595f0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x78);
  return;
}



// FUNCTION 142559630 Unwind@142559630 body=55 status=ok
// SIG undefined Unwind@142559630(void)

void Unwind_142559630(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xf8);
  return;
}



// FUNCTION 142559670 Unwind@142559670 body=55 status=ok
// SIG undefined Unwind@142559670(void)

void Unwind_142559670(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xb8);
  return;
}



// FUNCTION 1425596b0 Unwind@1425596b0 body=55 status=ok
// SIG undefined Unwind@1425596b0(void)

void Unwind_1425596b0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x38);
  return;
}



// FUNCTION 1425596f0 FUN_1425596f0 body=416 status=ok
// SIG undefined FUN_1425596f0(void)

void FUN_1425596f0(longlong param_1,longlong param_2,int *param_3)

{
  short sVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *param_3;
  uVar2 = 2;
  if ((*(ushort *)(param_2 + 8) & 1) == 0) {
    uVar2 = *(ushort *)(param_2 + 8) & 0x1f;
  }
  *(ushort *)(param_2 + 8) = uVar2;
  lVar3 = (longlong)iVar6 * 0x40;
  uVar2 = *(ushort *)(param_1 + 0x10 + lVar3);
  if ((short)uVar2 < 0) {
    if (*(int *)(param_1 + 0x14 + lVar3) == 0) goto LAB_14255977d;
  }
  else if ((short)uVar2 >> 5 == 0) goto LAB_14255977d;
  lVar4 = param_1 + lVar3 + 8;
  if ((uVar2 & 2) == 0) {
    sVar1 = **(short **)(param_1 + 0x20 + lVar3);
  }
  else {
    sVar1 = *(short *)(param_1 + lVar3 + 0x12);
  }
  if (sVar1 == 0x27) goto LAB_14255976f;
LAB_14255977d:
  do {
    if (*(int *)(param_1 + 0xc88) <= iVar6) {
LAB_142559890:
      *param_3 = iVar6;
      return;
    }
    lVar3 = (longlong)iVar6 * 0x40;
    sVar1 = *(short *)(param_1 + 0x10 + lVar3);
    if (sVar1 < 0) {
      iVar5 = *(int *)(param_1 + 0x14 + lVar3);
    }
    else {
      iVar5 = (int)sVar1 >> 5;
    }
    lVar4 = param_1 + lVar3 + 8;
    if (iVar5 == 0) {
LAB_14255976f:
      FUN_1424a9690(param_2,lVar4,0);
      iVar6 = iVar6 + 1;
      goto LAB_14255977d;
    }
    if (((int)sVar1 & 2U) == 0) {
      sVar1 = **(short **)(param_1 + 0x20 + lVar3);
    }
    else {
      sVar1 = *(short *)(param_1 + lVar3 + 0x12);
    }
    if (sVar1 != 0x27) goto LAB_14255976f;
    if (*(int *)(param_1 + 0xc88) <= iVar6 + 1) {
LAB_142559885:
      FUN_1424a9690(param_2,lVar4,0);
      goto LAB_142559890;
    }
    lVar3 = (longlong)(iVar6 + 1) * 0x40;
    uVar2 = *(ushort *)(param_1 + 0x10 + lVar3);
    if (-1 < (short)uVar2) {
      if ((short)uVar2 >> 5 != 0) goto LAB_14255981c;
      goto LAB_142559885;
    }
    if (*(int *)(param_1 + 0x14 + lVar3) == 0) goto LAB_142559885;
LAB_14255981c:
    if ((uVar2 & 2) == 0) {
      sVar1 = **(short **)(param_1 + 0x20 + lVar3);
    }
    else {
      sVar1 = *(short *)(param_1 + lVar3 + 0x12);
    }
    if (sVar1 != 0x27) goto LAB_142559885;
    FUN_1424a9690(param_2,lVar4,0);
    sVar1 = *(short *)(param_1 + lVar3 + 0x10);
    if (sVar1 < 0) {
      iVar5 = *(int *)(param_1 + lVar3 + 0x14);
    }
    else {
      iVar5 = (int)sVar1 >> 5;
    }
    iVar6 = iVar6 + 2;
    FUN_1424a9690(param_2,param_1 + lVar3 + 8,0,iVar5);
  } while( true );
}



// FUNCTION 1425598b0 FUN_1425598b0 body=263 status=ok
// SIG undefined FUN_1425598b0(void)

void FUN_1425598b0(undefined8 param_1,longlong param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  undefined1 auStack_1d8 [32];
  int *local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 local_1a0;
  int *local_198;
  undefined1 local_188 [96];
  undefined1 local_128 [257];
  undefined1 local_27;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  *(undefined4 *)(param_3 + 7) = 0;
  *(undefined1 *)*param_3 = 0;
  FUN_142503520(param_3,"gregorian",0xffffffff);
  if (*param_4 < 1) {
    local_1b0 = *(undefined8 *)(param_2 + 0x28);
    local_1b8 = (int *)0x14993aa78;
    local_1a0 = 0;
    local_1a8 = 0;
    local_198 = param_4;
    FUN_1424edce0(local_128,0x102,0);
    if (*param_4 < 1) {
      local_27 = 0;
      local_1b8 = param_4;
      iVar1 = FUN_1424e74e0(local_128,"calendar",local_188,0x60);
      if (*param_4 < 1) {
        if (iVar1 < 0x60) {
          *(undefined4 *)(param_3 + 7) = 0;
          *(undefined1 *)*param_3 = 0;
          FUN_142503520(param_3,local_188,0xffffffff,param_4);
          if (0 < *param_4) goto LAB_1425599a7;
        }
        *param_4 = 0;
      }
    }
  }
LAB_1425599a7:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_1d8);
}



// FUNCTION 1425599d0 FUN_1425599d0 body=137 status=ok
// SIG undefined FUN_1425599d0(void)

void FUN_1425599d0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 local_70 [64];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_1424a7060(local_70,1,&DAT_1499e1480,0xe);
  lVar2 = -0x400;
  do {
    if (*(ushort *)(*(longlong *)(param_1 + 8) + 0x510 + lVar2) < 0x20) {
      lVar1 = *(longlong *)(param_1 + 8) + lVar2 + 0x508;
      FUN_1424a7c80(lVar1,local_70);
      FUN_1424a8e50(lVar1);
    }
    lVar2 = lVar2 + 0x40;
  } while (lVar2 != 0);
  FUN_140859a90(local_70);
  return;
}



// FUNCTION 142559a60 Unwind@142559a60 body=40 status=ok
// SIG undefined Unwind@142559a60(void)

void Unwind_142559a60(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 142559a90 FUN_142559a90 body=425 status=ok
// SIG undefined FUN_142559a90(void)

void FUN_142559a90(longlong param_1)

{
  ushort uVar1;
  short sVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  short local_70 [32];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar5 = 0;
  uVar6 = 0;
  do {
    lVar3 = *(longlong *)(param_1 + 8);
    if (*(ushort *)(lVar3 + 0x510 + lVar5) < 0x20) {
      local_70[0] = 0x46;
      sVar2 = *(short *)(lVar3 + 0x510 + lVar5);
      if (sVar2 < 0) {
        iVar4 = *(int *)(lVar3 + 0x514 + lVar5);
      }
      else {
        iVar4 = (int)sVar2 >> 5;
      }
      lVar3 = lVar3 + lVar5 + 0x508;
      local_80 = 1;
      local_88 = 0;
      FUN_1424a9130(lVar3,0,iVar4,local_70);
      if (uVar6 < 10) {
        local_70[0] = (short)uVar6 + 0x30;
      }
      else {
        local_70[0] = 0x31;
        FUN_1424a6cf0(lVar3,local_70,0,1);
        local_70[0] = (short)uVar6 + 0x26;
      }
      FUN_1424a6cf0(lVar3,local_70,0,1);
      FUN_1424a8e50(lVar3);
      lVar3 = *(longlong *)(param_1 + 8);
      if (*(ushort *)(lVar3 + 0x550 + lVar5) < 0x20) goto LAB_142559bc4;
LAB_142559af7:
      uVar1 = *(ushort *)(lVar3 + 0x590 + lVar5);
    }
    else {
      if (0x1f < *(ushort *)(lVar3 + 0x550 + lVar5)) goto LAB_142559af7;
LAB_142559bc4:
      FUN_1424a6be0(local_70,lVar3 + lVar5 + 0x508);
      FUN_1424a7ca0(lVar3 + lVar5 + 0x548);
      FUN_140859a90(local_70);
      lVar3 = *(longlong *)(param_1 + 8);
      uVar1 = *(ushort *)(lVar3 + 0x590 + lVar5);
    }
    if (uVar1 < 0x20) {
      FUN_1424a6be0(local_70,lVar3 + lVar5 + 0x548);
      FUN_1424a7ca0(lVar3 + lVar5 + 0x588);
      FUN_140859a90(local_70);
    }
    uVar6 = uVar6 + 1;
    lVar5 = lVar5 + 0xc0;
    if (lVar5 == 0xc00) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
    }
  } while( true );
}



// FUNCTION 142559c60 FUN_142559c60 body=197 status=ok
// SIG undefined FUN_142559c60(void)

void FUN_142559c60(longlong param_1,int *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if ((*param_2 < 1) && (*(longlong *)(param_1 + 0x1190) == 0)) {
    plVar1 = (longlong *)thunk_FUN_1424da030(0x58);
    if (plVar1 != (longlong *)0x0) {
      *plVar1 = 0;
      if (*param_2 < 1) {
        plVar2 = plVar1 + 1;
        FUN_142502140(plVar2,FUN_1424a9c90,FUN_1424a9cd0,0,param_2);
        if (*param_2 < 1) {
          *plVar1 = (longlong)plVar2;
          FUN_142502340(plVar2,&LAB_1424b70f0);
          if (*param_2 < 1) {
            *(longlong **)(param_1 + 0x1190) = plVar1;
            return;
          }
        }
        if (*plVar1 != 0) {
          FUN_142502220();
        }
      }
      FUN_1401773f0(plVar1);
      return;
    }
    if (*param_2 < 1) {
      *param_2 = 7;
    }
  }
  return;
}



// FUNCTION 142559d30 FUN_142559d30 body=30 status=ok
// SIG undefined FUN_142559d30(void)

undefined8 FUN_142559d30(undefined8 param_1,undefined8 param_2)

{
  FUN_142559d50();
  return param_2;
}



// FUNCTION 142559d50 FUN_142559d50 body=906 status=ok
// SIG undefined FUN_142559d50(void)

undefined8 *
FUN_142559d50(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
             int *param_5)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  ushort uVar5;
  int iVar6;
  undefined ***pppuVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined1 local_228 [64];
  undefined1 local_1e8 [64];
  undefined **local_1a8;
  undefined2 local_1a0;
  undefined **local_168;
  short local_160;
  int local_15c;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined **local_d8;
  short local_d0;
  int local_cc;
  undefined **local_98;
  ushort local_90;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 uVar10;
  
  local_48 = 0xfffffffffffffffe;
  if (0 < *param_5) {
LAB_142559d98:
    *param_2 = &PTR_FUN_149e18960;
    *(undefined2 *)(param_2 + 1) = 2;
    return param_2;
  }
  if (0 < *(int *)(param_1 + 0x11f8)) {
    *param_5 = *(int *)(param_1 + 0x11f8);
    goto LAB_142559d98;
  }
  local_1a8 = &PTR_FUN_149e18960;
  local_1a0 = 2;
  local_98 = &PTR_FUN_149e18960;
  local_90 = 2;
  local_4c = 0;
  FUN_14255a230(param_1,local_228,param_3,&local_4c,param_5);
  if (*param_5 < 1) {
    local_90 = 2;
    local_168 = icu_64::PtnSkeleton::vftable;
    local_120 = 0;
    uStack_118 = 0;
    local_110 = 0;
    uStack_108 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    FUN_142558680(*(undefined8 *)(param_1 + 0xf0),local_228,*(undefined8 *)(param_1 + 0xe8),
                  &local_168);
    local_58 = 0;
    puVar9 = &local_58;
    uVar4 = FUN_14255a5b0(param_1,*(undefined8 *)(param_1 + 0xf0),0xffffffff,
                          *(undefined8 *)(param_1 + 0xf8),param_5,puVar9);
    uVar10 = (undefined4)((ulonglong)puVar9 >> 0x20);
    if (*param_5 < 1) {
      if ((*(int *)(*(longlong *)(param_1 + 0xf8) + 8) == 0) &&
         (*(int *)(*(longlong *)(param_1 + 0xf8) + 0xc) == 0)) {
        FUN_14255aa10(param_1,&local_168,uVar4,local_58,local_4c,CONCAT44(uVar10,param_4));
        FUN_1424a7ca0(&local_98,&local_168);
        FUN_140859a90(&local_168);
        FUN_1424a77e0(param_2,&local_98);
        goto LAB_142559ea6;
      }
      uVar3 = FUN_14255b0e0(*(undefined8 *)(param_1 + 0xf0));
      uVar2 = local_4c;
      FUN_14255b190(param_1,&local_168,uVar3 & 0x3ff,local_4c,param_5,CONCAT44(uVar10,param_4));
      FUN_14255b190(param_1,&local_d8,uVar3 & 0xfc00,uVar2,param_5,param_4);
      if (*param_5 < 1) {
        if (-1 < local_160) {
          local_15c = (int)local_160 >> 5;
        }
        if (local_15c == 0) {
          iVar6 = (int)local_d0 >> 5;
          iVar8 = iVar6;
          if (local_d0 < 0) {
            iVar8 = local_cc;
          }
          if (iVar8 == 0) {
            uVar5 = local_90 & 0x1f;
            uVar1 = local_90 & 1;
            local_90 = 2;
            if (uVar1 == 0) {
              local_90 = uVar5;
            }
            goto LAB_142559f7e;
          }
          pppuVar7 = &local_d8;
        }
        else {
          iVar6 = (int)local_d0 >> 5;
LAB_142559f7e:
          if (local_d0 < 0) {
            iVar6 = local_cc;
          }
          if (iVar6 == 0) {
            pppuVar7 = &local_168;
          }
          else {
            uVar5 = local_90 & 0x1f;
            uVar1 = local_90 & 1;
            local_90 = 2;
            if (uVar1 == 0) {
              local_90 = uVar5;
            }
            *param_5 = 0;
            FUN_1424a7c80(&local_1a8,param_1 + 0x1108);
            FUN_14254e7e0(local_1e8,&local_1a8,2,2,param_5);
            FUN_1425fba70(local_1e8,&local_d8,&local_168,&local_98,param_5);
            thunk_FUN_140859a90(local_1e8);
            pppuVar7 = &local_98;
          }
        }
        FUN_1424a77e0(param_2,pppuVar7);
      }
      else {
        *param_2 = &PTR_FUN_149e18960;
        *(undefined2 *)(param_2 + 1) = 2;
      }
      FUN_140859a90(&local_d8);
      FUN_140859a90(&local_168);
      goto LAB_142559ea6;
    }
  }
  *param_2 = &PTR_FUN_149e18960;
  *(undefined2 *)(param_2 + 1) = 2;
LAB_142559ea6:
  FUN_140859a90(local_228);
  FUN_140859a90(&local_98);
  FUN_140859a90(&local_1a8);
  return param_2;
}



// FUNCTION 14255a0e0 Unwind@14255a0e0 body=55 status=ok
// SIG undefined Unwind@14255a0e0(void)

void Unwind_14255a0e0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_140859a90(param_2 + 0x70);
  return;
}



// FUNCTION 14255a120 Unwind@14255a120 body=58 status=ok
// SIG undefined Unwind@14255a120(void)

void Unwind_14255a120(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x180);
  return;
}



// FUNCTION 14255a160 Unwind@14255a160 body=55 status=ok
// SIG undefined Unwind@14255a160(void)

void Unwind_14255a160(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xf0);
  return;
}



// FUNCTION 14255a1a0 Unwind@14255a1a0 body=55 status=ok
// SIG undefined Unwind@14255a1a0(void)

void Unwind_14255a1a0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 14255a1e0 Unwind@14255a1e0 body=67 status=ok
// SIG undefined Unwind@14255a1e0(void)

void Unwind_14255a1e0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x1c0);
  FUN_140859a90(param_2 + 0xb0);
  return;
}



// FUNCTION 14255a230 FUN_14255a230 body=800 status=ok
// SIG undefined FUN_14255a230(void)

undefined8 *
FUN_14255a230(longlong param_1,undefined8 *param_2,longlong param_3,byte *param_4,
             undefined4 *param_5)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  short sVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  undefined **local_c8;
  undefined2 local_c0;
  byte *local_88;
  ulonglong local_80;
  longlong local_78;
  undefined8 *local_70;
  longlong local_68;
  ulonglong local_60;
  longlong local_58;
  uint local_50;
  short local_4a [5];
  
  local_4a[1] = -2;
  local_4a[2] = -1;
  local_4a[3] = -1;
  local_4a[4] = -1;
  local_c8 = &PTR_FUN_149e18960;
  local_c0 = 2;
  if (*(short *)(param_3 + 8) < 0) {
    uVar7 = *(uint *)(param_3 + 0xc);
  }
  else {
    uVar7 = (int)*(short *)(param_3 + 8) >> 5;
  }
  local_88 = param_4;
  local_78 = param_1;
  local_70 = param_2;
  if (0 < (int)uVar7) {
    uVar14 = (ulonglong)uVar7;
    lVar11 = param_3 + 10;
    local_50 = uVar7 - 1;
    bVar2 = false;
    uVar7 = 0;
    local_80 = uVar14;
    local_68 = param_3;
    local_60 = uVar14;
    local_58 = lVar11;
    do {
      uVar1 = *(ushort *)(param_3 + 8);
      if ((short)uVar1 < 0) {
        uVar5 = *(uint *)(param_3 + 0xc);
      }
      else {
        uVar5 = (int)(short)uVar1 >> 5;
      }
      sVar4 = -1;
      if (uVar7 < uVar5) {
        lVar12 = lVar11;
        if ((uVar1 & 2) == 0) {
          lVar12 = *(longlong *)(param_3 + 0x18);
        }
        sVar4 = *(short *)(lVar12 + (longlong)(int)uVar7 * 2);
        if (sVar4 != 0x27) goto LAB_14255a327;
        bVar2 = !bVar2;
      }
      else {
LAB_14255a327:
        bVar3 = !bVar2;
        bVar2 = true;
        if (bVar3) {
          if (sVar4 == 0x6a) {
LAB_14255a349:
            iVar13 = uVar7 + 1;
            iVar15 = 1;
            if (iVar13 < (int)uVar14) {
              if ((uVar1 & 2) == 0) {
                lVar11 = *(longlong *)(param_3 + 0x18);
              }
              uVar6 = local_50 - uVar7;
              lVar12 = 0;
              uVar8 = uVar7;
              do {
                sVar10 = -1;
                if (uVar8 + 1 < uVar5) {
                  sVar10 = *(short *)(lVar11 + (longlong)iVar13 * 2 + lVar12 * 2);
                }
                if (sVar10 != sVar4) {
                  uVar6 = (uint)lVar12;
                  uVar7 = uVar8;
                  break;
                }
                lVar12 = lVar12 + 1;
                uVar8 = uVar8 + 1;
                uVar7 = local_50;
              } while (local_80 - (longlong)iVar13 != lVar12);
              iVar15 = (uVar6 & 1) + 1;
              iVar13 = (uVar6 >> 1) + 3;
              if (uVar6 < 2) {
                iVar13 = 1;
              }
              if (sVar4 == 0x6a) goto LAB_14255a44e;
LAB_14255a3fb:
              uVar5 = *(uint *)(local_78 + 0x11dc);
              switch(uVar5) {
              default:
                sVar4 = 0x68;
                break;
              case 1:
              case 8:
              case 9:
                sVar4 = 0x48;
                break;
              case 2:
              case 6:
              case 7:
                sVar4 = 0x4b;
                break;
              case 3:
                sVar4 = 0x6b;
                goto LAB_14255a45a;
              case 0xffffffff:
                *param_5 = 3;
                *local_70 = &PTR_FUN_149e18960;
                *(undefined2 *)(local_70 + 1) = 2;
                puVar9 = local_70;
                goto LAB_14255a52c;
              }
              if (9 < uVar5) goto LAB_14255a45a;
              if ((0x150U >> (uVar5 & 0x1f) & 1) != 0) {
                sVar10 = 0x62;
                goto joined_r0x00014255a50e;
              }
              sVar10 = 0x42;
              if ((0x2a0U >> (uVar5 & 0x1f) & 1) == 0) goto LAB_14255a45a;
              if (sVar4 != 0x6b) goto LAB_14255a49c;
LAB_14255a4a5:
              iVar13 = 0;
            }
            else {
              iVar13 = 1;
              if (sVar4 != 0x6a) goto LAB_14255a3fb;
LAB_14255a44e:
              sVar4 = *(short *)(local_78 + 0x11d8);
LAB_14255a45a:
              sVar10 = 0x61;
joined_r0x00014255a50e:
              if (sVar4 == 0x6b) goto LAB_14255a4a5;
LAB_14255a49c:
              if (sVar4 == 0x48) goto LAB_14255a4a5;
            }
            for (; 0 < iVar13; iVar13 = iVar13 + -1) {
              local_4a[0] = sVar10;
              FUN_1424a6cf0(&local_c8,local_4a,0);
            }
            for (; 0 < iVar15; iVar15 = iVar15 + -1) {
              local_4a[0] = sVar4;
              FUN_1424a6cf0(&local_c8,local_4a,0);
            }
          }
          else if (sVar4 == 0x4a) {
            local_4a[0] = 0x48;
            FUN_1424a6cf0(&local_c8,local_4a,0);
            *local_88 = *local_88 | 2;
          }
          else {
            if (sVar4 == 0x43) goto LAB_14255a349;
            local_4a[0] = sVar4;
            FUN_1424a6cf0(&local_c8,local_4a,0);
          }
          bVar2 = false;
          lVar11 = local_58;
          param_3 = local_68;
          uVar14 = local_60;
        }
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)uVar14);
  }
  puVar9 = local_70;
  FUN_1424a77e0(local_70,&local_c8);
LAB_14255a52c:
  FUN_140859a90(&local_c8);
  return puVar9;
}



// FUNCTION 14255a570 Unwind@14255a570 body=55 status=ok
// SIG undefined Unwind@14255a570(void)

void Unwind_14255a570(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 14255a5b0 FUN_14255a5b0 body=1098 status=ok
// SIG undefined FUN_14255a5b0(void)

longlong FUN_14255a5b0(longlong param_1,longlong param_2,uint param_3,longlong param_4,int *param_5,
                      undefined8 *param_6)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  longlong lVar22;
  bool bVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  longlong local_148;
  undefined8 local_130;
  longlong local_128;
  longlong local_120;
  undefined1 (*local_118) [16];
  undefined8 *local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  longlong local_f8;
  undefined **local_f0;
  undefined **local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70 [16];
  
  local_130 = 0;
  if (*param_5 < 1) {
    puVar11 = (undefined8 *)thunk_FUN_1424da030(0x98);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = icu_64::DateTimeMatcher::vftable;
      puVar11[1] = icu_64::PtnSkeleton::vftable;
      *(undefined1 (*) [16])(puVar11 + 10) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar11 + 0xc) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar11 + 0xe) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar11 + 0x10) = (undefined1  [16])0x0;
      if (0 < *param_5) {
        FUN_1401773f0();
        puVar11 = (undefined8 *)0x0;
        if (0 < *param_5) {
          return 0;
        }
      }
      lVar12 = *(longlong *)(param_1 + 0x100);
      iVar21 = 0;
      if (lVar12 == 0) {
        local_148 = 0;
      }
      else {
        puVar1 = puVar11 + 2;
        local_100 = puVar11 + 10;
        local_108 = puVar11 + 0xc;
        local_110 = puVar11 + 0xe;
        local_118 = (undefined1 (*) [16])(puVar11 + 0x10);
        local_128 = lVar12 + 0x10;
        iVar10 = 0x7fffffff;
        local_148 = 0;
        lVar22 = 0;
        local_120 = param_4;
        local_f8 = lVar12;
        do {
          lVar12 = (longlong)iVar21;
          if (lVar22 == 0) {
            lVar15 = *(longlong *)(local_f8 + 8 + lVar12 * 8);
          }
          else {
            lVar15 = *(longlong *)(lVar22 + 0x98);
          }
          if (lVar15 == 0) {
            if (iVar21 == 0x33) break;
            lVar15 = lVar12 + 2;
            while (*(longlong *)(local_f8 + lVar15 * 8) == 0) {
              iVar17 = (int)lVar15;
              lVar15 = lVar15 + 1;
              if (iVar17 == 0x34) goto LAB_14255a9a6;
            }
          }
          iVar17 = 0x33;
          if (0x33 < iVar21) {
            iVar17 = iVar21;
          }
          if (lVar22 == 0) {
            lVar22 = *(longlong *)(local_f8 + 8 + lVar12 * 8);
            if (lVar22 == 0) goto LAB_14255a7bb;
LAB_14255a774:
            lVar12 = *(longlong *)(lVar22 + 0x48);
            uVar3 = *(undefined8 *)(lVar12 + 8);
            uVar4 = *(undefined8 *)(lVar12 + 0x10);
            uVar5 = *(undefined8 *)(lVar12 + 0x18);
            uVar6 = *(undefined8 *)(lVar12 + 0x20);
            uVar7 = *(undefined8 *)(lVar12 + 0x28);
            uVar8 = *(undefined8 *)(lVar12 + 0x30);
            uVar9 = *(undefined8 *)(lVar12 + 0x40);
            puVar11[8] = *(undefined8 *)(lVar12 + 0x38);
            puVar11[9] = uVar9;
            puVar11[6] = uVar7;
            puVar11[7] = uVar8;
            puVar11[4] = uVar5;
            puVar11[5] = uVar6;
            *puVar1 = uVar3;
            puVar11[3] = uVar4;
            uVar3 = *(undefined8 *)(lVar12 + 0x50);
            *local_100 = *(undefined8 *)(lVar12 + 0x48);
            local_100[1] = uVar3;
            uVar3 = *(undefined8 *)(lVar12 + 0x60);
            *local_108 = *(undefined8 *)(lVar12 + 0x58);
            local_108[1] = uVar3;
            uVar3 = *(undefined8 *)(lVar12 + 0x70);
            *local_110 = *(undefined8 *)(lVar12 + 0x68);
            local_110[1] = uVar3;
            uVar3 = *(undefined8 *)(lVar12 + 0x80);
            *(undefined8 *)*local_118 = *(undefined8 *)(lVar12 + 0x78);
            *(undefined8 *)(*local_118 + 8) = uVar3;
          }
          else {
            lVar22 = *(longlong *)(lVar22 + 0x98);
            if (lVar22 != 0) goto LAB_14255a774;
LAB_14255a7bb:
            iVar21 = iVar21 + 1;
            if (iVar17 + 1 != iVar21) {
              plVar13 = (longlong *)(local_128 + lVar12 * 8);
              do {
                lVar22 = *plVar13;
                if (lVar22 != 0) goto LAB_14255a774;
                plVar13 = plVar13 + 1;
                iVar18 = iVar21 + 1;
                bVar23 = iVar21 != iVar17;
                iVar21 = iVar18;
              } while (bVar23);
            }
            puVar11[0x10] = 0;
            puVar11[0x11] = 0;
            puVar11[0xe] = 0;
            puVar11[0xf] = 0;
            puVar11[0xc] = 0;
            puVar11[0xd] = 0;
            puVar11[10] = 0;
            puVar11[0xb] = 0;
            puVar11[8] = 0;
            puVar11[9] = 0;
            puVar11[6] = 0;
            puVar11[7] = 0;
            puVar11[4] = 0;
            puVar11[5] = 0;
            *puVar1 = 0;
            puVar11[3] = 0;
            lVar22 = 0;
          }
          local_f0 = icu_64::DateTimeMatcher::vftable;
          local_e8 = icu_64::PtnSkeleton::vftable;
          local_b0 = *(undefined4 *)(puVar11 + 8);
          uStack_ac = *(undefined4 *)((longlong)puVar11 + 0x44);
          uStack_a8 = *(undefined4 *)(puVar11 + 9);
          uStack_a4 = *(undefined4 *)((longlong)puVar11 + 0x4c);
          local_c0 = *(undefined4 *)(puVar11 + 6);
          uStack_bc = *(undefined4 *)((longlong)puVar11 + 0x34);
          uStack_b8 = *(undefined4 *)(puVar11 + 7);
          uStack_b4 = *(undefined4 *)((longlong)puVar11 + 0x3c);
          local_d0 = puVar11[4];
          uStack_c8 = puVar11[5];
          local_e0 = *puVar1;
          uStack_d8 = puVar11[3];
          local_a0 = *local_100;
          uStack_98 = local_100[1];
          local_90 = *local_108;
          uStack_88 = local_108[1];
          local_80 = *local_110;
          uStack_78 = local_110[1];
          local_70 = *local_118;
          lVar12 = *(longlong *)(param_1 + 0x1188);
          if (((lVar12 == 0) ||
              (auVar24[0] = -(*(char *)(lVar12 + 0x50) == (char)local_a0),
              auVar24[1] = -(*(char *)(lVar12 + 0x51) == (char)((ulonglong)local_a0 >> 8)),
              auVar24[2] = -(*(char *)(lVar12 + 0x52) == (char)((ulonglong)local_a0 >> 0x10)),
              auVar24[3] = -(*(char *)(lVar12 + 0x53) == (char)((ulonglong)local_a0 >> 0x18)),
              auVar24[4] = -(*(char *)(lVar12 + 0x54) == (char)((ulonglong)local_a0 >> 0x20)),
              auVar24[5] = -(*(char *)(lVar12 + 0x55) == (char)((ulonglong)local_a0 >> 0x28)),
              auVar24[6] = -(*(char *)(lVar12 + 0x56) == (char)((ulonglong)local_a0 >> 0x30)),
              auVar24[7] = -(*(char *)(lVar12 + 0x57) == (char)((ulonglong)local_a0 >> 0x38)),
              auVar24[8] = -(*(char *)(lVar12 + 0x58) == (char)uStack_98),
              auVar24[9] = -(*(char *)(lVar12 + 0x59) == (char)((ulonglong)uStack_98 >> 8)),
              auVar24[10] = -(*(char *)(lVar12 + 0x5a) == (char)((ulonglong)uStack_98 >> 0x10)),
              auVar24[0xb] = -(*(char *)(lVar12 + 0x5b) == (char)((ulonglong)uStack_98 >> 0x18)),
              auVar24[0xc] = -(*(char *)(lVar12 + 0x5c) == (char)((ulonglong)uStack_98 >> 0x20)),
              auVar24[0xd] = -(*(char *)(lVar12 + 0x5d) == (char)((ulonglong)uStack_98 >> 0x28)),
              auVar24[0xe] = -(*(char *)(lVar12 + 0x5e) == (char)((ulonglong)uStack_98 >> 0x30)),
              auVar24[0xf] = -(*(char *)(lVar12 + 0x5f) == (char)((ulonglong)uStack_98 >> 0x38)),
              (ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar24[0xf] >> 7) << 0xf) != 0xffff)) ||
             (auVar25[0] = -(*(char *)(lVar12 + 0x60) == (char)local_90),
             auVar25[1] = -(*(char *)(lVar12 + 0x61) == (char)((ulonglong)local_90 >> 8)),
             auVar25[2] = -(*(char *)(lVar12 + 0x62) == (char)((ulonglong)local_90 >> 0x10)),
             auVar25[3] = -(*(char *)(lVar12 + 99) == (char)((ulonglong)local_90 >> 0x18)),
             auVar25[4] = -(*(char *)(lVar12 + 100) == (char)((ulonglong)local_90 >> 0x20)),
             auVar25[5] = -(*(char *)(lVar12 + 0x65) == (char)((ulonglong)local_90 >> 0x28)),
             auVar25[6] = -(*(char *)(lVar12 + 0x66) == (char)((ulonglong)local_90 >> 0x30)),
             auVar25[7] = -(*(char *)(lVar12 + 0x67) == (char)((ulonglong)local_90 >> 0x38)),
             auVar25[8] = -(*(char *)(lVar12 + 0x68) == (char)uStack_88),
             auVar25[9] = -(*(char *)(lVar12 + 0x69) == (char)((ulonglong)uStack_88 >> 8)),
             auVar25[10] = -(*(char *)(lVar12 + 0x6a) == (char)((ulonglong)uStack_88 >> 0x10)),
             auVar25[0xb] = -(*(char *)(lVar12 + 0x6b) == (char)((ulonglong)uStack_88 >> 0x18)),
             auVar25[0xc] = -(*(char *)(lVar12 + 0x6c) == (char)((ulonglong)uStack_88 >> 0x20)),
             auVar25[0xd] = -(*(char *)(lVar12 + 0x6d) == (char)((ulonglong)uStack_88 >> 0x28)),
             auVar25[0xe] = -(*(char *)(lVar12 + 0x6e) == (char)((ulonglong)uStack_88 >> 0x30)),
             auVar25[0xf] = -(*(char *)(lVar12 + 0x6f) == (char)((ulonglong)uStack_88 >> 0x38)),
             (ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar25[0xf] >> 7) << 0xf) != 0xffff)) {
            uVar20 = 0;
            uVar16 = 0;
            lVar12 = 0;
            iVar17 = 0;
            do {
              uVar14 = 1 << ((byte)lVar12 & 0x1f);
              if ((param_3 >> ((uint)lVar12 & 0x1f) & 1) == 0) {
                if (*(int *)((longlong)&local_e0 + lVar12 * 4) != 0) {
LAB_14255a8fa:
                  iVar17 = iVar17 + 0x10000;
                  uVar16 = uVar16 | uVar14;
                }
              }
              else {
                iVar18 = *(int *)(param_2 + 0x10 + lVar12 * 4);
                iVar2 = *(int *)((longlong)&local_e0 + lVar12 * 4);
                iVar19 = iVar18 - iVar2;
                if (iVar19 != 0) {
                  if (iVar18 == 0) goto LAB_14255a8fa;
                  if (iVar2 == 0) {
                    iVar17 = iVar17 + 0x1000;
                    uVar20 = uVar20 | uVar14;
                  }
                  else {
                    iVar18 = -iVar19;
                    if (-iVar19 < 0) {
                      iVar18 = iVar19;
                    }
                    iVar17 = iVar17 + iVar18;
                  }
                }
              }
              lVar12 = lVar12 + 1;
            } while (lVar12 != 0x10);
            if (iVar17 < iVar10) {
              local_148 = FUN_14255bbc0(*(undefined8 *)(param_1 + 0x100),&local_e8,&local_130);
              *(uint *)(local_120 + 8) = uVar20;
              *(uint *)(local_120 + 0xc) = uVar16;
              iVar10 = iVar17;
              if (iVar17 == 0) break;
            }
          }
        } while (iVar21 < 0x34);
LAB_14255a9a6:
        if ((param_6 != (undefined8 *)0x0) && (local_148 != 0)) {
          *param_6 = local_130;
        }
      }
      if (puVar11 == (undefined8 *)0x0) {
        return local_148;
      }
      (**(code **)*puVar11)(puVar11,1);
      return local_148;
    }
    if (*param_5 < 1) {
      *param_5 = 7;
    }
  }
  return 0;
}



// FUNCTION 14255aa10 FUN_14255aa10 body=1488 status=ok
// SIG undefined FUN_14255aa10(void)

undefined8 *
FUN_14255aa10(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,uint param_5,
             uint param_6)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  ushort uVar7;
  int iVar8;
  short *psVar9;
  ulonglong uVar10;
  ushort *puVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  short sVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  uint uVar22;
  bool bVar23;
  bool bVar24;
  undefined1 local_110 [8];
  ushort local_108;
  short local_106;
  uint local_104;
  short *local_f8;
  undefined **local_d0;
  short local_c8;
  int local_c4;
  longlong local_90;
  ulonglong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  uint local_60;
  int local_5c;
  undefined8 *local_58;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  *param_2 = &PTR_FUN_149e18960;
  *(undefined2 *)(param_2 + 1) = 2;
  plVar3 = *(longlong **)(param_1 + 0xe8);
  local_d0 = (undefined **)((ulonglong)local_d0 & 0xffffffff00000000);
  *(undefined4 *)(plVar3 + 0x191) = 0;
  iVar21 = 0;
  local_70 = param_4;
  local_58 = param_2;
  do {
    iVar5 = (**(code **)(*plVar3 + 8))(plVar3,param_3,iVar21,&local_d0);
    if (iVar5 != 1) break;
    FUN_1424a7950(local_110,param_3,iVar21,(ulonglong)local_d0 & 0xffffffff);
    lVar20 = plVar3[0x191];
    *(int *)(plVar3 + 0x191) = (int)lVar20 + 1;
    FUN_1424a7ca0(plVar3 + (longlong)(int)lVar20 * 8 + 1,local_110);
    FUN_140859a90(local_110);
    iVar21 = iVar21 + (int)local_d0;
  } while ((int)plVar3[0x191] < 0x32);
  local_90 = param_1 + 0x1148;
  iVar21 = 0;
  do {
    if (*(int *)(*(longlong *)(param_1 + 0xe8) + 0xc88) <= iVar21) {
      return local_58;
    }
    local_5c = iVar21;
    FUN_1424a6be0(local_110,*(longlong *)(param_1 + 0xe8) + (longlong)iVar21 * 0x40 + 8);
    if ((short)local_108 < 0) {
      uVar17 = local_104;
      if (local_104 == 0) goto LAB_14255ab10;
LAB_14255ab7c:
      uVar10 = (ulonglong)uVar17;
      psVar9 = &local_106;
      if (((int)(short)local_108 & 2U) == 0) {
        psVar9 = local_f8;
      }
      sVar6 = *psVar9;
      if (sVar6 != 0x27) {
        if (0 < (int)uVar17) {
          puVar11 = (ushort *)(*(longlong *)(param_1 + 0xe8) + 0x10);
          bVar23 = false;
          uVar12 = 1;
          do {
            if ((0x3c < (ushort)psVar9[uVar12 - 1] - 0x20) ||
               ((0x1000000004003085U >> ((ulonglong)((ushort)psVar9[uVar12 - 1] - 0x20) & 0x3f) & 1)
                == 0)) {
              uVar7 = *puVar11;
              if ((short)uVar7 < 0) {
                if (*(int *)(puVar11 + 2) == 0) break;
              }
              else if ((short)uVar7 >> 5 == 0) break;
              if ((uVar7 & 2) == 0) {
                uVar7 = **(ushort **)(puVar11 + 8);
              }
              else {
                uVar7 = puVar11[1];
              }
              if (uVar7 != 0x2e) break;
            }
            bVar23 = uVar10 <= uVar12;
            puVar11 = puVar11 + 0x20;
            bVar24 = uVar12 != uVar10;
            uVar12 = uVar12 + 1;
          } while (bVar24);
          if (!bVar23) {
            if (1 < (int)uVar17) {
              uVar12 = 1;
              do {
                if (sVar6 != psVar9[uVar12]) goto LAB_14255adb1;
                uVar12 = uVar12 + 1;
              } while (uVar10 != uVar12);
            }
            sVar15 = 0x47;
            iVar5 = 0;
            do {
              iVar13 = iVar5;
              if (sVar15 == 0) goto LAB_14255adb1;
              psVar9 = &DAT_1499e0eb0 + (longlong)iVar13 * 8;
              iVar8 = 0;
              while (sVar15 != sVar6) {
                sVar15 = *psVar9;
                iVar8 = iVar8 + -1;
                psVar9 = psVar9 + 8;
                if (sVar15 == 0) goto LAB_14255adb1;
              }
              iVar5 = (iVar13 - iVar8) + 1;
              lVar20 = (longlong)iVar5 * 0x10;
            } while ((sVar6 == *(short *)(&DAT_1499e0ea0 + lVar20)) &&
                    (sVar15 = sVar6, (int)*(short *)(&DAT_1499e0eaa + lVar20) <= (int)uVar17));
            if (iVar13 - iVar8 < 0) {
LAB_14255adb1:
              FUN_1424a9690(local_58,local_110,0);
            }
            else {
              uVar16 = iVar13 - iVar8 & 0xfffffffe;
              if (((param_5 & 1) == 0) || (uVar16 != 0x40)) {
                uVar12 = (ulonglong)(uint)(iVar13 - iVar8);
                lVar19 = uVar12 * 0x10;
                lVar14 = (longlong)*(int *)(&DAT_1499e0ea4 + lVar19);
                lVar20 = *(longlong *)(param_1 + 0xf0);
                if (*(int *)(lVar20 + 0x10 + lVar14 * 4) != 0) {
                  local_60 = param_6 & 0x1000;
                  local_49 = (param_6 & 0x800) == 0;
                  cVar1 = *(char *)(lVar20 + 0x50 + lVar14);
                  uVar22 = (uint)*(char *)(lVar20 + 0x60 + lVar14);
                  uVar4 = uVar22;
                  if ((int)uVar22 < 3) {
                    uVar4 = 3;
                  }
                  if (cVar1 != 'E') {
                    uVar4 = uVar22;
                  }
                  local_88 = uVar12 - 0x38;
                  bVar23 = iVar13 + -0x3f == iVar8;
                  bVar24 = (param_6 & 0x2000) == 0;
                  uVar18 = (ulonglong)uVar4;
                  if ((bVar24 && uVar16 == 0x40 || bVar23 && local_60 == 0) ||
                      6 >= local_88 && (bool)local_49) {
                    uVar18 = uVar10;
                  }
                  if ((((!bVar24 || uVar16 != 0x40) && (!bVar23 || local_60 != 0)) &&
                       (6 < local_88 || !(bool)local_49)) && (local_70 != 0)) {
                    uVar16 = uVar4;
                    if (*(short *)(&DAT_1499e0ea8 + lVar19) < 1) {
                      uVar16 = uVar17;
                    }
                    uVar18 = uVar10;
                    uVar17 = uVar4;
                    if (0 < *(int *)(local_70 + 8 + lVar14 * 4)) {
                      uVar18 = (ulonglong)uVar16;
                      uVar17 = uVar16;
                    }
                    if (*(short *)(&DAT_1499e0ea8 + lVar19) < 1) {
                      uVar18 = (ulonglong)uVar17;
                    }
                    if (uVar4 == (int)*(char *)(local_70 + 0x58 + lVar14)) {
                      uVar18 = uVar10;
                    }
                  }
                  if ((((0xfffffffffffffff8 < uVar12 - 0x3f) || (0xfffffffffffffff6 < uVar12 - 0x1b)
                       ) || (0xfffffffffffffff1 < uVar12 - 0x2b)) ||
                     ((sVar15 = (short)cVar1, 0xfffffffffffffff8 < uVar12 - 10 && (cVar1 != 'Y'))))
                  {
                    sVar15 = sVar6;
                  }
                  sVar6 = sVar15;
                  if (local_88 < 7) {
                    sVar6 = *(short *)(param_1 + 0x11d8);
                  }
                  if ((param_5 & 2) != 0) {
                    sVar15 = sVar6;
                  }
                  uVar7 = local_108 & 0x1f;
                  if ((local_108 & 1) != 0) {
                    uVar7 = 2;
                  }
                  uVar17 = (uint)uVar18;
                  local_78 = lVar19;
                  local_80 = lVar14;
                  local_68 = uVar12;
                  local_108 = uVar7;
                  while (0 < (int)uVar17) {
                    local_d0._2_6_ = (undefined6)((ulonglong)local_d0 >> 0x10);
                    local_d0 = (undefined **)CONCAT62(local_d0._2_6_,sVar15);
                    FUN_1424a6cf0(local_110,&local_d0,0,1);
                    uVar17 = (int)uVar18 - 1;
                    uVar18 = (ulonglong)uVar17;
                  }
                }
              }
              else {
                if (*(short *)(param_1 + 0x1150) < 0) {
                  iVar5 = *(int *)(param_1 + 0x1154);
                }
                else {
                  iVar5 = (int)*(short *)(param_1 + 0x1150) >> 5;
                }
                FUN_1424a9690(local_110,local_90,0,iVar5);
                cVar1 = *(char *)(*(longlong *)(param_1 + 0xf0) + 0x6e);
                if ('\0' < cVar1) {
                  cVar2 = *(char *)(*(longlong *)(param_1 + 0xf0) + 0x5e);
                  iVar5 = 0;
                  do {
                    local_d0 = (undefined **)CONCAT62(local_d0._2_6_,(short)cVar2);
                    FUN_1424a6cf0(local_110,&local_d0,0,1);
                    iVar5 = iVar5 + 1;
                  } while (iVar5 != cVar1);
                }
              }
              uVar17 = local_104;
              if (-1 < (short)local_108) {
                uVar17 = (int)(short)local_108 >> 5;
              }
              FUN_1424a9690(local_58,local_110,0,uVar17);
            }
            goto LAB_14255ab1f;
          }
        }
        goto LAB_14255ab10;
      }
      local_d0 = &PTR_FUN_149e18960;
      local_c8 = 2;
      FUN_1425596f0(*(undefined8 *)(param_1 + 0xe8),&local_d0,&local_5c);
      iVar21 = local_c4;
      if (-1 < local_c8) {
        iVar21 = (int)local_c8 >> 5;
      }
      FUN_1424a9690(local_58,&local_d0,0,iVar21);
      FUN_140859a90(&local_d0);
      iVar21 = local_5c;
    }
    else {
      uVar17 = (int)(short)local_108 >> 5;
      if (uVar17 != 0) goto LAB_14255ab7c;
LAB_14255ab10:
      FUN_1424a9690(local_58,local_110,0);
    }
LAB_14255ab1f:
    FUN_140859a90(local_110);
    iVar21 = iVar21 + 1;
  } while( true );
}



// FUNCTION 14255b020 Unwind@14255b020 body=55 status=ok
// SIG undefined Unwind@14255b020(void)

void Unwind_14255b020(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x68);
  return;
}



// FUNCTION 14255b060 Unwind@14255b060 body=55 status=ok
// SIG undefined Unwind@14255b060(void)

void Unwind_14255b060(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 14255b0a0 Unwind@14255b0a0 body=55 status=ok
// SIG undefined Unwind@14255b0a0(void)

void Unwind_14255b0a0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0xe0));
  return;
}



// FUNCTION 14255b0e0 FUN_14255b0e0 body=168 status=ok
// SIG undefined FUN_14255b0e0(void)

uint FUN_14255b0e0(longlong param_1)

{
  return ~-(uint)(*(int *)(param_1 + 0x40) == 0) & 0x1000 |
         ~-(uint)(*(int *)(param_1 + 0x38) == 0) & 0x400 |
         ~-(uint)(*(int *)(param_1 + 0x3c) == 0) & 0x800 |
         ~-(uint)(*(int *)(param_1 + 0x34) == 0) & 0x200 |
         (uint)(*(int *)(param_1 + 0x44) != 0) << 0xd |
         ~-(uint)(*(int *)(param_1 + 0x20) == 0) & 0x10 |
         ~-(uint)(*(int *)(param_1 + 0x30) == 0) & 0x100 |
         ~-(uint)(*(int *)(param_1 + 0x18) == 0) & 4 |
         ~-(uint)(*(int *)(param_1 + 0x28) == 0) & 0x40 |
         ~-(uint)(*(int *)(param_1 + 0x1c) == 0) & 8 |
         ~-(uint)(*(int *)(param_1 + 0x2c) == 0) & 0x80 |
         ~-(uint)(*(int *)(param_1 + 0x14) == 0) & 2 |
         ~-(uint)(*(int *)(param_1 + 0x24) == 0) & 0x20 |
         (uint)(*(int *)(param_1 + 0x4c) != 0) << 0xf | (uint)(*(int *)(param_1 + 0x48) != 0) << 0xe
         | (uint)(*(int *)(param_1 + 0x10) != 0);
}



// FUNCTION 14255b190 FUN_14255b190 body=1154 status=ok
// SIG undefined FUN_14255b190(void)

undefined8 *
FUN_14255b190(longlong param_1,undefined8 *param_2,uint param_3,undefined4 param_4,int *param_5,
             undefined4 param_6)

{
  uint *puVar1;
  short sVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  ulonglong uVar12;
  undefined8 *puVar14;
  undefined4 uVar17;
  ulonglong uVar15;
  undefined **local_178;
  undefined2 local_170;
  undefined **local_138;
  undefined2 local_130;
  undefined **local_f8;
  undefined2 local_f0;
  undefined ***local_b8;
  undefined ***local_b0;
  undefined ***local_a8;
  undefined **local_a0;
  undefined2 local_98;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 uVar13;
  undefined4 uVar16;
  
  local_48 = 0xfffffffffffffffe;
  if (0 < *param_5) {
    *param_2 = &PTR_FUN_149e18960;
    *(undefined2 *)(param_2 + 1) = 2;
    return param_2;
  }
  local_a0 = &PTR_FUN_149e18960;
  local_98 = 2;
  local_f8 = &PTR_FUN_149e18960;
  local_f0 = 2;
  if (param_3 != 0) {
    local_178 = &PTR_FUN_149e18960;
    local_170 = 2;
    local_4c = param_4;
    FUN_1424a7ca0(&local_a0,&local_178);
    FUN_140859a90(&local_178);
    local_58 = 0;
    puVar14 = &local_58;
    piVar11 = param_5;
    uVar5 = FUN_14255a5b0(param_1,*(undefined8 *)(param_1 + 0xf0),param_3,
                          *(undefined8 *)(param_1 + 0xf8),param_5,puVar14);
    uVar13 = (undefined4)((ulonglong)piVar11 >> 0x20);
    uVar16 = (undefined4)((ulonglong)puVar14 >> 0x20);
    if (0 < *param_5) {
LAB_14255b277:
      *param_2 = &PTR_FUN_149e18960;
      *(undefined2 *)(param_2 + 1) = 2;
      goto LAB_14255b5e6;
    }
    FUN_1424a7c80(&local_f8,uVar5);
    uVar12 = CONCAT44(uVar13,local_4c);
    FUN_14255aa10(param_1,&local_178,&local_f8,local_58,uVar12,CONCAT44(uVar16,param_6));
    FUN_1424a7ca0(&local_a0,&local_178);
    FUN_140859a90(&local_178);
    uVar13 = local_4c;
    lVar6 = *(longlong *)(param_1 + 0xf8);
    if (*(int *)(lVar6 + 8) != 0) {
      uVar9 = 0;
      while ((uVar10 = *(uint *)(lVar6 + 8), uVar10 != 0 && (uVar9 != uVar10))) {
        if (((param_3 & 0x6000) == 0x6000) && ((uVar10 & 0x6000) == 0x4000)) {
          uVar12 = CONCAT44((int)(uVar12 >> 0x20),uVar13) | 1;
          FUN_14255aa10(param_1,&local_178,&local_a0,local_58,uVar12,param_6);
          FUN_1424a7ca0(&local_a0,&local_178);
          FUN_140859a90(&local_178);
          puVar1 = (uint *)(*(longlong *)(param_1 + 0xf8) + 8);
          *puVar1 = *puVar1 & 0xffffbfff;
          lVar6 = *(longlong *)(param_1 + 0xf8);
        }
        else {
          puVar14 = &local_58;
          piVar11 = param_5;
          uVar5 = FUN_14255a5b0(param_1,*(undefined8 *)(param_1 + 0xf0),uVar10,lVar6,param_5,puVar14
                               );
          uVar16 = (undefined4)((ulonglong)piVar11 >> 0x20);
          uVar17 = (undefined4)((ulonglong)puVar14 >> 0x20);
          if (0 < *param_5) goto LAB_14255b277;
          FUN_1424a7c80(&local_f8,uVar5);
          uVar5 = CONCAT44(uVar17,param_6);
          uVar12 = CONCAT44(uVar16,local_4c);
          FUN_14255aa10(param_1,&local_178,&local_f8,local_58,uVar12,uVar5);
          uVar16 = (undefined4)((ulonglong)uVar5 >> 0x20);
          FUN_1424a7ca0(&local_f8,&local_178);
          FUN_140859a90(&local_178);
          lVar6 = *(longlong *)(param_1 + 0xf8);
          uVar9 = *(uint *)(lVar6 + 8);
          if ((uVar10 & ~uVar9) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = 0xffffffff;
            uVar10 = uVar10 & ~uVar9;
            do {
              uVar4 = uVar4 + 1;
              bVar3 = 1 < uVar10;
              uVar10 = (int)uVar10 >> 1;
            } while (bVar3);
            if (0xe < uVar4) {
              uVar4 = 0xf;
            }
          }
          lVar7 = (ulonglong)uVar4 * 0x40;
          sVar2 = *(short *)(param_1 + 0x110 + lVar7);
          if (sVar2 < 0) {
            iVar8 = *(int *)(param_1 + 0x114 + lVar7);
          }
          else {
            iVar8 = (int)sVar2 >> 5;
          }
          if (iVar8 != 0) {
            local_178 = &PTR_FUN_149e18960;
            local_170 = 2;
            local_138._0_2_ = 0x27;
            uVar15 = CONCAT44(uVar16,1);
            local_60 = lVar7;
            FUN_1424a9130(&local_178,0,0,&local_138,uVar12 & 0xffffffff00000000,uVar15);
            lVar6 = (ulonglong)uVar4 * 0xc0;
            sVar2 = *(short *)(param_1 + 0x510 + lVar6);
            if (sVar2 < 0) {
              iVar8 = *(int *)(param_1 + 0x514 + lVar6);
            }
            else {
              iVar8 = (int)sVar2 >> 5;
            }
            FUN_1424a9690(&local_178,param_1 + lVar6 + 0x508,0,iVar8);
            local_138 = (undefined **)CONCAT62(local_138._2_6_,0x27);
            FUN_1424a6cf0(&local_178,&local_138,0,1);
            local_b8 = &local_a0;
            local_b0 = &local_f8;
            local_138 = &PTR_FUN_149e18960;
            local_130 = 2;
            local_a8 = &local_178;
            FUN_1425fb600(&local_138,param_1 + local_60 + 0x108,2,3,param_5);
            uVar12 = 0;
            FUN_1425fbd60(&local_138,&local_b8,3,&local_a0,0,uVar15 & 0xffffffff00000000,param_5);
            thunk_FUN_140859a90(&local_138);
            FUN_140859a90(&local_178);
            lVar6 = *(longlong *)(param_1 + 0xf8);
            uVar9 = *(uint *)(lVar6 + 8);
          }
        }
      }
    }
  }
  FUN_1424a77e0(param_2,&local_a0);
LAB_14255b5e6:
  FUN_140859a90(&local_f8);
  FUN_140859a90(&local_a0);
  return param_2;
}



// FUNCTION 14255b620 Unwind@14255b620 body=54 status=ok
// SIG undefined Unwind@14255b620(void)

void Unwind_14255b620(undefined8 param_1,longlong param_2)

{
  thunk_FUN_140859a90(param_2 + 0x80);
  return;
}



// FUNCTION 14255b660 Unwind@14255b660 body=55 status=ok
// SIG undefined Unwind@14255b660(void)

void Unwind_14255b660(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x40);
  return;
}



// FUNCTION 14255b6a0 Unwind@14255b6a0 body=54 status=ok
// SIG undefined Unwind@14255b6a0(void)

void Unwind_14255b6a0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x80);
  return;
}



// FUNCTION 14255b6e0 Unwind@14255b6e0 body=67 status=ok
// SIG undefined Unwind@14255b6e0(void)

void Unwind_14255b6e0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xc0);
  FUN_140859a90(param_2 + 0x118);
  return;
}



// FUNCTION 14255b730 FUN_14255b730 body=746 status=ok
// SIG undefined FUN_14255b730(void)

undefined4
FUN_14255b730(longlong param_1,undefined8 param_2,longlong param_3,char param_4,undefined8 param_5,
             int *param_6)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined **local_1d0 [9];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_140 [80];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  char local_d0 [40];
  undefined **local_a8;
  undefined2 local_a0;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  char local_4a;
  char local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (0 < *(int *)(param_1 + 0x11f8)) {
    *param_6 = *(int *)(param_1 + 0x11f8);
    return 0;
  }
  local_a8 = &PTR_FUN_149e18960;
  local_a0 = 2;
  local_1d0[0] = icu_64::PtnSkeleton::vftable;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_d0[0x10] = '\0';
  local_d0[0x11] = '\0';
  local_d0[0x12] = '\0';
  local_d0[0x13] = '\0';
  local_d0[0x14] = '\0';
  local_d0[0x15] = '\0';
  local_d0[0x16] = '\0';
  local_d0[0x17] = '\0';
  local_d0[0x18] = '\0';
  local_d0[0x19] = '\0';
  local_d0[0x1a] = '\0';
  local_d0[0x1b] = '\0';
  local_d0[0x1c] = '\0';
  local_d0[0x1d] = '\0';
  local_d0[0x1e] = '\0';
  local_d0[0x1f] = '\0';
  local_d0[0] = '\0';
  local_d0[1] = '\0';
  local_d0[2] = '\0';
  local_d0[3] = '\0';
  local_d0[4] = '\0';
  local_d0[5] = '\0';
  local_d0[6] = '\0';
  local_d0[7] = '\0';
  local_d0[8] = '\0';
  local_d0[9] = '\0';
  local_d0[10] = '\0';
  local_d0[0xb] = '\0';
  local_d0[0xc] = '\0';
  local_d0[0xd] = '\0';
  local_d0[0xe] = '\0';
  local_d0[0xf] = '\0';
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_68 = param_2;
  local_60 = param_3;
  local_49 = param_4;
  if (param_3 == 0) {
    FUN_142558680(local_140,param_2,*(undefined8 *)(param_1 + 0xe8),local_1d0);
    local_a0 = 2;
    lVar4 = 0;
    do {
      cVar1 = local_d0[lVar4 + 0x10];
      if ('\0' < cVar1) {
        cVar2 = local_d0[lVar4];
        iVar3 = 0;
        do {
          local_58 = CONCAT62(local_58._2_6_,(short)cVar2);
          FUN_1424a6cf0(&local_a8,&local_58,0,1);
          iVar3 = iVar3 + 1;
        } while (iVar3 != cVar1);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x10);
  }
  else {
    FUN_142558680(local_140,param_3,*(undefined8 *)(param_1 + 0xe8),local_1d0);
    local_a0 = 2;
    lVar4 = 0;
    do {
      cVar1 = local_d0[lVar4 + 0x10];
      if ('\0' < cVar1) {
        cVar2 = local_d0[lVar4];
        iVar3 = 0;
        do {
          local_58 = CONCAT62(local_58._2_6_,(short)cVar2);
          FUN_1424a6cf0(&local_a8,&local_58,0,1);
          iVar3 = iVar3 + 1;
        } while (iVar3 != cVar1);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x10);
  }
  lVar4 = FUN_14255ba70(*(undefined8 *)(param_1 + 0x100),&local_a8,&local_4a);
  uVar6 = 0;
  if ((lVar4 != 0) && ((local_60 != 0 && local_49 == '\0' || (uVar6 = 0, local_4a == '\0')))) {
    FUN_1424a7c80(param_5,lVar4);
    uVar6 = 1;
    if (local_49 == '\0') goto LAB_14255ba01;
  }
  local_58 = 0;
  uVar5 = *(undefined8 *)(param_1 + 0x100);
  lVar4 = FUN_14255bbc0(uVar5,local_1d0,&local_58);
  if (lVar4 != 0) {
    FUN_1424a7c80(param_5,lVar4);
    uVar6 = 2;
    if ((local_49 == '\0') || ((local_60 != 0 && (local_58 != 0)))) goto LAB_14255ba01;
    uVar5 = *(undefined8 *)(param_1 + 0x100);
  }
  FUN_14255bd90(uVar5,&local_a8,local_1d0,local_68,local_60 != 0,param_6);
  if (*param_6 < 1) {
    uVar6 = 0;
  }
LAB_14255ba01:
  FUN_140859a90(&local_a8);
  return uVar6;
}



// FUNCTION 14255ba30 Unwind@14255ba30 body=58 status=ok
// SIG undefined Unwind@14255ba30(void)

void Unwind_14255ba30(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x160);
  return;
}



// FUNCTION 14255ba70 FUN_14255ba70 body=295 status=ok
// SIG undefined FUN_14255ba70(void)

longlong FUN_14255ba70(longlong param_1,longlong param_2,undefined1 *param_3)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  int iVar8;
  longlong lVar9;
  
  uVar1 = *(ushort *)(param_2 + 8);
  if ((short)uVar1 < 0) {
    if (*(int *)(param_2 + 0xc) == 0) {
      return 0;
    }
  }
  else if ((short)uVar1 >> 5 == 0) {
    return 0;
  }
  if ((uVar1 & 2) == 0) {
    puVar7 = *(ushort **)(param_2 + 0x18);
  }
  else {
    puVar7 = (ushort *)(param_2 + 10);
  }
  iVar8 = -0x47;
  uVar1 = *puVar7;
  if ((ushort)(uVar1 - 0x41) < 0x1a) {
    iVar8 = -0x41;
  }
  else if (0x19 < (ushort)(uVar1 - 0x61)) {
    return 0;
  }
  lVar3 = *(longlong *)(param_1 + 8 + (ulonglong)(iVar8 + (uint)uVar1) * 8);
  do {
    if (lVar3 == 0) {
      return 0;
    }
    uVar1 = *(ushort *)(lVar3 + 0x10);
    uVar2 = *(ushort *)(param_2 + 8);
    if ((uVar1 & 1) == 0) {
      if ((short)uVar2 < 0) {
        iVar8 = *(int *)(param_2 + 0xc);
        if (-1 < (short)uVar1) goto LAB_14255bb29;
LAB_14255bb4d:
        uVar5 = *(uint *)(lVar3 + 0x14);
      }
      else {
        iVar8 = (int)(short)uVar2 >> 5;
        if ((short)uVar1 < 0) goto LAB_14255bb4d;
LAB_14255bb29:
        uVar5 = (int)(short)uVar1 >> 5;
      }
      uVar6 = 0;
      if (0 < (int)uVar5) {
        uVar6 = uVar5;
      }
      if ((uVar1 & 2) == 0) {
        lVar9 = *(longlong *)(lVar3 + 0x20);
      }
      else {
        lVar9 = lVar3 + 0x12;
      }
      cVar4 = FUN_1424a7e30(param_2,0,iVar8,lVar9,(int)uVar5 >> 0x1f & uVar5,uVar6);
      if (cVar4 == '\0') {
LAB_14255bb95:
        *param_3 = *(undefined1 *)(lVar3 + 0x90);
        return lVar3 + 0x50;
      }
    }
    else if ((uVar2 & 1) != 0) goto LAB_14255bb95;
    lVar3 = *(longlong *)(lVar3 + 0x98);
  } while( true );
}



// FUNCTION 14255bbc0 FUN_14255bbc0 body=454 status=ok
// SIG undefined FUN_14255bbc0(void)

longlong FUN_14255bbc0(longlong param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (param_3 != (longlong *)0x0) {
    *param_3 = 0;
  }
  if (*(char *)(param_2 + 0x78) == '\0') {
    lVar3 = 1;
    if (((((((*(char *)(param_2 + 0x79) == '\0') && (lVar3 = 2, *(char *)(param_2 + 0x7a) == '\0'))
           && (lVar3 = 3, *(char *)(param_2 + 0x7b) == '\0')) &&
          ((lVar3 = 4, *(char *)(param_2 + 0x7c) == '\0' &&
           (lVar3 = 5, *(char *)(param_2 + 0x7d) == '\0')))) &&
         ((lVar3 = 6, *(char *)(param_2 + 0x7e) == '\0' &&
          ((lVar3 = 7, *(char *)(param_2 + 0x7f) == '\0' &&
           (lVar3 = 8, *(char *)(param_2 + 0x80) == '\0')))))) &&
        (lVar3 = 9, *(char *)(param_2 + 0x81) == '\0')) &&
       ((((lVar3 = 10, *(char *)(param_2 + 0x82) == '\0' &&
          (lVar3 = 0xb, *(char *)(param_2 + 0x83) == '\0')) &&
         (lVar3 = 0xc, *(char *)(param_2 + 0x84) == '\0')) &&
        (((lVar3 = 0xd, *(char *)(param_2 + 0x85) == '\0' &&
          (lVar3 = 0xe, *(char *)(param_2 + 0x86) == '\0')) &&
         (lVar3 = 0xf, *(char *)(param_2 + 0x87) == '\0')))))) {
      return 0;
    }
  }
  else {
    lVar3 = 0;
  }
  iVar4 = -0x47;
  cVar1 = *(char *)(param_2 + 0x68 + lVar3);
  if ((ushort)((short)cVar1 - 0x41U) < 0x1a) {
    iVar4 = -0x41;
  }
  else if (0x19 < (ushort)((short)cVar1 - 0x61U)) {
    return 0;
  }
  lVar3 = *(longlong *)(param_1 + 8 + (ulonglong)(iVar4 + ((int)cVar1 & 0xffffU)) * 8);
  do {
    if (lVar3 == 0) {
      return 0;
    }
    lVar2 = *(longlong *)(lVar3 + 0x48);
    if (param_3 == (longlong *)0x0) {
      auVar5[0] = -(*(char *)(param_2 + 0x68) == *(char *)(lVar2 + 0x68));
      auVar5[1] = -(*(char *)(param_2 + 0x69) == *(char *)(lVar2 + 0x69));
      auVar5[2] = -(*(char *)(param_2 + 0x6a) == *(char *)(lVar2 + 0x6a));
      auVar5[3] = -(*(char *)(param_2 + 0x6b) == *(char *)(lVar2 + 0x6b));
      auVar5[4] = -(*(char *)(param_2 + 0x6c) == *(char *)(lVar2 + 0x6c));
      auVar5[5] = -(*(char *)(param_2 + 0x6d) == *(char *)(lVar2 + 0x6d));
      auVar5[6] = -(*(char *)(param_2 + 0x6e) == *(char *)(lVar2 + 0x6e));
      auVar5[7] = -(*(char *)(param_2 + 0x6f) == *(char *)(lVar2 + 0x6f));
      auVar5[8] = -(*(char *)(param_2 + 0x70) == *(char *)(lVar2 + 0x70));
      auVar5[9] = -(*(char *)(param_2 + 0x71) == *(char *)(lVar2 + 0x71));
      auVar5[10] = -(*(char *)(param_2 + 0x72) == *(char *)(lVar2 + 0x72));
      auVar5[0xb] = -(*(char *)(param_2 + 0x73) == *(char *)(lVar2 + 0x73));
      auVar5[0xc] = -(*(char *)(param_2 + 0x74) == *(char *)(lVar2 + 0x74));
      auVar5[0xd] = -(*(char *)(param_2 + 0x75) == *(char *)(lVar2 + 0x75));
      auVar5[0xe] = -(*(char *)(param_2 + 0x76) == *(char *)(lVar2 + 0x76));
      auVar5[0xf] = -(*(char *)(param_2 + 0x77) == *(char *)(lVar2 + 0x77));
      if (((ushort)((ushort)(SUB161(auVar5 >> 7,0) & 1) | (ushort)(SUB161(auVar5 >> 0xf,0) & 1) << 1
                    | (ushort)(SUB161(auVar5 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar5 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar5 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar5 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar5 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar5 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar5 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar5 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar5 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar5 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar5 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar5 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar5 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar5[0xf] >> 7) << 0xf) == 0xffff) &&
         (auVar8[0] = -(*(char *)(param_2 + 0x78) == *(char *)(lVar2 + 0x78)),
         auVar8[1] = -(*(char *)(param_2 + 0x79) == *(char *)(lVar2 + 0x79)),
         auVar8[2] = -(*(char *)(param_2 + 0x7a) == *(char *)(lVar2 + 0x7a)),
         auVar8[3] = -(*(char *)(param_2 + 0x7b) == *(char *)(lVar2 + 0x7b)),
         auVar8[4] = -(*(char *)(param_2 + 0x7c) == *(char *)(lVar2 + 0x7c)),
         auVar8[5] = -(*(char *)(param_2 + 0x7d) == *(char *)(lVar2 + 0x7d)),
         auVar8[6] = -(*(char *)(param_2 + 0x7e) == *(char *)(lVar2 + 0x7e)),
         auVar8[7] = -(*(char *)(param_2 + 0x7f) == *(char *)(lVar2 + 0x7f)),
         auVar8[8] = -(*(char *)(param_2 + 0x80) == *(char *)(lVar2 + 0x80)),
         auVar8[9] = -(*(char *)(param_2 + 0x81) == *(char *)(lVar2 + 0x81)),
         auVar8[10] = -(*(char *)(param_2 + 0x82) == *(char *)(lVar2 + 0x82)),
         auVar8[0xb] = -(*(char *)(param_2 + 0x83) == *(char *)(lVar2 + 0x83)),
         auVar8[0xc] = -(*(char *)(param_2 + 0x84) == *(char *)(lVar2 + 0x84)),
         auVar8[0xd] = -(*(char *)(param_2 + 0x85) == *(char *)(lVar2 + 0x85)),
         auVar8[0xe] = -(*(char *)(param_2 + 0x86) == *(char *)(lVar2 + 0x86)),
         auVar8[0xf] = -(*(char *)(param_2 + 0x87) == *(char *)(lVar2 + 0x87)),
         (ushort)((ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
                  (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe | (ushort)(auVar8[0xf] >> 7) << 0xf)
         == 0xffff)) goto LAB_14255bd75;
    }
    else {
      auVar6[0] = -(*(char *)(param_2 + 0x48) == *(char *)(lVar2 + 0x48));
      auVar6[1] = -(*(char *)(param_2 + 0x49) == *(char *)(lVar2 + 0x49));
      auVar6[2] = -(*(char *)(param_2 + 0x4a) == *(char *)(lVar2 + 0x4a));
      auVar6[3] = -(*(char *)(param_2 + 0x4b) == *(char *)(lVar2 + 0x4b));
      auVar6[4] = -(*(char *)(param_2 + 0x4c) == *(char *)(lVar2 + 0x4c));
      auVar6[5] = -(*(char *)(param_2 + 0x4d) == *(char *)(lVar2 + 0x4d));
      auVar6[6] = -(*(char *)(param_2 + 0x4e) == *(char *)(lVar2 + 0x4e));
      auVar6[7] = -(*(char *)(param_2 + 0x4f) == *(char *)(lVar2 + 0x4f));
      auVar6[8] = -(*(char *)(param_2 + 0x50) == *(char *)(lVar2 + 0x50));
      auVar6[9] = -(*(char *)(param_2 + 0x51) == *(char *)(lVar2 + 0x51));
      auVar6[10] = -(*(char *)(param_2 + 0x52) == *(char *)(lVar2 + 0x52));
      auVar6[0xb] = -(*(char *)(param_2 + 0x53) == *(char *)(lVar2 + 0x53));
      auVar6[0xc] = -(*(char *)(param_2 + 0x54) == *(char *)(lVar2 + 0x54));
      auVar6[0xd] = -(*(char *)(param_2 + 0x55) == *(char *)(lVar2 + 0x55));
      auVar6[0xe] = -(*(char *)(param_2 + 0x56) == *(char *)(lVar2 + 0x56));
      auVar6[0xf] = -(*(char *)(param_2 + 0x57) == *(char *)(lVar2 + 0x57));
      if (((ushort)((ushort)(SUB161(auVar6 >> 7,0) & 1) | (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1
                    | (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar6[0xf] >> 7) << 0xf) == 0xffff) &&
         (auVar7[0] = -(*(char *)(param_2 + 0x58) == *(char *)(lVar2 + 0x58)),
         auVar7[1] = -(*(char *)(param_2 + 0x59) == *(char *)(lVar2 + 0x59)),
         auVar7[2] = -(*(char *)(param_2 + 0x5a) == *(char *)(lVar2 + 0x5a)),
         auVar7[3] = -(*(char *)(param_2 + 0x5b) == *(char *)(lVar2 + 0x5b)),
         auVar7[4] = -(*(char *)(param_2 + 0x5c) == *(char *)(lVar2 + 0x5c)),
         auVar7[5] = -(*(char *)(param_2 + 0x5d) == *(char *)(lVar2 + 0x5d)),
         auVar7[6] = -(*(char *)(param_2 + 0x5e) == *(char *)(lVar2 + 0x5e)),
         auVar7[7] = -(*(char *)(param_2 + 0x5f) == *(char *)(lVar2 + 0x5f)),
         auVar7[8] = -(*(char *)(param_2 + 0x60) == *(char *)(lVar2 + 0x60)),
         auVar7[9] = -(*(char *)(param_2 + 0x61) == *(char *)(lVar2 + 0x61)),
         auVar7[10] = -(*(char *)(param_2 + 0x62) == *(char *)(lVar2 + 0x62)),
         auVar7[0xb] = -(*(char *)(param_2 + 99) == *(char *)(lVar2 + 99)),
         auVar7[0xc] = -(*(char *)(param_2 + 100) == *(char *)(lVar2 + 100)),
         auVar7[0xd] = -(*(char *)(param_2 + 0x65) == *(char *)(lVar2 + 0x65)),
         auVar7[0xe] = -(*(char *)(param_2 + 0x66) == *(char *)(lVar2 + 0x66)),
         auVar7[0xf] = -(*(char *)(param_2 + 0x67) == *(char *)(lVar2 + 0x67)),
         (ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                  (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe | (ushort)(auVar7[0xf] >> 7) << 0xf)
         == 0xffff)) {
        if (*(char *)(lVar3 + 0x90) != '\0') {
          *param_3 = lVar2;
          return lVar3 + 0x50;
        }
LAB_14255bd75:
        return lVar3 + 0x50;
      }
    }
    lVar3 = *(longlong *)(lVar3 + 0x98);
  } while( true );
}



// FUNCTION 14255bd90 FUN_14255bd90 body=1033 status=ok
// SIG undefined FUN_14255bd90(void)

void FUN_14255bd90(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined1 param_5,int *param_6)

{
  short sVar1;
  ushort uVar2;
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
  undefined8 uVar16;
  undefined8 uVar17;
  ushort *puVar18;
  longlong lVar19;
  undefined8 *puVar20;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar21;
  int iVar22;
  
  sVar1 = *(short *)(param_2 + 8);
  if (sVar1 < 0) {
    iVar22 = *(int *)(param_2 + 0xc);
  }
  else {
    iVar22 = (int)sVar1 >> 5;
  }
  if (iVar22 == 0) {
    *param_6 = 0;
    *param_6 = 0x1001f;
    return;
  }
  if (((int)sVar1 & 2U) == 0) {
    puVar18 = *(ushort **)(param_2 + 0x18);
  }
  else {
    puVar18 = (ushort *)(param_2 + 10);
  }
  uVar2 = *puVar18;
  *param_6 = 0;
  iVar22 = -0x41;
  if ((0x19 < (ushort)(uVar2 - 0x41)) && (iVar22 = -0x47, 0x19 < (ushort)(uVar2 - 0x61))) {
    *param_6 = 0x1001f;
    return;
  }
  lVar3 = *(longlong *)(param_1 + 8 + (ulonglong)(iVar22 + (uint)uVar2) * 8);
  if (lVar3 != 0) {
    lVar19 = FUN_14255c6a0((ulonglong)uVar2,param_2,param_3,lVar3);
    if (lVar19 != 0) {
      if (*(char *)(param_1 + 0x1a8) == '\0') {
        return;
      }
      FUN_1424a7c80(lVar19 + 0x50,param_4);
      *(undefined1 *)(lVar19 + 0x90) = param_5;
      return;
    }
    do {
      lVar19 = lVar3;
      lVar3 = *(longlong *)(lVar19 + 0x98);
    } while (*(longlong *)(lVar19 + 0x98) != 0);
    puVar20 = (undefined8 *)thunk_FUN_1424da030(0xa0);
    if (puVar20 == (undefined8 *)0x0) goto LAB_14255bf96;
    *puVar20 = icu_64::PtnElem::vftable;
    FUN_1424a6be0(puVar20 + 1,param_2);
    puVar20[9] = 0;
    FUN_1424a6be0(puVar20 + 10,param_4);
    puVar20[0x13] = 0;
    if (*param_6 < 1) {
      puVar21 = (undefined8 *)thunk_FUN_1424da030(0x90);
      if (puVar21 == (undefined8 *)0x0) {
        if (*param_6 < 1) goto LAB_14255c126;
      }
      else {
        *puVar21 = icu_64::PtnSkeleton::vftable;
        puVar21[9] = 0;
        puVar21[10] = 0;
        puVar21[0xb] = 0;
        puVar21[0xc] = 0;
        puVar21[0xd] = 0;
        puVar21[0xe] = 0;
        puVar21[0xf] = 0;
        puVar21[0x10] = 0;
        uVar16 = *(undefined8 *)(param_3 + 8);
        uVar17 = *(undefined8 *)(param_3 + 0x10);
        uVar5 = *(undefined4 *)(param_3 + 0x18);
        uVar6 = *(undefined4 *)(param_3 + 0x1c);
        uVar7 = *(undefined4 *)(param_3 + 0x20);
        uVar8 = *(undefined4 *)(param_3 + 0x24);
        uVar9 = *(undefined4 *)(param_3 + 0x28);
        uVar10 = *(undefined4 *)(param_3 + 0x2c);
        uVar11 = *(undefined4 *)(param_3 + 0x30);
        uVar12 = *(undefined4 *)(param_3 + 0x34);
        uVar13 = *(undefined4 *)(param_3 + 0x3c);
        uVar14 = *(undefined4 *)(param_3 + 0x40);
        uVar15 = *(undefined4 *)(param_3 + 0x44);
        *(undefined4 *)(puVar21 + 7) = *(undefined4 *)(param_3 + 0x38);
        *(undefined4 *)((longlong)puVar21 + 0x3c) = uVar13;
        *(undefined4 *)(puVar21 + 8) = uVar14;
        *(undefined4 *)((longlong)puVar21 + 0x44) = uVar15;
        *(undefined4 *)(puVar21 + 5) = uVar9;
        *(undefined4 *)((longlong)puVar21 + 0x2c) = uVar10;
        *(undefined4 *)(puVar21 + 6) = uVar11;
        *(undefined4 *)((longlong)puVar21 + 0x34) = uVar12;
        *(undefined4 *)(puVar21 + 3) = uVar5;
        *(undefined4 *)((longlong)puVar21 + 0x1c) = uVar6;
        *(undefined4 *)(puVar21 + 4) = uVar7;
        *(undefined4 *)((longlong)puVar21 + 0x24) = uVar8;
        puVar21[1] = uVar16;
        puVar21[2] = uVar17;
        uVar16 = *(undefined8 *)(param_3 + 0x50);
        puVar21[9] = *(undefined8 *)(param_3 + 0x48);
        puVar21[10] = uVar16;
        uVar16 = *(undefined8 *)(param_3 + 0x60);
        puVar21[0xb] = *(undefined8 *)(param_3 + 0x58);
        puVar21[0xc] = uVar16;
        uVar16 = *(undefined8 *)(param_3 + 0x70);
        puVar21[0xd] = *(undefined8 *)(param_3 + 0x68);
        puVar21[0xe] = uVar16;
        uVar5 = *(undefined4 *)(param_3 + 0x7c);
        uVar6 = *(undefined4 *)(param_3 + 0x80);
        uVar7 = *(undefined4 *)(param_3 + 0x84);
        *(undefined4 *)(puVar21 + 0xf) = *(undefined4 *)(param_3 + 0x78);
        *(undefined4 *)((longlong)puVar21 + 0x7c) = uVar5;
        *(undefined4 *)(puVar21 + 0x10) = uVar6;
        *(undefined4 *)((longlong)puVar21 + 0x84) = uVar7;
        if (*param_6 < 1) {
LAB_14255c126:
          puVar4 = (undefined8 *)puVar20[9];
          if (puVar4 != (undefined8 *)0x0) {
            (**(code **)*puVar4)(puVar4,1);
          }
          puVar20[9] = puVar21;
          if (puVar21 == (undefined8 *)0x0) {
            *param_6 = 7;
            goto LAB_14255bf02;
          }
        }
        else {
          FUN_1401773f0(puVar21);
        }
        if (*param_6 < 1) {
          *(undefined1 *)(puVar20 + 0x12) = param_5;
          puVar21 = *(undefined8 **)(lVar19 + 0x98);
          if (puVar21 != (undefined8 *)0x0) {
            (**(code **)*puVar21)(puVar21,1);
          }
          *(undefined8 **)(lVar19 + 0x98) = puVar20;
          return;
        }
      }
    }
LAB_14255bf02:
    UNRECOVERED_JUMPTABLE = *(code **)*puVar20;
    goto LAB_14255bf74;
  }
  puVar20 = (undefined8 *)thunk_FUN_1424da030(0xa0);
  if (puVar20 == (undefined8 *)0x0) {
LAB_14255bf96:
    if (0 < *param_6) {
      return;
    }
    *param_6 = 7;
    return;
  }
  *puVar20 = icu_64::PtnElem::vftable;
  FUN_1424a6be0(puVar20 + 1,param_2);
  puVar20[9] = 0;
  FUN_1424a6be0(puVar20 + 10,param_4);
  puVar20[0x13] = 0;
  if (*param_6 < 1) {
    puVar21 = (undefined8 *)thunk_FUN_1424da030(0x90);
    if (puVar21 == (undefined8 *)0x0) {
      if (*param_6 < 1) goto LAB_14255c0d0;
    }
    else {
      *puVar21 = icu_64::PtnSkeleton::vftable;
      puVar21[9] = 0;
      puVar21[10] = 0;
      puVar21[0xb] = 0;
      puVar21[0xc] = 0;
      puVar21[0xd] = 0;
      puVar21[0xe] = 0;
      puVar21[0xf] = 0;
      puVar21[0x10] = 0;
      uVar16 = *(undefined8 *)(param_3 + 8);
      uVar17 = *(undefined8 *)(param_3 + 0x10);
      uVar5 = *(undefined4 *)(param_3 + 0x18);
      uVar6 = *(undefined4 *)(param_3 + 0x1c);
      uVar7 = *(undefined4 *)(param_3 + 0x20);
      uVar8 = *(undefined4 *)(param_3 + 0x24);
      uVar9 = *(undefined4 *)(param_3 + 0x28);
      uVar10 = *(undefined4 *)(param_3 + 0x2c);
      uVar11 = *(undefined4 *)(param_3 + 0x30);
      uVar12 = *(undefined4 *)(param_3 + 0x34);
      uVar13 = *(undefined4 *)(param_3 + 0x3c);
      uVar14 = *(undefined4 *)(param_3 + 0x40);
      uVar15 = *(undefined4 *)(param_3 + 0x44);
      *(undefined4 *)(puVar21 + 7) = *(undefined4 *)(param_3 + 0x38);
      *(undefined4 *)((longlong)puVar21 + 0x3c) = uVar13;
      *(undefined4 *)(puVar21 + 8) = uVar14;
      *(undefined4 *)((longlong)puVar21 + 0x44) = uVar15;
      *(undefined4 *)(puVar21 + 5) = uVar9;
      *(undefined4 *)((longlong)puVar21 + 0x2c) = uVar10;
      *(undefined4 *)(puVar21 + 6) = uVar11;
      *(undefined4 *)((longlong)puVar21 + 0x34) = uVar12;
      *(undefined4 *)(puVar21 + 3) = uVar5;
      *(undefined4 *)((longlong)puVar21 + 0x1c) = uVar6;
      *(undefined4 *)(puVar21 + 4) = uVar7;
      *(undefined4 *)((longlong)puVar21 + 0x24) = uVar8;
      puVar21[1] = uVar16;
      puVar21[2] = uVar17;
      uVar16 = *(undefined8 *)(param_3 + 0x50);
      puVar21[9] = *(undefined8 *)(param_3 + 0x48);
      puVar21[10] = uVar16;
      uVar16 = *(undefined8 *)(param_3 + 0x60);
      puVar21[0xb] = *(undefined8 *)(param_3 + 0x58);
      puVar21[0xc] = uVar16;
      uVar16 = *(undefined8 *)(param_3 + 0x70);
      puVar21[0xd] = *(undefined8 *)(param_3 + 0x68);
      puVar21[0xe] = uVar16;
      uVar5 = *(undefined4 *)(param_3 + 0x7c);
      uVar6 = *(undefined4 *)(param_3 + 0x80);
      uVar7 = *(undefined4 *)(param_3 + 0x84);
      *(undefined4 *)(puVar21 + 0xf) = *(undefined4 *)(param_3 + 0x78);
      *(undefined4 *)((longlong)puVar21 + 0x7c) = uVar5;
      *(undefined4 *)(puVar21 + 0x10) = uVar6;
      *(undefined4 *)((longlong)puVar21 + 0x84) = uVar7;
      if (*param_6 < 1) {
LAB_14255c0d0:
        puVar4 = (undefined8 *)puVar20[9];
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4,1);
        }
        puVar20[9] = puVar21;
        if (puVar21 == (undefined8 *)0x0) {
          *param_6 = 7;
          goto LAB_14255bf6b;
        }
      }
      else {
        FUN_1401773f0(puVar21);
      }
      if (*param_6 < 1) {
        *(undefined1 *)(puVar20 + 0x12) = param_5;
        if (uVar2 < 0x61) {
          *(undefined8 **)(param_1 + -0x200 + (ulonglong)uVar2 * 8) = puVar20;
        }
        else {
          *(undefined8 **)(param_1 + 8 + (ulonglong)(uVar2 - 0x47) * 8) = puVar20;
        }
        return;
      }
    }
  }
LAB_14255bf6b:
  UNRECOVERED_JUMPTABLE = *(code **)*puVar20;
LAB_14255bf74:
                    /* WARNING: Could not recover jumptable at 0x00014255bf89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(puVar20,1);
  return;
}



// FUNCTION 14255c1b0 Unwind@14255c1b0 body=75 status=ok
// SIG undefined Unwind@14255c1b0(void)

void Unwind_14255c1b0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(*(longlong *)(param_2 + 0x30) + 0x48);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14255c200 Unwind@14255c200 body=75 status=ok
// SIG undefined Unwind@14255c200(void)

void Unwind_14255c200(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(*(longlong *)(param_2 + 0x30) + 0x48);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14255c250 Unwind@14255c250 body=52 status=ok
// SIG undefined Unwind@14255c250(void)

void Unwind_14255c250(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 14255c290 Unwind@14255c290 body=52 status=ok
// SIG undefined Unwind@14255c290(void)

void Unwind_14255c290(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 14255c2d0 FUN_14255c2d0 body=352 status=ok
// SIG undefined FUN_14255c2d0(void)

int FUN_14255c2d0(undefined8 param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = strcmp("Era",param_2);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = strcmp("Year",param_2);
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = strcmp("Quarter",param_2);
      if (iVar1 == 0) {
        iVar1 = 2;
      }
      else {
        iVar1 = strcmp("Month",param_2);
        if (iVar1 == 0) {
          iVar1 = 3;
        }
        else {
          iVar1 = strcmp("Week",param_2);
          if (iVar1 == 0) {
            iVar1 = 4;
          }
          else {
            iVar1 = strcmp("*",param_2);
            if (iVar1 == 0) {
              iVar1 = 5;
            }
            else {
              iVar1 = strcmp("Day-Of-Week",param_2);
              if (iVar1 == 0) {
                iVar1 = 6;
              }
              else {
                iVar1 = strcmp("Day",param_2);
                if (iVar1 == 0) {
                  iVar1 = 9;
                }
                else {
                  iVar1 = strcmp("Hour",param_2);
                  if (iVar1 == 0) {
                    iVar1 = 0xb;
                  }
                  else {
                    iVar1 = strcmp("Minute",param_2);
                    if (iVar1 == 0) {
                      iVar1 = 0xc;
                    }
                    else {
                      iVar1 = strcmp("Second",param_2);
                      if (iVar1 == 0) {
                        iVar1 = 0xd;
                      }
                      else {
                        iVar1 = strcmp("Timezone",param_2);
                        iVar1 = 0x10 - (uint)(iVar1 == 0);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar1;
}



// FUNCTION 14255c430 FUN_14255c430 body=614 status=ok
// SIG undefined FUN_14255c430(void)

void FUN_14255c430(undefined8 param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *_Str2;
  undefined1 auStack_58 [32];
  short local_38 [12];
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  strncpy((char *)local_38,param_2,0x18);
  local_20 = 0;
  *param_3 = 0;
  _Str2 = strchr((char *)local_38,0x2d);
  if (_Str2 == (char *)0x0) goto LAB_14255c4b3;
  iVar1 = strcmp("-narrow",_Str2);
  if (iVar1 == 0) {
    uVar2 = 2;
LAB_14255c4ae:
    *param_3 = uVar2;
  }
  else {
    iVar1 = strcmp("-short",_Str2);
    if (iVar1 == 0) {
      uVar2 = 1;
      goto LAB_14255c4ae;
    }
  }
  *_Str2 = '\0';
LAB_14255c4b3:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 14255c6a0 FUN_14255c6a0 body=373 status=ok
// SIG undefined FUN_14255c6a0(void)

longlong FUN_14255c6a0(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  do {
    if (param_4 == 0) {
      return 0;
    }
    uVar1 = *(ushort *)(param_4 + 0x10);
    uVar2 = *(ushort *)(param_2 + 8);
    if ((uVar1 & 1) == 0) {
      if ((short)uVar2 < 0) {
        iVar6 = *(int *)(param_2 + 0xc);
        if ((short)uVar1 < 0) goto LAB_14255c71d;
LAB_14255c6ea:
        uVar4 = (int)(short)uVar1 >> 5;
      }
      else {
        iVar6 = (int)(short)uVar2 >> 5;
        if (-1 < (short)uVar1) goto LAB_14255c6ea;
LAB_14255c71d:
        uVar4 = *(uint *)(param_4 + 0x14);
      }
      uVar5 = 0;
      if (0 < (int)uVar4) {
        uVar5 = uVar4;
      }
      if ((uVar1 & 2) == 0) {
        lVar7 = *(longlong *)(param_4 + 0x20);
      }
      else {
        lVar7 = param_4 + 0x12;
      }
      cVar3 = FUN_1424a7e30(param_2,0,iVar6,lVar7,(int)uVar4 >> 0x1f & uVar4,uVar5);
      if (cVar3 == '\0') {
LAB_14255c765:
        lVar7 = *(longlong *)(param_4 + 0x48);
        if (((((*(int *)(lVar7 + 8) == *(int *)(param_3 + 8)) &&
              (*(int *)(lVar7 + 0xc) == *(int *)(param_3 + 0xc))) &&
             (*(int *)(lVar7 + 0x10) == *(int *)(param_3 + 0x10))) &&
            (((*(int *)(lVar7 + 0x14) == *(int *)(param_3 + 0x14) &&
              (*(int *)(lVar7 + 0x18) == *(int *)(param_3 + 0x18))) &&
             ((*(int *)(lVar7 + 0x1c) == *(int *)(param_3 + 0x1c) &&
              ((*(int *)(lVar7 + 0x20) == *(int *)(param_3 + 0x20) &&
               (*(int *)(lVar7 + 0x24) == *(int *)(param_3 + 0x24))))))))) &&
           ((*(int *)(lVar7 + 0x28) == *(int *)(param_3 + 0x28) &&
            (((((*(int *)(lVar7 + 0x2c) == *(int *)(param_3 + 0x2c) &&
                (*(int *)(lVar7 + 0x30) == *(int *)(param_3 + 0x30))) &&
               (*(int *)(lVar7 + 0x34) == *(int *)(param_3 + 0x34))) &&
              ((*(int *)(lVar7 + 0x38) == *(int *)(param_3 + 0x38) &&
               (*(int *)(lVar7 + 0x3c) == *(int *)(param_3 + 0x3c))))) &&
             ((*(int *)(lVar7 + 0x40) == *(int *)(param_3 + 0x40) &&
              (*(int *)(lVar7 + 0x44) == *(int *)(param_3 + 0x44))))))))) {
          return param_4;
        }
      }
    }
    else if ((uVar2 & 1) != 0) goto LAB_14255c765;
    param_4 = *(longlong *)(param_4 + 0x98);
  } while( true );
}



// FUNCTION 14255c840 FUN_14255c840 body=170 status=ok
// SIG undefined FUN_14255c840(void)

undefined8 FUN_14255c840(undefined8 param_1,longlong param_2,uint param_3,int *param_4)

{
  bool bVar1;
  undefined8 uVar2;
  uint uVar3;
  short sVar4;
  short sVar5;
  longlong lVar6;
  int iVar7;
  
  sVar5 = *(short *)(param_2 + 8);
  if (sVar5 < 0) {
    uVar3 = *(uint *)(param_2 + 0xc);
  }
  else {
    uVar3 = (int)sVar5 >> 5;
  }
  uVar2 = 3;
  if ((int)param_3 < (int)uVar3) {
    if (((int)sVar5 & 2U) == 0) {
      param_2 = *(longlong *)(param_2 + 0x18);
    }
    else {
      param_2 = param_2 + 10;
    }
    iVar7 = 0;
    uVar2 = 1;
    lVar6 = (longlong)(int)param_3;
    while (((uint)lVar6 < uVar3 &&
           ((ushort)((*(ushort *)(param_2 + lVar6 * 2) & 0xffdf) - 0x41) < 0x1a))) {
      sVar4 = -1;
      sVar5 = -1;
      if ((uint)lVar6 + 1 < uVar3) {
        sVar5 = *(short *)(param_2 + 2 + lVar6 * 2);
      }
      if (param_3 < uVar3) {
        sVar4 = *(short *)(param_2 + (longlong)(int)param_3 * 2);
      }
      iVar7 = iVar7 + 1;
      if ((sVar5 != sVar4) || (bVar1 = (int)uVar3 <= lVar6, lVar6 = lVar6 + 1, bVar1))
      goto LAB_14255c8e0;
    }
    iVar7 = 1;
LAB_14255c8e0:
    *param_4 = iVar7;
  }
  return uVar2;
}



// FUNCTION 14255c8f0 FUN_14255c8f0 body=38 status=ok
// SIG undefined FUN_14255c8f0(void)

undefined8 FUN_14255c8f0(undefined8 param_1,int param_2)

{
  FUN_1425572c0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14255c920 FUN_14255c920 body=60 status=ok
// SIG undefined FUN_14255c920(void)

undefined8 * FUN_14255c920(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::DateTimePatternGenerator::AvailableFormatsSink::vftable;
  FUN_140859a90(param_1 + 2);
  thunk_FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14255c960 FUN_14255c960 body=409 status=ok
// SIG undefined FUN_14255c960(void)

void FUN_14255c960(longlong param_1,undefined8 param_2,longlong *param_3,char param_4,int *param_5)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  ushort uVar5;
  int iVar6;
  undefined1 local_110 [64];
  undefined1 local_d0 [64];
  undefined1 local_90 [40];
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined4 local_50;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_60 = param_2;
  (**(code **)(*param_3 + 0x50))(param_3,local_90,param_5);
  if (*param_5 < 1) {
    local_68 = param_1 + 0x10;
    local_49 = param_4 == '\0';
    iVar6 = 0;
    while( true ) {
      cVar2 = FUN_14258c4f0(local_90,iVar6,&local_60,param_3);
      if (cVar2 == '\0') break;
      FUN_1424a7220(local_110,local_60,0xffffffff,0);
      iVar3 = FUN_142502860(**(undefined8 **)(*(longlong *)(param_1 + 8) + 0x1190),local_110);
      if (iVar3 != 1) {
        puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x1190);
        local_58 = thunk_FUN_1424da030(0x40);
        if (local_58 != 0) {
          FUN_1424a6be0(local_58,local_110);
        }
        FUN_142502d50(*puVar1,local_58,1,param_5);
        local_50 = 0;
        uVar4 = (**(code **)(*param_3 + 0x18))(param_3,&local_50,param_5);
        FUN_1424a7060(local_d0,1,uVar4,local_50);
        uVar5 = *(ushort *)(param_1 + 0x18) & 0x1f;
        if ((*(ushort *)(param_1 + 0x18) & 1) != 0) {
          uVar5 = 2;
        }
        *(ushort *)(param_1 + 0x18) = uVar5;
        FUN_14255b730(*(undefined8 *)(param_1 + 8),local_d0,local_110,local_49,local_68,param_5);
        FUN_140859a90(local_d0);
      }
      FUN_140859a90(local_110);
      iVar6 = iVar6 + 1;
    }
  }
  return;
}



// FUNCTION 14255cb10 Unwind@14255cb10 body=55 status=ok
// SIG undefined Unwind@14255cb10(void)

void Unwind_14255cb10(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x38);
  return;
}



// FUNCTION 14255cb50 Unwind@14255cb50 body=55 status=ok
// SIG undefined Unwind@14255cb50(void)

void Unwind_14255cb50(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xf0));
  return;
}



// FUNCTION 14255cb90 Unwind@14255cb90 body=55 status=ok
// SIG undefined Unwind@14255cb90(void)

void Unwind_14255cb90(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x78);
  return;
}



// FUNCTION 14255cbd0 FUN_14255cbd0 body=90 status=ok
// SIG undefined FUN_14255cbd0(void)

undefined8 * FUN_14255cbd0(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = icu_64::PatternMap::vftable;
  lVar2 = 1;
  do {
    puVar1 = (undefined8 *)param_1[lVar2];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
      param_1[lVar2] = 0;
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x35);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14255cc30 FUN_14255cc30 body=29 status=ok
// SIG undefined FUN_14255cc30(void)

undefined8 FUN_14255cc30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14255cc50 FUN_14255cc50 body=38 status=ok
// SIG undefined FUN_14255cc50(void)

undefined8 FUN_14255cc50(undefined8 param_1,int param_2)

{
  FUN_142558ba0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14255cc80 FUN_14255cc80 body=29 status=ok
// SIG undefined FUN_14255cc80(void)

undefined8 FUN_14255cc80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14255cca0 FUN_14255cca0 body=102 status=ok
// SIG undefined FUN_14255cca0(void)

undefined8 * FUN_14255cca0(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::PtnElem::vftable;
  puVar1 = (undefined8 *)param_1[0x13];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_140859a90(param_1 + 10);
  puVar1 = (undefined8 *)param_1[9];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_140859a90(param_1 + 1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14255cd10 FUN_14255cd10 body=29 status=ok
// SIG undefined FUN_14255cd10(void)

undefined8 FUN_14255cd10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14255cd30 FUN_14255cd30 body=38 status=ok
// SIG undefined FUN_14255cd30(void)

undefined8 FUN_14255cd30(undefined8 param_1,int param_2)

{
  thunk_FUN_1424b70d0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14255cd60 FUN_14255cd60 body=958 status=ok
// SIG undefined FUN_14255cd60(void)

void FUN_14255cd60(undefined8 param_1,char *param_2,longlong *param_3,undefined8 param_4,
                  int *param_5)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  size_t _Size;
  undefined1 local_118 [64];
  undefined1 local_d8 [40];
  undefined1 local_b0 [40];
  char *local_88;
  undefined4 local_80 [4];
  int local_70;
  int local_68;
  undefined4 local_64;
  char *local_60;
  uint local_58;
  int local_54;
  int *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_60 = param_2;
  (**(code **)(*param_3 + 0x50))(param_3,local_d8,param_5);
  if ((*param_5 < 1) && (cVar2 = FUN_14258c4f0(local_d8,0,&local_60,param_3), cVar2 != '\0')) {
    iVar3 = 0;
    do {
      pcVar1 = local_60;
      (**(code **)(*param_3 + 0x50))(param_3,local_b0,param_5);
      if (0 < *param_5) {
        return;
      }
      local_88 = pcVar1;
      local_54 = -1;
      piVar8 = (int *)0x0;
      local_58 = 0;
      iVar7 = 0;
      local_68 = iVar3;
      while (local_50 = piVar8, cVar2 = FUN_14258c4f0(local_b0,iVar7,&local_60,param_3),
            pcVar1 = local_60, cVar2 != '\0') {
        iVar3 = strcmp(local_60,"allowed");
        if (iVar3 == 0) {
          local_50 = piVar8;
          iVar3 = (**(code **)(*param_3 + 0x10))(param_3);
          if (iVar3 == 0) {
            piVar6 = (int *)FUN_1424da030(0xc);
            if (piVar6 == (int *)0x0) goto LAB_14255d0fd;
            piVar6[2] = 0;
            piVar6[0] = 0;
            piVar6[1] = 0;
            FUN_1424da110(piVar8);
            local_80[0] = 0;
            local_50 = piVar6;
            uVar5 = (**(code **)(*param_3 + 0x18))(param_3,local_80,param_5);
            local_50 = piVar6;
            FUN_1424a7060(local_118,1,uVar5,local_80[0]);
            iVar3 = FUN_14255d170(local_118);
            piVar6[1] = iVar3;
            FUN_140859a90(local_118);
            local_58 = 2;
            piVar8 = piVar6;
          }
          else {
            local_50 = piVar8;
            (**(code **)(*param_3 + 0x48))(param_3,local_80,param_5);
            iVar3 = local_70;
            if (local_70 < -1) goto LAB_14255d0fd;
            _Size = (ulonglong)(local_70 + 2) << 2;
            piVar6 = (int *)FUN_1424da030(_Size);
            if (piVar6 == (int *)0x0) goto LAB_14255d0fd;
            local_58 = iVar3 + 1;
            memset(piVar6,0,_Size);
            FUN_1424da110(piVar8);
            uVar9 = 1;
            piVar8 = piVar6;
            if (0 < iVar3) {
              do {
                local_50 = piVar6;
                FUN_14258c5f0(local_80,uVar9 - 1,param_3);
                local_64 = 0;
                local_50 = piVar6;
                uVar5 = (**(code **)(*param_3 + 0x18))(param_3,&local_64,param_5);
                local_50 = piVar6;
                FUN_1424a7060(local_118,1,uVar5,local_64);
                iVar4 = FUN_14255d170(local_118);
                piVar6[uVar9] = iVar4;
                FUN_140859a90(local_118);
                uVar9 = uVar9 + 1;
              } while ((int)uVar9 <= iVar3);
            }
          }
        }
        else {
          iVar3 = strcmp(pcVar1,"preferred");
          if (iVar3 == 0) {
            local_80[0] = 0;
            local_50 = piVar8;
            uVar5 = (**(code **)(*param_3 + 0x18))(param_3,local_80,param_5);
            local_50 = piVar8;
            FUN_1424a7060(local_118,1,uVar5,local_80[0]);
            local_54 = FUN_14255d170(local_118);
            FUN_140859a90(local_118);
          }
        }
        iVar7 = iVar7 + 1;
      }
      if ((int)local_58 < 2) {
        piVar6 = (int *)FUN_1424da030(0xc);
        if (piVar6 == (int *)0x0) {
LAB_14255d0fd:
          *param_5 = 7;
          goto LAB_14255d10a;
        }
        piVar6[2] = 0;
        piVar6[0] = 0;
        piVar6[1] = 0;
        FUN_1424da110(piVar8);
        iVar3 = local_54;
        if (local_54 == -1) {
          iVar3 = 1;
        }
        *piVar6 = iVar3;
        piVar6[1] = iVar3;
        uVar9 = 2;
      }
      else {
        iVar3 = local_54;
        if (local_54 == -1) {
          iVar3 = piVar8[1];
        }
        *piVar8 = iVar3;
        piVar6 = piVar8;
        uVar9 = local_58;
      }
      piVar6[uVar9] = -1;
      FUN_142502aa0(DAT_14c793390,local_88,piVar6,param_5);
      if (0 < *param_5) {
        piVar8 = (int *)0x0;
LAB_14255d10a:
        FUN_1424da110(piVar8);
        return;
      }
      FUN_1424da110(0);
      iVar3 = local_68 + 1;
      cVar2 = FUN_14258c4f0(local_d8,iVar3,&local_60,param_3);
    } while (cVar2 != '\0');
  }
  return;
}



// FUNCTION 14255d130 Unwind@14255d130 body=55 status=ok
// SIG undefined Unwind@14255d130(void)

void Unwind_14255d130(undefined8 param_1,longlong param_2)

{
  FUN_1424da110(*(undefined8 *)(param_2 + 0xe8));
  return;
}



// FUNCTION 14255d170 FUN_14255d170 body=211 status=ok
// SIG undefined FUN_14255d170(void)

undefined8 FUN_14255d170(longlong param_1)

{
  ushort uVar1;
  short sVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  short *psVar5;
  int iVar6;
  
  uVar1 = *(ushort *)(param_1 + 8);
  if ((short)uVar1 < 0) {
    iVar6 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar6 = (int)(short)uVar1 >> 5;
  }
  if (iVar6 == 2) {
    if ((uVar1 & 2) == 0) {
      psVar5 = *(short **)(param_1 + 0x18);
    }
    else {
      psVar5 = (short *)(param_1 + 10);
    }
    sVar2 = *psVar5;
    if (sVar2 == 0x48) {
      if (psVar5[1] == 0x62) {
        return 8;
      }
      uVar3 = 9;
      sVar2 = psVar5[1];
    }
    else {
      if (sVar2 != 0x4b) {
        if (sVar2 != 0x68) {
          return 0xffffffff;
        }
        if (psVar5[1] == 0x62) {
          return 4;
        }
        if (psVar5[1] == 0x42) {
          return 5;
        }
        return 0xffffffff;
      }
      if (psVar5[1] == 0x62) {
        return 6;
      }
      uVar3 = 7;
      sVar2 = psVar5[1];
    }
    if (sVar2 == 0x42) {
      return uVar3;
    }
  }
  else if (iVar6 == 1) {
    if ((uVar1 & 2) == 0) {
      puVar4 = *(undefined2 **)(param_1 + 0x18);
    }
    else {
      puVar4 = (undefined2 *)(param_1 + 10);
    }
    switch(*puVar4) {
    case 0x48:
      return 1;
    case 0x4b:
      return 2;
    case 0x68:
      return 0;
    case 0x6b:
      return 3;
    }
  }
  return 0xffffffff;
}



// FUNCTION 14255d250 FUN_14255d250 body=38 status=ok
// SIG undefined FUN_14255d250(void)

undefined8 FUN_14255d250(undefined8 param_1,int param_2)

{
  thunk_FUN_1424b70d0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14255d280 FUN_14255d280 body=291 status=ok
// SIG undefined FUN_14255d280(void)

void FUN_14255d280(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  int *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 local_c0 [8];
  ushort local_b8;
  undefined1 local_80 [40];
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_58 = param_2;
  (**(code **)(*param_3 + 0x50))(param_3,local_80,param_5);
  if (*param_5 < 1) {
    cVar1 = FUN_14258c4f0(local_80,0,&local_58,param_3);
    if (cVar1 != '\0') {
      iVar5 = 1;
      do {
        iVar2 = FUN_14255c2d0();
        if (iVar2 != 0x10) {
          local_4c = 0;
          uVar3 = (**(code **)(*param_3 + 0x18))(param_3,&local_4c,param_5);
          FUN_1424a7060(local_c0,1,uVar3,local_4c);
          if ((*(ushort *)(*(longlong *)(param_1 + 8) + 0x110 + (longlong)iVar2 * 0x40) < 0x20) &&
             (0x1f < local_b8)) {
            lVar4 = *(longlong *)(param_1 + 8) + (longlong)iVar2 * 0x40 + 0x108;
            FUN_1424a7c80(lVar4,local_c0);
            FUN_1424a8e50(lVar4);
          }
          FUN_140859a90(local_c0);
        }
        cVar1 = FUN_14258c4f0(local_80,iVar5,&local_58,param_3);
        iVar5 = iVar5 + 1;
      } while (cVar1 != '\0');
    }
  }
  return;
}



// FUNCTION 14255d3b0 Unwind@14255d3b0 body=55 status=ok
// SIG undefined Unwind@14255d3b0(void)

void Unwind_14255d3b0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 14255d3f0 FUN_14255d3f0 body=38 status=ok
// SIG undefined FUN_14255d3f0(void)

undefined8 FUN_14255d3f0(undefined8 param_1,int param_2)

{
  thunk_FUN_1424b70d0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14255d420 FUN_14255d420 body=517 status=ok
// SIG undefined FUN_14255d420(void)

void FUN_14255d420(longlong param_1,char *param_2,longlong *param_3,undefined8 param_4,int *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined1 local_138 [40];
  undefined1 local_110 [40];
  undefined1 local_e8 [8];
  ushort local_e0;
  undefined4 local_a8 [2];
  ushort local_a0;
  longlong local_68;
  int local_5c;
  char *local_58;
  ushort local_4a;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_68 = param_1;
  local_58 = param_2;
  (**(code **)(*param_3 + 0x50))(param_3,local_110,param_5);
  if (*param_5 < 1) {
    iVar7 = 0;
    cVar1 = FUN_14258c4f0(local_110,0,&local_58,param_3);
    if (cVar1 != '\0') {
      do {
        iVar2 = FUN_14255c430();
        if (iVar2 != 0x10) {
          (**(code **)(*param_3 + 0x50))(param_3,local_138,param_5);
          if (0 < *param_5) {
            return;
          }
          cVar1 = FUN_14258c4f0(local_138,0,&local_58,param_3);
          if (cVar1 != '\0') {
            iVar5 = 1;
            do {
              iVar3 = strcmp(local_58,"dn");
              if (iVar3 == 0) {
                local_a8[0] = 0;
                uVar4 = (**(code **)(*param_3 + 0x18))(param_3,local_a8,param_5);
                FUN_1424a7060(local_e8,1,uVar4,local_a8[0]);
                lVar6 = (longlong)local_5c;
                FUN_1424a6be0(local_a8,lVar6 * 0x40 +
                                       *(longlong *)(local_68 + 8) + (longlong)iVar2 * 0xc0 + 0x508)
                ;
                if (local_a0 < 0x20) {
                  local_4a = local_e0;
                  FUN_140859a90(local_a8);
                  if (0x1f < local_4a) {
                    lVar6 = lVar6 * 0x40 + (longlong)iVar2 * 0xc0 + *(longlong *)(local_68 + 8) +
                            0x508;
                    FUN_1424a7c80(lVar6,local_e8);
                    FUN_1424a8e50(lVar6);
                  }
                }
                else {
                  FUN_140859a90(local_a8);
                }
                FUN_140859a90(local_e8);
                break;
              }
              cVar1 = FUN_14258c4f0(local_138,iVar5,&local_58,param_3);
              iVar5 = iVar5 + 1;
            } while (cVar1 != '\0');
          }
        }
        iVar7 = iVar7 + 1;
        cVar1 = FUN_14258c4f0(local_110,iVar7,&local_58,param_3);
      } while (cVar1 != '\0');
    }
  }
  return;
}



// FUNCTION 14255d630 Unwind@14255d630 body=55 status=ok
// SIG undefined Unwind@14255d630(void)

void Unwind_14255d630(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x70);
  return;
}



// FUNCTION 14255d670 FUN_14255d670 body=75 status=ok
// SIG undefined FUN_14255d670(void)

void FUN_14255d670(longlong *param_1,void *param_2,int param_3,int param_4)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_3,param_4);
  if (cVar1 != '\0') {
    memcpy((void *)((longlong)param_4 + param_1[1]),param_2,(longlong)param_3);
    return;
  }
  return;
}



// FUNCTION 14255d6c0 FUN_14255d6c0 body=85 status=ok
// SIG undefined FUN_14255d6c0(void)

ulonglong FUN_14255d6c0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    iVar1 = *(int *)(param_1 + 0x10) * 2;
    param_3 = param_3 + param_2 * 2;
    if (iVar1 <= param_3) {
      iVar1 = param_3;
    }
    iVar4 = 200;
    if (200 < iVar1) {
      iVar4 = iVar1;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = FUN_142612b80(uVar3,iVar4);
    iVar1 = 0;
    if (lVar2 != 0) {
      iVar1 = iVar4;
    }
    *(longlong *)(param_1 + 8) = lVar2;
    *(int *)(param_1 + 0x10) = iVar1;
    uVar5 = CONCAT71((int7)((ulonglong)uVar3 >> 8),lVar2 != 0) & 0xffffffff;
  }
  return uVar5;
}



// FUNCTION 14255d720 FUN_14255d720 body=157 status=ok
// SIG undefined FUN_14255d720(void)

undefined8 * FUN_14255d720(undefined8 *param_1,longlong param_2)

{
  FUN_1424bf190();
  *param_1 = icu_64::RuleBasedCollator::vftable;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  FUN_1424a3ce0(param_1 + 5,param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x108);
  *(undefined1 *)((longlong)param_1 + 0x10c) = *(undefined1 *)(param_2 + 0x10c);
  FUN_142537c90(param_1[2]);
  FUN_142537c90(param_1[4]);
  return param_1;
}



// FUNCTION 14255d7c0 Unwind@14255d7c0 body=34 status=ok
// SIG undefined Unwind@14255d7c0(void)

void Unwind_14255d7c0(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14255d7f0 Unwind@14255d7f0 body=34 status=ok
// SIG undefined Unwind@14255d7f0(void)

void Unwind_14255d7f0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 14255d820 FUN_14255d820 body=228 status=ok
// SIG undefined FUN_14255d820(void)

void FUN_14255d820(longlong param_1,longlong param_2,int *param_3)

{
  undefined8 *puVar1;
  
  if (*param_3 < 1) {
    puVar1 = (undefined8 *)thunk_FUN_1424da030(0x100);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = icu_64::CollationCacheEntry::vftable;
      FUN_1424a3ce0(puVar1 + 3,param_2 + 0x68);
      puVar1[0x1f] = param_2;
      if (param_2 != 0) {
        FUN_142537c90(param_2);
      }
      *(undefined8 **)(param_1 + 0x20) = puVar1;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x20);
      FUN_142537c90();
      *(longlong *)(param_1 + 0x18) = param_2;
      FUN_142537c90(*(undefined8 *)(param_1 + 0x20));
      FUN_1424a3d10(param_1 + 0x28,param_2 + 0x68);
      *(undefined1 *)(param_1 + 0x10c) = 0;
      return;
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    *param_3 = 7;
  }
  FUN_142537ce0(param_2);
  return;
}



// FUNCTION 14255d910 Unwind@14255d910 body=36 status=ok
// SIG undefined Unwind@14255d910(void)

void Unwind_14255d910(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 14255d940 Unwind@14255d940 body=47 status=ok
// SIG undefined Unwind@14255d940(void)

void Unwind_14255d940(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  thunk_FUN_1424b70d0(uVar1);
  FUN_1401773f0(uVar1);
  return;
}



// FUNCTION 14255d970 FUN_14255d970 body=165 status=ok
// SIG undefined FUN_14255d970(void)

undefined8 * FUN_14255d970(undefined8 *param_1,longlong param_2)

{
  FUN_1424bf170();
  *param_1 = icu_64::RuleBasedCollator::vftable;
  param_1[1] = *(undefined8 *)(*(longlong *)(param_2 + 0xf8) + 0x18);
  param_1[2] = *(undefined8 *)(*(longlong *)(param_2 + 0xf8) + 0x20);
  param_1[3] = *(undefined8 *)(param_2 + 0xf8);
  param_1[4] = param_2;
  FUN_1424a3ce0(param_1 + 5,param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10c) = 0;
  FUN_142537c90(param_1[2]);
  FUN_142537c90(param_1[4]);
  return param_1;
}



// FUNCTION 14255da20 Unwind@14255da20 body=34 status=ok
// SIG undefined Unwind@14255da20(void)

void Unwind_14255da20(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14255da50 Unwind@14255da50 body=34 status=ok
// SIG undefined Unwind@14255da50(void)

void Unwind_14255da50(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 14255da80 FUN_14255da80 body=64 status=ok
// SIG undefined FUN_14255da80(void)

longlong FUN_14255da80(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = thunk_FUN_1424da030(0x110);
  if (lVar1 != 0) {
    FUN_14255d720(lVar1,param_1);
  }
  return lVar1;
}



// FUNCTION 14255dac0 Unwind@14255dac0 body=32 status=ok
// SIG undefined Unwind@14255dac0(void)

void Unwind_14255dac0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14255dae0 FUN_14255dae0 body=8 status=ok
// SIG undefined FUN_14255dae0(void)

undefined * FUN_14255dae0(void)

{
  return &DAT_14c7933a0;
}



// FUNCTION 14255daf0 FUN_14255daf0 body=304 status=ok
// SIG undefined FUN_14255daf0(void)

ulonglong FUN_14255daf0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  int local_2c;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_1 == param_2) goto LAB_14255db56;
  cVar1 = FUN_1424bf1a0();
  if ((cVar1 != '\0') && (cVar1 = FUN_142612ea0(param_1[2],param_2[2]), cVar1 != '\0')) {
    if (param_1[1] == param_2[1]) goto LAB_14255db56;
    lVar2 = *(longlong *)(param_1[1] + 0x20);
    lVar3 = *(longlong *)(param_2[1] + 0x20);
    if ((lVar3 == 0) == (lVar2 == 0)) {
      if ((((lVar2 != 0) && (*(ushort *)(param_1[3] + 0x30) < 0x20)) ||
          ((lVar3 != 0 && (*(ushort *)(param_2[3] + 0x30) < 0x20)))) ||
         (cVar1 = FUN_14626a19a(param_1[3] + 0x28,param_2[3] + 0x28), cVar1 == '\0')) {
        local_2c = 0;
        lVar2 = (**(code **)(*param_1 + 0xf0))(param_1,&local_2c);
        lVar3 = (**(code **)(*param_2 + 0xf0))(param_2,&local_2c);
        if (local_2c < 1) {
          cVar1 = FUN_142512600(lVar2,lVar3);
          uVar4 = CONCAT71((int7)((ulonglong)&local_2c >> 8),cVar1 != '\0');
        }
        else {
          uVar4 = 0;
        }
        if (lVar3 != 0) {
          FUN_1425121d0(lVar3);
          FUN_1401773f0(lVar3);
        }
        if (lVar2 != 0) {
          FUN_1425121d0(lVar2);
          FUN_1401773f0(lVar2);
        }
      }
      goto LAB_14255db56;
    }
  }
  uVar4 = 0;
LAB_14255db56:
  return uVar4 & 0xffffffff;
}



// FUNCTION 14255dc20 Unwind@14255dc20 body=36 status=ok
// SIG undefined Unwind@14255dc20(void)

void Unwind_14255dc20(undefined8 param_1,longlong param_2)

{
  FUN_14251f8b0(param_2 + 0x30);
  return;
}



// FUNCTION 14255dc50 Unwind@14255dc50 body=36 status=ok
// SIG undefined Unwind@14255dc50(void)

void Unwind_14255dc50(undefined8 param_1,longlong param_2)

{
  FUN_14251f8b0(param_2 + 0x28);
  return;
}



// FUNCTION 14255dc80 FUN_14255dc80 body=370 status=ok
// SIG undefined FUN_14255dc80(void)

uint FUN_14255dc80(longlong *param_1)

{
  ushort uVar1;
  longlong *plVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 local_98 [8];
  uint local_90;
  longlong local_58;
  int local_4c [3];
  
  local_4c[1] = -2;
  local_4c[2] = -1;
  uVar5 = FUN_142612f10(param_1[2]);
  if (*(longlong *)(param_1[1] + 0x20) != 0) {
    local_4c[0] = 0;
    lVar6 = (**(code **)(*param_1 + 0xf0))(param_1,local_4c);
    local_58 = lVar6;
    uVar3 = 0;
    if (local_4c[0] < 1) {
      FUN_1425ec120(local_98,lVar6);
      while ((cVar4 = FUN_1425ec210(local_98), cVar4 != '\0' && (local_90 != 0xffffffff))) {
        plVar2 = *(longlong **)param_1[1];
        if (local_90 < 0xd800) {
          lVar8 = *plVar2;
          uVar10 = (ulonglong)(local_90 >> 5);
LAB_14255dd1a:
          uVar1 = *(ushort *)(lVar8 + uVar10 * 2);
LAB_14255dd1f:
          iVar7 = (local_90 & 0x1f) + (uint)uVar1 * 4;
        }
        else {
          if (local_90 < 0x10000) {
            lVar8 = *plVar2;
            lVar9 = 0;
            if (local_90 < 0xdc00) {
              lVar9 = 0x140;
            }
            uVar10 = lVar9 + (ulonglong)(local_90 >> 5);
            goto LAB_14255dd1a;
          }
          iVar7 = 0x80;
          if (local_90 < 0x110000) {
            if (*(int *)((longlong)plVar2 + 0x2c) <= (int)local_90) {
              iVar7 = (int)plVar2[6];
              goto LAB_14255dd25;
            }
            uVar1 = *(ushort *)
                     (*plVar2 +
                     ((ulonglong)(local_90 >> 5 & 0x3f) +
                     (ulonglong)*(ushort *)(*plVar2 + 0x1040 + (ulonglong)(local_90 >> 0xb) * 2)) *
                     2);
            goto LAB_14255dd1f;
          }
        }
LAB_14255dd25:
        uVar5 = uVar5 ^ *(uint *)(plVar2[2] + (longlong)iVar7 * 4);
      }
      FUN_1425ec1d0(local_98);
      uVar3 = uVar5;
    }
    uVar5 = uVar3;
    if (lVar6 != 0) {
      FUN_1425121d0(lVar6);
      FUN_1401773f0(lVar6);
    }
  }
  return uVar5;
}



// FUNCTION 14255de10 Unwind@14255de10 body=52 status=ok
// SIG undefined Unwind@14255de10(void)

void Unwind_14255de10(undefined8 param_1,longlong param_2)

{
  FUN_1425ec1d0(param_2 + 0x20);
  return;
}



// FUNCTION 14255de50 Unwind@14255de50 body=52 status=ok
// SIG undefined Unwind@14255de50(void)

void Unwind_14255de50(undefined8 param_1,longlong param_2)

{
  FUN_14251f8b0(param_2 + 0x60);
  return;
}



// FUNCTION 14255de90 FUN_14255de90 body=58 status=ok
// SIG undefined FUN_14255de90(void)

void FUN_14255de90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = FUN_1424a3f70(param_4,*(longlong *)(param_1 + 0x18) + 0x68);
  *(bool *)(param_1 + 0x10c) = cVar1 == '\0';
  FUN_1424a3d10(param_1 + 0x28,param_3);
  return;
}



// FUNCTION 14255ded0 FUN_14255ded0 body=93 status=ok
// SIG undefined FUN_14255ded0(void)

undefined8 FUN_14255ded0(longlong param_1,undefined8 param_2,int param_3,int *param_4)

{
  longlong lVar1;
  
  if (*param_4 < 1) {
    if (param_3 == 1) {
      lVar1 = param_1 + 0x28;
      goto LAB_14255dee6;
    }
    if (param_3 == 0) {
      lVar1 = *(longlong *)(param_1 + 0x18) + 0x68;
      if (*(char *)(param_1 + 0x10c) != '\0') {
        lVar1 = param_1 + 0x28;
      }
      goto LAB_14255dee6;
    }
    *param_4 = 1;
  }
  lVar1 = FUN_1424a42e0();
LAB_14255dee6:
  FUN_1424a3ce0(param_2,lVar1);
  return param_2;
}



// FUNCTION 14255df30 FUN_14255df30 body=9 status=ok
// SIG undefined FUN_14255df30(void)

longlong FUN_14255df30(longlong param_1)

{
  return *(longlong *)(param_1 + 0x18) + 0x28;
}



// FUNCTION 14255df40 FUN_14255df40 body=17 status=ok
// SIG undefined FUN_14255df40(void)

void FUN_14255df40(longlong param_1,char *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x148);
  *(undefined4 *)param_2 = uVar1;
  *param_2 = (char)uVar1 + -0x70;
  return;
}



// FUNCTION 14255df60 FUN_14255df60 body=209 status=ok
// SIG undefined FUN_14255df60(void)

longlong FUN_14255df60(longlong param_1,int *param_2)

{
  longlong lVar1;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined **local_80;
  undefined2 local_78;
  undefined8 local_40;
  undefined4 local_38;
  longlong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (*param_2 < 1) {
    local_28 = thunk_FUN_1424da030(200);
    if (local_28 == 0) {
      *param_2 = 7;
    }
    else {
      FUN_142511900(local_28);
      lVar1 = local_28;
      if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x20) == 0) {
        return local_28;
      }
      local_98 = 0;
      uStack_90 = 0;
      local_88 = local_28;
      local_80 = &PTR_FUN_149e18960;
      local_78 = 2;
      local_40 = 0;
      local_38 = 0;
      FUN_142613a50(&local_98,*(longlong *)(param_1 + 8),param_2);
      FUN_140859a90(&local_80);
      if (*param_2 < 1) {
        return lVar1;
      }
      FUN_1425121d0(lVar1);
      FUN_1401773f0(lVar1);
    }
  }
  return 0;
}



// FUNCTION 14255e040 Unwind@14255e040 body=37 status=ok
// SIG undefined Unwind@14255e040(void)

void Unwind_14255e040(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x38);
  return;
}



// FUNCTION 14255e070 Unwind@14255e070 body=37 status=ok
// SIG undefined Unwind@14255e070(void)

void Unwind_14255e070(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x90));
  return;
}



// FUNCTION 14255e0a0 FUN_14255e0a0 body=49 status=ok
// SIG undefined FUN_14255e0a0(void)

void FUN_14255e0a0(longlong param_1)

{
  FUN_140859a90(param_1 + 0x1b8);
  FUN_1425121d0(param_1 + 0xf0);
  FUN_1425121d0(param_1 + 0x28);
  return;
}



// FUNCTION 14255e0e0 FUN_14255e0e0 body=162 status=ok
// SIG undefined FUN_14255e0e0(void)

uint FUN_14255e0e0(longlong param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (*param_3 < 1) {
    switch(param_2) {
    case 0:
      uVar1 = 0x800;
      break;
    case 1:
      return ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x18) & 0xc) == 0) + 0x14;
    case 2:
      uVar2 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x18) & 0x300;
      uVar1 = 0x10;
      if (uVar2 != 0) {
        uVar1 = uVar2 == 0x200 ^ 0x19;
      }
      return uVar1;
    case 3:
      uVar1 = 0x400;
      break;
    case 4:
      uVar1 = 1;
      break;
    case 5:
      return *(int *)(*(longlong *)(param_1 + 0x10) + 0x18) >> 0xc;
    case 6:
      return 0x10;
    case 7:
      uVar1 = 2;
      break;
    default:
      *param_3 = 1;
      return 0xffffffff;
    }
    return 0x11 - ((uVar1 & *(uint *)(*(longlong *)(param_1 + 0x10) + 0x18)) == 0);
  }
  return 0xffffffff;
}



// FUNCTION 14255e190 FUN_14255e190 body=488 status=ok
// SIG undefined FUN_14255e190(void)

void FUN_14255e190(longlong *param_1,ulonglong param_2,int param_3,int *param_4)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  uint uVar7;
  undefined8 uVar8;
  
  bVar3 = (byte)param_2;
  iVar4 = (**(code **)(*param_1 + 0xb8))(param_1,param_2,param_4);
  if (0 < *param_4) {
    return;
  }
  if (iVar4 == param_3) {
    *(uint *)(param_1 + 0x21) = *(uint *)(param_1 + 0x21) | 1 << (bVar3 & 0x1f);
    return;
  }
  lVar1 = param_1[2];
  lVar2 = *(longlong *)(param_1[3] + 0x20);
  if ((param_3 == -1) && (lVar1 == lVar2)) {
    *(uint *)(param_1 + 0x21) =
         *(uint *)(param_1 + 0x21) & (-2 << (bVar3 & 0x1f) | 0xfffffffeU >> 0x20 - (bVar3 & 0x1f));
    return;
  }
  iVar4 = FUN_142537cd0(lVar1);
  lVar6 = lVar1;
  if (1 < iVar4) {
    lVar6 = thunk_FUN_1424da030(0x358);
    if (lVar6 == 0) {
      *param_4 = 7;
      return;
    }
    FUN_142612c50(lVar6,lVar1);
    FUN_142537ca0(lVar1);
    param_1[2] = lVar6;
    FUN_142537c90(lVar6);
  }
  switch(param_2 & 0xffffffff) {
  case 0:
    uVar5 = *(undefined4 *)(lVar2 + 0x18);
    uVar8 = 0x800;
    break;
  case 1:
    FUN_1426139d0(lVar6,param_3,*(undefined4 *)(lVar2 + 0x18),param_4);
    goto LAB_14255e32b;
  case 2:
    FUN_142613970(lVar6,param_3,*(undefined4 *)(lVar2 + 0x18),param_4);
    goto LAB_14255e32b;
  case 3:
    uVar5 = *(undefined4 *)(lVar2 + 0x18);
    uVar8 = 0x400;
    break;
  case 4:
    uVar5 = *(undefined4 *)(lVar2 + 0x18);
    uVar8 = 1;
    break;
  case 5:
    FUN_1426138f0(lVar6,param_3,*(undefined4 *)(lVar2 + 0x18),param_4);
    goto LAB_14255e32b;
  case 6:
    if ((0x12 < param_3 + 1U) || ((0x60001U >> (param_3 + 1U & 0x1f) & 1) == 0))
    goto switchD_14255e26a_default;
    goto LAB_14255e32b;
  case 7:
    uVar5 = *(undefined4 *)(lVar2 + 0x18);
    uVar8 = 2;
    break;
  default:
switchD_14255e26a_default:
    *param_4 = 1;
    return;
  }
  FUN_142613930(lVar6,uVar8,param_3,uVar5,param_4);
LAB_14255e32b:
  if (*param_4 < 1) {
    uVar5 = FUN_142615670(param_1[1],lVar6,lVar6 + 0x54,0x180);
    uVar7 = 1 << (bVar3 & 0x1f);
    *(undefined4 *)(lVar6 + 0x50) = uVar5;
    if (param_3 == -1) {
      *(uint *)(param_1 + 0x21) = *(uint *)(param_1 + 0x21) & ~uVar7;
    }
    else {
      *(uint *)(param_1 + 0x21) = *(uint *)(param_1 + 0x21) | uVar7;
    }
  }
  return;
}


