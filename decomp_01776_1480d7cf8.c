// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1480d7cf8 FUN_1480d7cf8 body=77 status=ok
// SIG undefined FUN_1480d7cf8(void)

int FUN_1480d7cf8(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x2a8);
  if ((longlong)iVar1 < 1) {
    iVar2 = *(int *)(param_1 + 0x2b0);
    *(int *)(param_1 + 0x2b0) = iVar2 + 1;
  }
  else {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x2a0) + -4 + (longlong)iVar1 * 4);
    *(int *)(param_1 + 0x2a8) = iVar1 + -1;
    FUN_14479f406(param_1 + 0x2a0);
  }
  return iVar2;
}



// FUNCTION 1480d7d46 FUN_1480d7d46 body=64 status=ok
// SIG undefined FUN_1480d7d46(void)

void FUN_1480d7d46(longlong param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2a8);
  *(uint *)(param_1 + 0x2a8) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x2ac) < iVar1 + 1U) {
    FUN_1446f48e2((longlong *)(param_1 + 0x2a0),iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x2a0) + (longlong)iVar1 * 4) = param_2;
  return;
}



// FUNCTION 1480d7e82 FUN_1480d7e82 body=126 status=ok
// SIG undefined FUN_1480d7e82(void)

undefined8 FUN_1480d7e82(longlong param_1,longlong param_2)

{
  int iVar1;
  ushort uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == *(int *)(param_2 + 0x30)) {
    if (1 < iVar1) {
      lVar4 = 0;
      while( true ) {
        uVar5 = *(ushort *)(*(longlong *)(param_1 + 0x28) + lVar4);
        uVar6 = (ulonglong)uVar5;
        uVar2 = *(ushort *)(*(longlong *)(param_2 + 0x28) + lVar4);
        if (uVar5 != uVar2) break;
        if (uVar5 == 0) goto LAB_1480d7ef2;
LAB_1480d7ebc:
        lVar4 = lVar4 + 2;
      }
      if ((uVar2 | uVar5) < 0x80) {
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        uVar3 = (ulonglong)uVar2;
        uVar2 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
        if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar3]) goto LAB_1480d7ebc;
      }
      if (uVar5 != uVar2) {
        return 0;
      }
    }
  }
  else if (*(int *)(param_2 + 0x30) + iVar1 != 1) {
    return 0;
  }
LAB_1480d7ef2:
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x48) >> 8),
                  *(longlong *)(param_1 + 0x48) == *(longlong *)(param_2 + 0x48));
}



// FUNCTION 1480d7f22 FUN_1480d7f22 body=170 status=ok
// SIG undefined FUN_1480d7f22(void)

undefined4 FUN_1480d7f22(longlong param_1,longlong param_2)

{
  int iVar1;
  ushort uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == *(int *)(param_2 + 0x30)) {
    if (1 < iVar1) {
      lVar4 = 0;
      while( true ) {
        uVar5 = *(ushort *)(*(longlong *)(param_1 + 0x28) + lVar4);
        uVar6 = (ulonglong)uVar5;
        uVar2 = *(ushort *)(*(longlong *)(param_2 + 0x28) + lVar4);
        if (uVar5 != uVar2) break;
        if (uVar5 == 0) goto LAB_1480d7f90;
LAB_1480d7f5c:
        lVar4 = lVar4 + 2;
      }
      if ((uVar2 | uVar5) < 0x80) {
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        uVar3 = (ulonglong)uVar2;
        uVar2 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
        if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar3]) goto LAB_1480d7f5c;
      }
      if (uVar5 != uVar2) {
        return 0;
      }
    }
  }
  else if (*(int *)(param_2 + 0x30) + iVar1 != 1) {
    return 0;
  }
LAB_1480d7f90:
  if ((((*(longlong *)(param_1 + 0x48) == *(longlong *)(param_2 + 0x48)) &&
       (((*(byte *)(param_2 + 0x50) ^ *(byte *)(param_1 + 0x50)) & 7) == 0)) &&
      (*(int *)(param_1 + 0x54) == *(int *)(param_2 + 0x54))) &&
     ((*(int *)(param_1 + 0x58) == *(int *)(param_2 + 0x58) &&
      (*(int *)(param_1 + 0x5c) == *(int *)(param_2 + 0x5c))))) {
    return CONCAT31((int3)((uint)*(int *)(param_1 + 0x60) >> 8),
                    *(int *)(param_1 + 0x60) == *(int *)(param_2 + 0x60));
  }
  return 0;
}



// FUNCTION 1480d7fe2 FUN_1480d7fe2 body=126 status=ok
// SIG undefined FUN_1480d7fe2(void)

undefined8 FUN_1480d7fe2(longlong param_1,longlong param_2)

{
  int iVar1;
  ushort uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == *(int *)(param_2 + 0x30)) {
    if (1 < iVar1) {
      lVar4 = 0;
      while( true ) {
        uVar5 = *(ushort *)(*(longlong *)(param_1 + 0x28) + lVar4);
        uVar6 = (ulonglong)uVar5;
        uVar2 = *(ushort *)(*(longlong *)(param_2 + 0x28) + lVar4);
        if (uVar5 != uVar2) break;
        if (uVar5 == 0) goto LAB_1480d8052;
LAB_1480d801c:
        lVar4 = lVar4 + 2;
      }
      if ((uVar2 | uVar5) < 0x80) {
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        uVar3 = (ulonglong)uVar2;
        uVar2 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
        if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar3]) goto LAB_1480d801c;
      }
      if (uVar5 != uVar2) {
        return 0;
      }
    }
  }
  else if (*(int *)(param_2 + 0x30) + iVar1 != 1) {
    return 0;
  }
LAB_1480d8052:
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x48) >> 8),
                  *(longlong *)(param_1 + 0x48) == *(longlong *)(param_2 + 0x48));
}



// FUNCTION 1480d808a FUN_1480d808a body=909 status=ok
// SIG undefined FUN_1480d808a(void)

void FUN_1480d808a(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_a8 [44];
  int local_7c;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 *local_68;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1446e0b6e();
  local_58 = 0xfcf57afa;
  uStack_54 = 0x50764283;
  uStack_50 = 0xb9a9e658;
  uStack_4c = 0xffa02d32;
  iVar3 = FUN_1448a256a();
  lVar7 = (longlong)*(int *)(param_1 + 0x78);
  if (lVar7 < 1) goto LAB_1480d82dd;
  local_78 = (undefined8 *)(param_1 + 0x70);
  plVar1 = (longlong *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x4c) == 0) {
    plVar9 = (longlong *)*local_78;
LAB_1480d80fc:
    plVar8 = plVar9 + lVar7 * 8;
    local_7c = iVar3;
    do {
      lVar7 = FUN_1480d8418(param_1);
      FUN_144a787a6(lVar7 + 0x38,plVar9 + 1);
      *(longlong *)(lVar7 + 0x48) = plVar9[3];
      if ((*(byte *)(plVar9 + 4) & 1) == 0) {
        *(ulonglong *)(lVar7 + 0x54) =
             (longlong)*(int *)((longlong)plVar9 + 0x2c) / (longlong)*(int *)(param_1 + 0x38) &
             0xffffffffU | (longlong)(int)plVar9[6] / (longlong)*(int *)(param_1 + 0x3c) << 0x20;
        uVar4 = *(undefined8 *)((longlong)plVar9 + 0x2c);
      }
      else {
        *(undefined8 *)(lVar7 + 0x54) = *(undefined8 *)((longlong)plVar9 + 0x24);
        uVar4 = CONCAT44(*(int *)(param_1 + 0x3c) * (int)plVar9[5],
                         *(int *)(param_1 + 0x38) * *(int *)((longlong)plVar9 + 0x24));
      }
      *(undefined8 *)(lVar7 + 0x5c) = uVar4;
      if (*plVar9 != 0) {
        FUN_1400021e4(plVar9,&local_68);
        puVar5 = local_68;
        if ((local_60 - 2U < 0x7fffffff) && ((undefined8 **)(lVar7 + 0x28) != &local_68)) {
          lVar6 = (longlong)local_60;
          *(int *)(lVar7 + 0x30) = local_60;
          FUN_1446dd670((undefined8 **)(lVar7 + 0x28),local_60,*(undefined4 *)(lVar7 + 0x34));
          memcpy(*(void **)(lVar7 + 0x28),puVar5,lVar6 * 2);
        }
        if (local_68 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      if (plVar9[7] != 0) {
        uVar4 = FUN_144b00ba4();
        FUN_14010318a(uVar4,&local_68,0);
        if ((undefined8 **)(lVar7 + 0x70) == &local_68) {
          if (local_68 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(lVar7 + 0x70) != 0) {
            FUN_1400020a8();
          }
          *(undefined8 **)(lVar7 + 0x70) = local_68;
          local_68 = (undefined8 *)0x0;
          *(int *)(lVar7 + 0x78) = local_60;
          *(undefined4 *)(lVar7 + 0x7c) = local_5c;
        }
      }
      if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar7);
      }
      iVar3 = *(int *)(param_1 + 0x48);
      *(uint *)(param_1 + 0x48) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x4c) < iVar3 + 1U) {
        FUN_145f9edfe(plVar1,iVar3);
      }
      *(longlong *)(*plVar1 + (longlong)iVar3 * 8) = lVar7;
      if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar7);
      }
      plVar9 = plVar9 + 8;
      iVar3 = local_7c;
    } while (plVar9 != plVar8);
  }
  else {
    FUN_14810bd72(plVar1);
    lVar7 = (longlong)*(int *)(param_1 + 0x78);
    plVar9 = *(longlong **)(param_1 + 0x70);
    if (lVar7 != 0) goto LAB_1480d80fc;
  }
  FUN_145c08045();
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_14810bda2();
  }
LAB_1480d82dd:
  if (iVar3 < 0x48) {
    puVar5 = (undefined8 *)(param_1 + 0x88);
    iVar3 = 0;
    lVar7 = 0;
    do {
      *(int *)(*(longlong *)(param_1 + 0x50) + lVar7) = iVar3;
      lVar6 = *(longlong *)(param_1 + 0x50);
      *(undefined8 *)(lVar6 + 0x18 + lVar7) = puVar5[2];
      uVar4 = puVar5[1];
      puVar2 = (undefined8 *)(lVar6 + 8 + lVar7);
      *puVar2 = *puVar5;
      puVar2[1] = uVar4;
      lVar6 = *(longlong *)(param_1 + 0x50);
      *(undefined8 *)(lVar6 + 0x30 + lVar7) = puVar5[0x17];
      uVar4 = puVar5[0x16];
      puVar2 = (undefined8 *)(lVar6 + 0x20 + lVar7);
      *puVar2 = puVar5[0x15];
      puVar2[1] = uVar4;
      *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x38 + lVar7) =
           *(undefined4 *)(param_1 + 0x1d8);
      *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x3c + lVar7) =
           *(undefined4 *)(param_1 + 0x1dc);
      *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x40 + lVar7) =
           *(undefined4 *)(param_1 + 0x1e0);
      *(byte *)(*(longlong *)(param_1 + 0x50) + 0x44 + lVar7) = *(byte *)(param_1 + 0x1e4) & 1;
      *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x48 + lVar7) =
           *(undefined4 *)(param_1 + 0x1e8);
      lVar7 = lVar7 + 0x50;
      puVar5 = puVar5 + 3;
      iVar3 = iVar3 + 1;
    } while (lVar7 != 0x230);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x80);
  }
  local_68 = &local_70;
  local_70 = 0;
  FUN_14810bdd2(param_1 + 0x40);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480d8418 FUN_1480d8418 body=148 status=ok
// SIG undefined FUN_1480d8418(void)

undefined8 FUN_1480d8418(undefined8 param_1)

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
  uVar1 = FUN_145a78eb8();
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



// FUNCTION 1480d84ae FUN_1480d84ae body=184 status=ok
// SIG undefined FUN_1480d84ae(void)

