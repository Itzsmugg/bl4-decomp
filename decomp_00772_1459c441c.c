// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1459c441c FUN_1459c441c body=55 status=ok
// SIG undefined FUN_1459c441c(void)

void FUN_1459c441c(longlong *param_1)

{
  FUN_14142e0d8(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459c4454 FUN_1459c4454 body=65 status=ok
// SIG undefined FUN_1459c4454(void)

undefined8 FUN_1459c4454(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_1413a51d4();
  if (*(longlong *)(param_1 + 8) == 0) {
    FUN_145715fae(param_2,param_1);
  }
  else {
    FUN_1459c4496(*(longlong *)(param_1 + 8),param_2,param_3);
  }
  return param_2;
}



// FUNCTION 1459c4496 FUN_1459c4496 body=81 status=ok
// SIG undefined FUN_1459c4496(void)

longlong * FUN_1459c4496(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = 0x48;
  if ((param_3 == '\0') && (*(char *)(param_1 + 0x80) != '\0')) {
    lVar2 = 0x70;
  }
  plVar3 = (longlong *)FUN_14142e2d2(param_1 + lVar2);
  plVar1 = (longlong *)*plVar3;
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_2 + 1) = (int)plVar3[1];
  return param_2;
}



// FUNCTION 1459c44e7 FUN_1459c44e7 body=303 status=ok
// SIG undefined FUN_1459c44e7(void)

ulonglong FUN_1459c44e7(longlong param_1,void *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  memcpy(param_3,param_2,200);
  if (param_1 != 0) {
    *param_3 = *(undefined8 *)(param_1 + 0x18);
    lVar4 = FUN_14142e422(param_1);
    if (lVar4 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x28);
      uVar5 = 0;
      if (lVar4 != 0) {
        uVar3 = *(uint *)(lVar4 + 0x18);
        uVar9 = (*(int *)(lVar4 + 8) + (uVar3 - 1)) / uVar3;
        uVar3 = ((uVar3 - 1) + *(int *)(lVar4 + 0xc)) / uVar3;
        uVar7 = uVar9;
        if (uVar9 < uVar3) {
          uVar7 = uVar3;
        }
        uVar8 = (ulonglong)((uVar7 - 1) + (uint)(uVar7 == 0)) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        uVar7 = *(uint *)((longlong)param_2 + 0x18);
        if (*(uint *)((longlong)param_2 + 0x18) < *(uint *)((longlong)param_2 + 0x1c)) {
          uVar7 = *(uint *)((longlong)param_2 + 0x1c);
        }
        uVar8 = (ulonglong)((uVar7 - 1) + (uint)(uVar7 == 0)) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        uVar8 = (ulonglong)((uint)lVar1 - (uint)lVar2);
        if ((uint)lVar1 < (uint)lVar2) {
          uVar8 = uVar5;
        }
        bVar6 = (byte)uVar8;
        *(uint *)(param_3 + 3) = uVar9 >> (bVar6 & 0x1f);
        *(uint *)((longlong)param_3 + 0x1c) = uVar3 >> (bVar6 & 0x1f);
        *(byte *)((longlong)param_3 + 0x29) = (char)lVar1 - bVar6;
        uVar5 = FUN_14001cc68(0x68,0x10);
        local_40 = *(undefined8 *)(param_1 + 0x18);
        FUN_14142e42a(uVar5,&local_40,lVar4,uVar8);
      }
      goto LAB_1459c45ec;
    }
  }
  uVar5 = 0;
LAB_1459c45ec:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459c4618 FUN_1459c4618 body=275 status=ok
// SIG undefined FUN_1459c4618(void)

int * FUN_1459c4618(int *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined1 auStack_78 [40];
  int *local_50;
  int *local_48;
  int **local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = -1;
  FUN_1446ddc76(param_1 + 1,param_2,1);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)(param_1 + 0xe) = param_3;
  *(longlong *)(param_1 + 0x10) = *param_4;
  *(longlong *)(param_1 + 0x14) = param_4[2];
  param_4[2] = 0;
  lVar5 = param_4[4];
  iVar1 = *(int *)((longlong)param_4 + 0x24);
  lVar6 = param_4[5];
  iVar2 = *(int *)((longlong)param_4 + 0x2c);
  iVar3 = *(int *)((longlong)param_4 + 0x34);
  lVar7 = param_4[7];
  iVar4 = *(int *)((longlong)param_4 + 0x3c);
  param_1[0x1c] = (int)param_4[6];
  param_1[0x1d] = iVar3;
  param_1[0x1e] = (int)lVar7;
  param_1[0x1f] = iVar4;
  param_1[0x18] = (int)lVar5;
  param_1[0x19] = iVar1;
  param_1[0x1a] = (int)lVar6;
  param_1[0x1b] = iVar2;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    *param_4 = 0;
  }
  if (-1 < *param_1) {
    plVar9 = (longlong *)FUN_14586b2b6();
    if (*plVar9 != 0) {
      iVar1 = *param_1;
      puVar10 = (undefined8 *)FUN_14586b2b6();
      if (iVar1 <= *(int *)*puVar10) goto LAB_1459c4695;
    }
    puVar10 = (undefined8 *)FUN_14586b2b6();
    *puVar10 = param_1;
  }
LAB_1459c4695:
  uVar8 = FUN_1459c472c();
  local_40 = &local_50;
  local_50 = param_1;
  local_48 = param_1 + 1;
  FUN_1459c47ca(uVar8,local_34);
  if (*param_4 != 0) {
    plVar9 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar9 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459c472c FUN_1459c472c body=157 status=ok
// SIG undefined FUN_1459c472c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1459c472c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb755f8) {
    FUN_144b3d300(&DAT_14cb755f8);
    if (DAT_14cb755f8 == -1) {
      DAT_14cb755c8 = 0;
      _DAT_14cb755d0 = 0;
      DAT_14cb755a8 = 0;
      _DAT_14cb755b0 = 0;
      _DAT_14cb755d4 = 0xffffffff00000080;
      DAT_14cb755dc = 0;
      DAT_14cb755e8 = 0;
      DAT_14cb755f0 = 0;
      atexit(FUN_143cd77b0);
      _Init_thread_footer(&DAT_14cb755f8);
    }
  }
  return &DAT_14cb755a8;
}



// FUNCTION 1459c47ca FUN_1459c47ca body=323 status=ok
// SIG undefined FUN_1459c47ca(void)

undefined4 * FUN_1459c47ca(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_1459c4990(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_1459c490e(param_1,uVar9,local_40,&local_4c);
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
      FUN_14142e5d8(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459c490e FUN_1459c490e body=130 status=ok
// SIG undefined FUN_1459c490e(void)

undefined8 FUN_1459c490e(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_14586b398((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1459c4990 FUN_1459c4990 body=243 status=ok
// SIG undefined FUN_1459c4990(void)

int * FUN_1459c4990(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1459c4a84 FUN_1459c4a84 body=216 status=ok
// SIG undefined FUN_1459c4a84(void)

void FUN_1459c4a84(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_1446ebfd4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    lVar4 = *(longlong *)(lVar1 + 8);
    lVar3 = FUN_1446ebfd4();
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar5 = lVar4 != 0;
      if (lVar4 != lVar3 && bVar5) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar5 = lVar4 != 0;
          if (lVar4 == lVar3) break;
        } while (lVar4 != 0);
      }
      if (!bVar5) goto LAB_1459c4b4b;
    }
    else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) goto LAB_1459c4b4b;
    *(ulonglong *)(param_2 + 0x20) =
         (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
    FUN_1459c4b5c(uVar2,lVar1);
    return;
  }
LAB_1459c4b4b:
  *(undefined1 *)(param_2 + 0xa0) = 1;
  return;
}



// FUNCTION 1459c4b5c FUN_1459c4b5c body=110 status=ok
// SIG undefined FUN_1459c4b5c(void)

void FUN_1459c4b5c(longlong param_1,longlong param_2)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 uStack_38;
  longlong local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined1 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 != 0) {
    local_10 = *(undefined1 *)(param_2 + 0x98);
    local_40 = *(undefined8 *)(param_2 + 0x70);
    uStack_38 = *(undefined8 *)(param_2 + 0x78);
    local_28 = *(undefined4 *)(param_2 + 0x80);
    uStack_24 = *(undefined4 *)(param_2 + 0x84);
    uStack_20 = *(undefined4 *)(param_2 + 0x88);
    uStack_1c = *(undefined4 *)(param_2 + 0x8c);
    local_18 = *(undefined8 *)(param_2 + 0x90);
    local_30 = param_1;
    FUN_140458a4e(&local_40,0);
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459c4bcc FUN_1459c4bcc body=121 status=ok
// SIG undefined FUN_1459c4bcc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1459c4bcc(void)

{
  FUN_1459c4c46();
  _DAT_14c9ea500 = L"ScreenToShadowMatrix";
  DAT_14c9ea52a = FUN_140850cc5();
  _DAT_14c9ea508 = FUN_140ec6960();
  _DAT_14c9ea518 = &LAB_14682652b;
  _DAT_14c9ea520 = 0x100000000;
  _DAT_14c9ea528 = 0;
  _DAT_14c9ea510 = DAT_14c9e92a0;
  DAT_14c9e92a0 = &DAT_14c9ea500;
  return;
}



// FUNCTION 1459c4c46 FUN_1459c4c46 body=121 status=ok
// SIG undefined FUN_1459c4c46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1459c4c46(void)

{
  FUN_1459c4cc0();
  _DAT_14c9ea530 = L"SoftTransitionScale";
  DAT_14c9ea55a = FUN_140850cc5();
  _DAT_14c9ea538 = FUN_140ec6960();
  _DAT_14c9ea548 = &LAB_14682652b;
  _DAT_14c9ea550 = 0x100000006;
  _DAT_14c9ea558 = 0;
  _DAT_14c9ea540 = DAT_14c9e92a0;
  DAT_14c9e92a0 = &DAT_14c9ea530;
  return;
}



// FUNCTION 1459c4cc0 FUN_1459c4cc0 body=121 status=ok
// SIG undefined FUN_1459c4cc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1459c4cc0(void)

{
  FUN_1459c4d3a();
  _DAT_14c9ea560 = L"ShadowBufferSize";
  DAT_14c9ea58a = FUN_140850cc5();
  _DAT_14c9ea568 = FUN_140ec6960();
  _DAT_14c9ea578 = &LAB_14682652b;
  _DAT_14c9ea580 = &DAT_10000000c;
  _DAT_14c9ea588 = 0;
  _DAT_14c9ea570 = DAT_14c9e92a0;
  DAT_14c9e92a0 = &DAT_14c9ea560;
  return;
}



// FUNCTION 1459c4d3a FUN_1459c4d3a body=121 status=ok
// SIG undefined FUN_1459c4d3a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1459c4d3a(void)

{
  FUN_1459c4db4();
  _DAT_14c9ea590 = L"ShadowDepthTexture";
  DAT_14c9ea5ba = FUN_140850cc5();
  _DAT_14c9ea598 = FUN_140fb78d0();
  _DAT_14c9ea5a8 = &LAB_14682652b;
  _DAT_14c9ea5b0 = 0x100000012;
  _DAT_14c9ea5b8 = 0;
  _DAT_14c9ea5a0 = DAT_14c9e92a0;
  DAT_14c9e92a0 = &DAT_14c9ea590;
  return;
}



// FUNCTION 1459c4db4 FUN_1459c4db4 body=121 status=ok
// SIG undefined FUN_1459c4db4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1459c4db4(void)

{
  FUN_1459c4e2e();
  _DAT_14c9ea5c0 = L"ShadowDepthTextureSampler";
  DAT_14c9ea5ea = FUN_140850cc5();
  _DAT_14c9ea5c8 = FUN_140fb78d0();
  _DAT_14c9ea5d8 = &LAB_14682652b;
  _DAT_14c9ea5e0 = 0x100000016;
  _DAT_14c9ea5e8 = 0;
  _DAT_14c9ea5d0 = DAT_14c9e92a0;
  DAT_14c9e92a0 = &DAT_14c9ea5c0;
  return;
}



// FUNCTION 1459c4e2e FUN_1459c4e2e body=121 status=ok
// SIG undefined FUN_1459c4e2e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1459c4e2e(void)

{
  FUN_1459c4ea8();
  _DAT_14c9ea5f0 = L"ProjectionDepthBias";
  DAT_14c9ea61a = FUN_140850cc5();
  _DAT_14c9ea5f8 = FUN_140ec6960();
  _DAT_14c9ea608 = &LAB_14682652b;
  _DAT_14c9ea610 = 0x10000001a;
  _DAT_14c9ea618 = 0;
  _DAT_14c9ea600 = DAT_14c9e92a0;
  DAT_14c9e92a0 = &DAT_14c9ea5f0;
  return;
}



// FUNCTION 1459c4ea8 FUN_1459c4ea8 body=121 status=ok
// SIG undefined FUN_1459c4ea8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1459c4ea8(void)

{
  FUN_1459c4f22();
  _DAT_14c9ea620 = L"FadePlaneOffset";
  DAT_14c9ea64a = FUN_140850cc5();
  _DAT_14c9ea628 = FUN_140ec6960();
  _DAT_14c9ea638 = &LAB_14682652b;
  _DAT_14c9ea640 = &DAT_100000020;
  _DAT_14c9ea648 = 0;
  _DAT_14c9ea630 = DAT_14c9e92a0;
  DAT_14c9e92a0 = &DAT_14c9ea620;
  return;
}



// FUNCTION 1459c4f22 FUN_1459c4f22 body=121 status=ok
// SIG undefined FUN_1459c4f22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1459c4f22(void)

{
  FUN_1459c4f9c();
  _DAT_14c9ea650 = L"InvFadePlaneLength";
  DAT_14c9ea67a = FUN_140850cc5();
  _DAT_14c9ea658 = FUN_140ec6960();
  _DAT_14c9ea668 = &LAB_14682652b;
  _DAT_14c9ea670 = 0x100000026;
  _DAT_14c9ea678 = 0;
  _DAT_14c9ea660 = DAT_14c9e92a0;
  DAT_14c9e92a0 = &DAT_14c9ea650;
  return;
}



// FUNCTION 1459c4f9c FUN_1459c4f9c body=121 status=ok
// SIG undefined FUN_1459c4f9c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1459c4f9c(void)

{
  FUN_1459c5016();
  _DAT_14c9ea680 = L"ShadowTileOffsetAndSizeParam";
  DAT_14c9ea6aa = FUN_140850cc5();
  _DAT_14c9ea688 = FUN_140ec6960();
  _DAT_14c9ea698 = &LAB_14682652b;
  _DAT_14c9ea6a0 = &DAT_10000002c;
  _DAT_14c9ea6a8 = 0;
  _DAT_14c9ea690 = DAT_14c9e92a0;
  DAT_14c9e92a0 = &DAT_14c9ea680;
  return;
}



// FUNCTION 1459c5016 FUN_1459c5016 body=121 status=ok
// SIG undefined FUN_1459c5016(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1459c5016(void)

{
  FUN_1459c5090();
  _DAT_14c9ea6b0 = L"LightPositionOrDirection";
  DAT_14c9ea6da = FUN_140850cc5();
  _DAT_14c9ea6b8 = FUN_140ec6960();
  _DAT_14c9ea6c8 = &LAB_14682652b;
  _DAT_14c9ea6d0 = 0x100000032;
  _DAT_14c9ea6d8 = 0;
  _DAT_14c9ea6c0 = DAT_14c9e92a0;
  DAT_14c9e92a0 = &DAT_14c9ea6b0;
  return;
}



// FUNCTION 1459c5090 FUN_1459c5090 body=121 status=ok
// SIG undefined FUN_1459c5090(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1459c5090(void)

{
  FUN_1459c510a();
  _DAT_14c9ea6e0 = L"PerObjectShadowFadeStart";
  DAT_14c9ea70a = FUN_140850cc5();
  _DAT_14c9ea6e8 = FUN_140ec6960();
  _DAT_14c9ea6f8 = &LAB_14682652b;
  _DAT_14c9ea700 = &DAT_100000038;
  _DAT_14c9ea708 = 0;
  _DAT_14c9ea6f0 = DAT_14c9e92a0;
  DAT_14c9e92a0 = &DAT_14c9ea6e0;
  return;
}



// FUNCTION 1459c510a FUN_1459c510a body=121 status=ok
// SIG undefined FUN_1459c510a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1459c510a(void)

{
  FUN_1459c5184();
  _DAT_14c9ea710 = L"InvPerObjectShadowFadeLength";
  DAT_14c9ea73a = FUN_140850cc5();
  _DAT_14c9ea718 = FUN_140ec6960();
  _DAT_14c9ea728 = &LAB_14682652b;
  _DAT_14c9ea730 = 0x10000003e;
  _DAT_14c9ea738 = 0;
  _DAT_14c9ea720 = DAT_14c9e92a0;
  DAT_14c9e92a0 = &DAT_14c9ea710;
  return;
}



// FUNCTION 1459c5184 FUN_1459c5184 body=216 status=ok
// SIG undefined FUN_1459c5184(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1459c5184(void)

{
  _DAT_14c9ea770 = L"bCascadeUseFadePlane";
  DAT_14c9ea79a = FUN_140850cc5();
  _DAT_14c9ea778 = FUN_140ec6960();
  _DAT_14c9ea788 = &LAB_14682652b;
  _DAT_14c9ea790 = 0x10000004a;
  _DAT_14c9ea798 = 0;
  _DAT_14c9ea780 = DAT_14c9e92a0;
  DAT_14c9e92a0 = &DAT_14c9ea770;
  _DAT_14c9ea740 = L"ShadowNearAndFarDepth";
  DAT_14c9ea76a = FUN_140850cc5();
  _DAT_14c9ea748 = FUN_140ec6960();
  _DAT_14c9ea758 = &LAB_14682652b;
  _DAT_14c9ea760 = 0x100000044;
  _DAT_14c9ea768 = 0;
  _DAT_14c9ea750 = DAT_14c9e92a0;
  DAT_14c9e92a0 = &DAT_14c9ea740;
  return;
}



// FUNCTION 1459c52a0 FUN_1459c52a0 body=116 status=ok
// SIG undefined FUN_1459c52a0(void)

double * FUN_1459c52a0(double *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1459c5316(param_2,&local_28);
  *param_1 = (double)local_28;
  param_1[1] = (double)local_24;
  param_1[2] = (double)local_20;
  param_1[3] = (double)local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459c5316 FUN_1459c5316 body=91 status=ok
// SIG undefined FUN_1459c5316(void)

void FUN_1459c5316(longlong param_1,undefined4 *param_2)

{
  *param_2 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x2d2)];
  param_2[1] = (&DAT_14c758c60)[*(byte *)(param_1 + 0x2d1)];
  param_2[2] = (&DAT_14c758c60)[*(byte *)(param_1 + 0x2d0)];
  param_2[3] = (float)*(byte *)(param_1 + 0x2d3) * 0.003921569;
  return;
}



// FUNCTION 1459c5372 FUN_1459c5372 body=45 status=ok
// SIG undefined FUN_1459c5372(void)

undefined1 FUN_1459c5372(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_1459c53a0();
  if (cVar1 == '\0') {
    uVar2 = FUN_1459c53c2(param_1 + 0x180);
    return uVar2;
  }
  return 1;
}



// FUNCTION 1459c53a0 FUN_1459c53a0 body=33 status=ok
// SIG undefined FUN_1459c53a0(void)

undefined8 FUN_1459c53a0(longlong param_1)

{
  char cVar1;
  
  if ((*(longlong *)(param_1 + 0x50) != 0) && (cVar1 = FUN_1459c53fc(), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 1459c53c2 FUN_1459c53c2 body=57 status=ok
// SIG undefined FUN_1459c53c2(void)

undefined8 FUN_1459c53c2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + lVar2);
      if ((*(longlong *)(lVar1 + 0x30) != 0) && (*(char *)(lVar1 + 0x52) != '\x01')) {
        return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
      }
      lVar2 = lVar2 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x10) * 0x10 != lVar2);
  }
  return 0;
}



