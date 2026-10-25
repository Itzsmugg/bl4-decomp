// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1425fa2f0 Unwind@1425fa2f0 body=74 status=ok
// SIG undefined Unwind@1425fa2f0(void)

void Unwind_1425fa2f0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  *(undefined ***)(lVar1 + 0x2b8) = icu_64::PluralFormat::PluralSelectorAdapter::vftable;
  puVar2 = *(undefined8 **)(lVar1 + 0x2c0);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  FUN_1426c4110(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1425fa340 Unwind@1425fa340 body=34 status=ok
// SIG undefined Unwind@1425fa340(void)

void Unwind_1425fa340(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1425fa370 Unwind@1425fa370 body=34 status=ok
// SIG undefined Unwind@1425fa370(void)

void Unwind_1425fa370(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1425fa3a0 FUN_1425fa3a0 body=179 status=ok
// SIG undefined FUN_1425fa3a0(void)

void FUN_1425fa3a0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x2a8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x2c0);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(longlong **)(param_2 + 0x2a8) == (longlong *)0x0) {
    uVar2 = FUN_140236d20(param_1 + 0x148,&local_1c);
  }
  else {
    uVar2 = (**(code **)(**(longlong **)(param_2 + 0x2a8) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x2a8) = uVar2;
  if (*(longlong *)(param_2 + 0x2c0) == 0) {
    uVar2 = FUN_1424c0d30(param_1 + 0x148,&local_1c);
  }
  else {
    uVar2 = FUN_1424bfb70();
  }
  *(undefined8 *)(param_1 + 0x2c0) = uVar2;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 1425fa460 FUN_1425fa460 body=105 status=ok
// SIG undefined FUN_1425fa460(void)

undefined8
FUN_1425fa460(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,int *param_5
             )

{
  char cVar1;
  
  if (*param_5 < 1) {
    cVar1 = FUN_14252d150(param_2);
    if (cVar1 == '\0') {
      *param_5 = 1;
    }
    else {
      param_3 = FUN_1425fa4d0(param_1,param_2,*(undefined8 *)(param_2 + 8),param_3,param_4,param_5);
    }
  }
  return param_3;
}



// FUNCTION 1425fa4d0 FUN_1425fa4d0 body=924 status=ok
// SIG undefined FUN_1425fa4d0(void)

undefined8
FUN_1425fa4d0(longlong param_1,undefined8 param_2,double param_3,undefined8 param_4,
             undefined8 param_5,int *param_6)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  undefined8 in_stack_fffffffffffffdd8;
  uint uVar9;
  undefined **local_210;
  undefined1 local_208 [144];
  undefined1 local_178 [72];
  undefined1 local_130 [112];
  undefined **local_c0;
  short local_b8;
  int local_b4;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  uVar9 = (uint)((ulonglong)in_stack_fffffffffffffdd8 >> 0x20);
  local_70 = 0xfffffffffffffffe;
  if (*param_6 < 1) {
    local_78 = param_4;
    if (*(int *)(param_1 + 0x288) == 0) {
      param_4 = (**(code **)(**(longlong **)(param_1 + 0x2a8) + 0x28))
                          (*(longlong **)(param_1 + 0x2a8),param_2,param_4,param_5,param_6);
    }
    else {
      dVar1 = *(double *)(param_1 + 0x2b0);
      FUN_142573c40(&local_210,0);
      local_210 = icu_64::number::impl::UFormattedNumberData::vftable;
      FUN_142537d10(local_178);
      if ((*(double *)(param_1 + 0x2b0) != 0.0) || (NAN(*(double *)(param_1 + 0x2b0)))) {
        FUN_142539590(local_178);
      }
      else {
        FUN_14252d4f0(param_2,local_178,param_6);
      }
      local_c0 = &PTR_FUN_149e18960;
      local_b8 = 2;
      lVar5 = __RTDynamicCast(*(undefined8 *)(param_1 + 0x2a8),0,
                              &icu_64::NumberFormat::RTTI_Type_Descriptor,
                              &icu_64::DecimalFormat::RTTI_Type_Descriptor,(ulonglong)uVar9 << 0x20)
      ;
      if (lVar5 == 0) {
        uVar6 = *(undefined8 *)(param_1 + 0x2a8);
        if ((*(double *)(param_1 + 0x2b0) != 0.0) || (NAN(*(double *)(param_1 + 0x2b0)))) {
          FUN_14252c8b0(local_130,param_3 - dVar1);
          FUN_142537ad0(uVar6,local_130,&local_c0,param_6);
          FUN_14252d110(local_130);
        }
        else {
          FUN_142537ad0(uVar6,param_2,&local_c0,param_6);
        }
      }
      else {
        uVar6 = FUN_1424ca2f0(lVar5);
        FUN_142569a70(uVar6,&local_210,param_6);
        FUN_14260a270(local_208,local_130);
        FUN_1424a7ca0(&local_c0,local_130);
        FUN_140859a90(local_130);
      }
      iVar4 = FUN_1425fab10(param_1 + 0x228,0,param_1 + 0x2b8,local_178,param_3,param_6);
      if (*param_6 < 1) {
        local_80 = param_1 + 0x238;
        lVar5 = *(longlong *)(param_1 + 0x280);
        iVar8 = (uint)*(ushort *)(lVar5 + 8 + (longlong)iVar4 * 0x10) +
                *(int *)(lVar5 + 4 + (longlong)iVar4 * 0x10);
        while( true ) {
          lVar7 = ((longlong)iVar4 + 1) * 0x10;
          iVar2 = *(int *)(lVar5 + lVar7);
          iVar3 = *(int *)(lVar5 + 4 + lVar7);
          if (iVar2 == 1) break;
          iVar4 = iVar4 + 1;
          if (iVar2 == 4) {
LAB_1425fa755:
            FUN_1424a9690(local_78,local_80,iVar8,iVar3 - iVar8);
            if (iVar2 == 4) {
              iVar8 = local_b4;
              if (-1 < local_b8) {
                iVar8 = (int)local_b8 >> 5;
              }
              FUN_1424a9690(local_78,&local_c0,0,iVar8);
            }
            iVar8 = (uint)*(ushort *)(lVar5 + 8 + lVar7) + *(int *)(lVar5 + lVar7 + 4);
            lVar5 = *(longlong *)(param_1 + 0x280);
          }
          else {
            if (iVar2 == 5) {
              FUN_1424a9690(local_78,local_80,iVar8,iVar3 - iVar8);
              lVar5 = *(longlong *)(param_1 + 0x280);
              iVar8 = *(int *)(lVar5 + 0xc + lVar7);
              if (iVar4 < iVar8) {
                iVar4 = iVar8;
              }
              iVar8 = (uint)*(ushort *)(lVar5 + 8 + (longlong)iVar4 * 0x10) +
                      *(int *)(lVar5 + 4 + (longlong)iVar4 * 0x10);
              FUN_1426c6490(local_80,iVar3,iVar8,local_78);
            }
            else if ((iVar2 == 2) && (*(int *)(param_1 + 0x230) == 1)) goto LAB_1425fa755;
            lVar5 = *(longlong *)(param_1 + 0x280);
          }
        }
        local_78 = FUN_1424a9690(local_78,local_80,iVar8,iVar3 - iVar8);
      }
      FUN_140859a90(&local_c0);
      FUN_142564760(&local_210);
      param_4 = local_78;
    }
  }
  return param_4;
}



// FUNCTION 1425fa880 Unwind@1425fa880 body=76 status=ok
// SIG undefined Unwind@1425fa880(void)

void Unwind_1425fa880(undefined8 param_1,longlong param_2)

{
  FUN_142573ca0(param_2 + 0x38);
  return;
}



// FUNCTION 1425fa8d0 Unwind@1425fa8d0 body=81 status=ok
// SIG undefined Unwind@1425fa8d0(void)

void Unwind_1425fa8d0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x188);
  return;
}



// FUNCTION 1425fa930 Unwind@1425fa930 body=76 status=ok
// SIG undefined Unwind@1425fa930(void)

void Unwind_1425fa930(undefined8 param_1,longlong param_2)

{
  FUN_142564760(param_2 + 0x38);
  return;
}



// FUNCTION 1425fa980 Unwind@1425fa980 body=81 status=ok
// SIG undefined Unwind@1425fa980(void)

void Unwind_1425fa980(undefined8 param_1,longlong param_2)

{
  FUN_14252d110(param_2 + 0x118);
  return;
}



// FUNCTION 1425fa9e0 FUN_1425fa9e0 body=187 status=ok
// SIG undefined FUN_1425fa9e0(void)

undefined8 FUN_1425fa9e0(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 local_f8 [112];
  undefined **local_88;
  undefined2 local_80;
  undefined **local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_48 = icu_64::FieldPosition::vftable;
  local_40 = 0xffffffff;
  local_38 = 0;
  local_88 = &PTR_FUN_149e18960;
  local_80 = 2;
  FUN_14252c960(local_f8,param_3);
  uVar1 = FUN_1425fa4d0(param_1,local_f8,(double)param_3,&local_88,&local_48,param_4);
  FUN_1424a6be0(param_2,uVar1);
  FUN_14252d110(local_f8);
  FUN_140859a90(&local_88);
  thunk_FUN_1424b70d0(&local_48);
  return param_2;
}



// FUNCTION 1425faaa0 Unwind@1425faaa0 body=43 status=ok
// SIG undefined Unwind@1425faaa0(void)

void Unwind_1425faaa0(undefined8 param_1,longlong param_2)

{
  FUN_14252d110(param_2 + 0x30);
  return;
}



// FUNCTION 1425faad0 Unwind@1425faad0 body=52 status=ok
// SIG undefined Unwind@1425faad0(void)

void Unwind_1425faad0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xa0);
  thunk_FUN_1424b70d0(param_2 + 0xe0);
  return;
}



// FUNCTION 1425fab10 FUN_1425fab10 body=1038 status=ok
// SIG undefined FUN_1425fab10(void)

int FUN_1425fab10(longlong param_1,int param_2,longlong *param_3,undefined8 param_4,double param_5,
                 int *param_6)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined8 uVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 local_160 [64];
  undefined1 local_120 [8];
  ushort local_118;
  undefined1 local_116 [2];
  uint local_114;
  undefined1 *local_108;
  undefined **local_e0;
  ushort local_d8;
  undefined1 local_d6 [2];
  uint local_d4;
  undefined1 *local_c8;
  undefined8 local_a0;
  longlong *local_98;
  longlong local_90;
  int local_88;
  int local_84;
  undefined8 local_80;
  
  local_80 = 0xfffffffffffffffe;
  local_84 = 0;
  if (*param_6 < 1) {
    local_88 = *(int *)(param_1 + 0x60);
    uVar14 = 0;
    uVar15 = 0;
    local_a0 = param_4;
    if ((*(uint *)(*(longlong *)(param_1 + 0x58) + (longlong)param_2 * 0x10) & 0xfffffffe) == 0xc) {
      uVar12 = FUN_1426c5210(param_1,*(longlong *)(param_1 + 0x58) + (longlong)param_2 * 0x10);
      uVar14 = (undefined4)uVar12;
      uVar15 = (undefined4)((ulonglong)uVar12 >> 0x20);
      param_2 = param_2 + 1;
    }
    local_e0 = &PTR_FUN_149e18960;
    local_d8 = 2;
    local_84 = 0;
    local_98 = param_3;
    FUN_1424a7060(local_120,0,L"other",5);
    local_90 = param_1 + 0x10;
    lVar10 = *(longlong *)(param_1 + 0x58);
    bVar11 = false;
    do {
      lVar9 = (longlong)param_2 * 0x10;
      iVar8 = local_84;
      if (*(int *)(lVar10 + lVar9) == 6) break;
      iVar8 = param_2 + 1;
      lVar5 = (longlong)iVar8;
      if ((*(uint *)(lVar10 + lVar5 * 0x10) & 0xfffffffe) == 0xc) {
        dVar13 = (double)FUN_1426c5210(param_1,lVar10 + lVar5 * 0x10);
        iVar8 = param_2 + 2;
        if ((dVar13 == param_5) && (!NAN(dVar13) && !NAN(param_5))) break;
        lVar5 = (longlong)iVar8;
      }
      else if (bVar11) {
LAB_1425fac15:
        bVar11 = true;
      }
      else {
        if ((local_118 & 1) == 0) {
          uVar3 = local_114;
          if (-1 < (short)local_118) {
            uVar3 = (int)(short)local_118 >> 5;
          }
          uVar7 = 0;
          if (0 < (int)uVar3) {
            uVar7 = uVar3;
          }
          puVar6 = local_116;
          if ((local_118 & 2) == 0) {
            puVar6 = local_108;
          }
          cVar2 = FUN_1424a7e30(local_90,*(undefined4 *)(lVar10 + 4 + lVar9),
                                *(undefined2 *)(lVar10 + 8 + lVar9),puVar6,
                                (int)uVar3 >> 0x1f & uVar3,uVar7);
        }
        else {
          cVar2 = (*(byte *)(param_1 + 0x18) & 1) == 0;
        }
        if (cVar2 == '\0') {
          if (local_84 == 0) {
            if ((local_118 & 1) == 0) {
              uVar3 = local_d4;
              if (-1 < (short)local_d8) {
                uVar3 = (int)(short)local_d8 >> 5;
              }
              uVar7 = local_114;
              if (-1 < (short)local_118) {
                uVar7 = (int)(short)local_118 >> 5;
              }
              uVar4 = 0;
              if (0 < (int)uVar7) {
                uVar4 = uVar7;
              }
              puVar6 = local_116;
              if ((local_118 & 2) == 0) {
                puVar6 = local_108;
              }
              cVar2 = FUN_1424a7e30(&local_e0,0,uVar3,puVar6,(int)uVar7 >> 0x1f & uVar7,uVar4);
            }
            else {
              cVar2 = (local_d8 & 1) == 0;
            }
            bVar11 = cVar2 == '\0';
            local_84 = iVar8;
          }
          else {
            bVar11 = false;
          }
        }
        else {
          if (local_d8 < 0x20) {
            (**(code **)(*local_98 + 8))
                      (local_98,local_160,local_a0,param_5 - (double)CONCAT44(uVar15,uVar14),param_6
                      );
            FUN_1424a7ca0(&local_e0,local_160);
            FUN_140859a90(local_160);
            if (local_84 != 0) {
              if ((local_118 & 1) == 0) {
                uVar3 = local_d4;
                if (-1 < (short)local_d8) {
                  uVar3 = (int)(short)local_d8 >> 5;
                }
                uVar7 = local_114;
                if (-1 < (short)local_118) {
                  uVar7 = (int)(short)local_118 >> 5;
                }
                uVar4 = 0;
                if (0 < (int)uVar7) {
                  uVar4 = uVar7;
                }
                puVar6 = local_116;
                if ((local_118 & 2) == 0) {
                  puVar6 = local_108;
                }
                cVar2 = FUN_1424a7e30(&local_e0,0,uVar3,puVar6,(int)uVar7 >> 0x1f & uVar7,uVar4);
              }
              else {
                cVar2 = (local_d8 & 1) == 0;
              }
              if (cVar2 == '\0') goto LAB_1425fac15;
            }
          }
          if ((local_d8 & 1) == 0) {
            uVar3 = local_d4;
            if (-1 < (short)local_d8) {
              uVar3 = (int)(short)local_d8 >> 5;
            }
            uVar7 = 0;
            if (0 < (int)uVar3) {
              uVar7 = uVar3;
            }
            puVar6 = local_d6;
            if ((local_d8 & 2) == 0) {
              puVar6 = local_c8;
            }
            cVar2 = FUN_1424a7e30(local_90,*(undefined4 *)(lVar10 + 4 + lVar9),
                                  *(undefined2 *)(lVar10 + 8 + lVar9),puVar6,
                                  (int)uVar3 >> 0x1f & uVar3,uVar7);
          }
          else {
            cVar2 = (*(byte *)(param_1 + 0x18) & 1) == 0;
          }
          bVar11 = cVar2 == '\0';
          if (bVar11) {
            local_84 = iVar8;
          }
        }
      }
      lVar10 = *(longlong *)(param_1 + 0x58);
      iVar1 = *(int *)(lVar10 + 0xc + lVar5 * 0x10);
      if (iVar8 < iVar1) {
        iVar8 = iVar1;
      }
      param_2 = iVar8 + 1;
      iVar8 = local_84;
    } while (param_2 < local_88);
    local_84 = iVar8;
    FUN_140859a90(local_120);
    FUN_140859a90(&local_e0);
  }
  return local_84;
}



// FUNCTION 1425faf30 Unwind@1425faf30 body=92 status=ok
// SIG undefined Unwind@1425faf30(void)

void Unwind_1425faf30(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x78);
  return;
}



// FUNCTION 1425faf90 Unwind@1425faf90 body=89 status=ok
// SIG undefined Unwind@1425faf90(void)

void Unwind_1425faf90(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xb8);
  return;
}



// FUNCTION 1425faff0 FUN_1425faff0 body=64 status=ok
// SIG undefined FUN_1425faff0(void)

longlong FUN_1425faff0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = thunk_FUN_1424da030(0x2c8);
  if (lVar1 != 0) {
    FUN_1425fa240(lVar1,param_1);
  }
  return lVar1;
}



// FUNCTION 1425fb030 Unwind@1425fb030 body=32 status=ok
// SIG undefined Unwind@1425fb030(void)

void Unwind_1425fb030(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1425fb050 FUN_1425fb050 body=195 status=ok
// SIG undefined FUN_1425fb050(void)

bool FUN_1425fb050(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  
  if (param_1 == param_2) {
    return true;
  }
  cVar2 = FUN_142537b80();
  if ((((cVar2 == '\0') || (cVar2 = FUN_1424a3f70(param_1 + 0x148,param_2 + 0x148), cVar2 == '\0'))
      || (cVar2 = FUN_1426c4fc0(param_1 + 0x228,param_2 + 0x228), cVar2 == '\0')) ||
     ((plVar1 = *(longlong **)(param_1 + 0x2a8),
      (plVar1 == (longlong *)0x0) == (*(longlong *)(param_2 + 0x2a8) != 0) ||
      ((plVar1 != (longlong *)0x0 && (cVar2 = (**(code **)(*plVar1 + 0x10))(), cVar2 == '\0')))))) {
    return false;
  }
  plVar1 = *(longlong **)(param_1 + 0x2c0);
  bVar3 = (*(longlong *)(param_2 + 0x2c0) == 0) == (plVar1 == (longlong *)0x0);
  if (plVar1 == (longlong *)0x0) {
    return bVar3;
  }
  if (*(longlong *)(param_2 + 0x2c0) == 0) {
    return bVar3;
  }
  cVar2 = (**(code **)(*plVar1 + 0x10))();
  return cVar2 != '\0';
}



// FUNCTION 1425fb120 FUN_1425fb120 body=20 status=ok
// SIG undefined FUN_1425fb120(void)

bool FUN_1425fb120(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x10))();
  return cVar1 == '\0';
}



// FUNCTION 1425fb140 FUN_1425fb140 body=9 status=ok
// SIG undefined FUN_1425fb140(void)

void FUN_1425fb140(void)

{
  longlong in_R9;
  
  *(undefined4 *)(in_R9 + 0xc) = *(undefined4 *)(in_R9 + 8);
  return;
}



// FUNCTION 1425fb150 FUN_1425fb150 body=791 status=ok
// SIG undefined FUN_1425fb150(void)

void FUN_1425fb150(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  longlong param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined1 *puVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  undefined4 local_170 [16];
  undefined **local_130;
  undefined2 local_128;
  undefined **local_f0;
  short local_e8;
  int local_e4;
  undefined1 local_b0 [8];
  ushort local_a8;
  undefined1 local_a6 [2];
  int local_a4;
  undefined1 *local_98;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  int local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  iVar1 = *(int *)(param_1 + 0x288);
  if (iVar1 == 0) {
    *(undefined8 *)(param_5 + 0xc) = 0xffffffffffffffff;
    return;
  }
  iVar11 = *(int *)(param_5 + 0xc);
  iVar7 = 0;
  if (iVar11 < 1) {
    iVar11 = 0;
  }
  local_130 = &PTR_FUN_149e18960;
  local_128 = 2;
  local_f0 = &PTR_FUN_149e18960;
  local_e8 = 2;
  local_50 = -1;
  lVar5 = param_1 + 0x238;
  do {
    lVar2 = *(longlong *)(param_1 + 0x280);
    do {
      do {
        do {
          iVar9 = iVar7;
          if (iVar1 <= iVar9) {
            if (local_50 < 0) {
              *(undefined8 *)(param_5 + 0xc) = 0xffffffffffffffff;
            }
            else {
              *(int *)(param_5 + 0xc) = local_50;
              if (-1 < local_e8) {
                local_e4 = (int)local_e8 >> 5;
              }
              *(int *)(param_5 + 0x10) = local_e4 + local_50;
              FUN_14252d3d0(param_4,&local_130);
            }
            FUN_140859a90(&local_f0);
            FUN_140859a90(&local_130);
            return;
          }
          iVar7 = iVar9 + 1;
        } while (*(int *)(lVar2 + (longlong)iVar9 * 0x10) != 0xb);
        lVar10 = (longlong)(iVar9 + 1) * 0x10;
        iVar7 = iVar9 + 2;
      } while (*(int *)(lVar2 + lVar10) != 0);
      iVar7 = iVar9 + 3;
      lVar8 = (longlong)(iVar9 + 2) * 0x10;
    } while (*(int *)(lVar2 + lVar8) != 1);
    iVar9 = (uint)*(ushort *)(lVar2 + 8 + lVar10) + *(int *)(lVar2 + 4 + lVar10);
    local_70 = param_4;
    local_68 = param_3;
    local_60 = param_2;
    local_58 = lVar5;
    FUN_1424a84d0(lVar5,local_b0,iVar9,*(int *)(lVar2 + 4 + lVar8) - iVar9);
    if (local_68 == 0) {
      if (*(short *)(local_60 + 8) < 0) {
        iVar9 = *(int *)(local_60 + 0xc);
      }
      else {
        iVar9 = (int)*(short *)(local_60 + 8) >> 5;
      }
      iVar4 = iVar11;
      if (iVar9 < iVar11) {
        iVar4 = iVar9;
      }
      if ((local_a8 & 1) == 0) {
        iVar3 = local_a4;
        if (-1 < (short)local_a8) {
          iVar3 = (int)(short)local_a8 >> 5;
        }
        if (0 < iVar3) {
          puVar6 = local_a6;
          if ((local_a8 & 2) == 0) {
            puVar6 = local_98;
          }
          local_4c = FUN_1424a8860(local_60,puVar6,0,iVar3,iVar4,iVar9 - iVar4);
          goto LAB_1425fb293;
        }
      }
    }
    else {
      local_170[0] = 0xffffffff;
      local_4c = FUN_1425f5520(local_68,local_60,local_b0,iVar11,local_170);
LAB_1425fb293:
      if ((-1 < local_4c) && (local_50 <= local_4c)) {
        iVar9 = local_a4;
        if (-1 < (short)local_a8) {
          iVar9 = (int)(short)local_a8 >> 5;
        }
        iVar4 = local_e4;
        if (-1 < local_e8) {
          iVar4 = (int)local_e8 >> 5;
        }
        if (iVar4 < iVar9) {
          FUN_1424a7c80(&local_f0,local_b0);
          iVar9 = (uint)*(ushort *)(lVar2 + lVar10 + 8) + *(int *)(lVar2 + lVar10 + 4);
          FUN_1424a84d0(local_58,local_170,iVar9,*(int *)(lVar2 + lVar8 + 4) - iVar9);
          FUN_1424a7ca0(&local_130,local_170);
          FUN_140859a90(local_170);
          local_50 = local_4c;
        }
      }
    }
    FUN_140859a90(local_b0);
    lVar5 = local_58;
    param_2 = local_60;
    param_3 = local_68;
    param_4 = local_70;
  } while( true );
}



// FUNCTION 1425fb470 Unwind@1425fb470 body=55 status=ok
// SIG undefined Unwind@1425fb470(void)

void Unwind_1425fb470(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xf8);
  return;
}



// FUNCTION 1425fb4b0 Unwind@1425fb4b0 body=64 status=ok
// SIG undefined Unwind@1425fb4b0(void)

void Unwind_1425fb4b0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xb8);
  FUN_140859a90(param_2 + 0x78);
  return;
}



// FUNCTION 1425fb4f0 FUN_1425fb4f0 body=1 status=ok
// SIG undefined FUN_1425fb4f0(void)

void FUN_1425fb4f0(void)

{
  return;
}



// FUNCTION 1425fb500 FUN_1425fb500 body=26 status=ok
// SIG undefined FUN_1425fb500(void)

undefined8 FUN_1425fb500(longlong param_1,undefined8 param_2)

{
  FUN_1424c1400(*(undefined8 *)(param_1 + 8));
  return param_2;
}



// FUNCTION 1425fb520 FUN_1425fb520 body=133 status=ok
// SIG undefined FUN_1425fb520(void)

undefined8 * FUN_1425fb520(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::PluralFormat::vftable;
  puVar1 = (undefined8 *)param_1[0x55];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[0x57] = icu_64::PluralFormat::PluralSelectorAdapter::vftable;
  puVar1 = (undefined8 *)param_1[0x58];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1426c4110(param_1 + 0x45);
  FUN_1414b3f60(param_1 + 0x29);
  thunk_FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425fb5b0 FUN_1425fb5b0 body=62 status=ok
// SIG undefined FUN_1425fb5b0(void)

undefined8 * FUN_1425fb5b0(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::PluralFormat::PluralSelectorAdapter::vftable;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425fb5f0 thunk_FUN_140859a90 body=5 status=ok
// SIG undefined thunk_FUN_140859a90(void)

void thunk_FUN_140859a90(undefined8 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_149e18960;
  if ((*(byte *)(param_1 + 1) & 4) != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + -4);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_1424da110(param_1[3] + -4);
    }
  }
  FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 1425fb600 FUN_1425fb600 body=867 status=ok
// SIG undefined FUN_1425fb600(void)

void FUN_1425fb600(longlong param_1,longlong param_2,int param_3,int param_4,int *param_5)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  int local_64;
  int local_60;
  int local_5c;
  longlong local_58;
  short local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (0 < *param_5) goto LAB_1425fb962;
  uVar1 = *(ushort *)(param_2 + 8);
  if ((uVar1 & 0x11) == 0) {
    if ((uVar1 & 2) != 0) {
      lVar10 = param_2 + 10;
      goto joined_r0x0001425fb665;
    }
    lVar10 = *(longlong *)(param_2 + 0x18);
    if ((short)uVar1 < 0) goto LAB_1425fb649;
LAB_1425fb667:
    iVar4 = (int)(short)uVar1 >> 5;
  }
  else {
    lVar10 = 0;
joined_r0x0001425fb665:
    if (-1 < (short)uVar1) goto LAB_1425fb667;
LAB_1425fb649:
    iVar4 = *(int *)(param_2 + 0xc);
  }
  local_4a = 0;
  FUN_1424a8e40(param_1);
  if (*(short *)(param_1 + 8) < 0) {
    iVar9 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar9 = (int)*(short *)(param_1 + 8) >> 5;
  }
  local_70 = 1;
  local_78 = 0;
  FUN_1424a9130(param_1,0,iVar9,&local_4a);
  if (iVar4 < 1) {
    iVar4 = -1;
    if (-1 < param_4) goto LAB_1425fb6ea;
  }
  else {
    local_58 = (longlong)iVar4;
    local_64 = -1;
    bVar2 = false;
    uVar11 = 0;
    iVar9 = 0;
    local_60 = param_4;
    local_5c = param_3;
    do {
      iVar8 = iVar9 + 1;
      sVar7 = *(short *)(lVar10 + (longlong)iVar9 * 2);
      if (sVar7 == 0x27) {
        sVar7 = 0x27;
        if ((iVar8 < iVar4) && (sVar7 = *(short *)(lVar10 + (longlong)iVar8 * 2), sVar7 == 0x27)) {
          sVar7 = 0x27;
        }
        else {
          if (bVar2) {
            bVar2 = false;
            goto LAB_1425fb74e;
          }
          if ((sVar7 != 0x7d) && (sVar7 != 0x7b)) {
            sVar7 = 0x27;
            bVar2 = false;
            goto joined_r0x0001425fb711;
          }
          bVar2 = true;
        }
        iVar8 = iVar9 + 2;
joined_r0x0001425fb711:
        if (uVar11 == 0) {
          local_4a = -1;
          FUN_1424a6cf0(param_1,&local_4a,0,1);
        }
        local_4a = sVar7;
        FUN_1424a6cf0(param_1,&local_4a,0,1);
        uVar11 = uVar11 + 1;
        if (uVar11 == 0xfeff) {
          uVar11 = 0;
        }
      }
      else {
        if ((bVar2) || (sVar7 != 0x7b)) goto joined_r0x0001425fb711;
        if (0 < (int)uVar11) {
          if (*(short *)(param_1 + 8) < 0) {
            iVar3 = *(int *)(param_1 + 0xc);
          }
          else {
            iVar3 = (int)*(short *)(param_1 + 8) >> 5;
          }
          FUN_1424a9010(param_1,~uVar11 + iVar3,uVar11 + 0x100);
          uVar11 = 0;
        }
        lVar5 = (longlong)(iVar9 + 2);
        if (((iVar4 <= iVar9 + 2) ||
            (iVar3 = *(ushort *)(lVar10 + (longlong)iVar8 * 2) - 0x30, 9 < (ushort)iVar3)) ||
           (*(short *)(lVar10 + lVar5 * 2) != 0x7d)) {
          if ((iVar8 < iVar4) &&
             (uVar1 = *(ushort *)(lVar10 + (longlong)iVar8 * 2), (ushort)(uVar1 - 0x31) < 9)) {
            iVar3 = uVar1 - 0x30;
            lVar6 = 0;
            while( true ) {
              if (local_58 - lVar5 == lVar6) goto LAB_1425fb8fe;
              uVar1 = *(ushort *)(lVar5 * 2 + lVar10 + lVar6 * 2);
              if (9 < (ushort)(uVar1 - 0x30)) break;
              iVar3 = (uint)uVar1 + iVar3 * 10 + -0x30;
              lVar6 = lVar6 + 1;
              if (0xff < iVar3) goto LAB_1425fb8fe;
            }
            if ((-1 < iVar3) && (uVar1 == 0x7d)) {
              iVar8 = iVar9 + 3 + (int)lVar6;
              goto LAB_1425fb8cc;
            }
          }
LAB_1425fb8fe:
          *param_5 = 1;
          goto LAB_1425fb962;
        }
        iVar8 = iVar9 + 3;
LAB_1425fb8cc:
        if (local_64 < iVar3) {
          local_64 = iVar3;
        }
        local_4a = (short)iVar3;
        bVar2 = false;
        FUN_1424a6cf0(param_1,&local_4a,0,1);
      }
LAB_1425fb74e:
      iVar9 = iVar8;
    } while (iVar8 < iVar4);
    if (0 < (int)uVar11) {
      if (*(short *)(param_1 + 8) < 0) {
        iVar4 = *(int *)(param_1 + 0xc);
      }
      else {
        iVar4 = (int)*(short *)(param_1 + 8) >> 5;
      }
      FUN_1424a9010(param_1,~uVar11 + iVar4,uVar11 + 0x100);
    }
    iVar4 = local_64;
    param_3 = local_5c;
    if (local_64 < local_60) {
LAB_1425fb6ea:
      if (param_3 <= iVar4 + 1) {
        FUN_1424a9010(param_1,0);
        goto LAB_1425fb962;
      }
    }
  }
  *param_5 = 1;
LAB_1425fb962:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
}



// FUNCTION 1425fb990 FUN_1425fb990 body=201 status=ok
// SIG undefined FUN_1425fb990(void)

void FUN_1425fb990(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined4 local_30;
  int *local_28;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = param_2;
  if (*param_4 < 1) {
    uVar1 = *(ushort *)(param_1 + 8);
    if ((short)uVar1 < 0) {
      iVar2 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar2 = (int)(short)uVar1 >> 5;
    }
    if (((int)(short)uVar1 & 0x11U) == 0) {
      if ((uVar1 & 2) == 0) {
        puVar3 = *(ushort **)(param_1 + 0x18);
      }
      else {
        puVar3 = (ushort *)(param_1 + 10);
      }
    }
    else {
      puVar3 = (ushort *)0x0;
    }
    if ((iVar2 == 0) || (*puVar3 < 2)) {
      if ((uVar1 & 0x11) == 0) {
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
      local_30 = 0;
      local_38 = 0;
      local_40 = 1;
      local_48 = 0;
      local_28 = param_4;
      FUN_1425fbb60(param_1,iVar2,&local_18,param_3);
    }
    else {
      *param_4 = 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_68);
}



// FUNCTION 1425fba70 FUN_1425fba70 body=218 status=ok
// SIG undefined FUN_1425fba70(void)

void FUN_1425fba70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int *param_5)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined4 local_40;
  int *local_38;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = param_2;
  local_20 = param_3;
  if (*param_5 < 1) {
    uVar1 = *(ushort *)(param_1 + 8);
    if ((short)uVar1 < 0) {
      iVar2 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar2 = (int)(short)uVar1 >> 5;
    }
    if (((int)(short)uVar1 & 0x11U) == 0) {
      if ((uVar1 & 2) == 0) {
        puVar3 = *(ushort **)(param_1 + 0x18);
      }
      else {
        puVar3 = (ushort *)(param_1 + 10);
      }
    }
    else {
      puVar3 = (ushort *)0x0;
    }
    if ((iVar2 == 0) || (*puVar3 < 3)) {
      if ((uVar1 & 0x11) == 0) {
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
      local_38 = param_5;
      local_40 = 0;
      local_48 = 0;
      local_50 = 1;
      local_58 = 0;
      FUN_1425fbb60(param_1,iVar2,&local_28,param_4);
    }
    else {
      *param_5 = 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_78);
}



// FUNCTION 1425fbb60 FUN_1425fbb60 body=434 status=ok
// SIG undefined FUN_1425fbb60(void)

longlong FUN_1425fbb60(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                      longlong param_5,char param_6,void *param_7,uint param_8,int *param_9)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if (*param_9 < 1) {
    if (0 < (int)param_8) {
      memset(param_7,(int)CONCAT71((int7)((ulonglong)param_2 >> 8),0xff),(ulonglong)param_8 << 2);
    }
    if (1 < (int)param_2) {
      iVar4 = 1;
      do {
        lVar2 = (longlong)iVar4;
        iVar4 = iVar4 + 1;
        uVar1 = *(ushort *)(param_1 + lVar2 * 2);
        uVar6 = (ulonglong)uVar1;
        if (uVar1 < 0x100) {
          lVar2 = *(longlong *)(param_3 + uVar6 * 8);
          if (lVar2 == 0) {
LAB_1425fbcfc:
            *param_9 = 1;
            return param_4;
          }
          uVar5 = (uint)uVar1;
          if (lVar2 == param_4) {
            if (param_6 != '\0') goto LAB_1425fbcfc;
            if (iVar4 == 2) {
              iVar4 = 2;
              if ((int)uVar5 < (int)param_8) {
                *(undefined4 *)((longlong)param_7 + uVar6 * 4) = 0;
              }
              goto LAB_1425fbcf1;
            }
            if ((int)uVar5 < (int)param_8) {
              if (*(short *)(param_4 + 8) < 0) {
                iVar3 = *(int *)(param_4 + 0xc);
              }
              else {
                iVar3 = (int)*(short *)(param_4 + 8) >> 5;
              }
              *(int *)((longlong)param_7 + uVar6 * 4) = iVar3;
            }
            lVar2 = param_5;
            if (*(short *)(param_5 + 8) < 0) {
              iVar3 = *(int *)(param_5 + 0xc);
            }
            else {
              iVar3 = (int)*(short *)(param_5 + 8) >> 5;
            }
          }
          else {
            if ((int)uVar5 < (int)param_8) {
              if (*(short *)(param_4 + 8) < 0) {
                iVar3 = *(int *)(param_4 + 0xc);
              }
              else {
                iVar3 = (int)*(short *)(param_4 + 8) >> 5;
              }
              *(int *)((longlong)param_7 + uVar6 * 4) = iVar3;
            }
            if (*(short *)(lVar2 + 8) < 0) {
              iVar3 = *(int *)(lVar2 + 0xc);
            }
            else {
              iVar3 = (int)*(short *)(lVar2 + 8) >> 5;
            }
          }
          FUN_1424a9690(param_4,lVar2,0,iVar3);
        }
        else {
          iVar3 = uVar1 - 0x100;
          FUN_1424a6cf0(param_4,param_1 + (longlong)iVar4 * 2,0,iVar3);
          iVar4 = iVar4 + iVar3;
        }
LAB_1425fbcf1:
      } while (iVar4 < (int)param_2);
    }
  }
  return param_4;
}



// FUNCTION 1425fbd20 Unwind@1425fbd20 body=50 status=ok
// SIG undefined Unwind@1425fbd20(void)

void Unwind_1425fbd20(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_2 + 0x38);
  return;
}



// FUNCTION 1425fbd60 FUN_1425fbd60 body=444 status=ok
// SIG undefined FUN_1425fbd60(void)

longlong FUN_1425fbd60(longlong param_1,longlong param_2,uint param_3,longlong param_4,
                      longlong param_5,int param_6,int *param_7)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  undefined **local_90;
  ushort local_88;
  uint local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (0 < *param_7) {
    return param_4;
  }
  if (((int)param_3 < 0) || (param_2 == 0 && param_3 != 0)) goto LAB_1425fbdfe;
  if ((param_6 < 0) || (param_5 == 0 && param_6 != 0)) goto LAB_1425fbdfe;
  uVar1 = *(ushort *)(param_1 + 8);
  if ((uVar1 & 0x11) == 0) {
    if ((uVar1 & 2) == 0) {
      puVar4 = *(ushort **)(param_1 + 0x18);
    }
    else {
      puVar4 = (ushort *)(param_1 + 10);
    }
  }
  else {
    puVar4 = (ushort *)0x0;
  }
  if ((short)uVar1 < 0) {
    iVar5 = *(int *)(param_1 + 0xc);
    if (iVar5 == 0) goto LAB_1425fbe2a;
LAB_1425fbdf6:
    if (param_3 < *puVar4) {
LAB_1425fbdfe:
      *param_7 = 1;
      return param_4;
    }
    local_90 = &PTR_FUN_149e18960;
    local_88 = 2;
    if (*puVar4 != 0) {
      iVar6 = 1;
      local_4c = 0xffffffff;
      while (iVar6 < iVar5) {
        lVar3 = (longlong)iVar6;
        uVar2 = (uint)puVar4[lVar3];
        if (uVar2 < 0x100) {
          iVar6 = iVar6 + 1;
          if (*(longlong *)(param_2 + (ulonglong)puVar4[lVar3] * 8) == param_4) {
            if (iVar6 == 2) {
              iVar6 = 2;
              local_4c = uVar2;
            }
            else if ((local_88 < 0x20) && (0x1f < *(ushort *)(param_4 + 8))) {
              FUN_1424a7c80(&local_90,param_4);
            }
          }
        }
        else {
          iVar6 = iVar6 + uVar2 + -0xff;
        }
      }
      if (-1 < (int)local_4c) goto LAB_1425fbeea;
    }
  }
  else {
    iVar5 = (int)(short)uVar1 >> 5;
    if (iVar5 != 0) goto LAB_1425fbdf6;
LAB_1425fbe2a:
    local_90 = &PTR_FUN_149e18960;
    local_88 = 2;
  }
  uVar1 = 2;
  if ((*(ushort *)(param_4 + 8) & 1) == 0) {
    uVar1 = *(ushort *)(param_4 + 8) & 0x1f;
  }
  *(ushort *)(param_4 + 8) = uVar1;
LAB_1425fbeea:
  FUN_1425fbb60(puVar4,iVar5,param_2,param_4,&local_90,0,param_5,param_6,param_7);
  FUN_140859a90(&local_90);
  return param_4;
}



// FUNCTION 1425fbf30 Unwind@1425fbf30 body=55 status=ok
// SIG undefined Unwind@1425fbf30(void)

void Unwind_1425fbf30(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x48);
  return;
}



// FUNCTION 1425fbf70 FUN_1425fbf70 body=261 status=ok
// SIG undefined FUN_1425fbf70(void)

longlong FUN_1425fbf70(longlong param_1,ushort *param_2,int param_3,void *param_4,uint param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  
  if (0 < (int)param_5) {
    memset(param_4,(int)CONCAT71((int7)((ulonglong)param_2 >> 8),0xff),(ulonglong)param_5 << 2);
  }
  if (param_3 == 0) {
    FUN_1424a68a0(param_1,0xffffffff,0,0);
  }
  else {
    FUN_1424a68a0(param_1,~(uint)*param_2 + param_3,0,0);
    if (1 < param_3) {
      iVar3 = 1;
      do {
        lVar2 = (longlong)iVar3;
        iVar3 = iVar3 + 1;
        uVar4 = (uint)param_2[lVar2];
        if (uVar4 < 0x101) {
          if ((int)uVar4 < (int)param_5) {
            if (*(short *)(param_1 + 8) < 0) {
              iVar1 = *(int *)(param_1 + 0xc);
            }
            else {
              iVar1 = (int)*(short *)(param_1 + 8) >> 5;
            }
            *(int *)((longlong)param_4 + (ulonglong)uVar4 * 4) = iVar1;
          }
        }
        else {
          FUN_1424a6cf0(param_1,param_2 + iVar3,0,uVar4 - 0x100);
          iVar3 = iVar3 + (uVar4 - 0x100);
        }
      } while (iVar3 < param_3);
    }
  }
  return param_1;
}



// FUNCTION 1425fc080 Unwind@1425fc080 body=60 status=ok
// SIG undefined Unwind@1425fc080(void)

void Unwind_1425fc080(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_2 + 0x30);
  FUN_140859a90(*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 1425fc0c0 FUN_1425fc0c0 body=70 status=ok
// SIG undefined FUN_1425fc0c0(void)

longlong FUN_1425fc0c0(longlong param_1,uint param_2,int *param_3)

{
  longlong lVar1;
  
  if ((param_3 == (int *)0x0) || (0 < *param_3)) {
    return 0;
  }
  if ((param_2 < 10) &&
     ((lVar1 = (ulonglong)param_2 * 0x58, *(longlong *)(&DAT_149c4dca0 + lVar1) <= param_1 &&
      (param_1 <= *(longlong *)(&DAT_149c4dca8 + lVar1))))) {
    return (param_1 + *(longlong *)(&DAT_149c4dc98 + lVar1)) * *(longlong *)(&DAT_149c4dc90 + lVar1)
    ;
  }
  *param_3 = 1;
  return 0;
}



// FUNCTION 1425fc110 FUN_1425fc110 body=214 status=ok
// SIG undefined FUN_1425fc110(void)

longlong FUN_1425fc110(longlong param_1,uint param_2,int *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if ((param_3 == (int *)0x0) || (0 < *param_3)) {
    return 0;
  }
  if (((9 < param_2) ||
      (lVar3 = (ulonglong)param_2 * 0x58, param_1 < *(longlong *)(&DAT_149c4dcb0 + lVar3))) ||
     (*(longlong *)(&DAT_149c4dcb8 + lVar3) < param_1)) {
    *param_3 = 1;
    return 0;
  }
  uVar1 = *(ulonglong *)(&DAT_149c4dc90 + lVar3);
  lVar2 = *(longlong *)(&DAT_149c4dcd0 + lVar3);
  if (param_1 < 0) {
    if (param_1 < *(longlong *)(&DAT_149c4dcd8 + lVar3)) {
      uVar4 = lVar2 + param_1;
      if ((uVar4 | uVar1) >> 0x20 == 0) {
        return (uVar4 & 0xffffffff) / (uVar1 & 0xffffffff) - *(longlong *)(&DAT_149c4dcc0 + lVar3);
      }
      return (longlong)uVar4 / (longlong)uVar1 - *(longlong *)(&DAT_149c4dcc0 + lVar3);
    }
    uVar4 = param_1 - lVar2;
    if ((uVar4 | uVar1) >> 0x20 != 0) goto LAB_1425fc1ba;
    uVar4 = uVar4 & 0xffffffff;
  }
  else {
    if (*(longlong *)(&DAT_149c4dce0 + lVar3) < param_1) {
      uVar4 = param_1 - lVar2;
      if ((uVar4 | uVar1) >> 0x20 == 0) {
        return (uVar4 & 0xffffffff) / (uVar1 & 0xffffffff) - *(longlong *)(&DAT_149c4dcc8 + lVar3);
      }
      return (longlong)uVar4 / (longlong)uVar1 - *(longlong *)(&DAT_149c4dcc8 + lVar3);
    }
    uVar4 = lVar2 + param_1;
    if ((uVar4 | uVar1) >> 0x20 != 0) {
LAB_1425fc1ba:
      return (longlong)uVar4 / (longlong)uVar1 - *(longlong *)(&DAT_149c4dc98 + lVar3);
    }
  }
  return (uVar4 & 0xffffffff) / (uVar1 & 0xffffffff) - *(longlong *)(&DAT_149c4dc98 + lVar3);
}



// FUNCTION 1425fc1f0 FUN_1425fc1f0 body=1070 status=ok
// SIG undefined FUN_1425fc1f0(void)

undefined8 FUN_1425fc1f0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int unaff_EBX;
  undefined2 uVar7;
  undefined2 unaff_R12W;
  undefined2 unaff_R13W;
  undefined2 unaff_R14W;
  undefined2 unaff_R15W;
  undefined4 uVar8;
  undefined1 local_e8 [68];
  uint local_a4;
  undefined8 *local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  uint local_74;
  uint local_70;
  uint local_6c;
  undefined8 *local_68;
  undefined8 *local_60;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  FUN_1424a7000(local_e8);
  plVar5 = (longlong *)FUN_1424b7440(local_e8);
  if (plVar5 == (longlong *)0x0) goto LAB_1425fc537;
  local_74 = 0;
  local_a0 = (undefined8 *)0x0;
  local_68 = (undefined8 *)0x0;
  local_60 = (undefined8 *)0x0;
  uVar8 = FUN_1424d9690();
  (**(code **)(*plVar5 + 0x90))(plVar5,uVar8,&local_a0,&local_68,&local_60,&local_74);
  local_80 = (ulonglong)local_74;
  local_a4 = local_74;
  if ((int)local_74 < 1) {
    if ((local_68 == (undefined8 *)0x0) || (local_60 == (undefined8 *)0x0)) {
      iVar1 = FUN_1425da430(local_a0);
      iVar1 = (int)((ulonglong)((longlong)iVar1 * -0x45e7b273) >> 0x20);
      unaff_EBX = (iVar1 >> 0xe) - (iVar1 >> 0x1f);
      local_4c = 0;
      plVar5 = (longlong *)0x0;
      unaff_R13W = 0;
      unaff_R14W = 0;
      local_80 = 0;
      unaff_R15W = 0;
      unaff_R12W = 0;
      goto LAB_1425fc4f4;
    }
    iVar1 = FUN_1425da430();
    iVar2 = FUN_1425da440(local_60);
    uVar6 = FUN_1425da9b0(local_68);
    local_58 = FUN_1425db870(uVar6);
    uVar6 = FUN_1425da9b0(local_68);
    local_70 = FUN_1425db8a0(uVar6);
    uVar6 = FUN_1425da9b0(local_68);
    local_54 = FUN_1425db890(uVar6);
    uVar6 = FUN_1425da9b0(local_68);
    iVar3 = FUN_1425db8b0(uVar6);
    uVar6 = FUN_1425da9b0(local_60);
    local_50 = FUN_1425db870(uVar6);
    uVar6 = FUN_1425da9b0(local_60);
    local_6c = FUN_1425db8a0(uVar6);
    uVar6 = FUN_1425da9b0(local_60);
    local_4c = FUN_1425db890(uVar6);
    uVar6 = FUN_1425da9b0(local_60);
    iVar4 = FUN_1425db8b0(uVar6);
    iVar1 = (int)((ulonglong)((longlong)iVar1 * -0x45e7b273) >> 0x20);
    unaff_EBX = (iVar1 >> 0xe) - (iVar1 >> 0x1f);
    iVar1 = (int)((ulonglong)((longlong)iVar2 * -0x45e7b273) >> 0x20);
    local_98 = (ulonglong)(uint)((iVar1 >> 0xe) - (iVar1 >> 0x1f));
    local_90 = (ulonglong)(uint)(iVar3 / 3600000);
    unaff_R15W = (undefined2)((iVar3 % 3600000) / 60000);
    iVar1 = (iVar3 % 3600000) % 60000;
    unaff_R12W = (undefined2)(iVar1 / 1000);
    local_88 = (ulonglong)(uint)(iVar1 % 1000);
    uVar7 = (undefined2)(iVar4 / 3600000);
    unaff_R13W = (undefined2)((iVar4 % 3600000) / 60000);
    iVar1 = (iVar4 % 3600000) % 60000;
    unaff_R14W = (undefined2)(iVar1 / 1000);
    local_80 = (ulonglong)(uint)(iVar1 % 1000);
    local_58 = local_58 + 1;
    local_54 = local_54 - 1;
    local_50 = local_50 + 1;
    local_4c = local_4c - 1;
  }
  else {
    local_4c = local_74;
LAB_1425fc4f4:
    uVar7 = SUB82(plVar5,0);
    local_98 = local_80;
    local_90 = local_80;
    local_88 = local_80;
    local_70 = local_4c;
    local_6c = local_4c;
    local_58 = local_4c;
    local_54 = local_4c;
    local_50 = local_4c;
  }
  if (local_a0 != (undefined8 *)0x0) {
    (**(code **)*local_a0)(local_a0,1);
  }
  if (local_68 != (undefined8 *)0x0) {
    (**(code **)*local_68)(local_68,1);
  }
  if (local_60 != (undefined8 *)0x0) {
    (**(code **)*local_60)(local_60,1);
  }
  if ((int)local_a4 < 1) {
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[0x25] = 0;
    *param_1 = unaff_EBX;
    param_1[0x2a] = (int)local_98;
    *(undefined2 *)(param_1 + 0x26) = 0;
    *(short *)((longlong)param_1 + 0x9a) = (short)local_50;
    *(short *)(param_1 + 0x27) = (short)local_4c;
    *(short *)((longlong)param_1 + 0x9e) = (short)local_6c;
    *(undefined2 *)(param_1 + 0x28) = uVar7;
    *(undefined2 *)((longlong)param_1 + 0xa2) = unaff_R13W;
    *(undefined2 *)(param_1 + 0x29) = unaff_R14W;
    *(short *)((longlong)param_1 + 0xa6) = (short)local_80;
    *(short *)((longlong)param_1 + 0x46) = (short)local_58;
    *(short *)(param_1 + 0x12) = (short)local_54;
    *(short *)((longlong)param_1 + 0x4a) = (short)local_70;
    *(short *)(param_1 + 0x13) = (short)local_90;
    *(undefined2 *)((longlong)param_1 + 0x4e) = unaff_R15W;
    *(undefined2 *)(param_1 + 0x14) = unaff_R12W;
    *(short *)((longlong)param_1 + 0x52) = (short)local_88;
    FUN_140859a90(local_e8);
    return 1;
  }
LAB_1425fc537:
  FUN_140859a90(local_e8);
  return 0;
}



// FUNCTION 1425fc620 Unwind@1425fc620 body=55 status=ok
// SIG undefined Unwind@1425fc620(void)

void Unwind_1425fc620(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 1425fc660 FUN_1425fc660 body=62 status=ok
// SIG undefined FUN_1425fc660(void)

void FUN_1425fc660(longlong param_1)

{
  FUN_142604060();
  FUN_140859a90(param_1 + 0x2e0);
  FUN_1414b3f60(param_1 + 0x200);
  FUN_140859a90(param_1 + 0x138);
  FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 1425fc6a0 FUN_1425fc6a0 body=191 status=ok
// SIG undefined FUN_1425fc6a0(void)

undefined8 * FUN_1425fc6a0(longlong param_1,undefined8 param_2,int *param_3)

{
  undefined8 *puVar1;
  undefined1 local_128 [256];
  undefined8 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_1424ccff0(param_1 + 0x10,local_128,0x100,param_3);
  if (*param_3 < 1) {
    local_28 = (undefined8 *)thunk_FUN_1424da030(0x4f0);
    if (local_28 == (undefined8 *)0x0) {
      *param_3 = 7;
    }
    else {
      local_28[1] = 0;
      local_28[2] = 0;
      *local_28 = icu_64::SharedDateFormatSymbols::vftable;
      FUN_1426022b0(local_28 + 3,param_1 + 0x10,local_128,param_3);
      puVar1 = local_28;
      if (*param_3 < 1) {
        FUN_142537c90(local_28);
        return puVar1;
      }
      (**(code **)*local_28)(local_28,1);
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1425fc760 Unwind@1425fc760 body=51 status=ok
// SIG undefined Unwind@1425fc760(void)

void Unwind_1425fc760(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x120);
  thunk_FUN_1424b70d0(uVar1);
  FUN_1401773f0(uVar1);
  return;
}



// FUNCTION 1425fc7a0 FUN_1425fc7a0 body=8 status=ok
// SIG undefined FUN_1425fc7a0(void)

undefined * FUN_1425fc7a0(void)

{
  return &DAT_14c7fc350;
}



// FUNCTION 1425fc7b0 FUN_1425fc7b0 body=227 status=ok
// SIG undefined FUN_1425fc7b0(void)

undefined8 * FUN_1425fc7b0(undefined8 param_1,int *param_2)

{
  longlong lVar1;
  longlong local_30;
  undefined8 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_30 = 0;
  FUN_1425fc910(param_1,&local_30,param_2);
  if (*param_2 < 1) {
    local_28 = (undefined8 *)thunk_FUN_1424da030(0x4d8);
    lVar1 = local_30;
    if (local_28 != (undefined8 *)0x0) {
      *local_28 = icu_64::DateFormatSymbols::vftable;
      local_28[0x27] = &PTR_FUN_149e18960;
      *(undefined2 *)(local_28 + 0x28) = 2;
      FUN_1424a3c00();
      local_28[0x5c] = &PTR_FUN_149e18960;
      *(undefined2 *)(local_28 + 0x5d) = 2;
      FUN_1426023e0(local_28,lVar1 + 0x18);
      FUN_142537ca0(local_30);
      return local_28;
    }
    FUN_142537ca0(local_30);
    *param_2 = 7;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1425fc8a0 Unwind@1425fc8a0 body=43 status=ok
// SIG undefined Unwind@1425fc8a0(void)

void Unwind_1425fc8a0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x30));
  FUN_1414b3f60(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1425fc8d0 Unwind@1425fc8d0 body=54 status=ok
// SIG undefined Unwind@1425fc8d0(void)

void Unwind_1425fc8d0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_140859a90(*(undefined8 *)(param_2 + 0x20));
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  FUN_1424b70d0(uVar1);
  FUN_1401773f0(uVar1);
  return;
}



// FUNCTION 1425fc910 FUN_1425fc910 body=158 status=ok
// SIG undefined FUN_1425fc910(void)

void FUN_1425fc910(undefined8 param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  undefined **local_120;
  undefined4 local_118;
  undefined1 local_114;
  undefined1 local_110 [224];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  uVar1 = FUN_14253ea50(param_3);
  if (*param_3 < 1) {
    local_118 = 0;
    local_114 = 0;
    local_120 = icu_64::LocaleCacheKey<icu_64::SharedDateFormatSymbols>::vftable;
    FUN_1424a3ce0(local_110,param_1);
    FUN_142607a10(uVar1,&local_120,0,param_2,param_3);
    local_120 = icu_64::LocaleCacheKey<icu_64::SharedDateFormatSymbols>::vftable;
    FUN_1414b3f60(local_110);
    thunk_FUN_1424b70d0(&local_120);
  }
  return;
}



// FUNCTION 1425fc9b0 Unwind@1425fc9b0 body=63 status=ok
// SIG undefined Unwind@1425fc9b0(void)

void Unwind_1425fc9b0(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x28) =
       icu_64::LocaleCacheKey<icu_64::SharedDateFormatSymbols>::vftable;
  FUN_1414b3f60(param_2 + 0x38);
  thunk_FUN_1424b70d0(param_2 + 0x28);
  return;
}



// FUNCTION 1425fc9f0 Unwind@1425fc9f0 body=43 status=ok
// SIG undefined Unwind@1425fc9f0(void)

void Unwind_1425fc9f0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x28);
  return;
}



// FUNCTION 1425fca20 FUN_1425fca20 body=138 status=ok
// SIG undefined FUN_1425fca20(void)

undefined8 * FUN_1425fca20(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = icu_64::DateFormatSymbols::vftable;
  param_1[0x27] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x28) = 2;
  FUN_1424a3c00();
  param_1[0x5c] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x5d) = 2;
  FUN_1426023e0(param_1,param_2);
  return param_1;
}



// FUNCTION 1425fcab0 Unwind@1425fcab0 body=43 status=ok
// SIG undefined Unwind@1425fcab0(void)

void Unwind_1425fcab0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x38));
  FUN_1414b3f60(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1425fcae0 Unwind@1425fcae0 body=43 status=ok
// SIG undefined Unwind@1425fcae0(void)

void Unwind_1425fcae0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  FUN_1424b70d0(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 1425fcb10 FUN_1425fcb10 body=21492 status=ok
// SIG undefined FUN_1425fcb10(void)

void FUN_1425fcb10(longlong param_1,uint *param_2,char *param_3,int *param_4,char param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  char *pcVar11;
  uint *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined **ppuVar15;
  longlong *plVar16;
  longlong *plVar17;
  int iVar18;
  uint *puVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  int *piVar23;
  undefined1 local_508 [8];
  byte local_500;
  undefined **local_4c8;
  undefined1 *local_4c0;
  undefined1 local_4b8 [80];
  undefined1 *local_468;
  undefined1 local_460 [80];
  undefined1 *local_410;
  undefined1 local_408 [80];
  undefined4 local_3b8;
  undefined1 *local_3b0;
  undefined4 local_3a8;
  undefined1 local_3a4;
  undefined1 local_3a0 [64];
  undefined1 local_360 [40];
  undefined **local_338;
  undefined2 local_330;
  undefined **local_2f8;
  undefined2 local_2f0;
  undefined8 *local_2b8;
  undefined **local_2b0;
  undefined2 local_2a8;
  undefined8 local_270;
  longlong local_268;
  longlong *local_260;
  undefined8 local_258;
  longlong local_250;
  undefined8 local_248;
  longlong *local_240;
  longlong *local_238;
  longlong *local_230;
  longlong *local_228;
  int local_220;
  int local_21c;
  uint *local_218;
  uint *local_210;
  uint *local_208;
  longlong *local_200;
  longlong *local_1f8;
  longlong *local_1f0;
  uint *local_1e8;
  uint *local_1e0;
  uint *local_1d8;
  uint *local_1d0;
  longlong *local_1c8;
  uint *local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  uint *local_1a8;
  uint *local_1a0;
  uint *local_198;
  longlong *local_190;
  longlong *local_188;
  longlong *local_180;
  longlong *local_178;
  longlong *local_170;
  longlong *local_168;
  longlong *local_160;
  uint *local_158;
  longlong *local_150;
  uint *local_148;
  uint *local_140;
  uint *local_138;
  uint *local_130;
  uint *local_128;
  uint *local_120;
  uint *local_118;
  uint *local_110;
  longlong *local_108;
  uint *local_100;
  undefined **local_f8;
  undefined4 local_f0;
  undefined1 local_ec [44];
  undefined4 local_c0;
  longlong *local_b8;
  uint *local_b0;
  undefined1 *local_a8;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined4 local_70;
  longlong *local_68;
  int local_5c;
  longlong *local_58;
  int local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_220 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  plVar13 = (longlong *)(param_1 + 0x138);
  FUN_1424a7130(plVar13);
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined4 *)(param_1 + 0x348) = 0;
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined4 *)(param_1 + 0x358) = 0;
  *(undefined8 *)(param_1 + 0x360) = 0;
  *(undefined4 *)(param_1 + 0x368) = 0;
  *(undefined8 *)(param_1 + 0x370) = 0;
  *(undefined4 *)(param_1 + 0x378) = 0;
  *(undefined8 *)(param_1 + 0x380) = 0;
  *(undefined4 *)(param_1 + 0x388) = 0;
  *(undefined8 *)(param_1 + 0x390) = 0;
  *(undefined4 *)(param_1 + 0x398) = 0;
  *(undefined8 *)(param_1 + 0x32c) = 0;
  *(undefined8 *)(param_1 + 0x334) = 0;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x328) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  FUN_1424a3d10(param_1 + 0x200,param_2);
  if (0 < *param_4) {
    return;
  }
  local_4c8 = icu_64::_anon_F43110DD::CalendarDataSink::vftable;
  local_4c0 = (undefined1 *)0x0;
  piVar23 = param_4;
  FUN_142502140(local_4b8,FUN_1424a9c90,FUN_1424a9cd0,0,param_4);
  if (*param_4 < 1) {
    local_4c0 = local_4b8;
    FUN_142502340(local_4b8,&LAB_1424b70f0);
    local_468 = (undefined1 *)0x0;
    if (0 < *param_4) goto LAB_1425fcea8;
    piVar23 = param_4;
    FUN_142502140(local_460,FUN_1424a9c90,FUN_1424a9cd0,0,param_4);
    if (0 < *param_4) goto LAB_1425fcea8;
    local_468 = local_460;
    FUN_142502340(local_460,&LAB_1424b70f0);
    local_410 = (undefined1 *)0x0;
    if (*param_4 < 1) {
      piVar23 = param_4;
      FUN_142502140(local_408,FUN_1424a9c90,FUN_1424a9cd0,0,param_4);
      if (*param_4 < 1) {
        local_410 = local_408;
        FUN_142502340(local_408,&LAB_1424b70f0);
      }
    }
  }
  else {
    local_468 = (undefined1 *)0x0;
LAB_1425fcea8:
    local_410 = (undefined1 *)0x0;
  }
  local_3b8 = 0;
  local_3b0 = local_3a0;
  local_3a8 = 8;
  local_3a4 = 0;
  FUN_142515f20(local_360,&LAB_1424b70f0,FUN_1424a9cd0,param_4);
  local_338 = &PTR_FUN_149e18960;
  local_330 = 2;
  local_2f8 = &PTR_FUN_149e18960;
  local_2f0 = 2;
  local_2b8 = (undefined8 *)0x0;
  local_2b0 = &PTR_FUN_149e18960;
  local_2a8 = 2;
  uVar5 = FUN_1424a5500(param_2);
  uVar5 = FUN_1424ebfe0(0,uVar5,param_4);
  uVar6 = FUN_1424ecc30(uVar5,"calendar",0,param_4);
  if (0 < *param_4) goto LAB_142601d10;
  if (param_3 == (char *)0x0) {
    pcVar11 = "gregorian";
  }
  else {
    pcVar11 = "gregorian";
    if (*param_3 != '\0') {
      pcVar11 = param_3;
    }
  }
  local_270 = uVar5;
  local_248 = uVar6;
  FUN_1424a7220(local_508,pcVar11,0xffffffff,0);
  local_b0 = param_2;
  local_68 = plVar13;
  if ((local_500 & 1) == 0) {
    do {
      local_f8 = (undefined **)(local_ec + 1);
      local_f0 = 0x28;
      local_ec._0_2_ = 0;
      local_c0 = 0;
      FUN_142503780(&local_f8,local_508,param_4);
      ppuVar15 = local_f8;
      iVar3 = *param_4;
      iVar18 = 1;
      if (iVar3 < 1) {
        uVar5 = FUN_1424ec1c0(local_248,local_f8,0,param_4);
        if (*param_4 == 2) {
          FUN_1424ea9f0(uVar5);
          iVar1 = strcmp((char *)ppuVar15,"gregorian");
          if (iVar1 != 0) {
            FUN_1424a8f10(local_508,0,&DAT_149c4e070,9);
            if (local_2b8 != (undefined8 *)0x0) {
              (**(code **)*local_2b8)(local_2b8,1);
            }
            local_2b8 = (undefined8 *)0x0;
            *param_4 = iVar3;
            iVar18 = 2;
          }
        }
        else {
          FUN_1424a7c80(&local_338,local_508);
          FUN_1424a7130(&local_2f8);
          FUN_1425160a0(local_360);
          FUN_1424ec6e0(uVar5,&DAT_149e02088,&local_4c8,param_4);
          FUN_1424ea9f0(uVar5);
          iVar18 = 3;
          if ((*param_4 < 1) && (iVar3 = strcmp((char *)ppuVar15,"gregorian"), iVar3 != 0)) {
            FUN_1424a7c80(local_508,&local_2f8);
            iVar18 = 0;
            if ((local_500 & 1) != 0) {
              FUN_1424a8f10(local_508,0,&DAT_149c4e070,9);
              if (local_2b8 != (undefined8 *)0x0) {
                (**(code **)*local_2b8)(local_2b8,1);
              }
              local_2b8 = (undefined8 *)0x0;
            }
          }
        }
      }
      if (local_ec[0] != '\0') {
        FUN_1424da110(local_f8);
      }
      if ((iVar18 != 0) && (iVar18 != 2)) {
        if (iVar18 != 3) goto LAB_142601d07;
        break;
      }
    } while ((local_500 & 1) == 0);
  }
  local_a8 = (undefined1 *)((longlong)&local_9c + 1);
  local_a0 = 0x28;
  local_9c = 0;
  local_70 = 0;
  local_4c = *param_4;
  puVar7 = (undefined8 *)thunk_FUN_1424da030(0x1c8);
  if (puVar7 == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    plVar13 = local_68;
    puVar12 = local_b0;
  }
  else {
    *puVar7 = 7;
    puVar7[1] = &PTR_FUN_149e18960;
    *(undefined2 *)(puVar7 + 2) = 2;
    puVar7[9] = &PTR_FUN_149e18960;
    *(undefined2 *)(puVar7 + 10) = 2;
    puVar7[0x11] = &PTR_FUN_149e18960;
    *(undefined2 *)(puVar7 + 0x12) = 2;
    puVar7[0x19] = &PTR_FUN_149e18960;
    *(undefined2 *)(puVar7 + 0x1a) = 2;
    puVar7[0x21] = &PTR_FUN_149e18960;
    *(undefined2 *)(puVar7 + 0x22) = 2;
    puVar7[0x29] = &PTR_FUN_149e18960;
    *(undefined2 *)(puVar7 + 0x2a) = 2;
    puVar7[0x31] = &PTR_FUN_149e18960;
    *(undefined2 *)(puVar7 + 0x32) = 2;
    *(undefined8 **)(param_1 + 0x1b8) = puVar7 + 1;
    local_70 = 0;
    *local_a8 = 0;
    uVar5 = FUN_142503520(&local_a8,"monthPatterns",0xffffffff,&local_4c);
    plVar13 = local_68;
    puVar12 = local_b0;
    uVar5 = FUN_1425034d0(uVar5,0x2f,&local_4c);
    uVar5 = FUN_142503520(uVar5,"format",0xffffffff,&local_4c);
    uVar5 = FUN_1425034d0(uVar5,0x2f,&local_4c);
    piVar23 = &local_4c;
    uVar5 = FUN_142503520(uVar5,&DAT_149c4e082,0xffffffff,piVar23);
    FUN_1426052c0(*(undefined8 *)(param_1 + 0x1b8),0,&local_4c8,uVar5,piVar23);
    local_70 = 0;
    *local_a8 = 0;
    uVar5 = FUN_142503520(&local_a8,"monthPatterns",0xffffffff,&local_4c);
    uVar5 = FUN_1425034d0(uVar5,0x2f,&local_4c);
    uVar5 = FUN_142503520(uVar5,"format",0xffffffff,&local_4c);
    uVar5 = FUN_1425034d0(uVar5,0x2f,&local_4c);
    uVar5 = FUN_142503520(uVar5,"abbreviated",0xffffffff,piVar23);
    FUN_1426052c0(*(undefined8 *)(param_1 + 0x1b8),1,&local_4c8,uVar5,piVar23);
    local_70 = 0;
    *local_a8 = 0;
    uVar5 = FUN_142503520(&local_a8,"monthPatterns",0xffffffff,&local_4c);
    uVar5 = FUN_1425034d0(uVar5,0x2f,&local_4c);
    uVar5 = FUN_142503520(uVar5,"format",0xffffffff,&local_4c);
    uVar5 = FUN_1425034d0(uVar5,0x2f,&local_4c);
    uVar5 = FUN_142503520(uVar5,"narrow",0xffffffff,piVar23);
    FUN_1426052c0(*(undefined8 *)(param_1 + 0x1b8),2,&local_4c8,uVar5,piVar23);
    local_70 = 0;
    *local_a8 = 0;
    uVar5 = FUN_142503520(&local_a8,"monthPatterns",0xffffffff,&local_4c);
    uVar5 = FUN_1425034d0(uVar5,0x2f,&local_4c);
    uVar5 = FUN_142503520(uVar5,"stand-alone",0xffffffff,&local_4c);
    uVar5 = FUN_1425034d0(uVar5,0x2f,&local_4c);
    uVar5 = FUN_142503520(uVar5,&DAT_149c4e082,0xffffffff,piVar23);
    FUN_1426052c0(*(undefined8 *)(param_1 + 0x1b8),3,&local_4c8,uVar5,piVar23);
    local_70 = 0;
    *local_a8 = 0;
    uVar5 = FUN_142503520(&local_a8,"monthPatterns",0xffffffff,&local_4c);
    uVar5 = FUN_1425034d0(uVar5,0x2f,&local_4c);
    uVar5 = FUN_142503520(uVar5,"stand-alone",0xffffffff,&local_4c);
    uVar5 = FUN_1425034d0(uVar5,0x2f,&local_4c);
    uVar5 = FUN_142503520(uVar5,"abbreviated",0xffffffff,piVar23);
    FUN_1426052c0(*(undefined8 *)(param_1 + 0x1b8),4,&local_4c8,uVar5,piVar23);
    local_70 = 0;
    *local_a8 = 0;
    uVar5 = FUN_142503520(&local_a8,"monthPatterns",0xffffffff,&local_4c);
    uVar5 = FUN_1425034d0(uVar5,0x2f,&local_4c);
    uVar5 = FUN_142503520(uVar5,"stand-alone",0xffffffff,&local_4c);
    uVar5 = FUN_1425034d0(uVar5,0x2f,&local_4c);
    uVar5 = FUN_142503520(uVar5,"narrow",0xffffffff,piVar23);
    FUN_1426052c0(*(undefined8 *)(param_1 + 0x1b8),5,&local_4c8,uVar5,piVar23);
    local_70 = 0;
    *local_a8 = 0;
    uVar5 = FUN_142503520(&local_a8,"monthPatterns",0xffffffff,&local_4c);
    uVar5 = FUN_1425034d0(uVar5,0x2f,&local_4c);
    uVar5 = FUN_142503520(uVar5,"numeric",0xffffffff,&local_4c);
    uVar5 = FUN_1425034d0(uVar5,0x2f,&local_4c);
    uVar5 = FUN_142503520(uVar5,&DAT_149c4e0bb,0xffffffff,piVar23);
    FUN_1426052c0(*(undefined8 *)(param_1 + 0x1b8),6,&local_4c8,uVar5,piVar23);
    lVar8 = *(longlong *)(param_1 + 0x1b8);
    if (local_4c < 1) {
      if (*(ushort *)(lVar8 + 0x48) < 0x20) {
        FUN_1424a7600(lVar8 + 0x40,lVar8,0);
        lVar8 = *(longlong *)(param_1 + 0x1b8);
      }
      if (*(ushort *)(lVar8 + 0x88) < 0x20) {
        FUN_1424a7600(lVar8 + 0x80,lVar8 + 0x140,0);
        lVar8 = *(longlong *)(param_1 + 0x1b8);
      }
      if (*(ushort *)(lVar8 + 200) < 0x20) {
        FUN_1424a7600(lVar8 + 0xc0,lVar8,0);
        lVar8 = *(longlong *)(param_1 + 0x1b8);
      }
      if (*(ushort *)(lVar8 + 0x108) < 0x20) {
        FUN_1424a7600(lVar8 + 0x100,lVar8 + 0x40,0);
      }
      *(undefined4 *)(param_1 + 0x1c0) = 7;
    }
    else {
      if (lVar8 != 0) {
        if (*(longlong *)(lVar8 + -8) != 0) {
          lVar20 = *(longlong *)(lVar8 + -8) << 6;
          do {
            FUN_140859a90(lVar8 + -0x40 + lVar20);
            lVar20 = lVar20 + -0x40;
          } while (lVar20 != 0);
        }
        FUN_1424b70c0(lVar8 + -8);
      }
      *(undefined8 *)(param_1 + 0x1b8) = 0;
    }
  }
  local_4c = *param_4;
  local_70 = 0;
  *local_a8 = 0;
  uVar5 = FUN_142503520(&local_a8,"cyclicNameSets",0xffffffff,&local_4c);
  uVar5 = FUN_1425034d0(uVar5,0x2f,&local_4c);
  uVar5 = FUN_142503520(uVar5,"years",0xffffffff,&local_4c);
  uVar5 = FUN_1425034d0(uVar5,0x2f,&local_4c);
  uVar5 = FUN_142503520(uVar5,"format",0xffffffff,&local_4c);
  uVar5 = FUN_1425034d0(uVar5,0x2f,&local_4c);
  puVar7 = (undefined8 *)FUN_142503520(uVar5,"abbreviated",0xffffffff,&local_4c);
  if (local_4c < 1) {
    FUN_1424a7220(&local_f8,*puVar7,0xffffffff,0);
    lVar8 = FUN_142502620(local_4c0,&local_f8);
    if (lVar8 == 0) {
      *(undefined4 *)(param_1 + 0x1d0) = 0;
      local_4c = 2;
    }
    else {
      uVar2 = FUN_142502860(local_468,&local_f8);
      *(undefined4 *)(param_1 + 0x1d0) = uVar2;
      *(longlong *)(param_1 + 0x1c8) = lVar8;
      thunk_FUN_142502da0(local_4c0,&local_f8);
    }
    FUN_140859a90(&local_f8);
  }
  local_70 = 0;
  *local_a8 = 0;
  uVar5 = FUN_142503520(&local_a8,"cyclicNameSets",0xffffffff,&local_4c);
  uVar5 = FUN_1425034d0(uVar5,0x2f,&local_4c);
  uVar5 = FUN_142503520(uVar5,"zodiacs",0xffffffff,&local_4c);
  uVar5 = FUN_1425034d0(uVar5,0x2f,&local_4c);
  uVar5 = FUN_142503520(uVar5,"format",0xffffffff,&local_4c);
  uVar5 = FUN_1425034d0(uVar5,0x2f,&local_4c);
  puVar7 = (undefined8 *)FUN_142503520(uVar5,"abbreviated",0xffffffff,&local_4c);
  if (local_4c < 1) {
    FUN_1424a7220(&local_f8,*puVar7,0xffffffff,0);
    lVar8 = FUN_142502620(local_4c0,&local_f8);
    if (lVar8 == 0) {
      *(undefined4 *)(param_1 + 0x1e0) = 0;
      local_4c = 2;
    }
    else {
      uVar2 = FUN_142502860(local_468,&local_f8);
      *(undefined4 *)(param_1 + 0x1e0) = uVar2;
      *(longlong *)(param_1 + 0x1d8) = lVar8;
      thunk_FUN_142502da0(local_4c0,&local_f8);
    }
    FUN_140859a90(&local_f8);
  }
  local_4c = 0;
  plVar9 = (longlong *)FUN_1424ebfe0(0,*(undefined8 *)(puVar12 + 10),&local_4c);
  if (local_4c < 1) {
    uVar5 = FUN_1424ec1c0(plVar9,"contextTransforms",0,&local_4c);
    if (local_4c < 1) {
      local_58 = plVar9;
      lVar8 = FUN_1424eb190(uVar5,0,&local_4c);
      if (lVar8 != 0) {
        do {
          puVar10 = (undefined1 *)FUN_1424eaea0(lVar8,&local_220,param_4);
          if ((((local_4c < 1) && (puVar10 != (undefined1 *)0x0)) && (1 < local_220)) &&
             (pcVar11 = (char *)FUN_1424eaf60(lVar8), pcVar11 != (char *)0x0)) {
            iVar3 = strcmp(pcVar11,"day-format-except-narrow");
            ppuVar15 = &PTR_s_day_format_except_narrow_149c4e110;
            if (0 < iVar3) {
              iVar3 = strcmp(pcVar11,"day-narrow");
              ppuVar15 = &PTR_s_day_narrow_149c4e120;
              if (0 < iVar3) {
                iVar3 = strcmp(pcVar11,"day-standalone-except-narrow");
                ppuVar15 = &PTR_s_day_standalone_except_narrow_149c4e130;
                if (0 < iVar3) {
                  iVar3 = strcmp(pcVar11,"era-abbr");
                  ppuVar15 = &PTR_s_era_abbr_149c4e140;
                  if (0 < iVar3) {
                    iVar3 = strcmp(pcVar11,"era-name");
                    ppuVar15 = &PTR_s_era_name_149c4e150;
                    if (0 < iVar3) {
                      iVar3 = strcmp(pcVar11,"era-narrow");
                      ppuVar15 = &PTR_s_era_narrow_149c4e160;
                      if (0 < iVar3) {
                        iVar3 = strcmp(pcVar11,"metazone-long");
                        ppuVar15 = &PTR_s_metazone_long_149c4e170;
                        if (0 < iVar3) {
                          iVar3 = strcmp(pcVar11,"metazone-short");
                          ppuVar15 = &PTR_s_metazone_short_149c4e180;
                          if (0 < iVar3) {
                            iVar3 = strcmp(pcVar11,"month-format-except-narrow");
                            ppuVar15 = &PTR_s_month_format_except_narrow_149c4e190;
                            if (0 < iVar3) {
                              iVar3 = strcmp(pcVar11,"month-narrow");
                              ppuVar15 = &PTR_s_month_narrow_149c4e1a0;
                              if (0 < iVar3) {
                                iVar3 = strcmp(pcVar11,"month-standalone-except-narrow");
                                ppuVar15 = &PTR_s_month_standalone_except_narrow_149c4e1b0;
                                if (0 < iVar3) {
                                  iVar3 = strcmp(pcVar11,"zone-long");
                                  ppuVar15 = &PTR_s_zone_long_149c4e1c0;
                                  if (0 < iVar3) {
                                    iVar3 = strcmp(pcVar11,"zone-short");
                                    ppuVar15 = &PTR_s_zone_short_149c4e1d0;
                                    if (0 < iVar3) goto LAB_1425fdbc0;
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
            }
            if (iVar3 == 0) {
              iVar3 = *(int *)(ppuVar15 + 1);
              *(undefined1 *)(param_1 + 800 + (longlong)iVar3 * 2) = *puVar10;
              *(undefined1 *)(param_1 + 0x321 + (longlong)iVar3 * 2) = puVar10[4];
            }
          }
LAB_1425fdbc0:
          local_4c = 0;
          FUN_1424ea9f0(lVar8);
          lVar8 = FUN_1424eb190(uVar5,0,&local_4c);
        } while (lVar8 != 0);
      }
      FUN_1424ea9f0(uVar5);
      plVar13 = local_68;
      puVar12 = local_b0;
      plVar9 = local_58;
    }
    local_4c = 0;
    puVar12 = (uint *)FUN_142540ae0(puVar12,&local_4c);
    if ((puVar12 == (uint *)0x0) && (local_4c < 1)) {
      local_4c = 7;
      FUN_1424ea9f0(plVar9);
    }
    else {
      if (local_4c < 1) {
        local_68 = (longlong *)FUN_1424ec1c0(plVar9,"NumberElements",0,&local_4c);
        local_b0 = puVar12;
        uVar5 = FUN_1425410c0(puVar12);
        local_58 = (longlong *)FUN_1424ec1c0(local_68,uVar5,0,&local_4c);
        local_b8 = (longlong *)FUN_1424ec1c0(local_58,"symbols",0,&local_4c);
        local_f8 = &PTR_FUN_149e18960;
        local_f0 = CONCAT22(local_f0._2_2_,2);
        local_258 = (ulonglong)local_258._4_4_ << 0x20;
        uVar5 = FUN_1424ecf00(local_b8,"timeSeparator",&local_258,&local_4c);
        if (local_4c < 1) {
          FUN_1424a8f10(&local_f8,1,uVar5,local_258 & 0xffffffff);
        }
        else {
          FUN_1424a7130(&local_f8);
        }
        FUN_1424a7ca0(plVar13,&local_f8);
        FUN_140859a90(&local_f8);
        if (0 < local_4c) {
          FUN_1424a7130(plVar13);
        }
        plVar16 = local_68;
        if (local_b8 != (longlong *)0x0) {
          FUN_1424ea9f0();
        }
        puVar12 = local_b0;
        if (local_58 != (longlong *)0x0) {
          FUN_1424ea9f0();
        }
        if (plVar16 != (longlong *)0x0) {
          FUN_1424ea9f0(plVar16);
        }
      }
      FUN_1424ea9f0(plVar9);
      if (puVar12 != (uint *)0x0) {
        (*(code *)**(undefined8 **)puVar12)(puVar12,1);
      }
    }
  }
  if ((*(byte *)(param_1 + 0x140) & 1) != 0) {
    local_f8 = (undefined **)CONCAT62(local_f8._2_6_,0x3a);
    FUN_1424a8e40(plVar13);
    if (*(short *)(param_1 + 0x140) < 0) {
      iVar3 = *(int *)(param_1 + 0x144);
    }
    else {
      iVar3 = (int)*(short *)(param_1 + 0x140) >> 5;
    }
    FUN_1424a9130(plVar13,0,iVar3,&local_f8,(ulonglong)piVar23 & 0xffffffff00000000,1);
  }
  local_70 = 0;
  *local_a8 = 0;
  uVar5 = FUN_142503520(&local_a8,"dayPeriod",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  uVar5 = FUN_142503520(uVar5,"format",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  uVar5 = FUN_142503520(uVar5,&DAT_149c4e082,0xffffffff,param_4);
  uVar5 = FUN_142605420(&local_4c8,uVar5,param_1 + 0x358,param_4);
  *(undefined8 *)(param_1 + 0x350) = uVar5;
  local_70 = 0;
  *local_a8 = 0;
  uVar5 = FUN_142503520(&local_a8,"dayPeriod",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  uVar5 = FUN_142503520(uVar5,"format",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  uVar5 = FUN_142503520(uVar5,"narrow",0xffffffff,param_4);
  uVar5 = FUN_142605420(&local_4c8,uVar5,param_1 + 0x368,param_4);
  *(undefined8 *)(param_1 + 0x360) = uVar5;
  local_70 = 0;
  *local_a8 = 0;
  uVar5 = FUN_142503520(&local_a8,"dayPeriod",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  uVar5 = FUN_142503520(uVar5,"format",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  uVar5 = FUN_142503520(uVar5,"abbreviated",0xffffffff,param_4);
  uVar5 = FUN_142605420(&local_4c8,uVar5,param_1 + 0x348,param_4);
  *(undefined8 *)(param_1 + 0x340) = uVar5;
  local_70 = 0;
  *local_a8 = 0;
  uVar5 = FUN_142503520(&local_a8,"dayPeriod",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  uVar5 = FUN_142503520(uVar5,"stand-alone",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  uVar5 = FUN_142503520(uVar5,&DAT_149c4e082,0xffffffff,param_4);
  uVar5 = FUN_142605420(&local_4c8,uVar5,param_1 + 0x388,param_4);
  *(undefined8 *)(param_1 + 0x380) = uVar5;
  local_70 = 0;
  *local_a8 = 0;
  uVar5 = FUN_142503520(&local_a8,"dayPeriod",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  uVar5 = FUN_142503520(uVar5,"stand-alone",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  uVar5 = FUN_142503520(uVar5,"narrow",0xffffffff,param_4);
  uVar5 = FUN_142605420(&local_4c8,uVar5,param_1 + 0x398,param_4);
  *(undefined8 *)(param_1 + 0x390) = uVar5;
  local_70 = 0;
  *local_a8 = 0;
  uVar5 = FUN_142503520(&local_a8,"dayPeriod",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  uVar5 = FUN_142503520(uVar5,"stand-alone",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  uVar5 = FUN_142503520(uVar5,"abbreviated",0xffffffff,param_4);
  uVar6 = FUN_142605420(&local_4c8,uVar5,param_1 + 0x378,param_4);
  uVar5 = local_248;
  *(undefined8 *)(param_1 + 0x370) = uVar6;
  local_250 = param_1 + 0x439;
  local_258 = param_1 + 0x39c;
  uVar6 = FUN_1424ed0b0(local_248,0,param_4);
  uVar5 = FUN_1424ed0b0(uVar5,1,param_4);
  FUN_1425321b0(&local_258,uVar5,uVar6);
  local_70 = 0;
  *local_a8 = 0;
  uVar5 = FUN_142503520(&local_a8,&DAT_149c4e21f,0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  puVar7 = (undefined8 *)FUN_142503520(uVar5,"abbreviated",0xffffffff,param_4);
  local_58 = (longlong *)(param_1 + 8);
  local_b0 = (uint *)(param_1 + 0x10);
  iVar3 = *param_4;
  if (iVar3 < 1) {
    FUN_1424a7220(&local_f8,*puVar7,0xffffffff,0);
    lVar8 = FUN_142502620(local_4c0,&local_f8);
    if (lVar8 == 0) {
      *local_b0 = 0;
      *param_4 = 2;
    }
    else {
      uVar4 = FUN_142502860(local_468,&local_f8);
      *local_b0 = uVar4;
      *local_58 = lVar8;
      thunk_FUN_142502da0(local_4c0,&local_f8);
    }
    FUN_140859a90(&local_f8);
    iVar3 = *param_4;
  }
  local_70 = 0;
  *local_a8 = 0;
  uVar5 = FUN_142503520(&local_a8,&DAT_149c4e21f,0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  puVar7 = (undefined8 *)FUN_142503520(uVar5,&DAT_149c4e082,0xffffffff,param_4);
  local_68 = (longlong *)(param_1 + 0x18);
  local_218 = (uint *)(param_1 + 0x20);
  iVar18 = *param_4;
  if (iVar18 < 1) {
    FUN_1424a7220(&local_f8,*puVar7,0xffffffff,0);
    lVar8 = FUN_142502620(local_4c0,&local_f8);
    if (lVar8 == 0) {
      *local_218 = 0;
      *param_4 = 2;
    }
    else {
      uVar4 = FUN_142502860(local_468,&local_f8);
      *local_218 = uVar4;
      *local_68 = lVar8;
      thunk_FUN_142502da0(local_4c0,&local_f8);
    }
    FUN_140859a90(&local_f8);
    iVar18 = *param_4;
  }
  if (iVar18 == 2) {
    *param_4 = iVar3;
    uVar4 = *local_b0;
    lVar8 = *local_58;
    *local_218 = uVar4;
    iVar3 = uVar4 + (uVar4 == 0);
    lVar21 = (longlong)iVar3;
    lVar20 = -1;
    if (-1 < iVar3) {
      lVar20 = lVar21 * 0x40 + 8;
    }
    plVar13 = (longlong *)thunk_FUN_1424da030(lVar20);
    if (plVar13 == (longlong *)0x0) {
      *local_68 = 0;
    }
    else {
      *plVar13 = lVar21;
      plVar9 = plVar13 + 1;
      do {
        *plVar9 = (longlong)&PTR_FUN_149e18960;
        *(undefined2 *)(plVar9 + 1) = 2;
        plVar9 = plVar9 + 8;
      } while (plVar9 != plVar13 + lVar21 * 8 + 1);
      *local_68 = (longlong)(plVar13 + 1);
      if (0 < (int)uVar4) {
        uVar22 = 0;
        do {
          thunk_FUN_1424a7600(uVar22 * 0x40 + *local_68,lVar8 + uVar22 * 0x40);
          uVar22 = uVar22 + 1;
        } while (uVar22 != uVar4);
      }
    }
  }
  iVar3 = *param_4;
  local_70 = 0;
  *local_a8 = 0;
  uVar5 = FUN_142503520(&local_a8,&DAT_149c4e21f,0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  puVar7 = (undefined8 *)FUN_142503520(uVar5,"narrow",0xffffffff,param_4);
  local_190 = (longlong *)(param_1 + 0x28);
  local_210 = (uint *)(param_1 + 0x30);
  iVar18 = *param_4;
  if (iVar18 < 1) {
    FUN_1424a7220(&local_f8,*puVar7,0xffffffff,0);
    lVar8 = FUN_142502620(local_4c0,&local_f8);
    if (lVar8 == 0) {
      *local_210 = 0;
      *param_4 = 2;
    }
    else {
      uVar4 = FUN_142502860(local_468,&local_f8);
      *local_210 = uVar4;
      *local_190 = lVar8;
      thunk_FUN_142502da0(local_4c0,&local_f8);
    }
    FUN_140859a90(&local_f8);
    iVar18 = *param_4;
  }
  if (iVar18 == 2) {
    *param_4 = iVar3;
    uVar4 = *local_b0;
    lVar8 = *local_58;
    *local_210 = uVar4;
    iVar3 = uVar4 + (uVar4 == 0);
    lVar21 = (longlong)iVar3;
    lVar20 = -1;
    if (-1 < iVar3) {
      lVar20 = lVar21 * 0x40 + 8;
    }
    plVar13 = (longlong *)thunk_FUN_1424da030(lVar20);
    if (plVar13 == (longlong *)0x0) {
      *local_190 = 0;
    }
    else {
      *plVar13 = lVar21;
      plVar9 = plVar13 + 1;
      do {
        *plVar9 = (longlong)&PTR_FUN_149e18960;
        *(undefined2 *)(plVar9 + 1) = 2;
        plVar9 = plVar9 + 8;
      } while (plVar9 != plVar13 + lVar21 * 8 + 1);
      *local_190 = (longlong)(plVar13 + 1);
      if (0 < (int)uVar4) {
        uVar22 = 0;
        do {
          thunk_FUN_1424a7600(uVar22 * 0x40 + *local_190,lVar8 + uVar22 * 0x40);
          uVar22 = uVar22 + 1;
        } while (uVar22 != uVar4);
      }
    }
  }
  local_70 = 0;
  *local_a8 = 0;
  uVar5 = FUN_142503520(&local_a8,"monthNames",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  uVar5 = FUN_142503520(uVar5,"format",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  puVar7 = (undefined8 *)FUN_142503520(uVar5,&DAT_149c4e082,0xffffffff,param_4);
  local_200 = (longlong *)(param_1 + 0x38);
  local_208 = (uint *)(param_1 + 0x40);
  if (*param_4 < 1) {
    FUN_1424a7220(&local_f8,*puVar7,0xffffffff,0);
    lVar8 = FUN_142502620(local_4c0,&local_f8);
    if (lVar8 == 0) {
      *local_208 = 0;
      *param_4 = 2;
    }
    else {
      uVar4 = FUN_142502860(local_468,&local_f8);
      *local_208 = uVar4;
      *local_200 = lVar8;
      thunk_FUN_142502da0(local_4c0,&local_f8);
    }
    FUN_140859a90(&local_f8);
  }
  local_70 = 0;
  *local_a8 = 0;
  uVar5 = FUN_142503520(&local_a8,"monthNames",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  uVar5 = FUN_142503520(uVar5,"format",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  puVar7 = (undefined8 *)FUN_142503520(uVar5,"abbreviated",0xffffffff,param_4);
  local_150 = (longlong *)(param_1 + 0x48);
  local_158 = (uint *)(param_1 + 0x50);
  if (*param_4 < 1) {
    FUN_1424a7220(&local_f8,*puVar7,0xffffffff,0);
    lVar8 = FUN_142502620(local_4c0,&local_f8);
    if (lVar8 == 0) {
      *local_158 = 0;
      *param_4 = 2;
    }
    else {
      uVar4 = FUN_142502860(local_468,&local_f8);
      *local_158 = uVar4;
      *local_150 = lVar8;
      thunk_FUN_142502da0(local_4c0,&local_f8);
    }
    FUN_140859a90(&local_f8);
  }
  local_70 = 0;
  *local_a8 = 0;
  uVar5 = FUN_142503520(&local_a8,"monthNames",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  uVar5 = FUN_142503520(uVar5,"stand-alone",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  puVar7 = (undefined8 *)FUN_142503520(uVar5,&DAT_149c4e082,0xffffffff,param_4);
  local_180 = (longlong *)(param_1 + 0x68);
  local_148 = (uint *)(param_1 + 0x70);
  iVar3 = *param_4;
  if (iVar3 < 1) {
    FUN_1424a7220(&local_f8,*puVar7,0xffffffff,0);
    lVar8 = FUN_142502620(local_4c0,&local_f8);
    if (lVar8 == 0) {
      *local_148 = 0;
      *param_4 = 2;
    }
    else {
      uVar4 = FUN_142502860(local_468,&local_f8);
      *local_148 = uVar4;
      *local_180 = lVar8;
      thunk_FUN_142502da0(local_4c0,&local_f8);
    }
    FUN_140859a90(&local_f8);
    iVar3 = *param_4;
  }
  if (iVar3 == 2) {
    *param_4 = 0;
    uVar4 = *local_208;
    lVar8 = *local_200;
    *local_148 = uVar4;
    iVar3 = uVar4 + (uVar4 == 0);
    lVar21 = (longlong)iVar3;
    lVar20 = -1;
    if (-1 < iVar3) {
      lVar20 = lVar21 * 0x40 + 8;
    }
    plVar13 = (longlong *)thunk_FUN_1424da030(lVar20);
    if (plVar13 == (longlong *)0x0) {
      *local_180 = 0;
    }
    else {
      *plVar13 = lVar21;
      plVar9 = plVar13 + 1;
      do {
        *plVar9 = (longlong)&PTR_FUN_149e18960;
        *(undefined2 *)(plVar9 + 1) = 2;
        plVar9 = plVar9 + 8;
      } while (plVar9 != plVar13 + lVar21 * 8 + 1);
      *local_180 = (longlong)(plVar13 + 1);
      if (0 < (int)uVar4) {
        uVar22 = 0;
        do {
          thunk_FUN_1424a7600(uVar22 * 0x40 + *local_180,lVar8 + uVar22 * 0x40);
          uVar22 = uVar22 + 1;
        } while (uVar22 != uVar4);
      }
    }
  }
  local_70 = 0;
  *local_a8 = 0;
  uVar5 = FUN_142503520(&local_a8,"monthNames",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  uVar5 = FUN_142503520(uVar5,"stand-alone",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  puVar7 = (undefined8 *)FUN_142503520(uVar5,"abbreviated",0xffffffff,param_4);
  local_178 = (longlong *)(param_1 + 0x78);
  local_140 = (uint *)(param_1 + 0x80);
  iVar3 = *param_4;
  if (iVar3 < 1) {
    FUN_1424a7220(&local_f8,*puVar7,0xffffffff,0);
    lVar8 = FUN_142502620(local_4c0,&local_f8);
    if (lVar8 == 0) {
      *local_140 = 0;
      *param_4 = 2;
    }
    else {
      uVar4 = FUN_142502860(local_468,&local_f8);
      *local_140 = uVar4;
      *local_178 = lVar8;
      thunk_FUN_142502da0(local_4c0,&local_f8);
    }
    FUN_140859a90(&local_f8);
    iVar3 = *param_4;
  }
  if (iVar3 == 2) {
    *param_4 = 0;
    uVar4 = *local_158;
    lVar8 = *local_150;
    *local_140 = uVar4;
    iVar3 = uVar4 + (uVar4 == 0);
    lVar21 = (longlong)iVar3;
    lVar20 = -1;
    if (-1 < iVar3) {
      lVar20 = lVar21 * 0x40 + 8;
    }
    plVar13 = (longlong *)thunk_FUN_1424da030(lVar20);
    if (plVar13 == (longlong *)0x0) {
      *local_178 = 0;
    }
    else {
      *plVar13 = lVar21;
      plVar9 = plVar13 + 1;
      do {
        *plVar9 = (longlong)&PTR_FUN_149e18960;
        *(undefined2 *)(plVar9 + 1) = 2;
        plVar9 = plVar9 + 8;
      } while (plVar9 != plVar13 + lVar21 * 8 + 1);
      *local_178 = (longlong)(plVar13 + 1);
      if (0 < (int)uVar4) {
        uVar22 = 0;
        do {
          thunk_FUN_1424a7600(uVar22 * 0x40 + *local_178,lVar8 + uVar22 * 0x40);
          uVar22 = uVar22 + 1;
        } while (uVar22 != uVar4);
      }
    }
  }
  iVar3 = *param_4;
  local_70 = 0;
  local_5c = iVar3;
  *local_a8 = 0;
  uVar5 = FUN_142503520(&local_a8,"monthNames",0xffffffff,&local_5c);
  uVar5 = FUN_1425034d0(uVar5,0x2f,&local_5c);
  uVar5 = FUN_142503520(uVar5,"format",0xffffffff,&local_5c);
  uVar5 = FUN_1425034d0(uVar5,0x2f,&local_5c);
  puVar7 = (undefined8 *)FUN_142503520(uVar5,"narrow",0xffffffff,&local_5c);
  local_b8 = (longlong *)(param_1 + 0x58);
  local_100 = (uint *)(param_1 + 0x60);
  if (local_5c < 1) {
    FUN_1424a7220(&local_f8,*puVar7,0xffffffff,0);
    lVar8 = FUN_142502620(local_4c0,&local_f8);
    if (lVar8 == 0) {
      *local_100 = 0;
      local_5c = 2;
    }
    else {
      uVar4 = FUN_142502860(local_468,&local_f8);
      *local_100 = uVar4;
      *local_b8 = lVar8;
      thunk_FUN_142502da0(local_4c0,&local_f8);
    }
    FUN_140859a90(&local_f8);
  }
  local_70 = 0;
  *local_a8 = 0;
  uVar5 = FUN_142503520(&local_a8,"monthNames",0xffffffff,&local_5c);
  uVar5 = FUN_1425034d0(uVar5,0x2f,&local_5c);
  uVar5 = FUN_142503520(uVar5,"stand-alone",0xffffffff,&local_5c);
  uVar5 = FUN_1425034d0(uVar5,0x2f,&local_5c);
  puVar7 = (undefined8 *)FUN_142503520(uVar5,"narrow",0xffffffff,&local_5c);
  local_108 = (longlong *)(param_1 + 0x88);
  puVar12 = (uint *)(param_1 + 0x90);
  if (iVar3 < 1) {
    FUN_1424a7220(&local_f8,*puVar7,0xffffffff,0);
    lVar8 = FUN_142502620(local_4c0,&local_f8);
    if (lVar8 == 0) {
      *puVar12 = 0;
      iVar3 = 2;
    }
    else {
      uVar4 = FUN_142502860(local_468,&local_f8);
      *puVar12 = uVar4;
      *local_108 = lVar8;
      thunk_FUN_142502da0(local_4c0,&local_f8);
    }
    FUN_140859a90(&local_f8);
  }
  local_1c0 = puVar12;
  if ((local_5c == 2) && (iVar3 != 2)) {
    uVar4 = *puVar12;
    lVar8 = *local_108;
    *local_100 = uVar4;
    iVar3 = uVar4 + (uVar4 == 0);
    lVar21 = (longlong)iVar3;
    lVar20 = -1;
    if (-1 < iVar3) {
      lVar20 = lVar21 * 0x40 + 8;
    }
    plVar9 = (longlong *)thunk_FUN_1424da030(lVar20);
    plVar13 = local_b8;
    if (plVar9 == (longlong *)0x0) {
LAB_1425ff2e4:
      *plVar13 = 0;
    }
    else {
      *plVar9 = lVar21;
      plVar13 = plVar9 + 1;
      do {
        *plVar13 = (longlong)&PTR_FUN_149e18960;
        *(undefined2 *)(plVar13 + 1) = 2;
        plVar13 = plVar13 + 8;
      } while (plVar13 != plVar9 + lVar21 * 8 + 1);
      *local_b8 = (longlong)(plVar9 + 1);
      if (0 < (int)uVar4) {
        uVar22 = 0;
        do {
          thunk_FUN_1424a7600(uVar22 * 0x40 + *local_b8,lVar8 + uVar22 * 0x40);
          uVar22 = uVar22 + 1;
        } while (uVar22 != uVar4);
      }
    }
  }
  else if ((local_5c == 2) || (iVar3 != 2)) {
    if ((local_5c == 2) && (iVar3 == 2)) {
      FUN_142603de0(local_b8,local_100,*local_150,*local_158);
      FUN_142603de0(local_108,local_1c0,*local_150,*local_158);
    }
  }
  else {
    uVar4 = *local_100;
    lVar8 = *local_b8;
    *puVar12 = uVar4;
    iVar3 = uVar4 + (uVar4 == 0);
    lVar21 = (longlong)iVar3;
    lVar20 = -1;
    if (-1 < iVar3) {
      lVar20 = lVar21 * 0x40 + 8;
    }
    plVar9 = (longlong *)thunk_FUN_1424da030(lVar20);
    plVar13 = local_108;
    if (plVar9 == (longlong *)0x0) goto LAB_1425ff2e4;
    *plVar9 = lVar21;
    plVar13 = plVar9 + 1;
    do {
      *plVar13 = (longlong)&PTR_FUN_149e18960;
      *(undefined2 *)(plVar13 + 1) = 2;
      plVar13 = plVar13 + 8;
    } while (plVar13 != plVar9 + lVar21 * 8 + 1);
    *local_108 = (longlong)(plVar9 + 1);
    if (0 < (int)uVar4) {
      uVar22 = 0;
      do {
        thunk_FUN_1424a7600(uVar22 * 0x40 + *local_108,lVar8 + uVar22 * 0x40);
        uVar22 = uVar22 + 1;
      } while (uVar22 != uVar4);
    }
  }
  local_70 = 0;
  *local_a8 = 0;
  puVar7 = (undefined8 *)FUN_142503520(&local_a8,"AmPmMarkers",0xffffffff,param_4);
  local_230 = (longlong *)(param_1 + 0x118);
  local_1a0 = (uint *)(param_1 + 0x120);
  if (*param_4 < 1) {
    FUN_1424a7220(&local_f8,*puVar7,0xffffffff,0);
    lVar8 = FUN_142502620(local_4c0,&local_f8);
    if (lVar8 == 0) {
      *local_1a0 = 0;
      *param_4 = 2;
    }
    else {
      uVar4 = FUN_142502860(local_468,&local_f8);
      *local_1a0 = uVar4;
      *local_230 = lVar8;
      thunk_FUN_142502da0(local_4c0,&local_f8);
    }
    FUN_140859a90(&local_f8);
  }
  local_70 = 0;
  *local_a8 = 0;
  puVar7 = (undefined8 *)FUN_142503520(&local_a8,"AmPmMarkersNarrow",0xffffffff,param_4);
  local_228 = (longlong *)(param_1 + 0x128);
  local_198 = (uint *)(param_1 + 0x130);
  if (*param_4 < 1) {
    FUN_1424a7220(&local_f8,*puVar7,0xffffffff,0);
    lVar8 = FUN_142502620(local_4c0,&local_f8);
    if (lVar8 == 0) {
      *local_198 = 0;
      *param_4 = 2;
    }
    else {
      uVar4 = FUN_142502860(local_468,&local_f8);
      *local_198 = uVar4;
      *local_228 = lVar8;
      thunk_FUN_142502da0(local_4c0,&local_f8);
    }
    FUN_140859a90(&local_f8);
  }
  local_70 = 0;
  *local_a8 = 0;
  uVar5 = FUN_142503520(&local_a8,"quarters",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  uVar5 = FUN_142503520(uVar5,"format",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  puVar7 = (undefined8 *)FUN_142503520(uVar5,&DAT_149c4e082,0xffffffff,param_4);
  local_1f8 = (longlong *)(param_1 + 0x178);
  local_138 = (uint *)(param_1 + 0x180);
  if (*param_4 < 1) {
    FUN_1424a7220(&local_f8,*puVar7,0xffffffff,0);
    lVar8 = FUN_142502620(local_4c0,&local_f8);
    if (lVar8 == 0) {
      *local_138 = 0;
      *param_4 = 2;
    }
    else {
      uVar4 = FUN_142502860(local_468,&local_f8);
      *local_138 = uVar4;
      *local_1f8 = lVar8;
      thunk_FUN_142502da0(local_4c0,&local_f8);
    }
    FUN_140859a90(&local_f8);
  }
  local_70 = 0;
  *local_a8 = 0;
  uVar5 = FUN_142503520(&local_a8,"quarters",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  uVar5 = FUN_142503520(uVar5,"format",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  puVar7 = (undefined8 *)FUN_142503520(uVar5,"abbreviated",0xffffffff,param_4);
  local_1f0 = (longlong *)(param_1 + 0x188);
  local_130 = (uint *)(param_1 + 400);
  if (*param_4 < 1) {
    FUN_1424a7220(&local_f8,*puVar7,0xffffffff,0);
    lVar8 = FUN_142502620(local_4c0,&local_f8);
    if (lVar8 == 0) {
      *local_130 = 0;
      *param_4 = 2;
    }
    else {
      uVar4 = FUN_142502860(local_468,&local_f8);
      *local_130 = uVar4;
      *local_1f0 = lVar8;
      thunk_FUN_142502da0(local_4c0,&local_f8);
    }
    FUN_140859a90(&local_f8);
  }
  local_70 = 0;
  *local_a8 = 0;
  uVar5 = FUN_142503520(&local_a8,"quarters",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  uVar5 = FUN_142503520(uVar5,"stand-alone",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  puVar7 = (undefined8 *)FUN_142503520(uVar5,&DAT_149c4e082,0xffffffff,param_4);
  local_170 = (longlong *)(param_1 + 0x198);
  local_128 = (uint *)(param_1 + 0x1a0);
  iVar3 = *param_4;
  if (iVar3 < 1) {
    FUN_1424a7220(&local_f8,*puVar7,0xffffffff,0);
    lVar8 = FUN_142502620(local_4c0,&local_f8);
    if (lVar8 == 0) {
      *local_128 = 0;
      *param_4 = 2;
    }
    else {
      uVar4 = FUN_142502860(local_468,&local_f8);
      *local_128 = uVar4;
      *local_170 = lVar8;
      thunk_FUN_142502da0(local_4c0,&local_f8);
    }
    FUN_140859a90(&local_f8);
    iVar3 = *param_4;
  }
  if (iVar3 == 2) {
    *param_4 = 0;
    uVar4 = *local_138;
    lVar8 = *local_1f8;
    *local_128 = uVar4;
    iVar3 = uVar4 + (uVar4 == 0);
    lVar21 = (longlong)iVar3;
    lVar20 = -1;
    if (-1 < iVar3) {
      lVar20 = lVar21 * 0x40 + 8;
    }
    plVar13 = (longlong *)thunk_FUN_1424da030(lVar20);
    if (plVar13 == (longlong *)0x0) {
      *local_170 = 0;
    }
    else {
      *plVar13 = lVar21;
      plVar9 = plVar13 + 1;
      do {
        *plVar9 = (longlong)&PTR_FUN_149e18960;
        *(undefined2 *)(plVar9 + 1) = 2;
        plVar9 = plVar9 + 8;
      } while (plVar9 != plVar13 + lVar21 * 8 + 1);
      *local_170 = (longlong)(plVar13 + 1);
      if (0 < (int)uVar4) {
        uVar22 = 0;
        do {
          thunk_FUN_1424a7600(uVar22 * 0x40 + *local_170,lVar8 + uVar22 * 0x40);
          uVar22 = uVar22 + 1;
        } while (uVar22 != uVar4);
      }
    }
  }
  local_70 = 0;
  *local_a8 = 0;
  uVar5 = FUN_142503520(&local_a8,"quarters",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  uVar5 = FUN_142503520(uVar5,"stand-alone",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  puVar7 = (undefined8 *)FUN_142503520(uVar5,"abbreviated",0xffffffff,param_4);
  local_168 = (longlong *)(param_1 + 0x1a8);
  local_120 = (uint *)(param_1 + 0x1b0);
  iVar3 = *param_4;
  if (iVar3 < 1) {
    FUN_1424a7220(&local_f8,*puVar7,0xffffffff,0);
    lVar8 = FUN_142502620(local_4c0,&local_f8);
    if (lVar8 == 0) {
      *local_120 = 0;
      *param_4 = 2;
    }
    else {
      uVar4 = FUN_142502860(local_468,&local_f8);
      *local_120 = uVar4;
      *local_168 = lVar8;
      thunk_FUN_142502da0(local_4c0,&local_f8);
    }
    FUN_140859a90(&local_f8);
    iVar3 = *param_4;
  }
  if (iVar3 == 2) {
    *param_4 = 0;
    uVar4 = *local_130;
    lVar8 = *local_1f0;
    *local_120 = uVar4;
    iVar3 = uVar4 + (uVar4 == 0);
    lVar21 = (longlong)iVar3;
    lVar20 = -1;
    if (-1 < iVar3) {
      lVar20 = lVar21 * 0x40 + 8;
    }
    plVar13 = (longlong *)thunk_FUN_1424da030(lVar20);
    if (plVar13 == (longlong *)0x0) {
      *local_168 = 0;
    }
    else {
      *plVar13 = lVar21;
      plVar9 = plVar13 + 1;
      do {
        *plVar9 = (longlong)&PTR_FUN_149e18960;
        *(undefined2 *)(plVar9 + 1) = 2;
        plVar9 = plVar9 + 8;
      } while (plVar9 != plVar13 + lVar21 * 8 + 1);
      *local_168 = (longlong)(plVar13 + 1);
      if (0 < (int)uVar4) {
        uVar22 = 0;
        do {
          thunk_FUN_1424a7600(uVar22 * 0x40 + *local_168,lVar8 + uVar22 * 0x40);
          uVar22 = uVar22 + 1;
        } while (uVar22 != uVar4);
      }
    }
  }
  local_268 = param_1 + 0x2e0;
  FUN_1424a8f10(local_268,1,&DAT_149c4e010,0x25);
  local_70 = 0;
  *local_a8 = 0;
  uVar5 = FUN_142503520(&local_a8,"dayNames",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  uVar5 = FUN_142503520(uVar5,"format",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  uVar5 = FUN_142503520(uVar5,&DAT_149c4e082,0xffffffff,param_4);
  local_240 = (longlong *)(param_1 + 0x98);
  local_1e8 = (uint *)(param_1 + 0xa0);
  FUN_142605690(local_240,local_1e8,&local_4c8,uVar5,param_4);
  local_70 = 0;
  *local_a8 = 0;
  uVar5 = FUN_142503520(&local_a8,"dayNames",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  uVar5 = FUN_142503520(uVar5,"format",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  uVar5 = FUN_142503520(uVar5,"abbreviated",0xffffffff,param_4);
  local_160 = (longlong *)(param_1 + 0xa8);
  local_110 = (uint *)(param_1 + 0xb0);
  FUN_142605690(local_160,local_110,&local_4c8,uVar5,param_4);
  local_70 = 0;
  *local_a8 = 0;
  uVar5 = FUN_142503520(&local_a8,"dayNames",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  uVar5 = FUN_142503520(uVar5,"format",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  uVar5 = FUN_142503520(uVar5,"short",0xffffffff,param_4);
  local_188 = (longlong *)(param_1 + 0xb8);
  local_1a8 = (uint *)(param_1 + 0xc0);
  FUN_142605690(local_188,local_1a8,&local_4c8,uVar5,param_4);
  if (*param_4 == 2) {
    *param_4 = 0;
    uVar4 = *local_110;
    lVar8 = *local_160;
    *local_1a8 = uVar4;
    iVar3 = uVar4 + (uVar4 == 0);
    lVar21 = (longlong)iVar3;
    lVar20 = -1;
    if (-1 < iVar3) {
      lVar20 = lVar21 * 0x40 + 8;
    }
    plVar13 = (longlong *)thunk_FUN_1424da030(lVar20);
    if (plVar13 == (longlong *)0x0) {
      *local_188 = 0;
    }
    else {
      *plVar13 = lVar21;
      plVar9 = plVar13 + 1;
      do {
        *plVar9 = (longlong)&PTR_FUN_149e18960;
        *(undefined2 *)(plVar9 + 1) = 2;
        plVar9 = plVar9 + 8;
      } while (plVar9 != plVar13 + lVar21 * 8 + 1);
      *local_188 = (longlong)(plVar13 + 1);
      if (0 < (int)uVar4) {
        uVar22 = 0;
        do {
          thunk_FUN_1424a7600(uVar22 * 0x40 + *local_188,lVar8 + uVar22 * 0x40);
          uVar22 = uVar22 + 1;
        } while (uVar22 != uVar4);
      }
    }
  }
  local_70 = 0;
  *local_a8 = 0;
  uVar5 = FUN_142503520(&local_a8,"dayNames",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  uVar5 = FUN_142503520(uVar5,"stand-alone",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  uVar5 = FUN_142503520(uVar5,&DAT_149c4e082,0xffffffff,param_4);
  local_1b8 = (longlong *)(param_1 + 0xd8);
  local_1e0 = (uint *)(param_1 + 0xe0);
  FUN_142605690(local_1b8,local_1e0,&local_4c8,uVar5,param_4);
  if (*param_4 == 2) {
    *param_4 = 0;
    uVar4 = *local_1e8;
    lVar8 = *local_240;
    *local_1e0 = uVar4;
    iVar3 = uVar4 + (uVar4 == 0);
    lVar21 = (longlong)iVar3;
    lVar20 = -1;
    if (-1 < iVar3) {
      lVar20 = lVar21 * 0x40 + 8;
    }
    plVar13 = (longlong *)thunk_FUN_1424da030(lVar20);
    if (plVar13 == (longlong *)0x0) {
      *local_1b8 = 0;
    }
    else {
      *plVar13 = lVar21;
      plVar9 = plVar13 + 1;
      do {
        *plVar9 = (longlong)&PTR_FUN_149e18960;
        *(undefined2 *)(plVar9 + 1) = 2;
        plVar9 = plVar9 + 8;
      } while (plVar9 != plVar13 + lVar21 * 8 + 1);
      *local_1b8 = (longlong)(plVar13 + 1);
      if (0 < (int)uVar4) {
        uVar22 = 0;
        do {
          thunk_FUN_1424a7600(uVar22 * 0x40 + *local_1b8,lVar8 + uVar22 * 0x40);
          uVar22 = uVar22 + 1;
        } while (uVar22 != uVar4);
      }
    }
  }
  local_70 = 0;
  *local_a8 = 0;
  uVar5 = FUN_142503520(&local_a8,"dayNames",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  uVar5 = FUN_142503520(uVar5,"stand-alone",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  uVar5 = FUN_142503520(uVar5,"abbreviated",0xffffffff,param_4);
  local_1b0 = (longlong *)(param_1 + 0xe8);
  local_1d8 = (uint *)(param_1 + 0xf0);
  FUN_142605690(local_1b0,local_1d8,&local_4c8,uVar5,param_4);
  if (*param_4 == 2) {
    *param_4 = 0;
    uVar4 = *local_110;
    lVar8 = *local_160;
    *local_1d8 = uVar4;
    iVar3 = uVar4 + (uVar4 == 0);
    lVar21 = (longlong)iVar3;
    lVar20 = -1;
    if (-1 < iVar3) {
      lVar20 = lVar21 * 0x40 + 8;
    }
    plVar13 = (longlong *)thunk_FUN_1424da030(lVar20);
    if (plVar13 == (longlong *)0x0) {
      *local_1b0 = 0;
    }
    else {
      *plVar13 = lVar21;
      plVar9 = plVar13 + 1;
      do {
        *plVar9 = (longlong)&PTR_FUN_149e18960;
        *(undefined2 *)(plVar9 + 1) = 2;
        plVar9 = plVar9 + 8;
      } while (plVar9 != plVar13 + lVar21 * 8 + 1);
      *local_1b0 = (longlong)(plVar13 + 1);
      if (0 < (int)uVar4) {
        uVar22 = 0;
        do {
          thunk_FUN_1424a7600(uVar22 * 0x40 + *local_1b0,lVar8 + uVar22 * 0x40);
          uVar22 = uVar22 + 1;
        } while (uVar22 != uVar4);
      }
    }
  }
  local_70 = 0;
  *local_a8 = 0;
  uVar5 = FUN_142503520(&local_a8,"dayNames",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  uVar5 = FUN_142503520(uVar5,"stand-alone",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  uVar5 = FUN_142503520(uVar5,"short",0xffffffff,param_4);
  plVar13 = (longlong *)(param_1 + 0xf8);
  local_1d0 = (uint *)(param_1 + 0x100);
  FUN_142605690(plVar13,local_1d0,&local_4c8,uVar5,param_4);
  local_1c8 = plVar13;
  if (*param_4 == 2) {
    *param_4 = 0;
    uVar4 = *local_1a8;
    lVar8 = *local_188;
    *local_1d0 = uVar4;
    iVar3 = uVar4 + (uVar4 == 0);
    lVar21 = (longlong)iVar3;
    lVar20 = -1;
    if (-1 < iVar3) {
      lVar20 = lVar21 * 0x40 + 8;
    }
    plVar9 = (longlong *)thunk_FUN_1424da030(lVar20);
    plVar13 = local_1c8;
    if (plVar9 == (longlong *)0x0) {
      *local_1c8 = 0;
    }
    else {
      *plVar9 = lVar21;
      plVar16 = plVar9 + 1;
      do {
        *plVar16 = (longlong)&PTR_FUN_149e18960;
        *(undefined2 *)(plVar16 + 1) = 2;
        plVar16 = plVar16 + 8;
      } while (plVar16 != plVar9 + lVar21 * 8 + 1);
      *local_1c8 = (longlong)(plVar9 + 1);
      if (0 < (int)uVar4) {
        uVar22 = 0;
        do {
          thunk_FUN_1424a7600(uVar22 * 0x40 + *plVar13,lVar8 + uVar22 * 0x40);
          uVar22 = uVar22 + 1;
        } while (uVar22 != uVar4);
      }
    }
  }
  local_f8 = (undefined **)CONCAT44(local_f8._4_4_,*param_4);
  local_70 = 0;
  *local_a8 = 0;
  uVar5 = FUN_142503520(&local_a8,"dayNames",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  uVar5 = FUN_142503520(uVar5,"format",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  uVar5 = FUN_142503520(uVar5,"narrow",0xffffffff,param_4);
  plVar13 = (longlong *)(param_1 + 200);
  local_118 = (uint *)(param_1 + 0xd0);
  FUN_142605690(plVar13,local_118,&local_4c8,uVar5,&local_f8);
  local_21c = *param_4;
  local_70 = 0;
  *local_a8 = 0;
  uVar5 = FUN_142503520(&local_a8,"dayNames",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  uVar5 = FUN_142503520(uVar5,"stand-alone",0xffffffff,param_4);
  uVar5 = FUN_1425034d0(uVar5,0x2f,param_4);
  uVar5 = FUN_142503520(uVar5,"narrow",0xffffffff,param_4);
  plVar9 = (longlong *)(param_1 + 0x108);
  puVar12 = (uint *)(param_1 + 0x110);
  FUN_142605690(plVar9,puVar12,&local_4c8,uVar5,&local_21c);
  if (((int)local_f8 == 2) && (local_21c != 2)) {
    uVar4 = *puVar12;
    lVar8 = *plVar9;
    *local_118 = uVar4;
    iVar3 = uVar4 + (uVar4 == 0);
    lVar21 = (longlong)iVar3;
    lVar20 = -1;
    if (-1 < iVar3) {
      lVar20 = lVar21 * 0x40 + 8;
    }
    local_238 = plVar9;
    plVar14 = (longlong *)thunk_FUN_1424da030(lVar20);
    plVar16 = local_238;
    plVar9 = plVar13;
    if (plVar14 == (longlong *)0x0) {
LAB_1426005cd:
      *plVar9 = 0;
      plVar16 = local_238;
    }
    else {
      *plVar14 = lVar21;
      plVar9 = plVar14 + 1;
      do {
        *plVar9 = (longlong)&PTR_FUN_149e18960;
        *(undefined2 *)(plVar9 + 1) = 2;
        plVar9 = plVar9 + 8;
      } while (plVar9 != plVar14 + lVar21 * 8 + 1);
      *plVar13 = (longlong)(plVar14 + 1);
      if (0 < (int)uVar4) {
        uVar22 = 0;
        do {
          thunk_FUN_1424a7600(uVar22 * 0x40 + *plVar13,lVar8 + uVar22 * 0x40);
          uVar22 = uVar22 + 1;
        } while (uVar22 != uVar4);
      }
    }
  }
  else {
    plVar16 = plVar9;
    if (((int)local_f8 == 2) || (local_21c != 2)) {
      if (((int)local_f8 == 2) && (local_21c == 2)) {
        FUN_142603de0(plVar13,local_118,*local_160,*local_110);
        FUN_142603de0(plVar9,puVar12,*local_160,*local_110);
      }
    }
    else {
      uVar4 = *local_118;
      lVar8 = *plVar13;
      *puVar12 = uVar4;
      iVar3 = uVar4 + (uVar4 == 0);
      lVar21 = (longlong)iVar3;
      lVar20 = -1;
      if (-1 < iVar3) {
        lVar20 = lVar21 * 0x40 + 8;
      }
      local_260 = plVar13;
      plVar14 = (longlong *)thunk_FUN_1424da030(lVar20);
      plVar13 = local_260;
      local_238 = plVar9;
      if (plVar14 == (longlong *)0x0) goto LAB_1426005cd;
      *plVar14 = lVar21;
      plVar17 = plVar14 + 1;
      do {
        *plVar17 = (longlong)&PTR_FUN_149e18960;
        *(undefined2 *)(plVar17 + 1) = 2;
        plVar17 = plVar17 + 8;
      } while (plVar17 != plVar14 + lVar21 * 8 + 1);
      *plVar9 = (longlong)(plVar14 + 1);
      if (0 < (int)uVar4) {
        uVar22 = 0;
        do {
          thunk_FUN_1424a7600(uVar22 * 0x40 + *plVar9,lVar8 + uVar22 * 0x40);
          uVar22 = uVar22 + 1;
        } while (uVar22 != uVar4);
      }
    }
  }
  puVar19 = local_b0;
  if ((param_5 != '\0') && (0 < *param_4)) {
    *param_4 = -0x80;
    *local_b0 = 2;
    puVar7 = (undefined8 *)thunk_FUN_1424da030(0x88);
    plVar9 = local_58;
    if (puVar7 == (undefined8 *)0x0) {
LAB_142601ca5:
      local_58 = plVar9;
      *local_58 = 0;
      *puVar19 = 0;
      *param_4 = 7;
    }
    else {
      *puVar7 = 2;
      puVar7[1] = &PTR_FUN_149e18960;
      *(undefined2 *)(puVar7 + 2) = 2;
      puVar7[9] = &PTR_FUN_149e18960;
      *(undefined2 *)(puVar7 + 10) = 2;
      *local_58 = (longlong)(puVar7 + 1);
      if (0 < (int)*puVar19) {
        lVar8 = 0;
        do {
          FUN_1424a8f10(lVar8 * 0x40 + *local_58,1,&DAT_149c4e26a + lVar8 * 6,0xffffffff);
          lVar8 = lVar8 + 1;
        } while (lVar8 < (int)*local_b0);
      }
      puVar19 = local_218;
      if (*param_4 < 1) {
        *local_218 = 2;
        puVar7 = (undefined8 *)thunk_FUN_1424da030(0x88);
        plVar9 = local_68;
        if (puVar7 == (undefined8 *)0x0) goto LAB_142601ca5;
        *puVar7 = 2;
        puVar7[1] = &PTR_FUN_149e18960;
        *(undefined2 *)(puVar7 + 2) = 2;
        puVar7[9] = &PTR_FUN_149e18960;
        *(undefined2 *)(puVar7 + 10) = 2;
        *local_68 = (longlong)(puVar7 + 1);
        if (0 < (int)*puVar19) {
          lVar8 = 0;
          do {
            FUN_1424a8f10(lVar8 * 0x40 + *local_68,1,&DAT_149c4e26a + lVar8 * 6,0xffffffff);
            lVar8 = lVar8 + 1;
          } while (lVar8 < (int)*local_218);
        }
        puVar19 = local_210;
        if (*param_4 < 1) {
          *local_210 = 2;
          puVar7 = (undefined8 *)thunk_FUN_1424da030(0x88);
          plVar9 = local_190;
          if (puVar7 == (undefined8 *)0x0) goto LAB_142601ca5;
          *puVar7 = 2;
          puVar7[1] = &PTR_FUN_149e18960;
          *(undefined2 *)(puVar7 + 2) = 2;
          puVar7[9] = &PTR_FUN_149e18960;
          *(undefined2 *)(puVar7 + 10) = 2;
          *local_190 = (longlong)(puVar7 + 1);
          if (0 < (int)*puVar19) {
            lVar8 = 0;
            do {
              FUN_1424a8f10(lVar8 * 0x40 + *local_190,1,&DAT_149c4e26a + lVar8 * 6,0xffffffff);
              lVar8 = lVar8 + 1;
            } while (lVar8 < (int)*local_210);
          }
          puVar19 = local_208;
          if (*param_4 < 1) {
            *local_208 = 0xd;
            puVar7 = (undefined8 *)thunk_FUN_1424da030(0x348);
            plVar9 = local_200;
            if (puVar7 == (undefined8 *)0x0) goto LAB_142601ca5;
            *puVar7 = 0xd;
            puVar7[1] = &PTR_FUN_149e18960;
            *(undefined2 *)(puVar7 + 2) = 2;
            puVar7[9] = &PTR_FUN_149e18960;
            *(undefined2 *)(puVar7 + 10) = 2;
            puVar7[0x11] = &PTR_FUN_149e18960;
            *(undefined2 *)(puVar7 + 0x12) = 2;
            puVar7[0x19] = &PTR_FUN_149e18960;
            *(undefined2 *)(puVar7 + 0x1a) = 2;
            puVar7[0x21] = &PTR_FUN_149e18960;
            *(undefined2 *)(puVar7 + 0x22) = 2;
            puVar7[0x29] = &PTR_FUN_149e18960;
            *(undefined2 *)(puVar7 + 0x2a) = 2;
            puVar7[0x31] = &PTR_FUN_149e18960;
            *(undefined2 *)(puVar7 + 0x32) = 2;
            puVar7[0x39] = &PTR_FUN_149e18960;
            *(undefined2 *)(puVar7 + 0x3a) = 2;
            puVar7[0x41] = &PTR_FUN_149e18960;
            *(undefined2 *)(puVar7 + 0x42) = 2;
            puVar7[0x49] = &PTR_FUN_149e18960;
            *(undefined2 *)(puVar7 + 0x4a) = 2;
            puVar7[0x51] = &PTR_FUN_149e18960;
            *(undefined2 *)(puVar7 + 0x52) = 2;
            puVar7[0x59] = &PTR_FUN_149e18960;
            *(undefined2 *)(puVar7 + 0x5a) = 2;
            puVar7[0x61] = &PTR_FUN_149e18960;
            *(undefined2 *)(puVar7 + 0x62) = 2;
            *local_200 = (longlong)(puVar7 + 1);
            if (0 < (int)*puVar19) {
              lVar8 = 0;
              do {
                FUN_1424a8f10(lVar8 * 0x40 + *local_200,1,&DAT_149c4e280 + lVar8 * 6,0xffffffff);
                lVar8 = lVar8 + 1;
              } while (lVar8 < (int)*local_208);
            }
            puVar19 = local_158;
            if (*param_4 < 1) {
              *local_158 = 0xd;
              puVar7 = (undefined8 *)thunk_FUN_1424da030(0x348);
              plVar9 = local_150;
              if (puVar7 == (undefined8 *)0x0) goto LAB_142601ca5;
              *puVar7 = 0xd;
              puVar7[1] = &PTR_FUN_149e18960;
              *(undefined2 *)(puVar7 + 2) = 2;
              puVar7[9] = &PTR_FUN_149e18960;
              *(undefined2 *)(puVar7 + 10) = 2;
              puVar7[0x11] = &PTR_FUN_149e18960;
              *(undefined2 *)(puVar7 + 0x12) = 2;
              puVar7[0x19] = &PTR_FUN_149e18960;
              *(undefined2 *)(puVar7 + 0x1a) = 2;
              puVar7[0x21] = &PTR_FUN_149e18960;
              *(undefined2 *)(puVar7 + 0x22) = 2;
              puVar7[0x29] = &PTR_FUN_149e18960;
              *(undefined2 *)(puVar7 + 0x2a) = 2;
              puVar7[0x31] = &PTR_FUN_149e18960;
              *(undefined2 *)(puVar7 + 0x32) = 2;
              puVar7[0x39] = &PTR_FUN_149e18960;
              *(undefined2 *)(puVar7 + 0x3a) = 2;
              puVar7[0x41] = &PTR_FUN_149e18960;
              *(undefined2 *)(puVar7 + 0x42) = 2;
              puVar7[0x49] = &PTR_FUN_149e18960;
              *(undefined2 *)(puVar7 + 0x4a) = 2;
              puVar7[0x51] = &PTR_FUN_149e18960;
              *(undefined2 *)(puVar7 + 0x52) = 2;
              puVar7[0x59] = &PTR_FUN_149e18960;
              *(undefined2 *)(puVar7 + 0x5a) = 2;
              puVar7[0x61] = &PTR_FUN_149e18960;
              *(undefined2 *)(puVar7 + 0x62) = 2;
              *local_150 = (longlong)(puVar7 + 1);
              if (0 < (int)*puVar19) {
                lVar8 = 0;
                do {
                  FUN_1424a8f10(lVar8 * 0x40 + *local_150,1,&DAT_149c4e280 + lVar8 * 6,0xffffffff);
                  lVar8 = lVar8 + 1;
                } while (lVar8 < (int)*local_158);
              }
              if (*param_4 < 1) {
                *local_100 = 0xd;
                puVar7 = (undefined8 *)thunk_FUN_1424da030(0x348);
                if (puVar7 == (undefined8 *)0x0) {
                  local_58 = local_b8;
                  puVar19 = local_100;
                  plVar9 = local_58;
                  goto LAB_142601ca5;
                }
                *puVar7 = 0xd;
                puVar7[1] = &PTR_FUN_149e18960;
                *(undefined2 *)(puVar7 + 2) = 2;
                puVar7[9] = &PTR_FUN_149e18960;
                *(undefined2 *)(puVar7 + 10) = 2;
                puVar7[0x11] = &PTR_FUN_149e18960;
                *(undefined2 *)(puVar7 + 0x12) = 2;
                puVar7[0x19] = &PTR_FUN_149e18960;
                *(undefined2 *)(puVar7 + 0x1a) = 2;
                puVar7[0x21] = &PTR_FUN_149e18960;
                *(undefined2 *)(puVar7 + 0x22) = 2;
                puVar7[0x29] = &PTR_FUN_149e18960;
                *(undefined2 *)(puVar7 + 0x2a) = 2;
                puVar7[0x31] = &PTR_FUN_149e18960;
                *(undefined2 *)(puVar7 + 0x32) = 2;
                puVar7[0x39] = &PTR_FUN_149e18960;
                *(undefined2 *)(puVar7 + 0x3a) = 2;
                puVar7[0x41] = &PTR_FUN_149e18960;
                *(undefined2 *)(puVar7 + 0x42) = 2;
                puVar7[0x49] = &PTR_FUN_149e18960;
                *(undefined2 *)(puVar7 + 0x4a) = 2;
                puVar7[0x51] = &PTR_FUN_149e18960;
                *(undefined2 *)(puVar7 + 0x52) = 2;
                puVar7[0x59] = &PTR_FUN_149e18960;
                *(undefined2 *)(puVar7 + 0x5a) = 2;
                puVar7[0x61] = &PTR_FUN_149e18960;
                *(undefined2 *)(puVar7 + 0x62) = 2;
                *local_b8 = (longlong)(puVar7 + 1);
                if (0 < (int)*local_100) {
                  lVar8 = 0;
                  do {
                    FUN_1424a8f10(lVar8 * 0x40 + *local_b8,1,&DAT_149c4e280 + lVar8 * 6,0xffffffff);
                    lVar8 = lVar8 + 1;
                  } while (lVar8 < (int)*local_100);
                }
                if (*param_4 < 1) {
                  *local_148 = 0xd;
                  puVar7 = (undefined8 *)thunk_FUN_1424da030(0x348);
                  if (puVar7 == (undefined8 *)0x0) {
                    local_58 = local_180;
                    puVar19 = local_148;
                    plVar9 = local_58;
                    goto LAB_142601ca5;
                  }
                  *puVar7 = 0xd;
                  puVar7[1] = &PTR_FUN_149e18960;
                  *(undefined2 *)(puVar7 + 2) = 2;
                  puVar7[9] = &PTR_FUN_149e18960;
                  *(undefined2 *)(puVar7 + 10) = 2;
                  puVar7[0x11] = &PTR_FUN_149e18960;
                  *(undefined2 *)(puVar7 + 0x12) = 2;
                  puVar7[0x19] = &PTR_FUN_149e18960;
                  *(undefined2 *)(puVar7 + 0x1a) = 2;
                  puVar7[0x21] = &PTR_FUN_149e18960;
                  *(undefined2 *)(puVar7 + 0x22) = 2;
                  puVar7[0x29] = &PTR_FUN_149e18960;
                  *(undefined2 *)(puVar7 + 0x2a) = 2;
                  puVar7[0x31] = &PTR_FUN_149e18960;
                  *(undefined2 *)(puVar7 + 0x32) = 2;
                  puVar7[0x39] = &PTR_FUN_149e18960;
                  *(undefined2 *)(puVar7 + 0x3a) = 2;
                  puVar7[0x41] = &PTR_FUN_149e18960;
                  *(undefined2 *)(puVar7 + 0x42) = 2;
                  puVar7[0x49] = &PTR_FUN_149e18960;
                  *(undefined2 *)(puVar7 + 0x4a) = 2;
                  puVar7[0x51] = &PTR_FUN_149e18960;
                  *(undefined2 *)(puVar7 + 0x52) = 2;
                  puVar7[0x59] = &PTR_FUN_149e18960;
                  *(undefined2 *)(puVar7 + 0x5a) = 2;
                  puVar7[0x61] = &PTR_FUN_149e18960;
                  *(undefined2 *)(puVar7 + 0x62) = 2;
                  *local_180 = (longlong)(puVar7 + 1);
                  if (0 < (int)*local_148) {
                    lVar8 = 0;
                    do {
                      FUN_1424a8f10(lVar8 * 0x40 + *local_180,1,&DAT_149c4e280 + lVar8 * 6,
                                    0xffffffff);
                      lVar8 = lVar8 + 1;
                    } while (lVar8 < (int)*local_148);
                  }
                  if (*param_4 < 1) {
                    *local_140 = 0xd;
                    puVar7 = (undefined8 *)thunk_FUN_1424da030(0x348);
                    if (puVar7 == (undefined8 *)0x0) {
                      local_58 = local_178;
                      puVar19 = local_140;
                      plVar9 = local_58;
                      goto LAB_142601ca5;
                    }
                    *puVar7 = 0xd;
                    puVar7[1] = &PTR_FUN_149e18960;
                    *(undefined2 *)(puVar7 + 2) = 2;
                    puVar7[9] = &PTR_FUN_149e18960;
                    *(undefined2 *)(puVar7 + 10) = 2;
                    puVar7[0x11] = &PTR_FUN_149e18960;
                    *(undefined2 *)(puVar7 + 0x12) = 2;
                    puVar7[0x19] = &PTR_FUN_149e18960;
                    *(undefined2 *)(puVar7 + 0x1a) = 2;
                    puVar7[0x21] = &PTR_FUN_149e18960;
                    *(undefined2 *)(puVar7 + 0x22) = 2;
                    puVar7[0x29] = &PTR_FUN_149e18960;
                    *(undefined2 *)(puVar7 + 0x2a) = 2;
                    puVar7[0x31] = &PTR_FUN_149e18960;
                    *(undefined2 *)(puVar7 + 0x32) = 2;
                    puVar7[0x39] = &PTR_FUN_149e18960;
                    *(undefined2 *)(puVar7 + 0x3a) = 2;
                    puVar7[0x41] = &PTR_FUN_149e18960;
                    *(undefined2 *)(puVar7 + 0x42) = 2;
                    puVar7[0x49] = &PTR_FUN_149e18960;
                    *(undefined2 *)(puVar7 + 0x4a) = 2;
                    puVar7[0x51] = &PTR_FUN_149e18960;
                    *(undefined2 *)(puVar7 + 0x52) = 2;
                    puVar7[0x59] = &PTR_FUN_149e18960;
                    *(undefined2 *)(puVar7 + 0x5a) = 2;
                    puVar7[0x61] = &PTR_FUN_149e18960;
                    *(undefined2 *)(puVar7 + 0x62) = 2;
                    *local_178 = (longlong)(puVar7 + 1);
                    if (0 < (int)*local_140) {
                      lVar8 = 0;
                      do {
                        FUN_1424a8f10(lVar8 * 0x40 + *local_178,1,&DAT_149c4e280 + lVar8 * 6,
                                      0xffffffff);
                        lVar8 = lVar8 + 1;
                      } while (lVar8 < (int)*local_140);
                    }
                    if (*param_4 < 1) {
                      *local_1c0 = 0xd;
                      puVar7 = (undefined8 *)thunk_FUN_1424da030(0x348);
                      if (puVar7 == (undefined8 *)0x0) {
                        local_58 = local_108;
                        puVar19 = local_1c0;
                        plVar9 = local_58;
                        goto LAB_142601ca5;
                      }
                      *puVar7 = 0xd;
                      puVar7[1] = &PTR_FUN_149e18960;
                      *(undefined2 *)(puVar7 + 2) = 2;
                      puVar7[9] = &PTR_FUN_149e18960;
                      *(undefined2 *)(puVar7 + 10) = 2;
                      puVar7[0x11] = &PTR_FUN_149e18960;
                      *(undefined2 *)(puVar7 + 0x12) = 2;
                      puVar7[0x19] = &PTR_FUN_149e18960;
                      *(undefined2 *)(puVar7 + 0x1a) = 2;
                      puVar7[0x21] = &PTR_FUN_149e18960;
                      *(undefined2 *)(puVar7 + 0x22) = 2;
                      puVar7[0x29] = &PTR_FUN_149e18960;
                      *(undefined2 *)(puVar7 + 0x2a) = 2;
                      puVar7[0x31] = &PTR_FUN_149e18960;
                      *(undefined2 *)(puVar7 + 0x32) = 2;
                      puVar7[0x39] = &PTR_FUN_149e18960;
                      *(undefined2 *)(puVar7 + 0x3a) = 2;
                      puVar7[0x41] = &PTR_FUN_149e18960;
                      *(undefined2 *)(puVar7 + 0x42) = 2;
                      puVar7[0x49] = &PTR_FUN_149e18960;
                      *(undefined2 *)(puVar7 + 0x4a) = 2;
                      puVar7[0x51] = &PTR_FUN_149e18960;
                      *(undefined2 *)(puVar7 + 0x52) = 2;
                      puVar7[0x59] = &PTR_FUN_149e18960;
                      *(undefined2 *)(puVar7 + 0x5a) = 2;
                      puVar7[0x61] = &PTR_FUN_149e18960;
                      *(undefined2 *)(puVar7 + 0x62) = 2;
                      *local_108 = (longlong)(puVar7 + 1);
                      if (0 < (int)*local_1c0) {
                        lVar8 = 0;
                        do {
                          FUN_1424a8f10(lVar8 * 0x40 + *local_108,1,&DAT_149c4e280 + lVar8 * 6,
                                        0xffffffff);
                          lVar8 = lVar8 + 1;
                        } while (lVar8 < (int)*local_1c0);
                      }
                      if (*param_4 < 1) {
                        *local_1e8 = 8;
                        puVar7 = (undefined8 *)thunk_FUN_1424da030(0x208);
                        if (puVar7 == (undefined8 *)0x0) {
                          local_58 = local_240;
                          puVar19 = local_1e8;
                          plVar9 = local_58;
                          goto LAB_142601ca5;
                        }
                        *puVar7 = 8;
                        puVar7[1] = &PTR_FUN_149e18960;
                        *(undefined2 *)(puVar7 + 2) = 2;
                        puVar7[9] = &PTR_FUN_149e18960;
                        *(undefined2 *)(puVar7 + 10) = 2;
                        puVar7[0x11] = &PTR_FUN_149e18960;
                        *(undefined2 *)(puVar7 + 0x12) = 2;
                        puVar7[0x19] = &PTR_FUN_149e18960;
                        *(undefined2 *)(puVar7 + 0x1a) = 2;
                        puVar7[0x21] = &PTR_FUN_149e18960;
                        *(undefined2 *)(puVar7 + 0x22) = 2;
                        puVar7[0x29] = &PTR_FUN_149e18960;
                        *(undefined2 *)(puVar7 + 0x2a) = 2;
                        puVar7[0x31] = &PTR_FUN_149e18960;
                        *(undefined2 *)(puVar7 + 0x32) = 2;
                        puVar7[0x39] = &PTR_FUN_149e18960;
                        *(undefined2 *)(puVar7 + 0x3a) = 2;
                        *local_240 = (longlong)(puVar7 + 1);
                        if (0 < (int)*local_1e8) {
                          lVar8 = 0;
                          do {
                            FUN_1424a8f10(lVar8 * 0x40 + *local_240,1,&DAT_149c4e2d0 + lVar8 * 4,
                                          0xffffffff);
                            lVar8 = lVar8 + 1;
                          } while (lVar8 < (int)*local_1e8);
                        }
                        if (*param_4 < 1) {
                          *local_110 = 8;
                          puVar7 = (undefined8 *)thunk_FUN_1424da030(0x208);
                          if (puVar7 == (undefined8 *)0x0) {
                            local_58 = local_160;
                            puVar19 = local_110;
                            plVar9 = local_58;
                            goto LAB_142601ca5;
                          }
                          *puVar7 = 8;
                          puVar7[1] = &PTR_FUN_149e18960;
                          *(undefined2 *)(puVar7 + 2) = 2;
                          puVar7[9] = &PTR_FUN_149e18960;
                          *(undefined2 *)(puVar7 + 10) = 2;
                          puVar7[0x11] = &PTR_FUN_149e18960;
                          *(undefined2 *)(puVar7 + 0x12) = 2;
                          puVar7[0x19] = &PTR_FUN_149e18960;
                          *(undefined2 *)(puVar7 + 0x1a) = 2;
                          puVar7[0x21] = &PTR_FUN_149e18960;
                          *(undefined2 *)(puVar7 + 0x22) = 2;
                          puVar7[0x29] = &PTR_FUN_149e18960;
                          *(undefined2 *)(puVar7 + 0x2a) = 2;
                          puVar7[0x31] = &PTR_FUN_149e18960;
                          *(undefined2 *)(puVar7 + 0x32) = 2;
                          puVar7[0x39] = &PTR_FUN_149e18960;
                          *(undefined2 *)(puVar7 + 0x3a) = 2;
                          *local_160 = (longlong)(puVar7 + 1);
                          if (0 < (int)*local_110) {
                            lVar8 = 0;
                            do {
                              FUN_1424a8f10(lVar8 * 0x40 + *local_160,1,&DAT_149c4e2d0 + lVar8 * 4,
                                            0xffffffff);
                              lVar8 = lVar8 + 1;
                            } while (lVar8 < (int)*local_110);
                          }
                          if (*param_4 < 1) {
                            *local_1a8 = 8;
                            puVar7 = (undefined8 *)thunk_FUN_1424da030(0x208);
                            if (puVar7 == (undefined8 *)0x0) {
                              local_58 = local_188;
                              puVar19 = local_1a8;
                              plVar9 = local_58;
                              goto LAB_142601ca5;
                            }
                            *puVar7 = 8;
                            puVar7[1] = &PTR_FUN_149e18960;
                            *(undefined2 *)(puVar7 + 2) = 2;
                            puVar7[9] = &PTR_FUN_149e18960;
                            *(undefined2 *)(puVar7 + 10) = 2;
                            puVar7[0x11] = &PTR_FUN_149e18960;
                            *(undefined2 *)(puVar7 + 0x12) = 2;
                            puVar7[0x19] = &PTR_FUN_149e18960;
                            *(undefined2 *)(puVar7 + 0x1a) = 2;
                            puVar7[0x21] = &PTR_FUN_149e18960;
                            *(undefined2 *)(puVar7 + 0x22) = 2;
                            puVar7[0x29] = &PTR_FUN_149e18960;
                            *(undefined2 *)(puVar7 + 0x2a) = 2;
                            puVar7[0x31] = &PTR_FUN_149e18960;
                            *(undefined2 *)(puVar7 + 0x32) = 2;
                            puVar7[0x39] = &PTR_FUN_149e18960;
                            *(undefined2 *)(puVar7 + 0x3a) = 2;
                            *local_188 = (longlong)(puVar7 + 1);
                            if (0 < (int)*local_1a8) {
                              lVar8 = 0;
                              do {
                                FUN_1424a8f10(lVar8 * 0x40 + *local_188,1,&DAT_149c4e2d0 + lVar8 * 4
                                              ,0xffffffff);
                                lVar8 = lVar8 + 1;
                              } while (lVar8 < (int)*local_1a8);
                            }
                            if (*param_4 < 1) {
                              *local_118 = 8;
                              puVar7 = (undefined8 *)thunk_FUN_1424da030(0x208);
                              puVar19 = local_118;
                              plVar9 = plVar13;
                              if (puVar7 == (undefined8 *)0x0) goto LAB_142601ca5;
                              *puVar7 = 8;
                              puVar7[1] = &PTR_FUN_149e18960;
                              *(undefined2 *)(puVar7 + 2) = 2;
                              puVar7[9] = &PTR_FUN_149e18960;
                              *(undefined2 *)(puVar7 + 10) = 2;
                              puVar7[0x11] = &PTR_FUN_149e18960;
                              *(undefined2 *)(puVar7 + 0x12) = 2;
                              puVar7[0x19] = &PTR_FUN_149e18960;
                              *(undefined2 *)(puVar7 + 0x1a) = 2;
                              puVar7[0x21] = &PTR_FUN_149e18960;
                              *(undefined2 *)(puVar7 + 0x22) = 2;
                              puVar7[0x29] = &PTR_FUN_149e18960;
                              *(undefined2 *)(puVar7 + 0x2a) = 2;
                              puVar7[0x31] = &PTR_FUN_149e18960;
                              *(undefined2 *)(puVar7 + 0x32) = 2;
                              puVar7[0x39] = &PTR_FUN_149e18960;
                              *(undefined2 *)(puVar7 + 0x3a) = 2;
                              *plVar13 = (longlong)(puVar7 + 1);
                              if (0 < (int)*local_118) {
                                lVar8 = 0;
                                do {
                                  FUN_1424a8f10(lVar8 * 0x40 + *plVar13,1,&DAT_149c4e2d0 + lVar8 * 4
                                                ,0xffffffff);
                                  lVar8 = lVar8 + 1;
                                } while (lVar8 < (int)*local_118);
                              }
                              if (*param_4 < 1) {
                                *local_1e0 = 8;
                                puVar7 = (undefined8 *)thunk_FUN_1424da030(0x208);
                                if (puVar7 == (undefined8 *)0x0) {
                                  local_58 = local_1b8;
                                  puVar19 = local_1e0;
                                  plVar9 = local_58;
                                  goto LAB_142601ca5;
                                }
                                *puVar7 = 8;
                                puVar7[1] = &PTR_FUN_149e18960;
                                *(undefined2 *)(puVar7 + 2) = 2;
                                puVar7[9] = &PTR_FUN_149e18960;
                                *(undefined2 *)(puVar7 + 10) = 2;
                                puVar7[0x11] = &PTR_FUN_149e18960;
                                *(undefined2 *)(puVar7 + 0x12) = 2;
                                puVar7[0x19] = &PTR_FUN_149e18960;
                                *(undefined2 *)(puVar7 + 0x1a) = 2;
                                puVar7[0x21] = &PTR_FUN_149e18960;
                                *(undefined2 *)(puVar7 + 0x22) = 2;
                                puVar7[0x29] = &PTR_FUN_149e18960;
                                *(undefined2 *)(puVar7 + 0x2a) = 2;
                                puVar7[0x31] = &PTR_FUN_149e18960;
                                *(undefined2 *)(puVar7 + 0x32) = 2;
                                puVar7[0x39] = &PTR_FUN_149e18960;
                                *(undefined2 *)(puVar7 + 0x3a) = 2;
                                *local_1b8 = (longlong)(puVar7 + 1);
                                if (0 < (int)*local_1e0) {
                                  lVar8 = 0;
                                  do {
                                    FUN_1424a8f10(lVar8 * 0x40 + *local_1b8,1,
                                                  &DAT_149c4e2d0 + lVar8 * 4,0xffffffff);
                                    lVar8 = lVar8 + 1;
                                  } while (lVar8 < (int)*local_1e0);
                                }
                                if (*param_4 < 1) {
                                  *local_1d8 = 8;
                                  puVar7 = (undefined8 *)thunk_FUN_1424da030(0x208);
                                  if (puVar7 == (undefined8 *)0x0) {
                                    local_58 = local_1b0;
                                    puVar19 = local_1d8;
                                    plVar9 = local_58;
                                    goto LAB_142601ca5;
                                  }
                                  *puVar7 = 8;
                                  puVar7[1] = &PTR_FUN_149e18960;
                                  *(undefined2 *)(puVar7 + 2) = 2;
                                  puVar7[9] = &PTR_FUN_149e18960;
                                  *(undefined2 *)(puVar7 + 10) = 2;
                                  puVar7[0x11] = &PTR_FUN_149e18960;
                                  *(undefined2 *)(puVar7 + 0x12) = 2;
                                  puVar7[0x19] = &PTR_FUN_149e18960;
                                  *(undefined2 *)(puVar7 + 0x1a) = 2;
                                  puVar7[0x21] = &PTR_FUN_149e18960;
                                  *(undefined2 *)(puVar7 + 0x22) = 2;
                                  puVar7[0x29] = &PTR_FUN_149e18960;
                                  *(undefined2 *)(puVar7 + 0x2a) = 2;
                                  puVar7[0x31] = &PTR_FUN_149e18960;
                                  *(undefined2 *)(puVar7 + 0x32) = 2;
                                  puVar7[0x39] = &PTR_FUN_149e18960;
                                  *(undefined2 *)(puVar7 + 0x3a) = 2;
                                  *local_1b0 = (longlong)(puVar7 + 1);
                                  if (0 < (int)*local_1d8) {
                                    lVar8 = 0;
                                    do {
                                      FUN_1424a8f10(lVar8 * 0x40 + *local_1b0,1,
                                                    &DAT_149c4e2d0 + lVar8 * 4,0xffffffff);
                                      lVar8 = lVar8 + 1;
                                    } while (lVar8 < (int)*local_1d8);
                                  }
                                  if (*param_4 < 1) {
                                    *local_1d0 = 8;
                                    puVar7 = (undefined8 *)thunk_FUN_1424da030(0x208);
                                    if (puVar7 == (undefined8 *)0x0) {
                                      local_58 = local_1c8;
                                      puVar19 = local_1d0;
                                      plVar9 = local_58;
                                      goto LAB_142601ca5;
                                    }
                                    *puVar7 = 8;
                                    puVar7[1] = &PTR_FUN_149e18960;
                                    *(undefined2 *)(puVar7 + 2) = 2;
                                    puVar7[9] = &PTR_FUN_149e18960;
                                    *(undefined2 *)(puVar7 + 10) = 2;
                                    puVar7[0x11] = &PTR_FUN_149e18960;
                                    *(undefined2 *)(puVar7 + 0x12) = 2;
                                    puVar7[0x19] = &PTR_FUN_149e18960;
                                    *(undefined2 *)(puVar7 + 0x1a) = 2;
                                    puVar7[0x21] = &PTR_FUN_149e18960;
                                    *(undefined2 *)(puVar7 + 0x22) = 2;
                                    puVar7[0x29] = &PTR_FUN_149e18960;
                                    *(undefined2 *)(puVar7 + 0x2a) = 2;
                                    puVar7[0x31] = &PTR_FUN_149e18960;
                                    *(undefined2 *)(puVar7 + 0x32) = 2;
                                    puVar7[0x39] = &PTR_FUN_149e18960;
                                    *(undefined2 *)(puVar7 + 0x3a) = 2;
                                    *local_1c8 = (longlong)(puVar7 + 1);
                                    if (0 < (int)*local_1d0) {
                                      lVar8 = 0;
                                      do {
                                        FUN_1424a8f10(lVar8 * 0x40 + *local_1c8,1,
                                                      &DAT_149c4e2d0 + lVar8 * 4,0xffffffff);
                                        lVar8 = lVar8 + 1;
                                      } while (lVar8 < (int)*local_1d0);
                                    }
                                    if (*param_4 < 1) {
                                      *puVar12 = 8;
                                      puVar7 = (undefined8 *)thunk_FUN_1424da030(0x208);
                                      puVar19 = puVar12;
                                      plVar9 = plVar16;
                                      if (puVar7 == (undefined8 *)0x0) goto LAB_142601ca5;
                                      *puVar7 = 8;
                                      puVar7[1] = &PTR_FUN_149e18960;
                                      *(undefined2 *)(puVar7 + 2) = 2;
                                      puVar7[9] = &PTR_FUN_149e18960;
                                      *(undefined2 *)(puVar7 + 10) = 2;
                                      puVar7[0x11] = &PTR_FUN_149e18960;
                                      *(undefined2 *)(puVar7 + 0x12) = 2;
                                      puVar7[0x19] = &PTR_FUN_149e18960;
                                      *(undefined2 *)(puVar7 + 0x1a) = 2;
                                      puVar7[0x21] = &PTR_FUN_149e18960;
                                      *(undefined2 *)(puVar7 + 0x22) = 2;
                                      puVar7[0x29] = &PTR_FUN_149e18960;
                                      *(undefined2 *)(puVar7 + 0x2a) = 2;
                                      puVar7[0x31] = &PTR_FUN_149e18960;
                                      *(undefined2 *)(puVar7 + 0x32) = 2;
                                      puVar7[0x39] = &PTR_FUN_149e18960;
                                      *(undefined2 *)(puVar7 + 0x3a) = 2;
                                      *plVar16 = (longlong)(puVar7 + 1);
                                      if (0 < (int)*puVar12) {
                                        lVar8 = 0;
                                        do {
                                          FUN_1424a8f10(lVar8 * 0x40 + *plVar16,1,
                                                        &DAT_149c4e2d0 + lVar8 * 4,0xffffffff);
                                          lVar8 = lVar8 + 1;
                                        } while (lVar8 < (int)*puVar12);
                                      }
                                      if (*param_4 < 1) {
                                        *local_1a0 = 2;
                                        puVar7 = (undefined8 *)thunk_FUN_1424da030(0x88);
                                        if (puVar7 == (undefined8 *)0x0) {
                                          local_58 = local_230;
                                          puVar19 = local_1a0;
                                          plVar9 = local_58;
                                          goto LAB_142601ca5;
                                        }
                                        *puVar7 = 2;
                                        puVar7[1] = &PTR_FUN_149e18960;
                                        *(undefined2 *)(puVar7 + 2) = 2;
                                        puVar7[9] = &PTR_FUN_149e18960;
                                        *(undefined2 *)(puVar7 + 10) = 2;
                                        *local_230 = (longlong)(puVar7 + 1);
                                        if (0 < (int)*local_1a0) {
                                          lVar8 = 0;
                                          do {
                                            FUN_1424a8f10(lVar8 * 0x40 + *local_230,1,
                                                          &DAT_149c4e2f0 + lVar8 * 6,0xffffffff);
                                            lVar8 = lVar8 + 1;
                                          } while (lVar8 < (int)*local_1a0);
                                        }
                                        if (*param_4 < 1) {
                                          *local_198 = 2;
                                          puVar7 = (undefined8 *)thunk_FUN_1424da030(0x88);
                                          if (puVar7 == (undefined8 *)0x0) {
                                            local_58 = local_228;
                                            puVar19 = local_198;
                                            plVar9 = local_58;
                                            goto LAB_142601ca5;
                                          }
                                          *puVar7 = 2;
                                          puVar7[1] = &PTR_FUN_149e18960;
                                          *(undefined2 *)(puVar7 + 2) = 2;
                                          puVar7[9] = &PTR_FUN_149e18960;
                                          *(undefined2 *)(puVar7 + 10) = 2;
                                          *local_228 = (longlong)(puVar7 + 1);
                                          if (0 < (int)*local_198) {
                                            lVar8 = 0;
                                            do {
                                              FUN_1424a8f10(lVar8 * 0x40 + *local_228,1,
                                                            &DAT_149c4e2f0 + lVar8 * 6,0xffffffff);
                                              lVar8 = lVar8 + 1;
                                            } while (lVar8 < (int)*local_198);
                                          }
                                          if (*param_4 < 1) {
                                            *local_138 = 4;
                                            puVar7 = (undefined8 *)thunk_FUN_1424da030(0x108);
                                            if (puVar7 == (undefined8 *)0x0) {
                                              local_58 = local_1f8;
                                              puVar19 = local_138;
                                              plVar9 = local_58;
                                              goto LAB_142601ca5;
                                            }
                                            *puVar7 = 4;
                                            puVar7[1] = &PTR_FUN_149e18960;
                                            *(undefined2 *)(puVar7 + 2) = 2;
                                            puVar7[9] = &PTR_FUN_149e18960;
                                            *(undefined2 *)(puVar7 + 10) = 2;
                                            puVar7[0x11] = &PTR_FUN_149e18960;
                                            *(undefined2 *)(puVar7 + 0x12) = 2;
                                            puVar7[0x19] = &PTR_FUN_149e18960;
                                            *(undefined2 *)(puVar7 + 0x1a) = 2;
                                            *local_1f8 = (longlong)(puVar7 + 1);
                                            if (0 < (int)*local_138) {
                                              lVar8 = 0;
                                              do {
                                                FUN_1424a8f10(lVar8 * 0x40 + *local_1f8,1,
                                                              &DAT_149c4e300 + lVar8 * 4,0xffffffff)
                                                ;
                                                lVar8 = lVar8 + 1;
                                              } while (lVar8 < (int)*local_138);
                                            }
                                            if (*param_4 < 1) {
                                              *local_130 = 4;
                                              puVar7 = (undefined8 *)thunk_FUN_1424da030(0x108);
                                              if (puVar7 == (undefined8 *)0x0) {
                                                local_58 = local_1f0;
                                                puVar19 = local_130;
                                                plVar9 = local_58;
                                                goto LAB_142601ca5;
                                              }
                                              *puVar7 = 4;
                                              puVar7[1] = &PTR_FUN_149e18960;
                                              *(undefined2 *)(puVar7 + 2) = 2;
                                              puVar7[9] = &PTR_FUN_149e18960;
                                              *(undefined2 *)(puVar7 + 10) = 2;
                                              puVar7[0x11] = &PTR_FUN_149e18960;
                                              *(undefined2 *)(puVar7 + 0x12) = 2;
                                              puVar7[0x19] = &PTR_FUN_149e18960;
                                              *(undefined2 *)(puVar7 + 0x1a) = 2;
                                              *local_1f0 = (longlong)(puVar7 + 1);
                                              if (0 < (int)*local_130) {
                                                lVar8 = 0;
                                                do {
                                                  FUN_1424a8f10(lVar8 * 0x40 + *local_1f0,1,
                                                                &DAT_149c4e300 + lVar8 * 4,
                                                                0xffffffff);
                                                  lVar8 = lVar8 + 1;
                                                } while (lVar8 < (int)*local_130);
                                              }
                                              if (*param_4 < 1) {
                                                *local_128 = 4;
                                                puVar7 = (undefined8 *)thunk_FUN_1424da030(0x108);
                                                if (puVar7 == (undefined8 *)0x0) {
                                                  local_58 = local_170;
                                                  puVar19 = local_128;
                                                  plVar9 = local_58;
                                                  goto LAB_142601ca5;
                                                }
                                                *puVar7 = 4;
                                                puVar7[1] = &PTR_FUN_149e18960;
                                                *(undefined2 *)(puVar7 + 2) = 2;
                                                puVar7[9] = &PTR_FUN_149e18960;
                                                *(undefined2 *)(puVar7 + 10) = 2;
                                                puVar7[0x11] = &PTR_FUN_149e18960;
                                                *(undefined2 *)(puVar7 + 0x12) = 2;
                                                puVar7[0x19] = &PTR_FUN_149e18960;
                                                *(undefined2 *)(puVar7 + 0x1a) = 2;
                                                *local_170 = (longlong)(puVar7 + 1);
                                                if (0 < (int)*local_128) {
                                                  lVar8 = 0;
                                                  do {
                                                    FUN_1424a8f10(lVar8 * 0x40 + *local_170,1,
                                                                  &DAT_149c4e300 + lVar8 * 4,
                                                                  0xffffffff);
                                                    lVar8 = lVar8 + 1;
                                                  } while (lVar8 < (int)*local_128);
                                                }
                                                if (*param_4 < 1) {
                                                  *local_120 = 4;
                                                  puVar7 = (undefined8 *)thunk_FUN_1424da030(0x108);
                                                  if (puVar7 == (undefined8 *)0x0) {
                                                    puVar19 = local_120;
                                                    plVar9 = local_168;
                                                    goto LAB_142601ca5;
                                                  }
                                                  *puVar7 = 4;
                                                  puVar7[1] = &PTR_FUN_149e18960;
                                                  *(undefined2 *)(puVar7 + 2) = 2;
                                                  puVar7[9] = &PTR_FUN_149e18960;
                                                  *(undefined2 *)(puVar7 + 10) = 2;
                                                  puVar7[0x11] = &PTR_FUN_149e18960;
                                                  *(undefined2 *)(puVar7 + 0x12) = 2;
                                                  puVar7[0x19] = &PTR_FUN_149e18960;
                                                  *(undefined2 *)(puVar7 + 0x1a) = 2;
                                                  *local_168 = (longlong)(puVar7 + 1);
                                                  if (0 < (int)*local_120) {
                                                    lVar8 = 0;
                                                    do {
                                                      FUN_1424a8f10(lVar8 * 0x40 + *local_168,1,
                                                                    &DAT_149c4e300 + lVar8 * 4,
                                                                    0xffffffff);
                                                      lVar8 = lVar8 + 1;
                                                    } while (lVar8 < (int)*local_120);
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
      }
    }
    FUN_1424a8f10(local_268,1,&DAT_149c4e010,0x25);
  }
  FUN_1424ea9f0(local_248);
  FUN_1424ea9f0(local_270);
  if ((char)local_9c != '\0') {
    FUN_1424da110(local_a8);
  }
LAB_142601d07:
  FUN_140859a90(local_508);
LAB_142601d10:
  FUN_142605810(&local_4c8);
  return;
}



// FUNCTION 142601f20 Unwind@142601f20 body=58 status=ok
// SIG undefined Unwind@142601f20(void)

void Unwind_142601f20(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x440);
  return;
}



// FUNCTION 142601f60 Unwind@142601f60 body=90 status=ok
// SIG undefined Unwind@142601f60(void)

void Unwind_142601f60(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x480) != 0) {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0x480));
  }
  if (*(longlong *)(param_2 + 0x4e0) != 0) {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0x4e0));
  }
  return;
}



// FUNCTION 142601fc0 Unwind@142601fc0 body=93 status=ok
// SIG undefined Unwind@142601fc0(void)

void Unwind_142601fc0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x4d0) != 0) {
    FUN_1424ea9f0(*(longlong *)(param_2 + 0x4d0));
  }
  if (*(longlong *)(param_2 + 0x488) != 0) {
    (**(code **)**(undefined8 **)(param_2 + 0x488))(*(undefined8 **)(param_2 + 0x488),1);
  }
  return;
}



// FUNCTION 142602020 Unwind@142602020 body=112 status=ok
// SIG undefined Unwind@142602020(void)

void Unwind_142602020(undefined8 param_1,longlong param_2)

{
  FUN_1426059f0(param_2 + 0x180);
  if (*(longlong *)(param_2 + 0x128) != 0) {
    FUN_142502220();
  }
  if (*(longlong *)(param_2 + 0xd0) != 0) {
    FUN_142502220();
  }
  if (*(longlong *)(param_2 + 0x78) != 0) {
    FUN_142502220();
  }
  thunk_FUN_1424b70d0(param_2 + 0x70);
  return;
}



// FUNCTION 142602090 Unwind@142602090 body=67 status=ok
// SIG undefined Unwind@142602090(void)

void Unwind_142602090(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x44c) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x440));
  }
  return;
}



// FUNCTION 1426020e0 Unwind@1426020e0 body=67 status=ok
// SIG undefined Unwind@1426020e0(void)

void Unwind_1426020e0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x49c) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x490));
  }
  return;
}



// FUNCTION 142602130 Unwind@142602130 body=55 status=ok
// SIG undefined Unwind@142602130(void)

void Unwind_142602130(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 142602170 Unwind@142602170 body=55 status=ok
// SIG undefined Unwind@142602170(void)

void Unwind_142602170(undefined8 param_1,longlong param_2)

{
  FUN_142605810(param_2 + 0x70);
  return;
}



// FUNCTION 1426021b0 FUN_1426021b0 body=158 status=ok
// SIG undefined FUN_1426021b0(void)

undefined8 * FUN_1426021b0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  *param_1 = icu_64::DateFormatSymbols::vftable;
  puVar2 = param_1 + 0x27;
  param_1[0x27] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x28) = 2;
  puVar3 = param_1 + 0x40;
  FUN_1424a3c00();
  puVar4 = param_1 + 0x5c;
  param_1[0x5c] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x5d) = 2;
  uVar1 = FUN_1424a3b00();
  FUN_1425fcb10(param_1,uVar1,0,param_2,1,puVar2,puVar3,puVar4,param_1,uVar5);
  return param_1;
}



// FUNCTION 142602250 Unwind@142602250 body=43 status=ok
// SIG undefined Unwind@142602250(void)

void Unwind_142602250(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x38));
  FUN_1414b3f60(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 142602280 Unwind@142602280 body=43 status=ok
// SIG undefined Unwind@142602280(void)

void Unwind_142602280(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  FUN_1424b70d0(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 1426022b0 FUN_1426022b0 body=161 status=ok
// SIG undefined FUN_1426022b0(void)

undefined8 *
FUN_1426022b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  *param_1 = icu_64::DateFormatSymbols::vftable;
  puVar1 = param_1 + 0x27;
  param_1[0x27] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x28) = 2;
  puVar2 = param_1 + 0x40;
  FUN_1424a3c00();
  param_1[0x5c] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x5d) = 2;
  FUN_1425fcb10(param_1,param_2,param_3,param_4,0,puVar1,puVar2,param_1 + 0x5c,param_1,uVar3);
  return param_1;
}



// FUNCTION 142602360 Unwind@142602360 body=49 status=ok
// SIG undefined Unwind@142602360(void)

void Unwind_142602360(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x38));
  FUN_1414b3f60(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1426023a0 Unwind@1426023a0 body=49 status=ok
// SIG undefined Unwind@1426023a0(void)

void Unwind_1426023a0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  FUN_1424b70d0(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 1426023e0 FUN_1426023e0 body=6528 status=ok
// SIG undefined FUN_1426023e0(void)

void FUN_1426023e0(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 local_228 [224];
  longlong local_148;
  longlong local_140;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined4 local_44;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_44 = 0;
  local_50 = param_1 + 0x439;
  local_58 = param_1 + 0x39c;
  local_148 = param_2 + 0x39c;
  local_140 = param_2 + 0x439;
  FUN_142532120(&local_148,local_228,0,&local_44);
  local_68 = param_2 + 0x39c;
  local_60 = param_2 + 0x439;
  FUN_142532120(&local_68,&local_148,1,&local_44);
  FUN_142532210(&local_58,&local_148,local_228);
  FUN_1414b3f60(&local_148);
  FUN_1414b3f60(local_228);
  uVar1 = *(uint *)(param_2 + 0x10);
  lVar2 = *(longlong *)(param_2 + 8);
  *(uint *)(param_1 + 0x10) = uVar1;
  iVar6 = uVar1 + (uVar1 == 0);
  lVar9 = (longlong)iVar6;
  lVar10 = -1;
  if (-1 < iVar6) {
    lVar10 = lVar9 * 0x40 + 8;
  }
  plVar7 = (longlong *)thunk_FUN_1424da030(lVar10);
  if (plVar7 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    *plVar7 = lVar9;
    plVar8 = plVar7 + 1;
    do {
      *plVar8 = (longlong)&PTR_FUN_149e18960;
      *(undefined2 *)(plVar8 + 1) = 2;
      plVar8 = plVar8 + 8;
    } while (plVar8 != plVar7 + lVar9 * 8 + 1);
    *(longlong **)(param_1 + 8) = plVar7 + 1;
    if (0 < (int)uVar1) {
      lVar10 = 0;
      do {
        thunk_FUN_1424a7600(*(longlong *)(param_1 + 8) + lVar10,lVar2 + lVar10);
        lVar10 = lVar10 + 0x40;
      } while ((ulonglong)uVar1 << 6 != lVar10);
    }
  }
  uVar1 = *(uint *)(param_2 + 0x20);
  lVar2 = *(longlong *)(param_2 + 0x18);
  *(uint *)(param_1 + 0x20) = uVar1;
  iVar6 = uVar1 + (uVar1 == 0);
  lVar9 = (longlong)iVar6;
  lVar10 = -1;
  if (-1 < iVar6) {
    lVar10 = lVar9 * 0x40 + 8;
  }
  plVar7 = (longlong *)thunk_FUN_1424da030(lVar10);
  if (plVar7 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else {
    *plVar7 = lVar9;
    plVar8 = plVar7 + 1;
    do {
      *plVar8 = (longlong)&PTR_FUN_149e18960;
      *(undefined2 *)(plVar8 + 1) = 2;
      plVar8 = plVar8 + 8;
    } while (plVar8 != plVar7 + lVar9 * 8 + 1);
    *(longlong **)(param_1 + 0x18) = plVar7 + 1;
    if (0 < (int)uVar1) {
      lVar10 = 0;
      do {
        thunk_FUN_1424a7600(*(longlong *)(param_1 + 0x18) + lVar10,lVar2 + lVar10);
        lVar10 = lVar10 + 0x40;
      } while ((ulonglong)uVar1 << 6 != lVar10);
    }
  }
  uVar1 = *(uint *)(param_2 + 0x30);
  lVar2 = *(longlong *)(param_2 + 0x28);
  *(uint *)(param_1 + 0x30) = uVar1;
  iVar6 = uVar1 + (uVar1 == 0);
  lVar9 = (longlong)iVar6;
  lVar10 = -1;
  if (-1 < iVar6) {
    lVar10 = lVar9 * 0x40 + 8;
  }
  plVar7 = (longlong *)thunk_FUN_1424da030(lVar10);
  if (plVar7 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  else {
    *plVar7 = lVar9;
    plVar8 = plVar7 + 1;
    do {
      *plVar8 = (longlong)&PTR_FUN_149e18960;
      *(undefined2 *)(plVar8 + 1) = 2;
      plVar8 = plVar8 + 8;
    } while (plVar8 != plVar7 + lVar9 * 8 + 1);
    *(longlong **)(param_1 + 0x28) = plVar7 + 1;
    if (0 < (int)uVar1) {
      lVar10 = 0;
      do {
        thunk_FUN_1424a7600(*(longlong *)(param_1 + 0x28) + lVar10,lVar2 + lVar10);
        lVar10 = lVar10 + 0x40;
      } while ((ulonglong)uVar1 << 6 != lVar10);
    }
  }
  uVar1 = *(uint *)(param_2 + 0x40);
  lVar2 = *(longlong *)(param_2 + 0x38);
  *(uint *)(param_1 + 0x40) = uVar1;
  iVar6 = uVar1 + (uVar1 == 0);
  lVar9 = (longlong)iVar6;
  lVar10 = -1;
  if (-1 < iVar6) {
    lVar10 = lVar9 * 0x40 + 8;
  }
  plVar7 = (longlong *)thunk_FUN_1424da030(lVar10);
  if (plVar7 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    *plVar7 = lVar9;
    plVar8 = plVar7 + 1;
    do {
      *plVar8 = (longlong)&PTR_FUN_149e18960;
      *(undefined2 *)(plVar8 + 1) = 2;
      plVar8 = plVar8 + 8;
    } while (plVar8 != plVar7 + lVar9 * 8 + 1);
    *(longlong **)(param_1 + 0x38) = plVar7 + 1;
    if (0 < (int)uVar1) {
      lVar10 = 0;
      do {
        thunk_FUN_1424a7600(*(longlong *)(param_1 + 0x38) + lVar10,lVar2 + lVar10);
        lVar10 = lVar10 + 0x40;
      } while ((ulonglong)uVar1 << 6 != lVar10);
    }
  }
  uVar1 = *(uint *)(param_2 + 0x50);
  lVar2 = *(longlong *)(param_2 + 0x48);
  *(uint *)(param_1 + 0x50) = uVar1;
  iVar6 = uVar1 + (uVar1 == 0);
  lVar9 = (longlong)iVar6;
  lVar10 = -1;
  if (-1 < iVar6) {
    lVar10 = lVar9 * 0x40 + 8;
  }
  plVar7 = (longlong *)thunk_FUN_1424da030(lVar10);
  if (plVar7 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  else {
    *plVar7 = lVar9;
    plVar8 = plVar7 + 1;
    do {
      *plVar8 = (longlong)&PTR_FUN_149e18960;
      *(undefined2 *)(plVar8 + 1) = 2;
      plVar8 = plVar8 + 8;
    } while (plVar8 != plVar7 + lVar9 * 8 + 1);
    *(longlong **)(param_1 + 0x48) = plVar7 + 1;
    if (0 < (int)uVar1) {
      lVar10 = 0;
      do {
        thunk_FUN_1424a7600(*(longlong *)(param_1 + 0x48) + lVar10,lVar2 + lVar10);
        lVar10 = lVar10 + 0x40;
      } while ((ulonglong)uVar1 << 6 != lVar10);
    }
  }
  uVar1 = *(uint *)(param_2 + 0x60);
  lVar2 = *(longlong *)(param_2 + 0x58);
  *(uint *)(param_1 + 0x60) = uVar1;
  iVar6 = uVar1 + (uVar1 == 0);
  lVar9 = (longlong)iVar6;
  lVar10 = -1;
  if (-1 < iVar6) {
    lVar10 = lVar9 * 0x40 + 8;
  }
  plVar7 = (longlong *)thunk_FUN_1424da030(lVar10);
  if (plVar7 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  else {
    *plVar7 = lVar9;
    plVar8 = plVar7 + 1;
    do {
      *plVar8 = (longlong)&PTR_FUN_149e18960;
      *(undefined2 *)(plVar8 + 1) = 2;
      plVar8 = plVar8 + 8;
    } while (plVar8 != plVar7 + lVar9 * 8 + 1);
    *(longlong **)(param_1 + 0x58) = plVar7 + 1;
    if (0 < (int)uVar1) {
      lVar10 = 0;
      do {
        thunk_FUN_1424a7600(*(longlong *)(param_1 + 0x58) + lVar10,lVar2 + lVar10);
        lVar10 = lVar10 + 0x40;
      } while ((ulonglong)uVar1 << 6 != lVar10);
    }
  }
  uVar1 = *(uint *)(param_2 + 0x70);
  lVar2 = *(longlong *)(param_2 + 0x68);
  *(uint *)(param_1 + 0x70) = uVar1;
  iVar6 = uVar1 + (uVar1 == 0);
  lVar9 = (longlong)iVar6;
  lVar10 = -1;
  if (-1 < iVar6) {
    lVar10 = lVar9 * 0x40 + 8;
  }
  plVar7 = (longlong *)thunk_FUN_1424da030(lVar10);
  if (plVar7 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  else {
    *plVar7 = lVar9;
    plVar8 = plVar7 + 1;
    do {
      *plVar8 = (longlong)&PTR_FUN_149e18960;
      *(undefined2 *)(plVar8 + 1) = 2;
      plVar8 = plVar8 + 8;
    } while (plVar8 != plVar7 + lVar9 * 8 + 1);
    *(longlong **)(param_1 + 0x68) = plVar7 + 1;
    if (0 < (int)uVar1) {
      lVar10 = 0;
      do {
        thunk_FUN_1424a7600(*(longlong *)(param_1 + 0x68) + lVar10,lVar2 + lVar10);
        lVar10 = lVar10 + 0x40;
      } while ((ulonglong)uVar1 << 6 != lVar10);
    }
  }
  uVar1 = *(uint *)(param_2 + 0x80);
  lVar2 = *(longlong *)(param_2 + 0x78);
  *(uint *)(param_1 + 0x80) = uVar1;
  iVar6 = uVar1 + (uVar1 == 0);
  lVar9 = (longlong)iVar6;
  lVar10 = -1;
  if (-1 < iVar6) {
    lVar10 = lVar9 * 0x40 + 8;
  }
  plVar7 = (longlong *)thunk_FUN_1424da030(lVar10);
  if (plVar7 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  else {
    *plVar7 = lVar9;
    plVar8 = plVar7 + 1;
    do {
      *plVar8 = (longlong)&PTR_FUN_149e18960;
      *(undefined2 *)(plVar8 + 1) = 2;
      plVar8 = plVar8 + 8;
    } while (plVar8 != plVar7 + lVar9 * 8 + 1);
    *(longlong **)(param_1 + 0x78) = plVar7 + 1;
    if (0 < (int)uVar1) {
      lVar10 = 0;
      do {
        thunk_FUN_1424a7600(*(longlong *)(param_1 + 0x78) + lVar10,lVar2 + lVar10);
        lVar10 = lVar10 + 0x40;
      } while ((ulonglong)uVar1 << 6 != lVar10);
    }
  }
  uVar1 = *(uint *)(param_2 + 0x90);
  lVar2 = *(longlong *)(param_2 + 0x88);
  *(uint *)(param_1 + 0x90) = uVar1;
  iVar6 = uVar1 + (uVar1 == 0);
  lVar9 = (longlong)iVar6;
  lVar10 = -1;
  if (-1 < iVar6) {
    lVar10 = lVar9 * 0x40 + 8;
  }
  plVar7 = (longlong *)thunk_FUN_1424da030(lVar10);
  if (plVar7 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  else {
    *plVar7 = lVar9;
    plVar8 = plVar7 + 1;
    do {
      *plVar8 = (longlong)&PTR_FUN_149e18960;
      *(undefined2 *)(plVar8 + 1) = 2;
      plVar8 = plVar8 + 8;
    } while (plVar8 != plVar7 + lVar9 * 8 + 1);
    *(longlong **)(param_1 + 0x88) = plVar7 + 1;
    if (0 < (int)uVar1) {
      lVar10 = 0;
      do {
        thunk_FUN_1424a7600(*(longlong *)(param_1 + 0x88) + lVar10,lVar2 + lVar10);
        lVar10 = lVar10 + 0x40;
      } while ((ulonglong)uVar1 << 6 != lVar10);
    }
  }
  uVar1 = *(uint *)(param_2 + 0xa0);
  lVar2 = *(longlong *)(param_2 + 0x98);
  *(uint *)(param_1 + 0xa0) = uVar1;
  iVar6 = uVar1 + (uVar1 == 0);
  lVar9 = (longlong)iVar6;
  lVar10 = -1;
  if (-1 < iVar6) {
    lVar10 = lVar9 * 0x40 + 8;
  }
  plVar7 = (longlong *)thunk_FUN_1424da030(lVar10);
  if (plVar7 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  else {
    *plVar7 = lVar9;
    plVar8 = plVar7 + 1;
    do {
      *plVar8 = (longlong)&PTR_FUN_149e18960;
      *(undefined2 *)(plVar8 + 1) = 2;
      plVar8 = plVar8 + 8;
    } while (plVar8 != plVar7 + lVar9 * 8 + 1);
    *(longlong **)(param_1 + 0x98) = plVar7 + 1;
    if (0 < (int)uVar1) {
      lVar10 = 0;
      do {
        thunk_FUN_1424a7600(*(longlong *)(param_1 + 0x98) + lVar10,lVar2 + lVar10);
        lVar10 = lVar10 + 0x40;
      } while ((ulonglong)uVar1 << 6 != lVar10);
    }
  }
  uVar1 = *(uint *)(param_2 + 0xb0);
  lVar2 = *(longlong *)(param_2 + 0xa8);
  *(uint *)(param_1 + 0xb0) = uVar1;
  iVar6 = uVar1 + (uVar1 == 0);
  lVar9 = (longlong)iVar6;
  lVar10 = -1;
  if (-1 < iVar6) {
    lVar10 = lVar9 * 0x40 + 8;
  }
  plVar7 = (longlong *)thunk_FUN_1424da030(lVar10);
  if (plVar7 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  else {
    *plVar7 = lVar9;
    plVar8 = plVar7 + 1;
    do {
      *plVar8 = (longlong)&PTR_FUN_149e18960;
      *(undefined2 *)(plVar8 + 1) = 2;
      plVar8 = plVar8 + 8;
    } while (plVar8 != plVar7 + lVar9 * 8 + 1);
    *(longlong **)(param_1 + 0xa8) = plVar7 + 1;
    if (0 < (int)uVar1) {
      lVar10 = 0;
      do {
        thunk_FUN_1424a7600(*(longlong *)(param_1 + 0xa8) + lVar10,lVar2 + lVar10);
        lVar10 = lVar10 + 0x40;
      } while ((ulonglong)uVar1 << 6 != lVar10);
    }
  }
  uVar1 = *(uint *)(param_2 + 0xc0);
  lVar2 = *(longlong *)(param_2 + 0xb8);
  *(uint *)(param_1 + 0xc0) = uVar1;
  iVar6 = uVar1 + (uVar1 == 0);
  lVar9 = (longlong)iVar6;
  lVar10 = -1;
  if (-1 < iVar6) {
    lVar10 = lVar9 * 0x40 + 8;
  }
  plVar7 = (longlong *)thunk_FUN_1424da030(lVar10);
  if (plVar7 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  else {
    *plVar7 = lVar9;
    plVar8 = plVar7 + 1;
    do {
      *plVar8 = (longlong)&PTR_FUN_149e18960;
      *(undefined2 *)(plVar8 + 1) = 2;
      plVar8 = plVar8 + 8;
    } while (plVar8 != plVar7 + lVar9 * 8 + 1);
    *(longlong **)(param_1 + 0xb8) = plVar7 + 1;
    if (0 < (int)uVar1) {
      lVar10 = 0;
      do {
        thunk_FUN_1424a7600(*(longlong *)(param_1 + 0xb8) + lVar10,lVar2 + lVar10);
        lVar10 = lVar10 + 0x40;
      } while ((ulonglong)uVar1 << 6 != lVar10);
    }
  }
  uVar1 = *(uint *)(param_2 + 0xd0);
  lVar2 = *(longlong *)(param_2 + 200);
  *(uint *)(param_1 + 0xd0) = uVar1;
  iVar6 = uVar1 + (uVar1 == 0);
  lVar9 = (longlong)iVar6;
  lVar10 = -1;
  if (-1 < iVar6) {
    lVar10 = lVar9 * 0x40 + 8;
  }
  plVar7 = (longlong *)thunk_FUN_1424da030(lVar10);
  if (plVar7 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 200) = 0;
  }
  else {
    *plVar7 = lVar9;
    plVar8 = plVar7 + 1;
    do {
      *plVar8 = (longlong)&PTR_FUN_149e18960;
      *(undefined2 *)(plVar8 + 1) = 2;
      plVar8 = plVar8 + 8;
    } while (plVar8 != plVar7 + lVar9 * 8 + 1);
    *(longlong **)(param_1 + 200) = plVar7 + 1;
    if (0 < (int)uVar1) {
      lVar10 = 0;
      do {
        thunk_FUN_1424a7600(*(longlong *)(param_1 + 200) + lVar10,lVar2 + lVar10);
        lVar10 = lVar10 + 0x40;
      } while ((ulonglong)uVar1 << 6 != lVar10);
    }
  }
  uVar1 = *(uint *)(param_2 + 0xe0);
  lVar2 = *(longlong *)(param_2 + 0xd8);
  *(uint *)(param_1 + 0xe0) = uVar1;
  iVar6 = uVar1 + (uVar1 == 0);
  lVar9 = (longlong)iVar6;
  lVar10 = -1;
  if (-1 < iVar6) {
    lVar10 = lVar9 * 0x40 + 8;
  }
  plVar7 = (longlong *)thunk_FUN_1424da030(lVar10);
  if (plVar7 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  else {
    *plVar7 = lVar9;
    plVar8 = plVar7 + 1;
    do {
      *plVar8 = (longlong)&PTR_FUN_149e18960;
      *(undefined2 *)(plVar8 + 1) = 2;
      plVar8 = plVar8 + 8;
    } while (plVar8 != plVar7 + lVar9 * 8 + 1);
    *(longlong **)(param_1 + 0xd8) = plVar7 + 1;
    if (0 < (int)uVar1) {
      lVar10 = 0;
      do {
        thunk_FUN_1424a7600(*(longlong *)(param_1 + 0xd8) + lVar10,lVar2 + lVar10);
        lVar10 = lVar10 + 0x40;
      } while ((ulonglong)uVar1 << 6 != lVar10);
    }
  }
  uVar1 = *(uint *)(param_2 + 0xf0);
  lVar2 = *(longlong *)(param_2 + 0xe8);
  *(uint *)(param_1 + 0xf0) = uVar1;
  iVar6 = uVar1 + (uVar1 == 0);
  lVar9 = (longlong)iVar6;
  lVar10 = -1;
  if (-1 < iVar6) {
    lVar10 = lVar9 * 0x40 + 8;
  }
  plVar7 = (longlong *)thunk_FUN_1424da030(lVar10);
  if (plVar7 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  else {
    *plVar7 = lVar9;
    plVar8 = plVar7 + 1;
    do {
      *plVar8 = (longlong)&PTR_FUN_149e18960;
      *(undefined2 *)(plVar8 + 1) = 2;
      plVar8 = plVar8 + 8;
    } while (plVar8 != plVar7 + lVar9 * 8 + 1);
    *(longlong **)(param_1 + 0xe8) = plVar7 + 1;
    if (0 < (int)uVar1) {
      lVar10 = 0;
      do {
        thunk_FUN_1424a7600(*(longlong *)(param_1 + 0xe8) + lVar10,lVar2 + lVar10);
        lVar10 = lVar10 + 0x40;
      } while ((ulonglong)uVar1 << 6 != lVar10);
    }
  }
  uVar1 = *(uint *)(param_2 + 0x100);
  lVar2 = *(longlong *)(param_2 + 0xf8);
  *(uint *)(param_1 + 0x100) = uVar1;
  iVar6 = uVar1 + (uVar1 == 0);
  lVar9 = (longlong)iVar6;
  lVar10 = -1;
  if (-1 < iVar6) {
    lVar10 = lVar9 * 0x40 + 8;
  }
  plVar7 = (longlong *)thunk_FUN_1424da030(lVar10);
  if (plVar7 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  else {
    *plVar7 = lVar9;
    plVar8 = plVar7 + 1;
    do {
      *plVar8 = (longlong)&PTR_FUN_149e18960;
      *(undefined2 *)(plVar8 + 1) = 2;
      plVar8 = plVar8 + 8;
    } while (plVar8 != plVar7 + lVar9 * 8 + 1);
    *(longlong **)(param_1 + 0xf8) = plVar7 + 1;
    if (0 < (int)uVar1) {
      lVar10 = 0;
      do {
        thunk_FUN_1424a7600(*(longlong *)(param_1 + 0xf8) + lVar10,lVar2 + lVar10);
        lVar10 = lVar10 + 0x40;
      } while ((ulonglong)uVar1 << 6 != lVar10);
    }
  }
  uVar1 = *(uint *)(param_2 + 0x110);
  lVar2 = *(longlong *)(param_2 + 0x108);
  *(uint *)(param_1 + 0x110) = uVar1;
  iVar6 = uVar1 + (uVar1 == 0);
  lVar9 = (longlong)iVar6;
  lVar10 = -1;
  if (-1 < iVar6) {
    lVar10 = lVar9 * 0x40 + 8;
  }
  plVar7 = (longlong *)thunk_FUN_1424da030(lVar10);
  if (plVar7 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  else {
    *plVar7 = lVar9;
    plVar8 = plVar7 + 1;
    do {
      *plVar8 = (longlong)&PTR_FUN_149e18960;
      *(undefined2 *)(plVar8 + 1) = 2;
      plVar8 = plVar8 + 8;
    } while (plVar8 != plVar7 + lVar9 * 8 + 1);
    *(longlong **)(param_1 + 0x108) = plVar7 + 1;
    if (0 < (int)uVar1) {
      lVar10 = 0;
      do {
        thunk_FUN_1424a7600(*(longlong *)(param_1 + 0x108) + lVar10,lVar2 + lVar10);
        lVar10 = lVar10 + 0x40;
      } while ((ulonglong)uVar1 << 6 != lVar10);
    }
  }
  uVar1 = *(uint *)(param_2 + 0x120);
  lVar2 = *(longlong *)(param_2 + 0x118);
  *(uint *)(param_1 + 0x120) = uVar1;
  iVar6 = uVar1 + (uVar1 == 0);
  lVar9 = (longlong)iVar6;
  lVar10 = -1;
  if (-1 < iVar6) {
    lVar10 = lVar9 * 0x40 + 8;
  }
  plVar7 = (longlong *)thunk_FUN_1424da030(lVar10);
  if (plVar7 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x118) = 0;
  }
  else {
    *plVar7 = lVar9;
    plVar8 = plVar7 + 1;
    do {
      *plVar8 = (longlong)&PTR_FUN_149e18960;
      *(undefined2 *)(plVar8 + 1) = 2;
      plVar8 = plVar8 + 8;
    } while (plVar8 != plVar7 + lVar9 * 8 + 1);
    *(longlong **)(param_1 + 0x118) = plVar7 + 1;
    if (0 < (int)uVar1) {
      lVar10 = 0;
      do {
        thunk_FUN_1424a7600(*(longlong *)(param_1 + 0x118) + lVar10,lVar2 + lVar10);
        lVar10 = lVar10 + 0x40;
      } while ((ulonglong)uVar1 << 6 != lVar10);
    }
  }
  uVar1 = *(uint *)(param_2 + 0x130);
  lVar2 = *(longlong *)(param_2 + 0x128);
  *(uint *)(param_1 + 0x130) = uVar1;
  iVar6 = uVar1 + (uVar1 == 0);
  lVar9 = (longlong)iVar6;
  lVar10 = -1;
  if (-1 < iVar6) {
    lVar10 = lVar9 * 0x40 + 8;
  }
  plVar7 = (longlong *)thunk_FUN_1424da030(lVar10);
  if (plVar7 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x128) = 0;
  }
  else {
    *plVar7 = lVar9;
    plVar8 = plVar7 + 1;
    do {
      *plVar8 = (longlong)&PTR_FUN_149e18960;
      *(undefined2 *)(plVar8 + 1) = 2;
      plVar8 = plVar8 + 8;
    } while (plVar8 != plVar7 + lVar9 * 8 + 1);
    *(longlong **)(param_1 + 0x128) = plVar7 + 1;
    if (0 < (int)uVar1) {
      lVar10 = 0;
      do {
        thunk_FUN_1424a7600(*(longlong *)(param_1 + 0x128) + lVar10,lVar2 + lVar10);
        lVar10 = lVar10 + 0x40;
      } while ((ulonglong)uVar1 << 6 != lVar10);
    }
  }
  thunk_FUN_1424a7600(param_1 + 0x138,param_2 + 0x138);
  uVar1 = *(uint *)(param_2 + 0x180);
  lVar2 = *(longlong *)(param_2 + 0x178);
  *(uint *)(param_1 + 0x180) = uVar1;
  iVar6 = uVar1 + (uVar1 == 0);
  lVar9 = (longlong)iVar6;
  lVar10 = -1;
  if (-1 < iVar6) {
    lVar10 = lVar9 * 0x40 + 8;
  }
  plVar7 = (longlong *)thunk_FUN_1424da030(lVar10);
  if (plVar7 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x178) = 0;
  }
  else {
    *plVar7 = lVar9;
    plVar8 = plVar7 + 1;
    do {
      *plVar8 = (longlong)&PTR_FUN_149e18960;
      *(undefined2 *)(plVar8 + 1) = 2;
      plVar8 = plVar8 + 8;
    } while (plVar8 != plVar7 + lVar9 * 8 + 1);
    *(longlong **)(param_1 + 0x178) = plVar7 + 1;
    if (0 < (int)uVar1) {
      lVar10 = 0;
      do {
        thunk_FUN_1424a7600(*(longlong *)(param_1 + 0x178) + lVar10,lVar2 + lVar10);
        lVar10 = lVar10 + 0x40;
      } while ((ulonglong)uVar1 << 6 != lVar10);
    }
  }
  uVar1 = *(uint *)(param_2 + 400);
  lVar2 = *(longlong *)(param_2 + 0x188);
  *(uint *)(param_1 + 400) = uVar1;
  iVar6 = uVar1 + (uVar1 == 0);
  lVar9 = (longlong)iVar6;
  lVar10 = -1;
  if (-1 < iVar6) {
    lVar10 = lVar9 * 0x40 + 8;
  }
  plVar7 = (longlong *)thunk_FUN_1424da030(lVar10);
  if (plVar7 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x188) = 0;
  }
  else {
    *plVar7 = lVar9;
    plVar8 = plVar7 + 1;
    do {
      *plVar8 = (longlong)&PTR_FUN_149e18960;
      *(undefined2 *)(plVar8 + 1) = 2;
      plVar8 = plVar8 + 8;
    } while (plVar8 != plVar7 + lVar9 * 8 + 1);
    *(longlong **)(param_1 + 0x188) = plVar7 + 1;
    if (0 < (int)uVar1) {
      lVar10 = 0;
      do {
        thunk_FUN_1424a7600(*(longlong *)(param_1 + 0x188) + lVar10,lVar2 + lVar10);
        lVar10 = lVar10 + 0x40;
      } while ((ulonglong)uVar1 << 6 != lVar10);
    }
  }
  uVar1 = *(uint *)(param_2 + 0x1a0);
  lVar2 = *(longlong *)(param_2 + 0x198);
  *(uint *)(param_1 + 0x1a0) = uVar1;
  iVar6 = uVar1 + (uVar1 == 0);
  lVar9 = (longlong)iVar6;
  lVar10 = -1;
  if (-1 < iVar6) {
    lVar10 = lVar9 * 0x40 + 8;
  }
  plVar7 = (longlong *)thunk_FUN_1424da030(lVar10);
  if (plVar7 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x198) = 0;
  }
  else {
    *plVar7 = lVar9;
    plVar8 = plVar7 + 1;
    do {
      *plVar8 = (longlong)&PTR_FUN_149e18960;
      *(undefined2 *)(plVar8 + 1) = 2;
      plVar8 = plVar8 + 8;
    } while (plVar8 != plVar7 + lVar9 * 8 + 1);
    *(longlong **)(param_1 + 0x198) = plVar7 + 1;
    if (0 < (int)uVar1) {
      lVar10 = 0;
      do {
        thunk_FUN_1424a7600(*(longlong *)(param_1 + 0x198) + lVar10,lVar2 + lVar10);
        lVar10 = lVar10 + 0x40;
      } while ((ulonglong)uVar1 << 6 != lVar10);
    }
  }
  uVar1 = *(uint *)(param_2 + 0x1b0);
  lVar2 = *(longlong *)(param_2 + 0x1a8);
  *(uint *)(param_1 + 0x1b0) = uVar1;
  iVar6 = uVar1 + (uVar1 == 0);
  lVar9 = (longlong)iVar6;
  lVar10 = -1;
  if (-1 < iVar6) {
    lVar10 = lVar9 * 0x40 + 8;
  }
  plVar7 = (longlong *)thunk_FUN_1424da030(lVar10);
  if (plVar7 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1a8) = 0;
  }
  else {
    *plVar7 = lVar9;
    plVar8 = plVar7 + 1;
    do {
      *plVar8 = (longlong)&PTR_FUN_149e18960;
      *(undefined2 *)(plVar8 + 1) = 2;
      plVar8 = plVar8 + 8;
    } while (plVar8 != plVar7 + lVar9 * 8 + 1);
    *(longlong **)(param_1 + 0x1a8) = plVar7 + 1;
    if (0 < (int)uVar1) {
      lVar10 = 0;
      do {
        thunk_FUN_1424a7600(*(longlong *)(param_1 + 0x1a8) + lVar10,lVar2 + lVar10);
        lVar10 = lVar10 + 0x40;
      } while ((ulonglong)uVar1 << 6 != lVar10);
    }
  }
  uVar1 = *(uint *)(param_2 + 0x358);
  lVar2 = *(longlong *)(param_2 + 0x350);
  *(uint *)(param_1 + 0x358) = uVar1;
  iVar6 = uVar1 + (uVar1 == 0);
  lVar9 = (longlong)iVar6;
  lVar10 = -1;
  if (-1 < iVar6) {
    lVar10 = lVar9 * 0x40 + 8;
  }
  plVar7 = (longlong *)thunk_FUN_1424da030(lVar10);
  if (plVar7 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x350) = 0;
  }
  else {
    *plVar7 = lVar9;
    plVar8 = plVar7 + 1;
    do {
      *plVar8 = (longlong)&PTR_FUN_149e18960;
      *(undefined2 *)(plVar8 + 1) = 2;
      plVar8 = plVar8 + 8;
    } while (plVar8 != plVar7 + lVar9 * 8 + 1);
    *(longlong **)(param_1 + 0x350) = plVar7 + 1;
    if (0 < (int)uVar1) {
      lVar10 = 0;
      do {
        thunk_FUN_1424a7600(*(longlong *)(param_1 + 0x350) + lVar10,lVar2 + lVar10);
        lVar10 = lVar10 + 0x40;
      } while ((ulonglong)uVar1 << 6 != lVar10);
    }
  }
  uVar1 = *(uint *)(param_2 + 0x368);
  lVar2 = *(longlong *)(param_2 + 0x360);
  *(uint *)(param_1 + 0x368) = uVar1;
  iVar6 = uVar1 + (uVar1 == 0);
  lVar9 = (longlong)iVar6;
  lVar10 = -1;
  if (-1 < iVar6) {
    lVar10 = lVar9 * 0x40 + 8;
  }
  plVar7 = (longlong *)thunk_FUN_1424da030(lVar10);
  if (plVar7 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x360) = 0;
  }
  else {
    *plVar7 = lVar9;
    plVar8 = plVar7 + 1;
    do {
      *plVar8 = (longlong)&PTR_FUN_149e18960;
      *(undefined2 *)(plVar8 + 1) = 2;
      plVar8 = plVar8 + 8;
    } while (plVar8 != plVar7 + lVar9 * 8 + 1);
    *(longlong **)(param_1 + 0x360) = plVar7 + 1;
    if (0 < (int)uVar1) {
      lVar10 = 0;
      do {
        thunk_FUN_1424a7600(*(longlong *)(param_1 + 0x360) + lVar10,lVar2 + lVar10);
        lVar10 = lVar10 + 0x40;
      } while ((ulonglong)uVar1 << 6 != lVar10);
    }
  }
  uVar1 = *(uint *)(param_2 + 0x348);
  lVar2 = *(longlong *)(param_2 + 0x340);
  *(uint *)(param_1 + 0x348) = uVar1;
  iVar6 = uVar1 + (uVar1 == 0);
  lVar9 = (longlong)iVar6;
  lVar10 = -1;
  if (-1 < iVar6) {
    lVar10 = lVar9 * 0x40 + 8;
  }
  plVar7 = (longlong *)thunk_FUN_1424da030(lVar10);
  if (plVar7 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x340) = 0;
  }
  else {
    *plVar7 = lVar9;
    plVar8 = plVar7 + 1;
    do {
      *plVar8 = (longlong)&PTR_FUN_149e18960;
      *(undefined2 *)(plVar8 + 1) = 2;
      plVar8 = plVar8 + 8;
    } while (plVar8 != plVar7 + lVar9 * 8 + 1);
    *(longlong **)(param_1 + 0x340) = plVar7 + 1;
    if (0 < (int)uVar1) {
      lVar10 = 0;
      do {
        thunk_FUN_1424a7600(*(longlong *)(param_1 + 0x340) + lVar10,lVar2 + lVar10);
        lVar10 = lVar10 + 0x40;
      } while ((ulonglong)uVar1 << 6 != lVar10);
    }
  }
  uVar1 = *(uint *)(param_2 + 0x388);
  lVar2 = *(longlong *)(param_2 + 0x380);
  *(uint *)(param_1 + 0x388) = uVar1;
  iVar6 = uVar1 + (uVar1 == 0);
  lVar9 = (longlong)iVar6;
  lVar10 = -1;
  if (-1 < iVar6) {
    lVar10 = lVar9 * 0x40 + 8;
  }
  plVar7 = (longlong *)thunk_FUN_1424da030(lVar10);
  if (plVar7 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x380) = 0;
  }
  else {
    *plVar7 = lVar9;
    plVar8 = plVar7 + 1;
    do {
      *plVar8 = (longlong)&PTR_FUN_149e18960;
      *(undefined2 *)(plVar8 + 1) = 2;
      plVar8 = plVar8 + 8;
    } while (plVar8 != plVar7 + lVar9 * 8 + 1);
    *(longlong **)(param_1 + 0x380) = plVar7 + 1;
    if (0 < (int)uVar1) {
      lVar10 = 0;
      do {
        thunk_FUN_1424a7600(*(longlong *)(param_1 + 0x380) + lVar10,lVar2 + lVar10);
        lVar10 = lVar10 + 0x40;
      } while ((ulonglong)uVar1 << 6 != lVar10);
    }
  }
  uVar1 = *(uint *)(param_2 + 0x398);
  lVar2 = *(longlong *)(param_2 + 0x390);
  *(uint *)(param_1 + 0x398) = uVar1;
  iVar6 = uVar1 + (uVar1 == 0);
  lVar9 = (longlong)iVar6;
  lVar10 = -1;
  if (-1 < iVar6) {
    lVar10 = lVar9 * 0x40 + 8;
  }
  plVar7 = (longlong *)thunk_FUN_1424da030(lVar10);
  if (plVar7 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x390) = 0;
  }
  else {
    *plVar7 = lVar9;
    plVar8 = plVar7 + 1;
    do {
      *plVar8 = (longlong)&PTR_FUN_149e18960;
      *(undefined2 *)(plVar8 + 1) = 2;
      plVar8 = plVar8 + 8;
    } while (plVar8 != plVar7 + lVar9 * 8 + 1);
    *(longlong **)(param_1 + 0x390) = plVar7 + 1;
    if (0 < (int)uVar1) {
      lVar10 = 0;
      do {
        thunk_FUN_1424a7600(*(longlong *)(param_1 + 0x390) + lVar10,lVar2 + lVar10);
        lVar10 = lVar10 + 0x40;
      } while ((ulonglong)uVar1 << 6 != lVar10);
    }
  }
  uVar1 = *(uint *)(param_2 + 0x378);
  lVar2 = *(longlong *)(param_2 + 0x370);
  *(uint *)(param_1 + 0x378) = uVar1;
  iVar6 = uVar1 + (uVar1 == 0);
  lVar9 = (longlong)iVar6;
  lVar10 = -1;
  if (-1 < iVar6) {
    lVar10 = lVar9 * 0x40 + 8;
  }
  plVar7 = (longlong *)thunk_FUN_1424da030(lVar10);
  if (plVar7 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x370) = 0;
  }
  else {
    *plVar7 = lVar9;
    plVar8 = plVar7 + 1;
    do {
      *plVar8 = (longlong)&PTR_FUN_149e18960;
      *(undefined2 *)(plVar8 + 1) = 2;
      plVar8 = plVar8 + 8;
    } while (plVar8 != plVar7 + lVar9 * 8 + 1);
    *(longlong **)(param_1 + 0x370) = plVar7 + 1;
    if (0 < (int)uVar1) {
      lVar10 = 0;
      do {
        thunk_FUN_1424a7600(*(longlong *)(param_1 + 0x370) + lVar10,lVar2 + lVar10);
        lVar10 = lVar10 + 0x40;
      } while ((ulonglong)uVar1 << 6 != lVar10);
    }
  }
  lVar2 = *(longlong *)(param_2 + 0x1b8);
  if (lVar2 == 0) {
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined4 *)(param_1 + 0x1c0) = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x1c0);
    *(uint *)(param_1 + 0x1c0) = uVar1;
    iVar6 = uVar1 + (uVar1 == 0);
    lVar9 = (longlong)iVar6;
    lVar10 = -1;
    if (-1 < iVar6) {
      lVar10 = lVar9 * 0x40 + 8;
    }
    plVar7 = (longlong *)thunk_FUN_1424da030(lVar10);
    if (plVar7 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x1b8) = 0;
    }
    else {
      *plVar7 = lVar9;
      plVar8 = plVar7 + 1;
      do {
        *plVar8 = (longlong)&PTR_FUN_149e18960;
        *(undefined2 *)(plVar8 + 1) = 2;
        plVar8 = plVar8 + 8;
      } while (plVar8 != plVar7 + lVar9 * 8 + 1);
      *(longlong **)(param_1 + 0x1b8) = plVar7 + 1;
      if (0 < (int)uVar1) {
        lVar10 = 0;
        do {
          thunk_FUN_1424a7600(*(longlong *)(param_1 + 0x1b8) + lVar10,lVar2 + lVar10);
          lVar10 = lVar10 + 0x40;
        } while ((ulonglong)uVar1 << 6 != lVar10);
      }
    }
  }
  lVar2 = *(longlong *)(param_2 + 0x1c8);
  if (lVar2 == 0) {
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    *(undefined4 *)(param_1 + 0x1d0) = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x1d0);
    *(uint *)(param_1 + 0x1d0) = uVar1;
    iVar6 = uVar1 + (uVar1 == 0);
    lVar9 = (longlong)iVar6;
    lVar10 = -1;
    if (-1 < iVar6) {
      lVar10 = lVar9 * 0x40 + 8;
    }
    plVar7 = (longlong *)thunk_FUN_1424da030(lVar10);
    if (plVar7 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x1c8) = 0;
    }
    else {
      *plVar7 = lVar9;
      plVar8 = plVar7 + 1;
      do {
        *plVar8 = (longlong)&PTR_FUN_149e18960;
        *(undefined2 *)(plVar8 + 1) = 2;
        plVar8 = plVar8 + 8;
      } while (plVar8 != plVar7 + lVar9 * 8 + 1);
      *(longlong **)(param_1 + 0x1c8) = plVar7 + 1;
      if (0 < (int)uVar1) {
        lVar10 = 0;
        do {
          thunk_FUN_1424a7600(*(longlong *)(param_1 + 0x1c8) + lVar10,lVar2 + lVar10);
          lVar10 = lVar10 + 0x40;
        } while ((ulonglong)uVar1 << 6 != lVar10);
      }
    }
  }
  lVar2 = *(longlong *)(param_2 + 0x1d8);
  if (lVar2 == 0) {
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    *(undefined4 *)(param_1 + 0x1e0) = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x1e0);
    *(uint *)(param_1 + 0x1e0) = uVar1;
    iVar6 = uVar1 + (uVar1 == 0);
    lVar9 = (longlong)iVar6;
    lVar10 = -1;
    if (-1 < iVar6) {
      lVar10 = lVar9 * 0x40 + 8;
    }
    plVar7 = (longlong *)thunk_FUN_1424da030(lVar10);
    if (plVar7 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x1d8) = 0;
      lVar2 = *(longlong *)(param_2 + 0x1e8);
      goto joined_r0x000142603ce9;
    }
    *plVar7 = lVar9;
    plVar8 = plVar7 + 1;
    do {
      *plVar8 = (longlong)&PTR_FUN_149e18960;
      *(undefined2 *)(plVar8 + 1) = 2;
      plVar8 = plVar8 + 8;
    } while (plVar8 != plVar7 + lVar9 * 8 + 1);
    *(longlong **)(param_1 + 0x1d8) = plVar7 + 1;
    if (0 < (int)uVar1) {
      lVar10 = 0;
      do {
        thunk_FUN_1424a7600(*(longlong *)(param_1 + 0x1d8) + lVar10,lVar2 + lVar10);
        lVar10 = lVar10 + 0x40;
      } while ((ulonglong)uVar1 << 6 != lVar10);
    }
  }
  lVar2 = *(longlong *)(param_2 + 0x1e8);
joined_r0x000142603ce9:
  if (lVar2 == 0) {
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    *(undefined8 *)(param_1 + 0x1f8) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(param_2 + 0x1fc);
    *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_2 + 0x1f8);
    FUN_142603ea0(param_1,*(undefined8 *)(param_2 + 0x1e8));
  }
  FUN_1424a3d10(param_1 + 0x200,param_2 + 0x200);
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  thunk_FUN_1424a7600(param_1 + 0x2e0,param_2 + 0x2e0);
  uVar3 = *(undefined8 *)(param_2 + 0x328);
  uVar4 = *(undefined8 *)(param_2 + 0x32c);
  uVar5 = *(undefined8 *)(param_2 + 0x334);
  *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_2 + 800);
  *(undefined8 *)(param_1 + 0x328) = uVar3;
  *(undefined8 *)(param_1 + 0x32c) = uVar4;
  *(undefined8 *)(param_1 + 0x334) = uVar5;
  return;
}



// FUNCTION 142603d60 Unwind@142603d60 body=54 status=ok
// SIG undefined Unwind@142603d60(void)

void Unwind_142603d60(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x100);
  return;
}



// FUNCTION 142603da0 Unwind@142603da0 body=51 status=ok
// SIG undefined Unwind@142603da0(void)

void Unwind_142603da0(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x20);
  return;
}



// FUNCTION 142603de0 FUN_142603de0 body=189 status=ok
// SIG undefined FUN_142603de0(void)

void FUN_142603de0(longlong *param_1,uint *param_2,longlong param_3,uint param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_2 = param_4;
  iVar1 = param_4 + (param_4 == 0);
  lVar4 = (longlong)iVar1;
  lVar5 = -1;
  if (-1 < iVar1) {
    lVar5 = lVar4 * 0x40 + 8;
  }
  plVar2 = (longlong *)thunk_FUN_1424da030(lVar5);
  if (plVar2 == (longlong *)0x0) {
    *param_1 = 0;
  }
  else {
    *plVar2 = lVar4;
    plVar3 = plVar2 + 1;
    do {
      *plVar3 = (longlong)&PTR_FUN_149e18960;
      *(undefined2 *)(plVar3 + 1) = 2;
      plVar3 = plVar3 + 8;
    } while (plVar3 != plVar2 + lVar4 * 8 + 1);
    *param_1 = (longlong)(plVar2 + 1);
    if (0 < (int)param_4) {
      lVar5 = 0;
      do {
        thunk_FUN_1424a7600(*param_1 + lVar5,param_3 + lVar5);
        lVar5 = lVar5 + 0x40;
      } while ((ulonglong)param_4 << 6 != lVar5);
    }
  }
  return;
}



// FUNCTION 142603ea0 FUN_142603ea0 body=408 status=ok
// SIG undefined FUN_142603ea0(void)

void FUN_142603ea0(longlong param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  
  lVar3 = FUN_1424da030((longlong)*(int *)(param_1 + 0x1f8) << 3);
  *(longlong *)(param_1 + 0x1e8) = lVar3;
  if ((lVar3 != 0) && (0 < *(int *)(param_1 + 0x1f8))) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x1fc);
    lVar3 = 0;
    do {
      iVar2 = (int)uVar6 + (uint)((int)uVar6 == 0);
      lVar9 = (longlong)iVar2;
      lVar7 = lVar9 * 0x40 + 8;
      if (iVar2 < 0) {
        lVar7 = -1;
      }
      plVar4 = (longlong *)thunk_FUN_1424da030(lVar7);
      if (plVar4 == (longlong *)0x0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        *plVar4 = lVar9;
        plVar5 = plVar4 + 1;
        plVar8 = plVar5;
        do {
          *plVar8 = (longlong)&PTR_FUN_149e18960;
          *(undefined2 *)(plVar8 + 1) = 2;
          plVar8 = plVar8 + 8;
        } while (plVar8 != plVar4 + lVar9 * 8 + 1);
      }
      *(longlong **)(*(longlong *)(param_1 + 0x1e8) + lVar3 * 8) = plVar5;
      if (*(longlong *)(*(longlong *)(param_1 + 0x1e8) + lVar3 * 8) == 0) {
        do {
          lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1e8) + lVar3 * 8);
          if (lVar7 != 0) {
            if (*(longlong *)(lVar7 + -8) != 0) {
              lVar9 = *(longlong *)(lVar7 + -8) << 6;
              do {
                FUN_140859a90(lVar7 + -0x40 + lVar9);
                lVar9 = lVar9 + -0x40;
              } while (lVar9 != 0);
            }
            FUN_1424b70c0(lVar7 + -8);
          }
          bVar1 = 0 < lVar3;
          lVar3 = lVar3 + -1;
        } while (bVar1);
        FUN_1424da110(*(undefined8 *)(param_1 + 0x1e8));
        *(undefined8 *)(param_1 + 0x1e8) = 0;
        return;
      }
      uVar6 = (ulonglong)*(uint *)(param_1 + 0x1fc);
      if (0 < (int)*(uint *)(param_1 + 0x1fc)) {
        lVar7 = 0;
        lVar9 = 0;
        do {
          thunk_FUN_1424a7600(*(longlong *)(*(longlong *)(param_1 + 0x1e8) + lVar3 * 8) + lVar7,
                              *(longlong *)(param_2 + lVar3 * 8) + lVar7);
          lVar9 = lVar9 + 1;
          uVar6 = (ulonglong)*(int *)(param_1 + 0x1fc);
          lVar7 = lVar7 + 0x40;
        } while (lVar9 < (longlong)uVar6);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x1f8));
  }
  return;
}



// FUNCTION 142604060 FUN_142604060 body=2072 status=ok
// SIG undefined FUN_142604060(void)

void FUN_142604060(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + -8) != 0) {
      lVar2 = *(longlong *)(lVar1 + -8) << 6;
      do {
        FUN_140859a90(lVar1 + -0x40 + lVar2);
        lVar2 = lVar2 + -0x40;
      } while (lVar2 != 0);
    }
    FUN_1424b70c0(lVar1 + -8);
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + -8) != 0) {
      lVar2 = *(longlong *)(lVar1 + -8) << 6;
      do {
        FUN_140859a90(lVar1 + -0x40 + lVar2);
        lVar2 = lVar2 + -0x40;
      } while (lVar2 != 0);
    }
    FUN_1424b70c0(lVar1 + -8);
  }
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + -8) != 0) {
      lVar2 = *(longlong *)(lVar1 + -8) << 6;
      do {
        FUN_140859a90(lVar1 + -0x40 + lVar2);
        lVar2 = lVar2 + -0x40;
      } while (lVar2 != 0);
    }
    FUN_1424b70c0(lVar1 + -8);
  }
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + -8) != 0) {
      lVar2 = *(longlong *)(lVar1 + -8) << 6;
      do {
        FUN_140859a90(lVar1 + -0x40 + lVar2);
        lVar2 = lVar2 + -0x40;
      } while (lVar2 != 0);
    }
    FUN_1424b70c0(lVar1 + -8);
  }
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + -8) != 0) {
      lVar2 = *(longlong *)(lVar1 + -8) << 6;
      do {
        FUN_140859a90(lVar1 + -0x40 + lVar2);
        lVar2 = lVar2 + -0x40;
      } while (lVar2 != 0);
    }
    FUN_1424b70c0(lVar1 + -8);
  }
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + -8) != 0) {
      lVar2 = *(longlong *)(lVar1 + -8) << 6;
      do {
        FUN_140859a90(lVar1 + -0x40 + lVar2);
        lVar2 = lVar2 + -0x40;
      } while (lVar2 != 0);
    }
    FUN_1424b70c0(lVar1 + -8);
  }
  lVar1 = *(longlong *)(param_1 + 0x68);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + -8) != 0) {
      lVar2 = *(longlong *)(lVar1 + -8) << 6;
      do {
        FUN_140859a90(lVar1 + -0x40 + lVar2);
        lVar2 = lVar2 + -0x40;
      } while (lVar2 != 0);
    }
    FUN_1424b70c0(lVar1 + -8);
  }
  lVar1 = *(longlong *)(param_1 + 0x78);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + -8) != 0) {
      lVar2 = *(longlong *)(lVar1 + -8) << 6;
      do {
        FUN_140859a90(lVar1 + -0x40 + lVar2);
        lVar2 = lVar2 + -0x40;
      } while (lVar2 != 0);
    }
    FUN_1424b70c0(lVar1 + -8);
  }
  lVar1 = *(longlong *)(param_1 + 0x88);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + -8) != 0) {
      lVar2 = *(longlong *)(lVar1 + -8) << 6;
      do {
        FUN_140859a90(lVar1 + -0x40 + lVar2);
        lVar2 = lVar2 + -0x40;
      } while (lVar2 != 0);
    }
    FUN_1424b70c0(lVar1 + -8);
  }
  lVar1 = *(longlong *)(param_1 + 0x98);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + -8) != 0) {
      lVar2 = *(longlong *)(lVar1 + -8) << 6;
      do {
        FUN_140859a90(lVar1 + -0x40 + lVar2);
        lVar2 = lVar2 + -0x40;
      } while (lVar2 != 0);
    }
    FUN_1424b70c0(lVar1 + -8);
  }
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + -8) != 0) {
      lVar2 = *(longlong *)(lVar1 + -8) << 6;
      do {
        FUN_140859a90(lVar1 + -0x40 + lVar2);
        lVar2 = lVar2 + -0x40;
      } while (lVar2 != 0);
    }
    FUN_1424b70c0(lVar1 + -8);
  }
  lVar1 = *(longlong *)(param_1 + 0xb8);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + -8) != 0) {
      lVar2 = *(longlong *)(lVar1 + -8) << 6;
      do {
        FUN_140859a90(lVar1 + -0x40 + lVar2);
        lVar2 = lVar2 + -0x40;
      } while (lVar2 != 0);
    }
    FUN_1424b70c0(lVar1 + -8);
  }
  lVar1 = *(longlong *)(param_1 + 200);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + -8) != 0) {
      lVar2 = *(longlong *)(lVar1 + -8) << 6;
      do {
        FUN_140859a90(lVar1 + -0x40 + lVar2);
        lVar2 = lVar2 + -0x40;
      } while (lVar2 != 0);
    }
    FUN_1424b70c0(lVar1 + -8);
  }
  lVar1 = *(longlong *)(param_1 + 0xd8);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + -8) != 0) {
      lVar2 = *(longlong *)(lVar1 + -8) << 6;
      do {
        FUN_140859a90(lVar1 + -0x40 + lVar2);
        lVar2 = lVar2 + -0x40;
      } while (lVar2 != 0);
    }
    FUN_1424b70c0(lVar1 + -8);
  }
  lVar1 = *(longlong *)(param_1 + 0xe8);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + -8) != 0) {
      lVar2 = *(longlong *)(lVar1 + -8) << 6;
      do {
        FUN_140859a90(lVar1 + -0x40 + lVar2);
        lVar2 = lVar2 + -0x40;
      } while (lVar2 != 0);
    }
    FUN_1424b70c0(lVar1 + -8);
  }
  lVar1 = *(longlong *)(param_1 + 0xf8);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + -8) != 0) {
      lVar2 = *(longlong *)(lVar1 + -8) << 6;
      do {
        FUN_140859a90(lVar1 + -0x40 + lVar2);
        lVar2 = lVar2 + -0x40;
      } while (lVar2 != 0);
    }
    FUN_1424b70c0(lVar1 + -8);
  }
  lVar1 = *(longlong *)(param_1 + 0x108);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + -8) != 0) {
      lVar2 = *(longlong *)(lVar1 + -8) << 6;
      do {
        FUN_140859a90(lVar1 + -0x40 + lVar2);
        lVar2 = lVar2 + -0x40;
      } while (lVar2 != 0);
    }
    FUN_1424b70c0(lVar1 + -8);
  }
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + -8) != 0) {
      lVar2 = *(longlong *)(lVar1 + -8) << 6;
      do {
        FUN_140859a90(lVar1 + -0x40 + lVar2);
        lVar2 = lVar2 + -0x40;
      } while (lVar2 != 0);
    }
    FUN_1424b70c0(lVar1 + -8);
  }
  lVar1 = *(longlong *)(param_1 + 0x128);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + -8) != 0) {
      lVar2 = *(longlong *)(lVar1 + -8) << 6;
      do {
        FUN_140859a90(lVar1 + -0x40 + lVar2);
        lVar2 = lVar2 + -0x40;
      } while (lVar2 != 0);
    }
    FUN_1424b70c0(lVar1 + -8);
  }
  lVar1 = *(longlong *)(param_1 + 0x178);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + -8) != 0) {
      lVar2 = *(longlong *)(lVar1 + -8) << 6;
      do {
        FUN_140859a90(lVar1 + -0x40 + lVar2);
        lVar2 = lVar2 + -0x40;
      } while (lVar2 != 0);
    }
    FUN_1424b70c0(lVar1 + -8);
  }
  lVar1 = *(longlong *)(param_1 + 0x188);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + -8) != 0) {
      lVar2 = *(longlong *)(lVar1 + -8) << 6;
      do {
        FUN_140859a90(lVar1 + -0x40 + lVar2);
        lVar2 = lVar2 + -0x40;
      } while (lVar2 != 0);
    }
    FUN_1424b70c0(lVar1 + -8);
  }
  lVar1 = *(longlong *)(param_1 + 0x198);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + -8) != 0) {
      lVar2 = *(longlong *)(lVar1 + -8) << 6;
      do {
        FUN_140859a90(lVar1 + -0x40 + lVar2);
        lVar2 = lVar2 + -0x40;
      } while (lVar2 != 0);
    }
    FUN_1424b70c0(lVar1 + -8);
  }
  lVar1 = *(longlong *)(param_1 + 0x1a8);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + -8) != 0) {
      lVar2 = *(longlong *)(lVar1 + -8) << 6;
      do {
        FUN_140859a90(lVar1 + -0x40 + lVar2);
        lVar2 = lVar2 + -0x40;
      } while (lVar2 != 0);
    }
    FUN_1424b70c0(lVar1 + -8);
  }
  lVar1 = *(longlong *)(param_1 + 0x1b8);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + -8) != 0) {
      lVar2 = *(longlong *)(lVar1 + -8) << 6;
      do {
        FUN_140859a90(lVar1 + -0x40 + lVar2);
        lVar2 = lVar2 + -0x40;
      } while (lVar2 != 0);
    }
    FUN_1424b70c0(lVar1 + -8);
  }
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + -8) != 0) {
      lVar2 = *(longlong *)(lVar1 + -8) << 6;
      do {
        FUN_140859a90(lVar1 + -0x40 + lVar2);
        lVar2 = lVar2 + -0x40;
      } while (lVar2 != 0);
    }
    FUN_1424b70c0(lVar1 + -8);
  }
  lVar1 = *(longlong *)(param_1 + 0x1d8);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + -8) != 0) {
      lVar2 = *(longlong *)(lVar1 + -8) << 6;
      do {
        FUN_140859a90(lVar1 + -0x40 + lVar2);
        lVar2 = lVar2 + -0x40;
      } while (lVar2 != 0);
    }
    FUN_1424b70c0(lVar1 + -8);
  }
  lVar1 = *(longlong *)(param_1 + 0x340);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + -8) != 0) {
      lVar2 = *(longlong *)(lVar1 + -8) << 6;
      do {
        FUN_140859a90(lVar1 + -0x40 + lVar2);
        lVar2 = lVar2 + -0x40;
      } while (lVar2 != 0);
    }
    FUN_1424b70c0(lVar1 + -8);
  }
  lVar1 = *(longlong *)(param_1 + 0x350);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + -8) != 0) {
      lVar2 = *(longlong *)(lVar1 + -8) << 6;
      do {
        FUN_140859a90(lVar1 + -0x40 + lVar2);
        lVar2 = lVar2 + -0x40;
      } while (lVar2 != 0);
    }
    FUN_1424b70c0(lVar1 + -8);
  }
  lVar1 = *(longlong *)(param_1 + 0x360);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + -8) != 0) {
      lVar2 = *(longlong *)(lVar1 + -8) << 6;
      do {
        FUN_140859a90(lVar1 + -0x40 + lVar2);
        lVar2 = lVar2 + -0x40;
      } while (lVar2 != 0);
    }
    FUN_1424b70c0(lVar1 + -8);
  }
  lVar1 = *(longlong *)(param_1 + 0x370);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + -8) != 0) {
      lVar2 = *(longlong *)(lVar1 + -8) << 6;
      do {
        FUN_140859a90(lVar1 + -0x40 + lVar2);
        lVar2 = lVar2 + -0x40;
      } while (lVar2 != 0);
    }
    FUN_1424b70c0(lVar1 + -8);
  }
  lVar1 = *(longlong *)(param_1 + 0x380);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + -8) != 0) {
      lVar2 = *(longlong *)(lVar1 + -8) << 6;
      do {
        FUN_140859a90(lVar1 + -0x40 + lVar2);
        lVar2 = lVar2 + -0x40;
      } while (lVar2 != 0);
    }
    FUN_1424b70c0(lVar1 + -8);
  }
  lVar1 = *(longlong *)(param_1 + 0x390);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + -8) != 0) {
      lVar2 = *(longlong *)(lVar1 + -8) << 6;
      do {
        FUN_140859a90(lVar1 + -0x40 + lVar2);
        lVar2 = lVar2 + -0x40;
      } while (lVar2 != 0);
    }
    FUN_1424b70c0(lVar1 + -8);
  }
  FUN_142604880(param_1);
  return;
}



// FUNCTION 142604880 FUN_142604880 body=287 status=ok
// SIG undefined FUN_142604880(void)

void FUN_142604880(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)(param_1 + 0x1e8);
  lVar4 = *(longlong *)(param_1 + 0x1e8);
  if (lVar4 != 0) {
    iVar3 = *(int *)(param_1 + 0x1f8);
    if (0 < iVar3) {
      lVar4 = 0;
      do {
        lVar2 = *(longlong *)(*plVar1 + lVar4 * 8);
        if (lVar2 != 0) {
          if (*(longlong *)(lVar2 + -8) != 0) {
            lVar5 = *(longlong *)(lVar2 + -8) << 6;
            do {
              FUN_140859a90(lVar2 + -0x40 + lVar5);
              lVar5 = lVar5 + -0x40;
            } while (lVar5 != 0);
          }
          FUN_1424b70c0(lVar2 + -8);
          iVar3 = *(int *)(param_1 + 0x1f8);
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar3);
      lVar4 = *plVar1;
    }
    FUN_1424da110(lVar4);
  }
  lVar4 = *(longlong *)(param_1 + 0x1f0);
  if (lVar4 != 0) {
    iVar3 = *(int *)(param_1 + 0x1f8);
    if (0 < iVar3) {
      lVar4 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1f0) + lVar4 * 8);
        if (lVar2 != 0) {
          if (*(longlong *)(lVar2 + -8) != 0) {
            lVar5 = *(longlong *)(lVar2 + -8) << 6;
            do {
              FUN_140859a90(lVar2 + -0x40 + lVar5);
              lVar5 = lVar5 + -0x40;
            } while (lVar5 != 0);
          }
          FUN_1424b70c0(lVar2 + -8);
          iVar3 = *(int *)(param_1 + 0x1f8);
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar3);
      lVar4 = *(longlong *)(param_1 + 0x1f0);
    }
    FUN_1424da110(lVar4);
  }
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  return;
}



// FUNCTION 1426049c0 FUN_1426049c0 body=160 status=ok
// SIG undefined FUN_1426049c0(void)

undefined8 FUN_1426049c0(longlong param_1,longlong param_2,uint param_3)

{
  ushort uVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  if (param_1 == param_2) {
LAB_142604a63:
    uVar6 = 1;
  }
  else {
    iVar8 = param_3 + 1;
    lVar3 = param_1 + (ulonglong)param_3 * 0x40;
    lVar4 = param_2 + (ulonglong)param_3 * 0x40;
    do {
      iVar8 = iVar8 + -1;
      if (iVar8 < 1) goto LAB_142604a63;
      uVar1 = *(ushort *)(lVar3 + -0x38);
      if ((uVar1 & 1) == 0) {
        if ((short)uVar1 < 0) {
          iVar9 = *(int *)(lVar3 + -0x34);
        }
        else {
          iVar9 = (int)(short)uVar1 >> 5;
        }
        sVar2 = *(short *)(lVar4 + -0x38);
        if (sVar2 < 0) {
          iVar7 = *(int *)(lVar4 + -0x34);
        }
        else {
          iVar7 = (int)sVar2 >> 5;
        }
        if (((int)sVar2 & 1U) != 0) {
          return 0;
        }
        if (iVar9 != iVar7) {
          return 0;
        }
        cVar5 = FUN_1412ae090(lVar3 + -0x40,lVar4 + -0x40);
        bVar10 = cVar5 != '\0';
      }
      else {
        bVar10 = (bool)(*(byte *)(lVar4 + -0x38) & 1);
      }
      lVar3 = lVar3 + -0x40;
      lVar4 = lVar4 + -0x40;
    } while (bVar10 != false);
    uVar6 = 0;
  }
  return uVar6;
}



// FUNCTION 142604a80 FUN_142604a80 body=1828 status=ok
// SIG undefined FUN_142604a80(void)

ulonglong FUN_142604a80(longlong param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  bool bVar2;
  char cVar3;
  uint uVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_1 == param_2) goto LAB_142604cd4;
  if ((((((*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10)) &&
         (*(int *)(param_1 + 0x20) == *(int *)(param_2 + 0x20))) &&
        (*(int *)(param_1 + 0x30) == *(int *)(param_2 + 0x30))) &&
       (((*(int *)(param_1 + 0x40) == *(int *)(param_2 + 0x40) &&
         (*(int *)(param_1 + 0x50) == *(int *)(param_2 + 0x50))) &&
        ((*(int *)(param_1 + 0x60) == *(int *)(param_2 + 0x60) &&
         ((*(int *)(param_1 + 0x70) == *(int *)(param_2 + 0x70) &&
          (*(int *)(param_1 + 0x80) == *(int *)(param_2 + 0x80))))))))) &&
      ((*(int *)(param_1 + 0x90) == *(int *)(param_2 + 0x90) &&
       (((((*(int *)(param_1 + 0xa0) == *(int *)(param_2 + 0xa0) &&
           (*(int *)(param_1 + 0xb0) == *(int *)(param_2 + 0xb0))) &&
          (*(int *)(param_1 + 0xc0) == *(int *)(param_2 + 0xc0))) &&
         ((*(int *)(param_1 + 0xd0) == *(int *)(param_2 + 0xd0) &&
          (*(int *)(param_1 + 0xe0) == *(int *)(param_2 + 0xe0))))) &&
        (*(int *)(param_1 + 0xf0) == *(int *)(param_2 + 0xf0))))))) &&
     ((((*(int *)(param_1 + 0x100) == *(int *)(param_2 + 0x100) &&
        (*(int *)(param_1 + 0x110) == *(int *)(param_2 + 0x110))) &&
       (((((*(int *)(param_1 + 0x120) == *(int *)(param_2 + 0x120) &&
           (((*(int *)(param_1 + 0x130) == *(int *)(param_2 + 0x130) &&
             (*(int *)(param_1 + 0x180) == *(int *)(param_2 + 0x180))) &&
            (*(int *)(param_1 + 400) == *(int *)(param_2 + 400))))) &&
          (((*(int *)(param_1 + 0x1a0) == *(int *)(param_2 + 0x1a0) &&
            (*(int *)(param_1 + 0x1b0) == *(int *)(param_2 + 0x1b0))) &&
           (*(int *)(param_1 + 0x1c0) == *(int *)(param_2 + 0x1c0))))) &&
         ((*(int *)(param_1 + 0x1d0) == *(int *)(param_2 + 0x1d0) &&
          (*(int *)(param_1 + 0x1e0) == *(int *)(param_2 + 0x1e0))))) &&
        ((*(int *)(param_1 + 0x348) == *(int *)(param_2 + 0x348) &&
         (((*(int *)(param_1 + 0x358) == *(int *)(param_2 + 0x358) &&
           (*(int *)(param_1 + 0x368) == *(int *)(param_2 + 0x368))) &&
          (*(int *)(param_1 + 0x378) == *(int *)(param_2 + 0x378))))))))) &&
      ((*(int *)(param_1 + 0x388) == *(int *)(param_2 + 0x388) &&
       (*(int *)(param_1 + 0x398) == *(int *)(param_2 + 0x398))))))) {
    auVar1 = *(undefined1 (*) [16])(param_1 + 0x32c);
    auVar8[0] = -(*(char *)(param_2 + 800) == *(char *)(param_1 + 800));
    auVar8[1] = -(*(char *)(param_2 + 0x321) == *(char *)(param_1 + 0x321));
    auVar8[2] = -(*(char *)(param_2 + 0x322) == *(char *)(param_1 + 0x322));
    auVar8[3] = -(*(char *)(param_2 + 0x323) == *(char *)(param_1 + 0x323));
    auVar8[4] = -(*(char *)(param_2 + 0x324) == *(char *)(param_1 + 0x324));
    auVar8[5] = -(*(char *)(param_2 + 0x325) == *(char *)(param_1 + 0x325));
    auVar8[6] = -(*(char *)(param_2 + 0x326) == *(char *)(param_1 + 0x326));
    auVar8[7] = -(*(char *)(param_2 + 0x327) == *(char *)(param_1 + 0x327));
    auVar8[8] = -(*(char *)(param_2 + 0x328) == *(char *)(param_1 + 0x328));
    auVar8[9] = -(*(char *)(param_2 + 0x329) == *(char *)(param_1 + 0x329));
    auVar8[10] = -(*(char *)(param_2 + 0x32a) == *(char *)(param_1 + 0x32a));
    auVar8[0xb] = -(*(char *)(param_2 + 0x32b) == *(char *)(param_1 + 0x32b));
    auVar8[0xc] = -(*(char *)(param_2 + 0x32c) == *(char *)(param_1 + 0x32c));
    auVar8[0xd] = -(*(char *)(param_2 + 0x32d) == *(char *)(param_1 + 0x32d));
    auVar8[0xe] = -(*(char *)(param_2 + 0x32e) == *(char *)(param_1 + 0x32e));
    auVar8[0xf] = -(*(char *)(param_2 + 0x32f) == *(char *)(param_1 + 0x32f));
    auVar7[0] = -(*(char *)(param_2 + 0x32c) == auVar1[0]);
    auVar7[1] = -(*(char *)(param_2 + 0x32d) == auVar1[1]);
    auVar7[2] = -(*(char *)(param_2 + 0x32e) == auVar1[2]);
    auVar7[3] = -(*(char *)(param_2 + 0x32f) == auVar1[3]);
    auVar7[4] = -(*(char *)(param_2 + 0x330) == auVar1[4]);
    auVar7[5] = -(*(char *)(param_2 + 0x331) == auVar1[5]);
    auVar7[6] = -(*(char *)(param_2 + 0x332) == auVar1[6]);
    auVar7[7] = -(*(char *)(param_2 + 0x333) == auVar1[7]);
    auVar7[8] = -(*(char *)(param_2 + 0x334) == auVar1[8]);
    auVar7[9] = -(*(char *)(param_2 + 0x335) == auVar1[9]);
    auVar7[10] = -(*(char *)(param_2 + 0x336) == auVar1[10]);
    auVar7[0xb] = -(*(char *)(param_2 + 0x337) == auVar1[0xb]);
    auVar7[0xc] = -(*(char *)(param_2 + 0x338) == auVar1[0xc]);
    auVar7[0xd] = -(*(char *)(param_2 + 0x339) == auVar1[0xd]);
    auVar7[0xe] = -(*(char *)(param_2 + 0x33a) == auVar1[0xe]);
    auVar7[0xf] = -(*(char *)(param_2 + 0x33b) == auVar1[0xf]);
    auVar7 = auVar7 & auVar8;
    if ((((ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1
                   | (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
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
                   (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar7[0xf] >> 7) << 0xf) == 0xffff) &&
        ((((cVar3 = FUN_1426049c0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 8)),
           cVar3 != '\0' &&
           (cVar3 = FUN_1426049c0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18),
                                  *(undefined4 *)(param_1 + 0x20)), cVar3 != '\0')) &&
          ((cVar3 = FUN_1426049c0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x28),
                                  *(undefined4 *)(param_1 + 0x30)), cVar3 != '\0' &&
           ((((cVar3 = FUN_1426049c0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_2 + 0x38)
                                     ,*(undefined4 *)(param_1 + 0x40)), cVar3 != '\0' &&
              (cVar3 = FUN_1426049c0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_2 + 0x48)
                                     ,*(undefined4 *)(param_1 + 0x50)), cVar3 != '\0')) &&
             (cVar3 = FUN_1426049c0(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_2 + 0x58),
                                    *(undefined4 *)(param_1 + 0x60)), cVar3 != '\0')) &&
            ((cVar3 = FUN_1426049c0(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_2 + 0x68),
                                    *(undefined4 *)(param_1 + 0x70)), cVar3 != '\0' &&
             (cVar3 = FUN_1426049c0(*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_2 + 0x78),
                                    *(undefined4 *)(param_1 + 0x80)), cVar3 != '\0')))))))) &&
         (cVar3 = FUN_1426049c0(*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_2 + 0x88),
                                *(undefined4 *)(param_1 + 0x90)), cVar3 != '\0')))) &&
       ((((cVar3 = FUN_1426049c0(*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_2 + 0x98),
                                 *(undefined4 *)(param_1 + 0xa0)), cVar3 != '\0' &&
          (cVar3 = FUN_1426049c0(*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_2 + 0xa8),
                                 *(undefined4 *)(param_1 + 0xb0)), cVar3 != '\0')) &&
         (((cVar3 = FUN_1426049c0(*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_2 + 0xb8),
                                  *(undefined4 *)(param_1 + 0xc0)), cVar3 != '\0' &&
           (((cVar3 = FUN_1426049c0(*(undefined8 *)(param_1 + 200),*(undefined8 *)(param_2 + 200),
                                    *(undefined4 *)(param_1 + 0xd0)), cVar3 != '\0' &&
             (cVar3 = FUN_1426049c0(*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_2 + 0xd8),
                                    *(undefined4 *)(param_1 + 0xe0)), cVar3 != '\0')) &&
            (cVar3 = FUN_1426049c0(*(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_2 + 0xe8),
                                   *(undefined4 *)(param_1 + 0xf0)), cVar3 != '\0')))) &&
          (((cVar3 = FUN_1426049c0(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_2 + 0xf8),
                                   *(undefined4 *)(param_1 + 0x100)), cVar3 != '\0' &&
            (cVar3 = FUN_1426049c0(*(undefined8 *)(param_1 + 0x108),*(undefined8 *)(param_2 + 0x108)
                                   ,*(undefined4 *)(param_1 + 0x110)), cVar3 != '\0')) &&
           (cVar3 = FUN_1426049c0(*(undefined8 *)(param_1 + 0x118),*(undefined8 *)(param_2 + 0x118),
                                  *(undefined4 *)(param_1 + 0x120)), cVar3 != '\0')))))) &&
        (((cVar3 = FUN_1426049c0(*(undefined8 *)(param_1 + 0x128),*(undefined8 *)(param_2 + 0x128),
                                 *(undefined4 *)(param_1 + 0x130)), cVar3 != '\0' &&
          (cVar3 = FUN_14626a19a(param_1 + 0x138,param_2 + 0x138), cVar3 != '\0')) &&
         (((cVar3 = FUN_1426049c0(*(undefined8 *)(param_1 + 0x178),*(undefined8 *)(param_2 + 0x178),
                                  *(undefined4 *)(param_1 + 0x180)), cVar3 != '\0' &&
           (((cVar3 = FUN_1426049c0(*(undefined8 *)(param_1 + 0x188),
                                    *(undefined8 *)(param_2 + 0x188),*(undefined4 *)(param_1 + 400))
             , cVar3 != '\0' &&
             (cVar3 = FUN_1426049c0(*(undefined8 *)(param_1 + 0x198),
                                    *(undefined8 *)(param_2 + 0x198),
                                    *(undefined4 *)(param_1 + 0x1a0)), cVar3 != '\0')) &&
            (cVar3 = FUN_1426049c0(*(undefined8 *)(param_1 + 0x1a8),*(undefined8 *)(param_2 + 0x1a8)
                                   ,*(undefined4 *)(param_1 + 0x1b0)), cVar3 != '\0')))) &&
          (((cVar3 = FUN_1426049c0(*(undefined8 *)(param_1 + 0x1b8),*(undefined8 *)(param_2 + 0x1b8)
                                   ,*(undefined4 *)(param_1 + 0x1c0)), cVar3 != '\0' &&
            (cVar3 = FUN_1426049c0(*(undefined8 *)(param_1 + 0x1c8),*(undefined8 *)(param_2 + 0x1c8)
                                   ,*(undefined4 *)(param_1 + 0x1d0)), cVar3 != '\0')) &&
           ((cVar3 = FUN_1426049c0(*(undefined8 *)(param_1 + 0x1d8),*(undefined8 *)(param_2 + 0x1d8)
                                   ,*(undefined4 *)(param_1 + 0x1e0)), cVar3 != '\0' &&
            (((cVar3 = FUN_1426049c0(*(undefined8 *)(param_1 + 0x340),
                                     *(undefined8 *)(param_2 + 0x340),
                                     *(undefined4 *)(param_1 + 0x348)), cVar3 != '\0' &&
              (cVar3 = FUN_1426049c0(*(undefined8 *)(param_1 + 0x350),
                                     *(undefined8 *)(param_2 + 0x350),
                                     *(undefined4 *)(param_1 + 0x358)), cVar3 != '\0')) &&
             ((cVar3 = FUN_1426049c0(*(undefined8 *)(param_1 + 0x360),
                                     *(undefined8 *)(param_2 + 0x360),
                                     *(undefined4 *)(param_1 + 0x368)), cVar3 != '\0' &&
              (((cVar3 = FUN_1426049c0(*(undefined8 *)(param_1 + 0x370),
                                       *(undefined8 *)(param_2 + 0x370),
                                       *(undefined4 *)(param_1 + 0x378)), cVar3 != '\0' &&
                (cVar3 = FUN_1426049c0(*(undefined8 *)(param_1 + 0x380),
                                       *(undefined8 *)(param_2 + 0x380),
                                       *(undefined4 *)(param_1 + 0x388)), cVar3 != '\0')) &&
               (cVar3 = FUN_1426049c0(*(undefined8 *)(param_1 + 0x390),
                                      *(undefined8 *)(param_2 + 0x390),
                                      *(undefined4 *)(param_1 + 0x388)), cVar3 != '\0'))))))))))))))
        )))) {
      if (*(longlong *)(param_1 + 0x1e8) == 0 && *(longlong *)(param_2 + 0x1e8) == 0) {
        cVar3 = FUN_1424a3f70(param_1 + 0x200,param_2 + 0x200);
        if (cVar3 != '\0') goto LAB_142604cd4;
      }
      else if (((*(longlong *)(param_1 + 0x1e8) != 0) && (*(longlong *)(param_2 + 0x1e8) != 0)) &&
              ((*(int *)(param_1 + 0x1f8) == *(int *)(param_2 + 0x1f8) &&
               (*(int *)(param_1 + 0x1fc) == *(int *)(param_2 + 0x1fc))))) {
        if (0 < *(int *)(param_1 + 0x1f8)) {
          lVar6 = 1;
          do {
            uVar4 = FUN_1426049c0(*(undefined8 *)(*(longlong *)(param_1 + 0x1e8) + -8 + lVar6 * 8),
                                  *(undefined8 *)(*(longlong *)(param_2 + 0x1e8) + -8 + lVar6 * 8),
                                  *(undefined4 *)(param_1 + 0x1fc));
            uVar5 = (ulonglong)uVar4;
            if ((char)uVar4 == '\0') break;
            bVar2 = lVar6 < *(int *)(param_1 + 0x1f8);
            lVar6 = lVar6 + 1;
          } while (bVar2);
        }
        goto LAB_142604cd4;
      }
    }
  }
  uVar5 = 0;
LAB_142604cd4:
  return uVar5 & 0xffffffff;
}



// FUNCTION 1426051b0 FUN_1426051b0 body=18 status=ok
// SIG undefined FUN_1426051b0(void)

void FUN_1426051b0(longlong param_1,undefined8 param_2)

{
  thunk_FUN_1424a7600(param_2,param_1 + 0x138);
  return;
}



// FUNCTION 1426051d0 FUN_1426051d0 body=8 status=ok
// SIG undefined FUN_1426051d0(void)

undefined * FUN_1426051d0(void)

{
  return &DAT_149c4e010;
}



// FUNCTION 1426051e0 FUN_1426051e0 body=48 status=ok
// SIG undefined FUN_1426051e0(void)

ulonglong FUN_1426051e0(undefined4 param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = FUN_142503f80(&DAT_149c4e010,param_1);
  uVar2 = 0x26;
  if (lVar1 != 0) {
    uVar2 = lVar1 - 0x149c4e010U >> 1 & 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 142605210 FUN_142605210 body=55 status=ok
// SIG undefined FUN_142605210(void)

bool FUN_142605210(uint param_1,int param_2)

{
  if (param_1 == 0x26) {
    return false;
  }
  if ((0x40075bdfaU >> ((ulonglong)param_1 & 0x3f) & 1) != 0) {
    return true;
  }
  return param_2 < 3 && (1L << ((byte)param_1 & 0x3f) & 0x1e080004U) != 0;
}



// FUNCTION 142605250 FUN_142605250 body=109 status=ok
// SIG undefined FUN_142605250(void)

bool FUN_142605250(undefined4 param_1,int param_2)

{
  ulonglong uVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar3 = FUN_142503f80(&DAT_149c4e010,param_1);
  bVar2 = false;
  if ((lVar3 != 0) && ((lVar3 - 0x149c4e010U & 0x1fffffffe) != 0x4c)) {
    uVar1 = lVar3 - 0x149c4e010U >> 1;
    bVar2 = true;
    if ((0x40075bdfaU >> (uVar1 & 0x3f) & 1) == 0) {
      bVar2 = param_2 < 3 && (1L << ((byte)uVar1 & 0x3f) & 0x1e080004U) != 0;
    }
  }
  return bVar2;
}



// FUNCTION 1426052c0 FUN_1426052c0 body=244 status=ok
// SIG undefined FUN_1426052c0(void)

void FUN_1426052c0(longlong param_1,uint param_2,longlong param_3,undefined8 *param_4,int *param_5)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_b8 [64];
  undefined1 local_78 [64];
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  lVar5 = (ulonglong)param_2 * 0x40;
  uVar1 = *(ushort *)(param_1 + 8 + lVar5);
  uVar2 = 2;
  if ((uVar1 & 1) == 0) {
    uVar2 = uVar1 & 0x1f;
  }
  *(ushort *)(param_1 + 8 + lVar5) = uVar2;
  if (*param_5 < 1) {
    FUN_1424a7220(local_b8,*param_4,0xffffffff,0);
    puVar3 = (undefined8 *)FUN_142502620(*(undefined8 *)(param_3 + 0xb8),local_b8);
    if (puVar3 == (undefined8 *)0x0) {
      *param_5 = 2;
    }
    else {
      FUN_1424a7060(local_78,0,&DAT_149c4e468,4);
      lVar4 = FUN_142502620(*puVar3,local_78);
      if (lVar4 == 0) {
        FUN_1424a7130(param_1 + lVar5);
      }
      else {
        thunk_FUN_1424a7600(param_1 + lVar5,lVar4);
      }
      FUN_140859a90(local_78);
    }
    FUN_140859a90(local_b8);
  }
  return;
}



// FUNCTION 1426053c0 Unwind@1426053c0 body=47 status=ok
// SIG undefined Unwind@1426053c0(void)

void Unwind_1426053c0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x60);
  return;
}



// FUNCTION 1426053f0 Unwind@1426053f0 body=47 status=ok
// SIG undefined Unwind@1426053f0(void)

void Unwind_1426053f0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 142605420 FUN_142605420 body=484 status=ok
// SIG undefined FUN_142605420(void)

undefined8 * FUN_142605420(longlong param_1,undefined8 *param_2,int *param_3,int *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 local_c8 [64];
  undefined1 local_88 [64];
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (*param_4 < 1) {
    FUN_1424a7220(local_88,*param_2,0xffffffff,0);
    puVar1 = (undefined8 *)FUN_142502620(*(undefined8 *)(param_1 + 0xb8),local_88);
    *param_3 = 10;
    puVar2 = (undefined8 *)thunk_FUN_1424da030(0x288);
    if (puVar2 == (undefined8 *)0x0) {
      *param_4 = 7;
      puVar4 = (undefined8 *)0x0;
    }
    else {
      *puVar2 = 10;
      puVar4 = puVar2 + 1;
      puVar2[1] = &PTR_FUN_149e18960;
      *(undefined2 *)(puVar2 + 2) = 2;
      puVar2[9] = &PTR_FUN_149e18960;
      *(undefined2 *)(puVar2 + 10) = 2;
      puVar2[0x11] = &PTR_FUN_149e18960;
      *(undefined2 *)(puVar2 + 0x12) = 2;
      puVar2[0x19] = &PTR_FUN_149e18960;
      *(undefined2 *)(puVar2 + 0x1a) = 2;
      puVar2[0x21] = &PTR_FUN_149e18960;
      *(undefined2 *)(puVar2 + 0x22) = 2;
      puVar2[0x29] = &PTR_FUN_149e18960;
      *(undefined2 *)(puVar2 + 0x2a) = 2;
      puVar2[0x31] = &PTR_FUN_149e18960;
      *(undefined2 *)(puVar2 + 0x32) = 2;
      puVar2[0x39] = &PTR_FUN_149e18960;
      *(undefined2 *)(puVar2 + 0x3a) = 2;
      puVar2[0x41] = &PTR_FUN_149e18960;
      *(undefined2 *)(puVar2 + 0x42) = 2;
      puVar2[0x49] = &PTR_FUN_149e18960;
      *(undefined2 *)(puVar2 + 0x4a) = 2;
      if (puVar1 == (undefined8 *)0x0) {
        uVar5 = 0;
        if (0 < *param_3) {
          do {
            FUN_1424a7130(puVar4 + (ulonglong)uVar5 * 8);
            uVar5 = uVar5 + 1;
          } while ((int)uVar5 < *param_3);
        }
      }
      else {
        for (uVar5 = 0; (int)uVar5 < *param_3; uVar5 = uVar5 + 1) {
          FUN_1424a7220(local_c8,(&PTR_s_midnight_149c4e470)[uVar5],0xffffffff,0);
          lVar3 = FUN_142502620(*puVar1,local_c8);
          if (lVar3 == 0) {
            FUN_1424a7130(puVar4 + (ulonglong)uVar5 * 8);
          }
          else {
            thunk_FUN_1424a7600(puVar4 + (ulonglong)uVar5 * 8,lVar3);
          }
          FUN_140859a90(local_c8);
        }
      }
    }
    FUN_140859a90(local_88);
  }
  else {
    puVar4 = (undefined8 *)0x0;
  }
  return puVar4;
}



// FUNCTION 142605610 Unwind@142605610 body=55 status=ok
// SIG undefined Unwind@142605610(void)

void Unwind_142605610(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 142605650 Unwind@142605650 body=55 status=ok
// SIG undefined Unwind@142605650(void)

void Unwind_142605650(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x60);
  return;
}



// FUNCTION 142605690 FUN_142605690 body=317 status=ok
// SIG undefined FUN_142605690(void)

void FUN_142605690(undefined8 *param_1,uint *param_2,longlong param_3,undefined8 *param_4,
                  int *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 local_90 [64];
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (*param_5 < 1) {
    FUN_1424a7220(local_90,*param_4,0xffffffff,0);
    lVar1 = FUN_142502620(*(undefined8 *)(param_3 + 8),local_90);
    if (lVar1 == 0) {
      *param_2 = 0;
      *param_5 = 2;
    }
    else {
      local_50 = FUN_142502860(*(undefined8 *)(param_3 + 0x60),local_90);
      uVar7 = (int)local_50 + 1;
      *param_2 = uVar7;
      lVar6 = (longlong)(int)uVar7;
      lVar4 = -1;
      if (-2 < (int)local_50) {
        lVar4 = lVar6 * 0x40 + 8;
      }
      plVar2 = (longlong *)thunk_FUN_1424da030(lVar4);
      if (plVar2 == (longlong *)0x0) {
        *param_1 = 0;
        *param_5 = 7;
      }
      else {
        *plVar2 = lVar6;
        plVar3 = plVar2 + 1;
        if (uVar7 == 0) {
          *param_1 = plVar3;
        }
        else {
          plVar5 = plVar3;
          do {
            *plVar5 = (longlong)&PTR_FUN_149e18960;
            *(undefined2 *)(plVar5 + 1) = 2;
            plVar5 = plVar5 + 8;
          } while (plVar5 != plVar3 + lVar6 * 8);
          *param_1 = plVar3;
          if (0 < (int)local_50) {
            plVar2 = plVar2 + 9;
            do {
              FUN_1424a7c80(plVar2,lVar1);
              lVar1 = lVar1 + 0x40;
              plVar2 = plVar2 + 8;
              uVar7 = uVar7 - 1;
            } while (1 < uVar7);
          }
        }
      }
    }
    FUN_140859a90(local_90);
  }
  return;
}



// FUNCTION 1426057d0 Unwind@1426057d0 body=52 status=ok
// SIG undefined Unwind@1426057d0(void)

void Unwind_1426057d0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 142605810 FUN_142605810 body=257 status=ok
// SIG undefined FUN_142605810(void)

void FUN_142605810(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  *param_1 = icu_64::_anon_F43110DD::CalendarDataSink::vftable;
  FUN_142502350(param_1[1],FUN_1426079b0);
  FUN_140859a90(param_1 + 0x43);
  puVar1 = (undefined8 *)param_1[0x42];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_140859a90(param_1 + 0x3a);
  FUN_140859a90(param_1 + 0x32);
  FUN_142515ff0(param_1 + 0x2d);
  iVar3 = *(int *)(param_1 + 0x22);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(param_1[0x23] + lVar4 * 8);
      if (plVar2 != (longlong *)0x0) {
        if (*plVar2 != 0) {
          FUN_142502220();
        }
        FUN_1401773f0(plVar2);
        iVar3 = *(int *)(param_1 + 0x22);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  if (*(char *)((longlong)param_1 + 0x124) != '\0') {
    FUN_1424da110(param_1[0x23]);
  }
  if (param_1[0x17] != 0) {
    FUN_142502220();
  }
  if (param_1[0xc] != 0) {
    FUN_142502220();
  }
  if (param_1[1] != 0) {
    FUN_142502220();
  }
  thunk_FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 142605920 FUN_142605920 body=109 status=ok
// SIG undefined FUN_142605920(void)

undefined8 * FUN_142605920(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::SharedDateFormatSymbols::vftable;
  FUN_142604060(param_1 + 3);
  FUN_140859a90(param_1 + 0x5f);
  FUN_1414b3f60(param_1 + 0x43);
  FUN_140859a90(param_1 + 0x2a);
  FUN_1424b70d0(param_1 + 3);
  thunk_FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142605990 FUN_142605990 body=82 status=ok
// SIG undefined FUN_142605990(void)

longlong FUN_142605990(longlong param_1,int param_2)

{
  FUN_142604060();
  FUN_140859a90(param_1 + 0x2e0);
  FUN_1414b3f60(param_1 + 0x200);
  FUN_140859a90(param_1 + 0x138);
  FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1426059f0 FUN_1426059f0 body=100 status=ok
// SIG undefined FUN_1426059f0(void)

void FUN_1426059f0(int *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *param_1;
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 2) + lVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        if (*plVar1 != 0) {
          FUN_142502220();
        }
        FUN_1401773f0(plVar1);
        iVar2 = *param_1;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  if ((char)param_1[5] != '\0') {
    FUN_1424da110(*(undefined8 *)(param_1 + 2));
    return;
  }
  return;
}



// FUNCTION 142605a60 FUN_142605a60 body=38 status=ok
// SIG undefined FUN_142605a60(void)

undefined8 FUN_142605a60(undefined8 param_1,int param_2)

{
  FUN_142605810();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142605a90 FUN_142605a90 body=2431 status=ok
// SIG undefined FUN_142605a90(void)

void FUN_142605a90(longlong param_1,char *param_2,longlong *param_3,undefined8 param_4,int *param_5)

{
  int iVar1;
  bool bVar2;
  char *_Str1;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  int iVar16;
  longlong lVar17;
  undefined1 local_120 [40];
  undefined1 local_f8 [16];
  int local_e8;
  longlong *local_e0 [8];
  undefined8 *local_a0;
  longlong *local_98;
  char *local_90;
  longlong local_88;
  longlong local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  longlong *local_68;
  longlong local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (*param_5 < 1) {
    local_70 = (undefined8 *)0x0;
    local_90 = param_2;
    local_60 = param_1;
    (**(code **)(*param_3 + 0x50))(param_3,local_120);
    if (*param_5 < 1) {
      local_80 = local_60 + 0x218;
      local_88 = local_60 + 0x168;
      puVar7 = (undefined8 *)0x0;
      iVar4 = 0;
      while( true ) {
        local_70 = puVar7;
        local_50 = puVar7;
        cVar3 = FUN_14258c4f0(local_120,iVar4,&local_90,param_3);
        if (cVar3 == '\0') break;
        local_70 = local_50;
        FUN_1424a7220(local_e0,local_90,0xffffffff,0);
        puVar7 = local_50;
        local_68 = (longlong *)CONCAT44(local_68._4_4_,iVar4);
        local_78 = local_50;
        iVar4 = FUN_142606860(local_60,local_e0,param_3,param_5);
        lVar17 = local_60;
        lVar9 = local_80;
        if (0 < *param_5) goto LAB_1426063af;
        if (iVar4 == 0) {
          lVar8 = FUN_142502620(*(undefined8 *)(local_60 + 8),local_80);
          if ((lVar8 == 0) &&
             (lVar9 = FUN_142502620(*(undefined8 *)(lVar17 + 0xb8),lVar9), lVar9 == 0)) {
            local_58 = (undefined8 *)thunk_FUN_1424da030(0x40);
            if (local_58 == (undefined8 *)0x0) {
              if (*param_5 < 1) {
                *param_5 = 7;
              }
            }
            else {
              FUN_1424a6be0(local_58,local_80);
            }
            puVar14 = local_58;
            local_a0 = local_58;
            FUN_1425163e0(local_88,local_58,param_5);
            if (0 < *param_5) {
              puVar7 = local_50;
              if (puVar14 == (undefined8 *)0x0) goto LAB_1426063af;
              puVar7 = (undefined8 *)*puVar14;
LAB_14260634b:
              (*(code *)*puVar7)(puVar14,1);
              puVar7 = local_50;
              goto LAB_1426063af;
            }
            local_58 = (undefined8 *)thunk_FUN_1424da030(0x40);
            if (local_58 == (undefined8 *)0x0) {
              if (*param_5 < 1) {
                *param_5 = 7;
              }
            }
            else {
              FUN_1424a6be0(local_58,local_e0);
            }
            FUN_1425163e0(local_88,local_58,param_5);
            puVar7 = local_50;
            if (0 < *param_5) {
              if (local_58 != (undefined8 *)0x0) {
                (**(code **)*local_58)(local_58,1);
              }
              goto LAB_1426063af;
            }
          }
        }
        else if (iVar4 != 2) {
          if (iVar4 == 1) {
            if (puVar7 == (undefined8 *)0x0) {
              puVar7 = (undefined8 *)thunk_FUN_1424da030(0x28);
              if (puVar7 == (undefined8 *)0x0) {
                if (*param_5 < 1) {
                  *param_5 = 7;
                }
                puVar7 = (undefined8 *)0x0;
                goto LAB_1426063af;
              }
              local_50 = puVar7;
              FUN_142515f20(puVar7,&LAB_1424b70f0,FUN_1424a9cd0,param_5);
              puVar7 = local_50;
              if (0 < *param_5) {
                (**(code **)*local_50)(local_50,1);
                puVar7 = (undefined8 *)0x0;
                if (0 < *param_5) goto LAB_1426063af;
              }
            }
            local_50 = puVar7;
            local_58 = (undefined8 *)thunk_FUN_1424da030(0x40);
            if (local_58 == (undefined8 *)0x0) {
              if (*param_5 < 1) {
                *param_5 = 7;
              }
            }
            else {
              FUN_1424a6be0(local_58,local_80);
            }
            FUN_1425163e0(local_50,local_58,param_5);
            puVar7 = local_50;
            if (0 < *param_5) {
              if (local_58 == (undefined8 *)0x0) goto LAB_1426063af;
              puVar7 = (undefined8 *)*local_58;
              puVar14 = local_58;
              goto LAB_14260634b;
            }
          }
          else {
            lVar9 = *(longlong *)(local_60 + 0x210);
            if ((lVar9 != 0) && (*(int *)(lVar9 + 8) != 0)) {
              local_78 = puVar7;
              iVar4 = FUN_142516b20(lVar9,local_e0,0);
              if ((iVar4 < 0) && (iVar4 = strcmp(local_90,"AmPmMarkersAbbr"), iVar4 != 0))
              goto LAB_142605b50;
            }
            _Str1 = local_90;
            iVar4 = strcmp(local_90,"AmPmMarkers");
            if (((iVar4 == 0) || (iVar4 = strcmp(_Str1,"AmPmMarkersAbbr"), iVar4 == 0)) ||
               (iVar4 = strcmp(_Str1,"AmPmMarkersNarrow"), iVar4 == 0)) {
              lVar9 = FUN_142502620(*(undefined8 *)(local_60 + 8),local_e0);
              if (lVar9 == 0) {
                local_78 = puVar7;
                (**(code **)(*param_3 + 0x48))(param_3,local_f8,param_5);
                iVar4 = local_e8;
                lVar17 = (longlong)local_e8;
                lVar9 = lVar17 * 0x40 + 8;
                if (lVar17 < 0) {
                  lVar9 = -1;
                }
                local_98 = (longlong *)thunk_FUN_1424da030(lVar9);
                if (local_98 == (longlong *)0x0) {
                  local_98 = (longlong *)0x0;
                  if (*param_5 < 1) {
                    *param_5 = 7;
                  }
                }
                else {
                  *local_98 = lVar17;
                  local_98 = local_98 + 1;
                  if (iVar4 != 0) {
                    plVar12 = local_98;
                    do {
                      *plVar12 = (longlong)&PTR_FUN_149e18960;
                      *(undefined2 *)(plVar12 + 1) = 2;
                      plVar12 = plVar12 + 8;
                    } while (plVar12 != local_98 + lVar17 * 8);
                  }
                }
                plVar12 = local_98;
                (**(code **)(*param_3 + 0x60))(param_3,local_98,iVar4,param_5);
                local_98 = (longlong *)0x0;
                local_58 = (undefined8 *)thunk_FUN_1424da030(0x40);
                if (local_58 != (undefined8 *)0x0) {
                  FUN_1424a6be0(local_58,local_e0);
                }
                FUN_142502aa0(*(undefined8 *)(local_60 + 8),local_58,plVar12,param_5);
                local_58 = (undefined8 *)thunk_FUN_1424da030(0x40);
                if (local_58 != (undefined8 *)0x0) {
                  FUN_1424a6be0(local_58,local_e0);
                }
                FUN_142502d50(*(undefined8 *)(local_60 + 0x60),local_58,iVar4,param_5);
                puVar7 = local_50;
                if (0 < *param_5) {
LAB_1426063af:
                  FUN_140859a90(local_e0);
LAB_1426063b8:
                  if (puVar7 == (undefined8 *)0x0) {
                    return;
                  }
                  (**(code **)*puVar7)(puVar7,1);
                  return;
                }
              }
            }
            else {
              iVar4 = strcmp(_Str1,"eras");
              if (((((iVar4 == 0) || (iVar4 = strcmp(_Str1,"dayNames"), iVar4 == 0)) ||
                   ((iVar4 = strcmp(_Str1,"monthNames"), iVar4 == 0 ||
                    ((iVar4 = strcmp(_Str1,"quarters"), iVar4 == 0 ||
                     (iVar4 = strcmp(_Str1,"dayPeriod"), iVar4 == 0)))))) ||
                  (iVar4 = strcmp(_Str1,"monthPatterns"), iVar4 == 0)) ||
                 (iVar4 = strcmp(_Str1,"cyclicNameSets"), iVar4 == 0)) {
                local_78 = puVar7;
                FUN_142606bd0(local_60,local_e0,_Str1,param_3,param_5);
              }
            }
          }
        }
LAB_142605b50:
        FUN_140859a90(local_e0);
        iVar4 = (int)local_68 + 1;
      }
      iVar4 = 0;
      bVar2 = false;
LAB_142606065:
      do {
        iVar16 = iVar4 + 1;
        local_58 = (undefined8 *)CONCAT44(local_58._4_4_,iVar16);
        while (puVar7 = local_50, lVar9 = local_60, iVar4 < *(int *)(local_60 + 0x170)) {
          local_70 = local_50;
          uVar10 = FUN_142516630(local_88,iVar4);
          lVar9 = local_60;
          lVar17 = FUN_142502620(*(undefined8 *)(local_60 + 8),uVar10);
          if (lVar17 == 0) {
            lVar9 = FUN_142502620(*(undefined8 *)(lVar9 + 0xb8),uVar10);
            if (lVar9 == 0) {
              iVar4 = iVar4 + 2;
              goto LAB_142606065;
            }
            local_70 = local_50;
            uVar10 = FUN_142516630(local_88,iVar16);
            lVar17 = local_60;
            lVar8 = FUN_142502620(*(undefined8 *)(local_60 + 0xb8),uVar10);
            if (lVar8 == 0) {
              local_68 = (longlong *)thunk_FUN_1424da030(0x40);
              if (local_68 != (longlong *)0x0) {
                FUN_1424a6be0(local_68,uVar10);
              }
              FUN_142502aa0(*(undefined8 *)(lVar17 + 0xb8),local_68,lVar9,param_5);
            }
            iVar1 = *param_5;
            puVar7 = local_50;
          }
          else {
            local_70 = local_50;
            uVar11 = FUN_142516630(local_88,iVar16);
            lVar9 = local_60;
            lVar8 = FUN_142502620(*(undefined8 *)(local_60 + 8),uVar11);
            if (lVar8 == 0) {
              uVar5 = FUN_142502860(*(undefined8 *)(lVar9 + 0x60),uVar10);
              lVar8 = (longlong)(int)uVar5;
              lVar9 = lVar8 * 0x40 + 8;
              if ((int)uVar5 < 0) {
                lVar9 = -1;
              }
              plVar12 = (longlong *)thunk_FUN_1424da030(lVar9);
              lVar9 = local_60;
              if (plVar12 == (longlong *)0x0) {
                puVar7 = local_50;
                if (*param_5 < 1) {
                  *param_5 = 7;
                }
              }
              else {
                *plVar12 = lVar8;
                plVar15 = plVar12 + 1;
                local_e0[0] = plVar15;
                local_68 = plVar15;
                if (uVar5 == 0) {
                  if (*param_5 < 1) goto LAB_14260625d;
                }
                else {
                  plVar13 = plVar15;
                  do {
                    *plVar13 = (longlong)&PTR_FUN_149e18960;
                    *(undefined2 *)(plVar13 + 1) = 2;
                    plVar13 = plVar13 + 8;
                  } while (plVar13 != plVar15 + lVar8 * 8);
                  if (*param_5 < 1) {
                    uVar6 = uVar5;
                    if (0 < (int)uVar5) {
                      do {
                        FUN_1424a7c80(plVar15,lVar17);
                        plVar15 = plVar15 + 8;
                        lVar17 = lVar17 + 0x40;
                        bVar2 = 1 < uVar6;
                        uVar6 = uVar6 - 1;
                      } while (bVar2);
                    }
LAB_14260625d:
                    local_e0[0] = (longlong *)0x0;
                    local_80 = thunk_FUN_1424da030(0x40);
                    if (local_80 != 0) {
                      FUN_1424a6be0(local_80,uVar11);
                    }
                    FUN_142502aa0(*(undefined8 *)(lVar9 + 8),local_80,local_68,param_5);
                    local_68 = (longlong *)thunk_FUN_1424da030(0x40);
                    if (local_68 != (longlong *)0x0) {
                      FUN_1424a6be0(local_68,uVar11);
                    }
                    FUN_142502d50(*(undefined8 *)(lVar9 + 0x60),local_68,uVar5,param_5);
                    iVar16 = (int)local_58;
                    goto LAB_1426062d5;
                  }
                }
                if (*plVar12 != 0) {
                  lVar9 = *plVar12 << 6;
                  do {
                    FUN_140859a90((longlong)plVar12 + lVar9 + -0x38);
                    lVar9 = lVar9 + -0x40;
                  } while (lVar9 != 0);
                }
                FUN_1424b70c0(plVar12);
                puVar7 = local_50;
              }
              goto LAB_1426063b8;
            }
LAB_1426062d5:
            iVar1 = *param_5;
            puVar7 = local_50;
          }
          local_50 = puVar7;
          if (0 < iVar1) goto LAB_1426063b8;
          local_70 = puVar7;
          FUN_142516850(local_88,iVar16);
          local_70 = local_50;
          bVar2 = true;
          FUN_142516850(local_88,iVar4);
        }
        if (!bVar2) break;
        iVar4 = 0;
        bVar2 = false;
      } while (*(int *)(local_60 + 0x170) != 0);
      if (local_50 != (undefined8 *)0x0) {
        puVar14 = *(undefined8 **)(local_60 + 0x210);
        if (puVar14 != (undefined8 *)0x0) {
          (**(code **)*puVar14)(puVar14,1);
        }
        *(undefined8 **)(lVar9 + 0x210) = puVar7;
      }
    }
  }
  return;
}



// FUNCTION 142606420 Unwind@142606420 body=62 status=ok
// SIG undefined Unwind@142606420(void)

void Unwind_142606420(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xf0));
  *(undefined8 *)(param_2 + 0xa8) = 0;
  return;
}



// FUNCTION 142606460 Unwind@142606460 body=62 status=ok
// SIG undefined Unwind@142606460(void)

void Unwind_142606460(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xf0));
  *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(param_2 + 0xf8);
  return;
}



// FUNCTION 1426064a0 Unwind@1426064a0 body=74 status=ok
// SIG undefined Unwind@1426064a0(void)

void Unwind_1426064a0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xf0) != 0) {
    (**(code **)**(undefined8 **)(param_2 + 0xf0))(*(undefined8 **)(param_2 + 0xf0),1);
  }
  *(undefined8 *)(param_2 + 0xa8) = 0;
  return;
}



// FUNCTION 1426064f0 Unwind@1426064f0 body=55 status=ok
// SIG undefined Unwind@1426064f0(void)

void Unwind_1426064f0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xf0));
  return;
}



// FUNCTION 142606530 Unwind@142606530 body=55 status=ok
// SIG undefined Unwind@142606530(void)

void Unwind_142606530(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xf0));
  return;
}



// FUNCTION 142606570 Unwind@142606570 body=62 status=ok
// SIG undefined Unwind@142606570(void)

void Unwind_142606570(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xe0));
  *(undefined8 *)(param_2 + 0xd8) = *(undefined8 *)(param_2 + 0xf8);
  return;
}



// FUNCTION 1426065b0 Unwind@1426065b0 body=72 status=ok
// SIG undefined Unwind@1426065b0(void)

void Unwind_1426065b0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0xa8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(param_2 + 0xf8);
  return;
}



// FUNCTION 142606600 Unwind@142606600 body=62 status=ok
// SIG undefined Unwind@142606600(void)

void Unwind_142606600(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xf8));
  *(undefined8 *)(param_2 + 0xd0) = 0;
  return;
}



// FUNCTION 142606640 Unwind@142606640 body=55 status=ok
// SIG undefined Unwind@142606640(void)

void Unwind_142606640(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xe0));
  return;
}



// FUNCTION 142606680 Unwind@142606680 body=55 status=ok
// SIG undefined Unwind@142606680(void)

void Unwind_142606680(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 200));
  return;
}



// FUNCTION 1426066c0 Unwind@1426066c0 body=62 status=ok
// SIG undefined Unwind@1426066c0(void)

void Unwind_1426066c0(undefined8 param_1,longlong param_2)

{
  FUN_1425346e0(param_2 + 0xb0);
  *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(param_2 + 0xf8);
  return;
}



// FUNCTION 142606700 Unwind@142606700 body=62 status=ok
// SIG undefined Unwind@142606700(void)

void Unwind_142606700(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xf0));
  *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(param_2 + 0xf8);
  return;
}



// FUNCTION 142606740 Unwind@142606740 body=74 status=ok
// SIG undefined Unwind@142606740(void)

void Unwind_142606740(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xf0) != 0) {
    (**(code **)**(undefined8 **)(param_2 + 0xf0))(*(undefined8 **)(param_2 + 0xf0),1);
  }
  *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(param_2 + 0xf8);
  return;
}



// FUNCTION 142606790 Unwind@142606790 body=62 status=ok
// SIG undefined Unwind@142606790(void)

void Unwind_142606790(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0xd0);
  FUN_140859a90(param_2 + 0x68);
  *(undefined8 *)(param_2 + 0xd8) = uVar1;
  return;
}



// FUNCTION 1426067d0 Unwind@1426067d0 body=62 status=ok
// SIG undefined Unwind@1426067d0(void)

void Unwind_1426067d0(undefined8 param_1,longlong param_2)

{
  FUN_1425346e0(param_2 + 0x68);
  *(undefined8 *)(param_2 + 0xd8) = *(undefined8 *)(param_2 + 0xf8);
  return;
}



// FUNCTION 142606810 Unwind@142606810 body=65 status=ok
// SIG undefined Unwind@142606810(void)

void Unwind_142606810(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}



// FUNCTION 142606860 FUN_142606860 body=542 status=ok
// SIG undefined FUN_142606860(void)

undefined4 FUN_142606860(longlong param_1,undefined8 param_2,longlong *param_3,int *param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 local_d8 [64];
  undefined1 local_98 [8];
  short local_90;
  int local_8c;
  wchar_t *local_50;
  undefined4 local_44;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (0 < *param_4) {
    return 3;
  }
  iVar3 = (**(code **)(*param_3 + 0x10))(param_3);
  if (iVar3 != 3) {
    return 3;
  }
  uVar4 = (**(code **)(*param_3 + 0x20))(param_3,&local_44,param_4);
  if (0 < *param_4) {
    return 3;
  }
  FUN_1424a7000(local_98,uVar4,local_44);
  cVar2 = FUN_1424a7e30(local_98,0,0x11,L"/LOCALE/calendar/",0,0x11);
  local_50 = L"/LOCALE/calendar/";
  if (cVar2 == '\0') {
    iVar3 = local_8c;
    if (-1 < local_90) {
      iVar3 = (int)local_90 >> 5;
    }
    if ((0x11 < iVar3) && (iVar3 = FUN_1424a8940(local_98,0x2f,0x11,iVar3 + -0x11), 0x11 < iVar3)) {
      FUN_1424a84d0(local_98,local_d8,0x11,iVar3 + -0x11);
      lVar1 = param_1 + 0x218;
      if (-1 < local_90) {
        local_8c = (int)local_90 >> 5;
      }
      FUN_1424bce00(lVar1,local_98,iVar3 + 1,local_8c);
      cVar2 = FUN_14626a19a(param_1 + 400,local_d8);
      if (cVar2 == '\0') {
LAB_1426069d0:
        cVar2 = FUN_1425dd580(param_1 + 400,local_d8);
        if ((cVar2 == '\0') || (cVar2 = FUN_14626a19a(param_2,lVar1), cVar2 == '\0')) {
LAB_142606a2c:
          FUN_140859a90(local_d8);
          goto LAB_142606a35;
        }
        cVar2 = FUN_1424c19f0(local_d8,&DAT_149c4e070,9);
        if (cVar2 == '\0') {
          uVar5 = 2;
        }
        else if ((*(byte *)(param_1 + 0x1d8) & 1) == 0) {
          cVar2 = FUN_14626a19a(param_1 + 0x1d0,local_d8);
          uVar5 = 1;
          if (cVar2 == '\0') goto LAB_142606a2c;
        }
        else {
          uVar5 = 1;
          FUN_1424a7c80(param_1 + 0x1d0,local_d8);
        }
      }
      else {
        cVar2 = FUN_1425dd580(param_2,lVar1);
        uVar5 = 0;
        if (cVar2 == '\0') goto LAB_1426069d0;
      }
      FUN_140859a90(local_d8);
      goto LAB_142606a41;
    }
  }
LAB_142606a35:
  *param_4 = 5;
  uVar5 = 3;
LAB_142606a41:
  FUN_140859a90(local_98);
  return uVar5;
}



// FUNCTION 142606a80 Unwind@142606a80 body=51 status=ok
// SIG undefined Unwind@142606a80(void)

void Unwind_142606a80(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 142606ac0 Unwind@142606ac0 body=51 status=ok
// SIG undefined Unwind@142606ac0(void)

void Unwind_142606ac0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x70);
  return;
}



// FUNCTION 142606b00 Unwind@142606b00 body=52 status=ok
// SIG undefined Unwind@142606b00(void)

void Unwind_142606b00(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0xb0) = L"/LOCALE/calendar/";
  return;
}



// FUNCTION 142606b40 FUN_142606b40 body=94 status=ok
// SIG undefined FUN_142606b40(void)

void FUN_142606b40(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = thunk_FUN_1424da030(0x40);
  if (lVar1 != 0) {
    FUN_1424a6be0(lVar1,param_2);
  }
  FUN_142502d50(*param_1,lVar1,param_3,param_4);
  return;
}



// FUNCTION 142606ba0 Unwind@142606ba0 body=40 status=ok
// SIG undefined Unwind@142606ba0(void)

void Unwind_142606ba0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 142606bd0 FUN_142606bd0 body=2321 status=ok
// SIG undefined FUN_142606bd0(void)

void FUN_142606bd0(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                  int *param_5)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int *in_stack_fffffffffffffe98;
  undefined1 local_150 [40];
  undefined1 local_128 [8];
  short local_120;
  int local_11c;
  wchar_t *local_e0;
  wchar_t *local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined4 local_b0 [4];
  int local_a0;
  undefined8 *local_98;
  longlong local_90;
  undefined8 *local_88;
  longlong local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  longlong local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if ((*param_5 < 1) &&
     (local_70 = param_3, local_58 = param_1,
     (**(code **)(*param_4 + 0x50))(param_4,local_150,param_5), *param_5 < 1)) {
    local_88 = (undefined8 *)(local_58 + 8);
    local_c0 = local_58 + 0x60;
    local_b8 = local_58 + 0x218;
    local_80 = local_58 + 0x168;
    local_c8 = local_58 + 0x110;
    iVar13 = 0;
    local_60 = (undefined8 *)0x0;
    while (cVar3 = FUN_14258c4f0(local_150,iVar13,&local_70,param_4), cVar3 != '\0') {
      FUN_1424a7220(local_128,local_70,0xffffffff,0);
      iVar5 = local_11c;
      if (-1 < local_120) {
        iVar5 = (int)local_120 >> 5;
      }
      in_stack_fffffffffffffe98 = (int *)((ulonglong)in_stack_fffffffffffffe98 & 0xffffffff00000000)
      ;
      cVar3 = FUN_1424a7e30(local_128,iVar5 + -8,8,L"%variantcyclicNameSets",
                            in_stack_fffffffffffffe98,8);
      local_e0 = L"%variantcyclicNameSets";
      if (cVar3 != '\0') {
        iVar5 = (**(code **)(*param_4 + 0x10))(param_4);
        if (iVar5 == 0) {
          if (iVar13 == 0) {
            local_b0[0] = 0;
            local_60 = (undefined8 *)FUN_1426077f0(local_c8,local_b0,param_5);
            if (local_60 == (undefined8 *)0x0) {
              *param_5 = 7;
              goto LAB_1426074bf;
            }
            local_50 = (undefined8 *)thunk_FUN_1424da030(0x40);
            if (local_50 != (undefined8 *)0x0) {
              FUN_1424a6be0(local_50,param_2);
            }
            FUN_142502aa0(*(undefined8 *)(local_58 + 0xb8),local_50,local_60,param_5);
            if (0 < *param_5) goto LAB_1426074bf;
            FUN_142502350(*local_60,&LAB_1424b70f0);
          }
          uVar6 = (**(code **)(*param_4 + 0x18))(param_4,local_b0,param_5);
          if (0 < *param_5) goto LAB_1426074bf;
          local_90 = thunk_FUN_1424da030(0x40);
          if (local_90 == 0) {
            if (*param_5 < 1) {
              *param_5 = 7;
            }
          }
          else {
            FUN_1424a7060(local_90,1,uVar6,local_b0[0]);
          }
          local_50 = (undefined8 *)thunk_FUN_1424da030(0x40);
          if (local_50 != (undefined8 *)0x0) {
            FUN_1424a6be0(local_50,local_128);
          }
          FUN_142502aa0(*local_60,local_50,local_90,param_5);
          if (0 < *param_5) goto LAB_1426074bf;
        }
        else {
          if (*(short *)(param_2 + 8) < 0) {
            uVar15 = *(uint *)(param_2 + 0xc);
          }
          else {
            uVar15 = (int)*(short *)(param_2 + 8) >> 5;
          }
          local_b0[0] = CONCAT22(local_b0[0]._2_2_,0x2f);
          uVar6 = FUN_1424a6cf0(param_2,local_b0,0,1);
          iVar5 = local_11c;
          if (-1 < local_120) {
            iVar5 = (int)local_120 >> 5;
          }
          FUN_1424a9690(uVar6,local_128,0,iVar5);
          in_stack_fffffffffffffe98 =
               (int *)((ulonglong)in_stack_fffffffffffffe98 & 0xffffffff00000000);
          cVar3 = FUN_1424a7e30(param_2,0,0xe,L"cyclicNameSets",in_stack_fffffffffffffe98,0xe);
          local_d0 = L"cyclicNameSets";
          if (cVar3 == '\0') {
            if (*(short *)(param_2 + 8) < 0) {
              iVar5 = *(int *)(param_2 + 0xc);
            }
            else {
              iVar5 = (int)*(short *)(param_2 + 8) >> 5;
            }
            iVar14 = 0xe;
            if (iVar5 != 0xe) {
              in_stack_fffffffffffffe98 =
                   (int *)((ulonglong)in_stack_fffffffffffffe98 & 0xffffffff00000000);
              cVar3 = FUN_1424a7e30(param_2,0xe,8,L"/zodiacs/years",in_stack_fffffffffffffe98,8);
              if (cVar3 == '\0') {
                iVar14 = 0x16;
                goto LAB_1426071ae;
              }
              in_stack_fffffffffffffe98 =
                   (int *)((ulonglong)in_stack_fffffffffffffe98 & 0xffffffff00000000);
              cVar3 = FUN_1424a7e30(param_2,0xe,6,L"/years",in_stack_fffffffffffffe98,6);
              if (cVar3 == '\0') {
                iVar14 = 0x14;
                goto LAB_1426071ae;
              }
              in_stack_fffffffffffffe98 =
                   (int *)((ulonglong)in_stack_fffffffffffffe98 & 0xffffffff00000000);
              cVar3 = FUN_1424a7e30(param_2,0xe,9,&DAT_149c4e430,in_stack_fffffffffffffe98,9);
              if (cVar3 == '\0') {
                iVar14 = 0x17;
                goto LAB_1426071ae;
              }
LAB_142607249:
              uVar1 = *(ushort *)(param_2 + 8);
              if ((uVar15 == 0) && ((uVar1 & 1) != 0)) {
                FUN_1424a8e40(param_2);
              }
              else {
                if ((short)uVar1 < 0) {
                  uVar9 = *(uint *)(param_2 + 0xc);
                }
                else {
                  uVar9 = (int)(short)uVar1 >> 5;
                }
                if (uVar15 < uVar9) {
                  if ((int)uVar15 < 0x400) {
                    *(ushort *)(param_2 + 8) = (ushort)(uVar15 << 5) | uVar1 & 0x1f;
                  }
                  else {
                    *(ushort *)(param_2 + 8) = uVar1 | 0xffe0;
                    *(uint *)(param_2 + 0xc) = uVar15;
                  }
                }
              }
              in_stack_fffffffffffffe98 =
                   (int *)((ulonglong)in_stack_fffffffffffffe98 & 0xffffffff00000000);
              FUN_1424a9130(param_2,0,0,0,in_stack_fffffffffffffe98,0);
              goto LAB_142606cbd;
            }
LAB_1426071ae:
            sVar4 = *(short *)(param_2 + 8);
            iVar10 = (int)sVar4 >> 5;
            iVar5 = *(int *)(param_2 + 0xc);
            iVar2 = iVar10;
            if (sVar4 < 0) {
              iVar2 = iVar5;
            }
            iVar12 = 0;
            if (iVar14 != iVar2) {
              in_stack_fffffffffffffe98 =
                   (int *)((ulonglong)in_stack_fffffffffffffe98 & 0xffffffff00000000);
              cVar3 = FUN_1424a7e30(param_2,iVar14,7,&DAT_149c4e442,in_stack_fffffffffffffe98,7);
              if (cVar3 != '\0') goto LAB_142607249;
              sVar4 = *(short *)(param_2 + 8);
              iVar5 = *(int *)(param_2 + 0xc);
              iVar10 = (int)sVar4 >> 5;
              iVar12 = 7;
            }
            if (sVar4 < 0) {
              iVar10 = iVar5;
            }
            if (iVar12 + iVar14 != iVar10) {
              in_stack_fffffffffffffe98 =
                   (int *)((ulonglong)in_stack_fffffffffffffe98 & 0xffffffff00000000);
              cVar3 = FUN_1424a7e30(param_2,iVar12 + iVar14,0xc,&DAT_149c4e450,
                                    in_stack_fffffffffffffe98,0xc);
              if (cVar3 != '\0') goto LAB_142607249;
            }
          }
          lVar7 = FUN_142502620(*local_88,param_2);
          if ((lVar7 == 0) &&
             (lVar7 = FUN_142502620(*(undefined8 *)(local_58 + 0xb8),param_2), lVar7 == 0)) {
            iVar5 = FUN_142606860(local_58,param_2,param_4,param_5);
            if (0 < *param_5) goto LAB_1426074bf;
            if (iVar5 == 0) {
              local_50 = (undefined8 *)thunk_FUN_1424da030(0x40);
              if (local_50 == (undefined8 *)0x0) {
                if (*param_5 < 1) {
                  *param_5 = 7;
                }
              }
              else {
                FUN_1424a6be0(local_50,local_b8);
              }
              local_78 = local_50;
              FUN_1425163e0(local_80,local_50,param_5);
              if (*param_5 < 1) {
                local_50 = (undefined8 *)thunk_FUN_1424da030(0x40);
                if (local_50 == (undefined8 *)0x0) {
                  if (*param_5 < 1) {
                    *param_5 = 7;
                  }
                }
                else {
                  FUN_1424a6be0(local_50,param_2);
                }
                puVar11 = local_50;
                local_98 = local_50;
                FUN_1425163e0(local_80,local_50,param_5);
                if (*param_5 < 1) {
                  local_98 = (undefined8 *)0x0;
                  FUN_142607920(param_2,0,uVar15);
                  goto LAB_142606cbd;
                }
                if (puVar11 == (undefined8 *)0x0) goto LAB_1426074bf;
                puVar8 = (undefined8 *)*puVar11;
              }
              else {
                if (local_50 == (undefined8 *)0x0) goto LAB_1426074bf;
                puVar8 = (undefined8 *)*local_50;
                puVar11 = local_50;
              }
              (*(code *)*puVar8)(puVar11,1);
              goto LAB_1426074bf;
            }
            iVar5 = (**(code **)(*param_4 + 0x10))(param_4);
            if (iVar5 == 8) {
              (**(code **)(*param_4 + 0x48))(param_4,local_b0,param_5);
              puVar8 = (undefined8 *)(longlong)local_a0;
              lVar7 = (longlong)puVar8 * 0x40 + 8;
              if ((longlong)puVar8 < 0) {
                lVar7 = -1;
              }
              local_50 = puVar8;
              local_68 = (undefined8 *)thunk_FUN_1424da030(lVar7);
              if (local_68 == (undefined8 *)0x0) {
                local_68 = (undefined8 *)0x0;
                if (*param_5 < 1) {
                  *param_5 = 7;
                }
              }
              else {
                *local_68 = local_50;
                local_68 = local_68 + 1;
                if ((int)local_50 != 0) {
                  puVar11 = local_68;
                  do {
                    *puVar11 = &PTR_FUN_149e18960;
                    *(undefined2 *)(puVar11 + 1) = 2;
                    puVar11 = puVar11 + 8;
                  } while (puVar11 != local_68 + (longlong)puVar8 * 8);
                }
              }
              (**(code **)(*param_4 + 0x60))(param_4,local_68,local_50,param_5);
              puVar8 = local_68;
              local_68 = (undefined8 *)0x0;
              FUN_142534fd0(local_88,param_2,puVar8,param_5);
              FUN_142606b40(local_c0,param_2,local_50,param_5);
              iVar5 = *param_5;
              FUN_1425346e0(&local_68);
joined_r0x00014260731b:
              if (0 < iVar5) {
LAB_1426074bf:
                FUN_140859a90(local_128);
                return;
              }
            }
            else {
              iVar5 = (**(code **)(*param_4 + 0x10))(param_4);
              if (iVar5 == 2) {
                in_stack_fffffffffffffe98 = param_5;
                FUN_142606bd0(local_58,param_2,local_70,param_4,param_5);
                iVar5 = *param_5;
                goto joined_r0x00014260731b;
              }
            }
            FUN_142607920(param_2,0,uVar15);
          }
          else {
            uVar1 = *(ushort *)(param_2 + 8);
            if ((uVar15 == 0) && ((uVar1 & 1) != 0)) {
              FUN_1424a8e40(param_2);
            }
            else {
              if ((short)uVar1 < 0) {
                uVar9 = *(uint *)(param_2 + 0xc);
              }
              else {
                uVar9 = (int)(short)uVar1 >> 5;
              }
              if (uVar15 < uVar9) {
                if ((int)uVar15 < 0x400) {
                  *(ushort *)(param_2 + 8) = (ushort)(uVar15 << 5) | uVar1 & 0x1f;
                }
                else {
                  *(ushort *)(param_2 + 8) = uVar1 | 0xffe0;
                  *(uint *)(param_2 + 0xc) = uVar15;
                }
              }
            }
            in_stack_fffffffffffffe98 =
                 (int *)((ulonglong)in_stack_fffffffffffffe98 & 0xffffffff00000000);
            FUN_1424a9130(param_2,0,0,0,in_stack_fffffffffffffe98,0);
          }
        }
      }
LAB_142606cbd:
      FUN_140859a90(local_128);
      iVar13 = iVar13 + 1;
    }
  }
  return;
}



// FUNCTION 142607500 Unwind@142607500 body=55 status=ok
// SIG undefined Unwind@142607500(void)

void Unwind_142607500(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xf8));
  return;
}



// FUNCTION 142607540 Unwind@142607540 body=75 status=ok
// SIG undefined Unwind@142607540(void)

void Unwind_142607540(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_2 + 0x110) = 0;
  return;
}



// FUNCTION 142607590 Unwind@142607590 body=68 status=ok
// SIG undefined Unwind@142607590(void)

void Unwind_142607590(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x110);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}



// FUNCTION 1426075e0 Unwind@1426075e0 body=58 status=ok
// SIG undefined Unwind@1426075e0(void)

void Unwind_1426075e0(undefined8 param_1,longlong param_2)

{
  FUN_1425346e0(param_2 + 0x120);
  return;
}



// FUNCTION 142607620 Unwind@142607620 body=55 status=ok
// SIG undefined Unwind@142607620(void)

void Unwind_142607620(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x60);
  return;
}



// FUNCTION 142607660 Unwind@142607660 body=56 status=ok
// SIG undefined Unwind@142607660(void)

void Unwind_142607660(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0xa0) = L"%variantcyclicNameSets";
  return;
}



// FUNCTION 1426076a0 Unwind@1426076a0 body=58 status=ok
// SIG undefined Unwind@1426076a0(void)

void Unwind_1426076a0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x138));
  return;
}



// FUNCTION 1426076e0 Unwind@1426076e0 body=58 status=ok
// SIG undefined Unwind@1426076e0(void)

void Unwind_1426076e0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x138));
  return;
}



// FUNCTION 142607720 Unwind@142607720 body=56 status=ok
// SIG undefined Unwind@142607720(void)

void Unwind_142607720(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0xb0) = L"cyclicNameSets";
  return;
}



// FUNCTION 142607760 Unwind@142607760 body=58 status=ok
// SIG undefined Unwind@142607760(void)

void Unwind_142607760(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x138));
  return;
}



// FUNCTION 1426077a0 Unwind@1426077a0 body=68 status=ok
// SIG undefined Unwind@1426077a0(void)

void Unwind_1426077a0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x138));
  *(undefined8 *)(param_2 + 0x110) = 0;
  return;
}



// FUNCTION 1426077f0 FUN_1426077f0 body=298 status=ok
// SIG undefined FUN_1426077f0(void)

undefined8 * FUN_1426077f0(uint *param_1,char *param_2,int *param_3)

{
  char cVar1;
  void *_Dst;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  uint uVar5;
  code *pcVar6;
  uint uVar7;
  
  uVar7 = param_1[4];
  if (*param_1 == uVar7) {
    uVar5 = 0x20;
    if (uVar7 != 8) {
      uVar5 = uVar7 * 2;
    }
    if (0 < (int)uVar5) {
      _Dst = (void *)FUN_1424da030((ulonglong)uVar5 << 3);
      if (_Dst != (void *)0x0) {
        if (0 < (int)uVar7) {
          if ((int)param_1[4] < (int)uVar7) {
            uVar7 = param_1[4];
          }
          if ((int)uVar5 <= (int)uVar7) {
            uVar7 = uVar5;
          }
          memcpy(_Dst,*(void **)(param_1 + 2),(longlong)(int)uVar7 << 3);
        }
        if ((char)param_1[5] != '\0') {
          FUN_1424da110(*(undefined8 *)(param_1 + 2));
        }
        *(void **)(param_1 + 2) = _Dst;
        param_1[4] = uVar5;
        *(undefined1 *)(param_1 + 5) = 1;
        goto LAB_142607880;
      }
    }
    puVar2 = (undefined8 *)0x0;
  }
  else {
LAB_142607880:
    puVar2 = (undefined8 *)thunk_FUN_1424da030(0x58);
    if (puVar2 != (undefined8 *)0x0) {
      cVar1 = *param_2;
      *puVar2 = 0;
      if (*param_3 < 1) {
        pcVar3 = FUN_14257f4c0;
        if (cVar1 == '\0') {
          pcVar3 = FUN_1424a9c90;
        }
        pcVar6 = FUN_14257f540;
        if (cVar1 == '\0') {
          pcVar6 = FUN_1424a9cd0;
        }
        puVar4 = puVar2 + 1;
        FUN_142502140(puVar4,pcVar3,pcVar6,0,param_3);
        if (*param_3 < 1) {
          *puVar2 = puVar4;
          FUN_142502340(puVar4,&LAB_1424b70f0);
        }
      }
    }
    uVar7 = *param_1;
    *param_1 = uVar7 + 1;
    *(undefined8 **)(*(longlong *)(param_1 + 2) + (longlong)(int)uVar7 * 8) = puVar2;
  }
  return puVar2;
}



// FUNCTION 142607920 FUN_142607920 body=142 status=ok
// SIG undefined FUN_142607920(void)

void FUN_142607920(longlong param_1,undefined4 param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = *(ushort *)(param_1 + 8);
  if ((param_3 == 0) && ((uVar1 & 1) != 0)) {
    FUN_1424a8e40(param_1);
  }
  else {
    if ((short)uVar1 < 0) {
      uVar2 = *(uint *)(param_1 + 0xc);
    }
    else {
      uVar2 = (int)(short)uVar1 >> 5;
    }
    if (param_3 < uVar2) {
      if ((int)param_3 < 0x400) {
        *(ushort *)(param_1 + 8) = (ushort)(param_3 << 5) | uVar1 & 0x1f;
      }
      else {
        *(ushort *)(param_1 + 8) = uVar1 | 0xffe0;
        *(uint *)(param_1 + 0xc) = param_3;
      }
    }
  }
  FUN_1424a9130(param_1,0,param_2,0,0,0);
  return;
}



// FUNCTION 1426079b0 FUN_1426079b0 body=87 status=ok
// SIG undefined FUN_1426079b0(void)

void FUN_1426079b0(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + -8) != 0) {
      lVar1 = *(longlong *)(param_1 + -8) << 6;
      do {
        FUN_140859a90(param_1 + -0x40 + lVar1);
        lVar1 = lVar1 + -0x40;
      } while (lVar1 != 0);
    }
    FUN_1424b70c0(param_1 + -8);
    return;
  }
  return;
}



// FUNCTION 142607a10 FUN_142607a10 body=167 status=ok
// SIG undefined FUN_142607a10(void)

void FUN_142607a10(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  int *param_5)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  int *local_38;
  longlong local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (0 < *param_5) goto LAB_142607aaa;
  local_24 = 0;
  local_30 = 0;
  local_38 = &local_24;
  FUN_14253f870(param_1,param_2,&local_30,param_3);
  lVar1 = local_30;
  if ((local_24 < 1) && (*param_4 != local_30)) {
    if (*param_4 != 0) {
      FUN_142537ca0();
    }
    *param_4 = lVar1;
    if (lVar1 != 0) {
      FUN_142537c90(lVar1);
LAB_142607a93:
      FUN_142537ca0(lVar1);
    }
  }
  else if (local_30 != 0) goto LAB_142607a93;
  if ((*param_5 == 0) || (0 < local_24)) {
    *param_5 = local_24;
  }
LAB_142607aaa:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 142607ac0 FUN_142607ac0 body=60 status=ok
// SIG undefined FUN_142607ac0(void)

undefined8 * FUN_142607ac0(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::LocaleCacheKey<icu_64::SharedDateFormatSymbols>::vftable;
  FUN_1414b3f60(param_1 + 2);
  thunk_FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142607b00 FUN_142607b00 body=76 status=ok
// SIG undefined FUN_142607b00(void)

int FUN_142607b00(longlong param_1)

{
  int iVar1;
  int iVar2;
  char *_Str;
  size_t sVar3;
  
  _Str = (char *)__std_type_info_name(0x14c730f08,&DAT_14c793310);
  sVar3 = strlen(_Str);
  iVar1 = FUN_142504d90(_Str,sVar3 & 0xffffffff);
  iVar2 = FUN_1424a4050(param_1 + 0x10);
  return iVar2 + iVar1 * 0x25;
}



// FUNCTION 142607b50 FUN_142607b50 body=102 status=ok
// SIG undefined FUN_142607b50(void)

undefined8 * FUN_142607b50(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)thunk_FUN_1424da030(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = icu_64::CacheKeyBase::vftable;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined1 *)((longlong)puVar1 + 0xc) = 0;
    *puVar1 = icu_64::LocaleCacheKey<icu_64::SharedDateFormatSymbols>::vftable;
    FUN_1424a3ce0(puVar1 + 2,param_1 + 0x10);
  }
  return puVar1;
}



// FUNCTION 142607bc0 Unwind@142607bc0 body=43 status=ok
// SIG undefined Unwind@142607bc0(void)

void Unwind_142607bc0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  thunk_FUN_1424b70d0(uVar1);
  FUN_1401773f0(uVar1);
  return;
}



// FUNCTION 142607bf0 FUN_142607bf0 body=94 status=ok
// SIG undefined FUN_142607bf0(void)

undefined8 FUN_142607bf0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_1 == param_2) {
    uVar4 = 1;
  }
  else {
    lVar2 = __RTtypeid();
    lVar3 = __RTtypeid(param_2);
    iVar1 = __std_type_info_compare(lVar2 + 8,lVar3 + 8);
    if (iVar1 == 0) {
      uVar4 = FUN_1424a3f70(param_1 + 0x10,param_2 + 0x10);
      return uVar4;
    }
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 142607c50 FUN_142607c50 body=43 status=ok
// SIG undefined FUN_142607c50(void)

char * FUN_142607c50(longlong param_1,char *param_2,int param_3)

{
  strncpy(param_2,*(char **)(param_1 + 0x38),(longlong)param_3);
  param_2[(longlong)param_3 - 1] = '\0';
  return param_2;
}



// FUNCTION 142607c80 FUN_142607c80 body=20 status=ok
// SIG undefined FUN_142607c80(void)

undefined2 *
FUN_142607c80(undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined1 param_4)

{
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 2) = param_4;
  return param_1;
}



// FUNCTION 142607ca0 FUN_142607ca0 body=42 status=ok
// SIG undefined FUN_142607ca0(void)

void FUN_142607ca0(undefined4 *param_1,uint param_2)

{
  if (param_2 < 1000) {
    *(short *)param_1 = (short)param_2;
    *(undefined2 *)((longlong)param_1 + 2) = 0xffff;
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    return;
  }
  *param_1 = 0x10112;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



// FUNCTION 142607cd0 FUN_142607cd0 body=94 status=ok
// SIG undefined FUN_142607cd0(void)

void FUN_142607cd0(short *param_1,short *param_2,uint param_3)

{
  short sVar1;
  
  if ((char)param_1[4] != '\0') {
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 4);
    *(undefined8 *)param_2 = *(undefined8 *)param_1;
    return;
  }
  sVar1 = *param_1;
  if ((param_3 < 1000) && ((int)sVar1 <= (int)param_3)) {
    *(undefined1 *)(param_2 + 4) = 0;
    *param_2 = sVar1;
    param_2[1] = (short)param_3;
    *(undefined1 *)(param_2 + 2) = 0;
    return;
  }
  if (param_3 != 0xffffffff) {
    param_2[0] = 0x112;
    param_2[1] = 1;
    *(undefined1 *)(param_2 + 4) = 1;
    return;
  }
  *(undefined1 *)(param_2 + 4) = 0;
  *param_2 = sVar1;
  param_2[1] = -1;
  *(undefined1 *)(param_2 + 2) = 0;
  return;
}



// FUNCTION 142607d30 FUN_142607d30 body=121 status=ok
// SIG undefined FUN_142607d30(void)

void FUN_142607d30(short *param_1,undefined8 param_2,undefined4 *param_3)

{
  short sVar1;
  int iVar2;
  
  if ((char)param_1[4] != '\0') {
    *param_3 = 1;
    return;
  }
  sVar1 = param_1[1];
  if (sVar1 != -1) {
    if ((char)param_1[2] != '\0') {
      iVar2 = FUN_1425380b0(param_2);
      if (sVar1 < iVar2) {
        *param_3 = 1;
      }
    }
    FUN_142537fc0(param_2,(int)*param_1);
    FUN_142537fe0(param_2,(int)param_1[1]);
    return;
  }
  FUN_142537fc0(param_2,(int)*param_1);
  return;
}



// FUNCTION 142607db0 FUN_142607db0 body=33 status=ok
// SIG undefined FUN_142607db0(void)

undefined4 FUN_142607db0(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 in_EAX;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  uVar1 = *param_1;
  auVar3._0_2_ = -(ushort)((short)*param_2 == (short)uVar1);
  auVar3._2_2_ = -(ushort)((short)((uint)*param_2 >> 0x10) == (short)(uVar1 >> 0x10));
  auVar3._4_2_ = 0xffff;
  auVar3._6_2_ = 0xffff;
  auVar3._8_2_ = 0xffff;
  auVar3._10_2_ = 0xffff;
  auVar3._12_2_ = 0xffff;
  auVar3._14_2_ = 0xffff;
  auVar3 = pshuflw(ZEXT416(uVar1),auVar3,0x50);
  auVar4._0_4_ = auVar3._0_4_;
  auVar4._4_4_ = auVar4._0_4_;
  auVar4._8_4_ = auVar3._4_4_;
  auVar4._12_4_ = auVar3._4_4_;
  iVar2 = movmskpd(in_EAX,auVar4);
  return CONCAT31((int3)((uint)iVar2 >> 8),iVar2 == 3);
}



// FUNCTION 142607de0 FUN_142607de0 body=75 status=ok
// SIG undefined FUN_142607de0(void)

undefined8 FUN_142607de0(void)

{
  if (DAT_14c7fc3b0[1] != 0) {
    FUN_1424b70c0();
  }
  FUN_142502220(*DAT_14c7fc3b0);
  if (DAT_14c7fc3b0 != (undefined8 *)0x0) {
    FUN_1401773f0();
  }
  DAT_14c7fc3b0 = (undefined8 *)0x0;
  return 1;
}



// FUNCTION 142607e30 FUN_142607e30 body=297 status=ok
// SIG undefined FUN_142607e30(void)

void FUN_142607e30(int *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined **local_a0;
  undefined **local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  
  if (*param_1 < 1) {
    DAT_14c7fc3b0 = (undefined8 *)thunk_FUN_1424da030(0x18);
    if (DAT_14c7fc3b0 != (undefined8 *)0x0) {
      *DAT_14c7fc3b0 = 0;
      DAT_14c7fc3b0[1] = 0;
      *(undefined4 *)(DAT_14c7fc3b0 + 2) = 0;
    }
    uVar1 = FUN_142501e10(FUN_1425031c0,FUN_142503270,0,param_1);
    *DAT_14c7fc3b0 = uVar1;
    lVar2 = FUN_1424edad0(0,"dayPeriods",param_1);
    local_a0 = icu_64::DayPeriodRulesCountSink::vftable;
    FUN_1424ec6e0(lVar2,"rules",&local_a0,param_1);
    local_98 = icu_64::DayPeriodRulesDataSink::vftable;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_30 = 0;
    FUN_1424ec6e0(lVar2,&DAT_149e02088,&local_98,param_1);
    FUN_14251f960(0x17,FUN_142607de0);
    thunk_FUN_1424b70d0(&local_98);
    thunk_FUN_1424b70d0(&local_a0);
    if (lVar2 != 0) {
      FUN_1424ea9f0(lVar2);
    }
  }
  return;
}



// FUNCTION 142607f60 FUN_142607f60 body=359 status=ok
// SIG undefined FUN_142607f60(void)

void FUN_142607f60(undefined8 param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  char *_Str;
  size_t sVar3;
  undefined1 auStack_178 [32];
  char local_158 [160];
  char local_b8 [160];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (*param_2 < 1) {
    if ((DAT_14c7fc3b8 == 2) || (cVar1 = FUN_142501800(&DAT_14c7fc3b8), cVar1 == '\0')) {
      if (0 < DAT_14c7fc3bc) {
        *param_2 = DAT_14c7fc3bc;
        goto LAB_142608093;
      }
    }
    else {
      FUN_142607e30(param_2);
      DAT_14c7fc3bc = *param_2;
      FUN_1425019c0(&DAT_14c7fc3b8);
    }
    if (*param_2 < 1) {
      _Str = (char *)FUN_1424a5500(param_1);
      sVar3 = strlen(_Str);
      if (sVar3 < 0x9d) {
        strcpy(local_b8,_Str);
        if (local_b8[0] == '\0') {
          builtin_strncpy(local_b8,"root",5);
        }
        do {
          iVar2 = FUN_142502860(*DAT_14c7fc3b0,local_b8);
          if ((iVar2 != 0) || (FUN_1424e8b00(local_b8,local_158,0x9d,param_2), local_158[0] == '\0')
             ) break;
          strcpy(local_b8,local_158);
        } while (local_b8[0] != '\0');
      }
      else {
        *param_2 = 0xf;
      }
    }
  }
LAB_142608093:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_178);
}



// FUNCTION 1426080e0 FUN_1426080e0 body=128 status=ok
// SIG undefined FUN_1426080e0(void)

double FUN_1426080e0(undefined8 param_1,undefined4 param_2,int *param_3)

{
  double dVar1;
  int iVar2;
  int iVar3;
  
  dVar1 = -1.0;
  if (*param_3 < 1) {
    iVar2 = FUN_142608160();
    iVar3 = FUN_142608410(param_1,param_2,param_3);
    dVar1 = -1.0;
    if (((*param_3 < 1) && (dVar1 = (double)(iVar3 + iVar2) * 0.5, iVar3 < iVar2)) &&
       (dVar1 = dVar1 + 12.0, 24.0 <= dVar1)) {
      dVar1 = dVar1 + -24.0;
    }
  }
  return dVar1;
}



// FUNCTION 142608160 FUN_142608160 body=685 status=ok
// SIG undefined FUN_142608160(void)

uint FUN_142608160(longlong param_1,int param_2,int *param_3)

{
  uint uVar1;
  
  uVar1 = 0xffffffff;
  if (*param_3 < 1) {
    if (param_2 == 0) {
      return 0;
    }
    if (param_2 == 1) {
      return 0xc;
    }
    if ((*(int *)(param_1 + 4) == param_2) && (*(int *)(param_1 + 0x60) == param_2)) {
      uVar1 = 0x17;
      if (((*(int *)(param_1 + 0x5c) == param_2) &&
          (((((uVar1 = 0x16, *(int *)(param_1 + 0x58) == param_2 &&
              (uVar1 = 0x15, *(int *)(param_1 + 0x54) == param_2)) &&
             ((uVar1 = 0x14, *(int *)(param_1 + 0x50) == param_2 &&
              (((((uVar1 = 0x13, *(int *)(param_1 + 0x4c) == param_2 &&
                  (uVar1 = 0x12, *(int *)(param_1 + 0x48) == param_2)) &&
                 (uVar1 = 0x11, *(int *)(param_1 + 0x44) == param_2)) &&
                ((uVar1 = 0x10, *(int *)(param_1 + 0x40) == param_2 &&
                 (uVar1 = 0xf, *(int *)(param_1 + 0x3c) == param_2)))) &&
               (uVar1 = 0xe, *(int *)(param_1 + 0x38) == param_2)))))) &&
            ((uVar1 = 0xd, *(int *)(param_1 + 0x34) == param_2 &&
             (uVar1 = 0xc, *(int *)(param_1 + 0x30) == param_2)))) &&
           (uVar1 = 0xb, *(int *)(param_1 + 0x2c) == param_2)))) &&
         (((((uVar1 = 10, *(int *)(param_1 + 0x28) == param_2 &&
             (uVar1 = 9, *(int *)(param_1 + 0x24) == param_2)) &&
            (uVar1 = 8, *(int *)(param_1 + 0x20) == param_2)) &&
           (((uVar1 = 7, *(int *)(param_1 + 0x1c) == param_2 &&
             (uVar1 = 6, *(int *)(param_1 + 0x18) == param_2)) &&
            ((uVar1 = 5, *(int *)(param_1 + 0x14) == param_2 &&
             ((uVar1 = 4, *(int *)(param_1 + 0x10) == param_2 &&
              (uVar1 = 3, *(int *)(param_1 + 0xc) == param_2)))))))) &&
          (uVar1 = 2, *(int *)(param_1 + 8) == param_2)))) {
LAB_142608400:
        *param_3 = 1;
        return 0xffffffff;
      }
    }
    else {
      uVar1 = 0;
      if (((((*(int *)(param_1 + 4) != param_2) &&
            ((((uVar1 = 1, *(int *)(param_1 + 8) != param_2 &&
               (uVar1 = 2, *(int *)(param_1 + 0xc) != param_2)) &&
              (uVar1 = 3, *(int *)(param_1 + 0x10) != param_2)) &&
             ((uVar1 = 4, *(int *)(param_1 + 0x14) != param_2 &&
              (uVar1 = 5, *(int *)(param_1 + 0x18) != param_2)))))) &&
           (uVar1 = 6, *(int *)(param_1 + 0x1c) != param_2)) &&
          (((uVar1 = 7, *(int *)(param_1 + 0x20) != param_2 &&
            (uVar1 = 8, *(int *)(param_1 + 0x24) != param_2)) &&
           ((uVar1 = 9, *(int *)(param_1 + 0x28) != param_2 &&
            (((uVar1 = 10, *(int *)(param_1 + 0x2c) != param_2 &&
              (uVar1 = 0xb, *(int *)(param_1 + 0x30) != param_2)) &&
             (uVar1 = 0xc, *(int *)(param_1 + 0x34) != param_2)))))))) &&
         ((((uVar1 = 0xd, *(int *)(param_1 + 0x38) != param_2 &&
            (uVar1 = 0xe, *(int *)(param_1 + 0x3c) != param_2)) &&
           ((uVar1 = 0xf, *(int *)(param_1 + 0x40) != param_2 &&
            (((uVar1 = 0x10, *(int *)(param_1 + 0x44) != param_2 &&
              (uVar1 = 0x11, *(int *)(param_1 + 0x48) != param_2)) &&
             ((uVar1 = 0x12, *(int *)(param_1 + 0x4c) != param_2 &&
              (((uVar1 = 0x13, *(int *)(param_1 + 0x50) != param_2 &&
                (uVar1 = 0x14, *(int *)(param_1 + 0x54) != param_2)) &&
               (uVar1 = 0x15, *(int *)(param_1 + 0x58) != param_2)))))))))) &&
          ((uVar1 = *(int *)(param_1 + 0x5c) == param_2 ^ 0x17, *(int *)(param_1 + 0x5c) != param_2
           && (*(int *)(param_1 + 0x60) != param_2)))))) goto LAB_142608400;
    }
  }
  return uVar1;
}



// FUNCTION 142608410 FUN_142608410 body=687 status=ok
// SIG undefined FUN_142608410(void)

int FUN_142608410(longlong param_1,int param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = -1;
  if (*param_3 < 1) {
    if (param_2 == 0) {
      return 0;
    }
    if (param_2 == 1) {
      return 0xc;
    }
    if ((*(int *)(param_1 + 4) == param_2) && (*(int *)(param_1 + 0x60) == param_2)) {
      iVar1 = 1;
      if (((*(int *)(param_1 + 8) == param_2) &&
          (((((iVar1 = 2, *(int *)(param_1 + 0xc) == param_2 &&
              (iVar1 = 3, *(int *)(param_1 + 0x10) == param_2)) &&
             ((iVar1 = 4, *(int *)(param_1 + 0x14) == param_2 &&
              (((((iVar1 = 5, *(int *)(param_1 + 0x18) == param_2 &&
                  (iVar1 = 6, *(int *)(param_1 + 0x1c) == param_2)) &&
                 (iVar1 = 7, *(int *)(param_1 + 0x20) == param_2)) &&
                ((iVar1 = 8, *(int *)(param_1 + 0x24) == param_2 &&
                 (iVar1 = 9, *(int *)(param_1 + 0x28) == param_2)))) &&
               (iVar1 = 10, *(int *)(param_1 + 0x2c) == param_2)))))) &&
            ((iVar1 = 0xb, *(int *)(param_1 + 0x30) == param_2 &&
             (iVar1 = 0xc, *(int *)(param_1 + 0x34) == param_2)))) &&
           (iVar1 = 0xd, *(int *)(param_1 + 0x38) == param_2)))) &&
         (((((iVar1 = 0xe, *(int *)(param_1 + 0x3c) == param_2 &&
             (iVar1 = 0xf, *(int *)(param_1 + 0x40) == param_2)) &&
            (iVar1 = 0x10, *(int *)(param_1 + 0x44) == param_2)) &&
           (((iVar1 = 0x11, *(int *)(param_1 + 0x48) == param_2 &&
             (iVar1 = 0x12, *(int *)(param_1 + 0x4c) == param_2)) &&
            ((iVar1 = 0x13, *(int *)(param_1 + 0x50) == param_2 &&
             ((iVar1 = 0x14, *(int *)(param_1 + 0x54) == param_2 &&
              (iVar1 = 0x15, *(int *)(param_1 + 0x58) == param_2)))))))) &&
          (iVar1 = 0x16, *(int *)(param_1 + 0x5c) == param_2)))) {
LAB_1426086b2:
        *param_3 = 1;
        return -1;
      }
    }
    else {
      iVar1 = 0x18;
      if (((((*(int *)(param_1 + 0x60) != param_2) &&
            ((((iVar1 = 0x17, *(int *)(param_1 + 0x5c) != param_2 &&
               (iVar1 = 0x16, *(int *)(param_1 + 0x58) != param_2)) &&
              (iVar1 = 0x15, *(int *)(param_1 + 0x54) != param_2)) &&
             ((iVar1 = 0x14, *(int *)(param_1 + 0x50) != param_2 &&
              (iVar1 = 0x13, *(int *)(param_1 + 0x4c) != param_2)))))) &&
           (iVar1 = 0x12, *(int *)(param_1 + 0x48) != param_2)) &&
          (((iVar1 = 0x11, *(int *)(param_1 + 0x44) != param_2 &&
            (iVar1 = 0x10, *(int *)(param_1 + 0x40) != param_2)) &&
           ((iVar1 = 0xf, *(int *)(param_1 + 0x3c) != param_2 &&
            (((iVar1 = 0xe, *(int *)(param_1 + 0x38) != param_2 &&
              (iVar1 = 0xd, *(int *)(param_1 + 0x34) != param_2)) &&
             (iVar1 = 0xc, *(int *)(param_1 + 0x30) != param_2)))))))) &&
         ((((iVar1 = 0xb, *(int *)(param_1 + 0x2c) != param_2 &&
            (iVar1 = 10, *(int *)(param_1 + 0x28) != param_2)) &&
           ((iVar1 = 9, *(int *)(param_1 + 0x24) != param_2 &&
            (((iVar1 = 8, *(int *)(param_1 + 0x20) != param_2 &&
              (iVar1 = 7, *(int *)(param_1 + 0x1c) != param_2)) &&
             ((iVar1 = 6, *(int *)(param_1 + 0x18) != param_2 &&
              (((iVar1 = 5, *(int *)(param_1 + 0x14) != param_2 &&
                (iVar1 = 4, *(int *)(param_1 + 0x10) != param_2)) &&
               (iVar1 = 3, *(int *)(param_1 + 0xc) != param_2)))))))))) &&
          ((iVar1 = (*(int *)(param_1 + 8) == param_2) + 1, *(int *)(param_1 + 8) != param_2 &&
           (*(int *)(param_1 + 4) != param_2)))))) goto LAB_1426086b2;
    }
  }
  return iVar1;
}



// FUNCTION 1426086c0 FUN_1426086c0 body=352 status=ok
// SIG undefined FUN_1426086c0(void)

uint FUN_1426086c0(char *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = strcmp(param_1,"midnight");
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = strcmp(param_1,"noon");
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      iVar1 = strcmp(param_1,"morning1");
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      else {
        iVar1 = strcmp(param_1,"afternoon1");
        if (iVar1 == 0) {
          uVar2 = 3;
        }
        else {
          iVar1 = strcmp(param_1,"evening1");
          if (iVar1 == 0) {
            uVar2 = 4;
          }
          else {
            iVar1 = strcmp(param_1,"night1");
            if (iVar1 == 0) {
              uVar2 = 5;
            }
            else {
              iVar1 = strcmp(param_1,"morning2");
              if (iVar1 == 0) {
                uVar2 = 6;
              }
              else {
                iVar1 = strcmp(param_1,"afternoon2");
                if (iVar1 == 0) {
                  uVar2 = 7;
                }
                else {
                  iVar1 = strcmp(param_1,"evening2");
                  if (iVar1 == 0) {
                    uVar2 = 8;
                  }
                  else {
                    iVar1 = strcmp(param_1,"night2");
                    if (iVar1 == 0) {
                      uVar2 = 9;
                    }
                    else {
                      iVar1 = strcmp(param_1,"am");
                      if (iVar1 == 0) {
                        uVar2 = 10;
                      }
                      else {
                        iVar1 = strcmp(param_1,"pm");
                        uVar2 = -(uint)(iVar1 != 0) | 0xb;
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
  return uVar2;
}



// FUNCTION 142608820 FUN_142608820 body=38 status=ok
// SIG undefined FUN_142608820(void)

undefined8 FUN_142608820(undefined8 param_1,int param_2)

{
  thunk_FUN_1424b70d0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142608850 FUN_142608850 body=284 status=ok
// SIG undefined FUN_142608850(void)

void FUN_142608850(undefined8 param_1,char *param_2,longlong *param_3,undefined8 param_4,
                  int *param_5)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  undefined1 auStack_98 [32];
  undefined1 local_78 [40];
  char *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = param_2;
  (**(code **)(*param_3 + 0x50))(param_3,local_78,param_5);
  if (*param_5 < 1) {
    iVar5 = 0;
    cVar2 = FUN_14258c4f0(local_78,0,&local_50,param_3);
    if (cVar2 != '\0') {
      do {
        pcVar1 = local_50;
        iVar3 = -1;
        if (*param_5 < 1) {
          iVar3 = strncmp(local_50,"set",3);
          if ((iVar3 == 0) && (bVar4 = pcVar1[3], bVar4 != 0)) {
            pbVar6 = (byte *)(pcVar1 + 4);
            iVar3 = 0;
            do {
              if (9 < (byte)(bVar4 - 0x30)) goto LAB_142608927;
              iVar3 = (uint)bVar4 + iVar3 * 10 + -0x30;
              bVar4 = *pbVar6;
              pbVar6 = pbVar6 + 1;
            } while (bVar4 != 0);
            if (iVar3 != 0) goto LAB_142608932;
          }
LAB_142608927:
          *param_5 = 3;
          iVar3 = -1;
        }
LAB_142608932:
        if (*(int *)(DAT_14c7fc3b0 + 0x10) < iVar3) {
          *(int *)(DAT_14c7fc3b0 + 0x10) = iVar3;
        }
        iVar5 = iVar5 + 1;
        cVar2 = FUN_14258c4f0(local_78,iVar5,&local_50,param_3);
      } while (cVar2 != '\0');
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
}



// FUNCTION 142608990 FUN_142608990 body=38 status=ok
// SIG undefined FUN_142608990(void)

undefined8 FUN_142608990(undefined8 param_1,int param_2)

{
  thunk_FUN_1424b70d0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1426089c0 FUN_1426089c0 body=604 status=ok
// SIG undefined FUN_1426089c0(void)

void FUN_1426089c0(undefined8 param_1,char *param_2,longlong *param_3,undefined8 param_4,
                  int *param_5)

{
  undefined1 auVar1 [16];
  char *_Str1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 local_108 [40];
  undefined1 local_e0 [64];
  undefined1 local_a0 [40];
  undefined8 local_78;
  undefined4 local_6c;
  char *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_78 = param_1;
  local_68 = param_2;
  (**(code **)(*param_3 + 0x50))(param_3,local_a0,param_5);
  if (*param_5 < 1) {
    iVar9 = 0;
    cVar2 = FUN_14258c4f0(local_a0,0,&local_68,param_3);
    if (cVar2 != '\0') {
      do {
        _Str1 = local_68;
        iVar3 = strcmp(local_68,"locales");
        if (iVar3 == 0) {
          (**(code **)(*param_3 + 0x50))(param_3,local_108,param_5);
          if (0 < *param_5) {
            return;
          }
          cVar2 = FUN_14258c4f0(local_108,0,&local_68,param_3);
          if (cVar2 != '\0') {
            iVar3 = 1;
            do {
              local_6c = 0;
              uVar5 = (**(code **)(*param_3 + 0x18))(param_3,&local_6c,param_5);
              FUN_1424a7060(local_e0,1,uVar5,local_6c);
              uVar4 = FUN_142608c90(local_e0,param_5);
              FUN_142502d50(*DAT_14c7fc3b0,local_68,uVar4,param_5);
              FUN_140859a90(local_e0);
              cVar2 = FUN_14258c4f0(local_108,iVar3,&local_68,param_3);
              iVar3 = iVar3 + 1;
            } while (cVar2 != '\0');
          }
        }
        else {
          iVar3 = strcmp(_Str1,"rules");
          if (iVar3 == 0) {
            uVar8 = (longlong)*(int *)(DAT_14c7fc3b0 + 2) + 1;
            auVar1._8_8_ = 0;
            auVar1._0_8_ = uVar8;
            uVar5 = SUB168(auVar1 * ZEXT816(100),0);
            if (SUB168(auVar1 * ZEXT816(100),8) != 0) {
              uVar5 = 0xffffffffffffffff;
            }
            puVar6 = (undefined2 *)thunk_FUN_1424da030(uVar5);
            if (puVar6 == (undefined2 *)0x0) {
              DAT_14c7fc3b0[1] = 0;
              *param_5 = 7;
              return;
            }
            if ((int)uVar8 != 0) {
              puVar7 = puVar6;
              do {
                *puVar7 = 0;
                *(undefined4 *)(puVar7 + 2) = 0xffffffff;
                *(undefined4 *)(puVar7 + 4) = 0xffffffff;
                *(undefined4 *)(puVar7 + 6) = 0xffffffff;
                *(undefined4 *)(puVar7 + 8) = 0xffffffff;
                *(undefined4 *)(puVar7 + 10) = 0xffffffff;
                *(undefined4 *)(puVar7 + 0xc) = 0xffffffff;
                *(undefined4 *)(puVar7 + 0xe) = 0xffffffff;
                *(undefined4 *)(puVar7 + 0x10) = 0xffffffff;
                *(undefined4 *)(puVar7 + 0x12) = 0xffffffff;
                *(undefined4 *)(puVar7 + 0x14) = 0xffffffff;
                *(undefined4 *)(puVar7 + 0x16) = 0xffffffff;
                *(undefined4 *)(puVar7 + 0x18) = 0xffffffff;
                *(undefined4 *)(puVar7 + 0x1a) = 0xffffffff;
                *(undefined4 *)(puVar7 + 0x1c) = 0xffffffff;
                *(undefined4 *)(puVar7 + 0x1e) = 0xffffffff;
                *(undefined4 *)(puVar7 + 0x20) = 0xffffffff;
                *(undefined4 *)(puVar7 + 0x22) = 0xffffffff;
                *(undefined4 *)(puVar7 + 0x24) = 0xffffffff;
                *(undefined4 *)(puVar7 + 0x26) = 0xffffffff;
                *(undefined4 *)(puVar7 + 0x28) = 0xffffffff;
                *(undefined4 *)(puVar7 + 0x2a) = 0xffffffff;
                *(undefined4 *)(puVar7 + 0x2c) = 0xffffffff;
                *(undefined4 *)(puVar7 + 0x2e) = 0xffffffff;
                *(undefined4 *)(puVar7 + 0x30) = 0xffffffff;
                puVar7 = puVar7 + 0x32;
              } while (puVar7 != puVar6 + uVar8 * 0x32);
            }
            DAT_14c7fc3b0[1] = puVar6;
            (**(code **)(*param_3 + 0x50))(param_3,local_e0,param_5);
            FUN_142608d90(local_78,local_e0,local_68,param_3,param_5);
            if (0 < *param_5) {
              return;
            }
          }
        }
        iVar9 = iVar9 + 1;
        cVar2 = FUN_14258c4f0(local_a0,iVar9,&local_68,param_3);
      } while (cVar2 != '\0');
    }
  }
  return;
}



// FUNCTION 142608c40 Unwind@142608c40 body=65 status=ok
// SIG undefined Unwind@142608c40(void)

void Unwind_142608c40(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x58);
  return;
}



// FUNCTION 142608c90 FUN_142608c90 body=196 status=ok
// SIG undefined FUN_142608c90(void)

int FUN_142608c90(undefined8 param_1,int *param_2)

{
  char *pcVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  char *local_68;
  undefined4 local_60;
  undefined2 local_5c;
  undefined4 local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_68 = (char *)((longlong)&local_5c + 1);
  local_60 = 0x28;
  local_5c = 0;
  local_30 = 0;
  FUN_142503780(&local_68,param_1,param_2);
  pcVar1 = local_68;
  iVar2 = -1;
  if (*param_2 < 1) {
    iVar2 = strncmp(local_68,"set",3);
    if ((iVar2 == 0) && (bVar4 = pcVar1[3], bVar4 != 0)) {
      pbVar3 = (byte *)(pcVar1 + 4);
      iVar2 = 0;
      do {
        if (9 < (byte)(bVar4 - 0x30)) goto LAB_142608cfb;
        iVar2 = (uint)bVar4 + iVar2 * 10 + -0x30;
        bVar4 = *pbVar3;
        pbVar3 = pbVar3 + 1;
      } while (bVar4 != 0);
      if (iVar2 != 0) goto LAB_142608d06;
    }
LAB_142608cfb:
    *param_2 = 3;
    iVar2 = -1;
  }
LAB_142608d06:
  if ((char)local_5c != '\0') {
    FUN_1424da110(pcVar1);
  }
  return iVar2;
}



// FUNCTION 142608d60 Unwind@142608d60 body=42 status=ok
// SIG undefined Unwind@142608d60(void)

void Unwind_142608d60(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2c) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x20));
  }
  return;
}



// FUNCTION 142608d90 FUN_142608d90 body=1457 status=ok
// SIG undefined FUN_142608d90(void)

void FUN_142608d90(longlong param_1,undefined8 param_2,char *param_3,longlong *param_4,int *param_5)

{
  undefined1 *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  longlong lVar7;
  char *pcVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  byte bVar15;
  longlong lVar16;
  ulonglong uVar17;
  byte *pbVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  char *local_138;
  int local_12c;
  int local_128;
  undefined4 local_124;
  undefined8 local_120;
  undefined8 *local_118;
  undefined4 local_110 [4];
  int local_100;
  undefined1 local_f8 [40];
  undefined1 local_d0 [40];
  undefined1 local_a8 [104];
  
  if ((*param_5 < 1) &&
     (local_138 = param_3, cVar9 = FUN_14258c4f0(param_2,0,&local_138), cVar9 != '\0')) {
    local_118 = (undefined8 *)(param_1 + 8);
    local_12c = 0;
    local_120 = param_2;
    do {
      pcVar8 = local_138;
      iVar10 = -1;
      if (*param_5 < 1) {
        iVar10 = strncmp(local_138,"set",3);
        if ((iVar10 == 0) && (bVar15 = pcVar8[3], bVar15 != 0)) {
          pbVar18 = (byte *)(pcVar8 + 4);
          iVar10 = 0;
          do {
            if (9 < (byte)(bVar15 - 0x30)) goto LAB_142608e62;
            iVar10 = (uint)bVar15 + iVar10 * 10 + -0x30;
            bVar15 = *pbVar18;
            pbVar18 = pbVar18 + 1;
          } while (bVar15 != 0);
          if (iVar10 != 0) goto LAB_142608e6d;
        }
LAB_142608e62:
        *param_5 = 3;
        iVar10 = -1;
      }
LAB_142608e6d:
      *(int *)(param_1 + 0x6c) = iVar10;
      (**(code **)(*param_4 + 0x50))(param_4,local_d0,param_5);
      if (0 < *param_5) {
        return;
      }
      cVar9 = FUN_14258c4f0(local_d0,0,&local_138,param_4);
      uVar14 = local_120;
      if (cVar9 != '\0') {
        local_128 = 0;
        do {
          iVar10 = FUN_1426086c0(local_138);
          *(int *)(param_1 + 0x70) = iVar10;
          if (iVar10 == -1) goto LAB_14260934f;
          (**(code **)(*param_4 + 0x50))(param_4,local_f8,param_5);
          if (0 < *param_5) {
            return;
          }
          cVar9 = FUN_14258c4f0(local_f8,0,&local_138,param_4);
          if (cVar9 != '\0') {
            iVar10 = 0;
            do {
              iVar11 = (**(code **)(*param_4 + 0x10))(param_4);
              pcVar8 = local_138;
              iVar12 = strcmp(local_138,"from");
              if (iVar11 == 0) {
                if (iVar12 == 0) {
                  uVar13 = 2;
                }
                else {
                  iVar11 = strcmp(pcVar8,"before");
                  if (iVar11 == 0) {
                    uVar13 = 0;
                  }
                  else {
                    iVar11 = strcmp(pcVar8,"after");
                    if (iVar11 == 0) {
                      uVar13 = 1;
                    }
                    else {
                      iVar11 = strcmp(pcVar8,"at");
                      uVar13 = -(uint)(iVar11 != 0) | 3;
                    }
                  }
                }
                local_110[0] = 0;
                uVar14 = (**(code **)(*param_4 + 0x18))(param_4,local_110,param_5);
                FUN_1424a7060(local_a8,1,uVar14,local_110[0]);
                FUN_142609360(param_1,uVar13,local_a8,param_5);
                FUN_140859a90(local_a8);
                if (0 < *param_5) {
                  return;
                }
              }
              else {
                if (iVar12 == 0) {
                  uVar13 = 2;
                }
                else {
                  iVar11 = strcmp(pcVar8,"before");
                  if (iVar11 == 0) {
                    uVar13 = 0;
                  }
                  else {
                    iVar11 = strcmp(pcVar8,"after");
                    if (iVar11 == 0) {
                      uVar13 = 1;
                    }
                    else {
                      iVar11 = strcmp(pcVar8,"at");
                      uVar13 = -(uint)(iVar11 != 0) | 3;
                    }
                  }
                }
                *(uint *)(param_1 + 0x74) = uVar13;
                (**(code **)(*param_4 + 0x48))(param_4,local_110,param_5);
                iVar11 = local_100;
                if (0 < *param_5) {
                  return;
                }
                if (0 < local_100) {
                  iVar12 = 0;
                  do {
                    FUN_14258c5f0(local_110,iVar12,param_4);
                    local_124 = 0;
                    uVar14 = (**(code **)(*param_4 + 0x18))(param_4,&local_124,param_5);
                    FUN_1424a7060(local_a8,1,uVar14,local_124);
                    FUN_142609360(param_1,*(undefined4 *)(param_1 + 0x74),local_a8,param_5);
                    FUN_140859a90(local_a8);
                    if (0 < *param_5) {
                      return;
                    }
                    iVar12 = iVar12 + 1;
                  } while (iVar11 != iVar12);
                }
              }
              iVar10 = iVar10 + 1;
              cVar9 = FUN_14258c4f0(local_f8,iVar10,&local_138,param_4);
            } while (cVar9 != '\0');
          }
          uVar14 = local_120;
          lVar7 = *(longlong *)(DAT_14c7fc3b0 + 8);
          lVar16 = (longlong)*(int *)(param_1 + 0x6c) * 100;
          puVar1 = (undefined1 *)(lVar7 + lVar16);
          uVar17 = 0;
          if ((*(byte *)(param_1 + 8) & 8) == 0) goto LAB_142609177;
          while( true ) {
            if ((uVar17 == 0) && (*(int *)(param_1 + 0x70) == 0)) {
              *puVar1 = 1;
              goto LAB_142609177;
            }
            if ((uVar17 != 0xc) || (*(int *)(param_1 + 0x70) != 1)) break;
            *(undefined1 *)(lVar7 + lVar16 + 1) = 1;
            bVar15 = *(byte *)(param_1 + 0x38);
            while( true ) {
              if ((bVar15 & 6) != 0) {
                uVar19 = uVar17 & 0xffffffff;
                do {
                  uVar13 = (int)uVar19 + 1;
                  if (uVar17 == uVar13) goto LAB_14260921a;
                  uVar19 = (ulonglong)uVar13;
                  if (uVar13 == 0x19) {
                    uVar19 = 0;
                  }
                } while ((*(byte *)(param_1 + 8 + (longlong)(int)(uint)uVar19 * 4) & 1) == 0);
                if (uVar17 != uVar19) {
                  uVar6 = *(undefined4 *)(param_1 + 0x70);
                  uVar20 = uVar17 & 0xffffffff;
                  do {
                    iVar10 = (int)uVar20;
                    if (iVar10 == 0x18) {
                      iVar10 = 0;
                    }
                    *(undefined4 *)(puVar1 + (longlong)iVar10 * 4 + 4) = uVar6;
                    uVar20 = (ulonglong)(iVar10 + 1U);
                  } while (iVar10 + 1U != (uint)uVar19);
                }
              }
              if (0x17 < uVar17) goto LAB_142609220;
              uVar17 = uVar17 + 1;
              if ((*(byte *)(param_1 + 8 + uVar17 * 4) & 8) != 0) break;
LAB_142609177:
              bVar15 = *(byte *)(param_1 + 8 + uVar17 * 4);
            }
          }
LAB_14260921a:
          *param_5 = 3;
LAB_142609220:
          local_118[10] = 0;
          local_118[0xb] = 0;
          local_118[8] = 0;
          local_118[9] = 0;
          local_118[6] = 0;
          local_118[7] = 0;
          local_118[4] = 0;
          local_118[5] = 0;
          local_118[2] = 0;
          local_118[3] = 0;
          *local_118 = 0;
          local_118[1] = 0;
          *(undefined4 *)(local_118 + 0xc) = 0;
          local_128 = local_128 + 1;
          cVar9 = FUN_14258c4f0(local_d0,local_128,&local_138,param_4);
        } while (cVar9 != '\0');
      }
      lVar7 = *(longlong *)(DAT_14c7fc3b0 + 8);
      lVar16 = (longlong)*(int *)(param_1 + 0x6c) * 100;
      piVar2 = (int *)(lVar7 + 4 + lVar16);
      piVar3 = (int *)(lVar7 + 0x14 + lVar16);
      piVar4 = (int *)(lVar7 + 0x24 + lVar16);
      piVar5 = (int *)(lVar7 + 0x34 + lVar16);
      auVar26._0_4_ = -(uint)(*piVar5 == -1);
      auVar26._4_4_ = -(uint)(piVar5[1] == -1);
      auVar26._8_4_ = -(uint)(piVar5[2] == -1);
      auVar26._12_4_ = -(uint)(piVar5[3] == -1);
      auVar25._0_4_ = -(uint)(*piVar4 == -1);
      auVar25._4_4_ = -(uint)(piVar4[1] == -1);
      auVar25._8_4_ = -(uint)(piVar4[2] == -1);
      auVar25._12_4_ = -(uint)(piVar4[3] == -1);
      auVar25 = packssdw(auVar25,auVar26);
      auVar23._0_4_ = -(uint)(*piVar3 == -1);
      auVar23._4_4_ = -(uint)(piVar3[1] == -1);
      auVar23._8_4_ = -(uint)(piVar3[2] == -1);
      auVar23._12_4_ = -(uint)(piVar3[3] == -1);
      auVar21._0_4_ = -(uint)(*piVar2 == -1);
      auVar21._4_4_ = -(uint)(piVar2[1] == -1);
      auVar21._8_4_ = -(uint)(piVar2[2] == -1);
      auVar21._12_4_ = -(uint)(piVar2[3] == -1);
      auVar21 = packssdw(auVar21,auVar23);
      auVar21 = packsswb(auVar21,auVar25);
      if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 || (SUB161(auVar21 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar21 >> 0x17,0) & 1) != 0) || (SUB161(auVar21 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar21 >> 0x27,0) & 1) != 0) || (SUB161(auVar21 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar21 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar21 >> 0x3f,0) & 1) != 0) || (SUB161(auVar21 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar21 >> 0x4f,0) & 1) != 0) || (SUB161(auVar21 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar21 >> 0x5f,0) & 1) != 0) || (SUB161(auVar21 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar21 >> 0x6f,0) & 1) != 0) || (SUB161(auVar21 >> 0x77,0) & 1) != 0) ||
          auVar21[0xf] < '\0') {
LAB_14260934f:
        *param_5 = 3;
        return;
      }
      piVar2 = (int *)(lVar7 + 0x54 + lVar16);
      piVar3 = (int *)(lVar7 + 0x44 + lVar16);
      auVar22._0_4_ = -(uint)(*piVar2 == -1);
      auVar22._4_4_ = -(uint)(piVar2[1] == -1);
      auVar22._8_4_ = -(uint)(piVar2[2] == -1);
      auVar22._12_4_ = -(uint)(piVar2[3] == -1);
      auVar24._0_4_ = -(uint)(*piVar3 == -1);
      auVar24._4_4_ = -(uint)(piVar3[1] == -1);
      auVar24._8_4_ = -(uint)(piVar3[2] == -1);
      auVar24._12_4_ = -(uint)(piVar3[3] == -1);
      auVar21 = packssdw(auVar24,auVar22);
      auVar21 = packsswb(auVar21,auVar21);
      if ((((((((SUB161(auVar21 >> 7,0) & 1) != 0 || (SUB161(auVar21 >> 0xf,0) & 1) != 0) ||
              (SUB161(auVar21 >> 0x17,0) & 1) != 0) || (SUB161(auVar21 >> 0x1f,0) & 1) != 0) ||
            (SUB161(auVar21 >> 0x27,0) & 1) != 0) || (SUB161(auVar21 >> 0x2f,0) & 1) != 0) ||
          (SUB161(auVar21 >> 0x37,0) & 1) != 0) || (SUB161(auVar21 >> 0x3f,0) & 1) != 0)
      goto LAB_14260934f;
      local_12c = local_12c + 1;
      cVar9 = FUN_14258c4f0(uVar14,local_12c,&local_138,param_4);
    } while (cVar9 != '\0');
  }
  return;
}



// FUNCTION 142609360 FUN_142609360 body=207 status=ok
// SIG undefined FUN_142609360(void)

void FUN_142609360(longlong param_1,int param_2,longlong param_3,int *param_4)

{
  uint *puVar1;
  short sVar2;
  uint uVar3;
  ushort *puVar4;
  int iVar5;
  
  if (0 < *param_4) {
    return;
  }
  if (param_2 != -1) {
    sVar2 = *(short *)(param_3 + 8);
    if (sVar2 < 0) {
      uVar3 = *(uint *)(param_3 + 0xc);
    }
    else {
      uVar3 = (int)sVar2 >> 5;
    }
    if ((2 < uVar3) && ((uVar3 & 0xfffffffe) == 4)) {
      if (((int)sVar2 & 2U) == 0) {
        puVar4 = *(ushort **)(param_3 + 0x18);
      }
      else {
        puVar4 = (ushort *)(param_3 + 10);
      }
      if (((((puVar4[(int)(uVar3 - 3)] == 0x3a) && (puVar4[uVar3 - 2] == 0x30)) &&
           (puVar4[uVar3 - 1] == 0x30)) && (0xfff5 < (ushort)(*puVar4 - 0x3a))) &&
         ((iVar5 = *puVar4 - 0x30, uVar3 - 3 != 2 ||
          ((0xfff5 < (ushort)(puVar4[1] - 0x3a) &&
           (iVar5 = (uint)puVar4[1] + iVar5 * 10 + -0x30, iVar5 < 0x19)))))) {
        puVar1 = (uint *)(param_1 + 8 + (longlong)iVar5 * 4);
        *puVar1 = *puVar1 | 1 << ((byte)param_2 & 0x1f);
        return;
      }
    }
  }
  *param_4 = 3;
  return;
}



// FUNCTION 142609430 FUN_142609430 body=18 status=ok
// SIG undefined FUN_142609430(void)

undefined1 * FUN_142609430(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x80) = 0x14;
  return param_1;
}



// FUNCTION 142609450 FUN_142609450 body=43 status=ok
// SIG undefined FUN_142609450(void)

void FUN_142609450(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_1424da110(*(undefined8 *)(param_1 + 8));
    FUN_1424da110(*(undefined8 *)(param_1 + 0x58));
    return;
  }
  return;
}



// FUNCTION 142609480 FUN_142609480 body=19 status=ok
// SIG undefined FUN_142609480(void)

void FUN_142609480(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x80) = 0x14;
  FUN_1426094a0();
  return;
}



// FUNCTION 1426094a0 FUN_1426094a0 body=359 status=ok
// SIG undefined FUN_1426094a0(void)

char * FUN_1426094a0(char *param_1,char *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  char local_c0 [8];
  undefined8 local_b8;
  undefined8 local_68;
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (param_1 == param_2) {
    return param_1;
  }
  if (*param_1 != '\0') {
    FUN_1424da110(*(undefined8 *)(param_1 + 8));
    FUN_1424da110(*(undefined8 *)(param_1 + 0x58));
    *param_1 = '\0';
  }
  uVar5 = 0x28;
  if (*param_2 != '\0') {
    uVar5 = *(uint *)(param_2 + 0x10);
  }
  if ((int)uVar5 < 0x29) {
    if (uVar5 == 0) goto LAB_14260959a;
  }
  else {
    lVar1 = FUN_1424da030((ulonglong)uVar5 * 2);
    lVar2 = FUN_1424da030((ulonglong)uVar5);
    if ((lVar1 == 0) || (lVar2 == 0)) {
      FUN_1424da110(lVar1);
      FUN_1424da110(lVar2);
      local_c0[0] = '\0';
      local_40 = 0x14;
      FUN_1426094a0(param_1,local_c0);
      if (local_c0[0] == '\0') {
        return param_1;
      }
      FUN_1424da110(local_b8);
      FUN_1424da110(local_68);
      return param_1;
    }
    *param_1 = '\x01';
    *(uint *)(param_1 + 0x10) = uVar5;
    *(longlong *)(param_1 + 8) = lVar1;
    *(uint *)(param_1 + 0x60) = uVar5;
    *(longlong *)(param_1 + 0x58) = lVar2;
  }
  if ((int)uVar5 < 0x29) {
    pcVar3 = param_1 + 8;
  }
  else {
    pcVar3 = *(char **)(param_1 + 8);
  }
  if (*param_2 == '\0') {
    pcVar4 = param_2 + 8;
  }
  else {
    pcVar4 = *(char **)(param_2 + 8);
  }
  memcpy(pcVar3,pcVar4,(longlong)(int)uVar5 * 2);
  if (*param_1 == '\0') {
    pcVar3 = param_1 + 0x58;
    if (*param_2 != '\0') goto LAB_14260958e;
LAB_14260957f:
    pcVar4 = param_2 + 0x58;
  }
  else {
    pcVar3 = *(char **)(param_1 + 0x58);
    if (*param_2 == '\0') goto LAB_14260957f;
LAB_14260958e:
    pcVar4 = *(char **)(param_2 + 0x58);
  }
  memcpy(pcVar3,pcVar4,(longlong)(int)uVar5);
LAB_14260959a:
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  return param_1;
}



// FUNCTION 142609610 Unwind@142609610 body=47 status=ok
// SIG undefined Unwind@142609610(void)

void Unwind_142609610(undefined8 param_1,longlong param_2)

{
  FUN_142609450(param_2 + 0x28);
  return;
}



// FUNCTION 142609640 FUN_142609640 body=7 status=ok
// SIG undefined FUN_142609640(void)

undefined4 FUN_142609640(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x84);
}



// FUNCTION 142609650 FUN_142609650 body=37 status=ok
// SIG undefined FUN_142609650(void)

void FUN_142609650(char *param_1)

{
  char *pcVar1;
  
  if (*param_1 == '\0') {
    pcVar1 = param_1 + 8;
  }
  else {
    pcVar1 = *(char **)(param_1 + 8);
  }
  FUN_142504760(pcVar1 + (longlong)*(int *)(param_1 + 0x80) * 2,*(undefined4 *)(param_1 + 0x84));
  return;
}



// FUNCTION 142609680 FUN_142609680 body=217 status=ok
// SIG undefined FUN_142609680(void)

uint FUN_142609680(char *param_1)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  
  iVar1 = *(int *)(param_1 + 0x84);
  lVar8 = (longlong)iVar1;
  if (lVar8 == 0) {
    return 0xffffffff;
  }
  if (*param_1 == '\0') {
    pcVar6 = param_1 + 8;
  }
  else {
    pcVar6 = *(char **)(param_1 + 8);
  }
  iVar2 = *(int *)(param_1 + 0x80);
  uVar10 = lVar8 - 1;
  uVar3 = *(ushort *)(pcVar6 + lVar8 * 2 + (longlong)iVar2 * 2 + -2);
  if ((1 < iVar1) && ((uVar3 & 0xfc00) == 0xdc00)) {
    uVar10 = uVar10 & 0xffffffff;
    if ((*(ushort *)(pcVar6 + (ulonglong)(iVar1 - 2U) * 2 + (longlong)iVar2 * 2) & 0xfc00) == 0xd800
       ) {
      uVar10 = (ulonglong)(iVar1 - 2U);
    }
    uVar3 = *(ushort *)(pcVar6 + uVar10 * 2 + (longlong)iVar2 * 2);
  }
  uVar5 = (uint)uVar3;
  uVar4 = (uint)uVar3;
  if ((uVar3 & 0xf800) == 0xd800) {
    iVar9 = (int)uVar10;
    if ((uVar3 & 0x400) == 0) {
      if (iVar9 + 1 == iVar1) {
        return uVar5;
      }
      uVar7 = (uint)*(ushort *)(pcVar6 + (longlong)(iVar9 + 1) * 2 + (longlong)iVar2 * 2);
      if ((*(ushort *)(pcVar6 + (longlong)(iVar9 + 1) * 2 + (longlong)iVar2 * 2) & 0xfc00) != 0xdc00
         ) {
        return uVar5;
      }
      uVar4 = (uint)uVar3 << 10;
    }
    else {
      if (iVar9 < 1) {
        return uVar5;
      }
      if ((*(ushort *)(pcVar6 + (ulonglong)(iVar9 - 1) * 2 + (longlong)iVar2 * 2) & 0xfc00) !=
          0xd800) {
        return uVar5;
      }
      uVar7 = (uint)*(ushort *)(pcVar6 + (ulonglong)(iVar9 - 1) * 2 + (longlong)iVar2 * 2) << 10;
    }
    uVar5 = uVar4 + uVar7 + 0xfca02400;
  }
  return uVar5;
}



// FUNCTION 142609760 FUN_142609760 body=137 status=ok
// SIG undefined FUN_142609760(void)

uint FUN_142609760(char *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  
  if (*param_1 == '\0') {
    pcVar5 = param_1 + 8;
  }
  else {
    pcVar5 = *(char **)(param_1 + 8);
  }
  iVar2 = *(int *)(param_1 + 0x80);
  uVar1 = *(ushort *)(pcVar5 + (longlong)param_2 * 2 + (longlong)iVar2 * 2);
  uVar4 = (uint)uVar1;
  uVar3 = (uint)uVar1;
  if ((uVar1 & 0xf800) == 0xd800) {
    if ((uVar1 & 0x400) == 0) {
      if (param_2 + 1 == *(int *)(param_1 + 0x84)) {
        return uVar4;
      }
      uVar6 = (uint)*(ushort *)(pcVar5 + (longlong)(param_2 + 1) * 2 + (longlong)iVar2 * 2);
      if ((*(ushort *)(pcVar5 + (longlong)(param_2 + 1) * 2 + (longlong)iVar2 * 2) & 0xfc00) !=
          0xdc00) {
        return uVar4;
      }
      uVar3 = (uint)uVar1 << 10;
    }
    else {
      if (param_2 < 1) {
        return uVar4;
      }
      if ((*(ushort *)(pcVar5 + (ulonglong)(param_2 - 1) * 2 + (longlong)iVar2 * 2) & 0xfc00) !=
          0xd800) {
        return uVar4;
      }
      uVar6 = (uint)*(ushort *)(pcVar5 + (ulonglong)(param_2 - 1) * 2 + (longlong)iVar2 * 2) << 10;
    }
    uVar4 = uVar3 + uVar6 + 0xfca02400;
  }
  return uVar4;
}



// FUNCTION 1426097f0 FUN_1426097f0 body=202 status=ok
// SIG undefined FUN_1426097f0(void)

uint FUN_1426097f0(char *param_1,int param_2)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (*param_1 == '\0') {
    pcVar5 = param_1 + 8;
  }
  else {
    pcVar5 = *(char **)(param_1 + 8);
  }
  iVar1 = *(int *)(param_1 + 0x80);
  uVar8 = (ulonglong)(param_2 - 1);
  uVar2 = *(ushort *)(pcVar5 + (longlong)param_2 * 2 + (longlong)iVar1 * 2 + -2);
  if ((1 < param_2) && ((uVar2 & 0xfc00) == 0xdc00)) {
    if ((*(ushort *)(pcVar5 + (ulonglong)(param_2 - 2U) * 2 + (longlong)iVar1 * 2) & 0xfc00) ==
        0xd800) {
      uVar8 = (ulonglong)(param_2 - 2U);
    }
    uVar2 = *(ushort *)(pcVar5 + uVar8 * 2 + (longlong)iVar1 * 2);
  }
  uVar4 = (uint)uVar2;
  uVar3 = (uint)uVar2;
  if ((uVar2 & 0xf800) == 0xd800) {
    iVar7 = (int)uVar8;
    if ((uVar2 & 0x400) == 0) {
      if (iVar7 + 1 == *(int *)(param_1 + 0x84)) {
        return uVar4;
      }
      uVar6 = (uint)*(ushort *)(pcVar5 + (longlong)(iVar7 + 1) * 2 + (longlong)iVar1 * 2);
      if ((*(ushort *)(pcVar5 + (longlong)(iVar7 + 1) * 2 + (longlong)iVar1 * 2) & 0xfc00) != 0xdc00
         ) {
        return uVar4;
      }
      uVar3 = (uint)uVar2 << 10;
    }
    else {
      if (iVar7 < 1) {
        return uVar4;
      }
      if ((*(ushort *)(pcVar5 + (ulonglong)(iVar7 - 1) * 2 + (longlong)iVar1 * 2) & 0xfc00) !=
          0xd800) {
        return uVar4;
      }
      uVar6 = (uint)*(ushort *)(pcVar5 + (ulonglong)(iVar7 - 1) * 2 + (longlong)iVar1 * 2) << 10;
    }
    uVar4 = uVar3 + uVar6 + 0xfca02400;
  }
  return uVar4;
}



// FUNCTION 1426098c0 FUN_1426098c0 body=314 status=ok
// SIG undefined FUN_1426098c0(void)

int FUN_1426098c0(char *param_1,undefined8 param_2,uint param_3,char param_4,int *param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  
  iVar5 = 2 - (uint)(param_3 < 0x10000);
  iVar3 = (int)param_2;
  if ((iVar3 == 0) && (iVar1 = *(int *)(param_1 + 0x80) - iVar5, -1 < iVar1)) {
    *(int *)(param_1 + 0x80) = iVar1;
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + iVar5;
    iVar3 = *param_5;
  }
  else {
    if (*(int *)(param_1 + 0x84) == iVar3) {
      iVar1 = 0x28;
      if (*param_1 != '\0') {
        iVar1 = *(int *)(param_1 + 0x10);
      }
      if (*(int *)(param_1 + 0x80) + iVar5 + iVar3 < iVar1) {
        *(int *)(param_1 + 0x84) = iVar5 + iVar3;
        iVar1 = *(int *)(param_1 + 0x80) + iVar3;
        iVar3 = *param_5;
        goto joined_r0x00014260993a;
      }
    }
    iVar1 = FUN_142609fb0(param_1,param_2,iVar5,param_5);
    iVar3 = *param_5;
  }
joined_r0x00014260993a:
  if (0 < iVar3) {
    return iVar5;
  }
  if (param_3 < 0x10000) {
    if (*param_1 == '\0') {
      pcVar6 = param_1 + 8;
    }
    else {
      pcVar6 = *(char **)(param_1 + 8);
    }
    *(ushort *)(pcVar6 + (longlong)iVar1 * 2) = (ushort)param_3;
    if (*param_1 == '\0') {
      pcVar6 = param_1 + 0x58;
      goto LAB_1426099e8;
    }
  }
  else {
    pcVar6 = param_1 + 8;
    pcVar4 = pcVar6;
    if (*param_1 != '\0') {
      pcVar4 = *(char **)(param_1 + 8);
    }
    lVar2 = (longlong)iVar1;
    *(short *)(pcVar4 + lVar2 * 2) = (short)(param_3 >> 10) + -0x2840;
    if (*param_1 != '\0') {
      pcVar6 = *(char **)(param_1 + 8);
    }
    *(ushort *)(pcVar6 + lVar2 * 2 + 2) = (ushort)param_3 & 0x3ff | 0xdc00;
    pcVar6 = param_1 + 0x58;
    pcVar4 = pcVar6;
    if (*param_1 != '\0') {
      pcVar4 = *(char **)(param_1 + 0x58);
    }
    pcVar4[lVar2 + 1] = param_4;
    if (*param_1 == '\0') goto LAB_1426099e8;
  }
  pcVar6 = *(char **)(param_1 + 0x58);
LAB_1426099e8:
  pcVar6[iVar1] = param_4;
  return iVar5;
}



// FUNCTION 142609a00 FUN_142609a00 body=102 status=ok
// SIG undefined FUN_142609a00(void)

void FUN_142609a00(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  short sVar1;
  int iVar2;
  undefined2 *puVar3;
  
  sVar1 = *(short *)(param_3 + 8);
  if (sVar1 < 0) {
    iVar2 = *(int *)(param_3 + 0xc);
  }
  else {
    iVar2 = (int)sVar1 >> 5;
  }
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      if (((int)sVar1 & 2U) == 0) {
        puVar3 = *(undefined2 **)(param_3 + 0x18);
      }
      else {
        puVar3 = (undefined2 *)(param_3 + 10);
      }
      FUN_1426098c0(param_1,param_2,*puVar3);
      return;
    }
    FUN_142609a70();
  }
  return;
}



// FUNCTION 142609a70 FUN_142609a70 body=309 status=ok
// SIG undefined FUN_142609a70(void)

ulonglong FUN_142609a70(char *param_1,undefined8 param_2,longlong param_3,int param_4,int param_5,
                       char param_6,int *param_7)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar7;
  ulonglong uVar8;
  undefined2 uVar9;
  char *pcVar10;
  longlong lVar11;
  ulonglong uVar6;
  
  uVar5 = param_5 - param_4;
  uVar6 = (ulonglong)uVar5;
  iVar4 = (int)param_2;
  if ((iVar4 == 0) && (iVar2 = *(int *)(param_1 + 0x80) - uVar5, -1 < iVar2)) {
    *(int *)(param_1 + 0x80) = iVar2;
    *(uint *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + uVar5;
    iVar4 = *param_7;
  }
  else {
    if (*(int *)(param_1 + 0x84) == iVar4) {
      iVar2 = 0x28;
      if (*param_1 != '\0') {
        iVar2 = *(int *)(param_1 + 0x10);
      }
      if ((int)(*(int *)(param_1 + 0x80) + uVar5 + iVar4) < iVar2) {
        *(uint *)(param_1 + 0x84) = uVar5 + iVar4;
        iVar2 = *(int *)(param_1 + 0x80) + iVar4;
        iVar4 = *param_7;
        goto joined_r0x000142609ad0;
      }
    }
    iVar2 = FUN_142609fb0(param_1,param_2,uVar6,param_7);
    iVar4 = *param_7;
  }
joined_r0x000142609ad0:
  if ((iVar4 < 1) && (0 < (int)uVar5)) {
    lVar7 = (longlong)param_4;
    lVar3 = (longlong)iVar2;
    uVar8 = uVar6;
    do {
      sVar1 = *(short *)(param_3 + 8);
      if (sVar1 < 0) {
        uVar5 = *(uint *)(param_3 + 0xc);
      }
      else {
        uVar5 = (int)sVar1 >> 5;
      }
      uVar9 = 0xffff;
      if ((uint)lVar7 < uVar5) {
        lVar11 = param_3 + 10;
        if (((int)sVar1 & 2U) == 0) {
          lVar11 = *(longlong *)(param_3 + 0x18);
        }
        uVar9 = *(undefined2 *)(lVar11 + lVar7 * 2);
      }
      pcVar10 = param_1 + 8;
      if (*param_1 != '\0') {
        pcVar10 = *(char **)(param_1 + 8);
      }
      *(undefined2 *)(pcVar10 + lVar3 * 2) = uVar9;
      pcVar10 = param_1 + 0x58;
      if (*param_1 != '\0') {
        pcVar10 = *(char **)(param_1 + 0x58);
      }
      pcVar10[lVar3] = param_6;
      lVar3 = lVar3 + 1;
      lVar7 = lVar7 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return uVar6;
}



// FUNCTION 142609bc0 FUN_142609bc0 body=480 status=ok
// SIG undefined FUN_142609bc0(void)

int FUN_142609bc0(char *param_1,int param_2,int param_3,longlong param_4,int param_5,int param_6,
                 char param_7,int *param_8)

{
  short sVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined2 uVar10;
  longlong lVar11;
  
  uVar6 = param_6 - param_5;
  iVar5 = (param_2 - param_3) + uVar6;
  if (iVar5 < 1) {
    uVar9 = (longlong)param_2 + (longlong)*(int *)(param_1 + 0x80);
    iVar4 = *(int *)(param_1 + 0x84);
    param_2 = param_2 - iVar5;
    if (iVar4 - param_2 != 0) {
      if (*param_1 == '\0') {
        pcVar3 = param_1 + 8;
      }
      else {
        pcVar3 = *(char **)(param_1 + 8);
      }
      memmove(pcVar3 + uVar9 * 2,pcVar3 + uVar9 * 2 + (ulonglong)(uint)-iVar5 * 2,
              (longlong)(iVar4 - param_2) * 2);
      iVar4 = *(int *)(param_1 + 0x84);
    }
    if (iVar4 - param_2 != 0) {
      if (*param_1 == '\0') {
        pcVar3 = param_1 + 0x58;
      }
      else {
        pcVar3 = *(char **)(param_1 + 0x58);
      }
      memmove(pcVar3 + uVar9,pcVar3 + uVar9 + (uint)-iVar5,(longlong)(iVar4 - param_2));
      param_2 = *(int *)(param_1 + 0x84);
    }
    *(int *)(param_1 + 0x84) = param_2 + iVar5;
  }
  else {
    if (param_2 == 0) {
      uVar2 = *(int *)(param_1 + 0x80) - iVar5;
      uVar9 = (ulonglong)uVar2;
      if (-1 < (int)uVar2) {
        *(uint *)(param_1 + 0x80) = uVar2;
        *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + iVar5;
        goto LAB_142609cfc;
      }
    }
    if (*(int *)(param_1 + 0x84) == param_2) {
      iVar4 = 0x28;
      if (*param_1 != '\0') {
        iVar4 = *(int *)(param_1 + 0x10);
      }
      if (*(int *)(param_1 + 0x80) + iVar5 + param_2 < iVar4) {
        *(int *)(param_1 + 0x84) = iVar5 + param_2;
        uVar9 = (ulonglong)(uint)(*(int *)(param_1 + 0x80) + param_2);
        goto LAB_142609cfc;
      }
    }
    uVar2 = FUN_142609fb0(param_1,param_2,iVar5,param_8);
    uVar9 = (ulonglong)uVar2;
  }
LAB_142609cfc:
  if ((*param_8 < 1) && (0 < (int)uVar6)) {
    lVar7 = (longlong)param_5;
    lVar8 = (longlong)(int)uVar9;
    uVar9 = (ulonglong)uVar6;
    do {
      sVar1 = *(short *)(param_4 + 8);
      if (sVar1 < 0) {
        uVar6 = *(uint *)(param_4 + 0xc);
      }
      else {
        uVar6 = (int)sVar1 >> 5;
      }
      uVar10 = 0xffff;
      if ((uint)lVar7 < uVar6) {
        lVar11 = param_4 + 10;
        if (((int)sVar1 & 2U) == 0) {
          lVar11 = *(longlong *)(param_4 + 0x18);
        }
        uVar10 = *(undefined2 *)(lVar11 + lVar7 * 2);
      }
      pcVar3 = param_1 + 8;
      if (*param_1 != '\0') {
        pcVar3 = *(char **)(param_1 + 8);
      }
      *(undefined2 *)(pcVar3 + lVar8 * 2) = uVar10;
      pcVar3 = param_1 + 0x58;
      if (*param_1 != '\0') {
        pcVar3 = *(char **)(param_1 + 0x58);
      }
      pcVar3[lVar8] = param_7;
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return iVar5;
}



// FUNCTION 142609db0 FUN_142609db0 body=298 status=ok
// SIG undefined FUN_142609db0(void)

ulonglong FUN_142609db0(char *param_1,undefined8 param_2,char *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char *pcVar7;
  char *pcVar8;
  
  if (param_1 == param_3) {
    *param_4 = 1;
  }
  else {
    uVar1 = *(uint *)(param_3 + 0x84);
    uVar5 = (ulonglong)uVar1;
    if (uVar5 != 0) {
      iVar4 = (int)param_2;
      if ((iVar4 == 0) && (iVar2 = *(int *)(param_1 + 0x80) - uVar1, -1 < iVar2)) {
        *(int *)(param_1 + 0x80) = iVar2;
        *(uint *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + uVar1;
        iVar4 = *param_4;
      }
      else {
        if (*(int *)(param_1 + 0x84) == iVar4) {
          iVar2 = 0x28;
          if (*param_1 != '\0') {
            iVar2 = *(int *)(param_1 + 0x10);
          }
          if ((int)(*(int *)(param_1 + 0x80) + uVar1 + iVar4) < iVar2) {
            *(uint *)(param_1 + 0x84) = uVar1 + iVar4;
            iVar2 = *(int *)(param_1 + 0x80) + iVar4;
            iVar4 = *param_4;
            goto joined_r0x000142609e0e;
          }
        }
        iVar2 = FUN_142609fb0(param_1,param_2,uVar5,param_4);
        iVar4 = *param_4;
      }
joined_r0x000142609e0e:
      if (0 < iVar4) {
        return uVar5;
      }
      if ((int)uVar1 < 1) {
        return uVar5;
      }
      lVar3 = (longlong)iVar2;
      uVar6 = 0;
      do {
        pcVar7 = param_3 + 8;
        if (*param_3 != '\0') {
          pcVar7 = *(char **)(param_3 + 8);
        }
        pcVar8 = param_1 + 8;
        if (*param_1 != '\0') {
          pcVar8 = *(char **)(param_1 + 8);
        }
        *(undefined2 *)(pcVar8 + lVar3 * 2) =
             *(undefined2 *)(pcVar7 + ((longlong)*(int *)(param_3 + 0x80) + uVar6) * 2);
        pcVar7 = param_3 + 0x58;
        if (*param_3 != '\0') {
          pcVar7 = *(char **)(param_3 + 0x58);
        }
        pcVar8 = param_1 + 0x58;
        if (*param_1 != '\0') {
          pcVar8 = *(char **)(param_1 + 0x58);
        }
        pcVar8[lVar3] = pcVar7[uVar6 + (longlong)*(int *)(param_3 + 0x80)];
        uVar6 = uVar6 + 1;
        lVar3 = lVar3 + 1;
      } while (uVar5 != uVar6);
      return uVar5;
    }
  }
  return 0;
}



// FUNCTION 142609ef0 FUN_142609ef0 body=177 status=ok
// SIG undefined FUN_142609ef0(void)

void FUN_142609ef0(char *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x80);
  iVar1 = *(int *)(param_1 + 0x84);
  if ((iVar1 == 0) && (0 < iVar2)) {
    iVar2 = iVar2 + -1;
    *(int *)(param_1 + 0x80) = iVar2;
    param_1[0x84] = '\x01';
    param_1[0x85] = '\0';
    param_1[0x86] = '\0';
    param_1[0x87] = '\0';
    iVar1 = *param_2;
  }
  else {
    iVar4 = 0x28;
    if (*param_1 != '\0') {
      iVar4 = *(int *)(param_1 + 0x10);
    }
    if (iVar2 + iVar1 + 1 < iVar4) {
      *(int *)(param_1 + 0x84) = iVar1 + 1;
      iVar2 = iVar2 + iVar1;
      iVar1 = *param_2;
    }
    else {
      iVar2 = FUN_142609fb0(param_1,iVar1,1,param_2);
      iVar1 = *param_2;
    }
  }
  if (iVar1 < 1) {
    if (*param_1 == '\0') {
      pcVar3 = param_1 + 8;
    }
    else {
      pcVar3 = *(char **)(param_1 + 8);
    }
    (pcVar3 + (longlong)iVar2 * 2)[0] = '\0';
    (pcVar3 + (longlong)iVar2 * 2)[1] = '\0';
    if (*param_1 == '\0') {
      pcVar3 = param_1 + 0x58;
    }
    else {
      pcVar3 = *(char **)(param_1 + 0x58);
    }
    pcVar3[iVar2] = '\r';
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
  }
  return;
}



// FUNCTION 142609fb0 FUN_142609fb0 body=696 status=ok
// SIG undefined FUN_142609fb0(void)

int FUN_142609fb0(char *param_1,int param_2,int param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  void *pvVar9;
  char *_Dst;
  int iVar10;
  char *pcVar11;
  size_t _Size;
  int iVar12;
  char *pcVar13;
  bool bVar14;
  
  bVar14 = *param_1 != '\0';
  iVar3 = 0x28;
  if (bVar14) {
    iVar3 = *(int *)(param_1 + 0x10);
  }
  lVar8 = (longlong)*(int *)(param_1 + 0x80);
  pcVar11 = param_1 + 8;
  if (bVar14) {
    pcVar11 = *(char **)(param_1 + 8);
  }
  pcVar13 = param_1 + 0x58;
  if (bVar14) {
    pcVar13 = *(char **)(param_1 + 0x58);
  }
  iVar6 = *(int *)(param_1 + 0x84);
  lVar7 = (longlong)param_3;
  uVar1 = iVar6 + lVar7;
  iVar10 = (int)uVar1;
  iVar12 = -((int)(((uint)(uVar1 >> 0x1f) & 1) + iVar10) >> 1);
  if (iVar3 < iVar10) {
    lVar4 = FUN_1424da030(uVar1 * 4);
    lVar5 = FUN_1424da030(uVar1 * 2);
    if ((lVar4 == 0) || (lVar5 == 0)) {
      FUN_1424da110();
      FUN_1424da110(lVar5);
      *param_4 = 7;
      return -1;
    }
    iVar12 = iVar12 + iVar10;
    _Size = (size_t)param_2;
    pvVar9 = (void *)(lVar4 + (longlong)iVar12 * 2);
    if (param_2 != 0) {
      memcpy(pvVar9,pcVar11 + lVar8 * 2,_Size * 2);
    }
    if (*(int *)(param_1 + 0x84) - param_2 != 0) {
      memcpy((void *)((longlong)pvVar9 + lVar7 * 2 + _Size * 2),pcVar11 + lVar8 * 2 + _Size * 2,
             (longlong)(*(int *)(param_1 + 0x84) - param_2) * 2);
    }
    pvVar9 = (void *)(lVar5 + iVar12);
    if (param_2 != 0) {
      memcpy(pvVar9,pcVar13 + lVar8,_Size);
    }
    if (*(int *)(param_1 + 0x84) - param_2 != 0) {
      memcpy((void *)((longlong)pvVar9 + lVar7 + _Size),pcVar13 + lVar8 + _Size,
             (longlong)(*(int *)(param_1 + 0x84) - param_2));
    }
    if (*param_1 != '\0') {
      FUN_1424da110(pcVar11);
      FUN_1424da110(pcVar13);
    }
    *param_1 = '\x01';
    *(longlong *)(param_1 + 8) = lVar4;
    uVar2 = (undefined4)(uVar1 * 2);
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    *(longlong *)(param_1 + 0x58) = lVar5;
    *(undefined4 *)(param_1 + 0x60) = uVar2;
  }
  else {
    iVar12 = iVar12 + iVar3 / 2;
    _Dst = pcVar11 + (longlong)iVar12 * 2;
    if (iVar6 == 0) {
      iVar3 = 0;
    }
    else {
      memmove(_Dst,pcVar11 + lVar8 * 2,(longlong)iVar6 * 2);
      iVar3 = *(int *)(param_1 + 0x84);
    }
    iVar6 = param_2;
    if (iVar3 - param_2 != 0) {
      memmove(_Dst + (longlong)param_2 * 2 + lVar7 * 2,_Dst + (longlong)param_2 * 2,
              (longlong)(iVar3 - param_2) * 2);
      iVar6 = *(int *)(param_1 + 0x84);
    }
    pcVar11 = pcVar13 + iVar12;
    if (iVar6 == 0) {
      iVar3 = -param_2;
    }
    else {
      memmove(pcVar11,pcVar13 + lVar8,(longlong)iVar6);
      iVar3 = *(int *)(param_1 + 0x84) - param_2;
    }
    if (iVar3 != 0) {
      memmove(pcVar11 + param_2 + lVar7,pcVar11 + param_2,(longlong)iVar3);
    }
  }
  *(int *)(param_1 + 0x80) = iVar12;
  *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + param_3;
  return param_2 + iVar12;
}



// FUNCTION 14260a270 FUN_14260a270 body=58 status=ok
// SIG undefined FUN_14260a270(void)

undefined8 FUN_14260a270(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  
  if (*param_1 == '\0') {
    pcVar1 = param_1 + 8;
  }
  else {
    pcVar1 = *(char **)(param_1 + 8);
  }
  FUN_1424a7000(param_2,pcVar1 + (longlong)*(int *)(param_1 + 0x80) * 2,
                *(undefined4 *)(param_1 + 0x84));
  return param_2;
}



// FUNCTION 14260a2b0 FUN_14260a2b0 body=60 status=ok
// SIG undefined FUN_14260a2b0(void)

undefined8 FUN_14260a2b0(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  
  if (*param_1 == '\0') {
    pcVar1 = param_1 + 8;
  }
  else {
    pcVar1 = *(char **)(param_1 + 8);
  }
  FUN_1424a7060(param_2,0,pcVar1 + (longlong)*(int *)(param_1 + 0x80) * 2,
                *(undefined4 *)(param_1 + 0x84));
  return param_2;
}



// FUNCTION 14260a2f0 FUN_14260a2f0 body=27 status=ok
// SIG undefined FUN_14260a2f0(void)

char * FUN_14260a2f0(char *param_1)

{
  char *pcVar1;
  
  if (*param_1 == '\0') {
    pcVar1 = param_1 + 8;
  }
  else {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1 + (longlong)*(int *)(param_1 + 0x80) * 2;
}



// FUNCTION 14260a310 FUN_14260a310 body=182 status=ok
// SIG undefined FUN_14260a310(void)

bool FUN_14260a310(char *param_1,char *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  longlong lVar6;
  char *pcVar7;
  char *pcVar8;
  longlong lVar9;
  ulonglong uVar10;
  bool bVar11;
  
  uVar3 = *(uint *)(param_1 + 0x84);
  if (uVar3 == *(uint *)(param_2 + 0x84)) {
    if ((int)uVar3 < 1) {
      return true;
    }
    pcVar4 = param_1 + 8;
    if (*param_1 != '\0') {
      pcVar4 = *(char **)(param_1 + 8);
    }
    pcVar7 = param_1 + 0x58;
    if (*param_1 != '\0') {
      pcVar7 = *(char **)(param_1 + 0x58);
    }
    lVar9 = (longlong)*(int *)(param_1 + 0x80);
    pcVar8 = param_2 + 8;
    if (*param_2 != '\0') {
      pcVar8 = *(char **)(param_2 + 8);
    }
    pcVar5 = param_2 + 0x58;
    if (*param_2 != '\0') {
      pcVar5 = *(char **)(param_2 + 0x58);
    }
    lVar6 = (longlong)*(int *)(param_2 + 0x80);
    if (*(short *)(pcVar4 + lVar9 * 2) == *(short *)(pcVar8 + lVar6 * 2)) {
      bVar11 = false;
      uVar10 = 1;
      while( true ) {
        if (pcVar7[uVar10 + lVar9 + -1] != pcVar5[uVar10 + lVar6 + -1]) {
          return bVar11;
        }
        bVar11 = uVar3 <= uVar10;
        if (uVar10 == uVar3) break;
        lVar1 = uVar10 * 2;
        lVar2 = uVar10 * 2;
        uVar10 = uVar10 + 1;
        if (*(short *)(pcVar4 + lVar1 + lVar9 * 2) != *(short *)(pcVar8 + lVar2 + lVar6 * 2)) {
          return bVar11;
        }
      }
      return bVar11;
    }
  }
  return false;
}



// FUNCTION 14260a3d0 FUN_14260a3d0 body=331 status=ok
// SIG undefined FUN_14260a3d0(void)

undefined4 FUN_14260a3d0(char *param_1,longlong param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  undefined1 local_60 [12];
  undefined4 local_54;
  int local_50;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  uVar1 = *(uint *)(param_2 + 8);
  if (uVar1 == 0xffffffff) {
    return 0;
  }
  if (0xc < uVar1) {
    *param_3 = 1;
    return 0;
  }
  FUN_142620e10(local_60);
  FUN_142620e30(local_60,2,uVar1);
  FUN_142620e80(local_60,2,uVar1,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10));
  uVar5 = FUN_14260a560(param_1,local_60,0);
  if ((char)uVar5 == '\0') {
    if ((uVar1 != 1) || (*(int *)(param_2 + 0x10) != 0)) goto LAB_14260a50f;
    iVar2 = *(int *)(param_1 + 0x80);
    local_50 = iVar2;
    if (0 < *(int *)(param_1 + 0x84)) {
      iVar9 = *(int *)(param_1 + 0x84) + iVar2;
      if (*param_1 == '\0') {
        pcVar7 = param_1 + 0x58;
      }
      else {
        pcVar7 = *(char **)(param_1 + 0x58);
      }
      lVar8 = (longlong)iVar2;
      iVar3 = iVar2 + 1;
      if (iVar2 + 1 < iVar9) {
        iVar3 = iVar9;
      }
      bVar10 = false;
      iVar6 = iVar2;
      do {
        if (((6 < (byte)pcVar7[lVar8]) ||
            (bVar4 = true, (0x45U >> ((byte)pcVar7[lVar8] & 0x1f) & 1) == 0)) &&
           (local_50 = iVar6, bVar4 = bVar10, bVar10)) break;
        bVar10 = bVar4;
        lVar8 = lVar8 + 1;
        iVar6 = iVar6 + 1;
        local_50 = iVar3;
      } while (lVar8 < iVar9);
    }
    *(int *)(param_2 + 0xc) = local_50 - iVar2;
    local_50 = local_50 - *(int *)(param_1 + 0x80);
  }
  else {
    *(undefined4 *)(param_2 + 0xc) = local_54;
  }
  *(int *)(param_2 + 0x10) = local_50;
LAB_14260a50f:
  FUN_142620e20(local_60);
  return uVar5;
}



// FUNCTION 14260a530 Unwind@14260a530 body=48 status=ok
// SIG undefined Unwind@14260a530(void)

void Unwind_14260a530(undefined8 param_1,longlong param_2)

{
  FUN_142620e20(param_2 + 0x28);
  return;
}



// FUNCTION 14260a560 FUN_14260a560 body=955 status=ok
// SIG undefined FUN_14260a560(void)

undefined8 FUN_14260a560(char *param_1,longlong param_2,byte param_3)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  byte bVar15;
  ulonglong uVar16;
  ulonglong local_58;
  char *local_50;
  
  if (param_3 == 0xd) {
    local_58 = 0;
  }
  else {
    local_58 = 2;
    if (0xf < param_3) {
      local_58 = (ulonglong)(param_3 >> 4);
    }
    local_58 = local_58 | (ulonglong)(param_3 & 0xf) << 0x20;
  }
  if (*(int *)(param_2 + 0x10) <= *(int *)(param_1 + 0x84)) {
    uVar4 = local_58 >> 0x20;
    iVar7 = *(int *)(param_1 + 0x80);
    iVar6 = *(int *)(param_1 + 0x84) + iVar7;
    iVar11 = *(int *)(param_2 + 0x10) + iVar7;
    pcVar1 = param_1 + 0x58;
    local_50 = param_1 + 8;
    uVar16 = 0xd;
    iVar13 = -1;
    do {
      bVar15 = 0xff;
      if (iVar11 < iVar6) {
        pcVar8 = pcVar1;
        if (*param_1 != '\0') {
          pcVar8 = *(char **)(param_1 + 0x58);
        }
        bVar15 = pcVar8[iVar11];
      }
      bVar9 = (byte)uVar16;
      iVar12 = iVar11;
      if (bVar9 == 0xd) {
        cVar3 = FUN_142620e40(param_2,2,0);
        uVar10 = (uint)bVar15;
        if (cVar3 != '\0') {
          iVar6 = *(int *)(param_1 + 0x80);
          if ((iVar6 < iVar11) && (iVar7 = iVar11 - iVar6, *(int *)(param_2 + 0x10) < iVar7)) {
            pcVar8 = pcVar1;
            if (*param_1 != '\0') {
              pcVar8 = *(char **)(param_1 + 0x58);
            }
            lVar14 = (longlong)iVar11;
            if ((((pcVar8[lVar14 + -1] == '\x06') || (pcVar8[lVar14 + -1] == '\0')) && (bVar15 != 0)
                ) && (uVar10 != 6)) {
              goto LAB_14260a8ba;
            }
          }
        }
        if ((param_3 != 0) && (cVar3 = FUN_142620e40(param_2,local_58,uVar4), cVar3 != '\0')) {
          iVar6 = *(int *)(param_1 + 0x80);
          if ((iVar6 < iVar11) &&
             (((iVar7 = iVar11 - iVar6, *(int *)(param_2 + 0x10) < iVar7 ||
               (*(int *)(param_2 + 0x14) != (int)local_58)) ||
              (*(int *)(param_2 + 8) != (int)(local_58 >> 0x20))))) {
            pcVar8 = pcVar1;
            if (*param_1 != '\0') {
              pcVar8 = *(char **)(param_1 + 0x58);
            }
            lVar14 = (longlong)iVar11;
            if ((((byte)pcVar8[lVar14 + -1] < 0x10) || ((pcVar8[lVar14 + -1] & 0xf0U) == 0x20)) &&
               ((0xf < bVar15 && ((bVar15 & 0xf0) != 0x20)))) {
              goto LAB_14260a8df;
            }
          }
        }
        if (bVar15 == 0) {
          uVar10 = 0xd;
        }
        uVar16 = 0xd;
        if (((byte)uVar10 != 0xd) && (uVar10 != 0xff)) {
          uVar2 = uVar10 >> 4;
          if ((byte)uVar10 < 0x10) {
            uVar2 = 2;
          }
          cVar3 = FUN_142620e40(param_2,uVar2,uVar10 & 0xf);
          if (cVar3 == '\0') {
            uVar10 = 0xd;
          }
          uVar16 = (ulonglong)uVar10;
          if (cVar3 != '\0') {
            iVar13 = iVar11 - *(int *)(param_1 + 0x80);
          }
        }
      }
      else if (bVar9 != bVar15) {
        iVar7 = iVar11 - iVar7;
        if (bVar9 == 6) {
          if (iVar7 <= iVar13) {
LAB_14260a625:
            uVar16 = 0xd;
            iVar12 = iVar11 + -1;
            iVar13 = -1;
            goto LAB_14260a62f;
          }
          uVar4 = 6;
        }
        else {
          uVar5 = FUN_1425eaea0(1);
          pcVar8 = local_50;
          if (*param_1 != '\0') {
            pcVar8 = *(char **)(param_1 + 8);
          }
          iVar7 = FUN_142515360(uVar5,pcVar8 + (longlong)*(int *)(param_1 + 0x80) * 2,iVar7,1);
          if (iVar7 <= iVar13) goto LAB_14260a625;
          uVar5 = FUN_1425eaea0(1);
          if (*param_1 != '\0') {
            local_50 = *(char **)(param_1 + 8);
          }
          iVar11 = FUN_142512b70(uVar5,local_50 +
                                       (longlong)iVar13 * 2 + (longlong)*(int *)(param_1 + 0x80) * 2
                                 ,*(int *)(param_1 + 0x84) - iVar13,1);
          iVar13 = iVar11 + iVar13;
          uVar4 = (ulonglong)((uint)uVar16 & 0xf);
          if (0xf < bVar9) {
            local_58 = uVar16 >> 4;
            goto LAB_14260a88f;
          }
        }
        local_58 = 2;
        goto LAB_14260a88f;
      }
LAB_14260a62f:
      iVar11 = iVar12 + 1;
      iVar7 = *(int *)(param_1 + 0x80);
      iVar6 = *(int *)(param_1 + 0x84) + iVar7;
    } while (iVar12 < iVar6);
  }
  return 0;
  while (lVar14 = lVar14 + -1, iVar13 = iVar6 + -1, iVar6 < lVar14) {
LAB_14260a8ba:
    iVar11 = iVar11 + -1;
    if ((pcVar8[lVar14 + -1] != '\x06') && (iVar13 = iVar11, pcVar8[lVar14 + -1] != '\0')) break;
  }
  iVar13 = iVar13 - iVar6;
  local_58 = 2;
  uVar4 = 0;
  goto LAB_14260a927;
  while (lVar14 = lVar14 + -1, iVar13 = iVar6 + -1, iVar6 < lVar14) {
LAB_14260a8df:
    iVar11 = iVar11 + -1;
    if ((0xf < (byte)pcVar8[lVar14 + -1]) &&
       (iVar13 = iVar11, (pcVar8[lVar14 + -1] & 0xf0U) != 0x20)) break;
  }
  iVar13 = iVar13 - iVar6;
LAB_14260a927:
  iVar13 = iVar13 + 1;
LAB_14260a88f:
  FUN_142620e80(param_2,local_58,uVar4,iVar13,iVar7);
  return 1;
}



// FUNCTION 14260a930 FUN_14260a930 body=107 status=ok
// SIG undefined FUN_14260a930(void)

void FUN_14260a930(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined1 local_48 [8];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_142620e10(local_48);
  while( true ) {
    cVar1 = FUN_14260a560(param_1,local_48,0);
    if (cVar1 == '\0') break;
    (**(code **)(*param_2 + 8))(param_2,local_40,local_3c,local_38);
  }
  FUN_142620e20(local_48);
  return;
}



// FUNCTION 14260a9a0 Unwind@14260a9a0 body=36 status=ok
// SIG undefined Unwind@14260a9a0(void)

void Unwind_14260a9a0(undefined8 param_1,longlong param_2)

{
  FUN_142620e20(param_2 + 0x20);
  return;
}



// FUNCTION 14260a9d0 FUN_14260a9d0 body=89 status=ok
// SIG undefined FUN_14260a9d0(void)

bool FUN_14260a9d0(char *param_1,char param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char *pcVar4;
  bool bVar5;
  
  uVar1 = *(uint *)(param_1 + 0x84);
  if ((int)uVar1 < 1) {
    return false;
  }
  if (*param_1 == '\0') {
    pcVar4 = param_1 + 0x58;
  }
  else {
    pcVar4 = *(char **)(param_1 + 0x58);
  }
  bVar5 = true;
  if (pcVar4[*(int *)(param_1 + 0x80)] != param_2) {
    uVar2 = 1;
    do {
      uVar3 = uVar2;
      if (uVar1 == uVar3) break;
      uVar2 = uVar3 + 1;
    } while (pcVar4[uVar3 + (longlong)*(int *)(param_1 + 0x80)] != param_2);
    bVar5 = uVar3 < uVar1;
  }
  return bVar5;
}



// FUNCTION 14260aa30 FUN_14260aa30 body=8 status=ok
// SIG undefined FUN_14260aa30(void)

undefined * FUN_14260aa30(void)

{
  return &DAT_14c7fc3c0;
}



// FUNCTION 14260aa40 FUN_14260aa40 body=8 status=ok
// SIG undefined FUN_14260aa40(void)

undefined * FUN_14260aa40(void)

{
  return &DAT_14c7fc3c1;
}



// FUNCTION 14260aa50 FUN_14260aa50 body=50 status=ok
// SIG undefined FUN_14260aa50(void)

void FUN_14260aa50(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::MessageFormat::PluralSelectorProvider::vftable;
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1425fb4f0(param_1);
  return;
}



// FUNCTION 14260aa90 FUN_14260aa90 body=297 status=ok
// SIG undefined FUN_14260aa90(void)

longlong * FUN_14260aa90(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_142537a10();
  *param_1 = (longlong)icu_64::MessageFormat::vftable;
  FUN_1424a3ce0(param_1 + 0x29,param_3);
  FUN_1426c3c60(param_1 + 0x45,param_4);
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *(undefined1 *)(param_1 + 0x59) = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = (longlong)icu_64::MessageFormat::PluralSelectorProvider::vftable;
  param_1[0x5f] = (longlong)param_1;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  param_1[0x62] = (longlong)icu_64::MessageFormat::PluralSelectorProvider::vftable;
  param_1[99] = (longlong)param_1;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 1;
  FUN_142537c10(param_1,param_1[0x2e],param_1[0x2e]);
  (**(code **)(*param_1 + 0x58))(param_1,param_2,param_4);
  return param_1;
}



// FUNCTION 14260abc0 Unwind@14260abc0 body=58 status=ok
// SIG undefined Unwind@14260abc0(void)

void Unwind_14260abc0(undefined8 param_1,longlong param_2)

{
  FUN_14260aa50(*(undefined8 *)(param_2 + 0x38));
  FUN_14260aa50(*(undefined8 *)(param_2 + 0x30));
  FUN_1426c4110(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14260ac00 Unwind@14260ac00 body=40 status=ok
// SIG undefined Unwind@14260ac00(void)

void Unwind_14260ac00(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 14260ac30 Unwind@14260ac30 body=40 status=ok
// SIG undefined Unwind@14260ac30(void)

void Unwind_14260ac30(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 14260ac60 FUN_14260ac60 body=369 status=ok
// SIG undefined FUN_14260ac60(void)

undefined8 * FUN_14260ac60(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  int local_2c;
  undefined8 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_142537a40();
  *param_1 = icu_64::MessageFormat::vftable;
  local_28 = param_1;
  FUN_1424a3ce0(param_1 + 0x29,param_2 + 0x148);
  puVar1 = local_28 + 0x45;
  FUN_1426c3db0(puVar1,param_2 + 0x228);
  local_28[0x55] = 0;
  *(undefined4 *)(local_28 + 0x56) = 0;
  local_28[0x57] = 0;
  local_28[0x58] = 0;
  *(undefined1 *)(local_28 + 0x59) = *(undefined1 *)(param_2 + 0x2c8);
  local_28[0x5a] = 0;
  local_28[0x5b] = 0;
  local_28[0x5c] = 0;
  local_28[0x5d] = 0;
  local_28[0x5e] = icu_64::MessageFormat::PluralSelectorProvider::vftable;
  local_28[0x5f] = local_28;
  local_28[0x60] = 0;
  *(undefined4 *)(local_28 + 0x61) = 0;
  local_28[0x62] = icu_64::MessageFormat::PluralSelectorProvider::vftable;
  local_28[99] = local_28;
  local_28[100] = 0;
  *(undefined4 *)(local_28 + 0x65) = 1;
  local_2c = 0;
  FUN_14260ae80(local_28,param_2,&local_2c);
  if (0 < local_2c) {
    FUN_1426c40e0(puVar1);
    puVar1 = local_28;
    FUN_142502220(local_28[0x5c]);
    puVar1[0x5c] = 0;
    FUN_142502220(puVar1[0x5d]);
    puVar1[0x5d] = 0;
    *(undefined4 *)(puVar1 + 0x58) = 0;
    *(undefined1 *)(puVar1 + 0x59) = 0;
  }
  return local_28;
}



// FUNCTION 14260ade0 Unwind@14260ade0 body=52 status=ok
// SIG undefined Unwind@14260ade0(void)

void Unwind_14260ade0(undefined8 param_1,longlong param_2)

{
  FUN_14260aa50(*(undefined8 *)(param_2 + 0x38));
  FUN_14260aa50(*(undefined8 *)(param_2 + 0x30));
  FUN_1426c4110(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 14260ae20 Unwind@14260ae20 body=34 status=ok
// SIG undefined Unwind@14260ae20(void)

void Unwind_14260ae20(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14260ae50 Unwind@14260ae50 body=34 status=ok
// SIG undefined Unwind@14260ae50(void)

void Unwind_14260ae50(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x50));
  return;
}



// FUNCTION 14260ae80 FUN_14260ae80 body=603 status=ok
// SIG undefined FUN_14260ae80(void)

void FUN_14260ae80(longlong param_1,longlong param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *_Dst;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *(uint *)(param_2 + 0x2c0);
  *(uint *)(param_1 + 0x2c0) = uVar2;
  if (0 < (int)uVar2) {
    if (0 < *param_3) goto LAB_14260b0ce;
    if (*(int *)(param_1 + 0x2c4) < (int)uVar2) {
      uVar1 = *(int *)(param_1 + 0x2c4) * 2;
      if ((int)uVar1 <= (int)uVar2) {
        uVar1 = uVar2;
      }
      uVar8 = 10;
      if (9 < uVar2) {
        uVar8 = (ulonglong)uVar1;
      }
      _Dst = (void *)FUN_1424da060(*(undefined8 *)(param_1 + 0x2b8),uVar8 * 4);
      if (_Dst == (void *)0x0) {
LAB_14260b0c8:
        *param_3 = 7;
        goto LAB_14260b0ce;
      }
      *(void **)(param_1 + 0x2b8) = _Dst;
      *(int *)(param_1 + 0x2c4) = (int)uVar8;
      uVar2 = *(uint *)(param_1 + 0x2c0);
    }
    else {
      _Dst = *(void **)(param_1 + 0x2b8);
    }
    memcpy(_Dst,*(void **)(param_2 + 0x2b8),(longlong)(int)uVar2 << 2);
  }
  if (*(longlong *)(param_1 + 0x2e0) != 0) {
    FUN_142502f40();
  }
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    FUN_142502f40();
  }
  lVar4 = *(longlong *)(param_2 + 0x2e0);
  if (lVar4 != 0) {
    if (*(longlong *)(param_1 + 0x2e0) == 0) {
      uVar6 = FUN_142501e10(&LAB_142503320,&LAB_142503330,&LAB_14260bb10,param_3);
      *(undefined8 *)(param_1 + 0x2e0) = uVar6;
      if (0 < *param_3) goto LAB_14260b0ce;
      FUN_142502350(uVar6,&LAB_1424b70f0);
      lVar4 = *(longlong *)(param_2 + 0x2e0);
    }
    iVar3 = FUN_142502610(lVar4);
    local_44 = 0xffffffff;
    if ((0 < iVar3) && (*param_3 < 1)) {
      iVar7 = 1;
      do {
        lVar4 = FUN_1425022e0(*(undefined8 *)(param_2 + 0x2e0),&local_44);
        lVar5 = (**(code **)(**(longlong **)(lVar4 + 8) + 0x18))();
        if (lVar5 == 0) goto LAB_14260b0c8;
        FUN_142502d30(*(undefined8 *)(param_1 + 0x2e0),*(undefined4 *)(lVar4 + 0x10),lVar5,param_3);
      } while ((iVar7 < iVar3) && (iVar7 = iVar7 + 1, *param_3 < 1));
    }
  }
  lVar4 = *(longlong *)(param_2 + 0x2e8);
  if (lVar4 != 0) {
    if (*(longlong *)(param_1 + 0x2e8) == 0) {
      uVar6 = FUN_142501e10(&LAB_142503320,&LAB_142503330,0,param_3);
      *(undefined8 *)(param_1 + 0x2e8) = uVar6;
      lVar4 = *(longlong *)(param_2 + 0x2e8);
    }
    iVar3 = FUN_142502610(lVar4);
    local_44 = 0xffffffff;
    if ((0 < iVar3) && (*param_3 < 1)) {
      iVar7 = 1;
      do {
        lVar4 = FUN_1425022e0(*(undefined8 *)(param_2 + 0x2e8),&local_44);
        FUN_142502d70(*(undefined8 *)(param_1 + 0x2e8),*(undefined4 *)(lVar4 + 0x10),
                      *(undefined4 *)(lVar4 + 8),param_3);
        if (iVar3 <= iVar7) break;
        iVar7 = iVar7 + 1;
      } while (*param_3 < 1);
    }
  }
LAB_14260b0ce:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
}



// FUNCTION 14260b0f0 FUN_14260b0f0 body=246 status=ok
// SIG undefined FUN_14260b0f0(void)

void FUN_14260b0f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::MessageFormat::vftable;
  FUN_142502220(param_1[0x5c]);
  FUN_142502220(param_1[0x5d]);
  FUN_1424da110(param_1[0x57]);
  FUN_1424da110(param_1[0x55]);
  puVar1 = (undefined8 *)param_1[0x5a];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0x5b];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[0x62] = icu_64::MessageFormat::PluralSelectorProvider::vftable;
  puVar1 = (undefined8 *)param_1[100];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1425fb4f0(param_1 + 0x62);
  param_1[0x5e] = icu_64::MessageFormat::PluralSelectorProvider::vftable;
  puVar1 = (undefined8 *)param_1[0x60];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1425fb4f0(param_1 + 0x5e);
  FUN_1426c4110(param_1 + 0x45);
  FUN_1414b3f60(param_1 + 0x29);
  thunk_FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 14260b1f0 FUN_14260b1f0 body=360 status=ok
// SIG undefined FUN_14260b1f0(void)

void FUN_14260b1f0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((param_1 != param_2) && (cVar1 = FUN_142537b80(), cVar1 != '\0')) &&
     (cVar1 = FUN_1426c4fc0(param_1 + 0x228,param_2 + 0x228), cVar1 != '\0')) {
    cVar1 = FUN_1424a3f70(param_1 + 0x148,param_2 + 0x148);
    if (cVar1 != '\0') {
      lVar4 = *(longlong *)(param_1 + 0x2e8);
      if ((lVar4 != 0) && (*(longlong *)(param_2 + 0x2e8) != 0)) {
        iVar2 = FUN_142502610(lVar4,lVar4 == 0);
        iVar3 = FUN_142502610(*(undefined8 *)(param_2 + 0x2e8));
        if (iVar2 == iVar3) {
          local_4c = 0xffffffff;
          local_50 = 0xffffffff;
          if (0 < iVar2) {
            while( true ) {
              lVar4 = FUN_1425022e0(*(undefined8 *)(param_1 + 0x2e8),&local_4c);
              lVar5 = FUN_1425022e0(*(undefined8 *)(param_2 + 0x2e8),&local_50);
              if (*(int *)(lVar4 + 0x10) != *(int *)(lVar5 + 0x10)) break;
              plVar6 = (longlong *)FUN_142502740(*(undefined8 *)(param_1 + 0x2e0));
              uVar7 = FUN_142502740(*(undefined8 *)(param_2 + 0x2e0),*(undefined4 *)(lVar5 + 0x10));
              cVar1 = (**(code **)(*plVar6 + 0x10))(plVar6,uVar7);
              if ((cVar1 == '\0') || (iVar2 = iVar2 + -1, iVar2 == 0)) break;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
}



// FUNCTION 14260b370 FUN_14260b370 body=64 status=ok
// SIG undefined FUN_14260b370(void)

longlong FUN_14260b370(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = thunk_FUN_1424da030(0x330);
  if (lVar1 != 0) {
    FUN_14260ac60(lVar1,param_1);
  }
  return lVar1;
}



// FUNCTION 14260b3b0 Unwind@14260b3b0 body=32 status=ok
// SIG undefined Unwind@14260b3b0(void)

void Unwind_14260b3b0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14260b3d0 FUN_14260b3d0 body=205 status=ok
// SIG undefined FUN_14260b3d0(void)

void FUN_14260b3d0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  char cVar2;
  
  cVar2 = FUN_1424a3f70(param_1 + 0x148);
  if (cVar2 == '\0') {
    puVar1 = *(undefined8 **)(param_1 + 0x2d0);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined8 *)(param_1 + 0x2d0) = 0;
    puVar1 = *(undefined8 **)(param_1 + 0x2d8);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined8 *)(param_1 + 0x2d8) = 0;
    FUN_1424a3d10(param_1 + 0x148,param_2);
    FUN_142537c10(param_1,*(undefined8 *)(param_1 + 0x170),*(undefined8 *)(param_1 + 0x170));
    puVar1 = *(undefined8 **)(param_1 + 0x300);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined8 *)(param_1 + 0x300) = 0;
    puVar1 = *(undefined8 **)(param_1 + 800);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined8 *)(param_1 + 800) = 0;
  }
  return;
}



// FUNCTION 14260b4a0 FUN_14260b4a0 body=8 status=ok
// SIG undefined FUN_14260b4a0(void)

longlong FUN_14260b4a0(longlong param_1)

{
  return param_1 + 0x148;
}



// FUNCTION 14260b4b0 FUN_14260b4b0 body=46 status=ok
// SIG undefined FUN_14260b4b0(void)

void FUN_14260b4b0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [72];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x50))(param_1,param_2,local_50,param_3);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_78);
}



// FUNCTION 14260b4f0 FUN_14260b4f0 body=129 status=ok
// SIG undefined FUN_14260b4f0(void)

void FUN_14260b4f0(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  if (*param_4 < 1) {
    FUN_1426c3d10(param_1 + 0x228);
    FUN_14260b580(param_1,param_4);
    if (0 < *param_4) {
      FUN_1426c40e0(param_1 + 0x228);
      FUN_142502220(*(undefined8 *)(param_1 + 0x2e0));
      *(undefined8 *)(param_1 + 0x2e0) = 0;
      FUN_142502220(*(undefined8 *)(param_1 + 0x2e8));
      *(undefined8 *)(param_1 + 0x2e8) = 0;
      *(undefined4 *)(param_1 + 0x2c0) = 0;
      *(undefined1 *)(param_1 + 0x2c8) = 0;
    }
  }
  return;
}



// FUNCTION 14260b580 FUN_14260b580 body=826 status=ok
// SIG undefined FUN_14260b580(void)

void FUN_14260b580(longlong param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 local_120 [72];
  undefined1 local_d8 [64];
  undefined **local_98;
  undefined2 local_90;
  longlong local_58;
  int local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (*param_2 < 1) {
    if (*(longlong *)(param_1 + 0x2e0) != 0) {
      FUN_142502f40();
    }
    if (*(longlong *)(param_1 + 0x2e8) != 0) {
      FUN_142502f40();
    }
    iVar1 = *(int *)(param_1 + 0x288);
    *(undefined4 *)(param_1 + 0x2c0) = 0;
    uVar11 = 0;
    if (4 < iVar1) {
      uVar11 = 0;
      lVar9 = 0x20;
      do {
        if (0 < *param_2) {
          return;
        }
        if ((*(int *)(*(longlong *)(param_1 + 0x280) + lVar9) == 7) &&
           (iVar10 = (int)*(short *)(*(longlong *)(param_1 + 0x280) + 10 + lVar9),
           (int)uVar11 <= iVar10)) {
          uVar11 = iVar10 + 1;
          *(uint *)(param_1 + 0x2c0) = uVar11;
        }
        lVar9 = lVar9 + 0x10;
      } while ((ulonglong)(iVar1 - 2U) << 4 != lVar9);
    }
    if (*param_2 < 1) {
      if (*(int *)(param_1 + 0x2c4) < (int)uVar11) {
        uVar2 = *(int *)(param_1 + 0x2c4) * 2;
        if ((int)uVar2 <= (int)uVar11) {
          uVar2 = uVar11;
        }
        uVar13 = 10;
        if (9 < (int)uVar11) {
          uVar13 = (ulonglong)uVar2;
        }
        lVar9 = FUN_1424da060(*(undefined8 *)(param_1 + 0x2b8),uVar13 * 4);
        if (lVar9 == 0) {
          *param_2 = 7;
          return;
        }
        *(longlong *)(param_1 + 0x2b8) = lVar9;
        *(int *)(param_1 + 0x2c4) = (int)uVar13;
        uVar11 = *(uint *)(param_1 + 0x2c0);
      }
      if (0 < (int)uVar11) {
        lVar9 = 0;
        do {
          *(undefined4 *)(*(longlong *)(param_1 + 0x2b8) + lVar9 * 4) = 6;
          lVar9 = lVar9 + 1;
        } while (lVar9 < *(int *)(param_1 + 0x2c0));
      }
      *(undefined1 *)(param_1 + 0x2c8) = 0;
      if ((3 < iVar1) && (iVar10 = *param_2, iVar10 < 1)) {
        lVar9 = param_1 + 0x238;
        iVar12 = 1;
        local_58 = lVar9;
        do {
          lVar8 = *(longlong *)(param_1 + 0x280);
          lVar7 = (longlong)iVar12;
          lVar5 = lVar7 * 0x10;
          if (*(int *)(lVar8 + lVar5) == 5) {
            lVar3 = (lVar7 + 1) * 0x10;
            iVar10 = -1;
            if (*(int *)(lVar8 + lVar3) == 7) {
              iVar10 = (int)*(short *)(lVar8 + 10 + lVar3);
            }
            switch(*(undefined2 *)(lVar8 + 10 + lVar5)) {
            case 1:
              FUN_1424a84d0(lVar9,local_d8,*(undefined4 *)(lVar5 + 0x24 + lVar8),
                            *(undefined2 *)(lVar5 + 0x28 + lVar8));
              local_98 = &PTR_FUN_149e18960;
              local_90 = 2;
              lVar9 = *(longlong *)(param_1 + 0x280);
              lVar8 = (lVar7 + 3) * 0x10;
              if (*(int *)(lVar9 + lVar8) == 10) {
                FUN_1424a84d0(local_58,local_120,*(undefined4 *)(lVar9 + 4 + lVar8),
                              *(undefined2 *)(lVar9 + 8 + lVar8));
                FUN_1424a7ca0(&local_98,local_120);
                FUN_140859a90(local_120);
                iVar6 = iVar12 + 4;
              }
              else {
                iVar6 = iVar12 + 3;
              }
              uVar4 = FUN_14260f0c0(param_1,local_d8,&local_98,&local_4c,local_120,param_2);
              FUN_14260b9d0(param_1,iVar12,uVar4,param_2);
              FUN_140859a90(&local_98);
              FUN_140859a90(local_d8);
              iVar12 = iVar6;
              lVar9 = local_58;
              break;
            case 2:
            case 3:
            case 5:
              local_4c = 1;
              break;
            default:
              *param_2 = 5;
            case 0:
            case 4:
              local_4c = 3;
            }
            if (iVar10 != -1) {
              iVar6 = *(int *)(*(longlong *)(param_1 + 0x2b8) + (longlong)iVar10 * 4);
              if ((iVar6 != 6) && (iVar6 != local_4c)) {
                *(undefined1 *)(param_1 + 0x2c8) = 1;
              }
              *(int *)(*(longlong *)(param_1 + 0x2b8) + (longlong)iVar10 * 4) = local_4c;
            }
            iVar10 = *param_2;
          }
          iVar12 = iVar12 + 1;
        } while ((iVar12 < (int)(iVar1 - 2U)) && (iVar10 < 1));
      }
    }
  }
  return;
}



// FUNCTION 14260b8c0 Unwind@14260b8c0 body=63 status=ok
// SIG undefined Unwind@14260b8c0(void)

void Unwind_14260b8c0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xc0);
  FUN_140859a90(param_2 + 0x80);
  return;
}



// FUNCTION 14260b900 FUN_14260b900 body=87 status=ok
// SIG undefined FUN_14260b900(void)

void FUN_14260b900(longlong *param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if ((int)param_1[0x46] != param_3) {
    FUN_1426c40e0(param_1 + 0x45);
    *(int *)(param_1 + 0x46) = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00014260b954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x50))(param_1,param_2,param_4,param_5);
  return;
}



// FUNCTION 14260b960 FUN_14260b960 body=111 status=ok
// SIG undefined FUN_14260b960(void)

undefined8 FUN_14260b960(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    iVar1 = FUN_142502610();
    if (iVar1 != 0) goto LAB_14260b9a8;
  }
  if (*(int *)(param_1 + 0x288) != 0) {
    if (*(short *)(param_1 + 0x240) < 0) {
      iVar1 = *(int *)(param_1 + 0x244);
    }
    else {
      iVar1 = (int)*(short *)(param_1 + 0x240) >> 5;
    }
    uVar2 = FUN_1424a9690(param_2,param_1 + 0x238,0,iVar1);
    return uVar2;
  }
LAB_14260b9a8:
  FUN_1424a7130(param_2);
  return param_2;
}



// FUNCTION 14260b9d0 FUN_14260b9d0 body=271 status=ok
// SIG undefined FUN_14260b9d0(void)

void FUN_14260b9d0(longlong param_1,undefined4 param_2,undefined8 *param_3,int *param_4)

{
  undefined8 uVar1;
  
  if (0 < *param_4) {
LAB_14260b9f0:
    if (param_3 == (undefined8 *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00014260ba0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_3)(param_3,1);
    return;
  }
  if (*(longlong *)(param_1 + 0x2e0) == 0) {
    uVar1 = FUN_142501e10(&LAB_142503320,&LAB_142503330,&LAB_14260bb10,param_4);
    *(undefined8 *)(param_1 + 0x2e0) = uVar1;
    if (0 < *param_4) goto LAB_14260b9f0;
    FUN_142502350(uVar1);
  }
  if (param_3 == (undefined8 *)0x0) {
    param_3 = (undefined8 *)thunk_FUN_1424da030(0x148);
    if (param_3 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)0x0;
    }
    else {
      memset(param_3,0,0x148);
      FUN_142537a10(param_3);
      *param_3 = icu_64::MessageFormat::DummyFormat::vftable;
    }
  }
  FUN_142502d30(*(undefined8 *)(param_1 + 0x2e0),param_2,param_3,param_4);
  return;
}



// FUNCTION 14260bae0 Unwind@14260bae0 body=40 status=ok
// SIG undefined Unwind@14260bae0(void)

void Unwind_14260bae0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 14260bb20 FUN_14260bb20 body=365 status=ok
// SIG undefined FUN_14260bb20(void)

void FUN_14260bb20(longlong param_1,longlong param_2,uint param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [44];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_2 != 0) && (-1 < (int)param_3)) {
    if (*(longlong *)(param_1 + 0x2e0) != 0) {
      FUN_142502f40();
    }
    if (*(longlong *)(param_1 + 0x2e8) != 0) {
      FUN_142502f40();
    }
    local_4c = 0;
    uVar6 = 0;
    if (param_3 != 0) {
      uVar5 = 0;
      while( true ) {
        if ((int)uVar5 == 0) {
          uVar5 = 0;
        }
        else {
          uVar4 = *(uint *)(*(longlong *)(param_1 + 0x280) + 0xc + uVar5 * 0x10);
          if ((int)uVar5 < (int)uVar4) {
            uVar5 = (ulonglong)uVar4;
          }
        }
        piVar2 = (int *)(*(longlong *)(param_1 + 0x280) + uVar5 * 0x10);
        do {
          piVar2 = piVar2 + 4;
          if (*piVar2 == 1) goto LAB_14260bc59;
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
        } while (*piVar2 != 5);
        if ((int)uVar4 < 0) break;
        FUN_14260b9d0(param_1,uVar5,*(undefined8 *)(param_2 + uVar6 * 8),&local_4c);
        lVar3 = *(longlong *)(param_1 + 0x2e8);
        if (lVar3 == 0) {
          lVar3 = FUN_142501e10(&LAB_142503320,&LAB_142503330,0,&local_4c);
          *(longlong *)(param_1 + 0x2e8) = lVar3;
        }
        FUN_142502d70(lVar3,uVar4,1,&local_4c);
        uVar6 = uVar6 + 1;
        if ((param_3 <= uVar6) || (0 < local_4c)) break;
      }
    }
LAB_14260bc59:
    if ((int)uVar6 < (int)param_3) {
      uVar6 = uVar6 & 0xffffffff;
      do {
        puVar1 = *(undefined8 **)(param_2 + uVar6 * 8);
        if (puVar1 != (undefined8 *)0x0) {
          (**(code **)*puVar1)(puVar1,1);
        }
        uVar6 = uVar6 + 1;
      } while (param_3 != uVar6);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
}



// FUNCTION 14260bcb0 FUN_14260bcb0 body=445 status=ok
// SIG undefined FUN_14260bcb0(void)

void FUN_14260bcb0(longlong param_1,longlong param_2,uint param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int *piVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [44];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_2 != 0) && (-1 < (int)param_3)) {
    if (*(longlong *)(param_1 + 0x2e0) != 0) {
      FUN_142502f40();
    }
    if (*(longlong *)(param_1 + 0x2e8) != 0) {
      FUN_142502f40();
    }
    local_4c = 0;
    if (param_3 != 0) {
      uVar4 = 0;
      uVar6 = 0;
      while( true ) {
        if ((int)uVar6 == 0) {
          uVar6 = 0;
        }
        else {
          uVar5 = *(uint *)(*(longlong *)(param_1 + 0x280) + 0xc + uVar6 * 0x10);
          if ((int)uVar6 < (int)uVar5) {
            uVar6 = (ulonglong)uVar5;
          }
        }
        piVar3 = (int *)(*(longlong *)(param_1 + 0x280) + uVar6 * 0x10);
        do {
          piVar3 = piVar3 + 4;
          if (*piVar3 == 1) goto LAB_14260be18;
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar5;
        } while (*piVar3 != 5);
        if ((int)uVar5 < 0) break;
        plVar1 = *(longlong **)(param_2 + uVar4 * 8);
        if (plVar1 == (longlong *)0x0) {
LAB_14260bdbb:
          lVar2 = 0;
        }
        else {
          lVar2 = (**(code **)(*plVar1 + 0x18))();
          if (lVar2 == 0) {
            local_4c = 7;
            goto LAB_14260bdbb;
          }
        }
        FUN_14260b9d0(param_1,uVar6,lVar2,&local_4c);
        lVar2 = *(longlong *)(param_1 + 0x2e8);
        if (lVar2 == 0) {
          lVar2 = FUN_142501e10(&LAB_142503320,&LAB_142503330,0,&local_4c);
          *(longlong *)(param_1 + 0x2e8) = lVar2;
        }
        FUN_142502d70(lVar2,uVar5,1,&local_4c);
        uVar4 = uVar4 + 1;
        if ((param_3 <= uVar4) || (0 < local_4c)) break;
      }
LAB_14260be18:
      if (0 < local_4c) {
        FUN_1426c40e0(param_1 + 0x228);
        FUN_142502220(*(undefined8 *)(param_1 + 0x2e0));
        *(undefined8 *)(param_1 + 0x2e0) = 0;
        FUN_142502220(*(undefined8 *)(param_1 + 0x2e8));
        *(undefined8 *)(param_1 + 0x2e8) = 0;
        *(undefined4 *)(param_1 + 0x2c0) = 0;
        *(undefined1 *)(param_1 + 0x2c8) = 0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
}



// FUNCTION 14260be90 FUN_14260be90 body=239 status=ok
// SIG undefined FUN_14260be90(void)

void FUN_14260be90(longlong param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  undefined4 local_14;
  
  if (param_2 < 0) {
LAB_14260bf61:
    if (param_3 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014260bf7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_3)(param_3,1);
      return;
    }
  }
  else {
    uVar4 = 0;
    iVar5 = 0;
    do {
      if ((int)uVar4 == 0) {
        uVar4 = 0;
      }
      else {
        uVar3 = *(uint *)(*(longlong *)(param_1 + 0x280) + 0xc + uVar4 * 0x10);
        if ((int)uVar4 < (int)uVar3) {
          uVar4 = (ulonglong)uVar3;
        }
      }
      piVar6 = (int *)(uVar4 * 0x10 + *(longlong *)(param_1 + 0x280) + 0x10);
      do {
        iVar1 = *piVar6;
        if (iVar1 == 1) goto LAB_14260bf61;
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
        piVar6 = piVar6 + 4;
      } while (iVar1 != 5);
      if ((int)uVar3 < 0) goto LAB_14260bf61;
      bVar7 = iVar5 != param_2;
      iVar5 = iVar5 + 1;
    } while (bVar7);
    local_14 = 0;
    FUN_14260b9d0(param_1,uVar4,param_3,&local_14);
    lVar2 = *(longlong *)(param_1 + 0x2e8);
    if (lVar2 == 0) {
      lVar2 = FUN_142501e10(&LAB_142503320,&LAB_142503330,0,&local_14);
      *(longlong *)(param_1 + 0x2e8) = lVar2;
    }
    FUN_142502d70(lVar2,uVar3,1,&local_14);
  }
  return;
}



// FUNCTION 14260bf90 FUN_14260bf90 body=591 status=ok
// SIG undefined FUN_14260bf90(void)

void FUN_14260bf90(longlong param_1,longlong param_2,longlong *param_3,int *param_4)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  
  plVar4 = param_3;
  if (*param_4 < 1) {
    iVar3 = FUN_1426c50f0(param_2);
    if (-2 < iVar3) {
      uVar13 = 0;
LAB_14260c014:
      while( true ) {
        lVar5 = *(longlong *)(param_1 + 0x280);
        if ((int)uVar13 == 0) {
          uVar13 = 0;
        }
        else {
          uVar12 = *(uint *)(lVar5 + 0xc + uVar13 * 0x10);
          if ((int)uVar13 < (int)uVar12) {
            uVar13 = (ulonglong)uVar12;
          }
        }
        uVar6 = uVar13 + 1;
        piVar8 = (int *)(uVar13 * 0x10 + lVar5);
        do {
          piVar8 = piVar8 + 4;
          if (*piVar8 == 1) goto joined_r0x00014260c1c0;
          uVar6 = uVar6 + 1;
          uVar12 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar12;
        } while (*piVar8 != 5);
        if (((int)uVar12 < 0) || (0 < *param_4)) break;
        lVar7 = (uVar6 & 0xffffffff) * 0x10;
        if (*(int *)(lVar5 + lVar7) != 8) goto LAB_14260c0a7;
        uVar1 = *(ushort *)(param_2 + 8);
        if ((uVar1 & 1) == 0) {
          if ((short)uVar1 < 0) {
            uVar10 = *(uint *)(param_2 + 0xc);
          }
          else {
            uVar10 = (int)(short)uVar1 >> 5;
          }
          uVar11 = 0;
          if (0 < (int)uVar10) {
            uVar11 = uVar10;
          }
          lVar9 = param_2 + 10;
          if ((uVar1 & 2) == 0) {
            lVar9 = *(longlong *)(param_2 + 0x18);
          }
          cVar2 = FUN_1424a7e30(param_1 + 0x238,*(undefined4 *)(lVar5 + 4 + lVar7),
                                *(undefined2 *)(lVar5 + 8 + lVar7),lVar9,
                                (int)uVar10 >> 0x1f & uVar10,uVar11);
        }
        else {
          cVar2 = (*(byte *)(param_1 + 0x240) & 1) == 0;
        }
        if (cVar2 == '\0') goto LAB_14260c11f;
      }
      goto joined_r0x00014260c1c0;
    }
    *param_4 = 1;
  }
joined_r0x00014260c1c0:
  if (plVar4 == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014260c000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*plVar4)(plVar4,1);
  return;
LAB_14260c0a7:
  if (iVar3 == *(short *)(lVar5 + 10 + lVar7)) {
LAB_14260c11f:
    if (((plVar4 == (longlong *)0x0) && (param_3 != (longlong *)0x0)) &&
       (plVar4 = (longlong *)(**(code **)(*param_3 + 0x18))(param_3), plVar4 == (longlong *)0x0)) {
      *param_4 = 7;
      return;
    }
    FUN_14260b9d0(param_1,uVar13,plVar4,param_4);
    lVar5 = *(longlong *)(param_1 + 0x2e8);
    if (lVar5 == 0) {
      lVar5 = FUN_142501e10(&LAB_142503320,&LAB_142503330,0,param_4);
      *(longlong *)(param_1 + 0x2e8) = lVar5;
    }
    FUN_142502d70(lVar5,uVar12,1,param_4);
    plVar4 = (longlong *)0x0;
  }
  goto LAB_14260c014;
}



// FUNCTION 14260c1e0 Unwind@14260c1e0 body=62 status=ok
// SIG undefined Unwind@14260c1e0(void)

void Unwind_14260c1e0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}



// FUNCTION 14260c220 FUN_14260c220 body=250 status=ok
// SIG undefined FUN_14260c220(void)

void FUN_14260c220(longlong param_1,int param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (-1 < param_2) {
    uVar4 = 0;
    iVar5 = 0;
    do {
      if ((int)uVar4 == 0) {
        uVar4 = 0;
      }
      else {
        uVar3 = *(uint *)(*(longlong *)(param_1 + 0x280) + 0xc + uVar4 * 0x10);
        if ((int)uVar4 < (int)uVar3) {
          uVar4 = (ulonglong)uVar3;
        }
      }
      piVar6 = (int *)(uVar4 * 0x10 + *(longlong *)(param_1 + 0x280) + 0x10);
      do {
        iVar1 = *piVar6;
        if (iVar1 == 1) goto LAB_14260c314;
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
        piVar6 = piVar6 + 4;
      } while (iVar1 != 5);
      if ((int)uVar3 < 0) goto LAB_14260c314;
      bVar7 = iVar5 != param_2;
      iVar5 = iVar5 + 1;
    } while (bVar7);
    lVar2 = (**(code **)(*param_3 + 0x18))(param_3);
    if (lVar2 != 0) {
      local_1c = 0;
      FUN_14260b9d0(param_1,uVar4,lVar2,&local_1c);
      lVar2 = *(longlong *)(param_1 + 0x2e8);
      if (lVar2 == 0) {
        lVar2 = FUN_142501e10(&LAB_142503320,&LAB_142503330,0,&local_1c);
        *(longlong *)(param_1 + 0x2e8) = lVar2;
      }
      FUN_142502d70(lVar2,uVar3,1,&local_1c);
    }
  }
LAB_14260c314:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 14260c330 FUN_14260c330 body=408 status=ok
// SIG undefined FUN_14260c330(void)

longlong FUN_14260c330(longlong param_1,longlong param_2,int *param_3)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  if ((*param_3 < 1) && (*(longlong *)(param_1 + 0x2e0) != 0)) {
    iVar3 = FUN_1426c50f0(param_2);
    if (iVar3 < -1) {
      *param_3 = 1;
    }
    else {
      uVar11 = 0;
      do {
        while( true ) {
          lVar4 = *(longlong *)(param_1 + 0x280);
          if ((int)uVar11 == 0) {
            uVar11 = 0;
          }
          else {
            uVar10 = *(uint *)(lVar4 + 0xc + uVar11 * 0x10);
            if ((int)uVar11 < (int)uVar10) {
              uVar11 = (ulonglong)uVar10;
            }
          }
          uVar5 = uVar11 + 1;
          piVar7 = (int *)(uVar11 * 0x10 + lVar4);
          do {
            piVar7 = piVar7 + 4;
            if (*piVar7 == 1) {
              return 0;
            }
            uVar5 = uVar5 + 1;
            uVar10 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar10;
          } while (*piVar7 != 5);
          if ((int)uVar10 < 0) {
            return 0;
          }
          lVar6 = (uVar5 & 0xffffffff) * 0x10;
          if (*(int *)(lVar4 + lVar6) != 8) break;
          uVar1 = *(ushort *)(param_2 + 8);
          if ((uVar1 & 1) == 0) {
            if ((short)uVar1 < 0) {
              uVar10 = *(uint *)(param_2 + 0xc);
            }
            else {
              uVar10 = (int)(short)uVar1 >> 5;
            }
            uVar9 = 0;
            if (0 < (int)uVar10) {
              uVar9 = uVar10;
            }
            lVar8 = param_2 + 10;
            if ((uVar1 & 2) == 0) {
              lVar8 = *(longlong *)(param_2 + 0x18);
            }
            cVar2 = FUN_1424a7e30(param_1 + 0x238,*(undefined4 *)(lVar4 + 4 + lVar6),
                                  *(undefined2 *)(lVar4 + 8 + lVar6),lVar8,
                                  (int)uVar10 >> 0x1f & uVar10,uVar9);
          }
          else {
            cVar2 = (*(byte *)(param_1 + 0x240) & 1) == 0;
          }
          if (cVar2 == '\0') goto LAB_14260c476;
        }
      } while (iVar3 != *(short *)(lVar4 + 10 + lVar6));
LAB_14260c476:
      if (((*(longlong *)(param_1 + 0x2e0) != 0) &&
          (lVar4 = FUN_142502740(*(longlong *)(param_1 + 0x2e0),uVar11), lVar4 != 0)) &&
         (lVar6 = __RTDynamicCast(lVar4,0,&icu_64::Format::RTTI_Type_Descriptor,
                                  &icu_64::MessageFormat::DummyFormat::RTTI_Type_Descriptor,0),
         lVar6 == 0)) {
        return lVar4;
      }
    }
  }
  return 0;
}



// FUNCTION 14260c4d0 FUN_14260c4d0 body=426 status=ok
// SIG undefined FUN_14260c4d0(void)

void FUN_14260c4d0(longlong param_1,longlong param_2,longlong *param_3,int *param_4)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  
  if (*param_4 < 1) {
    iVar3 = FUN_1426c50f0(param_2);
    iVar4 = 1;
    if (-2 < iVar3) {
      uVar13 = 0;
LAB_14260c527:
      do {
        lVar5 = *(longlong *)(param_1 + 0x280);
        if ((int)uVar13 == 0) {
          uVar13 = 0;
        }
        else {
          uVar12 = *(uint *)(lVar5 + 0xc + uVar13 * 0x10);
          if ((int)uVar13 < (int)uVar12) {
            uVar13 = (ulonglong)uVar12;
          }
        }
        uVar6 = uVar13 + 1;
        piVar8 = (int *)(uVar13 * 0x10 + lVar5);
        do {
          piVar8 = piVar8 + 4;
          if (*piVar8 == 1) {
            return;
          }
          uVar6 = uVar6 + 1;
          uVar12 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar12;
        } while (*piVar8 != 5);
        if ((int)uVar12 < 0) {
          return;
        }
        if (0 < *param_4) {
          return;
        }
        lVar7 = (uVar6 & 0xffffffff) * 0x10;
        if (*(int *)(lVar5 + lVar7) != 8) goto LAB_14260c5a3;
        uVar1 = *(ushort *)(param_2 + 8);
        if ((uVar1 & 1) == 0) {
          if ((short)uVar1 < 0) {
            uVar10 = *(uint *)(param_2 + 0xc);
          }
          else {
            uVar10 = (int)(short)uVar1 >> 5;
          }
          uVar11 = 0;
          if (0 < (int)uVar10) {
            uVar11 = uVar10;
          }
          lVar9 = param_2 + 10;
          if ((uVar1 & 2) == 0) {
            lVar9 = *(longlong *)(param_2 + 0x18);
          }
          cVar2 = FUN_1424a7e30(param_1 + 0x238,*(undefined4 *)(lVar5 + 4 + lVar7),
                                *(undefined2 *)(lVar5 + 8 + lVar7),lVar9,
                                (int)uVar10 >> 0x1f & uVar10,uVar11);
        }
        else {
          cVar2 = (*(byte *)(param_1 + 0x240) & 1) == 0;
        }
      } while (cVar2 != '\0');
      goto LAB_14260c60c;
    }
LAB_14260c506:
    *param_4 = iVar4;
  }
  return;
LAB_14260c5a3:
  if (iVar3 == *(short *)(lVar5 + 10 + lVar7)) {
LAB_14260c60c:
    lVar5 = (**(code **)(*param_3 + 0x18))(param_3);
    if (lVar5 == 0) {
      iVar4 = 7;
      goto LAB_14260c506;
    }
    FUN_14260b9d0(param_1,uVar13,lVar5,param_4);
    lVar5 = *(longlong *)(param_1 + 0x2e8);
    if (lVar5 == 0) {
      lVar5 = FUN_142501e10(&LAB_142503320,&LAB_142503330,0,param_4);
      *(longlong *)(param_1 + 0x2e8) = lVar5;
    }
    FUN_142502d70(lVar5,uVar12,1,param_4);
  }
  goto LAB_14260c527;
}



// FUNCTION 14260c680 FUN_14260c680 body=426 status=ok
// SIG undefined FUN_14260c680(void)

undefined8 FUN_14260c680(longlong param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int *piVar8;
  
  uVar7 = 0;
  do {
    uVar6 = 0;
LAB_14260c6c2:
    piVar8 = (int *)(uVar6 * 0x10 + *(longlong *)(param_1 + 0x280) + 0x10);
    do {
      iVar2 = *piVar8;
      if (iVar2 == 1) goto LAB_14260c6f1;
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      piVar8 = piVar8 + 4;
    } while (iVar2 != 5);
    if ((int)uVar5 < 0) {
LAB_14260c6f1:
      *param_2 = 0;
      if (*(longlong *)(param_1 + 0x2a8) == 0) {
        *(uint *)(param_1 + 0x2b0) = uVar7;
        lVar3 = FUN_1424da030((ulonglong)uVar7 << 3);
        if (lVar3 == 0) {
LAB_14260c815:
          *(undefined4 *)(param_1 + 0x2b0) = 0;
          return 0;
        }
        *(longlong *)(param_1 + 0x2a8) = lVar3;
      }
      else if (*(int *)(param_1 + 0x2b0) < (int)uVar7) {
        lVar3 = FUN_1424da060(*(longlong *)(param_1 + 0x2a8),(ulonglong)uVar7 << 3);
        if (lVar3 == 0) goto LAB_14260c815;
        *(longlong *)(param_1 + 0x2a8) = lVar3;
        *(uint *)(param_1 + 0x2b0) = uVar7;
      }
      uVar6 = 0;
      goto LAB_14260c760;
    }
    uVar7 = uVar7 + 1;
  } while (uVar5 == 0);
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x280) + 0xc + uVar6 * 0x10);
  if ((int)uVar5 < (int)uVar1) {
    uVar6 = (ulonglong)uVar1;
  }
  goto LAB_14260c6c2;
LAB_14260c760:
  if ((int)uVar6 == 0) {
    uVar6 = 0;
  }
  else {
    uVar7 = *(uint *)(*(longlong *)(param_1 + 0x280) + 0xc + uVar6 * 0x10);
    if ((int)uVar6 < (int)uVar7) {
      uVar6 = (ulonglong)uVar7;
    }
  }
  piVar8 = (int *)(*(longlong *)(param_1 + 0x280) + uVar6 * 0x10);
  do {
    piVar8 = piVar8 + 4;
    if (*piVar8 == 1) goto LAB_14260c80c;
    uVar7 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar7;
  } while (*piVar8 != 5);
  if ((int)uVar7 < 0) {
LAB_14260c80c:
    return *(undefined8 *)(param_1 + 0x2a8);
  }
  if (((*(longlong *)(param_1 + 0x2e0) == 0) ||
      (lVar3 = FUN_142502740(*(longlong *)(param_1 + 0x2e0),uVar6), lVar3 == 0)) ||
     (lVar4 = __RTDynamicCast(lVar3,0,&icu_64::Format::RTTI_Type_Descriptor,
                              &icu_64::MessageFormat::DummyFormat::RTTI_Type_Descriptor,0),
     lVar4 != 0)) {
    lVar3 = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x2a8);
  iVar2 = *param_2;
  *param_2 = iVar2 + 1;
  *(longlong *)(lVar4 + (longlong)iVar2 * 8) = lVar3;
  goto LAB_14260c760;
}



// FUNCTION 14260c830 FUN_14260c830 body=362 status=ok
// SIG undefined FUN_14260c830(void)

undefined8 * FUN_14260c830(longlong param_1,int *param_2)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if (*param_2 < 1) {
    lVar1 = thunk_FUN_1424da030(0x28);
    if (lVar1 != 0) {
      FUN_142515e50(lVar1,param_2);
    }
    if (*param_2 < 1) {
      FUN_142516bb0(lVar1,&LAB_1424b70f0);
      uVar7 = 0;
      while( true ) {
        if ((int)uVar7 == 0) {
          uVar7 = 0;
        }
        else {
          uVar6 = *(uint *)(*(longlong *)(param_1 + 0x280) + 0xc + uVar7 * 0x10);
          if ((int)uVar7 < (int)uVar6) {
            uVar7 = (ulonglong)uVar6;
          }
        }
        uVar8 = uVar7 + 1;
        piVar2 = (int *)(*(longlong *)(param_1 + 0x280) + uVar7 * 0x10);
        do {
          piVar2 = piVar2 + 4;
          if (*piVar2 == 1) goto LAB_14260c957;
          uVar8 = uVar8 + 1;
          uVar6 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
        } while (*piVar2 != 5);
        if ((int)uVar6 < 0) break;
        lVar3 = thunk_FUN_1424da030(0x40);
        if (lVar3 != 0) {
          lVar5 = (uVar8 & 0xffffffff) * 0x10;
          FUN_1424a84d0(param_1 + 0x238,lVar3,
                        *(undefined4 *)(*(longlong *)(param_1 + 0x280) + 4 + lVar5),
                        *(undefined2 *)(*(longlong *)(param_1 + 0x280) + 8 + lVar5));
        }
        FUN_1425163e0(lVar1,lVar3,param_2);
      }
LAB_14260c957:
      puVar4 = (undefined8 *)thunk_FUN_1424da030(0x88);
      if (puVar4 != (undefined8 *)0x0) {
        FUN_14250a770(puVar4);
        *puVar4 = icu_64::FormatNameEnumeration::vftable;
        *(undefined4 *)(puVar4 + 0xf) = 0;
        puVar4[0x10] = lVar1;
        return puVar4;
      }
    }
    else {
      *param_2 = 7;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14260c9a0 Unwind@14260c9a0 body=48 status=ok
// SIG undefined Unwind@14260c9a0(void)

void Unwind_14260c9a0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 14260c9d0 Unwind@14260c9d0 body=48 status=ok
// SIG undefined Unwind@14260c9d0(void)

void Unwind_14260c9d0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 14260ca00 Unwind@14260ca00 body=48 status=ok
// SIG undefined Unwind@14260ca00(void)

void Unwind_14260ca00(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14260ca30 FUN_14260ca30 body=187 status=ok
// SIG undefined FUN_14260ca30(void)

undefined8
FUN_14260ca30(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,int *param_5
             )

{
  int iVar1;
  undefined ***local_58;
  undefined4 local_50;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (*param_5 < 1) {
    iVar1 = FUN_14252d140(param_2);
    if (iVar1 == 4) {
      if (*param_5 < 1) {
        local_48 = icu_64::UnicodeStringAppendable::vftable;
        local_58 = &local_48;
        local_50 = 0;
        local_40 = param_3;
        FUN_14260cb20(param_1,0,0,*(undefined8 *)(param_2 + 8),0,*(undefined4 *)(param_2 + 0x10),
                      &local_58,param_4,param_5);
        thunk_FUN_1424b70d0(&local_48);
      }
    }
    else {
      *param_5 = 1;
    }
  }
  return param_3;
}



// FUNCTION 14260caf0 Unwind@14260caf0 body=44 status=ok
// SIG undefined Unwind@14260caf0(void)

void Unwind_14260caf0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x60);
  return;
}



// FUNCTION 14260cb20 FUN_14260cb20 body=3102 status=ok
// SIG undefined FUN_14260cb20(void)

void FUN_14260cb20(longlong param_1,int param_2,longlong param_3,longlong param_4,ulonglong param_5,
                  uint param_6,undefined8 *param_7,undefined8 param_8,int *param_9)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined ***pppuVar12;
  uint uVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  ulonglong in_stack_fffffffffffffb68;
  undefined8 in_stack_fffffffffffffb70;
  int *piVar20;
  undefined **local_468 [2];
  undefined1 local_458 [136];
  undefined1 local_3d0 [664];
  undefined1 local_138 [8];
  ushort local_130;
  undefined1 local_12e [2];
  uint local_12c;
  undefined1 *local_120;
  longlong local_f8;
  longlong local_f0;
  undefined **local_e8;
  ushort local_e0;
  undefined1 local_de [2];
  int local_dc;
  undefined1 *local_d0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  iVar6 = *param_9;
  if (iVar6 < 1) {
    local_a0 = param_8;
    local_78 = param_1 + 0x228;
    local_a8 = param_1 + 0x238;
    iVar16 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x280) + 8 + (longlong)param_2 * 0x10) +
             *(int *)(*(longlong *)(param_1 + 0x280) + 4 + (longlong)param_2 * 0x10);
    local_90 = param_3 + 0x10;
    local_98 = param_3 + 0xa2;
    local_88 = param_1 + 0x148;
    local_f8 = param_1 + 0x2f0;
    local_f0 = param_1 + 0x310;
    local_80 = param_3;
    local_70 = param_4;
    local_68 = param_1;
    while (iVar6 < 1) {
      iVar18 = param_2 + 1;
      lVar10 = *(longlong *)(local_68 + 0x280);
      lVar19 = (longlong)iVar18 * 0x10;
      iVar6 = *(int *)(lVar10 + lVar19);
      FUN_14260d900(param_7,local_a8,iVar16,*(int *)(lVar10 + 4 + lVar19) - iVar16);
      lVar11 = local_80;
      if (iVar6 == 1) {
        return;
      }
      if (iVar6 == 5) {
        lVar11 = *(longlong *)(local_68 + 0x280);
        iVar6 = *(int *)(lVar11 + 0xc + lVar19);
        if (iVar6 <= iVar18) {
          iVar6 = iVar18;
        }
        sVar3 = *(short *)(lVar10 + 10 + lVar19);
        if (1 < *(int *)(lVar10 + lVar19) - 5U) {
          sVar3 = 0;
        }
        lVar19 = ((longlong)param_2 + 2) * 0x10;
        FUN_1424a84d0(local_a8,local_138,*(undefined4 *)(lVar11 + 4 + lVar19),
                      *(undefined2 *)(lVar11 + 8 + lVar19));
        lVar10 = local_80;
        if (param_5 == 0) {
          sVar2 = *(short *)(lVar11 + 10 + lVar19);
          if ((sVar2 < 0) || ((int)param_6 <= (int)sVar2)) goto LAB_14260cf80;
          if (local_70 != 0) {
            uVar15 = (ulonglong)(uint)(int)sVar2;
LAB_14260cf10:
            lVar11 = uVar15 * 0x70 + local_70;
            if ((lVar10 != 0) && (*(int *)(lVar10 + 0x88) == iVar18)) {
              if ((*(double *)(lVar10 + 0x80) != 0.0) || (NAN(*(double *)(lVar10 + 0x80)))) {
                FUN_14260d9b0(param_7,*(undefined8 *)(lVar10 + 0x90),lVar11,param_9);
              }
              else {
                uVar1 = *(ushort *)(lVar10 + 0xa0);
                if (uVar1 < 0x20) {
                  FUN_14260d9b0(param_7,*(undefined8 *)(lVar10 + 0x90),local_90,param_9);
                }
                else if (*param_9 < 1) {
                  if ((uVar1 & 0x11) == 0) {
                    lVar11 = local_98;
                    if ((uVar1 & 2) == 0) {
                      lVar11 = *(longlong *)(lVar10 + 0xb0);
                    }
                  }
                  else {
                    lVar11 = 0;
                  }
                  iVar16 = (int)(short)uVar1 >> 5;
                  if ((short)uVar1 < 0) {
                    iVar16 = *(int *)(lVar10 + 0xa4);
                  }
                  (**(code **)(*(longlong *)*param_7 + 0x20))((longlong *)*param_7,lVar11,iVar16);
                  if (*(short *)(lVar10 + 0xa0) < 0) {
                    iVar16 = *(int *)(lVar10 + 0xa4);
                  }
                  else {
                    iVar16 = (int)*(short *)(lVar10 + 0xa0) >> 5;
                  }
                  *(int *)(param_7 + 1) = *(int *)(param_7 + 1) + iVar16;
                }
              }
              goto LAB_14260d143;
            }
            if ((*(longlong *)(local_68 + 0x2e0) == 0) ||
               (lVar10 = FUN_142502740(*(longlong *)(local_68 + 0x2e0),iVar18), lVar10 == 0)) {
LAB_14260d053:
              uVar7 = (undefined4)((ulonglong)in_stack_fffffffffffffb70 >> 0x20);
              if (sVar3 == 0) {
LAB_14260d07f:
                cVar4 = FUN_14252d150(lVar11);
                if (cVar4 == '\0') {
                  iVar16 = FUN_14252d140(lVar11);
                  if (iVar16 == 0) {
                    uVar9 = FUN_14260db00(local_68,param_9);
                    FUN_14260d9b0(param_7,uVar9,lVar11,param_9);
                  }
                  else {
                    uVar9 = FUN_14252d4c0(lVar11,param_9);
                    FUN_14260da90(param_7,uVar9);
                  }
                }
                else {
                  puVar8 = *(undefined8 **)(local_68 + 0x2d0);
                  if (puVar8 == (undefined8 *)0x0) {
                    puVar8 = (undefined8 *)FUN_140236d20(local_88,param_9);
                    *(undefined8 **)(local_68 + 0x2d0) = puVar8;
                    if (*param_9 < 1) {
                      if (puVar8 == (undefined8 *)0x0) {
                        *param_9 = 7;
                        puVar8 = *(undefined8 **)(local_68 + 0x2d0);
                      }
                    }
                    else {
                      if (puVar8 != (undefined8 *)0x0) {
                        (**(code **)*puVar8)(puVar8,1);
                      }
                      *(undefined8 *)(local_68 + 0x2d0) = 0;
                      puVar8 = (undefined8 *)0x0;
                    }
                  }
                  FUN_14260d9b0(param_7,puVar8,lVar11,param_9);
                }
              }
              else {
                if (*(longlong *)(local_68 + 0x2e0) != 0) {
                  lVar10 = FUN_142502740(*(longlong *)(local_68 + 0x2e0),iVar18);
                  uVar7 = (undefined4)((ulonglong)in_stack_fffffffffffffb70 >> 0x20);
                  if (lVar10 != 0) goto LAB_14260d07f;
                }
                param_2 = param_2 + 3;
                if (sVar3 == 2) {
                  cVar4 = FUN_14252d150(lVar11);
                  if (cVar4 == '\0') goto LAB_14260d74b;
                  uVar9 = FUN_14252d270(lVar11,param_9);
                  uVar5 = FUN_1426c65e0(local_78,param_2,uVar9);
                  in_stack_fffffffffffffb70 = CONCAT44(uVar7,param_6);
                  in_stack_fffffffffffffb68 = param_5;
                  FUN_14260db50(local_68,uVar5,0,local_70,param_5,in_stack_fffffffffffffb70,param_7,
                                param_9);
                }
                else {
                  if (sVar3 != 5) {
                    if (sVar3 == 4) {
                      uVar9 = FUN_14252d4c0(lVar11,param_9);
                      uVar5 = FUN_1426c6930(local_78,param_2,uVar9,param_9);
                      in_stack_fffffffffffffb70 = CONCAT44(uVar7,param_6);
                      in_stack_fffffffffffffb68 = param_5;
                      FUN_14260db50(local_68,uVar5,0,local_70,param_5,in_stack_fffffffffffffb70,
                                    param_7,param_9);
                      goto LAB_14260d143;
                    }
                    if (sVar3 != 3) {
                      iVar6 = 5;
                      goto LAB_14260d750;
                    }
                  }
                  cVar4 = FUN_14252d150(lVar11);
                  if (cVar4 == '\0') {
LAB_14260d74b:
                    iVar6 = 1;
LAB_14260d750:
                    *param_9 = iVar6;
                    FUN_140859a90(local_138);
                    return;
                  }
                  lVar10 = local_f0;
                  if (sVar3 == 3) {
                    lVar10 = local_f8;
                  }
                  uVar9 = FUN_1426c5240(local_78,param_2);
                  FUN_14260e0a0(local_468,param_2,local_138,lVar11,uVar9,param_9);
                  uVar9 = FUN_14252d270(lVar11,param_9);
                  piVar20 = param_9;
                  uVar7 = FUN_1425fab10(local_78,param_2,lVar10,local_468,uVar9,param_9);
                  in_stack_fffffffffffffb70 = CONCAT44((int)((ulonglong)piVar20 >> 0x20),param_6);
                  in_stack_fffffffffffffb68 = param_5;
                  FUN_14260db50(local_68,uVar7,local_468,local_70,param_5,in_stack_fffffffffffffb70,
                                param_7,param_9);
                  FUN_140859a90(local_3d0);
                  FUN_14252d110(local_458);
                }
              }
              goto LAB_14260d143;
            }
            in_stack_fffffffffffffb68 = in_stack_fffffffffffffb68 & 0xffffffff00000000;
            lVar19 = __RTDynamicCast(lVar10,0,&icu_64::Format::RTTI_Type_Descriptor,
                                     &icu_64::MessageFormat::DummyFormat::RTTI_Type_Descriptor,
                                     in_stack_fffffffffffffb68);
            if (lVar19 != 0) goto LAB_14260d053;
            in_stack_fffffffffffffb68 = in_stack_fffffffffffffb68 & 0xffffffff00000000;
            lVar19 = __RTDynamicCast(lVar10,0,&icu_64::Format::RTTI_Type_Descriptor,
                                     &icu_64::ChoiceFormat::RTTI_Type_Descriptor,
                                     in_stack_fffffffffffffb68);
            if (lVar19 == 0) {
              in_stack_fffffffffffffb68 = in_stack_fffffffffffffb68 & 0xffffffff00000000;
              lVar19 = __RTDynamicCast(lVar10,0,&icu_64::Format::RTTI_Type_Descriptor,
                                       &icu_64::PluralFormat::RTTI_Type_Descriptor,
                                       in_stack_fffffffffffffb68);
              if (lVar19 == 0) {
                in_stack_fffffffffffffb68 = in_stack_fffffffffffffb68 & 0xffffffff00000000;
                lVar19 = __RTDynamicCast(lVar10,0,&icu_64::Format::RTTI_Type_Descriptor,
                                         &icu_64::SelectFormat::RTTI_Type_Descriptor,
                                         in_stack_fffffffffffffb68);
                if (lVar19 == 0) {
                  FUN_14260d9b0(param_7,lVar10,lVar11,param_9);
                  goto LAB_14260d143;
                }
              }
            }
            local_e8 = &PTR_FUN_149e18960;
            local_e0 = 2;
            FUN_142537ad0(lVar10,lVar11,&local_e8,param_9);
            iVar16 = local_dc;
            if (-1 < (short)local_e0) {
              iVar16 = (int)(short)local_e0 >> 5;
            }
            iVar16 = FUN_1424a8940(&local_e8,0x7b,0,iVar16);
            uVar7 = (undefined4)((ulonglong)in_stack_fffffffffffffb70 >> 0x20);
            if (iVar16 < 0) {
              iVar16 = local_dc;
              if (-1 < (short)local_e0) {
                iVar16 = (int)(short)local_e0 >> 5;
              }
              iVar16 = FUN_1424a8940(&local_e8,0x27,0,iVar16);
              uVar7 = (undefined4)((ulonglong)in_stack_fffffffffffffb70 >> 0x20);
              if ((-1 < iVar16) && (*(int *)(local_68 + 0x230) != 1)) goto LAB_14260d5f0;
              puVar14 = local_de;
              if ((local_e0 & 2) == 0) {
                puVar14 = local_d0;
              }
              if ((local_e0 & 0x11) != 0) {
                puVar14 = (undefined1 *)0x0;
              }
              iVar16 = local_dc;
              if (-1 < (short)local_e0) {
                iVar16 = (int)(short)local_e0 >> 5;
              }
              (**(code **)(*(longlong *)*param_7 + 0x20))((longlong *)*param_7,puVar14,iVar16);
              iVar16 = local_dc;
              if (-1 < (short)local_e0) {
                iVar16 = (int)(short)local_e0 >> 5;
              }
              *(int *)(param_7 + 1) = *(int *)(param_7 + 1) + iVar16;
            }
            else {
LAB_14260d5f0:
              FUN_14260aa90(local_468,&local_e8,local_88,param_9);
              in_stack_fffffffffffffb70 = CONCAT44(uVar7,param_6);
              in_stack_fffffffffffffb68 = param_5;
              FUN_14260cb20(local_468,0,0,local_70,param_5,in_stack_fffffffffffffb70,param_7,
                            local_a0,param_9);
              FUN_14260b0f0(local_468);
            }
            pppuVar12 = &local_e8;
            goto LAB_14260d13e;
          }
          (**(code **)(*(longlong *)*param_7 + 0x20))((longlong *)*param_7,L"null",4);
          *(int *)(param_7 + 1) = *(int *)(param_7 + 1) + 4;
        }
        else {
          if (0 < (int)param_6) {
            uVar15 = 0;
            do {
              lVar11 = uVar15 * 0x40;
              uVar1 = *(ushort *)(param_5 + 8 + lVar11);
              if ((local_130 & 1) == 0) {
                if ((short)uVar1 < 0) {
                  iVar16 = *(int *)(param_5 + 0xc + lVar11);
                }
                else {
                  iVar16 = (int)(short)uVar1 >> 5;
                }
                uVar13 = local_12c;
                if (-1 < (short)local_130) {
                  uVar13 = (int)(short)local_130 >> 5;
                }
                uVar17 = 0;
                if (0 < (int)uVar13) {
                  uVar17 = uVar13;
                }
                puVar14 = local_12e;
                if ((local_130 & 2) == 0) {
                  puVar14 = local_120;
                }
                in_stack_fffffffffffffb70 =
                     CONCAT44((int)((ulonglong)in_stack_fffffffffffffb70 >> 0x20),uVar17);
                in_stack_fffffffffffffb68 =
                     CONCAT44((int)(in_stack_fffffffffffffb68 >> 0x20),(int)uVar13 >> 0x1f & uVar13)
                ;
                cVar4 = FUN_1424a7e30(lVar11 + param_5,0,iVar16,puVar14,in_stack_fffffffffffffb68,
                                      in_stack_fffffffffffffb70);
              }
              else {
                cVar4 = (uVar1 & 1) == 0;
              }
              if (cVar4 == '\0') {
                if (local_70 != 0) goto LAB_14260cf10;
                break;
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 != param_6);
          }
LAB_14260cf80:
          FUN_1424a6c10(local_468,0x7b);
          uVar13 = local_12c;
          if (-1 < (short)local_130) {
            uVar13 = (int)(short)local_130 >> 5;
          }
          pppuVar12 = local_468;
          uVar9 = FUN_1424a9690(pppuVar12,local_138,0,uVar13);
          local_e8 = (undefined **)CONCAT62(local_e8._2_6_,0x7d);
          lVar10 = FUN_1424a6cf0(uVar9,&local_e8,0,1);
          uVar1 = *(ushort *)(lVar10 + 8);
          if ((uVar1 & 0x11) == 0) {
            if ((uVar1 & 2) == 0) {
              lVar11 = *(longlong *)(lVar10 + 0x18);
            }
            else {
              lVar11 = lVar10 + 10;
            }
          }
          else {
            lVar11 = 0;
          }
          iVar16 = (int)(short)uVar1 >> 5;
          if ((short)uVar1 < 0) {
            iVar16 = *(int *)(lVar10 + 0xc);
          }
          (**(code **)(*(longlong *)*param_7 + 0x20))((longlong *)*param_7,lVar11,iVar16);
          if (*(short *)(lVar10 + 8) < 0) {
            iVar16 = *(int *)(lVar10 + 0xc);
          }
          else {
            iVar16 = (int)*(short *)(lVar10 + 8) >> 5;
          }
          *(int *)(param_7 + 1) = *(int *)(param_7 + 1) + iVar16;
LAB_14260d13e:
          FUN_140859a90(pppuVar12);
        }
LAB_14260d143:
        iVar16 = (uint)*(ushort *)(*(longlong *)(local_68 + 0x280) + 8 + (longlong)iVar6 * 0x10) +
                 *(int *)(*(longlong *)(local_68 + 0x280) + 4 + (longlong)iVar6 * 0x10);
        FUN_140859a90(local_138);
        local_a0 = 0;
        param_2 = iVar6;
      }
      else {
        iVar16 = (uint)*(ushort *)(lVar10 + 8 + lVar19) + *(int *)(lVar10 + lVar19 + 4);
        param_2 = iVar18;
        if (iVar6 == 4) {
          if (*(char *)(local_80 + 0xd8) == '\0') {
            puVar8 = *(undefined8 **)(local_68 + 0x2d0);
            if (puVar8 == (undefined8 *)0x0) {
              puVar8 = (undefined8 *)FUN_140236d20(local_88,param_9);
              *(undefined8 **)(local_68 + 0x2d0) = puVar8;
              if (*param_9 < 1) {
                if (puVar8 == (undefined8 *)0x0) {
                  *param_9 = 7;
                  puVar8 = *(undefined8 **)(local_68 + 0x2d0);
                }
              }
              else {
                if (puVar8 != (undefined8 *)0x0) {
                  (**(code **)*puVar8)(puVar8,1);
                }
                *(undefined8 *)(local_68 + 0x2d0) = 0;
                puVar8 = (undefined8 *)0x0;
              }
            }
          }
          else {
            uVar1 = *(ushort *)(local_80 + 0xa0);
            if (0x1f < uVar1) {
              if (*param_9 < 1) {
                if ((uVar1 & 0x11) == 0) {
                  lVar10 = local_98;
                  if ((uVar1 & 2) == 0) {
                    lVar10 = *(longlong *)(local_80 + 0xb0);
                  }
                }
                else {
                  lVar10 = 0;
                }
                iVar6 = (int)(short)uVar1 >> 5;
                if ((short)uVar1 < 0) {
                  iVar6 = *(int *)(local_80 + 0xa4);
                }
                (**(code **)(*(longlong *)*param_7 + 0x20))((longlong *)*param_7,lVar10,iVar6);
                sVar3 = *(short *)(lVar11 + 0xa0);
                if (sVar3 < 0) {
                  iVar6 = *(int *)(lVar11 + 0xa4);
                }
                else {
                  iVar6 = (int)sVar3 >> 5;
                }
                *(int *)(param_7 + 1) = *(int *)(param_7 + 1) + iVar6;
              }
              goto LAB_14260cc3a;
            }
            puVar8 = *(undefined8 **)(local_80 + 0x90);
          }
          FUN_14260d9b0(param_7,puVar8,local_90,param_9);
        }
      }
LAB_14260cc3a:
      iVar6 = *param_9;
    }
  }
  return;
}



// FUNCTION 14260d770 Unwind@14260d770 body=66 status=ok
// SIG undefined Unwind@14260d770(void)

void Unwind_14260d770(undefined8 param_1,longlong param_2)

{
  FUN_14260b0f0(param_2 + 0x50);
  return;
}



// FUNCTION 14260d7c0 Unwind@14260d7c0 body=75 status=ok
// SIG undefined Unwind@14260d7c0(void)

void Unwind_14260d7c0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xe8);
  FUN_14252d110(param_2 + 0x60);
  return;
}



// FUNCTION 14260d810 Unwind@14260d810 body=69 status=ok
// SIG undefined Unwind@14260d810(void)

void Unwind_14260d810(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x3d0);
  return;
}



// FUNCTION 14260d860 Unwind@14260d860 body=66 status=ok
// SIG undefined Unwind@14260d860(void)

void Unwind_14260d860(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x50);
  return;
}



// FUNCTION 14260d8b0 Unwind@14260d8b0 body=68 status=ok
// SIG undefined Unwind@14260d8b0(void)

void Unwind_14260d8b0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x380);
  return;
}



// FUNCTION 14260d900 FUN_14260d900 body=135 status=ok
// SIG undefined FUN_14260d900(void)

void FUN_14260d900(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 local_58 [8];
  ushort local_50;
  undefined1 local_4e [2];
  int local_4c;
  undefined1 *local_40;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  FUN_1424a84d0(param_2,local_58);
  if ((local_50 & 0x11) == 0) {
    if ((local_50 & 2) != 0) {
      local_40 = local_4e;
    }
  }
  else {
    local_40 = (undefined1 *)0x0;
  }
  iVar1 = (int)(short)local_50 >> 5;
  if ((short)local_50 < 0) {
    iVar1 = local_4c;
  }
  (**(code **)(*(longlong *)*param_1 + 0x20))((longlong *)*param_1,local_40,iVar1);
  if (-1 < (short)local_50) {
    local_4c = (int)(short)local_50 >> 5;
  }
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + local_4c;
  FUN_140859a90(local_58);
  return;
}



// FUNCTION 14260d990 Unwind@14260d990 body=32 status=ok
// SIG undefined Unwind@14260d990(void)

void Unwind_14260d990(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 14260d9b0 FUN_14260d9b0 body=165 status=ok
// SIG undefined FUN_14260d9b0(void)

void FUN_14260d9b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  undefined **local_60;
  ushort local_58;
  undefined1 local_56 [2];
  int local_54;
  undefined1 *local_48;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_60 = &PTR_FUN_149e18960;
  local_58 = 2;
  FUN_142537ad0(param_2,param_3,&local_60);
  if (*param_4 < 1) {
    if ((local_58 & 0x11) == 0) {
      if ((local_58 & 2) != 0) {
        local_48 = local_56;
      }
    }
    else {
      local_48 = (undefined1 *)0x0;
    }
    iVar1 = (int)(short)local_58 >> 5;
    if ((short)local_58 < 0) {
      iVar1 = local_54;
    }
    (**(code **)(*(longlong *)*param_1 + 0x20))((longlong *)*param_1,local_48,iVar1);
    if (-1 < (short)local_58) {
      local_54 = (int)(short)local_58 >> 5;
    }
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + local_54;
  }
  FUN_140859a90(&local_60);
  return;
}



// FUNCTION 14260da60 Unwind@14260da60 body=34 status=ok
// SIG undefined Unwind@14260da60(void)

void Unwind_14260da60(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 14260da90 FUN_14260da90 body=101 status=ok
// SIG undefined FUN_14260da90(void)

void FUN_14260da90(undefined8 *param_1,longlong param_2)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *(ushort *)(param_2 + 8);
  if ((uVar1 & 0x11) == 0) {
    if ((uVar1 & 2) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x18);
    }
    else {
      lVar3 = param_2 + 10;
    }
  }
  else {
    lVar3 = 0;
  }
  iVar2 = (int)(short)uVar1 >> 5;
  if ((short)uVar1 < 0) {
    iVar2 = *(int *)(param_2 + 0xc);
  }
  (**(code **)(*(longlong *)*param_1 + 0x20))((longlong *)*param_1,lVar3,iVar2);
  if (*(short *)(param_2 + 8) < 0) {
    iVar2 = *(int *)(param_2 + 0xc);
  }
  else {
    iVar2 = (int)*(short *)(param_2 + 8) >> 5;
  }
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + iVar2;
  return;
}



// FUNCTION 14260db00 FUN_14260db00 body=78 status=ok
// SIG undefined FUN_14260db00(void)

longlong FUN_14260db00(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x2d8);
  if (lVar1 == 0) {
    lVar1 = FUN_1424bde40(3,3,param_1 + 0x148);
    *(longlong *)(param_1 + 0x2d8) = lVar1;
    if (lVar1 == 0) {
      *param_2 = 7;
      lVar1 = *(longlong *)(param_1 + 0x2d8);
    }
  }
  return lVar1;
}



// FUNCTION 14260db50 FUN_14260db50 body=1151 status=ok
// SIG undefined FUN_14260db50(void)

void FUN_14260db50(longlong param_1,int param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 *param_7,int *param_8)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_428 [69];
  undefined1 local_200 [8];
  int local_1f8;
  undefined **local_f8;
  undefined2 local_f0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined **local_98;
  ushort local_90;
  undefined1 local_8e [2];
  int local_8c;
  undefined1 *local_80;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (*param_8 < 1) {
    if (*(int *)(param_1 + 0x230) == 1) {
      local_50 = param_1 + 0x238;
      local_98 = &PTR_FUN_149e18960;
      local_90 = 2;
      lVar9 = *(longlong *)(param_1 + 0x280);
      iVar7 = (uint)*(ushort *)(lVar9 + 8 + (longlong)param_2 * 0x10) +
              *(int *)(lVar9 + 4 + (longlong)param_2 * 0x10);
      local_b0 = param_3 + 0x98;
      local_58 = param_1 + 0x148;
      local_a8 = param_3 + 0x10;
      local_b8 = param_3;
      local_a0 = param_4;
      while( true ) {
        lVar8 = ((longlong)param_2 + 1) * 0x10;
        iVar1 = *(int *)(lVar9 + lVar8);
        iVar2 = *(int *)(lVar9 + 4 + lVar8);
        if (iVar1 == 1) break;
        param_2 = param_2 + 1;
        if (iVar1 == 2) {
LAB_14260dc6a:
          FUN_1424a9690(&local_98,local_50,iVar7,iVar2 - iVar7);
          if (iVar1 == 4) {
            if (*(char *)(local_b8 + 0xd8) == '\0') {
              puVar5 = *(undefined8 **)(param_1 + 0x2d0);
              if (puVar5 == (undefined8 *)0x0) {
                puVar5 = (undefined8 *)FUN_140236d20(local_58,param_8);
                *(undefined8 **)(param_1 + 0x2d0) = puVar5;
                if (0 < *param_8) {
                  (**(code **)*puVar5)(puVar5,1);
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                if (puVar5 == (undefined8 *)0x0) {
                  *param_8 = 7;
                  puVar5 = *(undefined8 **)(param_1 + 0x2d0);
                }
              }
              lVar6 = FUN_142537ad0(puVar5,local_a8,&local_98);
              if (*(short *)(lVar6 + 8) < 0) {
                iVar7 = *(int *)(lVar6 + 0xc);
              }
              else {
                iVar7 = (int)*(short *)(lVar6 + 8) >> 5;
              }
              FUN_1424a9690(&local_98,lVar6,0,iVar7);
            }
            else {
              if (*(short *)(local_b8 + 0xa0) < 0) {
                iVar7 = *(int *)(local_b8 + 0xa4);
              }
              else {
                iVar7 = (int)*(short *)(local_b8 + 0xa0) >> 5;
              }
              FUN_1424a9690(&local_98,local_b0,0,iVar7);
            }
          }
          iVar7 = (uint)*(ushort *)(lVar9 + 8 + lVar8) + *(int *)(lVar9 + lVar8 + 4);
          lVar9 = *(longlong *)(param_1 + 0x280);
        }
        else {
          if (iVar1 == 5) {
            FUN_1424a9690(&local_98,local_50,iVar7,iVar2 - iVar7);
            lVar9 = *(longlong *)(param_1 + 0x280);
            iVar7 = *(int *)(lVar9 + 0xc + lVar8);
            if (param_2 < iVar7) {
              param_2 = iVar7;
            }
            iVar7 = (uint)*(ushort *)(lVar9 + 8 + (longlong)param_2 * 0x10) +
                    *(int *)(lVar9 + 4 + (longlong)param_2 * 0x10);
            FUN_1426c6490(local_50,iVar2,iVar7,&local_98);
          }
          else if (iVar1 == 4) goto LAB_14260dc6a;
          lVar9 = *(longlong *)(param_1 + 0x280);
        }
      }
      FUN_1424a9690(&local_98,local_50,iVar7,iVar2 - iVar7);
      iVar7 = local_8c;
      if (-1 < (short)local_90) {
        iVar7 = (int)(short)local_90 >> 5;
      }
      iVar7 = FUN_1424a8940(&local_98,0x7b,0,iVar7);
      if (iVar7 < 0) {
        if ((local_90 & 0x11) == 0) {
          if ((local_90 & 2) != 0) {
            local_80 = local_8e;
          }
        }
        else {
          local_80 = (undefined1 *)0x0;
        }
        iVar7 = (int)(short)local_90 >> 5;
        if ((short)local_90 < 0) {
          iVar7 = local_8c;
        }
        (**(code **)(*(longlong *)*param_7 + 0x20))((longlong *)*param_7,local_80,iVar7);
        if (-1 < (short)local_90) {
          local_8c = (int)(short)local_90 >> 5;
        }
        *(int *)(param_7 + 1) = *(int *)(param_7 + 1) + local_8c;
      }
      else {
        local_f8 = &PTR_FUN_149e18960;
        local_f0 = 2;
        FUN_14260aa90(local_428,&local_f8,local_58,param_8);
        uVar4 = local_a0;
        if (local_1f8 != 1) {
          FUN_1426c40e0(local_200);
          local_1f8 = 1;
        }
        (**(code **)(local_428[0] + 0x50))(local_428,&local_98,0,param_8);
        FUN_14260cb20(local_428,0,0,uVar4,param_5,param_6,param_7,0,param_8);
        FUN_14260b0f0(local_428);
        FUN_140859a90(&local_f8);
      }
      FUN_140859a90(&local_98);
    }
    else {
      FUN_14260cb20(param_1,param_2,param_3,param_4,param_5,param_6,param_7,0,param_8);
    }
  }
  return;
}



// FUNCTION 14260dfe0 Unwind@14260dfe0 body=55 status=ok
// SIG undefined Unwind@14260dfe0(void)

void Unwind_14260dfe0(undefined8 param_1,longlong param_2)

{
  FUN_14260b0f0(param_2 + 0x50);
  return;
}



// FUNCTION 14260e020 Unwind@14260e020 body=58 status=ok
// SIG undefined Unwind@14260e020(void)

void Unwind_14260e020(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x380);
  return;
}



// FUNCTION 14260e060 Unwind@14260e060 body=58 status=ok
// SIG undefined Unwind@14260e060(void)

void Unwind_14260e060(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x3e0);
  return;
}



// FUNCTION 14260e0a0 FUN_14260e0a0 body=235 status=ok
// SIG undefined FUN_14260e0a0(void)

undefined4 *
FUN_14260e0a0(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             double param_5,undefined8 param_6)

{
  undefined4 *puVar1;
  double dVar2;
  undefined1 local_c0 [112];
  undefined4 *local_50;
  undefined4 *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  puVar1 = param_1 + 4;
  FUN_14252c810(puVar1);
  *(double *)(param_1 + 0x20) = param_5;
  param_1[0x22] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x24) = 0;
  local_50 = param_1 + 0x26;
  *(undefined ***)(param_1 + 0x26) = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x28) = 2;
  *(undefined1 *)(param_1 + 0x36) = 0;
  local_48 = puVar1;
  if ((param_5 != 0.0) || (NAN(param_5))) {
    dVar2 = (double)FUN_14252d270(param_4,param_6);
    FUN_14252c8b0(local_c0,dVar2 - param_5);
    FUN_14252ce00(local_48,local_c0);
    FUN_14252d110(local_c0);
  }
  else {
    FUN_14252ce00(puVar1,param_4);
  }
  return param_1;
}



// FUNCTION 14260e190 Unwind@14260e190 body=58 status=ok
// SIG undefined Unwind@14260e190(void)

void Unwind_14260e190(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x98));
  FUN_14252d110(*(undefined8 *)(param_2 + 0xa0));
  return;
}



// FUNCTION 14260e1d0 Unwind@14260e1d0 body=50 status=ok
// SIG undefined Unwind@14260e1d0(void)

void Unwind_14260e1d0(undefined8 param_1,longlong param_2)

{
  FUN_14252d110(param_2 + 0x28);
  return;
}