void FUN_1480d84ae(undefined8 param_1,undefined4 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14012e468(&local_38,0x10,1,0);
  uVar1 = (ulonglong)local_28;
  if ((-1 < (int)local_28) && ((int)local_28 < local_30)) {
    do {
      FUN_14080aaf6(param_1,*(undefined8 *)(local_38 + (uVar1 & 0xffffffff) * 8),param_2,1);
      uVar1 = (longlong)(int)local_28;
      do {
        uVar2 = uVar1;
        uVar1 = uVar2 + 1;
        local_28 = (uint)uVar1;
        if ((longlong)local_30 <= (longlong)uVar1) break;
      } while (*(longlong *)(local_38 + uVar1 * 8) == 0);
    } while ((-2 < (longlong)uVar2) && ((int)local_28 < local_30));
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d8568 FUN_1480d8568 body=152 status=ok
// SIG undefined FUN_1480d8568(void)

longlong FUN_1480d8568(longlong param_1,longlong param_2)

{
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140ac5dca(local_40,0,param_2,&DAT_14cb3aff8);
  if (local_40 != (longlong *)(param_1 + 0x18)) {
    FUN_14034a3cc((longlong *)(param_1 + 0x18),local_40);
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (param_1 + 8 != param_2) {
    FUN_14034a368(param_1 + 8,param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d8601 FUN_1480d8601 body=399 status=ok
// SIG undefined FUN_1480d8601(void)

ulonglong FUN_1480d8601(uint *param_1,ulonglong param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  
  uVar7 = *param_1;
  uVar4 = (ulonglong)uVar7;
  if ((uVar7 != 2) && ((int)(4 - (uint)(uVar7 == 0)) <= *(int *)(param_2 + 0x108))) {
    if ((uVar7 != 0) && ((char)param_1[0xe] == '\x01')) {
      uVar4 = *(ulonglong *)(param_2 + 0x100);
      if (*(ulonglong *)(param_2 + 0x100) == 0) {
        uVar4 = param_2;
      }
      uVar1 = param_1[8];
      iVar2 = uVar1 - 1;
      if (uVar1 == 0) {
        iVar2 = 0;
      }
      if ((*(int *)(uVar4 + 0x18) == iVar2) &&
         ((uVar1 < 2 ||
          (iVar2 = wcsncmp(*(wchar_t **)(uVar4 + 0x10),*(wchar_t **)(param_1 + 6),(longlong)iVar2),
          iVar2 == 0)))) {
        iVar2 = param_1[0xc] - 1;
        if (param_1[0xc] == 0) {
          iVar2 = 0;
        }
        *(undefined8 *)(uVar4 + 0x10) = *(undefined8 *)(param_1 + 10);
        *(int *)(uVar4 + 0x18) = iVar2;
      }
    }
    iVar2 = -(uint)(uVar7 == 0);
    if ((char)param_1[0x1c] != '\0') {
      uVar4 = *(ulonglong *)(param_2 + 0x100);
      if (*(ulonglong *)(param_2 + 0x100) == 0) {
        uVar4 = param_2;
      }
      uVar5 = (ulonglong)(uint)((iVar2 + 2) * 0x10);
      uVar7 = param_1[0x16];
      iVar3 = uVar7 - 1;
      if (uVar7 == 0) {
        iVar3 = 0;
      }
      if ((*(int *)(uVar4 + 8 + uVar5) == iVar3) &&
         ((puVar9 = (undefined8 *)(uVar4 + uVar5), uVar7 < 2 ||
          (iVar3 = wcsncmp((wchar_t *)*puVar9,*(wchar_t **)(param_1 + 0x14),(longlong)iVar3),
          iVar3 == 0)))) {
        iVar3 = param_1[0x1a] - 1;
        if (param_1[0x1a] == 0) {
          iVar3 = 0;
        }
        *puVar9 = *(undefined8 *)(param_1 + 0x18);
        *(int *)(puVar9 + 1) = iVar3;
      }
    }
    uVar4 = *(ulonglong *)(param_2 + 0x100);
    if (*(ulonglong *)(param_2 + 0x100) == 0) {
      uVar4 = param_2;
    }
    uVar5 = (ulonglong)(uint)((iVar2 + 2) * 0x10);
    iVar3 = DAT_14cb3afc0 - 1;
    if (DAT_14cb3afc0 == 0) {
      iVar3 = 0;
    }
    iVar6 = *(int *)(uVar4 + 8 + uVar5);
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
    iVar8 = 0;
    if (0 < iVar6) {
      iVar8 = iVar6;
    }
    uVar7 = 0xffffffff;
    if (iVar3 == iVar8) {
      if ((DAT_14cb3afc0 < 2) || (iVar6 < 1)) {
        uVar7 = iVar2 + 3;
      }
      else {
        iVar3 = FUN_144a54874(DAT_14cb3afb8,*(undefined8 *)(uVar4 + uVar5),iVar3);
        uVar4 = (ulonglong)(uint)-iVar3;
        uVar7 = -(uint)(iVar3 != 0) | iVar2 + 3U;
      }
    }
    *param_3 = uVar7;
  }
  return uVar4;
}



// FUNCTION 1480d8790 FUN_1480d8790 body=111 status=ok
// SIG undefined FUN_1480d8790(void)

void FUN_1480d8790(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  if ((*(char *)(param_1 + 0x38) == '\x01') && (2 < *(int *)(param_2 + 0x108))) {
    lVar3 = *(longlong *)(param_2 + 0x100);
    if (*(longlong *)(param_2 + 0x100) == 0) {
      lVar3 = param_2;
    }
    uVar1 = *(uint *)(param_1 + 0x20);
    iVar2 = uVar1 - 1;
    if (uVar1 == 0) {
      iVar2 = 0;
    }
    if (*(int *)(lVar3 + 0x18) == iVar2) {
      if ((1 < uVar1) &&
         (iVar2 = wcsncmp(*(wchar_t **)(lVar3 + 0x10),*(wchar_t **)(param_1 + 0x18),(longlong)iVar2)
         , iVar2 != 0)) {
        return;
      }
      iVar2 = *(int *)(param_1 + 0x30) + -1;
      if (*(int *)(param_1 + 0x30) == 0) {
        iVar2 = 0;
      }
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(param_1 + 0x28);
      *(int *)(lVar3 + 0x18) = iVar2;
    }
  }
  return;
}



// FUNCTION 1480d87ff FUN_1480d87ff body=61 status=ok
// SIG undefined FUN_1480d87ff(void)

bool FUN_1480d87ff(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  uVar1 = *(uint *)(param_2 + 1);
  bVar3 = false;
  iVar2 = uVar1 - 1;
  if (uVar1 == 0) {
    iVar2 = 0;
  }
  if (*(int *)(param_1 + 1) == iVar2) {
    if (uVar1 < 2) {
      bVar3 = true;
    }
    else {
      iVar2 = FUN_144a54874(*param_1,*param_2,(longlong)iVar2);
      bVar3 = iVar2 == 0;
    }
  }
  return bVar3;
}



// FUNCTION 1480d883c FUN_1480d883c body=252 status=ok
// SIG undefined FUN_1480d883c(void)

void FUN_1480d883c(longlong param_1,int *param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  if (*(int *)(param_3 + 0x108) <= *param_2) {
    return;
  }
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    lVar4 = *(longlong *)(param_3 + 0x100);
    if (*(longlong *)(param_3 + 0x100) == 0) {
      lVar4 = param_3;
    }
    lVar2 = (longlong)*param_2 * 0x10;
    uVar1 = *(uint *)(param_1 + 0x90);
    iVar3 = uVar1 - 1;
    if (uVar1 == 0) {
      iVar3 = 0;
    }
    if ((*(int *)(lVar4 + 8 + lVar2) == iVar3) &&
       ((puVar5 = (undefined8 *)(lVar4 + lVar2), uVar1 < 2 ||
        (iVar3 = wcsncmp((wchar_t *)*puVar5,*(wchar_t **)(param_1 + 0x88),(longlong)iVar3),
        iVar3 == 0)))) {
      iVar3 = *(int *)(param_1 + 0xa0) + -1;
      if (*(int *)(param_1 + 0xa0) == 0) {
        iVar3 = 0;
      }
      *puVar5 = *(undefined8 *)(param_1 + 0x98);
      *(int *)(puVar5 + 1) = iVar3;
    }
  }
  if (*(char *)(param_1 + 0x38) == '\x01') {
    lVar4 = *(longlong *)(param_3 + 0x100);
    if (*(longlong *)(param_3 + 0x100) == 0) {
      lVar4 = param_3;
    }
    uVar1 = *(uint *)(param_1 + 0x20);
    iVar3 = uVar1 - 1;
    if (uVar1 == 0) {
      iVar3 = 0;
    }
    if (*(int *)(lVar4 + 8 + (longlong)*param_2 * 0x10) == iVar3) {
      puVar5 = (undefined8 *)(lVar4 + (longlong)*param_2 * 0x10);
      if ((1 < uVar1) &&
         (iVar3 = wcsncmp((wchar_t *)*puVar5,*(wchar_t **)(param_1 + 0x18),(longlong)iVar3),
         iVar3 != 0)) {
        return;
      }
      iVar3 = *(int *)(param_1 + 0x30) + -1;
      if (*(int *)(param_1 + 0x30) == 0) {
        iVar3 = 0;
      }
      *puVar5 = *(undefined8 *)(param_1 + 0x28);
      *(int *)(puVar5 + 1) = iVar3;
    }
  }
  return;
}



// FUNCTION 1480d894c FUN_1480d894c body=38 status=ok
// SIG undefined FUN_1480d894c(void)

undefined8 FUN_1480d894c(undefined8 param_1,int param_2)

{
  FUN_14810c008();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480d8988 FUN_1480d8988 body=55 status=ok
// SIG undefined FUN_1480d8988(void)

void FUN_1480d8988(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb39298 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb39298 = FUN_140002ddd(FUN_14646b1bd,uVar1,L"MovieSceneNiagaraSystemTrackImplementation")
    ;
  }
  return;
}



// FUNCTION 1480d89c0 FUN_1480d89c0 body=55 status=ok
// SIG undefined FUN_1480d89c0(void)

void FUN_1480d89c0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb392c8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb392c8 =
         FUN_140002ddd(FUN_14646b281,uVar1,L"MovieSceneNiagaraBoolParameterSectionTemplate");
  }
  return;
}



// FUNCTION 1480d89f8 FUN_1480d89f8 body=48 status=ok
// SIG undefined FUN_1480d89f8(void)

longlong FUN_1480d89f8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x128;
  FUN_140d1f616(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480d8a30 FUN_1480d8a30 body=55 status=ok
// SIG undefined FUN_1480d8a30(void)

void FUN_1480d8a30(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb392f8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb392f8 =
         FUN_140002ddd(FUN_14646b3a9,uVar1,L"MovieSceneNiagaraColorParameterSectionTemplate");
  }
  return;
}



// FUNCTION 1480d8a68 FUN_1480d8a68 body=48 status=ok
// SIG undefined FUN_1480d8a68(void)

longlong FUN_1480d8a68(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x128;
  FUN_140d1f616(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480d8aa0 FUN_1480d8aa0 body=55 status=ok
// SIG undefined FUN_1480d8aa0(void)

void FUN_1480d8aa0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb39328 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb39328 =
         FUN_140002ddd(FUN_14646b46f,uVar1,L"MovieSceneNiagaraFloatParameterSectionTemplate");
  }
  return;
}



// FUNCTION 1480d8ad8 FUN_1480d8ad8 body=48 status=ok
// SIG undefined FUN_1480d8ad8(void)

longlong FUN_1480d8ad8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x128;
  FUN_140d1f616(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480d8b10 FUN_1480d8b10 body=55 status=ok
// SIG undefined FUN_1480d8b10(void)

void FUN_1480d8b10(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb39358 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb39358 =
         FUN_140002ddd(FUN_14646b535,uVar1,L"MovieSceneNiagaraIntegerParameterSectionTemplate");
  }
  return;
}



// FUNCTION 1480d8b48 FUN_1480d8b48 body=48 status=ok
// SIG undefined FUN_1480d8b48(void)

longlong FUN_1480d8b48(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x128;
  FUN_140d1f616(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480d8b80 FUN_1480d8b80 body=57 status=ok
// SIG undefined FUN_1480d8b80(void)

undefined8 * FUN_1480d8b80(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad909b0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480d8bba FUN_1480d8bba body=55 status=ok
// SIG undefined FUN_1480d8bba(void)

void FUN_1480d8bba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb39388 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb39388 = FUN_140002ddd(FUN_14646b2b0,uVar1,L"MovieSceneNiagaraParameterSectionTemplate");
  }
  return;
}



// FUNCTION 1480d8bf6 FUN_1480d8bf6 body=55 status=ok
// SIG undefined FUN_1480d8bf6(void)

void FUN_1480d8bf6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb393b8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb393b8 =
         FUN_140002ddd(FUN_14646b6c5,uVar1,L"MovieSceneNiagaraVectorParameterSectionTemplate");
  }
  return;
}



// FUNCTION 1480d8c2e FUN_1480d8c2e body=48 status=ok
// SIG undefined FUN_1480d8c2e(void)

longlong FUN_1480d8c2e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x128;
  FUN_140d1f616(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480d8cd2 FUN_1480d8cd2 body=59 status=ok
// SIG undefined FUN_1480d8cd2(void)

undefined8 FUN_1480d8cd2(longlong *param_1)

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



// FUNCTION 1480d8db8 FUN_1480d8db8 body=29 status=ok
// SIG undefined FUN_1480d8db8(void)

undefined8 FUN_1480d8db8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480d8dd6 FUN_1480d8dd6 body=96 status=ok
// SIG undefined FUN_1480d8dd6(void)

void FUN_1480d8dd6(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  float *pfVar1;
  undefined1 auStack_48 [40];
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pfVar1 = (float *)*param_3;
  local_20 = 0.0;
  (**(code **)(*(longlong *)*param_1 + 0x248))((longlong *)*param_1,param_1[1],&local_20);
  *pfVar1 = (float)local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d8e62 FUN_1480d8e62 body=29 status=ok
// SIG undefined FUN_1480d8e62(void)

undefined8 FUN_1480d8e62(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480d8e80 FUN_1480d8e80 body=112 status=ok
// SIG undefined FUN_1480d8e80(void)

void FUN_1480d8e80(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  float *pfVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pfVar1 = (float *)*param_3;
  local_28 = (undefined4)DAT_14c8463f0;
  uStack_24 = DAT_14c8463f0._4_4_;
  uStack_20 = (undefined4)DAT_14c8463f8;
  uStack_1c = DAT_14c8463f8._4_4_;
  (**(code **)(*(longlong *)*param_1 + 0x248))((longlong *)*param_1,param_1[1],&local_28);
  *pfVar1 = (float)(double)CONCAT44(uStack_24,local_28);
  pfVar1[1] = (float)(double)CONCAT44(uStack_1c,uStack_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d8f1c FUN_1480d8f1c body=29 status=ok
// SIG undefined FUN_1480d8f1c(void)

undefined8 FUN_1480d8f1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480d8f3a FUN_1480d8f3a body=133 status=ok
// SIG undefined FUN_1480d8f3a(void)

void FUN_1480d8f3a(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  float *pfVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pfVar1 = (float *)*param_3;
  local_28 = DAT_14c8464f0;
  local_38 = (undefined4)DAT_14c8464e0;
  uStack_34 = DAT_14c8464e0._4_4_;
  uStack_30 = (undefined4)DAT_14c8464e8;
  uStack_2c = DAT_14c8464e8._4_4_;
  (**(code **)(*(longlong *)*param_1 + 0x248))((longlong *)*param_1,param_1[1],&local_38);
  *pfVar1 = (float)(double)CONCAT44(uStack_34,local_38);
  pfVar1[1] = (float)(double)CONCAT44(uStack_2c,uStack_30);
  pfVar1[2] = (float)local_28;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d8fea FUN_1480d8fea body=29 status=ok
// SIG undefined FUN_1480d8fea(void)

undefined8 FUN_1480d8fea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480d9008 FUN_1480d9008 body=132 status=ok
// SIG undefined FUN_1480d9008(void)

void FUN_1480d9008(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  float *pfVar1;
  undefined1 auStack_58 [32];
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pfVar1 = (float *)*param_3;
  local_28 = 0.0;
  dStack_20 = 0.0;
  local_38 = 0.0;
  dStack_30 = 0.0;
  (**(code **)(*(longlong *)*param_1 + 0x248))((longlong *)*param_1,param_1[1],&local_38);
  *pfVar1 = (float)local_38;
  pfVar1[1] = (float)dStack_30;
  pfVar1[2] = (float)local_28;
  pfVar1[3] = (float)dStack_20;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d90b8 FUN_1480d90b8 body=29 status=ok
// SIG undefined FUN_1480d90b8(void)

undefined8 FUN_1480d90b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480d90d6 FUN_1480d90d6 body=155 status=ok
// SIG undefined FUN_1480d90d6(void)

void FUN_1480d90d6(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar3 = (undefined4 *)*param_3;
  local_1c = 0xff000000;
  (**(code **)(*(longlong *)*param_1 + 0x248))((longlong *)*param_1,param_1[1],&local_1c);
  uVar1 = (&DAT_14c758c60)[local_1c._1_1_];
  uVar2 = (&DAT_14c758c60)[(byte)local_1c];
  *puVar3 = (&DAT_14c758c60)[local_1c._2_1_];
  puVar3[1] = uVar1;
  puVar3[2] = uVar2;
  puVar3[3] = (float)(local_1c >> 0x18) * 0.003921569;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d919c FUN_1480d919c body=29 status=ok
// SIG undefined FUN_1480d919c(void)

undefined8 FUN_1480d919c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480d91ba FUN_1480d91ba body=97 status=ok
// SIG undefined FUN_1480d91ba(void)

void FUN_1480d91ba(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined4 *)*param_3;
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0x3f800000;
  (**(code **)(*(longlong *)*param_1 + 0x248))((longlong *)*param_1,param_1[1],&local_28);
  *puVar1 = local_28;
  puVar1[1] = uStack_24;
  puVar1[2] = uStack_20;
  puVar1[3] = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d9246 FUN_1480d9246 body=29 status=ok
// SIG undefined FUN_1480d9246(void)

undefined8 FUN_1480d9246(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480d9264 FUN_1480d9264 body=155 status=ok
// SIG undefined FUN_1480d9264(void)

void FUN_1480d9264(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)*param_3;
  local_28 = DAT_14c8464f0;
  local_38 = (undefined4)DAT_14c8464e0;
  uStack_34 = DAT_14c8464e0._4_4_;
  uStack_30 = (undefined4)DAT_14c8464e8;
  uStack_2c = DAT_14c8464e8._4_4_;
  (**(code **)(*(longlong *)*param_1 + 0x248))((longlong *)*param_1,param_1[1],&local_38);
  local_68 = local_38;
  uStack_64 = uStack_34;
  uStack_60 = uStack_30;
  uStack_5c = uStack_2c;
  local_58 = local_28;
  FUN_144b38f74(param_2,&local_48);
  *(undefined4 *)(puVar1 + 1) = local_40;
  *puVar1 = local_48;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d932a FUN_1480d932a body=29 status=ok
// SIG undefined FUN_1480d932a(void)

undefined8 FUN_1480d932a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480d9348 FUN_1480d9348 body=89 status=ok
// SIG undefined FUN_1480d9348(void)

void FUN_1480d9348(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined1 auStack_48 [47];
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (uint *)*param_3;
  local_19 = 0;
  (**(code **)(*(longlong *)*param_1 + 0x248))((longlong *)*param_1,param_1[1],&local_19);
  *puVar1 = (uint)local_19;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d93cc FUN_1480d93cc body=29 status=ok
// SIG undefined FUN_1480d93cc(void)

undefined8 FUN_1480d93cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480d93ea FUN_1480d93ea body=91 status=ok
// SIG undefined FUN_1480d93ea(void)

void FUN_1480d93ea(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined1 auStack_48 [46];
  ushort local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (uint *)*param_3;
  local_1a = 0;
  (**(code **)(*(longlong *)*param_1 + 0x248))((longlong *)*param_1,param_1[1],&local_1a);
  *puVar1 = (uint)local_1a;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d9470 FUN_1480d9470 body=29 status=ok
// SIG undefined FUN_1480d9470(void)

undefined8 FUN_1480d9470(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480d948e FUN_1480d948e body=91 status=ok
// SIG undefined FUN_1480d948e(void)

void FUN_1480d948e(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined4 *)*param_3;
  local_1c = 0;
  (**(code **)(*(longlong *)*param_1 + 0x248))((longlong *)*param_1,param_1[1],&local_1c);
  *puVar1 = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d9514 FUN_1480d9514 body=29 status=ok
// SIG undefined FUN_1480d9514(void)

undefined8 FUN_1480d9514(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480d9532 FUN_1480d9532 body=91 status=ok
// SIG undefined FUN_1480d9532(void)

void FUN_1480d9532(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined1 auStack_48 [46];
  ushort local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (uint *)*param_3;
  local_1a = 0;
  (**(code **)(*(longlong *)*param_1 + 0x248))((longlong *)*param_1,param_1[1],&local_1a);
  *puVar1 = (uint)local_1a;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d95b8 FUN_1480d95b8 body=29 status=ok
// SIG undefined FUN_1480d95b8(void)

undefined8 FUN_1480d95b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480d95d6 FUN_1480d95d6 body=91 status=ok
// SIG undefined FUN_1480d95d6(void)

void FUN_1480d95d6(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined4 *)*param_3;
  local_1c = 0;
  (**(code **)(*(longlong *)*param_1 + 0x248))((longlong *)*param_1,param_1[1],&local_1c);
  *puVar1 = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d965c FUN_1480d965c body=29 status=ok
// SIG undefined FUN_1480d965c(void)

undefined8 FUN_1480d965c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480d967a FUN_1480d967a body=91 status=ok
// SIG undefined FUN_1480d967a(void)

void FUN_1480d967a(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined1 auStack_48 [47];
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  piVar1 = (int *)*param_3;
  local_19 = 0;
  (**(code **)(*(longlong *)*param_1 + 0x248))((longlong *)*param_1,param_1[1],&local_19);
  *piVar1 = -(uint)local_19;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d9700 FUN_1480d9700 body=29 status=ok
// SIG undefined FUN_1480d9700(void)

undefined8 FUN_1480d9700(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480d9758 FUN_1480d9758 body=29 status=ok
// SIG undefined FUN_1480d9758(void)

undefined8 FUN_1480d9758(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480d97b0 FUN_1480d97b0 body=29 status=ok
// SIG undefined FUN_1480d97b0(void)

undefined8 FUN_1480d97b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480d9812 FUN_1480d9812 body=29 status=ok
// SIG undefined FUN_1480d9812(void)

undefined8 FUN_1480d9812(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480d987e FUN_1480d987e body=29 status=ok
// SIG undefined FUN_1480d987e(void)

undefined8 FUN_1480d987e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480d98f4 FUN_1480d98f4 body=29 status=ok
// SIG undefined FUN_1480d98f4(void)

undefined8 FUN_1480d98f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480d99a4 FUN_1480d99a4 body=29 status=ok
// SIG undefined FUN_1480d99a4(void)

undefined8 FUN_1480d99a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480d99fa FUN_1480d99fa body=29 status=ok
// SIG undefined FUN_1480d99fa(void)

undefined8 FUN_1480d99fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480d9a18 FUN_1480d9a18 body=104 status=ok
// SIG undefined FUN_1480d9a18(void)

void FUN_1480d9a18(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined4 *)*param_1;
  local_38 = *(undefined8 *)(puVar2 + 4);
  local_48 = *puVar2;
  uStack_44 = puVar2[1];
  uStack_40 = puVar2[2];
  uStack_3c = puVar2[3];
  FUN_144b38f74(param_2,&local_24);
  *(undefined4 *)(puVar1 + 1) = local_1c;
  *puVar1 = local_24;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480d9aac FUN_1480d9aac body=29 status=ok
// SIG undefined FUN_1480d9aac(void)

undefined8 FUN_1480d9aac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480d9b00 FUN_1480d9b00 body=29 status=ok
// SIG undefined FUN_1480d9b00(void)

undefined8 FUN_1480d9b00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480d9b54 FUN_1480d9b54 body=29 status=ok
// SIG undefined FUN_1480d9b54(void)

undefined8 FUN_1480d9b54(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480d9ba8 FUN_1480d9ba8 body=29 status=ok
// SIG undefined FUN_1480d9ba8(void)

undefined8 FUN_1480d9ba8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480d9bfc FUN_1480d9bfc body=29 status=ok
// SIG undefined FUN_1480d9bfc(void)

undefined8 FUN_1480d9bfc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480d9c50 FUN_1480d9c50 body=29 status=ok
// SIG undefined FUN_1480d9c50(void)

undefined8 FUN_1480d9c50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480d9cb8 FUN_1480d9cb8 body=29 status=ok
// SIG undefined FUN_1480d9cb8(void)

undefined8 FUN_1480d9cb8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480d9cdc FUN_1480d9cdc body=1300 status=ok
// SIG undefined FUN_1480d9cdc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1480d9cdc(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  void *_Dst;
  uint uVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  bool bVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined8 uVar23;
  double dVar24;
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar7 = *param_3;
    lVar10 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x50);
    }
    iVar5 = *(int *)(lVar10 + (ulonglong)
                              (*(int *)(param_1 + 0x58) - 1U &
                              (int)lVar7 + (int)((ulonglong)lVar7 >> 0x20) * 0x17) * 4);
    if (iVar5 != -1) {
      lVar10 = *(longlong *)(param_1 + 0x10);
      do {
        lVar1 = lVar10 + (longlong)iVar5 * 0x140;
        if (*(longlong *)(lVar10 + (longlong)iVar5 * 0x140) == lVar7) {
          bVar13 = lVar1 == 0;
          puVar12 = (undefined8 *)(lVar1 + 0x10);
          uVar9 = (undefined4)
                  CONCAT71((int7)((ulonglong)lVar10 >> 8),puVar12 == (undefined8 *)0x0 || bVar13);
          if (puVar12 != (undefined8 *)0x0 && !bVar13) {
            if (puVar12 == param_2) {
              if ((*(byte *)(lVar1 + 0x70) & 1) != 0) goto LAB_1480d9e40;
            }
            else {
              if (*(char *)(param_2 + 0xc) == '\x01') {
                puVar11 = param_2;
                for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
                  *puVar12 = *puVar11;
                  puVar11 = puVar11 + 1;
                  puVar12 = puVar12 + 1;
                }
                *(undefined1 *)(lVar1 + 0x70) = 1;
                uVar9 = 0;
LAB_1480d9e40:
                auVar2 = *(undefined1 (*) [16])(lVar1 + 0x50);
                auVar3 = *(undefined1 (*) [16])(lVar1 + 0x60);
                lVar10 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_));
                auVar25._8_4_ = (int)lVar10;
                auVar25._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_));
                auVar25._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
                iVar5 = movmskpd((int)CONCAT71((int7)((ulonglong)lVar7 >> 8),bVar13),auVar25);
                lVar7 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar3._8_8_));
                auVar28._8_4_ = (int)lVar7;
                auVar28._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar3._0_8_));
                auVar28._12_4_ = (int)((ulonglong)lVar7 >> 0x20);
                uVar8 = movmskpd(uVar9,auVar28);
                dVar14 = DAT_14c8464c0;
                dVar15 = DAT_14c8464c8;
                dVar18 = DAT_14c846490;
                dVar19 = DAT_14c846498;
                dVar20 = DAT_14c846480;
                dVar21 = DAT_14c846488;
                dVar24 = DAT_14c8464a0;
                dVar26 = DAT_14c8464a8;
                dVar16 = DAT_14c8464d0;
                uVar17 = uRam000000014c8464d8;
                dVar22 = DAT_14c8464b0;
                uVar23 = DAT_14c8464b8;
                if ((uVar8 & 0x3fffffff) != 0 || iVar5 != 0) {
                  auVar28 = divpd(_DAT_149934d80,auVar2);
                  auVar25 = divpd(ZEXT816(0x3ff0000000000000),auVar3);
                  dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) &
                                   auVar28._0_8_);
                  dVar15 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) &
                                   auVar28._8_8_);
                  dVar16 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._0_8_)) &
                                   auVar25._0_8_);
                  dVar18 = *(double *)(lVar1 + 0x20) * -1.0;
                  dVar19 = *(double *)(lVar1 + 0x28) * 1.0;
                  dVar20 = -*(double *)(lVar1 + 0x10);
                  dVar21 = -*(double *)(lVar1 + 0x18);
                  dVar24 = *(double *)(lVar1 + 0x30) * dVar14;
                  dVar26 = *(double *)(lVar1 + 0x38) * dVar15;
                  dVar22 = *(double *)(lVar1 + 0x40) * dVar16;
                  dVar27 = dVar26 * dVar20 - dVar21 * dVar24;
                  dVar29 = dVar22 * dVar21 - dVar18 * dVar26;
                  dVar30 = dVar24 * dVar18 - dVar20 * dVar22;
                  dVar29 = dVar29 + dVar29;
                  dVar30 = dVar30 + dVar30;
                  dVar27 = dVar27 + dVar27;
                  dVar24 = 0.0 - ((dVar27 * dVar21 - dVar30 * dVar18) + dVar19 * dVar29 + dVar24);
                  dVar26 = 0.0 - (dVar27 * *(double *)(lVar1 + 0x10) + dVar18 * dVar29 +
                                 dVar19 * dVar30 + dVar26);
                  uVar17 = 0;
                  dVar22 = 0.0 - (dVar19 * dVar27 + dVar22 + (dVar30 * dVar20 - dVar29 * dVar21));
                  uVar23 = 0;
                }
                *(double *)(lVar1 + 0x80) = dVar20;
                *(double *)(lVar1 + 0x88) = dVar21;
                *(double *)(lVar1 + 0x90) = dVar18;
                *(double *)(lVar1 + 0x98) = dVar19;
                *(double *)(lVar1 + 0xa0) = dVar24;
                *(double *)(lVar1 + 0xa8) = dVar26;
                *(double *)(lVar1 + 0xb0) = dVar22;
                *(undefined8 *)(lVar1 + 0xb8) = uVar23;
                *(double *)(lVar1 + 0xc0) = dVar14;
                *(double *)(lVar1 + 200) = dVar15;
                *(double *)(lVar1 + 0xd0) = dVar16;
                *(undefined8 *)(lVar1 + 0xd8) = uVar17;
                *(undefined1 *)(lVar1 + 0xe0) = 1;
LAB_1480da05e:
                if (0 < *(int *)(lVar1 + 0x120)) {
                  lVar7 = 0;
                  do {
                    lVar10 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x118) + lVar7 * 4);
                    if (lVar10 == -1) {
                      uVar9 = 0xffffffff;
                    }
                    else {
                      uVar9 = *(undefined4 *)(param_2[0xe] + lVar10 * 4);
                    }
                    *(undefined4 *)(*(longlong *)(lVar1 + 0x108) + lVar7 * 4) = uVar9;
                    lVar7 = lVar7 + 1;
                  } while (lVar7 < *(int *)(lVar1 + 0x120));
                }
                puVar12 = (undefined8 *)(lVar1 + 0xf0);
                iVar5 = *(int *)(lVar1 + 0x100);
                if (iVar5 != *(int *)(param_2 + 0x11)) {
                  FUN_14011fb0c(puVar12);
                  uVar8 = *(uint *)(param_2 + 0x11);
                  if (6 < uVar8 + 3) {
                    uVar6 = uVar8 + 3;
                    if (-1 < (int)uVar8) {
                      uVar6 = uVar8;
                    }
                    FUN_140661c88(puVar12,&DAT_14ca85100,L"NiagaraUObjectPropertyReader",4,
                                  (int)uVar6 >> 2,0x1c,0,0);
                  }
                  iVar5 = *(int *)(lVar1 + 0x100);
                }
                cVar4 = DAT_14ca85169;
                if (iVar5 != 0) {
                  uVar17 = *puVar12;
                  if (DAT_14ca85169 == '\0') {
                    FUN_14002049c(&DAT_14ca85100,1);
                  }
                  _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))
                                           (DAT_14ca83900,&DAT_14ca85100,uVar17,0,iVar5,1);
                  if (cVar4 == '\0') {
                    FUN_14002049c(&DAT_14ca85100,0);
                  }
                  memcpy(_Dst,(void *)param_2[0x10],(longlong)*(int *)(param_2 + 0x11));
                  uVar17 = *puVar12;
                  if (DAT_14ca85169 == '\0') {
                    FUN_14002049c(&DAT_14ca85100,1);
                    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,&DAT_14ca85100,uVar17);
                    FUN_14002049c(&DAT_14ca85100,0);
                  }
                  else {
                    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,&DAT_14ca85100,uVar17);
                  }
                }
                break;
              }
              if (*(char *)(lVar1 + 0x70) == '\x01') {
                *(undefined1 *)(lVar1 + 0x70) = 0;
              }
            }
            if (*(char *)(lVar1 + 0xe0) == '\x01') {
              *(undefined1 *)(lVar1 + 0xe0) = 0;
            }
            goto LAB_1480da05e;
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x130);
      } while (iVar5 != -1);
    }
  }
  FUN_1480da276(param_2);
  return;
}