// FUNCTION 1459c53fc FUN_1459c53fc body=355 status=ok
// SIG undefined FUN_1459c53fc(void)

undefined8 FUN_1459c53fc(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  ushort uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(longlong *)(param_1 + 0x60) != 0) && (*(int *)(*(longlong *)(param_1 + 0x60) + 0x58) == 1)
      ) && ((longlong)*(int *)(param_1 + 0x78) != 0)) {
    plVar9 = *(longlong **)(param_1 + 0x70);
    plVar5 = plVar9 + (longlong)*(int *)(param_1 + 0x78) * 2;
    do {
      if (*(int *)(*plVar9 + 0x14) == 1) {
        local_58 = 0;
        uStack_50 = 0;
        cVar1 = FUN_14101cdd4(*plVar9 + 0x20,&DAT_14cb977e0);
        if (cVar1 != '\0') {
          FUN_14101d2ea();
          if ((int)uStack_50 == DAT_14cb97778) {
            if (1 < (int)uStack_50) {
              lVar6 = 0;
              while( true ) {
                uVar3 = *(ushort *)(local_58 + lVar6);
                uVar4 = (ulonglong)uVar3;
                uVar7 = *(ushort *)(DAT_14cb97770 + lVar6);
                if (uVar3 != uVar7) break;
                if (uVar3 == 0) goto LAB_1459c54f9;
LAB_1459c54d3:
                lVar6 = lVar6 + 2;
              }
              if ((uVar7 | uVar3) < 0x80) {
                uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
                uVar8 = (ulonglong)uVar7;
                uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
                if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar8]) goto LAB_1459c54d3;
              }
              if (uVar3 != uVar7) goto LAB_1459c5552;
            }
          }
          else if (DAT_14cb97778 + (int)uStack_50 != 1) {
LAB_1459c5552:
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            uVar2 = 1;
            goto LAB_1459c550e;
          }
        }
LAB_1459c54f9:
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
      plVar9 = plVar9 + 2;
    } while (plVar9 != plVar5);
  }
  uVar2 = 0;
LAB_1459c550e:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1459c5560 FUN_1459c5560 body=40 status=ok
// SIG undefined FUN_1459c5560(void)

undefined8 FUN_1459c5560(undefined8 param_1,int param_2)

