// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148cee06a FUN_148cee06a body=197 status=ok
// SIG undefined FUN_148cee06a(void)

void FUN_148cee06a(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined4)*param_2;
  uStack_44 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_40 = (undefined4)param_2[1];
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
  FUN_148cf8a74();
  plVar7 = (longlong *)(param_1 + 0x38);
  FUN_148cf887e(plVar7,(int)param_2[1],1);
  if (0 < (int)param_2[1]) {
    lVar6 = 0x70;
    lVar8 = 0;
    lVar9 = 0;
    do {
      FUN_148aca162(*param_2 + lVar6);
      *(undefined8 *)(*plVar7 + lVar8) = *(undefined8 *)(*param_2 + -0x70 + lVar6);
      *(undefined4 *)(*plVar7 + 8 + lVar8) = *(undefined4 *)(*param_2 + lVar6);
      puVar1 = (undefined4 *)(*param_2 + 4 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(*plVar7 + 0xc + lVar8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x1c;
      lVar6 = lVar6 + 0x88;
    } while (lVar9 < (int)param_2[1]);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cee130 FUN_148cee130 body=81 status=ok
// SIG undefined FUN_148cee130(void)

void FUN_148cee130(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined8 *)(param_1 + 0x60);
  local_18 = *(undefined4 *)(param_1 + 0x68);
  FUN_148cee182();
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_148aca1d8(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cee182 FUN_148cee182 body=197 status=ok
// SIG undefined FUN_148cee182(void)

void FUN_148cee182(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined4)*param_2;
  uStack_44 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_40 = (undefined4)param_2[1];
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
  FUN_148cf8b90();
  plVar7 = (longlong *)(param_1 + 0x38);
  FUN_148cf887e(plVar7,(int)param_2[1],1);
  if (0 < (int)param_2[1]) {
    lVar6 = 0x80;
    lVar8 = 0;
    lVar9 = 0;
    do {
      FUN_148aca162(*param_2 + lVar6);
      *(undefined8 *)(*plVar7 + lVar8) = *(undefined8 *)(*param_2 + -0x80 + lVar6);
      *(undefined4 *)(*plVar7 + 8 + lVar8) = *(undefined4 *)(*param_2 + lVar6);
      puVar1 = (undefined4 *)(*param_2 + -0x78 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(*plVar7 + 0xc + lVar8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x1c;
      lVar6 = lVar6 + 0x88;
    } while (lVar9 < (int)param_2[1]);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cee248 FUN_148cee248 body=81 status=ok
// SIG undefined FUN_148cee248(void)

void FUN_148cee248(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined8 *)(param_1 + 0x60);
  local_18 = *(undefined4 *)(param_1 + 0x68);
  FUN_148cee29a();
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_148aca1d8(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cee29a FUN_148cee29a body=196 status=ok
// SIG undefined FUN_148cee29a(void)

void FUN_148cee29a(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined4)*param_2;
  uStack_44 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_40 = (undefined4)param_2[1];
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
  FUN_148cf8cac();
  plVar7 = (longlong *)(param_1 + 0x38);
  FUN_148cf887e(plVar7,(int)param_2[1],1);
  if (0 < (int)param_2[1]) {
    lVar6 = 0x30;
    lVar8 = 0;
    lVar9 = 0;
    do {
      FUN_148aca162(*param_2 + lVar6);
      *(undefined8 *)(*plVar7 + lVar8) = *(undefined8 *)(*param_2 + lVar8 * 2);
      *(undefined4 *)(*plVar7 + 8 + lVar8) = *(undefined4 *)(*param_2 + 0x30 + lVar8 * 2);
      puVar1 = (undefined4 *)(*param_2 + 8 + lVar8 * 2);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(*plVar7 + 0xc + lVar8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x1c;
      lVar6 = lVar6 + 0x38;
    } while (lVar9 < (int)param_2[1]);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cee360 FUN_148cee360 body=81 status=ok
// SIG undefined FUN_148cee360(void)

void FUN_148cee360(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined8 *)(param_1 + 0x60);
  local_18 = *(undefined4 *)(param_1 + 0x68);
  FUN_148cee3b2();
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_148aca1d8(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cee3b2 FUN_148cee3b2 body=194 status=ok
// SIG undefined FUN_148cee3b2(void)

void FUN_148cee3b2(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined4)*param_2;
  uStack_44 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_40 = (undefined4)param_2[1];
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
  FUN_148cf8dba();
  plVar7 = (longlong *)(param_1 + 0x38);
  FUN_148cf887e(plVar7,(int)param_2[1],1);
  if (0 < (int)param_2[1]) {
    lVar6 = 0x18;
    lVar8 = 0;
    lVar9 = 0;
    do {
      FUN_148aca162(*param_2 + lVar6);
      *(undefined8 *)(*plVar7 + lVar8) = *(undefined8 *)(*param_2 + -0x18 + lVar6);
      *(undefined4 *)(*plVar7 + 8 + lVar8) = *(undefined4 *)(*param_2 + lVar6);
      puVar1 = (undefined4 *)(*param_2 + 4 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(*plVar7 + 0xc + lVar8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x1c;
      lVar6 = lVar6 + 0x30;
    } while (lVar9 < (int)param_2[1]);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cee476 FUN_148cee476 body=26 status=ok
// SIG undefined FUN_148cee476(void)

undefined8 FUN_148cee476(longlong param_1,undefined8 param_2)

{
  FUN_1448729ea(param_1 + 8);
  return param_2;
}



// FUNCTION 148cee490 FUN_148cee490 body=63 status=ok
// SIG undefined FUN_148cee490(void)

undefined8 FUN_148cee490(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1405c6a5c(param_2,param_3,param_1 + 8,param_1 + 0x58,param_1 + 0xa8,param_1 + 0xf8);
  return param_2;
}



// FUNCTION 148cee4d0 FUN_148cee4d0 body=420 status=ok
// SIG undefined FUN_148cee4d0(void)

float * FUN_148cee4d0(longlong param_1,float *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_a8 [32];
  undefined8 **local_88 [3];
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1448729ea(param_1 + 8,local_88);
  fVar3 = (float)FUN_144a7ecd0(local_88);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_88;
    if (0x18 < local_70) {
      pppuVar2 = (undefined8 ***)local_88[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_70) {
    FUN_1400020a8(local_88[0]);
  }
  FUN_1448729ea(param_1 + 0x58,local_88,param_3);
  fVar4 = (float)FUN_144a7ecd0(local_88);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_88;
    if (0x18 < local_70) {
      pppuVar2 = (undefined8 ***)local_88[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_70) {
    FUN_1400020a8(local_88[0]);
  }
  FUN_1448729ea(param_1 + 0xa8,local_88,param_3);
  fVar5 = (float)FUN_144a7ecd0(local_88);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_88;
    if (0x18 < local_70) {
      pppuVar2 = (undefined8 ***)local_88[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_70) {
    FUN_1400020a8(local_88[0]);
  }
  *(undefined2 *)(param_2 + 6) = 4;
  *param_2 = fVar3 * fVar4 + fVar5;
  *(undefined1 *)(param_2 + 8) = 3;
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cee676 FUN_148cee676 body=641 status=ok
// SIG undefined FUN_148cee676(void)

longlong * FUN_148cee676(longlong param_1,longlong *param_2,undefined8 param_3)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined8 ***pppuVar7;
  undefined1 auStack_88 [40];
  undefined8 **local_60 [3];
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar2 = FUN_1447f8eee(param_3);
  if (cVar2 == '\0') {
    lVar3 = FUN_140fecfdc(param_3);
    if (lVar3 == 0) {
LAB_148cee7e8:
      lVar3 = FUN_14049cbd6(param_3);
      if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1f0) != 0)) {
        lVar3 = FUN_140fe13cc(*(longlong *)(lVar3 + 0x1f0),lVar3);
        if (lVar3 != 0) {
          lVar4 = FUN_144a5dd5e();
          if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) goto LAB_148cee845;
        }
      }
      goto LAB_148cee6ab;
    }
    lVar3 = FUN_145722198(lVar3);
    if (lVar3 == 0) goto LAB_148cee7e8;
    lVar4 = FUN_144a5dd5e();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        != lVar4 + 0x30)) goto LAB_148cee7e8;
LAB_148cee845:
    lVar4 = FUN_1402a1246(lVar3);
    if (lVar4 == 0) goto LAB_148cee6ab;
    lVar3 = FUN_1402a1246(lVar3);
    cVar2 = *(char *)(lVar3 + 0x711);
    *(undefined2 *)(param_2 + 3) = 0;
    *(undefined1 *)(param_2 + 4) = 0;
    if (cVar2 == '\x02') {
      param_1 = param_1 + 0x58;
      goto LAB_148cee6c1;
    }
    if (cVar2 != '\x01') {
      param_1 = param_1 + 0xa8;
      goto LAB_148cee6c1;
    }
  }
  else {
LAB_148cee6ab:
    *(undefined2 *)(param_2 + 3) = 0;
    *(undefined1 *)(param_2 + 4) = 0;
  }
  param_1 = param_1 + 8;
LAB_148cee6c1:
  FUN_1448729ea(param_1,local_60,param_3);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_2 + 4) * 0x120));
  if (pcVar1 != (code *)0x0) {
    plVar6 = param_2;
    if (0x18 < *(ushort *)(param_2 + 3)) {
      plVar6 = (longlong *)*param_2;
    }
    (*pcVar1)(plVar6);
  }
  if (0x18 < *(ushort *)(param_2 + 3)) {
    FUN_1400020a8(*param_2);
  }
  *(ushort *)(param_2 + 3) = local_48;
  if (local_48 < 0x19) {
    uVar5 = (ulonglong)((uint)local_40 * 0x120);
    if (*(code **)((longlong)&DAT_14c9a85b8 + uVar5) == (code *)0x0) {
      if (*(code **)((longlong)&DAT_14c9a85b0 + uVar5) == (code *)0x0) {
        memcpy(param_2,local_60,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar5));
      }
      else {
        (**(code **)((longlong)&DAT_14c9a85b0 + uVar5))(param_2,local_60);
      }
    }
    else {
      (**(code **)((longlong)&DAT_14c9a85b8 + uVar5))(param_2,local_60);
    }
  }
  else {
    *param_2 = (longlong)local_60[0];
    local_60[0] = (undefined8 ***)0x0;
    local_48 = 0;
  }
  *(byte *)(param_2 + 4) = local_40;
  local_40 = 0;
  if (DAT_14c9a85d0 != (code *)0x0) {
    pppuVar7 = local_60;
    if (0x18 < local_48) {
      pppuVar7 = (undefined8 ***)local_60[0];
    }
    (*DAT_14c9a85d0)(pppuVar7);
  }
  if (0x18 < local_48) {
    FUN_1400020a8(local_60[0]);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cee8f8 FUN_148cee8f8 body=1076 status=ok
// SIG undefined FUN_148cee8f8(void)

ulonglong * FUN_148cee8f8(longlong param_1,ulonglong *param_2)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined8 ***pppuVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 **local_a8;
  int local_a0;
  ushort local_90;
  byte local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *param_2 = 0;
  param_2[1] = 0;
  local_108 = 0;
  uStack_100 = 0;
  fVar10 = 0.0;
  if ((longlong)*(int *)(param_1 + 0xb0) != 0) {
    lVar6 = *(longlong *)(param_1 + 0xa8);
    lVar7 = (longlong)*(int *)(param_1 + 0xb0) * 0xa0;
    do {
      local_f8 = local_f8 & 0xffffffffffffff00;
      uStack_d0 = uStack_d0 & 0xffffffff00000000;
      FUN_14575a19a(&local_f8,0);
      FUN_1448729ea(lVar6,&local_a8,&local_f8);
      fVar9 = (float)FUN_144a7b41a(&local_a8,0);
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
      if (pcVar1 != (code *)0x0) {
        pppuVar5 = &local_a8;
        if (0x18 < local_90) {
          pppuVar5 = (undefined8 ***)local_a8;
        }
        (*pcVar1)(pppuVar5);
      }
      if (0x18 < local_90) {
        FUN_1400020a8(local_a8);
      }
      FUN_144a5ac3a(&local_f8);
      lVar8 = (longlong)(int)uStack_100;
      uVar4 = (int)uStack_100 + 1;
      uStack_100 = CONCAT44(uStack_100._4_4_,uVar4);
      if (uStack_100._4_4_ < uVar4) {
        FUN_14475e4ac(&local_108);
      }
      *(float *)(local_108 + lVar8 * 4) = fVar9;
      fVar10 = fVar10 + fVar9;
      lVar6 = lVar6 + 0xa0;
      lVar7 = lVar7 + -0xa0;
    } while (lVar7 != 0);
  }
  local_f8 = local_f8 & 0xffffffffffffff00;
  uStack_d0 = (ulonglong)uStack_d0._4_4_ << 0x20;
  FUN_14575a19a(&local_f8,0);
  FUN_1448729ea(param_1 + 0x58,&local_a8,&local_f8);
  fVar9 = (float)FUN_144a7b41a(&local_a8,0);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar5 = &local_a8;
    if (0x18 < local_90) {
      pppuVar5 = (undefined8 ***)local_a8;
    }
    (*pcVar1)(pppuVar5);
  }
  if (0x18 < local_90) {
    FUN_1400020a8(local_a8);
  }
  FUN_144a5ac3a(&local_f8);
  local_c8 = 0;
  local_b8 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  uStack_c0 = 0xf00000d0;
  uStack_b0 = 0x3f800000;
  cVar3 = FUN_1401b48c6(param_1 + 8,&local_f8);
  if ((cVar3 != '\0') || (0 < *(int *)(param_1 + 0xb0))) {
    FUN_14624635c(param_1 + 8,&local_f8);
    if (&local_f8 == param_2) {
      if (local_f8 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_f8;
      local_f8 = 0;
      *(int *)(param_2 + 1) = (int)uStack_f0;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_f0._4_4_;
    }
    if (0 < *(int *)(param_1 + 0xb0)) {
      FUN_1400020e8(param_2,&DAT_14a1c86cc,2);
      if (0 < *(int *)(param_1 + 0xb0)) {
        lVar7 = 0x50;
        lVar6 = 0;
        do {
          if (1 < (int)param_2[1]) {
            FUN_1400020e8(param_2,&DAT_149e01f72,1);
          }
          fVar11 = 0.0;
          if (0.0 < fVar10 + fVar9) {
            fVar11 = (*(float *)(local_108 + lVar6 * 4) / (fVar10 + fVar9)) * 100.0;
          }
          FUN_14624635c(*(longlong *)(param_1 + 0xa8) + lVar7,&local_a8);
          pppuVar5 = (undefined8 ***)&DAT_149dfb77a;
          if (local_a0 != 0) {
            pppuVar5 = (undefined8 ***)local_a8;
          }
          FUN_140002266(&local_f8,L"%g%% chance of %s",(double)fVar11,pppuVar5);
          iVar2 = (int)uStack_f0 + -1;
          if ((int)uStack_f0 == 0) {
            iVar2 = 0;
          }
          FUN_1400020e8(param_2,local_f8,iVar2);
          if (local_f8 != 0) {
            FUN_1400020a8();
          }
          if ((undefined8 ***)local_a8 != (undefined8 ***)0x0) {
            FUN_1400020a8();
          }
          lVar6 = lVar6 + 1;
          lVar7 = lVar7 + 0xa0;
        } while (lVar6 < *(int *)(param_1 + 0xb0));
      }
    }
  }
  if ((int)param_2[1] < 2) {
    FUN_14020fad6(param_2,&DAT_149e25dfc);
  }
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ceed2d FUN_148ceed2d body=163 status=ok
// SIG undefined FUN_148ceed2d(void)

undefined8 FUN_148ceed2d(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  if (lVar1 == 0) {
    local_18 = DAT_14c8464f0;
    local_28 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_20 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  }
  else {
    local_28 = *(undefined8 *)(lVar1 + 0x260);
    uStack_20 = *(undefined8 *)(lVar1 + 0x268);
    local_18 = *(undefined8 *)(lVar1 + 0x270);
  }
  FUN_1408b783e(local_40,param_1,&local_28);
  lVar1 = FUN_140425b2f(param_1);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140425c80(lVar1,local_40);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ceedd1 FUN_148ceedd1 body=80 status=ok
// SIG undefined FUN_148ceedd1(void)

undefined8 * FUN_148ceedd1(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined8 *puVar3;
  
  lVar1 = FUN_1405c6693(param_2);
  if (lVar1 == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)(lVar1 + 0x5f4);
  }
  lVar1 = FUN_1405c673d();
  puVar3 = (undefined8 *)((ulonglong)bVar2 * 0x170 + *(longlong *)(lVar1 + 0x28));
  if (*(int *)(lVar1 + 0x30) <= (int)(uint)bVar2) {
    puVar3 = (undefined8 *)(lVar1 + 0x38);
  }
  *param_1 = *puVar3;
  return param_1;
}



// FUNCTION 148ceee22 FUN_148ceee22 body=39 status=ok
// SIG undefined FUN_148ceee22(void)

undefined4 FUN_148ceee22(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (param_1 != 0) {
    lVar1 = FUN_1405c6693();
    if (lVar1 != 0) {
      uVar2 = *(undefined4 *)(lVar1 + 0x5e0);
    }
  }
  return uVar2;
}



// FUNCTION 148ceee4a FUN_148ceee4a body=3 status=ok
// SIG undefined FUN_148ceee4a(void)

undefined8 FUN_148ceee4a(void)

{
  return 0;
}



// FUNCTION 148ceee4e FUN_148ceee4e body=6 status=ok
// SIG undefined FUN_148ceee4e(void)

undefined8 FUN_148ceee4e(void)

{
  return 0xffffffff;
}



// FUNCTION 148ceee54 FUN_148ceee54 body=6 status=ok
// SIG undefined FUN_148ceee54(void)

undefined8 FUN_148ceee54(void)

{
  return 0xffffffff;
}



// FUNCTION 148ceee5a FUN_148ceee5a body=97 status=ok
// SIG undefined FUN_148ceee5a(void)

undefined8 FUN_148ceee5a(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_14018b740();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_14018b740();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
                    /* WARNING: Could not recover jumptable at 0x000148ceeeb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*plVar3 + 0x18))(plVar3);
        return uVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 148ceeebc FUN_148ceeebc body=182 status=ok
// SIG undefined FUN_148ceeebc(void)

void FUN_148ceeebc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    if (param_1 == 0) {
      return;
    }
    goto LAB_148ceeefb;
  }
  if (param_1 == 0) {
    return;
  }
  lVar3 = FUN_144a7cbb2();
  if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
      (*(longlong *)
        (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
       == lVar3 + 0x30)) && (*(longlong *)(param_1 + 0x3b8) != 0)) {
    lVar4 = FUN_144a5dd5e();
    lVar3 = *(longlong *)(param_1 + 0x3b8);
    if (lVar3 != 0) {
      param_2 = 0;
      if ((lVar4 == 0) || (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 == 0)) goto LAB_148ceeefb;
      if (*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38)) {
        param_2 = 0;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30) {
          param_2 = lVar3;
        }
        goto LAB_148ceeefb;
      }
    }
  }
  param_2 = 0;
LAB_148ceeefb:
  uVar2 = FUN_14018b740();
  lVar3 = FUN_144718840(param_1,uVar2);
  if (lVar3 == 0) {
    return;
  }
  FUN_1413222af(param_2,lVar3);
  return;
}



// FUNCTION 148ceef72 FUN_148ceef72 body=528 status=ok
// SIG undefined FUN_148ceef72(void)

undefined4 FUN_148ceef72(longlong param_1,byte param_2,ulonglong param_3,undefined8 param_4)

{
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  undefined8 ****ppppuVar9;
  undefined1 auStack_c8 [40];
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined8 local_90;
  undefined1 local_88;
  undefined7 uStack_87;
  ushort local_70;
  byte local_68;
  undefined4 local_60;
  undefined8 ***local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar4 = 0;
  if ((*(int *)(param_1 + 0xb8) != 0) && ((int)(param_3 & 0xff) < *(int *)(param_1 + 0x358))) {
    bVar2 = (char)*(int *)(param_1 + 0xb8) - 1;
    if (param_2 < bVar2) {
      bVar2 = param_2;
    }
    lVar5 = FUN_1409448ee((ulonglong)((uint)bVar2 * 0x18) + *(longlong *)(param_1 + 0xb0));
    if (lVar5 != 0) {
      uVar3 = FUN_14094497a(param_1,param_4,1);
      uVar4 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(param_1 + 0x378))) {
        local_94 = 0xffffffff;
        local_90 = *(undefined8 *)(*(longlong *)(param_1 + 0x350) + (param_3 & 0xff) * 8);
        local_a0 = 0xffffffff;
        local_9c = *(undefined8 *)(*(longlong *)(param_1 + 0x370) + (ulonglong)uVar3 * 8);
        uVar6 = FUN_14026198c();
        lVar7 = FUN_1417411cc(lVar5,&local_94,&local_a0,uVar6);
        if (lVar7 == 0) {
          puVar8 = &local_88;
          FUN_14092c00a(lVar5,puVar8,&local_94,&local_a0);
          uVar4 = FUN_14005fbd2(puVar8,0);
          pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
          if (pcVar1 != (code *)0x0) {
            if (0x18 < local_70) {
              puVar8 = (undefined1 *)CONCAT71(uStack_87,local_88);
            }
            (*pcVar1)(puVar8);
          }
          if (0x18 < local_70) {
            FUN_1400020a8(CONCAT71(uStack_87,local_88));
          }
        }
        else {
          local_88 = 0;
          local_60 = 0;
          FUN_14575a19a(&local_88,0);
          FUN_1448729ea(lVar7,local_58,&local_88);
          uVar4 = FUN_14005fbd2(local_58,0);
          pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
          if (pcVar1 != (code *)0x0) {
            ppppuVar9 = local_58;
            if (0x18 < local_40) {
              ppppuVar9 = (undefined8 ****)local_58[0];
            }
            (*pcVar1)(ppppuVar9);
          }
          if (0x18 < local_40) {
            FUN_1400020a8(local_58[0]);
          }
          FUN_144a5ac3a(&local_88);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cef184 FUN_148cef184 body=105 status=ok
// SIG undefined FUN_148cef184(void)

ulonglong FUN_148cef184(longlong param_1,longlong *param_2,char param_3,char param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    lVar2 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x28) + lVar2) == *param_2) {
        uVar1 = (lVar2 >> 4) * -0x2c8590b21642c859;
        if ((int)uVar1 != -1) {
          if (param_4 != '\0') {
            return uVar1;
          }
          if (*(char *)(*(longlong *)(param_1 + 0x28) + 0x28 + (longlong)(int)uVar1 * 0x170) !=
              '\x01') {
            return uVar1;
          }
        }
        break;
      }
      lVar2 = lVar2 + 0x170;
    } while ((longlong)*(int *)(param_1 + 0x30) * 0x170 - lVar2 != 0);
  }
  if (param_3 == '\0') {
    uVar1 = 0xff;
  }
  else {
    uVar1 = (ulonglong)*(byte *)(param_1 + 0x54);
  }
  return uVar1;
}



// FUNCTION 148cef1ee FUN_148cef1ee body=32 status=ok
// SIG undefined FUN_148cef1ee(void)

uint FUN_148cef1ee(longlong param_1,byte param_2,char param_3)

{
  uint uVar1;
  
  if (param_3 != '\0') {
    param_2 = (param_3 + (char)*(undefined4 *)(param_1 + 0x20)) - 1;
  }
  uVar1 = *(int *)(param_1 + 0x30) - 1U & 0xff;
  if ((int)(uint)param_2 < *(int *)(param_1 + 0x30)) {
    uVar1 = (uint)param_2;
  }
  return uVar1;
}



// FUNCTION 148cef252 FUN_148cef252 body=193 status=ok
// SIG undefined FUN_148cef252(void)

int FUN_148cef252(longlong param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  dVar1 = *(double *)(param_1 + 0x18);
  iVar3 = 1;
  if (0.0 < dVar1) {
    dVar2 = *(double *)(param_1 + 0x20);
    auVar5._8_4_ = (int)((ulonglong)param_2 >> 0x20);
    auVar5._0_8_ = param_2;
    auVar5._12_4_ = 0x45300000;
    dVar4 = dVar1 * -8.0 *
            (*(double *)(param_1 + 0x28) * dVar1 -
            (((double)CONCAT44(0x43300000,(int)param_2) - 4503599627370496.0) +
            (auVar5._8_8_ - 1.9342813113834067e+25))) + dVar2 * dVar2 * dVar1 * dVar1;
    if (dVar4 < 0.0) {
      dVar4 = sqrt(dVar4);
    }
    else {
      dVar4 = SQRT(dVar4);
    }
    iVar3 = (int)((-dVar1 * dVar2 + dVar4) /
                 (*(double *)(param_1 + 0x18) + *(double *)(param_1 + 0x18)));
  }
  return iVar3;
}



// FUNCTION 148cef314 FUN_148cef314 body=122 status=ok
// SIG undefined FUN_148cef314(void)

void FUN_148cef314(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148cf933c(param_1,iVar1);
    }
    FUN_148cf9326((longlong)iVar1 * 0x18 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_148cf93d0(param_1,param_2,iVar1 - param_2);
    FUN_148cf9432(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148cef3ae FUN_148cef3ae body=135 status=ok
// SIG undefined FUN_148cef3ae(void)

undefined8 FUN_148cef3ae(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_140d4a144();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140d4a144();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        uVar1 = (**(code **)(*plVar3 + 0x20))(plVar3);
        uVar4 = FUN_145a89edc();
        lVar5 = FUN_140d4a0a6(uVar1,uVar4);
        if (lVar5 != 0) {
          uVar1 = FUN_148cef436(lVar5,param_2);
          return uVar1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 148cef436 FUN_148cef436 body=306 status=ok
// SIG undefined FUN_148cef436(void)

uint FUN_148cef436(longlong *param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)((longlong)param_1 + 0xc3) == '\x01') {
    lVar5 = (**(code **)(*param_1 + 0x2b8))(param_1);
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0x178) == '\x03')) {
      lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
      if (lVar5 != 0) {
        lVar1 = *(longlong *)(lVar5 + 0x1f0);
        if (lVar1 == 0) {
          puVar7 = (undefined8 *)(lVar5 + 0x458);
        }
        else {
          puVar7 = (undefined8 *)(lVar1 + 0xf0);
        }
        lVar2 = param_1[0x1f];
        local_40 = lVar2;
        lVar6 = FUN_144a61814(*puVar7);
        if ((lVar6 != 0) && (*(char *)(lVar6 + 1) != '\x02')) {
          if (lVar1 == 0) {
            puVar7 = (undefined8 *)(lVar5 + 0x458);
          }
          else {
            puVar7 = (undefined8 *)(lVar1 + 0xf0);
          }
          uVar3 = *puVar7;
          lVar5 = FUN_144a61814(uVar3,param_1 + 0x1f);
          if (lVar5 != 0) {
            FUN_1405a424c(uVar3,lVar2);
          }
          param_1[0x1f] = 0;
        }
      }
    }
  }
  uVar4 = FUN_148cef998(param_1);
  if ((char)uVar4 == '\0') {
    *(undefined1 *)(param_1 + 0x18) = param_2;
    FUN_148cf0292(param_1,1);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cef56a FUN_148cef56a body=128 status=ok
// SIG undefined FUN_148cef56a(void)

undefined8 FUN_148cef56a(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_140d4a144();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140d4a144();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        uVar1 = (**(code **)(*plVar3 + 0x20))(plVar3);
        uVar4 = FUN_145a89edc();
        lVar5 = FUN_140d4a0a6(uVar1,uVar4);
        if (lVar5 != 0) {
          uVar1 = FUN_148cef5ea(lVar5);
          return uVar1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 148cef5ea FUN_148cef5ea body=695 status=ok
// SIG undefined FUN_148cef5ea(void)

undefined4 FUN_148cef5ea(longlong *param_1)

{
  longlong *plVar1;
  float fVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  float fVar11;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  float local_b0;
  undefined8 *local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar6 = (**(code **)(*param_1 + 0x2b8))();
  if (((lVar6 != 0) && (*(char *)(lVar6 + 0x178) == '\x03')) &&
     (*(char *)((longlong)param_1 + 0xc3) == '\x01')) {
    lVar6 = (**(code **)(*param_1 + 0x180))(param_1);
    if (lVar6 != 0) {
      lVar9 = *(longlong *)(lVar6 + 0x1f0);
      if (lVar9 == 0) {
        puVar10 = (undefined8 *)(lVar6 + 0x458);
      }
      else {
        puVar10 = (undefined8 *)(lVar9 + 0xf0);
      }
      lVar3 = param_1[0x1f];
      local_98 = lVar3;
      lVar7 = FUN_144a61814(*puVar10);
      if (((lVar7 != 0) && (*(char *)(lVar7 + 1) != '\x02')) &&
         (*(char *)((longlong)param_1 + 0xce) == '\x01')) {
        if (lVar9 == 0) {
          puVar10 = (undefined8 *)(lVar6 + 0x458);
        }
        else {
          puVar10 = (undefined8 *)(lVar9 + 0xf0);
        }
        plVar1 = param_1 + 0x1f;
        uVar4 = *puVar10;
        local_98 = lVar3;
        uVar8 = FUN_144a61814(uVar4);
        fVar11 = (float)FUN_144a1f182(uVar4,uVar8);
        if (*(longlong *)(lVar6 + 0x1f0) == 0) {
          puVar10 = (undefined8 *)(lVar6 + 0x458);
        }
        else {
          puVar10 = (undefined8 *)(*(longlong *)(lVar6 + 0x1f0) + 0xf0);
        }
        fVar2 = *(float *)(param_1 + 0x19);
        uVar4 = *puVar10;
        lVar9 = FUN_144a61814(uVar4,plVar1);
        if (lVar9 != 0) {
          FUN_1405a424c(uVar4,*plVar1);
        }
        *plVar1 = 0;
        if (*(longlong *)(lVar6 + 0x1f0) == 0) {
          puVar10 = (undefined8 *)(lVar6 + 0x458);
        }
        else {
          puVar10 = (undefined8 *)(*(longlong *)(lVar6 + 0x1f0) + 0xf0);
        }
        uVar4 = *puVar10;
        local_a8 = (undefined8 *)0x0;
        local_a0 = 0;
        FUN_1446efa72(&local_a8,0,3,0x10);
        puVar10 = local_a8;
        local_a0 = 3;
        *local_a8 = &PTR_LAB_14a1c8830;
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 1;
        lVar6 = DAT_14c758608 + 1;
        if (lVar9 == 0) {
          LOCK();
          UNLOCK();
          lVar9 = DAT_14c758608 + 2;
          lVar6 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar6;
        local_a8[2] = lVar9;
        *local_a8 = &PTR_FUN_14b962e10;
        local_a8[3] = 0;
        FUN_14485c47a(local_a8 + 3,param_1);
        puVar10[4] = param_1;
        local_98 = 0;
        local_90 = 0;
        FUN_14487d8d8(&local_98,&local_a8);
        local_58 = 1;
        local_b8 = 0;
        local_b0 = fVar11 + fVar2;
        FUN_1406f3fee(uVar4,plVar1,&local_98,fVar11 + fVar2);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
        FUN_1449db362(&local_a8);
      }
    }
  }
  uVar5 = FUN_148cef998(param_1);
  if ((char)uVar5 != '\0') {
    FUN_148cf0292(param_1,0);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cef8a2 FUN_148cef8a2 body=118 status=ok
// SIG undefined FUN_148cef8a2(void)

bool FUN_148cef8a2(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_140d4a144();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140d4a144();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        uVar1 = (**(code **)(*plVar3 + 0x20))(plVar3);
        uVar4 = FUN_145a89edc();
        lVar5 = FUN_140d4a0a6(uVar1,uVar4);
        return lVar5 != 0;
      }
    }
  }
  return false;
}



// FUNCTION 148cef918 FUN_148cef918 body=128 status=ok
// SIG undefined FUN_148cef918(void)

undefined8 FUN_148cef918(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_140d4a144();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140d4a144();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        uVar1 = (**(code **)(*plVar3 + 0x20))(plVar3);
        uVar4 = FUN_145a89edc();
        lVar5 = FUN_140d4a0a6(uVar1,uVar4);
        if (lVar5 != 0) {
          uVar1 = FUN_148cef998(lVar5);
          return uVar1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 148cef998 FUN_148cef998 body=151 status=ok
// SIG undefined FUN_148cef998(void)

undefined8 FUN_148cef998(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    cVar1 = FUN_144729dda(param_1 + 0x58);
    if (cVar1 != '\0') {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x18))();
      if (0 < *(int *)(lVar2 + 8)) {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x18))();
        local_20 = DAT_14c9a6400;
        local_18 = 0xffffffff;
        local_30 = DAT_14cbc46b0;
        local_28 = 0xffffffff;
        uVar3 = FUN_1400b1204(uVar3);
        goto LAB_148cefa13;
      }
    }
  }
  uVar3 = 0;
LAB_148cefa13:
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cefa30 FUN_148cefa30 body=317 status=ok
// SIG undefined FUN_148cefa30(void)

void FUN_148cefa30(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  double *local_80;
  uint local_78;
  double local_70;
  double dStack_68;
  double local_60;
  undefined1 local_58 [24];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2b8))();
  if (plVar1 != (longlong *)0x0) {
    if (ABS(*(float *)(param_1 + 0x1a)) <= 1e-08) {
      local_88 = 0;
      (**(code **)(*plVar1 + 800))(plVar1,0,local_58,&local_70);
      local_80 = (double *)0x0;
      local_78 = 3;
      FUN_1408fdf90(&local_80,3,0);
      *local_80 = local_70;
      local_80[1] = dStack_68;
      local_80[2] = local_60;
      if ((ulonglong)local_78 == 0) {
        dVar3 = 0.0;
      }
      else {
        dVar3 = *local_80;
        if (1 < (int)local_78) {
          uVar2 = 1;
          dVar4 = dVar3;
          do {
            dVar3 = local_80[uVar2];
            if (local_80[uVar2] <= dVar4) {
              dVar3 = dVar4;
            }
            uVar2 = uVar2 + 1;
            dVar4 = dVar3;
          } while (local_78 != uVar2);
        }
      }
      *(float *)((longlong)param_1 + 0xd4) = (float)(dVar3 + dVar3);
      if (local_80 != (double *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      *(float *)((longlong)param_1 + 0xd4) = *(float *)(param_1 + 0x1a);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148cefb6e FUN_148cefb6e body=269 status=ok
// SIG undefined FUN_148cefb6e(void)

void FUN_148cefb6e(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    cVar3 = FUN_144729dda(param_1 + 0x58);
    if (cVar3 != '\0') {
      lVar4 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x18))();
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,3,0x10);
      puVar1 = local_30;
      local_28 = 3;
      *local_30 = &PTR_LAB_14b3f7600;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      local_30[2] = lVar5;
      *local_30 = &PTR_FUN_14b962d30;
      local_30[3] = 0;
      FUN_14485c47a(local_30 + 3,param_1);
      puVar1[4] = param_1;
      FUN_140740a5e(lVar4 + 0x58,local_38,&local_30);
      FUN_1449db362(&local_30);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cefc7c FUN_148cefc7c body=330 status=ok
// SIG undefined FUN_148cefc7c(void)

void FUN_148cefc7c(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x2b8))();
  if (plVar3 != (longlong *)0x0) {
    uVar4 = FUN_144a800f8();
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar4);
    if (plVar3 != (longlong *)0x0) {
      uVar4 = FUN_144a800f8();
      plVar5 = (longlong *)FUN_144718840(plVar3,uVar4);
      if (plVar5 != (longlong *)0x0 && plVar3 != plVar5) {
        lVar6 = (**(code **)(*plVar5 + 0x40))(plVar5);
        local_30 = (undefined8 *)0x0;
        local_28 = 0;
        FUN_1446efa72(&local_30,0,3,0x10);
        puVar1 = local_30;
        local_28 = 3;
        *local_30 = &PTR_LAB_14b3e9bb0;
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 1;
        lVar2 = DAT_14c758608 + 1;
        if (lVar7 == 0) {
          LOCK();
          UNLOCK();
          lVar7 = DAT_14c758608 + 2;
          lVar2 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar2;
        local_30[2] = lVar7;
        *local_30 = &PTR_FUN_14b962da0;
        local_30[3] = 0;
        FUN_14485c47a(local_30 + 3,param_1);
        puVar1[4] = param_1;
        FUN_1418e001c(lVar6 + 0x10,local_38,&local_30);
        FUN_1449db362(&local_30);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cefdc8 FUN_148cefdc8 body=472 status=ok
// SIG undefined FUN_148cefdc8(void)

void FUN_148cefdc8(longlong *param_1)

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x2b8))();
  if (plVar3 == (longlong *)0x0) {
LAB_148cefe24:
    cVar2 = FUN_148cef998(param_1);
    if (cVar2 == '\0') goto LAB_148cefe34;
  }
  else {
    uVar4 = FUN_144a7fd54();
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar4);
    if (plVar3 == (longlong *)0x0) goto LAB_148cefe24;
    uVar4 = FUN_144a7fd54();
    plVar5 = (longlong *)FUN_144718840(plVar3,uVar4);
    if (plVar3 == plVar5) goto LAB_148cefe24;
    cVar2 = FUN_148cef998(param_1);
    if (cVar2 == '\0') {
      if (plVar5 != (longlong *)0x0) {
        uVar4 = (**(code **)(*plVar5 + 0x28))(plVar5);
        puVar6 = &local_48;
        local_30 = 4;
        local_48 = 0;
        local_28 = 1;
        local_58 = DAT_14cbc46b8;
        local_50 = 0xffffffff;
        FUN_140af060e(uVar4,&local_58,puVar6);
        pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
        if (pcVar1 != (code *)0x0) {
          if (0x18 < local_30) {
            puVar6 = (undefined4 *)CONCAT44(uStack_44,local_48);
          }
          (*pcVar1)(puVar6);
        }
        if (0x18 < local_30) {
          FUN_1400020a8(CONCAT44(uStack_44,local_48));
        }
      }
      goto LAB_148cefe34;
    }
    if (plVar5 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar5 + 0x28))(plVar5);
      puVar6 = &local_48;
      local_30 = 4;
      local_48 = 1;
      local_28 = 1;
      local_58 = DAT_14cbc46b8;
      local_50 = 0xffffffff;
      FUN_140af060e(uVar4,&local_58,puVar6);
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
      if (pcVar1 != (code *)0x0) {
        if (0x18 < local_30) {
          puVar6 = (undefined4 *)CONCAT44(uStack_44,local_48);
        }
        (*pcVar1)(puVar6);
      }
      if (0x18 < local_30) {
        FUN_1400020a8(CONCAT44(uStack_44,local_48));
      }
    }
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  FUN_148ceffa2(param_1);
  *(undefined1 *)(param_1 + 0x18) = 0;
LAB_148cefe34:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ceffa2 FUN_148ceffa2 body=451 status=ok
// SIG undefined FUN_148ceffa2(void)

void FUN_148ceffa2(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x2b8))();
  if (*(char *)((longlong)param_1 + 0xc2) == '\x01') {
    if (plVar3 == (longlong *)0x0) goto LAB_148cf00a2;
    uVar4 = FUN_144a7b040();
    plVar5 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar4);
    if (plVar5 != (longlong *)0x0) {
      uVar4 = FUN_144a7b040();
      plVar6 = (longlong *)FUN_144718840(plVar5,uVar4);
      if (plVar6 != (longlong *)0x0 && plVar5 != plVar6) {
        lVar7 = (**(code **)(*plVar6 + 0x20))(plVar6);
        if (lVar7 != 0) {
          FUN_1400bc96c(lVar7 + 0x90,&DAT_14cbc46b0);
        }
      }
    }
  }
  if ((plVar3 != (longlong *)0x0) && (*(char *)((longlong)param_1 + 0xcc) != '\0')) {
    uVar4 = FUN_144a800f8();
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar4);
    if (plVar3 != (longlong *)0x0) {
      uVar4 = FUN_144a800f8();
      plVar5 = (longlong *)FUN_144718840(plVar3,uVar4);
      if (plVar5 != (longlong *)0x0 && plVar3 != plVar5) {
        (**(code **)(*plVar5 + 0x98))(plVar5,1,DAT_14cbc46b0);
      }
    }
  }
LAB_148cf00a2:
  if ((char)param_1[0x18] == '\x01') {
    if ((longlong)(int)param_1[0x1e] != 0) {
      puVar8 = (undefined8 *)param_1[0x1d];
      puVar1 = puVar8 + (int)param_1[0x1e];
      do {
        local_48 = *puVar8;
        lVar7 = FUN_14479d2ce(&local_48);
        if ((lVar7 != 0) && (lVar7 = param_1[0x22], (longlong)(int)lVar7 != 0)) {
          lVar2 = param_1[0x21];
          lVar9 = 0;
          do {
            uVar4 = FUN_14479d2ce(&local_48);
            FUN_1479ee3aa(uVar4,*(undefined4 *)(lVar2 + lVar9),*(undefined4 *)(lVar2 + 4 + lVar9));
            lVar9 = lVar9 + 8;
          } while ((longlong)(int)lVar7 * 8 != lVar9);
        }
        puVar8 = puVar8 + 1;
      } while (puVar8 != puVar1);
    }
  }
  else {
    FUN_148cf031e(param_1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    FUN_148beb006(param_1 + 0x14);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf0166 FUN_148cf0166 body=277 status=ok
// SIG undefined FUN_148cf0166(void)

void FUN_148cf0166(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = (**(code **)(*param_1 + 0x180))();
  if ((lVar3 != 0) && (lVar1 = param_1[0x1f], lVar1 != 0)) {
    if (*(longlong *)(lVar3 + 0x1f0) == 0) {
      puVar4 = (undefined8 *)(lVar3 + 0x458);
    }
    else {
      puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
    }
    uVar2 = *puVar4;
    lVar3 = FUN_144a61814(uVar2,param_1 + 0x1f);
    if (lVar3 != 0) {
      FUN_1405a424c(uVar2,lVar1);
    }
    param_1[0x1f] = 0;
  }
  FUN_1401cb356();
  local_40 = param_1[0x23];
  local_38 = param_1[0x24];
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 0xc) = *(int *)(local_38 + 0xc) + 1;
    UNLOCK();
  }
  FUN_140d61352(&local_40);
  FUN_1401cb356();
  local_50 = param_1[0x2a];
  local_48 = param_1[0x2b];
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 0xc) = *(int *)(local_48 + 0xc) + 1;
    UNLOCK();
  }
  FUN_140d61352(&local_50);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_1406337e2(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf0292 FUN_148cf0292 body=128 status=ok
// SIG undefined FUN_148cf0292(void)

void FUN_148cf0292(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    cVar1 = FUN_144729dda(param_1 + 0x58);
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x18))();
      local_1c = 0;
      local_30 = DAT_14cbc46b0;
      local_28 = 0xffffffff;
      FUN_141094e00(uVar2,&local_30,param_2);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf0314 FUN_148cf0314 body=9 status=ok
// SIG undefined FUN_148cf0314(void)

void FUN_148cf0314(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 200) = param_2;
  return;
}



// FUNCTION 148cf031e FUN_148cf031e body=602 status=ok
// SIG undefined FUN_148cf031e(void)

void FUN_148cf031e(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 *local_88;
  undefined4 local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = (**(code **)(*param_1 + 0x2b8))();
  if (lVar5 != 0) {
    lVar8 = param_1[0x1e];
    if ((longlong)(int)lVar8 != 0) {
      lVar2 = param_1[0x1d];
      lVar9 = 0;
      do {
        local_78 = *(longlong *)(lVar2 + lVar9);
        lVar6 = FUN_14479d2ce(&local_78);
        if (lVar6 != 0) {
          uVar7 = FUN_14479d2ce(&local_78);
          lVar6 = *(longlong *)(lVar5 + 0x1c8);
          if (lVar6 == 0) {
            local_48 = DAT_14c8464f0;
            local_58 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
            uStack_50 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          }
          else {
            local_58 = *(undefined8 *)(lVar6 + 0x260);
            uStack_50 = *(undefined8 *)(lVar6 + 0x268);
            local_48 = *(undefined8 *)(lVar6 + 0x270);
          }
          FUN_145d8038a(uVar7,1,&local_58);
        }
        lVar9 = lVar9 + 8;
      } while ((longlong)(int)lVar8 * 8 != lVar9);
    }
    FUN_1401cb356();
    local_68 = param_1[0x23];
    local_60 = param_1[0x24];
    if (local_60 != 0) {
      LOCK();
      *(int *)(local_60 + 0xc) = *(int *)(local_60 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_68);
    uVar7 = FUN_1401cb356();
    local_88 = (undefined8 *)0x0;
    local_80 = 0;
    FUN_1446efa72(&local_88,0,3,0x10);
    puVar4 = local_88;
    local_80 = 3;
    *local_88 = &PTR_LAB_149e02020;
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
    local_88[2] = lVar8;
    *local_88 = &PTR_FUN_14b962e80;
    local_88[3] = 0;
    FUN_14485c47a(local_88 + 3,param_1);
    puVar4[4] = param_1;
    local_98 = 0;
    FUN_1405f67fc(uVar7,&local_78,&local_88,L"UOakActorScript_BioArmor_LerpFxActivation");
    if (param_1 + 0x23 != &local_78) {
      param_1[0x23] = local_78;
      local_78 = 0;
      plVar3 = (longlong *)param_1[0x24];
      param_1[0x24] = (longlong)local_70;
      local_70 = (longlong *)0x0;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
    }
    if (local_70 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_70 + 0x10))();
      }
    }
    FUN_1449db362(&local_88);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148cf057a FUN_148cf057a body=417 status=ok
// SIG undefined FUN_148cf057a(void)

ulonglong FUN_148cf057a(longlong param_1,float param_2)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  param_2 = param_2 + *(float *)(param_1 + 300);
  *(float *)(param_1 + 300) = param_2;
  param_2 = param_2 * *(float *)(param_1 + 0x128);
  if (1.0 <= param_2) {
    *(undefined1 *)(param_1 + 0x130) = 1;
    param_2 = 1.0;
  }
  lVar6 = 0;
  if ((longlong)*(int *)(param_1 + 0xf0) != 0) {
    lVar5 = *(longlong *)(param_1 + 0xe8);
    lVar6 = (longlong)*(int *)(param_1 + 0xf0) * 8;
    lVar8 = 0;
    do {
      local_68 = *(undefined8 *)(lVar5 + lVar8);
      uVar4 = FUN_14479d2ce(&local_68);
      FUN_1479ee3aa(uVar4,0,*(float *)(param_1 + 0xd4) * param_2);
      lVar8 = lVar8 + 8;
    } while (lVar6 != lVar8);
  }
  cVar2 = *(char *)(param_1 + 0x130);
  if (cVar2 != '\0') {
    if ((longlong)*(int *)(param_1 + 0xf0) != 0) {
      puVar7 = *(undefined8 **)(param_1 + 0xe8);
      puVar1 = puVar7 + *(int *)(param_1 + 0xf0);
      do {
        local_68 = *puVar7;
        lVar5 = FUN_14479d2ce(&local_68);
        if ((lVar5 != 0) && (iVar3 = *(int *)(param_1 + 0x110), (longlong)iVar3 != 0)) {
          lVar5 = *(longlong *)(param_1 + 0x108);
          lVar8 = 0;
          do {
            uVar4 = FUN_14479d2ce(&local_68);
            FUN_1479ee3aa(uVar4,*(undefined4 *)(lVar5 + lVar8),*(undefined4 *)(lVar5 + 4 + lVar8));
            lVar8 = lVar8 + 8;
          } while ((longlong)iVar3 * 8 != lVar8);
        }
        puVar7 = puVar7 + 1;
      } while (puVar7 != puVar1);
    }
    *(undefined4 *)(param_1 + 300) = 0;
    *(undefined1 *)(param_1 + 0x130) = 0;
    FUN_1401cb356();
    local_78 = *(undefined8 *)(param_1 + 0x118);
    local_70 = *(longlong *)(param_1 + 0x120);
    if (local_70 != 0) {
      LOCK();
      *(int *)(local_70 + 0xc) = *(int *)(local_70 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_78);
  }
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return (CONCAT71((int7)((ulonglong)lVar6 >> 8),cVar2) ^ 1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf071c FUN_148cf071c body=722 status=ok
// SIG undefined FUN_148cf071c(void)

void FUN_148cf071c(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x2b8))();
  if (*(char *)((longlong)param_1 + 0xc2) == '\x01') {
    if (plVar2 == (longlong *)0x0) goto LAB_148cf0769;
    uVar4 = FUN_144a7b040();
    plVar5 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar4);
    if (plVar5 != (longlong *)0x0) {
      uVar4 = FUN_144a7b040();
      plVar6 = (longlong *)FUN_144718840(plVar5,uVar4);
      if (plVar6 != (longlong *)0x0 && plVar5 != plVar6) {
        lVar3 = (**(code **)(*plVar6 + 0x20))(plVar6);
        if (lVar3 != 0) {
          FUN_1400bc8c2(lVar3 + 0x90,&DAT_14cbc46b0);
        }
      }
    }
  }
  if ((plVar2 != (longlong *)0x0) && (*(char *)((longlong)param_1 + 0xcc) != '\0')) {
    uVar4 = FUN_144a800f8();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar4);
    if (plVar2 != (longlong *)0x0) {
      uVar4 = FUN_144a800f8();
      plVar5 = (longlong *)FUN_144718840(plVar2,uVar4);
      if (plVar5 != (longlong *)0x0 && plVar2 != plVar5) {
        (**(code **)(*plVar5 + 0x98))(plVar5,0,DAT_14cbc46b0);
      }
    }
  }
LAB_148cf0769:
  lVar3 = (**(code **)(*param_1 + 0x2b8))(param_1);
  if (((lVar3 != 0) && (*(char *)(lVar3 + 0x178) == '\x03')) &&
     (*(char *)((longlong)param_1 + 0xc3) == '\x01')) {
    lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
    if (lVar3 != 0) {
      if (*(longlong *)(lVar3 + 0x1f0) == 0) {
        puVar7 = (undefined8 *)(lVar3 + 0x458);
      }
      else {
        puVar7 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
      }
      uVar4 = *puVar7;
      lVar3 = param_1[0x19];
      local_a8 = (undefined8 *)0x0;
      local_a0 = 0;
      FUN_1446efa72(&local_a8,0,3,0x10);
      puVar7 = local_a8;
      local_a0 = 3;
      *local_a8 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_a8[2] = lVar8;
      *local_a8 = &PTR_FUN_14b962ef0;
      local_a8[3] = 0;
      FUN_14485c47a(local_a8 + 3,param_1);
      puVar7[4] = param_1;
      local_98 = 0;
      local_90 = 0;
      FUN_14487d8d8(&local_98,&local_a8);
      local_58 = 1;
      local_b8 = 0;
      local_b0 = (int)lVar3;
      FUN_1406f3fee(uVar4,param_1 + 0x1f,&local_98,(int)lVar3);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
      FUN_1449db362(&local_a8);
    }
  }
  FUN_148cf09f0(param_1);
  FUN_148beb006(param_1 + 0x16);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf09f0 FUN_148cf09f0 body=412 status=ok
// SIG undefined FUN_148cf09f0(void)

void FUN_148cf09f0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = (**(code **)(*param_1 + 0x2b8))();
  if (lVar3 == 0) {
LAB_148cf0b11:
    if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  if ((char)param_1[0x1b] == '\x01') {
    lVar1 = (longlong)param_1 + 0xdc;
    lVar4 = FUN_14479d2ce(lVar1);
    if (lVar4 != 0) {
      cVar2 = FUN_144729dda(lVar1);
      if (cVar2 != '\0') {
        local_38 = 0x3ff0000000000000;
        local_30 = 0x3ff0000000000000;
        local_28 = 0x3ff0000000000000;
        local_48 = DAT_14c846508;
        local_58 = DAT_14c8464f8;
        uStack_50 = DAT_14c846500;
        lVar3 = *(longlong *)(lVar3 + 0x1c8);
        if (lVar3 == 0) {
          local_68 = DAT_14c8464f0;
          local_78 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          uStack_70 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        }
        else {
          local_78 = *(undefined8 *)(lVar3 + 0x260);
          uStack_70 = *(undefined8 *)(lVar3 + 0x268);
          local_68 = *(undefined8 *)(lVar3 + 0x270);
        }
        uVar5 = FUN_14479d2ce(lVar1);
        uVar6 = (**(code **)(*param_1 + 0x2b8))(param_1);
        local_88 = 1;
        local_98 = 1;
        local_a0 = 1;
        local_a8 = &local_38;
        local_90 = 0;
        lVar3 = FUN_140416e90(uVar6,uVar5,&local_78,&local_58);
        if (lVar3 != 0) {
          FUN_148cf0c1e(&local_80);
          FUN_148cf0ba0(lVar3 + 0x7a0,param_1,local_80);
        }
        goto LAB_148cf0b11;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_c8);
}



// FUNCTION 148cf0ba0 FUN_148cf0ba0 body=125 status=ok
// SIG undefined FUN_148cf0ba0(void)

void FUN_148cf0ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_14485c47a(&local_48);
  uStack_40 = param_3;
  FUN_14113f0c0(&local_48);
  local_38 = (undefined4)local_48;
  uStack_34 = local_48._4_4_;
  uStack_30 = (undefined4)uStack_40;
  uStack_2c = uStack_40._4_4_;
  FUN_1403350f6(param_1);
  FUN_144a7b126(param_1,&local_21,1);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf0c1e FUN_148cf0c1e body=184 status=ok
// SIG undefined FUN_148cf0c1e(void)

undefined8 * FUN_148cf0c1e(undefined8 *param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68 [8];
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc5668) {
    FUN_144b3d300(&DAT_14cbc5668);
    if (DAT_14cbc5668 == -1) {
      pwVar2 = L"BioArmorVFXTransitionDeactivation";
      puVar3 = local_68;
      for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *(undefined8 *)pwVar2;
        pwVar2 = pwVar2 + 4;
        puVar3 = puVar3 + 1;
      }
      local_28 = 0x6e;
      FUN_1446f470e(&DAT_14cbc5660,local_68,1);
      _Init_thread_footer(&DAT_14cbc5668);
    }
  }
  *param_1 = DAT_14cbc5660;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf0cd8 FUN_148cf0cd8 body=632 status=ok
// SIG undefined FUN_148cf0cd8(void)

void FUN_148cf0cd8(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined8 *local_b8;
  undefined4 local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar5 = (**(code **)(*param_1 + 0x2b8))();
  if ((lVar5 != 0) && (lVar10 = param_1[0x1e], (longlong)(int)lVar10 != 0)) {
    lVar2 = param_1[0x1d];
    lVar11 = 0;
    do {
      local_a8 = *(longlong *)(lVar2 + lVar11);
      lVar6 = FUN_14479d2ce(&local_a8);
      if (lVar6 != 0) {
        lVar6 = *(longlong *)(lVar5 + 0x1c8);
        if (lVar6 == 0) {
          uVar12 = (undefined4)DAT_14c8464f0;
          uVar13 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
          puVar7 = &DAT_14c8464e0;
        }
        else {
          uVar12 = (undefined4)*(undefined8 *)(lVar6 + 0x270);
          uVar13 = (undefined4)((ulonglong)*(undefined8 *)(lVar6 + 0x270) >> 0x20);
          puVar7 = (undefined8 *)(lVar6 + 0x260);
        }
        uVar9 = *puVar7;
        uVar4 = puVar7[1];
        uVar8 = FUN_14479d2ce(&local_a8);
        local_78 = CONCAT44(uVar13,uVar12);
        local_88 = uVar9;
        uStack_80 = uVar4;
        FUN_145d8038a(uVar8,1,&local_88);
      }
      lVar11 = lVar11 + 8;
    } while ((longlong)(int)lVar10 * 8 != lVar11);
  }
  FUN_1401cb356();
  local_98 = param_1[0x2a];
  local_90 = param_1[0x2b];
  if (local_90 != 0) {
    LOCK();
    *(int *)(local_90 + 0xc) = *(int *)(local_90 + 0xc) + 1;
    UNLOCK();
  }
  FUN_140d61352(&local_98);
  uVar9 = FUN_1401cb356();
  local_b8 = (undefined8 *)0x0;
  local_b0 = 0;
  FUN_1446efa72(&local_b8,0,3,0x10);
  puVar7 = local_b8;
  local_b0 = 3;
  *local_b8 = &PTR_LAB_149e02020;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_b8[2] = lVar10;
  *local_b8 = &PTR_FUN_14b962fb0;
  local_b8[3] = 0;
  FUN_14485c47a(local_b8 + 3,param_1);
  puVar7[4] = param_1;
  local_c8 = 0;
  FUN_1405f67fc(uVar9,&local_a8,&local_b8,L"UOakActorScript_BioArmor_LerpFxDeactivation");
  if (param_1 + 0x2a != &local_a8) {
    param_1[0x2a] = local_a8;
    local_a8 = 0;
    plVar3 = (longlong *)param_1[0x2b];
    param_1[0x2b] = (longlong)local_a0;
    local_a0 = (longlong *)0x0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_a0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_a0 + 0x10))();
    }
  }
  FUN_1449db362(&local_b8);
  if ((local_70 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148cf0f52 FUN_148cf0f52 body=430 status=ok
// SIG undefined FUN_148cf0f52(void)

ulonglong FUN_148cf0f52(longlong param_1,float param_2)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  param_2 = param_2 + *(float *)(param_1 + 0x164);
  *(float *)(param_1 + 0x164) = param_2;
  param_2 = param_2 * *(float *)(param_1 + 0x160);
  if (1.0 <= param_2) {
    *(undefined1 *)(param_1 + 0x168) = 1;
    param_2 = 1.0;
  }
  lVar7 = 0;
  if ((longlong)*(int *)(param_1 + 0xf0) != 0) {
    lVar6 = *(longlong *)(param_1 + 0xe8);
    lVar7 = (longlong)*(int *)(param_1 + 0xf0) * 8;
    lVar9 = 0;
    do {
      local_68 = *(undefined8 *)(lVar6 + lVar9);
      lVar4 = FUN_14479d2ce(&local_68);
      if (lVar4 != 0) {
        uVar5 = FUN_14479d2ce(&local_68);
        FUN_1479ee3aa(uVar5,0,*(float *)(param_1 + 0xd4) * param_2);
      }
      lVar9 = lVar9 + 8;
    } while (lVar7 != lVar9);
  }
  cVar2 = *(char *)(param_1 + 0x168);
  if (cVar2 != '\0') {
    if ((longlong)*(int *)(param_1 + 0xf0) != 0) {
      puVar8 = *(undefined8 **)(param_1 + 0xe8);
      puVar1 = puVar8 + *(int *)(param_1 + 0xf0);
      do {
        local_68 = *puVar8;
        lVar6 = FUN_14479d2ce(&local_68);
        if ((lVar6 != 0) && (iVar3 = *(int *)(param_1 + 0x148), (longlong)iVar3 != 0)) {
          lVar6 = *(longlong *)(param_1 + 0x140);
          lVar9 = 0;
          do {
            uVar5 = FUN_14479d2ce(&local_68);
            FUN_1479ee3aa(uVar5,*(undefined4 *)(lVar6 + lVar9),*(undefined4 *)(lVar6 + 4 + lVar9));
            lVar9 = lVar9 + 8;
          } while ((longlong)iVar3 * 8 != lVar9);
        }
        puVar8 = puVar8 + 1;
      } while (puVar8 != puVar1);
    }
    *(undefined4 *)(param_1 + 0x164) = 0;
    *(undefined1 *)(param_1 + 0x168) = 0;
    FUN_1401cb356();
    local_78 = *(undefined8 *)(param_1 + 0x150);
    local_70 = *(longlong *)(param_1 + 0x158);
    if (local_70 != 0) {
      LOCK();
      *(int *)(local_70 + 0xc) = *(int *)(local_70 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_78);
  }
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return (CONCAT71((int7)((ulonglong)lVar7 >> 8),cVar2) ^ 1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf1102 FUN_148cf1102 body=138 status=ok
// SIG undefined FUN_148cf1102(void)

void FUN_148cf1102(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x2608);
  if (0 < (longlong)iVar1) {
    iVar6 = -iVar1;
    uVar5 = (longlong)iVar1;
    do {
      lVar2 = *(longlong *)(param_1 + 0x2600);
      if (*(longlong *)(lVar2 + -8 + uVar5 * 8) == 0) {
        uVar4 = *(uint *)(param_1 + 0x2608);
        if (uVar5 != uVar4) {
          memmove((void *)(lVar2 + uVar5 * 8 + -8),(void *)(lVar2 + uVar5 * 8),
                  (longlong)(int)(uVar4 + iVar6) << 3);
          uVar4 = *(uint *)(param_1 + 0x2608);
        }
        *(uint *)(param_1 + 0x2608) = uVar4 - 1;
        FUN_148cf9674((longlong *)(param_1 + 0x2600));
      }
      iVar6 = iVar6 + 1;
      bVar3 = 1 < uVar5;
      uVar5 = uVar5 - 1;
    } while (bVar3);
  }
  return;
}



// FUNCTION 148cf118e FUN_148cf118e body=335 status=ok
// SIG undefined FUN_148cf118e(void)

void FUN_148cf118e(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_d8 [32];
  float local_b8;
  undefined1 local_a8 [24];
  longlong local_90;
  longlong local_80;
  undefined8 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_1 + 0x2660) != 0) {
    FUN_148cf12de(local_a8,*(longlong *)(param_1 + 0x2660) + 0x468);
    fVar6 = (float)FUN_148cf13a6(param_1,param_2);
    lVar4 = FUN_144a5dd5e();
    if (((*(int *)(lVar4 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
        (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
         lVar4 + 0x30)) && (lVar4 = param_2[0x14e], lVar4 != 0)) {
      cVar1 = *(char *)(*(longlong *)(param_1 + 0x2660) + 0x460);
      cVar3 = (**(code **)(*param_2 + 0x6c8))(param_2);
      if (cVar3 != '\0') {
        fVar7 = fVar6;
        if (cVar1 != '\0') {
          fVar7 = 1.0 - fVar6;
        }
        FUN_148cf16bc(param_1,param_2,fVar7);
      }
      uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x2660) + 0x458);
      uVar5 = FUN_1402d1dc0();
      local_b8 = fVar6;
      FUN_14186167e(lVar4,uVar5,local_50,uVar2);
    }
    if (local_80 != 0) {
      FUN_1400020a8();
    }
    if (local_90 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148cf12de FUN_148cf12de body=199 status=ok
// SIG undefined FUN_148cf12de(void)

undefined8 * FUN_148cf12de(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  *param_1 = *param_2;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar4 = *(undefined4 *)(param_2 + 2);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 2) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  _Src = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 6);
  uVar2 = param_2[5];
  *(int *)(param_1 + 6) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1405bd402(param_1 + 5,iVar1,0);
    FUN_1405bd2e2(param_1[5],uVar2,iVar1);
  }
  uVar2 = param_2[7];
  uVar6 = param_2[8];
  uVar7 = param_2[9];
  uVar8 = param_2[10];
  uVar9 = *(undefined8 *)((longlong)param_2 + 0x5e);
  *(undefined8 *)((longlong)param_1 + 0x56) = *(undefined8 *)((longlong)param_2 + 0x56);
  *(undefined8 *)((longlong)param_1 + 0x5e) = uVar9;
  param_1[9] = uVar7;
  param_1[10] = uVar8;
  param_1[7] = uVar2;
  param_1[8] = uVar6;
  return param_1;
}



// FUNCTION 148cf13a6 FUN_148cf13a6 body=788 status=ok
// SIG undefined FUN_148cf13a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148cf13a6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x2610);
  local_80 = 0;
  FUN_14485c47a(&local_80);
  local_78 = local_80;
  iVar2 = FUN_14043631c(plVar1,(uint)((ulonglong)local_80 >> 0x20) ^ (uint)local_80);
  if ((iVar2 != -1) && (*(longlong *)(param_2 + 0x3d0) != 0)) {
    local_88 = 0;
    FUN_14485c47a(&local_88,param_2);
    local_78 = local_88;
    iVar2 = FUN_14043631c(plVar1,(uint)((ulonglong)local_88 >> 0x20) ^ (uint)local_88);
    if (iVar2 == -1) {
      lVar4 = 0;
    }
    else {
      lVar4 = (longlong)iVar2 * 0x18 + *plVar1;
    }
    lVar4 = FUN_14479d2ce(lVar4 + 8);
    puVar3 = &DAT_14c846480;
    if (*(longlong *)(lVar4 + 0x1c8) != 0) {
      puVar3 = (undefined8 *)(*(longlong *)(lVar4 + 0x1c8) + 0x240);
    }
    divpd(_DAT_149934d80,*(undefined1 (*) [16])(puVar3 + 8));
  }
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf16bc FUN_148cf16bc body=326 status=ok
// SIG undefined FUN_148cf16bc(void)

void FUN_148cf16bc(longlong param_1,longlong *param_2,undefined4 param_3)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  bool bVar9;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58 [2];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = FUN_1447210f0();
  if (lVar3 != 0) {
    cVar1 = (**(code **)(*param_2 + 0x6c8))(param_2);
    if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x2660) != 0)) {
      local_58[0] = 0;
      local_58[1] = 0;
      bVar2 = FUN_14016169c(param_2,&local_44);
      lVar4 = *(longlong *)(param_1 + 0x2660);
      bVar9 = (bVar2 & local_44 != 0) != 0;
      puVar7 = (undefined8 *)(lVar4 + 0x500);
      if (bVar9) {
        puVar7 = (undefined8 *)(lVar4 + 0x528);
      }
      local_70 = *puVar7;
      puVar8 = (undefined4 *)(lVar4 + 0x530);
      if (!bVar9) {
        puVar8 = (undefined4 *)(lVar4 + 0x508);
      }
      local_68 = *puVar8;
      uStack_64 = puVar8[1];
      uStack_60 = puVar8[2];
      uStack_5c = puVar8[3];
      lVar6 = lVar4 + 0x540;
      if (!bVar9) {
        lVar6 = lVar4 + 0x518;
      }
      FUN_144a787a6(local_58,lVar6);
      lVar4 = FUN_141842d78(&local_70);
      if (lVar4 != 0) {
        uVar5 = FUN_141842d78(&local_70);
        lVar3 = FUN_1448e494c(lVar3,uVar5);
        if (lVar3 != 0) {
          FUN_14490d20c(lVar3,DAT_14cbc46c0,param_3);
        }
      }
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf1804 FUN_148cf1804 body=262 status=ok
// SIG undefined FUN_148cf1804(void)

void FUN_148cf1804(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != 0) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(param_2[2] + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (plVar3 = param_2,
       *(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
       lVar2 + 0x30)) {
      lVar2 = FUN_1402095ca();
      if ((*(int *)(param_2[2] + 0x38) < *(int *)(lVar2 + 0x38)) ||
         ((*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
           lVar2 + 0x30 || (plVar3 = (longlong *)param_2[0x2e2], plVar3 == (longlong *)0x0))))
      goto LAB_148cf18db;
    }
    if ((char)plVar3[0xba6] != '\x02') {
      lVar2 = (**(code **)(*param_2 + 0x5d8))(param_2);
      if (lVar2 != 0) {
        local_40 = 0;
        FUN_14485c47a(&local_40,lVar2);
        local_38 = local_40;
        iVar1 = FUN_14043631c(param_1 + 0x2610,(uint)((ulonglong)local_40 >> 0x20) ^ (uint)local_40)
        ;
        if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
        }
      }
    }
  }
LAB_148cf18db:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf1924 FUN_148cf1924 body=118 status=ok
// SIG undefined FUN_148cf1924(void)

ulonglong FUN_148cf1924(int *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_14485c47a(&local_20);
  if ((*param_1 != (int)local_20) ||
     (uVar2 = CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1), param_1[1] != local_20._4_4_)) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 == '\0') {
      uVar2 = FUN_144729dda(&local_20);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf1a98 FUN_148cf1a98 body=166 status=ok
// SIG undefined FUN_148cf1a98(void)

void FUN_148cf1a98(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    local_30 = 0;
    FUN_14485c47a(&local_30);
    FUN_148cf9f86(param_1 + 0x2610,local_30);
    lVar1 = FUN_144a5dd5e();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_148db8fbe(param_2,0xffffffff,0);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf1b56 FUN_148cf1b56 body=1234 status=ok
// SIG undefined FUN_148cf1b56(void)

void FUN_148cf1b56(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_218 [32];
  undefined4 local_1f8;
  undefined1 local_1f0;
  undefined1 local_1e8;
  longlong *local_1e0;
  longlong local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  void *local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined2 uStack_14c;
  undefined2 uStack_14a;
  undefined2 uStack_148;
  undefined4 uStack_146;
  undefined4 uStack_142;
  undefined4 uStack_13e;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_128 [24];
  longlong local_110;
  longlong local_100;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  void *local_a8;
  uint local_a0;
  undefined4 local_9c;
  undefined8 *local_98;
  ulonglong *local_90;
  longlong local_88;
  undefined4 local_80;
  longlong local_78 [3];
  undefined4 local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  void *local_48;
  uint local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if (*(longlong *)(param_1 + 0x2660) != 0) {
    lVar4 = (**(code **)(*param_2 + 0x5f0))(param_2);
    if (lVar4 != 0) {
      lVar6 = *(longlong *)(param_1 + 0x2660);
      local_c0 = *(undefined8 *)(lVar6 + 0x468);
      local_b8 = *(undefined4 *)(lVar6 + 0x470);
      uStack_b4 = *(undefined4 *)(lVar6 + 0x474);
      uStack_b0 = *(undefined4 *)(lVar6 + 0x478);
      uStack_ac = *(undefined4 *)(lVar6 + 0x47c);
      local_a8 = (void *)0x0;
      local_a0 = *(uint *)(lVar6 + 0x488);
      lVar7 = (longlong)(int)local_a0;
      pvVar3 = *(void **)(lVar6 + 0x480);
      if (lVar7 == 0) {
        local_9c = 0;
      }
      else {
        FUN_1446dd670(&local_a8,local_a0,0);
        memcpy(local_a8,pvVar3,lVar7 * 2);
        lVar6 = *(longlong *)(param_1 + 0x2660);
      }
      FUN_148cf12de(local_128,lVar6 + 0x468);
      if (param_3 == '\0') {
        uVar5 = FUN_1402d1dc0();
        local_1f8 = CONCAT31(local_1f8._1_3_,1);
        FUN_1405832a8(lVar4,uVar5,local_d0,0);
      }
      else {
        lVar6 = FUN_14050fd64();
        pvVar3 = local_a8;
        local_1c8 = local_c0;
        local_1c0 = local_b8;
        uStack_1bc = uStack_b4;
        uStack_1b8 = uStack_b0;
        uStack_1b4 = uStack_ac;
        local_1b0 = (void *)0x0;
        lVar7 = (longlong)(int)local_a0;
        local_1a8 = CONCAT44(local_1a8._4_4_,local_a0);
        local_1d0 = lVar4;
        if (lVar7 == 0) {
          local_1a8 = (ulonglong)local_a0;
        }
        else {
          FUN_1446dd670(&local_1b0,local_a0,0);
          memcpy(local_1b0,pvVar3,lVar7 * 2);
        }
        FUN_148cf12de(&local_1a0,local_128);
        local_78[2] = 0;
        local_60 = 0;
        local_58 = (undefined8 *)0x0;
        uStack_50 = 0;
        FUN_1446efa72(&local_58,0,0xb,0x10);
        uStack_50 = 0xb;
        *local_58 = &PTR_LAB_149e020b0;
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 1;
        lVar4 = DAT_14c758608 + 1;
        if (lVar7 == 0) {
          LOCK();
          UNLOCK();
          lVar7 = DAT_14c758608 + 2;
          lVar4 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar4;
        local_58[2] = lVar7;
        *local_58 = &PTR_FUN_14b963020;
        local_58[3] = local_1d0;
        local_58[4] = local_1c8;
        local_58[5] = CONCAT44(uStack_1bc,local_1c0);
        local_58[6] = CONCAT44(uStack_1b4,uStack_1b8);
        local_58[7] = local_1b0;
        local_1b0 = (void *)0x0;
        *(undefined4 *)(local_58 + 8) = (undefined4)local_1a8;
        *(undefined4 *)((longlong)local_58 + 0x44) = local_1a8._4_4_;
        local_1a8 = 0;
        local_58[9] = local_1a0;
        local_58[10] = local_198;
        local_58[0xb] = uStack_190;
        local_58[0xc] = local_188;
        local_188 = 0;
        *(undefined4 *)(local_58 + 0xd) = (undefined4)local_180;
        *(undefined4 *)((longlong)local_58 + 0x6c) = local_180._4_4_;
        local_180 = 0;
        local_58[0xe] = local_178;
        local_178 = 0;
        *(undefined4 *)(local_58 + 0xf) = (undefined4)local_170;
        *(undefined4 *)((longlong)local_58 + 0x7c) = local_170._4_4_;
        local_170 = 0;
        *(uint *)((longlong)local_58 + 0x9e) = CONCAT22(uStack_148,uStack_14a);
        *(undefined4 *)((longlong)local_58 + 0xa2) = uStack_146;
        *(undefined4 *)((longlong)local_58 + 0xa6) = uStack_142;
        *(undefined4 *)((longlong)local_58 + 0xaa) = uStack_13e;
        *(undefined4 *)(local_58 + 0x12) = local_158;
        *(undefined4 *)((longlong)local_58 + 0x94) = uStack_154;
        *(undefined4 *)(local_58 + 0x13) = uStack_150;
        *(uint *)((longlong)local_58 + 0x9c) = CONCAT22(uStack_14a,uStack_14c);
        *(undefined4 *)(local_58 + 0x10) = local_168;
        *(undefined4 *)((longlong)local_58 + 0x84) = uStack_164;
        *(undefined4 *)(local_58 + 0x11) = uStack_160;
        *(undefined4 *)((longlong)local_58 + 0x8c) = uStack_15c;
        FUN_144a450dc(local_78 + 2,&local_58);
        FUN_1449db362(&local_58);
        pvVar3 = local_a8;
        local_78[0] = 0;
        local_78[1] = 0;
        local_58 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
        uStack_50 = uStack_b0;
        uStack_4c = uStack_ac;
        local_48 = (void *)0x0;
        lVar4 = (longlong)(int)local_a0;
        local_40 = local_a0;
        if (lVar4 == 0) {
          local_3c = 0;
        }
        else {
          FUN_1446dd670(&local_48,local_a0,0);
          memcpy(local_48,pvVar3,lVar4 * 2);
        }
        local_90 = &local_38;
        local_98 = &local_58;
        FUN_140a1e2b2(&local_88);
        local_1e0 = local_78;
        local_1e8 = 0;
        local_1f0 = 0;
        local_1f8 = 0;
        FUN_140421d62(lVar6 + 0x1e8,local_138,&local_88,local_78 + 2);
        FUN_140861e20(local_88,local_80);
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        if (local_48 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_78[0] != 0) {
          FUN_1400020a8();
        }
        FUN_1449db362(local_78 + 2);
        if (local_130 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_130 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_130)(local_130);
            LOCK();
            piVar2 = (int *)((longlong)local_130 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_130 + 0x10))(local_130);
            }
          }
        }
        FUN_1440d4e78(&local_1d0);
      }
      if (local_100 != 0) {
        FUN_1400020a8();
      }
      if (local_110 != 0) {
        FUN_1400020a8();
      }
      if (local_a8 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf2030 FUN_148cf2030 body=140 status=ok
// SIG undefined FUN_148cf2030(void)

void FUN_148cf2030(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    local_38 = 0;
    FUN_14485c47a(&local_38);
    local_30 = local_38;
    iVar1 = FUN_14043631c(param_1 + 0x2610,(uint)((ulonglong)local_38 >> 0x20) ^ (uint)local_38);
    if (iVar1 != -1) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf20d2 FUN_148cf20d2 body=20 status=ok
// SIG undefined FUN_148cf20d2(void)

bool FUN_148cf20d2(longlong param_1,int param_2)

{
  int iVar1;
  
  param_2 = param_2 + *(int *)(param_1 + 4);
  iVar1 = 0;
  if (0 < param_2) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 4) = iVar1;
  return 0 < param_2;
}



// FUNCTION 148cf20e6 FUN_148cf20e6 body=22 status=ok
// SIG undefined FUN_148cf20e6(void)

void FUN_148cf20e6(char *param_1,char param_2)

{
  if (param_2 == '\0') {
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
  }
  *param_1 = param_2;
  return;
}



// FUNCTION 148cf2102 FUN_148cf2102 body=41 status=ok
// SIG undefined FUN_148cf2102(void)

void FUN_148cf2102(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14b5d2480;
  return;
}



// FUNCTION 148cf2132 FUN_148cf2132 body=116 status=ok
// SIG undefined FUN_148cf2132(void)

undefined8 * FUN_148cf2132(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x940,0x10);
  *(undefined4 *)((longlong)puVar1 + 0xf) = 0;
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14b5d0f40;
  FUN_144894d4c(puVar1 + 4);
  puVar1[0x11c] = 0;
  puVar1[0x11d] = 0;
  puVar1[0x11e] = 0;
  puVar1[0x11f] = 0;
  puVar1[0x120] = 0;
  puVar1[0x121] = 0;
  puVar1[0x122] = 0;
  puVar1[0x123] = 0;
  puVar1[0x124] = 0;
  puVar1[0x125] = 0;
  *(undefined4 *)((longlong)puVar1 + 0x92f) = 0;
  *(undefined2 *)(puVar1 + 2) = 0x101;
  return puVar1;
}



// FUNCTION 148cf21a6 FUN_148cf21a6 body=163 status=ok
// SIG undefined FUN_148cf21a6(void)

void FUN_148cf21a6(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_14016169c(param_2,&local_1c);
  lVar2 = 0x908;
  if (local_1c == 0) {
    lVar2 = 0x8e0;
  }
  if (cVar1 == '\0') {
    lVar2 = 0x8e0;
  }
  lVar2 = FUN_140a1de56(lVar2 + param_1);
  if (lVar2 != 0) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar2);
    }
    local_28 = lVar2 + 0x28;
    local_30 = lVar2;
    FUN_145bd965a(param_1 + 0x20,&local_30,0x3f800000);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf224a FUN_148cf224a body=155 status=ok
// SIG undefined FUN_148cf224a(void)

void FUN_148cf224a(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_14016169c(param_2,&local_1c);
  lVar2 = 0x908;
  if (local_1c == 0) {
    lVar2 = 0x8e0;
  }
  if (cVar1 == '\0') {
    lVar2 = 0x8e0;
  }
  lVar2 = FUN_140a1de56(lVar2 + param_1);
  if (lVar2 != 0) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar2);
    }
    local_28 = lVar2 + 0x28;
    local_30 = lVar2;
    FUN_14789f084(param_1 + 0x20);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf22ec FUN_148cf22ec body=31 status=ok
// SIG undefined FUN_148cf22ec(void)

void FUN_148cf22ec(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x758,0x10);
  FUN_1410fd48e(uVar1);
  return;
}



// FUNCTION 148cf2332 FUN_148cf2332 body=210 status=ok
// SIG undefined FUN_148cf2332(void)

void FUN_148cf2332(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe8,0x10);
  puVar1[1] = 0;
  *(undefined4 *)((longlong)puVar1 + 0xf) = 0;
  *puVar1 = &PTR_FUN_14b5d1040;
  puVar1[3] = 0xc234000040400000;
  *(undefined4 *)(puVar1 + 4) = 0x40400000;
  puVar1[5] = &PTR_FUN_14b00bdf8;
  puVar1[0xb] = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined8 *)((longlong)puVar1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x6c) = 0;
  puVar1[0xf] = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  *(undefined4 *)(puVar1 + 0x13) = 0x7f7fffff;
  *(undefined2 *)((longlong)puVar1 + 0x9c) = 0x404;
  puVar1[6] = &DAT_14a176f00;
  *(undefined8 *)((longlong)puVar1 + 0xc9) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xd1) = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xdc) = 0x240000000;
  *(undefined4 *)((longlong)puVar1 + 0xe4) = 0;
  *(undefined2 *)(puVar1 + 2) = 0x101;
  return;
}



// FUNCTION 148cf2404 FUN_148cf2404 body=526 status=ok
// SIG undefined FUN_148cf2404(void)

undefined4 FUN_148cf2404(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = FUN_1487ffe52();
  local_60 = DAT_14cbc48e8;
  local_68 = DAT_14cbc48e0;
  FUN_1448075d0(local_58);
  uVar2 = FUN_144a06846(param_2,local_58);
  uVar3 = FUN_140b963dc(uVar2,0x40400000);
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_60 = DAT_14cbc4900;
  local_68 = DAT_14cbc48f8;
  FUN_1448075d0(local_58);
  uVar2 = FUN_144a06846(param_2,local_58);
  uVar3 = FUN_140b963dc(uVar2,0xc2340000);
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_60 = DAT_14cbc4918;
  local_68 = DAT_14cbc4910;
  FUN_1448075d0(local_58);
  uVar2 = FUN_144a06846(param_2,local_58);
  fVar4 = (float)FUN_140b963dc(uVar2,0x40400000);
  if (fVar4 <= 0.01) {
    fVar4 = 0.01;
  }
  *(float *)(param_1 + 0x20) = fVar4;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_60 = DAT_14cbc4930;
  local_68 = DAT_14cbc4928;
  FUN_1448075d0(local_58);
  uVar2 = FUN_144a06846(param_2,local_58);
  FUN_147095300(uVar2,param_1 + 0x30);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  *(undefined1 *)(param_1 + 0xd8) = 7;
  local_60 = DAT_14cbc4948;
  local_68 = DAT_14cbc4940;
  FUN_1448075d0(local_58);
  FUN_14880163c(param_2,local_58,param_1 + 0xd8);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf2626 FUN_148cf2626 body=31 status=ok
// SIG undefined FUN_148cf2626(void)

void FUN_148cf2626(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x1300,0x10);
  FUN_145a28622(uVar1);
  return;
}



// FUNCTION 148cf264c FUN_148cf264c body=121 status=ok
// SIG undefined FUN_148cf264c(void)

void FUN_148cf264c(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *(undefined4 *)((longlong)puVar2 + 0xf) = 0;
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14b962010;
  *(undefined1 *)(puVar2 + 3) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x1c) = 0x400000003f800000;
  *(undefined1 *)((longlong)puVar2 + 0x24) = 0;
  *(undefined1 *)(puVar2 + 5) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x2c) = 0x400000003f800000;
  *(undefined1 *)((longlong)puVar2 + 0x34) = 0;
  puVar2[7] = 0xbf800000bf800000;
  puVar2[8] = 0;
  uVar1 = DAT_14c846500;
  puVar2[9] = DAT_14c8464f8;
  puVar2[10] = uVar1;
  puVar2[0xb] = DAT_14c846508;
  *(undefined2 *)(puVar2 + 2) = 0x101;
  return;
}



// FUNCTION 148cf26cc FUN_148cf26cc body=31 status=ok
// SIG undefined FUN_148cf26cc(void)

void FUN_148cf26cc(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x748,0x10);
  FUN_145c26e30(uVar1);
  return;
}



// FUNCTION 148cf2710 FUN_148cf2710 body=240 status=ok
// SIG undefined FUN_148cf2710(void)

void FUN_148cf2710(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  
  if ((param_3 != 0) && (lVar1 = *(longlong *)(param_3 + 0x28), *(longlong *)(lVar1 + 0xe0) != 0)) {
    lVar3 = FUN_144a2f878();
    lVar1 = *(longlong *)(lVar1 + 0xe0);
    if ((((lVar1 != 0) &&
         (((lVar3 != 0 && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
          (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))))) &&
        (((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
           lVar3 + 0x30 && (lVar1 = *(longlong *)(&DAT_00006850 + lVar1), lVar1 != 0)) &&
         ((&DAT_00001100)[lVar1] == '\n')))) && (*(longlong *)(lVar1 + 0x110) != 0)) {
      if (*(char *)(lVar1 + 0x1dc0) == '\x03') {
        cVar4 = '\x02';
      }
      else if (*(char *)(lVar1 + 0x1dc0) == '\x01') {
        cVar4 = '\x03';
      }
      else {
        cVar4 = ((*(byte *)(lVar1 + 0x44b8) & 2) != 0) * '\x03' + '\x01';
      }
      if (*(char *)(param_1 + 0x740) != cVar4) {
        *(char *)(param_1 + 0x740) = cVar4;
        *(undefined2 *)(param_1 + 0x1e0) = 1;
        FUN_148cf2800(param_1);
      }
      FUN_1412e29a6(param_1,param_2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 148cf2800 FUN_148cf2800 body=1126 status=ok
// SIG undefined FUN_148cf2800(void)

void FUN_148cf2800(longlong param_1,char param_2)

{
  void **ppvVar1;
  undefined8 *puVar2;
  void *pvVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_228 [32];
  uint local_208 [2];
  uint local_200;
  undefined8 uStack_1fc;
  uint uStack_1f4;
  undefined4 local_1f0;
  undefined **local_1e8;
  undefined *local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1ac;
  undefined4 local_1a4;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined2 local_174;
  void *local_170;
  ulonglong uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  int local_140;
  undefined1 uStack_13c;
  undefined3 uStack_13b;
  undefined5 local_138;
  undefined3 uStack_133;
  undefined8 uStack_130;
  undefined4 local_128;
  uint local_120;
  undefined8 uStack_11c;
  uint uStack_114;
  undefined4 local_110;
  undefined **local_108;
  undefined *local_100;
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
  undefined4 local_98;
  undefined2 local_94;
  void *local_90;
  ulonglong uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  int iStack_60;
  undefined1 uStack_5c;
  undefined3 uStack_5b;
  undefined4 uStack_58;
  uint uStack_54;
  undefined8 uStack_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_228;
  uVar5 = 0;
  local_208[0] = 0;
  local_200 = local_200 & 0xffffff00;
  uStack_1fc = 0;
  uStack_1f4 = uStack_1f4 & 0xffff0000;
  local_1f0 = 0x41200000;
  local_1e8 = &PTR_FUN_14b00bdf8;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1ac = 0xffffffff00000080;
  local_1a4 = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0x7f7fffff;
  local_174 = 0x404;
  local_1e0 = &DAT_14a176f00;
  uStack_130 = 0;
  local_128 = 0;
  local_120 = local_120 & 0xffffff00;
  uStack_114 = uStack_114 & 0xffff0000;
  uStack_11c = 0;
  local_170 = (void *)0x0;
  uStack_168 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_150 = 0;
  uStack_148._0_5_ = 0;
  uStack_148._5_3_ = 0;
  local_140 = 0;
  uStack_13c = 0;
  uStack_13b = 0;
  local_138 = 0;
  local_110 = 0x41200000;
  local_108 = &PTR_FUN_14b00bdf8;
  local_d8 = 0;
  local_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_cc = 0xffffffff00000080;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0x7f7fffff;
  local_94 = 0x404;
  local_100 = &DAT_14a176f00;
  uStack_50 = 0;
  local_48 = 0;
  iStack_60 = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_58 = 0;
  uStack_54 = uStack_54 & 0xffffff00;
  uStack_70 = 0;
  local_68._0_5_ = 0;
  local_68._5_3_ = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = (void *)0x0;
  uStack_88 = 0;
  if ((byte)(param_2 - 2U) < 3) {
    FUN_14118f596(local_208,(&DAT_14b963b70)[(byte)(param_2 - 2U)] + param_1);
    uVar5 = (ulonglong)local_208[0];
  }
  pvVar3 = local_170;
  *(byte *)(param_1 + 0x100) = (byte)(uVar5 >> 1) & 1;
  *(uint *)(param_1 + 0x18) = (uint)uVar5 >> 2 & 3 | *(uint *)(param_1 + 0x18) & 0xfffffffc;
  *(uint *)(param_1 + 0x20) = local_200;
  *(undefined4 *)(param_1 + 0x24) = (undefined4)uStack_1fc;
  *(undefined4 *)(param_1 + 0x28) = uStack_1fc._4_4_;
  *(uint *)(param_1 + 0x2c) = uStack_1f4;
  *(undefined4 *)(param_1 + 0x30) = local_1f0;
  *(undefined4 *)(param_1 + 0xa8) = local_178;
  *(undefined2 *)(param_1 + 0xac) = local_174;
  ppvVar1 = (void **)(param_1 + 0xb0);
  if (ppvVar1 != &local_170) {
    iVar4 = (int)uStack_168;
    lVar6 = (longlong)(int)uStack_168;
    *(int *)(param_1 + 0xb8) = (int)uStack_168;
    if ((int)uStack_168 == 0 && *(int *)(param_1 + 0xbc) == 0) {
      *(undefined4 *)(param_1 + 0xbc) = 0;
    }
    else {
      FUN_140501c24(ppvVar1,uStack_168 & 0xffffffff);
      if (iVar4 != 0) {
        memcpy(*ppvVar1,pvVar3,lVar6 * 0x1c);
      }
    }
  }
  iVar4 = local_140;
  *(undefined8 *)(param_1 + 0xc0) = local_160;
  *(undefined4 *)(param_1 + 200) = (undefined4)uStack_158;
  *(undefined4 *)(param_1 + 0xcc) = uStack_158._4_4_;
  *(undefined4 *)(param_1 + 0xd0) = (undefined4)local_150;
  *(undefined4 *)(param_1 + 0xd4) = local_150._4_4_;
  puVar2 = (undefined8 *)(param_1 + 0xd8);
  if (puVar2 != &uStack_148) {
    lVar6 = (longlong)local_140;
    pvVar3 = (void *)CONCAT35(uStack_148._5_3_,(undefined5)uStack_148);
    *(int *)(param_1 + 0xe0) = local_140;
    if (local_140 == 0 && *(int *)(param_1 + 0xe4) == 0) {
      *(undefined4 *)(param_1 + 0xe4) = 0;
    }
    else {
      FUN_1446dd670(puVar2,local_140);
      if (iVar4 != 0) {
        memcpy((void *)*puVar2,pvVar3,lVar6 * 2);
      }
    }
  }
  pvVar3 = local_90;
  *(undefined4 *)(param_1 + 0xf8) = local_128;
  *(ulonglong *)(param_1 + 0xe8) = CONCAT35(uStack_133,local_138);
  *(undefined8 *)(param_1 + 0xf0) = uStack_130;
  *(undefined4 *)(param_1 + 0x110) = local_110;
  *(uint *)(param_1 + 0x100) = local_120;
  *(undefined4 *)(param_1 + 0x104) = (undefined4)uStack_11c;
  *(undefined4 *)(param_1 + 0x108) = uStack_11c._4_4_;
  *(uint *)(param_1 + 0x10c) = uStack_114;
  *(undefined2 *)(param_1 + 0x18c) = local_94;
  *(undefined4 *)(param_1 + 0x188) = local_98;
  ppvVar1 = (void **)(param_1 + 400);
  if (ppvVar1 != &local_90) {
    iVar4 = (int)uStack_88;
    lVar6 = (longlong)(int)uStack_88;
    *(int *)(param_1 + 0x198) = (int)uStack_88;
    if ((int)uStack_88 == 0 && *(int *)(param_1 + 0x19c) == 0) {
      *(undefined4 *)(param_1 + 0x19c) = 0;
    }
    else {
      FUN_140501c24(ppvVar1,uStack_88 & 0xffffffff);
      if (iVar4 != 0) {
        memcpy(*ppvVar1,pvVar3,lVar6 * 0x1c);
      }
    }
  }
  iVar4 = iStack_60;
  *(undefined8 *)(param_1 + 0x1a0) = local_80;
  *(undefined4 *)(param_1 + 0x1a8) = (undefined4)uStack_78;
  *(undefined4 *)(param_1 + 0x1ac) = uStack_78._4_4_;
  *(undefined4 *)(param_1 + 0x1b0) = (undefined4)uStack_70;
  *(undefined4 *)(param_1 + 0x1b4) = uStack_70._4_4_;
  puVar2 = (undefined8 *)(param_1 + 0x1b8);
  if (puVar2 != &local_68) {
    lVar6 = (longlong)iStack_60;
    pvVar3 = (void *)CONCAT35(local_68._5_3_,(undefined5)local_68);
    *(int *)(param_1 + 0x1c0) = iStack_60;
    if (iStack_60 == 0 && *(int *)(param_1 + 0x1c4) == 0) {
      *(undefined4 *)(param_1 + 0x1c4) = 0;
    }
    else {
      FUN_1446dd670(puVar2,iStack_60);
      if (iVar4 != 0) {
        memcpy((void *)*puVar2,pvVar3,lVar6 * 2);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x1d8) = local_48;
  *(undefined4 *)(param_1 + 0x1c8) = uStack_58;
  *(uint *)(param_1 + 0x1cc) = uStack_54;
  *(undefined4 *)(param_1 + 0x1d0) = (undefined4)uStack_50;
  *(undefined4 *)(param_1 + 0x1d4) = uStack_50._4_4_;
  FUN_14051f4c4(&local_108);
  FUN_14051f4c4(&local_1e8);
  if ((local_40 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf2c6e FUN_148cf2c6e body=52 status=ok
// SIG undefined FUN_148cf2c6e(void)

void FUN_148cf2c6e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x360);
  memset(_Dst,0,0x360);
  FUN_145c38336(_Dst);
  return;
}



// FUNCTION 148cf2ca8 FUN_148cf2ca8 body=177 status=ok
// SIG undefined FUN_148cf2ca8(void)

void FUN_148cf2ca8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe8,0x10);
  puVar1[1] = 0;
  *(undefined4 *)((longlong)puVar1 + 0xf) = 0;
  *puVar1 = &PTR_FUN_14b5d11c0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = &PTR_FUN_14b00bdf8;
  puVar1[0xc] = 0;
  *(undefined4 *)(puVar1 + 0xd) = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x74) = 0;
  puVar1[0x10] = 0;
  *(undefined4 *)(puVar1 + 0x11) = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  *(undefined4 *)(puVar1 + 0x14) = 0x7f7fffff;
  *(undefined2 *)((longlong)puVar1 + 0xa4) = 0x404;
  puVar1[7] = &DAT_14a176f00;
  *(undefined8 *)((longlong)puVar1 + 0xd4) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xdc) = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  *(undefined2 *)(puVar1 + 2) = 0x101;
  return;
}



// FUNCTION 148cf2d6c FUN_148cf2d6c body=681 status=ok
// SIG undefined FUN_148cf2d6c(void)

void FUN_148cf2d6c(longlong param_1,float param_2,longlong param_3)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  double dVar6;
  undefined1 auStack_a8 [32];
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_3 + 0x28) != 0) {
    lVar3 = FUN_140344898();
    lVar4 = *(longlong *)(param_3 + 0x28);
    if ((((lVar4 != 0) && (lVar3 != 0)) && (lVar2 = *(longlong *)(lVar4 + 0x10), lVar2 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
      if (*(longlong *)(lVar4 + 0xe8) != 0) {
        lVar3 = FUN_144a5dd5e();
        lVar4 = *(longlong *)(lVar4 + 0xe8);
        if (((lVar4 != 0) && (lVar3 != 0)) &&
           ((lVar2 = *(longlong *)(lVar4 + 0x10), lVar2 != 0 &&
            ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
             (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
              lVar3 + 0x30)))))) {
          lVar3 = FUN_14071752e(lVar4);
          if (*(longlong *)(lVar4 + 0x31f8) != 0) {
            *(undefined1 *)(*(longlong *)(lVar4 + 0x31f8) + 0x171) = 1;
          }
          if (lVar3 != 0) {
            lVar4 = FUN_148cf3016(param_1,lVar3);
            *(float *)(param_1 + 0xe0) = param_2 + *(float *)(param_1 + 0xe0);
            if (lVar4 != 0) {
              lVar3 = FUN_1447e736e(param_1 + 0xb8);
              if (lVar3 == 0) {
                param_1 = param_1 + 0x38;
              }
              else {
                param_1 = FUN_1447e736e(param_1 + 0xb8);
                param_1 = param_1 + 0x30;
              }
              if (param_1 == 0) {
                fVar5 = 1.0;
              }
              else {
                fVar5 = (float)FUN_1448c9f94(param_1);
              }
              lVar4 = FUN_14069ce20(lVar4);
              if (lVar4 != 0) {
                if (1.0 <= fVar5) {
                  fVar5 = 1.0;
                }
                if (fVar5 <= 0.0) {
                  fVar5 = 0.0;
                }
                FUN_144a76660(param_3 + 0x48,&local_70);
                FUN_14096607e(lVar4,&local_58,param_3 + 0x30,&local_70);
                local_78 = local_48 - *(double *)(param_3 + 0x40);
                local_80 = local_50 - *(double *)(param_3 + 0x38);
                local_88 = local_58 - *(double *)(param_3 + 0x30);
                FUN_144a79a9c(&local_88,&local_70);
                dVar1 = *(double *)(param_3 + 0x50);
                dVar6 = local_68 - dVar1;
                if (180.0 < ABS(dVar6)) {
                  dVar6 = ((double)((-(ulonglong)(0.0 < local_68) >> 0x20 & 0xbff00000) << 0x20 |
                                   ~-(ulonglong)(0.0 < local_68) &
                                   *(ulonglong *)(&DAT_149f4cb90 + (ulonglong)(local_68 < 0.0) * 8))
                           * 360.0 + local_68) - dVar1;
                }
                *(double *)(param_3 + 0x48) =
                     (local_70 - *(double *)(param_3 + 0x48)) * (double)fVar5 +
                     *(double *)(param_3 + 0x48);
                *(double *)(param_3 + 0x50) = dVar6 * (double)fVar5 + dVar1;
              }
              goto LAB_148cf2dd1;
            }
          }
        }
      }
      *(undefined4 *)(param_1 + 0xe0) = 0;
    }
  }
LAB_148cf2dd1:
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf3016 FUN_148cf3016 body=517 status=ok
// SIG undefined FUN_148cf3016(void)

undefined8 FUN_148cf3016(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 ***pppuVar8;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [40];
  undefined4 local_90;
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar6 = *(longlong *)(param_1 + 0x20);
  if (lVar6 == 0) {
    uVar5 = FUN_14016979c();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x20) = lVar6;
  }
  plVar1 = (longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x28) == 0) {
    uVar5 = 0;
    if ((lVar6 == 0) || (*plVar1 == 0)) goto LAB_148cf30b3;
    plVar2 = *(longlong **)(lVar6 + 0xb8);
    if (plVar2 == (longlong *)0x0) {
LAB_148cf320b:
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    else {
      cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar4 == '\0') goto LAB_148cf320b;
      uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar6 = FUN_144aff482(uVar5,plVar1);
      *(longlong *)(param_1 + 0x28) = lVar6;
      if (lVar6 != 0) goto LAB_148cf30de;
    }
    uVar5 = 0;
    goto LAB_148cf30b3;
  }
LAB_148cf30de:
  uVar5 = FUN_147f5dbf6(param_2);
  local_b8[0] = 0;
  local_90 = 0;
  FUN_1456bb102(local_b8,uVar5);
  local_88[0] = 0;
  local_60 = 0;
  lVar6 = *(longlong *)(param_1 + 0x20);
  if (lVar6 == 0) {
    uVar5 = FUN_14016979c();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x20) = lVar6;
  }
  lVar7 = *(longlong *)(param_1 + 0x28);
  if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*plVar1 != 0)) {
    plVar2 = *(longlong **)(lVar6 + 0xb8);
    if (plVar2 == (longlong *)0x0) {
LAB_148cf3218:
      lVar7 = 0;
    }
    else {
      cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar4 == '\0') goto LAB_148cf3218;
      uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar7 = FUN_144aff482(uVar5,plVar1);
    }
    *(longlong *)(param_1 + 0x28) = lVar7;
  }
  FUN_144750e81(local_58,lVar7,local_b8);
  uVar5 = FUN_14030a32e(local_58);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar3 != (code *)0x0) {
    pppuVar8 = local_58;
    if (0x18 < local_40) {
      pppuVar8 = (undefined8 ***)local_58[0];
    }
    (*pcVar3)(pppuVar8);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  FUN_144a5ac3a(local_88);
  FUN_144a5ac3a(local_b8);
LAB_148cf30b3:
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf3222 FUN_148cf3222 body=129 status=ok
// SIG undefined FUN_148cf3222(void)

void FUN_148cf3222(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x68,0x10);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14b5d2580;
  puVar1[4] = 0xc07a400000000000;
  puVar1[5] = 0x4044000000000000;
  puVar1[6] = 0x403e000000000000;
  *(undefined4 *)(puVar1 + 7) = 0x3f800000;
  puVar1[9] = 0xc07a400000000000;
  puVar1[10] = 0x4044000000000000;
  puVar1[0xb] = 0x403e000000000000;
  *(undefined4 *)(puVar1 + 0xc) = 0x3f800000;
  return;
}



// FUNCTION 148cf32a4 FUN_148cf32a4 body=128 status=ok
// SIG undefined FUN_148cf32a4(void)

void FUN_148cf32a4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (((param_2 != 0) && (lVar1 = *(longlong *)(param_2 + 0x28), lVar1 != 0)) &&
     (*(longlong *)(lVar1 + 0xe8) != 0)) {
    lVar3 = FUN_144a5dd5e();
    lVar1 = *(longlong *)(lVar1 + 0xe8);
    if ((((lVar1 != 0) && (lVar3 != 0)) &&
        ((lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0 &&
         ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
           lVar3 + 0x30)))))) && (*(longlong *)(lVar1 + 0x21f8) != 0)) {
      puVar4 = (undefined8 *)(*(longlong *)(lVar1 + 0x21f8) + 0x150);
      puVar5 = (undefined8 *)(param_1 + 0x18);
      for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
  }
  return;
}



// FUNCTION 148cf3324 FUN_148cf3324 body=640 status=ok
// SIG undefined FUN_148cf3324(void)

void FUN_148cf3324(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  double dVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  float fVar7;
  undefined1 auStack_138 [32];
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  longlong *local_b8;
  undefined4 *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  longlong local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_88 = param_3;
  if (*(longlong *)(param_3 + 0x28) != 0) {
    lVar4 = FUN_140344898();
    lVar6 = *(longlong *)(param_3 + 0x28);
    if ((((lVar6 != 0) && (lVar4 != 0)) && (lVar1 = *(longlong *)(lVar6 + 0x10), lVar1 != 0)) &&
       (((*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) && (plVar2 = *(longlong **)(lVar6 + 0xe0), plVar2 != (longlong *)0x0)))) {
      uVar5 = FUN_144a854b6();
      lVar6 = (**(code **)(*plVar2 + 0x288))(plVar2,uVar5);
      if (lVar6 != 0) {
        uVar5 = FUN_144a854b6();
        lVar4 = FUN_144718840(lVar6,uVar5);
        if (lVar4 != 0 && lVar6 != lVar4) {
          fVar7 = (float)FUN_14023bf44(lVar4);
          lVar6 = *(longlong *)(param_3 + 0x28);
          local_98 = *(undefined8 *)(lVar6 + 0x60);
          local_b0 = &local_a8;
          local_a8 = *(undefined4 *)(lVar6 + 0x50);
          uStack_a4 = *(undefined4 *)(lVar6 + 0x54);
          uStack_a0 = *(undefined4 *)(lVar6 + 0x58);
          uStack_9c = *(undefined4 *)(lVar6 + 0x5c);
          local_b8 = &local_88;
          FUN_1440d5148(&local_b8,param_1 + 0x18,&local_d0,&local_e8);
          FUN_1440d5148(&local_b8,param_1 + 0x40,&local_100,&local_118);
          dVar3 = (double)fVar7;
          *(double *)(local_88 + 0x30) = (local_100 - local_d0) * dVar3 + local_d0;
          *(double *)(local_88 + 0x38) = (local_f8 - local_c8) * dVar3 + local_c8;
          *(double *)(local_88 + 0x40) = (local_f0 - local_c0) * dVar3 + local_c0;
          *(double *)(local_88 + 0xc0) =
               (local_118 - local_e8) * dVar3 + local_e8 + *(double *)(local_88 + 0xc0);
          *(double *)(local_88 + 200) =
               (local_110 - local_e0) * dVar3 + local_e0 + *(double *)(local_88 + 200);
          *(double *)(local_88 + 0xd0) =
               (local_108 - local_d8) * dVar3 + local_d8 + *(double *)(local_88 + 0xd0);
        }
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf35ac FUN_148cf35ac body=57 status=ok
// SIG undefined FUN_148cf35ac(void)

void FUN_148cf35ac(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar1[1] = 0;
  *(undefined4 *)((longlong)puVar1 + 0xf) = 0;
  *puVar1 = &PTR_FUN_14b9620d0;
  puVar1[3] = 0;
  *(undefined2 *)(puVar1 + 2) = 0x101;
  return;
}



// FUNCTION 148cf35f2 FUN_148cf35f2 body=121 status=ok
// SIG undefined FUN_148cf35f2(void)

undefined8 * FUN_148cf35f2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  *puVar1 = &PTR_FUN_14b008280;
  puVar1[1] = 0;
  *(undefined4 *)((longlong)puVar1 + 0xf) = 0;
  puVar1[3] = &PTR_LAB_149e668b0;
  *(undefined2 *)(puVar1 + 4) = 0;
  FUN_1405bceb4(puVar1 + 3);
  *puVar1 = &PTR_FUN_14b5d1240;
  puVar1[3] = &PTR_FUN_14b5d12c0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined2 *)(puVar1 + 2) = 0x101;
  return puVar1;
}



// FUNCTION 148cf366c FUN_148cf366c body=32 status=ok
// SIG undefined FUN_148cf366c(void)

undefined8 FUN_148cf366c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FCameraModeBehavior_StructuredInteraction");
  return param_2;
}



// FUNCTION 148cf368c FUN_148cf368c body=689 status=ok
// SIG undefined FUN_148cf368c(void)

void FUN_148cf368c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_138 [40];
  undefined8 local_110;
  longlong local_108;
  longlong *local_100;
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar9 = *(longlong *)(param_2 + 0x28);
  if (*(longlong *)(lVar9 + 0xe8) != 0) {
    lVar7 = FUN_144a5dd5e();
    lVar9 = *(longlong *)(lVar9 + 0xe8);
    if ((((lVar9 != 0) && (lVar7 != 0)) && (lVar3 = *(longlong *)(lVar9 + 0x10), lVar3 != 0)) &&
       ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar3 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
         lVar7 + 0x30)))) {
      plVar8 = (longlong *)FUN_148e047d8(lVar9 + 0xe50);
      if (plVar8 != (longlong *)0x0) {
        FUN_148e0481a(lVar9 + 0xe50,&local_110);
        (**(code **)(*plVar8 + 0x18))(plVar8,&local_108,local_110);
        plVar5 = local_100;
        plVar1 = (longlong *)(param_1 + 0x28);
        if (plVar1 != &local_108) {
          *(longlong *)(param_1 + 0x28) = local_108;
          local_108 = 0;
          plVar4 = *(longlong **)(param_1 + 0x30);
          if (local_100 != plVar4) {
            local_100 = (longlong *)0x0;
            *(longlong **)(param_1 + 0x30) = plVar5;
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              plVar5 = plVar4 + 1;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)*plVar5 == 0) {
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
          }
        }
        plVar5 = local_100;
        if (local_100 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_100 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*local_100)(local_100);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        FUN_14037baca(plVar8,&local_108);
        plVar5 = local_100;
        lVar9 = local_108;
        if (local_100 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_100 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*local_100)(local_100);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        if (lVar9 != 0) {
          FUN_14037baca(plVar8,&local_108);
          plVar8 = local_100;
          lVar9 = *(longlong *)(local_108 + 8);
          if (local_100 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_100 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
              (**(code **)*local_100)(local_100);
              LOCK();
              piVar2 = (int *)((longlong)plVar8 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
          }
          if (lVar9 != 0) {
            local_48 = (longlong *)0x0;
            local_40 = 0x1800000000;
            FUN_140a44582(lVar9,&local_108,0);
            plVar8 = &local_108;
            if (local_48 != (longlong *)0x0) {
              plVar8 = local_48;
            }
            lVar9 = (longlong)(int)local_40;
            if (lVar9 != 0) {
              lVar7 = 0;
              do {
                plVar5 = *(longlong **)((longlong)plVar8 + lVar7);
                if (plVar5 != (longlong *)0x0) {
                  cVar6 = (**(code **)(*plVar5 + 0x4c8))(plVar5,*(undefined8 *)(*plVar1 + 0x30));
                  if (cVar6 != '\0') {
                    if (DAT_14c950c29 == '\x01') {
                      FUN_1456cec3c(plVar5);
                    }
                    *(longlong **)(param_1 + 0x38) = plVar5;
                  }
                  cVar6 = (**(code **)(*plVar5 + 0x4c8))(plVar5,*(undefined8 *)(*plVar1 + 0x38));
                  if (cVar6 != '\0') {
                    if (DAT_14c950c29 == '\x01') {
                      FUN_1456cec3c(plVar5);
                    }
                    *(longlong **)(param_1 + 0x40) = plVar5;
                  }
                }
                lVar7 = lVar7 + 8;
              } while (lVar9 * 8 != lVar7);
            }
            if (local_48 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148cf3946 FUN_148cf3946 body=4880 status=ok
// SIG undefined FUN_148cf3946(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148cf3946(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  double dVar25;
  double dVar26;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar27;
  float fVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auStack_358 [32];
  double local_338;
  double dStack_330;
  double local_320;
  double local_318;
  undefined8 uStack_310;
  undefined1 local_308 [16];
  double local_2f0;
  double local_2e8;
  double local_2e0;
  int local_2d8;
  undefined4 uStack_2d4;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
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
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_358;
  lVar8 = *(longlong *)(param_1 + 0x28);
  if (lVar8 != 0) {
    plVar7 = *(longlong **)(param_1 + 0x38);
    if ((((plVar7 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x40) != 0)) &&
        ((*(byte *)((longlong)plVar7 + 0x9f) & 0x40) == 0)) &&
       ((*(byte *)(*(longlong *)(param_1 + 0x40) + 0x9f) & 0x40) == 0)) {
      uVar3 = (**(code **)(*plVar7 + 0x4a8))(plVar7,&local_2d8,*(undefined8 *)(lVar8 + 0x30),0);
      auVar2 = _DAT_149934d80;
      dVar14 = local_298._0_8_;
      dVar16 = local_298._8_8_;
      dVar11 = local_288._0_8_;
      auVar18 = *(undefined1 (*) [16])(lVar8 + 0x80);
      dVar15 = auVar18._0_8_;
      dVar17 = auVar18._8_8_;
      dVar27 = SUB168(*(undefined1 (*) [16])(lVar8 + 0x90),0);
      auVar18 = minpd(auVar18,local_298);
      auVar22 = minpd(*(undefined1 (*) [16])(lVar8 + 0x90),local_288);
      auVar23._8_8_ = -(ulonglong)(auVar18._8_8_ < 0.0);
      auVar23._0_8_ = -(ulonglong)(auVar18._0_8_ < 0.0);
      iVar4 = movmskpd(uVar3,auVar23);
      auVar18._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
      auVar18._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
      uVar6 = movmskpd((int)plVar7,auVar18);
      if ((uVar6 & 0x3fffffff) == 0 && iVar4 == 0) {
        dVar21 = (double)CONCAT44(uStack_2d4,local_2d8);
        dVar14 = dVar14 * *(double *)(lVar8 + 0x60);
        dVar16 = dVar16 * *(double *)(lVar8 + 0x68);
        dVar11 = dVar11 * *(double *)(lVar8 + 0x70);
        dVar15 = local_288._8_8_ * *(double *)(lVar8 + 0x78);
        dVar27 = dVar16 * dVar21 - dStack_2d0 * dVar14;
        dVar20 = dVar11 * dStack_2d0 - local_2c8 * dVar16;
        dVar12 = dVar14 * local_2c8 - dVar21 * dVar11;
        dVar17 = dVar15 * dStack_2c0 - dStack_2c0 * dVar15;
        dVar20 = dVar20 + dVar20;
        dVar12 = dVar12 + dVar12;
        dVar27 = dVar27 + dVar27;
        dVar17 = dVar17 + dVar17;
        dVar14 = (dVar27 * dStack_2d0 - local_2c8 * dVar12) + dStack_2c0 * dVar20 + dVar14 +
                 local_2b8;
        dVar16 = (dVar20 * local_2c8 - dVar27 * dVar21) + dStack_2c0 * dVar12 + dVar16 + dStack_2b0;
        local_338 = (dVar12 * dVar21 - dStack_2d0 * dVar20) + dStack_2c0 * dVar27 + dVar11 +
                    local_2a8;
        dStack_330 = (dVar17 * dStack_2c0 - dVar17 * dStack_2c0) + dStack_2c0 * dVar17 + dVar15 +
                     dStack_2a0;
      }
      else {
        dVar21 = (double)CONCAT44(uStack_2d4,local_2d8);
        dVar25 = dStack_2d0 + dStack_2d0;
        dVar20 = local_2c8 + local_2c8;
        dVar29 = dVar21 * (dVar21 + dVar21);
        local_1d8 = ((double)DAT_149934d80 - (local_2c8 * dVar20 + dStack_2d0 * dVar25)) * dVar14;
        dStack_1b0 = (DAT_149934d80._8_8_ - (local_2c8 * dVar20 + dVar29)) * dVar16;
        dVar30 = (double)CONCAT44(uStack_2d4,local_2d8) * dVar20;
        dVar12 = (dVar21 + dVar21) * dStack_2c0;
        local_1b8 = (dVar25 * dVar21 - dVar20 * dStack_2c0) * dVar16;
        dStack_190 = (dVar20 * dStack_2d0 - dVar12) * dVar11;
        local_198 = (dVar25 * dStack_2c0 + dVar30) * dVar11;
        dStack_1d0 = (dVar25 * dVar21 + dVar20 * dStack_2c0) * dVar14;
        local_1a8 = (dVar20 * dStack_2d0 + dVar12) * dVar16;
        local_188 = (1.0 - (dVar29 + dStack_2d0 * dVar25)) * dVar11;
        local_1c8 = (dVar30 - dVar25 * dStack_2c0) * dVar14;
        dStack_1c0 = 0.0;
        uStack_1a0 = 0;
        uStack_180 = 0;
        local_178 = local_2b8;
        dStack_170 = dStack_2b0;
        local_168 = local_2a8;
        uStack_160 = 0x3ff0000000000000;
        dVar29 = *(double *)(lVar8 + 0x40);
        dVar30 = *(double *)(lVar8 + 0x48);
        dVar33 = *(double *)(lVar8 + 0x50);
        dVar26 = dVar30 + dVar30;
        dVar12 = dVar33 + dVar33;
        dVar31 = dVar29 * (dVar29 + dVar29);
        dVar32 = *(double *)(lVar8 + 0x40) * dVar12;
        dVar20 = *(double *)(lVar8 + 0x58);
        dVar21 = dVar12 * dVar20;
        dVar25 = (dVar29 + dVar29) * *(double *)(lVar8 + 0x58);
        dVar20 = dVar26 * dVar20;
        local_238 = (dVar26 * dVar29 - dVar21) * dVar17;
        dStack_210 = (dVar12 * dVar30 - dVar25) * dVar27;
        local_258 = ((double)DAT_149934d80 - (dVar33 * dVar12 + dVar30 * dVar26)) * dVar15;
        dStack_230 = (DAT_149934d80._8_8_ - (dVar33 * dVar12 + dVar31)) * dVar17;
        dStack_250 = (dVar26 * dVar29 + dVar21) * dVar15;
        local_228 = (dVar12 * dVar30 + dVar25) * dVar17;
        local_218 = (dVar20 + dVar32) * dVar27;
        local_248 = (dVar32 - dVar20) * dVar15;
        dStack_240 = 0.0;
        uStack_220 = 0;
        local_208 = (1.0 - (dVar31 + dVar30 * dVar26)) * dVar27;
        uStack_200 = 0;
        local_1f8 = *(undefined8 *)(lVar8 + 0x60);
        uStack_1f0 = *(undefined8 *)(lVar8 + 0x68);
        local_1e8 = *(undefined8 *)(lVar8 + 0x70);
        uStack_1e0 = 0x3ff0000000000000;
        FUN_1447fea8d(&local_158);
        FUN_144a1c686(&local_158,0x3e45798ee0000000);
        auVar22._8_8_ = -(ulonglong)(0.0 <= dVar16 * dVar17);
        auVar22._0_8_ = -(ulonglong)(0.0 <= dVar14 * dVar15);
        auVar18 = blendvpd(_DAT_149936790,auVar2,auVar22);
        uVar9 = -(ulonglong)(0.0 <= dVar11 * dVar27);
        dVar14 = (double)(~uVar9 & 0xbff0000000000000 | uVar9 & 0x3ff0000000000000);
        dVar11 = auVar18._0_8_;
        local_148 = local_148 * dVar11;
        local_150 = local_150 * dVar11;
        local_158 = local_158 * dVar11;
        dVar11 = auVar18._8_8_;
        local_128 = local_128 * dVar11;
        local_130 = local_130 * dVar11;
        local_138 = dVar11 * local_138;
        local_108 = local_108 * dVar14;
        local_110 = local_110 * dVar14;
        local_118 = dVar14 * local_118;
        FUN_14481fd10(&local_278,&local_158);
        local_338 = local_e8;
        dStack_330 = 0.0;
        dVar14 = local_f8;
        dVar16 = dStack_f0;
      }
      lVar8 = *(longlong *)(param_1 + 0x28);
      plVar7 = *(longlong **)(param_1 + 0x40);
      uVar3 = (**(code **)(*plVar7 + 0x4a8))(plVar7,&local_2d8,*(undefined8 *)(lVar8 + 0x38),0);
      auVar2 = _DAT_149934d80;
      dVar11 = local_298._0_8_;
      dVar20 = local_298._8_8_;
      dVar15 = local_288._0_8_;
      auVar18 = *(undefined1 (*) [16])(lVar8 + 0xe0);
      dVar27 = auVar18._0_8_;
      dVar12 = auVar18._8_8_;
      dVar17 = SUB168(*(undefined1 (*) [16])(lVar8 + 0xf0),0);
      auVar18 = minpd(auVar18,local_298);
      auVar23 = minpd(*(undefined1 (*) [16])(lVar8 + 0xf0),local_288);
      auVar19._8_8_ = -(ulonglong)(auVar18._8_8_ < 0.0);
      auVar19._0_8_ = -(ulonglong)(auVar18._0_8_ < 0.0);
      iVar4 = movmskpd(uVar3,auVar19);
      auVar24._8_8_ = -(ulonglong)(auVar23._8_8_ < 0.0);
      auVar24._0_8_ = -(ulonglong)(auVar23._0_8_ < 0.0);
      uVar6 = movmskpd((int)plVar7,auVar24);
      if ((uVar6 & 0x3fffffff) == 0 && iVar4 == 0) {
        dVar17 = (double)CONCAT44(uStack_2d4,local_2d8);
        dVar11 = dVar11 * *(double *)(lVar8 + 0xc0);
        dVar20 = dVar20 * *(double *)(lVar8 + 200);
        dVar15 = dVar15 * *(double *)(lVar8 + 0xd0);
        dVar12 = dVar20 * dVar17 - dStack_2d0 * dVar11;
        dVar21 = dVar15 * dStack_2d0 - local_2c8 * dVar20;
        dVar27 = dVar11 * local_2c8 - dVar17 * dVar15;
        dVar21 = dVar21 + dVar21;
        dVar27 = dVar27 + dVar27;
        dVar12 = dVar12 + dVar12;
        local_f8 = (dVar12 * dStack_2d0 - local_2c8 * dVar27) + dStack_2c0 * dVar21 + dVar11 +
                   local_2b8;
        dStack_f0 = (dVar21 * local_2c8 - dVar12 * dVar17) + dStack_2c0 * dVar27 + dVar20 +
                    dStack_2b0;
        local_e8 = (dVar27 * dVar17 - dStack_2d0 * dVar21) + dStack_2c0 * dVar12 + dVar15 +
                   local_2a8;
      }
      else {
        dVar29 = (double)CONCAT44(uStack_2d4,local_2d8);
        dVar30 = dStack_2d0 + dStack_2d0;
        dVar21 = local_2c8 + local_2c8;
        dVar33 = dVar29 * (dVar29 + dVar29);
        local_1d8 = ((double)DAT_149934d80 - (local_2c8 * dVar21 + dStack_2d0 * dVar30)) * dVar11;
        dStack_1b0 = (DAT_149934d80._8_8_ - (local_2c8 * dVar21 + dVar33)) * dVar20;
        dVar26 = (double)CONCAT44(uStack_2d4,local_2d8) * dVar21;
        dVar25 = (dVar29 + dVar29) * dStack_2c0;
        local_1b8 = (dVar30 * dVar29 - dVar21 * dStack_2c0) * dVar20;
        dStack_190 = (dVar21 * dStack_2d0 - dVar25) * dVar15;
        local_198 = (dVar30 * dStack_2c0 + dVar26) * dVar15;
        dStack_1d0 = (dVar30 * dVar29 + dVar21 * dStack_2c0) * dVar11;
        local_1a8 = (dVar21 * dStack_2d0 + dVar25) * dVar20;
        local_188 = (1.0 - (dVar33 + dStack_2d0 * dVar30)) * dVar15;
        local_1c8 = (dVar26 - dVar30 * dStack_2c0) * dVar11;
        dStack_1c0 = 0.0;
        uStack_1a0 = 0;
        uStack_180 = 0;
        local_178 = local_2b8;
        dStack_170 = dStack_2b0;
        local_168 = local_2a8;
        uStack_160 = 0x3ff0000000000000;
        dVar33 = *(double *)(lVar8 + 0xa0);
        dVar26 = *(double *)(lVar8 + 0xa8);
        dVar31 = *(double *)(lVar8 + 0xb0);
        dVar32 = dVar26 + dVar26;
        dVar25 = dVar31 + dVar31;
        dVar34 = dVar33 * (dVar33 + dVar33);
        dVar35 = *(double *)(lVar8 + 0xa0) * dVar25;
        dVar21 = *(double *)(lVar8 + 0xb8);
        dVar29 = dVar25 * dVar21;
        dVar30 = (dVar33 + dVar33) * *(double *)(lVar8 + 0xb8);
        dVar21 = dVar32 * dVar21;
        local_238 = (dVar32 * dVar33 - dVar29) * dVar12;
        dStack_210 = (dVar25 * dVar26 - dVar30) * dVar17;
        local_258 = ((double)DAT_149934d80 - (dVar31 * dVar25 + dVar26 * dVar32)) * dVar27;
        dStack_230 = (DAT_149934d80._8_8_ - (dVar31 * dVar25 + dVar34)) * dVar12;
        dStack_250 = (dVar32 * dVar33 + dVar29) * dVar27;
        local_228 = (dVar25 * dVar26 + dVar30) * dVar12;
        local_218 = (dVar21 + dVar35) * dVar17;
        local_248 = (dVar35 - dVar21) * dVar27;
        dStack_240 = 0.0;
        uStack_220 = 0;
        local_208 = (1.0 - (dVar34 + dVar26 * dVar32)) * dVar17;
        uStack_200 = 0;
        local_1f8 = *(undefined8 *)(lVar8 + 0xc0);
        uStack_1f0 = *(undefined8 *)(lVar8 + 200);
        local_1e8 = *(undefined8 *)(lVar8 + 0xd0);
        uStack_1e0 = 0x3ff0000000000000;
        FUN_1447fea8d(&local_158);
        FUN_144a1c686(&local_158,0x3e45798ee0000000);
        auVar13._8_8_ = -(ulonglong)(0.0 <= dVar20 * dVar12);
        auVar13._0_8_ = -(ulonglong)(0.0 <= dVar11 * dVar27);
        auVar18 = blendvpd(_DAT_149936790,auVar2,auVar13);
        uVar9 = -(ulonglong)(0.0 <= dVar15 * dVar17);
        dVar11 = (double)(~uVar9 & 0xbff0000000000000 |
                         (ulonglong)((uint)(uVar9 >> 0x20) & 0x3ff00000) << 0x20);
        dVar15 = auVar18._0_8_;
        local_148 = local_148 * dVar15;
        local_150 = local_150 * dVar15;
        local_158 = local_158 * dVar15;
        dVar15 = auVar18._8_8_;
        local_128 = local_128 * dVar15;
        local_130 = local_130 * dVar15;
        local_138 = dVar15 * local_138;
        local_108 = local_108 * dVar11;
        local_110 = local_110 * dVar11;
        local_118 = dVar11 * local_118;
        FUN_14481fd10(&local_278,&local_158);
      }
      local_1c8 = local_e8 - local_338;
      local_1d8 = local_f8 - dVar14;
      dStack_1d0 = dStack_f0 - dVar16;
      FUN_144afe7fe(&local_1d8,&local_158);
      FUN_144a7484c(param_3 + 0x48,&local_1d8);
      lVar8 = *(longlong *)(param_3 + 0x28);
      fVar28 = 0.0;
      if (*(longlong *)(lVar8 + 0xe8) != 0) {
        lVar5 = FUN_144a5dd5e();
        lVar8 = *(longlong *)(lVar8 + 0xe8);
        fVar28 = 0.0;
        if (((lVar8 != 0) && (lVar5 != 0)) &&
           ((lVar1 = *(longlong *)(lVar8 + 0x10), lVar1 != 0 &&
            ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar1 + 0x38) &&
             (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30)))))) {
          local_258 = (double)((ulonglong)local_258 & 0xffffffff00000000);
          local_2d8 = 0;
          FUN_140585950(lVar8,&local_258,&local_2d8);
          if (local_2d8 < 1) {
            fVar28 = 0.0;
          }
          else {
            fVar28 = (float)local_258._0_4_ / (float)local_2d8;
          }
        }
      }
      fVar10 = tanf(*(float *)(param_3 + 0x60) * 0.017453292 * 0.5);
      lVar8 = *(longlong *)(param_1 + 0x28);
      fVar10 = fVar10 * *(float *)(lVar8 + 0x110);
      dVar27 = (double)(float)(-(uint)(0.0 < fVar28) & (uint)(fVar10 / fVar28)) *
               *(double *)(lVar8 + 0x108);
      dVar15 = (double)fVar10 * *(double *)(lVar8 + 0x100);
      dVar11 = dVar15 * dVar15 + 1.0;
      if ((dVar11 != 1.0) || (NAN(dVar11))) {
        dVar17 = DAT_14c8464e0;
        dVar20 = DAT_14c8464f0;
        dVar12 = DAT_14c8464e8;
        if (9.99999993922529e-09 <= dVar11) {
          dVar17 = 1.0 / SQRT(dVar11);
          dVar20 = dVar17 * 0.0;
          dVar12 = dVar15 * dVar17;
        }
      }
      else {
        dVar17 = 1.0;
        dVar20 = 0.0;
        dVar12 = dVar15;
      }
      dVar11 = dVar27 * dVar27 + 1.0;
      if (((dVar11 != 1.0) || (local_320 = 0.0, dVar21 = dVar27, dVar15 = 1.0, NAN(dVar11))) &&
         (local_320 = DAT_14c8464e8, dVar21 = DAT_14c8464f0, dVar15 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar11)) {
        dVar15 = 1.0 / SQRT(dVar11);
        local_320 = dVar15 * 0.0;
        dVar21 = dVar27 * dVar15;
      }
      dVar11 = dVar20 - dVar17 * 0.0;
      dVar29 = dVar17 * 0.0 - dVar12;
      dVar27 = dVar12 * 0.0 + dVar20 * -0.0;
      dVar25 = dVar29 * dVar29 + dVar27 * dVar27 + dVar11 * dVar11;
      if (((dVar25 != 1.0) || (dVar33 = dVar29, local_318 = dVar11, dVar30 = dVar27, NAN(dVar25)))
         && (dVar33 = DAT_14c8464f0, local_318 = DAT_14c8464e8, dVar30 = DAT_14c8464e0,
            9.99999993922529e-09 <= dVar25)) {
        dVar25 = 1.0 / SQRT(dVar25);
        dVar33 = dVar29 * dVar25;
        local_318 = dVar11 * dVar25;
        dVar30 = dVar27 * dVar25;
      }
      dVar11 = dVar21 - dVar15 * 0.0;
      dVar29 = dVar15 * 0.0 - local_320;
      dVar27 = local_320 * 0.0 + dVar21 * -0.0;
      dVar25 = dVar29 * dVar29 + dVar27 * dVar27 + dVar11 * dVar11;
      local_308._8_4_ = SUB84(dVar16,0);
      local_308._0_8_ = dVar14;
      local_308._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
      uStack_310 = 0;
      if (((dVar25 != 1.0) || (dVar26 = dVar29, dVar14 = dVar11, dVar16 = dVar27, NAN(dVar25))) &&
         (dVar26 = DAT_14c8464f0, dVar14 = DAT_14c8464e8, dVar16 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar25)) {
        dVar16 = 1.0 / SQRT(dVar25);
        dVar26 = dVar29 * dVar16;
        dVar14 = dVar11 * dVar16;
        dVar16 = dVar27 * dVar16;
      }
      dVar27 = dVar20 * 0.0 + dVar17 + dVar12 * 0.0;
      dVar11 = dVar27;
      if (1.0 <= dVar27) {
        dVar11 = 1.0;
      }
      dVar27 = acos((double)(-(ulonglong)(dVar27 < -1.0) & 0xbff0000000000000 |
                            ~-(ulonglong)(dVar27 < -1.0) & (ulonglong)dVar11));
      dVar15 = dVar21 * 0.0 + dVar15 + local_320 * 0.0;
      dVar11 = dVar15;
      if (1.0 <= dVar15) {
        dVar11 = 1.0;
      }
      dVar11 = acos((double)(-(ulonglong)(dVar15 < -1.0) & 0xbff0000000000000 |
                            ~-(ulonglong)(dVar15 < -1.0) & (ulonglong)dVar11));
      dVar15 = sin((double)(float)dVar27 * 0.5);
      dVar20 = cos((double)(float)dVar27 * 0.5);
      dVar30 = dVar30 * dVar15;
      dVar25 = local_318 * dVar15;
      dVar33 = dVar33 * dVar15;
      dVar15 = sin((double)(float)dVar11 * 0.5);
      dVar12 = cos((double)(float)dVar11 * 0.5);
      dVar17 = dStack_1d0;
      dVar27 = local_1d8;
      dVar16 = dVar16 * dVar15;
      dVar14 = dVar14 * dVar15;
      dVar26 = dVar26 * dVar15;
      dVar11 = dVar14 * dVar33 * -1.0 + dVar26 * dVar25 + dVar30 * dVar12 * 1.0 + dVar20 * dVar16;
      dVar15 = dVar16 * dVar33 * 1.0 + dVar12 * dVar25 + dVar30 * dVar26 * -1.0 + dVar20 * dVar14;
      dVar21 = dVar12 * dVar33 * 1.0 + ((dVar30 * dVar14 * 1.0 + dVar20 * dVar26) - dVar16 * dVar25)
      ;
      dVar14 = dVar26 * dVar33 * -1.0 +
               ((dVar30 * dVar16 * -1.0 + dVar20 * dVar12) - dVar14 * dVar25);
      dVar25 = local_1c8 * -1.0;
      dVar29 = dStack_1c0 * 1.0;
      dVar16 = dVar15 * local_148 * -1.0 +
               dVar21 * local_150 + local_158 * dVar14 * 1.0 + dVar11 * local_140;
      dVar20 = dVar11 * local_148 * 1.0 +
               dVar14 * local_150 + local_158 * dVar21 * -1.0 + dVar15 * local_140;
      dVar12 = dVar14 * local_148 * 1.0 +
               ((local_158 * dVar15 * 1.0 + local_140 * dVar21) - dVar11 * local_150);
      dVar11 = dVar21 * local_148 * -1.0 +
               ((local_158 * dVar11 * -1.0 + local_140 * dVar14) - dVar15 * local_150);
      dVar15 = dVar12 - dVar16 * 0.0;
      dVar14 = dVar16 * 0.0 - dVar20;
      dVar21 = dVar20 * 0.0 + dVar12 * -0.0;
      dVar14 = dVar14 + dVar14;
      dVar15 = dVar15 + dVar15;
      dVar21 = dVar21 + dVar21;
      local_2e0 = (dVar16 * dVar15 - dVar21 * dVar20) + dVar11 * dVar14 + 0.0;
      local_2e8 = (dVar12 * dVar21 - dVar14 * dVar16) + dVar11 * dVar15 + 0.0;
      local_2f0 = (dVar20 * dVar14 - dVar15 * dVar12) + dVar11 * dVar21 + 1.0;
      FUN_144afe7fe(&local_2f0,&local_2d8);
      dVar14 = (double)CONCAT44(uStack_2d4,local_2d8);
      local_258 = dStack_2d0 * dVar25 * -1.0 +
                  ((dVar29 * dVar14 - dVar27 * dStack_2c0 * 1.0) - dVar17 * local_2c8);
      dStack_250 = dVar14 * dVar25 * 1.0 +
                   ((dVar29 * dStack_2d0 - dVar27 * local_2c8 * -1.0) - dVar17 * dStack_2c0);
      local_248 = dStack_2c0 * dVar25 * 1.0 +
                  dVar17 * dVar14 + (dVar29 * local_2c8 - dVar27 * dStack_2d0 * 1.0);
      dStack_240 = local_2c8 * dVar25 * -1.0 +
                   dVar17 * dStack_2d0 + (dVar29 * dStack_2c0 - dVar27 * dVar14 * -1.0);
      FUN_1448052ee(&local_258,&local_278);
      *(undefined8 *)(param_3 + 0xb0) = local_268;
      *(undefined8 *)(param_3 + 0xa0) = local_278;
      *(undefined8 *)(param_3 + 0xa8) = uStack_270;
      *(undefined8 *)(param_3 + 0x30) = local_308._0_8_;
      *(undefined8 *)(param_3 + 0x38) = local_308._8_8_;
      *(double *)(param_3 + 0x40) = local_338;
      lVar8 = *(longlong *)(param_1 + 0x28);
    }
    *(float *)(param_3 + 0x60) = *(float *)(param_3 + 0x60) * *(float *)(lVar8 + 0x110);
  }
  if ((local_d0 ^ (ulonglong)auStack_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148cf4c5e FUN_148cf4c5e body=189 status=ok
// SIG undefined FUN_148cf4c5e(void)

undefined8 * FUN_148cf4c5e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe8);
  memset(puVar1 + 1,0,0xe0);
  *puVar1 = &PTR_FUN_14b5d2600;
  puVar1[3] = 0x3e8000003f8ccccd;
  puVar1[4] = 0x3ee6666640100000;
  puVar1[5] = &PTR_FUN_14b00bdf8;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined8 *)((longlong)puVar1 + 100) = 0xffffffff00000080;
  puVar1[0xf] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  *(undefined4 *)(puVar1 + 0x13) = 0x7f7fffff;
  *(undefined2 *)((longlong)puVar1 + 0x9c) = 0x404;
  puVar1[6] = &DAT_14a176f00;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  *(undefined1 *)(puVar1 + 0x1c) = 0;
  return puVar1;
}



// FUNCTION 148cf4d22 FUN_148cf4d22 body=447 status=ok
// SIG undefined FUN_148cf4d22(void)

void FUN_148cf4d22(longlong param_1,float param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  double dVar6;
  
  if (*(longlong *)(param_3 + 0x28) != 0) {
    lVar3 = FUN_140344898();
    lVar4 = *(longlong *)(param_3 + 0x28);
    if (((((lVar4 != 0) && (lVar3 != 0)) && (lVar1 = *(longlong *)(lVar4 + 0x10), lVar1 != 0)) &&
        ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)))) &&
       ((*(longlong *)(lVar4 + 0xa58) != 0 &&
        (*(longlong *)(*(longlong *)(lVar4 + 0xa58) + 0x1700) != 0)))) {
      cVar2 = FUN_1402096b0();
      *(char *)(param_1 + 0xe0) = cVar2;
      if (cVar2 == '\0') {
        *(undefined4 *)(param_1 + 0xd8) = 0;
        if (0.0001 < *(float *)(param_1 + 0x24)) {
          *(float *)(param_1 + 0xdc) =
               *(float *)(param_1 + 0xdc) - param_2 / *(float *)(param_1 + 0x24);
        }
      }
      else {
        fVar5 = *(float *)(param_1 + 0xd8) + param_2;
        *(float *)(param_1 + 0xd8) = fVar5;
        if ((*(float *)(param_1 + 0x1c) <= fVar5) && (0.0001 < *(float *)(param_1 + 0x20))) {
          *(float *)(param_1 + 0xdc) =
               param_2 / *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0xdc);
        }
      }
      fVar5 = *(float *)(param_1 + 0xdc);
      if (1.0 <= fVar5) {
        fVar5 = 1.0;
      }
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      *(float *)(param_1 + 0xdc) = fVar5;
    }
  }
  lVar3 = FUN_1447e736e(param_1 + 0xb0);
  lVar4 = param_1;
  if (lVar3 != 0) {
    lVar4 = FUN_1447e736e(param_1 + 0xb0);
  }
  fVar5 = (float)FUN_1448c9f94(lVar4 + 0x30,*(undefined4 *)(param_1 + 0xdc),0);
  fVar5 = (*(float *)(param_1 + 0x18) + -1.0) * fVar5 + 1.0;
  *(float *)(param_3 + 0x60) = fVar5 * *(float *)(param_3 + 0x60);
  dVar6 = (double)(1.0 / fVar5);
  *(double *)(param_3 + 0xc0) = *(double *)(param_3 + 0xc0) * dVar6;
  *(double *)(param_3 + 200) = *(double *)(param_3 + 200) * dVar6;
  *(double *)(param_3 + 0xd0) = dVar6 * *(double *)(param_3 + 0xd0);
  return;
}



// FUNCTION 148cf4ee8 FUN_148cf4ee8 body=41 status=ok
// SIG undefined FUN_148cf4ee8(void)

void FUN_148cf4ee8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14b5d2680;
  return;
}



// FUNCTION 148cf4f18 FUN_148cf4f18 body=93 status=ok
// SIG undefined FUN_148cf4f18(void)

undefined8 * FUN_148cf4f18(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0xa0);
  memset(_Dst,0,0xa0);
  FUN_140e6d4da(_Dst);
  *_Dst = &PTR_FUN_14b5d2700;
  _Dst[0x12] = 0x3f80000041200000;
  *(undefined4 *)(_Dst + 0x13) = 0;
  return _Dst;
}



// FUNCTION 148cf4f82 FUN_148cf4f82 body=1010 status=ok
// SIG undefined FUN_148cf4f82(void)

void FUN_148cf4f82(longlong param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  char cVar11;
  int iVar12;
  longlong lVar13;
  double dVar14;
  double *pdVar15;
  uint uVar16;
  longlong lVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  bVar1 = *(byte *)(param_1 + 0x19);
  if ((bVar1 & 2) != 0) {
    if ((bVar1 & 1) != 0) {
      *(byte *)(param_1 + 0x19) = bVar1 & 0xfd;
      if (*(longlong *)(param_3 + 0x28) != 0) {
        lVar13 = FUN_140344898();
        lVar17 = *(longlong *)(param_3 + 0x28);
        if ((((lVar17 != 0) && (lVar13 != 0)) && (lVar2 = *(longlong *)(lVar17 + 0x10), lVar2 != 0))
           && (((*(int *)(lVar13 + 0x38) <= *(int *)(lVar2 + 0x38) &&
                (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8)
                 == lVar13 + 0x30)) && (dVar14 = *(double *)(lVar17 + 0xa58), dVar14 != 0.0)))) {
          lVar13 = *(longlong *)((longlong)dVar14 + 0x1c8);
          if (lVar13 == 0) {
            uVar18 = SUB84(DAT_14c846500,0);
            uVar19 = (undefined4)((ulonglong)DAT_14c846500 >> 0x20);
          }
          else {
            dVar7 = *(double *)(lVar13 + 0x240);
            dVar8 = *(double *)(lVar13 + 0x248);
            dVar9 = *(double *)(lVar13 + 0x250);
            dVar10 = *(double *)(lVar13 + 600);
            pdVar15 = *(double **)(lVar13 + 0x228);
            local_98 = dVar7;
            uStack_90 = dVar8;
            local_88 = dVar9;
            uStack_80 = dVar10;
            if (pdVar15 == (double *)0x0) {
              lVar17 = 0x40;
              pdVar15 = (double *)FUN_14001cc68(0x40,0x10);
              dVar14 = DAT_14c8463d8;
              *pdVar15 = DAT_14c8463d0;
              pdVar15[1] = dVar14;
              dVar14 = DAT_14c8463e8;
              pdVar15[2] = DAT_14c8463e0;
              pdVar15[3] = dVar14;
              dVar14 = DAT_14c846500;
              pdVar15[4] = DAT_14c8464f8;
              pdVar15[5] = dVar14;
              dVar14 = DAT_14c846508;
              pdVar15[6] = DAT_14c846508;
              *(double **)(lVar13 + 0x228) = pdVar15;
            }
            auVar3._8_4_ = (int)-(ulonglong)(dVar8 != pdVar15[1]);
            auVar3._0_8_ = -(ulonglong)(dVar7 != *pdVar15);
            auVar3._12_4_ = (int)(-(ulonglong)(dVar8 != pdVar15[1]) >> 0x20);
            iVar12 = movmskpd(SUB84(dVar14,0),auVar3);
            auVar5._8_4_ = (int)-(ulonglong)(dVar10 != pdVar15[3]);
            auVar5._0_8_ = -(ulonglong)(dVar9 != pdVar15[2]);
            auVar5._12_4_ = (int)(-(ulonglong)(dVar10 != pdVar15[3]) >> 0x20);
            uVar16 = movmskpd((int)lVar17,auVar5);
            if ((uVar16 & 0x3fffffff) != 0 || iVar12 != 0) {
              *(undefined4 *)(pdVar15 + 2) = (undefined4)local_88;
              *(undefined4 *)((longlong)pdVar15 + 0x14) = local_88._4_4_;
              *(undefined4 *)(pdVar15 + 3) = (undefined4)uStack_80;
              *(undefined4 *)((longlong)pdVar15 + 0x1c) = uStack_80._4_4_;
              *(undefined4 *)pdVar15 = (undefined4)local_98;
              *(undefined4 *)((longlong)pdVar15 + 4) = local_98._4_4_;
              *(undefined4 *)(pdVar15 + 1) = (undefined4)uStack_90;
              *(undefined4 *)((longlong)pdVar15 + 0xc) = uStack_90._4_4_;
              FUN_1448052ee(&local_98,&local_78);
              pdVar15[6] = local_68;
              pdVar15[4] = (double)CONCAT44(uStack_74,local_78);
              pdVar15[5] = (double)CONCAT44(uStack_6c,uStack_70);
            }
            uVar18 = SUB84(pdVar15[5],0);
            uVar19 = (undefined4)((ulonglong)pdVar15[5] >> 0x20);
          }
          *(ulonglong *)(param_3 + 0x50) = CONCAT44(uVar19,uVar18);
        }
      }
      goto LAB_148cf5035;
    }
    *(byte *)(param_1 + 0x19) = bVar1 & 0xfc;
  }
  FUN_1405e7386(param_1,param_3);
  if (*(float *)(param_1 + 0x98) <= 0.0) {
    if (*(longlong *)(param_3 + 0x28) != 0) {
      lVar13 = FUN_140344898();
      lVar17 = *(longlong *)(param_3 + 0x28);
      if (((lVar17 != 0) && (lVar13 != 0)) &&
         ((lVar2 = *(longlong *)(lVar17 + 0x10), lVar2 != 0 &&
          (((*(int *)(lVar13 + 0x38) <= *(int *)(lVar2 + 0x38) &&
            (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) ==
             lVar13 + 0x30)) && (dVar14 = *(double *)(lVar17 + 0xa58), dVar14 != 0.0)))))) {
        lVar13 = *(longlong *)((longlong)dVar14 + 0x1c8);
        if (lVar13 == 0) {
          uVar18 = SUB84(DAT_14c846500,0);
          uVar19 = (undefined4)((ulonglong)DAT_14c846500 >> 0x20);
        }
        else {
          dVar7 = *(double *)(lVar13 + 0x240);
          dVar8 = *(double *)(lVar13 + 0x248);
          dVar9 = *(double *)(lVar13 + 0x250);
          dVar10 = *(double *)(lVar13 + 600);
          pdVar15 = *(double **)(lVar13 + 0x228);
          local_98 = dVar7;
          uStack_90 = dVar8;
          local_88 = dVar9;
          uStack_80 = dVar10;
          if (pdVar15 == (double *)0x0) {
            lVar17 = 0x40;
            pdVar15 = (double *)FUN_14001cc68(0x40,0x10);
            dVar14 = DAT_14c8463d8;
            *pdVar15 = DAT_14c8463d0;
            pdVar15[1] = dVar14;
            dVar14 = DAT_14c8463e8;
            pdVar15[2] = DAT_14c8463e0;
            pdVar15[3] = dVar14;
            dVar14 = DAT_14c846500;
            pdVar15[4] = DAT_14c8464f8;
            pdVar15[5] = dVar14;
            dVar14 = DAT_14c846508;
            pdVar15[6] = DAT_14c846508;
            *(double **)(lVar13 + 0x228) = pdVar15;
          }
          auVar4._8_4_ = (int)-(ulonglong)(dVar8 != pdVar15[1]);
          auVar4._0_8_ = -(ulonglong)(dVar7 != *pdVar15);
          auVar4._12_4_ = (int)(-(ulonglong)(dVar8 != pdVar15[1]) >> 0x20);
          iVar12 = movmskpd(SUB84(dVar14,0),auVar4);
          auVar6._8_4_ = (int)-(ulonglong)(dVar10 != pdVar15[3]);
          auVar6._0_8_ = -(ulonglong)(dVar9 != pdVar15[2]);
          auVar6._12_4_ = (int)(-(ulonglong)(dVar10 != pdVar15[3]) >> 0x20);
          uVar16 = movmskpd((int)lVar17,auVar6);
          if ((uVar16 & 0x3fffffff) != 0 || iVar12 != 0) {
            *(undefined4 *)(pdVar15 + 2) = (undefined4)local_88;
            *(undefined4 *)((longlong)pdVar15 + 0x14) = local_88._4_4_;
            *(undefined4 *)(pdVar15 + 3) = (undefined4)uStack_80;
            *(undefined4 *)((longlong)pdVar15 + 0x1c) = uStack_80._4_4_;
            *(undefined4 *)pdVar15 = (undefined4)local_98;
            *(undefined4 *)((longlong)pdVar15 + 4) = local_98._4_4_;
            *(undefined4 *)(pdVar15 + 1) = (undefined4)uStack_90;
            *(undefined4 *)((longlong)pdVar15 + 0xc) = uStack_90._4_4_;
            FUN_1448052ee(&local_98,&local_78);
            pdVar15[6] = local_68;
            pdVar15[4] = (double)CONCAT44(uStack_74,local_78);
            pdVar15[5] = (double)CONCAT44(uStack_6c,uStack_70);
          }
          uVar18 = SUB84(pdVar15[5],0);
          uVar19 = (undefined4)((ulonglong)pdVar15[5] >> 0x20);
        }
        local_98 = *(double *)(param_3 + 0x48);
        local_88 = *(double *)(param_3 + 0x58);
        uStack_90 = (double)(float)(double)CONCAT44(uVar19,uVar18);
        local_a8 = *(undefined4 *)(param_1 + 0x90);
        FUN_140476f06(&local_78,param_3 + 0x48,&local_98,param_2);
        *(double *)(param_3 + 0x58) = local_68;
        *(undefined4 *)(param_3 + 0x48) = local_78;
        *(undefined4 *)(param_3 + 0x4c) = uStack_74;
        *(undefined4 *)(param_3 + 0x50) = uStack_70;
        *(undefined4 *)(param_3 + 0x54) = uStack_6c;
      }
    }
  }
  else {
    *(float *)(param_1 + 0x98) = *(float *)(param_1 + 0x98) - (float)param_2;
  }
  FUN_1405e77ae(param_1,&local_98,param_3);
  cVar11 = FUN_144aa09e0(&local_98);
  if (cVar11 == '\0') {
    FUN_1405e84a8(param_1,param_3,&local_98);
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x94);
  }
LAB_148cf5035:
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf537c FUN_148cf537c body=52 status=ok
// SIG undefined FUN_148cf537c(void)

void FUN_148cf537c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x108);
  memset(_Dst,0,0x108);
  FUN_145a3fd0a(_Dst);
  return;
}



// FUNCTION 148cf53b0 FUN_148cf53b0 body=428 status=ok
// SIG undefined FUN_148cf53b0(void)

void FUN_148cf53b0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_108 [32];
  undefined1 **local_e8;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  undefined1 *local_b8;
  undefined1 *puStack_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_2 != 0) {
    local_e8 = &local_58;
    local_58 = &DAT_3f8000003f800000;
    puStack_50 = &DAT_3f8000003f800000;
    local_70 = (double)(*(float *)(param_2 + 0x34) * 0.575);
    local_68 = (double)*(float *)(param_2 + 0x30);
    local_78 = (double)(*(float *)(param_2 + 0x30) * 0.0);
    local_60 = local_70;
    FUN_147d8b848(param_2,&local_78,&local_68,0x3f800000);
    local_e8 = &local_88;
    local_88 = &DAT_3f8000003f800000;
    puStack_80 = &DAT_3f8000003f800000;
    local_90 = (double)*(float *)(param_2 + 0x34);
    local_a8 = (double)(*(float *)(param_2 + 0x30) * 0.425);
    local_a0 = (double)(*(float *)(param_2 + 0x34) * 0.575);
    local_98 = local_a8;
    FUN_147d8b848(param_2,&local_a8,&local_98,0x3f800000);
    local_e8 = &local_b8;
    local_b8 = &DAT_3f8000003f800000;
    puStack_b0 = &DAT_3f8000003f800000;
    local_c0 = (double)*(float *)(param_2 + 0x34);
    local_d8 = (double)(*(float *)(param_2 + 0x30) * 0.575);
    local_d0 = (double)(*(float *)(param_2 + 0x34) * 0.575);
    local_c8 = local_d8;
    FUN_147d8b848(param_2,&local_d8,&local_c8,0x3f800000);
  }
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf5564 FUN_148cf5564 body=41 status=ok
// SIG undefined FUN_148cf5564(void)

void FUN_148cf5564(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14b5d2800;
  return;
}



// FUNCTION 148cf558e FUN_148cf558e body=71 status=ok
// SIG undefined FUN_148cf558e(void)

void FUN_148cf558e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[1] = 0x40000000bf800000;
  *puVar1 = &PTR_FUN_14b5d2880;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 148cf55d6 FUN_148cf55d6 body=287 status=ok
// SIG undefined FUN_148cf55d6(void)

undefined4 FUN_148cf55d6(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  longlong local_78;
  int local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = FUN_148802e5a();
  if (*param_2 == 0) {
    puVar2 = &DAT_14c9a1308;
  }
  else {
    puVar2 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cbc5070);
  }
  uVar3 = FUN_144a7cdd6(puVar2,0);
  FUN_1400b22c2(&local_78,uVar3);
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_40 = local_78;
  local_38 = local_70 + -1;
  if (local_70 == 0) {
    local_38 = 0;
  }
  FUN_14475bf92(&local_68);
  *(undefined4 *)(param_1 + 0x18) = (undefined4)local_68;
  *(undefined4 *)(param_1 + 0x1c) = local_68._4_4_;
  *(undefined4 *)(param_1 + 0x20) = (undefined4)uStack_60;
  *(undefined4 *)(param_1 + 0x24) = uStack_60._4_4_;
  if ((undefined8 *)(param_1 + 0x18) == &local_68) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x28) = local_58;
    local_58 = 0;
    *(undefined4 *)(param_1 + 0x30) = (undefined4)uStack_50;
    *(undefined4 *)(param_1 + 0x34) = uStack_50._4_4_;
    uStack_50 = 0;
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf56f6 FUN_148cf56f6 body=225 status=ok
// SIG undefined FUN_148cf56f6(void)

void FUN_148cf56f6(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    cVar1 = FUN_148b8200e(*(longlong *)(param_1 + 0x38),param_2,param_3,param_4,param_5,param_6,
                          param_4,param_5,param_6,param_7);
    if (cVar1 == '\0') goto LAB_148cf578b;
  }
  FUN_141420a58(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
LAB_148cf578b:
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_148b81c9c(*(longlong *)(param_1 + 0x38),param_2,param_3,param_4,param_5,param_6,param_4,
                  param_5,param_6,param_7);
  }
  return;
}



// FUNCTION 148cf57d8 FUN_148cf57d8 body=499 status=ok
// SIG undefined FUN_148cf57d8(void)

void FUN_148cf57d8(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = *param_3;
  local_50 = param_3[1];
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  local_78 = param_7;
  local_80 = param_6;
  local_88 = param_5;
  FUN_145924f52(param_1,param_2,&local_58,param_4);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    lVar4 = FUN_148cf59cc(param_1 + 0x18);
    if ((lVar4 == 0) || (DAT_14c950c29 == '\0')) {
      if (lVar4 == 0) goto LAB_148cf585e;
    }
    else {
      FUN_1456cec3c(lVar4);
    }
    lVar5 = FUN_1459881a4();
    if (((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30)) {
      lVar5 = FUN_1459881a4();
      if ((lVar5 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar5 + 0x38))) {
        lVar7 = 0;
      }
      else {
        lVar7 = 0;
        if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30) {
          lVar7 = lVar4;
        }
      }
      uVar6 = FUN_1409ffe1d();
      lVar4 = FUN_148cf5a63(uVar6,lVar7);
      if ((lVar4 == 0) || (DAT_14c950c29 == '\0')) {
        *(longlong *)(param_1 + 0x38) = lVar4;
        if (lVar4 == 0) goto LAB_148cf585e;
      }
      else {
        FUN_1456cec3c(lVar4);
        *(longlong *)(param_1 + 0x38) = lVar4;
      }
      if (*param_3 == 0) {
        local_60 = 0;
      }
      else {
        FUN_1488028ba(*param_3,&local_60);
      }
      local_70 = param_7;
      local_78 = param_7;
      local_80 = param_6;
      local_88 = param_5;
      FUN_148b82936(lVar4,param_2,local_60,param_4);
    }
  }
LAB_148cf585e:
  plVar3 = (longlong *)param_3[1];
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
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148cf59cc FUN_148cf59cc body=150 status=ok
// SIG undefined FUN_148cf59cc(void)

undefined8 FUN_148cf59cc(longlong *param_1)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_30;
  undefined2 *local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_14475cc44(param_1,&local_20);
    puVar2 = local_20;
    if (local_18 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    uVar1 = FUN_1459881a4();
    local_30 = 0;
    local_38 = 0;
    uVar1 = FUN_141433b6f(uVar1,0,puVar2,0);
    if (local_20 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 148cf5a63 FUN_148cf5a63 body=175 status=ok
// SIG undefined FUN_148cf5a63(void)

undefined8 FUN_148cf5a63(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  FUN_144a5c54a(local_b8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
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



// FUNCTION 148cf5b14 FUN_148cf5b14 body=49 status=ok
// SIG undefined FUN_148cf5b14(void)

void FUN_148cf5b14(longlong param_1,undefined8 param_2)

{
  FUN_14579c222();
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_148b81c3e(*(longlong *)(param_1 + 0x38),param_2);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148cf5b46 FUN_148cf5b46 body=52 status=ok
// SIG undefined FUN_148cf5b46(void)

void FUN_148cf5b46(longlong param_1,longlong *param_2)

{
  FUN_148802f0e();
                    /* WARNING: Could not recover jumptable at 0x000148cf5b77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x38,0,0);
  return;
}



// FUNCTION 148cf5b7e FUN_148cf5b7e body=63 status=ok
// SIG undefined FUN_148cf5b7e(void)

void FUN_148cf5b7e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar1[1] = 0x40000000bf800000;
  *(undefined1 *)(puVar1 + 2) = 0;
  *puVar1 = &PTR_FUN_14b5d28e0;
  *(undefined4 *)(puVar1 + 3) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x1c) = 0;
  return;
}



// FUNCTION 148cf5bc4 FUN_148cf5bc4 body=56 status=ok
// SIG undefined FUN_148cf5bc4(void)

void FUN_148cf5bc4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar1[2] = 0;
  puVar1[1] = 0x40000000bf800000;
  *puVar1 = &PTR_FUN_14b5d2940;
  return;
}



// FUNCTION 148cf5c02 FUN_148cf5c02 body=80 status=ok
// SIG undefined FUN_148cf5c02(void)

void FUN_148cf5c02(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[1] = 0x40000000bf800000;
  *puVar1 = &PTR_FUN_14b5d29a0;
  puVar1[4] = 0x3f80000000000000;
  puVar1[5] = 0xbf8000003f800000;
  puVar1[6] = 0x3f80000000000000;
  return;
}



// FUNCTION 148cf5c58 FUN_148cf5c58 body=89 status=ok
// SIG undefined FUN_148cf5c58(void)

void FUN_148cf5c58(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[1] = 0x40000000bf800000;
  *puVar2 = &PTR_FUN_14b5d2a00;
  uVar1 = DAT_14c8464e8;
  puVar2[4] = DAT_14c8464e0;
  puVar2[5] = uVar1;
  puVar2[6] = DAT_14c8464f0;
  *(undefined1 *)(puVar2 + 7) = 1;
  return;
}



// FUNCTION 148cf5cb2 FUN_148cf5cb2 body=70 status=ok
// SIG undefined FUN_148cf5cb2(void)

void FUN_148cf5cb2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[1] = 0x40000000bf800000;
  *puVar1 = &PTR_FUN_14b5d2a60;
  *(undefined4 *)(puVar1 + 4) = 0x43fa0000;
  return;
}



// FUNCTION 148cf5cf8 FUN_148cf5cf8 body=56 status=ok
// SIG undefined FUN_148cf5cf8(void)

void FUN_148cf5cf8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar1[2] = 1;
  puVar1[1] = 0x40000000bf800000;
  *puVar1 = &PTR_FUN_14b962240;
  return;
}



// FUNCTION 148cf5d30 FUN_148cf5d30 body=243 status=ok
// SIG undefined FUN_148cf5d30(void)

void FUN_148cf5d30(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14579c222();
  plVar2 = *(longlong **)(*(longlong *)(param_2 + 0x28) + 0xe0);
  if (plVar2 != (longlong *)0x0) {
    uVar1 = FUN_141262f1a();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_141262f1a();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        lVar4 = (**(code **)(*plVar3 + 0x18))(plVar3);
        if (0 < *(int *)(lVar4 + 0xa8)) {
          lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0xa0) + 0x20);
          if ((DAT_14c950c29 == '\x01') && (lVar4 != 0)) {
            FUN_1456cec3c(lVar4);
          }
          else if (lVar4 == 0) goto LAB_148cf5d9a;
          FUN_148a1f8d6(lVar4,&local_20);
          local_30 = 0;
          local_38 = 0;
          FUN_140dd024a(lVar4,local_20,0x3f800000,0);
        }
      }
    }
  }
LAB_148cf5d9a:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf5e24 FUN_148cf5e24 body=125 status=ok
// SIG undefined FUN_148cf5e24(void)

undefined8 FUN_148cf5e24(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_148b87c28();
  FUN_1406f1d90(uVar1,local_28,*(undefined1 *)(param_1 + 0x38));
  uVar1 = FUN_1447a1f4a(local_28);
  FUN_140b1283a(param_2,L"Carry: ",uVar1);
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf5ea2 FUN_148cf5ea2 body=84 status=ok
// SIG undefined FUN_148cf5ea2(void)

void FUN_148cf5ea2(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b9622b0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e) = 0x1010101;
  *(undefined2 *)((longlong)param_1 + 0x22) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



// FUNCTION 148cf5f12 FUN_148cf5f12 body=102 status=ok
// SIG undefined FUN_148cf5f12(void)

void FUN_148cf5f12(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0x2833) = 1;
  FUN_148cfa2fa(param_1 + 0x26b8);
  if (*(longlong *)(param_1 + 0x2740) != 0) {
    cVar1 = FUN_144729dda(param_1 + 0x2738);
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x2740) + 0x10))();
      goto LAB_148cf5f60;
    }
  }
  uVar2 = 0;
LAB_148cf5f60:
  FUN_148b82b32(param_1 + 0x26a8,param_2,uVar2);
  return;
}



// FUNCTION 148cf5f78 FUN_148cf5f78 body=102 status=ok
// SIG undefined FUN_148cf5f78(void)

void FUN_148cf5f78(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0x2833) = 0;
  FUN_148cfa2fa(param_1 + 0x26e0);
  if (*(longlong *)(param_1 + 0x2740) != 0) {
    cVar1 = FUN_144729dda(param_1 + 0x2738);
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x2740) + 0x10))();
      goto LAB_148cf5fc6;
    }
  }
  uVar2 = 0;
LAB_148cf5fc6:
  FUN_148b82b32(param_1 + 0x26d0,param_2,uVar2);
  return;
}



// FUNCTION 148cf5fea FUN_148cf5fea body=63 status=ok
// SIG undefined FUN_148cf5fea(void)

void FUN_148cf5fea(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  
  FUN_1488c7e38(param_1 + 0x260);
  if (*param_3 != 0) {
    plVar1 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_3[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000148cf601e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 148cf607a FUN_148cf607a body=51 status=ok
// SIG undefined FUN_148cf607a(void)

void FUN_148cf607a(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  if ((char)param_2 != '\0') {
    FUN_140d61428(param_1 + -0x3c0);
  }
  FUN_145e2d63c(param_1,param_2,param_3);
  return;
}



// FUNCTION 148cf60e6 FUN_148cf60e6 body=40 status=ok
// SIG undefined FUN_148cf60e6(void)

undefined8 FUN_148cf60e6(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_145875cda(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 148cf611a FUN_148cf611a body=28 status=ok
// SIG undefined FUN_148cf611a(void)

void FUN_148cf611a(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_1458f2ec4(param_1);
  return;
}



// FUNCTION 148cf6136 FUN_148cf6136 body=132 status=ok
// SIG undefined FUN_148cf6136(void)

void FUN_148cf6136(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    FUN_1446f470e(&local_30,L"ContainerDisabled",1);
    uVar1 = FUN_1418dfc56(param_1);
    (**(code **)(*(longlong *)(param_2 + 0x3c0) + 0x98))(param_2 + 0x3c0,uVar1 ^ 1,local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf61bc FUN_148cf61bc body=254 status=ok
// SIG undefined FUN_148cf61bc(void)

void FUN_148cf61bc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  code *local_38;
  undefined4 local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    plVar3 = *(longlong **)(param_1 + 0x27b0);
    if (plVar3 == (longlong *)0x0) {
      lVar1 = FUN_1488f7064(param_1);
      if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar1);
      }
      *(longlong *)(param_1 + 0x27b0) = lVar1;
      local_38 = FUN_148cf63c2;
      local_30 = 0;
      FUN_148cf62c2(lVar1 + 0x318,local_28,param_1);
      FUN_140b506a4(*(undefined8 *)(param_1 + 0x27b0));
      plVar3 = *(longlong **)(param_1 + 0x27b0);
    }
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_2 + 8);
    }
    FUN_1447325ac(puVar2,&local_40,1);
    (**(code **)(*plVar3 + 0x5f8))(plVar3,local_40);
    (**(code **)(**(longlong **)(param_1 + 0x27b0) + 0x5e8))();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf62c2 FUN_148cf62c2 body=254 status=ok
// SIG undefined FUN_148cf62c2(void)

undefined8
FUN_148cf62c2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14a3a3510;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9633a0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14490d954(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf63c2 FUN_148cf63c2 body=170 status=ok
// SIG undefined FUN_148cf63c2(void)

void FUN_148cf63c2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 local_88 [104];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 != 0) {
    lVar1 = FUN_140ebc504();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_148cf646e(param_1,local_88);
      local_98 = 0;
      FUN_1413d4c10(param_2,local_88,0,0);
      FUN_14485c47a(param_1 + 0x2720,param_2);
      FUN_148cf65a8(param_1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf646e FUN_148cf646e body=313 status=ok
// SIG undefined FUN_148cf646e(void)

undefined8 * FUN_148cf646e(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0x2658);
  if (lVar3 == 0) {
    puVar4 = &DAT_14c846480;
    if (*(longlong *)(param_1 + 0x1c8) != 0) {
      puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x1c8) + 0x240);
    }
LAB_148cf6531:
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *param_2 = *puVar4;
      puVar4 = puVar4 + 1;
      param_2 = param_2 + 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (*(char *)(lVar3 + 0x488) == '\0') {
    puVar4 = (undefined8 *)(param_1 + 0x2660);
    goto LAB_148cf6531;
  }
  if (*(char *)(lVar3 + 0x488) == '\x01') {
    uVar1 = *(undefined8 *)(lVar3 + 0x4a8);
    local_28 = FUN_144a799b0();
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_28);
    }
    local_38 = 0;
    plVar2 = (longlong *)FUN_140ae4830(param_1,&local_28,uVar1,0);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x4a8))
                (plVar2,param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x2658) + 0x4b0),0);
      goto LAB_148cf657b;
    }
  }
  puVar4 = &DAT_14c846480;
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x1c8) + 0x240);
  }
  puVar5 = param_2;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
LAB_148cf657b:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148cf65a8 FUN_148cf65a8 body=357 status=ok
// SIG undefined FUN_148cf65a8(void)

void FUN_148cf65a8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50;
  undefined1 local_48;
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined1 *)(param_1 + 0x2790) = 1;
  FUN_140cbebe8(param_1 + 0x30,0);
  lVar1 = FUN_14479d2ce(param_1 + 0x2720);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x178) == '\x03') {
      *(undefined1 *)(lVar1 + 0x2832) = 2;
    }
    *(undefined1 *)(lVar1 + 0x2831) = 2;
    FUN_140c7a916(lVar1);
    FUN_148cf6b8a(param_1,lVar1);
    lVar2 = *(longlong *)(param_1 + 0x2658);
    if (lVar2 != 0) {
      if (*(char *)(lVar2 + 0x4cc) == '\x01') {
        FUN_1446f470e(&local_30,L"LockedInContainerSocket",1);
        (**(code **)(*(longlong *)(lVar1 + 0x3c0) + 0x98))(lVar1 + 0x3c0,1,local_30);
        lVar2 = *(longlong *)(param_1 + 0x2658);
      }
      if (*(char *)(lVar2 + 0x488) == '\x01') {
        uVar3 = *(undefined8 *)(lVar2 + 0x4a8);
        local_38 = FUN_144a799b0();
        if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(local_38);
        }
        local_58 = 0;
        uVar3 = FUN_140ae4830(param_1,&local_38,uVar3,0);
        local_50 = 1;
        local_58 = CONCAT71(local_58._1_7_,1);
        local_48 = 0;
        FUN_140e1fd56(lVar1,uVar3,*(undefined8 *)(*(longlong *)(param_1 + 0x2658) + 0x4b0),1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf670e FUN_148cf670e body=603 status=ok
// SIG undefined FUN_148cf670e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148cf670e(longlong param_1,float param_2)

{
  double dVar1;
  ulonglong uVar2;
  double dVar3;
  char cVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar10;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar11 [16];
  float fVar12;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined1 local_160;
  double local_150;
  double local_148;
  double local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  double local_d8;
  double local_d0;
  double local_c8;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_1448e423c();
  cVar4 = FUN_144729dda(param_1 + 0x2720);
  if ((cVar4 == '\0') || (*(longlong *)(param_1 + 0x2658) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_90 ^ (ulonglong)auStack_188);
  }
  param_2 = param_2 + *(float *)(param_1 + 0x2788);
  *(float *)(param_1 + 0x2788) = param_2;
  param_2 = param_2 * *(float *)(param_1 + 0x278c);
  fVar12 = 1.0;
  if (param_2 <= 1.0) {
    fVar12 = param_2;
  }
  FUN_148cf646e(param_1,&local_f8);
  dVar3 = (double)fVar12;
  local_138 = local_f8;
  uStack_134 = uStack_f4;
  uStack_130 = uStack_f0;
  uStack_12c = uStack_ec;
  local_128 = local_e8;
  uStack_124 = uStack_e4;
  uStack_120 = uStack_e0;
  uStack_11c = uStack_dc;
  FUN_144a44da6(local_118,param_1 + 0x2750);
  dVar7 = (double)local_108._0_8_ * (double)local_108._0_8_ +
          (double)local_118._0_8_ * (double)local_118._0_8_;
  dVar10 = (double)local_108._8_8_ * (double)local_108._8_8_ +
           (double)local_118._8_8_ * (double)local_118._8_8_;
  auVar8._0_8_ = dVar7 + dVar10;
  auVar8._8_8_ = dVar7 + dVar10;
  uVar6 = -(ulonglong)(9.99999993922529e-09 <= auVar8._8_8_);
  auVar9 = sqrtpd(auVar8,auVar8);
  auVar9 = divpd(_DAT_149934d80,auVar9);
  auVar11._0_8_ = auVar9._0_8_ * (double)local_108._0_8_;
  auVar11._8_8_ = auVar9._8_8_ * (double)local_108._8_8_;
  uVar2 = (ulonglong)((double)local_118._8_8_ * auVar9._8_8_) & uVar6;
  local_118._8_4_ = (int)uVar2;
  local_118._0_8_ =
       (ulonglong)((double)local_118._0_8_ * auVar9._0_8_) &
       -(ulonglong)(9.99999993922529e-09 <= auVar8._0_8_);
  local_118._12_4_ = (int)(uVar2 >> 0x20);
  auVar9._8_4_ = (int)uVar6;
  auVar9._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar8._0_8_);
  auVar9._12_4_ = (int)(uVar6 >> 0x20);
  local_108 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar11,auVar9);
  dVar7 = *(double *)(param_1 + 0x2780);
  dVar10 = *(double *)(param_1 + 0x2770);
  dVar1 = *(double *)(param_1 + 0x2778);
  uVar5 = FUN_14479d2ce(param_1 + 0x2720);
  local_160 = 0;
  local_168 = 0;
  local_150 = (local_d8 - dVar10) * dVar3 + dVar10;
  local_148 = (local_d0 - dVar1) * dVar3 + dVar1;
  local_140 = (local_c8 - dVar7) * dVar3 + dVar7;
  FUN_141507c90(uVar5,&local_150,local_118,0);
  if (1.0 <= param_2) {
    FUN_148cf65a8(param_1);
  }
  if ((local_90 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf69b4 FUN_148cf69b4 body=468 status=ok
// SIG undefined FUN_148cf69b4(void)

void FUN_148cf69b4(longlong param_1,code *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_78 [40];
  code *local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_2 != (code *)0x0) && (*(longlong *)(param_1 + 0x2658) != 0)) {
    cVar2 = FUN_148cf6d60(param_1);
    if (cVar2 != '\0') {
      lVar5 = param_1 + 0x2720;
      cVar2 = FUN_144729dda(lVar5);
      if (cVar2 == '\0') {
        FUN_140cbebe8(param_1 + 0x30,1);
        FUN_14485c47a(lVar5,param_2);
        lVar4 = *(longlong *)(param_2 + 0x1c8);
        if (lVar4 == 0) {
          puVar3 = &DAT_14c8464e0;
          uVar6 = (undefined4)DAT_14c8464f0;
          uVar7 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        }
        else {
          uVar6 = (undefined4)*(undefined8 *)(lVar4 + 0x270);
          uVar7 = (undefined4)((ulonglong)*(undefined8 *)(lVar4 + 0x270) >> 0x20);
          puVar3 = (undefined8 *)(lVar4 + 0x260);
        }
        uVar1 = puVar3[1];
        *(undefined8 *)(param_1 + 0x2770) = *puVar3;
        *(undefined8 *)(param_1 + 0x2778) = uVar1;
        *(ulonglong *)(param_1 + 0x2780) = CONCAT44(uVar7,uVar6);
        lVar4 = *(longlong *)(param_2 + 0x1c8);
        if (lVar4 == 0) {
          uVar6 = 0;
          uVar7 = 0;
          uVar8 = 0;
          uVar9 = 0;
          uVar10 = 0;
          uVar11 = 0;
          uVar12 = 0;
          uVar13 = 0x3ff00000;
        }
        else {
          uVar6 = *(undefined4 *)(lVar4 + 0x240);
          uVar7 = *(undefined4 *)(lVar4 + 0x244);
          uVar8 = *(undefined4 *)(lVar4 + 0x248);
          uVar9 = *(undefined4 *)(lVar4 + 0x24c);
          uVar10 = *(undefined4 *)(lVar4 + 0x250);
          uVar11 = *(undefined4 *)(lVar4 + 0x254);
          uVar12 = *(undefined4 *)(lVar4 + 600);
          uVar13 = *(undefined4 *)(lVar4 + 0x25c);
        }
        *(undefined4 *)(param_1 + 0x2750) = uVar6;
        *(undefined4 *)(param_1 + 0x2754) = uVar7;
        *(undefined4 *)(param_1 + 0x2758) = uVar8;
        *(undefined4 *)(param_1 + 0x275c) = uVar9;
        *(undefined4 *)(param_1 + 0x2760) = uVar10;
        *(undefined4 *)(param_1 + 0x2764) = uVar11;
        *(undefined4 *)(param_1 + 0x2768) = uVar12;
        *(undefined4 *)(param_1 + 0x276c) = uVar13;
        *(undefined4 *)(param_1 + 0x2788) = 0;
        *(undefined1 *)(param_1 + 0x2790) = 0;
        FUN_148cf6f84(param_1,param_2);
        lVar4 = FUN_14479d2ce(lVar5);
        local_50 = FUN_1440d74a4;
        local_48 = 0;
        FUN_148cf62c2(lVar4 + 0x2620,&local_40,param_1,&local_50);
        *(undefined8 *)(param_1 + 0x2728) = local_40;
        lVar4 = FUN_14479d2ce(lVar5);
        local_50 = FUN_148cf712e;
        local_48 = 0;
        FUN_148cf62c2(lVar4 + 0x2b8,&local_40,param_1,&local_50);
        *(undefined8 *)(param_1 + 0x2730) = local_40;
        lVar5 = FUN_14479d2ce(lVar5);
        if (*(char *)(lVar5 + 0x178) == '\x03') {
          *(undefined1 *)(lVar5 + 0x2832) = 3;
        }
        *(undefined1 *)(lVar5 + 0x2831) = 3;
        FUN_140c7a916(lVar5);
        local_50 = param_2;
        FUN_1447cd2ec(param_1 + 0x25f8);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf6b8a FUN_148cf6b8a body=167 status=ok
// SIG undefined FUN_148cf6b8a(void)

void FUN_148cf6b8a(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    local_38 = param_2;
    FUN_1447cd2ec(param_1 + 0x2608,&local_38);
    FUN_148cfaa12(param_1 + 0x2618,param_2);
    FUN_148cf5f12(param_2,param_1);
    local_24 = 0;
    local_38 = DAT_14cbc55e0;
    local_30 = 0xffffffff;
    FUN_141094e00(param_1 + 0x4d8,&local_38,1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf6c32 FUN_148cf6c32 body=197 status=ok
// SIG undefined FUN_148cf6c32(void)

void FUN_148cf6c32(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144729dda(param_1 + 0x2738);
  if (((cVar1 != '\0') && (*(longlong *)(param_1 + 0x2658) != 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0x2658) + 0x468) == '\0')) {
    lVar2 = FUN_14479d2ce(param_1 + 0x2738);
    if (lVar2 != 0) {
      local_38 = lVar2;
      FUN_1447cd2ec(param_1 + 0x2630,&local_38);
      FUN_148cf5f78(lVar2,param_1);
      local_24 = 0;
      local_38 = DAT_14cbc55e0;
      local_30 = 0xffffffff;
      FUN_141094e00(param_1 + 0x4d8,&local_38,0);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf6cf8 FUN_148cf6cf8 body=102 status=ok
// SIG undefined FUN_148cf6cf8(void)

void FUN_148cf6cf8(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    local_c = 0;
    local_20 = DAT_14cbc55d0;
    local_18 = 0xffffffff;
    FUN_141094e00(param_1 + 0x4d8,&local_20,param_2);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf6d60 FUN_148cf6d60 body=547 status=ok
// SIG undefined FUN_148cf6d60(void)

bool FUN_148cf6d60(longlong param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  double *pdVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  if (*(longlong *)(param_1 + 0x2658) == 0) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    if (*(char *)(*(longlong *)(param_1 + 0x2658) + 0x4cd) == '\x01') {
      dVar11 = *(double *)(param_1 + 0x26d0);
      dVar10 = *(double *)(param_1 + 0x26c0);
      dVar1 = *(double *)(param_1 + 0x26c8);
      dVar4 = dVar11 - dVar10 * 0.0;
      dVar6 = dVar10 * 0.0 - dVar1;
      dVar7 = dVar1 * 0.0 + dVar11 * -0.0;
      dVar6 = dVar6 + dVar6;
      dVar4 = dVar4 + dVar4;
      dVar7 = dVar7 + dVar7;
      dVar2 = *(double *)(param_1 + 0x26d8);
      lVar3 = *(longlong *)(param_2 + 0x1c8);
      if (lVar3 == 0) {
        pdVar9 = (double *)&DAT_14c8464e0;
        dVar12 = DAT_14c8464f0;
      }
      else {
        pdVar9 = (double *)(lVar3 + 0x260);
        dVar12 = *(double *)(lVar3 + 0x270);
      }
      dVar12 = dVar12 - *(double *)(param_1 + 0x26f0);
      dVar13 = *pdVar9 - *(double *)(param_1 + 0x26e0);
      dVar14 = pdVar9[1] - *(double *)(param_1 + 0x26e8);
      dVar5 = dVar12 * dVar12 + dVar13 * dVar13 + dVar14 * dVar14;
      if (9.99999993922529e-09 < dVar5) {
        dVar5 = 1.0 / SQRT(dVar5);
        dVar13 = dVar13 * dVar5;
        dVar14 = dVar14 * dVar5;
        dVar12 = dVar12 * dVar5;
      }
      dVar10 = (dVar2 * dVar4 + 0.0 + (dVar11 * dVar7 - dVar6 * dVar10)) * dVar14 +
               dVar13 * ((dVar1 * dVar6 - dVar4 * dVar11) + dVar2 * dVar7 + 1.0) +
               dVar12 * (dVar2 * dVar6 + 0.0 + (dVar10 * dVar4 - dVar7 * dVar1));
      dVar11 = dVar10;
      if (1.0 <= dVar10) {
        dVar11 = 1.0;
      }
      dVar11 = acos((double)(-(ulonglong)(dVar10 < -1.0) & 0xbff0000000000000 |
                            ~-(ulonglong)(dVar10 < -1.0) & (ulonglong)dVar11));
      bVar8 = (float)(dVar11 * 57.29577951308232) <
              *(float *)(*(longlong *)(param_1 + 0x2658) + 0x500) * 0.5;
    }
  }
  return bVar8;
}



// FUNCTION 148cf6f84 FUN_148cf6f84 body=425 status=ok
// SIG undefined FUN_148cf6f84(void)

void FUN_148cf6f84(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_c8 [32];
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = *(longlong *)(param_1 + 0x2658);
  if (lVar2 != 0) {
    fVar5 = *(float *)(lVar2 + 0x4b8);
    fVar6 = *(float *)(lVar2 + 0x4bc);
    if (*(longlong *)(param_2 + 0x2740) != 0) {
      cVar1 = FUN_144729dda(param_2 + 0x2738);
      if (cVar1 != '\0') {
        lVar2 = (**(code **)(**(longlong **)(param_2 + 0x2740) + 0x20))();
        if (*(char *)(lVar2 + 0x30) == '\x04') {
          fVar5 = *(float *)(*(longlong *)(param_1 + 0x2658) + 0x4c4);
          fVar6 = *(float *)(*(longlong *)(param_1 + 0x2658) + 0x4c8);
        }
      }
    }
    FUN_148cf646e(param_1,&local_a8);
    local_88 = local_88 - *(double *)(param_1 + 0x2770);
    local_80 = local_80 - *(double *)(param_1 + 0x2778);
    local_78 = local_78 - *(double *)(param_1 + 0x2780);
    fVar5 = fVar5 / (float)SQRT(local_78 * local_78 + local_80 * local_80 + local_88 * local_88);
    dVar3 = *(double *)(param_1 + 0x2768) * local_90 +
            *(double *)(param_1 + 0x2760) * local_98 +
            *(double *)(param_1 + 0x2750) * local_a8 + local_a0 * *(double *)(param_1 + 0x2758);
    dVar4 = dVar3;
    if (1.0 <= dVar3) {
      dVar4 = 1.0;
    }
    dVar4 = acos((double)(-(ulonglong)(dVar3 < -1.0) & 0xbff0000000000000 |
                         ~-(ulonglong)(dVar3 < -1.0) & (ulonglong)dVar4));
    fVar6 = fVar6 / (float)(dVar4 * 57.29577951308232);
    if (fVar6 <= fVar5) {
      fVar5 = fVar6;
    }
    *(float *)(param_1 + 0x278c) = fVar5;
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf712e FUN_148cf712e body=43 status=ok
// SIG undefined FUN_148cf712e(void)

void FUN_148cf712e(longlong param_1)

{
  FUN_140cbebe8(param_1 + 0x30,0);
  *(undefined8 *)(param_1 + 0x2720) = 0;
  *(undefined1 *)(param_1 + 0x2790) = 0;
  return;
}



// FUNCTION 148cf715a FUN_148cf715a body=155 status=ok
// SIG undefined FUN_148cf715a(void)

undefined8 FUN_148cf715a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [36];
  undefined1 local_54 [12];
  undefined8 local_48 [3];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((byte *)*param_2 != (byte *)0x0) && ((~*(byte *)*param_2 & 3) == 0)) {
    uVar1 = FUN_140dddafc(param_2);
    local_48[0] = DAT_14cbc55f0;
    FUN_1401533ba(local_54,local_48,1);
    FUN_1448075d0(local_48,local_54);
    FUN_14045886c(uVar1,local_48);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf71f6 FUN_148cf71f6 body=37 status=ok
// SIG undefined FUN_148cf71f6(void)

void FUN_148cf71f6(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_14582c99a();
  if (cVar1 != '\0') {
    FUN_1411ab890(param_1);
    return;
  }
  return;
}



// FUNCTION 148cf721c FUN_148cf721c body=164 status=ok
// SIG undefined FUN_148cf721c(void)

void FUN_148cf721c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_1 + 0x2680);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x2678);
    lVar5 = 0;
    do {
      local_48 = *(undefined8 *)(lVar2 + lVar5);
      uVar4 = FUN_14479d2ce(&local_48);
      cVar3 = FUN_148cf72c2(param_1,uVar4);
      if (cVar3 != '\0') {
        local_40 = &local_48;
        FUN_14619cb2e(param_1 + 0x2678);
        break;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf72c2 FUN_148cf72c2 body=108 status=ok
// SIG undefined FUN_148cf72c2(void)

undefined8 FUN_148cf72c2(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (((param_2 != (longlong *)0x0) &&
      (((lVar1 = (**(code **)(param_2[0x4c0] + 0x20))(param_2 + 0x4c0),
        *(longlong *)(lVar1 + 0x18) == 0 || (*(longlong *)(lVar1 + 0x20) == 0)) &&
       (*(char *)((longlong)param_2 + 0x2833) == '\0')))) &&
     (lVar1 = FUN_144944cf2(param_2), lVar1 == 0 || lVar1 == param_1)) {
    (**(code **)(*param_2 + 0x5c8))(param_2,0);
    return 1;
  }
  return 0;
}



// FUNCTION 148cf73fe FUN_148cf73fe body=123 status=ok
// SIG undefined FUN_148cf73fe(void)

void FUN_148cf73fe(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0x2640) != 0) &&
      (*(char *)(*(longlong *)(param_1 + 0x2640) + 0x459) == '\x01')) &&
     (*(char *)(param_1 + 0x178) == '\x03')) {
    local_c = 0;
    local_20 = DAT_14cbc5600;
    local_18 = 0xffffffff;
    FUN_141094e00(param_1 + 0x4d8,&local_20,0);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf747a FUN_148cf747a body=123 status=ok
// SIG undefined FUN_148cf747a(void)

void FUN_148cf747a(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0x2640) != 0) &&
      (*(char *)(*(longlong *)(param_1 + 0x2640) + 0x459) == '\x01')) &&
     (*(char *)(param_1 + 0x178) == '\x03')) {
    local_c = 0;
    local_20 = DAT_14cbc5600;
    local_18 = 0xffffffff;
    FUN_141094e00(param_1 + 0x4d8,&local_20,1);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf74f6 FUN_148cf74f6 body=467 status=ok
// SIG undefined FUN_148cf74f6(void)

void FUN_148cf74f6(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_d8 [40];
  ulonglong local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  char local_88;
  undefined1 local_80;
  ulonglong local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  char local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) goto LAB_148cf75bf;
  puVar3 = *(ulonglong **)(param_1 + 0x26a8);
  iVar2 = *(int *)(param_1 + 0x26b0);
  lVar8 = (longlong)iVar2;
  if (lVar8 == 0) {
LAB_148cf75ec:
    local_48 = 0;
    uVar7 = 0;
    uVar6 = 0;
  }
  else {
    lVar5 = 0;
    do {
      if (*(ulonglong *)((longlong)puVar3 + lVar5) == param_2) {
        if (lVar5 + (longlong)puVar3 != 0) goto LAB_148cf75bf;
        break;
      }
      lVar5 = lVar5 + 0x38;
    } while (lVar8 * 0x38 - lVar5 != 0);
    if (iVar2 < 1) goto LAB_148cf75ec;
    uVar6 = *puVar3 & 0xffffffff00000000;
    uVar7 = *puVar3 & 0xffffffff;
    local_78 = puVar3[1];
    local_70 = (undefined4)puVar3[2];
    local_68 = 0;
    local_60 = (undefined1)puVar3[4];
    local_50 = (char)puVar3[6];
    local_48 = 1;
    if (local_50 == '\x01') {
      local_54 = *(undefined4 *)((longlong)puVar3 + 0x2c);
      local_5c = *(undefined8 *)((longlong)puVar3 + 0x24);
    }
  }
  plVar1 = (longlong *)(param_1 + 0x26a8);
  *(uint *)(param_1 + 0x26b0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x26b4) < iVar2 + 1U) {
    FUN_148cfb178(plVar1,iVar2);
    puVar3 = (ulonglong *)*plVar1;
  }
  puVar3 = puVar3 + lVar8 * 7;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *(undefined1 *)(puVar3 + 4) = 1;
  *puVar3 = param_2;
  FUN_148cf76ca(puVar3 + 1,param_3);
  if (*(int *)(param_1 + 0x26b0) < 1) {
    local_80 = 0;
    uVar4 = 0;
  }
  else {
    puVar3 = (ulonglong *)*plVar1;
    uVar4 = *puVar3;
    local_b0 = puVar3[1];
    local_a8 = (undefined4)puVar3[2];
    local_a0 = 0;
    local_98 = (undefined1)puVar3[4];
    local_88 = (char)puVar3[6];
    local_80 = 1;
    if (local_88 == '\x01') {
      local_8c = *(undefined4 *)((longlong)puVar3 + 0x2c);
      local_94 = *(undefined8 *)((longlong)puVar3 + 0x24);
    }
  }
  if ((uVar6 | uVar7) != uVar4) {
    FUN_148cf7728(param_1,&local_b0,&local_78);
  }
LAB_148cf75bf:
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf76ca FUN_148cf76ca body=93 status=ok
// SIG undefined FUN_148cf76ca(void)

void FUN_148cf76ca(longlong *param_1,longlong *param_2)

{
  undefined1 uVar1;
  
  if ((*param_1 != *param_2) || ((int)param_1[1] != (int)param_2[1])) {
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    param_1[2] = 0;
  }
  *(char *)(param_1 + 3) = (char)param_2[3];
  if (param_2 != param_1) {
    if ((char)param_2[5] == '\x01') {
      *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
      *(undefined8 *)((longlong)param_1 + 0x1c) = *(undefined8 *)((longlong)param_2 + 0x1c);
      uVar1 = 1;
    }
    else {
      if ((char)param_1[5] != '\x01') {
        return;
      }
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 5) = uVar1;
  }
  return;
}



// FUNCTION 148cf7728 FUN_148cf7728 body=321 status=ok
// SIG undefined FUN_148cf7728(void)

void FUN_148cf7728(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1458cd4c4();
  if ((char)param_2[6] == '\x01') {
    if (((*param_2 != 0) && ((int)param_2[1] - 1U < 0xfffffffe)) &&
       (*(longlong **)(param_1 + 0x2618) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(param_1 + 0x2618) + 0x5f8))();
    }
    if ((char)param_2[3] == '\x01') {
      if ((char)param_2[5] == '\x01') {
        FUN_148cf7a46(param_1,*(undefined4 *)((longlong)param_2 + 0x1c));
      }
      else if (*(char *)(param_1 + 0x178) == '\x03') {
        local_24 = 0;
        local_38 = DAT_14cbc5600;
        local_30 = 0xffffffff;
        FUN_141094e00(param_1 + 0x4d8,&local_38,1);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (((*(char *)(param_3 + 0x30) == '\x01') && (*(char *)(param_3 + 0x18) == '\x01')) &&
     (*(char *)(param_1 + 0x178) == '\x03')) {
    local_24 = 0;
    local_38 = DAT_14cbc5600;
    local_30 = 0xffffffff;
    FUN_141094e00(param_1 + 0x4d8,&local_38,0);
  }
  if (*(longlong *)(param_1 + 0x2618) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf788c FUN_148cf788c body=358 status=ok
// SIG undefined FUN_148cf788c(void)

void FUN_148cf788c(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  char local_68;
  undefined1 local_60;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  char local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x26b0);
    if ((longlong)iVar1 != 0) {
      plVar2 = *(longlong **)(param_1 + 0x26a8);
      uVar6 = 0;
      do {
        if (*(longlong *)((longlong)plVar2 + uVar6) == param_2) {
          iVar5 = (int)(uVar6 >> 3) * -0x49249249;
          if (iVar5 < iVar1 && -1 < iVar5) {
            lVar3 = *plVar2;
            local_58 = plVar2[1];
            local_50 = (undefined4)plVar2[2];
            local_48 = 0;
            local_40 = (undefined1)plVar2[4];
            local_30 = (char)plVar2[6];
            if (local_30 == '\x01') {
              local_34 = *(undefined4 *)((longlong)plVar2 + 0x2c);
              local_3c = *(undefined8 *)((longlong)plVar2 + 0x24);
            }
            local_28 = 1;
            FUN_148cf79f4();
            if (*(int *)(param_1 + 0x26b0) < 1) {
              local_60 = 0;
              lVar4 = 0;
            }
            else {
              plVar2 = *(longlong **)(param_1 + 0x26a8);
              lVar4 = *plVar2;
              local_90 = plVar2[1];
              local_88 = (undefined4)plVar2[2];
              local_80 = 0;
              local_78 = (undefined1)plVar2[4];
              local_68 = (char)plVar2[6];
              local_60 = 1;
              if (local_68 == '\x01') {
                local_6c = *(undefined4 *)((longlong)plVar2 + 0x2c);
                local_74 = *(undefined8 *)((longlong)plVar2 + 0x24);
              }
            }
            if (lVar3 != lVar4) {
              FUN_148cf7728(param_1,&local_90,&local_58);
            }
          }
          break;
        }
        uVar6 = uVar6 + 0x38;
      } while ((longlong)iVar1 * 0x38 - uVar6 != 0);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148cf79f4 FUN_148cf79f4 body=82 status=ok
// SIG undefined FUN_148cf79f4(void)

void FUN_148cf79f4(longlong *param_1,uint param_2)

{
  void *_Dst;
  int iVar1;
  
  _Dst = (void *)(*param_1 + (ulonglong)param_2 * 0x38);
  if (*(char *)(*param_1 + 0x30 + (ulonglong)param_2 * 0x38) == '\x01') {
    *(undefined1 *)((longlong)_Dst + 0x30) = 0;
  }
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x38),(longlong)(int)(~param_2 + iVar1) * 0x38);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_148cfb208(param_1);
  return;
}



// FUNCTION 148cf7a46 FUN_148cf7a46 body=409 status=ok
// SIG undefined FUN_148cf7a46(void)

void FUN_148cf7a46(longlong param_1,float param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = FUN_1447210f0();
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x1f0) == 0) {
      puVar3 = (undefined8 *)(lVar2 + 0x458);
    }
    else {
      puVar3 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
    }
    uVar1 = *puVar3;
    if (param_2 <= 0.01) {
      param_2 = 0.01;
    }
    local_a8 = (undefined8 *)0x0;
    local_a0 = 0;
    FUN_1446efa72(&local_a8,0,3,0x10);
    puVar3 = local_a8;
    local_a0 = 3;
    *local_a8 = &PTR_LAB_14a1c8830;
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
    local_a8[2] = lVar4;
    *local_a8 = &PTR_FUN_14b963750;
    local_a8[3] = 0;
    FUN_14485c47a(local_a8 + 3,param_1);
    *(undefined4 *)(puVar3 + 5) = 0;
    puVar3[4] = FUN_148cf7be0;
    local_98 = 0;
    local_90 = 0;
    FUN_14487d8d8(&local_98,&local_a8);
    local_58 = 1;
    local_b0 = 0xbf800000;
    local_b8 = 0;
    FUN_1406f3fee(uVar1,param_1 + 0x26b8,&local_98,param_2);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
    FUN_1449db362(&local_a8);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf7be0 FUN_148cf7be0 body=395 status=ok
// SIG undefined FUN_148cf7be0(void)

void FUN_148cf7be0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  longlong local_70;
  longlong *local_68;
  undefined8 *local_60;
  longlong local_58;
  uint5 local_48;
  undefined3 uStack_43;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((0 < *(int *)(param_1 + 0x26b0)) &&
      (lVar2 = *(longlong *)(param_1 + 0x26a8), *(char *)(lVar2 + 0x30) == '\x01')) &&
     (*(char *)(lVar2 + 0x20) == '\x01')) {
    lVar2 = *(longlong *)(lVar2 + 0x28);
    _local_48 = FUN_1447210f0(param_1);
    FUN_145868112(&local_80);
    lVar4 = local_58;
    lVar3 = local_70;
    puVar6 = (undefined8 *)CONCAT44(uStack_74,local_78);
    LOCK();
    *(int *)(local_70 + 0x38) = *(int *)(local_70 + 0x38) + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_58 + 0x38) = *(int *)(local_58 + 0x38) + 1;
    UNLOCK();
LAB_148cf7c89:
    if (puVar6 != local_60) {
      lVar5 = (longlong)*(int *)(puVar6[2] + 0x1f8);
      if (lVar5 != 0) {
        lVar7 = 0;
        do {
          if (*(longlong *)(*(longlong *)(puVar6[2] + 0x1f0) + lVar7) == lVar2) {
            LOCK();
            piVar1 = (int *)(lVar4 + 0x38);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            LOCK();
            piVar1 = (int *)(lVar3 + 0x38);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            LOCK();
            *(int *)(local_58 + 0x38) = *(int *)(local_58 + 0x38) + -1;
            UNLOCK();
            LOCK();
            *(int *)(local_70 + 0x38) = *(int *)(local_70 + 0x38) + -1;
            UNLOCK();
            goto LAB_148cf7c1d;
          }
          lVar7 = lVar7 + 8;
        } while (lVar5 * 8 != lVar7);
      }
      for (puVar6 = (undefined8 *)FUN_14126f4b0(*puVar6); puVar6 != (undefined8 *)0x0;
          puVar6 = (undefined8 *)FUN_14126f4b0(*puVar6)) {
        lVar5 = FUN_1447210f0(puVar6[2]);
        if (lVar5 == *local_68) goto LAB_148cf7c89;
      }
      puVar6 = (undefined8 *)0x0;
      goto LAB_148cf7c89;
    }
    LOCK();
    piVar1 = (int *)(lVar4 + 0x38);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    LOCK();
    piVar1 = (int *)(lVar3 + 0x38);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_58 + 0x38) = *(int *)(local_58 + 0x38) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_70 + 0x38) = *(int *)(local_70 + 0x38) + -1;
    UNLOCK();
    if (*(char *)(param_1 + 0x178) == '\x03') {
      local_48 = (uint5)(uint)local_48;
      local_80 = DAT_14cbc5600;
      local_78 = 0xffffffff;
      FUN_141094e00(param_1 + 0x4d8,&local_80,1);
    }
  }
LAB_148cf7c1d:
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf7d6c FUN_148cf7d6c body=146 status=ok
// SIG undefined FUN_148cf7d6c(void)

void FUN_148cf7d6c(longlong *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_2 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_140338614();
    lVar3 = (**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (lVar3 != 0) {
      uVar1 = FUN_140338614();
      lVar4 = FUN_144718840(lVar3,uVar1);
      if (lVar4 != 0 && lVar3 != lVar4) {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(param_1);
        }
        uVar1 = FUN_140338614();
        plVar5 = (longlong *)FUN_144718840(param_1,uVar1);
        *param_2 = 0;
        if (plVar5 != (longlong *)0x0) {
          uVar2 = (**(code **)(*plVar5 + 0x40))(plVar5);
          *param_2 = uVar2;
        }
      }
    }
  }
  return;
}



// FUNCTION 148cf7dfe FUN_148cf7dfe body=125 status=ok
// SIG undefined FUN_148cf7dfe(void)

undefined8 FUN_148cf7dfe(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_140338614();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140338614();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        lVar4 = (**(code **)(*plVar3 + 0x20))(plVar3);
        if (*(longlong **)(lVar4 + 0x40) != (longlong *)0x0 && *(longlong *)(lVar4 + 0x38) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000148cf7e77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar1 = (**(code **)(**(longlong **)(lVar4 + 0x40) + 0x10))();
          return uVar1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 148cf7e7c FUN_148cf7e7c body=118 status=ok
// SIG undefined FUN_148cf7e7c(void)

void FUN_148cf7e7c(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_140338614();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140338614();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        uVar1 = (**(code **)(*plVar3 + 0x20))(plVar3);
        FUN_1418dfe60(uVar1,param_2,param_3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148cf7ef2 FUN_148cf7ef2 body=170 status=ok
// SIG undefined FUN_148cf7ef2(void)

void FUN_148cf7ef2(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_140338614();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140338614();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar2 != plVar3) goto LAB_148cf7f3b;
    }
  }
  plVar3 = (longlong *)0x0;
LAB_148cf7f3b:
  if (param_2 != (longlong *)0x0) {
    uVar1 = FUN_140437bea();
    lVar4 = (**(code **)(*param_2 + 0x288))(param_2,uVar1);
    if (lVar4 != 0) {
      uVar1 = FUN_140437bea();
      lVar5 = FUN_144718840(lVar4,uVar1);
      if (((lVar4 != lVar5) && (plVar3 != (longlong *)0x0)) && (lVar5 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000148cf7f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x30))(plVar3,lVar5,*(code **)(*plVar3 + 0x30));
        return;
      }
    }
  }
  return;
}



// FUNCTION 148cf7f9c FUN_148cf7f9c body=81 status=ok
// SIG undefined FUN_148cf7f9c(void)

void FUN_148cf7f9c(longlong param_1,undefined8 param_2)

{
  FUN_1413f02b4();
  FUN_145965236(param_1,param_2);
  FUN_140cf9190(param_1,1);
  *(undefined2 *)(param_1 + 0x30) = 0x301;
  if ((*(longlong *)(param_1 + 0x18) != 0) && (*(longlong **)(param_1 + 0x20) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000148cf7fe1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x78))();
    return;
  }
  return;
}



// FUNCTION 148cf7fee FUN_148cf7fee body=416 status=ok
// SIG undefined FUN_148cf7fee(void)

ulonglong FUN_148cf7fee(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong unaff_RBP;
  
  plVar3 = (longlong *)FUN_1447262c2(param_3);
  if (plVar3 != (longlong *)0x0) {
    uVar4 = FUN_140338614();
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar4);
    if (plVar3 != (longlong *)0x0) {
      uVar4 = FUN_140338614();
      plVar5 = (longlong *)FUN_144718840(plVar3,uVar4);
      if (plVar5 != (longlong *)0x0 && plVar3 != plVar5) {
        lVar6 = (**(code **)(*plVar5 + 0x18))(plVar5);
        plVar3 = *(longlong **)(lVar6 + 0x40);
        if (plVar3 != (longlong *)0x0 && *(longlong *)(lVar6 + 0x38) != 0) {
          lVar6 = *(longlong *)(param_1 + 0x18);
          if (lVar6 == 0) {
            uVar4 = FUN_140fe7bec();
            lVar6 = FUN_14477b664(uVar4);
            *(longlong *)(param_1 + 0x18) = lVar6;
          }
          plVar5 = (longlong *)(param_1 + 0x10);
          if (*(longlong *)(param_1 + 0x20) == 0) {
            unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
            if ((lVar6 == 0) || (*plVar5 == 0)) goto LAB_148cf80d7;
            plVar1 = *(longlong **)(lVar6 + 0xb8);
            if ((plVar1 == (longlong *)0x0) ||
               (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
              *(undefined8 *)(param_1 + 0x20) = 0;
              goto LAB_148cf80d7;
            }
            uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
            lVar6 = FUN_144aff482(uVar4,plVar5);
            *(longlong *)(param_1 + 0x20) = lVar6;
            if (lVar6 == 0) goto LAB_148cf80d7;
          }
          lVar7 = (**(code **)(*plVar3 + 0x28))(plVar3);
          lVar6 = *(longlong *)(param_1 + 0x18);
          if (lVar6 == 0) {
            uVar4 = FUN_140fe7bec();
            lVar6 = FUN_14477b664(uVar4);
            *(longlong *)(param_1 + 0x18) = lVar6;
          }
          lVar8 = *(longlong *)(param_1 + 0x20);
          if (((lVar8 == 0) && (lVar8 = 0, lVar6 != 0)) && (*plVar5 != 0)) {
            plVar3 = *(longlong **)(lVar6 + 0xb8);
            if ((plVar3 == (longlong *)0x0) ||
               (cVar2 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar2 == '\0')) {
              lVar8 = 0;
            }
            else {
              uVar4 = (**(code **)(*plVar3 + 0x110))(plVar3);
              lVar8 = FUN_144aff482(uVar4,plVar5);
            }
            *(longlong *)(param_1 + 0x20) = lVar8;
          }
          unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),lVar7 == lVar8);
          goto LAB_148cf80d7;
        }
      }
    }
  }
  unaff_RBP = 0;
LAB_148cf80d7:
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 148cf81c6 FUN_148cf81c6 body=40 status=ok
// SIG undefined FUN_148cf81c6(void)

undefined8 FUN_148cf81c6(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1415260e0(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 148cf820e FUN_148cf820e body=136 status=ok
// SIG undefined FUN_148cf820e(void)

void FUN_148cf820e(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = FUN_14579826a(param_1 + 0x83b0);
  cVar2 = FUN_144a7e912(uVar3);
  if (cVar2 != '\0') {
    plVar1 = (longlong *)FUN_144a1306c(uVar3);
    plVar1 = (longlong *)*plVar1;
    if (plVar1 != (longlong *)0x0) {
      uVar3 = FUN_140437bea();
      lVar4 = (**(code **)(*plVar1 + 0x288))(plVar1,uVar3);
      if (lVar4 != 0) {
        uVar3 = FUN_140437bea();
        lVar5 = FUN_144718840(lVar4,uVar3);
        if (lVar5 != 0 && lVar4 != lVar5) {
          FUN_140cf8c27(param_1,0);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 148cf8296 FUN_148cf8296 body=659 status=ok
// SIG undefined FUN_148cf8296(void)

void FUN_148cf8296(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  void *_Src;
  undefined8 *puVar3;
  char cVar4;
  undefined1 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [8];
  longlong local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  void *local_50;
  int local_48;
  undefined4 local_44;
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(byte *)(param_1 + 0x4db9) - 1 < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
  }
  if (*(byte *)(param_1 + 0x4db9) == 3) {
    lVar2 = param_1 + -0x3b48;
    plVar6 = (longlong *)FUN_140cf8aa6(lVar2);
    if (plVar6 != (longlong *)0x0) {
      cVar4 = (**(code **)(*plVar6 + 0x6c8))(plVar6);
      if (cVar4 != '\0') {
        if ((char)plVar6[0x430] == '\x01') {
          FUN_14023c33c(plVar6 + 0x30e);
          *(undefined1 *)(plVar6 + 0x430) = 0;
        }
        (**(code **)(plVar6[0x1b5] + 0x58))(plVar6 + 0x1b5,plVar6 + 0x1ec);
      }
    }
    if ((*(byte *)(param_1 + 0x4db9) & 0xfe) == 2) {
      *(undefined1 *)(param_1 + 0x4db9) = 4;
      lVar7 = (**(code **)(*param_2 + 0x30))(param_2);
      if (lVar7 != 0) {
        local_68 = *(undefined8 *)(lVar7 + 0x90);
        local_60 = *(undefined4 *)(lVar7 + 0x98);
        uStack_5c = *(undefined4 *)(lVar7 + 0x9c);
        uStack_58 = *(undefined4 *)(lVar7 + 0xa0);
        uStack_54 = *(undefined4 *)(lVar7 + 0xa4);
        local_50 = (void *)0x0;
        local_48 = *(int *)(lVar7 + 0xb0);
        lVar9 = (longlong)local_48;
        _Src = *(void **)(lVar7 + 0xa8);
        if (lVar9 == 0) {
          local_44 = 0;
        }
        else {
          FUN_1446dd670(&local_50,local_48,0);
          memcpy(local_50,_Src,lVar9 * 2);
        }
        uVar5 = FUN_141473846(lVar2,&local_68,0);
        *(undefined1 *)(param_1 + 0x4e08) = uVar5;
        uVar8 = (**(code **)(*(longlong *)(param_1 + -0x2a68) + 0x50))(param_1 + -0x2a68);
        FUN_140dc01da(uVar8,&local_78,*(undefined1 *)(param_1 + 0x4e08));
        if (local_78 != 0) {
          local_40 = (undefined8 *)0x0;
          local_38 = 0;
          FUN_1446efa72(&local_40,0,3,0x10);
          puVar3 = local_40;
          local_38 = 3;
          *local_40 = &PTR_LAB_14b3e9c20;
          LOCK();
          UNLOCK();
          lVar9 = DAT_14c758608 + 1;
          lVar7 = DAT_14c758608 + 1;
          if (lVar9 == 0) {
            LOCK();
            UNLOCK();
            lVar9 = DAT_14c758608 + 2;
            lVar7 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar7;
          local_40[2] = lVar9;
          *local_40 = &PTR_FUN_14b963a30;
          local_40[3] = 0;
          FUN_14485c47a(local_40 + 3,lVar2);
          puVar3[4] = lVar2;
          FUN_140ebcfd8(local_78 + 0x18,local_80,&local_40);
          FUN_1449db362(&local_40);
        }
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_70 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*local_70)(local_70);
            LOCK();
            piVar1 = (int *)((longlong)local_70 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_70 + 0x10))(local_70);
            }
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf8542 FUN_148cf8542 body=237 status=ok
// SIG undefined FUN_148cf8542(void)

void FUN_148cf8542(longlong *param_1,longlong *param_2)

{
  void *_Src;
  undefined1 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != (longlong *)0x0) {
    uVar2 = (**(code **)(*param_1 + 0x20))();
    FUN_148cf7f9c(uVar2,param_2);
    lVar3 = (**(code **)(*param_2 + 0x30))(param_2);
    if (lVar3 != 0) {
      local_58 = *(undefined8 *)(lVar3 + 0xe0);
      local_50 = *(undefined4 *)(lVar3 + 0xe8);
      uStack_4c = *(undefined4 *)(lVar3 + 0xec);
      uStack_48 = *(undefined4 *)(lVar3 + 0xf0);
      uStack_44 = *(undefined4 *)(lVar3 + 0xf4);
      local_40 = (void *)0x0;
      local_38 = *(int *)(lVar3 + 0x100);
      lVar4 = (longlong)local_38;
      _Src = *(void **)(lVar3 + 0xf8);
      if (lVar4 == 0) {
        local_34 = 0;
      }
      else {
        FUN_1446dd670(&local_40,local_38,0);
        memcpy(local_40,_Src,lVar4 * 2);
      }
      uVar1 = FUN_141473846(param_1 + -0x769,&local_58,0);
      *(undefined1 *)(param_1 + 0x9c1) = uVar1;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf8630 FUN_148cf8630 body=31 status=ok
// SIG undefined FUN_148cf8630(void)

undefined8 FUN_148cf8630(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cf8656 FUN_148cf8656 body=132 status=ok
// SIG undefined FUN_148cf8656(void)

void FUN_148cf8656(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148cf86dc FUN_148cf86dc body=89 status=ok
// SIG undefined FUN_148cf86dc(void)

void FUN_148cf86dc(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_145924bae(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 148cf8736 FUN_148cf8736 body=48 status=ok
// SIG undefined FUN_148cf8736(void)

void FUN_148cf8736(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 148cf8766 FUN_148cf8766 body=279 status=ok
// SIG undefined FUN_148cf8766(void)

void FUN_148cf8766(longlong *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  if ((longlong)(int)param_1[1] != 0) {
    lVar4 = (longlong)(int)param_1[1] * 0x90;
    piVar3 = (int *)(*param_1 + 0x7c);
    do {
      if (((piVar3[1] == 0 && *piVar3 == 0) && piVar3[2] == 0) && piVar3[3] == 0) {
LAB_148cf8805:
        FUN_1412e3d1e(&local_88);
        *piVar3 = local_88;
        piVar3[1] = iStack_84;
        piVar3[2] = iStack_80;
        piVar3[3] = iStack_7c;
      }
      else {
        uVar1 = FUN_1447addd0(piVar3,0x10);
        iVar2 = FUN_140f5cb3a(&local_78,uVar1,piVar3);
        if (iVar2 != -1) goto LAB_148cf8805;
      }
      FUN_1457adc9c(&local_78,&local_88,piVar3,0);
      piVar3 = piVar3 + 0x24;
      lVar4 = lVar4 + -0x90;
    } while (lVar4 != 0);
    local_30 = 0;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_140149fc2(&local_78);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf887e FUN_148cf887e body=153 status=ok
// SIG undefined FUN_148cf887e(void)

void FUN_148cf887e(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_148cf8918(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x1c + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0xff191919;
      *(undefined8 *)((longlong)puVar2 + 0xc) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x14) = 0;
      puVar2 = (undefined8 *)((longlong)puVar2 + 0x1c);
    }
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_148cf89b6(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148cf8918 FUN_148cf8918 body=157 status=ok
// SIG undefined FUN_148cf8918(void)

void FUN_148cf8918(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x1c,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x1c)) {
      uVar5 = uVar4 / 0x1c & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x1c,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148cf89b6 FUN_148cf89b6 body=63 status=ok
// SIG undefined FUN_148cf89b6(void)

void FUN_148cf89b6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148cf89f6(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x1c,4);
  }
  return;
}



// FUNCTION 148cf89f6 FUN_148cf89f6 body=126 status=ok
// SIG undefined FUN_148cf89f6(void)

ulonglong FUN_148cf89f6(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x1c) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x1c,4);
      uVar1 = uVar1 / 0x1c;
    }
  }
  return uVar1;
}



// FUNCTION 148cf8a74 FUN_148cf8a74 body=282 status=ok
// SIG undefined FUN_148cf8a74(void)

void FUN_148cf8a74(longlong *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  if ((longlong)(int)param_1[1] != 0) {
    lVar4 = (longlong)(int)param_1[1] * 0x88;
    piVar3 = (int *)(*param_1 + 0x74);
    do {
      if (((piVar3[1] == 0 && *piVar3 == 0) && piVar3[2] == 0) && piVar3[3] == 0) {
LAB_148cf8b16:
        FUN_1412e3d1e(&local_88);
        *piVar3 = local_88;
        piVar3[1] = iStack_84;
        piVar3[2] = iStack_80;
        piVar3[3] = iStack_7c;
      }
      else {
        uVar1 = FUN_1447addd0(piVar3,0x10);
        iVar2 = FUN_140f5cb3a(&local_78,uVar1,piVar3);
        if (iVar2 != -1) goto LAB_148cf8b16;
      }
      FUN_1457adc9c(&local_78,&local_88,piVar3,0);
      piVar3 = piVar3 + 0x22;
      lVar4 = lVar4 + -0x88;
    } while (lVar4 != 0);
    local_30 = 0;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_140149fc2(&local_78);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf8b90 FUN_148cf8b90 body=282 status=ok
// SIG undefined FUN_148cf8b90(void)

void FUN_148cf8b90(longlong *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  if ((longlong)(int)param_1[1] != 0) {
    lVar4 = (longlong)(int)param_1[1] * 0x88;
    piVar3 = (int *)(*param_1 + 8);
    do {
      if (((piVar3[1] == 0 && *piVar3 == 0) && piVar3[2] == 0) && piVar3[3] == 0) {
LAB_148cf8c32:
        FUN_1412e3d1e(&local_88);
        *piVar3 = local_88;
        piVar3[1] = iStack_84;
        piVar3[2] = iStack_80;
        piVar3[3] = iStack_7c;
      }
      else {
        uVar1 = FUN_1447addd0(piVar3,0x10);
        iVar2 = FUN_140f5cb3a(&local_78,uVar1,piVar3);
        if (iVar2 != -1) goto LAB_148cf8c32;
      }
      FUN_1457adc9c(&local_78,&local_88,piVar3,0);
      piVar3 = piVar3 + 0x22;
      lVar4 = lVar4 + -0x88;
    } while (lVar4 != 0);
    local_30 = 0;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_140149fc2(&local_78);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf8cac FUN_148cf8cac body=269 status=ok
// SIG undefined FUN_148cf8cac(void)

void FUN_148cf8cac(longlong *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  if ((longlong)(int)param_1[1] != 0) {
    lVar4 = (longlong)(int)param_1[1] * 0x38;
    piVar3 = (int *)(*param_1 + 8);
    do {
      if (((piVar3[1] == 0 && *piVar3 == 0) && piVar3[2] == 0) && piVar3[3] == 0) {
LAB_148cf8d47:
        FUN_1412e3d1e(&local_88);
        *piVar3 = local_88;
        piVar3[1] = iStack_84;
        piVar3[2] = iStack_80;
        piVar3[3] = iStack_7c;
      }
      else {
        uVar1 = FUN_1447addd0(piVar3,0x10);
        iVar2 = FUN_140f5cb3a(&local_78,uVar1,piVar3);
        if (iVar2 != -1) goto LAB_148cf8d47;
      }
      FUN_1457adc9c(&local_78,&local_88,piVar3,0);
      piVar3 = piVar3 + 0xe;
      lVar4 = lVar4 + -0x38;
    } while (lVar4 != 0);
    local_30 = 0;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_140149fc2(&local_78);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf8dba FUN_148cf8dba body=273 status=ok
// SIG undefined FUN_148cf8dba(void)

void FUN_148cf8dba(longlong *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  if ((longlong)(int)param_1[1] != 0) {
    lVar4 = (longlong)(int)param_1[1] * 0x30;
    piVar3 = (int *)(*param_1 + 0x1c);
    do {
      if (((piVar3[1] == 0 && *piVar3 == 0) && piVar3[2] == 0) && piVar3[3] == 0) {
LAB_148cf8e59:
        FUN_1412e3d1e(&local_88);
        *piVar3 = local_88;
        piVar3[1] = iStack_84;
        piVar3[2] = iStack_80;
        piVar3[3] = iStack_7c;
      }
      else {
        uVar1 = FUN_1447addd0(piVar3,0x10);
        iVar2 = FUN_140f5cb3a(&local_78,uVar1,piVar3);
        if (iVar2 != -1) goto LAB_148cf8e59;
      }
      FUN_1457adc9c(&local_78,&local_88,piVar3,0);
      piVar3 = piVar3 + 0xc;
      lVar4 = lVar4 + -0x30;
    } while (lVar4 != 0);
    local_30 = 0;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_140149fc2(&local_78);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf8ecc FUN_148cf8ecc body=68 status=ok
// SIG undefined FUN_148cf8ecc(void)

void FUN_148cf8ecc(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_148cf8f10(param_1);
  return;
}



// FUNCTION 148cf8f10 FUN_148cf8f10 body=477 status=ok
// SIG undefined FUN_148cf8f10(void)

void FUN_148cf8f10(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x30;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x2c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x28 + lVar7) =
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



// FUNCTION 148cf90ee FUN_148cf90ee body=114 status=ok
// SIG undefined FUN_148cf90ee(void)

void FUN_148cf90ee(longlong *param_1,int param_2)

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



// FUNCTION 148cf9160 FUN_148cf9160 body=132 status=ok
// SIG undefined FUN_148cf9160(void)

void FUN_148cf9160(longlong param_1,int param_2)

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



// FUNCTION 148cf91e6 FUN_148cf91e6 body=98 status=ok
// SIG undefined FUN_148cf91e6(void)

void FUN_148cf91e6(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x18 + *param_1);
  FUN_1459a1734(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar2 * 0x18);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 148cf9248 FUN_148cf9248 body=62 status=ok
// SIG undefined FUN_148cf9248(void)

void FUN_148cf9248(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148cf9286(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 148cf9286 FUN_148cf9286 body=112 status=ok
// SIG undefined FUN_148cf9286(void)

ulonglong FUN_148cf9286(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148cf92c0;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_148cf92c0:
  return param_2 & 0xffffffff;
}



// FUNCTION 148cf92f6 FUN_148cf92f6 body=48 status=ok
// SIG undefined FUN_148cf92f6(void)

void FUN_148cf92f6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 148cf9326 FUN_148cf9326 body=22 status=ok
// SIG undefined FUN_148cf9326(void)

void FUN_148cf9326(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 * 0x18);
    return;
  }
  return;
}



// FUNCTION 148cf933c FUN_148cf933c body=147 status=ok
// SIG undefined FUN_148cf933c(void)

void FUN_148cf933c(longlong param_1,int param_2)

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



// FUNCTION 148cf93d0 FUN_148cf93d0 body=98 status=ok
// SIG undefined FUN_148cf93d0(void)

void FUN_148cf93d0(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x18 + *param_1);
  FUN_1458ce261(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar2 * 0x18);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 148cf9432 FUN_148cf9432 body=62 status=ok
// SIG undefined FUN_148cf9432(void)

void FUN_148cf9432(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148cf9470(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 148cf9470 FUN_148cf9470 body=112 status=ok
// SIG undefined FUN_148cf9470(void)

ulonglong FUN_148cf9470(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148cf94aa;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_148cf94aa:
  return param_2 & 0xffffffff;
}



// FUNCTION 148cf94e0 FUN_148cf94e0 body=53 status=ok
// SIG undefined FUN_148cf94e0(void)

ulonglong FUN_148cf94e0(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 148cf9516 FUN_148cf9516 body=180 status=ok
// SIG undefined FUN_148cf9516(void)

int FUN_148cf9516(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x28);
        cVar1 = FUN_148cf963e(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_148cf95a4;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x20 + (longlong)iVar4 * 0x28);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_148cf95a4:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf95cc FUN_148cf95cc body=114 status=ok
// SIG undefined FUN_148cf95cc(void)

void FUN_148cf95cc(longlong *param_1,int param_2)

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



// FUNCTION 148cf963e FUN_148cf963e body=53 status=ok
// SIG undefined FUN_148cf963e(void)

ulonglong FUN_148cf963e(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 148cf9674 FUN_148cf9674 body=62 status=ok
// SIG undefined FUN_148cf9674(void)

void FUN_148cf9674(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148cf96b2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 148cf96b2 FUN_148cf96b2 body=93 status=ok
// SIG undefined FUN_148cf96b2(void)

ulonglong FUN_148cf96b2(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 148cf9710 FUN_148cf9710 body=95 status=ok
// SIG undefined FUN_148cf9710(void)

void FUN_148cf9710(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 148cf9770 FUN_148cf9770 body=413 status=ok
// SIG undefined FUN_148cf9770(void)

void FUN_148cf9770(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_14472eb64(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_144869a3c(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar9 * 0x10 + lVar2 + -0xc);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -4;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 148cf990e FUN_148cf990e body=300 status=ok
// SIG undefined FUN_148cf990e(void)

undefined4 * FUN_148cf990e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14088c1e2(param_1,local_40);
  uVar1 = *param_3;
  *local_38 = uVar1;
  *(undefined4 *)(local_38 + 1) = 0xffffffff;
  local_44 = local_40[0];
  uVar7 = (uint)((ulonglong)uVar1 >> 0x20) ^ (uint)uVar1;
  local_58 = 0;
  cVar2 = FUN_14088bac2(param_1,uVar7,local_38);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_38 + 0xc) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 1) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_145752ade(param_1);
    }
  }
  *param_2 = local_44;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf9a3c FUN_148cf9a3c body=138 status=ok
// SIG undefined FUN_148cf9a3c(void)

void FUN_148cf9a3c(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 148cf9ac6 FUN_148cf9ac6 body=299 status=ok
// SIG undefined FUN_148cf9ac6(void)

undefined4 * FUN_148cf9ac6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148cf9bf2(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x20) ^ (uint)uVar2;
  cVar4 = FUN_148cf9cd8(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_148cf9dd0(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf9bf2 FUN_148cf9bf2 body=230 status=ok
// SIG undefined FUN_148cf9bf2(void)

int * FUN_148cf9bf2(longlong *param_1,int *param_2)

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
      FUN_1403951a8(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 148cf9cd8 FUN_148cf9cd8 body=132 status=ok
// SIG undefined FUN_148cf9cd8(void)

undefined8 FUN_148cf9cd8(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    iVar5 = FUN_14043631c();
    if (iVar5 != -1) {
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      uVar3 = *(undefined4 *)(param_3 + 1);
      uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar5 * 0x18);
      *puVar1 = *(undefined4 *)param_3;
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      FUN_148cf9d5e(param_1,*param_4);
      *param_4 = iVar5;
      uVar6 = 1;
      goto LAB_148cf9d1a;
    }
  }
  uVar6 = 0;
LAB_148cf9d1a:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cf9d5e FUN_148cf9d5e body=114 status=ok
// SIG undefined FUN_148cf9d5e(void)

void FUN_148cf9d5e(longlong *param_1,int param_2)

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



// FUNCTION 148cf9dd0 FUN_148cf9dd0 body=436 status=ok
// SIG undefined FUN_148cf9dd0(void)

void FUN_148cf9dd0(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar10 = (longlong)(int)((uint)((ulonglong)uVar4 >> 0x20) ^ (uint)uVar4) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 148cf9f86 FUN_148cf9f86 body=263 status=ok
// SIG undefined FUN_148cf9f86(void)

void FUN_148cf9f86(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    uVar6 = (longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
            (longlong)(int)param_1[9] - 1U;
    lVar4 = (longlong)*(int *)((longlong)plVar5 + uVar6 * 4);
    if (lVar4 != -1) {
      lVar2 = *param_1;
      local_40 = *(undefined8 *)(lVar2 + lVar4 * 0x18);
      local_48 = param_2;
      cVar3 = FUN_1400ff418();
      if (cVar3 == '\0') {
        puVar1 = (undefined8 *)(lVar2 + lVar4 * 0x18);
        do {
          puVar7 = puVar1;
          lVar4 = (longlong)*(int *)(puVar7 + 2);
          if (lVar4 == -1) goto LAB_148cf9faa;
          puVar1 = (undefined8 *)(*param_1 + lVar4 * 0x18);
          local_40 = *puVar1;
          local_48 = param_2;
          cVar3 = FUN_1400ff418(&local_40,&local_48);
        } while (cVar3 == '\0');
        puVar7 = puVar7 + 2;
      }
      else {
        puVar7 = (undefined8 *)((longlong)plVar5 + uVar6 * 4);
      }
      FUN_148cfa08e(param_1,*(undefined4 *)puVar7);
    }
  }
LAB_148cf9faa:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cfa08e FUN_148cfa08e body=87 status=ok
// SIG undefined FUN_148cfa08e(void)

void FUN_148cfa08e(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_148cf9d5e();
  return;
}



// FUNCTION 148cfa0e6 FUN_148cfa0e6 body=199 status=ok
// SIG undefined FUN_148cfa0e6(void)

/* WARNING: Removing unreachable block (ram,0x000148cfa127) */
/* WARNING: Removing unreachable block (ram,0x000148cfa0fa) */
/* WARNING: Removing unreachable block (ram,0x000148cfa119) */
/* WARNING: Removing unreachable block (ram,0x000148cfa135) */
/* WARNING: Removing unreachable block (ram,0x000148cfa11b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148cfa0e6(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  puVar2 = DAT_14cbc56d0;
  LOCK();
  UNLOCK();
  DAT_14cbc56d0 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cbc56d8 = _DAT_14cbc56d8 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
        if ((longlong)DAT_14cbc56c0 != 0) {
          lVar3 = 0;
          do {
            if ((*(int *)(DAT_14cbc56b8 + 8 + lVar3) != 0) &&
               (*(longlong *)(DAT_14cbc56b8 + lVar3) != 0)) {
              FUN_140db0732(&DAT_14cbc56b8);
              break;
            }
            lVar3 = lVar3 + 0x10;
          } while ((longlong)DAT_14cbc56c0 * 0x10 != lVar3);
        }
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    _DAT_14cbc56d8 = _DAT_14cbc56d8 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 148cfa1c8 FUN_148cfa1c8 body=29 status=ok
// SIG undefined FUN_148cfa1c8(void)

bool FUN_148cfa1c8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148cfa1e6 FUN_148cfa1e6 body=101 status=ok
// SIG undefined FUN_148cfa1e6(void)

void FUN_148cfa1e6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9631e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cfa24c FUN_148cfa24c body=134 status=ok
// SIG undefined FUN_148cfa24c(void)

void FUN_148cfa24c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9631e0;
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
                    /* WARNING: Could not recover jumptable at 0x000148cfa2c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cfa2d2 FUN_148cfa2d2 body=39 status=ok
// SIG undefined FUN_148cfa2d2(void)

void FUN_148cfa2d2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148cfa2f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148cfa2fa FUN_148cfa2fa body=164 status=ok
// SIG undefined FUN_148cfa2fa(void)

void FUN_148cfa2fa(longlong *param_1,undefined8 param_2)

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
        goto LAB_148cfa37a;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148cfa37a:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148cfa3b6 FUN_148cfa3b6 body=29 status=ok
// SIG undefined FUN_148cfa3b6(void)

bool FUN_148cfa3b6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148cfa3d4 FUN_148cfa3d4 body=26 status=ok
// SIG undefined FUN_148cfa3d4(void)

bool FUN_148cfa3d4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148cfa3f8 FUN_148cfa3f8 body=152 status=ok
// SIG undefined FUN_148cfa3f8(void)

void FUN_148cfa3f8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9632c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  puVar1[6] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x000148cfa485. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,puVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 148cfa490 FUN_148cfa490 body=152 status=ok
// SIG undefined FUN_148cfa490(void)

void FUN_148cfa490(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9632c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  puVar1[6] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x000148cfa51d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,puVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 148cfa528 FUN_148cfa528 body=179 status=ok
// SIG undefined FUN_148cfa528(void)

void FUN_148cfa528(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 *puVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 6) {
    FUN_1446efa72(param_2 + 1,0,6,0x10);
    param_2[1].LockCount = 6;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9632c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var1[1].field_0x4 = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
    (**(code **)*puVar3)(puVar3,p_Var1 + 1);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cfa5cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cfa5dc FUN_148cfa5dc body=44 status=ok
// SIG undefined FUN_148cfa5dc(void)

void FUN_148cfa5dc(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x20);
  plVar2 = (longlong *)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_1 + 0x30);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000148cfa605. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}



// FUNCTION 148cfa608 FUN_148cfa608 body=29 status=ok
// SIG undefined FUN_148cfa608(void)

undefined8 FUN_148cfa608(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cfa640 FUN_148cfa640 body=29 status=ok
// SIG undefined FUN_148cfa640(void)

bool FUN_148cfa640(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148cfa65e FUN_148cfa65e body=26 status=ok
// SIG undefined FUN_148cfa65e(void)

bool FUN_148cfa65e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148cfa678 FUN_148cfa678 body=24 status=ok
// SIG undefined FUN_148cfa678(void)

bool FUN_148cfa678(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148cfa690 FUN_148cfa690 body=101 status=ok
// SIG undefined FUN_148cfa690(void)

void FUN_148cfa690(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9633a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cfa6f6 FUN_148cfa6f6 body=101 status=ok
// SIG undefined FUN_148cfa6f6(void)

void FUN_148cfa6f6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9633a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cfa75c FUN_148cfa75c body=134 status=ok
// SIG undefined FUN_148cfa75c(void)

void FUN_148cfa75c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a3a3510;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9633a0;
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
                    /* WARNING: Could not recover jumptable at 0x000148cfa7d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cfa7e2 FUN_148cfa7e2 body=44 status=ok
// SIG undefined FUN_148cfa7e2(void)

void FUN_148cfa7e2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148cfa80b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148cfa80e FUN_148cfa80e body=156 status=ok
// SIG undefined FUN_148cfa80e(void)

bool FUN_148cfa80e(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cfa8ac FUN_148cfa8ac body=31 status=ok
// SIG undefined FUN_148cfa8ac(void)

undefined8 FUN_148cfa8ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cfa8e0 FUN_148cfa8e0 body=85 status=ok
// SIG undefined FUN_148cfa8e0(void)

void FUN_148cfa8e0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b963490;
  return;
}



// FUNCTION 148cfa936 FUN_148cfa936 body=118 status=ok
// SIG undefined FUN_148cfa936(void)

void FUN_148cfa936(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c87c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b963490;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cfa99d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cfa9ac FUN_148cfa9ac body=101 status=ok
// SIG undefined FUN_148cfa9ac(void)

undefined8 FUN_148cfa9ac(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1461ab69c(local_20);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cfaa12 FUN_148cfaa12 body=164 status=ok
// SIG undefined FUN_148cfaa12(void)

void FUN_148cfaa12(longlong *param_1,undefined8 param_2)

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
        goto LAB_148cfaa92;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148cfaa92:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148cfaab6 FUN_148cfaab6 body=88 status=ok
// SIG undefined FUN_148cfaab6(void)

void FUN_148cfaab6(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 8 + (ulonglong)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (ulonglong)param_2 * 0x20);
    memmove(_Dst,(void *)((longlong)_Dst + 0x20),(longlong)(int)(~param_2 + iVar2) << 5);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 148cfab0e FUN_148cfab0e body=62 status=ok
// SIG undefined FUN_148cfab0e(void)

void FUN_148cfab0e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148cfab4c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 148cfab4c FUN_148cfab4c body=93 status=ok
// SIG undefined FUN_148cfab4c(void)

ulonglong FUN_148cfab4c(uint param_1,uint param_2)

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



// FUNCTION 148cfabc4 FUN_148cfabc4 body=101 status=ok
// SIG undefined FUN_148cfabc4(void)

void FUN_148cfabc4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b963600;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cfac2a FUN_148cfac2a body=101 status=ok
// SIG undefined FUN_148cfac2a(void)

void FUN_148cfac2a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b963600;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cfac90 FUN_148cfac90 body=134 status=ok
// SIG undefined FUN_148cfac90(void)

void FUN_148cfac90(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a3a3510;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b963600;
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
                    /* WARNING: Could not recover jumptable at 0x000148cfad07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cfad16 FUN_148cfad16 body=44 status=ok
// SIG undefined FUN_148cfad16(void)

void FUN_148cfad16(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148cfad3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148cfad42 FUN_148cfad42 body=31 status=ok
// SIG undefined FUN_148cfad42(void)

undefined8 FUN_148cfad42(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cfad7c FUN_148cfad7c body=101 status=ok
// SIG undefined FUN_148cfad7c(void)

void FUN_148cfad7c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9636e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b963670;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cfade2 FUN_148cfade2 body=101 status=ok
// SIG undefined FUN_148cfade2(void)

void FUN_148cfade2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9636e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b963670;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cfae48 FUN_148cfae48 body=134 status=ok
// SIG undefined FUN_148cfae48(void)

void FUN_148cfae48(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9636e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b963670;
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
                    /* WARNING: Could not recover jumptable at 0x000148cfaebf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cfaece FUN_148cfaece body=44 status=ok
// SIG undefined FUN_148cfaece(void)

void FUN_148cfaece(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148cfaef7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148cfaefa FUN_148cfaefa body=156 status=ok
// SIG undefined FUN_148cfaefa(void)

bool FUN_148cfaefa(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cfaf9a FUN_148cfaf9a body=31 status=ok
// SIG undefined FUN_148cfaf9a(void)

undefined8 FUN_148cfaf9a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cfafc0 FUN_148cfafc0 body=29 status=ok
// SIG undefined FUN_148cfafc0(void)

bool FUN_148cfafc0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148cfafde FUN_148cfafde body=26 status=ok
// SIG undefined FUN_148cfafde(void)

bool FUN_148cfafde(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148cfaff8 FUN_148cfaff8 body=101 status=ok
// SIG undefined FUN_148cfaff8(void)

void FUN_148cfaff8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b963750;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cfb05e FUN_148cfb05e body=134 status=ok
// SIG undefined FUN_148cfb05e(void)

void FUN_148cfb05e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b963750;
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
                    /* WARNING: Could not recover jumptable at 0x000148cfb0d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cfb0e4 FUN_148cfb0e4 body=146 status=ok
// SIG undefined FUN_148cfb0e4(void)

bool FUN_148cfb0e4(longlong param_1)

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



// FUNCTION 148cfb178 FUN_148cfb178 body=143 status=ok
// SIG undefined FUN_148cfb178(void)

void FUN_148cfb178(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148cfb208 FUN_148cfb208 body=62 status=ok
// SIG undefined FUN_148cfb208(void)

void FUN_148cfb208(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148cfb246(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x38,8);
  }
  return;
}



// FUNCTION 148cfb246 FUN_148cfb246 body=104 status=ok
// SIG undefined FUN_148cfb246(void)

ulonglong FUN_148cfb246(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x38) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148cfb27c;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x38,8);
      param_2 = param_2 / 0x38;
    }
  }
LAB_148cfb27c:
  return param_2 & 0xffffffff;
}



// FUNCTION 148cfb2ae FUN_148cfb2ae body=48 status=ok
// SIG undefined FUN_148cfb2ae(void)

void FUN_148cfb2ae(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x38,8);
  }
  return;
}



// FUNCTION 148cfb2de FUN_148cfb2de body=68 status=ok
// SIG undefined FUN_148cfb2de(void)

undefined8 * FUN_148cfb2de(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9637c0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cfb326 FUN_148cfb326 body=81 status=ok
// SIG undefined FUN_148cfb326(void)

undefined8 FUN_148cfb326(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148cfb37e FUN_148cfb37e body=91 status=ok
// SIG undefined FUN_148cfb37e(void)

bool FUN_148cfb37e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148cfb39a;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148cfb39a:
  return lVar6 == param_2;
}



// FUNCTION 148cfb3f6 FUN_148cfb3f6 body=118 status=ok
// SIG undefined FUN_148cfb3f6(void)

void FUN_148cfb3f6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ecd00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9637c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 148cfb46c FUN_148cfb46c body=118 status=ok
// SIG undefined FUN_148cfb46c(void)

void FUN_148cfb46c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ecd00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9637c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 148cfb4e2 FUN_148cfb4e2 body=156 status=ok
// SIG undefined FUN_148cfb4e2(void)

void FUN_148cfb4e2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3ecd00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9637c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cfb56e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}