// FUNCTION 1480da1f0 FUN_1480da1f0 body=86 status=ok
// SIG undefined FUN_1480da1f0(void)

void FUN_1480da1f0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  FUN_140038ae8(param_1 + 0xe0);
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    *(undefined1 *)(param_1 + 0xd0) = 0;
  }
  if (*(char *)(param_1 + 0x60) == '\x01') {
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  return;
}



// FUNCTION 1480da246 FUN_1480da246 body=48 status=ok
// SIG undefined FUN_1480da246(void)

void FUN_1480da246(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x140,0x10);
  }
  return;
}



// FUNCTION 1480da276 FUN_1480da276 body=55 status=ok
// SIG undefined FUN_1480da276(void)

void FUN_1480da276(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x60) == '\x01') {
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  return;
}



// FUNCTION 1480da2ae FUN_1480da2ae body=59 status=ok
// SIG undefined FUN_1480da2ae(void)

longlong FUN_1480da2ae(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1480da330(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x80 + *param_1;
  FUN_1480da2e9(lVar2);
  return lVar2;
}



// FUNCTION 1480da2e9 FUN_1480da2e9 body=70 status=ok
// SIG undefined FUN_1480da2e9(void)

void FUN_1480da2e9(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  uVar1 = FUN_144830b78(param_1 + 1,&DAT_14cb42160);
  *(undefined4 *)(param_1 + 1) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}



// FUNCTION 1480da330 FUN_1480da330 body=132 status=ok
// SIG undefined FUN_1480da330(void)

void FUN_1480da330(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 7,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 7)) {
      uVar5 = uVar3 >> 7 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x80,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1480da3b5 FUN_1480da3b5 body=72 status=ok
// SIG undefined FUN_1480da3b5(void)

void FUN_1480da3b5(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x60);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      if (plVar2[-7] != 0) {
        FUN_1400020a8();
      }
      plVar2 = plVar2 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1480da404 FUN_1480da404 body=77 status=ok
// SIG undefined FUN_1480da404(void)

void FUN_1480da404(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x108) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x108) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar3 = 0x50;
  do {
    FUN_1480da452(param_1 + lVar3);
    lVar3 = lVar3 + -0x28;
  } while (lVar3 != -0x28);
  return;
}



// FUNCTION 1480da452 FUN_1480da452 body=121 status=ok
// SIG undefined FUN_1480da452(void)

void FUN_1480da452(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  
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
    }
  }
  if (*param_1 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_1 + 8);
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



// FUNCTION 1480da4cb FUN_1480da4cb body=47 status=ok
// SIG undefined FUN_1480da4cb(void)

void FUN_1480da4cb(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x38);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1480da4fa FUN_1480da4fa body=38 status=ok
// SIG undefined FUN_1480da4fa(void)

undefined8 FUN_1480da4fa(undefined8 param_1,int param_2)

{
  FUN_1480da520();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480da520 FUN_1480da520 body=122 status=ok
// SIG undefined FUN_1480da520(void)

void FUN_1480da520(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14ad96650;
  if (param_1[7] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[7] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[6] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[6] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[3] != 0 && (param_1[3] & 1) == 0) {
    FUN_1400020a8();
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 1480da64e FUN_1480da64e body=59 status=ok
// SIG undefined FUN_1480da64e(void)

undefined8 FUN_1480da64e(longlong *param_1)

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



// FUNCTION 1480da6ee FUN_1480da6ee body=29 status=ok
// SIG undefined FUN_1480da6ee(void)

undefined8 FUN_1480da6ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480da70c FUN_1480da70c body=55 status=ok
// SIG undefined FUN_1480da70c(void)

void FUN_1480da70c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb39280 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb39280 = FUN_140002ddd(FUN_14646b127,uVar1,L"MovieSceneNiagaraSystemTrackTemplate");
  }
  return;
}



// FUNCTION 1480da7ea FUN_1480da7ea body=59 status=ok
// SIG undefined FUN_1480da7ea(void)

undefined8 FUN_1480da7ea(longlong *param_1)

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



// FUNCTION 1480da88c FUN_1480da88c body=29 status=ok
// SIG undefined FUN_1480da88c(void)

undefined8 FUN_1480da88c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480da8aa FUN_1480da8aa body=87 status=ok
// SIG undefined FUN_1480da8aa(void)

void FUN_1480da8aa(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_2 + 1) = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *param_2 = &PTR_FUN_14ad909b0;
  param_2[4] = 0;
  uVar1 = FUN_144830b78(param_2 + 5,&DAT_14cb42160);
  *(undefined4 *)(param_2 + 5) = uVar1;
  param_2[6] = 0;
  param_2[7] = 0;
  *param_2 = &PTR_FUN_14ad8f040;
  FUN_140aec500(param_2 + 8);
  return;
}



// FUNCTION 1480da926 FUN_1480da926 body=117 status=ok
// SIG undefined FUN_1480da926(void)

undefined8 FUN_1480da926(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
    do {
      *(undefined1 *)(param_2 + -0x38) = *(undefined1 *)(param_3 + -0x38);
      *(undefined8 *)(param_2 + -0x30) = *(undefined8 *)(param_3 + -0x30);
      *(undefined4 *)(param_2 + -0x28) = *(undefined4 *)(param_3 + -0x28);
      *(undefined8 *)(param_2 + -0x20) = *(undefined8 *)(param_3 + -0x20);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      FUN_1447a122a(param_2 + -0x10,param_3 + -0x10);
      FUN_14753b184(param_2,param_3);
      param_3 = param_3 + 0x148;
      param_2 = param_2 + 0x148;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1480da9c4 FUN_1480da9c4 body=59 status=ok
// SIG undefined FUN_1480da9c4(void)

undefined8 FUN_1480da9c4(longlong *param_1)

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



// FUNCTION 1480daa68 FUN_1480daa68 body=73 status=ok
// SIG undefined FUN_1480daa68(void)

void FUN_1480daa68(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x29) == '\x01') {
    *param_1 = &PTR_FUN_14ad8f040;
    FUN_140bb7e7c(param_1 + 8);
    *param_1 = &PTR_FUN_14ad909b0;
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x29) = 0;
  }
  return;
}



// FUNCTION 1480daade FUN_1480daade body=63 status=ok
// SIG undefined FUN_1480daade(void)

undefined1 FUN_1480daade(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1480dac06(param_2,param_3);
    param_3 = param_3 + 0x480;
    param_2 = param_2 + 0x480;
  }
  return 1;
}



// FUNCTION 1480dab46 FUN_1480dab46 body=59 status=ok
// SIG undefined FUN_1480dab46(void)

undefined8 FUN_1480dab46(longlong *param_1)

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



// FUNCTION 1480dab92 FUN_1480dab92 body=38 status=ok
// SIG undefined FUN_1480dab92(void)

void FUN_1480dab92(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x480) == '\x01') {
    FUN_1480d2872(param_2);
    *(undefined1 *)(param_2 + 0x480) = 0;
  }
  return;
}



// FUNCTION 1480dac06 FUN_1480dac06 body=136 status=ok
// SIG undefined FUN_1480dac06(void)

longlong FUN_1480dac06(longlong param_1,longlong param_2)

{
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  FUN_1447a122a(param_1 + 0x30,param_2 + 0x30);
  FUN_14753be88(param_1 + 0x40,param_2 + 0x40);
  FUN_14753be88(param_1 + 0x150,param_2 + 0x150);
  FUN_14753be88(param_1 + 0x260,param_2 + 0x260);
  FUN_14753be88(param_1 + 0x370,param_2 + 0x370);
  return param_1;
}



// FUNCTION 1480dac90 FUN_1480dac90 body=87 status=ok
// SIG undefined FUN_1480dac90(void)

void FUN_1480dac90(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_2 + 1) = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *param_2 = &PTR_FUN_14ad909b0;
  param_2[4] = 0;
  uVar1 = FUN_144830b78(param_2 + 5,&DAT_14cb42160);
  *(undefined4 *)(param_2 + 5) = uVar1;
  param_2[6] = 0;
  param_2[7] = 0;
  *param_2 = &PTR_FUN_14ad8fd80;
  FUN_1406ed278(param_2 + 8);
  return;
}



// FUNCTION 1480dad0c FUN_1480dad0c body=117 status=ok
// SIG undefined FUN_1480dad0c(void)

undefined8 FUN_1480dad0c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
    do {
      *(undefined1 *)(param_2 + -0x38) = *(undefined1 *)(param_3 + -0x38);
      *(undefined8 *)(param_2 + -0x30) = *(undefined8 *)(param_3 + -0x30);
      *(undefined4 *)(param_2 + -0x28) = *(undefined4 *)(param_3 + -0x28);
      *(undefined8 *)(param_2 + -0x20) = *(undefined8 *)(param_3 + -0x20);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      FUN_1447a122a(param_2 + -0x10,param_3 + -0x10);
      FUN_14753be88(param_2,param_3);
      param_3 = param_3 + 0x150;
      param_2 = param_2 + 0x150;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1480dadaa FUN_1480dadaa body=59 status=ok
// SIG undefined FUN_1480dadaa(void)

undefined8 FUN_1480dadaa(longlong *param_1)

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



// FUNCTION 1480dae4e FUN_1480dae4e body=73 status=ok
// SIG undefined FUN_1480dae4e(void)

void FUN_1480dae4e(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x2a) == '\x01') {
    *param_1 = &PTR_FUN_14ad8fd80;
    FUN_1404dbc70(param_1 + 8);
    *param_1 = &PTR_FUN_14ad909b0;
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x2a) = 0;
  }
  return;
}



// FUNCTION 1480dae98 FUN_1480dae98 body=87 status=ok
// SIG undefined FUN_1480dae98(void)

void FUN_1480dae98(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_2 + 1) = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *param_2 = &PTR_FUN_14ad909b0;
  param_2[4] = 0;
  uVar1 = FUN_144830b78(param_2 + 5,&DAT_14cb42160);
  *(undefined4 *)(param_2 + 5) = uVar1;
  param_2[6] = 0;
  param_2[7] = 0;
  *param_2 = &PTR_FUN_14ad903b0;
  FUN_1458f5906(param_2 + 8);
  return;
}



// FUNCTION 1480daf14 FUN_1480daf14 body=117 status=ok
// SIG undefined FUN_1480daf14(void)

undefined8 FUN_1480daf14(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
    do {
      *(undefined1 *)(param_2 + -0x38) = *(undefined1 *)(param_3 + -0x38);
      *(undefined8 *)(param_2 + -0x30) = *(undefined8 *)(param_3 + -0x30);
      *(undefined4 *)(param_2 + -0x28) = *(undefined4 *)(param_3 + -0x28);
      *(undefined8 *)(param_2 + -0x20) = *(undefined8 *)(param_3 + -0x20);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      FUN_1447a122a(param_2 + -0x10,param_3 + -0x10);
      FUN_14753c14a(param_2,param_3);
      param_3 = param_3 + 0x148;
      param_2 = param_2 + 0x148;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1480dafb2 FUN_1480dafb2 body=59 status=ok
// SIG undefined FUN_1480dafb2(void)

undefined8 FUN_1480dafb2(longlong *param_1)

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



// FUNCTION 1480db056 FUN_1480db056 body=75 status=ok
// SIG undefined FUN_1480db056(void)

void FUN_1480db056(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x29) == '\x01') {
    *param_1 = &PTR_FUN_14ad903b0;
    FUN_14581ef76(param_1 + 8);
    *param_1 = &PTR_FUN_14ad909b0;
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x29) = 0;
  }
  return;
}



// FUNCTION 1480db0a2 FUN_1480db0a2 body=66 status=ok
// SIG undefined FUN_1480db0a2(void)

void FUN_1480db0a2(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_2 + 1) = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *param_2 = &PTR_FUN_14ad909b0;
  param_2[4] = 0;
  uVar1 = FUN_144830b78(param_2 + 5,&DAT_14cb42160);
  *(undefined4 *)(param_2 + 5) = uVar1;
  param_2[6] = 0;
  param_2[7] = 0;
  return;
}



// FUNCTION 1480db0e4 FUN_1480db0e4 body=66 status=ok
// SIG undefined FUN_1480db0e4(void)

void FUN_1480db0e4(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_2 + 1) = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *param_2 = &PTR_FUN_14ad909b0;
  param_2[4] = 0;
  uVar1 = FUN_144830b78(param_2 + 5,&DAT_14cb42160);
  *(undefined4 *)(param_2 + 5) = uVar1;
  param_2[6] = 0;
  param_2[7] = 0;
  return;
}



// FUNCTION 1480db14a FUN_1480db14a body=96 status=ok
// SIG undefined FUN_1480db14a(void)

undefined8 FUN_1480db14a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
    do {
      *(undefined1 *)(param_2 + -0x28) = *(undefined1 *)(param_3 + -0x28);
      *(undefined8 *)(param_2 + -0x20) = *(undefined8 *)(param_3 + -0x20);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_1447a122a(param_2,param_3);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1480db1d2 FUN_1480db1d2 body=59 status=ok
// SIG undefined FUN_1480db1d2(void)

undefined8 FUN_1480db1d2(longlong *param_1)

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



// FUNCTION 1480db218 FUN_1480db218 body=48 status=ok
// SIG undefined FUN_1480db218(void)

void FUN_1480db218(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_2 = &PTR_FUN_14ad909b0;
    if (param_2[6] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 1480db298 FUN_1480db298 body=57 status=ok
// SIG undefined FUN_1480db298(void)

undefined8 * FUN_1480db298(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad972f0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480db2fe FUN_1480db2fe body=63 status=ok
// SIG undefined FUN_1480db2fe(void)

undefined1 FUN_1480db2fe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1480db426(param_2,param_3);
    param_3 = param_3 + 0x488;
    param_2 = param_2 + 0x488;
  }
  return 1;
}



// FUNCTION 1480db366 FUN_1480db366 body=59 status=ok
// SIG undefined FUN_1480db366(void)

undefined8 FUN_1480db366(longlong *param_1)

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



// FUNCTION 1480db3b2 FUN_1480db3b2 body=38 status=ok
// SIG undefined FUN_1480db3b2(void)

void FUN_1480db3b2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x488) == '\x01') {
    FUN_1480d3740(param_2);
    *(undefined1 *)(param_2 + 0x488) = 0;
  }
  return;
}



// FUNCTION 1480db426 FUN_1480db426 body=117 status=ok
// SIG undefined FUN_1480db426(void)

longlong FUN_1480db426(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  FUN_1447a122a(param_1 + 0x30,param_2 + 0x30);
  lVar1 = 0x40;
  do {
    FUN_14753be88(param_1 + lVar1,param_2 + lVar1);
    lVar1 = lVar1 + 0x110;
  } while (lVar1 != 0x480);
  *(undefined4 *)(param_1 + 0x480) = *(undefined4 *)(param_2 + 0x480);
  return param_1;
}



// FUNCTION 1480db49c FUN_1480db49c body=29 status=ok
// SIG undefined FUN_1480db49c(void)

undefined8 FUN_1480db49c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480db4ce FUN_1480db4ce body=93 status=ok
// SIG undefined FUN_1480db4ce(void)

void FUN_1480db4ce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad97480;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480db52c FUN_1480db52c body=93 status=ok
// SIG undefined FUN_1480db52c(void)

void FUN_1480db52c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad97480;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480db58a FUN_1480db58a body=126 status=ok
// SIG undefined FUN_1480db58a(void)

void FUN_1480db58a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad97480;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480db5f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480db610 FUN_1480db610 body=19 status=ok
// SIG undefined FUN_1480db610(void)

undefined1 FUN_1480db610(undefined8 param_1,undefined8 param_2)

{
  FUN_1480d47b8(param_2);
  return 1;
}



// FUNCTION 1480db624 FUN_1480db624 body=29 status=ok
// SIG undefined FUN_1480db624(void)

