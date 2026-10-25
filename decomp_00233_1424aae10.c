// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1424aae10 Unwind@1424aae10 body=55 status=ok
// SIG undefined Unwind@1424aae10(void)

void Unwind_1424aae10(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x38);
  return;
}



// FUNCTION 1424aae50 FUN_1424aae50 body=494 status=ok
// SIG undefined FUN_1424aae50(void)

void FUN_1424aae50(longlong param_1,int param_2,undefined8 param_3,int *param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  int local_68;
  int *local_60;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (0 < *param_4) goto LAB_1424aaef1;
  if (0 < *(int *)(param_1 + 0x13c)) {
    *param_4 = *(int *)(param_1 + 0x13c);
    goto LAB_1424aaef1;
  }
  uVar3 = FUN_14250e6d0(param_3);
  if (*(char *)(param_1 + 0x82) == '\0') {
    *param_4 = 0x10302;
LAB_1424aaed0:
    local_68 = 0;
    lVar7 = 0;
  }
  else {
    if (param_2 < 0) {
LAB_1424aaec2:
      *param_4 = 8;
      goto LAB_1424aaed0;
    }
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x88);
    iVar2 = *(int *)(lVar7 + 8);
    if (iVar2 < param_2) goto LAB_1424aaec2;
    if (param_2 == 0) {
      plVar6 = (longlong *)(param_1 + 0x88);
      puVar4 = (undefined8 *)(param_1 + 0x90);
    }
    else {
      if (iVar2 < 1) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(longlong *)(lVar7 + 0x18) + (ulonglong)(param_2 - 1) * 4);
      }
      plVar6 = (longlong *)(*(longlong *)(param_1 + 0xb8) + (longlong)iVar2 * 8 + 0x10);
      puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0xb8) + (longlong)iVar2 * 8 + 0x18);
    }
    lVar7 = *plVar6;
    if (lVar7 < 0) goto LAB_1424aaed0;
    uVar1 = *puVar4;
    lVar5 = *(longlong *)(param_1 + 0x20);
    if (((*(longlong *)(lVar5 + 0x20) != 0) ||
        (*(longlong *)(param_1 + 0x30) != *(longlong *)(lVar5 + 0x10))) ||
       (*(longlong *)(param_1 + 0x30) != (longlong)*(int *)(lVar5 + 0x1c))) {
      if (*(longlong *)(*(longlong *)(lVar5 + 0x38) + 0x48) == 0) {
        iVar2 = (int)uVar1 - (int)lVar7;
      }
      else {
        local_4c = 0;
        local_60 = &local_4c;
        local_68 = 0;
        iVar2 = FUN_14250eb20(lVar5,lVar7,uVar1,0);
      }
      lVar5 = FUN_1424da030((longlong)iVar2 * 2 + 2);
      if (lVar5 == 0) {
        *param_4 = 7;
      }
      else {
        local_68 = iVar2 + 1;
        local_60 = param_4;
        FUN_14250eb20(*(undefined8 *)(param_1 + 0x20),lVar7,uVar1,lVar5);
        local_68 = iVar2;
        local_60 = param_4;
        FUN_14250ebb0(param_3,uVar3,uVar3,lVar5);
        FUN_1424da110(lVar5);
      }
      goto LAB_1424aaef1;
    }
    local_68 = (int)uVar1 - (int)lVar7;
    lVar7 = lVar7 * 2 + *(longlong *)(lVar5 + 0x30);
  }
  local_60 = param_4;
  FUN_14250ebb0(param_3,uVar3,uVar3,lVar7);
LAB_1424aaef1:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
}



// FUNCTION 1424ab060 FUN_1424ab060 body=194 status=ok
// SIG undefined FUN_1424ab060(void)

void FUN_1424ab060(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
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
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_24 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0x345ad82c;
  uStack_b0 = 0x9000000000;
  FUN_14250ee40(&local_b8,param_2,&local_24);
  if (local_24 < 1) {
    FUN_1424ab130(param_1,&local_b8,&local_24);
    FUN_14250edb0(&local_b8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_d8);
}



// FUNCTION 1424ab130 FUN_1424ab130 body=324 status=ok
// SIG undefined FUN_1424ab130(void)

undefined8 FUN_1424ab130(longlong param_1,undefined8 param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (*param_3 < 1) {
    if (*(int *)(param_1 + 0x13c) < 1) {
      lVar5 = *(longlong *)(param_1 + 0x30);
      lVar1 = *(longlong *)(param_1 + 0xa0);
      if (lVar1 < lVar5) {
        lVar2 = *(longlong *)(param_1 + 0x20);
        if (((*(longlong *)(lVar2 + 0x20) == 0) && (lVar5 == *(longlong *)(lVar2 + 0x10))) &&
           (lVar5 == *(int *)(lVar2 + 0x1c))) {
          uVar4 = FUN_14250e6d0(param_2);
          FUN_14250ebb0(param_2,uVar4,uVar4,
                        *(longlong *)(param_1 + 0xa0) * 2 +
                        *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30),
                        *(int *)(param_1 + 0x30) - (int)*(longlong *)(param_1 + 0xa0),param_3);
        }
        else {
          if (*(longlong *)(*(longlong *)(lVar2 + 0x38) + 0x48) == 0) {
            iVar3 = (int)lVar5 - (int)lVar1;
          }
          else {
            iVar3 = FUN_14250eb20(lVar2,lVar1,lVar5,0,0,param_3);
            *param_3 = 0;
          }
          lVar5 = FUN_1424da030((longlong)iVar3 * 2);
          if (lVar5 == 0) {
            *(undefined4 *)(param_1 + 0x13c) = 7;
          }
          else {
            FUN_14250eb20(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0xa0),
                          *(undefined8 *)(param_1 + 0x30),lVar5,iVar3,param_3);
            uVar4 = FUN_14250e6d0(param_2);
            FUN_14250ebb0(param_2,uVar4,uVar4,lVar5,iVar3,param_3);
            FUN_1424da110(lVar5);
          }
        }
      }
    }
    else {
      *param_3 = *(int *)(param_1 + 0x13c);
    }
  }
  return param_2;
}



// FUNCTION 1424ab280 FUN_1424ab280 body=59 status=ok
// SIG undefined FUN_1424ab280(void)

undefined4 FUN_1424ab280(longlong param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (0 < *param_2) {
    return uVar1;
  }
  if (*(char *)(param_1 + 0x82) != '\0') {
    if (-1 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x88) + 8)) {
      return *(undefined4 *)(param_1 + 0x90);
    }
    *param_2 = 8;
    return uVar1;
  }
  *param_2 = 0x10302;
  return uVar1;
}



// FUNCTION 1424ab2c0 FUN_1424ab2c0 body=62 status=ok
// SIG undefined FUN_1424ab2c0(void)

undefined8 FUN_1424ab2c0(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffffffffffff;
  if (0 < *param_2) {
    return uVar1;
  }
  if (*(char *)(param_1 + 0x82) != '\0') {
    if (-1 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x88) + 8)) {
      return *(undefined8 *)(param_1 + 0x90);
    }
    *param_2 = 8;
    return uVar1;
  }
  *param_2 = 0x10302;
  return uVar1;
}



// FUNCTION 1424ab300 FUN_1424ab300 body=122 status=ok
// SIG undefined FUN_1424ab300(void)

undefined8 FUN_1424ab300(longlong param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = 0xffffffffffffffff;
  if (0 < *param_3) {
    return uVar2;
  }
  if (*(char *)(param_1 + 0x82) != '\0') {
    if (-1 < param_2) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x88);
      iVar1 = *(int *)(lVar3 + 8);
      if (param_2 <= iVar1) {
        if (param_2 != 0) {
          if (iVar1 < 1) {
            lVar3 = 1;
          }
          else {
            lVar3 = (longlong)*(int *)(*(longlong *)(lVar3 + 0x18) + (ulonglong)(param_2 - 1) * 4) +
                    1;
          }
          return *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + lVar3 * 8 + 0x10);
        }
        return *(undefined8 *)(param_1 + 0x90);
      }
    }
    *param_3 = 8;
    return uVar2;
  }
  *param_3 = 0x10302;
  return uVar2;
}



// FUNCTION 1424ab380 FUN_1424ab380 body=2385 status=ok
// SIG undefined FUN_1424ab380(void)

ulonglong FUN_1424ab380(longlong param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  
  if (0 < *param_2) {
    return 0;
  }
  if (0 < *(int *)(param_1 + 0x13c)) {
    *param_2 = *(int *)(param_1 + 0x13c);
    return 0;
  }
  lVar10 = *(longlong *)(param_1 + 0x20);
  if (((*(longlong *)(lVar10 + 0x20) == 0) &&
      (*(longlong *)(param_1 + 0x30) == *(longlong *)(lVar10 + 0x10))) &&
     (*(longlong *)(param_1 + 0x30) == (longlong)*(int *)(lVar10 + 0x1c))) {
    uVar7 = FUN_1424abce0(param_1,param_2);
    return uVar7;
  }
  lVar8 = *(longlong *)(param_1 + 0x90);
  lVar9 = lVar8;
  if (lVar8 == 0) {
    lVar9 = *(longlong *)(param_1 + 0x70);
  }
  if (*(char *)(param_1 + 0x82) != '\0') {
    *(longlong *)(param_1 + 0x98) = lVar8;
    if (*(longlong *)(param_1 + 0x88) != lVar8) goto LAB_1424ab4a8;
    if (lVar9 < *(longlong *)(param_1 + 0x78)) {
      lVar8 = lVar9 - *(longlong *)(lVar10 + 0x20);
      if (((lVar8 < 0) || (*(int *)(lVar10 + 0x1c) <= lVar8)) ||
         (0xdbff < *(ushort *)(*(longlong *)(lVar10 + 0x30) + lVar8 * 2))) {
        FUN_14250e700(lVar10,lVar9);
      }
      else {
        *(int *)(lVar10 + 0x28) = (int)lVar8;
      }
      lVar10 = *(longlong *)(param_1 + 0x20);
      iVar2 = *(int *)(lVar10 + 0x28);
      if ((iVar2 < *(int *)(lVar10 + 0x2c)) &&
         (*(ushort *)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar2 * 2) < 0xd800)) {
        *(int *)(lVar10 + 0x28) = iVar2 + 1;
      }
      else {
        FUN_14250e570();
      }
      lVar10 = *(longlong *)(param_1 + 0x20);
      if (*(int *)(lVar10 + 0x1c) < *(int *)(lVar10 + 0x28)) {
        lVar9 = (**(code **)(*(longlong *)(lVar10 + 0x38) + 0x40))();
        lVar10 = *(longlong *)(param_1 + 0x20);
      }
      else {
        lVar9 = (longlong)*(int *)(lVar10 + 0x28) + *(longlong *)(lVar10 + 0x20);
      }
      goto LAB_1424ab4a8;
    }
LAB_1424ab4d5:
    *(undefined1 *)(param_1 + 0x82) = 0;
LAB_1424ab4dc:
    *(undefined1 *)(param_1 + 0xa8) = 1;
    return 0;
  }
  if (-1 < *(longlong *)(param_1 + 0x98)) goto LAB_1424ab4dc;
LAB_1424ab4a8:
  lVar8 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(*(longlong *)(lVar10 + 0x38) + 0x48) == 0) {
    lVar12 = *(longlong *)(param_1 + 0x78) - (longlong)*(int *)(lVar8 + 0x7c);
    if (lVar12 < lVar9) goto LAB_1424ab4d5;
  }
  else {
    lVar12 = *(longlong *)(param_1 + 0x78) - (ulonglong)(0 < *(int *)(lVar8 + 0x7c));
  }
  switch(*(undefined4 *)(lVar8 + 0xa0)) {
  case 0:
    FUN_1424ac2c0(param_1,lVar9,0,param_2);
    if (0 < *param_2) {
      return 0;
    }
    while( true ) {
      if (*(char *)(param_1 + 0x82) != '\0') {
        return 1;
      }
      if (lVar12 <= lVar9) break;
      lVar10 = *(longlong *)(param_1 + 0x20);
      lVar8 = lVar9 - *(longlong *)(lVar10 + 0x20);
      if (((lVar8 < 0) || (*(int *)(lVar10 + 0x1c) <= lVar8)) ||
         (0xdbff < *(ushort *)(*(longlong *)(lVar10 + 0x30) + lVar8 * 2))) {
        FUN_14250e700(lVar10,lVar9);
      }
      else {
        *(int *)(lVar10 + 0x28) = (int)lVar8;
      }
      lVar10 = *(longlong *)(param_1 + 0x20);
      iVar2 = *(int *)(lVar10 + 0x28);
      if ((iVar2 < *(int *)(lVar10 + 0x2c)) &&
         (*(ushort *)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar2 * 2) < 0xd800)) {
        *(int *)(lVar10 + 0x28) = iVar2 + 1;
      }
      else {
        FUN_14250e570();
      }
      lVar10 = *(longlong *)(param_1 + 0x20);
      if (*(int *)(lVar10 + 0x1c) < *(int *)(lVar10 + 0x28)) {
        lVar9 = (**(code **)(*(longlong *)(lVar10 + 0x38) + 0x40))();
      }
      else {
        lVar9 = (longlong)*(int *)(lVar10 + 0x28) + *(longlong *)(lVar10 + 0x20);
      }
      if ((*(code **)(param_1 + 0x128) != (code *)0x0) &&
         (cVar3 = (**(code **)(param_1 + 0x128))(*(undefined8 *)(param_1 + 0x130),lVar9),
         cVar3 == '\0')) goto LAB_1424abc55;
      FUN_1424ac2c0(param_1,lVar9,0,param_2);
      if (0 < *param_2) {
        return 0;
      }
    }
    goto LAB_1424ab4dc;
  case 1:
  case 5:
    uVar6 = *(uint *)(lVar8 + 0xb8);
    lVar8 = lVar9 - *(longlong *)(lVar10 + 0x20);
    if ((lVar8 < 0) ||
       ((*(int *)(lVar10 + 0x1c) <= lVar8 ||
        (0xdbff < *(ushort *)(*(longlong *)(lVar10 + 0x30) + lVar8 * 2))))) {
      FUN_14250e700(lVar10,lVar9);
    }
    else {
      *(int *)(lVar10 + 0x28) = (int)lVar8;
    }
    do {
      lVar10 = *(longlong *)(param_1 + 0x20);
      iVar2 = *(int *)(lVar10 + 0x28);
      if ((iVar2 < *(int *)(lVar10 + 0x2c)) &&
         (*(ushort *)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar2 * 2) < 0xd800)) {
        *(int *)(lVar10 + 0x28) = iVar2 + 1;
        uVar5 = (uint)*(ushort *)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar2 * 2);
      }
      else {
        uVar5 = FUN_14250e570();
      }
      lVar10 = *(longlong *)(param_1 + 0x20);
      if (*(int *)(lVar10 + 0x1c) < *(int *)(lVar10 + 0x28)) {
        lVar10 = (**(code **)(*(longlong *)(lVar10 + 0x38) + 0x40))();
      }
      else {
        lVar10 = (longlong)*(int *)(lVar10 + 0x28) + *(longlong *)(lVar10 + 0x20);
      }
      if (uVar5 == uVar6) {
        FUN_1424ac2c0(param_1,lVar9,0,param_2);
        if (0 < *param_2) {
          return 0;
        }
        if (*(char *)(param_1 + 0x82) != '\0') {
          return 1;
        }
        lVar8 = *(longlong *)(param_1 + 0x20);
        lVar9 = lVar10 - *(longlong *)(lVar8 + 0x20);
        if (((lVar9 < 0) || (*(int *)(lVar8 + 0x1c) <= lVar9)) ||
           (0xdbff < *(ushort *)(*(longlong *)(lVar8 + 0x30) + lVar9 * 2))) {
          FUN_14250e700(lVar8,lVar10);
        }
        else {
          *(int *)(lVar8 + 0x28) = (int)lVar9;
        }
      }
      if (lVar12 < lVar10) goto LAB_1424ab4d5;
      lVar9 = lVar10;
    } while ((*(code **)(param_1 + 0x128) == (code *)0x0) ||
            (cVar3 = (**(code **)(param_1 + 0x128))(*(undefined8 *)(param_1 + 0x130),lVar10),
            cVar3 != '\0'));
    break;
  case 2:
    lVar8 = lVar9 - *(longlong *)(lVar10 + 0x20);
    if (((lVar8 < 0) || (*(int *)(lVar10 + 0x1c) <= lVar8)) ||
       (0xdbff < *(ushort *)(*(longlong *)(lVar10 + 0x30) + lVar8 * 2))) {
      FUN_14250e700(lVar10,lVar9);
    }
    else {
      *(int *)(lVar10 + 0x28) = (int)lVar8;
    }
    do {
      lVar10 = *(longlong *)(param_1 + 0x20);
      iVar2 = *(int *)(lVar10 + 0x28);
      if ((iVar2 < *(int *)(lVar10 + 0x2c)) &&
         (*(ushort *)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar2 * 2) < 0xd800)) {
        *(int *)(lVar10 + 0x28) = iVar2 + 1;
        uVar7 = (ulonglong)*(ushort *)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar2 * 2);
      }
      else {
        uVar6 = FUN_14250e570();
        uVar7 = (ulonglong)uVar6;
      }
      lVar10 = *(longlong *)(param_1 + 0x20);
      uVar6 = (uint)uVar7;
      if (*(int *)(lVar10 + 0x1c) < *(int *)(lVar10 + 0x28)) {
        lVar10 = (**(code **)(*(longlong *)(lVar10 + 0x38) + 0x40))();
      }
      else {
        lVar10 = (longlong)*(int *)(lVar10 + 0x28) + *(longlong *)(lVar10 + 0x20);
      }
      if (-1 < (int)uVar6) {
        if (uVar6 < 0x100) {
          bVar4 = *(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + (uVar7 >> 3)) >>
                  (uVar6 & 7) & 1;
        }
        else {
          bVar4 = FUN_142512880(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0xb0),uVar7);
        }
        if (bVar4 != 0) {
          FUN_1424ac2c0(param_1,lVar9,0,param_2);
          if (0 < *param_2) {
            return 0;
          }
          if (*(char *)(param_1 + 0x82) != '\0') {
            return 1;
          }
          lVar8 = *(longlong *)(param_1 + 0x20);
          lVar11 = lVar9 - *(longlong *)(lVar8 + 0x20);
          if (((lVar11 < 0) || (*(int *)(lVar8 + 0x1c) <= lVar11)) ||
             (0xdbff < *(ushort *)(*(longlong *)(lVar8 + 0x30) + lVar11 * 2))) {
            FUN_14250e700(lVar8,lVar9);
          }
          else {
            *(int *)(lVar8 + 0x28) = (int)lVar11;
          }
        }
      }
      if (lVar12 < lVar10) goto LAB_1424ab4d5;
      lVar9 = lVar10;
    } while ((*(code **)(param_1 + 0x128) == (code *)0x0) ||
            (cVar3 = (**(code **)(param_1 + 0x128))(*(undefined8 *)(param_1 + 0x130),lVar10),
            cVar3 != '\0'));
    break;
  case 3:
    if (*(longlong *)(param_1 + 0x70) < lVar9) {
      *(undefined1 *)(param_1 + 0x82) = 0;
      return 0;
    }
    FUN_1424ac2c0(param_1,lVar9,0,param_2);
    if (*param_2 < 1) {
      return (ulonglong)*(byte *)(param_1 + 0x82);
    }
    return 0;
  case 4:
    if (lVar9 == *(longlong *)(param_1 + 0x50)) {
      FUN_1424ac2c0(param_1,lVar9,0,param_2);
      if (0 < *param_2) {
        return 0;
      }
      if (*(char *)(param_1 + 0x82) != '\0') {
        return 1;
      }
      lVar10 = *(longlong *)(param_1 + 0x20);
      lVar8 = lVar9 - *(longlong *)(lVar10 + 0x20);
      if (((lVar8 < 0) || (*(int *)(lVar10 + 0x1c) <= lVar8)) ||
         (0xdbff < *(ushort *)(*(longlong *)(lVar10 + 0x30) + lVar8 * 2))) {
        FUN_14250e700(lVar10,lVar9);
      }
      else {
        *(int *)(lVar10 + 0x28) = (int)lVar8;
      }
      lVar10 = *(longlong *)(param_1 + 0x20);
      iVar2 = *(int *)(lVar10 + 0x28);
      if ((iVar2 < *(int *)(lVar10 + 0x2c)) &&
         (*(ushort *)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar2 * 2) < 0xd800)) {
        *(int *)(lVar10 + 0x28) = iVar2 + 1;
        uVar6 = (uint)*(ushort *)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar2 * 2);
      }
      else {
        uVar6 = FUN_14250e570();
      }
      lVar10 = *(longlong *)(param_1 + 0x20);
      if (*(int *)(lVar10 + 0x1c) < *(int *)(lVar10 + 0x28)) {
        lVar9 = (**(code **)(*(longlong *)(lVar10 + 0x38) + 0x40))();
      }
      else {
        lVar9 = (longlong)*(int *)(lVar10 + 0x28) + *(longlong *)(lVar10 + 0x20);
      }
    }
    else {
      lVar8 = lVar9 - *(longlong *)(lVar10 + 0x20);
      if (((lVar8 < 0) || (*(int *)(lVar10 + 0x1c) <= lVar8)) ||
         (0xdbff < *(ushort *)(*(longlong *)(lVar10 + 0x30) + lVar8 * 2))) {
        FUN_14250e700(lVar10,lVar9);
      }
      else {
        *(int *)(lVar10 + 0x28) = (int)lVar8;
      }
      lVar10 = *(longlong *)(param_1 + 0x20);
      if (*(int *)(lVar10 + 0x28) < 1) {
LAB_1424ab9a2:
        uVar6 = FUN_14250e620();
      }
      else {
        uVar6 = *(int *)(lVar10 + 0x28) - 1;
        if (0xd7ff < *(ushort *)(*(longlong *)(lVar10 + 0x30) + (ulonglong)uVar6 * 2))
        goto LAB_1424ab9a2;
        *(uint *)(lVar10 + 0x28) = uVar6;
        uVar6 = (uint)*(ushort *)(*(longlong *)(lVar10 + 0x30) + (ulonglong)uVar6 * 2);
      }
      lVar10 = *(longlong *)(param_1 + 0x20);
      lVar8 = lVar9 - *(longlong *)(lVar10 + 0x20);
      if (((lVar8 < 0) || (*(int *)(lVar10 + 0x1c) <= lVar8)) ||
         (0xdbff < *(ushort *)(*(longlong *)(lVar10 + 0x30) + lVar8 * 2))) {
        FUN_14250e700(lVar10,lVar9);
      }
      else {
        *(int *)(lVar10 + 0x28) = (int)lVar8;
      }
    }
    if ((*(byte *)(*(longlong *)(param_1 + 8) + 0x18) & 1) == 0) {
      do {
        if (((uVar6 & 0xffffdf50) == 0) &&
           (((uVar6 - 10 < 4 || (uVar6 - 0x2028 < 2)) || (uVar6 == 0x85)))) {
          if ((uVar6 == 0xd) && (lVar9 < *(longlong *)(param_1 + 0x78))) {
            lVar10 = *(longlong *)(param_1 + 0x20);
            if ((*(int *)(lVar10 + 0x2c) <= *(int *)(lVar10 + 0x28)) ||
               (uVar1 = *(ushort *)
                         (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar10 + 0x28) * 2),
               uVar6 = (uint)uVar1, 0xd7ff < uVar1)) {
              uVar6 = FUN_14250e920();
            }
            if (uVar6 == 10) {
              lVar10 = *(longlong *)(param_1 + 0x20);
              iVar2 = *(int *)(lVar10 + 0x28);
              if ((iVar2 < *(int *)(lVar10 + 0x2c)) &&
                 (*(ushort *)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar2 * 2) < 0xd800)) {
                *(int *)(lVar10 + 0x28) = iVar2 + 1;
              }
              else {
                FUN_14250e570();
              }
              lVar10 = *(longlong *)(param_1 + 0x20);
              if (*(int *)(lVar10 + 0x1c) < *(int *)(lVar10 + 0x28)) {
                lVar9 = (**(code **)(*(longlong *)(lVar10 + 0x38) + 0x40))();
              }
              else {
                lVar9 = (longlong)*(int *)(lVar10 + 0x28) + *(longlong *)(lVar10 + 0x20);
              }
            }
          }
          FUN_1424ac2c0(param_1,lVar9,0,param_2);
          if (0 < *param_2) {
            return 0;
          }
          if (*(char *)(param_1 + 0x82) != '\0') {
            return 1;
          }
          lVar10 = *(longlong *)(param_1 + 0x20);
          lVar8 = lVar9 - *(longlong *)(lVar10 + 0x20);
          if (((lVar8 < 0) || (*(int *)(lVar10 + 0x1c) <= lVar8)) ||
             (0xdbff < *(ushort *)(*(longlong *)(lVar10 + 0x30) + lVar8 * 2))) {
            FUN_14250e700(lVar10,lVar9);
          }
          else {
            *(int *)(lVar10 + 0x28) = (int)lVar8;
          }
        }
        if (lVar12 <= lVar9) goto LAB_1424ab4d5;
        lVar10 = *(longlong *)(param_1 + 0x20);
        iVar2 = *(int *)(lVar10 + 0x28);
        if ((iVar2 < *(int *)(lVar10 + 0x2c)) &&
           (*(ushort *)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar2 * 2) < 0xd800)) {
          *(int *)(lVar10 + 0x28) = iVar2 + 1;
          uVar6 = (uint)*(ushort *)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar2 * 2);
        }
        else {
          uVar6 = FUN_14250e570();
        }
        lVar10 = *(longlong *)(param_1 + 0x20);
        if (*(int *)(lVar10 + 0x1c) < *(int *)(lVar10 + 0x28)) {
          lVar9 = (**(code **)(*(longlong *)(lVar10 + 0x38) + 0x40))();
        }
        else {
          lVar9 = (longlong)*(int *)(lVar10 + 0x28) + *(longlong *)(lVar10 + 0x20);
        }
      } while ((*(code **)(param_1 + 0x128) == (code *)0x0) ||
              (cVar3 = (**(code **)(param_1 + 0x128))(*(undefined8 *)(param_1 + 0x130),lVar9),
              cVar3 != '\0'));
    }
    else {
      do {
        if (uVar6 == 10) {
          FUN_1424ac2c0(param_1,lVar9,0,param_2);
          if (0 < *param_2) {
            return 0;
          }
          if (*(char *)(param_1 + 0x82) != '\0') {
            return 1;
          }
          lVar10 = *(longlong *)(param_1 + 0x20);
          lVar8 = lVar9 - *(longlong *)(lVar10 + 0x20);
          if (((lVar8 < 0) || (*(int *)(lVar10 + 0x1c) <= lVar8)) ||
             (0xdbff < *(ushort *)(*(longlong *)(lVar10 + 0x30) + lVar8 * 2))) {
            FUN_14250e700(lVar10,lVar9);
          }
          else {
            *(int *)(lVar10 + 0x28) = (int)lVar8;
          }
        }
        if (lVar12 <= lVar9) goto LAB_1424ab4d5;
        lVar10 = *(longlong *)(param_1 + 0x20);
        iVar2 = *(int *)(lVar10 + 0x28);
        if ((iVar2 < *(int *)(lVar10 + 0x2c)) &&
           (*(ushort *)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar2 * 2) < 0xd800)) {
          *(int *)(lVar10 + 0x28) = iVar2 + 1;
          uVar6 = (uint)*(ushort *)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar2 * 2);
        }
        else {
          uVar6 = FUN_14250e570();
        }
        lVar10 = *(longlong *)(param_1 + 0x20);
        if (*(int *)(lVar10 + 0x1c) < *(int *)(lVar10 + 0x28)) {
          lVar9 = (**(code **)(*(longlong *)(lVar10 + 0x38) + 0x40))();
        }
        else {
          lVar9 = (longlong)*(int *)(lVar10 + 0x28) + *(longlong *)(lVar10 + 0x20);
        }
      } while ((*(code **)(param_1 + 0x128) == (code *)0x0) ||
              (cVar3 = (**(code **)(param_1 + 0x128))(*(undefined8 *)(param_1 + 0x130),lVar9),
              cVar3 != '\0'));
    }
    break;
  default:
                    /* WARNING: Subroutine does not return */
    abort();
  }
LAB_1424abc55:
  *param_2 = 0x10313;
  return 0;
}



// FUNCTION 1424abce0 FUN_1424abce0 body=1485 status=ok
// SIG undefined FUN_1424abce0(void)

undefined1 FUN_1424abce0(longlong param_1,int *param_2)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  lVar6 = *(longlong *)(param_1 + 0x90);
  iVar10 = (int)*(longlong *)(param_1 + 0x70);
  if ((int)lVar6 != 0) {
    iVar10 = (int)lVar6;
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30);
  iVar9 = iVar10;
  if (*(char *)(param_1 + 0x82) == '\0') {
    if (-1 < *(longlong *)(param_1 + 0x98)) goto LAB_1424abd96;
LAB_1424abd7e:
    lVar6 = *(longlong *)(param_1 + 8);
    iVar10 = *(int *)(param_1 + 0x78) - *(int *)(lVar6 + 0x7c);
    if (iVar9 <= iVar10) {
      switch(*(undefined4 *)(lVar6 + 0xa0)) {
      case 0:
        FUN_1424afe00(param_1,iVar9,0,param_2);
        if (0 < *param_2) {
          return 0;
        }
        while( true ) {
          if (*(char *)(param_1 + 0x82) != '\0') {
            return 1;
          }
          if (iVar10 <= iVar9) break;
          iVar11 = iVar9 + 1;
          if ((((*(ushort *)(lVar2 + (longlong)iVar9 * 2) & 0xfc00) == 0xd800) &&
              (*(longlong *)(param_1 + 0x78) != (longlong)iVar11)) &&
             ((*(ushort *)(lVar2 + (longlong)iVar11 * 2) & 0xfc00) == 0xdc00)) {
            iVar11 = iVar9 + 2;
          }
          iVar9 = iVar11;
          if ((*(code **)(param_1 + 0x128) != (code *)0x0) &&
             (cVar3 = (**(code **)(param_1 + 0x128))
                                (*(undefined8 *)(param_1 + 0x130),(longlong)iVar9), cVar3 == '\0'))
          goto LAB_1424ac2a5;
          FUN_1424afe00(param_1,iVar9,0,param_2);
          if (0 < *param_2) {
            return 0;
          }
        }
        goto LAB_1424abd96;
      case 1:
      case 5:
        uVar8 = *(uint *)(lVar6 + 0xb8);
        do {
          iVar11 = iVar9 + 1;
          uVar1 = *(ushort *)(lVar2 + (longlong)iVar9 * 2);
          uVar5 = (uint)uVar1;
          if ((((uVar1 & 0xfc00) == 0xd800) && (*(longlong *)(param_1 + 0x78) != (longlong)iVar11))
             && (uVar7 = (uint)*(ushort *)(lVar2 + (longlong)iVar11 * 2), (uVar7 & 0xfc00) == 0xdc00
                )) {
            iVar11 = iVar9 + 2;
            uVar5 = (uint)uVar1 * 0x400 + uVar7 + 0xfca02400;
          }
          if (uVar5 == uVar8) {
            FUN_1424afe00(param_1,iVar9,0,param_2);
            if (0 < *param_2) {
              return 0;
            }
            if (*(char *)(param_1 + 0x82) != '\0') {
              return 1;
            }
          }
          if (iVar10 < iVar11) goto LAB_1424abd8f;
          iVar9 = iVar11;
        } while ((*(code **)(param_1 + 0x128) == (code *)0x0) ||
                (cVar3 = (**(code **)(param_1 + 0x128))
                                   (*(undefined8 *)(param_1 + 0x130),(longlong)iVar11),
                cVar3 != '\0'));
        break;
      case 2:
        do {
          iVar11 = iVar9 + 1;
          uVar1 = *(ushort *)(lVar2 + (longlong)iVar9 * 2);
          uVar8 = (uint)uVar1;
          if ((uVar1 & 0xfc00) == 0xd800) {
            if ((*(longlong *)(param_1 + 0x78) != (longlong)iVar11) &&
               (uVar5 = (uint)*(ushort *)(lVar2 + (longlong)iVar11 * 2), (uVar5 & 0xfc00) == 0xdc00)
               ) {
              iVar11 = iVar9 + 2;
              uVar8 = (uint)uVar1 * 0x400 + uVar5 + 0xfca02400;
            }
LAB_1424abfd0:
            bVar4 = FUN_142512880(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0xb0),uVar8);
          }
          else {
            if (0xff < uVar1) goto LAB_1424abfd0;
            bVar4 = *(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) +
                             (ulonglong)(uVar1 >> 3)) >> (uVar1 & 7) & 1;
          }
          if (bVar4 != 0) {
            FUN_1424afe00(param_1,iVar9,0,param_2);
            if (0 < *param_2) {
              return 0;
            }
            if (*(char *)(param_1 + 0x82) != '\0') {
              return 1;
            }
          }
          if (iVar10 < iVar11) goto LAB_1424abd8f;
          iVar9 = iVar11;
        } while ((*(code **)(param_1 + 0x128) == (code *)0x0) ||
                (cVar3 = (**(code **)(param_1 + 0x128))
                                   (*(undefined8 *)(param_1 + 0x130),(longlong)iVar11),
                cVar3 != '\0'));
        break;
      case 3:
        if (*(longlong *)(param_1 + 0x70) < (longlong)iVar9) {
          *(undefined1 *)(param_1 + 0x82) = 0;
          return 0;
        }
        FUN_1424afe00(param_1,iVar9,0,param_2);
        if (*param_2 < 1) {
          return *(undefined1 *)(param_1 + 0x82);
        }
        return 0;
      case 4:
        iVar11 = iVar9;
        if (*(longlong *)(param_1 + 0x50) == (longlong)iVar9) {
          FUN_1424afe00(param_1,iVar9,0,param_2);
          if (0 < *param_2) {
            return 0;
          }
          if (*(char *)(param_1 + 0x82) != '\0') {
            return 1;
          }
          iVar11 = iVar9 + 1;
          if ((((*(ushort *)(lVar2 + (longlong)iVar9 * 2) & 0xfc00) == 0xd800) &&
              (*(longlong *)(param_1 + 0x78) != (longlong)iVar11)) &&
             ((*(ushort *)(lVar2 + (longlong)iVar11 * 2) & 0xfc00) == 0xdc00)) {
            iVar11 = iVar9 + 2;
          }
        }
        if ((*(byte *)(*(longlong *)(param_1 + 8) + 0x18) & 1) == 0) {
          do {
            lVar6 = (longlong)iVar11;
            uVar1 = *(ushort *)(lVar2 + -2 + lVar6 * 2);
            iVar9 = iVar11;
            if ((uVar1 & 0xdf50) == 0) {
              if (uVar1 < 0x85) {
                if (2 < uVar1 - 10) {
                  if (uVar1 != 0xd) goto joined_r0x0001424ac19e;
                  if (lVar6 < *(longlong *)(param_1 + 0x78)) {
                    iVar11 = iVar11 + (uint)(*(short *)(lVar2 + lVar6 * 2) == 10);
                  }
                }
              }
              else if ((1 < uVar1 - 0x2028) && (uVar1 != 0x85)) goto joined_r0x0001424ac19e;
              FUN_1424afe00(param_1,iVar11,0,param_2);
              if (0 < *param_2) {
                return 0;
              }
              iVar9 = iVar11;
              if (*(char *)(param_1 + 0x82) != '\0') {
                return 1;
              }
            }
joined_r0x0001424ac19e:
            if (iVar10 <= iVar9) goto LAB_1424abd8f;
            iVar11 = iVar9 + 1;
            if ((((*(ushort *)(lVar2 + (longlong)iVar9 * 2) & 0xfc00) == 0xd800) &&
                (*(longlong *)(param_1 + 0x78) != (longlong)iVar11)) &&
               ((*(ushort *)(lVar2 + (longlong)iVar11 * 2) & 0xfc00) == 0xdc00)) {
              iVar11 = iVar9 + 2;
            }
          } while ((*(code **)(param_1 + 0x128) == (code *)0x0) ||
                  (cVar3 = (**(code **)(param_1 + 0x128))
                                     (*(undefined8 *)(param_1 + 0x130),(longlong)iVar11),
                  cVar3 != '\0'));
        }
        else {
          do {
            if (*(short *)(lVar2 + -2 + (longlong)iVar11 * 2) == 10) {
              FUN_1424afe00(param_1,iVar11,0,param_2);
              if (0 < *param_2) {
                return 0;
              }
              if (*(char *)(param_1 + 0x82) != '\0') {
                return 1;
              }
            }
            if (iVar10 <= iVar11) goto LAB_1424abd8f;
            iVar9 = iVar11 + 1;
            if ((((*(ushort *)(lVar2 + (longlong)iVar11 * 2) & 0xfc00) == 0xd800) &&
                (*(longlong *)(param_1 + 0x78) != (longlong)iVar9)) &&
               ((*(ushort *)(lVar2 + (longlong)iVar9 * 2) & 0xfc00) == 0xdc00)) {
              iVar9 = iVar11 + 2;
            }
            iVar11 = iVar9;
          } while ((*(code **)(param_1 + 0x128) == (code *)0x0) ||
                  (cVar3 = (**(code **)(param_1 + 0x128))
                                     (*(undefined8 *)(param_1 + 0x130),(longlong)iVar9),
                  cVar3 != '\0'));
        }
        break;
      default:
                    /* WARNING: Subroutine does not return */
        abort();
      }
LAB_1424ac2a5:
      *param_2 = 0x10313;
      return 0;
    }
  }
  else {
    *(longlong *)(param_1 + 0x98) = lVar6;
    if (*(longlong *)(param_1 + 0x88) != lVar6) goto LAB_1424abd7e;
    if ((longlong)iVar10 < *(longlong *)(param_1 + 0x78)) {
      iVar9 = iVar10 + 1;
      if ((((*(ushort *)(lVar2 + (longlong)iVar10 * 2) & 0xfc00) == 0xd800) &&
          (*(longlong *)(param_1 + 0x30) != (longlong)iVar9)) &&
         ((*(ushort *)(lVar2 + (longlong)iVar9 * 2) & 0xfc00) == 0xdc00)) {
        iVar9 = iVar10 + 2;
      }
      goto LAB_1424abd7e;
    }
  }
LAB_1424abd8f:
  *(undefined1 *)(param_1 + 0x82) = 0;
LAB_1424abd96:
  *(undefined1 *)(param_1 + 0xa8) = 1;
  return 0;
}



// FUNCTION 1424ac2c0 FUN_1424ac2c0 body=14559 status=ok
// SIG undefined FUN_1424ac2c0(void)

void FUN_1424ac2c0(longlong param_1,longlong param_2,char param_3,int *param_4)

{
  longlong *plVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  longlong lVar7;
  char cVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong *plVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  longlong *plVar25;
  uint uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  longlong *plVar31;
  int *piVar32;
  ulonglong uVar33;
  longlong *plVar34;
  uint uVar35;
  longlong *plVar36;
  uint uVar37;
  bool bVar38;
  undefined1 local_b0 [24];
  longlong local_98;
  undefined8 local_90;
  undefined1 local_88 [24];
  longlong local_70;
  char local_61;
  longlong local_60;
  longlong *local_58;
  int *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (0 < *param_4) {
    return;
  }
  lVar15 = *(longlong *)(param_1 + 8);
  if ((*(ushort *)(lVar15 + 0x30) & 0x11) == 0) {
    if ((*(ushort *)(lVar15 + 0x30) & 2) == 0) {
      local_70 = *(longlong *)(lVar15 + 0x40);
    }
    else {
      local_70 = lVar15 + 0x32;
    }
  }
  else {
    local_70 = 0;
  }
  local_60 = *(longlong *)(*(longlong *)(lVar15 + 0x20) + 0x18);
  local_90 = *(undefined8 *)(lVar15 + 0x68);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(lVar15 + 0x80);
  local_50 = param_4;
  FUN_14250e230(*(undefined8 *)(param_1 + 0xb0));
  lVar15 = *(longlong *)(param_1 + 0xb0);
  piVar32 = (int *)(param_1 + 0x13c);
  iVar13 = *(int *)(*(longlong *)(param_1 + 8) + 0x80);
  iVar11 = *(int *)(lVar15 + 8);
  iVar22 = iVar11 + iVar13;
  if ((iVar22 < 0) || (*(int *)(lVar15 + 0xc) < iVar22)) {
    cVar8 = FUN_14250e240(lVar15,iVar22,piVar32);
    if (cVar8 != '\0') {
      iVar11 = *(int *)(lVar15 + 8);
      iVar22 = iVar13 + iVar11;
      goto LAB_1424ac38a;
    }
    plVar34 = (longlong *)0x0;
  }
  else {
LAB_1424ac38a:
    plVar34 = (longlong *)((longlong)iVar11 * 8 + *(longlong *)(lVar15 + 0x18));
    *(int *)(lVar15 + 8) = iVar22;
  }
  iVar13 = *piVar32;
  if (iVar13 < 1) {
    if (2 < *(int *)(*(longlong *)(param_1 + 8) + 0x80)) {
      lVar15 = 0;
      do {
        plVar34[lVar15 + 2] = -1;
        lVar15 = lVar15 + 1;
      } while (lVar15 < (longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x80) + -2);
      iVar13 = *piVar32;
      if (0 < iVar13) goto LAB_1424ac3a4;
    }
    plVar34[1] = 0;
    *plVar34 = param_2;
    if (0 < *(int *)(*(longlong *)(param_1 + 8) + 0x84)) {
      lVar15 = 0;
      do {
        *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + lVar15 * 8) = 0;
        lVar15 = lVar15 + 1;
      } while (lVar15 < *(int *)(*(longlong *)(param_1 + 8) + 0x84));
    }
    local_58 = (longlong *)(param_1 + 0x20);
    piVar32 = local_50;
    local_98 = param_2;
    local_61 = param_3;
    do {
      plVar36 = local_58;
      lVar18 = plVar34[1];
      uVar28 = *(ulonglong *)(local_60 + lVar18 * 8);
      lVar15 = lVar18 + 1;
      plVar34[1] = lVar15;
      uVar14 = (uint)uVar28;
      uVar23 = (uint)(uVar28 >> 0x18) & 0xff;
      if (0x39 < uVar23 - 1) {
switchD_1424ac49e_caseD_5:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar37 = uVar14 & 0xffffff;
      switch(uVar23) {
      case 1:
        goto switchD_1424ac49e_caseD_1;
      case 2:
        if ((local_61 != '\0') && (*plVar34 != *(longlong *)(param_1 + 0x78)))
        goto switchD_1424ac49e_caseD_1;
        *(undefined1 *)(param_1 + 0x82) = 1;
        *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x90);
        *(longlong *)(param_1 + 0x88) = local_98;
        *(longlong *)(param_1 + 0x90) = *plVar34;
        goto LAB_1424afba0;
      case 3:
        if (*plVar34 < *(longlong *)(param_1 + 0x78)) {
          lVar15 = *local_58;
          lVar18 = *plVar34 - *(longlong *)(lVar15 + 0x20);
          if (((lVar18 < 0) || (*(int *)(lVar15 + 0x1c) <= lVar18)) ||
             (0xdbff < *(ushort *)(*(longlong *)(lVar15 + 0x30) + lVar18 * 2))) {
            FUN_14250e700();
          }
          else {
            *(int *)(lVar15 + 0x28) = (int)lVar18;
          }
          lVar15 = *plVar36;
          iVar13 = *(int *)(lVar15 + 0x28);
          if (iVar13 < *(int *)(lVar15 + 0x2c)) {
            if (*(ushort *)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar13 * 2) < 0xd800) {
              *(int *)(lVar15 + 0x28) = iVar13 + 1;
              uVar23 = (uint)*(ushort *)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar13 * 2);
              goto joined_r0x0001424ae29f;
            }
          }
          uVar23 = FUN_14250e570();
          goto joined_r0x0001424ae29f;
        }
LAB_1424ad62a:
        *(undefined1 *)(param_1 + 0xa8) = 1;
        goto switchD_1424ac49e_caseD_1;
      case 4:
        uVar23 = *(uint *)(local_60 + 8 + lVar18 * 8) & 0xffffff;
        plVar34[1] = lVar18 + 2;
        lVar15 = *local_58;
        lVar18 = *plVar34 - *(longlong *)(lVar15 + 0x20);
        if (((lVar18 < 0) || (*(int *)(lVar15 + 0x1c) <= lVar18)) ||
           (0xdbff < *(ushort *)(*(longlong *)(lVar15 + 0x30) + lVar18 * 2))) {
          FUN_14250e700();
          piVar32 = local_50;
        }
        else {
          *(int *)(lVar15 + 0x28) = (int)lVar18;
        }
        lVar18 = local_70 + (ulonglong)(uVar14 & 0xffffff) * 2;
        uVar14 = 0;
        do {
          lVar15 = *plVar36;
          iVar13 = *(int *)(lVar15 + 0x28);
          lVar19 = (longlong)iVar13;
          if ((int)uVar23 <= (int)uVar14) {
            if (*(int *)(lVar15 + 0x1c) < iVar13) goto LAB_1424aec3a;
            goto LAB_1424ae3d8;
          }
          if (*(int *)(lVar15 + 0x1c) < iVar13) {
            lVar19 = (**(code **)(*(longlong *)(lVar15 + 0x38) + 0x40))();
            piVar32 = local_50;
          }
          else {
            lVar19 = lVar19 + *(longlong *)(lVar15 + 0x20);
          }
          if (*(longlong *)(param_1 + 0x78) <= lVar19) goto LAB_1424ad62a;
          lVar15 = *plVar36;
          iVar13 = *(int *)(lVar15 + 0x28);
          if (iVar13 < *(int *)(lVar15 + 0x2c)) {
            if (0xd7ff < *(ushort *)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar13 * 2))
            goto LAB_1424ad5c0;
            *(int *)(lVar15 + 0x28) = iVar13 + 1;
            uVar37 = (uint)*(ushort *)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar13 * 2);
          }
          else {
LAB_1424ad5c0:
            uVar37 = FUN_14250e570();
            piVar32 = local_50;
          }
          uVar12 = uVar14 + 1;
          uVar2 = *(ushort *)(lVar18 + (longlong)(int)uVar14 * 2);
          uVar35 = (uint)uVar2;
          if ((((uVar35 & 0xfc00) == 0xd800) && (uVar12 != uVar23)) &&
             (uVar26 = (uint)*(ushort *)(lVar18 + (longlong)(int)uVar12 * 2),
             (uVar26 & 0xfc00) == 0xdc00)) {
            uVar12 = uVar14 + 2;
            uVar35 = (uint)uVar2 * 0x400 + uVar26 + 0xfca02400;
          }
          uVar14 = uVar12;
        } while (uVar35 == uVar37);
        goto switchD_1424ac49e_caseD_1;
      default:
        goto switchD_1424ac49e_caseD_5;
      case 6:
        if (0 < *piVar32) goto switchD_1424ac49e_caseD_e;
        lVar15 = *(longlong *)(param_1 + 0xb0);
        iVar13 = *(int *)(param_1 + 0x38);
        iVar11 = *(int *)(lVar15 + 8);
        iVar22 = iVar11 + iVar13;
        if ((iVar22 < 0) || (*(int *)(lVar15 + 0xc) < iVar22)) {
          cVar8 = FUN_14250e240(lVar15,iVar22,piVar32);
          piVar32 = local_50;
          if (cVar8 != '\0') {
            iVar11 = *(int *)(lVar15 + 8);
            iVar22 = iVar13 + iVar11;
            goto LAB_1424ac5a7;
          }
          plVar36 = (longlong *)0x0;
          iVar13 = *local_50;
          piVar6 = local_50;
        }
        else {
LAB_1424ac5a7:
          plVar36 = (longlong *)((longlong)iVar11 * 8 + *(longlong *)(lVar15 + 0x18));
          *(int *)(lVar15 + 8) = iVar22;
          iVar13 = *piVar32;
          piVar6 = local_50;
        }
        local_50 = piVar32;
        if (0 < iVar13) goto LAB_1424afb8c;
        uVar27 = (ulonglong)*(int *)(param_1 + 0x38);
        plVar25 = plVar36 + -uVar27;
        uVar28 = uVar27 - 1 & 0x1fffffffffffffff;
        plVar34 = plVar25;
        plVar21 = plVar36;
        piVar32 = local_50;
        if ((uVar28 < 9) || ((uVar27 & 0x1ffffffffffffffc) == 0)) {
LAB_1424ac660:
          do {
            lVar15 = *plVar34;
            plVar34 = plVar34 + 1;
            *plVar21 = lVar15;
            plVar21 = plVar21 + 1;
          } while (plVar34 != plVar36);
        }
        else {
          uVar28 = uVar28 + 1;
          uVar33 = uVar28 & 0xfffffffffffffffc;
          plVar34 = plVar25 + uVar33;
          plVar21 = plVar36 + uVar33;
          plVar31 = plVar36 + 2;
          uVar29 = uVar33;
          do {
            plVar1 = plVar31 + (-2 - uVar27);
            uVar4 = *(undefined4 *)((longlong)plVar1 + 4);
            lVar19 = plVar1[1];
            uVar5 = *(undefined4 *)((longlong)plVar1 + 0xc);
            lVar15 = plVar31[-uVar27];
            lVar18 = (plVar31 + -uVar27)[1];
            *(int *)(plVar31 + -2) = (int)*plVar1;
            *(undefined4 *)((longlong)plVar31 + -0xc) = uVar4;
            *(int *)(plVar31 + -1) = (int)lVar19;
            *(undefined4 *)((longlong)plVar31 + -4) = uVar5;
            *plVar31 = lVar15;
            plVar31[1] = lVar18;
            plVar31 = plVar31 + 4;
            uVar29 = uVar29 - 4;
          } while (uVar29 != 0);
          piVar32 = piVar6;
          if (uVar28 != uVar33) goto LAB_1424ac660;
        }
        iVar13 = *(int *)(param_1 + 0x110);
        *(int *)(param_1 + 0x110) = iVar13 + -1;
        local_50 = piVar6;
        if (iVar13 < 2) {
          *(undefined4 *)(param_1 + 0x110) = 10000;
          iVar13 = *(int *)(param_1 + 0x10c) + 1;
          *(int *)(param_1 + 0x10c) = iVar13;
          if (*(code **)(param_1 + 0x118) == (code *)0x0) {
LAB_1424ac6ca:
            if ((*(int *)(param_1 + 0x108) < 1) ||
               (iVar11 = 0x10312, iVar13 < *(int *)(param_1 + 0x108))) goto LAB_1424aee9f;
          }
          else {
            cVar8 = (**(code **)(param_1 + 0x118))(*(undefined8 *)(param_1 + 0x120));
            piVar32 = local_50;
            if (cVar8 != '\0') {
              iVar13 = *(int *)(param_1 + 0x10c);
              goto LAB_1424ac6ca;
            }
            iVar11 = 0x10313;
          }
          *piVar32 = iVar11;
        }
LAB_1424aee9f:
        plVar25[1] = (ulonglong)(uVar14 & 0xffffff);
        plVar34 = plVar36;
        break;
      case 7:
        goto switchD_1424ac49e_caseD_7;
      case 8:
        plVar34[(ulonglong)uVar37 + 4] = *plVar34;
        goto switchD_1424ac49e_caseD_7;
      case 9:
        plVar34[(ulonglong)(uVar14 & 0xffffff) + 2] = plVar34[(ulonglong)uVar37 + 4];
        plVar34[(ulonglong)uVar37 + 3] = *plVar34;
        goto switchD_1424ac49e_caseD_7;
      case 10:
        if (*(longlong *)(param_1 + 0x78) <= *plVar34) goto LAB_1424ad62a;
        lVar15 = *local_58;
        lVar18 = *plVar34 - *(longlong *)(lVar15 + 0x20);
        if (((lVar18 < 0) || (*(int *)(lVar15 + 0x1c) <= lVar18)) ||
           (0xdbff < *(ushort *)(*(longlong *)(lVar15 + 0x30) + lVar18 * 2))) {
          FUN_14250e700();
        }
        else {
          *(int *)(lVar15 + 0x28) = (int)lVar18;
        }
        lVar15 = *plVar36;
        iVar13 = *(int *)(lVar15 + 0x28);
        if (iVar13 < *(int *)(lVar15 + 0x2c)) {
          if (0xd7ff < *(ushort *)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar13 * 2))
          goto LAB_1424ae119;
          *(int *)(lVar15 + 0x28) = iVar13 + 1;
          uVar23 = (uint)*(ushort *)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar13 * 2);
        }
        else {
LAB_1424ae119:
          uVar23 = FUN_14250e570();
        }
        if ((int)uVar23 < 0x100) {
          bVar10 = *(byte *)((longlong)((int)uVar23 >> 3) +
                            (ulonglong)(uVar14 & 0x7fffff) * 0x20 +
                            *(longlong *)(*(longlong *)(param_1 + 8) + 0x98)) >> (uVar23 & 7) & 1;
        }
        else {
          bVar10 = FUN_142512880(*(undefined8 *)
                                  (*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) +
                                  (ulonglong)(uVar14 & 0x7fffff) * 8),uVar23);
        }
        piVar32 = local_50;
        bVar9 = (uVar28 & 0x800000) == 0;
        if (bVar10 == 0) {
          bVar9 = (byte)((uVar14 & 0x800000) >> 0x17);
        }
        goto joined_r0x0001424ae641;
      case 0xb:
        if (*(longlong *)(param_1 + 0x78) <= *plVar34) goto LAB_1424ad62a;
        lVar15 = *local_58;
        lVar18 = *plVar34 - *(longlong *)(lVar15 + 0x20);
        if (((lVar18 < 0) || (*(int *)(lVar15 + 0x1c) <= lVar18)) ||
           (0xdbff < *(ushort *)(*(longlong *)(lVar15 + 0x30) + lVar18 * 2))) {
          FUN_14250e700();
        }
        else {
          *(int *)(lVar15 + 0x28) = (int)lVar18;
        }
        lVar15 = *plVar36;
        iVar13 = *(int *)(lVar15 + 0x28);
        if (iVar13 < *(int *)(lVar15 + 0x2c)) {
          if (0xd7ff < *(ushort *)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar13 * 2))
          goto LAB_1424ae15a;
          *(int *)(lVar15 + 0x28) = iVar13 + 1;
          uVar23 = (uint)*(ushort *)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar13 * 2);
        }
        else {
LAB_1424ae15a:
          uVar23 = FUN_14250e570();
        }
        if ((int)uVar23 < 0x100) {
          piVar32 = local_50;
          bVar9 = *(byte *)((longlong)((int)uVar23 >> 3) +
                           (ulonglong)(uVar14 & 0xffffff) * 0x20 +
                           *(longlong *)(*(longlong *)(param_1 + 8) + 0x70)) >> (uVar23 & 7) & 1;
        }
        else {
          uVar16 = FUN_142516630(local_90,uVar37);
          bVar9 = FUN_142512880(uVar16,uVar23);
          piVar32 = local_50;
        }
joined_r0x0001424ae641:
        local_50 = piVar32;
        if (bVar9 != 0) {
LAB_1424aec2a:
          lVar15 = *plVar36;
LAB_1424aec2d:
          lVar19 = (longlong)*(int *)(lVar15 + 0x28);
          piVar32 = local_50;
          if (*(int *)(lVar15 + 0x1c) < *(int *)(lVar15 + 0x28)) {
LAB_1424aec3a:
            lVar15 = (**(code **)(*(longlong *)(lVar15 + 0x38) + 0x40))();
            *plVar34 = lVar15;
            piVar32 = local_50;
          }
          else {
LAB_1424ae3d8:
            *plVar34 = lVar19 + *(longlong *)(lVar15 + 0x20);
          }
          goto switchD_1424ac49e_caseD_7;
        }
        goto switchD_1424ac49e_caseD_1;
      case 0xc:
        if (*(longlong *)(param_1 + 0x78) <= *plVar34) goto LAB_1424ad62a;
        lVar15 = *local_58;
        lVar18 = *plVar34 - *(longlong *)(lVar15 + 0x20);
        if (((lVar18 < 0) || (*(int *)(lVar15 + 0x1c) <= lVar18)) ||
           (0xdbff < *(ushort *)(*(longlong *)(lVar15 + 0x30) + lVar18 * 2))) {
          FUN_14250e700();
        }
        else {
          *(int *)(lVar15 + 0x28) = (int)lVar18;
        }
        lVar15 = *plVar36;
        iVar13 = *(int *)(lVar15 + 0x28);
        if (iVar13 < *(int *)(lVar15 + 0x2c)) {
          if (0xd7ff < *(ushort *)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar13 * 2))
          goto LAB_1424ae1a4;
          *(int *)(lVar15 + 0x28) = iVar13 + 1;
          uVar23 = (uint)*(ushort *)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar13 * 2);
        }
        else {
LAB_1424ae1a4:
          uVar23 = FUN_14250e570();
        }
        if (((uVar23 & 0xffffdf50) == 0) &&
           (((piVar32 = local_50, uVar23 - 10 < 4 || (uVar23 - 0x2028 < 2)) || (uVar23 == 0x85))))
        goto switchD_1424ac49e_caseD_1;
        goto LAB_1424aec2a;
      case 0xd:
switchD_1424ac49e_caseD_d:
        plVar34[1] = (ulonglong)(uVar14 & 0xffffff);
        goto switchD_1424ac49e_caseD_7;
      case 0xe:
switchD_1424ac49e_caseD_e:
        goto LAB_1424afb96;
      case 0xf:
        if (*piVar32 < 1) {
          lVar18 = *(longlong *)(param_1 + 0xb0);
          iVar13 = *(int *)(param_1 + 0x38);
          iVar11 = *(int *)(lVar18 + 8);
          iVar22 = iVar11 + iVar13;
          if ((iVar22 < 0) || (*(int *)(lVar18 + 0xc) < iVar22)) {
            cVar8 = FUN_14250e240(lVar18,iVar22,piVar32);
            piVar32 = local_50;
            if (cVar8 != '\0') {
              iVar11 = *(int *)(lVar18 + 8);
              iVar22 = iVar13 + iVar11;
              goto LAB_1424adfef;
            }
            plVar36 = (longlong *)0x0;
            iVar13 = *local_50;
          }
          else {
LAB_1424adfef:
            plVar36 = (longlong *)((longlong)iVar11 * 8 + *(longlong *)(lVar18 + 0x18));
            *(int *)(lVar18 + 8) = iVar22;
            iVar13 = *piVar32;
          }
          if (iVar13 < 1) {
            uVar27 = (ulonglong)*(int *)(param_1 + 0x38);
            plVar25 = plVar36 + -uVar27;
            uVar28 = uVar27 - 1 & 0x1fffffffffffffff;
            plVar34 = plVar25;
            plVar21 = plVar36;
            if ((uVar28 < 9) || ((uVar27 & 0x1ffffffffffffffc) == 0)) {
LAB_1424af049:
              do {
                lVar18 = *plVar34;
                plVar34 = plVar34 + 1;
                *plVar21 = lVar18;
                plVar21 = plVar21 + 1;
              } while (plVar34 != plVar36);
            }
            else {
              uVar28 = uVar28 + 1;
              uVar33 = uVar28 & 0xfffffffffffffffc;
              plVar34 = plVar25 + uVar33;
              plVar21 = plVar36 + uVar33;
              plVar31 = plVar36 + 2;
              uVar29 = uVar33;
              do {
                plVar1 = plVar31 + (-2 - uVar27);
                uVar4 = *(undefined4 *)((longlong)plVar1 + 4);
                lVar17 = plVar1[1];
                uVar5 = *(undefined4 *)((longlong)plVar1 + 0xc);
                lVar18 = plVar31[-uVar27];
                lVar19 = (plVar31 + -uVar27)[1];
                *(int *)(plVar31 + -2) = (int)*plVar1;
                *(undefined4 *)((longlong)plVar31 + -0xc) = uVar4;
                *(int *)(plVar31 + -1) = (int)lVar17;
                *(undefined4 *)((longlong)plVar31 + -4) = uVar5;
                *plVar31 = lVar18;
                plVar31[1] = lVar19;
                plVar31 = plVar31 + 4;
                uVar29 = uVar29 - 4;
              } while (uVar29 != 0);
              piVar32 = local_50;
              if (uVar28 != uVar33) goto LAB_1424af049;
            }
            iVar13 = *(int *)(param_1 + 0x110);
            *(int *)(param_1 + 0x110) = iVar13 + -1;
            if (iVar13 < 2) {
              *(undefined4 *)(param_1 + 0x110) = 10000;
              iVar13 = *(int *)(param_1 + 0x10c) + 1;
              *(int *)(param_1 + 0x10c) = iVar13;
              if (*(code **)(param_1 + 0x118) == (code *)0x0) {
LAB_1424af0b3:
                if ((*(int *)(param_1 + 0x108) < 1) ||
                   (iVar11 = 0x10312, iVar13 < *(int *)(param_1 + 0x108))) goto LAB_1424afa03;
              }
              else {
                cVar8 = (**(code **)(param_1 + 0x118))(*(undefined8 *)(param_1 + 0x120));
                piVar32 = local_50;
                if (cVar8 != '\0') {
                  iVar13 = *(int *)(param_1 + 0x10c);
                  goto LAB_1424af0b3;
                }
                iVar11 = 0x10313;
              }
              *piVar32 = iVar11;
            }
LAB_1424afa03:
            plVar25[1] = lVar15;
            plVar34 = plVar36;
          }
          else {
            *piVar32 = 0x10311;
          }
        }
        plVar34[1] = (ulonglong)(uVar14 & 0xffffff);
        break;
      case 0x10:
        cVar8 = FUN_1424b5af0(param_1,*plVar34);
        goto LAB_1424ad389;
      case 0x11:
        if (*(char *)(param_1 + 0x82) == '\0') {
          lVar15 = *(longlong *)(param_1 + 0x70);
        }
        else {
          lVar15 = *(longlong *)(param_1 + 0x90);
        }
        if (*plVar34 != lVar15) goto switchD_1424ac49e_caseD_1;
        break;
      case 0x12:
        uVar28 = (ulonglong)
                 ((uint)*(undefined8 *)(local_60 + -8 + (ulonglong)uVar37 * 8) & 0xffffff);
        if (*plVar34 <= plVar34[uVar28 + 2]) goto switchD_1424ac49e_caseD_7;
        if (*piVar32 < 1) {
          lVar18 = *(longlong *)(param_1 + 0xb0);
          iVar13 = *(int *)(param_1 + 0x38);
          iVar11 = *(int *)(lVar18 + 8);
          iVar22 = iVar11 + iVar13;
          if ((iVar22 < 0) || (*(int *)(lVar18 + 0xc) < iVar22)) {
            cVar8 = FUN_14250e240(lVar18,iVar22,piVar32);
            piVar32 = local_50;
            if (cVar8 != '\0') {
              iVar11 = *(int *)(lVar18 + 8);
              iVar22 = iVar13 + iVar11;
              goto LAB_1424aebe6;
            }
            plVar36 = (longlong *)0x0;
            iVar13 = *local_50;
          }
          else {
LAB_1424aebe6:
            plVar36 = (longlong *)((longlong)iVar11 * 8 + *(longlong *)(lVar18 + 0x18));
            *(int *)(lVar18 + 8) = iVar22;
            iVar13 = *piVar32;
          }
          if (iVar13 < 1) {
            uVar29 = (ulonglong)*(int *)(param_1 + 0x38);
            plVar25 = plVar36 + -uVar29;
            uVar27 = uVar29 - 1 & 0x1fffffffffffffff;
            plVar34 = plVar25;
            plVar21 = plVar36;
            if ((uVar27 < 9) || ((uVar29 & 0x1ffffffffffffffc) == 0)) {
LAB_1424af392:
              do {
                lVar18 = *plVar34;
                plVar34 = plVar34 + 1;
                *plVar21 = lVar18;
                plVar21 = plVar21 + 1;
              } while (plVar34 != plVar36);
            }
            else {
              uVar27 = uVar27 + 1;
              uVar30 = uVar27 & 0xfffffffffffffffc;
              plVar34 = plVar25 + uVar30;
              plVar21 = plVar36 + uVar30;
              plVar31 = plVar36 + 2;
              uVar33 = uVar30;
              do {
                plVar1 = plVar31 + (-2 - uVar29);
                uVar4 = *(undefined4 *)((longlong)plVar1 + 4);
                lVar17 = plVar1[1];
                uVar5 = *(undefined4 *)((longlong)plVar1 + 0xc);
                lVar18 = plVar31[-uVar29];
                lVar19 = (plVar31 + -uVar29)[1];
                *(int *)(plVar31 + -2) = (int)*plVar1;
                *(undefined4 *)((longlong)plVar31 + -0xc) = uVar4;
                *(int *)(plVar31 + -1) = (int)lVar17;
                *(undefined4 *)((longlong)plVar31 + -4) = uVar5;
                *plVar31 = lVar18;
                plVar31[1] = lVar19;
                plVar31 = plVar31 + 4;
                uVar33 = uVar33 - 4;
              } while (uVar33 != 0);
              piVar32 = local_50;
              if (uVar27 != uVar30) goto LAB_1424af392;
            }
            iVar13 = *(int *)(param_1 + 0x110);
            *(int *)(param_1 + 0x110) = iVar13 + -1;
            if (iVar13 < 2) {
              *(undefined4 *)(param_1 + 0x110) = 10000;
              iVar13 = *(int *)(param_1 + 0x10c) + 1;
              *(int *)(param_1 + 0x10c) = iVar13;
              if (*(code **)(param_1 + 0x118) == (code *)0x0) {
LAB_1424af3fc:
                if ((*(int *)(param_1 + 0x108) < 1) ||
                   (iVar11 = 0x10312, iVar13 < *(int *)(param_1 + 0x108))) goto LAB_1424afa7c;
              }
              else {
                cVar8 = (**(code **)(param_1 + 0x118))(*(undefined8 *)(param_1 + 0x120));
                piVar32 = local_50;
                if (cVar8 != '\0') {
                  iVar13 = *(int *)(param_1 + 0x10c);
                  goto LAB_1424af3fc;
                }
                iVar11 = 0x10313;
              }
              *piVar32 = iVar11;
            }
LAB_1424afa7c:
            plVar25[1] = lVar15;
            plVar34 = plVar36;
          }
          else {
            *piVar32 = 0x10311;
          }
        }
        plVar34[1] = (ulonglong)(uVar14 & 0xffffff);
        plVar34[uVar28 + 2] = *plVar34;
        break;
      case 0x13:
        if (*(longlong *)(param_1 + 0x78) <= *plVar34) goto LAB_1424ad62a;
        lVar15 = *local_58;
        lVar18 = *plVar34 - *(longlong *)(lVar15 + 0x20);
        if (((lVar18 < 0) || (*(int *)(lVar15 + 0x1c) <= lVar18)) ||
           (0xdbff < *(ushort *)(*(longlong *)(lVar15 + 0x30) + lVar18 * 2))) {
          FUN_14250e700();
        }
        else {
          *(int *)(lVar15 + 0x28) = (int)lVar18;
        }
        lVar15 = *plVar36;
        iVar13 = *(int *)(lVar15 + 0x28);
        if (iVar13 < *(int *)(lVar15 + 0x2c)) {
          if (0xd7ff < *(ushort *)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar13 * 2))
          goto LAB_1424ae1e3;
          *(int *)(lVar15 + 0x28) = iVar13 + 1;
          uVar23 = (uint)*(ushort *)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar13 * 2);
        }
        else {
LAB_1424ae1e3:
          uVar23 = FUN_14250e570();
        }
        lVar15 = *plVar36;
        if (*(int *)(lVar15 + 0x1c) < *(int *)(lVar15 + 0x28)) {
          lVar15 = (**(code **)(*(longlong *)(lVar15 + 0x38) + 0x40))();
        }
        else {
          lVar15 = (longlong)*(int *)(lVar15 + 0x28) + *(longlong *)(lVar15 + 0x20);
        }
        *plVar34 = lVar15;
        lVar15 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x90);
        cVar8 = FUN_142512880(*(undefined8 *)(lVar15 + 0x28),uVar23);
        if (cVar8 == '\0') {
          cVar8 = FUN_142512880(*(undefined8 *)(lVar15 + 0x38),uVar23);
          if (cVar8 == '\0') {
            cVar8 = FUN_142512880(*(undefined8 *)(lVar15 + 0x40),uVar23);
            if (cVar8 == '\0') {
              cVar8 = FUN_142512880(*(undefined8 *)(lVar15 + 0x48),uVar23);
              if (cVar8 != '\0') {
LAB_1424af7b9:
                while (*plVar34 < *(longlong *)(param_1 + 0x78)) {
                  lVar18 = *plVar36;
                  iVar13 = *(int *)(lVar18 + 0x28);
                  if (iVar13 < *(int *)(lVar18 + 0x2c)) {
                    if (0xd7ff < *(ushort *)(*(longlong *)(lVar18 + 0x30) + (longlong)iVar13 * 2))
                    goto LAB_1424af7f3;
                    *(int *)(lVar18 + 0x28) = iVar13 + 1;
                    uVar23 = (uint)*(ushort *)(*(longlong *)(lVar18 + 0x30) + (longlong)iVar13 * 2);
                  }
                  else {
LAB_1424af7f3:
                    uVar23 = FUN_14250e570();
                  }
                  lVar18 = *plVar36;
                  if (*(int *)(lVar18 + 0x1c) < *(int *)(lVar18 + 0x28)) {
                    lVar18 = (**(code **)(*(longlong *)(lVar18 + 0x38) + 0x40))();
                  }
                  else {
                    lVar18 = (longlong)*(int *)(lVar18 + 0x28) + *(longlong *)(lVar18 + 0x20);
                  }
                  *plVar34 = lVar18;
                  cVar8 = FUN_142512880(*(undefined8 *)(lVar15 + 0x58),uVar23);
                  if (cVar8 == '\0') {
                    cVar8 = FUN_142512880(*(undefined8 *)(lVar15 + 0x60),uVar23);
                    goto joined_r0x0001424af81b;
                  }
                }
                goto LAB_1424afaba;
              }
              cVar8 = FUN_142512880(*(undefined8 *)(lVar15 + 0x50),uVar23);
              if (cVar8 == '\0') {
                cVar8 = FUN_142512880(*(undefined8 *)(lVar15 + 0x58),uVar23);
                if (cVar8 != '\0') goto LAB_1424af7b9;
                cVar8 = FUN_142512880(*(undefined8 *)(lVar15 + 0x60),uVar23);
                if (cVar8 == '\0') goto LAB_1424ae673;
              }
LAB_1424af864:
              do {
                if (*(longlong *)(param_1 + 0x78) <= *plVar34) goto LAB_1424afaba;
                lVar18 = *plVar36;
                iVar13 = *(int *)(lVar18 + 0x28);
                if (iVar13 < *(int *)(lVar18 + 0x2c)) {
                  if (0xd7ff < *(ushort *)(*(longlong *)(lVar18 + 0x30) + (longlong)iVar13 * 2))
                  goto LAB_1424af89e;
                  *(int *)(lVar18 + 0x28) = iVar13 + 1;
                  uVar23 = (uint)*(ushort *)(*(longlong *)(lVar18 + 0x30) + (longlong)iVar13 * 2);
                }
                else {
LAB_1424af89e:
                  uVar23 = FUN_14250e570();
                }
                lVar18 = *plVar36;
                if (*(int *)(lVar18 + 0x1c) < *(int *)(lVar18 + 0x28)) {
                  lVar18 = (**(code **)(*(longlong *)(lVar18 + 0x38) + 0x40))();
                }
                else {
                  lVar18 = (longlong)*(int *)(lVar18 + 0x28) + *(longlong *)(lVar18 + 0x20);
                }
                *plVar34 = lVar18;
                cVar8 = FUN_142512880(*(undefined8 *)(lVar15 + 0x60),uVar23);
joined_r0x0001424af81b:
              } while (cVar8 != '\0');
              lVar18 = *plVar36;
              if ((*(int *)(lVar18 + 0x28) < 1) ||
                 (uVar23 = *(int *)(lVar18 + 0x28) - 1,
                 0xd7ff < *(ushort *)(*(longlong *)(lVar18 + 0x30) + (ulonglong)uVar23 * 2))) {
                FUN_14250e620();
              }
              else {
                *(uint *)(lVar18 + 0x28) = uVar23;
              }
              lVar18 = *plVar36;
              if (*(int *)(lVar18 + 0x1c) < *(int *)(lVar18 + 0x28)) {
                lVar18 = (**(code **)(*(longlong *)(lVar18 + 0x38) + 0x40))();
              }
              else {
                lVar18 = (longlong)*(int *)(lVar18 + 0x28) + *(longlong *)(lVar18 + 0x20);
              }
            }
            else {
              do {
                if (*(longlong *)(param_1 + 0x78) <= *plVar34) goto LAB_1424afaba;
                lVar18 = *plVar36;
                iVar13 = *(int *)(lVar18 + 0x28);
                if (iVar13 < *(int *)(lVar18 + 0x2c)) {
                  if (0xd7ff < *(ushort *)(*(longlong *)(lVar18 + 0x30) + (longlong)iVar13 * 2))
                  goto LAB_1424af191;
                  *(int *)(lVar18 + 0x28) = iVar13 + 1;
                  uVar23 = (uint)*(ushort *)(*(longlong *)(lVar18 + 0x30) + (longlong)iVar13 * 2);
                }
                else {
LAB_1424af191:
                  uVar23 = FUN_14250e570();
                }
                lVar18 = *plVar36;
                if (*(int *)(lVar18 + 0x1c) < *(int *)(lVar18 + 0x28)) {
                  lVar18 = (**(code **)(*(longlong *)(lVar18 + 0x38) + 0x40))();
                }
                else {
                  lVar18 = (longlong)*(int *)(lVar18 + 0x28) + *(longlong *)(lVar18 + 0x20);
                }
                *plVar34 = lVar18;
                cVar8 = FUN_142512880(*(undefined8 *)(lVar15 + 0x40),uVar23);
              } while (cVar8 != '\0');
              cVar8 = FUN_142512880(*(undefined8 *)(lVar15 + 0x48),uVar23);
              if (cVar8 != '\0') goto LAB_1424af7b9;
              cVar8 = FUN_142512880(*(undefined8 *)(lVar15 + 0x50),uVar23);
              if (cVar8 != '\0') goto LAB_1424af864;
              cVar8 = FUN_142512880(*(undefined8 *)(lVar15 + 0x58),uVar23);
              if (cVar8 != '\0') goto LAB_1424af7b9;
              lVar18 = *plVar36;
              if ((*(int *)(lVar18 + 0x28) < 1) ||
                 (uVar23 = *(int *)(lVar18 + 0x28) - 1,
                 0xd7ff < *(ushort *)(*(longlong *)(lVar18 + 0x30) + (ulonglong)uVar23 * 2))) {
                FUN_14250e620();
              }
              else {
                *(uint *)(lVar18 + 0x28) = uVar23;
              }
              lVar18 = *local_58;
              if (*(int *)(lVar18 + 0x1c) < *(int *)(lVar18 + 0x28)) {
                lVar18 = (**(code **)(*(longlong *)(lVar18 + 0x38) + 0x40))();
                plVar36 = local_58;
              }
              else {
                lVar18 = (longlong)*(int *)(lVar18 + 0x28) + *(longlong *)(lVar18 + 0x20);
                plVar36 = local_58;
              }
            }
            *plVar34 = lVar18;
            goto LAB_1424ae673;
          }
          if ((uVar23 == 0xd) && (*plVar34 < *(longlong *)(param_1 + 0x78))) {
            lVar15 = *plVar36;
            if ((*(int *)(lVar15 + 0x2c) <= *(int *)(lVar15 + 0x28)) ||
               (uVar2 = *(ushort *)
                         (*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(lVar15 + 0x28) * 2),
               uVar23 = (uint)uVar2, 0xd7ff < uVar2)) {
              uVar23 = FUN_14250e920();
            }
            if (uVar23 == 10) {
              lVar15 = *plVar36;
              iVar13 = *(int *)(lVar15 + 0x28);
              if ((iVar13 < *(int *)(lVar15 + 0x2c)) &&
                 (*(ushort *)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar13 * 2) < 0xd800)) {
                *(int *)(lVar15 + 0x28) = iVar13 + 1;
              }
              else {
                FUN_14250e570();
              }
              lVar15 = *plVar36;
              if (*(int *)(lVar15 + 0x1c) < *(int *)(lVar15 + 0x28)) {
                lVar15 = (**(code **)(*(longlong *)(lVar15 + 0x38) + 0x40))();
              }
              else {
                lVar15 = (longlong)*(int *)(lVar15 + 0x28) + *(longlong *)(lVar15 + 0x20);
              }
              *plVar34 = lVar15;
            }
          }
        }
        else {
LAB_1424ae673:
          if (*plVar34 < *(longlong *)(param_1 + 0x78)) {
            do {
              while( true ) {
                lVar18 = *plVar36;
                if ((*(int *)(lVar18 + 0x2c) <= *(int *)(lVar18 + 0x28)) ||
                   (uVar2 = *(ushort *)
                             (*(longlong *)(lVar18 + 0x30) + (longlong)*(int *)(lVar18 + 0x28) * 2),
                   uVar23 = (uint)uVar2, 0xd7ff < uVar2)) {
                  uVar23 = FUN_14250e920();
                }
                cVar8 = FUN_142512880(*(undefined8 *)(lVar15 + 0x30),uVar23);
                if (cVar8 == '\0') goto LAB_1424afaba;
                lVar18 = *plVar36;
                iVar13 = *(int *)(lVar18 + 0x28);
                if ((iVar13 < *(int *)(lVar18 + 0x2c)) &&
                   (*(ushort *)(*(longlong *)(lVar18 + 0x30) + (longlong)iVar13 * 2) < 0xd800)) {
                  *(int *)(lVar18 + 0x28) = iVar13 + 1;
                }
                else {
                  FUN_14250e570();
                }
                lVar18 = *plVar36;
                if (*(int *)(lVar18 + 0x28) <= *(int *)(lVar18 + 0x1c)) break;
                lVar18 = (**(code **)(*(longlong *)(lVar18 + 0x38) + 0x40))();
                *plVar34 = lVar18;
                if (*(longlong *)(param_1 + 0x78) <= lVar18) goto LAB_1424afaba;
              }
              lVar18 = (longlong)*(int *)(lVar18 + 0x28) + *(longlong *)(lVar18 + 0x20);
              *plVar34 = lVar18;
            } while (lVar18 < *(longlong *)(param_1 + 0x78));
          }
        }
LAB_1424afaba:
        piVar32 = local_50;
        if (*(longlong *)(param_1 + 0x78) <= *plVar34) {
          *(undefined1 *)(param_1 + 0xa8) = 1;
        }
        break;
      case 0x14:
        lVar15 = *plVar34;
LAB_1424ac8d0:
        if (*(longlong *)(param_1 + 0x58) <= lVar15) goto LAB_1424ac43c;
        goto switchD_1424ac49e_caseD_1;
      case 0x15:
        if (*(longlong *)(param_1 + 0x78) <= *plVar34) goto LAB_1424ad62a;
        lVar15 = *local_58;
        lVar18 = *plVar34 - *(longlong *)(lVar15 + 0x20);
        if (((lVar18 < 0) || (*(int *)(lVar15 + 0x1c) <= lVar18)) ||
           (0xdbff < *(ushort *)(*(longlong *)(lVar15 + 0x30) + lVar18 * 2))) {
          FUN_14250e700();
        }
        else {
          *(int *)(lVar15 + 0x28) = (int)lVar18;
        }
        lVar15 = *plVar36;
        iVar13 = *(int *)(lVar15 + 0x28);
        if (iVar13 < *(int *)(lVar15 + 0x2c)) {
          if (0xd7ff < *(ushort *)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar13 * 2))
          goto LAB_1424ae207;
          *(int *)(lVar15 + 0x28) = iVar13 + 1;
          uVar23 = (uint)*(ushort *)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar13 * 2);
        }
        else {
LAB_1424ae207:
          uVar23 = FUN_14250e570();
        }
        lVar15 = *plVar36;
        if (*(int *)(lVar15 + 0x1c) < *(int *)(lVar15 + 0x28)) {
          lVar15 = (**(code **)(*(longlong *)(lVar15 + 0x38) + 0x40))();
        }
        else {
          lVar15 = (longlong)*(int *)(lVar15 + 0x28) + *(longlong *)(lVar15 + 0x20);
        }
        *plVar34 = lVar15;
        piVar32 = local_50;
        if ((uVar23 == 0xd) && (lVar15 < *(longlong *)(param_1 + 0x78))) {
          lVar15 = *plVar36;
          if ((*(int *)(lVar15 + 0x2c) <= *(int *)(lVar15 + 0x28)) ||
             (uVar2 = *(ushort *)
                       (*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(lVar15 + 0x28) * 2),
             uVar23 = (uint)uVar2, 0xd7ff < uVar2)) {
            uVar23 = FUN_14250e920();
          }
          piVar32 = local_50;
          if (uVar23 == 10) {
            lVar15 = *plVar36;
            iVar13 = *(int *)(lVar15 + 0x28);
            if ((iVar13 < *(int *)(lVar15 + 0x2c)) &&
               (*(ushort *)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar13 * 2) < 0xd800)) {
              *(int *)(lVar15 + 0x28) = iVar13 + 1;
            }
            else {
              FUN_14250e570();
            }
            goto LAB_1424aeeb3;
          }
        }
        goto switchD_1424ac49e_caseD_7;
      case 0x16:
        if (*(longlong *)(param_1 + 0x78) <= *plVar34) goto LAB_1424ad62a;
        lVar15 = *local_58;
        lVar18 = *plVar34 - *(longlong *)(lVar15 + 0x20);
        if (((lVar18 < 0) || (*(int *)(lVar15 + 0x1c) <= lVar18)) ||
           (0xdbff < *(ushort *)(*(longlong *)(lVar15 + 0x30) + lVar18 * 2))) {
          FUN_14250e700();
        }
        else {
          *(int *)(lVar15 + 0x28) = (int)lVar18;
        }
        lVar15 = *plVar36;
        iVar13 = *(int *)(lVar15 + 0x28);
        if (iVar13 < *(int *)(lVar15 + 0x2c)) {
          if (0xd7ff < *(ushort *)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar13 * 2))
          goto LAB_1424ae22b;
          *(int *)(lVar15 + 0x28) = iVar13 + 1;
          uVar23 = (uint)*(ushort *)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar13 * 2);
        }
        else {
LAB_1424ae22b:
          uVar23 = FUN_14250e570();
        }
        cVar8 = FUN_1424d86a0(uVar23);
        if (((uVar28 & 0xffffff) != 0) != (cVar8 == '\t')) goto LAB_1424aeeb3;
LAB_1424ae905:
        lVar15 = *(longlong *)(param_1 + 0xb0);
        iVar13 = *(int *)(param_1 + 0x38);
        uVar23 = *(int *)(lVar15 + 8) - iVar13;
        uVar28 = 0;
        if (0 < (int)uVar23) {
          uVar28 = (ulonglong)uVar23;
        }
        *(int *)(lVar15 + 8) = (int)uVar28;
        piVar32 = local_50;
        plVar34 = (longlong *)(uVar28 * 8 + *(longlong *)(lVar15 + 0x18) + (longlong)iVar13 * -8);
        break;
      case 0x17:
        if (*plVar34 != *(longlong *)(param_1 + 0x50)) goto switchD_1424ac49e_caseD_1;
        break;
      case 0x18:
        if (*plVar34 < *(longlong *)(param_1 + 0x58)) {
          lVar15 = *local_58;
          lVar18 = *plVar34 - *(longlong *)(lVar15 + 0x20);
          if (((lVar18 < 0) || (*(int *)(lVar15 + 0x1c) <= lVar18)) ||
             (0xdbff < *(ushort *)(*(longlong *)(lVar15 + 0x30) + lVar18 * 2))) {
            FUN_14250e700();
          }
          else {
            *(int *)(lVar15 + 0x28) = (int)lVar18;
          }
          lVar15 = *plVar36;
          iVar13 = *(int *)(lVar15 + 0x28);
          if (iVar13 < *(int *)(lVar15 + 0x2c)) {
            if (0xd7ff < *(ushort *)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar13 * 2))
            goto LAB_1424ae24f;
            *(int *)(lVar15 + 0x28) = iVar13 + 1;
            uVar23 = (uint)*(ushort *)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar13 * 2);
          }
          else {
LAB_1424ae24f:
            uVar23 = FUN_14250e570();
          }
          lVar15 = *plVar36;
          if (*(int *)(lVar15 + 0x1c) < *(int *)(lVar15 + 0x28)) {
            lVar15 = (**(code **)(*(longlong *)(lVar15 + 0x38) + 0x40))();
          }
          else {
            lVar15 = (longlong)*(int *)(lVar15 + 0x28) + *(longlong *)(lVar15 + 0x20);
          }
          if (lVar15 < *(longlong *)(param_1 + 0x58)) {
            lVar15 = *plVar36;
            iVar13 = *(int *)(lVar15 + 0x28);
            if (iVar13 < *(int *)(lVar15 + 0x2c)) {
              if (0xd7ff < *(ushort *)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar13 * 2))
              goto LAB_1424aecd4;
              *(int *)(lVar15 + 0x28) = iVar13 + 1;
              uVar14 = (uint)*(ushort *)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar13 * 2);
            }
            else {
LAB_1424aecd4:
              uVar14 = FUN_14250e570();
            }
            piVar32 = local_50;
            if ((uVar23 == 0xd) && (uVar14 == 10)) {
              lVar15 = *plVar36;
              if (*(int *)(lVar15 + 0x1c) < *(int *)(lVar15 + 0x28)) {
                lVar15 = (**(code **)(*(longlong *)(lVar15 + 0x38) + 0x40))();
                piVar32 = local_50;
              }
              else {
                lVar15 = (longlong)*(int *)(lVar15 + 0x28) + *(longlong *)(lVar15 + 0x20);
              }
              goto LAB_1424ac8d0;
            }
            goto switchD_1424ac49e_caseD_1;
          }
          cVar8 = FUN_1424afc90(uVar23);
          piVar32 = local_50;
          if (cVar8 == '\0') goto switchD_1424ac49e_caseD_1;
          if ((uVar23 != 10) || (*plVar34 <= *(longlong *)(param_1 + 0x50))) goto LAB_1424ac43c;
          lVar15 = *plVar36;
          if ((*(int *)(lVar15 + 0x28) < 1) ||
             (uVar23 = *(int *)(lVar15 + 0x28) - 1,
             0xd7ff < *(ushort *)(*(longlong *)(lVar15 + 0x30) + (ulonglong)uVar23 * 2))) {
            FUN_14250e620();
          }
          else {
            *(uint *)(lVar15 + 0x28) = uVar23;
          }
          lVar15 = *plVar36;
          if (*(int *)(lVar15 + 0x28) < 1) {
LAB_1424af5f1:
            uVar23 = FUN_14250e620();
          }
          else {
            uVar23 = *(int *)(lVar15 + 0x28) - 1;
            if (0xd7ff < *(ushort *)(*(longlong *)(lVar15 + 0x30) + (ulonglong)uVar23 * 2))
            goto LAB_1424af5f1;
            *(uint *)(lVar15 + 0x28) = uVar23;
            uVar23 = (uint)*(ushort *)(*(longlong *)(lVar15 + 0x30) + (ulonglong)uVar23 * 2);
          }
          piVar32 = local_50;
          if (uVar23 == 0xd) goto switchD_1424ac49e_caseD_1;
        }
        goto LAB_1424ac43c;
      case 0x19:
        plVar34[(ulonglong)(uVar14 & 0xffffff) + 2] = 0;
        plVar34[1] = lVar18 + 4;
        lVar15 = lVar15 << 0x20;
        iVar13 = *(int *)(local_60 + (lVar15 + 0x200000000 >> 0x1d));
        if ((*(int *)(local_60 + (lVar15 + 0x100000000 >> 0x1d)) == 0) && (*piVar32 < 1)) {
          uVar16 = *(undefined8 *)(local_60 + (lVar15 >> 0x1d));
          lVar15 = *(longlong *)(param_1 + 0xb0);
          iVar11 = *(int *)(param_1 + 0x38);
          iVar22 = *(int *)(lVar15 + 8);
          iVar24 = iVar22 + iVar11;
          if ((iVar24 < 0) || (*(int *)(lVar15 + 0xc) < iVar24)) {
            cVar8 = FUN_14250e240(lVar15,iVar24,piVar32);
            piVar32 = local_50;
            if (cVar8 != '\0') {
              iVar22 = *(int *)(lVar15 + 8);
              iVar24 = iVar11 + iVar22;
              goto LAB_1424aede5;
            }
            plVar36 = (longlong *)0x0;
            iVar11 = *local_50;
          }
          else {
LAB_1424aede5:
            plVar36 = (longlong *)((longlong)iVar22 * 8 + *(longlong *)(lVar15 + 0x18));
            *(int *)(lVar15 + 8) = iVar24;
            iVar11 = *piVar32;
          }
          if (iVar11 < 1) {
            uVar27 = (ulonglong)*(int *)(param_1 + 0x38);
            plVar25 = plVar36 + -uVar27;
            uVar28 = uVar27 - 1 & 0x1fffffffffffffff;
            plVar34 = plVar25;
            plVar21 = plVar36;
            if ((uVar28 < 9) || ((uVar27 & 0x1ffffffffffffffc) == 0)) {
LAB_1424af6a7:
              do {
                lVar15 = *plVar34;
                plVar34 = plVar34 + 1;
                *plVar21 = lVar15;
                plVar21 = plVar21 + 1;
              } while (plVar34 != plVar36);
            }
            else {
              uVar28 = uVar28 + 1;
              uVar33 = uVar28 & 0xfffffffffffffffc;
              plVar34 = plVar25 + uVar33;
              plVar21 = plVar36 + uVar33;
              plVar31 = plVar36 + 2;
              uVar29 = uVar33;
              do {
                plVar1 = plVar31 + (-2 - uVar27);
                uVar4 = *(undefined4 *)((longlong)plVar1 + 4);
                lVar19 = plVar1[1];
                uVar5 = *(undefined4 *)((longlong)plVar1 + 0xc);
                lVar15 = plVar31[-uVar27];
                lVar18 = (plVar31 + -uVar27)[1];
                *(int *)(plVar31 + -2) = (int)*plVar1;
                *(undefined4 *)((longlong)plVar31 + -0xc) = uVar4;
                *(int *)(plVar31 + -1) = (int)lVar19;
                *(undefined4 *)((longlong)plVar31 + -4) = uVar5;
                *plVar31 = lVar15;
                plVar31[1] = lVar18;
                plVar31 = plVar31 + 4;
                uVar29 = uVar29 - 4;
              } while (uVar29 != 0);
              piVar32 = local_50;
              if (uVar28 != uVar33) goto LAB_1424af6a7;
            }
            iVar11 = *(int *)(param_1 + 0x110);
            *(int *)(param_1 + 0x110) = iVar11 + -1;
            if (iVar11 < 2) {
              *(undefined4 *)(param_1 + 0x110) = 10000;
              iVar11 = *(int *)(param_1 + 0x10c) + 1;
              *(int *)(param_1 + 0x10c) = iVar11;
              if (*(code **)(param_1 + 0x118) == (code *)0x0) {
LAB_1424af711:
                if ((*(int *)(param_1 + 0x108) < 1) ||
                   (iVar22 = 0x10312, iVar11 < *(int *)(param_1 + 0x108))) goto LAB_1424afae3;
              }
              else {
                cVar8 = (**(code **)(param_1 + 0x118))(*(undefined8 *)(param_1 + 0x120));
                piVar32 = local_50;
                if (cVar8 != '\0') {
                  iVar11 = *(int *)(param_1 + 0x10c);
                  goto LAB_1424af711;
                }
                iVar22 = 0x10313;
              }
              *piVar32 = iVar22;
            }
LAB_1424afae3:
            plVar25[1] = (ulonglong)((uint)uVar16 & 0xffffff) + 1;
            plVar34 = plVar36;
          }
          else {
            *piVar32 = 0x10311;
          }
        }
        if (iVar13 == 0) goto switchD_1424ac49e_caseD_1;
        if (iVar13 == -1) {
          plVar34[(ulonglong)uVar37 + 3] = *plVar34;
        }
        break;
      case 0x1a:
        plVar34[(ulonglong)(uVar14 & 0xffffff) + 2] = 0;
        plVar34[1] = lVar18 + 4;
        lVar15 = lVar15 << 0x20;
        uVar16 = *(undefined8 *)(local_60 + (lVar15 >> 0x1d));
        iVar13 = *(int *)(local_60 + (lVar15 + 0x100000000 >> 0x1d));
        iVar11 = *(int *)(local_60 + (lVar15 + 0x200000000 >> 0x1d));
        if (iVar11 == -1) {
          plVar34[(ulonglong)uVar37 + 3] = *plVar34;
          if (iVar13 == 0) {
LAB_1424ae03b:
            plVar34 = (longlong *)FUN_1424b5f70(param_1,plVar34,lVar18 + 4,piVar32);
            piVar32 = local_50;
            goto LAB_1424ae050;
          }
        }
        else if (iVar13 == 0) {
          if (iVar11 != 0) goto LAB_1424ae03b;
LAB_1424ae050:
          uVar28 = (ulonglong)((uint)uVar16 & 0xffffff);
          goto LAB_1424ae552;
        }
        goto switchD_1424ac49e_caseD_7;
      case 0x1b:
        if (*(longlong *)(param_1 + 0x78) <= *plVar34) goto LAB_1424ad62a;
        lVar15 = *local_58;
        lVar18 = *plVar34 - *(longlong *)(lVar15 + 0x20);
        if (((lVar18 < 0) || (*(int *)(lVar15 + 0x1c) <= lVar18)) ||
           (0xdbff < *(ushort *)(*(longlong *)(lVar15 + 0x30) + lVar18 * 2))) {
          FUN_14250e700();
        }
        else {
          *(int *)(lVar15 + 0x28) = (int)lVar18;
        }
        lVar15 = *plVar36;
        iVar13 = *(int *)(lVar15 + 0x28);
        if (iVar13 < *(int *)(lVar15 + 0x2c)) {
          if (0xd7ff < *(ushort *)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar13 * 2))
          goto LAB_1424ae273;
          *(int *)(lVar15 + 0x28) = iVar13 + 1;
          uVar23 = (uint)*(ushort *)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar13 * 2);
        }
        else {
LAB_1424ae273:
          uVar23 = FUN_14250e570();
        }
        piVar32 = local_50;
        if (uVar23 != 10) goto LAB_1424aec2a;
        goto switchD_1424ac49e_caseD_1;
      case 0x1c:
        uVar27 = (ulonglong)
                 ((uint)*(undefined8 *)(local_60 + (ulonglong)(uVar14 & 0xffffff) * 8) & 0xffffff);
        uVar16 = *(undefined8 *)(local_60 + 0x10 + (ulonglong)uVar37 * 8);
        uVar28 = *(ulonglong *)(local_60 + 0x18 + (ulonglong)uVar37 * 8);
        uVar29 = plVar34[uVar27 + 2] + 1;
        plVar34[uVar27 + 2] = uVar29;
        iVar13 = (int)uVar28;
        if ((iVar13 == -1) || (uVar29 < (uVar28 & 0xffffffff))) {
          if ((longlong)uVar29 < (longlong)(int)uVar16) {
            iVar13 = *(int *)(param_1 + 0x110);
            *(int *)(param_1 + 0x110) = iVar13 + -1;
            if (iVar13 < 2) {
              FUN_1424b5f00(param_1,piVar32);
              piVar32 = local_50;
            }
          }
          else {
            if (iVar13 == -1) {
              if (*plVar34 == plVar34[uVar27 + 3]) goto switchD_1424ac49e_caseD_7;
              plVar34[uVar27 + 3] = *plVar34;
            }
            plVar34 = (longlong *)FUN_1424b5f70(param_1,plVar34,lVar15,piVar32);
            piVar32 = local_50;
          }
          plVar34[1] = (ulonglong)(uVar37 + 4);
        }
        goto switchD_1424ac49e_caseD_7;
      case 0x1d:
        uVar27 = (ulonglong)
                 ((uint)*(undefined8 *)(local_60 + (ulonglong)(uVar14 & 0xffffff) * 8) & 0xffffff);
        uVar16 = *(undefined8 *)(local_60 + 0x10 + (ulonglong)uVar37 * 8);
        uVar28 = *(ulonglong *)(local_60 + 0x18 + (ulonglong)uVar37 * 8);
        uVar29 = plVar34[uVar27 + 2] + 1;
        plVar34[uVar27 + 2] = uVar29;
        iVar13 = (int)uVar28;
        if ((iVar13 == -1) || (uVar29 < (uVar28 & 0xffffffff))) {
          if ((longlong)(int)uVar16 <= (longlong)uVar29) {
            if (iVar13 == -1) {
              if (*plVar34 == plVar34[uVar27 + 3]) goto switchD_1424ac49e_caseD_7;
              plVar34[uVar27 + 3] = *plVar34;
            }
            plVar34 = (longlong *)FUN_1424b5f70(param_1,plVar34,uVar37 + 4,piVar32);
            piVar32 = local_50;
            break;
          }
          plVar34[1] = (ulonglong)(uVar37 + 4);
          iVar13 = *(int *)(param_1 + 0x110);
          *(int *)(param_1 + 0x110) = iVar13 + -1;
          if (iVar13 < 2) {
            FUN_1424b5f00(param_1,piVar32);
            piVar32 = local_50;
          }
        }
        goto switchD_1424ac49e_caseD_7;
      case 0x1e:
        if (*plVar34 <= *(longlong *)(param_1 + 0x50)) goto switchD_1424ac49e_caseD_7;
        lVar15 = *local_58;
        lVar18 = *plVar34 - *(longlong *)(lVar15 + 0x20);
        if (((lVar18 < 0) || (*(int *)(lVar15 + 0x1c) <= lVar18)) ||
           (0xdbff < *(ushort *)(*(longlong *)(lVar15 + 0x30) + lVar18 * 2))) {
          FUN_14250e700();
        }
        else {
          *(int *)(lVar15 + 0x28) = (int)lVar18;
        }
        lVar15 = *plVar36;
        if (0 < *(int *)(lVar15 + 0x28)) {
          uVar23 = *(int *)(lVar15 + 0x28) - 1;
          if (*(ushort *)(*(longlong *)(lVar15 + 0x30) + (ulonglong)uVar23 * 2) < 0xd800) {
            *(uint *)(lVar15 + 0x28) = uVar23;
            uVar23 = (uint)*(ushort *)(*(longlong *)(lVar15 + 0x30) + (ulonglong)uVar23 * 2);
            goto joined_r0x0001424adef7;
          }
        }
        uVar23 = FUN_14250e620();
joined_r0x0001424adef7:
        piVar32 = local_50;
        if (uVar23 != 10) goto switchD_1424ac49e_caseD_1;
        break;
      case 0x20:
        *(longlong *)(*(longlong *)(param_1 + 0xc0) + (ulonglong)(uVar14 & 0xffffff) * 8) =
             (longlong)*(int *)(*(longlong *)(param_1 + 0xb0) + 8);
        goto switchD_1424ac49e_caseD_7;
      case 0x21:
        lVar15 = *(longlong *)(param_1 + 0xb0);
        plVar36 = (longlong *)
                  ((longlong)
                   (int)*(undefined8 *)
                         (*(longlong *)(param_1 + 0xc0) + (ulonglong)(uVar14 & 0xffffff) * 8) * 8 +
                   *(longlong *)(lVar15 + 0x18) + (longlong)*(int *)(param_1 + 0x38) * -8);
        if (plVar36 == plVar34) goto switchD_1424ac49e_caseD_7;
        if (0 < *(int *)(param_1 + 0x38)) {
          lVar15 = 0;
          do {
            plVar36[lVar15] = plVar34[lVar15];
            lVar15 = lVar15 + 1;
          } while (lVar15 < *(int *)(param_1 + 0x38));
          lVar15 = *(longlong *)(param_1 + 0xb0);
        }
        FUN_14250dfa0(lVar15);
        piVar32 = local_50;
        plVar34 = plVar36;
        break;
      case 0x22:
        if (-1 < plVar34[(ulonglong)(uVar14 & 0xffffff) + 2]) {
          lVar15 = plVar34[(ulonglong)uVar37 + 3];
          lVar18 = *(longlong *)(param_1 + 0x28);
          lVar19 = plVar34[(ulonglong)(uVar14 & 0xffffff) + 2] - *(longlong *)(lVar18 + 0x20);
          if (((lVar19 < 0) || (*(int *)(lVar18 + 0x1c) <= lVar19)) ||
             (0xdbff < *(ushort *)(*(longlong *)(lVar18 + 0x30) + lVar19 * 2))) {
            FUN_14250e700();
          }
          else {
            *(int *)(lVar18 + 0x28) = (int)lVar19;
          }
          lVar18 = *local_58;
          lVar19 = *plVar34 - *(longlong *)(lVar18 + 0x20);
          if (((lVar19 < 0) || (*(int *)(lVar18 + 0x1c) <= lVar19)) ||
             (0xdbff < *(ushort *)(*(longlong *)(lVar18 + 0x30) + lVar19 * 2))) {
            FUN_14250e700();
          }
          else {
            *(int *)(lVar18 + 0x28) = (int)lVar19;
          }
          do {
            lVar19 = FUN_14250e6e0(*(undefined8 *)(param_1 + 0x28));
            lVar18 = *(longlong *)(param_1 + 0x20);
            if (lVar15 <= lVar19) goto LAB_1424aeeb6;
            lVar18 = FUN_14250e6e0();
            if (*(longlong *)(param_1 + 0x78) <= lVar18) {
              *(undefined1 *)(param_1 + 0xa8) = 1;
              break;
            }
            iVar13 = FUN_14250e570(*(undefined8 *)(param_1 + 0x28));
            iVar11 = FUN_14250e570(*(undefined8 *)(param_1 + 0x20));
          } while (iVar11 == iVar13);
          goto LAB_1424ae905;
        }
        goto switchD_1424ac49e_caseD_1;
      case 0x23:
        plVar34[(ulonglong)(uVar14 & 0xffffff) + 2] = *plVar34;
        goto switchD_1424ac49e_caseD_7;
      case 0x24:
        plVar34[1] = lVar18 + 2;
        if (plVar34[(ulonglong)
                    ((uint)*(undefined8 *)(local_60 + (longlong)(int)lVar15 * 8) & 0xffffff) + 2] <
            *plVar34) goto switchD_1424ac49e_caseD_d;
        goto switchD_1424ac49e_caseD_1;
      case 0x25:
        *(longlong *)(*(longlong *)(param_1 + 0xc0) + (ulonglong)(uVar14 & 0xffffff) * 8) =
             (longlong)*(int *)(*(longlong *)(param_1 + 0xb0) + 8);
        *(longlong *)(*(longlong *)(param_1 + 0xc0) + 8 + (ulonglong)uVar37 * 8) = *plVar34;
        *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x60);
        *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 100);
        *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x68);
        *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x6c);
        goto switchD_1424ac49e_caseD_7;
      case 0x26:
        lVar15 = *(longlong *)(param_1 + 0xb0);
        lVar18 = *(longlong *)(param_1 + 0xc0);
        iVar13 = (int)*(undefined8 *)(lVar18 + (ulonglong)(uVar14 & 0xffffff) * 8);
        if (iVar13 < *(int *)(lVar15 + 8)) {
          plVar36 = (longlong *)
                    ((longlong)iVar13 * 8 + *(longlong *)(lVar15 + 0x18) +
                    (longlong)*(int *)(param_1 + 0x38) * -8);
          if (0 < (longlong)*(int *)(param_1 + 0x38)) {
            lVar15 = 0;
            do {
              plVar36[lVar15] = plVar34[lVar15];
              lVar15 = lVar15 + 1;
            } while (lVar15 < *(int *)(param_1 + 0x38));
            lVar15 = *(longlong *)(param_1 + 0xb0);
          }
          FUN_14250dfa0(lVar15);
          lVar18 = *(longlong *)(param_1 + 0xc0);
          piVar32 = local_50;
          plVar34 = plVar36;
        }
        *plVar34 = *(longlong *)(lVar18 + 8 + (ulonglong)uVar37 * 8);
        *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x40);
        *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x44);
        *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x48);
        *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x4c);
        break;
      case 0x27:
        if (*(longlong *)(param_1 + 0x78) <= *plVar34) goto LAB_1424ad62a;
        lVar15 = *local_58;
        lVar18 = *plVar34 - *(longlong *)(lVar15 + 0x20);
        if (((lVar18 < 0) || (*(int *)(lVar15 + 0x1c) <= lVar18)) ||
           (0xdbff < *(ushort *)(*(longlong *)(lVar15 + 0x30) + lVar18 * 2))) {
          FUN_14250e700();
        }
        else {
          *(int *)(lVar15 + 0x28) = (int)lVar18;
        }
        lVar15 = *plVar36;
        iVar13 = *(int *)(lVar15 + 0x28);
        if (iVar13 < *(int *)(lVar15 + 0x2c)) {
          if (0xd7ff < *(ushort *)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar13 * 2))
          goto LAB_1424ae28a;
          *(int *)(lVar15 + 0x28) = iVar13 + 1;
          uVar23 = (uint)*(ushort *)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar13 * 2);
        }
        else {
LAB_1424ae28a:
          uVar23 = FUN_14250e570();
        }
        uVar23 = thunk_FUN_1424d7d20(uVar23,0);
joined_r0x0001424ae29f:
        piVar32 = local_50;
        if (uVar23 != uVar37) goto switchD_1424ac49e_caseD_1;
        lVar15 = *local_58;
        goto LAB_1424aec2d;
      case 0x28:
        uVar23 = *(uint *)(local_60 + 8 + lVar18 * 8) & 0xffffff;
        plVar34[1] = lVar18 + 2;
        lVar15 = *local_58;
        lVar18 = *plVar34 - *(longlong *)(lVar15 + 0x20);
        if (((lVar18 < 0) || (*(int *)(lVar15 + 0x1c) <= lVar18)) ||
           (0xdbff < *(ushort *)(*(longlong *)(lVar15 + 0x30) + lVar18 * 2))) {
          FUN_14250e700();
        }
        else {
          *(int *)(lVar15 + 0x28) = (int)lVar18;
        }
        lVar15 = local_70 + (ulonglong)(uVar14 & 0xffffff) * 2;
        FUN_142515b80(local_88,*plVar36);
        uVar14 = 0;
        do {
          uVar37 = uVar14;
          if ((int)uVar23 <= (int)uVar37) break;
          cVar8 = FUN_142515cb0(local_88);
          if (cVar8 == '\0') {
            lVar18 = *local_58;
            if (*(int *)(lVar18 + 0x1c) < *(int *)(lVar18 + 0x28)) {
              lVar18 = (**(code **)(*(longlong *)(lVar18 + 0x38) + 0x40))();
            }
            else {
              lVar18 = (longlong)*(int *)(lVar18 + 0x28) + *(longlong *)(lVar18 + 0x20);
            }
            if (*(longlong *)(param_1 + 0x78) <= lVar18) {
              *(undefined1 *)(param_1 + 0xa8) = 1;
              break;
            }
          }
          uVar14 = uVar37 + 1;
          uVar2 = *(ushort *)(lVar15 + (longlong)(int)uVar37 * 2);
          uVar35 = (uint)uVar2;
          if ((((uVar35 & 0xfc00) == 0xd800) && (uVar14 != uVar23)) &&
             (uVar12 = (uint)*(ushort *)(lVar15 + (longlong)(int)uVar14 * 2),
             (uVar12 & 0xfc00) == 0xdc00)) {
            uVar14 = uVar37 + 2;
            uVar35 = (uint)uVar2 * 0x400 + uVar12 + 0xfca02400;
          }
          uVar12 = FUN_142515bb0(local_88);
        } while (uVar12 == uVar35);
        cVar8 = FUN_142515cb0(local_88);
        if (((int)uVar37 < (int)uVar23) || (cVar8 != '\0')) {
          lVar15 = *(longlong *)(param_1 + 0xb0);
          iVar13 = *(int *)(param_1 + 0x38);
          uVar23 = *(int *)(lVar15 + 8) - iVar13;
          uVar28 = 0;
          if (0 < (int)uVar23) {
            uVar28 = (ulonglong)uVar23;
          }
          *(int *)(lVar15 + 8) = (int)uVar28;
          plVar34 = (longlong *)(uVar28 * 8 + *(longlong *)(lVar15 + 0x18) + (longlong)iVar13 * -8);
        }
        else {
          lVar15 = *local_58;
          if (*(int *)(lVar15 + 0x1c) < *(int *)(lVar15 + 0x28)) {
            lVar15 = (**(code **)(*(longlong *)(lVar15 + 0x38) + 0x40))();
            *plVar34 = lVar15;
          }
          else {
            *plVar34 = (longlong)*(int *)(lVar15 + 0x28) + *(longlong *)(lVar15 + 0x20);
          }
        }
LAB_1424aee72:
        FUN_142515ba0(local_88);
        piVar32 = local_50;
        break;
      case 0x29:
        if (-1 < plVar34[(ulonglong)(uVar14 & 0xffffff) + 2]) {
          lVar15 = plVar34[(ulonglong)uVar37 + 3];
          FUN_14250e700(*(undefined8 *)(param_1 + 0x28));
          FUN_14250e700(*(undefined8 *)(param_1 + 0x20),*plVar34);
          FUN_142515b80(local_88,*(undefined8 *)(param_1 + 0x28));
          FUN_142515b80(local_b0,*(undefined8 *)(param_1 + 0x20));
          plVar36 = local_58;
          do {
            cVar8 = FUN_142515cb0(local_88);
            if ((cVar8 == '\0') &&
               (lVar18 = FUN_14250e6e0(*(undefined8 *)(param_1 + 0x28)), lVar15 <= lVar18)) {
              cVar8 = FUN_142515cb0(local_b0);
              if (cVar8 == '\0') {
                lVar15 = *plVar36;
                if (*(int *)(lVar15 + 0x1c) < *(int *)(lVar15 + 0x28)) {
                  lVar15 = (**(code **)(*(longlong *)(lVar15 + 0x38) + 0x40))();
                }
                else {
                  lVar15 = (longlong)*(int *)(lVar15 + 0x28) + *(longlong *)(lVar15 + 0x20);
                }
                *plVar34 = lVar15;
                goto LAB_1424aee69;
              }
              break;
            }
            cVar8 = FUN_142515cb0(local_b0);
            if ((cVar8 == '\0') &&
               (lVar18 = FUN_14250e6e0(*(undefined8 *)(param_1 + 0x20)),
               *(longlong *)(param_1 + 0x78) <= lVar18)) {
              *(undefined1 *)(param_1 + 0xa8) = 1;
              break;
            }
            iVar13 = FUN_142515bb0(local_88);
            iVar11 = FUN_142515bb0(local_b0);
          } while (iVar11 == iVar13);
          lVar15 = *(longlong *)(param_1 + 0xb0);
          iVar13 = *(int *)(param_1 + 0x38);
          uVar23 = *(int *)(lVar15 + 8) - iVar13;
          uVar28 = 0;
          if (0 < (int)uVar23) {
            uVar28 = (ulonglong)uVar23;
          }
          *(int *)(lVar15 + 8) = (int)uVar28;
          plVar34 = (longlong *)(uVar28 * 8 + *(longlong *)(lVar15 + 0x18) + (longlong)iVar13 * -8);
LAB_1424aee69:
          FUN_142515ba0(local_b0);
          goto LAB_1424aee72;
        }
        goto switchD_1424ac49e_caseD_1;
      case 0x2a:
        if (*(longlong *)(param_1 + 0x58) <= *plVar34) goto LAB_1424ac43c;
        lVar15 = *local_58;
        lVar18 = *plVar34 - *(longlong *)(lVar15 + 0x20);
        if (((lVar18 < 0) || (*(int *)(lVar15 + 0x1c) <= lVar18)) ||
           (0xdbff < *(ushort *)(*(longlong *)(lVar15 + 0x30) + lVar18 * 2))) {
          FUN_14250e700();
        }
        else {
          *(int *)(lVar15 + 0x28) = (int)lVar18;
        }
        lVar15 = *plVar36;
        if ((*(int *)(lVar15 + 0x2c) <= *(int *)(lVar15 + 0x28)) ||
           (uVar2 = *(ushort *)
                     (*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(lVar15 + 0x28) * 2),
           uVar23 = (uint)uVar2, 0xd7ff < uVar2)) {
          uVar23 = FUN_14250e920();
        }
        piVar32 = local_50;
        if ((uVar23 & 0xffffdf50) == 0) {
          if ((int)uVar23 < 0x85) {
            if (uVar23 - 0xb < 3) goto switchD_1424ac49e_caseD_7;
            if (uVar23 != 10) goto switchD_1424ac49e_caseD_1;
            if (*plVar34 <= *(longlong *)(param_1 + 0x50)) goto switchD_1424ac49e_caseD_7;
            lVar15 = *local_58;
            if (*(int *)(lVar15 + 0x28) < 1) {
LAB_1424afa98:
              uVar23 = FUN_14250e620();
            }
            else {
              uVar23 = *(int *)(lVar15 + 0x28) - 1;
              if (0xd7ff < *(ushort *)(*(longlong *)(lVar15 + 0x30) + (ulonglong)uVar23 * 2))
              goto LAB_1424afa98;
              *(uint *)(lVar15 + 0x28) = uVar23;
              uVar23 = (uint)*(ushort *)(*(longlong *)(lVar15 + 0x30) + (ulonglong)uVar23 * 2);
            }
            piVar32 = local_50;
            if (uVar23 != 0xd) break;
          }
          else if ((uVar23 - 0x2028 < 2) || (uVar23 == 0x85)) break;
        }
        goto switchD_1424ac49e_caseD_1;
      case 0x2b:
        if (*plVar34 == *(longlong *)(param_1 + 0x50)) goto switchD_1424ac49e_caseD_7;
        lVar15 = *local_58;
        lVar18 = *plVar34 - *(longlong *)(lVar15 + 0x20);
        if (((lVar18 < 0) || (*(int *)(lVar15 + 0x1c) <= lVar18)) ||
           (0xdbff < *(ushort *)(*(longlong *)(lVar15 + 0x30) + lVar18 * 2))) {
          FUN_14250e700();
        }
        else {
          *(int *)(lVar15 + 0x28) = (int)lVar18;
        }
        lVar15 = *plVar36;
        if (*(int *)(lVar15 + 0x28) < 1) {
LAB_1424ae3ff:
          uVar23 = FUN_14250e620();
        }
        else {
          uVar23 = *(int *)(lVar15 + 0x28) - 1;
          if (0xd7ff < *(ushort *)(*(longlong *)(lVar15 + 0x30) + (ulonglong)uVar23 * 2))
          goto LAB_1424ae3ff;
          *(uint *)(lVar15 + 0x28) = uVar23;
          uVar23 = (uint)*(ushort *)(*(longlong *)(lVar15 + 0x30) + (ulonglong)uVar23 * 2);
        }
        piVar32 = local_50;
        if ((*(longlong *)(param_1 + 0x58) <= *plVar34) ||
           (cVar8 = FUN_1424afc90(uVar23), piVar32 = local_50, cVar8 == '\0'))
        goto switchD_1424ac49e_caseD_1;
        break;
      case 0x2c:
        *(longlong *)(*(longlong *)(param_1 + 0xc0) + (ulonglong)(uVar14 & 0xffffff) * 8) =
             (longlong)*(int *)(*(longlong *)(param_1 + 0xb0) + 8);
        uVar28 = (ulonglong)uVar37;
        *(longlong *)(*(longlong *)(param_1 + 0xc0) + 8 + uVar28 * 8) = *plVar34;
        *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x10 + uVar28 * 8) = 0xffffffffffffffff;
        *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x18 + uVar28 * 8) =
             *(undefined8 *)(param_1 + 0x78);
        *(longlong *)(param_1 + 0x78) = *plVar34;
        goto switchD_1424ac49e_caseD_7;
      case 0x2d:
        plVar34[1] = lVar18 + 2;
        uVar16 = *(undefined8 *)(local_60 + 8 + lVar18 * 8);
        plVar34[1] = lVar18 + 3;
        lVar17 = *(longlong *)(param_1 + 0x20);
        lVar19 = *(longlong *)(param_1 + 0xc0);
        iVar13 = (int)*(undefined8 *)(local_60 + 0x10 + lVar18 * 8);
        iVar11 = iVar13 * 3;
        if (*(longlong *)(*(longlong *)(lVar17 + 0x38) + 0x48) == 0) {
          iVar11 = iVar13;
        }
        uVar28 = (ulonglong)uVar37;
        lVar18 = *(longlong *)(lVar19 + 0x10 + uVar28 * 8);
        lVar15 = uVar28 + 2;
        if (lVar18 < 0) {
          lVar18 = *plVar34;
          lVar20 = (longlong)(int)uVar16;
          lVar17 = lVar18 - lVar20;
          *(longlong *)(lVar19 + lVar15 * 8) = lVar17;
          if (lVar17 != 0 && lVar20 <= lVar18) {
            lVar18 = *local_58;
            lVar20 = lVar17 - *(longlong *)(lVar18 + 0x20);
            if (((lVar20 < 0) || (*(int *)(lVar18 + 0x1c) <= lVar20)) ||
               (0xdbff < *(ushort *)(*(longlong *)(lVar18 + 0x30) + lVar20 * 2))) {
              FUN_14250e700(lVar18,lVar17);
            }
            else {
              *(int *)(lVar18 + 0x28) = (int)lVar20;
            }
            goto LAB_1424ae942;
          }
LAB_1424ae964:
          if ((-1 < lVar17) && (*plVar34 - (longlong)iVar11 <= lVar17)) {
            if (*piVar32 < 1) {
              lVar18 = plVar34[1];
              lVar17 = *(longlong *)(param_1 + 0xb0);
              iVar13 = *(int *)(param_1 + 0x38);
              iVar11 = *(int *)(lVar17 + 8);
              iVar22 = iVar11 + iVar13;
              if ((iVar22 < 0) || (*(int *)(lVar17 + 0xc) < iVar22)) {
                cVar8 = FUN_14250e240(lVar17,iVar22,piVar32);
                piVar32 = local_50;
                if (cVar8 != '\0') {
                  iVar11 = *(int *)(lVar17 + 8);
                  iVar22 = iVar13 + iVar11;
                  goto LAB_1424aea05;
                }
                plVar36 = (longlong *)0x0;
                iVar13 = *local_50;
              }
              else {
LAB_1424aea05:
                plVar36 = (longlong *)((longlong)iVar11 * 8 + *(longlong *)(lVar17 + 0x18));
                *(int *)(lVar17 + 8) = iVar22;
                iVar13 = *piVar32;
              }
              if (iVar13 < 1) {
                uVar27 = (ulonglong)*(int *)(param_1 + 0x38);
                plVar25 = plVar36 + -uVar27;
                uVar28 = uVar27 - 1 & 0x1fffffffffffffff;
                plVar34 = plVar25;
                plVar21 = plVar36;
                if ((uVar28 < 9) || ((uVar27 & 0x1ffffffffffffffc) == 0)) {
LAB_1424aeaac:
                  do {
                    lVar17 = *plVar34;
                    plVar34 = plVar34 + 1;
                    *plVar21 = lVar17;
                    plVar21 = plVar21 + 1;
                  } while (plVar34 != plVar36);
                }
                else {
                  uVar28 = uVar28 + 1;
                  uVar33 = uVar28 & 0xfffffffffffffffc;
                  plVar34 = plVar25 + uVar33;
                  plVar21 = plVar36 + uVar33;
                  plVar31 = plVar36 + 2;
                  uVar29 = uVar33;
                  do {
                    plVar1 = plVar31 + (-2 - uVar27);
                    uVar4 = *(undefined4 *)((longlong)plVar1 + 4);
                    lVar7 = plVar1[1];
                    uVar5 = *(undefined4 *)((longlong)plVar1 + 0xc);
                    lVar17 = plVar31[-uVar27];
                    lVar20 = (plVar31 + -uVar27)[1];
                    *(int *)(plVar31 + -2) = (int)*plVar1;
                    *(undefined4 *)((longlong)plVar31 + -0xc) = uVar4;
                    *(int *)(plVar31 + -1) = (int)lVar7;
                    *(undefined4 *)((longlong)plVar31 + -4) = uVar5;
                    *plVar31 = lVar17;
                    plVar31[1] = lVar20;
                    plVar31 = plVar31 + 4;
                    uVar29 = uVar29 - 4;
                  } while (uVar29 != 0);
                  piVar32 = local_50;
                  if (uVar28 != uVar33) goto LAB_1424aeaac;
                }
                iVar13 = *(int *)(param_1 + 0x110);
                *(int *)(param_1 + 0x110) = iVar13 + -1;
                if (iVar13 < 2) {
                  *(undefined4 *)(param_1 + 0x110) = 10000;
                  iVar13 = *(int *)(param_1 + 0x10c) + 1;
                  *(int *)(param_1 + 0x10c) = iVar13;
                  if (*(code **)(param_1 + 0x118) == (code *)0x0) {
LAB_1424aeb16:
                    if ((*(int *)(param_1 + 0x108) < 1) ||
                       (iVar11 = 0x10312, iVar13 < *(int *)(param_1 + 0x108))) goto LAB_1424afb01;
                  }
                  else {
                    cVar8 = (**(code **)(param_1 + 0x118))(*(undefined8 *)(param_1 + 0x120));
                    piVar32 = local_50;
                    if (cVar8 != '\0') {
                      iVar13 = *(int *)(param_1 + 0x10c);
                      goto LAB_1424aeb16;
                    }
                    iVar11 = 0x10313;
                  }
                  *piVar32 = iVar11;
                }
LAB_1424afb01:
                lVar18 = lVar18 + -3;
                goto LAB_1424afb17;
              }
LAB_1424aef37:
              *piVar32 = 0x10311;
            }
            goto LAB_1424afb1b;
          }
        }
        else {
          if (lVar18 != 0) {
            lVar18 = lVar18 - *(longlong *)(lVar17 + 0x20);
            if (((lVar18 < 0) || (*(int *)(lVar17 + 0x1c) <= lVar18)) ||
               (0xdbff < *(ushort *)(*(longlong *)(lVar17 + 0x30) + lVar18 * 2))) {
              FUN_14250e700();
            }
            else {
              *(int *)(lVar17 + 0x28) = (int)lVar18;
            }
            lVar18 = *plVar36;
            if ((*(int *)(lVar18 + 0x28) < 1) ||
               (uVar23 = *(int *)(lVar18 + 0x28) - 1,
               0xd7ff < *(ushort *)(*(longlong *)(lVar18 + 0x30) + (ulonglong)uVar23 * 2))) {
              FUN_14250e620();
            }
            else {
              *(uint *)(lVar18 + 0x28) = uVar23;
            }
LAB_1424ae942:
            lVar18 = *plVar36;
            if (*(int *)(lVar18 + 0x1c) < *(int *)(lVar18 + 0x28)) {
              lVar17 = (**(code **)(*(longlong *)(lVar18 + 0x38) + 0x40))();
            }
            else {
              lVar17 = (longlong)*(int *)(lVar18 + 0x28) + *(longlong *)(lVar18 + 0x20);
            }
            *(longlong *)(lVar19 + lVar15 * 8) = lVar17;
            piVar32 = local_50;
            goto LAB_1424ae964;
          }
          *(undefined8 *)(lVar19 + lVar15 * 8) = 0xffffffffffffffff;
        }
        lVar15 = *(longlong *)(param_1 + 0xb0);
        iVar13 = *(int *)(param_1 + 0x38);
        uVar23 = *(int *)(lVar15 + 8) - iVar13;
        uVar27 = 0;
        if (0 < (int)uVar23) {
          uVar27 = (ulonglong)uVar23;
        }
        *(int *)(lVar15 + 8) = (int)uVar27;
        lVar15 = *(longlong *)(lVar15 + 0x18);
        *(undefined8 *)(param_1 + 0x78) =
             *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x18 + uVar28 * 8);
        plVar34 = (longlong *)(uVar27 * 8 + lVar15 + (longlong)iVar13 * -8);
        break;
      case 0x2e:
        if (*plVar34 == *(longlong *)(param_1 + 0x78)) {
          *(undefined8 *)(param_1 + 0x78) =
               *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x18 + (ulonglong)uVar37 * 8);
          goto switchD_1424ac49e_caseD_7;
        }
        goto switchD_1424ac49e_caseD_1;
      case 0x2f:
        plVar34[1] = lVar18 + 2;
        uVar16 = *(undefined8 *)(local_60 + 8 + lVar18 * 8);
        plVar34[1] = lVar18 + 3;
        iVar13 = (int)*(undefined8 *)(local_60 + 0x10 + lVar18 * 8);
        iVar11 = iVar13 * 3;
        if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x48) == 0) {
          iVar11 = iVar13;
        }
        plVar34[1] = lVar18 + 4;
        uVar3 = *(undefined8 *)(local_60 + 0x18 + lVar18 * 8);
        lVar19 = *(longlong *)(param_1 + 0xc0);
        uVar28 = (ulonglong)uVar37;
        lVar18 = *(longlong *)(lVar19 + 0x10 + uVar28 * 8);
        lVar15 = uVar28 + 2;
        if (-1 < lVar18) {
          if (lVar18 != 0) {
            lVar17 = *local_58;
            lVar18 = lVar18 - *(longlong *)(lVar17 + 0x20);
            if (((lVar18 < 0) || (*(int *)(lVar17 + 0x1c) <= lVar18)) ||
               (0xdbff < *(ushort *)(*(longlong *)(lVar17 + 0x30) + lVar18 * 2))) {
              FUN_14250e700();
            }
            else {
              *(int *)(lVar17 + 0x28) = (int)lVar18;
            }
            lVar18 = *local_58;
            if ((*(int *)(lVar18 + 0x28) < 1) ||
               (uVar23 = *(int *)(lVar18 + 0x28) - 1,
               0xd7ff < *(ushort *)(*(longlong *)(lVar18 + 0x30) + (ulonglong)uVar23 * 2))) {
              FUN_14250e620();
            }
            else {
              *(uint *)(lVar18 + 0x28) = uVar23;
            }
            goto LAB_1424aeb3e;
          }
          *(undefined8 *)(lVar19 + lVar15 * 8) = 0xffffffffffffffff;
LAB_1424aeb77:
          *(undefined8 *)(param_1 + 0x78) =
               *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x18 + uVar28 * 8);
          plVar34[1] = (ulonglong)((uint)uVar3 & 0xffffff);
          goto switchD_1424ac49e_caseD_7;
        }
        lVar18 = *plVar34;
        lVar20 = (longlong)(int)uVar16;
        lVar17 = lVar18 - lVar20;
        *(longlong *)(lVar19 + lVar15 * 8) = lVar17;
        if (lVar17 != 0 && lVar20 <= lVar18) {
          lVar18 = *local_58;
          lVar20 = lVar17 - *(longlong *)(lVar18 + 0x20);
          if (((lVar20 < 0) || (*(int *)(lVar18 + 0x1c) <= lVar20)) ||
             (0xdbff < *(ushort *)(*(longlong *)(lVar18 + 0x30) + lVar20 * 2))) {
            FUN_14250e700(lVar18,lVar17);
          }
          else {
            *(int *)(lVar18 + 0x28) = (int)lVar20;
          }
LAB_1424aeb3e:
          lVar18 = *local_58;
          if (*(int *)(lVar18 + 0x1c) < *(int *)(lVar18 + 0x28)) {
            lVar17 = (**(code **)(*(longlong *)(lVar18 + 0x38) + 0x40))();
          }
          else {
            lVar17 = (longlong)*(int *)(lVar18 + 0x28) + *(longlong *)(lVar18 + 0x20);
          }
          *(longlong *)(lVar19 + lVar15 * 8) = lVar17;
          piVar32 = local_50;
        }
        if ((lVar17 < 0) || (lVar17 < *plVar34 - (longlong)iVar11)) goto LAB_1424aeb77;
        if (0 < *piVar32) goto LAB_1424afb1b;
        lVar18 = plVar34[1];
        lVar17 = *(longlong *)(param_1 + 0xb0);
        iVar13 = *(int *)(param_1 + 0x38);
        iVar11 = *(int *)(lVar17 + 8);
        iVar22 = iVar11 + iVar13;
        if ((iVar22 < 0) || (*(int *)(lVar17 + 0xc) < iVar22)) {
          cVar8 = FUN_14250e240(lVar17,iVar22,piVar32);
          piVar32 = local_50;
          if (cVar8 != '\0') {
            iVar11 = *(int *)(lVar17 + 8);
            iVar22 = iVar13 + iVar11;
            goto LAB_1424aef1e;
          }
          plVar36 = (longlong *)0x0;
          if (*local_50 < 1) goto LAB_1424af8df;
          goto LAB_1424aef37;
        }
LAB_1424aef1e:
        plVar36 = (longlong *)((longlong)iVar11 * 8 + *(longlong *)(lVar17 + 0x18));
        *(int *)(lVar17 + 8) = iVar22;
        if (0 < *piVar32) goto LAB_1424aef37;
LAB_1424af8df:
        uVar27 = (ulonglong)*(int *)(param_1 + 0x38);
        plVar25 = plVar36 + -uVar27;
        uVar28 = uVar27 - 1 & 0x1fffffffffffffff;
        plVar34 = plVar25;
        plVar21 = plVar36;
        if ((uVar28 < 9) || ((uVar27 & 0x1ffffffffffffffc) == 0)) {
LAB_1424af96d:
          do {
            lVar17 = *plVar34;
            plVar34 = plVar34 + 1;
            *plVar21 = lVar17;
            plVar21 = plVar21 + 1;
          } while (plVar34 != plVar36);
        }
        else {
          uVar28 = uVar28 + 1;
          uVar33 = uVar28 & 0xfffffffffffffffc;
          plVar34 = plVar25 + uVar33;
          plVar21 = plVar36 + uVar33;
          plVar31 = plVar36 + 2;
          uVar29 = uVar33;
          do {
            plVar1 = plVar31 + (-2 - uVar27);
            uVar4 = *(undefined4 *)((longlong)plVar1 + 4);
            lVar7 = plVar1[1];
            uVar5 = *(undefined4 *)((longlong)plVar1 + 0xc);
            lVar17 = plVar31[-uVar27];
            lVar20 = (plVar31 + -uVar27)[1];
            *(int *)(plVar31 + -2) = (int)*plVar1;
            *(undefined4 *)((longlong)plVar31 + -0xc) = uVar4;
            *(int *)(plVar31 + -1) = (int)lVar7;
            *(undefined4 *)((longlong)plVar31 + -4) = uVar5;
            *plVar31 = lVar17;
            plVar31[1] = lVar20;
            plVar31 = plVar31 + 4;
            uVar29 = uVar29 - 4;
          } while (uVar29 != 0);
          piVar32 = local_50;
          if (uVar28 != uVar33) goto LAB_1424af96d;
        }
        iVar13 = *(int *)(param_1 + 0x110);
        *(int *)(param_1 + 0x110) = iVar13 + -1;
        if (iVar13 < 2) {
          *(undefined4 *)(param_1 + 0x110) = 10000;
          iVar13 = *(int *)(param_1 + 0x10c) + 1;
          *(int *)(param_1 + 0x10c) = iVar13;
          if (*(code **)(param_1 + 0x118) == (code *)0x0) {
LAB_1424af9d7:
            if ((*(int *)(param_1 + 0x108) < 1) ||
               (iVar11 = 0x10312, iVar13 < *(int *)(param_1 + 0x108))) goto LAB_1424afb13;
          }
          else {
            cVar8 = (**(code **)(param_1 + 0x118))(*(undefined8 *)(param_1 + 0x120));
            piVar32 = local_50;
            if (cVar8 != '\0') {
              iVar13 = *(int *)(param_1 + 0x10c);
              goto LAB_1424af9d7;
            }
            iVar11 = 0x10313;
          }
          *piVar32 = iVar11;
        }
LAB_1424afb13:
        lVar18 = lVar18 + -4;
LAB_1424afb17:
        plVar25[1] = lVar18;
        plVar34 = plVar36;
LAB_1424afb1b:
        *plVar34 = *(longlong *)(lVar19 + lVar15 * 8);
        break;
      case 0x30:
        if (*plVar34 == *(longlong *)(param_1 + 0x78)) {
          *(undefined8 *)(param_1 + 0x78) =
               *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x18 + (ulonglong)uVar37 * 8);
          FUN_14250dfa0(*(undefined8 *)(param_1 + 0xb0),
                        *(undefined4 *)
                         (*(longlong *)(param_1 + 0xc0) + (ulonglong)(uVar14 & 0xffffff) * 8));
          piVar32 = local_50;
        }
        goto switchD_1424ac49e_caseD_1;
      case 0x31:
        if (*(longlong *)(param_1 + 0x78) <= *plVar34) goto LAB_1424ad62a;
        lVar15 = *local_58;
        lVar18 = *plVar34 - *(longlong *)(lVar15 + 0x20);
        if (((lVar18 < 0) || (*(int *)(lVar15 + 0x1c) <= lVar18)) ||
           (0xdbff < *(ushort *)(*(longlong *)(lVar15 + 0x30) + lVar18 * 2))) {
          FUN_14250e700();
        }
        else {
          *(int *)(lVar15 + 0x28) = (int)lVar18;
        }
        lVar15 = *plVar36;
        iVar13 = *(int *)(lVar15 + 0x28);
        if (iVar13 < *(int *)(lVar15 + 0x2c)) {
          if (0xd7ff < *(ushort *)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar13 * 2))
          goto LAB_1424ae2b1;
          *(int *)(lVar15 + 0x28) = iVar13 + 1;
          uVar23 = (uint)*(ushort *)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar13 * 2);
        }
        else {
LAB_1424ae2b1:
          uVar23 = FUN_14250e570();
        }
        if ((int)uVar23 < 0x100) {
          bVar9 = *(byte *)((longlong)((int)uVar23 >> 3) +
                           (ulonglong)(uVar14 & 0xffffff) * 0x20 +
                           *(longlong *)(*(longlong *)(param_1 + 8) + 0x98)) >> (uVar23 & 7) & 1;
        }
        else {
          bVar9 = FUN_142512880(*(undefined8 *)
                                 (*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) +
                                 (ulonglong)(uVar14 & 0xffffff) * 8),uVar23);
        }
        piVar32 = local_50;
        if (bVar9 == 0) goto LAB_1424aec2a;
        goto switchD_1424ac49e_caseD_1;
      case 0x32:
        lVar15 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x70);
        uVar16 = FUN_142516630(local_90,uVar37);
        lVar18 = *plVar34;
        lVar19 = *(longlong *)(param_1 + 0x20);
        lVar17 = lVar18 - *(longlong *)(lVar19 + 0x20);
        if (((lVar17 < 0) || (*(int *)(lVar19 + 0x1c) <= lVar17)) ||
           (0xdbff < *(ushort *)(*(longlong *)(lVar19 + 0x30) + lVar17 * 2))) {
          FUN_14250e700(lVar19,lVar18);
        }
        else {
          *(int *)(lVar19 + 0x28) = (int)lVar17;
        }
        plVar36 = local_58;
        if (lVar18 < *(longlong *)(param_1 + 0x78)) {
LAB_1424ad8a8:
          do {
            lVar19 = *plVar36;
            iVar13 = *(int *)(lVar19 + 0x28);
            if (iVar13 < *(int *)(lVar19 + 0x2c)) {
              if (0xd7ff < *(ushort *)(*(longlong *)(lVar19 + 0x30) + (longlong)iVar13 * 2))
              goto LAB_1424ad8f0;
              *(int *)(lVar19 + 0x28) = iVar13 + 1;
              uVar2 = *(ushort *)(*(longlong *)(lVar19 + 0x30) + (longlong)iVar13 * 2);
              uVar37 = (uint)uVar2;
              uVar23 = (uint)uVar2;
              if (uVar2 < 0x100) goto LAB_1424ad8fc;
LAB_1424ad8d9:
              bVar9 = FUN_142512880(uVar16,uVar37);
            }
            else {
LAB_1424ad8f0:
              uVar37 = FUN_14250e570();
              uVar23 = uVar37;
              if (0xff < (int)uVar37) goto LAB_1424ad8d9;
LAB_1424ad8fc:
              bVar9 = *(byte *)((ulonglong)(uVar14 & 0xffffff) * 0x20 + lVar15 +
                               (longlong)((int)uVar23 >> 3)) >> (uVar23 & 7) & 1;
            }
            if (bVar9 == 0) goto LAB_1424ad752;
            lVar18 = *plVar36;
            if (*(int *)(lVar18 + 0x1c) < *(int *)(lVar18 + 0x28)) {
              lVar18 = (**(code **)(*(longlong *)(lVar18 + 0x38) + 0x40))();
              if (*(longlong *)(param_1 + 0x78) <= lVar18) break;
              goto LAB_1424ad8a8;
            }
            lVar18 = (longlong)*(int *)(lVar18 + 0x28) + *(longlong *)(lVar18 + 0x20);
          } while (lVar18 < *(longlong *)(param_1 + 0x78));
        }
        *(undefined1 *)(param_1 + 0xa8) = 1;
LAB_1424ad752:
        uVar28 = plVar34[1];
        piVar32 = local_50;
        if (lVar18 == *plVar34) {
LAB_1424ae552:
          plVar34[1] = uVar28 + 1;
          goto switchD_1424ac49e_caseD_7;
        }
        plVar34[(ulonglong)((uint)*(undefined8 *)(local_60 + uVar28 * 8) & 0xffffff) + 2] = *plVar34
        ;
        *plVar34 = lVar18;
        if (0 < *local_50) goto LAB_1424ae5d5;
        lVar15 = *(longlong *)(param_1 + 0xb0);
        iVar13 = *(int *)(param_1 + 0x38);
        iVar11 = *(int *)(lVar15 + 8);
        iVar22 = iVar11 + iVar13;
        if ((iVar22 < 0) || (*(int *)(lVar15 + 0xc) < iVar22)) {
          cVar8 = FUN_14250e240(lVar15,iVar22,local_50);
          if (cVar8 != '\0') {
            iVar11 = *(int *)(lVar15 + 8);
            iVar22 = iVar13 + iVar11;
            goto LAB_1424ad7be;
          }
          plVar36 = (longlong *)0x0;
          iVar13 = *local_50;
          piVar32 = local_50;
        }
        else {
LAB_1424ad7be:
          plVar36 = (longlong *)((longlong)iVar11 * 8 + *(longlong *)(lVar15 + 0x18));
          *(int *)(lVar15 + 8) = iVar22;
          iVar13 = *local_50;
          piVar32 = local_50;
        }
        local_50 = piVar32;
        if (0 < iVar13) goto LAB_1424ae5ce;
        uVar29 = (ulonglong)*(int *)(param_1 + 0x38);
        plVar25 = plVar36 + -uVar29;
        uVar27 = uVar29 - 1 & 0x1fffffffffffffff;
        plVar34 = plVar25;
        plVar21 = plVar36;
        if ((8 < uVar27) && ((uVar29 & 0x1ffffffffffffffc) != 0)) {
          uVar27 = uVar27 + 1;
          uVar30 = uVar27 & 0xfffffffffffffffc;
          plVar34 = plVar25 + uVar30;
          plVar21 = plVar36 + uVar30;
          plVar31 = plVar36 + 2;
          uVar33 = uVar30;
          do {
            plVar1 = plVar31 + (-2 - uVar29);
            uVar4 = *(undefined4 *)((longlong)plVar1 + 4);
            lVar19 = plVar1[1];
            uVar5 = *(undefined4 *)((longlong)plVar1 + 0xc);
            lVar15 = plVar31[-uVar29];
            lVar18 = (plVar31 + -uVar29)[1];
            *(int *)(plVar31 + -2) = (int)*plVar1;
            *(undefined4 *)((longlong)plVar31 + -0xc) = uVar4;
            *(int *)(plVar31 + -1) = (int)lVar19;
            *(undefined4 *)((longlong)plVar31 + -4) = uVar5;
            *plVar31 = lVar15;
            plVar31[1] = lVar18;
            plVar31 = plVar31 + 4;
            uVar33 = uVar33 - 4;
          } while (uVar33 != 0);
          if (uVar27 == uVar30) goto LAB_1424af27c;
        }
        do {
          lVar15 = *plVar34;
          plVar34 = plVar34 + 1;
          *plVar21 = lVar15;
          plVar21 = plVar21 + 1;
        } while (plVar34 != plVar36);
LAB_1424af27c:
        iVar13 = *(int *)(param_1 + 0x110);
        *(int *)(param_1 + 0x110) = iVar13 + -1;
        if (iVar13 < 2) {
          *(undefined4 *)(param_1 + 0x110) = 10000;
          iVar13 = *(int *)(param_1 + 0x10c) + 1;
          *(int *)(param_1 + 0x10c) = iVar13;
          if (*(code **)(param_1 + 0x118) == (code *)0x0) {
LAB_1424af2d3:
            if ((*(int *)(param_1 + 0x108) < 1) ||
               (iVar11 = 0x10312, iVar13 < *(int *)(param_1 + 0x108))) goto LAB_1424afa22;
          }
          else {
            cVar8 = (**(code **)(param_1 + 0x118))(*(undefined8 *)(param_1 + 0x120));
            piVar32 = local_50;
            if (cVar8 != '\0') {
              iVar13 = *(int *)(param_1 + 0x10c);
              goto LAB_1424af2d3;
            }
            iVar11 = 0x10313;
          }
          *piVar32 = iVar11;
        }
LAB_1424afa22:
        plVar25[1] = uVar28;
        plVar36[1] = plVar36[1] + 1;
        plVar34 = plVar36;
        break;
      case 0x33:
        lVar15 = plVar34[(ulonglong)(uVar14 & 0xffffff) + 2];
        if (lVar15 != *plVar34) {
          lVar18 = *local_58;
          lVar19 = *plVar34 - *(longlong *)(lVar18 + 0x20);
          if (((lVar19 < 0) || (*(int *)(lVar18 + 0x1c) <= lVar19)) ||
             (0xdbff < *(ushort *)(*(longlong *)(lVar18 + 0x30) + lVar19 * 2))) {
            FUN_14250e700();
          }
          else {
            *(int *)(lVar18 + 0x28) = (int)lVar19;
          }
          lVar18 = *plVar36;
          if (*(int *)(lVar18 + 0x28) < 1) {
LAB_1424ae431:
            uVar23 = FUN_14250e620();
          }
          else {
            uVar23 = *(int *)(lVar18 + 0x28) - 1;
            if (0xd7ff < *(ushort *)(*(longlong *)(lVar18 + 0x30) + (ulonglong)uVar23 * 2))
            goto LAB_1424ae431;
            *(uint *)(lVar18 + 0x28) = uVar23;
            uVar23 = (uint)*(ushort *)(*(longlong *)(lVar18 + 0x30) + (ulonglong)uVar23 * 2);
          }
          lVar18 = *plVar36;
          if (*(int *)(lVar18 + 0x1c) < *(int *)(lVar18 + 0x28)) {
            lVar18 = (**(code **)(*(longlong *)(lVar18 + 0x38) + 0x40))();
          }
          else {
            lVar18 = (longlong)*(int *)(lVar18 + 0x28) + *(longlong *)(lVar18 + 0x20);
          }
          *plVar34 = lVar18;
          lVar18 = *plVar36;
          if (*(int *)(lVar18 + 0x28) < 1) {
LAB_1424ae82a:
            uVar14 = FUN_14250e620();
          }
          else {
            uVar14 = *(int *)(lVar18 + 0x28) - 1;
            if (0xd7ff < *(ushort *)(*(longlong *)(lVar18 + 0x30) + (ulonglong)uVar14 * 2))
            goto LAB_1424ae82a;
            *(uint *)(lVar18 + 0x28) = uVar14;
            uVar14 = (uint)*(ushort *)(*(longlong *)(lVar18 + 0x30) + (ulonglong)uVar14 * 2);
          }
          if (((uVar23 == 10) && (lVar15 < *plVar34)) &&
             ((uVar14 == 0xd && (*(char *)(local_60 + -0xd + plVar34[1] * 8) == '4')))) {
            lVar15 = *plVar36;
            if (*(int *)(lVar15 + 0x1c) < *(int *)(lVar15 + 0x28)) {
              lVar15 = (**(code **)(*(longlong *)(lVar15 + 0x38) + 0x40))();
            }
            else {
              lVar15 = (longlong)*(int *)(lVar15 + 0x28) + *(longlong *)(lVar15 + 0x20);
            }
            *plVar34 = lVar15;
          }
          if (0 < *local_50) goto switchD_1424ac49e_caseD_e;
          lVar15 = plVar34[1];
          lVar18 = *(longlong *)(param_1 + 0xb0);
          iVar13 = *(int *)(param_1 + 0x38);
          iVar11 = *(int *)(lVar18 + 8);
          iVar22 = iVar11 + iVar13;
          if ((iVar22 < 0) || (*(int *)(lVar18 + 0xc) < iVar22)) {
            cVar8 = FUN_14250e240(lVar18,iVar22,local_50);
            if (cVar8 != '\0') {
              iVar11 = *(int *)(lVar18 + 8);
              iVar22 = iVar13 + iVar11;
              goto LAB_1424af46c;
            }
            plVar36 = (longlong *)0x0;
            iVar13 = *local_50;
          }
          else {
LAB_1424af46c:
            plVar36 = (longlong *)((longlong)iVar11 * 8 + *(longlong *)(lVar18 + 0x18));
            *(int *)(lVar18 + 8) = iVar22;
            iVar13 = *local_50;
          }
          if (iVar13 < 1) {
            uVar27 = (ulonglong)*(int *)(param_1 + 0x38);
            plVar25 = plVar36 + -uVar27;
            uVar28 = uVar27 - 1 & 0x1fffffffffffffff;
            plVar34 = plVar25;
            plVar21 = plVar36;
            if ((uVar28 < 9) || ((uVar27 & 0x1ffffffffffffffc) == 0)) {
LAB_1424af520:
              do {
                lVar18 = *plVar34;
                plVar34 = plVar34 + 1;
                *plVar21 = lVar18;
                plVar21 = plVar21 + 1;
              } while (plVar34 != plVar36);
            }
            else {
              uVar28 = uVar28 + 1;
              uVar33 = uVar28 & 0xfffffffffffffffc;
              plVar34 = plVar25 + uVar33;
              plVar21 = plVar36 + uVar33;
              plVar31 = plVar36 + 2;
              uVar29 = uVar33;
              do {
                plVar1 = plVar31 + (-2 - uVar27);
                uVar4 = *(undefined4 *)((longlong)plVar1 + 4);
                lVar17 = plVar1[1];
                uVar5 = *(undefined4 *)((longlong)plVar1 + 0xc);
                lVar18 = plVar31[-uVar27];
                lVar19 = (plVar31 + -uVar27)[1];
                *(int *)(plVar31 + -2) = (int)*plVar1;
                *(undefined4 *)((longlong)plVar31 + -0xc) = uVar4;
                *(int *)(plVar31 + -1) = (int)lVar17;
                *(undefined4 *)((longlong)plVar31 + -4) = uVar5;
                *plVar31 = lVar18;
                plVar31[1] = lVar19;
                plVar31 = plVar31 + 4;
                uVar29 = uVar29 - 4;
              } while (uVar29 != 0);
              if (uVar28 != uVar33) goto LAB_1424af520;
            }
            iVar13 = *(int *)(param_1 + 0x110);
            *(int *)(param_1 + 0x110) = iVar13 + -1;
            if (iVar13 < 2) {
              *(undefined4 *)(param_1 + 0x110) = 10000;
              iVar13 = *(int *)(param_1 + 0x10c) + 1;
              *(int *)(param_1 + 0x10c) = iVar13;
              if (*(code **)(param_1 + 0x118) == (code *)0x0) {
LAB_1424af582:
                if ((*(int *)(param_1 + 0x108) < 1) ||
                   (iVar11 = 0x10312, iVar13 < *(int *)(param_1 + 0x108))) goto LAB_1424af5b9;
              }
              else {
                cVar8 = (**(code **)(param_1 + 0x118))(*(undefined8 *)(param_1 + 0x120));
                if (cVar8 != '\0') {
                  iVar13 = *(int *)(param_1 + 0x10c);
                  goto LAB_1424af582;
                }
                iVar11 = 0x10313;
              }
              *local_50 = iVar11;
            }
LAB_1424af5b9:
            plVar25[1] = lVar15 + -1;
            piVar32 = local_50;
            plVar34 = plVar36;
            break;
          }
LAB_1424afb8c:
          *local_50 = 0x10311;
          goto switchD_1424ac49e_caseD_e;
        }
        goto switchD_1424ac49e_caseD_7;
      case 0x34:
        if ((uVar28 & 1) == 0) {
          lVar15 = *plVar34;
          lVar18 = *local_58;
          lVar19 = lVar15 - *(longlong *)(lVar18 + 0x20);
          if (((lVar19 < 0) || (*(int *)(lVar18 + 0x1c) <= lVar19)) ||
             (0xdbff < *(ushort *)(*(longlong *)(lVar18 + 0x30) + lVar19 * 2))) {
            FUN_14250e700(lVar18,lVar15);
          }
          else {
            *(int *)(lVar18 + 0x28) = (int)lVar19;
          }
          piVar32 = local_50;
          if (lVar15 < *(longlong *)(param_1 + 0x78)) {
LAB_1424addee:
            do {
              lVar18 = *plVar36;
              iVar13 = *(int *)(lVar18 + 0x28);
              if (iVar13 < *(int *)(lVar18 + 0x2c)) {
                if (0xd7ff < *(ushort *)(*(longlong *)(lVar18 + 0x30) + (longlong)iVar13 * 2))
                goto LAB_1424ade1a;
                *(int *)(lVar18 + 0x28) = iVar13 + 1;
                uVar23 = (uint)*(ushort *)(*(longlong *)(lVar18 + 0x30) + (longlong)iVar13 * 2);
              }
              else {
LAB_1424ade1a:
                uVar23 = FUN_14250e570();
                piVar32 = local_50;
              }
              if (((uVar23 & 0x7e) < 0x2a) &&
                 ((uVar23 == 10 ||
                  (((uVar23 & 0xffffdf50) == 0 && (uVar28 & 2) == 0 &&
                   (((uVar23 - 0xb < 3 || (uVar23 - 0x2028 < 2)) || (uVar23 == 0x85))))))))
              goto LAB_1424ae544;
              lVar15 = *plVar36;
              if (*(int *)(lVar15 + 0x1c) < *(int *)(lVar15 + 0x28)) {
                lVar15 = (**(code **)(*(longlong *)(lVar15 + 0x38) + 0x40))();
                piVar32 = local_50;
                if (*(longlong *)(param_1 + 0x78) <= lVar15) break;
                goto LAB_1424addee;
              }
              lVar15 = (longlong)*(int *)(lVar15 + 0x28) + *(longlong *)(lVar15 + 0x20);
            } while (lVar15 < *(longlong *)(param_1 + 0x78));
          }
        }
        else {
          lVar15 = *(longlong *)(param_1 + 0x78);
        }
        *(undefined1 *)(param_1 + 0xa8) = 1;
LAB_1424ae544:
        uVar28 = plVar34[1];
        if (lVar15 == *plVar34) goto LAB_1424ae552;
        plVar34[(ulonglong)((uint)*(undefined8 *)(local_60 + uVar28 * 8) & 0xffffff) + 2] = *plVar34
        ;
        *plVar34 = lVar15;
        if (0 < *piVar32) goto LAB_1424ae5d5;
        lVar15 = *(longlong *)(param_1 + 0xb0);
        iVar13 = *(int *)(param_1 + 0x38);
        iVar11 = *(int *)(lVar15 + 8);
        iVar22 = iVar11 + iVar13;
        if ((iVar22 < 0) || (*(int *)(lVar15 + 0xc) < iVar22)) {
          cVar8 = FUN_14250e240(lVar15,iVar22,piVar32);
          piVar32 = local_50;
          if (cVar8 != '\0') {
            iVar11 = *(int *)(lVar15 + 8);
            iVar22 = iVar13 + iVar11;
            goto LAB_1424ae5b5;
          }
          plVar36 = (longlong *)0x0;
          iVar13 = *local_50;
        }
        else {
LAB_1424ae5b5:
          plVar36 = (longlong *)((longlong)iVar11 * 8 + *(longlong *)(lVar15 + 0x18));
          *(int *)(lVar15 + 8) = iVar22;
          iVar13 = *piVar32;
        }
        if (iVar13 < 1) {
          uVar29 = (ulonglong)*(int *)(param_1 + 0x38);
          plVar25 = plVar36 + -uVar29;
          uVar27 = uVar29 - 1 & 0x1fffffffffffffff;
          plVar34 = plVar25;
          plVar21 = plVar36;
          if ((8 < uVar27) && ((uVar29 & 0x1ffffffffffffffc) != 0)) {
            uVar27 = uVar27 + 1;
            uVar30 = uVar27 & 0xfffffffffffffffc;
            plVar34 = plVar25 + uVar30;
            plVar21 = plVar36 + uVar30;
            plVar31 = plVar36 + 2;
            uVar33 = uVar30;
            do {
              plVar1 = plVar31 + (-2 - uVar29);
              uVar4 = *(undefined4 *)((longlong)plVar1 + 4);
              lVar19 = plVar1[1];
              uVar5 = *(undefined4 *)((longlong)plVar1 + 0xc);
              lVar15 = plVar31[-uVar29];
              lVar18 = (plVar31 + -uVar29)[1];
              *(int *)(plVar31 + -2) = (int)*plVar1;
              *(undefined4 *)((longlong)plVar31 + -0xc) = uVar4;
              *(int *)(plVar31 + -1) = (int)lVar19;
              *(undefined4 *)((longlong)plVar31 + -4) = uVar5;
              *plVar31 = lVar15;
              plVar31[1] = lVar18;
              plVar31 = plVar31 + 4;
              uVar33 = uVar33 - 4;
            } while (uVar33 != 0);
            piVar32 = local_50;
            if (uVar27 == uVar30) goto LAB_1424af27c;
          }
          do {
            lVar15 = *plVar34;
            plVar34 = plVar34 + 1;
            *plVar21 = lVar15;
            plVar21 = plVar21 + 1;
          } while (plVar34 != plVar36);
          goto LAB_1424af27c;
        }
LAB_1424ae5ce:
        *piVar32 = 0x10311;
LAB_1424ae5d5:
        plVar34[1] = plVar34[1] + 1;
        break;
      case 0x35:
        cVar8 = FUN_1424b5e10(param_1,*plVar34);
LAB_1424ad389:
        piVar32 = local_50;
        if ((bool)cVar8 == ((uVar28 & 0xffffff) != 0)) goto switchD_1424ac49e_caseD_1;
        break;
      case 0x36:
        if (*(longlong *)(param_1 + 0x58) <= *plVar34) goto LAB_1424ac43c;
        lVar15 = *local_58;
        lVar18 = *plVar34 - *(longlong *)(lVar15 + 0x20);
        if (((lVar18 < 0) || (*(int *)(lVar15 + 0x1c) <= lVar18)) ||
           (0xdbff < *(ushort *)(*(longlong *)(lVar15 + 0x30) + lVar18 * 2))) {
          FUN_14250e700();
        }
        else {
          *(int *)(lVar15 + 0x28) = (int)lVar18;
        }
        lVar15 = *plVar36;
        iVar13 = *(int *)(lVar15 + 0x28);
        if (iVar13 < *(int *)(lVar15 + 0x2c)) {
          if (0xd7ff < *(ushort *)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar13 * 2))
          goto LAB_1424ae2f7;
          *(int *)(lVar15 + 0x28) = iVar13 + 1;
          uVar23 = (uint)*(ushort *)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar13 * 2);
        }
        else {
LAB_1424ae2f7:
          uVar23 = FUN_14250e570();
        }
        piVar32 = local_50;
        if (uVar23 == 10) {
          lVar15 = *plVar36;
          if (*(int *)(lVar15 + 0x1c) < *(int *)(lVar15 + 0x28)) {
            lVar15 = (**(code **)(*(longlong *)(lVar15 + 0x38) + 0x40))();
          }
          else {
            lVar15 = (longlong)*(int *)(lVar15 + 0x28) + *(longlong *)(lVar15 + 0x20);
          }
          piVar32 = local_50;
          if (lVar15 == *(longlong *)(param_1 + 0x58)) goto LAB_1424ac43c;
        }
        goto switchD_1424ac49e_caseD_1;
      case 0x37:
        if (*plVar34 < *(longlong *)(param_1 + 0x58)) {
          lVar15 = *local_58;
          lVar18 = *plVar34 - *(longlong *)(lVar15 + 0x20);
          if (((lVar18 < 0) || (*(int *)(lVar15 + 0x1c) <= lVar18)) ||
             (0xdbff < *(ushort *)(*(longlong *)(lVar15 + 0x30) + lVar18 * 2))) {
            FUN_14250e700();
          }
          else {
            *(int *)(lVar15 + 0x28) = (int)lVar18;
          }
          lVar15 = *plVar36;
          if ((*(int *)(lVar15 + 0x2c) <= *(int *)(lVar15 + 0x28)) ||
             (uVar2 = *(ushort *)
                       (*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(lVar15 + 0x28) * 2),
             uVar23 = (uint)uVar2, 0xd7ff < uVar2)) {
            uVar23 = FUN_14250e920();
          }
          goto joined_r0x0001424adef7;
        }
LAB_1424ac43c:
        *(undefined2 *)(param_1 + 0xa8) = 0x101;
switchD_1424ac49e_caseD_7:
        break;
      case 0x38:
        if (*(longlong *)(param_1 + 0x78) <= *plVar34) goto LAB_1424ad62a;
        lVar15 = *local_58;
        lVar18 = *plVar34 - *(longlong *)(lVar15 + 0x20);
        if (((lVar18 < 0) || (*(int *)(lVar15 + 0x1c) <= lVar18)) ||
           (0xdbff < *(ushort *)(*(longlong *)(lVar15 + 0x30) + lVar18 * 2))) {
          FUN_14250e700();
        }
        else {
          *(int *)(lVar15 + 0x28) = (int)lVar18;
        }
        lVar15 = *plVar36;
        iVar13 = *(int *)(lVar15 + 0x28);
        if (iVar13 < *(int *)(lVar15 + 0x2c)) {
          if (0xd7ff < *(ushort *)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar13 * 2))
          goto LAB_1424ae329;
          *(int *)(lVar15 + 0x28) = iVar13 + 1;
          uVar23 = (uint)*(ushort *)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar13 * 2);
        }
        else {
LAB_1424ae329:
          uVar23 = FUN_14250e570();
        }
        cVar8 = FUN_1424d86a0(uVar23);
        if (((uVar28 & 0xffffff) != 0) == (uVar23 == 9 || cVar8 == '\f')) goto LAB_1424ae905;
LAB_1424aeeb3:
        lVar18 = *plVar36;
LAB_1424aeeb6:
        if (*(int *)(lVar18 + 0x1c) < *(int *)(lVar18 + 0x28)) {
          lVar15 = (**(code **)(*(longlong *)(lVar18 + 0x38) + 0x40))();
          *plVar34 = lVar15;
          piVar32 = local_50;
        }
        else {
          *plVar34 = (longlong)*(int *)(lVar18 + 0x28) + *(longlong *)(lVar18 + 0x20);
          piVar32 = local_50;
        }
        break;
      case 0x39:
        if (*(longlong *)(param_1 + 0x78) <= *plVar34) goto LAB_1424ad62a;
        lVar15 = *local_58;
        lVar18 = *plVar34 - *(longlong *)(lVar15 + 0x20);
        if (((lVar18 < 0) || (*(int *)(lVar15 + 0x1c) <= lVar18)) ||
           (0xdbff < *(ushort *)(*(longlong *)(lVar15 + 0x30) + lVar18 * 2))) {
          FUN_14250e700();
        }
        else {
          *(int *)(lVar15 + 0x28) = (int)lVar18;
        }
        lVar15 = *plVar36;
        iVar13 = *(int *)(lVar15 + 0x28);
        if (iVar13 < *(int *)(lVar15 + 0x2c)) {
          if (0xd7ff < *(ushort *)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar13 * 2))
          goto LAB_1424ae35a;
          *(int *)(lVar15 + 0x28) = iVar13 + 1;
          uVar23 = (uint)*(ushort *)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar13 * 2);
        }
        else {
LAB_1424ae35a:
          uVar23 = FUN_14250e570();
        }
        piVar32 = local_50;
        if ((uVar23 & 0xffffdf50) == 0) {
          if ((int)uVar23 < 0x85) {
            if (2 < uVar23 - 10) {
              if (uVar23 != 0xd) goto switchD_1424ac49e_caseD_1;
              iVar13 = FUN_14250e920(*plVar36);
              if (iVar13 == 10) {
                FUN_14250e570(*plVar36);
              }
            }
          }
          else if ((1 < uVar23 - 0x2028) && (uVar23 != 0x85)) goto switchD_1424ac49e_caseD_1;
          goto LAB_1424aec2a;
        }
        goto switchD_1424ac49e_caseD_1;
      case 0x3a:
        if (*(longlong *)(param_1 + 0x78) <= *plVar34) goto LAB_1424ad62a;
        lVar15 = *local_58;
        lVar18 = *plVar34 - *(longlong *)(lVar15 + 0x20);
        if (((lVar18 < 0) || (*(int *)(lVar15 + 0x1c) <= lVar18)) ||
           (0xdbff < *(ushort *)(*(longlong *)(lVar15 + 0x30) + lVar18 * 2))) {
          FUN_14250e700();
        }
        else {
          *(int *)(lVar15 + 0x28) = (int)lVar18;
        }
        lVar15 = *plVar36;
        iVar13 = *(int *)(lVar15 + 0x28);
        if (iVar13 < *(int *)(lVar15 + 0x2c)) {
          if (0xd7ff < *(ushort *)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar13 * 2))
          goto LAB_1424ae3b4;
          *(int *)(lVar15 + 0x28) = iVar13 + 1;
          uVar23 = (uint)*(ushort *)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar13 * 2);
        }
        else {
LAB_1424ae3b4:
          uVar23 = FUN_14250e570();
        }
        if ((uVar23 & 0xffffdf50) == 0) {
          bVar38 = true;
          if (((3 < uVar23 - 10) && (uVar23 != 0x85)) && (uVar23 != 0x2028)) {
            bVar38 = uVar23 == 0x2029;
          }
        }
        else {
          bVar38 = false;
        }
        piVar32 = local_50;
        if (bVar38 != ((uVar28 & 0xffffff) != 0)) goto LAB_1424aec2a;
switchD_1424ac49e_caseD_1:
        lVar15 = *(longlong *)(param_1 + 0xb0);
        iVar13 = *(int *)(param_1 + 0x38);
        uVar23 = *(int *)(lVar15 + 8) - iVar13;
        uVar28 = 0;
        if (0 < (int)uVar23) {
          uVar28 = (ulonglong)uVar23;
        }
        *(int *)(lVar15 + 8) = (int)uVar28;
        plVar34 = (longlong *)(uVar28 * 8 + *(longlong *)(lVar15 + 0x18) + (longlong)iVar13 * -8);
      }
    } while (*piVar32 < 1);
LAB_1424afb96:
    *(undefined1 *)(param_1 + 0x82) = 0;
LAB_1424afba0:
    *(longlong **)(param_1 + 0xb8) = plVar34;
  }
  else {
LAB_1424ac3a4:
    *local_50 = iVar13;
  }
  return;
}



// FUNCTION 1424afbd0 Unwind@1424afbd0 body=55 status=ok
// SIG undefined Unwind@1424afbd0(void)

void Unwind_1424afbd0(undefined8 param_1,longlong param_2)

{
  FUN_142515ba0(param_2 + 0x50);
  return;
}



// FUNCTION 1424afc10 Unwind@1424afc10 body=55 status=ok
// SIG undefined Unwind@1424afc10(void)

void Unwind_1424afc10(undefined8 param_1,longlong param_2)

{
  FUN_142515ba0(param_2 + 0x28);
  return;
}



// FUNCTION 1424afc50 Unwind@1424afc50 body=55 status=ok
// SIG undefined Unwind@1424afc50(void)

void Unwind_1424afc50(undefined8 param_1,longlong param_2)

{
  FUN_142515ba0(param_2 + 0x50);
  return;
}



// FUNCTION 1424afc90 FUN_1424afc90 body=48 status=ok
// SIG undefined FUN_1424afc90(void)

bool FUN_1424afc90(uint param_1)

{
  if ((param_1 & 0xffffdf50) != 0) {
    return false;
  }
  if (((3 < param_1 - 10) && (param_1 != 0x85)) && (param_1 != 0x2028)) {
    return param_1 == 0x2029;
  }
  return true;
}



// FUNCTION 1424afcc0 FUN_1424afcc0 body=177 status=ok
// SIG undefined FUN_1424afcc0(void)

undefined8 FUN_1424afcc0(longlong param_1,longlong param_2,int *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (0 < *param_3) {
    return 0;
  }
  if (0 < *(int *)(param_1 + 0x13c)) {
    *param_3 = *(int *)(param_1 + 0x13c);
    return 0;
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  lVar1 = *(longlong *)(param_1 + 0x30);
  *(longlong *)(param_1 + 0x48) = lVar1;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(longlong *)(param_1 + 0x78) = lVar1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(longlong *)(param_1 + 0x58) = lVar1;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(longlong *)(param_1 + 0x68) = lVar1;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined2 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x10c) = 0x271000000000;
  if ((-1 < param_2) && (param_2 <= lVar1)) {
    *(longlong *)(param_1 + 0x90) = param_2;
    uVar2 = FUN_1424ab380(0,param_3);
    return uVar2;
  }
  *param_3 = 8;
  return 0;
}



// FUNCTION 1424afd80 FUN_1424afd80 body=121 status=ok
// SIG undefined FUN_1424afd80(void)

void FUN_1424afd80(longlong param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x40) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined2 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x10c) = 0x271000000000;
  return;
}



// FUNCTION 1424afe00 FUN_1424afe00 body=12744 status=ok
// SIG undefined FUN_1424afe00(void)

void FUN_1424afe00(longlong param_1,int param_2,char param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  short *psVar3;
  ulonglong *puVar4;
  short sVar5;
  short sVar6;
  ushort uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  char cVar15;
  byte bVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  undefined8 uVar23;
  ulonglong uVar24;
  ulonglong *puVar25;
  ushort uVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  short *psVar31;
  longlong lVar32;
  ulonglong uVar33;
  ulonglong *puVar34;
  uint uVar35;
  longlong lVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  int *piVar40;
  short *psVar41;
  ulonglong *puVar42;
  ulonglong uVar43;
  ulonglong *puVar44;
  uint uVar45;
  ulonglong *puVar46;
  bool bVar47;
  undefined1 local_d8 [40];
  undefined1 local_b0 [40];
  ulonglong local_88;
  undefined8 local_80;
  longlong local_78;
  char local_69;
  longlong local_68;
  longlong local_60;
  int *local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (0 < *param_4) {
    return;
  }
  lVar20 = *(longlong *)(param_1 + 8);
  if ((*(ushort *)(lVar20 + 0x30) & 0x11) == 0) {
    if ((*(ushort *)(lVar20 + 0x30) & 2) == 0) {
      local_78 = *(longlong *)(lVar20 + 0x40);
    }
    else {
      local_78 = lVar20 + 0x32;
    }
  }
  else {
    local_78 = 0;
  }
  local_50 = *(longlong *)(*(longlong *)(lVar20 + 0x20) + 0x18);
  local_80 = *(undefined8 *)(lVar20 + 0x68);
  local_60 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(lVar20 + 0x80);
  local_58 = param_4;
  FUN_14250e230(*(undefined8 *)(param_1 + 0xb0));
  lVar20 = *(longlong *)(param_1 + 0xb0);
  piVar40 = (int *)(param_1 + 0x13c);
  iVar30 = *(int *)(*(longlong *)(param_1 + 8) + 0x80);
  iVar18 = *(int *)(lVar20 + 8);
  iVar27 = iVar18 + iVar30;
  local_68 = param_1;
  if ((iVar27 < 0) || (*(int *)(lVar20 + 0xc) < iVar27)) {
    cVar15 = FUN_14250e240(lVar20,iVar27,piVar40);
    if (cVar15 != '\0') {
      iVar18 = *(int *)(lVar20 + 8);
      iVar27 = iVar30 + iVar18;
      goto LAB_1424afed9;
    }
    puVar44 = (ulonglong *)0x0;
  }
  else {
LAB_1424afed9:
    puVar44 = (ulonglong *)((longlong)iVar18 * 8 + *(longlong *)(lVar20 + 0x18));
    *(int *)(lVar20 + 8) = iVar27;
  }
  iVar30 = *piVar40;
  if (0 < iVar30) {
LAB_1424afefb:
    *local_58 = iVar30;
    return;
  }
  if (2 < *(int *)(*(longlong *)(local_68 + 8) + 0x80)) {
    lVar20 = 0;
    do {
      puVar44[lVar20 + 2] = 0xffffffffffffffff;
      lVar20 = lVar20 + 1;
    } while (lVar20 < (longlong)*(int *)(*(longlong *)(local_68 + 8) + 0x80) + -2);
    iVar30 = *piVar40;
    if (0 < iVar30) goto LAB_1424afefb;
  }
  puVar44[1] = 0;
  local_88 = (ulonglong)param_2;
  *puVar44 = local_88;
  lVar20 = local_68;
  lVar22 = local_50;
  piVar40 = local_58;
  local_69 = param_3;
  if (0 < *(int *)(*(longlong *)(local_68 + 8) + 0x84)) {
    lVar21 = 0;
    do {
      *(undefined8 *)(*(longlong *)(local_68 + 0xc0) + lVar21 * 8) = 0;
      lVar21 = lVar21 + 1;
    } while (lVar21 < *(int *)(*(longlong *)(local_68 + 8) + 0x84));
  }
LAB_1424affd1:
  lVar21 = local_60;
  uVar33 = puVar44[1];
  uVar38 = *(ulonglong *)(lVar22 + uVar33 * 8);
  uVar24 = uVar33 + 1;
  puVar44[1] = uVar24;
  uVar35 = (uint)uVar38;
  uVar19 = (uint)(uVar38 >> 0x18) & 0xff;
  if (0x39 < uVar19 - 1) {
switchD_1424b000c_caseD_5:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar45 = uVar35 & 0xffffff;
  switch(uVar19) {
  case 1:
    goto switchD_1424b000c_caseD_1;
  case 2:
    if ((local_69 != '\0') && (*puVar44 != *(ulonglong *)(lVar20 + 0x78)))
    goto switchD_1424b000c_caseD_1;
    *(undefined1 *)(lVar20 + 0x82) = 1;
    *(undefined8 *)(lVar20 + 0x98) = *(undefined8 *)(lVar20 + 0x90);
    *(ulonglong *)(lVar20 + 0x88) = local_88;
    *(ulonglong *)(lVar20 + 0x90) = *puVar44;
    goto LAB_1424b2fc0;
  case 3:
    uVar24 = *puVar44;
    if (*(longlong *)(lVar20 + 0x78) <= (longlong)uVar24) goto LAB_1424aff94;
    *puVar44 = uVar24 + 1;
    uVar26 = *(ushort *)(local_60 + uVar24 * 2);
    uVar19 = (uint)uVar26;
    if ((((uVar26 & 0xfc00) == 0xd800) && (uVar24 + 1 != *(ulonglong *)(lVar20 + 0x78))) &&
       (uVar35 = (uint)*(ushort *)(local_60 + 2 + uVar24 * 2), (uVar35 & 0xfc00) == 0xdc00)) {
      *puVar44 = uVar24 + 2;
      uVar19 = (uint)uVar26 * 0x400 + uVar35 + 0xfca02400;
    }
    lVar22 = local_50;
    if (uVar19 != uVar45) goto switchD_1424b000c_caseD_1;
    break;
  case 4:
    uVar23 = *(undefined8 *)(lVar22 + 8 + uVar33 * 8);
    puVar44[1] = uVar33 + 2;
    uVar24 = (ulonglong)((uint)uVar23 & 0xffffff);
    psVar31 = (short *)(local_60 + *puVar44 * 2);
    plVar1 = (longlong *)(lVar20 + 0x78);
    psVar3 = psVar31 + uVar24;
    psVar41 = (short *)(local_78 + (ulonglong)(uVar35 & 0xffffff) * 2);
    do {
      if (psVar3 <= psVar31) {
        *puVar44 = *puVar44 + uVar24;
        lVar22 = local_50;
        piVar40 = local_58;
        goto switchD_1424b000c_caseD_7;
      }
      if ((short *)(local_60 + *plVar1 * 2) <= psVar31) goto LAB_1424b185d;
      sVar6 = *psVar31;
      psVar31 = psVar31 + 1;
      sVar5 = *psVar41;
      lVar20 = local_68;
      psVar41 = psVar41 + 1;
    } while (sVar6 == sVar5);
    goto LAB_1424b1864;
  default:
    goto switchD_1424b000c_caseD_5;
  case 6:
    if (0 < *piVar40) goto switchD_1424b000c_caseD_e;
    lVar22 = *(longlong *)(lVar20 + 0xb0);
    iVar30 = *(int *)(lVar20 + 0x38);
    iVar18 = *(int *)(lVar22 + 8);
    iVar27 = iVar18 + iVar30;
    if ((iVar27 < 0) || (*(int *)(lVar22 + 0xc) < iVar27)) {
      cVar15 = FUN_14250e240(lVar22,iVar27,piVar40);
      piVar40 = local_58;
      if (cVar15 != '\0') {
        iVar18 = *(int *)(lVar22 + 8);
        iVar27 = iVar30 + iVar18;
        goto LAB_1424b0150;
      }
      puVar46 = (ulonglong *)0x0;
      iVar30 = *local_58;
      lVar20 = local_68;
    }
    else {
LAB_1424b0150:
      puVar46 = (ulonglong *)((longlong)iVar18 * 8 + *(longlong *)(lVar22 + 0x18));
      *(int *)(lVar22 + 8) = iVar27;
      iVar30 = *piVar40;
      lVar20 = local_68;
    }
    if (0 < iVar30) {
LAB_1424b2fb2:
      *piVar40 = 0x10311;
      goto switchD_1424b000c_caseD_e;
    }
    uVar33 = (ulonglong)*(int *)(lVar20 + 0x38);
    puVar34 = puVar46 + -uVar33;
    uVar24 = uVar33 - 1 & 0x1fffffffffffffff;
    puVar44 = puVar34;
    puVar25 = puVar46;
    if ((uVar24 < 9) || ((uVar33 & 0x1ffffffffffffffc) == 0)) {
LAB_1424b0200:
      do {
        uVar24 = *puVar44;
        puVar44 = puVar44 + 1;
        *puVar25 = uVar24;
        puVar25 = puVar25 + 1;
      } while (puVar44 != puVar46);
    }
    else {
      uVar24 = uVar24 + 1;
      uVar43 = uVar24 & 0xfffffffffffffffc;
      puVar44 = puVar34 + uVar43;
      puVar25 = puVar46 + uVar43;
      puVar42 = puVar46 + 2;
      uVar38 = uVar43;
      do {
        puVar4 = puVar42 + (-2 - uVar33);
        uVar10 = *(undefined4 *)((longlong)puVar4 + 4);
        uVar12 = puVar4[1];
        uVar11 = *(undefined4 *)((longlong)puVar4 + 0xc);
        uVar39 = puVar42[-uVar33];
        uVar37 = (puVar42 + -uVar33)[1];
        *(int *)(puVar42 + -2) = (int)*puVar4;
        *(undefined4 *)((longlong)puVar42 + -0xc) = uVar10;
        *(int *)(puVar42 + -1) = (int)uVar12;
        *(undefined4 *)((longlong)puVar42 + -4) = uVar11;
        *puVar42 = uVar39;
        puVar42[1] = uVar37;
        puVar42 = puVar42 + 4;
        uVar38 = uVar38 - 4;
      } while (uVar38 != 0);
      if (uVar24 != uVar43) goto LAB_1424b0200;
    }
    iVar30 = *(int *)(lVar20 + 0x110);
    *(int *)(lVar20 + 0x110) = iVar30 + -1;
    local_68 = lVar20;
    if (iVar30 < 2) {
      *(undefined4 *)(lVar20 + 0x110) = 10000;
      iVar30 = *(int *)(lVar20 + 0x10c) + 1;
      *(int *)(lVar20 + 0x10c) = iVar30;
      if (*(code **)(lVar20 + 0x118) == (code *)0x0) {
LAB_1424b0276:
        if ((*(int *)(lVar20 + 0x108) < 1) || (iVar18 = 0x10312, iVar30 < *(int *)(lVar20 + 0x108)))
        goto LAB_1424b23cc;
      }
      else {
        cVar15 = (**(code **)(lVar20 + 0x118))(*(undefined8 *)(lVar20 + 0x120));
        if (cVar15 != '\0') {
          iVar30 = *(int *)(lVar20 + 0x10c);
          goto LAB_1424b0276;
        }
        iVar18 = 0x10313;
      }
      *local_58 = iVar18;
    }
LAB_1424b23cc:
    puVar34[1] = (ulonglong)(uVar35 & 0xffffff);
    lVar22 = local_50;
    piVar40 = local_58;
    puVar44 = puVar46;
    break;
  case 7:
    break;
  case 8:
    puVar44[(ulonglong)uVar45 + 4] = *puVar44;
    break;
  case 9:
    puVar44[(ulonglong)(uVar35 & 0xffffff) + 2] = puVar44[(ulonglong)uVar45 + 4];
    puVar44[(ulonglong)uVar45 + 3] = *puVar44;
    break;
  case 10:
    uVar24 = *puVar44;
    if (*(longlong *)(lVar20 + 0x78) <= (longlong)uVar24) goto LAB_1424aff94;
    *puVar44 = uVar24 + 1;
    uVar26 = *(ushort *)(local_60 + uVar24 * 2);
    uVar19 = (uint)uVar26;
    if (((uVar26 & 0xfc00) == 0xd800) && (uVar24 + 1 != *(ulonglong *)(lVar20 + 0x78))) {
      uVar45 = (uint)*(ushort *)(local_60 + 2 + uVar24 * 2);
      if ((uVar45 & 0xfc00) == 0xdc00) {
        *puVar44 = uVar24 + 2;
        uVar19 = (uint)uVar26 * 0x400 + uVar45 + 0xfca02400;
      }
LAB_1424b1aec:
      bVar16 = FUN_142512880(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(lVar20 + 8) + 0x90) +
                              (ulonglong)(uVar35 & 0x7fffff) * 8),uVar19);
    }
    else {
      if (0xff < uVar26) goto LAB_1424b1aec;
      bVar16 = *(byte *)((ulonglong)(uVar26 >> 3) +
                        (ulonglong)(uVar35 & 0x7fffff) * 0x20 +
                        *(longlong *)(*(longlong *)(lVar20 + 8) + 0x98)) >> (uVar26 & 7) & 1;
    }
    bVar47 = (uVar38 & 0x800000) == 0;
    if (bVar16 == 0) {
      bVar47 = SUB41((uVar35 & 0x800000) >> 0x17,0);
    }
    bVar47 = bVar47 == false;
    piVar40 = local_58;
LAB_1424b1b88:
    lVar22 = local_50;
    if (bVar47) goto switchD_1424b000c_caseD_1;
    break;
  case 0xb:
    uVar24 = *puVar44;
    if ((longlong)uVar24 < *(longlong *)(lVar20 + 0x78)) {
      *puVar44 = uVar24 + 1;
      uVar26 = *(ushort *)(local_60 + uVar24 * 2);
      uVar19 = (uint)uVar26;
      if (((uVar26 & 0xfc00) == 0xd800) && (uVar24 + 1 != *(ulonglong *)(lVar20 + 0x78))) {
        uVar35 = (uint)*(ushort *)(local_60 + 2 + uVar24 * 2);
        if ((uVar35 & 0xfc00) == 0xdc00) {
          *puVar44 = uVar24 + 2;
          uVar19 = (uint)uVar26 * 0x400 + uVar35 + 0xfca02400;
        }
      }
      else if (uVar26 < 0x100) {
        bVar16 = *(byte *)((ulonglong)(uVar26 >> 3) +
                          (ulonglong)(uVar35 & 0xffffff) * 0x20 +
                          *(longlong *)(*(longlong *)(lVar20 + 8) + 0x70)) >> (uVar19 & 7) & 1;
        goto joined_r0x0001424b0e88;
      }
      uVar23 = FUN_142516630(local_80,uVar45);
      cVar15 = FUN_142512880(uVar23,uVar19);
      bVar47 = cVar15 == '\0';
      piVar40 = local_58;
      goto LAB_1424b1b88;
    }
    goto LAB_1424aff94;
  case 0xc:
    uVar24 = *puVar44;
    if (*(longlong *)(lVar20 + 0x78) <= (longlong)uVar24) goto LAB_1424aff94;
    *puVar44 = uVar24 + 1;
    uVar26 = *(ushort *)(local_60 + uVar24 * 2);
    uVar19 = (uint)uVar26;
    if ((((uVar26 & 0xfc00) == 0xd800) && (uVar24 + 1 != *(ulonglong *)(lVar20 + 0x78))) &&
       (uVar35 = (uint)*(ushort *)(local_60 + 2 + uVar24 * 2), (uVar35 & 0xfc00) == 0xdc00)) {
      *puVar44 = uVar24 + 2;
      uVar19 = (uint)uVar26 * 0x400 + uVar35 + 0xfca02400;
    }
    lVar22 = local_50;
    if (((uVar19 & 0xffffdf50) == 0) &&
       (((uVar19 - 10 < 4 || (uVar19 - 0x2028 < 2)) || (uVar19 == 0x85))))
    goto switchD_1424b000c_caseD_1;
    break;
  case 0xd:
switchD_1424b000c_caseD_d:
    puVar44[1] = (ulonglong)(uVar35 & 0xffffff);
    break;
  case 0xe:
    goto switchD_1424b000c_caseD_e;
  case 0xf:
    if (*piVar40 < 1) {
      lVar21 = *(longlong *)(lVar20 + 0xb0);
      iVar30 = *(int *)(lVar20 + 0x38);
      iVar18 = *(int *)(lVar21 + 8);
      iVar27 = iVar18 + iVar30;
      if ((iVar27 < 0) || (*(int *)(lVar21 + 0xc) < iVar27)) {
        cVar15 = FUN_14250e240(lVar21,iVar27,piVar40);
        lVar22 = local_50;
        piVar40 = local_58;
        if (cVar15 != '\0') {
          iVar18 = *(int *)(lVar21 + 8);
          iVar27 = iVar30 + iVar18;
          goto LAB_1424b18cf;
        }
        puVar46 = (ulonglong *)0x0;
        iVar30 = *local_58;
        lVar20 = local_68;
      }
      else {
LAB_1424b18cf:
        puVar46 = (ulonglong *)((longlong)iVar18 * 8 + *(longlong *)(lVar21 + 0x18));
        *(int *)(lVar21 + 8) = iVar27;
        iVar30 = *piVar40;
        lVar20 = local_68;
      }
      local_68 = lVar20;
      if (iVar30 < 1) {
        uVar38 = (ulonglong)*(int *)(lVar20 + 0x38);
        puVar34 = puVar46 + -uVar38;
        uVar33 = uVar38 - 1 & 0x1fffffffffffffff;
        puVar44 = puVar34;
        puVar25 = puVar46;
        if ((uVar33 < 9) || ((uVar38 & 0x1ffffffffffffffc) == 0)) {
LAB_1424b25ba:
          do {
            uVar33 = *puVar44;
            puVar44 = puVar44 + 1;
            *puVar25 = uVar33;
            puVar25 = puVar25 + 1;
          } while (puVar44 != puVar46);
        }
        else {
          uVar33 = uVar33 + 1;
          uVar39 = uVar33 & 0xfffffffffffffffc;
          puVar44 = puVar34 + uVar39;
          puVar25 = puVar46 + uVar39;
          puVar42 = puVar46 + 2;
          uVar43 = uVar39;
          do {
            puVar4 = puVar42 + (-2 - uVar38);
            uVar10 = *(undefined4 *)((longlong)puVar4 + 4);
            uVar13 = puVar4[1];
            uVar11 = *(undefined4 *)((longlong)puVar4 + 0xc);
            uVar37 = puVar42[-uVar38];
            uVar12 = (puVar42 + -uVar38)[1];
            *(int *)(puVar42 + -2) = (int)*puVar4;
            *(undefined4 *)((longlong)puVar42 + -0xc) = uVar10;
            *(int *)(puVar42 + -1) = (int)uVar13;
            *(undefined4 *)((longlong)puVar42 + -4) = uVar11;
            *puVar42 = uVar37;
            puVar42[1] = uVar12;
            puVar42 = puVar42 + 4;
            uVar43 = uVar43 - 4;
          } while (uVar43 != 0);
          if (uVar33 != uVar39) goto LAB_1424b25ba;
        }
        iVar30 = *(int *)(lVar20 + 0x110);
        *(int *)(lVar20 + 0x110) = iVar30 + -1;
        if (iVar30 < 2) {
          *(undefined4 *)(lVar20 + 0x110) = 10000;
          iVar30 = *(int *)(lVar20 + 0x10c) + 1;
          *(int *)(lVar20 + 0x10c) = iVar30;
          if (*(code **)(lVar20 + 0x118) == (code *)0x0) {
LAB_1424b2630:
            if ((*(int *)(lVar20 + 0x108) < 1) ||
               (iVar18 = 0x10312, iVar30 < *(int *)(lVar20 + 0x108))) goto LAB_1424b2cf8;
          }
          else {
            cVar15 = (**(code **)(lVar20 + 0x118))(*(undefined8 *)(lVar20 + 0x120));
            if (cVar15 != '\0') {
              iVar30 = *(int *)(lVar20 + 0x10c);
              goto LAB_1424b2630;
            }
            iVar18 = 0x10313;
          }
          *local_58 = iVar18;
        }
LAB_1424b2cf8:
        puVar34[1] = uVar24;
        lVar22 = local_50;
        piVar40 = local_58;
        puVar44 = puVar46;
      }
      else {
        *piVar40 = 0x10311;
      }
    }
    puVar44[1] = (ulonglong)(uVar35 & 0xffffff);
    break;
  case 0x10:
    cVar15 = FUN_1424b5c60(lVar20,(int)*puVar44);
    goto LAB_1424b13b9;
  case 0x11:
    if (*(char *)(lVar20 + 0x82) == '\0') {
      uVar24 = *(ulonglong *)(lVar20 + 0x70);
    }
    else {
      uVar24 = *(ulonglong *)(lVar20 + 0x90);
    }
    if (*puVar44 != uVar24) goto switchD_1424b000c_caseD_1;
    break;
  case 0x12:
    uVar33 = (ulonglong)((uint)*(undefined8 *)(lVar22 + -8 + (ulonglong)uVar45 * 8) & 0xffffff);
    if ((longlong)(int)puVar44[uVar33 + 2] < (longlong)*puVar44) {
      if (*piVar40 < 1) {
        lVar21 = *(longlong *)(lVar20 + 0xb0);
        iVar30 = *(int *)(lVar20 + 0x38);
        iVar18 = *(int *)(lVar21 + 8);
        iVar27 = iVar18 + iVar30;
        if ((iVar27 < 0) || (*(int *)(lVar21 + 0xc) < iVar27)) {
          cVar15 = FUN_14250e240(lVar21,iVar27,piVar40);
          lVar22 = local_50;
          piVar40 = local_58;
          if (cVar15 != '\0') {
            iVar18 = *(int *)(lVar21 + 8);
            iVar27 = iVar30 + iVar18;
            goto LAB_1424b1fb9;
          }
          puVar46 = (ulonglong *)0x0;
          iVar30 = *local_58;
          lVar20 = local_68;
        }
        else {
LAB_1424b1fb9:
          puVar46 = (ulonglong *)((longlong)iVar18 * 8 + *(longlong *)(lVar21 + 0x18));
          *(int *)(lVar21 + 8) = iVar27;
          iVar30 = *piVar40;
          lVar20 = local_68;
        }
        local_68 = lVar20;
        if (iVar30 < 1) {
          uVar43 = (ulonglong)*(int *)(lVar20 + 0x38);
          puVar34 = puVar46 + -uVar43;
          uVar38 = uVar43 - 1 & 0x1fffffffffffffff;
          puVar44 = puVar34;
          puVar25 = puVar46;
          if ((uVar38 < 9) || ((uVar43 & 0x1ffffffffffffffc) == 0)) {
LAB_1424b276c:
            do {
              uVar38 = *puVar44;
              puVar44 = puVar44 + 1;
              *puVar25 = uVar38;
              puVar25 = puVar25 + 1;
            } while (puVar44 != puVar46);
          }
          else {
            uVar38 = uVar38 + 1;
            uVar37 = uVar38 & 0xfffffffffffffffc;
            puVar44 = puVar34 + uVar37;
            puVar25 = puVar46 + uVar37;
            puVar42 = puVar46 + 2;
            uVar39 = uVar37;
            do {
              puVar4 = puVar42 + (-2 - uVar43);
              uVar10 = *(undefined4 *)((longlong)puVar4 + 4);
              uVar14 = puVar4[1];
              uVar11 = *(undefined4 *)((longlong)puVar4 + 0xc);
              uVar12 = puVar42[-uVar43];
              uVar13 = (puVar42 + -uVar43)[1];
              *(int *)(puVar42 + -2) = (int)*puVar4;
              *(undefined4 *)((longlong)puVar42 + -0xc) = uVar10;
              *(int *)(puVar42 + -1) = (int)uVar14;
              *(undefined4 *)((longlong)puVar42 + -4) = uVar11;
              *puVar42 = uVar12;
              puVar42[1] = uVar13;
              puVar42 = puVar42 + 4;
              uVar39 = uVar39 - 4;
            } while (uVar39 != 0);
            if (uVar38 != uVar37) goto LAB_1424b276c;
          }
          iVar30 = *(int *)(lVar20 + 0x110);
          *(int *)(lVar20 + 0x110) = iVar30 + -1;
          if (iVar30 < 2) {
            *(undefined4 *)(lVar20 + 0x110) = 10000;
            iVar30 = *(int *)(lVar20 + 0x10c) + 1;
            *(int *)(lVar20 + 0x10c) = iVar30;
            if (*(code **)(lVar20 + 0x118) == (code *)0x0) {
LAB_1424b27e2:
              if ((*(int *)(lVar20 + 0x108) < 1) ||
                 (iVar18 = 0x10312, iVar30 < *(int *)(lVar20 + 0x108))) goto LAB_1424b2d3f;
            }
            else {
              cVar15 = (**(code **)(lVar20 + 0x118))(*(undefined8 *)(lVar20 + 0x120));
              if (cVar15 != '\0') {
                iVar30 = *(int *)(lVar20 + 0x10c);
                goto LAB_1424b27e2;
              }
              iVar18 = 0x10313;
            }
            *local_58 = iVar18;
          }
LAB_1424b2d3f:
          puVar34[1] = uVar24;
          puVar44 = puVar46;
          lVar22 = local_50;
          piVar40 = local_58;
        }
        else {
          *piVar40 = 0x10311;
        }
      }
      puVar44[1] = (ulonglong)(uVar35 & 0xffffff);
      puVar44[uVar33 + 2] = *puVar44;
    }
    break;
  case 0x13:
    uVar24 = *puVar44;
    if (*(longlong *)(lVar20 + 0x78) <= (longlong)uVar24) goto LAB_1424aff94;
    *puVar44 = uVar24 + 1;
    uVar26 = *(ushort *)(local_60 + uVar24 * 2);
    uVar19 = (uint)uVar26;
    if ((((uVar19 & 0xfc00) == 0xd800) && (uVar24 + 1 != *(ulonglong *)(lVar20 + 0x78))) &&
       (uVar35 = (uint)*(ushort *)(local_60 + 2 + uVar24 * 2), (uVar35 & 0xfc00) == 0xdc00)) {
      *puVar44 = uVar24 + 2;
      uVar19 = (uint)uVar26 * 0x400 + uVar35 + 0xfca02400;
    }
    lVar22 = *(longlong *)(*(longlong *)(lVar20 + 8) + 0x90);
    cVar15 = FUN_142512880(*(undefined8 *)(lVar22 + 0x28),uVar19);
    if (cVar15 == '\0') {
      cVar15 = FUN_142512880(*(undefined8 *)(lVar22 + 0x38),uVar19);
      if (cVar15 == '\0') {
        cVar15 = FUN_142512880(*(undefined8 *)(lVar22 + 0x40),uVar19);
        if (cVar15 == '\0') {
          cVar15 = FUN_142512880(*(undefined8 *)(lVar22 + 0x48),uVar19);
          if (cVar15 != '\0') {
LAB_1424b2c6a:
            while (uVar24 = *puVar44, (longlong)uVar24 < *(longlong *)(lVar20 + 0x78)) {
              *puVar44 = uVar24 + 1;
              uVar26 = *(ushort *)(local_60 + uVar24 * 2);
              uVar19 = (uint)uVar26;
              if ((((uVar26 & 0xfc00) == 0xd800) && (uVar24 + 1 != *(ulonglong *)(lVar20 + 0x78)))
                 && (uVar35 = (uint)*(ushort *)(local_60 + 2 + uVar24 * 2),
                    (uVar35 & 0xfc00) == 0xdc00)) {
                *puVar44 = uVar24 + 2;
                uVar19 = (uint)uVar26 * 0x400 + uVar35 + 0xfca02400;
              }
              cVar15 = FUN_142512880(*(undefined8 *)(lVar22 + 0x58),uVar19);
              if (cVar15 == '\0') {
                uVar23 = *(undefined8 *)(lVar22 + 0x60);
                goto LAB_1424b2e2b;
              }
            }
            goto LAB_1424b2cca;
          }
          cVar15 = FUN_142512880(*(undefined8 *)(lVar22 + 0x50),uVar19);
          if (cVar15 == '\0') {
            cVar15 = FUN_142512880(*(undefined8 *)(lVar22 + 0x58),uVar19);
            if (cVar15 != '\0') goto LAB_1424b2c6a;
            cVar15 = FUN_142512880(*(undefined8 *)(lVar22 + 0x60),uVar19);
            if (cVar15 == '\0') goto LAB_1424b2e9d;
          }
LAB_1424b2dbf:
          do {
            uVar24 = *puVar44;
            if (*(longlong *)(lVar20 + 0x78) <= (longlong)uVar24) goto LAB_1424b2cca;
            *puVar44 = uVar24 + 1;
            uVar26 = *(ushort *)(local_60 + uVar24 * 2);
            uVar19 = (uint)uVar26;
            if ((((uVar26 & 0xfc00) == 0xd800) && (uVar24 + 1 != *(ulonglong *)(lVar20 + 0x78))) &&
               (uVar35 = (uint)*(ushort *)(local_60 + 2 + uVar24 * 2), (uVar35 & 0xfc00) == 0xdc00))
            {
              *puVar44 = uVar24 + 2;
              uVar19 = (uint)uVar26 * 0x400 + uVar35 + 0xfca02400;
            }
            uVar23 = *(undefined8 *)(lVar22 + 0x60);
LAB_1424b2e2b:
            cVar15 = FUN_142512880(uVar23,uVar19);
          } while (cVar15 != '\0');
        }
        else {
          do {
            uVar24 = *puVar44;
            if (*(longlong *)(lVar20 + 0x78) <= (longlong)uVar24) goto LAB_1424b2f5b;
            *puVar44 = uVar24 + 1;
            uVar26 = *(ushort *)(local_60 + uVar24 * 2);
            uVar19 = (uint)uVar26;
            if ((((uVar26 & 0xfc00) == 0xd800) && (uVar24 + 1 != *(ulonglong *)(lVar20 + 0x78))) &&
               (uVar35 = (uint)*(ushort *)(local_60 + 2 + uVar24 * 2), (uVar35 & 0xfc00) == 0xdc00))
            {
              *puVar44 = uVar24 + 2;
              uVar19 = (uint)uVar26 * 0x400 + uVar35 + 0xfca02400;
            }
            cVar15 = FUN_142512880(*(undefined8 *)(lVar22 + 0x40),uVar19);
          } while (cVar15 != '\0');
          cVar15 = FUN_142512880(*(undefined8 *)(lVar22 + 0x48),uVar19);
          if (cVar15 != '\0') goto LAB_1424b2c6a;
          cVar15 = FUN_142512880(*(undefined8 *)(lVar22 + 0x50),uVar19);
          if (cVar15 != '\0') goto LAB_1424b2dbf;
          cVar15 = FUN_142512880(*(undefined8 *)(lVar22 + 0x58),uVar19);
          if (cVar15 != '\0') goto LAB_1424b2c6a;
        }
        uVar24 = *puVar44;
        *puVar44 = uVar24 - 1;
        if (((1 < (longlong)uVar24) &&
            ((*(ushort *)(local_60 + -2 + uVar24 * 2) & 0xfc00) == 0xdc00)) &&
           ((*(ushort *)(local_60 + -4 + uVar24 * 2) & 0xfc00) == 0xd800)) {
          *puVar44 = uVar24 - 2;
        }
        goto LAB_1424b2e9d;
      }
      uVar24 = *puVar44;
      if (uVar19 == 0xd) {
        if (((longlong)uVar24 < *(longlong *)(lVar20 + 0x78)) &&
           (*(short *)(local_60 + uVar24 * 2) == 10)) {
          uVar24 = uVar24 + 1;
          goto LAB_1424b2f57;
        }
        goto LAB_1424b2f5b;
      }
LAB_1424b2cca:
      lVar22 = local_50;
      piVar40 = local_58;
      if ((longlong)uVar24 < *(longlong *)(lVar20 + 0x78)) break;
    }
    else {
LAB_1424b2e9d:
      do {
        uVar24 = *puVar44;
        if (*(longlong *)(lVar20 + 0x78) <= (longlong)uVar24) goto LAB_1424b2cca;
        *puVar44 = uVar24 + 1;
        uVar26 = *(ushort *)(local_60 + uVar24 * 2);
        uVar19 = (uint)uVar26;
        if ((((uVar26 & 0xfc00) == 0xd800) && (uVar24 + 1 != *(ulonglong *)(lVar20 + 0x78))) &&
           (uVar35 = (uint)*(ushort *)(local_60 + 2 + uVar24 * 2), (uVar35 & 0xfc00) == 0xdc00)) {
          *puVar44 = uVar24 + 2;
          uVar19 = (uint)uVar26 * 0x400 + uVar35 + 0xfca02400;
        }
        cVar15 = FUN_142512880(*(undefined8 *)(lVar22 + 0x30),uVar19);
      } while (cVar15 != '\0');
      uVar33 = *puVar44;
      uVar24 = uVar33 - 1;
      *puVar44 = uVar24;
      if (((1 < (longlong)uVar33) && ((*(ushort *)(local_60 + -2 + uVar33 * 2) & 0xfc00) == 0xdc00))
         && ((*(ushort *)(local_60 + -4 + uVar33 * 2) & 0xfc00) == 0xd800)) {
        uVar24 = uVar33 - 2;
LAB_1424b2f57:
        *puVar44 = uVar24;
      }
LAB_1424b2f5b:
      lVar22 = local_50;
      piVar40 = local_58;
      if ((longlong)uVar24 < *(longlong *)(lVar20 + 0x78)) break;
    }
    *(undefined1 *)(lVar20 + 0xa8) = 1;
    lVar22 = local_50;
    piVar40 = local_58;
    break;
  case 0x14:
    if (*(longlong *)(lVar20 + 0x58) <= (longlong)*puVar44) goto LAB_1424b298e;
    goto switchD_1424b000c_caseD_1;
  case 0x15:
    uVar24 = *puVar44;
    if (*(longlong *)(lVar20 + 0x78) <= (longlong)uVar24) goto LAB_1424aff94;
    uVar33 = uVar24 + 1;
    *puVar44 = uVar33;
    uVar26 = *(ushort *)(local_60 + uVar24 * 2);
    if (((uVar26 & 0xfc00) == 0xd800) && (uVar33 != *(ulonglong *)(lVar20 + 0x78))) {
LAB_1424b08a7:
      lVar22 = local_50;
      if ((*(ushort *)(local_60 + 2 + uVar24 * 2) & 0xfc00) == 0xdc00) {
        *puVar44 = uVar24 + 2;
      }
    }
    else {
      lVar22 = local_50;
      if ((uVar26 == 0xd) &&
         (((longlong)uVar33 < (longlong)*(ulonglong *)(lVar20 + 0x78) &&
          (*(short *)(local_60 + 2 + uVar24 * 2) == 10)))) {
        *puVar44 = uVar24 + 2;
        if (((*(ushort *)(local_60 + 2 + uVar24 * 2) & 0xfc00) == 0xd800) &&
           ((uVar24 + 2 != *(ulonglong *)(lVar20 + 0x78) &&
            ((*(ushort *)(local_60 + 4 + uVar24 * 2) & 0xfc00) == 0xdc00)))) {
          *puVar44 = uVar24 + 3;
        }
      }
    }
    break;
  case 0x16:
    uVar24 = *puVar44;
    if ((longlong)uVar24 < *(longlong *)(lVar20 + 0x78)) {
      *puVar44 = uVar24 + 1;
      uVar26 = *(ushort *)(local_60 + uVar24 * 2);
      uVar19 = (uint)uVar26;
      if ((((uVar26 & 0xfc00) == 0xd800) && (uVar24 + 1 != *(ulonglong *)(lVar20 + 0x78))) &&
         (uVar35 = (uint)*(ushort *)(local_60 + 2 + uVar24 * 2), (uVar35 & 0xfc00) == 0xdc00)) {
        *puVar44 = uVar24 + 2;
        uVar19 = (uint)uVar26 * 0x400 + uVar35 + 0xfca02400;
      }
      cVar15 = FUN_1424d86a0(uVar19);
      bVar47 = ((uVar38 & 0xffffff) != 0) == (cVar15 == '\t');
      piVar40 = local_58;
      goto LAB_1424b1b88;
    }
    goto LAB_1424aff94;
  case 0x17:
    if (*puVar44 != *(ulonglong *)(lVar20 + 0x50)) goto switchD_1424b000c_caseD_1;
    break;
  case 0x18:
    uVar24 = *puVar44;
    lVar21 = *(longlong *)(lVar20 + 0x58);
    if ((longlong)(lVar21 - 2U) <= (longlong)uVar24) {
      if ((longlong)uVar24 < lVar21) {
        if (uVar24 == lVar21 - 1U) {
          uVar26 = *(ushort *)(local_60 + uVar24 * 2);
          uVar19 = (uint)uVar26;
          if ((uVar19 & 0xf800) == 0xd800) {
            if ((uVar26 & 0x400) == 0) {
              if ((uVar24 + 1 != lVar21) &&
                 (uVar26 = *(ushort *)(local_60 + 2 + uVar24 * 2), uVar35 = (uint)uVar26,
                 (uVar26 & 0xfc00) == 0xdc00)) {
                uVar19 = uVar19 << 10;
LAB_1424b2953:
                uVar19 = uVar19 + uVar35 + 0xfca02400;
              }
            }
            else if ((*(longlong *)(lVar20 + 0x50) < (longlong)uVar24) &&
                    (uVar26 = *(ushort *)(local_60 + -2 + uVar24 * 2), (uVar26 & 0xfc00) == 0xd800))
            {
              uVar35 = (uint)uVar26 << 10;
              goto LAB_1424b2953;
            }
          }
          cVar15 = FUN_1424afc90(uVar19);
          lVar22 = local_50;
          piVar40 = local_58;
          if ((cVar15 == '\0') ||
             (((uVar19 == 10 && (*(longlong *)(lVar20 + 0x50) < (longlong)uVar24)) &&
              (*(short *)(local_60 + -2 + uVar24 * 2) == 0xd)))) goto switchD_1424b000c_caseD_1;
        }
        else if (((uVar24 != lVar21 - 2U) || (*(short *)(local_60 + uVar24 * 2) != 0xd)) ||
                (*(short *)(local_60 + 2 + uVar24 * 2) != 10)) goto switchD_1424b000c_caseD_1;
      }
      goto LAB_1424b298e;
    }
    goto switchD_1424b000c_caseD_1;
  case 0x19:
    puVar44[(ulonglong)(uVar35 & 0xffffff) + 2] = 0;
    puVar44[1] = uVar33 + 4;
    lVar21 = uVar24 << 0x20;
    iVar30 = *(int *)(lVar22 + (lVar21 + 0x200000000 >> 0x1d));
    if ((*(int *)(lVar22 + (lVar21 + 0x100000000 >> 0x1d)) == 0) && (*piVar40 < 1)) {
      uVar23 = *(undefined8 *)(lVar22 + (lVar21 >> 0x1d));
      lVar21 = *(longlong *)(lVar20 + 0xb0);
      iVar18 = *(int *)(lVar20 + 0x38);
      iVar27 = *(int *)(lVar21 + 8);
      iVar29 = iVar27 + iVar18;
      if ((iVar29 < 0) || (*(int *)(lVar21 + 0xc) < iVar29)) {
        cVar15 = FUN_14250e240(lVar21,iVar29,piVar40);
        lVar22 = local_50;
        piVar40 = local_58;
        if (cVar15 != '\0') {
          iVar27 = *(int *)(lVar21 + 8);
          iVar29 = iVar18 + iVar27;
          goto LAB_1424b22f8;
        }
        puVar46 = (ulonglong *)0x0;
        iVar18 = *local_58;
        lVar20 = local_68;
      }
      else {
LAB_1424b22f8:
        puVar46 = (ulonglong *)((longlong)iVar27 * 8 + *(longlong *)(lVar21 + 0x18));
        *(int *)(lVar21 + 8) = iVar29;
        iVar18 = *piVar40;
        lVar20 = local_68;
      }
      local_68 = lVar20;
      if (iVar18 < 1) {
        uVar33 = (ulonglong)*(int *)(lVar20 + 0x38);
        puVar34 = puVar46 + -uVar33;
        uVar24 = uVar33 - 1 & 0x1fffffffffffffff;
        puVar44 = puVar34;
        puVar25 = puVar46;
        if ((uVar24 < 9) || ((uVar33 & 0x1ffffffffffffffc) == 0)) {
LAB_1424b2a38:
          do {
            uVar24 = *puVar44;
            puVar44 = puVar44 + 1;
            *puVar25 = uVar24;
            puVar25 = puVar25 + 1;
          } while (puVar44 != puVar46);
        }
        else {
          uVar24 = uVar24 + 1;
          uVar43 = uVar24 & 0xfffffffffffffffc;
          puVar44 = puVar34 + uVar43;
          puVar25 = puVar46 + uVar43;
          puVar42 = puVar46 + 2;
          uVar38 = uVar43;
          do {
            puVar4 = puVar42 + (-2 - uVar33);
            uVar10 = *(undefined4 *)((longlong)puVar4 + 4);
            uVar12 = puVar4[1];
            uVar11 = *(undefined4 *)((longlong)puVar4 + 0xc);
            uVar39 = puVar42[-uVar33];
            uVar37 = (puVar42 + -uVar33)[1];
            *(int *)(puVar42 + -2) = (int)*puVar4;
            *(undefined4 *)((longlong)puVar42 + -0xc) = uVar10;
            *(int *)(puVar42 + -1) = (int)uVar12;
            *(undefined4 *)((longlong)puVar42 + -4) = uVar11;
            *puVar42 = uVar39;
            puVar42[1] = uVar37;
            puVar42 = puVar42 + 4;
            uVar38 = uVar38 - 4;
          } while (uVar38 != 0);
          if (uVar24 != uVar43) goto LAB_1424b2a38;
        }
        iVar18 = *(int *)(lVar20 + 0x110);
        *(int *)(lVar20 + 0x110) = iVar18 + -1;
        if (iVar18 < 2) {
          *(undefined4 *)(lVar20 + 0x110) = 10000;
          iVar18 = *(int *)(lVar20 + 0x10c) + 1;
          *(int *)(lVar20 + 0x10c) = iVar18;
          if (*(code **)(lVar20 + 0x118) == (code *)0x0) {
LAB_1424b2aae:
            if ((*(int *)(lVar20 + 0x108) < 1) ||
               (iVar27 = 0x10312, iVar18 < *(int *)(lVar20 + 0x108))) goto LAB_1424b2d6f;
          }
          else {
            cVar15 = (**(code **)(lVar20 + 0x118))(*(undefined8 *)(lVar20 + 0x120));
            if (cVar15 != '\0') {
              iVar18 = *(int *)(lVar20 + 0x10c);
              goto LAB_1424b2aae;
            }
            iVar27 = 0x10313;
          }
          *local_58 = iVar27;
        }
LAB_1424b2d6f:
        puVar34[1] = (ulonglong)((uint)uVar23 & 0xffffff) + 1;
        lVar22 = local_50;
        piVar40 = local_58;
        puVar44 = puVar46;
      }
      else {
        *piVar40 = 0x10311;
      }
    }
    if (iVar30 == 0) goto switchD_1424b000c_caseD_1;
    if (iVar30 == -1) {
      puVar44[(ulonglong)uVar45 + 3] = *puVar44;
    }
    break;
  case 0x1a:
    puVar44[(ulonglong)(uVar35 & 0xffffff) + 2] = 0;
    puVar44[1] = uVar33 + 4;
    lVar21 = uVar24 << 0x20;
    uVar23 = *(undefined8 *)(lVar22 + (lVar21 >> 0x1d));
    iVar30 = *(int *)(lVar22 + (lVar21 + 0x100000000 >> 0x1d));
    iVar18 = *(int *)(lVar22 + (lVar21 + 0x200000000 >> 0x1d));
    if (iVar18 == -1) {
      puVar44[(ulonglong)uVar45 + 3] = *puVar44;
      if (iVar30 == 0) {
LAB_1424b191e:
        puVar44 = (ulonglong *)FUN_1424b5f70(lVar20,puVar44,uVar33 + 4,piVar40);
        lVar22 = local_50;
        piVar40 = local_58;
        goto LAB_1424b193a;
      }
    }
    else if (iVar30 == 0) {
      if (iVar18 != 0) goto LAB_1424b191e;
LAB_1424b193a:
      puVar44[1] = (ulonglong)((uint)uVar23 & 0xffffff) + 1;
    }
    break;
  case 0x1b:
    uVar24 = *puVar44;
    if ((longlong)uVar24 < *(longlong *)(lVar20 + 0x78)) {
      *puVar44 = uVar24 + 1;
      uVar26 = *(ushort *)(local_60 + uVar24 * 2);
      if (((uVar26 & 0xfc00) == 0xd800) && (uVar24 + 1 != *(ulonglong *)(lVar20 + 0x78)))
      goto LAB_1424b08a7;
      bVar47 = uVar26 == 10;
      goto LAB_1424b1b88;
    }
    goto LAB_1424aff94;
  case 0x1c:
    uVar38 = (ulonglong)
             ((uint)*(undefined8 *)(lVar22 + (ulonglong)(uVar35 & 0xffffff) * 8) & 0xffffff);
    uVar23 = *(undefined8 *)(lVar22 + 0x10 + (ulonglong)uVar45 * 8);
    uVar33 = *(ulonglong *)(lVar22 + 0x18 + (ulonglong)uVar45 * 8);
    uVar43 = puVar44[uVar38 + 2] + 1;
    puVar44[uVar38 + 2] = uVar43;
    iVar30 = (int)uVar33;
    if ((iVar30 == -1) || (lVar22 = local_50, uVar43 < (uVar33 & 0xffffffff))) {
      if ((longlong)uVar43 < (longlong)(int)uVar23) {
        iVar30 = *(int *)(lVar20 + 0x110);
        *(int *)(lVar20 + 0x110) = iVar30 + -1;
        if (iVar30 < 2) {
          FUN_1424b5f00(lVar20,piVar40);
          piVar40 = local_58;
        }
      }
      else {
        if (iVar30 == -1) {
          lVar22 = local_50;
          if (*puVar44 == puVar44[uVar38 + 3]) break;
          puVar44[uVar38 + 3] = *puVar44;
        }
        puVar44 = (ulonglong *)FUN_1424b5f70(lVar20,puVar44,uVar24,piVar40);
        piVar40 = local_58;
      }
      puVar44[1] = (ulonglong)(uVar45 + 4);
      lVar22 = local_50;
    }
    break;
  case 0x1d:
    uVar33 = (ulonglong)
             ((uint)*(undefined8 *)(lVar22 + (ulonglong)(uVar35 & 0xffffff) * 8) & 0xffffff);
    uVar23 = *(undefined8 *)(lVar22 + 0x10 + (ulonglong)uVar45 * 8);
    uVar24 = *(ulonglong *)(lVar22 + 0x18 + (ulonglong)uVar45 * 8);
    uVar38 = puVar44[uVar33 + 2] + 1;
    puVar44[uVar33 + 2] = uVar38;
    iVar30 = (int)uVar24;
    if ((iVar30 == -1) || (lVar22 = local_50, uVar38 < (uVar24 & 0xffffffff))) {
      if ((longlong)uVar38 < (longlong)(int)uVar23) {
        puVar44[1] = (ulonglong)(uVar45 + 4);
        iVar30 = *(int *)(lVar20 + 0x110);
        *(int *)(lVar20 + 0x110) = iVar30 + -1;
        lVar22 = local_50;
        if (iVar30 < 2) {
          FUN_1424b5f00(lVar20,piVar40);
          lVar22 = local_50;
          piVar40 = local_58;
        }
      }
      else {
        if (iVar30 == -1) {
          lVar22 = local_50;
          if (*puVar44 == puVar44[uVar33 + 3]) break;
          puVar44[uVar33 + 3] = *puVar44;
        }
        puVar44 = (ulonglong *)FUN_1424b5f70(lVar20,puVar44,uVar45 + 4,piVar40);
        lVar22 = local_50;
        piVar40 = local_58;
      }
    }
    break;
  case 0x1e:
    if (*(longlong *)(lVar20 + 0x50) < (longlong)*puVar44) {
      sVar6 = *(short *)(local_60 + -2 + *puVar44 * 2);
joined_r0x0001424b1419:
      if (sVar6 != 10) goto switchD_1424b000c_caseD_1;
    }
    break;
  case 0x20:
    *(longlong *)(*(longlong *)(lVar20 + 0xc0) + (ulonglong)(uVar35 & 0xffffff) * 8) =
         (longlong)*(int *)(*(longlong *)(lVar20 + 0xb0) + 8);
    break;
  case 0x21:
    lVar21 = *(longlong *)(lVar20 + 0xb0);
    piVar2 = (int *)(lVar20 + 0x38);
    puVar46 = (ulonglong *)
              ((longlong)
               (int)*(undefined8 *)
                     (*(longlong *)(lVar20 + 0xc0) + (ulonglong)(uVar35 & 0xffffff) * 8) * 8 +
               *(longlong *)(lVar21 + 0x18) + (longlong)*piVar2 * -8);
    lVar20 = local_68;
    lVar22 = local_50;
    if (puVar46 != puVar44) {
      if (0 < *piVar2) {
        lVar20 = 0;
        do {
          puVar46[lVar20] = puVar44[lVar20];
          lVar20 = lVar20 + 1;
        } while (lVar20 < *(int *)(local_68 + 0x38));
        lVar21 = *(longlong *)(local_68 + 0xb0);
      }
      FUN_14250dfa0(lVar21);
      lVar20 = local_68;
      lVar22 = local_50;
      piVar40 = local_58;
      puVar44 = puVar46;
    }
    break;
  case 0x22:
    uVar24 = puVar44[(ulonglong)(uVar35 & 0xffffff) + 2];
    if ((longlong)uVar24 < 0) goto switchD_1424b000c_caseD_1;
    uVar33 = puVar44[(ulonglong)uVar45 + 3];
    uVar38 = *puVar44;
    if ((longlong)uVar24 < (longlong)uVar33) {
      uVar39 = (uVar38 + uVar33) - uVar24;
      uVar43 = uVar24;
      do {
        if (*(longlong *)(lVar20 + 0x78) <= (longlong)uVar38) goto LAB_1424b185d;
        if (*(short *)(local_60 + uVar43 * 2) != *(short *)(local_60 + uVar38 * 2))
        goto LAB_1424b1864;
        uVar43 = uVar43 + 1;
        uVar38 = uVar38 + 1;
      } while (uVar33 != uVar43);
      uVar38 = uVar39;
      if ((((longlong)uVar24 < (longlong)uVar33) &&
          ((*(ushort *)(local_60 + -2 + uVar33 * 2) & 0xfc00) == 0xd800)) &&
         (((longlong)uVar39 < *(longlong *)(lVar20 + 0x78) &&
          ((*(ushort *)(local_60 + uVar39 * 2) & 0xfc00) == 0xdc00)))) goto LAB_1424b1864;
    }
    *puVar44 = uVar38;
    lVar22 = local_50;
    piVar40 = local_58;
    break;
  case 0x23:
    puVar44[(ulonglong)(uVar35 & 0xffffff) + 2] = *puVar44;
    break;
  case 0x24:
    puVar44[1] = uVar33 + 2;
    if ((longlong)
        (int)puVar44[(ulonglong)
                     ((uint)*(undefined8 *)(lVar22 + (longlong)(int)uVar24 * 8) & 0xffffff) + 2] <
        (longlong)*puVar44) goto switchD_1424b000c_caseD_d;
    goto switchD_1424b000c_caseD_1;
  case 0x25:
    *(longlong *)(*(longlong *)(lVar20 + 0xc0) + (ulonglong)(uVar35 & 0xffffff) * 8) =
         (longlong)*(int *)(*(longlong *)(lVar20 + 0xb0) + 8);
    *(ulonglong *)(*(longlong *)(lVar20 + 0xc0) + 8 + (ulonglong)uVar45 * 8) = *puVar44;
    *(undefined4 *)(lVar20 + 0x70) = *(undefined4 *)(lVar20 + 0x60);
    *(undefined4 *)(lVar20 + 0x74) = *(undefined4 *)(lVar20 + 100);
    *(undefined4 *)(lVar20 + 0x78) = *(undefined4 *)(lVar20 + 0x68);
    *(undefined4 *)(lVar20 + 0x7c) = *(undefined4 *)(lVar20 + 0x6c);
    break;
  case 0x26:
    lVar21 = *(longlong *)(lVar20 + 0xb0);
    lVar32 = *(longlong *)(lVar20 + 0xc0);
    iVar30 = (int)*(undefined8 *)(lVar32 + (ulonglong)(uVar35 & 0xffffff) * 8);
    if (iVar30 < *(int *)(lVar21 + 8)) {
      puVar46 = (ulonglong *)
                ((longlong)iVar30 * 8 + *(longlong *)(lVar21 + 0x18) +
                (longlong)*(int *)(lVar20 + 0x38) * -8);
      if (0 < (longlong)*(int *)(lVar20 + 0x38)) {
        lVar22 = 0;
        do {
          puVar46[lVar22] = puVar44[lVar22];
          lVar22 = lVar22 + 1;
        } while (lVar22 < *(int *)(lVar20 + 0x38));
        lVar21 = *(longlong *)(lVar20 + 0xb0);
      }
      FUN_14250dfa0(lVar21);
      lVar32 = *(longlong *)(lVar20 + 0xc0);
      lVar22 = local_50;
      piVar40 = local_58;
      puVar44 = puVar46;
    }
    *puVar44 = *(ulonglong *)(lVar32 + 8 + (ulonglong)uVar45 * 8);
    *(undefined4 *)(lVar20 + 0x70) = *(undefined4 *)(lVar20 + 0x40);
    *(undefined4 *)(lVar20 + 0x74) = *(undefined4 *)(lVar20 + 0x44);
    *(undefined4 *)(lVar20 + 0x78) = *(undefined4 *)(lVar20 + 0x48);
    *(undefined4 *)(lVar20 + 0x7c) = *(undefined4 *)(lVar20 + 0x4c);
    break;
  case 0x27:
    uVar24 = *puVar44;
    if (*(longlong *)(lVar20 + 0x78) <= (longlong)uVar24) goto LAB_1424aff94;
    *puVar44 = uVar24 + 1;
    uVar26 = *(ushort *)(local_60 + uVar24 * 2);
    uVar19 = (uint)uVar26;
    if ((((uVar26 & 0xfc00) == 0xd800) && (uVar24 + 1 != *(ulonglong *)(lVar20 + 0x78))) &&
       (uVar35 = (uint)*(ushort *)(local_60 + 2 + uVar24 * 2), (uVar35 & 0xfc00) == 0xdc00)) {
      *puVar44 = uVar24 + 2;
      uVar19 = (uint)uVar26 * 0x400 + uVar35 + 0xfca02400;
    }
    uVar19 = thunk_FUN_1424d7d20(uVar19,0);
    bVar47 = uVar19 == uVar45;
LAB_1424b1c3a:
    lVar22 = local_50;
    piVar40 = local_58;
    if (!bVar47) goto switchD_1424b000c_caseD_1;
    break;
  case 0x28:
    lVar21 = local_78 + (ulonglong)(uVar35 & 0xffffff) * 2;
    uVar35 = *(uint *)(lVar22 + 8 + uVar33 * 8) & 0xffffff;
    puVar44[1] = uVar33 + 2;
    FUN_142515cc0(local_b0,local_60,*puVar44,*(undefined8 *)(lVar20 + 0x78));
    uVar19 = 0;
    do {
      uVar45 = uVar19;
      if ((int)uVar35 <= (int)uVar45) goto LAB_1424b0d2a;
      uVar19 = uVar45 + 1;
      uVar26 = *(ushort *)(lVar21 + (longlong)(int)uVar45 * 2);
      uVar28 = (uint)uVar26;
      if ((((uVar28 & 0xfc00) == 0xd800) && (uVar19 != uVar35)) &&
         (uVar17 = (uint)*(ushort *)(lVar21 + (longlong)(int)uVar19 * 2),
         (uVar17 & 0xfc00) == 0xdc00)) {
        uVar19 = uVar45 + 2;
        uVar28 = (uint)uVar26 * 0x400 + uVar17 + 0xfca02400;
      }
      uVar17 = FUN_142515cf0(local_b0);
    } while (uVar17 == uVar28);
    if (uVar17 == 0xffffffff) {
      *(undefined1 *)(local_68 + 0xa8) = 1;
    }
LAB_1424b0d2a:
    cVar15 = FUN_142515e20(local_b0);
    if (((int)uVar45 < (int)uVar35) || (cVar15 != '\0')) {
      lVar20 = *(longlong *)(local_68 + 0xb0);
      iVar30 = *(int *)(local_68 + 0x38);
      uVar19 = *(int *)(lVar20 + 8) - iVar30;
      uVar24 = 0;
      if (0 < (int)uVar19) {
        uVar24 = (ulonglong)uVar19;
      }
      *(int *)(lVar20 + 8) = (int)uVar24;
      puVar44 = (ulonglong *)(uVar24 * 8 + *(longlong *)(lVar20 + 0x18) + (longlong)iVar30 * -8);
      lVar20 = local_68;
    }
    else {
      uVar24 = FUN_142515e30(local_b0);
      *puVar44 = uVar24;
      lVar20 = local_68;
    }
LAB_1424b1f0a:
    FUN_142515ce0(local_b0);
    lVar22 = local_50;
    piVar40 = local_58;
    break;
  case 0x29:
    if (-1 < (longlong)puVar44[(ulonglong)(uVar35 & 0xffffff) + 2]) {
      FUN_142515cc0(local_b0,local_60,puVar44[(ulonglong)(uVar35 & 0xffffff) + 2],
                    puVar44[(ulonglong)uVar45 + 3]);
      FUN_142515cc0(local_d8,lVar21,*puVar44,*(undefined8 *)(lVar20 + 0x78));
      do {
        iVar30 = FUN_142515cf0(local_b0);
        if (iVar30 == -1) {
          cVar15 = FUN_142515e20(local_d8);
          if (cVar15 == '\0') {
            uVar24 = FUN_142515e30(local_d8);
            *puVar44 = uVar24;
            goto LAB_1424b1f01;
          }
          break;
        }
        iVar18 = FUN_142515cf0(local_d8);
        if (iVar18 == -1) {
          *(undefined1 *)(lVar20 + 0xa8) = 1;
          break;
        }
      } while (iVar18 == iVar30);
      lVar22 = *(longlong *)(lVar20 + 0xb0);
      iVar30 = *(int *)(lVar20 + 0x38);
      uVar19 = *(int *)(lVar22 + 8) - iVar30;
      uVar24 = 0;
      if (0 < (int)uVar19) {
        uVar24 = (ulonglong)uVar19;
      }
      *(int *)(lVar22 + 8) = (int)uVar24;
      puVar44 = (ulonglong *)(uVar24 * 8 + *(longlong *)(lVar22 + 0x18) + (longlong)iVar30 * -8);
LAB_1424b1f01:
      FUN_142515ce0(local_d8);
      goto LAB_1424b1f0a;
    }
    lVar21 = *(longlong *)(lVar20 + 0xb0);
    iVar30 = *(int *)(lVar20 + 0x38);
    uVar19 = *(int *)(lVar21 + 8) - iVar30;
    uVar24 = 0;
    if (0 < (int)uVar19) {
      uVar24 = (ulonglong)uVar19;
    }
    *(int *)(lVar21 + 8) = (int)uVar24;
    lVar22 = local_50;
    puVar44 = (ulonglong *)(uVar24 * 8 + *(longlong *)(lVar21 + 0x18) + (longlong)iVar30 * -8);
    break;
  case 0x2a:
    uVar24 = *puVar44;
    if (*(longlong *)(lVar20 + 0x58) <= (longlong)uVar24) goto LAB_1424b298e;
    uVar26 = *(ushort *)(local_60 + uVar24 * 2);
    if ((((uVar26 & 0xdf50) != 0) ||
        (((3 < uVar26 - 10 && (1 < uVar26 - 0x2028)) && (lVar22 = local_50, uVar26 != 0x85)))) ||
       (((lVar22 = local_50, uVar26 == 10 && (*(longlong *)(lVar20 + 0x50) < (longlong)uVar24)) &&
        (*(short *)(local_60 + -2 + uVar24 * 2) == 0xd)))) goto switchD_1424b000c_caseD_1;
    break;
  case 0x2b:
    uVar24 = *puVar44;
    if (uVar24 != *(ulonglong *)(lVar20 + 0x50)) {
      if ((longlong)uVar24 < *(longlong *)(lVar20 + 0x58)) {
        bVar16 = FUN_1424afc90(*(undefined2 *)(local_60 + -2 + uVar24 * 2));
        piVar40 = local_58;
joined_r0x0001424b0e88:
        lVar22 = local_50;
        if (bVar16 != 0) break;
      }
      goto switchD_1424b000c_caseD_1;
    }
    break;
  case 0x2c:
    *(longlong *)(*(longlong *)(lVar20 + 0xc0) + (ulonglong)(uVar35 & 0xffffff) * 8) =
         (longlong)*(int *)(*(longlong *)(lVar20 + 0xb0) + 8);
    uVar24 = (ulonglong)uVar45;
    *(ulonglong *)(*(longlong *)(lVar20 + 0xc0) + 8 + uVar24 * 8) = *puVar44;
    *(undefined8 *)(*(longlong *)(lVar20 + 0xc0) + 0x10 + uVar24 * 8) = 0xffffffffffffffff;
    *(undefined8 *)(*(longlong *)(lVar20 + 0xc0) + 0x18 + uVar24 * 8) =
         *(undefined8 *)(lVar20 + 0x78);
    *(ulonglong *)(lVar20 + 0x78) = *puVar44;
    break;
  case 0x2d:
    puVar44[1] = uVar33 + 2;
    uVar23 = *(undefined8 *)(lVar22 + 8 + uVar33 * 8);
    puVar44[1] = uVar33 + 3;
    uVar8 = *(undefined8 *)(lVar22 + 0x10 + uVar33 * 8);
    lVar21 = *(longlong *)(lVar20 + 0xc0);
    uVar24 = (ulonglong)uVar45;
    lVar32 = *(longlong *)(lVar21 + 0x10 + uVar24 * 8);
    lVar22 = uVar24 + 2;
    if (lVar32 < 0) {
      uVar33 = *puVar44;
      lVar32 = (longlong)(int)uVar23;
      lVar36 = uVar33 - lVar32;
      *(longlong *)(lVar21 + lVar22 * 8) = lVar36;
      if ((lVar36 == 0 || (longlong)uVar33 < lVar32) || (*(longlong *)(lVar20 + 0x30) <= lVar36)) {
        if (lVar36 < 0) goto LAB_1424b2019;
      }
      else if (((*(ushort *)(local_60 + lVar36 * 2) & 0xfc00) == 0xdc00) &&
              ((*(ushort *)(local_60 + -2 + lVar36 * 2) & 0xfc00) == 0xd800)) {
        lVar36 = lVar36 + -1;
        goto LAB_1424b19e7;
      }
LAB_1424b200a:
      if ((longlong)(*puVar44 - (longlong)(int)uVar8) <= lVar36) {
        if (*piVar40 < 1) {
          uVar24 = puVar44[1];
          lVar32 = *(longlong *)(lVar20 + 0xb0);
          iVar30 = *(int *)(lVar20 + 0x38);
          iVar18 = *(int *)(lVar32 + 8);
          iVar27 = iVar18 + iVar30;
          if ((iVar27 < 0) || (*(int *)(lVar32 + 0xc) < iVar27)) {
            cVar15 = FUN_14250e240(lVar32,iVar27,piVar40);
            piVar40 = local_58;
            if (cVar15 != '\0') {
              iVar18 = *(int *)(lVar32 + 8);
              iVar27 = iVar30 + iVar18;
              goto LAB_1424b20a6;
            }
            puVar46 = (ulonglong *)0x0;
            iVar30 = *local_58;
            lVar20 = local_68;
          }
          else {
LAB_1424b20a6:
            puVar46 = (ulonglong *)((longlong)iVar18 * 8 + *(longlong *)(lVar32 + 0x18));
            *(int *)(lVar32 + 8) = iVar27;
            iVar30 = *piVar40;
            lVar20 = local_68;
          }
          local_68 = lVar20;
          if (iVar30 < 1) {
            uVar38 = (ulonglong)*(int *)(lVar20 + 0x38);
            puVar34 = puVar46 + -uVar38;
            uVar33 = uVar38 - 1 & 0x1fffffffffffffff;
            puVar44 = puVar34;
            puVar25 = puVar46;
            if ((uVar33 < 9) || ((uVar38 & 0x1ffffffffffffffc) == 0)) {
LAB_1424b2150:
              do {
                uVar33 = *puVar44;
                puVar44 = puVar44 + 1;
                *puVar25 = uVar33;
                puVar25 = puVar25 + 1;
              } while (puVar44 != puVar46);
            }
            else {
              uVar33 = uVar33 + 1;
              uVar39 = uVar33 & 0xfffffffffffffffc;
              puVar44 = puVar34 + uVar39;
              puVar25 = puVar46 + uVar39;
              puVar42 = puVar46 + 2;
              uVar43 = uVar39;
              do {
                puVar4 = puVar42 + (-2 - uVar38);
                uVar10 = *(undefined4 *)((longlong)puVar4 + 4);
                uVar13 = puVar4[1];
                uVar11 = *(undefined4 *)((longlong)puVar4 + 0xc);
                uVar37 = puVar42[-uVar38];
                uVar12 = (puVar42 + -uVar38)[1];
                *(int *)(puVar42 + -2) = (int)*puVar4;
                *(undefined4 *)((longlong)puVar42 + -0xc) = uVar10;
                *(int *)(puVar42 + -1) = (int)uVar13;
                *(undefined4 *)((longlong)puVar42 + -4) = uVar11;
                *puVar42 = uVar37;
                puVar42[1] = uVar12;
                puVar42 = puVar42 + 4;
                uVar43 = uVar43 - 4;
              } while (uVar43 != 0);
              if (uVar33 != uVar39) goto LAB_1424b2150;
            }
            iVar30 = *(int *)(lVar20 + 0x110);
            *(int *)(lVar20 + 0x110) = iVar30 + -1;
            if (iVar30 < 2) {
              *(undefined4 *)(lVar20 + 0x110) = 10000;
              iVar30 = *(int *)(lVar20 + 0x10c) + 1;
              *(int *)(lVar20 + 0x10c) = iVar30;
              if (*(code **)(lVar20 + 0x118) == (code *)0x0) {
LAB_1424b21c6:
                if ((*(int *)(lVar20 + 0x108) < 1) ||
                   (iVar18 = 0x10312, iVar30 < *(int *)(lVar20 + 0x108))) goto LAB_1424b2d91;
              }
              else {
                cVar15 = (**(code **)(lVar20 + 0x118))(*(undefined8 *)(lVar20 + 0x120));
                if (cVar15 != '\0') {
                  iVar30 = *(int *)(lVar20 + 0x10c);
                  goto LAB_1424b21c6;
                }
                iVar18 = 0x10313;
              }
              *local_58 = iVar18;
            }
LAB_1424b2d91:
            uVar24 = uVar24 - 3;
            goto LAB_1424b2dab;
          }
LAB_1424b237e:
          *piVar40 = 0x10311;
          lVar20 = local_68;
        }
        goto LAB_1424b2daf;
      }
    }
    else {
      if (lVar32 != 0) {
        lVar36 = lVar32 + -1;
        *(longlong *)(lVar21 + lVar22 * 8) = lVar36;
        if (((lVar32 != 1) && ((*(ushort *)(local_60 + -2 + lVar32 * 2) & 0xfc00) == 0xdc00)) &&
           ((*(ushort *)(local_60 + -4 + lVar32 * 2) & 0xfc00) == 0xd800)) {
          lVar36 = lVar32 + -2;
LAB_1424b19e7:
          *(longlong *)(lVar21 + lVar22 * 8) = lVar36;
        }
        goto LAB_1424b200a;
      }
      *(undefined8 *)(lVar21 + lVar22 * 8) = 0xffffffffffffffff;
    }
LAB_1424b2019:
    lVar22 = *(longlong *)(lVar20 + 0xb0);
    iVar30 = *(int *)(lVar20 + 0x38);
    uVar19 = *(int *)(lVar22 + 8) - iVar30;
    uVar33 = 0;
    if (0 < (int)uVar19) {
      uVar33 = (ulonglong)uVar19;
    }
    *(int *)(lVar22 + 8) = (int)uVar33;
    lVar21 = *(longlong *)(lVar22 + 0x18);
    *(undefined8 *)(lVar20 + 0x78) =
         *(undefined8 *)(*(longlong *)(lVar20 + 0xc0) + 0x18 + uVar24 * 8);
    lVar22 = local_50;
    puVar44 = (ulonglong *)(uVar33 * 8 + lVar21 + (longlong)iVar30 * -8);
    break;
  case 0x2e:
    if (*puVar44 != *(ulonglong *)(lVar20 + 0x78)) goto switchD_1424b000c_caseD_1;
    *(undefined8 *)(lVar20 + 0x78) =
         *(undefined8 *)(*(longlong *)(lVar20 + 0xc0) + 0x18 + (ulonglong)uVar45 * 8);
    break;
  case 0x2f:
    puVar44[1] = uVar33 + 2;
    uVar23 = *(undefined8 *)(lVar22 + 8 + uVar33 * 8);
    puVar44[1] = uVar33 + 3;
    uVar8 = *(undefined8 *)(lVar22 + 0x10 + uVar33 * 8);
    puVar44[1] = uVar33 + 4;
    uVar9 = *(undefined8 *)(lVar22 + 0x18 + uVar33 * 8);
    lVar21 = *(longlong *)(lVar20 + 0xc0);
    uVar24 = (ulonglong)uVar45;
    lVar32 = *(longlong *)(lVar21 + 0x10 + uVar24 * 8);
    lVar22 = uVar24 + 2;
    if (lVar32 < 0) {
      uVar33 = *puVar44;
      lVar32 = (longlong)(int)uVar23;
      lVar36 = uVar33 - lVar32;
      *(longlong *)(lVar21 + lVar22 * 8) = lVar36;
      if ((lVar36 == 0 || (longlong)uVar33 < lVar32) || (*(longlong *)(lVar20 + 0x30) <= lVar36)) {
        if (lVar36 < 0) goto LAB_1424b21fe;
      }
      else if (((*(ushort *)(local_60 + lVar36 * 2) & 0xfc00) == 0xdc00) &&
              ((*(ushort *)(local_60 + -2 + lVar36 * 2) & 0xfc00) == 0xd800)) {
        lVar36 = lVar36 + -1;
        goto LAB_1424b1a4c;
      }
LAB_1424b21ef:
      if (lVar36 < (longlong)(*puVar44 - (longlong)(int)uVar8)) goto LAB_1424b21fe;
      piVar40 = local_58;
      if (0 < *local_58) goto LAB_1424b2daf;
      uVar24 = puVar44[1];
      lVar32 = *(longlong *)(lVar20 + 0xb0);
      iVar30 = *(int *)(lVar20 + 0x38);
      iVar18 = *(int *)(lVar32 + 8);
      iVar27 = iVar18 + iVar30;
      if ((iVar27 < 0) || (*(int *)(lVar32 + 0xc) < iVar27)) {
        cVar15 = FUN_14250e240(lVar32,iVar27,local_58);
        if (cVar15 != '\0') {
          iVar18 = *(int *)(lVar32 + 8);
          iVar27 = iVar30 + iVar18;
          goto LAB_1424b235e;
        }
        puVar46 = (ulonglong *)0x0;
        piVar40 = local_58;
        if (*local_58 < 1) goto LAB_1424b2b05;
        goto LAB_1424b237e;
      }
LAB_1424b235e:
      puVar46 = (ulonglong *)((longlong)iVar18 * 8 + *(longlong *)(lVar32 + 0x18));
      *(int *)(lVar32 + 8) = iVar27;
      piVar40 = local_58;
      if (0 < *local_58) goto LAB_1424b237e;
LAB_1424b2b05:
      lVar20 = local_68;
      uVar38 = (ulonglong)*(int *)(local_68 + 0x38);
      puVar34 = puVar46 + -uVar38;
      uVar33 = uVar38 - 1 & 0x1fffffffffffffff;
      puVar44 = puVar34;
      puVar25 = puVar46;
      if ((uVar33 < 9) || ((uVar38 & 0x1ffffffffffffffc) == 0)) {
LAB_1424b2b8f:
        do {
          uVar33 = *puVar44;
          puVar44 = puVar44 + 1;
          *puVar25 = uVar33;
          puVar25 = puVar25 + 1;
        } while (puVar44 != puVar46);
      }
      else {
        uVar33 = uVar33 + 1;
        uVar39 = uVar33 & 0xfffffffffffffffc;
        puVar44 = puVar34 + uVar39;
        puVar25 = puVar46 + uVar39;
        puVar42 = puVar46 + 2;
        uVar43 = uVar39;
        do {
          puVar4 = puVar42 + (-2 - uVar38);
          uVar10 = *(undefined4 *)((longlong)puVar4 + 4);
          uVar13 = puVar4[1];
          uVar11 = *(undefined4 *)((longlong)puVar4 + 0xc);
          uVar37 = puVar42[-uVar38];
          uVar12 = (puVar42 + -uVar38)[1];
          *(int *)(puVar42 + -2) = (int)*puVar4;
          *(undefined4 *)((longlong)puVar42 + -0xc) = uVar10;
          *(int *)(puVar42 + -1) = (int)uVar13;
          *(undefined4 *)((longlong)puVar42 + -4) = uVar11;
          *puVar42 = uVar37;
          puVar42[1] = uVar12;
          puVar42 = puVar42 + 4;
          uVar43 = uVar43 - 4;
        } while (uVar43 != 0);
        if (uVar33 != uVar39) goto LAB_1424b2b8f;
      }
      iVar30 = *(int *)(local_68 + 0x110);
      *(int *)(local_68 + 0x110) = iVar30 + -1;
      if (iVar30 < 2) {
        *(undefined4 *)(local_68 + 0x110) = 10000;
        iVar30 = *(int *)(local_68 + 0x10c) + 1;
        *(int *)(local_68 + 0x10c) = iVar30;
        if (*(code **)(local_68 + 0x118) == (code *)0x0) {
LAB_1424b2c05:
          if ((*(int *)(lVar20 + 0x108) < 1) ||
             (iVar18 = 0x10312, iVar30 < *(int *)(lVar20 + 0x108))) goto LAB_1424b2da7;
        }
        else {
          cVar15 = (**(code **)(local_68 + 0x118))(*(undefined8 *)(local_68 + 0x120));
          if (cVar15 != '\0') {
            iVar30 = *(int *)(lVar20 + 0x10c);
            goto LAB_1424b2c05;
          }
          iVar18 = 0x10313;
        }
        *local_58 = iVar18;
      }
LAB_1424b2da7:
      uVar24 = uVar24 - 4;
LAB_1424b2dab:
      puVar34[1] = uVar24;
      piVar40 = local_58;
      puVar44 = puVar46;
LAB_1424b2daf:
      *puVar44 = *(ulonglong *)(lVar21 + lVar22 * 8);
      lVar22 = local_50;
    }
    else {
      if (lVar32 != 0) {
        lVar36 = lVar32 + -1;
        *(longlong *)(lVar21 + lVar22 * 8) = lVar36;
        if (((lVar32 != 1) && ((*(ushort *)(local_60 + -2 + lVar32 * 2) & 0xfc00) == 0xdc00)) &&
           ((*(ushort *)(local_60 + -4 + lVar32 * 2) & 0xfc00) == 0xd800)) {
          lVar36 = lVar32 + -2;
LAB_1424b1a4c:
          *(longlong *)(lVar21 + lVar22 * 8) = lVar36;
        }
        goto LAB_1424b21ef;
      }
      *(undefined8 *)(lVar21 + lVar22 * 8) = 0xffffffffffffffff;
LAB_1424b21fe:
      *(undefined8 *)(lVar20 + 0x78) =
           *(undefined8 *)(*(longlong *)(lVar20 + 0xc0) + 0x18 + uVar24 * 8);
      puVar44[1] = (ulonglong)((uint)uVar9 & 0xffffff);
      lVar22 = local_50;
      piVar40 = local_58;
    }
    break;
  case 0x30:
    if (*puVar44 == *(ulonglong *)(lVar20 + 0x78)) {
      *(undefined8 *)(lVar20 + 0x78) =
           *(undefined8 *)(*(longlong *)(lVar20 + 0xc0) + 0x18 + (ulonglong)uVar45 * 8);
      FUN_14250dfa0(*(undefined8 *)(lVar20 + 0xb0),
                    *(undefined4 *)
                     (*(longlong *)(lVar20 + 0xc0) + (ulonglong)(uVar35 & 0xffffff) * 8));
      lVar22 = local_50;
      piVar40 = local_58;
    }
    goto switchD_1424b000c_caseD_1;
  case 0x31:
    uVar24 = *puVar44;
    if ((longlong)uVar24 < *(longlong *)(lVar20 + 0x78)) {
      *puVar44 = uVar24 + 1;
      uVar26 = *(ushort *)(local_60 + uVar24 * 2);
      uVar19 = (uint)uVar26;
      if (((uVar26 & 0xfc00) == 0xd800) && (uVar24 + 1 != *(ulonglong *)(lVar20 + 0x78))) {
        uVar45 = (uint)*(ushort *)(local_60 + 2 + uVar24 * 2);
        if ((uVar45 & 0xfc00) == 0xdc00) {
          *puVar44 = uVar24 + 2;
          uVar19 = (uint)uVar26 * 0x400 + uVar45 + 0xfca02400;
        }
      }
      else if (uVar26 < 0x100) {
        lVar22 = local_50;
        if ((*(byte *)((ulonglong)(uVar26 >> 3) +
                      (ulonglong)(uVar35 & 0xffffff) * 0x20 +
                      *(longlong *)(*(longlong *)(lVar20 + 8) + 0x98)) >> (uVar26 & 7) & 1) != 0)
        goto switchD_1424b000c_caseD_1;
        break;
      }
      cVar15 = FUN_142512880(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(lVar20 + 8) + 0x90) +
                              (ulonglong)(uVar35 & 0xffffff) * 8),uVar19);
      bVar47 = cVar15 == '\0';
      goto LAB_1424b1c3a;
    }
    goto LAB_1424aff94;
  case 0x32:
    lVar22 = *(longlong *)(*(longlong *)(lVar20 + 8) + 0x70);
    uVar23 = FUN_142516630(local_80,uVar45);
    uVar24 = *puVar44;
    uVar19 = (uint)uVar24;
    lVar32 = (longlong)(int)uVar19;
    lVar21 = *(longlong *)(lVar20 + 0x78);
    piVar40 = local_58;
    if (lVar32 < lVar21) {
      do {
        uVar45 = (uint)uVar24;
        uVar19 = uVar45 + 1;
        uVar26 = *(ushort *)(local_60 + lVar32 * 2);
        uVar28 = (uint)uVar26;
        if ((uVar26 & 0xfc00) == 0xd800) {
          if ((lVar21 != (int)uVar19) &&
             (uVar17 = (uint)*(ushort *)(local_60 + (longlong)(int)uVar19 * 2),
             (uVar17 & 0xfc00) == 0xdc00)) {
            uVar19 = uVar45 + 2;
            uVar28 = (uint)uVar26 * 0x400 + uVar17 + 0xfca02400;
          }
LAB_1424b11f1:
          cVar15 = FUN_142512880(uVar23,uVar28);
          piVar40 = local_58;
          if (cVar15 == '\0') {
            uVar45 = uVar19 - 1;
            if ((((*(ushort *)(local_60 + -2 + (longlong)(int)uVar19 * 2) & 0xfc00) == 0xdc00) &&
                (1 < (int)uVar19)) &&
               ((*(ushort *)(local_60 + (ulonglong)(uVar19 - 2) * 2) & 0xfc00) == 0xd800)) {
              uVar45 = uVar19 - 2;
            }
            goto LAB_1424b16f3;
          }
          lVar21 = *(longlong *)(lVar20 + 0x78);
        }
        else {
          if (0xff < uVar26) goto LAB_1424b11f1;
          if ((*(byte *)((ulonglong)(uVar35 & 0xffffff) * 0x20 + lVar22 + (ulonglong)(uVar26 >> 3))
               >> (uVar26 & 7) & 1) == 0) {
            if (((0 < (int)uVar45) &&
                ((*(ushort *)(local_60 + (longlong)(int)uVar45 * 2) & 0xfc00) == 0xdc00)) &&
               ((*(ushort *)(local_60 + (ulonglong)(uVar45 - 1) * 2) & 0xfc00) == 0xd800)) {
              uVar45 = uVar45 - 1;
            }
            goto LAB_1424b16f3;
          }
        }
        lVar32 = (longlong)(int)uVar19;
        uVar24 = (ulonglong)uVar19;
      } while (lVar32 < lVar21);
    }
    *(undefined1 *)(lVar20 + 0xa8) = 1;
    uVar45 = uVar19;
LAB_1424b16f3:
    uVar24 = puVar44[1];
    lVar22 = local_50;
    if (*puVar44 != (longlong)(int)uVar45) {
      puVar44[(ulonglong)((uint)*(undefined8 *)(local_50 + uVar24 * 8) & 0xffffff) + 2] = *puVar44;
      *puVar44 = (longlong)(int)uVar45;
      if (*piVar40 < 1) {
        lVar22 = *(longlong *)(lVar20 + 0xb0);
        iVar30 = *(int *)(lVar20 + 0x38);
        iVar18 = *(int *)(lVar22 + 8);
        iVar27 = iVar18 + iVar30;
        if ((iVar27 < 0) || (*(int *)(lVar22 + 0xc) < iVar27)) {
          cVar15 = FUN_14250e240(lVar22,iVar27,piVar40);
          piVar40 = local_58;
          if (cVar15 != '\0') {
            iVar18 = *(int *)(lVar22 + 8);
            iVar27 = iVar30 + iVar18;
            goto LAB_1424b175e;
          }
          puVar46 = (ulonglong *)0x0;
          iVar30 = *local_58;
          lVar22 = local_50;
        }
        else {
LAB_1424b175e:
          puVar46 = (ulonglong *)((longlong)iVar18 * 8 + *(longlong *)(lVar22 + 0x18));
          *(int *)(lVar22 + 8) = iVar27;
          iVar30 = *piVar40;
          lVar22 = local_50;
        }
        local_50 = lVar22;
        if (0 < iVar30) goto LAB_1424b228d;
        uVar38 = (ulonglong)*(int *)(local_68 + 0x38);
        puVar34 = puVar46 + -uVar38;
        uVar33 = uVar38 - 1 & 0x1fffffffffffffff;
        puVar44 = puVar34;
        puVar25 = puVar46;
        if ((8 < uVar33) && ((uVar38 & 0x1ffffffffffffffc) != 0)) {
          uVar33 = uVar33 + 1;
          uVar39 = uVar33 & 0xfffffffffffffffc;
          puVar44 = puVar34 + uVar39;
          puVar25 = puVar46 + uVar39;
          puVar42 = puVar46 + 2;
          uVar43 = uVar39;
          do {
            puVar4 = puVar42 + (-2 - uVar38);
            uVar10 = *(undefined4 *)((longlong)puVar4 + 4);
            uVar13 = puVar4[1];
            uVar11 = *(undefined4 *)((longlong)puVar4 + 0xc);
            uVar37 = puVar42[-uVar38];
            uVar12 = (puVar42 + -uVar38)[1];
            *(int *)(puVar42 + -2) = (int)*puVar4;
            *(undefined4 *)((longlong)puVar42 + -0xc) = uVar10;
            *(int *)(puVar42 + -1) = (int)uVar13;
            *(undefined4 *)((longlong)puVar42 + -4) = uVar11;
            *puVar42 = uVar37;
            puVar42[1] = uVar12;
            puVar42 = puVar42 + 4;
            uVar43 = uVar43 - 4;
          } while (uVar43 != 0);
          if (uVar33 == uVar39) goto LAB_1424b28b1;
        }
        do {
          uVar33 = *puVar44;
          puVar44 = puVar44 + 1;
          *puVar25 = uVar33;
          puVar25 = puVar25 + 1;
        } while (puVar44 != puVar46);
        goto LAB_1424b28b1;
      }
      goto LAB_1424b2d23;
    }
LAB_1424b1a73:
    puVar44[1] = uVar24 + 1;
    break;
  case 0x33:
    uVar38 = puVar44[(ulonglong)(uVar35 & 0xffffff) + 2];
    uVar24 = *puVar44;
    if ((longlong)(int)uVar38 != uVar24) {
      *puVar44 = uVar24 - 1;
      uVar26 = *(ushort *)(local_60 + -2 + uVar24 * 2);
      if (((longlong)uVar24 < 2) || ((uVar26 & 0xfc00) != 0xdc00)) {
        if ((uVar26 == 10) &&
           ((((((longlong)(int)uVar38 < (longlong)(uVar24 - 1) &&
               (*(short *)(local_60 + -4 + uVar24 * 2) == 0xd)) &&
              (*(char *)(local_50 + -5 + uVar33 * 8) == '4')) &&
             ((*puVar44 = uVar24 - 2, 2 < (longlong)uVar24 &&
              ((*(ushort *)(local_60 + -4 + uVar24 * 2) & 0xfc00) == 0xdc00)))) &&
            ((*(ushort *)(local_60 + -6 + uVar24 * 2) & 0xfc00) == 0xd800)))) {
          uVar24 = uVar24 - 3;
          goto LAB_1424b127d;
        }
      }
      else if ((*(ushort *)(local_60 + -4 + uVar24 * 2) & 0xfc00) == 0xd800) {
        uVar24 = uVar24 - 2;
LAB_1424b127d:
        *puVar44 = uVar24;
      }
      if (0 < *piVar40) goto switchD_1424b000c_caseD_e;
      lVar22 = *(longlong *)(lVar20 + 0xb0);
      iVar30 = *(int *)(lVar20 + 0x38);
      iVar18 = *(int *)(lVar22 + 8);
      iVar27 = iVar18 + iVar30;
      if ((iVar27 < 0) || (*(int *)(lVar22 + 0xc) < iVar27)) {
        cVar15 = FUN_14250e240(lVar22,iVar27,piVar40);
        piVar40 = local_58;
        if (cVar15 != '\0') {
          iVar18 = *(int *)(lVar22 + 8);
          iVar27 = iVar30 + iVar18;
          goto LAB_1424b1d05;
        }
        puVar46 = (ulonglong *)0x0;
        iVar30 = *local_58;
        lVar20 = local_68;
      }
      else {
LAB_1424b1d05:
        puVar46 = (ulonglong *)((longlong)iVar18 * 8 + *(longlong *)(lVar22 + 0x18));
        *(int *)(lVar22 + 8) = iVar27;
        iVar30 = *piVar40;
        lVar20 = local_68;
      }
      if (0 < iVar30) goto LAB_1424b2fb2;
      uVar38 = (ulonglong)*(int *)(lVar20 + 0x38);
      puVar34 = puVar46 + -uVar38;
      uVar24 = uVar38 - 1 & 0x1fffffffffffffff;
      puVar44 = puVar34;
      puVar25 = puVar46;
      if ((uVar24 < 9) || ((uVar38 & 0x1ffffffffffffffc) == 0)) {
LAB_1424b1dc0:
        do {
          uVar24 = *puVar44;
          puVar44 = puVar44 + 1;
          *puVar25 = uVar24;
          puVar25 = puVar25 + 1;
        } while (puVar44 != puVar46);
      }
      else {
        uVar24 = uVar24 + 1;
        uVar39 = uVar24 & 0xfffffffffffffffc;
        puVar44 = puVar34 + uVar39;
        puVar25 = puVar46 + uVar39;
        puVar42 = puVar46 + 2;
        uVar43 = uVar39;
        do {
          puVar4 = puVar42 + (-2 - uVar38);
          uVar10 = *(undefined4 *)((longlong)puVar4 + 4);
          uVar13 = puVar4[1];
          uVar11 = *(undefined4 *)((longlong)puVar4 + 0xc);
          uVar37 = puVar42[-uVar38];
          uVar12 = (puVar42 + -uVar38)[1];
          *(int *)(puVar42 + -2) = (int)*puVar4;
          *(undefined4 *)((longlong)puVar42 + -0xc) = uVar10;
          *(int *)(puVar42 + -1) = (int)uVar13;
          *(undefined4 *)((longlong)puVar42 + -4) = uVar11;
          *puVar42 = uVar37;
          puVar42[1] = uVar12;
          puVar42 = puVar42 + 4;
          uVar43 = uVar43 - 4;
        } while (uVar43 != 0);
        if (uVar24 != uVar39) goto LAB_1424b1dc0;
      }
      iVar30 = *(int *)(lVar20 + 0x110);
      *(int *)(lVar20 + 0x110) = iVar30 + -1;
      local_68 = lVar20;
      if (iVar30 < 2) {
        *(undefined4 *)(lVar20 + 0x110) = 10000;
        iVar30 = *(int *)(lVar20 + 0x10c) + 1;
        *(int *)(lVar20 + 0x10c) = iVar30;
        if (*(code **)(lVar20 + 0x118) == (code *)0x0) {
LAB_1424b1e36:
          if ((*(int *)(lVar20 + 0x108) < 1) ||
             (iVar18 = 0x10312, iVar30 < *(int *)(lVar20 + 0x108))) goto LAB_1424b26a7;
        }
        else {
          cVar15 = (**(code **)(lVar20 + 0x118))(*(undefined8 *)(lVar20 + 0x120));
          if (cVar15 != '\0') {
            iVar30 = *(int *)(lVar20 + 0x10c);
            goto LAB_1424b1e36;
          }
          iVar18 = 0x10313;
        }
        *local_58 = iVar18;
      }
LAB_1424b26a7:
      puVar34[1] = uVar33;
      lVar22 = local_50;
      piVar40 = local_58;
      puVar44 = puVar46;
    }
    break;
  case 0x34:
    if ((uVar38 & 1) == 0) {
      uVar24 = *puVar44;
      lVar22 = *(longlong *)(lVar20 + 0x78);
      lVar21 = (longlong)(int)(uint)uVar24;
      uVar19 = (uint)uVar24;
      if (lVar21 < lVar22) {
        do {
          uVar35 = (int)uVar24 + 1;
          uVar26 = *(ushort *)(local_60 + lVar21 * 2);
          uVar19 = (uint)uVar26;
          if ((((uVar26 & 0xfc00) == 0xd800) && (lVar22 != (int)uVar35)) &&
             (uVar45 = (uint)*(ushort *)(local_60 + (longlong)(int)uVar35 * 2), piVar40 = local_58,
             (uVar45 & 0xfc00) == 0xdc00)) {
            uVar35 = (int)uVar24 + 2;
            uVar19 = (uint)uVar26 * 0x400 + uVar45 + 0xfca02400;
          }
          uVar24 = (ulonglong)uVar35;
          if (((uVar19 & 0x7e) < 0x2a) &&
             ((uVar19 == 10 ||
              (((uVar19 & 0xffffdf50) == 0 && (uVar38 & 2) == 0 &&
               (((uVar19 - 10 < 4 || (uVar19 - 0x2028 < 2)) || (uVar19 == 0x85)))))))) {
            uVar19 = uVar35 - 1;
            lVar22 = local_50;
            if ((((*(ushort *)(local_60 + -2 + (longlong)(int)uVar35 * 2) & 0xfc00) == 0xdc00) &&
                (1 < (int)uVar35)) &&
               ((*(ushort *)(local_60 + (ulonglong)(uVar35 - 2) * 2) & 0xfc00) == 0xd800)) {
              uVar19 = uVar35 - 2;
            }
            goto LAB_1424b1a62;
          }
          lVar21 = (longlong)(int)uVar35;
          uVar19 = uVar35;
        } while (lVar21 < lVar22);
      }
      *(undefined1 *)(lVar20 + 0xa8) = 1;
      lVar22 = local_50;
    }
    else {
      *(undefined1 *)(lVar20 + 0xa8) = 1;
      uVar19 = *(uint *)(lVar20 + 0x78);
    }
LAB_1424b1a62:
    uVar24 = puVar44[1];
    if (*puVar44 == (longlong)(int)uVar19) goto LAB_1424b1a73;
    puVar44[(ulonglong)((uint)*(undefined8 *)(lVar22 + uVar24 * 8) & 0xffffff) + 2] = *puVar44;
    *puVar44 = (longlong)(int)uVar19;
    if (0 < *piVar40) goto LAB_1424b2d23;
    lVar21 = *(longlong *)(lVar20 + 0xb0);
    iVar30 = *(int *)(lVar20 + 0x38);
    iVar18 = *(int *)(lVar21 + 8);
    iVar27 = iVar18 + iVar30;
    if ((iVar27 < 0) || (*(int *)(lVar21 + 0xc) < iVar27)) {
      cVar15 = FUN_14250e240(lVar21,iVar27,piVar40);
      lVar22 = local_50;
      piVar40 = local_58;
      if (cVar15 != '\0') {
        iVar18 = *(int *)(lVar21 + 8);
        iVar27 = iVar30 + iVar18;
        goto LAB_1424b2271;
      }
      puVar46 = (ulonglong *)0x0;
      iVar30 = *local_58;
    }
    else {
LAB_1424b2271:
      puVar46 = (ulonglong *)((longlong)iVar18 * 8 + *(longlong *)(lVar21 + 0x18));
      *(int *)(lVar21 + 8) = iVar27;
      iVar30 = *piVar40;
    }
    if (0 < iVar30) {
LAB_1424b228d:
      *piVar40 = 0x10311;
      lVar20 = local_68;
      goto LAB_1424b2d23;
    }
    uVar38 = (ulonglong)*(int *)(local_68 + 0x38);
    puVar34 = puVar46 + -uVar38;
    uVar33 = uVar38 - 1 & 0x1fffffffffffffff;
    puVar44 = puVar34;
    puVar25 = puVar46;
    if ((8 < uVar33) && ((uVar38 & 0x1ffffffffffffffc) != 0)) {
      uVar33 = uVar33 + 1;
      uVar39 = uVar33 & 0xfffffffffffffffc;
      puVar44 = puVar34 + uVar39;
      puVar25 = puVar46 + uVar39;
      puVar42 = puVar46 + 2;
      uVar43 = uVar39;
      do {
        puVar4 = puVar42 + (-2 - uVar38);
        uVar10 = *(undefined4 *)((longlong)puVar4 + 4);
        uVar13 = puVar4[1];
        uVar11 = *(undefined4 *)((longlong)puVar4 + 0xc);
        uVar37 = puVar42[-uVar38];
        uVar12 = (puVar42 + -uVar38)[1];
        *(int *)(puVar42 + -2) = (int)*puVar4;
        *(undefined4 *)((longlong)puVar42 + -0xc) = uVar10;
        *(int *)(puVar42 + -1) = (int)uVar13;
        *(undefined4 *)((longlong)puVar42 + -4) = uVar11;
        *puVar42 = uVar37;
        puVar42[1] = uVar12;
        puVar42 = puVar42 + 4;
        uVar43 = uVar43 - 4;
      } while (uVar43 != 0);
      if (uVar33 == uVar39) goto LAB_1424b28b1;
    }
    do {
      uVar33 = *puVar44;
      puVar44 = puVar44 + 1;
      *puVar25 = uVar33;
      puVar25 = puVar25 + 1;
    } while (puVar44 != puVar46);
LAB_1424b28b1:
    lVar20 = local_68;
    iVar30 = *(int *)(local_68 + 0x110);
    *(int *)(local_68 + 0x110) = iVar30 + -1;
    if (iVar30 < 2) {
      *(undefined4 *)(local_68 + 0x110) = 10000;
      iVar30 = *(int *)(local_68 + 0x10c) + 1;
      *(int *)(local_68 + 0x10c) = iVar30;
      if (*(code **)(local_68 + 0x118) == (code *)0x0) {
LAB_1424b2914:
        if ((*(int *)(lVar20 + 0x108) < 1) || (iVar18 = 0x10312, iVar30 < *(int *)(lVar20 + 0x108)))
        goto LAB_1424b2d1f;
      }
      else {
        cVar15 = (**(code **)(local_68 + 0x118))(*(undefined8 *)(local_68 + 0x120));
        if (cVar15 != '\0') {
          iVar30 = *(int *)(lVar20 + 0x10c);
          goto LAB_1424b2914;
        }
        iVar18 = 0x10313;
      }
      *local_58 = iVar18;
    }
LAB_1424b2d1f:
    puVar34[1] = uVar24;
    lVar22 = local_50;
    piVar40 = local_58;
    puVar44 = puVar46;
LAB_1424b2d23:
    puVar44[1] = puVar44[1] + 1;
    break;
  case 0x35:
    cVar15 = FUN_1424b5e10(lVar20,*puVar44);
LAB_1424b13b9:
    lVar22 = local_50;
    piVar40 = local_58;
    if ((bool)cVar15 == ((uVar38 & 0xffffff) != 0)) goto switchD_1424b000c_caseD_1;
    break;
  case 0x36:
    uVar24 = *puVar44;
    uVar33 = *(longlong *)(lVar20 + 0x58) - 1;
    if (((longlong)uVar33 <= (longlong)uVar24) &&
       ((uVar24 != uVar33 || (*(short *)(local_60 + uVar24 * 2) == 10)))) goto LAB_1424b298e;
    goto switchD_1424b000c_caseD_1;
  case 0x37:
    if ((longlong)*puVar44 < *(longlong *)(lVar20 + 0x58)) {
      sVar6 = *(short *)(local_60 + *puVar44 * 2);
      goto joined_r0x0001424b1419;
    }
LAB_1424b298e:
    *(undefined2 *)(lVar20 + 0xa8) = 0x101;
    break;
  case 0x38:
    uVar24 = *puVar44;
    if ((longlong)uVar24 < *(longlong *)(lVar20 + 0x78)) {
      *puVar44 = uVar24 + 1;
      uVar26 = *(ushort *)(local_60 + uVar24 * 2);
      uVar19 = (uint)uVar26;
      if ((((uVar19 & 0xfc00) == 0xd800) && (uVar24 + 1 != *(ulonglong *)(lVar20 + 0x78))) &&
         (uVar35 = (uint)*(ushort *)(local_60 + 2 + uVar24 * 2), (uVar35 & 0xfc00) == 0xdc00)) {
        *puVar44 = uVar24 + 2;
        uVar19 = (uint)uVar26 * 0x400 + uVar35 + 0xfca02400;
      }
      cVar15 = FUN_1424d86a0(uVar19);
      bVar47 = ((uVar38 & 0xffffff) != 0) == (uVar19 == 9 || cVar15 == '\f');
      piVar40 = local_58;
      goto LAB_1424b1b88;
    }
LAB_1424aff94:
    *(undefined1 *)(lVar20 + 0xa8) = 1;
switchD_1424b000c_caseD_1:
    lVar21 = *(longlong *)(lVar20 + 0xb0);
    iVar30 = *(int *)(lVar20 + 0x38);
    uVar19 = *(int *)(lVar21 + 8) - iVar30;
    uVar24 = 0;
    if (0 < (int)uVar19) {
      uVar24 = (ulonglong)uVar19;
    }
    *(int *)(lVar21 + 8) = (int)uVar24;
    puVar44 = (ulonglong *)(uVar24 * 8 + *(longlong *)(lVar21 + 0x18) + (longlong)iVar30 * -8);
    break;
  case 0x39:
    uVar24 = *puVar44;
    if (*(longlong *)(lVar20 + 0x78) <= (longlong)uVar24) goto LAB_1424aff94;
    uVar33 = uVar24 + 1;
    *puVar44 = uVar33;
    uVar26 = *(ushort *)(local_60 + uVar24 * 2);
    uVar19 = (uint)uVar26;
    if ((((uVar26 & 0xfc00) == 0xd800) && (uVar33 != *(ulonglong *)(lVar20 + 0x78))) &&
       (uVar35 = (uint)*(ushort *)(local_60 + 2 + uVar24 * 2), (uVar35 & 0xfc00) == 0xdc00)) {
      uVar33 = uVar24 + 2;
      *puVar44 = uVar33;
      uVar19 = (uint)uVar26 * 0x400 + uVar35 + 0xfca02400;
    }
    lVar22 = local_50;
    if ((uVar19 & 0xffffdf50) != 0) goto switchD_1424b000c_caseD_1;
    if ((int)uVar19 < 0x85) {
      if (2 < uVar19 - 10) {
        if (uVar19 != 0xd) goto switchD_1424b000c_caseD_1;
        if (*(longlong *)(lVar20 + 0x78) <= (longlong)uVar33) break;
        uVar24 = uVar33 + 1;
        *puVar44 = uVar24;
        uVar26 = *(ushort *)(local_60 + uVar33 * 2);
        if (((uVar26 & 0xfc00) == 0xd800) && (uVar24 != *(ulonglong *)(lVar20 + 0x78))) {
          uVar7 = *(ushort *)(local_60 + 2 + uVar33 * 2);
          if ((uVar7 & 0xfc00) == 0xdc00) {
            uVar24 = uVar33 + 2;
            *puVar44 = uVar24;
            uVar26 = uVar26 * 0x400 + uVar7 + 0x2400;
            goto LAB_1424b15aa;
          }
        }
        else {
LAB_1424b15aa:
          if (uVar26 == 10) break;
        }
        *puVar44 = uVar24 - 1;
        if (((1 < (longlong)uVar24) &&
            ((*(ushort *)(local_60 + -2 + uVar24 * 2) & 0xfc00) == 0xdc00)) &&
           ((*(ushort *)(local_60 + -4 + uVar24 * 2) & 0xfc00) == 0xd800)) {
          *puVar44 = uVar24 - 2;
        }
      }
    }
    else if ((1 < uVar19 - 0x2028) && (uVar19 != 0x85)) goto switchD_1424b000c_caseD_1;
    break;
  case 0x3a:
    uVar24 = *puVar44;
    if (*(longlong *)(lVar20 + 0x78) <= (longlong)uVar24) goto LAB_1424aff94;
    *puVar44 = uVar24 + 1;
    uVar26 = *(ushort *)(local_60 + uVar24 * 2);
    uVar19 = (uint)uVar26;
    if ((((uVar26 & 0xfc00) == 0xd800) && (uVar24 + 1 != *(ulonglong *)(lVar20 + 0x78))) &&
       (uVar35 = (uint)*(ushort *)(local_60 + 2 + uVar24 * 2), (uVar35 & 0xfc00) == 0xdc00)) {
      *puVar44 = uVar24 + 2;
      uVar19 = (uint)uVar26 * 0x400 + uVar35 + 0xfca02400;
    }
    if ((uVar19 & 0xffffdf50) == 0) {
      bVar47 = true;
      if (((3 < uVar19 - 10) && (uVar19 != 0x85)) && (uVar19 != 0x2028)) {
        bVar47 = uVar19 == 0x2029;
      }
    }
    else {
      bVar47 = false;
    }
    lVar22 = local_50;
    if (bVar47 == ((uVar38 & 0xffffff) != 0)) goto switchD_1424b000c_caseD_1;
  }
switchD_1424b000c_caseD_7:
  if (0 < *piVar40) {
switchD_1424b000c_caseD_e:
    *(undefined1 *)(lVar20 + 0x82) = 0;
LAB_1424b2fc0:
    *(ulonglong **)(lVar20 + 0xb8) = puVar44;
    return;
  }
  goto LAB_1424affd1;
LAB_1424b185d:
  *(undefined1 *)(lVar20 + 0xa8) = 1;
LAB_1424b1864:
  lVar21 = *(longlong *)(lVar20 + 0xb0);
  iVar30 = *(int *)(lVar20 + 0x38);
  uVar19 = *(int *)(lVar21 + 8) - iVar30;
  uVar24 = 0;
  if (0 < (int)uVar19) {
    uVar24 = (ulonglong)uVar19;
  }
  *(int *)(lVar21 + 8) = (int)uVar24;
  lVar22 = local_50;
  piVar40 = local_58;
  puVar44 = (ulonglong *)(uVar24 * 8 + *(longlong *)(lVar21 + 0x18) + (longlong)iVar30 * -8);
  goto switchD_1424b000c_caseD_7;
}



// FUNCTION 1424b2ff0 Unwind@1424b2ff0 body=55 status=ok
// SIG undefined Unwind@1424b2ff0(void)

void Unwind_1424b2ff0(undefined8 param_1,longlong param_2)

{
  FUN_142515ce0(param_2 + 0x20);
  return;
}



// FUNCTION 1424b3030 Unwind@1424b3030 body=55 status=ok
// SIG undefined Unwind@1424b3030(void)

void Unwind_1424b3030(undefined8 param_1,longlong param_2)

{
  FUN_142515ce0(param_2 + 0x48);
  return;
}



// FUNCTION 1424b3070 Unwind@1424b3070 body=55 status=ok
// SIG undefined Unwind@1424b3070(void)

void Unwind_1424b3070(undefined8 param_1,longlong param_2)

{
  FUN_142515ce0(param_2 + 0x48);
  return;
}



// FUNCTION 1424b30b0 FUN_1424b30b0 body=28 status=ok
// SIG undefined FUN_1424b30b0(void)

undefined8 FUN_1424b30b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1424b30d0(param_1,param_2,0,param_3);
  return param_2;
}



// FUNCTION 1424b30d0 FUN_1424b30d0 body=369 status=ok
// SIG undefined FUN_1424b30d0(void)

undefined8 * FUN_1424b30d0(longlong param_1,undefined8 *param_2,int param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  uVar10 = 0xfffffffffffffffe;
  *param_2 = &PTR_FUN_149e18960;
  *(undefined2 *)(param_2 + 1) = 2;
  if (0 < *param_4) {
    return param_2;
  }
  iVar3 = *(int *)(param_1 + 0x13c);
  if (iVar3 < 1) {
    if (*(char *)(param_1 + 0x82) == '\0') {
      iVar3 = 0x10302;
    }
    else {
      iVar3 = 8;
      if (-1 < param_3) {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x88);
        iVar1 = *(int *)(lVar2 + 8);
        if (param_3 <= iVar1) {
          if (param_3 == 0) {
            plVar5 = (longlong *)(param_1 + 0x88);
            plVar8 = (longlong *)(param_1 + 0x90);
          }
          else {
            if (iVar1 < 1) {
              lVar2 = *(longlong *)(param_1 + 0xb8);
              lVar7 = 1;
            }
            else {
              lVar7 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x18) + (ulonglong)(param_3 - 1) * 4)
              ;
              lVar2 = *(longlong *)(param_1 + 0xb8) + lVar7 * 8;
              lVar7 = lVar7 + 1;
            }
            plVar5 = (longlong *)(lVar2 + 0x10);
            plVar8 = (longlong *)(*(longlong *)(param_1 + 0xb8) + lVar7 * 8 + 0x10);
          }
          lVar2 = *plVar5;
          lVar7 = *plVar8;
          if (lVar2 == lVar7) {
            return param_2;
          }
          if (lVar2 == -1) {
            return param_2;
          }
          puVar9 = param_2;
          uVar4 = FUN_14250eb20(*(undefined8 *)(param_1 + 0x20),lVar2,lVar7,0,0,param_4,param_2,
                                0xfffffffffffffffe);
          if (*param_4 != 0xf) {
            return puVar9;
          }
          *param_4 = 0;
          lVar6 = FUN_140855070(puVar9,uVar4);
          if (lVar6 != 0) {
            uVar4 = FUN_14250eb20(*(undefined8 *)(param_1 + 0x20),lVar2,lVar7,lVar6,uVar4,param_4,
                                  puVar9,uVar10);
            FUN_1408550d0(param_2,uVar4);
            return puVar9;
          }
          iVar3 = 7;
          param_2 = puVar9;
        }
      }
    }
  }
  *param_4 = iVar3;
  return param_2;
}



// FUNCTION 1424b3250 Unwind@1424b3250 body=48 status=ok
// SIG undefined Unwind@1424b3250(void)

void Unwind_1424b3250(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1424b3280 FUN_1424b3280 body=31 status=ok
// SIG undefined FUN_1424b3280(void)

void FUN_1424b3280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1424b32a0(param_1,0,param_2,param_3,param_4);
  return;
}



// FUNCTION 1424b32a0 FUN_1424b32a0 body=318 status=ok
// SIG undefined FUN_1424b32a0(void)

longlong FUN_1424b32a0(longlong param_1,int param_2,longlong param_3,longlong *param_4,int *param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  
  *param_4 = 0;
  if (*param_5 < 1) {
    if (*(int *)(param_1 + 0x13c) < 1) {
      if (*(char *)(param_1 + 0x82) == '\0') {
        *param_5 = 0x10302;
      }
      else if ((param_2 < 0) ||
              (*(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x88) + 8) < param_2)) {
        *param_5 = 8;
      }
      else {
        if (param_2 == 0) {
          plVar6 = (longlong *)(param_1 + 0x88);
          plVar4 = (longlong *)(param_1 + 0x90);
        }
        else {
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x88);
          iVar1 = *(int *)(lVar3 + 8);
          iVar5 = 0;
          if ((0 < iVar1) && (iVar5 = 0, param_2 <= iVar1)) {
            iVar5 = *(int *)(*(longlong *)(lVar3 + 0x18) + (ulonglong)(param_2 - 1) * 4);
          }
          plVar6 = (longlong *)(*(longlong *)(param_1 + 0xb8) + (longlong)iVar5 * 8 + 0x10);
          plVar4 = (longlong *)(*(longlong *)(param_1 + 0xb8) + (longlong)iVar5 * 8 + 0x18);
        }
        lVar3 = *plVar6;
        if (lVar3 < 0) {
          lVar3 = FUN_14250ebe0(param_3,*(undefined8 *)(param_1 + 0x20),0,1);
          return lVar3;
        }
        *param_4 = *plVar4 - lVar3;
        param_3 = FUN_14250ebe0(param_3,*(undefined8 *)(param_1 + 0x20),0,1,param_5);
        if (param_3 == 0) {
          param_3 = 0;
        }
        else {
          lVar2 = lVar3 - *(longlong *)(param_3 + 0x20);
          if (((lVar2 < 0) || (*(int *)(param_3 + 0x1c) <= lVar2)) ||
             (0xdbff < *(ushort *)(*(longlong *)(param_3 + 0x30) + lVar2 * 2))) {
            FUN_14250e700(param_3,lVar3);
          }
          else {
            *(int *)(param_3 + 0x28) = (int)lVar2;
          }
        }
      }
    }
    else {
      *param_5 = *(int *)(param_1 + 0x13c);
    }
  }
  return param_3;
}



// FUNCTION 1424b33e0 FUN_1424b33e0 body=132 status=ok
// SIG undefined FUN_1424b33e0(void)

undefined8 FUN_1424b33e0(longlong param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = 0xffffffffffffffff;
  if (0 < *param_3) {
    return uVar2;
  }
  if (0 < *(int *)(param_1 + 0x13c)) {
    *param_3 = *(int *)(param_1 + 0x13c);
    return uVar2;
  }
  if (*(char *)(param_1 + 0x82) == '\0') {
    *param_3 = 0x10302;
    return uVar2;
  }
  if (-1 < param_2) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x88);
    iVar1 = *(int *)(lVar3 + 8);
    if (param_2 <= iVar1) {
      if (param_2 != 0) {
        if (iVar1 < 1) {
          lVar3 = 0;
        }
        else {
          lVar3 = (longlong)*(int *)(*(longlong *)(lVar3 + 0x18) + (ulonglong)(param_2 - 1) * 4);
        }
        return *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + lVar3 * 8 + 0x10);
      }
      return *(undefined8 *)(param_1 + 0x88);
    }
  }
  *param_3 = 8;
  return uVar2;
}



// FUNCTION 1424b3470 FUN_1424b3470 body=15 status=ok
// SIG undefined FUN_1424b3470(void)

undefined4 FUN_1424b3470(longlong param_1)

{
  return *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x88) + 8);
}



// FUNCTION 1424b3480 FUN_1424b3480 body=8 status=ok
// SIG undefined FUN_1424b3480(void)

undefined1 FUN_1424b3480(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x81);
}



// FUNCTION 1424b3490 FUN_1424b3490 body=8 status=ok
// SIG undefined FUN_1424b3490(void)

undefined1 FUN_1424b3490(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x80);
}



// FUNCTION 1424b34a0 FUN_1424b34a0 body=8 status=ok
// SIG undefined FUN_1424b34a0(void)

undefined1 FUN_1424b34a0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0xa8);
}



// FUNCTION 1424b34b0 FUN_1424b34b0 body=203 status=ok
// SIG undefined FUN_1424b34b0(void)

longlong FUN_1424b34b0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 local_2c;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (lVar2 == 0) {
    local_2c = 0;
    uVar4 = *(ulonglong *)(param_1 + 0x30);
    if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x48) != 0) {
      uVar1 = FUN_14250eb20(*(longlong *)(param_1 + 0x20),0,uVar4,0,0,&local_2c);
      uVar4 = (ulonglong)uVar1;
    }
    local_2c = 0;
    lVar2 = thunk_FUN_1424da030(0x40);
    FUN_1424a68a0(lVar2,uVar4 & 0xffffffff,0,0);
    uVar3 = FUN_140855070(lVar2,uVar4 & 0xffffffff);
    FUN_14250eb20(*(undefined8 *)(param_1 + 0x20),0,*(undefined8 *)(param_1 + 0x30),uVar3,(int)uVar4
                  ,&local_2c);
    FUN_1408550d0(lVar2,uVar4 & 0xffffffff);
    *(longlong *)(param_1 + 0x18) = lVar2;
  }
  return lVar2;
}



// FUNCTION 1424b3580 Unwind@1424b3580 body=36 status=ok
// SIG undefined Unwind@1424b3580(void)

void Unwind_1424b3580(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1424b35b0 FUN_1424b35b0 body=5 status=ok
// SIG undefined FUN_1424b35b0(void)

undefined8 FUN_1424b35b0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 1424b35c0 FUN_1424b35c0 body=335 status=ok
// SIG undefined FUN_1424b35c0(void)

void FUN_1424b35c0(longlong param_1,longlong param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  int *local_48;
  int *local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_3 < 1) {
    if (*(int *)(param_1 + 0x13c) < 1) {
      lVar4 = *(longlong *)(param_1 + 0x20);
      if (param_2 == 0) {
        local_48 = param_3;
        FUN_14250ebe0(0,lVar4,0,1);
      }
      else if (((*(longlong *)(lVar4 + 0x20) == 0) &&
               (lVar1 = *(longlong *)(param_1 + 0x30), lVar1 == *(longlong *)(lVar4 + 0x10))) &&
              (lVar1 == *(int *)(lVar4 + 0x1c))) {
        uVar5 = *(undefined8 *)(lVar4 + 0x30);
        uVar3 = FUN_14250e6d0(param_2);
        local_48 = (int *)CONCAT44(local_48._4_4_,(int)lVar1);
        local_40 = param_3;
        FUN_14250ebb0(param_2,0,uVar3,uVar5);
      }
      else {
        if (*(longlong *)(*(longlong *)(lVar4 + 0x38) + 0x48) == 0) {
          iVar2 = *(int *)(param_1 + 0x30);
        }
        else {
          local_34 = 0;
          local_40 = &local_34;
          local_48 = (int *)((ulonglong)local_48 & 0xffffffff00000000);
          iVar2 = FUN_14250eb20(lVar4,0,*(undefined8 *)(param_1 + 0x30),0);
        }
        lVar4 = FUN_1424da030((longlong)iVar2 * 2);
        if (lVar4 != 0) {
          *param_3 = 0;
          local_40 = param_3;
          local_48._0_4_ = iVar2;
          FUN_14250eb20(*(undefined8 *)(param_1 + 0x20),0,*(undefined8 *)(param_1 + 0x30),lVar4);
          *param_3 = 0;
          uVar5 = FUN_14250e6d0(param_2);
          local_48 = (int *)CONCAT44(local_48._4_4_,iVar2);
          local_40 = param_3;
          FUN_14250ebb0(param_2,0,uVar5,lVar4);
          FUN_1424da110(lVar4);
        }
      }
    }
    else {
      *param_3 = *(int *)(param_1 + 0x13c);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 1424b3720 FUN_1424b3720 body=357 status=ok
// SIG undefined FUN_1424b3720(void)

undefined1 FUN_1424b3720(longlong param_1,int *param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  
  if (0 < *param_2) {
    return 0;
  }
  if (0 < *(int *)(param_1 + 0x13c)) {
    *param_2 = *(int *)(param_1 + 0x13c);
    return 0;
  }
  if (*(char *)(param_1 + 0x138) != '\0') {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar3 = FUN_14250e6d0(lVar2);
    if (lVar3 == *(int *)(lVar2 + 0x1c)) goto LAB_1424b3833;
    lVar3 = *(longlong *)(lVar2 + 0x48);
    uVar1 = *(ushort *)(lVar3 + 8);
    if ((short)uVar1 < 0) {
      iVar5 = *(int *)(lVar3 + 0xc);
    }
    else {
      iVar5 = (int)(short)uVar1 >> 5;
    }
    if (((int)(short)uVar1 & 0x11U) == 0) {
      if ((uVar1 & 2) == 0) {
        lVar3 = *(longlong *)(lVar3 + 0x18);
      }
      else {
        lVar3 = lVar3 + 10;
      }
    }
    else {
      lVar3 = 0;
    }
    *(longlong *)(lVar2 + 0x30) = lVar3;
    *(int *)(lVar2 + 0x2c) = iVar5;
    *(longlong *)(lVar2 + 0x10) = (longlong)iVar5;
    *(int *)(lVar2 + 0x1c) = iVar5;
    uVar4 = FUN_14250e6d0(*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x30) = uVar4;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = uVar4;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = uVar4;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = uVar4;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = uVar4;
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined2 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x10c) = 0x271000000000;
LAB_1424b3833:
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (((*(longlong *)(lVar2 + 0x20) == 0) &&
      (*(longlong *)(param_1 + 0x30) == *(longlong *)(lVar2 + 0x10))) &&
     (*(longlong *)(param_1 + 0x30) == (longlong)*(int *)(lVar2 + 0x1c))) {
    FUN_1424afe00(param_1,*(undefined4 *)(param_1 + 0x70),0,param_2);
  }
  else {
    FUN_1424ac2c0(param_1,*(undefined8 *)(param_1 + 0x70),0,param_2);
  }
  return *(undefined1 *)(param_1 + 0x82);
}



// FUNCTION 1424b3890 FUN_1424b3890 body=525 status=ok
// SIG undefined FUN_1424b3890(void)

undefined1 FUN_1424b3890(longlong param_1,ulonglong param_2,int *param_3)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  if (0 < *param_3) {
    return 0;
  }
  if (0 < *(int *)(param_1 + 0x13c)) {
    *param_3 = *(int *)(param_1 + 0x13c);
    return 0;
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  lVar3 = *(longlong *)(param_1 + 0x30);
  *(longlong *)(param_1 + 0x48) = lVar3;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(longlong *)(param_1 + 0x78) = lVar3;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(longlong *)(param_1 + 0x58) = lVar3;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(longlong *)(param_1 + 0x68) = lVar3;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined2 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x10c) = 0x271000000000;
  if ((longlong)param_2 < 0) goto LAB_1424b3a6d;
  if (*(char *)(param_1 + 0x138) == '\0') {
LAB_1424b3a31:
    lVar2 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x20);
    lVar2 = FUN_14250e6d0(lVar3);
    if (lVar2 != *(int *)(lVar3 + 0x1c)) {
      lVar2 = *(longlong *)(lVar3 + 0x48);
      uVar1 = *(ushort *)(lVar2 + 8);
      if ((short)uVar1 < 0) {
        iVar4 = *(int *)(lVar2 + 0xc);
      }
      else {
        iVar4 = (int)(short)uVar1 >> 5;
      }
      if (((int)(short)uVar1 & 0x11U) == 0) {
        if ((uVar1 & 2) == 0) {
          lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
          lVar2 = lVar2 + 10;
        }
      }
      else {
        lVar2 = 0;
      }
      *(longlong *)(lVar3 + 0x30) = lVar2;
      *(int *)(lVar3 + 0x2c) = iVar4;
      *(longlong *)(lVar3 + 0x10) = (longlong)iVar4;
      *(int *)(lVar3 + 0x1c) = iVar4;
      lVar3 = FUN_14250e6d0();
      *(longlong *)(param_1 + 0x30) = lVar3;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(longlong *)(param_1 + 0x48) = lVar3;
      *(undefined8 *)(param_1 + 0x70) = 0;
      *(longlong *)(param_1 + 0x78) = lVar3;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(longlong *)(param_1 + 0x58) = lVar3;
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(longlong *)(param_1 + 0x68) = lVar3;
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined8 *)(param_1 + 0x90) = 0;
      *(undefined8 *)(param_1 + 0x98) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(undefined1 *)(param_1 + 0x82) = 0;
      *(undefined2 *)(param_1 + 0xa8) = 0;
      *(undefined8 *)(param_1 + 0x10c) = 0x271000000000;
      goto LAB_1424b3a31;
    }
    lVar2 = *(longlong *)(param_1 + 0x70);
    lVar3 = *(longlong *)(param_1 + 0x78);
  }
  if ((lVar2 <= (longlong)param_2) && ((longlong)param_2 <= lVar3)) {
    lVar3 = *(longlong *)(param_1 + 0x20);
    if ((*(longlong *)(lVar3 + 0x20) == 0) &&
       ((*(longlong *)(param_1 + 0x30) == *(longlong *)(lVar3 + 0x10) &&
        (*(longlong *)(param_1 + 0x30) == (longlong)*(int *)(lVar3 + 0x1c))))) {
      FUN_1424afe00(param_1,param_2 & 0xffffffff,0,param_3);
    }
    else {
      FUN_1424ac2c0(param_1,param_2,0,param_3);
    }
    return *(undefined1 *)(param_1 + 0x82);
  }
LAB_1424b3a6d:
  *param_3 = 8;
  return 0;
}



// FUNCTION 1424b3aa0 FUN_1424b3aa0 body=357 status=ok
// SIG undefined FUN_1424b3aa0(void)

undefined1 FUN_1424b3aa0(longlong param_1,int *param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  
  if (0 < *param_2) {
    return 0;
  }
  if (0 < *(int *)(param_1 + 0x13c)) {
    *param_2 = *(int *)(param_1 + 0x13c);
    return 0;
  }
  if (*(char *)(param_1 + 0x138) != '\0') {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar3 = FUN_14250e6d0(lVar2);
    if (lVar3 == *(int *)(lVar2 + 0x1c)) goto LAB_1424b3bb3;
    lVar3 = *(longlong *)(lVar2 + 0x48);
    uVar1 = *(ushort *)(lVar3 + 8);
    if ((short)uVar1 < 0) {
      iVar5 = *(int *)(lVar3 + 0xc);
    }
    else {
      iVar5 = (int)(short)uVar1 >> 5;
    }
    if (((int)(short)uVar1 & 0x11U) == 0) {
      if ((uVar1 & 2) == 0) {
        lVar3 = *(longlong *)(lVar3 + 0x18);
      }
      else {
        lVar3 = lVar3 + 10;
      }
    }
    else {
      lVar3 = 0;
    }
    *(longlong *)(lVar2 + 0x30) = lVar3;
    *(int *)(lVar2 + 0x2c) = iVar5;
    *(longlong *)(lVar2 + 0x10) = (longlong)iVar5;
    *(int *)(lVar2 + 0x1c) = iVar5;
    uVar4 = FUN_14250e6d0(*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x30) = uVar4;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = uVar4;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = uVar4;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = uVar4;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = uVar4;
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined2 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x10c) = 0x271000000000;
LAB_1424b3bb3:
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (((*(longlong *)(lVar2 + 0x20) == 0) &&
      (*(longlong *)(param_1 + 0x30) == *(longlong *)(lVar2 + 0x10))) &&
     (*(longlong *)(param_1 + 0x30) == (longlong)*(int *)(lVar2 + 0x1c))) {
    FUN_1424afe00(param_1,*(undefined4 *)(param_1 + 0x70),1,param_2);
  }
  else {
    FUN_1424ac2c0(param_1,*(undefined8 *)(param_1 + 0x70),1,param_2);
  }
  return *(undefined1 *)(param_1 + 0x82);
}



// FUNCTION 1424b3c10 FUN_1424b3c10 body=525 status=ok
// SIG undefined FUN_1424b3c10(void)

undefined1 FUN_1424b3c10(longlong param_1,ulonglong param_2,int *param_3)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  if (0 < *param_3) {
    return 0;
  }
  if (0 < *(int *)(param_1 + 0x13c)) {
    *param_3 = *(int *)(param_1 + 0x13c);
    return 0;
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  lVar3 = *(longlong *)(param_1 + 0x30);
  *(longlong *)(param_1 + 0x48) = lVar3;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(longlong *)(param_1 + 0x78) = lVar3;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(longlong *)(param_1 + 0x58) = lVar3;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(longlong *)(param_1 + 0x68) = lVar3;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined2 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x10c) = 0x271000000000;
  if ((longlong)param_2 < 0) goto LAB_1424b3ded;
  if (*(char *)(param_1 + 0x138) == '\0') {
LAB_1424b3db1:
    lVar2 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x20);
    lVar2 = FUN_14250e6d0(lVar3);
    if (lVar2 != *(int *)(lVar3 + 0x1c)) {
      lVar2 = *(longlong *)(lVar3 + 0x48);
      uVar1 = *(ushort *)(lVar2 + 8);
      if ((short)uVar1 < 0) {
        iVar4 = *(int *)(lVar2 + 0xc);
      }
      else {
        iVar4 = (int)(short)uVar1 >> 5;
      }
      if (((int)(short)uVar1 & 0x11U) == 0) {
        if ((uVar1 & 2) == 0) {
          lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
          lVar2 = lVar2 + 10;
        }
      }
      else {
        lVar2 = 0;
      }
      *(longlong *)(lVar3 + 0x30) = lVar2;
      *(int *)(lVar3 + 0x2c) = iVar4;
      *(longlong *)(lVar3 + 0x10) = (longlong)iVar4;
      *(int *)(lVar3 + 0x1c) = iVar4;
      lVar3 = FUN_14250e6d0();
      *(longlong *)(param_1 + 0x30) = lVar3;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(longlong *)(param_1 + 0x48) = lVar3;
      *(undefined8 *)(param_1 + 0x70) = 0;
      *(longlong *)(param_1 + 0x78) = lVar3;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(longlong *)(param_1 + 0x58) = lVar3;
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(longlong *)(param_1 + 0x68) = lVar3;
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined8 *)(param_1 + 0x90) = 0;
      *(undefined8 *)(param_1 + 0x98) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(undefined1 *)(param_1 + 0x82) = 0;
      *(undefined2 *)(param_1 + 0xa8) = 0;
      *(undefined8 *)(param_1 + 0x10c) = 0x271000000000;
      goto LAB_1424b3db1;
    }
    lVar2 = *(longlong *)(param_1 + 0x70);
    lVar3 = *(longlong *)(param_1 + 0x78);
  }
  if ((lVar2 <= (longlong)param_2) && ((longlong)param_2 <= lVar3)) {
    lVar3 = *(longlong *)(param_1 + 0x20);
    if ((*(longlong *)(lVar3 + 0x20) == 0) &&
       ((*(longlong *)(param_1 + 0x30) == *(longlong *)(lVar3 + 0x10) &&
        (*(longlong *)(param_1 + 0x30) == (longlong)*(int *)(lVar3 + 0x1c))))) {
      FUN_1424afe00(param_1,param_2 & 0xffffffff,1,param_3);
    }
    else {
      FUN_1424ac2c0(param_1,param_2,1,param_3);
    }
    return *(undefined1 *)(param_1 + 0x82);
  }
LAB_1424b3ded:
  *param_3 = 8;
  return 0;
}



// FUNCTION 1424b3e20 FUN_1424b3e20 body=5 status=ok
// SIG undefined FUN_1424b3e20(void)

undefined8 FUN_1424b3e20(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 1424b3e30 FUN_1424b3e30 body=352 status=ok
// SIG undefined FUN_1424b3e30(void)

void FUN_1424b3e30(longlong param_1,ulonglong param_2,ulonglong param_3,longlong param_4,
                  int *param_5)

{
  char cVar1;
  
  if (0 < *param_5) {
    return;
  }
  if (((longlong)param_3 < (longlong)param_2) || ((longlong)(param_3 | param_2) < 0)) {
    *param_5 = 1;
  }
  if ((*(longlong *)(param_1 + 0x30) < (longlong)param_2) ||
     (*(longlong *)(param_1 + 0x30) < (longlong)param_3)) {
    *param_5 = 1;
  }
  if (param_4 == -1) {
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined1 *)(param_1 + 0x82) = 0;
    *(undefined2 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0x10c) = 0x271000000000;
    *(ulonglong *)(param_1 + 0x40) = param_2;
    *(ulonglong *)(param_1 + 0x48) = param_3;
    *(ulonglong *)(param_1 + 0x70) = param_2;
    *(ulonglong *)(param_1 + 0x78) = param_3;
    cVar1 = *(char *)(param_1 + 0x80);
  }
  else {
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined1 *)(param_1 + 0x82) = 0;
    *(undefined2 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0x10c) = 0x271000000000;
    *(ulonglong *)(param_1 + 0x40) = param_2;
    *(ulonglong *)(param_1 + 0x48) = param_3;
    *(ulonglong *)(param_1 + 0x70) = param_2;
    *(ulonglong *)(param_1 + 0x78) = param_3;
    if ((param_4 < (longlong)param_2) || ((longlong)param_3 < param_4)) {
      *param_5 = 8;
    }
    *(longlong *)(param_1 + 0x90) = param_4;
    cVar1 = *(char *)(param_1 + 0x80);
  }
  if (cVar1 == '\0') {
    *(ulonglong *)(param_1 + 0x60) = param_2;
    *(ulonglong *)(param_1 + 0x68) = param_3;
  }
  if (*(char *)(param_1 + 0x81) == '\0') {
    return;
  }
  *(ulonglong *)(param_1 + 0x50) = param_2;
  *(ulonglong *)(param_1 + 0x58) = param_3;
  return;
}



// FUNCTION 1424b3f90 FUN_1424b3f90 body=199 status=ok
// SIG undefined FUN_1424b3f90(void)

void FUN_1424b3f90(longlong param_1,ulonglong param_2,ulonglong param_3,int *param_4)

{
  longlong lVar1;
  
  if (*param_4 < 1) {
    if (((longlong)param_3 < (longlong)param_2) || ((longlong)(param_3 | param_2) < 0)) {
      *param_4 = 1;
    }
    lVar1 = *(longlong *)(param_1 + 0x30);
    if ((lVar1 < (longlong)param_2) || (lVar1 < (longlong)param_3)) {
      *param_4 = 1;
      lVar1 = *(longlong *)(param_1 + 0x30);
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(longlong *)(param_1 + 0x58) = lVar1;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(longlong *)(param_1 + 0x68) = lVar1;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined1 *)(param_1 + 0x82) = 0;
    *(undefined2 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0x10c) = 0x271000000000;
    *(ulonglong *)(param_1 + 0x40) = param_2;
    *(ulonglong *)(param_1 + 0x48) = param_3;
    *(ulonglong *)(param_1 + 0x70) = param_2;
    *(ulonglong *)(param_1 + 0x78) = param_3;
    if (*(char *)(param_1 + 0x80) == '\0') {
      *(ulonglong *)(param_1 + 0x60) = param_2;
      *(ulonglong *)(param_1 + 0x68) = param_3;
    }
    if (*(char *)(param_1 + 0x81) != '\0') {
      *(ulonglong *)(param_1 + 0x50) = param_2;
      *(ulonglong *)(param_1 + 0x58) = param_3;
      return;
    }
  }
  return;
}



// FUNCTION 1424b4060 FUN_1424b4060 body=4 status=ok
// SIG undefined FUN_1424b4060(void)

undefined4 FUN_1424b4060(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}



// FUNCTION 1424b4070 FUN_1424b4070 body=5 status=ok
// SIG undefined FUN_1424b4070(void)

undefined8 FUN_1424b4070(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// FUNCTION 1424b4080 FUN_1424b4080 body=4 status=ok
// SIG undefined FUN_1424b4080(void)

undefined4 FUN_1424b4080(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



// FUNCTION 1424b4090 FUN_1424b4090 body=5 status=ok
// SIG undefined FUN_1424b4090(void)

undefined8 FUN_1424b4090(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// FUNCTION 1424b40a0 FUN_1424b40a0 body=284 status=ok
// SIG undefined FUN_1424b40a0(void)

undefined8 * FUN_1424b40a0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int *param_4)

{
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
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
  undefined8 uStack_50;
  undefined8 *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0x345ad82c;
  uStack_160 = 0x9000000000;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0x345ad82c;
  uStack_d0 = 0x9000000000;
  *param_2 = &PTR_FUN_149e18960;
  *(undefined2 *)(param_2 + 1) = 2;
  if (*param_4 < 1) {
    FUN_14250ee60(&local_168,param_3,param_4);
    local_40 = param_2;
    FUN_14250ee40(&local_d8,param_2,param_4);
    FUN_1424b4200(param_1,&local_168,&local_d8,param_4);
    FUN_14250edb0(&local_d8);
    FUN_14250edb0(&local_168);
    param_2 = local_40;
  }
  return param_2;
}



// FUNCTION 1424b41c0 Unwind@1424b41c0 body=50 status=ok
// SIG undefined Unwind@1424b41c0(void)

void Unwind_1424b41c0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x148));
  return;
}



// FUNCTION 1424b4200 FUN_1424b4200 body=511 status=ok
// SIG undefined FUN_1424b4200(void)

void FUN_1424b4200(longlong param_1,undefined8 param_2,longlong param_3,int *param_4)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 auStack_138 [32];
  int *local_118;
  ulonglong local_108 [18];
  undefined **local_78;
  undefined2 local_70;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*param_4 < 1) {
    if (*(int *)(param_1 + 0x13c) < 1) {
      if (param_3 == 0) {
        local_78 = &PTR_FUN_149e18960;
        local_70 = 2;
        local_108[0x10] = 0;
        local_108[0x11] = 0;
        local_108[0xe] = 0;
        local_108[0xf] = 0;
        local_108[0xc] = 0;
        local_108[0xd] = 0;
        local_108[10] = 0;
        local_108[0xb] = 0;
        local_108[8] = 0;
        local_108[9] = 0;
        local_108[6] = 0;
        local_108[7] = 0;
        local_108[4] = 0;
        local_108[5] = 0;
        local_108[2] = 0;
        local_108[3] = 0;
        local_108[0] = 0x345ad82c;
        local_108[1] = 0x9000000000;
        FUN_14250ee40(local_108,&local_78,param_4);
        local_118 = param_4;
        param_3 = FUN_14250ebe0(0,local_108,1,0);
        FUN_14250edb0(local_108);
        FUN_140859a90(&local_78);
        if (0 < *param_4) goto LAB_1424b4398;
      }
      *(undefined8 *)(param_1 + 0x40) = 0;
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x48) = uVar1;
      *(undefined8 *)(param_1 + 0x70) = 0;
      *(undefined8 *)(param_1 + 0x78) = uVar1;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x58) = uVar1;
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined8 *)(param_1 + 0x68) = uVar1;
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined8 *)(param_1 + 0x90) = 0;
      *(undefined8 *)(param_1 + 0x98) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(undefined1 *)(param_1 + 0x82) = 0;
      *(undefined2 *)(param_1 + 0xa8) = 0;
      *(undefined8 *)(param_1 + 0x10c) = 0x271000000000;
      if (*(int *)(param_1 + 0x13c) < 1) {
        do {
          local_108[0] = local_108[0] & 0xffffffff00000000;
          cVar2 = FUN_1424ab380(param_1,local_108);
          if ((cVar2 == '\0') || (FUN_1424aa790(param_1,param_3,param_2,param_4), 0 < *param_4))
          break;
        } while (*(int *)(param_1 + 0x13c) < 1);
      }
      FUN_1424ab130(param_1,param_3,param_4);
    }
    else {
      *param_4 = *(int *)(param_1 + 0x13c);
    }
  }
LAB_1424b4398:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_138);
}



// FUNCTION 1424b4420 FUN_1424b4420 body=275 status=ok
// SIG undefined FUN_1424b4420(void)

undefined8 *
FUN_1424b4420(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
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
  undefined8 uStack_50;
  undefined8 *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0x345ad82c;
  uStack_160 = 0x9000000000;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0x345ad82c;
  uStack_d0 = 0x9000000000;
  *param_2 = &PTR_FUN_149e18960;
  *(undefined2 *)(param_2 + 1) = 2;
  FUN_14250ee60(&local_168,param_3,param_4);
  local_40 = param_2;
  FUN_14250ee40(&local_d8,param_2,param_4);
  FUN_1424b4580(param_1,&local_168,&local_d8,param_4);
  FUN_14250edb0(&local_d8);
  FUN_14250edb0(&local_168);
  return local_40;
}



// FUNCTION 1424b4540 Unwind@1424b4540 body=50 status=ok
// SIG undefined Unwind@1424b4540(void)

void Unwind_1424b4540(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x148));
  return;
}



// FUNCTION 1424b4580 FUN_1424b4580 body=462 status=ok
// SIG undefined FUN_1424b4580(void)

void FUN_1424b4580(longlong param_1,undefined8 param_2,longlong param_3,int *param_4)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 auStack_138 [32];
  int *local_118;
  ulonglong local_108 [18];
  undefined **local_78;
  undefined2 local_70;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*param_4 < 1) {
    if (*(int *)(param_1 + 0x13c) < 1) {
      *(undefined8 *)(param_1 + 0x40) = 0;
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x48) = uVar1;
      *(undefined8 *)(param_1 + 0x70) = 0;
      *(undefined8 *)(param_1 + 0x78) = uVar1;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x58) = uVar1;
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined8 *)(param_1 + 0x68) = uVar1;
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined8 *)(param_1 + 0x90) = 0;
      *(undefined8 *)(param_1 + 0x98) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(undefined1 *)(param_1 + 0x82) = 0;
      *(undefined2 *)(param_1 + 0xa8) = 0;
      *(undefined8 *)(param_1 + 0x10c) = 0x271000000000;
      local_108[0] = local_108[0] & 0xffffffff00000000;
      cVar2 = FUN_1424ab380(param_1,local_108);
      if (cVar2 == '\0') {
        FUN_1424b35c0(param_1,param_3,param_4);
      }
      else {
        if (param_3 == 0) {
          local_78 = &PTR_FUN_149e18960;
          local_70 = 2;
          local_108[0x10] = 0;
          local_108[0x11] = 0;
          local_108[0xe] = 0;
          local_108[0xf] = 0;
          local_108[0xc] = 0;
          local_108[0xd] = 0;
          local_108[10] = 0;
          local_108[0xb] = 0;
          local_108[8] = 0;
          local_108[9] = 0;
          local_108[6] = 0;
          local_108[7] = 0;
          local_108[4] = 0;
          local_108[5] = 0;
          local_108[2] = 0;
          local_108[3] = 0;
          local_108[0] = 0x345ad82c;
          local_108[1] = 0x9000000000;
          FUN_14250ee40(local_108,&local_78,param_4);
          local_118 = param_4;
          param_3 = FUN_14250ebe0(0,local_108,1,0);
          FUN_14250edb0(local_108);
          FUN_140859a90(&local_78);
        }
        FUN_1424aa790(param_1,param_3,param_2,param_4);
        FUN_1424ab130(param_1,param_3,param_4);
      }
    }
    else {
      *param_4 = *(int *)(param_1 + 0x13c);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_138);
}



// FUNCTION 1424b4770 FUN_1424b4770 body=8 status=ok
// SIG undefined FUN_1424b4770(void)

undefined1 FUN_1424b4770(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0xa9);
}



// FUNCTION 1424b4780 FUN_1424b4780 body=304 status=ok
// SIG undefined FUN_1424b4780(void)

void FUN_1424b4780(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  int *local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  piVar1 = (int *)(param_1 + 0x13c);
  uVar4 = FUN_14250ee60(*(undefined8 *)(param_1 + 0x20),param_2,piVar1);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  if (*(char *)(*(longlong *)(param_1 + 8) + 200) != '\0') {
    local_28 = piVar1;
    uVar4 = FUN_14250ebe0(*(undefined8 *)(param_1 + 0x28),uVar4,0,1);
    *(undefined8 *)(param_1 + 0x28) = uVar4;
  }
  if (*piVar1 < 1) {
    uVar4 = FUN_14250e6d0(*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x30) = uVar4;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = uVar4;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = uVar4;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = uVar4;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = uVar4;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined1 *)(param_1 + 0x82) = 0;
    *(undefined2 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0x10c) = 0x271000000000;
    puVar2 = *(undefined8 **)(param_1 + 0x18);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x138) = 1;
    plVar3 = *(longlong **)(param_1 + 0x140);
    if (plVar3 != (longlong *)0x0) {
      local_1c = 0;
      (**(code **)(*plVar3 + 0x30))(plVar3,*(undefined8 *)(param_1 + 0x20),&local_1c);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 1424b48c0 FUN_1424b48c0 body=153 status=ok
// SIG undefined FUN_1424b48c0(void)

void FUN_1424b48c0(longlong param_1,longlong param_2,int *param_3)

{
  longlong lVar1;
  
  if (0 < *param_3) {
    return;
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  lVar1 = *(longlong *)(param_1 + 0x30);
  *(longlong *)(param_1 + 0x48) = lVar1;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(longlong *)(param_1 + 0x78) = lVar1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(longlong *)(param_1 + 0x58) = lVar1;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(longlong *)(param_1 + 0x68) = lVar1;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined2 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x10c) = 0x271000000000;
  if ((-1 < param_2) && (param_2 <= lVar1)) {
    *(longlong *)(param_1 + 0x90) = param_2;
    return;
  }
  *param_3 = 8;
  return;
}



// FUNCTION 1424b4960 FUN_1424b4960 body=198 status=ok
// SIG undefined FUN_1424b4960(void)

longlong FUN_1424b4960(longlong param_1,longlong param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*param_3 < 1) {
    if (param_2 != 0) {
      lVar1 = FUN_14250e6d0(*(undefined8 *)(param_1 + 0x20));
      lVar2 = FUN_14250e6d0(param_2);
      if (lVar1 == lVar2) {
        uVar3 = FUN_14250e6e0(*(undefined8 *)(param_1 + 0x20));
        uVar4 = FUN_14250ebe0(*(undefined8 *)(param_1 + 0x20),param_2,0,1,param_3);
        *(undefined8 *)(param_1 + 0x20) = uVar4;
        if (0 < *param_3) {
          return param_1;
        }
        FUN_14250e700(uVar4,uVar3);
        if (*(longlong *)(param_1 + 0x28) == 0) {
          return param_1;
        }
        uVar3 = FUN_14250e6e0();
        uVar4 = FUN_14250ebe0(*(undefined8 *)(param_1 + 0x28),param_2,0,1,param_3);
        *(undefined8 *)(param_1 + 0x28) = uVar4;
        if (0 < *param_3) {
          return param_1;
        }
        FUN_14250e700(uVar4,uVar3);
        return param_1;
      }
    }
    *param_3 = 1;
  }
  return param_1;
}



// FUNCTION 1424b4a30 FUN_1424b4a30 body=344 status=ok
// SIG undefined FUN_1424b4a30(void)

void FUN_1424b4a30(undefined8 param_1,undefined8 param_2,longlong param_3,uint param_4,int *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_108 [32];
  int *local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
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
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0x345ad82c;
  uStack_d0 = 0x9000000000;
  FUN_14250ee60(&local_d8,param_2,param_5);
  if (*param_5 < 1) {
    lVar1 = FUN_1424da030((longlong)(int)param_4 << 3);
    if (lVar1 == 0) {
      *param_5 = 7;
    }
    else {
      if ((int)param_4 < 1) {
        local_e8 = param_5;
        FUN_1424b4ba0(param_1,&local_d8,lVar1,param_4);
      }
      else {
        uVar3 = 0;
        do {
          uVar2 = FUN_14250ee40(0,param_3,param_5);
          *(undefined8 *)(lVar1 + uVar3 * 8) = uVar2;
          uVar3 = uVar3 + 1;
          param_3 = param_3 + 0x40;
        } while (param_4 != uVar3);
        local_e8 = param_5;
        FUN_1424b4ba0(param_1,&local_d8,lVar1,param_4);
        if (0 < (int)param_4) {
          uVar3 = 0;
          do {
            FUN_14250edb0(*(undefined8 *)(lVar1 + uVar3 * 8));
            uVar3 = uVar3 + 1;
          } while (param_4 != uVar3);
        }
      }
      FUN_1424da110(lVar1);
      FUN_14250edb0(&local_d8);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
}



// FUNCTION 1424b4ba0 FUN_1424b4ba0 body=3434 status=ok
// SIG undefined FUN_1424b4ba0(void)

int FUN_1424b4ba0(longlong param_1,longlong param_2,longlong param_3,uint param_4,int *param_5)

{
  int iVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  longlong *plVar17;
  longlong *plVar18;
  bool bVar19;
  int *in_stack_fffffffffffffe78;
  undefined4 uVar20;
  undefined4 local_164;
  ulonglong local_160;
  uint local_158;
  uint local_154;
  ulonglong local_150;
  void *local_148;
  longlong local_140;
  void *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
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
  ulonglong local_a8;
  int local_9c;
  longlong local_98;
  longlong local_90;
  void *local_88;
  ulonglong local_80;
  undefined8 local_78;
  void *local_70;
  longlong local_68;
  longlong local_60;
  
  iVar4 = 0;
  if (*param_5 < 1) {
    if ((int)param_4 < 1) {
      *param_5 = 1;
      iVar4 = 0;
    }
    else {
      FUN_1424aa3f0();
      lVar8 = *(longlong *)(param_1 + 0x78);
      if (lVar8 != 0) {
        uVar16 = param_4 - 1;
        local_158 = uVar16;
        if (param_4 < 2) {
          lVar7 = 0;
        }
        else {
          local_9c = *(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x88) + 8);
          local_160 = (ulonglong)(param_4 - 2);
          local_140 = (longlong)local_9c;
          local_68 = param_3 + 8;
          lVar7 = 0;
          uVar12 = 0;
          local_98 = param_1;
          local_90 = param_2;
          local_80 = (ulonglong)param_4;
          do {
            lVar8 = local_90;
            uVar11 = (uint)uVar12;
            local_150 = uVar12;
            if (0 < *(int *)(param_1 + 0x13c)) {
LAB_1424b54c3:
              uVar20 = (undefined4)((ulonglong)in_stack_fffffffffffffe78 >> 0x20);
              if (((*(longlong *)(lVar8 + 0x20) == 0) &&
                  (*(longlong *)(param_1 + 0x30) == *(longlong *)(lVar8 + 0x10))) &&
                 (*(longlong *)(param_1 + 0x30) == (longlong)*(int *)(lVar8 + 0x1c))) {
                lVar13 = (longlong)(int)uVar11;
                if (*(longlong *)(param_3 + lVar13 * 8) == 0) {
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
                  local_108 = 0;
                  uStack_100 = 0;
                  local_118 = 0;
                  uStack_110 = 0;
                  local_128 = 0;
                  uStack_120 = 0;
                  local_138 = (void *)0x345ad82c;
                  uStack_130 = 0x9000000000;
                  FUN_14250ef60(&local_138,lVar7 * 2 + *(longlong *)(lVar8 + 0x30),
                                *(longlong *)(param_1 + 0x78) - lVar7,param_5);
                  uVar5 = FUN_14250ebe0(0,&local_138,1,0,param_5);
                  *(undefined8 *)(param_3 + lVar13 * 8) = uVar5;
                  FUN_14250edb0(&local_138);
                }
                else {
                  iVar4 = *(int *)(param_1 + 0x78);
                  lVar8 = *(longlong *)(lVar8 + 0x30);
                  uVar5 = FUN_14250e6d0();
                  FUN_14250ebb0(*(undefined8 *)(param_3 + lVar13 * 8),0,uVar5,lVar7 * 2 + lVar8,
                                CONCAT44(uVar20,iVar4 - (int)lVar7),param_5);
                }
              }
              else {
                local_164 = 0;
                uVar12 = (ulonglong)in_stack_fffffffffffffe78 & 0xffffffff00000000;
                iVar4 = FUN_14250eb20(lVar8,lVar7,*(undefined8 *)(param_1 + 0x78),0,uVar12,
                                      &local_164);
                uVar20 = (undefined4)(uVar12 >> 0x20);
                lVar13 = FUN_1424da030((longlong)iVar4 * 2 + 2);
                if (lVar13 == 0) {
LAB_1424b55df:
                  *param_5 = 7;
                }
                else {
                  uVar5 = CONCAT44(uVar20,iVar4 + 1);
                  FUN_14250eb20(lVar8,lVar7,*(undefined8 *)(param_1 + 0x78),lVar13,uVar5,param_5);
                  uVar20 = (undefined4)((ulonglong)uVar5 >> 0x20);
                  lVar8 = (longlong)(int)uVar11;
                  if (*(longlong *)(param_3 + lVar8 * 8) == 0) {
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
                    local_108 = 0;
                    uStack_100 = 0;
                    local_118 = 0;
                    uStack_110 = 0;
                    local_128 = 0;
                    uStack_120 = 0;
                    local_138 = (void *)0x345ad82c;
                    uStack_130 = 0x9000000000;
                    FUN_14250ef60(&local_138,lVar13,(longlong)iVar4,param_5);
                    uVar5 = FUN_14250ebe0(0,&local_138,1,0,param_5);
                    *(undefined8 *)(param_3 + lVar8 * 8) = uVar5;
                    FUN_14250edb0(&local_138);
                  }
                  else {
                    uVar5 = FUN_14250e6d0();
                    FUN_14250ebb0(*(undefined8 *)(param_3 + lVar8 * 8),0,uVar5,lVar13,
                                  CONCAT44(uVar20,iVar4),param_5);
                  }
                  FUN_1424da110(lVar13);
                  uVar11 = (uint)local_150;
                }
              }
              goto LAB_1424b57b2;
            }
            local_138 = (void *)((ulonglong)local_138 & 0xffffffff00000000);
            cVar3 = FUN_1424ab380(param_1,&local_138);
            uVar20 = (undefined4)((ulonglong)in_stack_fffffffffffffe78 >> 0x20);
            if (cVar3 == '\0') goto LAB_1424b54c3;
            if (((*(longlong *)(lVar8 + 0x20) != 0) ||
                (*(longlong *)(param_1 + 0x30) != *(longlong *)(lVar8 + 0x10))) ||
               (*(longlong *)(param_1 + 0x30) != (longlong)*(int *)(lVar8 + 0x1c))) {
              local_164 = 0;
              uVar12 = (ulonglong)in_stack_fffffffffffffe78 & 0xffffffff00000000;
              iVar4 = FUN_14250eb20(lVar8,lVar7,*(undefined8 *)(param_1 + 0x88),0,uVar12,&local_164)
              ;
              uVar20 = (undefined4)(uVar12 >> 0x20);
              lVar13 = FUN_1424da030((longlong)iVar4 * 2 + 2);
              if (lVar13 != 0) {
                uVar5 = CONCAT44(uVar20,iVar4 + 1);
                FUN_14250eb20(lVar8,lVar7,*(undefined8 *)(param_1 + 0x88),lVar13,uVar5,param_5);
                uVar20 = (undefined4)((ulonglong)uVar5 >> 0x20);
                lVar8 = (longlong)(int)uVar11;
                if (*(longlong *)(param_3 + lVar8 * 8) == 0) {
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
                  local_108 = 0;
                  uStack_100 = 0;
                  local_118 = 0;
                  uStack_110 = 0;
                  local_128 = 0;
                  uStack_120 = 0;
                  local_138 = (void *)0x345ad82c;
                  uStack_130 = 0x9000000000;
                  FUN_14250ef60(&local_138,lVar13,(longlong)iVar4,param_5);
                  in_stack_fffffffffffffe78 = param_5;
                  uVar5 = FUN_14250ebe0(0,&local_138,1,0,param_5);
                  *(undefined8 *)(param_3 + lVar8 * 8) = uVar5;
                  FUN_14250edb0(&local_138);
                }
                else {
                  uVar5 = FUN_14250e6d0();
                  in_stack_fffffffffffffe78 = (int *)CONCAT44(uVar20,iVar4);
                  FUN_14250ebb0(*(undefined8 *)(param_3 + lVar8 * 8),0,uVar5,lVar13,
                                in_stack_fffffffffffffe78,param_5);
                }
                param_1 = local_98;
                uVar11 = (uint)local_150;
                FUN_1424da110(lVar13);
                goto LAB_1424b4e8e;
              }
              goto LAB_1424b55df;
            }
            lVar13 = (longlong)(int)uVar11;
            if (*(longlong *)(param_3 + lVar13 * 8) == 0) {
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
              local_108 = 0;
              uStack_100 = 0;
              local_118 = 0;
              uStack_110 = 0;
              local_128 = 0;
              uStack_120 = 0;
              local_138 = (void *)0x345ad82c;
              uStack_130 = 0x9000000000;
              FUN_14250ef60(&local_138,lVar7 * 2 + *(longlong *)(lVar8 + 0x30),
                            *(longlong *)(param_1 + 0x88) - lVar7,param_5);
              in_stack_fffffffffffffe78 = param_5;
              uVar5 = FUN_14250ebe0(0,&local_138,1,0,param_5);
              *(undefined8 *)(param_3 + lVar13 * 8) = uVar5;
              FUN_14250edb0(&local_138);
            }
            else {
              iVar4 = *(int *)(param_1 + 0x88);
              lVar8 = *(longlong *)(lVar8 + 0x30);
              uVar5 = FUN_14250e6d0();
              in_stack_fffffffffffffe78 = (int *)CONCAT44(uVar20,iVar4 - (int)lVar7);
              FUN_14250ebb0(*(undefined8 *)(param_3 + lVar13 * 8),0,uVar5,lVar7 * 2 + lVar8,
                            in_stack_fffffffffffffe78,param_5);
            }
            uVar11 = (uint)local_150;
LAB_1424b4e8e:
            lVar7 = *(longlong *)(param_1 + 0x90);
            if ((0 < local_9c) && ((int)uVar11 < (int)local_160)) {
              lVar14 = (longlong)(int)uVar11;
              plVar17 = (longlong *)(local_68 + lVar14 * 8);
              lVar8 = param_3 + lVar14 * 8;
              lVar13 = lVar14;
              lVar15 = 1;
              uVar12 = local_160;
              lVar9 = local_140;
              local_60 = lVar7;
              do {
                lVar13 = lVar13 + 1;
                if (*param_5 < 1) {
                  if (*(char *)(param_1 + 0x82) == '\0') {
                    iVar4 = 0x10302;
LAB_1424b4f4a:
                    *param_5 = iVar4;
                    goto LAB_1424b4f4d;
                  }
                  lVar7 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x88);
                  iVar1 = *(int *)(lVar7 + 8);
                  iVar4 = 8;
                  if (iVar1 < lVar15) goto LAB_1424b4f4a;
                  if (iVar1 < 1) {
                    iVar4 = *(int *)(param_1 + 0x13c);
                    if (iVar4 < 1) {
                      lVar9 = *(longlong *)(param_1 + 0xb8);
                      lVar10 = 0;
                      lVar7 = lVar9;
                      goto LAB_1424b4fa1;
                    }
LAB_1424b4f88:
                    *param_5 = iVar4;
                    lVar7 = *(longlong *)(lVar8 + lVar15 * 8);
                    plVar18 = plVar17;
                  }
                  else {
                    iVar4 = *(int *)(param_1 + 0x13c);
                    if (0 < iVar4) goto LAB_1424b4f88;
                    lVar9 = *(longlong *)(param_1 + 0xb8);
                    lVar10 = (longlong)*(int *)(*(longlong *)(lVar7 + 0x18) + -4 + lVar15 * 4);
                    lVar7 = lVar9 + lVar10 * 8;
LAB_1424b4fa1:
                    pvVar6 = *(void **)(lVar7 + 0x18);
                    pvVar2 = *(void **)(lVar9 + 0x10 + lVar10 * 8);
                    plVar18 = (longlong *)(param_3 + lVar13 * 8);
                    lVar7 = *(longlong *)(lVar8 + lVar15 * 8);
                    if (pvVar2 == pvVar6) {
                      if (lVar7 == 0) {
                        lVar7 = FUN_14250ef60(0,0,0,param_5);
                        uVar12 = local_160;
                        lVar9 = local_140;
                      }
                      else {
                        uVar5 = FUN_14250e6d0(lVar7);
                        in_stack_fffffffffffffe78 =
                             (int *)((ulonglong)in_stack_fffffffffffffe78 & 0xffffffff00000000);
                        FUN_14250ebb0(lVar7,0,uVar5,0,in_stack_fffffffffffffe78,param_5);
                        uVar12 = local_160;
                        lVar9 = local_140;
                      }
                    }
                    else {
                      local_78 = *(undefined8 *)(param_1 + 0x20);
                      in_stack_fffffffffffffe78 =
                           (int *)((ulonglong)in_stack_fffffffffffffe78 & 0xffffffff00000000);
                      local_148 = pvVar6;
                      local_70 = pvVar2;
                      uVar16 = FUN_14250eb20(local_78,pvVar2,pvVar6,0,in_stack_fffffffffffffe78,
                                             param_5);
                      uVar20 = (undefined4)((ulonglong)in_stack_fffffffffffffe78 >> 0x20);
                      if ((*param_5 == 0xf) || (uVar12 = local_160, lVar9 = local_140, *param_5 < 1)
                         ) {
                        *param_5 = 0;
                        local_138 = (void *)((longlong)&uStack_130 + 6);
                        uStack_130 = CONCAT35(uStack_130._5_3_,0x28);
                        local_154 = uVar16 + 1;
                        local_a8 = (ulonglong)uVar16;
                        if (0x27 < (int)uVar16) {
                          pvVar6 = (void *)FUN_1424da030((ulonglong)local_154 * 2);
                          if (pvVar6 == (void *)0x0) {
                            *param_5 = 7;
                          }
                          else {
                            if (uStack_130._4_1_ != '\0') {
                              local_88 = pvVar6;
                              FUN_1424da110(local_138);
                              pvVar6 = local_88;
                            }
                            uStack_130._0_5_ = CONCAT14(1,local_154);
                            local_138 = pvVar6;
                          }
                        }
                        in_stack_fffffffffffffe78 = (int *)CONCAT44(uVar20,local_154);
                        FUN_14250eb20(local_78,local_70,local_148,local_138,
                                      in_stack_fffffffffffffe78,param_5);
                        uVar20 = (undefined4)((ulonglong)in_stack_fffffffffffffe78 >> 0x20);
                        if (lVar7 == 0) {
                          if (*param_5 < 1) {
                            if (uStack_130._4_1_ == '\0') {
                              if (-1 < (int)local_a8) {
                                uVar16 = (uint)uStack_130;
                                if ((int)local_154 <= (int)(uint)uStack_130) {
                                  uVar16 = local_154;
                                }
                                pvVar6 = (void *)FUN_1424da030((longlong)(int)uVar16 * 2);
                                if (pvVar6 != (void *)0x0) {
                                  memcpy(pvVar6,local_138,(longlong)(int)uVar16 * 2);
                                  uStack_130 = CONCAT35(uStack_130._5_3_,0x28);
                                  goto LAB_1424b5222;
                                }
                              }
                            }
                            else {
                              uStack_130 = CONCAT35(uStack_130._5_3_,0x28);
                              bVar19 = local_138 != (void *)0x0;
                              pvVar6 = local_138;
                              local_138 = (void *)((longlong)&uStack_130 + 6);
                              if (bVar19) {
LAB_1424b5222:
                                local_138 = (void *)((longlong)&uStack_130 + 6);
                                local_148 = pvVar6;
                                lVar7 = FUN_14250ef60(0,pvVar6,(longlong)(int)local_a8,param_5);
                                if (*param_5 < 1) {
                                  *(byte *)(lVar7 + 8) = *(byte *)(lVar7 + 8) | 0x20;
                                }
                                else {
                                  FUN_1424da110(local_148);
                                  lVar7 = 0;
                                }
                                goto LAB_1424b5263;
                              }
                            }
                            *param_5 = 7;
                            lVar7 = 0;
                          }
                          else {
                            lVar7 = 0;
                          }
                        }
                        else {
                          local_148 = local_138;
                          uVar5 = FUN_14250e6d0(lVar7);
                          in_stack_fffffffffffffe78 = (int *)CONCAT44(uVar20,(int)local_a8);
                          FUN_14250ebb0(lVar7,0,uVar5,local_148,in_stack_fffffffffffffe78,param_5);
                        }
LAB_1424b5263:
                        uVar12 = local_160;
                        lVar9 = local_140;
                        if (uStack_130._4_1_ != '\0') {
                          FUN_1424da110(local_138);
                          uVar12 = local_160;
                          lVar9 = local_140;
                        }
                      }
                    }
                  }
                }
                else {
LAB_1424b4f4d:
                  plVar18 = (longlong *)(param_3 + lVar13 * 8);
                  lVar7 = *(longlong *)(lVar8 + lVar15 * 8);
                }
                *plVar18 = lVar7;
                lVar7 = lVar15 + 1;
              } while ((lVar15 < lVar9) &&
                      (lVar10 = lVar15 + lVar14, plVar17 = plVar17 + 1, lVar15 = lVar7,
                      lVar10 < (longlong)uVar12));
              uVar11 = ((int)local_150 + (int)lVar7) - 1;
              lVar7 = local_60;
              uVar16 = local_158;
            }
            lVar8 = *(longlong *)(param_1 + 0x78);
            if (lVar7 == lVar8) {
              uVar16 = uVar11 + 1;
              if ((int)uVar16 < (int)local_80) {
                lVar8 = (longlong)(int)uVar16;
                uVar11 = uVar16;
                if (*(longlong *)(param_3 + lVar8 * 8) == 0) {
                  uVar5 = FUN_14250ef60(0,0,0,param_5);
                  *(undefined8 *)(param_3 + lVar8 * 8) = uVar5;
                }
                else {
                  uVar5 = FUN_14250e6d0();
                  FUN_14250ebb0(*(undefined8 *)(param_3 + lVar8 * 8),0,uVar5,&DAT_14993946c,
                                (ulonglong)in_stack_fffffffffffffe78 & 0xffffffff00000000,param_5);
                }
              }
              goto LAB_1424b57b2;
            }
            if (0 < *param_5) goto LAB_1424b57b2;
            uVar12 = (ulonglong)(uVar11 + 1);
            param_2 = local_90;
          } while ((int)(uVar11 + 1) < (int)uVar16);
        }
        uVar20 = (undefined4)((ulonglong)in_stack_fffffffffffffe78 >> 0x20);
        uVar11 = uVar16;
        if (lVar8 - lVar7 != 0 && lVar7 <= lVar8) {
          if (((*(longlong *)(param_2 + 0x20) == 0) &&
              (*(longlong *)(param_1 + 0x30) == *(longlong *)(param_2 + 0x10))) &&
             (*(longlong *)(param_1 + 0x30) == (longlong)*(int *)(param_2 + 0x1c))) {
            uVar12 = (ulonglong)uVar16;
            if (*(longlong *)(param_3 + uVar12 * 8) == 0) {
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
              local_108 = 0;
              uStack_100 = 0;
              local_118 = 0;
              uStack_110 = 0;
              local_128 = 0;
              uStack_120 = 0;
              local_138 = (void *)0x345ad82c;
              uStack_130 = 0x9000000000;
              FUN_14250ef60(&local_138,lVar7 * 2 + *(longlong *)(param_2 + 0x30),lVar8 - lVar7,
                            param_5);
              uVar5 = FUN_14250ebe0(0,&local_138,1,0,param_5);
              *(undefined8 *)(param_3 + uVar12 * 8) = uVar5;
              FUN_14250edb0(&local_138);
            }
            else {
              lVar13 = *(longlong *)(param_2 + 0x30);
              uVar5 = FUN_14250e6d0();
              FUN_14250ebb0(*(undefined8 *)(param_3 + uVar12 * 8),0,uVar5,lVar7 * 2 + lVar13,
                            CONCAT44(uVar20,(int)lVar8 - (int)lVar7),param_5);
            }
          }
          else {
            local_164 = 0;
            uVar12 = (ulonglong)in_stack_fffffffffffffe78 & 0xffffffff00000000;
            iVar4 = FUN_14250eb20(param_2,lVar7,lVar8,0,uVar12,&local_164);
            uVar20 = (undefined4)(uVar12 >> 0x20);
            lVar8 = FUN_1424da030((longlong)iVar4 * 2 + 2);
            if (lVar8 == 0) {
              *param_5 = 7;
              uVar11 = local_158;
            }
            else {
              uVar5 = CONCAT44(uVar20,iVar4 + 1);
              FUN_14250eb20(param_2,lVar7,*(undefined8 *)(param_1 + 0x78),lVar8,uVar5,param_5);
              uVar20 = (undefined4)((ulonglong)uVar5 >> 0x20);
              uVar12 = (ulonglong)local_158;
              if (*(longlong *)(param_3 + uVar12 * 8) == 0) {
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
                local_108 = 0;
                uStack_100 = 0;
                local_118 = 0;
                uStack_110 = 0;
                local_128 = 0;
                uStack_120 = 0;
                local_138 = (void *)0x345ad82c;
                uStack_130 = 0x9000000000;
                FUN_14250ef60(&local_138,lVar8,(longlong)iVar4,param_5);
                uVar5 = FUN_14250ebe0(0,&local_138,1,0,param_5);
                *(undefined8 *)(param_3 + uVar12 * 8) = uVar5;
                FUN_14250edb0(&local_138);
              }
              else {
                uVar5 = FUN_14250e6d0();
                FUN_14250ebb0(*(undefined8 *)(param_3 + uVar12 * 8),0,uVar5,lVar8,
                              CONCAT44(uVar20,iVar4),param_5);
              }
              FUN_1424da110(lVar8);
              uVar11 = local_158;
            }
          }
        }
LAB_1424b57b2:
        iVar4 = uVar11 + 1;
      }
    }
  }
  return iVar4;
}



// FUNCTION 1424b5920 FUN_1424b5920 body=75 status=ok
// SIG undefined FUN_1424b5920(void)

undefined4 FUN_1424b5920(longlong param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (0 < *param_2) {
    return uVar1;
  }
  if (0 < *(int *)(param_1 + 0x13c)) {
    *param_2 = *(int *)(param_1 + 0x13c);
    return uVar1;
  }
  if (*(char *)(param_1 + 0x82) == '\0') {
    *param_2 = 0x10302;
    return uVar1;
  }
  if (-1 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x88) + 8)) {
    return *(undefined4 *)(param_1 + 0x88);
  }
  *param_2 = 8;
  return uVar1;
}



// FUNCTION 1424b5970 FUN_1424b5970 body=78 status=ok
// SIG undefined FUN_1424b5970(void)

undefined8 FUN_1424b5970(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffffffffffff;
  if (0 < *param_2) {
    return uVar1;
  }
  if (0 < *(int *)(param_1 + 0x13c)) {
    *param_2 = *(int *)(param_1 + 0x13c);
    return uVar1;
  }
  if (*(char *)(param_1 + 0x82) == '\0') {
    *param_2 = 0x10302;
    return uVar1;
  }
  if (-1 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x88) + 8)) {
    return *(undefined8 *)(param_1 + 0x88);
  }
  *param_2 = 8;
  return uVar1;
}



// FUNCTION 1424b59c0 FUN_1424b59c0 body=42 status=ok
// SIG undefined FUN_1424b59c0(void)

void FUN_1424b59c0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *(char *)(param_1 + 0x81) = param_2;
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  puVar2 = (undefined8 *)(param_1 + 0x48);
  if (param_2 == '\0') {
    puVar2 = (undefined8 *)(param_1 + 0x30);
    uVar1 = 0;
  }
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  *(undefined8 *)(param_1 + 0x58) = *puVar2;
  return;
}



// FUNCTION 1424b59f0 FUN_1424b59f0 body=42 status=ok
// SIG undefined FUN_1424b59f0(void)

void FUN_1424b59f0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *(char *)(param_1 + 0x80) = param_2;
  puVar2 = (undefined8 *)(param_1 + 0x30);
  uVar1 = 0;
  if (param_2 == '\0') {
    puVar2 = (undefined8 *)(param_1 + 0x48);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
  }
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  *(undefined8 *)(param_1 + 0x68) = *puVar2;
  return;
}



// FUNCTION 1424b5a20 FUN_1424b5a20 body=40 status=ok
// SIG undefined FUN_1424b5a20(void)

void FUN_1424b5a20(longlong param_1,int param_2,int *param_3)

{
  if (0 < *param_3) {
    return;
  }
  if (0 < *(int *)(param_1 + 0x13c)) {
    *param_3 = *(int *)(param_1 + 0x13c);
    return;
  }
  if (-1 < param_2) {
    *(int *)(param_1 + 0x108) = param_2;
    return;
  }
  *param_3 = 1;
  return;
}



// FUNCTION 1424b5a50 FUN_1424b5a50 body=7 status=ok
// SIG undefined FUN_1424b5a50(void)

undefined4 FUN_1424b5a50(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x108);
}



// FUNCTION 1424b5a60 FUN_1424b5a60 body=7 status=ok
// SIG undefined FUN_1424b5a60(void)

undefined4 FUN_1424b5a60(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x114);
}



// FUNCTION 1424b5a70 FUN_1424b5a70 body=22 status=ok
// SIG undefined FUN_1424b5a70(void)

void FUN_1424b5a70(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  if (0 < *param_4) {
    return;
  }
  *(undefined8 *)(param_1 + 0x118) = param_2;
  *(undefined8 *)(param_1 + 0x120) = param_3;
  return;
}



// FUNCTION 1424b5a90 FUN_1424b5a90 body=28 status=ok
// SIG undefined FUN_1424b5a90(void)

void FUN_1424b5a90(longlong param_1,undefined8 *param_2,undefined8 *param_3,int *param_4)

{
  if (0 < *param_4) {
    return;
  }
  *param_2 = *(undefined8 *)(param_1 + 0x118);
  *param_3 = *(undefined8 *)(param_1 + 0x120);
  return;
}



// FUNCTION 1424b5ab0 FUN_1424b5ab0 body=22 status=ok
// SIG undefined FUN_1424b5ab0(void)

void FUN_1424b5ab0(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  if (0 < *param_4) {
    return;
  }
  *(undefined8 *)(param_1 + 0x128) = param_2;
  *(undefined8 *)(param_1 + 0x130) = param_3;
  return;
}



// FUNCTION 1424b5ad0 FUN_1424b5ad0 body=28 status=ok
// SIG undefined FUN_1424b5ad0(void)

void FUN_1424b5ad0(longlong param_1,undefined8 *param_2,undefined8 *param_3,int *param_4)

{
  if (0 < *param_4) {
    return;
  }
  *param_2 = *(undefined8 *)(param_1 + 0x128);
  *param_3 = *(undefined8 *)(param_1 + 0x130);
  return;
}



// FUNCTION 1424b5af0 FUN_1424b5af0 body=353 status=ok
// SIG undefined FUN_1424b5af0(void)

byte FUN_1424b5af0(longlong param_1,longlong param_2)

{
  ushort uVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  
  if (param_2 < *(longlong *)(param_1 + 0x68)) {
    lVar6 = *(longlong *)(param_1 + 0x20);
    param_2 = param_2 - *(longlong *)(lVar6 + 0x20);
    if (((param_2 < 0) || (*(int *)(lVar6 + 0x1c) <= param_2)) ||
       (0xdbff < *(ushort *)(*(longlong *)(lVar6 + 0x30) + param_2 * 2))) {
      FUN_14250e700();
    }
    else {
      *(int *)(lVar6 + 0x28) = (int)param_2;
    }
    lVar6 = *(longlong *)(param_1 + 0x20);
    if ((*(int *)(lVar6 + 0x2c) <= *(int *)(lVar6 + 0x28)) ||
       (uVar1 = *(ushort *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar6 + 0x28) * 2),
       uVar5 = (uint)uVar1, 0xd7ff < uVar1)) {
      uVar5 = FUN_14250e920();
    }
    cVar3 = FUN_142516e20(uVar5,0xb);
    if ((cVar3 != '\0') || (cVar3 = FUN_1424d86a0(uVar5), cVar3 == '\x10')) {
      return 0;
    }
    bVar4 = FUN_142512880(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) + 8),
                          uVar5);
  }
  else {
    *(undefined1 *)(param_1 + 0xa8) = 1;
    bVar4 = 0;
  }
  do {
    lVar6 = *(longlong *)(param_1 + 0x20);
    if (*(int *)(lVar6 + 0x1c) < *(int *)(lVar6 + 0x28)) {
      lVar6 = (**(code **)(*(longlong *)(lVar6 + 0x38) + 0x40))();
      if (lVar6 <= *(longlong *)(param_1 + 0x60)) {
LAB_1424b5bee:
        bVar2 = 0;
        goto LAB_1424b5bf0;
      }
    }
    else if ((longlong)*(int *)(lVar6 + 0x28) + *(longlong *)(lVar6 + 0x20) <=
             *(longlong *)(param_1 + 0x60)) goto LAB_1424b5bee;
    lVar6 = *(longlong *)(param_1 + 0x20);
    if (*(int *)(lVar6 + 0x28) < 1) {
LAB_1424b5bb0:
      uVar5 = FUN_14250e620();
    }
    else {
      uVar5 = *(int *)(lVar6 + 0x28) - 1;
      if (0xd7ff < *(ushort *)(*(longlong *)(lVar6 + 0x30) + (ulonglong)uVar5 * 2))
      goto LAB_1424b5bb0;
      *(uint *)(lVar6 + 0x28) = uVar5;
      uVar5 = (uint)*(ushort *)(*(longlong *)(lVar6 + 0x30) + (ulonglong)uVar5 * 2);
    }
    cVar3 = FUN_142516e20(uVar5,0xb);
  } while ((cVar3 != '\0') || (cVar3 = FUN_1424d86a0(uVar5), cVar3 == '\x10'));
  bVar2 = FUN_142512880(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) + 8),uVar5)
  ;
LAB_1424b5bf0:
  return bVar2 ^ bVar4;
}



// FUNCTION 1424b5c60 FUN_1424b5c60 body=406 status=ok
// SIG undefined FUN_1424b5c60(void)

byte FUN_1424b5c60(longlong param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30);
  lVar11 = (longlong)param_2;
  if (*(longlong *)(param_1 + 0x68) <= lVar11) {
    *(undefined1 *)(param_1 + 0xa8) = 1;
    bVar6 = 0;
    goto LAB_1424b5ce2;
  }
  uVar1 = *(ushort *)(lVar3 + lVar11 * 2);
  uVar10 = (uint)uVar1;
  if ((uVar10 & 0xf800) == 0xd800) {
    if ((uVar1 & 0x400) == 0) {
      if ((*(longlong *)(param_1 + 0x68) != (longlong)(param_2 + 1)) &&
         (uVar1 = *(ushort *)(lVar3 + (longlong)(param_2 + 1) * 2), uVar8 = (uint)uVar1,
         (uVar1 & 0xfc00) == 0xdc00)) {
        uVar10 = uVar10 << 10;
LAB_1424b5dba:
        uVar10 = uVar10 + uVar8 + 0xfca02400;
      }
    }
    else if ((*(longlong *)(param_1 + 0x60) < lVar11) &&
            (uVar1 = *(ushort *)(lVar3 + -2 + lVar11 * 2), (uVar1 & 0xfc00) == 0xd800)) {
      uVar8 = (uint)uVar1 << 10;
      goto LAB_1424b5dba;
    }
  }
  cVar5 = FUN_142516e20(uVar10,0xb);
  if ((cVar5 != '\0') || (cVar5 = FUN_1424d86a0(uVar10), cVar5 == '\x10')) {
    return 0;
  }
  bVar6 = FUN_142512880(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) + 8),uVar10
                       );
LAB_1424b5ce2:
  lVar9 = *(longlong *)(param_1 + 0x60);
  if (lVar9 < lVar11) {
    do {
      iVar7 = param_2 + -1;
      lVar11 = (longlong)param_2;
      uVar1 = *(ushort *)(lVar3 + -2 + lVar11 * 2);
      uVar10 = (uint)uVar1;
      if (((lVar9 < lVar11 + -1) && ((uVar10 & 0xfc00) == 0xdc00)) &&
         (uVar2 = *(ushort *)(lVar3 + -4 + lVar11 * 2), (uVar2 & 0xfc00) == 0xd800)) {
        iVar7 = param_2 + -2;
        uVar10 = (uint)uVar1 + (uint)uVar2 * 0x400 + 0xfca02400;
      }
      cVar5 = FUN_142516e20(uVar10,0xb);
      if ((cVar5 == '\0') && (cVar5 = FUN_1424d86a0(uVar10), cVar5 != '\x10')) {
        bVar4 = FUN_142512880(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) + 8),
                              uVar10);
        goto LAB_1424b5ced;
      }
      lVar9 = *(longlong *)(param_1 + 0x60);
      param_2 = iVar7;
    } while (lVar9 < iVar7);
  }
  bVar4 = 0;
LAB_1424b5ced:
  return bVar4 ^ bVar6;
}



// FUNCTION 1424b5e10 FUN_1424b5e10 body=219 status=ok
// SIG undefined FUN_1424b5e10(void)

void FUN_1424b5e10(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 *local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x140) == 0) {
    uVar3 = thunk_FUN_1424a4310();
    plVar4 = (longlong *)FUN_140661620(uVar3,param_1 + 0x13c);
    *(longlong **)(param_1 + 0x140) = plVar4;
    if (0 < *(int *)(param_1 + 0x13c)) goto LAB_1424b5ede;
    (**(code **)(*plVar4 + 0x30))(plVar4,*(undefined8 *)(param_1 + 0x20),param_1 + 0x13c);
    lVar1 = *(longlong *)(param_1 + 0x68);
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x68);
  }
  if ((longlong)param_2 < lVar1) {
    if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) + 0x48) != 0) {
      local_24 = 0;
      local_30 = &local_24;
      local_38 = 0;
      uVar2 = FUN_14250eb20(*(longlong *)(param_1 + 0x20),0,param_2,0);
      param_2 = (ulonglong)uVar2;
    }
    (**(code **)(**(longlong **)(param_1 + 0x140) + 0x88))
              (*(longlong **)(param_1 + 0x140),param_2 & 0xffffffff);
  }
  else {
    *(undefined1 *)(param_1 + 0xa8) = 1;
  }
LAB_1424b5ede:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 1424b5f00 FUN_1424b5f00 body=102 status=ok
// SIG undefined FUN_1424b5f00(void)

void FUN_1424b5f00(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x110) = 10000;
  iVar3 = *(int *)(param_1 + 0x10c) + 1;
  *(int *)(param_1 + 0x10c) = iVar3;
  if (*(code **)(param_1 + 0x118) != (code *)0x0) {
    cVar1 = (**(code **)(param_1 + 0x118))(*(undefined8 *)(param_1 + 0x120));
    if (cVar1 == '\0') {
      uVar2 = 0x10313;
      goto LAB_1424b5f5d;
    }
    iVar3 = *(int *)(param_1 + 0x10c);
  }
  if (*(int *)(param_1 + 0x108) < 1) {
    return;
  }
  uVar2 = 0x10312;
  if (iVar3 < *(int *)(param_1 + 0x108)) {
    return;
  }
LAB_1424b5f5d:
  *param_2 = uVar2;
  return;
}



// FUNCTION 1424b5f70 FUN_1424b5f70 body=432 status=ok
// SIG undefined FUN_1424b5f70(void)

undefined8 * FUN_1424b5f70(longlong param_1,undefined8 *param_2,undefined8 param_3,int *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  
  if (0 < *param_4) {
    return param_2;
  }
  lVar2 = *(longlong *)(param_1 + 0xb0);
  iVar13 = *(int *)(param_1 + 0x38);
  iVar9 = *(int *)(lVar2 + 8);
  iVar12 = iVar9 + iVar13;
  if ((iVar12 < 0) || (*(int *)(lVar2 + 0xc) < iVar12)) {
    cVar8 = FUN_14250e240(lVar2,iVar12,param_4);
    if (cVar8 != '\0') {
      iVar9 = *(int *)(lVar2 + 8);
      iVar12 = iVar13 + iVar9;
      goto LAB_1424b5fcc;
    }
    puVar19 = (undefined8 *)0x0;
    iVar13 = *param_4;
  }
  else {
LAB_1424b5fcc:
    puVar19 = (undefined8 *)((longlong)iVar9 * 8 + *(longlong *)(lVar2 + 0x18));
    *(int *)(lVar2 + 8) = iVar12;
    iVar13 = *param_4;
  }
  if (0 < iVar13) {
    *param_4 = 0x10311;
    return param_2;
  }
  uVar15 = (ulonglong)*(int *)(param_1 + 0x38);
  puVar20 = puVar19 + -uVar15;
  uVar14 = uVar15 - 1 & 0x1fffffffffffffff;
  puVar10 = puVar20;
  puVar11 = puVar19;
  if ((uVar14 < 9) || ((uVar15 & 0x1ffffffffffffffc) == 0)) {
LAB_1424b6090:
    do {
      uVar3 = *puVar10;
      puVar10 = puVar10 + 1;
      *puVar11 = uVar3;
      puVar11 = puVar11 + 1;
    } while (puVar10 != puVar19);
  }
  else {
    uVar14 = uVar14 + 1;
    uVar16 = uVar14 & 0xfffffffffffffffc;
    puVar10 = puVar20 + uVar16;
    puVar11 = puVar19 + uVar16;
    puVar17 = puVar19 + 2;
    uVar18 = uVar16;
    do {
      puVar1 = puVar17 + (-2 - uVar15);
      uVar4 = *(undefined4 *)((longlong)puVar1 + 4);
      uVar5 = *(undefined4 *)(puVar1 + 1);
      uVar6 = *(undefined4 *)((longlong)puVar1 + 0xc);
      uVar3 = puVar17[-uVar15];
      uVar7 = (puVar17 + -uVar15)[1];
      *(undefined4 *)(puVar17 + -2) = *(undefined4 *)puVar1;
      *(undefined4 *)((longlong)puVar17 + -0xc) = uVar4;
      *(undefined4 *)(puVar17 + -1) = uVar5;
      *(undefined4 *)((longlong)puVar17 + -4) = uVar6;
      *puVar17 = uVar3;
      puVar17[1] = uVar7;
      puVar17 = puVar17 + 4;
      uVar18 = uVar18 - 4;
    } while (uVar18 != 0);
    if (uVar14 != uVar16) goto LAB_1424b6090;
  }
  iVar13 = *(int *)(param_1 + 0x110);
  *(int *)(param_1 + 0x110) = iVar13 + -1;
  if (1 < iVar13) goto LAB_1424b610a;
  *(undefined4 *)(param_1 + 0x110) = 10000;
  iVar13 = *(int *)(param_1 + 0x10c) + 1;
  *(int *)(param_1 + 0x10c) = iVar13;
  if (*(code **)(param_1 + 0x118) == (code *)0x0) {
LAB_1424b60ee:
    if ((*(int *)(param_1 + 0x108) < 1) || (iVar9 = 0x10312, iVar13 < *(int *)(param_1 + 0x108)))
    goto LAB_1424b610a;
  }
  else {
    cVar8 = (**(code **)(param_1 + 0x118))(*(undefined8 *)(param_1 + 0x120));
    if (cVar8 != '\0') {
      iVar13 = *(int *)(param_1 + 0x10c);
      goto LAB_1424b60ee;
    }
    iVar9 = 0x10313;
  }
  *param_4 = iVar9;
LAB_1424b610a:
  puVar20[1] = param_3;
  return puVar19;
}



// FUNCTION 1424b6120 FUN_1424b6120 body=8 status=ok
// SIG undefined FUN_1424b6120(void)

undefined * FUN_1424b6120(void)

{
  return &DAT_14c77e840;
}



// FUNCTION 1424b6130 FUN_1424b6130 body=38 status=ok
// SIG undefined FUN_1424b6130(void)

undefined8 FUN_1424b6130(undefined8 param_1,int param_2)

{
  FUN_140d22d80();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1424b6160 FUN_1424b6160 body=536 status=ok
// SIG undefined FUN_1424b6160(void)

void FUN_1424b6160(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  uVar3 = 2;
  if ((*(ushort *)(param_1 + 0x30) & 1) == 0) {
    uVar3 = *(ushort *)(param_1 + 0x30) & 0x1f;
  }
  *(ushort *)(param_1 + 0x30) = uVar3;
  puVar1 = (undefined4 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  lVar5 = thunk_FUN_1424da030(0x20);
  if (lVar5 != 0) {
    FUN_14250dd10(lVar5,puVar1);
  }
  *(longlong *)(param_1 + 0x20) = lVar5;
  lVar5 = thunk_FUN_1424da030(0x20);
  if (lVar5 != 0) {
    FUN_142517d10(lVar5,puVar1);
  }
  *(longlong *)(param_1 + 0x88) = lVar5;
  lVar5 = thunk_FUN_1424da030(0x28);
  if (lVar5 != 0) {
    FUN_142515e50(lVar5,puVar1);
  }
  *(longlong *)(param_1 + 0x68) = lVar5;
  lVar5 = thunk_FUN_1424da030(200);
  if (lVar5 != 0) {
    FUN_142511900(lVar5);
  }
  *(longlong *)(param_1 + 0xb0) = lVar5;
  puVar6 = (undefined8 *)thunk_FUN_1424da030(0x20);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[2] = 0;
    puVar6[3] = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
  }
  *(undefined8 **)(param_1 + 0xc0) = puVar6;
  uVar7 = FUN_142501e10(FUN_1424a9c90,FUN_1424a9cd0,&LAB_142503330,puVar1);
  *(undefined8 *)(param_1 + 0xd0) = uVar7;
  if (*(int *)(param_1 + 0x78) < 1) {
    if ((*(longlong *)(param_1 + 0x20) != 0) && (*(longlong *)(param_1 + 0x88) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x68);
      auVar10._0_4_ = -(uint)((int)*(undefined8 *)(param_1 + 0xc0) == 0);
      auVar10._4_4_ = -(uint)((int)((ulonglong)*(undefined8 *)(param_1 + 0xc0) >> 0x20) == 0);
      auVar10._8_4_ = -(uint)((int)uVar7 == 0);
      auVar10._12_4_ = -(uint)((int)((ulonglong)uVar7 >> 0x20) == 0);
      auVar11._4_4_ = auVar10._0_4_;
      auVar11._0_4_ = auVar10._4_4_;
      auVar11._8_4_ = auVar10._12_4_;
      auVar11._12_4_ = auVar10._8_4_;
      auVar9._0_4_ = -(uint)((int)*(undefined8 *)(param_1 + 0xb0) == 0);
      auVar9._4_4_ = -(uint)((int)((ulonglong)*(undefined8 *)(param_1 + 0xb0) >> 0x20) == 0);
      auVar9._8_4_ = -(uint)((int)uVar2 == 0);
      auVar9._12_4_ = -(uint)((int)((ulonglong)uVar2 >> 0x20) == 0);
      auVar8._4_4_ = auVar9._0_4_;
      auVar8._0_4_ = auVar9._4_4_;
      auVar8._8_4_ = auVar9._12_4_;
      auVar8._12_4_ = auVar9._8_4_;
      auVar8 = packssdw(auVar8 & auVar9,auVar11 & auVar10);
      iVar4 = movmskps((int)uVar7,auVar8);
      if (iVar4 == 0) {
        FUN_142516470(uVar2,0,puVar1);
        FUN_142502340(*(undefined8 *)(param_1 + 0xd0),&LAB_1424b70f0);
        return;
      }
    }
    *puVar1 = 7;
  }
  return;
}



// FUNCTION 1424b6380 Unwind@1424b6380 body=34 status=ok
// SIG undefined Unwind@1424b6380(void)

void Unwind_1424b6380(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1424b63b0 Unwind@1424b63b0 body=34 status=ok
// SIG undefined Unwind@1424b63b0(void)

void Unwind_1424b63b0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1424b63e0 Unwind@1424b63e0 body=34 status=ok
// SIG undefined Unwind@1424b63e0(void)

void Unwind_1424b63e0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1424b6410 Unwind@1424b6410 body=34 status=ok
// SIG undefined Unwind@1424b6410(void)

void Unwind_1424b6410(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1424b6440 FUN_1424b6440 body=822 status=ok
// SIG undefined FUN_1424b6440(void)

longlong FUN_1424b6440(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  void *_Dst;
  longlong lVar17;
  size_t sVar18;
  longlong lVar19;
  int iVar20;
  size_t _Size;
  undefined4 local_54;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (param_1 == param_2) {
    return param_1;
  }
  FUN_1424b6840(param_1);
  FUN_1424b6160(param_1);
  iVar20 = *(int *)(param_2 + 0x78);
  *(int *)(param_1 + 0x78) = iVar20;
  if (0 < iVar20) {
    return param_1;
  }
  piVar1 = (int *)(param_1 + 0x78);
  if (*(longlong *)(param_2 + 0x10) == 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    uVar16 = FUN_14250ebe0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 8),0,1,piVar1);
  }
  else {
    local_50 = thunk_FUN_1424da030(0x40);
    if (local_50 == 0) {
      *(undefined8 *)(param_1 + 0x10) = 0;
      goto LAB_1424b66c1;
    }
    FUN_1424a6be0(local_50,*(undefined8 *)(param_2 + 0x10));
    *(longlong *)(param_1 + 0x10) = local_50;
    uVar16 = FUN_14250ee60(0,local_50,piVar1);
  }
  *(undefined8 *)(param_1 + 8) = uVar16;
  if (0 < *piVar1) {
    return param_1;
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  FUN_1424a7c80(param_1 + 0x28,param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  FUN_142511c30(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_2 + 0xb0));
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  puVar5 = *(undefined4 **)(param_2 + 0xc0);
  puVar6 = *(undefined4 **)(param_1 + 0xc0);
  uVar7 = *puVar5;
  uVar8 = puVar5[1];
  uVar9 = puVar5[2];
  uVar10 = puVar5[3];
  uVar11 = puVar5[5];
  uVar12 = puVar5[6];
  uVar13 = puVar5[7];
  puVar6[4] = puVar5[4];
  puVar6[5] = uVar11;
  puVar6[6] = uVar12;
  puVar6[7] = uVar13;
  *puVar6 = uVar7;
  puVar6[1] = uVar8;
  puVar6[2] = uVar9;
  puVar6[3] = uVar10;
  *(undefined1 *)(param_1 + 200) = *(undefined1 *)(param_2 + 200);
  FUN_14250dda0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x20),piVar1);
  FUN_142517e20(*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_2 + 0x88),piVar1);
  uVar4 = *(uint *)(*(longlong *)(param_2 + 0x68) + 8);
  _Size = (longlong)(int)uVar4 << 5;
  sVar18 = 0xffffffffffffffff;
  if (-1 < (longlong)(int)uVar4) {
    sVar18 = _Size;
  }
  _Dst = (void *)thunk_FUN_1424da030(sVar18);
  if (_Dst != (void *)0x0) {
    if (uVar4 == 0) {
      *(void **)(param_1 + 0x70) = _Dst;
    }
    else {
      memset(_Dst,0,_Size);
      *(void **)(param_1 + 0x70) = _Dst;
      if (1 < (int)uVar4) {
        iVar20 = 1;
        lVar19 = 0x20;
        do {
          if (0 < *piVar1) {
            return param_1;
          }
          uVar16 = FUN_142516630(*(undefined8 *)(param_2 + 0x68),iVar20);
          lVar17 = thunk_FUN_1424da030(200);
          if (lVar17 == 0) {
            *piVar1 = 7;
            break;
          }
          local_50 = lVar17;
          FUN_142511b90(lVar17,uVar16);
          FUN_1425163e0(*(undefined8 *)(param_1 + 0x68),local_50,piVar1);
          lVar17 = *(longlong *)(param_1 + 0x70);
          puVar2 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + lVar19);
          uVar16 = *puVar2;
          uVar14 = puVar2[1];
          puVar2 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0x10 + lVar19);
          uVar15 = puVar2[1];
          puVar3 = (undefined8 *)(lVar17 + 0x10 + lVar19);
          *puVar3 = *puVar2;
          puVar3[1] = uVar15;
          puVar2 = (undefined8 *)(lVar17 + lVar19);
          *puVar2 = uVar16;
          puVar2[1] = uVar14;
          iVar20 = iVar20 + 1;
          lVar19 = lVar19 + 0x20;
        } while ((ulonglong)uVar4 << 5 != lVar19);
      }
    }
    local_54 = 0xffffffff;
    lVar19 = FUN_1425022e0(*(undefined8 *)(param_2 + 0xd0),&local_54);
    if (lVar19 == 0) {
      return param_1;
    }
    if (0 < *piVar1) {
      return param_1;
    }
    while( true ) {
      uVar16 = *(undefined8 *)(lVar19 + 0x10);
      lVar17 = thunk_FUN_1424da030(0x40);
      if (lVar17 == 0) {
        *piVar1 = 7;
      }
      else {
        local_50 = lVar17;
        FUN_1424a6be0(lVar17,uVar16);
        FUN_142502d50(*(undefined8 *)(param_1 + 0xd0),local_50,*(undefined4 *)(lVar19 + 8),piVar1);
      }
      lVar19 = FUN_1425022e0(*(undefined8 *)(param_2 + 0xd0),&local_54);
      if (lVar19 == 0) break;
      if (0 < *piVar1) {
        return param_1;
      }
    }
    return param_1;
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
LAB_1424b66c1:
  *(undefined4 *)(param_1 + 0x78) = 7;
  return param_1;
}



// FUNCTION 1424b6780 Unwind@1424b6780 body=52 status=ok
// SIG undefined Unwind@1424b6780(void)

void Unwind_1424b6780(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 1424b67c0 Unwind@1424b67c0 body=52 status=ok
// SIG undefined Unwind@1424b67c0(void)

void Unwind_1424b67c0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 1424b6800 Unwind@1424b6800 body=52 status=ok
// SIG undefined Unwind@1424b6800(void)

void Unwind_1424b6800(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 1424b6840 FUN_1424b6840 body=318 status=ok
// SIG undefined FUN_1424b6840(void)

void FUN_1424b6840(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x68);
  if (1 < *(int *)(puVar2 + 1)) {
    iVar3 = 1;
    do {
      lVar1 = FUN_142516630(puVar2,iVar3);
      if (lVar1 != 0) {
        FUN_1425121d0(lVar1);
        FUN_1401773f0(lVar1);
      }
      iVar3 = iVar3 + 1;
      puVar2 = *(undefined8 **)(param_1 + 0x68);
    } while (iVar3 < *(int *)(puVar2 + 1));
  }
  (**(code **)*puVar2)(puVar2,1);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1424b70c0();
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x88);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (lVar1 != 0) {
    FUN_1425121d0(lVar1);
    FUN_1401773f0(lVar1);
  }
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1401773f0();
  }
  *(undefined8 *)(param_1 + 0xc0) = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_14250edb0();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  FUN_142502220(*(undefined8 *)(param_1 + 0xd0));
  *(undefined8 *)(param_1 + 0xd0) = 0;
  return;
}



// FUNCTION 1424b6990 FUN_1424b6990 body=109 status=ok
// SIG undefined FUN_1424b6990(void)

undefined8 *
FUN_1424b6990(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  puVar1 = (undefined8 *)thunk_FUN_1424da030(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = icu_64::RegexPattern::vftable;
    puVar2 = puVar1 + 5;
    puVar1[5] = &PTR_FUN_149e18960;
    *(undefined2 *)(puVar1 + 6) = 2;
    FUN_1424b6160();
    FUN_1424b6440(puVar1,param_1,param_3,param_4,puVar2,puVar1,uVar3);
  }
  return puVar1;
}



// FUNCTION 1424b6a00 Unwind@1424b6a00 body=52 status=ok
// SIG undefined Unwind@1424b6a00(void)

void Unwind_1424b6a00(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_140859a90(*(undefined8 *)(param_2 + 0x20));
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_1424b70d0(uVar1);
  FUN_1401773f0(uVar1);
  return;
}



// FUNCTION 1424b6a40 FUN_1424b6a40 body=320 status=ok
// SIG undefined FUN_1424b6a40(void)

undefined8 * FUN_1424b6a40(undefined8 param_1,uint param_2,undefined8 param_3,int *param_4)

{
  undefined8 *puVar1;
  undefined1 local_258 [528];
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (*param_4 < 1) {
    if ((param_2 & 0xfffffc40) == 0) {
      if ((char)param_2 < '\0') {
        *param_4 = 0x10305;
      }
      else {
        local_48 = (undefined8 *)thunk_FUN_1424da030(0xd8);
        if (local_48 == (undefined8 *)0x0) {
          *param_4 = 7;
        }
        else {
          *local_48 = icu_64::RegexPattern::vftable;
          local_40 = local_48 + 5;
          local_48[5] = &PTR_FUN_149e18960;
          *(undefined2 *)(local_48 + 6) = 2;
          FUN_1424b6160();
          puVar1 = local_48;
          if (*(int *)(local_48 + 0xf) < 1) {
            *(uint *)(local_48 + 3) = param_2;
            FUN_1425183a0(local_258,local_48,param_4);
            FUN_1425185d0(local_258,param_1,param_3,param_4);
            if (0 < *param_4) {
              FUN_140cf19b0(puVar1);
              FUN_1401773f0(puVar1);
              puVar1 = (undefined8 *)0x0;
            }
            FUN_142518570(local_258);
            return puVar1;
          }
          *param_4 = *(int *)(local_48 + 0xf);
          FUN_1424b6840(local_48);
          FUN_140859a90(local_40);
          FUN_1424b70d0(puVar1);
          FUN_1401773f0(puVar1);
        }
      }
    }
    else {
      *param_4 = 0x1030b;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1424b6b80 Unwind@1424b6b80 body=73 status=ok
// SIG undefined Unwind@1424b6b80(void)

void Unwind_1424b6b80(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_140859a90(*(undefined8 *)(param_2 + 0x238));
  uVar1 = *(undefined8 *)(param_2 + 0x230);
  FUN_1424b70d0(uVar1);
  FUN_1401773f0(uVar1);
  return;
}



// FUNCTION 1424b6bd0 Unwind@1424b6bd0 body=29 status=ok
// SIG undefined Unwind@1424b6bd0(void)

void Unwind_1424b6bd0(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1424b6bf0 Unwind@1424b6bf0 body=47 status=ok
// SIG undefined Unwind@1424b6bf0(void)

void Unwind_1424b6bf0(undefined8 param_1,longlong param_2)

{
  FUN_142518570(param_2 + 0x20);
  return;
}



// FUNCTION 1424b6c20 FUN_1424b6c20 body=4 status=ok
// SIG undefined FUN_1424b6c20(void)

undefined4 FUN_1424b6c20(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// FUNCTION 1424b6c30 FUN_1424b6c30 body=93 status=ok
// SIG undefined FUN_1424b6c30(void)

longlong FUN_1424b6c30(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*param_2 < 1) {
    iVar1 = *(int *)(param_1 + 0x78);
    if (iVar1 < 1) {
      lVar2 = thunk_FUN_1424da030(0x148);
      if (lVar2 != 0) {
        FUN_1424aa100(lVar2,param_1);
        return lVar2;
      }
      iVar1 = 7;
    }
    *param_2 = iVar1;
  }
  return 0;
}



// FUNCTION 1424b6c90 Unwind@1424b6c90 body=34 status=ok
// SIG undefined Unwind@1424b6c90(void)

void Unwind_1424b6c90(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1424b6cc0 FUN_1424b6cc0 body=231 status=ok
// SIG undefined FUN_1424b6cc0(void)

undefined8 * FUN_1424b6cc0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_3c;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      *param_2 = &PTR_FUN_149e18960;
      *(undefined2 *)(param_2 + 1) = 2;
    }
    else {
      local_3c = 0;
      uVar2 = FUN_14250e6d0();
      uVar1 = FUN_14250eb20(*(undefined8 *)(param_1 + 8),0,uVar2,0,0,&local_3c);
      *param_2 = &PTR_FUN_149e18960;
      *(undefined2 *)(param_2 + 1) = 2;
      local_3c = 0;
      uVar3 = FUN_140855070(param_2,uVar1);
      FUN_14250eb20(*(undefined8 *)(param_1 + 8),0,uVar2,uVar3,uVar1,&local_3c);
      FUN_1408550d0(param_2,uVar1);
    }
  }
  else {
    FUN_1424a6be0(param_2);
  }
  return param_2;
}



// FUNCTION 1424b6db0 Unwind@1424b6db0 body=44 status=ok
// SIG undefined Unwind@1424b6db0(void)

void Unwind_1424b6db0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1424b6de0 FUN_1424b6de0 body=55 status=ok
// SIG undefined FUN_1424b6de0(void)

longlong FUN_1424b6de0(longlong param_1,int *param_2)

{
  longlong lVar1;
  
  if (*param_2 < 1) {
    *param_2 = 0;
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == 0) {
      FUN_14250dba0(param_2);
      lVar1 = *(longlong *)(DAT_14c792c08 + 0xaa8);
    }
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 1424b6e20 FUN_1424b6e20 body=46 status=ok
// SIG undefined FUN_1424b6e20(void)

undefined8 FUN_1424b6e20(longlong param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*param_3 < 1) {
    uVar1 = FUN_142502860(*(undefined8 *)(param_1 + 0xd0));
    if ((int)uVar1 == 0) {
      *param_3 = 0x10315;
      uVar1 = 0;
    }
  }
  return uVar1;
}



// FUNCTION 1424b6e50 FUN_1424b6e50 body=92 status=ok
// SIG undefined FUN_1424b6e50(void)

int FUN_1424b6e50(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  undefined1 local_58 [64];
  
  iVar1 = 0;
  if (*param_4 < 1) {
    iVar1 = 0;
    FUN_1424a7220(local_58,param_2,param_3,0);
    if (*param_4 < 1) {
      iVar1 = FUN_142502860(*(undefined8 *)(param_1 + 0xd0),local_58);
      if (iVar1 == 0) {
        *param_4 = 0x10315;
        iVar1 = 0;
      }
    }
    FUN_140859a90(local_58);
  }
  return iVar1;
}



// FUNCTION 1424b6eb0 FUN_1424b6eb0 body=137 status=ok
// SIG undefined FUN_1424b6eb0(void)

undefined4
FUN_1424b6eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             int *param_5)

{
  undefined4 uVar1;
  undefined1 local_180 [316];
  int local_44;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  uVar1 = 0;
  if (*param_5 < 1) {
    FUN_1424aa100(local_180,param_1);
    uVar1 = 0;
    if (local_44 < 1) {
      uVar1 = FUN_1424b4a30(local_180,param_2,param_3,param_4,param_5);
    }
    FUN_140d22d80(local_180);
  }
  return uVar1;
}



// FUNCTION 1424b6f40 Unwind@1424b6f40 body=47 status=ok
// SIG undefined Unwind@1424b6f40(void)

void Unwind_1424b6f40(undefined8 param_1,longlong param_2)

{
  FUN_140d22d80(param_2 + 0x28);
  return;
}



// FUNCTION 1424b6f70 FUN_1424b6f70 body=137 status=ok
// SIG undefined FUN_1424b6f70(void)

undefined4
FUN_1424b6f70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             int *param_5)

{
  undefined4 uVar1;
  undefined1 local_180 [316];
  int local_44;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  uVar1 = 0;
  if (*param_5 < 1) {
    FUN_1424aa100(local_180,param_1);
    uVar1 = 0;
    if (local_44 < 1) {
      uVar1 = FUN_1424b4ba0(local_180,param_2,param_3,param_4,param_5);
    }
    FUN_140d22d80(local_180);
  }
  return uVar1;
}



// FUNCTION 1424b7000 Unwind@1424b7000 body=47 status=ok
// SIG undefined Unwind@1424b7000(void)

void Unwind_1424b7000(undefined8 param_1,longlong param_2)

{
  FUN_140d22d80(param_2 + 0x28);
  return;
}



// FUNCTION 1424b7030 FUN_1424b7030 body=8 status=ok
// SIG undefined FUN_1424b7030(void)

undefined * FUN_1424b7030(void)

{
  return &DAT_14c77e844;
}



// FUNCTION 1424b7040 FUN_1424b7040 body=70 status=ok
// SIG undefined FUN_1424b7040(void)

longlong FUN_1424b7040(longlong param_1,int param_2)

{
  FUN_1424b6840();
  FUN_140859a90(param_1 + 0x28);
  FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1424b7090 Unwind@1424b7090 body=21 status=ok
// SIG undefined Unwind@1424b7090(void)

void Unwind_1424b7090(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1424b70b0 thunk_FUN_1424da030 body=5 status=ok
// SIG undefined thunk_FUN_1424da030(void)

undefined * thunk_FUN_1424da030(size_t param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    return &DAT_149966ef0;
  }
  if (DAT_14c77ed68 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001424da04b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined *)(*DAT_14c77ed68)(DAT_14c77ed70);
    return puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001424da059. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar1 = malloc(param_1);
  return puVar1;
}



// FUNCTION 1424b70c0 FUN_1424b70c0 body=10 status=ok
// SIG undefined FUN_1424b70c0(void)

void FUN_1424b70c0(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    return;
  }
  if (param_1 != &DAT_149966ef0) {
    if (DAT_14c77ed78 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001424da132. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_14c77ed78)(DAT_14c77ed70);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0001424da139. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    free(param_1);
    return;
  }
  return;
}



// FUNCTION 1424b70d0 FUN_1424b70d0 body=1 status=ok
// SIG undefined FUN_1424b70d0(void)

void FUN_1424b70d0(void)

{
  return;
}



// FUNCTION 1424b70e0 FUN_1424b70e0 body=3 status=ok
// SIG undefined FUN_1424b70e0(void)

undefined8 FUN_1424b70e0(void)

{
  return 0;
}



// FUNCTION 1424b7110 FUN_1424b7110 body=127 status=ok
// SIG undefined FUN_1424b7110(void)

void FUN_1424b7110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = 0;
  local_78 = 0x3f;
  FUN_1424a83f0(param_2,0,0x3f,local_68);
  uVar1 = FUN_1424ecc30(param_1,"Rules",param_3,param_4);
  FUN_1424ecc30(uVar1,local_68,uVar1,param_4);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
}



// FUNCTION 1424b71a0 FUN_1424b71a0 body=152 status=ok
// SIG undefined FUN_1424b71a0(void)

void FUN_1424b71a0(void)

{
  undefined1 local_58 [64];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  FUN_14251f960(0x12,FUN_1424b78b0);
  FUN_1424a7060(local_58,1,&DAT_1499399b8,3);
  FUN_14251fa10(&DAT_14c77e8f0,0,local_58);
  FUN_140859a90(local_58);
  FUN_1424a7060(local_58,1,L"Etc/Unknown",0xb);
  FUN_14251fa10(&DAT_14c77e850,0,local_58);
  FUN_140859a90(local_58);
  DAT_14c77e9c0 = 1;
  return;
}



// FUNCTION 1424b7240 Unwind@1424b7240 body=32 status=ok
// SIG undefined Unwind@1424b7240(void)

void Unwind_1424b7240(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 1424b7260 Unwind@1424b7260 body=32 status=ok
// SIG undefined Unwind@1424b7260(void)

void Unwind_1424b7260(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 1424b7280 FUN_1424b7280 body=51 status=ok
// SIG undefined FUN_1424b7280(void)

undefined8 * FUN_1424b7280(undefined8 *param_1)

{
  *param_1 = icu_64::TimeZone::vftable;
  FUN_1424a6be0(param_1 + 1);
  return param_1;
}



// FUNCTION 1424b72c0 Unwind@1424b72c0 body=30 status=ok
// SIG undefined Unwind@1424b72c0(void)

void Unwind_1424b72c0(undefined8 param_1,longlong param_2)

{
  FUN_1424b70d0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1424b72e0 FUN_1424b72e0 body=40 status=ok
// SIG undefined FUN_1424b72e0(void)

void FUN_1424b72e0(undefined8 *param_1)

{
  *param_1 = icu_64::TimeZone::vftable;
  FUN_140859a90(param_1 + 1);
  FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 1424b7310 FUN_1424b7310 body=55 status=ok
// SIG undefined FUN_1424b7310(void)

undefined8 * FUN_1424b7310(undefined8 *param_1,longlong param_2)

{
  *param_1 = icu_64::TimeZone::vftable;
  FUN_1424a6be0(param_1 + 1,param_2 + 8);
  return param_1;
}



// FUNCTION 1424b7350 Unwind@1424b7350 body=30 status=ok
// SIG undefined Unwind@1424b7350(void)

void Unwind_1424b7350(undefined8 param_1,longlong param_2)

{
  FUN_1424b70d0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1424b7370 FUN_1424b7370 body=35 status=ok
// SIG undefined FUN_1424b7370(void)

longlong FUN_1424b7370(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_1424a7c80(param_1 + 8,param_2 + 8);
  }
  return param_1;
}



// FUNCTION 1424b73a0 FUN_1424b73a0 body=151 status=ok
// SIG undefined FUN_1424b73a0(void)

bool FUN_1424b73a0(longlong param_1,longlong param_2)

{
  ushort uVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  
  lVar5 = __RTtypeid();
  lVar6 = __RTtypeid(param_2);
  iVar4 = __std_type_info_compare(lVar5 + 8,lVar6 + 8);
  if (iVar4 == 0) {
    uVar1 = *(ushort *)(param_1 + 0x10);
    if ((uVar1 & 1) == 0) {
      if ((short)uVar1 < 0) {
        iVar4 = *(int *)(param_1 + 0x14);
      }
      else {
        iVar4 = (int)(short)uVar1 >> 5;
      }
      sVar2 = *(short *)(param_2 + 0x10);
      if (sVar2 < 0) {
        iVar7 = *(int *)(param_2 + 0x14);
      }
      else {
        iVar7 = (int)sVar2 >> 5;
      }
      bVar8 = false;
      if ((((int)sVar2 & 1U) == 0) && (iVar4 == iVar7)) {
        cVar3 = FUN_1412ae090(param_1 + 8,param_2 + 8);
        bVar8 = cVar3 != '\0';
      }
    }
    else {
      bVar8 = (bool)(*(byte *)(param_2 + 0x10) & 1);
    }
  }
  else {
    bVar8 = false;
  }
  return bVar8;
}



// FUNCTION 1424b7440 FUN_1424b7440 body=143 status=ok
// SIG undefined FUN_1424b7440(void)

void FUN_1424b7440(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  lVar2 = FUN_1424b97b0(param_1,&local_1c);
  if (lVar2 == 0) {
    lVar2 = FUN_1424b74e0(param_1);
    if (lVar2 == 0) {
      if (DAT_14c77e9c4 != 2) {
        cVar1 = FUN_142501800(&DAT_14c77e9c4);
        if (cVar1 != '\0') {
          FUN_1424b71a0();
          FUN_1425019c0(&DAT_14c77e9c4);
        }
      }
      (**(code **)(DAT_14c77e850 + 0x58))(&DAT_14c77e850);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 1424b74e0 FUN_1424b74e0 body=201 status=ok
// SIG undefined FUN_1424b74e0(void)

longlong FUN_1424b74e0(undefined8 param_1)

{
  char cVar1;
  undefined **local_88;
  undefined2 local_80;
  uint local_48;
  int local_44;
  int local_40;
  int local_3c;
  longlong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  cVar1 = FUN_1424b8b40(param_1,&local_48,&local_44,&local_40,&local_3c);
  if (cVar1 == '\0') {
    local_38 = 0;
  }
  else {
    local_88 = &PTR_FUN_149e18960;
    local_80 = 2;
    FUN_1424b90e0(local_44,local_40,local_3c,local_48 >> 0x1f,&local_88);
    local_38 = thunk_FUN_1424da030(0xa0);
    if (local_38 != 0) {
      FUN_14251fa10(local_38,local_48 * ((local_44 * 0x3c + local_40) * 0x3c + local_3c) * 1000,
                    &local_88);
    }
    FUN_140859a90(&local_88);
  }
  return local_38;
}



// FUNCTION 1424b75b0 Unwind@1424b75b0 body=43 status=ok
// SIG undefined Unwind@1424b75b0(void)

void Unwind_1424b75b0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x80));
  return;
}



// FUNCTION 1424b75e0 Unwind@1424b75e0 body=43 status=ok
// SIG undefined Unwind@1424b75e0(void)

void Unwind_1424b75e0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 1424b7610 FUN_1424b7610 body=383 status=ok
// SIG undefined FUN_1424b7610(void)

longlong * FUN_1424b7610(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined4 local_b8 [16];
  undefined1 local_78 [8];
  short local_70;
  int local_6c;
  longlong *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  _tzset();
  FUN_1424d98d0();
  uVar5 = FUN_1424d98e0(0);
  iVar3 = FUN_1424d98b0();
  FUN_1424a7220(local_78,uVar5,0xffffffff,0);
  iVar1 = local_6c;
  if (-1 < local_70) {
    iVar1 = (int)local_70 >> 5;
  }
  if (iVar1 == 0) {
    FUN_1424a7060(local_b8,1,L"Etc/Unknown",0xb);
    FUN_1424a7ca0(local_78,local_b8);
    FUN_140859a90(local_b8);
  }
  local_b8[0] = 0;
  plVar6 = (longlong *)FUN_1424b97b0(local_78,local_b8);
  FUN_1424da110(uVar5);
  if (-1 < local_70) {
    local_6c = (int)local_70 >> 5;
  }
  if (plVar6 != (longlong *)0x0) {
    iVar4 = (**(code **)(*plVar6 + 0x38))(plVar6);
    if ((1 < local_6c - 3U) || (iVar3 * -1000 == iVar4)) goto LAB_1424b7775;
    (**(code **)*plVar6)(plVar6,1);
  }
  if ((iVar1 == 0) || (plVar6 = (longlong *)thunk_FUN_1424da030(0xa0), plVar6 == (longlong *)0x0)) {
    if ((DAT_14c77e9c4 != 2) && (cVar2 = FUN_142501800(&DAT_14c77e9c4), cVar2 != '\0')) {
      FUN_1424b71a0();
      FUN_1425019c0(&DAT_14c77e9c4);
    }
    plVar6 = (longlong *)(**(code **)(DAT_14c77e850 + 0x58))(&DAT_14c77e850);
  }
  else {
    local_38 = plVar6;
    FUN_14251fa10(plVar6,iVar3 * -1000,local_78);
    plVar6 = local_38;
  }
LAB_1424b7775:
  FUN_140859a90(local_78);
  return plVar6;
}



// FUNCTION 1424b7790 Unwind@1424b7790 body=43 status=ok
// SIG undefined Unwind@1424b7790(void)

void Unwind_1424b7790(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xa0));
  return;
}



// FUNCTION 1424b77c0 Unwind@1424b77c0 body=43 status=ok
// SIG undefined Unwind@1424b77c0(void)

void Unwind_1424b77c0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x60);
  return;
}



// FUNCTION 1424b77f0 FUN_1424b77f0 body=112 status=ok
// SIG undefined FUN_1424b77f0(void)

undefined8 FUN_1424b77f0(void)

{
  char cVar1;
  undefined8 uVar2;
  
  if (DAT_14c77e9cc != 2) {
    cVar1 = FUN_142501800(&DAT_14c77e9cc);
    if (cVar1 != '\0') {
      FUN_14251f960(0x12,FUN_1424b78b0);
      if (DAT_14c77e998 == (longlong *)0x0) {
        DAT_14c77e998 = (longlong *)FUN_1424b7610();
      }
      FUN_1425019c0(&DAT_14c77e9cc);
    }
  }
  if (DAT_14c77e998 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001424b7855. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*DAT_14c77e998 + 0x58))();
    return uVar2;
  }
  return 0;
}



// FUNCTION 1424b7860 FUN_1424b7860 body=68 status=ok
// SIG undefined FUN_1424b7860(void)

void FUN_1424b7860(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  puVar2 = DAT_14c77e998;
  if (param_1 != 0) {
    lVar3 = param_1;
    if (DAT_14c77e998 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)*DAT_14c77e998;
      DAT_14c77e998 = (undefined8 *)param_1;
      (*(code *)*puVar1)(puVar2,1);
      lVar3 = (longlong)DAT_14c77e998;
    }
    DAT_14c77e998 = (undefined8 *)lVar3;
    FUN_14251f960(0x12,FUN_1424b78b0);
    return;
  }
  return;
}



// FUNCTION 1424b78b0 FUN_1424b78b0 body=255 status=ok
// SIG undefined FUN_1424b78b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1424b78b0(void)

{
  if (DAT_14c77e998 != (undefined8 *)0x0) {
    (**(code **)*DAT_14c77e998)(DAT_14c77e998,1);
  }
  DAT_14c77e998 = (undefined8 *)0x0;
  LOCK();
  DAT_14c77e9cc = 0;
  UNLOCK();
  if (DAT_14c77e9c0 == '\x01') {
    (*(code *)*DAT_14c77e8f0)(&DAT_14c77e8f0,0);
    (*(code *)*DAT_14c77e850)(&DAT_14c77e850,0);
    DAT_14c77e9c0 = '\0';
    LOCK();
    DAT_14c77e9c4 = 0;
    UNLOCK();
  }
  _DAT_14c77e9b0 = 0;
  uRam000000014c77e9b8 = 0;
  LOCK();
  DAT_14c77ea18 = 0;
  UNLOCK();
  DAT_14c77e9d4 = 0;
  FUN_1424da110(DAT_14c77e9d8);
  DAT_14c77e9d8 = 0;
  LOCK();
  DAT_14c77ea00 = 0;
  UNLOCK();
  DAT_14c77e9e0 = 0;
  FUN_1424da110(DAT_14c77e9e8);
  DAT_14c77e9e8 = 0;
  LOCK();
  DAT_14c77ea08 = 0;
  UNLOCK();
  DAT_14c77e9f0 = 0;
  FUN_1424da110(DAT_14c77e9f8);
  DAT_14c77e9f8 = 0;
  LOCK();
  DAT_14c77ea10 = 0;
  UNLOCK();
  return 1;
}



// FUNCTION 1424b79b0 FUN_1424b79b0 body=590 status=ok
// SIG undefined FUN_1424b79b0(void)

void FUN_1424b79b0(longlong *param_1,double param_2,char param_3,int *param_4,int *param_5,
                  int *param_6)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined1 *local_b0;
  int local_a8;
  int local_a0;
  int *local_98;
  undefined1 local_84 [4];
  undefined4 local_80;
  int local_7c;
  uint local_78;
  undefined1 local_74 [4];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*param_6 < 1) {
    iVar2 = (**(code **)(*param_1 + 0x38))();
    *param_4 = iVar2;
    if (param_3 == '\0') {
      dVar1 = (double)iVar2;
    }
    else {
      dVar1 = -0.0;
    }
    dVar1 = dVar1 + param_2;
    dVar6 = (double)FUN_1424d97b0(dVar1 / 86400000.0);
    local_b8 = local_84;
    local_b0 = local_74;
    FUN_142500f10(dVar6,&local_78,&local_7c,&local_80);
    if (((local_78 & 3) != 0) ||
       ((uVar3 = 0xc, (local_78 * -0x3d70a3d7 + 0x51eb850 >> 2 | local_78 * 0x40000000) < 0x28f5c29
        && (local_78 != ((int)local_78 / 400) * 400)))) {
      uVar3 = 0;
    }
    local_a0 = (int)(char)(&DAT_1499d7ed0)[(ulonglong)uVar3 + (longlong)local_7c];
    local_98 = param_6;
    local_b0 = (undefined1 *)CONCAT71(local_b0._1_7_,local_84[0]);
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,local_80);
    local_a8 = (int)(dVar1 - dVar6 * 86400000.0);
    iVar4 = (**(code **)(*param_1 + 0x20))(param_1,CONCAT71((uint7)(uint3)((uint)local_80 >> 8),1));
    iVar2 = *param_4;
    iVar5 = iVar4 - iVar2;
    *param_5 = iVar5;
    if ((param_3 != '\0') && (iVar4 != iVar2)) {
      dVar1 = dVar1 - (double)iVar5;
      dVar6 = (double)FUN_1424d97b0(dVar1 / 86400000.0);
      local_b8 = local_84;
      local_b0 = local_74;
      FUN_142500f10(dVar6,&local_78,&local_7c,&local_80);
      if (((local_78 & 3) != 0) ||
         ((uVar3 = 0xc,
          (local_78 * -0x3d70a3d7 + 0x51eb850 >> 2 | local_78 * 0x40000000) < 0x28f5c29 &&
          (local_78 != ((int)local_78 / 400) * 400)))) {
        uVar3 = 0;
      }
      local_a0 = (int)(char)(&DAT_1499d7ed0)[(ulonglong)uVar3 + (longlong)local_7c];
      local_98 = param_6;
      local_b0 = (undefined1 *)CONCAT71(local_b0._1_7_,local_84[0]);
      local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,local_80);
      local_a8 = (int)(dVar1 - dVar6 * 86400000.0);
      iVar2 = (**(code **)(*param_1 + 0x20))
                        (param_1,CONCAT71((uint7)(uint3)((uint)local_80 >> 8),1));
      *param_5 = iVar2 - *param_4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_d8);
}



// FUNCTION 1424b7c20 FUN_1424b7c20 body=8 status=ok
// SIG undefined FUN_1424b7c20(void)

undefined * FUN_1424b7c20(void)

{
  return &DAT_14c77e9a0;
}



// FUNCTION 1424b7c30 thunk_FUN_1424b7c40 body=5 status=ok
// SIG undefined thunk_FUN_1424b7c40(void)

undefined8 * thunk_FUN_1424b7c40(undefined8 param_1,longlong param_2,int *param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined **ppuStack_c0;
  undefined2 uStack_b8;
  undefined8 uStack_80;
  longlong lStack_78;
  ulonglong uStack_70;
  longlong lStack_68;
  int iStack_5c;
  undefined8 *puStack_58;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if (0 < *param_4) {
    return (undefined8 *)0x0;
  }
  lVar3 = FUN_1424b98e0(param_1,&iStack_5c,param_4);
  if (0 < *param_4) {
    return (undefined8 *)0x0;
  }
  if (param_2 != 0 || param_3 != (int *)0x0) {
    lStack_68 = FUN_1424da030(0x20);
    if (lStack_68 == 0) goto LAB_1424b7f49;
    uVar4 = FUN_1424edad0(0,"zoneinfo64",param_4);
    uStack_80 = FUN_1424ecc30(uVar4,"Names",uVar4,param_4);
    if (iStack_5c < 1) {
      uStack_70 = 0;
    }
    else {
      iVar8 = 8;
      lVar7 = 0;
      uStack_70 = 0;
      lStack_78 = lVar3;
      do {
        uVar1 = *(undefined4 *)(lVar3 + lVar7 * 4);
        ppuStack_c0 = &PTR_FUN_149e18960;
        uStack_b8 = 2;
        uStack_4c = 0;
        puStack_58 = (undefined8 *)CONCAT44(puStack_58._4_4_,uVar1);
        uVar4 = FUN_1424ebec0(uStack_80,uVar1,&uStack_4c,param_4);
        if (*param_4 < 1) {
          FUN_1424a8f10(&ppuStack_c0,1,uVar4,uStack_4c);
        }
        else {
          FUN_1424a7130(&ppuStack_c0);
        }
        if (0 < *param_4) {
LAB_1424b7e60:
          FUN_140859a90(&ppuStack_c0);
          break;
        }
        if (param_2 == 0) {
LAB_1424b7dc6:
          if (param_3 != (int *)0x0) {
            plVar5 = (longlong *)FUN_1424b97b0(&ppuStack_c0,param_4);
            if (0 < *param_4) {
              FUN_140859a90(&ppuStack_c0);
              lVar3 = lStack_78;
              break;
            }
            iVar2 = (**(code **)(*plVar5 + 0x38))(plVar5);
            (**(code **)*plVar5)(plVar5,1);
            lVar3 = lStack_78;
            if (iVar2 != *param_3) goto LAB_1424b7d18;
          }
          if (iVar8 <= (int)uStack_70) {
            lVar6 = FUN_1424da060(lStack_68,(longlong)iVar8 * 4 + 0x20);
            if (lVar6 == 0) {
              *param_4 = 7;
              goto LAB_1424b7e60;
            }
            iVar8 = iVar8 + 8;
            lStack_68 = lVar6;
          }
          iVar2 = (int)uStack_70;
          uStack_70 = (ulonglong)(iVar2 + 1);
          *(undefined4 *)(lStack_68 + (longlong)iVar2 * 4) = puStack_58._0_4_;
        }
        else {
          FUN_1424b89f0(&ppuStack_c0,&uStack_4c,4,param_4);
          lVar3 = lStack_78;
          if (0 < *param_4) goto LAB_1424b7e60;
          iVar2 = FUN_142503a40(&uStack_4c,param_2);
          lVar3 = lStack_78;
          if (iVar2 == 0) goto LAB_1424b7dc6;
        }
LAB_1424b7d18:
        FUN_140859a90(&ppuStack_c0);
        lVar7 = lVar7 + 1;
      } while (lVar7 < iStack_5c);
    }
    lVar7 = lStack_68;
    if (0 < *param_4) {
      FUN_1424da110(lStack_68);
      lVar7 = 0;
    }
    FUN_1424ea9f0(uStack_80);
    if (0 < *param_4) {
      if (lVar7 == 0) {
        return (undefined8 *)0x0;
      }
      FUN_1424da110(lVar7);
      return (undefined8 *)0x0;
    }
    if (lVar7 != 0) {
      puStack_58 = (undefined8 *)thunk_FUN_1424da030(0x90);
      if (puStack_58 != (undefined8 *)0x0) {
        FUN_14250a770(puStack_58);
        *puStack_58 = icu_64::TZEnumeration::vftable;
        *(undefined4 *)((longlong)puStack_58 + 0x8c) = 0;
        puStack_58[0xf] = lVar7;
        puStack_58[0x10] = lVar7;
        *(int *)(puStack_58 + 0x11) = (int)uStack_70;
        return puStack_58;
      }
      goto LAB_1424b7f49;
    }
  }
  puStack_58 = (undefined8 *)thunk_FUN_1424da030(0x90);
  if (puStack_58 != (undefined8 *)0x0) {
    FUN_14250a770(puStack_58);
    *puStack_58 = icu_64::TZEnumeration::vftable;
    *(undefined4 *)((longlong)puStack_58 + 0x8c) = 0;
    puStack_58[0xf] = lVar3;
    puStack_58[0x10] = 0;
    *(int *)(puStack_58 + 0x11) = iStack_5c;
    return puStack_58;
  }
LAB_1424b7f49:
  *param_4 = 7;
  return (undefined8 *)0x0;
}



// FUNCTION 1424b7c40 FUN_1424b7c40 body=805 status=ok
// SIG undefined FUN_1424b7c40(void)

undefined8 * FUN_1424b7c40(undefined8 param_1,longlong param_2,int *param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined **local_c0;
  undefined2 local_b8;
  undefined8 local_80;
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  int local_5c;
  undefined8 *local_58;
  undefined4 local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (0 < *param_4) {
    return (undefined8 *)0x0;
  }
  lVar3 = FUN_1424b98e0(param_1,&local_5c,param_4);
  if (0 < *param_4) {
    return (undefined8 *)0x0;
  }
  if (param_2 != 0 || param_3 != (int *)0x0) {
    local_68 = FUN_1424da030(0x20);
    if (local_68 == 0) goto LAB_1424b7f49;
    uVar4 = FUN_1424edad0(0,"zoneinfo64",param_4);
    local_80 = FUN_1424ecc30(uVar4,"Names",uVar4,param_4);
    if (local_5c < 1) {
      local_70 = 0;
    }
    else {
      iVar8 = 8;
      lVar7 = 0;
      local_70 = 0;
      local_78 = lVar3;
      do {
        uVar1 = *(undefined4 *)(lVar3 + lVar7 * 4);
        local_c0 = &PTR_FUN_149e18960;
        local_b8 = 2;
        local_4c = 0;
        local_58 = (undefined8 *)CONCAT44(local_58._4_4_,uVar1);
        uVar4 = FUN_1424ebec0(local_80,uVar1,&local_4c,param_4);
        if (*param_4 < 1) {
          FUN_1424a8f10(&local_c0,1,uVar4,local_4c);
        }
        else {
          FUN_1424a7130(&local_c0);
        }
        if (0 < *param_4) {
LAB_1424b7e60:
          FUN_140859a90(&local_c0);
          break;
        }
        if (param_2 == 0) {
LAB_1424b7dc6:
          if (param_3 != (int *)0x0) {
            plVar5 = (longlong *)FUN_1424b97b0(&local_c0,param_4);
            if (0 < *param_4) {
              FUN_140859a90(&local_c0);
              lVar3 = local_78;
              break;
            }
            iVar2 = (**(code **)(*plVar5 + 0x38))(plVar5);
            (**(code **)*plVar5)(plVar5,1);
            lVar3 = local_78;
            if (iVar2 != *param_3) goto LAB_1424b7d18;
          }
          if (iVar8 <= (int)local_70) {
            lVar6 = FUN_1424da060(local_68,(longlong)iVar8 * 4 + 0x20);
            if (lVar6 == 0) {
              *param_4 = 7;
              goto LAB_1424b7e60;
            }
            iVar8 = iVar8 + 8;
            local_68 = lVar6;
          }
          iVar2 = (int)local_70;
          local_70 = (ulonglong)(iVar2 + 1);
          *(undefined4 *)(local_68 + (longlong)iVar2 * 4) = local_58._0_4_;
        }
        else {
          FUN_1424b89f0(&local_c0,&local_4c,4,param_4);
          lVar3 = local_78;
          if (0 < *param_4) goto LAB_1424b7e60;
          iVar2 = FUN_142503a40(&local_4c,param_2);
          lVar3 = local_78;
          if (iVar2 == 0) goto LAB_1424b7dc6;
        }
LAB_1424b7d18:
        FUN_140859a90(&local_c0);
        lVar7 = lVar7 + 1;
      } while (lVar7 < local_5c);
    }
    lVar7 = local_68;
    if (0 < *param_4) {
      FUN_1424da110(local_68);
      lVar7 = 0;
    }
    FUN_1424ea9f0(local_80);
    if (0 < *param_4) {
      if (lVar7 == 0) {
        return (undefined8 *)0x0;
      }
      FUN_1424da110(lVar7);
      return (undefined8 *)0x0;
    }
    if (lVar7 != 0) {
      local_58 = (undefined8 *)thunk_FUN_1424da030(0x90);
      if (local_58 != (undefined8 *)0x0) {
        FUN_14250a770(local_58);
        *local_58 = icu_64::TZEnumeration::vftable;
        *(undefined4 *)((longlong)local_58 + 0x8c) = 0;
        local_58[0xf] = lVar7;
        local_58[0x10] = lVar7;
        *(int *)(local_58 + 0x11) = (int)local_70;
        return local_58;
      }
      goto LAB_1424b7f49;
    }
  }
  local_58 = (undefined8 *)thunk_FUN_1424da030(0x90);
  if (local_58 != (undefined8 *)0x0) {
    FUN_14250a770(local_58);
    *local_58 = icu_64::TZEnumeration::vftable;
    *(undefined4 *)((longlong)local_58 + 0x8c) = 0;
    local_58[0xf] = lVar3;
    local_58[0x10] = 0;
    *(int *)(local_58 + 0x11) = local_5c;
    return local_58;
  }
LAB_1424b7f49:
  *param_4 = 7;
  return (undefined8 *)0x0;
}



// FUNCTION 1424b7f70 Unwind@1424b7f70 body=55 status=ok
// SIG undefined Unwind@1424b7f70(void)

void Unwind_1424b7f70(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 1424b7fb0 Unwind@1424b7fb0 body=55 status=ok
// SIG undefined Unwind@1424b7fb0(void)

void Unwind_1424b7fb0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x90));
  return;
}



// FUNCTION 1424b7ff0 Unwind@1424b7ff0 body=55 status=ok
// SIG undefined Unwind@1424b7ff0(void)

void Unwind_1424b7ff0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x90));
  return;
}



// FUNCTION 1424b8030 Unwind@1424b8030 body=55 status=ok
// SIG undefined Unwind@1424b8030(void)

void Unwind_1424b8030(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 1424b8070 FUN_1424b8070 body=203 status=ok
// SIG undefined FUN_1424b8070(void)

undefined8 * FUN_1424b8070(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  int local_24 [3];
  
  local_24[1] = -2;
  local_24[2] = -1;
  local_24[0] = 0;
  if ((DAT_14c77ea00 == 2) || (cVar3 = FUN_142501800(&DAT_14c77ea00), cVar3 == '\0')) {
    if (0 < DAT_14c77ea04) {
      return (undefined8 *)0x0;
    }
  }
  else {
    FUN_1424b9a50(0,local_24);
    DAT_14c77ea04 = local_24[0];
    FUN_1425019c0(&DAT_14c77ea00);
  }
  uVar2 = DAT_14c77e9d8;
  uVar1 = DAT_14c77e9d4;
  if ((local_24[0] < 1) &&
     (puVar4 = (undefined8 *)thunk_FUN_1424da030(0x90), puVar4 != (undefined8 *)0x0)) {
    FUN_14250a770(puVar4);
    *puVar4 = icu_64::TZEnumeration::vftable;
    *(undefined4 *)((longlong)puVar4 + 0x8c) = 0;
    puVar4[0xf] = uVar2;
    puVar4[0x10] = 0;
    *(undefined4 *)(puVar4 + 0x11) = uVar1;
    return puVar4;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1424b8140 Unwind@1424b8140 body=34 status=ok
// SIG undefined Unwind@1424b8140(void)

void Unwind_1424b8140(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1424b8170 FUN_1424b8170 body=200 status=ok
// SIG undefined FUN_1424b8170(void)

undefined4 FUN_1424b8170(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 local_1c0 [200];
  undefined1 local_f8 [200];
  undefined4 local_30;
  int local_2c [3];
  
  local_2c[1] = -2;
  local_2c[2] = -1;
  local_30 = 0;
  local_2c[0] = 0;
  FUN_1424ea920(local_f8);
  uVar2 = FUN_1424b8270(param_1,local_f8,local_2c);
  if (local_2c[0] < 1) {
    FUN_1424ea920(local_1c0);
    FUN_1424ecc30(local_f8,"links",local_1c0,local_2c);
    FUN_1424eaea0(local_1c0,&local_30,local_2c);
    FUN_1424ea970(local_1c0);
  }
  FUN_1424ea9f0(uVar2);
  uVar1 = local_30;
  FUN_1424ea970(local_f8);
  return uVar1;
}



// FUNCTION 1424b8240 Unwind@1424b8240 body=39 status=ok
// SIG undefined Unwind@1424b8240(void)

void Unwind_1424b8240(undefined8 param_1,longlong param_2)

{
  FUN_1424ea970(param_2 + 0xf0);
  return;
}



// FUNCTION 1424b8270 FUN_1424b8270 body=234 status=ok
// SIG undefined FUN_1424b8270(void)

undefined8 FUN_1424b8270(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_1424edad0(0,"zoneinfo64");
  uVar4 = FUN_1424ecc30(uVar3,"Names",0,param_3);
  iVar1 = FUN_1424b8640(uVar4,param_1,param_3);
  if ((iVar1 == -1) && (*param_3 < 1)) {
    *param_3 = 2;
  }
  else {
    uVar4 = FUN_1424ecc30(uVar3,"Zones",uVar4,param_3);
    FUN_1424ebd50(uVar4,iVar1,param_2,param_3);
  }
  FUN_1424ea9f0(uVar4);
  iVar1 = FUN_1424eaf40(param_2);
  if (iVar1 == 7) {
    uVar2 = FUN_1424eaef0(param_2,param_3);
    uVar4 = FUN_1424ecc30(uVar3,"Zones",0,param_3);
    FUN_1424ebd50(uVar4,uVar2,param_2,param_3);
    FUN_1424ea9f0(uVar4);
  }
  return uVar3;
}



// FUNCTION 1424b8360 FUN_1424b8360 body=404 status=ok
// SIG undefined FUN_1424b8360(void)

undefined8 * FUN_1424b8360(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_1d0 [200];
  undefined1 local_108 [200];
  undefined8 *local_40;
  int local_38;
  int local_34 [3];
  
  local_34[1] = -2;
  local_34[2] = -1;
  *param_1 = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 1) = 2;
  local_34[0] = 0;
  local_40 = param_1;
  FUN_1424ea920(local_1d0);
  uVar2 = FUN_1424b8270(param_2,local_1d0,local_34);
  if (local_34[0] < 1) {
    FUN_1424ea920(local_108);
    FUN_1424ecc30(local_1d0,"links",local_108,local_34);
    lVar3 = FUN_1424eaea0(local_108,&local_38,local_34);
    if ((((int)param_3 < 0) || (0 < local_34[0])) || (local_38 <= (int)param_3)) {
      FUN_1424ea970(local_108);
    }
    else {
      iVar1 = *(int *)(lVar3 + (ulonglong)param_3 * 4);
      FUN_1424ea970(local_108);
      if (-1 < iVar1) {
        uVar4 = FUN_1424ecc30(uVar2,"Names",0,local_34);
        if (local_34[0] < 1) {
          local_38 = 0;
          uVar5 = FUN_1424ebec0(uVar4,iVar1,&local_38,local_34);
          FUN_1424a7060(local_108,1,uVar5,local_38);
          thunk_FUN_1424a7600(local_40,local_108);
          FUN_140859a90(local_108);
        }
        FUN_1424ea9f0(uVar4);
      }
    }
  }
  FUN_1424ea9f0(uVar2);
  FUN_1424ea970(local_1d0);
  return local_40;
}



// FUNCTION 1424b8500 Unwind@1424b8500 body=43 status=ok
// SIG undefined Unwind@1424b8500(void)

void Unwind_1424b8500(undefined8 param_1,longlong param_2)

{
  FUN_1424ea970(param_2 + 0x28);
  return;
}



// FUNCTION 1424b8530 Unwind@1424b8530 body=46 status=ok
// SIG undefined Unwind@1424b8530(void)

void Unwind_1424b8530(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x1b8));
  return;
}



// FUNCTION 1424b8560 Unwind@1424b8560 body=43 status=ok
// SIG undefined Unwind@1424b8560(void)

void Unwind_1424b8560(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xf0);
  return;
}



// FUNCTION 1424b8590 FUN_1424b8590 body=160 status=ok
// SIG undefined FUN_1424b8590(void)

void FUN_1424b8590(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  uVar2 = FUN_1424edad0(0,"zoneinfo64",&local_34);
  uVar3 = FUN_1424ecc30(uVar2,"Names",0,&local_34);
  uVar1 = FUN_1424b8640(uVar3,param_1,&local_34);
  FUN_1424ebec0(uVar3,uVar1,0,&local_34);
  FUN_1424ea9f0(uVar3);
  FUN_1424ea9f0(uVar2);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
}



// FUNCTION 1424b8640 FUN_1424b8640 body=336 status=ok
// SIG undefined FUN_1424b8640(void)

int FUN_1424b8640(undefined8 param_1,longlong param_2,int *param_3)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  undefined **local_90;
  ushort local_88;
  undefined1 local_86 [2];
  uint local_84;
  undefined1 *local_78;
  undefined4 local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_90 = &PTR_FUN_149e18960;
  local_88 = 2;
  iVar3 = FUN_1424eaf70();
  if ((*param_3 < 1) && (0 < iVar3)) {
    iVar9 = 0;
    iVar7 = 0x7fffffff;
    do {
      iVar10 = (iVar3 + iVar9) / 2;
      if ((iVar7 == iVar10) ||
         (uVar4 = FUN_1424ebec0(param_1,iVar10,&local_4c,param_3), 0 < *param_3))
      goto LAB_1424b8784;
      FUN_1424a8f10(&local_90,1,uVar4,local_4c);
      uVar1 = *(ushort *)(param_2 + 8);
      if ((local_88 & 1) == 0) {
        if ((short)uVar1 < 0) {
          iVar7 = *(int *)(param_2 + 0xc);
        }
        else {
          iVar7 = (int)(short)uVar1 >> 5;
        }
        uVar5 = local_84;
        if (-1 < (short)local_88) {
          uVar5 = (int)(short)local_88 >> 5;
        }
        uVar6 = 0;
        if (0 < (int)uVar5) {
          uVar6 = uVar5;
        }
        puVar8 = local_86;
        if ((local_88 & 2) == 0) {
          puVar8 = local_78;
        }
        cVar2 = FUN_1424a7e30(param_2,0,iVar7,puVar8,(int)uVar5 >> 0x1f & uVar5,uVar6);
      }
      else {
        cVar2 = (uVar1 & 1) == 0;
      }
      iVar7 = iVar10;
      if (-1 < cVar2) {
        iVar9 = iVar10;
        iVar7 = iVar3;
      }
      iVar3 = iVar7;
      iVar7 = iVar10;
    } while (cVar2 != '\0');
  }
  else {
LAB_1424b8784:
    iVar10 = -1;
  }
  FUN_140859a90(&local_90);
  return iVar10;
}



// FUNCTION 1424b87b0 Unwind@1424b87b0 body=55 status=ok
// SIG undefined Unwind@1424b87b0(void)

void Unwind_1424b87b0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x38);
  return;
}



// FUNCTION 1424b87f0 FUN_1424b87f0 body=247 status=ok
// SIG undefined FUN_1424b87f0(void)

void FUN_1424b87f0(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  uVar3 = FUN_1424edad0(0,"zoneinfo64",&local_34);
  uVar4 = FUN_1424ecc30(uVar3,"Names",0,&local_34);
  uVar1 = FUN_1424b8640(uVar4,param_1,&local_34);
  FUN_1424ebec0(uVar4,uVar1,0,&local_34);
  FUN_1424ecc30(uVar3,"Zones",uVar3,&local_34);
  FUN_1424ebd50(uVar3,uVar1,uVar3,&local_34);
  if ((local_34 < 1) && (iVar2 = FUN_1424eaf40(uVar3), iVar2 == 7)) {
    uVar1 = FUN_1424eaef0(uVar3,&local_34);
    FUN_1424ebec0(uVar4,uVar1,0,&local_34);
  }
  FUN_1424ea9f0(uVar4);
  FUN_1424ea9f0(uVar3);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
}



// FUNCTION 1424b8900 FUN_1424b8900 body=54 status=ok
// SIG undefined FUN_1424b8900(void)

void FUN_1424b8900(undefined8 param_1)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_1424b8940(param_1,&local_14);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 1424b8940 FUN_1424b8940 body=170 status=ok
// SIG undefined FUN_1424b8940(void)

undefined8 FUN_1424b8940(undefined8 param_1,int *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*param_2 < 1) {
    uVar2 = FUN_1424edad0(0,"zoneinfo64",param_2);
    uVar3 = FUN_1424ecc30(uVar2,"Names",0,param_2);
    uVar1 = FUN_1424b8640(uVar3,param_1,param_2);
    FUN_1424ecc30(uVar2,"Regions",uVar3,param_2);
    uVar4 = FUN_1424ebec0(uVar3,uVar1,0,param_2);
    if (0 < *param_2) {
      uVar4 = 0;
    }
    FUN_1424ea9f0(uVar3);
    FUN_1424ea9f0(uVar2);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 1424b89f0 FUN_1424b89f0 body=242 status=ok
// SIG undefined FUN_1424b89f0(void)

ulonglong FUN_1424b89f0(longlong param_1,undefined1 *param_2,int param_3,int *param_4)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  wchar_t *_Str;
  size_t sVar4;
  int iVar5;
  undefined4 local_3c;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  *param_2 = 0;
  if (*param_4 < 1) {
    if (*(short *)(param_1 + 8) < 0) {
      iVar5 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar5 = (int)*(short *)(param_1 + 8) >> 5;
    }
    cVar1 = FUN_1424a7e30(param_1,0,iVar5,L"Etc/Unknown",0,0xb);
    if (cVar1 != '\0') {
      local_3c = 0;
      _Str = (wchar_t *)FUN_1424b8940(param_1,&local_3c);
      if (_Str != (wchar_t *)0x0) {
        sVar4 = wcslen(_Str);
        uVar2 = FUN_142501310(sVar4 & 0xffffffff,param_3);
        FUN_14250ae10(_Str,param_2,uVar2);
        if (param_3 < (int)sVar4) {
          *param_4 = 0xf;
          return sVar4 & 0xffffffff;
        }
        uVar3 = FUN_142504d00(param_2,param_3,sVar4 & 0xffffffff,param_4);
        return (ulonglong)uVar3;
      }
    }
    *param_4 = 1;
  }
  return 0;
}



// FUNCTION 1424b8af0 Unwind@1424b8af0 body=45 status=ok
// SIG undefined Unwind@1424b8af0(void)

void Unwind_1424b8af0(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x38) = L"Etc/Unknown";
  return;
}



// FUNCTION 1424b8b20 FUN_1424b8b20 body=27 status=ok
// SIG undefined FUN_1424b8b20(void)

undefined8 FUN_1424b8b20(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x40))();
  uVar2 = 3600000;
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1424b8b40 FUN_1424b8b40 body=1116 status=ok
// SIG undefined FUN_1424b8b40(void)

ulonglong FUN_1424b8b40(longlong param_1,undefined4 *param_2,int *param_3,int *param_4,int *param_5)

{
  ushort uVar1;
  short sVar2;
  char cVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 local_190 [8];
  int local_188;
  undefined1 local_b0 [72];
  undefined *local_68;
  int local_5c;
  undefined **local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  FUN_1424a6be0(local_b0,param_1);
  uVar10 = 0;
  FUN_1412ae150(local_190,&DAT_149e02088,0,0,0);
  FUN_1424d65b0(local_b0,local_190);
  FUN_1414b3f60(local_190);
  if (*(short *)(param_1 + 8) < 0) {
    if (3 < *(int *)(param_1 + 0xc)) {
LAB_1424b8bd6:
      cVar3 = FUN_1424a7e30(local_b0,0,3,&DAT_1499399b8,uVar10 & 0xffffffff00000000,3);
      local_68 = &DAT_1499399b8;
      if (cVar3 == '\0') {
        local_58 = icu_64::ParsePosition::vftable;
        local_50 = 0xffffffff00000003;
        *param_2 = 1;
        *param_3 = 0;
        *param_4 = 0;
        *param_5 = 0;
        uVar1 = *(ushort *)(param_1 + 8);
        if ((short)uVar1 < 0) {
          if (*(uint *)(param_1 + 0xc) < 4) goto LAB_1424b8ce0;
LAB_1424b8c94:
          lVar9 = param_1 + 10;
          lVar8 = lVar9;
          if ((uVar1 & 2) == 0) {
            lVar8 = *(longlong *)(param_1 + 0x18);
          }
          if (*(short *)(lVar8 + 6) != 0x2b) {
            if (*(short *)(lVar8 + 6) != 0x2d) goto LAB_1424b8ce0;
            *param_2 = 0xffffffff;
          }
          local_50 = 0xffffffff00000004;
          local_5c = 0;
          plVar4 = (longlong *)FUN_1424bb7a0(&local_5c);
          if (0 < local_5c) goto LAB_1424b8ce0;
          (**(code **)(*plVar4 + 0xb0))(plVar4,1);
          iVar5 = (uint)local_50;
          FUN_14252c960(local_190,0xfffe7961);
          (**(code **)(*plVar4 + 0xa0))(plVar4,param_1,local_190,&local_58);
          iVar5 = (uint)local_50 - iVar5;
          if (iVar5 == 0) {
LAB_1424b8d42:
            (**(code **)*plVar4)(plVar4,1);
            uVar10 = 0;
          }
          else {
            *param_3 = local_188;
            sVar2 = *(short *)(param_1 + 8);
            if (sVar2 < 0) {
              uVar6 = *(uint *)(param_1 + 0xc);
            }
            else {
              uVar6 = (int)sVar2 >> 5;
            }
            if ((int)uVar6 <= (int)(uint)local_50) {
              if (iVar5 - 1U < 6) {
                if (iVar5 - 5U < 2) {
                  *param_5 = local_188 % 100;
                  *param_4 = (*param_3 / 100) % 100;
                  iVar5 = *param_3;
                  iVar7 = iVar5 / 10000 + (iVar5 >> 0x1f);
                }
                else {
                  if (1 < iVar5 - 3U) goto LAB_1424b8ed2;
                  *param_4 = local_188 % 100;
                  iVar5 = *param_3;
                  iVar7 = iVar5 / 100 + (iVar5 >> 0x1f);
                }
                *param_3 = iVar7 - (iVar5 >> 0x1f);
                goto LAB_1424b8ed2;
              }
              goto LAB_1424b8d42;
            }
            if ((2 < iVar5) || (uVar6 <= (uint)local_50)) goto LAB_1424b8d42;
            lVar8 = lVar9;
            if (((int)sVar2 & 2U) == 0) {
              lVar8 = *(longlong *)(param_1 + 0x18);
            }
            if (*(short *)(lVar8 + (longlong)(int)(uint)local_50 * 2) != 0x3a) goto LAB_1424b8d42;
            iVar5 = (uint)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,iVar5);
            FUN_14252d370(local_190,0xfffe7961);
            (**(code **)(*plVar4 + 0xa0))(plVar4,param_1,local_190,&local_58);
            if ((uint)local_50 - iVar5 != 2) goto LAB_1424b8d42;
            *param_4 = local_188;
            sVar2 = *(short *)(param_1 + 8);
            if (sVar2 < 0) {
              uVar6 = *(uint *)(param_1 + 0xc);
            }
            else {
              uVar6 = (int)sVar2 >> 5;
            }
            if ((int)(uint)local_50 < (int)uVar6) {
              if ((uint)local_50 < uVar6) {
                if (((int)sVar2 & 2U) == 0) {
                  lVar9 = *(longlong *)(param_1 + 0x18);
                }
                if (*(short *)(lVar9 + (longlong)(int)(uint)local_50 * 2) == 0x3a) {
                  iVar5 = (uint)local_50 + 1;
                  local_50 = CONCAT44(local_50._4_4_,iVar5);
                  FUN_14252d370(local_190,0xfffe7961);
                  (**(code **)(*plVar4 + 0xa0))(plVar4,param_1,local_190,&local_58);
                  if (*(short *)(param_1 + 8) < 0) {
                    iVar7 = *(int *)(param_1 + 0xc);
                  }
                  else {
                    iVar7 = (int)*(short *)(param_1 + 8) >> 5;
                  }
                  if (((uint)local_50 == iVar7) && ((uint)local_50 - iVar5 == 2)) {
                    *param_5 = local_188;
                    goto LAB_1424b8ed2;
                  }
                }
              }
              goto LAB_1424b8d42;
            }
LAB_1424b8ed2:
            (**(code **)*plVar4)(plVar4,1);
            uVar10 = CONCAT71((int7)((ulonglong)param_4 >> 8),
                              *param_5 < 0x3c && (*param_4 < 0x3c && *param_3 < 0x18));
          }
          FUN_14252d110(local_190);
        }
        else {
          if (3 < (ushort)((short)uVar1 >> 5)) goto LAB_1424b8c94;
LAB_1424b8ce0:
          uVar10 = 0;
        }
        thunk_FUN_1424b70d0(&local_58);
        goto LAB_1424b8c15;
      }
    }
  }
  else if (3 < *(short *)(param_1 + 8) >> 5) goto LAB_1424b8bd6;
  uVar10 = 0;
LAB_1424b8c15:
  FUN_140859a90(local_b0);
  return uVar10 & 0xffffffff;
}



// FUNCTION 1424b8fa0 Unwind@1424b8fa0 body=55 status=ok
// SIG undefined Unwind@1424b8fa0(void)

void Unwind_1424b8fa0(undefined8 param_1,longlong param_2)

{
  FUN_14252d110(param_2 + 0x38);
  return;
}



// FUNCTION 1424b8fe0 Unwind@1424b8fe0 body=58 status=ok
// SIG undefined Unwind@1424b8fe0(void)

void Unwind_1424b8fe0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x170);
  return;
}



// FUNCTION 1424b9020 Unwind@1424b9020 body=59 status=ok
// SIG undefined Unwind@1424b9020(void)

void Unwind_1424b9020(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x158) = &DAT_1499399b8;
  return;
}



// FUNCTION 1424b9060 Unwind@1424b9060 body=55 status=ok
// SIG undefined Unwind@1424b9060(void)

void Unwind_1424b9060(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x38);
  return;
}



// FUNCTION 1424b90a0 Unwind@1424b90a0 body=58 status=ok
// SIG undefined Unwind@1424b90a0(void)

void Unwind_1424b90a0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x118);
  return;
}



// FUNCTION 1424b90e0 FUN_1424b90e0 body=607 status=ok
// SIG undefined FUN_1424b90e0(void)

void FUN_1424b90e0(uint param_1,uint param_2,uint param_3,char param_4,longlong param_5)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  short local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1424a8e40(param_5);
  if (*(short *)(param_5 + 8) < 0) {
    iVar1 = *(int *)(param_5 + 0xc);
  }
  else {
    iVar1 = (int)*(short *)(param_5 + 8) >> 5;
  }
  local_40 = 3;
  local_48 = 0;
  FUN_1424a9130(param_5,0,iVar1,&DAT_1499399b8);
  if ((param_2 != 0 || param_1 != 0) || param_3 != 0) {
    if (param_4 == '\0') {
      local_32 = 0x2b;
    }
    else {
      local_32 = 0x2d;
    }
    FUN_1424a6cf0(param_5,&local_32,0,1);
    if ((int)param_1 < 10) {
      local_32 = 0x30;
    }
    else {
      local_32 = (short)(param_1 / 10) + 0x30;
    }
    FUN_1424a6cf0(param_5,&local_32,0,1);
    local_32 = (short)((int)param_1 / 10) * -10 + (short)param_1 + 0x30;
    FUN_1424a6cf0(param_5,&local_32,0,1);
    local_32 = 0x3a;
    FUN_1424a6cf0(param_5,&local_32,0,1);
    if ((int)param_2 < 10) {
      local_32 = 0x30;
    }
    else {
      local_32 = (short)((ulonglong)param_2 / 10) + 0x30;
    }
    FUN_1424a6cf0(param_5,&local_32,0,1);
    local_32 = (short)((int)param_2 / 10) * -10 + (short)param_2 + 0x30;
    FUN_1424a6cf0(param_5,&local_32,0,1);
    if (param_3 != 0) {
      local_32 = 0x3a;
      FUN_1424a6cf0(param_5,&local_32,0,1);
      if ((int)param_3 < 10) {
        local_32 = 0x30;
      }
      else {
        local_32 = (short)((ulonglong)param_3 / 10) + 0x30;
      }
      FUN_1424a6cf0(param_5,&local_32,0,1);
      local_32 = (short)((int)param_3 / 10) * -10 + (short)param_3 + 0x30;
      FUN_1424a6cf0(param_5,&local_32,0,1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 1424b9350 FUN_1424b9350 body=76 status=ok
// SIG undefined FUN_1424b9350(void)

void FUN_1424b9350(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_1424a8e40();
  if (*(short *)(param_1 + 8) < 0) {
    iVar1 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar1 = (int)*(short *)(param_1 + 8) >> 5;
  }
  FUN_1424a9130(param_1,0,iVar1,param_2,0,param_3);
  return;
}



// FUNCTION 1424b93a0 FUN_1424b93a0 body=71 status=ok
// SIG undefined FUN_1424b93a0(void)

bool FUN_1424b93a0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar3 = (**(code **)(*param_1 + 0x38))();
  iVar4 = (**(code **)(*param_2 + 0x38))(param_2);
  if (iVar3 == iVar4) {
    cVar1 = (**(code **)(*param_1 + 0x40))(param_1);
    cVar2 = (**(code **)(*param_2 + 0x40))(param_2);
    bVar5 = cVar1 == cVar2;
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}



// FUNCTION 1424b93f0 FUN_1424b93f0 body=49 status=ok
// SIG undefined FUN_1424b93f0(void)

void FUN_1424b93f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1424b9430(param_1,param_2,&local_11,param_3);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 1424b9430 FUN_1424b9430 body=314 status=ok
// SIG undefined FUN_1424b9430(void)

longlong FUN_1424b9430(longlong param_1,longlong param_2,undefined1 *param_3,int *param_4)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  ulonglong in_stack_ffffffffffffff98;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  uVar2 = 2;
  if ((*(ushort *)(param_2 + 8) & 1) == 0) {
    uVar2 = *(ushort *)(param_2 + 8) & 0x1f;
  }
  *(ushort *)(param_2 + 8) = uVar2;
  *param_3 = 0;
  if (*param_4 < 1) {
    if (*(short *)(param_1 + 8) < 0) {
      iVar3 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar3 = (int)*(short *)(param_1 + 8) >> 5;
    }
    cVar1 = FUN_1424a7e30(param_1,0,iVar3,L"Etc/Unknown",
                          in_stack_ffffffffffffff98 & 0xffffffff00000000,0xb);
    if (cVar1 == '\0') {
      thunk_FUN_1424a7600(param_2,param_1);
      *param_3 = 0;
    }
    else {
      FUN_14252a770(param_1,param_2,param_4);
      if (*param_4 < 1) {
        *param_3 = 1;
      }
      else {
        *param_4 = 0;
        uVar2 = 2;
        if ((*(ushort *)(param_2 + 8) & 1) == 0) {
          uVar2 = *(ushort *)(param_2 + 8) & 0x1f;
        }
        *(ushort *)(param_2 + 8) = uVar2;
        if (*param_4 < 1) {
          cVar1 = FUN_1424b8b40(param_1,&local_40,&local_3c,&local_38,&local_34);
          if (cVar1 == '\0') {
            *param_4 = 1;
          }
          else {
            FUN_1424b90e0(local_3c,local_38,local_34,local_40 >> 0x1f,param_2);
          }
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 1424b9570 Unwind@1424b9570 body=41 status=ok
// SIG undefined Unwind@1424b9570(void)

void Unwind_1424b9570(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x38) = L"Etc/Unknown";
  return;
}



// FUNCTION 1424b95a0 FUN_1424b95a0 body=2 status=ok
// SIG undefined FUN_1424b95a0(void)

void FUN_1424b95a0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1424b95b0 FUN_1424b95b0 body=68 status=ok
// SIG undefined FUN_1424b95b0(void)

undefined8 * FUN_1424b95b0(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::TZEnumeration::vftable;
  if (param_1[0x10] != 0) {
    FUN_1424da110();
  }
  FUN_14250a7a0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1424b9600 FUN_1424b9600 body=260 status=ok
// SIG undefined FUN_1424b9600(void)

undefined8 * FUN_1424b9600(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Dst;
  
  puVar2 = (undefined8 *)thunk_FUN_1424da030(0x90);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_14250a770(puVar2);
    *puVar2 = icu_64::TZEnumeration::vftable;
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    if (*(longlong *)(param_1 + 0x80) == 0) {
      puVar2[0xf] = *(undefined8 *)(param_1 + 0x78);
      puVar2[0x10] = 0;
      *(undefined4 *)(puVar2 + 0x11) = *(undefined4 *)(param_1 + 0x88);
      *(undefined4 *)((longlong)puVar2 + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
    }
    else {
      _Dst = (void *)FUN_1424da030((longlong)*(int *)(param_1 + 0x88) << 2);
      puVar2[0x10] = _Dst;
      if (_Dst == (void *)0x0) {
        puVar2[0x11] = 0;
        puVar2[0xf] = 0;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x88);
        *(int *)(puVar2 + 0x11) = iVar1;
        memcpy(_Dst,*(void **)(param_1 + 0x80),(longlong)iVar1 << 2);
        *(undefined4 *)((longlong)puVar2 + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
        puVar2[0xf] = puVar2[0x10];
      }
    }
  }
  return puVar2;
}



// FUNCTION 1424b9710 Unwind@1424b9710 body=34 status=ok
// SIG undefined Unwind@1424b9710(void)

void Unwind_1424b9710(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1424b9740 FUN_1424b9740 body=14 status=ok
// SIG undefined FUN_1424b9740(void)

undefined4 FUN_1424b9740(longlong param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*param_2 < 1) {
    uVar1 = *(undefined4 *)(param_1 + 0x88);
  }
  return uVar1;
}



// FUNCTION 1424b9750 FUN_1424b9750 body=74 status=ok
// SIG undefined FUN_1424b9750(void)

longlong FUN_1424b9750(longlong param_1,int *param_2)

{
  if (((*param_2 < 1) && (*(longlong *)(param_1 + 0x78) != 0)) &&
     (*(int *)(param_1 + 0x8c) < *(int *)(param_1 + 0x88))) {
    FUN_1424b9e90(param_1,*(undefined4 *)
                           (*(longlong *)(param_1 + 0x78) + (longlong)*(int *)(param_1 + 0x8c) * 4),
                  param_2);
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
    param_1 = param_1 + 8;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



// FUNCTION 1424b97a0 FUN_1424b97a0 body=11 status=ok
// SIG undefined FUN_1424b97a0(void)

void FUN_1424b97a0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x8c) = 0;
  return;
}



// FUNCTION 1424b97b0 FUN_1424b97b0 body=197 status=ok
// SIG undefined FUN_1424b97b0(void)

undefined8 * FUN_1424b97b0(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_f8 [200];
  undefined8 *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (0 < *param_2) {
    return (undefined8 *)0x0;
  }
  FUN_1424ea920(local_f8);
  uVar1 = FUN_1424b8270(param_1,local_f8,param_2);
  if (*param_2 < 1) {
    puVar2 = (undefined8 *)thunk_FUN_1424da030(0xe0);
    if (puVar2 != (undefined8 *)0x0) {
      local_30 = puVar2;
      FUN_14252d650(puVar2,uVar1,local_f8,param_1,param_2);
      puVar2 = local_30;
      goto LAB_1424b9834;
    }
    *param_2 = 7;
  }
  puVar2 = (undefined8 *)0x0;
LAB_1424b9834:
  FUN_1424ea9f0(uVar1);
  if (0 < *param_2) {
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    puVar2 = (undefined8 *)0x0;
  }
  FUN_1424ea970(local_f8);
  return puVar2;
}



// FUNCTION 1424b9880 Unwind@1424b9880 body=39 status=ok
// SIG undefined Unwind@1424b9880(void)

void Unwind_1424b9880(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xf8));
  return;
}



// FUNCTION 1424b98b0 Unwind@1424b98b0 body=39 status=ok
// SIG undefined Unwind@1424b98b0(void)

void Unwind_1424b98b0(undefined8 param_1,longlong param_2)

{
  FUN_1424ea970(param_2 + 0x30);
  return;
}



// FUNCTION 1424b98e0 FUN_1424b98e0 body=355 status=ok
// SIG undefined FUN_1424b98e0(void)

undefined8 FUN_1424b98e0(int param_1,undefined4 *param_2,int *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  *param_2 = 0;
  if (*param_3 < 1) {
    if (param_1 == 2) {
      if ((DAT_14c77ea10 == 2) || (cVar1 = FUN_142501800(&DAT_14c77ea10), cVar1 == '\0')) {
        uVar2 = DAT_14c77e9f8;
        uVar3 = DAT_14c77e9f0;
        if (0 < DAT_14c77ea14) {
          *param_3 = DAT_14c77ea14;
          uVar2 = DAT_14c77e9f8;
          uVar3 = DAT_14c77e9f0;
        }
      }
      else {
        FUN_1424b9a50(2,param_3);
        DAT_14c77ea14 = *param_3;
        FUN_1425019c0(&DAT_14c77ea10);
        uVar2 = DAT_14c77e9f8;
        uVar3 = DAT_14c77e9f0;
      }
    }
    else if (param_1 == 1) {
      if ((DAT_14c77ea08 == 2) || (cVar1 = FUN_142501800(&DAT_14c77ea08), cVar1 == '\0')) {
        uVar2 = DAT_14c77e9e8;
        uVar3 = DAT_14c77e9e0;
        if (0 < DAT_14c77ea0c) {
          *param_3 = DAT_14c77ea0c;
          uVar2 = DAT_14c77e9e8;
          uVar3 = DAT_14c77e9e0;
        }
      }
      else {
        FUN_1424b9a50(1,param_3);
        DAT_14c77ea0c = *param_3;
        FUN_1425019c0(&DAT_14c77ea08);
        uVar2 = DAT_14c77e9e8;
        uVar3 = DAT_14c77e9e0;
      }
    }
    else if (param_1 == 0) {
      if ((DAT_14c77ea00 == 2) || (cVar1 = FUN_142501800(&DAT_14c77ea00), cVar1 == '\0')) {
        uVar2 = DAT_14c77e9d8;
        uVar3 = DAT_14c77e9d4;
        if (0 < DAT_14c77ea04) {
          *param_3 = DAT_14c77ea04;
          uVar2 = DAT_14c77e9d8;
          uVar3 = DAT_14c77e9d4;
        }
      }
      else {
        FUN_1424b9a50(0,param_3);
        DAT_14c77ea04 = *param_3;
        FUN_1425019c0(&DAT_14c77ea00);
        uVar2 = DAT_14c77e9d8;
        uVar3 = DAT_14c77e9d4;
      }
    }
    else {
      *param_3 = 1;
      uVar2 = 0;
      uVar3 = 0;
    }
    *param_2 = uVar3;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1424b9a50 FUN_1424b9a50 body=747 status=ok
// SIG undefined FUN_1424b9a50(void)

void FUN_1424b9a50(uint param_1,int *param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined **local_f0;
  ushort local_e8;
  int local_e4;
  undefined **local_b0;
  ushort local_a8;
  int local_a4;
  wchar_t *local_68;
  longlong local_60;
  ulonglong local_58;
  uint local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  FUN_14251f960(0x12,FUN_1424b78b0);
  uVar7 = FUN_1424edad0(0,"zoneinfo64",param_2);
  uVar7 = FUN_1424ecc30(uVar7,"Names",uVar7,param_2);
  iVar5 = DAT_14c77e9e0;
  lVar9 = DAT_14c77e9e8;
  iVar11 = DAT_14c77e9f0;
  lVar3 = DAT_14c77e9f8;
  if (*param_2 < 1) {
    iVar5 = FUN_1424eaf70(uVar7);
    lVar8 = FUN_1424da030((longlong)iVar5 << 2);
    if (lVar8 == 0) {
      *param_2 = 7;
      iVar5 = DAT_14c77e9e0;
      lVar9 = DAT_14c77e9e8;
      iVar11 = DAT_14c77e9f0;
      lVar3 = DAT_14c77e9f8;
    }
    else {
      local_4c = param_1 - 1;
      iVar12 = 0;
      local_60 = lVar8;
      local_58 = (ulonglong)param_1;
      for (iVar11 = 0; iVar11 < iVar5; iVar11 = iVar11 + 1) {
        local_f0 = &PTR_FUN_149e18960;
        local_e8 = 2;
        local_b0 = (undefined **)((ulonglong)local_b0 & 0xffffffff00000000);
        uVar10 = FUN_1424ebec0(uVar7,iVar11,&local_b0,param_2);
        if (*param_2 < 1) {
          FUN_1424a8f10(&local_f0,1,uVar10,(ulonglong)local_b0 & 0xffffffff);
        }
        else {
          FUN_1424a7130(&local_f0);
        }
        if (0 < *param_2) {
LAB_1424b9ce1:
          FUN_140859a90(&local_f0);
          break;
        }
        iVar6 = local_e4;
        if (-1 < (short)local_e8) {
          iVar6 = (int)(short)local_e8 >> 5;
        }
        cVar4 = FUN_1424a7e30(&local_f0,0,iVar6,L"Etc/Unknown",0,0xb);
        local_68 = L"Etc/Unknown";
        if (cVar4 != '\0') {
          if (local_4c < 2) {
            local_b0 = &PTR_FUN_149e18960;
            local_a8 = 2;
            FUN_14252a770(&local_f0,&local_b0,param_2);
            if (0 < *param_2) {
              FUN_140859a90(&local_b0);
              goto LAB_1424b9ce1;
            }
            if ((local_a8 & 1) == 0) {
              iVar6 = local_a4;
              if (-1 < (short)local_a8) {
                iVar6 = (int)(short)local_a8 >> 5;
              }
              iVar1 = local_e4;
              if (-1 < (short)local_e8) {
                iVar1 = (int)(short)local_e8 >> 5;
              }
              if (((local_e8 & 1) != 0) || (iVar6 != iVar1)) {
                FUN_140859a90(&local_b0);
                goto LAB_1424b9b2a;
              }
              cVar4 = FUN_1412ae090(&local_b0,&local_f0);
              bVar13 = cVar4 != '\0';
            }
            else {
              bVar13 = (bool)((byte)local_e8 & 1);
            }
            FUN_140859a90(&local_b0);
            lVar8 = local_60;
            if (bVar13 == false) goto LAB_1424b9b2a;
            if ((int)local_58 == 2) {
              uVar10 = FUN_1424b8940(&local_f0,param_2);
              if (0 < *param_2) goto LAB_1424b9ce1;
              iVar6 = FUN_142504390(uVar10,&DAT_1499399c0);
              if (iVar6 == 0) goto LAB_1424b9b2a;
            }
          }
          lVar9 = (longlong)iVar12;
          iVar12 = iVar12 + 1;
          *(int *)(lVar8 + lVar9 * 4) = iVar11;
        }
LAB_1424b9b2a:
        FUN_140859a90(&local_f0);
      }
      uVar2 = local_58;
      iVar5 = DAT_14c77e9e0;
      lVar9 = DAT_14c77e9e8;
      iVar11 = DAT_14c77e9f0;
      lVar3 = DAT_14c77e9f8;
      if (*param_2 < 1) {
        lVar9 = FUN_1424da060(lVar8,(longlong)iVar12 << 2);
        if (lVar9 != 0) {
          lVar8 = lVar9;
        }
        iVar6 = (int)uVar2;
        iVar5 = DAT_14c77e9e0;
        lVar9 = DAT_14c77e9e8;
        iVar11 = iVar12;
        lVar3 = lVar8;
        if (((iVar6 != 2) &&
            (iVar5 = iVar12, lVar9 = lVar8, iVar11 = DAT_14c77e9f0, lVar3 = DAT_14c77e9f8,
            iVar6 != 1)) && (iVar5 = DAT_14c77e9e0, lVar9 = DAT_14c77e9e8, iVar6 == 0)) {
          DAT_14c77e9d4 = iVar12;
          DAT_14c77e9d8 = lVar8;
        }
      }
    }
  }
  DAT_14c77e9f8 = lVar3;
  DAT_14c77e9f0 = iVar11;
  DAT_14c77e9e8 = lVar9;
  DAT_14c77e9e0 = iVar5;
  FUN_1424ea9f0(uVar7);
  return;
}



// FUNCTION 1424b9d60 Unwind@1424b9d60 body=55 status=ok
// SIG undefined Unwind@1424b9d60(void)

void Unwind_1424b9d60(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x38);
  return;
}



// FUNCTION 1424b9da0 Unwind@1424b9da0 body=55 status=ok
// SIG undefined Unwind@1424b9da0(void)

void Unwind_1424b9da0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x38);
  return;
}



// FUNCTION 1424b9de0 Unwind@1424b9de0 body=56 status=ok
// SIG undefined Unwind@1424b9de0(void)

void Unwind_1424b9de0(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0xb8) = L"Etc/Unknown";
  return;
}



// FUNCTION 1424b9e20 Unwind@1424b9e20 body=55 status=ok
// SIG undefined Unwind@1424b9e20(void)

void Unwind_1424b9e20(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x78);
  return;
}



// FUNCTION 1424b9e60 FUN_1424b9e60 body=38 status=ok
// SIG undefined FUN_1424b9e60(void)

undefined8 FUN_1424b9e60(undefined8 param_1,int param_2)

{
  thunk_FUN_1424b70d0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1424b9e90 FUN_1424b9e90 body=225 status=ok
// SIG undefined FUN_1424b9e90(void)

bool FUN_1424b9e90(longlong param_1,undefined4 param_2,int *param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_78 [68];
  undefined4 local_34;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_34 = 0;
  uVar2 = FUN_1424edad0(0,"zoneinfo64");
  uVar2 = FUN_1424ecc30(uVar2,"Names",uVar2,param_3);
  uVar3 = FUN_1424ebec0(uVar2,param_2,&local_34,param_3);
  if (*param_3 < 1) {
    FUN_1424a7060(local_78,1,uVar3,local_34);
    thunk_FUN_1424a7600(param_1 + 8,local_78);
    FUN_140859a90(local_78);
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x10);
    if ((uVar1 & 1) == 0) {
      if ((short)uVar1 < 0) {
        if (*(int *)(param_1 + 0x14) == 0) goto LAB_1424b9f58;
      }
      else if ((short)uVar1 >> 5 == 0) goto LAB_1424b9f58;
      *(ushort *)(param_1 + 0x10) = uVar1 & 0x1f;
    }
    else {
      FUN_1424a8e40(param_1 + 8);
    }
  }
LAB_1424b9f58:
  FUN_1424ea9f0(uVar2);
  return *param_3 < 1;
}



// FUNCTION 1424b9f80 Unwind@1424b9f80 body=40 status=ok
// SIG undefined Unwind@1424b9f80(void)

void Unwind_1424b9f80(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 1424b9fb0 FUN_1424b9fb0 body=718 status=ok
// SIG undefined FUN_1424b9fb0(void)

undefined8 * FUN_1424b9fb0(longlong param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 local_338 [200];
  undefined1 local_270 [200];
  undefined1 local_1a8 [264];
  longlong local_a0;
  undefined4 local_98;
  undefined2 local_94;
  undefined4 local_68;
  longlong local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined4 local_48;
  uint local_44 [3];
  
  local_44[1] = 0xfffffffe;
  local_44[2] = 0xffffffff;
  local_48 = 0;
  local_a0 = (longlong)&local_94 + 1;
  local_98 = 0x28;
  local_94 = 0;
  local_68 = 0;
  if (*param_3 < 1) {
    puVar3 = local_338;
    FUN_1424ea8d0(puVar3);
    puVar4 = local_270;
    FUN_1424ea8d0(puVar4);
    uVar1 = FUN_1424edaa0("icudt64l-brkitr",*(undefined8 *)(param_1 + 0x28),param_3);
    if (*param_3 < 1) {
      puVar3 = (undefined1 *)FUN_1424ec1c0(uVar1,"boundaries",local_338,param_3);
      puVar4 = (undefined1 *)FUN_1424ec1c0(puVar3,param_2,local_270,param_3);
      lVar5 = FUN_1424eae00(puVar4,local_44,param_3);
      if (local_44[0] < 0x100) {
        if ((*param_3 < 1) && (lVar5 != 0)) {
          uVar2 = FUN_1424ed080(puVar4,param_3);
          FUN_142503520(&local_a0,uVar2,0xffffffff,param_3);
          lVar8 = FUN_142503f80(lVar5,0x2e);
          if (lVar8 == 0) {
            lVar5 = 0;
          }
          else {
            uVar9 = (ulonglong)(lVar8 - lVar5) >> 1;
            FUN_14250ae10(lVar8 + 2,&local_48,4);
            FUN_14250ae10(lVar5,local_1a8,uVar9 & 0xffffffff);
            lVar5 = (longlong)(int)uVar9;
          }
          local_1a8[lVar5] = 0;
        }
      }
      else {
        local_44[0] = 0;
        if (*param_3 < 1) {
          *param_3 = 0xf;
        }
      }
    }
    FUN_1424ea9f0(puVar3);
    FUN_1424ea9f0(puVar4);
    uVar2 = FUN_1424e4780("icudt64l-brkitr",&local_48,local_1a8,param_3);
    if (*param_3 < 1) {
      puVar6 = (undefined8 *)thunk_FUN_1424da030(0x280);
      if (puVar6 != (undefined8 *)0x0) {
        local_50 = puVar6;
        FUN_1425305c0(puVar6,uVar2,param_3);
        puVar6 = local_50;
        lVar5 = local_a0;
        if (*param_3 < 1) {
          local_58 = local_50 + 1;
          local_60 = (longlong)local_50 + 0xa5;
          uVar7 = FUN_1424ed0b0(uVar1,1,param_3);
          FUN_1425321b0(&local_60,uVar7,lVar5);
        }
      }
      FUN_1424ea9f0(uVar1);
      if ((puVar6 == (undefined8 *)0x0) || (*param_3 < 1)) {
        if (puVar6 != (undefined8 *)0x0) goto LAB_1424ba1a2;
        FUN_142532330(uVar2);
        if (*param_3 < 1) {
          *param_3 = 7;
        }
      }
      else {
        (**(code **)*puVar6)(puVar6,1);
      }
    }
    else {
      FUN_1424ea9f0(uVar1);
    }
  }
  puVar6 = (undefined8 *)0x0;
LAB_1424ba1a2:
  if ((char)local_94 != '\0') {
    FUN_1424da110(local_a0);
  }
  return puVar6;
}



// FUNCTION 1424ba280 Unwind@1424ba280 body=63 status=ok
// SIG undefined Unwind@1424ba280(void)

void Unwind_1424ba280(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2c4) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x2b8));
  }
  return;
}



// FUNCTION 1424ba2c0 Unwind@1424ba2c0 body=54 status=ok
// SIG undefined Unwind@1424ba2c0(void)

void Unwind_1424ba2c0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x308));
  return;
}



// FUNCTION 1424ba300 FUN_1424ba300 body=254 status=ok
// SIG undefined FUN_1424ba300(void)

longlong FUN_1424ba300(undefined8 param_1,undefined4 param_2,int *param_3)

{
  longlong lVar1;
  undefined1 local_120 [40];
  char *local_f8;
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (0 < *param_3) {
    return 0;
  }
  if ((DAT_14c77ea20 != 0) && (lVar1 = FUN_1424ba520(), lVar1 != 0)) {
    FUN_1412ae150(local_120,&DAT_149e02088,0,0,0);
    lVar1 = FUN_1425324c0(DAT_14c77ea28,param_1,param_2,local_120,param_3);
    if ((lVar1 != 0) && ((*param_3 < 1 && (*local_f8 != '\0')))) {
      local_38 = lVar1 + 8;
      local_40 = lVar1 + 0xa5;
      FUN_1425321b0(&local_40,local_f8,local_f8);
    }
    FUN_1414b3f60(local_120);
    return lVar1;
  }
  lVar1 = FUN_1424ba5c0(param_1,param_2,param_3);
  return lVar1;
}



// FUNCTION 1424ba400 Unwind@1424ba400 body=43 status=ok
// SIG undefined Unwind@1424ba400(void)

void Unwind_1424ba400(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x28);
  return;
}



// FUNCTION 1424ba430 FUN_1424ba430 body=13 status=ok
// SIG undefined FUN_1424ba430(void)

void FUN_1424ba430(undefined8 param_1,undefined8 param_2)

{
  FUN_1424ba300(param_1,3,param_2);
  return;
}



// FUNCTION 1424ba440 FUN_1424ba440 body=25 status=ok
// SIG undefined FUN_1424ba440(void)

void FUN_1424ba440(undefined8 *param_1)

{
  *param_1 = icu_64::BreakIterator::vftable;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa5) = 0;
  return;
}



// FUNCTION 1424ba460 FUN_1424ba460 body=82 status=ok
// SIG undefined FUN_1424ba460(void)

undefined8 * FUN_1424ba460(undefined8 *param_1,longlong param_2)

{
  *param_1 = icu_64::BreakIterator::vftable;
  strncpy((char *)(param_1 + 1),(char *)(param_2 + 8),0x9d);
  strncpy((char *)((longlong)param_1 + 0xa5),(char *)(param_2 + 0xa5),0x9d);
  return param_1;
}



// FUNCTION 1424ba4c0 FUN_1424ba4c0 body=77 status=ok
// SIG undefined FUN_1424ba4c0(void)

longlong FUN_1424ba4c0(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    strncpy((char *)(param_1 + 8),(char *)(param_2 + 8),0x9d);
    strncpy((char *)(param_1 + 0xa5),(char *)(param_2 + 0xa5),0x9d);
  }
  return param_1;
}



// FUNCTION 1424ba510 thunk_FUN_1424b70d0 body=5 status=ok
// SIG undefined thunk_FUN_1424b70d0(void)

void thunk_FUN_1424b70d0(void)

{
  return;
}



// FUNCTION 1424ba520 FUN_1424ba520 body=126 status=ok
// SIG undefined FUN_1424ba520(void)

longlong FUN_1424ba520(void)

{
  char cVar1;
  longlong lVar2;
  
  if (DAT_14c77ea20 != 2) {
    cVar1 = FUN_142501800(&DAT_14c77ea20);
    if (cVar1 != '\0') {
      lVar2 = thunk_FUN_1424da030(0x198);
      if (lVar2 != 0) {
        FUN_1424ba8e0(lVar2);
      }
      DAT_14c77ea28 = lVar2;
      FUN_1424d6720(2,FUN_1424baa50);
      FUN_1425019c0(&DAT_14c77ea20);
    }
  }
  return DAT_14c77ea28;
}



// FUNCTION 1424ba5a0 Unwind@1424ba5a0 body=30 status=ok
// SIG undefined Unwind@1424ba5a0(void)

void Unwind_1424ba5a0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1424ba5c0 FUN_1424ba5c0 body=506 status=ok
// SIG undefined FUN_1424ba5c0(void)

void FUN_1424ba5c0(undefined8 param_1,undefined4 param_2,int *param_3)

{
  ulonglong uVar1;
  int iVar2;
  size_t sVar3;
  undefined8 uVar4;
  longlong *plVar5;
  char *pcVar6;
  undefined1 auStack_98 [32];
  int *local_78;
  int local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (0 < *param_3) goto LAB_1424ba7ad;
  switch(param_2) {
  case 0:
    pcVar6 = "grapheme";
    break;
  case 1:
    pcVar6 = "word";
    break;
  case 2:
    uVar1 = (ulonglong)local_48 >> 0x20;
    local_48 = CONCAT44((uint)uVar1 & 0xffffff00,0x656e696c);
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_6c = 0;
    local_78 = &local_6c;
    iVar2 = FUN_1424a5490(param_1,&DAT_14bd49fb5,&local_68,0x20);
    if ((0 < iVar2) && (local_6c < 1)) {
      iVar2 = (int)local_68;
      if ((local_68._3_4_ == 0x746369 && iVar2 == 0x69727473) ||
         ((local_68._3_4_ == 0x6c616d && iVar2 == 0x6d726f6e ||
          (local_68._4_2_ == 0x65 && iVar2 == 0x736f6f6c)))) {
        sVar3 = strlen((char *)&local_48);
        *(undefined2 *)((longlong)&local_48 + sVar3) = 0x5f;
        strcat((char *)&local_48,(char *)&local_68);
      }
    }
    pcVar6 = (char *)&local_48;
    break;
  case 3:
    uVar4 = FUN_1424b9fb0(param_1,"sentence",param_3);
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_68 = local_68 & 0xffffffff00000000;
    local_78 = (int *)&local_68;
    iVar2 = FUN_1424a5490(param_1,&DAT_14bd49fa8,&local_48,0x20);
    if (((0 < iVar2) && ((int)local_68 < 1)) &&
       ((char)uStack_40 == '\0' && local_48 == 0x647261646e617473)) {
      plVar5 = (longlong *)FUN_142534740(param_1,&local_68);
      if ((int)local_68 < 1) {
        (**(code **)(*plVar5 + 0x20))(plVar5,uVar4,param_3);
        (**(code **)*plVar5)(plVar5,1);
      }
    }
    goto LAB_1424ba7ad;
  case 4:
    pcVar6 = "title";
    break;
  default:
    *param_3 = 1;
    goto LAB_1424ba7ad;
  }
  FUN_1424b9fb0(param_1,pcVar6,param_3);
LAB_1424ba7ad:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
}



// FUNCTION 1424ba7d0 FUN_1424ba7d0 body=67 status=ok
// SIG undefined FUN_1424ba7d0(void)

void FUN_1424ba7d0(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = param_1 + 8;
  local_20 = param_1 + 0xa5;
  FUN_142532120(&local_20);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
}



// FUNCTION 1424ba820 FUN_1424ba820 body=3 status=ok
// SIG undefined FUN_1424ba820(void)

undefined8 FUN_1424ba820(void)

{
  return 0;
}



// FUNCTION 1424ba830 FUN_1424ba830 body=39 status=ok
// SIG undefined FUN_1424ba830(void)

undefined8 FUN_1424ba830(undefined8 param_1,undefined4 *param_2,int param_3,int *param_4)

{
  if (0 < *param_4) {
    return 0;
  }
  if (0 < param_3) {
    *param_2 = 0;
    return 1;
  }
  *param_4 = 0xf;
  return 1;
}



// FUNCTION 1424ba860 FUN_1424ba860 body=70 status=ok
// SIG undefined FUN_1424ba860(void)

undefined8 * FUN_1424ba860(undefined8 *param_1)

{
  longlong local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  *param_1 = icu_64::BreakIterator::vftable;
  local_20 = param_1 + 1;
  local_28 = (longlong)param_1 + 0xa5;
  local_18 = param_1;
  FUN_142532210(&local_28);
  return local_18;
}



// FUNCTION 1424ba8b0 Unwind@1424ba8b0 body=30 status=ok
// SIG undefined Unwind@1424ba8b0(void)

void Unwind_1424ba8b0(undefined8 param_1,longlong param_2)

{
  FUN_1424b70d0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1424ba8d0 FUN_1424ba8d0 body=2 status=ok
// SIG undefined FUN_1424ba8d0(void)

void FUN_1424ba8d0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1424ba8e0 FUN_1424ba8e0 body=214 status=ok
// SIG undefined FUN_1424ba8e0(void)

longlong * FUN_1424ba8e0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 local_70 [16];
  undefined8 *local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_1424a7060(local_70,1,L"Break Iterator",0xe);
  FUN_142532400(param_1,local_70);
  FUN_140859a90(local_70);
  *param_1 = (longlong)icu_64::ICUBreakIteratorService::vftable;
  local_70[0] = 0;
  puVar1 = (undefined8 *)thunk_FUN_1424da030(0x90);
  local_28 = param_1;
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    local_30 = puVar1;
    FUN_142532f00(puVar1);
    *local_30 = icu_64::ICUBreakIteratorFactory::vftable;
    puVar1 = local_30;
  }
  (**(code **)(*local_28 + 0x40))(local_28,puVar1,local_70);
  return local_28;
}



// FUNCTION 1424ba9c0 Unwind@1424ba9c0 body=37 status=ok
// SIG undefined Unwind@1424ba9c0(void)

void Unwind_1424ba9c0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 1424ba9f0 Unwind@1424ba9f0 body=37 status=ok
// SIG undefined Unwind@1424ba9f0(void)

void Unwind_1424ba9f0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x68));
  return;
}



// FUNCTION 1424baa20 Unwind@1424baa20 body=37 status=ok
// SIG undefined Unwind@1424baa20(void)

void Unwind_1424baa20(undefined8 param_1,longlong param_2)

{
  FUN_142532480(*(undefined8 *)(param_2 + 0x70));
  return;
}



// FUNCTION 1424baa50 FUN_1424baa50 body=52 status=ok
// SIG undefined FUN_1424baa50(void)

undefined8 FUN_1424baa50(void)

{
  undefined4 uVar1;
  
  if (DAT_14c77ea28 != (undefined8 *)0x0) {
    (**(code **)*DAT_14c77ea28)(DAT_14c77ea28,1);
    DAT_14c77ea28 = (undefined8 *)0x0;
  }
  uVar1 = DAT_14c77ea20;
  LOCK();
  DAT_14c77ea20 = 0;
  UNLOCK();
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}



// FUNCTION 1424baa90 FUN_1424baa90 body=38 status=ok
// SIG undefined FUN_1424baa90(void)

undefined8 FUN_1424baa90(undefined8 param_1,int param_2)

{
  FUN_142532480();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1424baac0 FUN_1424baac0 body=20 status=ok
// SIG undefined FUN_1424baac0(void)

bool FUN_1424baac0(void)

{
  int iVar1;
  
  iVar1 = FUN_142536560();
  return iVar1 == 1;
}



// FUNCTION 1424baae0 FUN_1424baae0 body=10 status=ok
// SIG undefined FUN_1424baae0(void)

void FUN_1424baae0(undefined8 param_1,longlong *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001424baae6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x18))(param_2);
  return;
}



// FUNCTION 1424baaf0 FUN_1424baaf0 body=116 status=ok
// SIG undefined FUN_1424baaf0(void)

undefined8 FUN_1424baaf0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 local_110 [224];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  uVar1 = (**(code **)(*param_2 + 0x48))(param_2);
  FUN_1424a3c00(local_110);
  (**(code **)(*param_2 + 0x58))(param_2,local_110);
  uVar2 = FUN_1424ba5c0(local_110,uVar1,param_4);
  FUN_1414b3f60(local_110);
  return uVar2;
}



// FUNCTION 1424bab70 Unwind@1424bab70 body=43 status=ok
// SIG undefined Unwind@1424bab70(void)

void Unwind_1424bab70(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x28);
  return;
}



// FUNCTION 1424baba0 FUN_1424baba0 body=38 status=ok
// SIG undefined FUN_1424baba0(void)

undefined8 FUN_1424baba0(undefined8 param_1,int param_2)

{
  FUN_142532fc0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1424babd0 FUN_1424babd0 body=18 status=ok
// SIG undefined FUN_1424babd0(void)

void FUN_1424babd0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1424ba5c0(param_2,param_3,param_5);
  return;
}



// FUNCTION 1424babf0 FUN_1424babf0 body=73 status=ok
// SIG undefined FUN_1424babf0(void)

undefined8 * FUN_1424babf0(undefined8 *param_1)

{
  FUN_142537a10();
  *param_1 = icu_64::NumberFormat::vftable;
  *(undefined1 *)(param_1 + 0x29) = 1;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0x177359400;
  *(undefined8 *)((longlong)param_1 + 0x154) = 3;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0x100;
  return param_1;
}



// FUNCTION 1424bac40 FUN_1424bac40 body=5 status=ok
// SIG undefined FUN_1424bac40(void)

void FUN_1424bac40(void)

{
  return;
}



// FUNCTION 1424bac50 FUN_1424bac50 body=213 status=ok
// SIG undefined FUN_1424bac50(void)

undefined8 *
FUN_1424bac50(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_142537a40();
  *param_1 = icu_64::NumberFormat::vftable;
  if (param_1 != param_2) {
    FUN_142537a90(param_1,param_2);
    *(undefined1 *)(param_1 + 0x29) = *(undefined1 *)(param_2 + 0x29);
    *(undefined4 *)((longlong)param_1 + 0x14c) = *(undefined4 *)((longlong)param_2 + 0x14c);
    *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)(param_2 + 0x2a);
    *(undefined4 *)((longlong)param_1 + 0x154) = *(undefined4 *)((longlong)param_2 + 0x154);
    *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(param_2 + 0x2b);
    *(undefined1 *)((longlong)param_1 + 0x15c) = *(undefined1 *)((longlong)param_2 + 0x15c);
    FUN_142504720((longlong)param_1 + 0x15e,(longlong)param_2 + 0x15e,3,param_4,param_1,uVar1);
    *(undefined2 *)((longlong)param_1 + 0x164) = 0;
    *(undefined1 *)((longlong)param_1 + 0x15d) = *(undefined1 *)((longlong)param_2 + 0x15d);
    *(undefined4 *)(param_1 + 0x2d) = *(undefined4 *)(param_2 + 0x2d);
  }
  return param_1;
}



// FUNCTION 1424bad30 Unwind@1424bad30 body=34 status=ok
// SIG undefined Unwind@1424bad30(void)

void Unwind_1424bad30(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1424bad60 FUN_1424bad60 body=172 status=ok
// SIG undefined FUN_1424bad60(void)

longlong FUN_1424bad60(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_142537a90(param_1);
    *(undefined1 *)(param_1 + 0x148) = *(undefined1 *)(param_2 + 0x148);
    *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_2 + 0x14c);
    *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
    *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_2 + 0x154);
    *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
    *(undefined1 *)(param_1 + 0x15c) = *(undefined1 *)(param_2 + 0x15c);
    FUN_142504720(param_1 + 0x15e,param_2 + 0x15e,3);
    *(undefined2 *)(param_1 + 0x164) = 0;
    *(undefined1 *)(param_1 + 0x15d) = *(undefined1 *)(param_2 + 0x15d);
    *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x168);
  }
  return param_1;
}



// FUNCTION 1424bae10 FUN_1424bae10 body=188 status=ok
// SIG undefined FUN_1424bae10(void)

bool FUN_1424bae10(longlong param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 == param_2) {
    bVar2 = true;
  }
  else {
    cVar1 = FUN_142537b80();
    if ((((((cVar1 != '\0') && (*(int *)(param_1 + 0x14c) == *(int *)(param_2 + 0x14c))) &&
          (*(int *)(param_1 + 0x150) == *(int *)(param_2 + 0x150))) &&
         ((*(int *)(param_1 + 0x154) == *(int *)(param_2 + 0x154) &&
          (*(int *)(param_1 + 0x158) == *(int *)(param_2 + 0x158))))) &&
        ((*(char *)(param_1 + 0x148) == *(char *)(param_2 + 0x148) &&
         ((*(char *)(param_1 + 0x15c) == *(char *)(param_2 + 0x15c) &&
          (iVar3 = FUN_142504390(param_1 + 0x15e,param_2 + 0x15e), iVar3 == 0)))))) &&
       (*(char *)(param_1 + 0x15d) == *(char *)(param_2 + 0x15d))) {
      return *(int *)(param_1 + 0x168) == *(int *)(param_2 + 0x168);
    }
    bVar2 = false;
  }
  return bVar2;
}



// FUNCTION 1424baed0 FUN_1424baed0 body=21 status=ok
// SIG undefined FUN_1424baed0(void)

undefined8
FUN_1424baed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int *param_5)

{
  if (0 < *param_5) {
    return param_3;
  }
  *param_5 = 0x10;
  return param_3;
}



// FUNCTION 1424baef0 FUN_1424baef0 body=21 status=ok
// SIG undefined FUN_1424baef0(void)

undefined8
FUN_1424baef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int *param_5)

{
  if (0 < *param_5) {
    return param_3;
  }
  *param_5 = 0x10;
  return param_3;
}



// FUNCTION 1424baf10 FUN_1424baf10 body=21 status=ok
// SIG undefined FUN_1424baf10(void)

undefined8
FUN_1424baf10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int *param_5)

{
  if (0 < *param_5) {
    return param_3;
  }
  *param_5 = 0x10;
  return param_3;
}



// FUNCTION 1424baf30 FUN_1424baf30 body=27 status=ok
// SIG undefined FUN_1424baf30(void)

undefined8
FUN_1424baf30(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int *param_5)

{
  undefined8 uVar1;
  
  if (0 < *param_5) {
    return param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x0001424baf48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x90))();
  return uVar1;
}



// FUNCTION 1424baf50 FUN_1424baf50 body=24 status=ok
// SIG undefined FUN_1424baf50(void)

undefined8
FUN_1424baf50(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int *param_5)

{
  undefined8 uVar1;
  
  if (0 < *param_5) {
    return param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x0001424baf65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x78))();
  return uVar1;
}



// FUNCTION 1424baf70 FUN_1424baf70 body=24 status=ok
// SIG undefined FUN_1424baf70(void)

undefined8
FUN_1424baf70(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int *param_5)

{
  undefined8 uVar1;
  
  if (0 < *param_5) {
    return param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x0001424baf85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x60))();
  return uVar1;
}



// FUNCTION 1424baf90 FUN_1424baf90 body=144 status=ok
// SIG undefined FUN_1424baf90(void)

undefined8
FUN_1424baf90(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 local_c8 [112];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  FUN_14252c810(local_c8);
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  FUN_14252cab0(local_c8,&local_58,param_5);
  (**(code **)(*param_1 + 0x20))(param_1,local_c8,param_3,param_4,param_5);
  FUN_14252d110(local_c8);
  return param_3;
}



// FUNCTION 1424bb020 Unwind@1424bb020 body=51 status=ok
// SIG undefined Unwind@1424bb020(void)

void Unwind_1424bb020(undefined8 param_1,longlong param_2)

{
  FUN_14252d110(param_2 + 0x30);
  return;
}



// FUNCTION 1424bb060 FUN_1424bb060 body=76 status=ok
// SIG undefined FUN_1424bb060(void)

undefined8
FUN_1424bb060(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int *param_5)

{
  undefined4 uVar1;
  
  if (*param_5 < 1) {
    uVar1 = FUN_142538d80(param_2);
    (**(code **)(*param_1 + 0x80))(param_1,uVar1,param_3,param_4,param_5);
  }
  return param_3;
}



// FUNCTION 1424bb0b0 FUN_1424bb0b0 body=76 status=ok
// SIG undefined FUN_1424bb0b0(void)

undefined8
FUN_1424bb0b0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int *param_5)

{
  undefined4 uVar1;
  
  if (*param_5 < 1) {
    uVar1 = FUN_142538d80(param_2);
    (**(code **)(*param_1 + 0x88))(param_1,uVar1,param_3,param_4,param_5);
  }
  return param_3;
}



// FUNCTION 1424bb100 FUN_1424bb100 body=453 status=ok
// SIG undefined FUN_1424bb100(void)

undefined8
FUN_1424bb100(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,int *param_5)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong in_stack_ffffffffffffff98;
  longlong lVar5;
  undefined2 local_58 [4];
  undefined1 local_50;
  longlong *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (*param_5 < 1) {
    local_50 = 0;
    lVar5 = param_2;
    lVar3 = FUN_14252d330(param_2);
    if ((lVar3 == 0) ||
       (lVar3 = __RTDynamicCast(lVar3,0,&icu_64::UObject::RTTI_Type_Descriptor,
                                &icu_64::CurrencyAmount::RTTI_Type_Descriptor,
                                in_stack_ffffffffffffff98 & 0xffffffff00000000,lVar5), lVar3 == 0))
    {
      local_58[0] = 0;
    }
    else {
      FUN_1425046f0(local_58,*(longlong *)(lVar3 + 0x78) + 0x18);
      param_2 = lVar3 + 8;
      local_50 = 1;
      lVar5 = param_2;
      iVar2 = FUN_142504390(local_58,(longlong)param_1 + 0x15e);
      if (iVar2 != 0) {
        local_48 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1);
        (**(code **)(*local_48 + 0xf0))(local_48,local_58,param_5);
        uVar4 = (**(code **)(*local_48 + 0x28))(local_48,param_2,param_3,param_4,param_5);
        (**(code **)*local_48)(local_48,1);
        return uVar4;
      }
    }
    cVar1 = FUN_14252d150(param_2);
    if ((cVar1 == '\0') || (*(longlong *)(param_2 + 0x20) == 0)) {
      iVar2 = FUN_14252d140(param_2);
      if (iVar2 == 5) {
        (**(code **)(*param_1 + 0x58))
                  (param_1,*(undefined8 *)(param_2 + 8),param_3,param_4,param_5,lVar5);
      }
      else if (iVar2 == 2) {
        (**(code **)(*param_1 + 0x70))(param_1,*(undefined4 *)(param_2 + 8),param_3,param_4,param_5)
        ;
      }
      else if (iVar2 == 1) {
        (**(code **)(*param_1 + 0x88))(param_1,*(undefined8 *)(param_2 + 8),param_3,param_4,param_5)
        ;
      }
      else {
        *param_5 = 3;
      }
    }
    else {
      (**(code **)(*param_1 + 0x38))(param_1,*(longlong *)(param_2 + 0x20),param_3,param_4,param_5);
    }
  }
  return param_3;
}



// FUNCTION 1424bb2d0 Unwind@1424bb2d0 body=53 status=ok
// SIG undefined Unwind@1424bb2d0(void)

void Unwind_1424bb2d0(undefined8 param_1,longlong param_2)

{
  (**(code **)**(undefined8 **)(param_2 + 0x40))(*(undefined8 **)(param_2 + 0x40),1);
  return;
}



// FUNCTION 1424bb310 FUN_1424bb310 body=453 status=ok
// SIG undefined FUN_1424bb310(void)

undefined8
FUN_1424bb310(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,int *param_5)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong in_stack_ffffffffffffff98;
  longlong lVar5;
  undefined2 local_58 [4];
  undefined1 local_50;
  longlong *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (*param_5 < 1) {
    local_50 = 0;
    lVar5 = param_2;
    lVar3 = FUN_14252d330(param_2);
    if ((lVar3 == 0) ||
       (lVar3 = __RTDynamicCast(lVar3,0,&icu_64::UObject::RTTI_Type_Descriptor,
                                &icu_64::CurrencyAmount::RTTI_Type_Descriptor,
                                in_stack_ffffffffffffff98 & 0xffffffff00000000,lVar5), lVar3 == 0))
    {
      local_58[0] = 0;
    }
    else {
      FUN_1425046f0(local_58,*(longlong *)(lVar3 + 0x78) + 0x18);
      param_2 = lVar3 + 8;
      local_50 = 1;
      lVar5 = param_2;
      iVar2 = FUN_142504390(local_58,(longlong)param_1 + 0x15e);
      if (iVar2 != 0) {
        local_48 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1);
        (**(code **)(*local_48 + 0xf0))(local_48,local_58,param_5);
        uVar4 = (**(code **)(*local_48 + 0x20))(local_48,param_2,param_3,param_4,param_5);
        (**(code **)*local_48)(local_48,1);
        return uVar4;
      }
    }
    cVar1 = FUN_14252d150(param_2);
    if ((cVar1 == '\0') || (*(longlong *)(param_2 + 0x20) == 0)) {
      iVar2 = FUN_14252d140(param_2);
      if (iVar2 == 5) {
        (**(code **)(*param_1 + 0x50))
                  (param_1,*(undefined8 *)(param_2 + 8),param_3,param_4,param_5,lVar5);
      }
      else if (iVar2 == 2) {
        (**(code **)(*param_1 + 0x68))(param_1,*(undefined4 *)(param_2 + 8),param_3,param_4,param_5)
        ;
      }
      else if (iVar2 == 1) {
        (**(code **)(*param_1 + 0x80))(param_1,*(undefined8 *)(param_2 + 8),param_3,param_4,param_5)
        ;
      }
      else {
        *param_5 = 3;
      }
    }
    else {
      (**(code **)(*param_1 + 0x40))(param_1,*(longlong *)(param_2 + 0x20),param_3,param_4,param_5);
    }
  }
  return param_3;
}



// FUNCTION 1424bb4e0 Unwind@1424bb4e0 body=53 status=ok
// SIG undefined Unwind@1424bb4e0(void)

void Unwind_1424bb4e0(undefined8 param_1,longlong param_2)

{
  (**(code **)**(undefined8 **)(param_2 + 0x40))(*(undefined8 **)(param_2 + 0x40),1);
  return;
}



// FUNCTION 1424bb520 FUN_1424bb520 body=10 status=ok
// SIG undefined FUN_1424bb520(void)

void FUN_1424bb520(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001424bb527. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))();
  return;
}



// FUNCTION 1424bb530 FUN_1424bb530 body=13 status=ok
// SIG undefined FUN_1424bb530(void)

void FUN_1424bb530(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001424bb53a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))();
  return;
}



// FUNCTION 1424bb540 FUN_1424bb540 body=81 status=ok
// SIG undefined FUN_1424bb540(void)

undefined8 FUN_1424bb540(longlong *param_1)

{
  undefined8 uVar1;
  undefined **local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_30 = icu_64::FieldPosition::vftable;
  local_28 = 0xffffffff;
  local_20 = 0;
  uVar1 = (**(code **)(*param_1 + 0x90))();
  thunk_FUN_1424b70d0(&local_30);
  return uVar1;
}



// FUNCTION 1424bb5a0 Unwind@1424bb5a0 body=32 status=ok
// SIG undefined Unwind@1424bb5a0(void)

void Unwind_1424bb5a0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x28);
  return;
}



// FUNCTION 1424bb5c0 FUN_1424bb5c0 body=95 status=ok
// SIG undefined FUN_1424bb5c0(void)

void FUN_1424bb5c0(longlong *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  undefined **local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (*param_4 < 1) {
    local_28 = icu_64::ParsePosition::vftable;
    local_20 = 0xffffffff00000000;
    (**(code **)(*param_1 + 0xa0))();
    if ((int)local_20 == 0) {
      *param_4 = 3;
    }
    thunk_FUN_1424b70d0(&local_28);
  }
  return;
}



// FUNCTION 1424bb620 Unwind@1424bb620 body=32 status=ok
// SIG undefined Unwind@1424bb620(void)

void Unwind_1424bb620(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x20);
  return;
}



// FUNCTION 1424bb640 FUN_1424bb640 body=223 status=ok
// SIG undefined FUN_1424bb640(void)

undefined8 * FUN_1424bb640(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 local_c0 [112];
  undefined1 local_50 [8];
  undefined8 *local_48;
  int local_3c [3];
  
  local_3c[1] = -2;
  local_3c[2] = -1;
  FUN_14252c810(local_c0);
  iVar1 = *(int *)(param_3 + 8);
  (**(code **)(*param_1 + 0xa0))(param_1,param_2,local_c0,param_3);
  if (*(int *)(param_3 + 8) != iVar1) {
    local_3c[0] = 0;
    (**(code **)(*param_1 + 0x118))(param_1,local_50,local_3c);
    if (local_3c[0] < 1) {
      puVar2 = (undefined8 *)thunk_FUN_1424da030(0x80);
      if (puVar2 == (undefined8 *)0x0) {
        *(int *)(param_3 + 8) = iVar1;
      }
      else {
        local_48 = puVar2;
        FUN_14253b3b0(puVar2,local_c0,local_50,local_3c);
        puVar2 = local_48;
        if (local_3c[0] < 1) goto LAB_1424bb6b6;
        *(int *)(param_3 + 8) = iVar1;
        (**(code **)*local_48)(local_48,1);
      }
    }
  }
  puVar2 = (undefined8 *)0x0;
LAB_1424bb6b6:
  FUN_14252d110(local_c0);
  return puVar2;
}



// FUNCTION 1424bb720 Unwind@1424bb720 body=47 status=ok
// SIG undefined Unwind@1424bb720(void)

void Unwind_1424bb720(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xa0));
  return;
}



// FUNCTION 1424bb750 Unwind@1424bb750 body=47 status=ok
// SIG undefined Unwind@1424bb750(void)

void Unwind_1424bb750(undefined8 param_1,longlong param_2)

{
  FUN_14252d110(param_2 + 0x28);
  return;
}



// FUNCTION 1424bb780 FUN_1424bb780 body=7 status=ok
// SIG undefined FUN_1424bb780(void)

void FUN_1424bb780(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x15c) = param_2;
  return;
}



// FUNCTION 1424bb790 FUN_1424bb790 body=7 status=ok
// SIG undefined FUN_1424bb790(void)

void FUN_1424bb790(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x15d) = param_2;
  return;
}