{
  FUN_1459c5588();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459c5588 FUN_1459c5588 body=454 status=ok
// SIG undefined FUN_1459c5588(void)

void FUN_1459c5588(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aacc420;
  FUN_1459c580d(param_1[0x66],*(undefined4 *)(param_1 + 0x67));
  if (param_1[0x66] != 0) {
    FUN_1400020a8();
  }
  FUN_1459c574e(param_1[100],*(undefined4 *)(param_1 + 0x65));
  if (param_1[100] != 0) {
    FUN_1400020a8();
  }
  FUN_1459c5776(param_1[0x62],*(undefined4 *)(param_1 + 99));
  if (param_1[0x62] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x60],*(undefined4 *)(param_1 + 0x61));
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  FUN_1459c584c(param_1 + 0x5a);
  if (param_1[0x58] != 0) {
    FUN_1400020a8();
  }
  FUN_1459c57d0(param_1 + 0x52);
  FUN_1459c588c(param_1 + 0x14);
  FUN_1447a1747(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_1459c579e(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1459c574e FUN_1459c574e body=40 status=ok
// SIG undefined FUN_1459c574e(void)

void FUN_1459c574e(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147d69b52(param_1);
    param_1 = param_1 + 0x38;
  }
  return;
}



// FUNCTION 1459c5776 FUN_1459c5776 body=40 status=ok
// SIG undefined FUN_1459c5776(void)

void FUN_1459c5776(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147d69770(param_1);
    param_1 = param_1 + 0x60;
  }
  return;
}



// FUNCTION 1459c579e FUN_1459c579e body=49 status=ok
// SIG undefined FUN_1459c579e(void)

void FUN_1459c579e(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
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



// FUNCTION 1459c57d0 FUN_1459c57d0 body=61 status=ok
// SIG undefined FUN_1459c57d0(void)

void FUN_1459c57d0(longlong *param_1)

{
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1459c580d FUN_1459c580d body=63 status=ok
// SIG undefined FUN_1459c580d(void)

void FUN_1459c580d(longlong param_1,int param_2)

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



// FUNCTION 1459c584c FUN_1459c584c body=64 status=ok
// SIG undefined FUN_1459c584c(void)

void FUN_1459c584c(longlong *param_1)

{
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459c588c FUN_1459c588c body=110 status=ok
// SIG undefined FUN_1459c588c(void)

void FUN_1459c588c(longlong *param_1)

{
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  FUN_1459c58fa(param_1 + 0x2c);
  FUN_1459c596a(param_1 + 2);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459c58fa FUN_1459c58fa body=112 status=ok
// SIG undefined FUN_1459c58fa(void)

void FUN_1459c58fa(longlong *param_1)

{
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459c596a FUN_1459c596a body=157 status=ok
// SIG undefined FUN_1459c596a(void)

void FUN_1459c596a(longlong param_1)

{
  FUN_1459c5a83(*(undefined8 *)(param_1 + 0x140),*(undefined4 *)(param_1 + 0x148));
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_1400020a8();
  }
  FUN_1459c5a08(param_1 + 0x120);
  FUN_1459c5a08(param_1 + 0x100);
  FUN_1459c5a08(param_1 + 0xe0);
  FUN_1459c5a08(param_1 + 0xc0);
  FUN_1459c5a08(param_1 + 0xa0);
  FUN_1459c5a08(param_1 + 0x80);
  FUN_1459c5a08(param_1 + 0x60);
  FUN_1459c5a08(param_1 + 0x40);
  FUN_1459c5a08(param_1 + 0x20);
  FUN_1459c5a08(param_1);
  return;
}



// FUNCTION 1459c5a08 FUN_1459c5a08 body=60 status=ok
// SIG undefined FUN_1459c5a08(void)

void FUN_1459c5a08(longlong *param_1)

{
  FUN_1459c5a44(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459c5a44 FUN_1459c5a44 body=63 status=ok
// SIG undefined FUN_1459c5a44(void)

void FUN_1459c5a44(longlong param_1,int param_2)

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



// FUNCTION 1459c5a83 FUN_1459c5a83 body=40 status=ok
// SIG undefined FUN_1459c5a83(void)

void FUN_1459c5a83(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1459c5a08(param_1);
    param_1 = param_1 + 0x20;
  }
  return;
}



// FUNCTION 1459c5aac FUN_1459c5aac body=230 status=ok
// SIG undefined FUN_1459c5aac(void)

void FUN_1459c5aac(undefined8 param_1,longlong param_2)

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
  FUN_1459c5b94(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459c5b94 FUN_1459c5b94 body=139 status=ok
// SIG undefined FUN_1459c5b94(void)

void FUN_1459c5b94(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_1401b0f18();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_1401b0f18();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
        lVar4 = (**(code **)(*plVar3 + 0x28))(plVar3);
        FUN_140608954(lVar4 + 0x78,&local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459c5c20 FUN_1459c5c20 body=66 status=ok
// SIG undefined FUN_1459c5c20(void)

void FUN_1459c5c20(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_1;
  plVar2 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,1);
  }
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001459c5c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x28))(plVar2,1);
    return;
  }
  return;
}



// FUNCTION 1459c5c62 FUN_1459c5c62 body=38 status=ok
// SIG undefined FUN_1459c5c62(void)

undefined8 FUN_1459c5c62(undefined8 param_1,int param_2)

{
  FUN_1459c5c88();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459c5c88 FUN_1459c5c88 body=143 status=ok
// SIG undefined FUN_1459c5c88(void)

void FUN_1459c5c88(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = TAsyncRunnable<void>::vftable;
  plVar3 = (longlong *)param_1[0xe];
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
  plVar3 = (longlong *)param_1[0xb];
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
  if (param_1[2] != 0) {
    plVar3 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[4];
    }
                    /* WARNING: Could not recover jumptable at 0x0001459c5cf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))(plVar3);
    return;
  }
  return;
}



// FUNCTION 1459c5d18 FUN_1459c5d18 body=15 status=ok
// SIG undefined FUN_1459c5d18(void)

void FUN_1459c5d18(longlong param_1)

{
  FUN_140788a7e(param_1 + 0x10);
  return;
}



// FUNCTION 1459c5d28 FUN_1459c5d28 body=40 status=ok
// SIG undefined FUN_1459c5d28(void)

undefined8 FUN_1459c5d28(undefined8 param_1,int param_2)

{
  FUN_1459c5d50();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459c5d50 FUN_1459c5d50 body=91 status=ok
// SIG undefined FUN_1459c5d50(void)

void FUN_1459c5d50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14abf2b70;
  param_1[5] = &PTR_FUN_14abf2e90;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14abe9730;
  param_1[5] = &PTR_LAB_14abe9a20;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1459c5dba FUN_1459c5dba body=40 status=ok
// SIG undefined FUN_1459c5dba(void)

undefined8 FUN_1459c5dba(undefined8 param_1,int param_2)

{
  FUN_1459c5de2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459c5de2 FUN_1459c5de2 body=77 status=ok
// SIG undefined FUN_1459c5de2(void)

void FUN_1459c5de2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b775140;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1459c5e30 FUN_1459c5e30 body=66 status=ok
// SIG undefined FUN_1459c5e30(void)

undefined8 * FUN_1459c5e30(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 *puVar2;
  
  cVar1 = FUN_1459c5e72(*(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_2 + 8) * 2));
  if (cVar1 == '\0') {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)FUN_14001cc68(8,0x10);
    *puVar2 = &PTR_FUN_14a3371d0;
  }
  return puVar2;
}



// FUNCTION 1459c5e72 FUN_1459c5e72 body=151 status=ok
// SIG undefined FUN_1459c5e72(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1459c5e72(undefined4 param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0f7f0) {
    FUN_144b3d300(&DAT_14cb0f7f0);
    if (DAT_14cb0f7f0 == -1) {
      DAT_14cb0f7d8 = 0;
      uRam000000014cb0f7e0 = 0;
      _DAT_14cb0f7e8 = DAT_14cb0f738;
      atexit((_func_5014 *)&LAB_14377facc);
      _Init_thread_footer(&DAT_14cb0f7f0);
    }
  }
  cVar1 = FUN_144a847a6(&DAT_14cb0f7d8,param_1);
  if (cVar1 != '\0') {
    uVar2 = FUN_1449d9015(param_1,0);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1459c5f0a FUN_1459c5f0a body=24 status=ok
// SIG undefined FUN_1459c5f0a(void)

void FUN_1459c5f0a(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001459c5f1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1459c5f22 FUN_1459c5f22 body=38 status=ok
// SIG undefined FUN_1459c5f22(void)

undefined8 FUN_1459c5f22(undefined8 param_1,int param_2)

{
  FUN_1459c5f48();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459c5f48 FUN_1459c5f48 body=91 status=ok
// SIG undefined FUN_1459c5f48(void)

void FUN_1459c5f48(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b3f4de0;
  param_1[4] = &PTR_FUN_14b3f4e00;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_140af926c(param_1 + 4);
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001459c5f9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1459c5fac FUN_1459c5fac body=145 status=ok
// SIG undefined FUN_1459c5fac(void)

undefined8 * FUN_1459c5fac(undefined8 *param_1)

{
  FUN_140c8816c();
  *param_1 = &PTR_FUN_14b833fd0;
  param_1[6] = &PTR_FUN_14b834290;
  param_1[7] = &PTR_LAB_14b834320;
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
  FUN_144a7a8f6(param_1 + 0x19);
  param_1[0x1b] = 0;
  return param_1;
}



// FUNCTION 1459c603e FUN_1459c603e body=40 status=ok
// SIG undefined FUN_1459c603e(void)

undefined8 FUN_1459c603e(undefined8 param_1,int param_2)

{
  FUN_1459c6066();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459c6066 FUN_1459c6066 body=113 status=ok
// SIG undefined FUN_1459c6066(void)

void FUN_1459c6066(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b90cc60;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1459c60d8 FUN_1459c60d8 body=105 status=ok
// SIG undefined FUN_1459c60d8(void)

void FUN_1459c60d8(void)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_14588dcbc();
  FUN_14142fe94(uVar1);
  FUN_1459c6142();
  lVar2 = FUN_1459c625a(0);
  if (*(longlong *)(lVar2 + 0x170) != 0) {
    FUN_1459c6362();
    *(undefined8 *)(lVar2 + 0x170) = 0;
  }
  lVar2 = FUN_1459c62de(0);
  if (*(longlong *)(lVar2 + 0x90) != 0) {
    FUN_1459c61d8();
    *(undefined8 *)(lVar2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 1459c6142 FUN_1459c6142 body=43 status=ok
// SIG undefined FUN_1459c6142(void)

void FUN_1459c6142(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140208cc8(0);
  if (*(longlong *)(lVar1 + 0x78) != 0) {
    FUN_1459c616e();
    *(undefined8 *)(lVar1 + 0x78) = 0;
  }
  return;
}



// FUNCTION 1459c616e FUN_1459c616e body=52 status=ok
// SIG undefined FUN_1459c616e(void)

void FUN_1459c616e(longlong param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1459c61a2(param_1);
  return;
}



// FUNCTION 1459c61a2 FUN_1459c61a2 body=53 status=ok
// SIG undefined FUN_1459c61a2(void)

void FUN_1459c61a2(longlong *param_1)

{
  FUN_141430040();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459c61d8 FUN_1459c61d8 body=72 status=ok
// SIG undefined FUN_1459c61d8(void)

void FUN_1459c61d8(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  FUN_140926446(param_1 + 0x40);
  FUN_1459c6220(param_1 + 0x18);
  FUN_14142fe3e(param_1 + 8);
  return;
}



// FUNCTION 1459c6220 FUN_1459c6220 body=57 status=ok
// SIG undefined FUN_1459c6220(void)

void FUN_1459c6220(longlong *param_1)

{
  FUN_1400020a8(param_1[4]);
  param_1[4] = 0;
  FUN_14142fde4(param_1);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459c625a FUN_1459c625a body=131 status=ok
// SIG undefined FUN_1459c625a(void)

undefined * FUN_1459c625a(code *param_1)

{
  undefined *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c845390) {
    FUN_144b3d300(&DAT_14c845390);
    if (DAT_14c845390 == -1) {
      if (param_1 == (code *)0x0) {
        puVar1 = (undefined *)0x0;
      }
      else {
        puVar1 = &DAT_14c845218;
        (*param_1)(&DAT_14c845218);
      }
      DAT_14c845388 = puVar1;
      atexit(FUN_14276a1e7);
      _Init_thread_footer(&DAT_14c845390);
    }
  }
  return &DAT_14c845218;
}



// FUNCTION 1459c62de FUN_1459c62de body=131 status=ok
// SIG undefined FUN_1459c62de(void)

undefined * FUN_1459c62de(code *param_1)

{
  undefined *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c845168) {
    FUN_144b3d300(&DAT_14c845168);
    if (DAT_14c845168 == -1) {
      if (param_1 == (code *)0x0) {
        puVar1 = (undefined *)0x0;
      }
      else {
        puVar1 = &DAT_14c8450d0;
        (*param_1)(&DAT_14c8450d0);
      }
      DAT_14c845160 = puVar1;
      atexit(FUN_142767c9e);
      _Init_thread_footer(&DAT_14c845168);
    }
  }
  return &DAT_14c8450d0;
}



// FUNCTION 1459c6362 FUN_1459c6362 body=320 status=ok
// SIG undefined FUN_1459c6362(void)

void FUN_1459c6362(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 0x168);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar3 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x160);
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
  plVar4 = *(longlong **)(param_1 + 0x150);
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
  FUN_14142fefb(*(undefined8 *)(param_1 + 0x138),*(undefined4 *)(param_1 + 0x140));
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x120),*(undefined4 *)(param_1 + 0x128));
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x110) = 0;
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  FUN_1459c64a2(param_1 + 200);
  FUN_1459c6532(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_1459c64d8(param_1 + 0x10);
  return;
}



// FUNCTION 1459c64a2 FUN_1459c64a2 body=53 status=ok
// SIG undefined FUN_1459c64a2(void)

void FUN_1459c64a2(longlong *param_1)

{
  FUN_145c38166();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459c64d8 FUN_1459c64d8 body=53 status=ok
// SIG undefined FUN_1459c64d8(void)

void FUN_1459c64d8(longlong *param_1)

{
  FUN_1414301fc();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459c650e FUN_1459c650e body=9 status=ok
// SIG undefined FUN_1459c650e(void)

void FUN_1459c650e(longlong param_1)

{
  FUN_1459c6636(param_1 + 0x10);
  return;
}



// FUNCTION 1459c6518 FUN_1459c6518 body=25 status=ok
// SIG undefined FUN_1459c6518(void)

void FUN_1459c6518(longlong param_1)

{
  longlong lVar1;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_149e1c290;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 1459c6532 FUN_1459c6532 body=80 status=ok
// SIG undefined FUN_1459c6532(void)

void FUN_1459c6532(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1459c65a8(param_1 + 2);
  FUN_1459c6582(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1459c6582 FUN_1459c6582 body=38 status=ok
// SIG undefined FUN_1459c6582(void)

void FUN_1459c6582(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14142ff46(param_1);
    param_1 = param_1 + 0x68;
  }
  return;
}



// FUNCTION 1459c65a8 FUN_1459c65a8 body=53 status=ok
// SIG undefined FUN_1459c65a8(void)

void FUN_1459c65a8(longlong *param_1)

{
  FUN_1459c65de();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459c65de FUN_1459c65de body=88 status=ok
// SIG undefined FUN_1459c65de(void)

void FUN_1459c65de(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 1459c6636 FUN_1459c6636 body=114 status=ok
// SIG undefined FUN_1459c6636(void)

void FUN_1459c6636(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149e1c2e0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x15));
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_1459c66a8(param_1 + 0xb);
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1459c66de(param_1 + 1);
  return;
}



// FUNCTION 1459c66a8 FUN_1459c66a8 body=53 status=ok
// SIG undefined FUN_1459c66a8(void)

void FUN_1459c66a8(longlong *param_1)

{
  FUN_1459c6870();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459c66de FUN_1459c66de body=53 status=ok
// SIG undefined FUN_1459c66de(void)

void FUN_1459c66de(longlong *param_1)

{
  FUN_1459c6714();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459c6714 FUN_1459c6714 body=346 status=ok
// SIG undefined FUN_1459c6714(void)

void FUN_1459c6714(longlong *param_1)

{
  longlong *plVar1;
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
      FUN_1467da762(*local_68 + (longlong)iStack_4c * 0xb0 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1467f17ac(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459c6870 FUN_1459c6870 body=347 status=ok
// SIG undefined FUN_1459c6870(void)

void FUN_1459c6870(longlong *param_1)

{
  longlong *plVar1;
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
      FUN_1467da0e0(*local_68 + (longlong)iStack_4c * 0xc0 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1407da7e2(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459c69cc FUN_1459c69cc body=175 status=ok
// SIG undefined FUN_1459c69cc(void)

void FUN_1459c69cc(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xf8);
  *(undefined1 *)(param_2 + 1) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  *param_2 = &PTR_FUN_14b92aa90;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 10;
  param_2[9] = 0;
  param_2[10] = 0;
  *(undefined4 *)(param_2 + 0xb) = 0x3001;
  param_2[0xc] = 0;
  *(undefined1 *)(param_2 + 0xd) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_2 + 0xcc) = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  *(undefined1 *)(param_2 + 0x13) = 0;
  *(undefined1 *)(param_2 + 0x19) = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  return;
}



// FUNCTION 1459c6a8c FUN_1459c6a8c body=44 status=ok
// SIG undefined FUN_1459c6a8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1459c6a8c(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cbc6374 = _DAT_14cbc6374 + -1;
  *param_1 = DAT_14cbc6368;
  DAT_14cbc6368 = param_1;
  return;
}



// FUNCTION 1459c6ab8 FUN_1459c6ab8 body=40 status=ok
// SIG undefined FUN_1459c6ab8(void)

undefined8 FUN_1459c6ab8(undefined8 param_1,int param_2)

{
  FUN_1459c6ae0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459c6ae0 FUN_1459c6ae0 body=75 status=ok
// SIG undefined FUN_1459c6ae0(void)

void FUN_1459c6ae0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b964ee0;
  FUN_144a2da94(param_1 + 0x11);
  FUN_144a2da94(param_1 + 10);
  FUN_144a2da94(param_1 + 3);
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1459c6b36 FUN_1459c6b36 body=831 status=ok
// SIG undefined FUN_1459c6b36(void)

undefined8 * FUN_1459c6b36(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14064ffa8();
  *param_1 = &PTR_FUN_14b5dea80;
  param_1[0x72] = &PTR_FUN_14b5df0f0;
  param_1[0x73] = &PTR_FUN_14b5df110;
  param_1[0x74] = &PTR_FUN_14b5df140;
  param_1[0x75] = &PTR_FUN_14b5df150;
  param_1[0x76] = &PTR_FUN_14b5df1c0;
  param_1[0x77] = &PTR_FUN_14b5df1f0;
  param_1[0x78] = &PTR_FUN_14b5df220;
  param_1[0x7f] = &PTR_FUN_14b5df2d0;
  param_1[0x80] = &PTR_FUN_14b5df340;
  param_1[0x81] = &PTR_FUN_14b5df3b0;
  param_1[0x82] = &PTR_FUN_14b5df3e0;
  param_1[0x83] = &PTR_FUN_14b5df420;
  param_1[0x84] = &PTR_FUN_14b5df4c0;
  param_1[0x85] = &PTR_FUN_14b5df4e0;
  param_1[0x89] = &PTR_FUN_14b5df500;
  param_1[0x8a] = &PTR_FUN_14b5df5c0;
  param_1[0x8b] = &PTR_FUN_14b5df640;
  param_1[0x8c] = &PTR_FUN_14b5df690;
  param_1[0x8d] = &PTR_FUN_14b5df6d0;
  param_1[0x8e] = &PTR_FUN_14b5df6f0;
  param_1[0x8f] = &PTR_FUN_14b5df710;
  param_1[0x90] = &PTR_FUN_14b5df730;
  param_1[0x91] = &PTR_FUN_14b5df750;
  param_1[0x92] = &PTR_FUN_14b5df770;
  param_1[0x93] = &PTR_FUN_14b5df790;
  param_1[0x94] = &PTR_FUN_14b5df7b0;
  param_1[0x95] = &PTR_FUN_14b5df7d0;
  param_1[0x96] = &PTR_FUN_14b5df7f0;
  param_1[0x34b] = &PTR_FUN_14b5df810;
  param_1[0x352] = &PTR_FUN_14b5df820;
  param_1[0x353] = &PTR_FUN_14b5df860;
  param_1[0x354] = &PTR_FUN_14b5df8a0;
  param_1[0x355] = &PTR_FUN_14b5df8f0;
  param_1[0x356] = &PTR_FUN_14b5df920;
  param_1[0x359] = &PTR_FUN_14b5df960;
  param_1[0x35a] = &PTR_FUN_14b5df970;
  param_1[0x35b] = &PTR_FUN_14b5df9a0;
  param_1[0x35c] = &PTR_FUN_14b5dfa40;
  *(undefined8 *)((longlong)param_1 + 0x2611) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2619) = 0;
  param_1[0x4c1] = 0;
  param_1[0x4c2] = 0;
  param_1[0x4bf] = 0;
  param_1[0x4c0] = 0;
  param_1[0x4c5] = 0;
  param_1[0x4c6] = 0;
  param_1[0x4c7] = 0;
  param_1[0x4d5] = 0;
  param_1[0x4d6] = 0;
  param_1[0x4d7] = 0;
  param_1[0x4c9] = 0;
  param_1[0x4ca] = 0;
  param_1[0x4cb] = 0;
  param_1[0x4cc] = 0;
  param_1[0x4cd] = 0;
  param_1[0x4ce] = 0;
  param_1[0x4cf] = 0;
  param_1[0x4d0] = 0;
  param_1[0x4d1] = 0;
  param_1[0x4d2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2691) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2699) = 0;
  FUN_1446ddc76(&local_20,"ChildCarryable",1);
  uVar1 = FUN_1459c6e76();
  local_30 = 0;
  local_38 = 1;
  lVar2 = FUN_14048696c(param_1,local_20,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x4c3] = lVar2;
  if (param_1[0x39] != 0) {
    FUN_140486fc4(lVar2,param_1[0x39],0);
    *(byte *)(param_1[0x4c3] + 0x2a8) = *(byte *)(param_1[0x4c3] + 0x2a8) & 0xfe;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459c6e76 FUN_1459c6e76 body=228 status=ok
// SIG undefined FUN_1459c6e76(void)

longlong FUN_1459c6e76(void)

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
  if (DAT_14cb9ffd8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14643186e;
    local_38 = &LAB_148b8b129;
    local_40 = &LAB_145845640;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/OakGame",L"ChildCarryableObjectComponent",&DAT_14cb9ffd8,&DAT_148b8b128)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9ffd8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459c6f5c FUN_1459c6f5c body=40 status=ok
// SIG undefined FUN_1459c6f5c(void)

undefined8 FUN_1459c6f5c(undefined8 param_1,int param_2)

{
  FUN_1459c6f84();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459c6f84 FUN_1459c6f84 body=133 status=ok
// SIG undefined FUN_1459c6f84(void)

void FUN_1459c6f84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b88a9f0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  FUN_1414303d4(param_1 + 0x34);
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x31) = 0;
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  FUN_145afe2ba(param_1 + 0x28);
  FUN_1459c700a(param_1);
  return;
}



// FUNCTION 1459c700a FUN_1459c700a body=203 status=ok
// SIG undefined FUN_1459c700a(void)

void FUN_1459c700a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b463d30;
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x22],*(undefined4 *)(param_1 + 0x23));
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_1459c70d6(param_1 + 0x11);
  FUN_1459c70d6(param_1 + 8);
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1459c70d6 FUN_1459c70d6 body=80 status=ok
// SIG undefined FUN_1459c70d6(void)

void FUN_1459c70d6(longlong *param_1)

{
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459c7134 FUN_1459c7134 body=40 status=ok
// SIG undefined FUN_1459c7134(void)

undefined8 FUN_1459c7134(undefined8 param_1,int param_2)

{
  FUN_1459c715c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459c715c FUN_1459c715c body=104 status=ok
// SIG undefined FUN_1459c715c(void)

void FUN_1459c715c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a175400;
  FUN_1459c71c4(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_14129872a(param_1 + 1);
  FUN_144a659aa(param_1);
  return;
}



// FUNCTION 1459c71c4 FUN_1459c71c4 body=61 status=ok
// SIG undefined FUN_1459c71c4(void)

void FUN_1459c71c4(longlong param_1,int param_2)

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
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1459c7208 FUN_1459c7208 body=232 status=ok
// SIG undefined FUN_1459c7208(void)

void FUN_1459c7208(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  
  local_58[4] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[0] = 0;
  local_58[1] = 0;
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  local_58[3] = 0;
  local_58[2] = 0;
  (**(code **)(*plVar2 + 0x1c8))(plVar2,local_58 + 2,local_58 + 3);
  FUN_1409ee323(local_58[2],local_58[3],local_58);
  local_58[3] = 0;
  uVar3 = (**(code **)(*param_2 + 8))(param_2,1);
  FUN_140f67fee(uVar3,local_58 + 3);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),local_58,local_58 + 3
              );
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_58[4] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459c72f2 FUN_1459c72f2 body=355 status=ok
// SIG undefined FUN_1459c72f2(void)

void FUN_1459c72f2(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  ushort *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x328) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x328) = 0;
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0xb2) == '\x01') {
      FUN_144a787a6((undefined8 *)(param_1 + 0x328),param_2);
      *(undefined8 *)(param_1 + 0x338) = *param_3;
    }
    else {
      local_34 = 0xffffffff;
      lVar2 = FUN_141430446(param_1,param_2,param_3);
      if ((lVar2 != 0) && (*(char *)(lVar2 + 0x11c) == '\0')) {
        FUN_1457f2724(lVar3 + 0x110,lVar2);
        *(undefined1 *)(lVar3 + 0xb3) = 1;
        *(undefined4 *)(param_1 + 0x308) = local_34;
        *(undefined8 *)(param_1 + 0x300) = *param_3;
        FUN_1459c74e8(param_1);
        puVar1 = *(ushort **)(lVar3 + 0x80);
        if (puVar1 != (ushort *)0x0) {
          *puVar1 = *puVar1 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
        }
        lVar3 = FUN_140391552(param_1);
        if (lVar3 != 0) {
          uVar4 = FUN_14001cc68(0x30,0x10);
          FUN_1459c7456(uVar4,param_2,param_1);
          FUN_14039144e(lVar3,uVar4);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459c7456 FUN_1459c7456 body=112 status=ok
// SIG undefined FUN_1459c7456(void)

undefined8 * FUN_1459c7456(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  
  FUN_1459c74c6(param_1,param_3);
  *param_1 = &PTR_FUN_14b9cac00;
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 1459c74c6 FUN_1459c74c6 body=33 status=ok
// SIG undefined FUN_1459c74c6(void)

void FUN_1459c74c6(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_14b4741c8;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  return;
}



// FUNCTION 1459c74e8 FUN_1459c74e8 body=325 status=ok
// SIG undefined FUN_1459c74e8(void)

void FUN_1459c74e8(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(char *)(param_1 + 0x344) == '\0') && (lVar3 = FUN_1407f4ede(), lVar3 != 0)) {
    lVar4 = FUN_1407f4df8();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       ((*(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
         == lVar4 + 0x30 && (*(int *)(param_1 + 0xe0) != *(int *)(param_1 + 0x10c))))) {
      uVar2 = (uint)((ulonglong)DAT_14cbdf468 >> 0x10);
      uVar5 = (uint)DAT_14cbdf468 & 0xffff;
      lVar3 = param_1 + 0x110;
      if (*(longlong *)(param_1 + 0x118) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x118);
      }
      iVar6 = *(int *)(lVar3 + (ulonglong)
                               (*(int *)(param_1 + 0x120) - 1U &
                               (int)((ulonglong)DAT_14cbdf468 >> 0x20) +
                               ((uint)DAT_14cbdf468 << 0x10 | uVar5) +
                               (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
      if (iVar6 != -1) {
        do {
          plVar1 = (longlong *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar6 * 0x18);
          if (*plVar1 == DAT_14cbdf468) {
            if ((plVar1 != (longlong *)0x0) && (plVar1 + 1 != (longlong *)0x0)) {
              local_20 = 0;
              FUN_14485c47a(&local_20,plVar1[1]);
              FUN_14143058a(param_1,local_20,10);
              *(undefined2 *)(param_1 + 0x344) = 1;
            }
            break;
          }
          iVar6 = (int)plVar1[2];
        } while (iVar6 != -1);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459c762e FUN_1459c762e body=517 status=ok
// SIG undefined FUN_1459c762e(void)

void FUN_1459c762e(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  ushort *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  ushort uVar6;
  ulonglong uVar7;
  ushort uVar8;
  ulonglong uVar9;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 == 0) goto LAB_1459c771e;
  iVar3 = *(int *)(lVar1 + 0x238);
  if (iVar3 == (int)param_2[1]) {
    if ((iVar3 < 2) ||
       (iVar3 = wcscmp(*(wchar_t **)(lVar1 + 0x230),(wchar_t *)*param_2), iVar3 == 0))
    goto LAB_1459c7761;
LAB_1459c7681:
    lVar4 = FUN_140391552(param_1);
    if (lVar4 != 0) {
      uVar5 = FUN_14001cc68(0x30,0x10);
      FUN_1459c7834(uVar5,param_2,param_1);
      FUN_14039144e(lVar4,uVar5);
    }
    lVar4 = FUN_141430446(param_1,param_2,param_3,local_3c);
    if (lVar4 == 0) goto LAB_1459c771e;
    if (*(char *)(lVar4 + 0x11c) == '\x01') {
      if (*(char *)(lVar1 + 0xb2) == '\x01') {
        FUN_14129c92c(param_1);
      }
      iVar3 = (int)param_2[1];
      if (iVar3 == DAT_14cbdf3f0) {
        if (1 < iVar3) {
          lVar4 = 0;
          while( true ) {
            uVar6 = *(ushort *)(*param_2 + lVar4);
            uVar7 = (ulonglong)uVar6;
            uVar8 = *(ushort *)(DAT_14cbdf3e8 + lVar4);
            if (uVar6 != uVar8) break;
            if (uVar6 == 0) goto LAB_1459c7818;
LAB_1459c77db:
            lVar4 = lVar4 + 2;
          }
          if ((uVar8 | uVar6) < 0x80) {
            uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
            uVar9 = (ulonglong)uVar8;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar9]) goto LAB_1459c77db;
          }
          if (uVar6 != uVar8) goto LAB_1459c7701;
        }
      }
      else if (DAT_14cbdf3f0 + iVar3 != 1) goto LAB_1459c7701;
LAB_1459c7818:
      if (*(char *)(param_1 + 0x360) == '\0') {
        FUN_145888136(param_1,1);
      }
    }
    else {
      FUN_144a787a6(param_1 + 0x348,param_2);
      *(longlong *)(param_1 + 0x358) = *param_3;
      *(undefined1 *)(param_1 + 0x347) = 1;
    }
  }
  else {
    if ((int)param_2[1] + iVar3 != 1) goto LAB_1459c7681;
LAB_1459c7761:
    if ((*(longlong *)(lVar1 + 0x250) != *param_3) || (*(char *)(lVar1 + 0xb2) != '\x01'))
    goto LAB_1459c7681;
    FUN_14129c92c(param_1);
  }
LAB_1459c7701:
  puVar2 = *(ushort **)(lVar1 + 0x80);
  if (puVar2 != (ushort *)0x0) {
    *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
  }
LAB_1459c771e:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459c7834 FUN_1459c7834 body=112 status=ok
// SIG undefined FUN_1459c7834(void)

undefined8 * FUN_1459c7834(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  
  FUN_1459c74c6(param_1,param_3);
  *param_1 = &PTR_FUN_14b9cabf0;
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 1459c78a4 FUN_1459c78a4 body=169 status=ok
// SIG undefined FUN_1459c78a4(void)

void FUN_1459c78a4(longlong param_1)

{
  undefined1 auStack_b8 [44];
  undefined4 local_8c;
  undefined1 local_88 [20];
  undefined1 local_74 [24];
  undefined1 local_5c [24];
  undefined1 local_44 [20];
  longlong *local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14016fae4();
  FUN_1459c794e(local_88);
  FUN_1411ab38a(local_5c,&local_8c);
  *(undefined4 *)(param_1 + 0x58) = local_8c;
  FUN_1411ab38a(local_44,&local_8c);
  *(undefined4 *)(param_1 + 0x5c) = local_8c;
  FUN_1411ab38a(local_74,&local_8c);
  *(undefined4 *)(param_1 + 0x60) = local_8c;
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459c794e FUN_1459c794e body=104 status=ok
// SIG undefined FUN_1459c794e(void)

undefined8 * FUN_1459c794e(undefined8 *param_1)

{
  *param_1 = 0xc1c00000c1a00000;
  param_1[1] = 0x3f0000003e800000;
  *(undefined2 *)(param_1 + 2) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0x3f13dc593e168e3f;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x3f8000003f6e1bc1;
  *(undefined1 **)((longlong)param_1 + 0x24) = &DAT_3f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x3f31a1983f469c45;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0x3f8000003f1e0147;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f000000;
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  FUN_144a5dc74(param_1 + 0xb);
  return param_1;
}



// FUNCTION 1459c79c2 FUN_1459c79c2 body=339 status=ok
// SIG undefined FUN_1459c79c2(void)

undefined8 * FUN_1459c79c2(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [40];
  longlong *local_50 [2];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1459c7c3c();
  *param_1 = &PTR_FUN_14a5b0690;
  *(undefined4 *)(param_1 + 5) = 0x20000;
  param_1[6] = 0;
  param_1[7] = 0;
  lVar4 = 0x40;
  do {
    FUN_1459c7b16((longlong)param_1 + lVar4);
    lVar4 = lVar4 + 0x20;
  } while (lVar4 != 0x100);
  puVar5 = param_1 + 8;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined2 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 2;
  lVar4 = 0;
  do {
    if (DAT_14cabd978 == 0) {
      uVar2 = FUN_140f5467b();
      DAT_14cabd978 = FUN_14171c317(FUN_14636b2c6,uVar2,L"EMassProcessingPhase");
    }
    FUN_1406f1d90(DAT_14cabd978,local_50,lVar4);
    puVar1 = (undefined8 *)FUN_1447a1f4a(local_50);
    puVar3 = &DAT_149dfb77a;
    if (*(int *)(puVar1 + 1) != 0) {
      puVar3 = (undefined2 *)*puVar1;
    }
    FUN_1446f470e(&local_40,puVar3,1);
    *puVar5 = local_40;
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    lVar4 = lVar4 + 1;
    puVar5 = puVar5 + 4;
  } while (lVar4 != 6);
  FUN_1459c7c5c(local_50,param_1);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459c7b16 FUN_1459c7b16 body=64 status=ok
// SIG undefined FUN_1459c7b16(void)

undefined8 * FUN_1459c7b16(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  lVar1 = FUN_1459c7b56();
  param_1[1] = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 1459c7b56 FUN_1459c7b56 body=228 status=ok
// SIG undefined FUN_1459c7b56(void)

longlong FUN_1459c7b56(void)

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
  if (DAT_14cabd9b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14636aa3a;
    local_38 = &LAB_147848da9;
    local_40 = &LAB_145c78d70;
    local_48 = L"Mass";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0xf0;
    FUN_14081cfa3(L"/Script/MassEntity",L"MassCompositeProcessor",&DAT_14cabd9b8,&DAT_147848da8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabd9b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459c7c3c FUN_1459c7c3c body=32 status=ok
// SIG undefined FUN_1459c7c3c(void)

undefined8 * FUN_1459c7c3c(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a5b5fd0;
  return param_1;
}



// FUNCTION 1459c7c5c FUN_1459c7c5c body=201 status=ok
// SIG undefined FUN_1459c7c5c(void)

undefined8 FUN_1459c7c5c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_149e020b0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14a5b59c0;
  puVar1[3] = 0;
  FUN_14485c47a(puVar1 + 3,param_2);
  puVar1[4] = FUN_14623be68;
  FUN_1448b6402(&DAT_14c872cf8,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459c7d26 FUN_1459c7d26 body=55 status=ok
// SIG undefined FUN_1459c7d26(void)

void FUN_1459c7d26(longlong *param_1)

{
  FUN_1459c7d5e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459c7d5e FUN_1459c7d5e body=383 status=ok
// SIG undefined FUN_1459c7d5e(void)

void FUN_1459c7d5e(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      if (*(longlong *)(*local_70 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459c7ede FUN_1459c7ede body=96 status=ok
// SIG undefined FUN_1459c7ede(void)

void FUN_1459c7ede(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = param_1[0x86];
  if (lVar2 == DAT_14cadad68) {
    (**(code **)(*param_1 + 0x870))(param_1,DAT_14cadad70);
    lVar2 = param_1[0x86];
  }
  if (lVar2 == DAT_14cadad70) {
    cVar1 = FUN_1459c7f3e(param_1);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001459c7f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x850))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1459c7f3e FUN_1459c7f3e body=140 status=ok
// SIG undefined FUN_1459c7f3e(void)

void FUN_1459c7f3e(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_14477b072(param_1,DAT_14cadacd0);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
    local_21 = 0;
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_21);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001459c7f95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x840))(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459c8004 FUN_1459c8004 body=76 status=ok
// SIG undefined FUN_1459c8004(void)

void FUN_1459c8004(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x6c8))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(longlong *)param_1[0x7d] + 0x700))();
    if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001459c8046. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x870))(param_1,DAT_14cadad78);
      return;
    }
  }
  return;
}



// FUNCTION 1459c806e FUN_1459c806e body=589 status=ok
// SIG undefined FUN_1459c806e(void)

void FUN_1459c806e(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [40];
  longlong local_60;
  int local_58;
  int local_54;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    FUN_148cffc38(param_2);
  }
  lVar7 = *param_1;
  if ((lVar7 != 0) && ((longlong)*(int *)(lVar7 + 0x458) != 0)) {
    plVar5 = *(longlong **)(lVar7 + 0x450);
    lVar7 = (longlong)*(int *)(lVar7 + 0x458) * 0x18;
    local_60 = param_2;
    do {
      lVar4 = plVar5[1];
      if (lVar4 == 0) {
        uVar3 = FUN_14573a762();
        lVar4 = FUN_14477b664(uVar3);
        plVar5[1] = lVar4;
      }
      lVar6 = plVar5[2];
      if (lVar6 == 0) {
        if (lVar4 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = 0;
          if (*plVar5 != 0) {
            plVar1 = *(longlong **)(lVar4 + 0xb8);
            if ((plVar1 == (longlong *)0x0) ||
               (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
              lVar6 = 0;
            }
            else {
              uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
              lVar6 = FUN_144aff482(uVar3,plVar5);
            }
            plVar5[2] = lVar6;
          }
        }
      }
      lVar4 = *(longlong *)(lVar6 + 0x30);
      local_50 = lVar6;
      if (lVar4 == 0) {
        uVar3 = FUN_140355b7c();
        lVar4 = FUN_14477b664(uVar3);
        *(longlong *)(lVar6 + 0x30) = lVar4;
      }
      if (*(longlong *)(lVar6 + 0x38) == 0) {
        if ((lVar4 != 0) && (*(longlong *)(lVar6 + 0x28) != 0)) {
          plVar1 = *(longlong **)(lVar4 + 0xb8);
          if ((plVar1 == (longlong *)0x0) ||
             (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
            *(undefined8 *)(lVar6 + 0x38) = 0;
            param_2 = local_60;
          }
          else {
            uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
            lVar4 = FUN_144aff482(uVar3,(longlong *)(lVar6 + 0x28));
            *(longlong *)(lVar6 + 0x38) = lVar4;
            param_2 = local_60;
            lVar6 = local_50;
            if (lVar4 != 0) goto LAB_1459c81e7;
          }
        }
        if (lVar6 != 0) {
LAB_1459c8213:
          FUN_1459c82bc(param_2,&local_50);
        }
      }
      else {
LAB_1459c81e7:
        FUN_141430b70(param_3,&local_58);
        if (((lVar6 != 0) && (local_58 == (int)*(undefined8 *)(lVar6 + 0x28))) &&
           (local_54 == (int)((ulonglong)*(undefined8 *)(lVar6 + 0x28) >> 0x20)))
        goto LAB_1459c8213;
      }
      plVar5 = plVar5 + 3;
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459c82bc FUN_1459c82bc body=105 status=ok
// SIG undefined FUN_1459c82bc(void)

void FUN_1459c82bc(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar4 * 8 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1459c8326(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 1459c8326 FUN_1459c8326 body=132 status=ok
// SIG undefined FUN_1459c8326(void)

void FUN_1459c8326(longlong param_1,int param_2)

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



// FUNCTION 1459c83ac FUN_1459c83ac body=153 status=ok
// SIG undefined FUN_1459c83ac(void)

void FUN_1459c83ac(ulonglong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  local_20 = param_1;
  plVar2 = (longlong *)FUN_1459c8446(uVar1 >> 0x10 ^ uVar1);
  lVar3 = *plVar2;
  if (lVar3 == 0) {
    lVar3 = FUN_14001cc68(0x1c90,0x10);
    FUN_141431768(lVar3);
    *plVar2 = lVar3;
  }
  FUN_141431600(lVar3,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459c8446 FUN_1459c8446 body=195 status=ok
// SIG undefined FUN_1459c8446(void)

longlong * FUN_1459c8446(uint param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 auStack_48 [40];
  longlong *local_20;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb44458 != DAT_14cb44484) {
    puVar3 = &DAT_14cb44488;
    if (DAT_14cb44490 != (undefined *)0x0) {
      puVar3 = DAT_14cb44490;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)(DAT_14cb44498 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb44450 + (longlong)iVar2 * 0x18);
        if (*plVar1 == *param_2) {
          if (plVar1 != (longlong *)0x0) goto LAB_1459c84e2;
          break;
        }
        iVar2 = (int)plVar1[2];
      } while (iVar2 != -1);
    }
  }
  local_20 = param_2;
  FUN_1459c850a(&local_14,param_1);
  plVar1 = (longlong *)(DAT_14cb44450 + (longlong)local_14 * 0x18);
LAB_1459c84e2:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar1 + 1;
}



// FUNCTION 1459c850a FUN_1459c850a body=294 status=ok
// SIG undefined FUN_1459c850a(void)

undefined4 * FUN_1459c850a(undefined4 *param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined *puVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1459c86c2(local_48);
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  cVar2 = FUN_1459c8632(param_2,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = DAT_14cb44458 - DAT_14cb44484;
    iVar6 = 1;
    if (3 < uVar3) {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= DAT_14cb44498)) {
      param_2 = DAT_14cb44498 - 1U & param_2;
      *(uint *)((longlong)local_40 + 0x14) = param_2;
      puVar4 = DAT_14cb44490;
      if (DAT_14cb44490 == (undefined *)0x0) {
        puVar4 = &DAT_14cb44488;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)(puVar4 + ((longlong)DAT_14cb44498 - 1U & (longlong)(int)param_2) * 4);
      puVar4 = DAT_14cb44490;
      if (DAT_14cb44490 == (undefined *)0x0) {
        puVar4 = &DAT_14cb44488;
      }
      *(undefined4 *)(puVar4 + ((longlong)DAT_14cb44498 - 1U & (longlong)(int)param_2) * 4) =
           local_48[0];
    }
    else {
      DAT_14cb44498 = iVar6;
      FUN_14143198e();
    }
  }
  *param_1 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459c8632 FUN_1459c8632 body=143 status=ok
// SIG undefined FUN_1459c8632(void)

undefined8 FUN_1459c8632(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb44458 - DAT_14cb44484 != 1) && (DAT_14cb44458 != DAT_14cb44484)) {
    puVar6 = &DAT_14cb44488;
    if (DAT_14cb44490 != (undefined *)0x0) {
      puVar6 = DAT_14cb44490;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb44498 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb44450 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145942f7e(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
    }
  }
  return 0;
}



// FUNCTION 1459c86c2 FUN_1459c86c2 body=279 status=ok
// SIG undefined FUN_1459c86c2(void)

int * FUN_1459c86c2(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb44480;
  iVar3 = DAT_14cb44458;
  if (DAT_14cb44484 == 0) {
    iVar2 = DAT_14cb44458 + 1;
    bVar7 = DAT_14cb4445c == DAT_14cb44458;
    DAT_14cb44458 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb44450,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb44460,1);
    puVar4 = DAT_14cb44470;
    if (DAT_14cb44470 == (undefined4 *)0x0) {
      puVar4 = &DAT_14cb44460;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    puVar4[iVar5 >> 5] = puVar4[iVar5 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb44480;
    DAT_14cb44480 = *(int *)(DAT_14cb44450 + 4 + lVar6 * 0x18);
    DAT_14cb44484 = DAT_14cb44484 + -1;
    if (DAT_14cb44484 != 0) {
      *(undefined4 *)(DAT_14cb44450 + (longlong)DAT_14cb44480 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb44460;
  if (DAT_14cb44470 != (undefined4 *)0x0) {
    puVar4 = DAT_14cb44470;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  puVar4[iVar3 >> 5] = puVar4[iVar3 >> 5] | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb44450;
  return param_1;
}



// FUNCTION 1459c87da FUN_1459c87da body=51 status=ok
// SIG undefined FUN_1459c87da(void)

void FUN_1459c87da(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  return;
}



// FUNCTION 1459c8818 FUN_1459c8818 body=77 status=ok
// SIG undefined FUN_1459c8818(void)

undefined8 * FUN_1459c8818(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *param_1 = &PTR_FUN_14a6eac30;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x14 | 0x83;
  return param_1;
}



// FUNCTION 1459c8866 FUN_1459c8866 body=235 status=ok
// SIG undefined FUN_1459c8866(void)

void FUN_1459c8866(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_140896aa8(param_1 + 0x60);
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (lVar3 != 0) {
        *(undefined8 *)(lVar2 + lVar4) = 0;
        FUN_1459c8952(lVar3);
        FUN_1400020a8(lVar3);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
  FUN_1413495c2(param_1 + 0x60);
  while (*(undefined8 **)(param_1 + 0x58) != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x58) = **(undefined8 **)(param_1 + 0x58);
    FUN_1400020a8();
  }
  while (*(undefined8 **)(param_1 + 0x48) != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x48) = **(undefined8 **)(param_1 + 0x48);
    FUN_1400020a8();
  }
  FUN_1459c8990(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) == 0) goto LAB_1459c891a;
  while( true ) {
    FUN_1400020a8();
LAB_1459c891a:
    if (*(undefined8 **)(param_1 + 0x18) == (undefined8 *)0x0) break;
    *(undefined8 *)(param_1 + 0x18) = **(undefined8 **)(param_1 + 0x18);
  }
  while (*(undefined8 **)(param_1 + 8) != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 8) = **(undefined8 **)(param_1 + 8);
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 1459c8952 FUN_1459c8952 body=62 status=ok
// SIG undefined FUN_1459c8952(void)

void FUN_1459c8952(longlong *param_1)

{
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1459c8990 FUN_1459c8990 body=66 status=ok
// SIG undefined FUN_1459c8990(void)

void FUN_1459c8990(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + lVar2 * 8);
      if (lVar1 != 0) {
        FUN_1459c8952(lVar1);
        FUN_1400020a8(lVar1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 1459c89d2 FUN_1459c89d2 body=40 status=ok
// SIG undefined FUN_1459c89d2(void)

undefined8 FUN_1459c89d2(undefined8 param_1,int param_2)

{
  FUN_1459c89fa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459c89fa FUN_1459c89fa body=59 status=ok
// SIG undefined FUN_1459c89fa(void)

void FUN_1459c89fa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a921640;
  FUN_1459c8a35(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 1459c8a35 FUN_1459c8a35 body=77 status=ok
// SIG undefined FUN_1459c8a35(void)

void FUN_1459c8a35(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x18);
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
      plVar4 = plVar4 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1459c8a82 FUN_1459c8a82 body=40 status=ok
// SIG undefined FUN_1459c8a82(void)

undefined8 FUN_1459c8a82(undefined8 param_1,int param_2)

{
  FUN_1459c8aaa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459c8aaa FUN_1459c8aaa body=70 status=ok
// SIG undefined FUN_1459c8aaa(void)

void FUN_1459c8aaa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aa0b270;
  param_1[5] = &PTR_LAB_14aa0b540;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_141238aee(param_1 + 8);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1459c8ba0 FUN_1459c8ba0 body=86 status=ok
// SIG undefined FUN_1459c8ba0(void)

void FUN_1459c8ba0(longlong param_1)

{
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_1459c8bf6(param_1 + 8);
  return;
}



// FUNCTION 1459c8bf6 FUN_1459c8bf6 body=55 status=ok
// SIG undefined FUN_1459c8bf6(void)

void FUN_1459c8bf6(longlong *param_1)

{
  FUN_1459c8c2e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459c8c2e FUN_1459c8c2e body=123 status=ok
// SIG undefined FUN_1459c8c2e(void)

void FUN_1459c8c2e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
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



// FUNCTION 1459c8caa FUN_1459c8caa body=37 status=ok
// SIG undefined FUN_1459c8caa(void)

void FUN_1459c8caa(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1459c8cd0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1459c8cd0 FUN_1459c8cd0 body=7 status=ok
// SIG undefined FUN_1459c8cd0(void)

undefined1 FUN_1459c8cd0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x164);
}



// FUNCTION 1459c8cd8 FUN_1459c8cd8 body=37 status=ok
// SIG undefined FUN_1459c8cd8(void)

void FUN_1459c8cd8(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1459c8cfe();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1459c8cfe FUN_1459c8cfe body=7 status=ok
// SIG undefined FUN_1459c8cfe(void)

undefined4 FUN_1459c8cfe(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x168);
}



// FUNCTION 1459c8d06 FUN_1459c8d06 body=37 status=ok
// SIG undefined FUN_1459c8d06(void)

void FUN_1459c8d06(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1459c8d2c();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1459c8d2c FUN_1459c8d2c body=7 status=ok
// SIG undefined FUN_1459c8d2c(void)

undefined1 FUN_1459c8d2c(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x228);
}



// FUNCTION 1459c8d34 FUN_1459c8d34 body=289 status=ok
// SIG undefined FUN_1459c8d34(void)

void FUN_1459c8d34(longlong *param_1,longlong param_2)

{
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [80];
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong lStack_40;
  ulonglong local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_70[0] = 0;
  local_68 = 0;
  local_60 = &DAT_3f800000ffffffff;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  lStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_70);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1459c8e8c(local_c0,local_70);
  (**(code **)(*param_1 + 0x2b0))(param_1,local_c0);
  FUN_140de863f(lStack_40,local_38 & 0xffffffff);
  if (lStack_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459c8e56 FUN_1459c8e56 body=54 status=ok
// SIG undefined FUN_1459c8e56(void)

void FUN_1459c8e56(longlong param_1,longlong param_2)

{
  FUN_1459ff2a0(param_1 + 0x48);
  FUN_140de863f(*(undefined8 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x38));
  if (*(longlong *)(param_2 + 0x30) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459c8e8c FUN_1459c8e8c body=135 status=ok
// SIG undefined FUN_1459c8e8c(void)

undefined4 * FUN_1459c8e8c(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  FUN_141431b9c(param_1 + 6,param_2 + 6);
  *(undefined8 *)(param_1 + 0xc) = 0;
  iVar1 = param_2[0xe];
  uVar2 = *(undefined8 *)(param_2 + 0xc);
  param_1[0xe] = iVar1;
  if (iVar1 == 0) {
    param_1[0xf] = 0;
  }
  else {
    FUN_1486eab00(param_1 + 0xc,iVar1,0);
    FUN_1486eab73(*(undefined8 *)(param_1 + 0xc),uVar2,iVar1);
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  return param_1;
}



// FUNCTION 1459c8f14 FUN_1459c8f14 body=26 status=ok
// SIG undefined FUN_1459c8f14(void)

void FUN_1459c8f14(undefined8 param_1)

{
  FUN_1459c8f2e();
  FUN_1413d8c86(param_1);
  return;
}



// FUNCTION 1459c8f2e FUN_1459c8f2e body=40 status=ok
// SIG undefined FUN_1459c8f2e(void)

void FUN_1459c8f2e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x6f8))();
                    /* WARNING: Could not recover jumptable at 0x0001459c8f53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x6b0))(param_1,0);
  return;
}



// FUNCTION 1459c8f64 FUN_1459c8f64 body=74 status=ok
// SIG undefined FUN_1459c8f64(void)

undefined8 * FUN_1459c8f64(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b8357e0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_140f4522c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1459c8fae FUN_1459c8fae body=262 status=ok
// SIG undefined FUN_1459c8fae(void)

void FUN_1459c8fae(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x178) == '\x03') {
    plVar3 = (longlong *)FUN_14041a931(param_1);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,param_1);
    }
  }
  FUN_1459c90b4(param_1,param_2);
  if (*(longlong *)(param_1 + 0xf00) != 0) {
    FUN_14480f766(&DAT_14cb7df68);
    *(undefined8 *)(param_1 + 0xf00) = 0;
  }
  if (*(longlong *)(param_1 + 0xf08) != 0) {
    FUN_14480f766(&DAT_14cb7df80);
    *(undefined8 *)(param_1 + 0xf08) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0xf78);
  if (lVar1 == 0) goto LAB_1459c9091;
  if (*(longlong *)(param_1 + 0xf88) != 0) {
    iVar2 = *(int *)(lVar1 + 0x30);
    if (iVar2 == 0) {
      FUN_1402a453c((int *)(lVar1 + 0x30));
      if (*(longlong *)(param_1 + 0xf88) == 0) goto LAB_1459c9085;
      iVar2 = *(int *)(lVar1 + 0x30);
    }
    FUN_14480f766(DAT_14c9a3d60 + (longlong)iVar2 * 0x88 + -0x18);
  }
LAB_1459c9085:
  FUN_1459c90d2(*(undefined8 *)(param_1 + 0xf78));
LAB_1459c9091:
  FUN_1401073f6(param_1 + 0x3f8,param_1);
  FUN_1412d3168(param_1,param_1,0);
  return;
}



// FUNCTION 1459c90b4 FUN_1459c90b4 body=30 status=ok
// SIG undefined FUN_1459c90b4(void)

void FUN_1459c90b4(longlong param_1)

{
  FUN_1403d8a98();
  *(undefined8 *)(param_1 + 0x530) = 0;
  return;
}



// FUNCTION 1459c90d2 FUN_1459c90d2 body=70 status=ok
// SIG undefined FUN_1459c90d2(void)

void FUN_1459c90d2(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_14007a5e6(lVar1);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001459c910e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0xf0))(plVar2,param_1 + 5,*(code **)(*plVar2 + 0xf0));
      return;
    }
  }
  return;
}



// FUNCTION 1459c9118 FUN_1459c9118 body=75 status=ok
// SIG undefined FUN_1459c9118(void)

void FUN_1459c9118(longlong *param_1,longlong param_2)

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
      FUN_1459c9164(param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1459c9164 FUN_1459c9164 body=47 status=ok
// SIG undefined FUN_1459c9164(void)

void FUN_1459c9164(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cbae340);
                    /* WARNING: Could not recover jumptable at 0x0001459c9190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 1459c919a FUN_1459c919a body=275 status=ok
// SIG undefined FUN_1459c919a(void)

void FUN_1459c919a(void)

{
  undefined8 uVar1;
  undefined1 auStack_148 [32];
  code *local_128 [2];
  undefined8 local_118;
  undefined **local_108;
  code *local_e8 [2];
  undefined8 local_d8;
  undefined **local_c8;
  undefined1 *local_a8 [2];
  undefined8 local_98;
  undefined **local_88;
  code *local_80;
  undefined1 *local_68 [2];
  undefined8 local_58;
  undefined **local_48;
  code *local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_1459c92ae();
  local_58 = 0;
  local_48 = &PTR_LAB_14a49f9f0;
  local_40 = FUN_1432e4f12;
  local_68[0] = &LAB_1475a0f84;
  local_98 = 0;
  local_88 = &PTR_LAB_14a49f9d0;
  local_80 = FUN_1432e4dd6;
  local_a8[0] = &LAB_1475a0f72;
  uVar1 = FUN_144a799b0();
  FUN_1459c934a(&DAT_14cab42e8,uVar1,local_a8,local_68);
  local_d8 = 0;
  local_c8 = &PTR_LAB_14a49fa30;
  local_e8[0] = FUN_1432e52a4;
  local_118 = 0;
  local_108 = &PTR_LAB_14a49fa10;
  local_128[0] = FUN_1432e504e;
  uVar1 = FUN_144a6c4d8();
  FUN_1459c934a(&DAT_14cab42e8,uVar1,local_128,local_e8);
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459c92ae FUN_1459c92ae body=155 status=ok
// SIG undefined FUN_1459c92ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1459c92ae(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab4338) {
    FUN_144b3d300(&DAT_14cab4338);
    if (DAT_14cab4338 == -1) {
      DAT_14cab4308 = 0;
      DAT_14cab4310 = 0;
      DAT_14cab42e8 = 0;
      _DAT_14cab42f0 = 0;
      _DAT_14cab4314 = 0xffffffff00000080;
      DAT_14cab431c = 0;
      DAT_14cab4328 = 0;
      DAT_14cab4330 = 0;
      atexit(FUN_1432e262e);
      _Init_thread_footer(&DAT_14cab4338);
    }
  }
  return &DAT_14cab42e8;
}



// FUNCTION 1459c934a FUN_1459c934a body=342 status=ok
// SIG undefined FUN_1459c934a(void)

void FUN_1459c934a(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 *local_c0;
  longlong *local_b8;
  undefined1 local_ac [4];
  longlong local_a8 [2];
  longlong *local_98 [2];
  longlong local_88 [4];
  longlong local_68;
  longlong *local_58 [2];
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_a8[0] = *param_3;
  local_98[0] = (longlong *)0x0;
  local_c8 = param_2;
  if (local_a8[0] != 0) {
    plVar1 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_3[2];
    }
    (**(code **)*plVar1)(plVar1,local_98);
  }
  local_68 = *param_4;
  local_58[0] = (longlong *)0x0;
  if (local_68 != 0) {
    plVar1 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_4[2];
    }
    (**(code **)*plVar1)(plVar1,local_58);
  }
  local_c0 = &local_c8;
  local_b8 = local_a8;
  FUN_1459c952a(param_1,local_ac);
  if (local_68 != 0) {
    plVar1 = local_58[0];
    if (local_58[0] == (longlong *)0x0) {
      plVar1 = local_48;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (local_a8[0] != 0) {
    plVar1 = local_98[0];
    if (local_98[0] == (longlong *)0x0) {
      plVar1 = local_88;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*param_3 != 0) {
    plVar1 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if (*param_4 != 0) {
    plVar1 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459c94ba FUN_1459c94ba body=31 status=ok
// SIG undefined FUN_1459c94ba(void)

undefined8 FUN_1459c94ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459c94da FUN_1459c94da body=31 status=ok
// SIG undefined FUN_1459c94da(void)

undefined8 FUN_1459c94da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459c952a FUN_1459c952a body=337 status=ok
// SIG undefined FUN_1459c952a(void)

undefined4 * FUN_1459c952a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1459c97c2(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(ulonglong *)*param_3;
  FUN_1459c967c(local_40 + 2,uVar1);
  *(undefined4 *)(local_40 + 0x12) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(*local_40 >> 0x14) & 0xffff ^ (uint)(*local_40 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_1459c96ee(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
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
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x94) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x12) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_141431be4(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459c967c FUN_1459c967c body=113 status=ok
// SIG undefined FUN_1459c967c(void)

longlong * FUN_1459c967c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  param_1[2] = 0;
  if (lVar1 != 0) {
    plVar2 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_2[2];
    }
    (**(code **)*plVar2)(plVar2,param_1 + 2);
  }
  lVar1 = param_2[8];
  param_1[8] = lVar1;
  param_1[10] = 0;
  if (lVar1 != 0) {
    plVar2 = param_2 + 0xc;
    if ((longlong *)param_2[10] != (longlong *)0x0) {
      plVar2 = (longlong *)param_2[10];
    }
    (**(code **)*plVar2)(plVar2,param_1 + 10);
  }
  return param_1;
}



// FUNCTION 1459c96ee FUN_1459c96ee body=212 status=ok
// SIG undefined FUN_1459c96ee(void)

undefined8 FUN_1459c96ee(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0xa0);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0xa0) == *param_3) {
          if (*(longlong *)((longlong)_Dst + 0x50) != 0) {
            plVar1 = (longlong *)((longlong)_Dst + 0x70);
            if (*(longlong **)((longlong)_Dst + 0x60) != (longlong *)0x0) {
              plVar1 = *(longlong **)((longlong)_Dst + 0x60);
            }
            (**(code **)(*plVar1 + 0x10))();
          }
          if (*(longlong *)((longlong)_Dst + 0x10) != 0) {
            plVar1 = (longlong *)((longlong)_Dst + 0x30);
            if (*(longlong **)((longlong)_Dst + 0x20) != (longlong *)0x0) {
              plVar1 = *(longlong **)((longlong)_Dst + 0x20);
            }
            (**(code **)(*plVar1 + 0x10))();
          }
          memmove(_Dst,param_3,0x90);
          FUN_1475a0ef8(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x90);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1459c97c2 FUN_1459c97c2 body=251 status=ok
// SIG undefined FUN_1459c97c2(void)

int * FUN_1459c97c2(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_141431dd2(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0xa0);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0xa0) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0xa0 + *param_1;
  return param_2;
}



// FUNCTION 1459c98be FUN_1459c98be body=216 status=ok
// SIG undefined FUN_1459c98be(void)

void FUN_1459c98be(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141245f18();
  FUN_1412465d2(param_1 + 0x20,param_2);
  FUN_144a84a0c(&local_30,param_2);
  if (local_28 != (longlong *)0x0) {
    iVar4 = (int)local_28[1];
    do {
      if (iVar4 == 0) {
        plVar5 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_28[1];
      bVar6 = iVar4 == iVar3;
      if (bVar6) {
        *(int *)(local_28 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar5 = local_28;
    } while (!bVar6);
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    if (plVar5 != (longlong *)0x0) {
      if ((local_30 != 0) && (DAT_14cb71bf8 == '\x01')) {
        FUN_14082bc44(local_30 + 0x1d0,param_2,param_1 + 0x20);
      }
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
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459c9998 FUN_1459c9998 body=16 status=ok
// SIG undefined FUN_1459c9998(void)

undefined1 FUN_1459c9998(void)

{
  FUN_1459c99a8();
  return 1;
}



// FUNCTION 1459c99a8 FUN_1459c99a8 body=1138 status=ok
// SIG undefined FUN_1459c99a8(void)

void FUN_1459c99a8(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  code *pcVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 ****ppppuVar10;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  undefined1 local_c1;
  undefined8 ***local_c0;
  longlong *local_b8;
  ushort local_a8;
  byte local_a0;
  undefined1 local_98 [40];
  undefined4 local_70 [2];
  undefined1 local_68 [40];
  undefined4 local_40 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar3 = *(longlong *)(param_1 + 0x48);
  local_68[0] = 0;
  local_40[0] = 0;
  local_c1 = 2;
  local_d0 = FUN_144a7be76();
  FUN_144a7bec8(param_1,&local_c0);
  local_98[0] = 0;
  local_70[0] = 0;
  FUN_144a7bf34(local_98,&local_c0,&local_d0,&local_c1);
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_b8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_b8 + 0x10))();
    }
  }
  if (*(int *)(lVar3 + 0xb8) == 1) {
    FUN_1447c3578(lVar3 + 0xc0,&local_c0,local_98);
    uVar8 = FUN_14070d842(&local_c0);
    FUN_1456bb102(local_68,uVar8);
    pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
    if (pcVar7 != (code *)0x0) {
      ppppuVar10 = &local_c0;
      if (0x18 < local_a8) {
        ppppuVar10 = (undefined8 ****)local_c0;
      }
      (*pcVar7)(ppppuVar10);
    }
    if (0x18 < local_a8) {
      FUN_1400020a8(local_c0);
    }
  }
  else {
    FUN_1447f8f6a(local_68,local_98);
    FUN_14495544a(local_40,local_70);
  }
  if (*(int *)(lVar3 + 0x17c) == 1) {
    FUN_1447c3578(lVar3 + 0x80,&local_c0,local_68);
    plVar2 = (longlong *)(param_1 + 0xd8);
    pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(param_1 + 0xf8) * 0x120));
    if (pcVar7 != (code *)0x0) {
      plVar9 = plVar2;
      if (0x18 < *(ushort *)(param_1 + 0xf0)) {
        plVar9 = (longlong *)*plVar2;
      }
      (*pcVar7)(plVar9);
    }
    if (0x18 < *(ushort *)(param_1 + 0xf0)) {
      FUN_1400020a8(*plVar2);
    }
    *(ushort *)(param_1 + 0xf0) = local_a8;
    if (0x18 < local_a8) {
      *plVar2 = (longlong)local_c0;
      local_c0 = (undefined8 ****)0x0;
      local_a8 = 0;
      goto LAB_1459c9afe;
    }
    uVar6 = (ulonglong)((uint)local_a0 * 0x120);
    if (*(code **)((longlong)&DAT_14c9a85b8 + uVar6) != (code *)0x0) {
      (**(code **)((longlong)&DAT_14c9a85b8 + uVar6))(plVar2,&local_c0);
      goto LAB_1459c9afe;
    }
    pcVar7 = *(code **)((longlong)&DAT_14c9a85b0 + uVar6);
    if (pcVar7 != (code *)0x0) goto LAB_1459c9cb8;
    iVar4 = *(int *)((longlong)&DAT_14c9a8510 + uVar6);
  }
  else {
    local_a8 = 0;
    local_a0 = 0;
    plVar2 = (longlong *)(param_1 + 0xd8);
    pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(param_1 + 0xf8) * 0x120));
    if (pcVar7 != (code *)0x0) {
      plVar9 = plVar2;
      if (0x18 < *(ushort *)(param_1 + 0xf0)) {
        plVar9 = (longlong *)*plVar2;
      }
      (*pcVar7)(plVar9);
    }
    if (0x18 < *(ushort *)(param_1 + 0xf0)) {
      FUN_1400020a8(*plVar2);
    }
    *(undefined2 *)(param_1 + 0xf0) = 0;
    pcVar7 = DAT_14c9a85b8;
    if ((DAT_14c9a85b8 != (code *)0x0) ||
       (pcVar7 = DAT_14c9a85b0, iVar4 = DAT_14c9a8510, DAT_14c9a85b0 != (code *)0x0)) {
LAB_1459c9cb8:
      (*pcVar7)(param_1 + 0xd8,&local_c0);
      goto LAB_1459c9afe;
    }
  }
  memcpy((void *)(param_1 + 0xd8),&local_c0,(longlong)iVar4);
LAB_1459c9afe:
  *(byte *)(param_1 + 0xf8) = local_a0;
  local_a0 = 0;
  if (DAT_14c9a85d0 != (code *)0x0) {
    ppppuVar10 = &local_c0;
    if (0x18 < local_a8) {
      ppppuVar10 = (undefined8 ****)local_c0;
    }
    (*DAT_14c9a85d0)(ppppuVar10);
  }
  if (0x18 < local_a8) {
    FUN_1400020a8(local_c0);
  }
  if (*(int *)(lVar3 + 0xf8) == 1) {
    FUN_1414321f6(lVar3 + 0x100,&local_c0,local_68,local_98);
    if (local_a0 == 0) {
      uVar5 = 0;
    }
    else {
      if (*(code **)(&DAT_14c9a8610 + (uint)*(byte *)(lVar3 + 0xa8) * 0x120) != (code *)0x0) {
        (**(code **)(&DAT_14c9a8610 + (uint)*(byte *)(lVar3 + 0xa8) * 0x120))
                  (lVar3 + 0x88,local_68,&local_c0);
      }
      uVar5 = (uint)local_a0;
    }
    pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar5 * 0x120));
    if (pcVar7 != (code *)0x0) {
      ppppuVar10 = &local_c0;
      if (0x18 < local_a8) {
        ppppuVar10 = (undefined8 ****)local_c0;
      }
      (*pcVar7)(ppppuVar10);
    }
    if (0x18 < local_a8) {
      FUN_1400020a8(local_c0);
    }
  }
  FUN_144a5ac3a(local_98);
  FUN_144a5ac3a(local_68);
  if ((local_38 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459c9e1c FUN_1459c9e1c body=241 status=ok
// SIG undefined FUN_1459c9e1c(void)

void FUN_1459c9e1c(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_141432ebc();
  uVar3 = DAT_14cbcabf0;
  uVar1 = FUN_140a48832();
  lVar2 = FUN_140c48046(param_1 + 0x80,uVar1,uVar3,0);
  if (lVar2 != 0) {
    local_28 = 0;
    uVar3 = FUN_1459c9f0e();
    lVar2 = FUN_140c47e50(lVar2,uVar3,&local_28);
    if (lVar2 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x198);
      if (DAT_14c950c29 == '\x01') {
        if (lVar4 == 0) {
          lVar4 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar4 = *(longlong *)(param_1 + 0x198);
        }
      }
      *(longlong *)(lVar2 + 0x80) = lVar4;
      *(undefined4 *)(lVar2 + 0x88) = *(undefined4 *)(param_1 + 0x1a0);
      *(undefined1 *)(lVar2 + 0x8c) = *(undefined1 *)(param_1 + 0x1a4);
      *(undefined1 *)(lVar2 + 0x8d) = *(undefined1 *)(param_1 + 0x1a5);
      *(undefined1 *)(lVar2 + 0x8e) = *(undefined1 *)(param_1 + 0x1a6);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459c9f0e FUN_1459c9f0e body=55 status=ok
// SIG undefined FUN_1459c9f0e(void)

void FUN_1459c9f0e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0e20 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0e20 = FUN_140002ddd(FUN_1465ad328,uVar1,L"GbxBrainAspectSettings_TakeOff");
  }
  return;
}



// FUNCTION 1459c9f46 FUN_1459c9f46 body=181 status=ok
// SIG undefined FUN_1459c9f46(void)

void FUN_1459c9f46(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  lVar1 = DAT_14cb0d2b0;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb0d2b0 != 0) {
    lVar4 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
    if (lVar4 == 0) {
      FUN_145876474(DAT_14cb0d2b0);
      lVar2 = DAT_14cb0d2b0;
      if (*(longlong *)(lVar1 + 0x2c8) == 0) goto LAB_1459c9fa5;
      lVar4 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
      if (lVar4 == 0) {
        FUN_145876474(DAT_14cb0d2b0);
        lVar4 = *(longlong *)(lVar2 + 0x2c8);
      }
    }
    FUN_1459c9ffc(lVar4,local_20);
    FUN_1459ca32a(param_1);
    uVar3 = FUN_1459ca00a(param_1,local_20);
    (**(code **)(*param_1 + 0x318))(param_1,uVar3);
  }
LAB_1459c9fa5:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459c9ffc FUN_1459c9ffc body=14 status=ok
// SIG undefined FUN_1459c9ffc(void)

undefined8 * FUN_1459c9ffc(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x88);
  return param_2;
}



// FUNCTION 1459ca00a FUN_1459ca00a body=109 status=ok
// SIG undefined FUN_1459ca00a(void)

ulonglong FUN_1459ca00a(longlong param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  
  if ((longlong)*(int *)(param_1 + 0x148) < 1) {
    uVar3 = 0;
  }
  else {
    iVar5 = param_2[1] * param_2[1] + *param_2 * *param_2;
    puVar4 = *(undefined8 **)(param_1 + 0x140);
    uVar7 = 0;
    uVar3 = 0;
    iVar8 = iVar5;
    do {
      piVar1 = (int *)*puVar4;
      if (piVar1 != (int *)0x0) {
        iVar9 = iVar5 - (*piVar1 * *piVar1 + piVar1[1] * piVar1[1]);
        iVar6 = -iVar9;
        if (iVar6 < 0) {
          iVar6 = iVar9;
        }
        bVar2 = iVar6 <= iVar8;
        iVar8 = iVar6;
        if (bVar2) {
          uVar3 = uVar7 & 0xffffffff;
        }
      }
      uVar7 = uVar7 + 1;
      puVar4 = puVar4 + 2;
    } while ((longlong)*(int *)(param_1 + 0x148) != uVar7);
  }
  return uVar3;
}



// FUNCTION 1459ca078 FUN_1459ca078 body=172 status=ok
// SIG undefined FUN_1459ca078(void)

void FUN_1459ca078(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = DAT_14cb0d2b0;
  if ((((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x148))) &&
      (*(longlong *)(*(longlong *)(param_1 + 0x140) + (ulonglong)param_2 * 0x10) != 0)) &&
     (DAT_14cb0d2b0 != 0)) {
    lVar3 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
    if (lVar3 == 0) {
      FUN_145876474(DAT_14cb0d2b0);
      lVar2 = DAT_14cb0d2b0;
      if (*(longlong *)(lVar1 + 0x2c8) == 0) {
        return;
      }
      lVar3 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
      if (lVar3 == 0) {
        FUN_145876474(DAT_14cb0d2b0);
        lVar3 = *(longlong *)(lVar2 + 0x2c8);
      }
    }
    FUN_1459ca124(lVar3,**(undefined8 **)
                          (*(longlong *)(param_1 + 0x140) + (ulonglong)param_2 * 0x10));
    FUN_1459ca14e(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1459ca124 FUN_1459ca124 body=41 status=ok
// SIG undefined FUN_1459ca124(void)

void FUN_1459ca124(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)((ulonglong)param_2 >> 0x20);
  if ((*(int *)(param_1 + 0x88) == (int)param_2) && (*(int *)(param_1 + 0x8c) == iVar1)) {
    return;
  }
  *(int *)(param_1 + 0x88) = (int)param_2;
  *(int *)(param_1 + 0x8c) = iVar1;
  FUN_145880944();
  return;
}



// FUNCTION 1459ca14e FUN_1459ca14e body=133 status=ok
// SIG undefined FUN_1459ca14e(void)

void FUN_1459ca14e(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  (**(code **)(*param_1 + 0x2e0))();
  lVar2 = param_1[0x1d];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = param_1[0x1c];
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(lVar1 + lVar3) + 0x18))
                (*(longlong **)(lVar1 + lVar3),param_1[0xb],param_1,param_2);
      lVar3 = lVar3 + 0x10;
    } while ((longlong)(int)lVar2 * 0x10 != lVar3);
  }
  if (*(char *)((longlong)param_1 + 0x10a) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x10a) = 1;
    FUN_1459ca1d8(param_1 + 5,param_1,param_2);
    *(undefined1 *)((longlong)param_1 + 0x10a) = 0;
  }
  return;
}



// FUNCTION 1459ca1d6 FUN_1459ca1d6 body=1 status=ok
// SIG undefined FUN_1459ca1d6(void)

void FUN_1459ca1d6(void)

{
  return;
}



// FUNCTION 1459ca1d8 FUN_1459ca1d8 body=173 status=ok
// SIG undefined FUN_1459ca1d8(void)

void FUN_1459ca1d8(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
        goto LAB_1459ca26f;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1459ca26f:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1459ca286 FUN_1459ca286 body=153 status=ok
// SIG undefined FUN_1459ca286(void)

bool FUN_1459ca286(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_38);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459ca32a FUN_1459ca32a body=278 status=ok
// SIG undefined FUN_1459ca32a(void)

void FUN_1459ca32a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  lVar1 = DAT_14cb0d2b0;
  if (DAT_14cb0d2b0 != 0) {
    lVar3 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
    if (lVar3 == 0) {
      FUN_145876474(DAT_14cb0d2b0);
      lVar2 = DAT_14cb0d2b0;
      if (*(longlong *)(lVar1 + 0x2c8) == 0) {
        return;
      }
      lVar3 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
      if (lVar3 == 0) {
        FUN_145876474(DAT_14cb0d2b0);
        lVar3 = *(longlong *)(lVar2 + 0x2c8);
      }
    }
    iVar4 = (*(int *)(lVar3 + 0xa0) != 1) + 1;
    if (*(int *)(lVar3 + 0xa0) == 0) {
      iVar4 = 0;
    }
    if (*(char *)(param_1 + 0x13c) == '\0' || *(int *)(param_1 + 0x138) != iVar4) {
      FUN_1458d697d(*(undefined8 *)(param_1 + 0x140),*(undefined4 *)(param_1 + 0x148));
      *(undefined4 *)(param_1 + 0x148) = 0;
      if (*(int *)(param_1 + 0x14c) != 0) {
        FUN_14610d564(param_1 + 0x140,0);
      }
      *(int *)(param_1 + 0x138) = iVar4;
      *(undefined1 *)(param_1 + 0x13c) = 1;
    }
    if (*(int *)(param_1 + 0x148) == 0) {
      FUN_1459ca462(param_1 + 0x140,param_1 + (ulonglong)(uint)(iVar4 << 4) + 0x150);
      FUN_1459ca440(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1459ca440 FUN_1459ca440 body=34 status=ok
// SIG undefined FUN_1459ca440(void)

void FUN_1459ca440(longlong *param_1)

{
  (**(code **)(*param_1 + 0x2e8))();
  FUN_1410e5c2a(param_1 + 8,param_1);
  return;
}



// FUNCTION 1459ca462 FUN_1459ca462 body=135 status=ok
// SIG undefined FUN_1459ca462(void)

void FUN_1459ca462(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = *(uint *)(param_2 + 1);
  if (uVar5 != 0) {
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + uVar5;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar5) {
      FUN_1459ca4ea(param_1,iVar1);
    }
    lVar6 = (longlong)iVar1 * 0x10 + *param_1;
    lVar2 = *param_2;
    lVar4 = 0;
    do {
      *(undefined8 *)(lVar6 + lVar4) = *(undefined8 *)(lVar2 + lVar4);
      lVar3 = *(longlong *)(lVar2 + 8 + lVar4);
      *(longlong *)(lVar6 + 8 + lVar4) = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      lVar4 = lVar4 + 0x10;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    return;
  }
  return;
}



// FUNCTION 1459ca4ea FUN_1459ca4ea body=132 status=ok
// SIG undefined FUN_1459ca4ea(void)

void FUN_1459ca4ea(longlong param_1,int param_2)

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



// FUNCTION 1459ca56e FUN_1459ca56e body=115 status=ok
// SIG undefined FUN_1459ca56e(void)

bool FUN_1459ca56e(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1459ca5e2(param_1,&local_28,param_2);
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
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459ca5e2 FUN_1459ca5e2 body=463 status=ok
// SIG undefined FUN_1459ca5e2(void)

longlong * FUN_1459ca5e2(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58;
  int local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar4 = (**(code **)(*param_1 + 0x180))();
  FUN_141432ebe(&local_58,param_3,uVar4);
  if (local_50 < 2) {
    local_40 = param_1 + 0x1f;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[0x22] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_38;
    uVar4 = local_68;
    local_60 = local_30;
    local_5c = local_2c;
    local_78 = local_48;
    local_70 = local_40;
    local_68._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_80 = param_1 + 0x1d;
    if (local_68._4_4_ < (int)local_40[3]) {
      iVar3 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar5 = *local_80;
        lVar1 = *(longlong *)(lVar5 + 0x10 + (longlong)iVar3 * 0x28);
        if (*(int *)(lVar1 + 0x30) == param_3) {
          *param_2 = lVar1;
          lVar5 = *(longlong *)(lVar5 + 0x18 + (longlong)iVar3 * 0x28);
          goto LAB_1459ca68f;
        }
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar3 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  else {
    uVar2 = FUN_144a49b4a(local_50 + -1,local_58);
    iVar3 = FUN_1410bdd7e(param_1 + 0x1d,uVar2,&local_58);
    uVar4 = local_68;
    if (iVar3 != -1) {
      lVar1 = param_1[0x1d];
      lVar5 = lVar1 + (longlong)iVar3 * 0x28;
      if ((lVar5 != 0) && (lVar1 + (longlong)iVar3 * 0x28 != -0x10)) {
        *param_2 = *(longlong *)(lVar5 + 0x10);
        lVar5 = *(longlong *)(lVar5 + 0x18);
LAB_1459ca68f:
        param_2[1] = lVar5;
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
          UNLOCK();
        }
        goto LAB_1459ca69c;
      }
    }
  }
  local_68 = uVar4;
  *param_2 = 0;
  param_2[1] = 0;
LAB_1459ca69c:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459ca7b2 FUN_1459ca7b2 body=309 status=ok
// SIG undefined FUN_1459ca7b2(void)

undefined4 * FUN_1459ca7b2(undefined4 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  ulonglong uVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  byte *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1459ca998(local_40);
  uVar2 = param_2[1];
  *local_38 = *(byte *)*param_2;
  FUN_14023423e(local_38 + 8,uVar2);
  local_38[0x18] = 0xff;
  local_38[0x19] = 0xff;
  local_38[0x1a] = 0xff;
  local_38[0x1b] = 0xff;
  local_44 = local_40[0];
  bVar1 = *local_38;
  cVar5 = FUN_1459ca8e8(bVar1,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar8 = DAT_14c967150 - DAT_14c96717c;
    if (uVar8 < 4) {
      iVar9 = 1;
    }
    else {
      uVar6 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar9 <= DAT_14c967190)) {
      uVar8 = DAT_14c967190 - 1U & (uint)bVar1;
      *(uint *)(local_38 + 0x1c) = uVar8;
      puVar7 = DAT_14c967188;
      if (DAT_14c967188 == (undefined *)0x0) {
        puVar7 = &DAT_14c967180;
      }
      *(undefined4 *)(local_38 + 0x18) =
           *(undefined4 *)(puVar7 + (ulonglong)(DAT_14c967190 - 1U & uVar8) * 4);
      puVar7 = DAT_14c967188;
      if (DAT_14c967188 == (undefined *)0x0) {
        puVar7 = &DAT_14c967180;
      }
      *(undefined4 *)(puVar7 + (ulonglong)(DAT_14c967190 - 1U & uVar8) * 4) = local_44;
    }
    else {
      DAT_14c967190 = iVar9;
      FUN_141432fce();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459ca8e8 FUN_1459ca8e8 body=175 status=ok
// SIG undefined FUN_1459ca8e8(void)

undefined8 FUN_1459ca8e8(uint param_1,char *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  int iVar7;
  
  if ((DAT_14c967150 - DAT_14c96717c != 1) && (DAT_14c967150 != DAT_14c96717c)) {
    puVar6 = &DAT_14c967180;
    if (DAT_14c967188 != (undefined *)0x0) {
      puVar6 = DAT_14c967188;
    }
    iVar7 = *(int *)(puVar6 + (ulonglong)(DAT_14c967190 - 1U & param_1) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (undefined4 *)(DAT_14c967148 + (longlong)iVar7 * 0x20);
        if (*(char *)(DAT_14c967148 + (longlong)iVar7 * 0x20) == *param_2) {
          if (*(longlong **)(puVar1 + 2) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(puVar1 + 2) + 0x10))();
          }
          uVar2 = *(undefined4 *)param_2;
          uVar3 = *(undefined4 *)(param_2 + 4);
          uVar4 = *(undefined4 *)(param_2 + 8);
          uVar5 = *(undefined4 *)(param_2 + 0xc);
          *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_2 + 0x10);
          *puVar1 = uVar2;
          puVar1[1] = uVar3;
          puVar1[2] = uVar4;
          puVar1[3] = uVar5;
          FUN_146929218(*param_3);
          *param_3 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1459ca998 FUN_1459ca998 body=282 status=ok
// SIG undefined FUN_1459ca998(void)

int * FUN_1459ca998(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14c967178;
  iVar3 = DAT_14c967150;
  if (DAT_14c96717c == 0) {
    iVar2 = DAT_14c967150 + 1;
    bVar7 = DAT_14c967154 == DAT_14c967150;
    DAT_14c967150 = iVar2;
    if (bVar7) {
      FUN_1447711aa(&DAT_14c967148,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14c967158,1);
    puVar4 = DAT_14c967168;
    if (DAT_14c967168 == (undefined *)0x0) {
      puVar4 = &DAT_14c967158;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14c967178;
    DAT_14c967178 = *(int *)(DAT_14c967148 + 4 + lVar6 * 0x20);
    DAT_14c96717c = DAT_14c96717c + -1;
    if (DAT_14c96717c != 0) {
      *(undefined4 *)(DAT_14c967148 + (longlong)DAT_14c967178 * 0x20) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14c967158;
  if (DAT_14c967168 != (undefined *)0x0) {
    puVar4 = DAT_14c967168;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x20 + DAT_14c967148;
  return param_1;
}



// FUNCTION 1459caab2 FUN_1459caab2 body=48 status=ok
// SIG undefined FUN_1459caab2(void)

void FUN_1459caab2(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b95e6d0);
  FUN_1414331a6(param_1,param_2);
  return;
}



// FUNCTION 1459caae2 FUN_1459caae2 body=158 status=ok
// SIG undefined FUN_1459caae2(void)

void FUN_1459caae2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_141433228(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459cab82 FUN_1459cab82 body=40 status=ok
// SIG undefined FUN_1459cab82(void)

undefined8 FUN_1459cab82(undefined8 param_1,int param_2)

{
  FUN_1459cabaa();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cabaa FUN_1459cabaa body=100 status=ok
// SIG undefined FUN_1459cabaa(void)

void FUN_1459cabaa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a1af410;
  FUN_1459cac0e(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_1459cac36(param_1 + 6);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 1459cac0e FUN_1459cac0e body=40 status=ok
// SIG undefined FUN_1459cac0e(void)

void FUN_1459cac0e(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1470d1ce8(param_1);
    param_1 = param_1 + 0x28;
  }
  return;
}



// FUNCTION 1459cac36 FUN_1459cac36 body=55 status=ok
// SIG undefined FUN_1459cac36(void)

void FUN_1459cac36(longlong *param_1)

{
  FUN_141433230(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459cac6e FUN_1459cac6e body=205 status=ok
// SIG undefined FUN_1459cac6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1459cac6e(void)

{
  if ((DAT_14cb8fdbf & 2) != 0) {
    return;
  }
  DAT_14cb8fdbf = DAT_14cb8fdbf | 2;
  _DAT_14cb8fd60 = L"FCohShaderPS";
  _DAT_14cb8fd78 = FUN_146826540;
  _DAT_14cb8fd80 = FUN_146825d77;
  _DAT_14cb8fd88 = FUN_146825fd6;
  _DAT_14cb8fd90 = FUN_1407e02ea;
  _DAT_14cb8fd98 = FUN_146826273;
  _DAT_14cb8fd70 = FUN_1489c20ba;
  _DAT_14cb8fdb0 = 0xffffffff00000110;
  _DAT_14cb8fdb8 = 8;
  DAT_14cb8fdbc = 0;
  _DAT_14cb8fda0 = &LAB_1489c20e4;
  FUN_1459cad3c();
  FUN_1459cadb6();
  FUN_1407e00cc(&DAT_14cb8fd58);
  return;
}



// FUNCTION 1459cad3c FUN_1459cad3c body=121 status=ok
// SIG undefined FUN_1459cad3c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1459cad3c(void)

{
  FUN_1459cae32();
  _DAT_14cb8fdc0 = L"Data_PS";
  DAT_14cb8fdea = FUN_140850cc5();
  _DAT_14cb8fdc8 = FUN_140ec6960();
  _DAT_14cb8fdd8 = &LAB_14682652b;
  _DAT_14cb8fde0 = 0x1000000e0;
  _DAT_14cb8fde8 = 0;
  _DAT_14cb8fdd0 = DAT_14cb8fd68;
  DAT_14cb8fd68 = &DAT_14cb8fdc0;
  return;
}



// FUNCTION 1459cadb6 FUN_1459cadb6 body=123 status=ok
// SIG undefined FUN_1459cadb6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1459cadb6(void)

{
  _DAT_14cb8fe50 = L"BASE";
  DAT_14cb8fe7a = 4;
  _DAT_14cb8fe58 = FUN_140b35ae4();
  _DAT_14cb8fe60 = DAT_14cb8fd68;
  _DAT_14cb8fe68 = &LAB_14682652b;
  DAT_14cb8fd68 = &DAT_14cb8fe50;
  DAT_14cb8fdbd = DAT_14cb8fdbd + '\x01';
  _DAT_14cb8fe70 = 0x100000000;
  if (*(char *)(_DAT_14cb8fe58 + 100) != '\0') {
    DAT_14cb8fdbe = DAT_14cb8fdbe + '\x01';
  }
  return;
}



// FUNCTION 1459cae32 FUN_1459cae32 body=216 status=ok
// SIG undefined FUN_1459cae32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1459cae32(void)

{
  _DAT_14cb8fe20 = L"SamplerState";
  DAT_14cb8fe4a = FUN_140850cc5();
  _DAT_14cb8fe28 = FUN_140fb78d0();
  _DAT_14cb8fe38 = &LAB_14682652b;
  _DAT_14cb8fe40 = 0x5000000fa;
  _DAT_14cb8fe48 = 0;
  _DAT_14cb8fe30 = DAT_14cb8fd68;
  DAT_14cb8fd68 = &DAT_14cb8fe20;
  _DAT_14cb8fdf0 = L"TextureBuffer";
  DAT_14cb8fe1a = FUN_140850cc5();
  _DAT_14cb8fdf8 = FUN_140fb78d0();
  _DAT_14cb8fe08 = &LAB_14682652b;
  _DAT_14cb8fe10 = 0x5000000e6;
  _DAT_14cb8fe18 = 0;
  _DAT_14cb8fe00 = DAT_14cb8fd68;
  DAT_14cb8fd68 = &DAT_14cb8fdf0;
  return;
}



// FUNCTION 1459caf0a FUN_1459caf0a body=642 status=ok
// SIG undefined FUN_1459caf0a(void)

ulonglong FUN_1459caf0a(longlong param_1)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  byte bVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined1 local_88 [16];
  undefined1 *local_78;
  int local_70;
  uint local_6c;
  undefined1 local_68 [16];
  undefined1 *local_58;
  int local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = (undefined1 *)0x0;
  local_4c = 0x80;
  local_50 = *(int *)(param_1 + 0x18);
  uVar8 = *(int *)(param_1 + 0x18) + 0x1f;
  if (uVar8 < 0x20) goto LAB_1459cafe1;
  if (uVar8 < 0xa0) {
    puVar5 = local_68;
LAB_1459caf99:
    uVar8 = uVar8 >> 3 & 0xfffffffc;
  }
  else {
    FUN_14499171c(local_68,0,uVar8 >> 5,4);
    local_4c = uVar8 & 0xffffffe0;
    puVar5 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar5 = local_68;
    }
    if (uVar8 < 0x120) goto LAB_1459caf99;
    uVar8 = (uVar8 >> 5) << 2;
  }
  memset(puVar5,0,(ulonglong)uVar8);
  iVar3 = local_50 + 0x1f;
  if (-1 < local_50) {
    iVar3 = local_50;
  }
  if (local_50 % 0x20 != 0) {
    puVar5 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar5 = local_68;
    }
    bVar6 = -(char)(local_50 % 0x20);
    *(uint *)(puVar5 + (longlong)(iVar3 >> 5) * 4) =
         (uint)(*(int *)(puVar5 + (longlong)(iVar3 >> 5) * 4) << (bVar6 & 0x1f)) >> (bVar6 & 0x1f);
  }
LAB_1459cafe1:
  iVar3 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar3 != 0) {
    local_90 = *(longlong *)(param_1 + 0x20);
    lVar9 = 0;
    do {
      uVar1 = *(ushort *)(local_90 + 2 + lVar9);
      puVar5 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar5 = local_68;
      }
      if ((*(uint *)(puVar5 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) == 0) {
        local_70 = *(int *)(param_1 + 0x18);
        local_78 = (undefined1 *)0x0;
        local_6c = 0x80;
        uVar8 = local_70 + 0x1f;
        if (0x1f < uVar8) {
          puVar5 = local_88;
          if (uVar8 < 0xa0) {
LAB_1459cb0a1:
            uVar8 = uVar8 >> 3 & 0xfffffffc;
          }
          else {
            FUN_14499171c(local_88,0,uVar8 >> 5,4);
            local_6c = uVar8 & 0xffffffe0;
            puVar5 = local_78;
            if (local_78 == (undefined1 *)0x0) {
              puVar5 = local_88;
            }
            if (uVar8 < 0x120) goto LAB_1459cb0a1;
            uVar8 = (uVar8 >> 5) << 2;
          }
          memset(puVar5,0,(ulonglong)uVar8);
          iVar4 = local_70 + 0x1f;
          if (-1 < local_70) {
            iVar4 = local_70;
          }
          if (local_70 % 0x20 != 0) {
            puVar5 = local_78;
            if (local_78 == (undefined1 *)0x0) {
              puVar5 = local_88;
            }
            bVar6 = -(char)(local_70 % 0x20);
            *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
                 (uint)(*(int *)(puVar5 + (longlong)(iVar4 >> 5) * 4) << (bVar6 & 0x1f)) >>
                 (bVar6 & 0x1f);
          }
        }
        cVar2 = FUN_141433436(param_1,uVar1,local_88);
        if (cVar2 == '\0') {
          FUN_141433531(local_88);
        }
        if (local_78 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        if (cVar2 != '\0') {
          uVar7 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
          goto LAB_1459cb12a;
        }
      }
      lVar9 = lVar9 + 4;
    } while ((longlong)iVar3 * 4 != lVar9);
  }
  uVar7 = 0;
LAB_1459cb12a:
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459cb18d FUN_1459cb18d body=57 status=ok
// SIG undefined FUN_1459cb18d(void)

void FUN_1459cb18d(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1459cb1c6(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b78c8a0;
  puVar1[5] = &PTR_FUN_14b78cb50;
  puVar1[6] = &PTR_FUN_14b78cb70;
  return;
}



// FUNCTION 1459cb1c6 FUN_1459cb1c6 body=54 status=ok
// SIG undefined FUN_1459cb1c6(void)

undefined8 * FUN_1459cb1c6(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b197420;
  param_1[5] = &PTR_FUN_14b1976d0;
  param_1[6] = &PTR_FUN_14b1976f0;
  return param_1;
}



// FUNCTION 1459cb1fc FUN_1459cb1fc body=40 status=ok
// SIG undefined FUN_1459cb1fc(void)

undefined8 FUN_1459cb1fc(undefined8 param_1,int param_2)

{
  FUN_1459cb224();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cb224 FUN_1459cb224 body=137 status=ok
// SIG undefined FUN_1459cb224(void)

void FUN_1459cb224(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b84ac40;
  if (param_1[0x5c] != 0) {
    FUN_14480f766(&DAT_14cb7d898);
  }
  param_1[0x5c] = 0;
  FUN_144760e21(param_1[0x5d],*(undefined4 *)(param_1 + 0x5e));
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x55] != 0) {
    FUN_1400020a8();
  }
  FUN_1459cb2ae(param_1);
  return;
}



// FUNCTION 1459cb2ae FUN_1459cb2ae body=68 status=ok
// SIG undefined FUN_1459cb2ae(void)

void FUN_1459cb2ae(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b549c90;
  FUN_1459cb2f2(param_1[0x53],*(undefined4 *)(param_1 + 0x54));
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  FUN_1414336e8(param_1);
  return;
}



// FUNCTION 1459cb2f2 FUN_1459cb2f2 body=49 status=ok
// SIG undefined FUN_1459cb2f2(void)

void FUN_1459cb2f2(longlong param_1,int param_2)

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



// FUNCTION 1459cb324 FUN_1459cb324 body=40 status=ok
// SIG undefined FUN_1459cb324(void)

undefined8 FUN_1459cb324(undefined8 param_1,int param_2)

{
  FUN_1459cb34c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cb34c FUN_1459cb34c body=284 status=ok
// SIG undefined FUN_1459cb34c(void)

void FUN_1459cb34c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14acee000;
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  FUN_1401f9f5c(param_1 + 0x2c);
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_1459cb866(param_1 + 0x17);
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_1459cb819(param_1[0x13],*(undefined4 *)(param_1 + 0x14));
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_1459cb468(param_1 + 0x10);
  FUN_1459cb468(param_1 + 0xe);
  FUN_1459cb75c(param_1 + 0xc);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 1459cb468 FUN_1459cb468 body=67 status=ok
// SIG undefined FUN_1459cb468(void)

void FUN_1459cb468(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1459cb4b6(*param_1);
  plVar3 = (longlong *)param_1[1];
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
                    /* WARNING: Could not recover jumptable at 0x0001459cb4a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1459cb4b6 FUN_1459cb4b6 body=99 status=ok
// SIG undefined FUN_1459cb4b6(void)

void FUN_1459cb4b6(longlong param_1)

{
  int iVar1;
  
  FUN_1459cb614();
  if (*(char *)(param_1 + 0x68) == '\x01') {
    FUN_1459cb546(*(undefined8 *)(param_1 + 0x58));
  }
  FUN_1459cb5d2(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x54);
  FUN_1459cb519(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x54) != 0)) {
    FUN_147fc0244(param_1 + 0x48);
  }
  FUN_1401f9f5c(param_1 + 0x80);
  return;
}



// FUNCTION 1459cb519 FUN_1459cb519 body=44 status=ok
// SIG undefined FUN_1459cb519(void)

void FUN_1459cb519(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x18;
    do {
      FUN_1401f9f5c(param_1);
      param_1 = param_1 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1459cb546 FUN_1459cb546 body=63 status=ok
// SIG undefined FUN_1459cb546(void)

void FUN_1459cb546(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  FUN_1459cb585(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0xc) != 0)) {
    FUN_147fb37de(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1459cb585 FUN_1459cb585 body=77 status=ok
// SIG undefined FUN_1459cb585(void)

void FUN_1459cb585(longlong param_1,int param_2)

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



// FUNCTION 1459cb5d2 FUN_1459cb5d2 body=65 status=ok
// SIG undefined FUN_1459cb5d2(void)

void FUN_1459cb5d2(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < 0) {
    FUN_147fb3c46(param_1,0);
  }
  *(undefined2 *)(param_1 + 0x22) = 0xffff;
  *(undefined4 *)(param_1 + 0x24) = 0x40401;
  *(undefined4 *)(param_1 + 0x2a) = 0xffff;
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x30);
  return;
}



// FUNCTION 1459cb614 FUN_1459cb614 body=96 status=ok
// SIG undefined FUN_1459cb614(void)

void FUN_1459cb614(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = *(int *)((longlong)param_1 + 0xc);
  if (0 < iVar3) {
    iVar6 = 0;
    iVar5 = -0x10;
    do {
      lVar1 = *param_1;
      lVar4 = (longlong)((int)param_1[1] + iVar5);
      plVar2 = *(longlong **)(lVar1 + lVar4);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x2f0))(plVar2,*(int *)(lVar1 + 8 + lVar4) + lVar1,1);
        iVar3 = *(int *)((longlong)param_1 + 0xc);
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + -0x10;
    } while (iVar6 < iVar3);
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  return;
}



// FUNCTION 1459cb674 FUN_1459cb674 body=126 status=ok
// SIG undefined FUN_1459cb674(void)

void FUN_1459cb674(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1401f9f5c(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x60);
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
  FUN_1459cb519(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_1459cb720(param_1 + 0x10);
  FUN_1459cb75c(param_1);
  return;
}



// FUNCTION 1459cb6f2 FUN_1459cb6f2 body=45 status=ok
// SIG undefined FUN_1459cb6f2(void)

void FUN_1459cb6f2(longlong param_1)

{
  FUN_1459cb585(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459cb720 FUN_1459cb720 body=60 status=ok
// SIG undefined FUN_1459cb720(void)

void FUN_1459cb720(longlong *param_1)

{
  FUN_1459cb7cc(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459cb75c FUN_1459cb75c body=112 status=ok
// SIG undefined FUN_1459cb75c(void)

void FUN_1459cb75c(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = *(int *)((longlong)param_1 + 0xc);
  if (0 < iVar3) {
    iVar6 = 0;
    iVar5 = -0x10;
    do {
      lVar1 = *param_1;
      lVar4 = (longlong)((int)param_1[1] + iVar5);
      plVar2 = *(longlong **)(lVar1 + lVar4);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x2f0))(plVar2,*(int *)(lVar1 + 8 + lVar4) + lVar1,1);
        iVar3 = *(int *)((longlong)param_1 + 0xc);
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + -0x10;
    } while (iVar6 < iVar3);
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  FUN_1400020a8(*param_1);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 1459cb7cc FUN_1459cb7cc body=77 status=ok
// SIG undefined FUN_1459cb7cc(void)

void FUN_1459cb7cc(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x18);
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
      plVar4 = plVar4 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1459cb819 FUN_1459cb819 body=77 status=ok
// SIG undefined FUN_1459cb819(void)

void FUN_1459cb819(longlong param_1,int param_2)

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



// FUNCTION 1459cb866 FUN_1459cb866 body=152 status=ok
// SIG undefined FUN_1459cb866(void)

void FUN_1459cb866(longlong *param_1)

{
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1459cb8fe(param_1[8],(int)param_1[9]);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_1459cb92b(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459cb8fe FUN_1459cb8fe body=45 status=ok
// SIG undefined FUN_1459cb8fe(void)

void FUN_1459cb8fe(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 1459cb92b FUN_1459cb92b body=63 status=ok
// SIG undefined FUN_1459cb92b(void)

void FUN_1459cb92b(longlong param_1,int param_2)

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
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1459cb96a FUN_1459cb96a body=37 status=ok
// SIG undefined FUN_1459cb96a(void)

void FUN_1459cb96a(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x208);
  FUN_1459cb990(param_2);
  return;
}



// FUNCTION 1459cb990 FUN_1459cb990 body=497 status=ok
// SIG undefined FUN_1459cb990(void)

undefined8 * FUN_1459cb990(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *param_1 = &PTR_FUN_14ac6e410;
  FUN_140ef4e54(param_1 + 8);
  *param_1 = &PTR_FUN_14ac6e370;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x10] = &PTR_FUN_14a1a0a60;
  uVar1 = DAT_14c8464e8;
  param_1[0x13] = DAT_14c8464e0;
  param_1[0x14] = uVar1;
  param_1[0x15] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  uVar1 = DAT_14c846500;
  param_1[0x19] = DAT_14c8464f8;
  param_1[0x1a] = uVar1;
  param_1[0x1b] = DAT_14c846508;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x1f] = DAT_14c8464e0;
  param_1[0x20] = uVar1;
  param_1[0x21] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[0x24] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x29] = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  param_1[0x28] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x2b) = 0x447a0000;
  param_1[0x2d] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x2c] = &PTR_FUN_14a1a0270;
  uVar1 = DAT_14c846500;
  param_1[0x2f] = DAT_14c8464f8;
  param_1[0x30] = uVar1;
  param_1[0x31] = DAT_14c846508;
  *(undefined2 *)(param_1 + 0x32) = 0;
  param_1[0x35] = DAT_14c846508;
  uVar1 = DAT_14c846500;
  param_1[0x33] = DAT_14c8464f8;
  param_1[0x34] = uVar1;
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  param_1[0x3a] = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  param_1[0x39] = &PTR_FUN_14a1a0aa0;
  *(undefined4 *)(param_1 + 0x3c) = 10;
  param_1[0x3e] = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  param_1[0x3d] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x40) = 0x42c80000;
  return param_1;
}



// FUNCTION 1459cbb90 FUN_1459cbb90 body=75 status=ok
// SIG undefined FUN_1459cbb90(void)

undefined8 * FUN_1459cbb90(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b601530;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d767a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 1459cbbdc FUN_1459cbbdc body=40 status=ok
// SIG undefined FUN_1459cbbdc(void)

undefined8 FUN_1459cbbdc(undefined8 param_1,int param_2)

{
  FUN_1414337d8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cbc04 FUN_1459cbc04 body=65 status=ok
// SIG undefined FUN_1459cbc04(void)

void FUN_1459cbc04(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xd8);
  FUN_141433862(param_2);
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  *param_2 = &PTR_FUN_14b939300;
  *(undefined1 *)(param_2 + 0x1a) = 0;
  return;
}



// FUNCTION 1459cbc46 FUN_1459cbc46 body=89 status=ok
// SIG undefined FUN_1459cbc46(void)

void FUN_1459cbc46(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x398) = 0;
  plVar3 = *(longlong **)(param_1 + 0x3a0);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x3a0) = 0;
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
  return;
}



// FUNCTION 1459cbca0 FUN_1459cbca0 body=43 status=ok
// SIG undefined FUN_1459cbca0(void)

void FUN_1459cbca0(longlong param_1)

{
  FUN_14144f736(param_1 + 0x200,&DAT_14cbca3c0,0);
  FUN_1414338d4(param_1);
  return;
}



// FUNCTION 1459cbccc FUN_1459cbccc body=62 status=ok
// SIG undefined FUN_1459cbccc(void)

undefined8 * FUN_1459cbccc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14befe740;
  FUN_1459cbd0a(param_1 + 0xe);
  thunk_FUN_1404db954(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cbd0a FUN_1459cbd0a body=60 status=ok
// SIG undefined FUN_1459cbd0a(void)

void FUN_1459cbd0a(longlong *param_1)

{
  FUN_1459cbd46(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459cbd46 FUN_1459cbd46 body=56 status=ok
// SIG undefined FUN_1459cbd46(void)

void FUN_1459cbd46(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_149902ee2(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1459cbd7e FUN_1459cbd7e body=282 status=ok
// SIG undefined FUN_1459cbd7e(void)

void FUN_1459cbd7e(longlong param_1,undefined8 param_2,char param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0x3c0);
  if (lVar3 != 0) {
    lVar6 = FUN_144a75eb4();
    if (((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
         == lVar6 + 0x30)) && (*(longlong *)(lVar3 + 0x508) != 0)) {
      lVar6 = FUN_1459cbe9a();
      lVar3 = *(longlong *)(lVar3 + 0x508);
      if (((lVar3 != 0) && (lVar6 != 0)) &&
         ((lVar4 = *(longlong *)(lVar3 + 0x10), lVar4 != 0 &&
          ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar4 + 0x38) &&
           (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
            lVar6 + 0x30)))))) {
        FUN_14888a1e8(lVar3,&local_38);
        lVar3 = local_38;
        if (local_38 != 0) {
          uVar7 = FUN_148887828(param_2);
          if (param_3 == '\0') {
            FUN_14888815e(lVar3,uVar7,param_4);
          }
          else {
            FUN_148887fe2();
          }
        }
        goto LAB_1459cbe14;
      }
    }
  }
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
LAB_1459cbe14:
  plVar5 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459cbe9a FUN_1459cbe9a body=228 status=ok
// SIG undefined FUN_1459cbe9a(void)

longlong FUN_1459cbe9a(void)

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
  if (DAT_14cb61e48 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14640b4da;
    local_38 = &LAB_1486dfd97;
    local_40 = &LAB_145dfa805;
    local_48 = L"Input";
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x570;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerInput",&DAT_14cb61e48,&DAT_1486dfd96);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb61e48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459cbf80 FUN_1459cbf80 body=190 status=ok
// SIG undefined FUN_1459cbf80(void)

bool FUN_1459cbf80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    local_48 = param_5;
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459cc046 FUN_1459cc046 body=228 status=ok
// SIG undefined FUN_1459cc046(void)

longlong FUN_1459cc046(void)

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
  if (DAT_14cab2d78 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14633cfb4;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411e5bea;
    local_38 = &LAB_14755314b;
    local_40 = &LAB_14601a79b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xf0;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneTrackInstanceInstantiator",&DAT_14cab2d78,
                  &DAT_14755314a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab2d78;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459cc132 FUN_1459cc132 body=40 status=ok
// SIG undefined FUN_1459cc132(void)

undefined8 FUN_1459cc132(undefined8 param_1,int param_2)

{
  FUN_1459cc15a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cc15a FUN_1459cc15a body=111 status=ok
// SIG undefined FUN_1459cc15a(void)

void FUN_1459cc15a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b208650;
  param_1[0x1f] = &PTR_FUN_14b2089c0;
  param_1[0x20] = &PTR_FUN_14b2089f0;
  param_1[0x22] = &PTR_FUN_14b208a40;
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_1404db908(param_1);
  return;
}



// FUNCTION 1459cc1d6 FUN_1459cc1d6 body=228 status=ok
// SIG undefined FUN_1459cc1d6(void)

longlong FUN_1459cc1d6(void)

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
  if (DAT_14cba8e10 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a8acb0;
    local_38 = &LAB_148c02183;
    local_40 = &LAB_1458b80d4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x1a0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakCinematicLevelSequence",&DAT_14cba8e10,&DAT_148c02182);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba8e10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459cc2bc FUN_1459cc2bc body=194 status=ok
// SIG undefined FUN_1459cc2bc(void)

void FUN_1459cc2bc(undefined8 param_1)

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
  FUN_1459cc578();
  uVar5 = FUN_1447210f0(param_1);
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
        FUN_1459cc380(local_28 + 0x70,&local_28,param_1);
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



// FUNCTION 1459cc380 FUN_1459cc380 body=244 status=ok
// SIG undefined FUN_1459cc380(void)

undefined8 FUN_1459cc380(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14b9919e0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b9a3510;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_145a21fd0;
  FUN_1459cc476(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459cc476 FUN_1459cc476 body=216 status=ok
// SIG undefined FUN_1459cc476(void)

undefined8 * FUN_1459cc476(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459cc578 FUN_1459cc578 body=254 status=ok
// SIG undefined FUN_1459cc578(void)

void FUN_1459cc578(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1405f1eac();
  lVar3 = FUN_1447210f0(param_1);
  if ((lVar3 != 0) &&
     (((bVar1 = *(byte *)(lVar3 + 0x152), bVar1 == 1 ||
       ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) &&
      (iVar2 = FUN_14490d72a(lVar3), iVar2 != 3)))) {
    FUN_140ceb1a0(*(longlong *)(param_1 + 0x3a8) + 0x599,param_1);
    FUN_140ceb202(*(longlong *)(param_1 + 0x3a8) + 0x59a,param_1);
    lVar3 = *(longlong *)(param_1 + 0x3a8);
    FUN_1459cc85a(&local_30);
    FUN_1459cc68e(lVar3 + 0x599,param_1,local_30);
    FUN_1459cc7a2(local_38);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459cc68e FUN_1459cc68e body=137 status=ok
// SIG undefined FUN_1459cc68e(void)

void FUN_1459cc68e(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_14485c47a(&local_48);
  uStack_40 = param_3;
  FUN_14113f0c0(&local_48);
  local_30 = (undefined4)local_48;
  uStack_2c = local_48._4_4_;
  uStack_28 = (undefined4)uStack_40;
  uStack_24 = uStack_40._4_4_;
  FUN_140838726(param_1,&local_38);
  bVar1 = FUN_140819c20(param_1 + -0x599,local_38,&local_30);
  *param_1 = *param_1 | bVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459cc7a2 FUN_1459cc7a2 body=182 status=ok
// SIG undefined FUN_1459cc7a2(void)

undefined8 * FUN_1459cc7a2(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbd5968) {
    FUN_144b3d300(&DAT_14cbd5968);
    if (DAT_14cbd5968 == -1) {
      builtin_wcsncpy(local_38 + 8,L"dOverlap",9);
      builtin_wcsncpy(local_38,L"OnZoneEn",8);
      FUN_1446f470e(&DAT_14cbd5960,local_38,1);
      _Init_thread_footer(&DAT_14cbd5968);
    }
  }
  *param_1 = DAT_14cbd5960;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459cc85a FUN_1459cc85a body=193 status=ok
// SIG undefined FUN_1459cc85a(void)

undefined8 * FUN_1459cc85a(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbd5958) {
    FUN_144b3d300(&DAT_14cbd5958);
    if (DAT_14cbd5958 == -1) {
      builtin_wcsncpy(local_38,L"OnZoneBeginOverlap",0x13);
      FUN_1446f470e(&DAT_14cbd5950,local_38,1);
      _Init_thread_footer(&DAT_14cbd5958);
    }
  }
  *param_1 = DAT_14cbd5950;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459cc91c FUN_1459cc91c body=40 status=ok
// SIG undefined FUN_1459cc91c(void)

undefined8 FUN_1459cc91c(undefined8 param_1,int param_2)

{
  FUN_1459cc944();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459cc944 FUN_1459cc944 body=83 status=ok
// SIG undefined FUN_1459cc944(void)

void FUN_1459cc944(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a1c1a40;
  FUN_1459cc997(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1459cc997 FUN_1459cc997 body=38 status=ok
// SIG undefined FUN_1459cc997(void)

void FUN_1459cc997(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1459cc9be(param_1);
    param_1 = param_1 + 0x60;
  }
  return;
}



// FUNCTION 1459cc9be FUN_1459cc9be body=62 status=ok
// SIG undefined FUN_1459cc9be(void)

void FUN_1459cc9be(longlong *param_1)

{
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1459cc9fc FUN_1459cc9fc body=316 status=ok
// SIG undefined FUN_1459cc9fc(void)

void FUN_1459cc9fc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
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
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1459ccb3a(local_18,local_19,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