undefined8 FUN_1480db624(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480db656 FUN_1480db656 body=93 status=ok
// SIG undefined FUN_1480db656(void)

void FUN_1480db656(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad974f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480db6b4 FUN_1480db6b4 body=93 status=ok
// SIG undefined FUN_1480db6b4(void)

void FUN_1480db6b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad974f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480db712 FUN_1480db712 body=126 status=ok
// SIG undefined FUN_1480db712(void)

void FUN_1480db712(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad974f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480db781. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480db79a FUN_1480db79a body=20 status=ok
// SIG undefined FUN_1480db79a(void)

undefined1 FUN_1480db79a(longlong param_1)

{
  FUN_1480d4e32(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1480db7ae FUN_1480db7ae body=29 status=ok
// SIG undefined FUN_1480db7ae(void)

undefined8 FUN_1480db7ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480db7e0 FUN_1480db7e0 body=93 status=ok
// SIG undefined FUN_1480db7e0(void)

void FUN_1480db7e0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad97560;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480db83e FUN_1480db83e body=93 status=ok
// SIG undefined FUN_1480db83e(void)

void FUN_1480db83e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad97560;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480db89c FUN_1480db89c body=126 status=ok
// SIG undefined FUN_1480db89c(void)

void FUN_1480db89c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad97560;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480db90b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480db922 FUN_1480db922 body=19 status=ok
// SIG undefined FUN_1480db922(void)

undefined1 FUN_1480db922(undefined8 param_1,undefined8 param_2)

{
  FUN_1480d4f66(param_2);
  return 1;
}



// FUNCTION 1480db936 FUN_1480db936 body=29 status=ok
// SIG undefined FUN_1480db936(void)

undefined8 FUN_1480db936(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480db968 FUN_1480db968 body=93 status=ok
// SIG undefined FUN_1480db968(void)

void FUN_1480db968(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad975d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480db9c6 FUN_1480db9c6 body=93 status=ok
// SIG undefined FUN_1480db9c6(void)

void FUN_1480db9c6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad975d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480dba24 FUN_1480dba24 body=126 status=ok
// SIG undefined FUN_1480dba24(void)

void FUN_1480dba24(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad975d0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480dba93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480dbaaa FUN_1480dbaaa body=19 status=ok
// SIG undefined FUN_1480dbaaa(void)

undefined1 FUN_1480dbaaa(undefined8 param_1,undefined8 param_2)

{
  FUN_143932430(param_2);
  return 1;
}



// FUNCTION 1480dbabe FUN_1480dbabe body=31 status=ok
// SIG undefined FUN_1480dbabe(void)

undefined8 FUN_1480dbabe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480dbaf2 FUN_1480dbaf2 body=93 status=ok
// SIG undefined FUN_1480dbaf2(void)

void FUN_1480dbaf2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad97640;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480dbb50 FUN_1480dbb50 body=93 status=ok
// SIG undefined FUN_1480dbb50(void)

void FUN_1480dbb50(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad97640;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480dbbae FUN_1480dbbae body=126 status=ok
// SIG undefined FUN_1480dbbae(void)

void FUN_1480dbbae(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad97640;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480dbc1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480dbc2c FUN_1480dbc2c body=19 status=ok
// SIG undefined FUN_1480dbc2c(void)

undefined1 FUN_1480dbc2c(undefined8 param_1,undefined8 param_2)

{
  FUN_140f6d85c(param_2);
  return 1;
}



// FUNCTION 1480dbc40 FUN_1480dbc40 body=29 status=ok
// SIG undefined FUN_1480dbc40(void)

undefined8 FUN_1480dbc40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480dbc72 FUN_1480dbc72 body=93 status=ok
// SIG undefined FUN_1480dbc72(void)

void FUN_1480dbc72(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad976b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480dbcd0 FUN_1480dbcd0 body=93 status=ok
// SIG undefined FUN_1480dbcd0(void)

void FUN_1480dbcd0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad976b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480dbd2e FUN_1480dbd2e body=126 status=ok
// SIG undefined FUN_1480dbd2e(void)

void FUN_1480dbd2e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad976b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480dbd9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480dbdb4 FUN_1480dbdb4 body=19 status=ok
// SIG undefined FUN_1480dbdb4(void)

undefined1 FUN_1480dbdb4(undefined8 param_1,undefined8 param_2)

{
  FUN_1439360be(param_2);
  return 1;
}



// FUNCTION 1480dbdc8 FUN_1480dbdc8 body=29 status=ok
// SIG undefined FUN_1480dbdc8(void)

undefined8 FUN_1480dbdc8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480dbdfa FUN_1480dbdfa body=93 status=ok
// SIG undefined FUN_1480dbdfa(void)

void FUN_1480dbdfa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad97720;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480dbe58 FUN_1480dbe58 body=93 status=ok
// SIG undefined FUN_1480dbe58(void)

void FUN_1480dbe58(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad97720;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1480dbeb6 FUN_1480dbeb6 body=126 status=ok
// SIG undefined FUN_1480dbeb6(void)

void FUN_1480dbeb6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad97720;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001480dbf25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1480dbf3c FUN_1480dbf3c body=19 status=ok
// SIG undefined FUN_1480dbf3c(void)

undefined1 FUN_1480dbf3c(undefined8 param_1,undefined8 param_2)

{
  FUN_1480d7450(param_2);
  return 1;
}



// FUNCTION 1480dbf50 FUN_1480dbf50 body=88 status=ok
// SIG undefined FUN_1480dbf50(void)

void FUN_1480dbf50(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xa0);
  *(undefined4 *)((longlong)param_2 + 0x28) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined1 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x44) = 0;
  *(undefined8 *)((longlong)param_2 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_2 + 0x54) = 1;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined8 *)((longlong)param_2 + 0x88) = 0;
  *(undefined8 *)((longlong)param_2 + 0x90) = 0;
  *(undefined4 *)((longlong)param_2 + 0x98) = 0;
  return;
}



// FUNCTION 1480dc010 FUN_1480dc010 body=63 status=ok
// SIG undefined FUN_1480dc010(void)

undefined1 FUN_1480dc010(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1480dc188(param_2,param_3);
    param_3 = param_3 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return 1;
}



// FUNCTION 1480dc078 FUN_1480dc078 body=59 status=ok
// SIG undefined FUN_1480dc078(void)

undefined8 FUN_1480dc078(longlong *param_1)

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



// FUNCTION 1480dc0c4 FUN_1480dc0c4 body=40 status=ok
// SIG undefined FUN_1480dc0c4(void)

void FUN_1480dc0c4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_1480dc13a(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 1480dc13a FUN_1480dc13a body=78 status=ok
// SIG undefined FUN_1480dc13a(void)

void FUN_1480dc13a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x90);
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
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1480dc188 FUN_1480dc188 body=239 status=ok
// SIG undefined FUN_1480dc188(void)

undefined1 * FUN_1480dc188(undefined1 *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
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
  longlong lVar16;
  
  *param_1 = *param_2;
  lVar16 = *(longlong *)(param_2 + 8);
  if (DAT_14c950c29 == '\x01') {
    if (lVar16 == 0) {
      lVar16 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar16 = *(longlong *)(param_2 + 8);
    }
  }
  *(longlong *)(param_1 + 8) = lVar16;
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  uVar5 = *(undefined4 *)(param_2 + 0x34);
  uVar6 = *(undefined4 *)(param_2 + 0x38);
  uVar7 = *(undefined4 *)(param_2 + 0x3c);
  uVar8 = *(undefined4 *)(param_2 + 0x40);
  uVar9 = *(undefined4 *)(param_2 + 0x44);
  uVar10 = *(undefined4 *)(param_2 + 0x48);
  uVar11 = *(undefined4 *)(param_2 + 0x4c);
  uVar12 = *(undefined4 *)(param_2 + 0x50);
  uVar13 = *(undefined4 *)(param_2 + 0x54);
  uVar14 = *(undefined4 *)(param_2 + 0x58);
  uVar15 = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = uVar5;
  *(undefined4 *)(param_1 + 0x38) = uVar6;
  *(undefined4 *)(param_1 + 0x3c) = uVar7;
  *(undefined4 *)(param_1 + 0x40) = uVar8;
  *(undefined4 *)(param_1 + 0x44) = uVar9;
  *(undefined4 *)(param_1 + 0x48) = uVar10;
  *(undefined4 *)(param_1 + 0x4c) = uVar11;
  *(undefined4 *)(param_1 + 0x50) = uVar12;
  *(undefined4 *)(param_1 + 0x54) = uVar13;
  *(undefined4 *)(param_1 + 0x58) = uVar14;
  *(undefined4 *)(param_1 + 0x5c) = uVar15;
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  FUN_1447a122a(param_1 + 0x68,param_2 + 0x68);
  uVar5 = *(undefined4 *)(param_2 + 0x7c);
  uVar6 = *(undefined4 *)(param_2 + 0x80);
  uVar7 = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = uVar5;
  *(undefined4 *)(param_1 + 0x80) = uVar6;
  *(undefined4 *)(param_1 + 0x84) = uVar7;
  uVar3 = *(undefined8 *)(param_2 + 0x88);
  lVar16 = *(longlong *)(param_2 + 0x90);
  if (lVar16 != 0) {
    LOCK();
    *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x88) = uVar3;
  *(longlong *)(param_1 + 0x90) = lVar16;
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
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  return param_1;
}



// FUNCTION 1480dc278 FUN_1480dc278 body=123 status=ok
// SIG undefined FUN_1480dc278(void)

void FUN_1480dc278(undefined8 *param_1,longlong param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = (ulonglong *)*param_1;
  uVar2 = *(undefined8 *)(param_2 + 8);
  puVar3 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
  puVar4 = puVar3 + 6;
  if ((undefined8 *)puVar1[1] < puVar4) {
    FUN_140023dd8(puVar1,0x40);
    puVar3 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar4 = puVar3 + 6;
  }
  *puVar1 = (ulonglong)puVar4;
  *(int *)(puVar1 + 0xc) = (int)puVar1[0xc] + 1;
  *(undefined8 **)puVar1[6] = puVar3;
  puVar1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a38be38;
  puVar3[2] = uVar2;
  puVar3[4] = 0;
  puVar3[5] = 0x3f80000000000000;
  return;
}



// FUNCTION 1480dc2f4 FUN_1480dc2f4 body=119 status=ok
// SIG undefined FUN_1480dc2f4(void)

void FUN_1480dc2f4(undefined8 *param_1,longlong param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = (ulonglong *)*param_1;
  uVar2 = *(undefined8 *)(param_2 + 8);
  puVar3 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 5;
  if ((undefined8 *)puVar1[1] < puVar4) {
    FUN_140023dd8(puVar1,0x30);
    puVar3 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 5;
  }
  *puVar1 = (ulonglong)puVar4;
  *(int *)(puVar1 + 0xc) = (int)puVar1[0xc] + 1;
  *(undefined8 **)puVar1[6] = puVar3;
  puVar1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a29b380;
  puVar3[2] = uVar2;
  puVar3[3] = 0;
  puVar3[4] = 0;
  return;
}



// FUNCTION 1480dc36c FUN_1480dc36c body=334 status=ok
// SIG undefined FUN_1480dc36c(void)

undefined8 FUN_1480dc36c(uint *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined2 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar10 = *(longlong *)(param_1 + 2);
  uVar6 = param_1[4];
  lVar9 = (longlong)(int)uVar6;
  if (lVar9 != 0) {
    lVar8 = 0;
    puVar4 = (undefined8 *)0x0;
    do {
      puVar3 = *(undefined8 **)(lVar10 + lVar8);
      if (*(int *)(puVar3 + 6) + 3U <= *(uint *)(puVar3 + 3) / param_1[7]) {
        puVar4 = puVar3;
      }
      lVar8 = lVar8 + 8;
    } while (lVar9 * 8 - lVar8 != 0);
    if (puVar4 != (undefined8 *)0x0) {
      uVar5 = 0;
      goto LAB_1480dc492;
    }
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  param_1[4] = uVar6 + 1;
  if (param_1[5] < uVar6 + 1) {
    FUN_1456bd870(param_1 + 2,uVar6);
    lVar10 = *(longlong *)(param_1 + 2);
  }
  *(undefined8 **)(lVar10 + lVar9 * 8) = puVar4;
  uVar6 = 3;
  if (3 < *param_1) {
    uVar6 = *param_1;
  }
  uVar1 = (ulonglong)(uVar6 - 1) * 2 + 1;
  lVar10 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
    }
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*param_2;
  }
  FUN_1407fe5c2(puVar4,param_3,puVar7,param_1[7],1 << ((byte)lVar10 & 0x1f),(char)param_1[6],
                param_1[9],param_1[8],0);
  iVar2 = *(int *)(puVar4 + 3);
  param_1[10] = param_1[10] + iVar2;
  uVar5 = CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
LAB_1480dc492:
  *param_4 = puVar4;
  iVar2 = *(int *)(puVar4 + 6);
  *(int *)(param_4 + 1) = iVar2;
  *(int *)(puVar4 + 6) = iVar2 + 3;
  param_1[0xb] = param_1[0xb] + param_1[7] * 3;
  return uVar5;
}



// FUNCTION 1480dc4fe FUN_1480dc4fe body=62 status=ok
// SIG undefined FUN_1480dc4fe(void)

undefined8 FUN_1480dc4fe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
    param_2 = param_2 + 0x18;
    param_3 = param_3 + 0x18;
  }
  return 1;
}



// FUNCTION 1480dc564 FUN_1480dc564 body=59 status=ok
// SIG undefined FUN_1480dc564(void)

undefined8 FUN_1480dc564(longlong *param_1)

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



// FUNCTION 1480dc5aa FUN_1480dc5aa body=37 status=ok
// SIG undefined FUN_1480dc5aa(void)

void FUN_1480dc5aa(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 1480dc6ec FUN_1480dc6ec body=39 status=ok
// SIG undefined FUN_1480dc6ec(void)

undefined8 FUN_1480dc6ec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1480dc73c FUN_1480dc73c body=59 status=ok
// SIG undefined FUN_1480dc73c(void)

undefined8 FUN_1480dc73c(longlong *param_1)

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



// FUNCTION 1480dc846 FUN_1480dc846 body=54 status=ok
// SIG undefined FUN_1480dc846(void)

undefined1 FUN_1480dc846(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1480dc95e(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 1480dc8a4 FUN_1480dc8a4 body=59 status=ok
// SIG undefined FUN_1480dc8a4(void)

undefined8 FUN_1480dc8a4(longlong *param_1)

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



// FUNCTION 1480dc8ea FUN_1480dc8ea body=38 status=ok
// SIG undefined FUN_1480dc8ea(void)

void FUN_1480dc8ea(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1480dc95e FUN_1480dc95e body=98 status=ok
// SIG undefined FUN_1480dc95e(void)

undefined8 * FUN_1480dc95e(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  *param_1 = *param_2;
  FUN_144a787a6(param_1 + 1,param_2 + 1);
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 5);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 5) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
  lVar4 = param_2[7];
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = param_2[7];
    }
  }
  param_1[7] = lVar4;
  return param_1;
}



// FUNCTION 1480dc9c1 FUN_1480dc9c1 body=46 status=ok
// SIG undefined FUN_1480dc9c1(void)

undefined8 FUN_1480dc9c1(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      if ((*(longlong *)(param_1 + lVar1) != *(longlong *)(param_2 + lVar1)) ||
         (*(longlong *)(param_1 + 8 + lVar1) != *(longlong *)(param_2 + 8 + lVar1))) {
        return 0;
      }
      lVar1 = lVar1 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return 1;
}



// FUNCTION 1480dc9f0 FUN_1480dc9f0 body=98 status=ok
// SIG undefined FUN_1480dc9f0(void)

void FUN_1480dc9f0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,4);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1480dca52 FUN_1480dca52 body=309 status=ok
// SIG undefined FUN_1480dca52(void)

undefined4 * FUN_1480dca52(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1480dcb88(param_1,local_48);
  FUN_1480dcd1e(param_3,local_40);
  *(undefined4 *)(local_40 + 0x26) = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = (int)((ulonglong)*local_40 >> 0x20) * 0x17 + (int)*local_40;
  cVar2 = FUN_1480dcc78(param_1,uVar7,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0x134) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x26) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1480dce3a(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480dcb88 FUN_1480dcb88 body=240 status=ok
// SIG undefined FUN_1480dcb88(void)

int * FUN_1480dcb88(longlong *param_1,int *param_2)

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
      FUN_147ca55fe(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x140);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x140) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x140 + *param_1;
  return param_2;
}



// FUNCTION 1480dcc78 FUN_1480dcc78 body=165 status=ok
// SIG undefined FUN_1480dcc78(void)

undefined8 FUN_1480dcc78(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x140);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x140) == *param_3) {
          FUN_1480da1f0((longlong)_Dst + 0x10);
          memmove(_Dst,param_3,0x130);
          FUN_1480dcdc0(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x130);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1480dcd1e FUN_1480dcd1e body=160 status=ok
// SIG undefined FUN_1480dcd1e(void)

undefined8 * FUN_1480dcd1e(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_168 [32];
  undefined1 local_148 [288];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_168;
  memset(local_148,0,0x120);
  *param_2 = *(undefined8 *)*param_1;
  *(undefined1 *)(param_2 + 0xe) = 0;
  *(undefined1 *)(param_2 + 0x1c) = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  FUN_1480da1f0(local_148);
  if ((local_28 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480dcdc0 FUN_1480dcdc0 body=122 status=ok
// SIG undefined FUN_1480dcdc0(void)

void FUN_1480dcdc0(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x140) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x140) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x140 + 4) = uVar4;
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



// FUNCTION 1480dce3a FUN_1480dce3a body=457 status=ok
// SIG undefined FUN_1480dce3a(void)

void FUN_1480dce3a(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x140;
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x134 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x130 + lVar7) =
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



// FUNCTION 1480dd004 FUN_1480dd004 body=109 status=ok
// SIG undefined FUN_1480dd004(void)

void FUN_1480dd004(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x140) == param_2) {
          FUN_1480dd072(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x140 + *param_1 + 0x130);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1480dd072 FUN_1480dd072 body=140 status=ok
// SIG undefined FUN_1480dd072(void)

void FUN_1480dd072(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x140;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x134 + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x130 + lVar6 * 0x140);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x140 + 0x130);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x130);
  FUN_1480da1f0(*param_1 + lVar2 + 0x10);
  FUN_1480dcdc0(param_1,param_2);
  return;
}



// FUNCTION 1480dd0fe FUN_1480dd0fe body=345 status=ok
// SIG undefined FUN_1480dd0fe(void)

void FUN_1480dd0fe(char *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_78 [40];
  undefined4 *local_50;
  int local_48;
  undefined4 *local_40;
  int local_38;
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1480cf688(local_30,param_1);
  FUN_140126e42(&local_40,param_1);
  FUN_144a76c20(&local_50,param_1);
  if (*(longlong *)(*(longlong *)(local_28 + 0x40) + 0x40 + (longlong)param_2 * 0x80) == 0) {
    piVar5 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar5 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar5) {
      iVar4 = 0;
      do {
        puVar1 = local_40 + local_38;
        *local_40 = 0;
        puVar2 = local_50 + local_48;
        *local_50 = 0;
        iVar4 = iVar4 + 1;
        piVar5 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar5 = (int *)(param_1 + 0x3c);
        }
        local_50 = puVar2;
        local_40 = puVar1;
      } while (iVar4 < *piVar5);
    }
  }
  else {
    piVar5 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar5 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar5) {
      uVar3 = *(undefined4 *)
               (*(longlong *)(local_28 + 0x50) +
               (ulonglong)*(uint *)(*(longlong *)(local_28 + 0x40) + (longlong)param_2 * 0x80 + 0xc)
               );
      iVar4 = 0;
      do {
        puVar1 = local_40 + local_38;
        *local_40 = 0xffffffff;
        puVar2 = local_50 + local_48;
        *local_50 = uVar3;
        iVar4 = iVar4 + 1;
        piVar5 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar5 = (int *)(param_1 + 0x3c);
        }
        local_50 = puVar2;
        local_40 = puVar1;
      } while (iVar4 < *piVar5);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480dd258 FUN_1480dd258 body=412 status=ok
// SIG undefined FUN_1480dd258(void)

void FUN_1480dd258(char *param_1,int param_2,undefined8 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  int iVar6;
  int *piVar7;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  int local_60;
  undefined4 *local_58;
  int local_50;
  undefined4 *local_48;
  int local_40;
  undefined1 local_38 [8];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1480cf688(local_38,param_1);
  FUN_140126e42(&local_48,param_1);
  FUN_144a76c20(&local_68,param_1);
  FUN_144a76c20(&local_58,param_1);
  piVar1 = (int *)(param_1 + 0x3c);
  piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar7 = piVar1;
  }
  if (*(longlong *)(*(longlong *)(local_30 + 0x40) + 0x40 + (longlong)param_2 * 0x80) == 0) {
    if (0 < *piVar7) {
      iVar6 = 0;
      do {
        puVar2 = local_48 + local_40;
        *local_48 = 0;
        puVar3 = local_68 + local_60;
        *local_68 = (int)param_3;
        puVar4 = local_58 + local_50;
        *local_58 = (int)((ulonglong)param_3 >> 0x20);
        iVar6 = iVar6 + 1;
        piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar7 = piVar1;
        }
        local_68 = puVar3;
        local_58 = puVar4;
        local_48 = puVar2;
      } while (iVar6 < *piVar7);
    }
  }
  else if (0 < *piVar7) {
    uVar5 = *(undefined8 *)
             (*(longlong *)(local_30 + 0x50) +
             (ulonglong)*(uint *)(*(longlong *)(local_30 + 0x40) + (longlong)param_2 * 0x80 + 0xc));
    iVar6 = 0;
    do {
      puVar2 = local_48 + local_40;
      *local_48 = 0xffffffff;
      puVar3 = local_68 + local_60;
      *local_68 = (int)uVar5;
      puVar4 = local_58 + local_50;
      *local_58 = (int)((ulonglong)uVar5 >> 0x20);
      iVar6 = iVar6 + 1;
      piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar7 = piVar1;
      }
      local_68 = puVar3;
      local_58 = puVar4;
      local_48 = puVar2;
    } while (iVar6 < *piVar7);
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480dd3f5 FUN_1480dd3f5 body=512 status=ok
// SIG undefined FUN_1480dd3f5(void)

void FUN_1480dd3f5(char *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  int iVar9;
  int *piVar10;
  ulonglong uVar11;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  int local_70;
  undefined4 *local_68;
  int local_60;
  undefined4 *local_58;
  int local_50;
  undefined4 *local_48;
  int local_40;
  undefined1 local_38 [8];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1480cf688(local_38,param_1);
  FUN_140126e42(&local_48,param_1);
  FUN_144a76c20(&local_78,param_1);
  FUN_144a76c20(&local_68,param_1);
  FUN_144a76c20(&local_58,param_1);
  if (*(longlong *)(*(longlong *)(local_30 + 0x40) + 0x40 + (longlong)param_2 * 0x80) == 0) {
    piVar10 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar10 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar10) {
      iVar9 = 0;
      do {
        puVar1 = local_48 + local_40;
        *local_48 = 0;
        uVar5 = param_3[1];
        uVar6 = param_3[2];
        puVar2 = local_78 + local_70;
        *local_78 = *param_3;
        puVar3 = local_68 + local_60;
        *local_68 = uVar5;
        puVar4 = local_58 + local_50;
        *local_58 = uVar6;
        iVar9 = iVar9 + 1;
        piVar10 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar10 = (int *)(param_1 + 0x3c);
        }
        local_78 = puVar2;
        local_68 = puVar3;
        local_58 = puVar4;
        local_48 = puVar1;
      } while (iVar9 < *piVar10);
    }
  }
  else {
    piVar10 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar10 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar10) {
      uVar11 = (ulonglong)*(uint *)(*(longlong *)(local_30 + 0x40) + (longlong)param_2 * 0x80 + 0xc)
      ;
      lVar8 = *(longlong *)(local_30 + 0x50);
      uVar5 = *(undefined4 *)(lVar8 + uVar11);
      uVar6 = *(undefined4 *)(lVar8 + 4 + uVar11);
      uVar7 = *(undefined4 *)(lVar8 + 8 + uVar11);
      iVar9 = 0;
      do {
        puVar1 = local_48 + local_40;
        *local_48 = 0xffffffff;
        puVar2 = local_78 + local_70;
        *local_78 = uVar5;
        puVar3 = local_68 + local_60;
        *local_68 = uVar6;
        puVar4 = local_58 + local_50;
        *local_58 = uVar7;
        iVar9 = iVar9 + 1;
        piVar10 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar10 = (int *)(param_1 + 0x3c);
        }
        local_78 = puVar2;
        local_68 = puVar3;
        local_58 = puVar4;
        local_48 = puVar1;
      } while (iVar9 < *piVar10);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480dd5f6 FUN_1480dd5f6 body=598 status=ok
// SIG undefined FUN_1480dd5f6(void)

void FUN_1480dd5f6(char *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  int iVar11;
  int *piVar12;
  ulonglong uVar13;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  int local_80;
  undefined4 *local_78;
  int local_70;
  undefined4 *local_68;
  int local_60;
  undefined4 *local_58;
  int local_50;
  undefined4 *local_48;
  int local_40;
  undefined1 local_38 [8];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1480cf688(local_38,param_1);
  FUN_140126e42(&local_48,param_1);
  FUN_144a76c20(&local_88,param_1);
  FUN_144a76c20(&local_78,param_1);
  FUN_144a76c20(&local_68,param_1);
  FUN_144a76c20(&local_58,param_1);
  if (*(longlong *)(*(longlong *)(local_30 + 0x40) + 0x40 + (longlong)param_2 * 0x80) == 0) {
    piVar12 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar12 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar12) {
      iVar11 = 0;
      do {
        puVar1 = local_48 + local_40;
        *local_48 = 0;
        uVar6 = param_3[1];
        uVar7 = param_3[2];
        uVar8 = param_3[3];
        puVar2 = local_88 + local_80;
        *local_88 = *param_3;
        puVar3 = local_78 + local_70;
        *local_78 = uVar6;
        puVar4 = local_68 + local_60;
        *local_68 = uVar7;
        puVar5 = local_58 + local_50;
        *local_58 = uVar8;
        iVar11 = iVar11 + 1;
        piVar12 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar12 = (int *)(param_1 + 0x3c);
        }
        local_88 = puVar2;
        local_78 = puVar3;
        local_68 = puVar4;
        local_58 = puVar5;
        local_48 = puVar1;
      } while (iVar11 < *piVar12);
    }
  }
  else {
    piVar12 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar12 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar12) {
      uVar13 = (ulonglong)*(uint *)(*(longlong *)(local_30 + 0x40) + (longlong)param_2 * 0x80 + 0xc)
      ;
      lVar10 = *(longlong *)(local_30 + 0x50);
      uVar6 = *(undefined4 *)(lVar10 + uVar13);
      uVar7 = *(undefined4 *)(lVar10 + 4 + uVar13);
      uVar8 = *(undefined4 *)(lVar10 + 8 + uVar13);
      uVar9 = *(undefined4 *)(lVar10 + 0xc + uVar13);
      iVar11 = 0;
      do {
        puVar1 = local_48 + local_40;
        *local_48 = 0xffffffff;
        puVar2 = local_88 + local_80;
        *local_88 = uVar6;
        puVar3 = local_78 + local_70;
        *local_78 = uVar7;
        puVar4 = local_68 + local_60;
        *local_68 = uVar8;
        puVar5 = local_58 + local_50;
        *local_58 = uVar9;
        iVar11 = iVar11 + 1;
        piVar12 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar12 = (int *)(param_1 + 0x3c);
        }
        local_88 = puVar2;
        local_78 = puVar3;
        local_68 = puVar4;
        local_58 = puVar5;
        local_48 = puVar1;
      } while (iVar11 < *piVar12);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480dd84d FUN_1480dd84d body=598 status=ok
// SIG undefined FUN_1480dd84d(void)

void FUN_1480dd84d(char *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  int iVar11;
  int *piVar12;
  ulonglong uVar13;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  int local_80;
  undefined4 *local_78;
  int local_70;
  undefined4 *local_68;
  int local_60;
  undefined4 *local_58;
  int local_50;
  undefined4 *local_48;
  int local_40;
  undefined1 local_38 [8];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1480cf688(local_38,param_1);
  FUN_140126e42(&local_48,param_1);
  FUN_144a76c20(&local_88,param_1);
  FUN_144a76c20(&local_78,param_1);
  FUN_144a76c20(&local_68,param_1);
  FUN_144a76c20(&local_58,param_1);
  if (*(longlong *)(*(longlong *)(local_30 + 0x40) + 0x40 + (longlong)param_2 * 0x80) == 0) {
    piVar12 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar12 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar12) {
      iVar11 = 0;
      do {
        puVar1 = local_48 + local_40;
        *local_48 = 0;
        uVar6 = param_3[1];
        uVar7 = param_3[2];
        uVar8 = param_3[3];
        puVar2 = local_88 + local_80;
        *local_88 = *param_3;
        puVar3 = local_78 + local_70;
        *local_78 = uVar6;
        puVar4 = local_68 + local_60;
        *local_68 = uVar7;
        puVar5 = local_58 + local_50;
        *local_58 = uVar8;
        iVar11 = iVar11 + 1;
        piVar12 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar12 = (int *)(param_1 + 0x3c);
        }
        local_88 = puVar2;
        local_78 = puVar3;
        local_68 = puVar4;
        local_58 = puVar5;
        local_48 = puVar1;
      } while (iVar11 < *piVar12);
    }
  }
  else {
    piVar12 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar12 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar12) {
      uVar13 = (ulonglong)*(uint *)(*(longlong *)(local_30 + 0x40) + (longlong)param_2 * 0x80 + 0xc)
      ;
      lVar10 = *(longlong *)(local_30 + 0x50);
      uVar6 = *(undefined4 *)(lVar10 + uVar13);
      uVar7 = *(undefined4 *)(lVar10 + 4 + uVar13);
      uVar8 = *(undefined4 *)(lVar10 + 8 + uVar13);
      uVar9 = *(undefined4 *)(lVar10 + 0xc + uVar13);
      iVar11 = 0;
      do {
        puVar1 = local_48 + local_40;
        *local_48 = 0xffffffff;
        puVar2 = local_88 + local_80;
        *local_88 = uVar6;
        puVar3 = local_78 + local_70;
        *local_78 = uVar7;
        puVar4 = local_68 + local_60;
        *local_68 = uVar8;
        puVar5 = local_58 + local_50;
        *local_58 = uVar9;
        iVar11 = iVar11 + 1;
        piVar12 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar12 = (int *)(param_1 + 0x3c);
        }
        local_88 = puVar2;
        local_78 = puVar3;
        local_68 = puVar4;
        local_58 = puVar5;
        local_48 = puVar1;
      } while (iVar11 < *piVar12);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480ddaa4 FUN_1480ddaa4 body=512 status=ok
// SIG undefined FUN_1480ddaa4(void)

void FUN_1480ddaa4(char *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  int iVar9;
  int *piVar10;
  ulonglong uVar11;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  int local_70;
  undefined4 *local_68;
  int local_60;
  undefined4 *local_58;
  int local_50;
  undefined4 *local_48;
  int local_40;
  undefined1 local_38 [8];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1480cf688(local_38,param_1);
  FUN_140126e42(&local_48,param_1);
  FUN_144a76c20(&local_78,param_1);
  FUN_144a76c20(&local_68,param_1);
  FUN_144a76c20(&local_58,param_1);
  if (*(longlong *)(*(longlong *)(local_30 + 0x40) + 0x40 + (longlong)param_2 * 0x80) == 0) {
    piVar10 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar10 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar10) {
      iVar9 = 0;
      do {
        puVar1 = local_48 + local_40;
        *local_48 = 0;
        uVar5 = param_3[1];
        uVar6 = param_3[2];
        puVar2 = local_78 + local_70;
        *local_78 = *param_3;
        puVar3 = local_68 + local_60;
        *local_68 = uVar5;
        puVar4 = local_58 + local_50;
        *local_58 = uVar6;
        iVar9 = iVar9 + 1;
        piVar10 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar10 = (int *)(param_1 + 0x3c);
        }
        local_78 = puVar2;
        local_68 = puVar3;
        local_58 = puVar4;
        local_48 = puVar1;
      } while (iVar9 < *piVar10);
    }
  }
  else {
    piVar10 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar10 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar10) {
      uVar11 = (ulonglong)*(uint *)(*(longlong *)(local_30 + 0x40) + (longlong)param_2 * 0x80 + 0xc)
      ;
      lVar8 = *(longlong *)(local_30 + 0x50);
      uVar5 = *(undefined4 *)(lVar8 + uVar11);
      uVar6 = *(undefined4 *)(lVar8 + 4 + uVar11);
      uVar7 = *(undefined4 *)(lVar8 + 8 + uVar11);
      iVar9 = 0;
      do {
        puVar1 = local_48 + local_40;
        *local_48 = 0xffffffff;
        puVar2 = local_78 + local_70;
        *local_78 = uVar5;
        puVar3 = local_68 + local_60;
        *local_68 = uVar6;
        puVar4 = local_58 + local_50;
        *local_58 = uVar7;
        iVar9 = iVar9 + 1;
        piVar10 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar10 = (int *)(param_1 + 0x3c);
        }
        local_78 = puVar2;
        local_68 = puVar3;
        local_58 = puVar4;
        local_48 = puVar1;
      } while (iVar9 < *piVar10);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480ddca5 FUN_1480ddca5 body=344 status=ok
// SIG undefined FUN_1480ddca5(void)

void FUN_1480ddca5(char *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_78 [40];
  undefined4 *local_50;
  int local_48;
  undefined4 *local_40;
  int local_38;
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1480cf688(local_30,param_1);
  FUN_140126e42(&local_40,param_1);
  FUN_144a76cd4(&local_50,param_1);
  if (*(longlong *)(*(longlong *)(local_28 + 0x40) + 0x40 + (longlong)param_2 * 0x80) == 0) {
    piVar4 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar4 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar4) {
      iVar5 = 0;
      do {
        puVar1 = local_40 + local_38;
        *local_40 = 0;
        puVar2 = local_50 + local_48;
        *local_50 = 0;
        iVar5 = iVar5 + 1;
        piVar4 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar4 = (int *)(param_1 + 0x3c);
        }
        local_50 = puVar2;
        local_40 = puVar1;
      } while (iVar5 < *piVar4);
    }
  }
  else {
    piVar4 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar4 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar4) {
      uVar3 = *(undefined4 *)
               (*(longlong *)(local_28 + 0x50) +
               (ulonglong)*(uint *)(*(longlong *)(local_28 + 0x40) + (longlong)param_2 * 0x80 + 0xc)
               );
      iVar5 = 0;
      do {
        puVar1 = local_40 + local_38;
        *local_40 = 0xffffffff;
        puVar2 = local_50 + local_48;
        *local_50 = uVar3;
        iVar5 = iVar5 + 1;
        piVar4 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar4 = (int *)(param_1 + 0x3c);
        }
        local_50 = puVar2;
        local_40 = puVar1;
      } while (iVar5 < *piVar4);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480dddfe FUN_1480dddfe body=344 status=ok
// SIG undefined FUN_1480dddfe(void)

void FUN_1480dddfe(char *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_78 [40];
  undefined4 *local_50;
  int local_48;
  undefined4 *local_40;
  int local_38;
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1480cf688(local_30,param_1);
  FUN_140126e42(&local_40,param_1);
  FUN_140126e42(&local_50,param_1);
  if (*(longlong *)(*(longlong *)(local_28 + 0x40) + 0x40 + (longlong)param_2 * 0x80) == 0) {
    piVar4 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar4 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar4) {
      iVar5 = 0;
      do {
        puVar1 = local_40 + local_38;
        *local_40 = 0;
        puVar2 = local_50 + local_48;
        *local_50 = 0;
        iVar5 = iVar5 + 1;
        piVar4 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar4 = (int *)(param_1 + 0x3c);
        }
        local_50 = puVar2;
        local_40 = puVar1;
      } while (iVar5 < *piVar4);
    }
  }
  else {
    piVar4 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar4 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar4) {
      uVar3 = *(undefined4 *)
               (*(longlong *)(local_28 + 0x50) +
               (ulonglong)*(uint *)(*(longlong *)(local_28 + 0x40) + (longlong)param_2 * 0x80 + 0xc)
               );
      iVar5 = 0;
      do {
        puVar1 = local_40 + local_38;
        *local_40 = 0xffffffff;
        puVar2 = local_50 + local_48;
        *local_50 = uVar3;
        iVar5 = iVar5 + 1;
        piVar4 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar4 = (int *)(param_1 + 0x3c);
        }
        local_50 = puVar2;
        local_40 = puVar1;
      } while (iVar5 < *piVar4);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480ddf58 FUN_1480ddf58 body=151 status=ok
// SIG undefined FUN_1480ddf58(void)

void FUN_1480ddf58(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_1480ddff0();
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  lVar3 = param_1[2];
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x7b;
  *(int *)(lVar2 + 0x14 + lVar4) = (int)lVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cb398a8;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x70;
  return;
}



// FUNCTION 1480ddff0 FUN_1480ddff0 body=258 status=ok
// SIG undefined FUN_1480ddff0(void)

void FUN_1480ddff0(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb39928) {
    FUN_144b3d300(&DAT_14cb39928);
    if (DAT_14cb39928 == -1) {
      FUN_1480de0f4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FShaderParameters";
      local_38 = 0;
      local_50 = 0x70;
      local_58 = 0x31;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb398a8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143939c25);
      _Init_thread_footer(&DAT_14cb39928);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480de0f4 FUN_1480de0f4 body=226 status=ok
// SIG undefined FUN_1480de0f4(void)

longlong * FUN_1480de0f4(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1480de1d8;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480de1d8 FUN_1480de1d8 body=136 status=ok
// SIG undefined FUN_1480de1d8(void)

code * FUN_1480de1d8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PropertyData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x600000003c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480de260;
}



// FUNCTION 1480de260 FUN_1480de260 body=136 status=ok
// SIG undefined FUN_1480de260(void)

code * FUN_1480de260(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InvTransformScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x500000003a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480de2e8;
}



// FUNCTION 1480de2e8 FUN_1480de2e8 body=136 status=ok
// SIG undefined FUN_1480de2e8(void)

code * FUN_1480de2e8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InvTransformRotation";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000039;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480de370;
}



// FUNCTION 1480de370 FUN_1480de370 body=136 status=ok
// SIG undefined FUN_1480de370(void)

code * FUN_1480de370(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InvTransformValid";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3c00000038;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480de3f8;
}



// FUNCTION 1480de3f8 FUN_1480de3f8 body=136 status=ok
// SIG undefined FUN_1480de3f8(void)

code * FUN_1480de3f8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InvTransformLocation";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000037;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480de480;
}



// FUNCTION 1480de480 FUN_1480de480 body=136 status=ok
// SIG undefined FUN_1480de480(void)

code * FUN_1480de480(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TransformScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000035;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480de508;
}



// FUNCTION 1480de508 FUN_1480de508 body=136 status=ok
// SIG undefined FUN_1480de508(void)

code * FUN_1480de508(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TransformRotation";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000034;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480de590;
}



// FUNCTION 1480de590 FUN_1480de590 body=136 status=ok
// SIG undefined FUN_1480de590(void)

code * FUN_1480de590(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TransformValid";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000033;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480de618;
}



// FUNCTION 1480de618 FUN_1480de618 body=130 status=ok
// SIG undefined FUN_1480de618(void)

undefined1 * FUN_1480de618(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TransformLocation";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x32;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1480de69a;
}



// FUNCTION 1480de69d FUN_1480de69d body=7 status=ok
// SIG undefined FUN_1480de69d(void)

void FUN_1480de69d(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 1480de6a4 FUN_1480de6a4 body=132 status=ok
// SIG undefined FUN_1480de6a4(void)

void FUN_1480de6a4(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1480de72a FUN_1480de72a body=108 status=ok
// SIG undefined FUN_1480de72a(void)

void FUN_1480de72a(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x130) == param_2) {
          FUN_1480de796(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x130 + *param_1 + 0x120);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1480de796 FUN_1480de796 body=138 status=ok
// SIG undefined FUN_1480de796(void)

void FUN_1480de796(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x130;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x124 + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x120 + lVar6 * 0x130);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x130 + 0x120);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x120);
  FUN_1480da404(*param_1 + lVar2 + 0x10);
  FUN_1480de820(param_1,param_2);
  return;
}



// FUNCTION 1480de820 FUN_1480de820 body=122 status=ok
// SIG undefined FUN_1480de820(void)

void FUN_1480de820(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x130) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x130) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x130 + 4) = uVar5;
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



// FUNCTION 1480de89a FUN_1480de89a body=135 status=ok
// SIG undefined FUN_1480de89a(void)

longlong FUN_1480de89a(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = 0;
  do {
    FUN_1480defd4(param_1 + lVar3,param_2 + lVar3);
    lVar3 = lVar3 + 0x28;
  } while (lVar3 != 0x78);
  memcpy((void *)(param_1 + 0x78),(void *)(param_2 + 0x78),0x90);
  if (param_1 != param_2) {
    lVar3 = *(longlong *)(param_1 + 0x108);
    *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 0x108);
    *(undefined8 *)(param_2 + 0x108) = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  return param_1;
}



// FUNCTION 1480de922 FUN_1480de922 body=189 status=ok
// SIG undefined FUN_1480de922(void)

longlong FUN_1480de922(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x130;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x130) == *param_3) {
          if (lVar3 != 0) goto LAB_1480de9c2;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x120);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1480de9e0(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x130 + *param_1;
LAB_1480de9c2:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 0x10;
}



// FUNCTION 1480de9e0 FUN_1480de9e0 body=281 status=ok
// SIG undefined FUN_1480de9e0(void)

undefined4 * FUN_1480de9e0(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_1480deafa(param_1,local_48);
  FUN_1480dec8c(param_4,local_40);
  *(undefined4 *)(local_40 + 0x120) = 0xffffffff;
  cVar1 = FUN_1480debe8(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x124) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x120) =
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
      FUN_1480dee0a(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480deafa FUN_1480deafa body=237 status=ok
// SIG undefined FUN_1480deafa(void)

int * FUN_1480deafa(longlong *param_1,int *param_2)

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
      FUN_145797782(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x130);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x130) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x130 + *param_1;
  return param_2;
}



// FUNCTION 1480debe8 FUN_1480debe8 body=164 status=ok
// SIG undefined FUN_1480debe8(void)

undefined8 FUN_1480debe8(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x130);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x130) == *param_3) {
          FUN_1480da404((longlong)_Dst + 0x10);
          memmove(_Dst,param_3,0x120);
          FUN_1480de820(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x120);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1480dec8c FUN_1480dec8c body=381 status=ok
// SIG undefined FUN_1480dec8c(void)

undefined8 * FUN_1480dec8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_148 [32];
  undefined8 local_128 [15];
  undefined1 local_b0 [4];
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined8 local_9c;
  undefined8 uStack_94;
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
  undefined8 local_28;
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_128[0xe] = 0;
  local_128[0xc] = 0;
  local_128[0xd] = 0;
  local_128[10] = 0;
  local_128[0xb] = 0;
  local_128[8] = 0;
  local_128[9] = 0;
  local_128[6] = 0;
  local_128[7] = 0;
  local_128[4] = 0;
  local_128[5] = 0;
  local_128[2] = 0;
  local_128[3] = 0;
  local_128[0] = 0;
  local_128[1] = 0;
  local_b0[0] = 8;
  local_ac = 0;
  uStack_a4 = 0;
  local_9c = 0;
  uStack_94 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = DAT_14c84635c;
  local_20 = 0;
  if (DAT_14c9c0de0 != 0) {
    local_20 = DAT_14c9c0de0;
    LOCK();
    *(int *)(DAT_14c9c0de0 + 8) = *(int *)(DAT_14c9c0de0 + 8) + 1;
    UNLOCK();
  }
  *param_2 = *(undefined8 *)*param_1;
  lVar3 = 0;
  do {
    *(undefined8 *)((longlong)param_2 + lVar3 + 0x10) = *(undefined8 *)((longlong)local_128 + lVar3)
    ;
    *(undefined8 *)((longlong)local_128 + lVar3) = 0;
    *(undefined8 *)((longlong)param_2 + lVar3 + 0x18) =
         *(undefined8 *)((longlong)local_128 + lVar3 + 8);
    *(undefined8 *)((longlong)local_128 + lVar3 + 8) = 0;
    *(undefined8 *)((longlong)param_2 + lVar3 + 0x20) =
         *(undefined8 *)((longlong)local_128 + lVar3 + 0x10);
    *(undefined8 *)((longlong)local_128 + lVar3 + 0x10) = 0;
    uVar2 = *(undefined8 *)((longlong)local_128 + lVar3 + 0x20);
    puVar1 = (undefined8 *)((longlong)param_2 + lVar3 + 0x28);
    *puVar1 = *(undefined8 *)((longlong)local_128 + lVar3 + 0x18);
    puVar1[1] = uVar2;
    lVar3 = lVar3 + 0x28;
  } while (lVar3 != 0x78);
  memcpy(param_2 + 0x11,local_b0,0x90);
  param_2[0x23] = local_20;
  local_20 = 0;
  FUN_1480da404();
  if ((local_10 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480dee0a FUN_1480dee0a body=456 status=ok
// SIG undefined FUN_1480dee0a(void)

void FUN_1480dee0a(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x130;
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x124 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x120 + lVar7) =
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



// FUNCTION 1480defd4 FUN_1480defd4 body=185 status=ok
// SIG undefined FUN_1480defd4(void)

longlong * FUN_1480defd4(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    lVar3 = *param_1;
    *param_1 = *param_2;
    *param_2 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar3 = param_1[1];
    param_1[1] = param_2[1];
    param_2[1] = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar3 = param_1[2];
    param_1[2] = param_2[2];
    param_2[2] = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  lVar3 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = lVar3;
  return param_1;
}



// FUNCTION 1480df08e FUN_1480df08e body=154 status=ok
// SIG undefined FUN_1480df08e(void)

void FUN_1480df08e(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_1480df128();
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  lVar3 = param_1[2];
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x7b;
  *(int *)(lVar2 + 0x14 + lVar4) = (int)lVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cb39938;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0xf0;
  return;
}



// FUNCTION 1480df128 FUN_1480df128 body=258 status=ok
// SIG undefined FUN_1480df128(void)

void FUN_1480df128(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb399b8) {
    FUN_144b3d300(&DAT_14cb399b8);
    if (DAT_14cb399b8 == -1) {
      FUN_1480df22c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FShaderParameters";
      local_38 = 0;
      local_50 = 0xf0;
      local_58 = 0x15;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb39938,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14393a565);
      _Init_thread_footer(&DAT_14cb399b8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480df22c FUN_1480df22c body=226 status=ok
// SIG undefined FUN_1480df22c(void)

longlong * FUN_1480df22c(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1480df310;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480df310 FUN_1480df310 body=136 status=ok
// SIG undefined FUN_1480df310(void)

code * FUN_1480df310(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SharedSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe000000028;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480df398;
}



// FUNCTION 1480df398 FUN_1480df398 body=136 status=ok
// SIG undefined FUN_1480df398(void)

code * FUN_1480df398(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SystemLWCTile";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd000000027;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480df420;
}



// FUNCTION 1480df420 FUN_1480df420 body=136 status=ok
// SIG undefined FUN_1480df420(void)

code * FUN_1480df420(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WorldHeightUnpack";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc000000026;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480df4a8;
}



// FUNCTION 1480df4a8 FUN_1480df4a8 body=136 status=ok
// SIG undefined FUN_1480df4a8(void)

code * FUN_1480df4a8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"UVUniforms";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9000000025;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480df530;
}



// FUNCTION 1480df530 FUN_1480df530 body=136 status=ok
// SIG undefined FUN_1480df530(void)

code * FUN_1480df530(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PageTableUniforms";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7000000024;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480df5b8;
}



// FUNCTION 1480df5b8 FUN_1480df5b8 body=136 status=ok
// SIG undefined FUN_1480df5b8(void)

code * FUN_1480df5b8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaterialType";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6400000023;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480df640;
}



// FUNCTION 1480df640 FUN_1480df640 body=136 status=ok
// SIG undefined FUN_1480df640(void)

code * FUN_1480df640(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ValidLayersMask";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000022;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480df6c8;
}



// FUNCTION 1480df6c8 FUN_1480df6c8 body=136 status=ok
// SIG undefined FUN_1480df6c8(void)

code * FUN_1480df6c8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VirtualTexture2TextureUniforms";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000020;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480df750;
}



// FUNCTION 1480df750 FUN_1480df750 body=136 status=ok
// SIG undefined FUN_1480df750(void)

code * FUN_1480df750(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VirtualTexture2PageTable";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<uint4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x480000001f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480df7d8;
}



// FUNCTION 1480df7d8 FUN_1480df7d8 body=136 status=ok
// SIG undefined FUN_1480df7d8(void)

code * FUN_1480df7d8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VirtualTexture2";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000001e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480df860;
}



// FUNCTION 1480df860 FUN_1480df860 body=136 status=ok
// SIG undefined FUN_1480df860(void)

code * FUN_1480df860(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VirtualTexture1TextureUniforms";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000001c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480df8e8;
}



// FUNCTION 1480df8e8 FUN_1480df8e8 body=136 status=ok
// SIG undefined FUN_1480df8e8(void)

code * FUN_1480df8e8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VirtualTexture1PageTable";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<uint4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x280000001b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480df970;
}



// FUNCTION 1480df970 FUN_1480df970 body=136 status=ok
// SIG undefined FUN_1480df970(void)

code * FUN_1480df970(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VirtualTexture1";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000001a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480df9f8;
}



// FUNCTION 1480df9f8 FUN_1480df9f8 body=136 status=ok
// SIG undefined FUN_1480df9f8(void)

code * FUN_1480df9f8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VirtualTexture0TextureUniforms";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000018;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480dfa80;
}



// FUNCTION 1480dfa80 FUN_1480dfa80 body=136 status=ok
// SIG undefined FUN_1480dfa80(void)

code * FUN_1480dfa80(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VirtualTexture0PageTable";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<uint4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000017;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480dfb08;
}



// FUNCTION 1480dfb08 FUN_1480dfb08 body=130 status=ok
// SIG undefined FUN_1480dfb08(void)

undefined1 * FUN_1480dfb08(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VirtualTexture0";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x16;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1480dfb8a;
}



// FUNCTION 1480dfb8e FUN_1480dfb8e body=389 status=ok
// SIG undefined FUN_1480dfb8e(void)

undefined8 FUN_1480dfb8e(longlong param_1,undefined8 param_2,undefined4 *param_3,int param_4)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  double *local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  double local_98;
  double local_90;
  undefined8 local_88;
  double local_80;
  double local_78;
  undefined8 local_70;
  double local_68;
  double local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar2 = *(longlong **)(param_1 + 8);
  uVar1 = *(uint *)(param_1 + 0x10);
  plVar3 = (longlong *)plVar2[1];
  uVar4 = (**(code **)(*plVar3 + 0x60))(plVar3,param_4 * 3);
  lVar5 = *plVar2;
  lVar5 = (ulonglong)uVar4 * (ulonglong)*(uint *)(lVar5 + 0xa8) * 8 + *(longlong *)(lVar5 + 0x98);
  local_90 = (double)*(float *)(lVar5 + 4 + (ulonglong)uVar1 * 8);
  local_98 = (double)*(float *)(lVar5 + (ulonglong)uVar1 * 8);
  local_88 = 0;
  plVar2 = *(longlong **)(param_1 + 8);
  uVar1 = *(uint *)(param_1 + 0x10);
  plVar3 = (longlong *)plVar2[1];
  uVar4 = (**(code **)(*plVar3 + 0x60))(plVar3,param_4 * 3 + 1);
  lVar5 = *plVar2;
  lVar5 = (ulonglong)uVar4 * (ulonglong)*(uint *)(lVar5 + 0xa8) * 8 + *(longlong *)(lVar5 + 0x98);
  local_78 = (double)*(float *)(lVar5 + 4 + (ulonglong)uVar1 * 8);
  local_80 = (double)*(float *)(lVar5 + (ulonglong)uVar1 * 8);
  local_70 = 0;
  plVar2 = *(longlong **)(param_1 + 8);
  uVar1 = *(uint *)(param_1 + 0x10);
  plVar3 = (longlong *)plVar2[1];
  uVar4 = (**(code **)(*plVar3 + 0x60))(plVar3,param_4 * 3 + 2);
  lVar5 = *plVar2;
  lVar5 = (ulonglong)uVar4 * (ulonglong)*(uint *)(lVar5 + 0xa8) * 8 + *(longlong *)(lVar5 + 0x98);
  local_60 = (double)*(float *)(lVar5 + 4 + (ulonglong)uVar1 * 8);
  local_68 = (double)*(float *)(lVar5 + (ulonglong)uVar1 * 8);
  local_58 = 0;
  local_b0 = *param_3;
  uStack_ac = param_3[1];
  uStack_a8 = param_3[2];
  uStack_a4 = param_3[3];
  local_a0 = 0;
  local_b8 = &local_68;
  FUN_14276f93e(param_2,&local_b0,&local_98,&local_80);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480dfd14 FUN_1480dfd14 body=993 status=ok
// SIG undefined FUN_1480dfd14(void)

undefined8 FUN_1480dfd14(longlong param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  float fVar6;
  longlong lVar7;
  uint uVar8;
  float fVar9;
  undefined1 auStack_c8 [32];
  double *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  double local_88;
  double local_80;
  undefined8 local_78;
  double local_70;
  double local_68;
  undefined8 local_60;
  double local_58;
  double local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar3 = *(longlong **)(param_1 + 8);
  uVar8 = *(uint *)(param_1 + 0x10);
  param_4 = param_4 * 3;
  plVar4 = (longlong *)plVar3[1];
  uVar5 = (**(code **)(*plVar4 + 0x60))(plVar4,param_4);
  lVar7 = *plVar3;
  lVar7 = (ulonglong)uVar5 * (ulonglong)*(uint *)(lVar7 + 0xa8) * 4 + *(longlong *)(lVar7 + 0x98);
  uVar1 = *(ushort *)(lVar7 + 2 + (ulonglong)uVar8 * 4);
  uVar5 = (uint)uVar1 << 0xd;
  if ((uVar5 & 0xf800000) == 0xf800000) {
    fVar6 = (float)(uVar5 | 0x70000000);
  }
  else if ((uVar5 & 0xf800000) == 0) {
    fVar6 = (float)(uVar5 | 0x38800000) + -6.1035156e-05;
  }
  else {
    fVar6 = (float)((uVar5 & 0xfffe000) + 0x38000000);
  }
  uVar2 = *(ushort *)(lVar7 + (ulonglong)uVar8 * 4);
  uVar8 = (uint)uVar2 << 0xd;
  if ((uVar8 & 0xf800000) == 0xf800000) {
    fVar9 = (float)(uVar8 | 0x70000000);
  }
  else if ((uVar8 & 0xf800000) == 0) {
    fVar9 = (float)(uVar8 | 0x38800000) + -6.1035156e-05;
  }
  else {
    fVar9 = (float)((uVar8 & 0xfffe000) + 0x38000000);
  }
  local_80 = (double)(float)((uint)fVar6 | (int)(short)uVar1 & 0x80000000U);
  local_88 = (double)(float)((int)(short)uVar2 & 0x80000000U | (uint)fVar9);
  local_78 = 0;
  plVar3 = *(longlong **)(param_1 + 8);
  uVar8 = *(uint *)(param_1 + 0x10);
  plVar4 = (longlong *)plVar3[1];
  uVar5 = (**(code **)(*plVar4 + 0x60))(plVar4,param_4 + 1);
  lVar7 = *plVar3;
  lVar7 = (ulonglong)uVar5 * (ulonglong)*(uint *)(lVar7 + 0xa8) * 4 + *(longlong *)(lVar7 + 0x98);
  uVar1 = *(ushort *)(lVar7 + 2 + (ulonglong)uVar8 * 4);
  uVar5 = (uint)uVar1 << 0xd;
  if ((uVar5 & 0xf800000) == 0xf800000) {
    fVar6 = (float)(uVar5 | 0x70000000);
  }
  else if ((uVar5 & 0xf800000) == 0) {
    fVar6 = (float)(uVar5 | 0x38800000) + -6.1035156e-05;
  }
  else {
    fVar6 = (float)((uVar5 & 0xfffe000) + 0x38000000);
  }
  uVar2 = *(ushort *)(lVar7 + (ulonglong)uVar8 * 4);
  uVar8 = (uint)uVar2 << 0xd;
  if ((uVar8 & 0xf800000) == 0xf800000) {
    fVar9 = (float)(uVar8 | 0x70000000);
  }
  else if ((uVar8 & 0xf800000) == 0) {
    fVar9 = (float)(uVar8 | 0x38800000) + -6.1035156e-05;
  }
  else {
    fVar9 = (float)((uVar8 & 0xfffe000) + 0x38000000);
  }
  local_68 = (double)(float)((uint)fVar6 | (int)(short)uVar1 & 0x80000000U);
  local_70 = (double)(float)((int)(short)uVar2 & 0x80000000U | (uint)fVar9);
  local_60 = 0;
  plVar3 = *(longlong **)(param_1 + 8);
  uVar8 = *(uint *)(param_1 + 0x10);
  plVar4 = (longlong *)plVar3[1];
  uVar5 = (**(code **)(*plVar4 + 0x60))(plVar4,param_4 + 2);
  lVar7 = *plVar3;
  lVar7 = (ulonglong)uVar5 * (ulonglong)*(uint *)(lVar7 + 0xa8) * 4 + *(longlong *)(lVar7 + 0x98);
  uVar1 = *(ushort *)(lVar7 + 2 + (ulonglong)uVar8 * 4);
  uVar5 = (uint)uVar1 << 0xd;
  if ((uVar5 & 0xf800000) == 0xf800000) {
    fVar6 = (float)(uVar5 | 0x70000000);
  }
  else if ((uVar5 & 0xf800000) == 0) {
    fVar6 = (float)(uVar5 | 0x38800000) + -6.1035156e-05;
  }
  else {
    fVar6 = (float)((uVar5 & 0xfffe000) + 0x38000000);
  }
  uVar2 = *(ushort *)(lVar7 + (ulonglong)uVar8 * 4);
  uVar8 = (uint)uVar2 << 0xd;
  if ((uVar8 & 0xf800000) == 0xf800000) {
    fVar9 = (float)(uVar8 | 0x70000000);
  }
  else if ((uVar8 & 0xf800000) == 0) {
    fVar9 = (float)(uVar8 | 0x38800000) + -6.1035156e-05;
  }
  else {
    fVar9 = (float)((uVar8 & 0xfffe000) + 0x38000000);
  }
  local_a8 = &local_58;
  local_50 = (double)(float)((uint)fVar6 | (int)(short)uVar1 & 0x80000000U);
  local_58 = (double)(float)((int)(short)uVar2 & 0x80000000U | (uint)fVar9);
  local_48 = 0;
  local_a0 = *param_3;
  uStack_98 = param_3[1];
  local_90 = 0;
  FUN_14276f93e(param_2,&local_a0,&local_88,&local_70);
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480e00f6 FUN_1480e00f6 body=390 status=ok
// SIG undefined FUN_1480e00f6(void)

bool FUN_1480e00f6(longlong param_1,longlong param_2,double *param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  double *pdVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int local_58 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar9 = 0;
    do {
      lVar7 = (longlong)*(int *)(lVar2 + lVar9) * 0x30;
      pdVar6 = (double *)(*(longlong *)(param_2 + 0x18) + 0x10 + lVar7);
      if ((((*param_3 < *pdVar6 || *param_3 == *pdVar6) &&
           (pdVar6 = (double *)(*(longlong *)(param_2 + 0x18) + lVar7),
           *pdVar6 < param_3[2] || *pdVar6 == param_3[2])) &&
          (param_3[1] < pdVar6[3] || param_3[1] == pdVar6[3])) &&
         ((pdVar6[1] < param_3[3] || pdVar6[1] == param_3[3] &&
          (cVar4 = FUN_1480e027e(param_4), cVar4 == '\0')))) goto LAB_1480e0276;
      lVar9 = lVar9 + 4;
    } while ((longlong)iVar1 * 4 != lVar9);
  }
  uVar5 = FUN_1481fa93a(param_1,param_3,local_58);
  bVar10 = true;
  if (0 < (int)uVar5) {
    local_88 = *param_4;
    uStack_80 = param_4[1];
    local_78 = *(undefined4 *)(param_4 + 2);
    uStack_74 = *(undefined4 *)((longlong)param_4 + 0x14);
    uStack_70 = *(undefined4 *)(param_4 + 3);
    uStack_6c = *(undefined4 *)((longlong)param_4 + 0x1c);
    local_68 = param_4[4];
    cVar4 = FUN_1480e00f6((longlong)local_58[0] * 0x50 + *(longlong *)(param_2 + 8),param_2,param_3)
    ;
    if (cVar4 == '\0') {
LAB_1480e0276:
      bVar10 = false;
    }
    else {
      uVar3 = 1;
      do {
        uVar8 = uVar3;
        if (uVar5 == uVar8) break;
        local_88 = *param_4;
        uStack_80 = param_4[1];
        local_78 = *(undefined4 *)(param_4 + 2);
        uStack_74 = *(undefined4 *)((longlong)param_4 + 0x14);
        uStack_70 = *(undefined4 *)(param_4 + 3);
        uStack_6c = *(undefined4 *)((longlong)param_4 + 0x1c);
        local_68 = param_4[4];
        cVar4 = FUN_1480e00f6((longlong)local_58[uVar8] * 0x50 + *(longlong *)(param_2 + 8),param_2,
                              param_3,&local_88);
        uVar3 = uVar8 + 1;
      } while (cVar4 != '\0');
      bVar10 = uVar5 <= uVar8;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar10;
}



// FUNCTION 1480e027e FUN_1480e027e body=196 status=ok
// SIG undefined FUN_1480e027e(void)

undefined8 FUN_1480e027e(undefined8 *param_1,undefined4 param_2)

{
  float fVar1;
  double *pdVar2;
  undefined8 uVar3;
  double dVar4;
  undefined1 auStack_58 [32];
  double local_38;
  double dStack_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1480dfb8e(*param_1,&local_38,param_1[1],param_2);
  dVar4 = local_38;
  if (dStack_30 <= local_38) {
    dVar4 = dStack_30;
  }
  if (local_28 <= dVar4) {
    dVar4 = local_28;
  }
  fVar1 = *(float *)param_1[2];
  uVar3 = CONCAT71((int7)((ulonglong)param_1[2] >> 8),1);
  if ((double)-fVar1 < dVar4) {
    dVar4 = local_38;
    if (local_38 <= dStack_30) {
      dVar4 = dStack_30;
    }
    if (dVar4 <= local_28) {
      dVar4 = local_28;
    }
    if (dVar4 < (double)(fVar1 + 1.0)) {
      *(undefined4 *)param_1[3] = param_2;
      pdVar2 = (double *)param_1[4];
      pdVar2[2] = local_28;
      *pdVar2 = local_38;
      pdVar2[1] = dStack_30;
      uVar3 = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480e0344 FUN_1480e0344 body=390 status=ok
// SIG undefined FUN_1480e0344(void)

bool FUN_1480e0344(longlong param_1,longlong param_2,double *param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  double *pdVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int local_58 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar9 = 0;
    do {
      lVar7 = (longlong)*(int *)(lVar2 + lVar9) * 0x30;
      pdVar6 = (double *)(*(longlong *)(param_2 + 0x18) + 0x10 + lVar7);
      if ((((*param_3 < *pdVar6 || *param_3 == *pdVar6) &&
           (pdVar6 = (double *)(*(longlong *)(param_2 + 0x18) + lVar7),
           *pdVar6 < param_3[2] || *pdVar6 == param_3[2])) &&
          (param_3[1] < pdVar6[3] || param_3[1] == pdVar6[3])) &&
         ((pdVar6[1] < param_3[3] || pdVar6[1] == param_3[3] &&
          (cVar4 = FUN_1480e04cc(param_4), cVar4 == '\0')))) goto LAB_1480e04c4;
      lVar9 = lVar9 + 4;
    } while ((longlong)iVar1 * 4 != lVar9);
  }
  uVar5 = FUN_1481fa93a(param_1,param_3,local_58);
  bVar10 = true;
  if (0 < (int)uVar5) {
    local_88 = *param_4;
    uStack_80 = param_4[1];
    local_78 = *(undefined4 *)(param_4 + 2);
    uStack_74 = *(undefined4 *)((longlong)param_4 + 0x14);
    uStack_70 = *(undefined4 *)(param_4 + 3);
    uStack_6c = *(undefined4 *)((longlong)param_4 + 0x1c);
    local_68 = param_4[4];
    cVar4 = FUN_1480e0344((longlong)local_58[0] * 0x50 + *(longlong *)(param_2 + 8),param_2,param_3)
    ;
    if (cVar4 == '\0') {
LAB_1480e04c4:
      bVar10 = false;
    }
    else {
      uVar3 = 1;
      do {
        uVar8 = uVar3;
        if (uVar5 == uVar8) break;
        local_88 = *param_4;
        uStack_80 = param_4[1];
        local_78 = *(undefined4 *)(param_4 + 2);
        uStack_74 = *(undefined4 *)((longlong)param_4 + 0x14);
        uStack_70 = *(undefined4 *)(param_4 + 3);
        uStack_6c = *(undefined4 *)((longlong)param_4 + 0x1c);
        local_68 = param_4[4];
        cVar4 = FUN_1480e0344((longlong)local_58[uVar8] * 0x50 + *(longlong *)(param_2 + 8),param_2,
                              param_3,&local_88);
        uVar3 = uVar8 + 1;
      } while (cVar4 != '\0');
      bVar10 = uVar5 <= uVar8;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar10;
}



// FUNCTION 1480e04cc FUN_1480e04cc body=196 status=ok
// SIG undefined FUN_1480e04cc(void)

undefined8 FUN_1480e04cc(undefined8 *param_1,undefined4 param_2)

{
  float fVar1;
  double *pdVar2;
  undefined8 uVar3;
  double dVar4;
  undefined1 auStack_58 [32];
  double local_38;
  double dStack_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1480dfd14(*param_1,&local_38,param_1[1],param_2);
  dVar4 = local_38;
  if (dStack_30 <= local_38) {
    dVar4 = dStack_30;
  }
  if (local_28 <= dVar4) {
    dVar4 = local_28;
  }
  fVar1 = *(float *)param_1[2];
  uVar3 = CONCAT71((int7)((ulonglong)param_1[2] >> 8),1);
  if ((double)-fVar1 < dVar4) {
    dVar4 = local_38;
    if (local_38 <= dStack_30) {
      dVar4 = dStack_30;
    }
    if (dVar4 <= local_28) {
      dVar4 = local_28;
    }
    if (dVar4 < (double)(fVar1 + 1.0)) {
      *(undefined4 *)param_1[3] = param_2;
      pdVar2 = (double *)param_1[4];
      pdVar2[2] = local_28;
      *pdVar2 = local_38;
      pdVar2[1] = dStack_30;
      uVar3 = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480e0592 FUN_1480e0592 body=391 status=ok
// SIG undefined FUN_1480e0592(void)

bool FUN_1480e0592(longlong param_1,longlong param_2,double *param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  double *pdVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_58 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar9 = 0;
    do {
      lVar7 = (longlong)*(int *)(lVar2 + lVar9) * 0x30;
      pdVar6 = (double *)(*(longlong *)(param_2 + 0x18) + 0x10 + lVar7);
      if ((((*param_3 < *pdVar6 || *param_3 == *pdVar6) &&
           (pdVar6 = (double *)(*(longlong *)(param_2 + 0x18) + lVar7),
           *pdVar6 < param_3[2] || *pdVar6 == param_3[2])) &&
          (param_3[1] < pdVar6[3] || param_3[1] == pdVar6[3])) &&
         ((pdVar6[1] < param_3[3] || pdVar6[1] == param_3[3] &&
          (cVar4 = FUN_1480e071a(param_4), cVar4 == '\0')))) goto LAB_1480e0713;
      lVar9 = lVar9 + 4;
    } while ((longlong)iVar1 * 4 != lVar9);
  }
  uVar5 = FUN_1481fa93a(param_1,param_3,local_58);
  bVar10 = true;
  if (0 < (int)uVar5) {
    local_88 = *param_4;
    uStack_80 = param_4[1];
    local_78 = *(undefined4 *)(param_4 + 2);
    uStack_74 = *(undefined4 *)((longlong)param_4 + 0x14);
    uStack_70 = *(undefined4 *)(param_4 + 3);
    uStack_6c = *(undefined4 *)((longlong)param_4 + 0x1c);
    local_68 = *(undefined4 *)(param_4 + 4);
    uStack_64 = *(undefined4 *)((longlong)param_4 + 0x24);
    uStack_60 = *(undefined4 *)(param_4 + 5);
    uStack_5c = *(undefined4 *)((longlong)param_4 + 0x2c);
    cVar4 = FUN_1480e0592((longlong)local_58[0] * 0x50 + *(longlong *)(param_2 + 8),param_2,param_3)
    ;
    if (cVar4 == '\0') {
LAB_1480e0713:
      bVar10 = false;
    }
    else {
      uVar3 = 1;
      do {
        uVar8 = uVar3;
        if (uVar5 == uVar8) break;
        local_88 = *param_4;
        uStack_80 = param_4[1];
        local_78 = *(undefined4 *)(param_4 + 2);
        uStack_74 = *(undefined4 *)((longlong)param_4 + 0x14);
        uStack_70 = *(undefined4 *)(param_4 + 3);
        uStack_6c = *(undefined4 *)((longlong)param_4 + 0x1c);
        local_68 = *(undefined4 *)(param_4 + 4);
        uStack_64 = *(undefined4 *)((longlong)param_4 + 0x24);
        uStack_60 = *(undefined4 *)(param_4 + 5);
        uStack_5c = *(undefined4 *)((longlong)param_4 + 0x2c);
        cVar4 = FUN_1480e0592((longlong)local_58[uVar8] * 0x50 + *(longlong *)(param_2 + 8),param_2,
                              param_3,&local_88);
        uVar3 = uVar8 + 1;
      } while (cVar4 != '\0');
      bVar10 = uVar5 <= uVar8;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar10;
}



// FUNCTION 1480e071a FUN_1480e071a body=651 status=ok
// SIG undefined FUN_1480e071a(void)

uint FUN_1480e071a(longlong *param_1,int param_2)

{
  double dVar1;
  double dVar2;
  longlong *plVar3;
  longlong *plVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_118 [32];
  double *local_f8;
  double local_f0;
  double local_e8;
  undefined8 local_e0;
  double local_d8;
  double local_d0;
  undefined8 local_c8;
  double local_c0;
  double local_b8;
  undefined8 local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar15 = *param_1;
  plVar3 = *(longlong **)(lVar15 + 8);
  uVar13 = *(uint *)(lVar15 + 0x10);
  plVar4 = (longlong *)plVar3[1];
  uVar12 = (**(code **)(*plVar4 + 0x60))(plVar4,param_2 * 3);
  lVar14 = *plVar3;
  lVar14 = (ulonglong)uVar12 * (ulonglong)*(uint *)(lVar14 + 0xa8) * 8 +
           *(longlong *)(lVar14 + 0x98);
  dVar6 = (double)*(float *)(lVar14 + 4 + (ulonglong)uVar13 * 8);
  dVar7 = (double)*(float *)(lVar14 + (ulonglong)uVar13 * 8);
  plVar3 = *(longlong **)(lVar15 + 8);
  uVar13 = *(uint *)(lVar15 + 0x10);
  plVar4 = (longlong *)plVar3[1];
  uVar12 = (**(code **)(*plVar4 + 0x60))(plVar4,param_2 * 3 + 1);
  lVar14 = *plVar3;
  lVar14 = (ulonglong)uVar12 * (ulonglong)*(uint *)(lVar14 + 0xa8) * 8 +
           *(longlong *)(lVar14 + 0x98);
  dVar8 = (double)*(float *)(lVar14 + 4 + (ulonglong)uVar13 * 8);
  dVar9 = (double)*(float *)(lVar14 + (ulonglong)uVar13 * 8);
  plVar3 = *(longlong **)(lVar15 + 8);
  uVar13 = *(uint *)(lVar15 + 0x10);
  plVar4 = (longlong *)plVar3[1];
  uVar12 = (**(code **)(*plVar4 + 0x60))(plVar4,param_2 * 3 + 2);
  lVar15 = *plVar3;
  lVar15 = (ulonglong)uVar12 * (ulonglong)*(uint *)(lVar15 + 0xa8) * 8 +
           *(longlong *)(lVar15 + 0x98);
  dVar10 = (double)*(float *)(lVar15 + 4 + (ulonglong)uVar13 * 8);
  dVar11 = (double)*(float *)(lVar15 + (ulonglong)uVar13 * 8);
  dVar1 = *(double *)param_1[1];
  dVar2 = ((double *)param_1[1])[1];
  local_d8 = *(double *)param_1[2];
  local_d0 = ((double *)param_1[2])[1];
  dStack_a0 = dVar2 * dVar10 + local_d0;
  local_a8 = dVar1 * dVar11 + local_d8;
  local_b8 = dVar2 * dVar8 + local_d0;
  local_c0 = dVar1 * dVar9 + local_d8;
  local_d0 = dVar2 * dVar6 + local_d0;
  local_d8 = dVar1 * dVar7 + local_d8;
  uVar13 = FUN_1480e09a6(&local_d8,&local_c0);
  if ((char)uVar13 != '\0') {
    local_b0 = 0;
    local_c8 = 0;
    local_e0 = 0;
    local_f8 = &local_c0;
    local_f0 = dVar7;
    local_e8 = dVar6;
    local_d8 = dVar9;
    local_d0 = dVar8;
    local_c0 = dVar11;
    local_b8 = dVar10;
    FUN_14276f93e(&local_a8,param_1[4]);
    pdVar5 = (double *)param_1[3];
    pdVar5[2] = local_98;
    *pdVar5 = local_a8;
    pdVar5[1] = dStack_a0;
    *(int *)param_1[5] = param_2;
  }
  if ((local_90 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar13 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480e09a6 FUN_1480e09a6 body=633 status=ok
// SIG undefined FUN_1480e09a6(void)

bool FUN_1480e09a6(double *param_1,double *param_2,double *param_3)

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
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double *pdVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStack_f8 [32];
  double local_d8 [5];
  double local_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = *param_2;
  dVar4 = param_2[1];
  dVar5 = *param_1;
  dVar6 = param_1[1];
  uVar19 = (undefined4)((ulonglong)dVar6 >> 0x20);
  uVar26 = (undefined4)((ulonglong)dVar4 >> 0x20);
  uVar18 = SUB84(dVar6,0);
  uVar20 = uVar19;
  if (dVar4 <= dVar6) {
    uVar18 = SUB84(dVar4,0);
    uVar20 = uVar26;
  }
  uVar27 = (undefined4)((ulonglong)dVar2 >> 0x20);
  if (dVar2 <= (double)CONCAT44(uVar20,uVar18)) {
    uVar18 = SUB84(dVar2,0);
    uVar20 = uVar27;
  }
  uVar21 = (undefined4)((ulonglong)dVar5 >> 0x20);
  uVar23 = (undefined4)((ulonglong)dVar3 >> 0x20);
  uVar22 = SUB84(dVar5,0);
  uVar25 = uVar21;
  if (dVar3 <= dVar5) {
    uVar22 = SUB84(dVar3,0);
    uVar25 = uVar23;
  }
  uVar24 = (undefined4)((ulonglong)dVar1 >> 0x20);
  if (dVar1 <= (double)CONCAT44(uVar25,uVar22)) {
    uVar22 = SUB84(dVar1,0);
    uVar25 = uVar24;
  }
  if ((double)CONCAT44(uVar25,uVar22) <= (double)CONCAT44(uVar20,uVar18)) {
    uVar22 = uVar18;
    uVar25 = uVar20;
  }
  if ((double)CONCAT44(uVar25,uVar22) < 1.0 || (double)CONCAT44(uVar25,uVar22) == 1.0) {
    uVar18 = SUB84(dVar5,0);
    if (dVar5 <= dVar3) {
      uVar18 = SUB84(dVar3,0);
      uVar21 = uVar23;
    }
    if ((double)CONCAT44(uVar21,uVar18) <= dVar1) {
      uVar18 = SUB84(dVar1,0);
      uVar21 = uVar24;
    }
    uVar20 = SUB84(dVar6,0);
    if (dVar6 <= dVar4) {
      uVar20 = SUB84(dVar4,0);
      uVar19 = uVar26;
    }
    if ((double)CONCAT44(uVar19,uVar20) <= dVar2) {
      uVar20 = SUB84(dVar2,0);
      uVar19 = uVar27;
    }
    if ((double)CONCAT44(uVar19,uVar20) <= (double)CONCAT44(uVar21,uVar18)) {
      uVar18 = uVar20;
      uVar21 = uVar19;
    }
    if (0.0 < (double)CONCAT44(uVar21,uVar18) || (double)CONCAT44(uVar21,uVar18) == 0.0) {
      pdVar15 = local_d8 + 1;
      local_d8[0] = dVar1 - dVar3;
      local_d8[1] = dVar2 - dVar4;
      local_d8[2] = dVar5 - dVar1;
      local_d8[3] = dVar6 - dVar2;
      local_d8[4] = dVar3 - dVar5;
      local_b0 = dVar4 - dVar6;
      uVar16 = 0;
      bVar17 = false;
      do {
        dVar7 = pdVar15[-1];
        uVar26 = (undefined4)((ulonglong)dVar7 >> 0x20);
        dVar8 = *pdVar15;
        dVar9 = -dVar8;
        uVar18 = (undefined4)((ulonglong)dVar9 >> 0x20);
        dVar10 = dVar7 - dVar8;
        uVar20 = SUB84(dVar8,0);
        uVar19 = uVar18;
        if (dVar7 <= dVar9) {
          uVar20 = SUB84(dVar7,0);
          uVar19 = uVar26;
        }
        if (dVar10 <= (double)CONCAT44(uVar19,uVar20)) {
          uVar20 = SUB84(dVar10,0);
          uVar19 = (undefined4)((ulonglong)dVar10 >> 0x20);
        }
        uVar27 = 0;
        uVar21 = 0;
        if ((double)CONCAT44(uVar19,uVar20) <= 0.0) {
          uVar27 = uVar20;
          uVar21 = uVar19;
        }
        dVar11 = dVar2 * dVar7 - dVar1 * dVar8;
        dVar12 = dVar4 * dVar7 - dVar3 * dVar8;
        dVar13 = dVar6 * dVar7 - dVar8 * dVar5;
        dVar14 = dVar13;
        if (dVar13 <= dVar12) {
          dVar14 = dVar12;
        }
        if (dVar14 <= dVar11) {
          dVar14 = dVar11;
        }
        if (dVar14 <= (double)CONCAT44(uVar21,uVar27) && (double)CONCAT44(uVar21,uVar27) != dVar14)
        break;
        uVar20 = SUB84(dVar8,0);
        if (dVar9 <= dVar7) {
          uVar20 = SUB84(dVar7,0);
          uVar18 = uVar26;
        }
        dVar7 = (double)CONCAT44(uVar18,uVar20);
        if ((double)CONCAT44(uVar18,uVar20) <= dVar10) {
          dVar7 = dVar10;
        }
        dVar8 = 0.0;
        if (0.0 <= dVar7) {
          dVar8 = dVar7;
        }
        if (dVar12 <= dVar13) {
          dVar13 = dVar12;
        }
        if (dVar11 <= dVar13) {
          dVar13 = dVar11;
        }
        if (dVar8 < dVar13) break;
        bVar17 = 1 < uVar16;
        uVar16 = uVar16 + 1;
        pdVar15 = pdVar15 + 2;
      } while (uVar16 != 3);
      goto LAB_1480e0a77;
    }
  }
  bVar17 = false;
LAB_1480e0a77:
  if ((DAT_14c707940 ^ (ulonglong)auStack_f8 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar17;
}



// FUNCTION 1480e0c20 FUN_1480e0c20 body=391 status=ok
// SIG undefined FUN_1480e0c20(void)

bool FUN_1480e0c20(longlong param_1,longlong param_2,double *param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  double *pdVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_58 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar9 = 0;
    do {
      lVar7 = (longlong)*(int *)(lVar2 + lVar9) * 0x30;
      pdVar6 = (double *)(*(longlong *)(param_2 + 0x18) + 0x10 + lVar7);
      if ((((*param_3 < *pdVar6 || *param_3 == *pdVar6) &&
           (pdVar6 = (double *)(*(longlong *)(param_2 + 0x18) + lVar7),
           *pdVar6 < param_3[2] || *pdVar6 == param_3[2])) &&
          (param_3[1] < pdVar6[3] || param_3[1] == pdVar6[3])) &&
         ((pdVar6[1] < param_3[3] || pdVar6[1] == param_3[3] &&
          (cVar4 = FUN_1480e0da8(param_4), cVar4 == '\0')))) goto LAB_1480e0da1;
      lVar9 = lVar9 + 4;
    } while ((longlong)iVar1 * 4 != lVar9);
  }
  uVar5 = FUN_1481fa93a(param_1,param_3,local_58);
  bVar10 = true;
  if (0 < (int)uVar5) {
    local_88 = *param_4;
    uStack_80 = param_4[1];
    local_78 = *(undefined4 *)(param_4 + 2);
    uStack_74 = *(undefined4 *)((longlong)param_4 + 0x14);
    uStack_70 = *(undefined4 *)(param_4 + 3);
    uStack_6c = *(undefined4 *)((longlong)param_4 + 0x1c);
    local_68 = *(undefined4 *)(param_4 + 4);
    uStack_64 = *(undefined4 *)((longlong)param_4 + 0x24);
    uStack_60 = *(undefined4 *)(param_4 + 5);
    uStack_5c = *(undefined4 *)((longlong)param_4 + 0x2c);
    cVar4 = FUN_1480e0c20((longlong)local_58[0] * 0x50 + *(longlong *)(param_2 + 8),param_2,param_3)
    ;
    if (cVar4 == '\0') {
LAB_1480e0da1:
      bVar10 = false;
    }
    else {
      uVar3 = 1;
      do {
        uVar8 = uVar3;
        if (uVar5 == uVar8) break;
        local_88 = *param_4;
        uStack_80 = param_4[1];
        local_78 = *(undefined4 *)(param_4 + 2);
        uStack_74 = *(undefined4 *)((longlong)param_4 + 0x14);
        uStack_70 = *(undefined4 *)(param_4 + 3);
        uStack_6c = *(undefined4 *)((longlong)param_4 + 0x1c);
        local_68 = *(undefined4 *)(param_4 + 4);
        uStack_64 = *(undefined4 *)((longlong)param_4 + 0x24);
        uStack_60 = *(undefined4 *)(param_4 + 5);
        uStack_5c = *(undefined4 *)((longlong)param_4 + 0x2c);
        cVar4 = FUN_1480e0c20((longlong)local_58[uVar8] * 0x50 + *(longlong *)(param_2 + 8),param_2,
                              param_3,&local_88);
        uVar3 = uVar8 + 1;
      } while (cVar4 != '\0');
      bVar10 = uVar5 <= uVar8;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar10;
}



// FUNCTION 1480e0da8 FUN_1480e0da8 body=1289 status=ok
// SIG undefined FUN_1480e0da8(void)

uint FUN_1480e0da8(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  longlong *plVar8;
  longlong *plVar9;
  double *pdVar10;
  double dVar11;
  double dVar12;
  int iVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auStack_148 [32];
  double *local_128;
  longlong *local_120;
  undefined8 local_118;
  double local_110;
  double local_108;
  undefined8 local_100;
  double local_f8;
  double local_f0;
  undefined8 local_e8;
  double local_e0;
  double local_d8;
  undefined8 local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar19 = *param_1;
  plVar8 = *(longlong **)(lVar19 + 8);
  uVar17 = *(uint *)(lVar19 + 0x10);
  iVar13 = (int)param_2 * 3;
  plVar9 = (longlong *)plVar8[1];
  local_120 = param_1;
  local_118 = param_2;
  uVar14 = (**(code **)(*plVar9 + 0x60))(plVar9,iVar13);
  lVar18 = *plVar8;
  lVar18 = (ulonglong)uVar14 * (ulonglong)*(uint *)(lVar18 + 0xa8) * 4 +
           *(longlong *)(lVar18 + 0x98);
  uVar3 = *(ushort *)(lVar18 + 2 + (ulonglong)uVar17 * 4);
  uVar14 = (uint)uVar3 << 0xd;
  if ((uVar14 & 0xf800000) == 0xf800000) {
    fVar21 = (float)(uVar14 | 0x70000000);
  }
  else if ((uVar14 & 0xf800000) == 0) {
    fVar21 = (float)(uVar14 | 0x38800000) + -6.1035156e-05;
  }
  else {
    fVar21 = (float)((uVar14 & 0xfffe000) + 0x38000000);
  }
  uVar4 = *(ushort *)(lVar18 + (ulonglong)uVar17 * 4);
  uVar17 = (uint)uVar4 << 0xd;
  if ((uVar17 & 0xf800000) == 0xf800000) {
    fVar22 = (float)(uVar17 | 0x70000000);
  }
  else if ((uVar17 & 0xf800000) == 0) {
    fVar22 = (float)(uVar17 | 0x38800000) + -6.1035156e-05;
  }
  else {
    fVar22 = (float)((uVar17 & 0xfffe000) + 0x38000000);
  }
  plVar8 = *(longlong **)(lVar19 + 8);
  uVar17 = *(uint *)(lVar19 + 0x10);
  plVar9 = (longlong *)plVar8[1];
  uVar14 = (**(code **)(*plVar9 + 0x60))(plVar9,iVar13 + 1);
  lVar18 = *plVar8;
  lVar18 = (ulonglong)uVar14 * (ulonglong)*(uint *)(lVar18 + 0xa8) * 4 +
           *(longlong *)(lVar18 + 0x98);
  uVar5 = *(ushort *)(lVar18 + 2 + (ulonglong)uVar17 * 4);
  uVar14 = (uint)uVar5 << 0xd;
  if ((uVar14 & 0xf800000) == 0xf800000) {
    fVar15 = (float)(uVar14 | 0x70000000);
  }
  else if ((uVar14 & 0xf800000) == 0) {
    fVar15 = (float)(uVar14 | 0x38800000) + -6.1035156e-05;
  }
  else {
    fVar15 = (float)((uVar14 & 0xfffe000) + 0x38000000);
  }
  uVar6 = *(ushort *)(lVar18 + (ulonglong)uVar17 * 4);
  uVar17 = (uint)uVar6 << 0xd;
  if ((uVar17 & 0xf800000) == 0xf800000) {
    fVar20 = (float)(uVar17 | 0x70000000);
  }
  else if ((uVar17 & 0xf800000) == 0) {
    fVar20 = (float)(uVar17 | 0x38800000) + -6.1035156e-05;
  }
  else {
    fVar20 = (float)((uVar17 & 0xfffe000) + 0x38000000);
  }
  plVar8 = *(longlong **)(lVar19 + 8);
  uVar17 = *(uint *)(lVar19 + 0x10);
  plVar9 = (longlong *)plVar8[1];
  uVar14 = (**(code **)(*plVar9 + 0x60))(plVar9,iVar13 + 2);
  plVar9 = local_120;
  lVar19 = *plVar8;
  lVar19 = (ulonglong)uVar14 * (ulonglong)*(uint *)(lVar19 + 0xa8) * 4 +
           *(longlong *)(lVar19 + 0x98);
  uVar7 = *(ushort *)(lVar19 + 2 + (ulonglong)uVar17 * 4);
  uVar14 = (uint)uVar7 << 0xd;
  if ((uVar14 & 0xf800000) == 0xf800000) {
    fVar16 = (float)(uVar14 | 0x70000000);
  }
  else if ((uVar14 & 0xf800000) == 0) {
    fVar16 = (float)(uVar14 | 0x38800000) + -6.1035156e-05;
  }
  else {
    fVar16 = (float)((uVar14 & 0xfffe000) + 0x38000000);
  }
  dVar23 = (double)(float)((uint)fVar21 | (int)(short)uVar3 & 0x80000000U);
  dVar24 = (double)(float)((uint)fVar22 | (int)(short)uVar4 & 0x80000000U);
  dVar25 = (double)(float)((uint)fVar15 | (int)(short)uVar5 & 0x80000000U);
  dVar26 = (double)(float)((int)(short)uVar6 & 0x80000000U | (uint)fVar20);
  uVar3 = *(ushort *)(lVar19 + (ulonglong)uVar17 * 4);
  uVar17 = (uint)uVar3 << 0xd;
  if ((uVar17 & 0xf800000) == 0xf800000) {
    fVar21 = (float)(uVar17 | 0x70000000);
  }
  else if ((uVar17 & 0xf800000) == 0) {
    fVar21 = (float)(uVar17 | 0x38800000) + -6.1035156e-05;
  }
  else {
    fVar21 = (float)((uVar17 & 0xfffe000) + 0x38000000);
  }
  dVar11 = (double)(float)((uint)fVar16 | (int)(short)uVar7 & 0x80000000U);
  dVar12 = (double)(float)((int)(short)uVar3 & 0x80000000U | (uint)fVar21);
  dVar1 = *(double *)local_120[1];
  dVar2 = ((double *)local_120[1])[1];
  local_f8 = *(double *)local_120[2];
  local_f0 = ((double *)local_120[2])[1];
  dStack_c0 = dVar2 * dVar11 + local_f0;
  local_c8 = dVar1 * dVar12 + local_f8;
  local_d8 = dVar2 * dVar25 + local_f0;
  local_e0 = dVar1 * dVar26 + local_f8;
  local_f0 = dVar2 * dVar23 + local_f0;
  local_f8 = dVar1 * dVar24 + local_f8;
  uVar17 = FUN_1480e12b2(&local_f8,&local_e0);
  if ((char)uVar17 != '\0') {
    local_d0 = 0;
    local_e8 = 0;
    local_100 = 0;
    local_128 = &local_e0;
    local_110 = dVar24;
    local_108 = dVar23;
    local_f8 = dVar26;
    local_f0 = dVar25;
    local_e0 = dVar12;
    local_d8 = dVar11;
    FUN_14276f93e(&local_c8,plVar9[4]);
    pdVar10 = (double *)plVar9[3];
    pdVar10[2] = local_b8;
    *pdVar10 = local_c8;
    pdVar10[1] = dStack_c0;
    *(int *)plVar9[5] = (int)local_118;
  }
  if ((local_b0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar17 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480e12b2 FUN_1480e12b2 body=633 status=ok
// SIG undefined FUN_1480e12b2(void)

bool FUN_1480e12b2(double *param_1,double *param_2,double *param_3)

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
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double *pdVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStack_f8 [32];
  double local_d8 [5];
  double local_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = *param_2;
  dVar4 = param_2[1];
  dVar5 = *param_1;
  dVar6 = param_1[1];
  uVar19 = (undefined4)((ulonglong)dVar6 >> 0x20);
  uVar26 = (undefined4)((ulonglong)dVar4 >> 0x20);
  uVar18 = SUB84(dVar6,0);
  uVar20 = uVar19;
  if (dVar4 <= dVar6) {
    uVar18 = SUB84(dVar4,0);
    uVar20 = uVar26;
  }
  uVar27 = (undefined4)((ulonglong)dVar2 >> 0x20);
  if (dVar2 <= (double)CONCAT44(uVar20,uVar18)) {
    uVar18 = SUB84(dVar2,0);
    uVar20 = uVar27;
  }
  uVar21 = (undefined4)((ulonglong)dVar5 >> 0x20);
  uVar23 = (undefined4)((ulonglong)dVar3 >> 0x20);
  uVar22 = SUB84(dVar5,0);
  uVar25 = uVar21;
  if (dVar3 <= dVar5) {
    uVar22 = SUB84(dVar3,0);
    uVar25 = uVar23;
  }
  uVar24 = (undefined4)((ulonglong)dVar1 >> 0x20);
  if (dVar1 <= (double)CONCAT44(uVar25,uVar22)) {
    uVar22 = SUB84(dVar1,0);
    uVar25 = uVar24;
  }
  if ((double)CONCAT44(uVar25,uVar22) <= (double)CONCAT44(uVar20,uVar18)) {
    uVar22 = uVar18;
    uVar25 = uVar20;
  }
  if ((double)CONCAT44(uVar25,uVar22) < 1.0 || (double)CONCAT44(uVar25,uVar22) == 1.0) {
    uVar18 = SUB84(dVar5,0);
    if (dVar5 <= dVar3) {
      uVar18 = SUB84(dVar3,0);
      uVar21 = uVar23;
    }
    if ((double)CONCAT44(uVar21,uVar18) <= dVar1) {
      uVar18 = SUB84(dVar1,0);
      uVar21 = uVar24;
    }
    uVar20 = SUB84(dVar6,0);
    if (dVar6 <= dVar4) {
      uVar20 = SUB84(dVar4,0);
      uVar19 = uVar26;
    }
    if ((double)CONCAT44(uVar19,uVar20) <= dVar2) {
      uVar20 = SUB84(dVar2,0);
      uVar19 = uVar27;
    }
    if ((double)CONCAT44(uVar19,uVar20) <= (double)CONCAT44(uVar21,uVar18)) {
      uVar18 = uVar20;
      uVar21 = uVar19;
    }
    if (0.0 < (double)CONCAT44(uVar21,uVar18) || (double)CONCAT44(uVar21,uVar18) == 0.0) {
      pdVar15 = local_d8 + 1;
      local_d8[0] = dVar1 - dVar3;
      local_d8[1] = dVar2 - dVar4;
      local_d8[2] = dVar5 - dVar1;
      local_d8[3] = dVar6 - dVar2;
      local_d8[4] = dVar3 - dVar5;
      local_b0 = dVar4 - dVar6;
      uVar16 = 0;
      bVar17 = false;
      do {
        dVar7 = pdVar15[-1];
        uVar26 = (undefined4)((ulonglong)dVar7 >> 0x20);
        dVar8 = *pdVar15;
        dVar9 = -dVar8;
        uVar18 = (undefined4)((ulonglong)dVar9 >> 0x20);
        dVar10 = dVar7 - dVar8;
        uVar20 = SUB84(dVar8,0);
        uVar19 = uVar18;
        if (dVar7 <= dVar9) {
          uVar20 = SUB84(dVar7,0);
          uVar19 = uVar26;
        }
        if (dVar10 <= (double)CONCAT44(uVar19,uVar20)) {
          uVar20 = SUB84(dVar10,0);
          uVar19 = (undefined4)((ulonglong)dVar10 >> 0x20);
        }
        uVar27 = 0;
        uVar21 = 0;
        if ((double)CONCAT44(uVar19,uVar20) <= 0.0) {
          uVar27 = uVar20;
          uVar21 = uVar19;
        }
        dVar11 = dVar2 * dVar7 - dVar1 * dVar8;
        dVar12 = dVar4 * dVar7 - dVar3 * dVar8;
        dVar13 = dVar6 * dVar7 - dVar8 * dVar5;
        dVar14 = dVar13;
        if (dVar13 <= dVar12) {
          dVar14 = dVar12;
        }
        if (dVar14 <= dVar11) {
          dVar14 = dVar11;
        }
        if (dVar14 <= (double)CONCAT44(uVar21,uVar27) && (double)CONCAT44(uVar21,uVar27) != dVar14)
        break;
        uVar20 = SUB84(dVar8,0);
        if (dVar9 <= dVar7) {
          uVar20 = SUB84(dVar7,0);
          uVar18 = uVar26;
        }
        dVar7 = (double)CONCAT44(uVar18,uVar20);
        if ((double)CONCAT44(uVar18,uVar20) <= dVar10) {
          dVar7 = dVar10;
        }
        dVar8 = 0.0;
        if (0.0 <= dVar7) {
          dVar8 = dVar7;
        }
        if (dVar12 <= dVar13) {
          dVar13 = dVar12;
        }
        if (dVar11 <= dVar13) {
          dVar13 = dVar11;
        }
        if (dVar8 < dVar13) break;
        bVar17 = 1 < uVar16;
        uVar16 = uVar16 + 1;
        pdVar15 = pdVar15 + 2;
      } while (uVar16 != 3);
      goto LAB_1480e1383;
    }
  }
  bVar17 = false;
LAB_1480e1383:
  if ((DAT_14c707940 ^ (ulonglong)auStack_f8 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar17;
}



// FUNCTION 1480e152c FUN_1480e152c body=62 status=ok
// SIG undefined FUN_1480e152c(void)

undefined8 FUN_1480e152c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_140aec85e();
  iVar1 = FUN_147526562(param_1,*(undefined8 *)(lVar2 + 0x18),param_2);
  if (iVar1 == -1) {
    return 0;
  }
  uVar3 = FUN_1480e156a(param_1,iVar1);
  return uVar3;
}



// FUNCTION 1480e156a FUN_1480e156a body=69 status=ok
// SIG undefined FUN_1480e156a(void)

undefined8 FUN_1480e156a(undefined8 param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  
  FUN_140aec85e();
  lVar1 = FUN_14752639a();
  if (lVar1 == 0) {
    iVar3 = 0;
    lVar1 = 0;
  }
  else {
    iVar3 = *(int *)(lVar1 + 0x10);
    lVar1 = *(longlong *)(lVar1 + 8);
  }
  uVar2 = 0;
  if ((-1 < (int)param_2) && ((int)param_2 < iVar3)) {
    uVar2 = *(undefined8 *)(lVar1 + (ulonglong)param_2 * 8);
  }
  return uVar2;
}



// FUNCTION 1480e15b0 FUN_1480e15b0 body=194 status=ok
// SIG undefined FUN_1480e15b0(void)

void FUN_1480e15b0(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0x148,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  *param_1 = &PTR_FUN_14a463c30;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8);
  *param_1 = &PTR_FUN_14a481250;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14ad909b0;
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  param_1[6] = 0;
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *param_1 = &PTR_FUN_14ad8f040;
  FUN_14764a36a(param_1 + 8,param_2 + 0x40);
  return;
}



// FUNCTION 1480e1672 FUN_1480e1672 body=62 status=ok
// SIG undefined FUN_1480e1672(void)

undefined8 FUN_1480e1672(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_140f938fc();
  iVar1 = FUN_147526562(param_1,*(undefined8 *)(lVar2 + 0x18),param_2);
  if (iVar1 == -1) {
    return 0;
  }
  uVar3 = FUN_1476b87f6(param_1,iVar1);
  return uVar3;
}



// FUNCTION 1480e16b0 FUN_1480e16b0 body=78 status=ok
// SIG undefined FUN_1480e16b0(void)

void FUN_1480e16b0(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0x480,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  FUN_1480e16fe(param_1,param_2);
  return;
}



// FUNCTION 1480e16fe FUN_1480e16fe body=197 status=ok
// SIG undefined FUN_1480e16fe(void)

undefined8 * FUN_1480e16fe(undefined8 *param_1,longlong param_2)

{
  *param_1 = &PTR_FUN_14a463c30;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8);
  *param_1 = &PTR_FUN_14a481250;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *param_1 = &PTR_FUN_14ad909b0;
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  param_1[6] = 0;
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *param_1 = &PTR_FUN_14ad8f770;
  FUN_147613664(param_1 + 8,param_2 + 0x40);
  FUN_147613664(param_1 + 0x2a,param_2 + 0x150);
  FUN_147613664(param_1 + 0x4c,param_2 + 0x260);
  FUN_147613664(param_1 + 0x6e,param_2 + 0x370);
  return param_1;
}



// FUNCTION 1480e17c4 FUN_1480e17c4 body=194 status=ok
// SIG undefined FUN_1480e17c4(void)

void FUN_1480e17c4(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0x150,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  *param_1 = &PTR_FUN_14a463c30;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8);
  *param_1 = &PTR_FUN_14a481250;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14ad909b0;
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  param_1[6] = 0;
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *param_1 = &PTR_FUN_14ad8fd80;
  FUN_147613664(param_1 + 8,param_2 + 0x40);
  return;
}



// FUNCTION 1480e1886 FUN_1480e1886 body=62 status=ok
// SIG undefined FUN_1480e1886(void)

undefined8 FUN_1480e1886(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_1458f5a7a();
  iVar1 = FUN_147526562(param_1,*(undefined8 *)(lVar2 + 0x18),param_2);
  if (iVar1 == -1) {
    return 0;
  }
  uVar3 = FUN_1480e18c4(param_1,iVar1);
  return uVar3;
}



// FUNCTION 1480e18c4 FUN_1480e18c4 body=69 status=ok
// SIG undefined FUN_1480e18c4(void)

undefined8 FUN_1480e18c4(undefined8 param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  
  FUN_1458f5a7a();
  lVar1 = FUN_14752639a();
  if (lVar1 == 0) {
    iVar3 = 0;
    lVar1 = 0;
  }
  else {
    iVar3 = *(int *)(lVar1 + 0x10);
    lVar1 = *(longlong *)(lVar1 + 8);
  }
  uVar2 = 0;
  if ((-1 < (int)param_2) && ((int)param_2 < iVar3)) {
    uVar2 = *(undefined8 *)(lVar1 + (ulonglong)param_2 * 8);
  }
  return uVar2;
}


